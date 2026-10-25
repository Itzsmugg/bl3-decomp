// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407133e0 FUN_1407133e0 body=348 status=ok
// SIG undefined FUN_1407133e0(void)

void FUN_1407133e0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x678))();
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
    if (bVar1) goto LAB_140713451;
  }
  lVar2 = 0;
LAB_140713451:
  FWeakObjectPtr::operator=(lVar4 + 0x48,lVar2);
  FWeakObjectPtr::operator=(lVar4 + 0x50,*(undefined8 *)(*param_2 + 0x628));
  *(undefined8 *)(lVar4 + 0x58) = DAT_14622e710;
  *(undefined4 *)(lVar4 + 0x60) = DAT_14622e718;
  *(undefined8 *)(lVar4 + 100) = 0xffffffffffffffff;
  local_res8 = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x6c) = 0xffffffffffffffff;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar4 + 0x74) = (undefined4)local_res8;
  *(undefined4 *)(lVar4 + 0x78) = local_res8._4_4_;
  *(undefined8 *)(lVar4 + 0x80) = DAT_14622e710;
  *(undefined4 *)(lVar4 + 0x88) = DAT_14622e718;
  *(undefined1 *)(lVar4 + 0x7c) = 0;
  *(undefined8 *)(lVar4 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x94) = 0xffffffffffffffff;
  *(undefined4 *)(lVar4 + 0xbc) = 0xff7fffff;
  *(undefined4 *)(lVar4 + 0xc0) = 0xff7fffff;
  *(undefined4 *)(lVar4 + 0xc4) = 0xff7fffff;
  return;
}



// FUNCTION 140713540 FUN_140713540 body=385 status=ok
// SIG undefined FUN_140713540(void)

void FUN_140713540(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((*(char *)(param_1 + 0x198) != '\0') || (*(char *)(param_1 + 0x199) != '\0')) &&
     (lVar1 = *(longlong *)(*param_2 + 0x568), lVar1 != 0)) {
    FUN_142ccda60(param_1 + 0x100,lVar1,local_res8);
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar3 = param_2[1];
    local_68 = FUN_140715010;
    uStack_60 = 0;
    FWeakObjectPtr::operator=(&local_58,*param_2);
    lVar4 = param_2[1];
    lVar5 = param_2[2];
    local_78 = 0;
    local_70 = 0;
    local_50 = lVar4;
    local_48 = lVar5;
    puVar6 = (undefined8 *)operator_new(0x40,&local_78);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_144060920;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      *(undefined4 *)(puVar6 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar6 + 0x14) = local_68._4_4_;
      *(undefined4 *)(puVar6 + 3) = uStack_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_5c;
      *(undefined4 *)(puVar6 + 4) = local_58;
      *(undefined4 *)((longlong)puVar6 + 0x24) = local_54;
      puVar6[5] = lVar4;
      puVar6[6] = lVar5;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[7] = uVar7;
    }
    puVar6 = (undefined8 *)FUN_142bc77b0(lVar1,local_res18,local_res8[0],param_1,&local_78);
    *(undefined8 *)(lVar2 + lVar3 + 0x48) = *puVar6;
  }
  return;
}



// FUNCTION 1407136d0 StartProfileThreadUsage body=5 status=ok
// SIG void StartProfileThreadUsage(long param_1)

void __cdecl AK::MemoryMgr::StartProfileThreadUsage(long param_1)

{
  return;
}



// FUNCTION 140713700 FUN_140713700 body=83 status=ok
// SIG undefined FUN_140713700(void)

void FUN_140713700(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  FWeakObjectPtr::operator=(lVar1 + 0xd0,*(undefined8 *)(*param_2 + 0x630));
  FWeakObjectPtr::operator=(lVar1 + 0x48,*(undefined8 *)(*param_2 + 0x488));
  return;
}



// FUNCTION 140713760 FUN_140713760 body=91 status=ok
// SIG undefined FUN_140713760(void)

void FUN_140713760(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = *(longlong **)(*param_2 + 0x488);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_142e75af0();
    uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x48,uVar4);
  }
  return;
}



// FUNCTION 1407137c0 FUN_1407137c0 body=143 status=ok
// SIG undefined FUN_1407137c0(void)

void FUN_1407137c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  plVar1 = *(longlong **)(*param_2 + 0x488);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e39920();
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    FWeakObjectPtr::operator=(lVar3 + 0x78,uVar2);
    if (*(char *)(param_1 + 0x110) != '\0') {
      uVar2 = UBorder::GetPrivateStaticClass();
      uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      FWeakObjectPtr::operator=(lVar3 + 0x70,uVar2);
    }
  }
  return;
}



// FUNCTION 140713850 FUN_140713850 body=93 status=ok
// SIG undefined FUN_140713850(void)

void FUN_140713850(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_res8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  local_res8 = *(undefined8 *)(*param_2 + 0x568);
  uVar3 = FUN_142de77e0(param_1 + 400,*param_2,0,&local_res8);
  *(undefined4 *)(lVar1 + lVar2 + 0x48) = uVar3;
  return;
}



// FUNCTION 1407138b0 FUN_1407138b0 body=224 status=ok
// SIG undefined FUN_1407138b0(void)

void FUN_1407138b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  undefined8 local_res8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x208) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146858b68) {
      _Init_thread_header(&DAT_146858b68);
      if (DAT_146858b68 == -1) {
        puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnedWarmup",1);
        DAT_146858b60 = *puVar1;
        _Init_thread_footer(&DAT_146858b68);
      }
    }
    *(undefined8 *)(lVar2 + 0x48) = DAT_146858b60;
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar3 = (float)FUN_142de77e0(param_1 + 0x188,*param_2,0,&local_res8);
    *(float *)(lVar2 + 0x50) = fVar3 + *(float *)(param_2 + 3);
  }
  return;
}



// FUNCTION 140713990 FUN_140713990 body=140 status=ok
// SIG undefined FUN_140713990(void)

void FUN_140713990(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar4 = FUN_1429ff160();
  uVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x110,uVar5,uVar4);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = *(longlong **)(*param_2 + 0x488);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1407a6820();
    uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x58,uVar4);
  }
  return;
}



// FUNCTION 140713a20 FUN_140713a20 body=119 status=ok
// SIG undefined FUN_140713a20(void)

void FUN_140713a20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x378))(plVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140713aa0 FUN_140713aa0 body=191 status=ok
// SIG undefined FUN_140713aa0(void)

ulonglong FUN_140713aa0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  uVar2 = *param_2;
  lVar1 = *(longlong *)(uVar2 + 0x618);
  if ((lVar1 != 0) && (*(longlong *)(uVar2 + 0x568) != 0)) {
    uVar2 = FUN_142cc45e0(param_1 + 0x100,*(longlong *)(uVar2 + 0x568),&local_28,local_res18,
                          local_res10);
    if ((char)uVar2 != '\0') {
      local_18 = local_28;
      local_14 = local_24;
      local_10 = local_20;
      if (((local_28 != (float)DAT_14622e710) || (local_24 != DAT_14622e710._4_4_)) ||
         (local_20 != DAT_14622e718)) {
        uVar2 = FUN_142df43c0(lVar1,*(undefined1 *)(param_1 + 0x110),&local_18);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140713b60 FUN_140713b60 body=74 status=ok
// SIG undefined FUN_140713b60(void)

ulonglong FUN_140713b60(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142fa8a40(param_3);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    if (*(longlong *)(uVar1 + 0x628) != 0) {
      uVar1 = FUN_142fae860(*(longlong *)(uVar1 + 0x628),param_3);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140713bb0 FUN_140713bb0 body=49 status=ok
// SIG undefined FUN_140713bb0(void)

undefined8 FUN_140713bb0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    cVar1 = FUN_142fa7fe0(*(longlong *)(*param_2 + 0x628) + 0x9e8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140713bf0 FUN_140713bf0 body=70 status=ok
// SIG undefined FUN_140713bf0(void)

bool FUN_140713bf0(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 local_res8 [4];
  
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    local_res8[0] = *(undefined8 *)(*param_2 + 0x568);
    fVar1 = (float)FUN_142de77e0(param_1 + 0x130,*param_2,0,local_res8);
    return 0.5 <= fVar1;
  }
  return true;
}



// FUNCTION 140713c40 FUN_140713c40 body=52 status=ok
// SIG undefined FUN_140713c40(void)

undefined8 FUN_140713c40(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return 0;
  }
  if ((*(longlong **)(param_1 + 0x148) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x2d0))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140713c80 FUN_140713c80 body=640 status=ok
// SIG undefined FUN_140713c80(void)

undefined8 FUN_140713c80(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  float extraout_XMM0_Da;
  undefined4 uVar5;
  float extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined8 local_res10;
  
  lVar2 = FUN_14070cef0(*param_2);
  if (lVar2 == 0) {
LAB_140713eda:
    uVar4 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2c8) != '\0') {
      if (*(char *)(param_1 + 0x2c0) != '\0') {
        local_res10 = *(undefined8 *)(*param_2 + 0x568);
        FUN_142de77e0(param_1 + 0x240,*param_2,0,&local_res10);
        if (extraout_XMM0_Da < 0.5) goto LAB_140713d5e;
      }
      if (*(char *)(param_1 + 0x100) == '\0') {
        uVar6 = *(undefined4 *)(param_1 + 0x104);
      }
      else {
        uVar6 = 0;
      }
      uVar5 = FUN_140718860(param_1 + 0x110,param_2,0);
      cVar1 = FUN_142cf3520(lVar2,uVar5,0,param_3,uVar6);
      if (cVar1 == '\0') goto LAB_140713eda;
    }
LAB_140713d5e:
    uVar6 = 0x40a00000;
    if (*(char *)(param_1 + 0x488) != '\0') {
      if (*(char *)(param_1 + 0x480) != '\0') {
        local_res10 = *(undefined8 *)(*param_2 + 0x568);
        FUN_142de77e0(param_1 + 0x400,*param_2,0,&local_res10);
        if (extraout_XMM0_Da_00 < 0.5) goto LAB_140713e30;
      }
      uVar5 = 0x40a00000;
      cVar1 = *(char *)(param_1 + 0x100);
      if (*(char *)(param_1 + 0x370) == '\0') {
LAB_140713df8:
        lVar3 = FUN_140760140(*param_2,0);
        if (lVar3 != 0) {
          uVar5 = *(undefined4 *)(lVar3 + 0x1c0);
        }
      }
      else {
        local_res10 = *(undefined8 *)(*param_2 + 0x568);
        uVar5 = FUN_142de77e0(param_1 + 0x2f0,*param_2,0,&local_res10);
        if (cVar1 != '\0') goto LAB_140713df8;
      }
      cVar1 = FUN_142cf3520(lVar2,uVar5,1,param_3 + 0x3c,0);
      if (cVar1 == '\0') goto LAB_140713eda;
    }
LAB_140713e30:
    if ((*(char *)(param_1 + 0x648) != '\0') && (*(char *)(param_1 + 0x530) != '\0')) {
      cVar1 = FUN_140713bf0(param_1 + 0x490,param_2);
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0x530) != '\0') {
          local_res10 = *(undefined8 *)(*param_2 + 0x568);
          uVar6 = FUN_142de77e0(param_1 + 0x4b0,*param_2,0,&local_res10);
        }
        cVar1 = FUN_142cf3520(lVar2,uVar6,2,param_3 + 0x78,0);
        if (cVar1 == '\0') goto LAB_140713eda;
      }
    }
    if ((*(char *)(param_1 + 0x101) == '\0') &&
       (lVar2 = *(longlong *)(param_1 + 0xd8) + param_2[1], *(char *)(lVar2 + 0x48) == '\0')) {
      FUN_140702c30(param_1,param_2,param_3,1);
      *(undefined1 *)(lVar2 + 0x48) = 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 140713f00 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1407869c0();
  return lVar1 == lVar2;
}



// FUNCTION 140713f20 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = USoundNodeEnveloper::StaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 140713f40 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 140713f60 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = UMovieSceneIntegerSection::GetPrivateStaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 140713f80 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 140713fa0 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = USoundNodeEnveloper::StaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 140713fc0 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_140787410();
  return lVar1 == lVar2;
}



// FUNCTION 140713fe0 FUN_140713fe0 body=659 status=ok
// SIG undefined FUN_140713fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140713fe0(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong *local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_108;
  float local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*param_2 + 0x628);
  if (lVar3 == 0) {
    uVar10 = *param_2 & 0xffffffffffffff00;
  }
  else {
    FUN_142fa2d40((undefined8 *)(lVar3 + 0x6e8),&local_130);
    (**(code **)(*param_1 + 0x3a0))(param_1,&local_138,param_2);
    if (local_138 != (longlong *)0x0) {
      plVar8 = (longlong *)FUN_142e20fc0();
      plVar6 = local_138;
      for (plVar4 = local_138; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
        if (plVar4 == plVar8) {
          lVar11 = local_138[0x1f];
          if (lVar11 == 0) {
            (**(code **)(*local_138 + 0x368))(local_138);
            lVar11 = plVar6[0x1f];
            if (lVar11 == 0) break;
          }
          lVar9 = UThrobber::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) goto LAB_1407140f6;
          break;
        }
      }
    }
    lVar11 = 0;
LAB_1407140f6:
    if ((lVar11 != 0) && (*(longlong *)(*param_2 + 0x648) != 0)) {
      FUN_142c85760(*(longlong *)(*param_2 + 0x648),&local_120,local_138);
      local_148 = 0x7f7fffff;
      FUN_142c6c980(local_120,local_68,1,0);
      local_78 = local_58;
      uStack_74 = uStack_54;
      fStack_70 = fStack_50;
      uStack_6c = uStack_4c;
      local_128 = local_128 + fStack_50;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_118 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
    }
    FUN_142f88ab0(&local_108);
    local_98 = *(longlong *)(lVar3 + 0x6b8);
    local_108 = local_130;
    local_fc = (undefined4)param_1[0x67];
    local_100 = local_128;
    local_f8 = *(undefined8 *)(lVar3 + 0x6e8);
    uStack_f0 = *(undefined8 *)(lVar3 + 0x6f0);
    local_e8 = *(int *)(lVar3 + 0x6f8);
    uStack_e4 = *(undefined4 *)(lVar3 + 0x6fc);
    uStack_e0 = *(undefined4 *)(lVar3 + 0x700);
    uStack_dc = *(undefined4 *)(lVar3 + 0x704);
    local_d8 = *(undefined8 *)(lVar3 + 0x708);
    uStack_d0 = *(undefined8 *)(lVar3 + 0x710);
    local_c8 = *(undefined8 *)(lVar3 + 0x718);
    uStack_c0 = *(undefined8 *)(lVar3 + 0x720);
    local_b8 = *(undefined4 *)(lVar3 + 0x728);
    uStack_b4 = *(undefined4 *)(lVar3 + 0x72c);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x730);
    uStack_ac = *(undefined4 *)(lVar3 + 0x734);
    local_a8 = *(undefined8 *)(lVar3 + 0x738);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x740);
    if ((local_e8 == -1) && (local_98 != 0)) {
      local_f8._4_4_ = (float)((ulonglong)local_f8 >> 0x20);
      if ((float)local_f8 <= local_f8._4_4_) {
        local_f8._0_4_ = local_f8._4_4_;
      }
      fVar7 = (float)local_f8;
      local_e8 = FUN_142fa3010(local_98 + 0x738,fVar7);
    }
    uVar10 = FUN_142f9e4d0(&local_108,local_88,0);
  }
  return uVar10;
}



// FUNCTION 1407142c0 FUN_1407142c0 body=493 status=ok
// SIG undefined FUN_1407142c0(void)

undefined8 FUN_1407142c0(longlong param_1,longlong *param_2,byte param_3,undefined8 param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78 [2];
  undefined1 local_68 [4];
  float local_64;
  undefined1 local_58 [4];
  float local_54;
  undefined1 local_48 [48];
  
  uVar4 = 0;
  if ((param_3 != 0) && (lVar1 = FUN_14070cef0(*param_2), lVar1 != 0)) {
    FUN_142ced280(lVar1,local_68,param_3 - 1);
    FUN_142ce6bb0(lVar1,local_58,param_4);
    pfVar2 = (float *)FRotator::Vector(local_58,local_78);
    pfVar3 = (float *)FRotator::Vector(local_68,local_48);
    fVar5 = pfVar3[1] * pfVar2[1] + *pfVar3 * *pfVar2 + pfVar3[2] * pfVar2[2];
    fVar6 = -1.0;
    if ((-1.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
      fVar6 = 1.0;
    }
    fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
    fVar6 = fVar6 * 57.295776;
    if (*(char *)(param_1 + 0x128) == '\0') {
      if (param_3 == 1) {
        fVar5 = *(float *)(lVar1 + 0x1460);
      }
      else {
        fVar5 = fVar6;
        if (param_3 == 2) {
          local_64 = local_64 - local_54;
          fVar6 = (float)(int)(local_64 * 0.0027777778) * 360.0;
          if (ABS(local_64) < ABS(fVar6)) {
            fVar6 = local_64;
          }
          fVar6 = local_64 - fVar6;
          if (fVar6 < 0.0) {
            fVar6 = fVar6 + 360.0;
          }
          fVar5 = *(float *)(lVar1 + 0x148c);
          if (180.0 < fVar6) {
            fVar6 = fVar6 - 360.0;
          }
        }
      }
    }
    else {
      local_78[0] = *(undefined8 *)(*param_2 + 0x568);
      fVar5 = (float)FUN_142de77e0(param_1 + 0xa8,*param_2,0,local_78);
    }
    if (ABS(fVar6) <= ABS(fVar5)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 1407144b0 FUN_1407144b0 body=401 status=ok
// SIG undefined FUN_1407144b0(void)

bool FUN_1407144b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  float local_res8 [2];
  float local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float local_44;
  undefined1 local_38 [16];
  
  lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x48);
  if (((plVar2 != (longlong *)0x0) && (cVar1 = FUN_140761c70(lVar5 + 0x138), cVar1 != '\0')) &&
     (cVar1 = FUN_140761c70(lVar5 + 0x1a8), cVar1 != '\0')) {
    cVar1 = FUN_142cc54f0(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568),&local_58);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)FUN_140757de0(lVar5 + 0x138,local_38);
      local_58 = *puVar3;
      local_50 = *(undefined4 *)(puVar3 + 1);
    }
    cVar1 = FUN_142cc40f0(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568),local_res8);
    if (((cVar1 == '\0') &&
        (local_res8[0] = *(float *)(param_1 + 0x128), *(int *)(lVar5 + 0x29c) == 3)) &&
       (lVar4 = FWeakObjectPtr::Get(lVar5 + 0x58), lVar4 != 0)) {
      local_res8[0] = *(float *)(lVar4 + 0x704);
    }
    (**(code **)(*plVar2 + 0x578))(plVar2,local_res10,local_res18);
    local_res8[0] = local_res8[0] + local_res10[0];
    FUN_140757de0(lVar5 + 0x1a8,&local_48);
    return (local_44 - local_58._4_4_) * (local_44 - local_58._4_4_) +
           (local_48 - (float)local_58) * (local_48 - (float)local_58) <=
           local_res8[0] * local_res8[0];
  }
  return false;
}



// FUNCTION 140714650 FUN_140714650 body=125 status=ok
// SIG undefined FUN_140714650(void)

undefined1 FUN_140714650(longlong param_1)

{
  if ((-(float)DAT_14622e710 < *(float *)(param_1 + 4)) &&
     (*(float *)(param_1 + 4) < (float)DAT_14622e710)) {
    if ((-DAT_14622e710._4_4_ < *(float *)(param_1 + 8)) &&
       (*(float *)(param_1 + 8) < DAT_14622e710._4_4_)) {
      if (((-DAT_14622e718 < *(float *)(param_1 + 0xc)) &&
          (*(float *)(param_1 + 0xc) < DAT_14622e718)) &&
         (((-1 < *(int *)(param_1 + 0x10) && (-1 < *(int *)(param_1 + 0x14))) ||
          ((-1 < *(int *)(param_1 + 0x18) && (-1 < *(int *)(param_1 + 0x1c))))))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1407146d0 FUN_1407146d0 body=269 status=ok
// SIG undefined FUN_1407146d0(void)

bool FUN_1407146d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((-(float)DAT_14622e710 < *(float *)(lVar2 + 0x58)) &&
     (*(float *)(lVar2 + 0x58) < (float)DAT_14622e710)) {
    if ((-DAT_14622e710._4_4_ < *(float *)(lVar2 + 0x5c)) &&
       (*(float *)(lVar2 + 0x5c) < DAT_14622e710._4_4_)) {
      if ((-DAT_14622e718 < *(float *)(lVar2 + 0x60)) && (*(float *)(lVar2 + 0x60) < DAT_14622e718))
      {
        lVar1 = FWeakObjectPtr::Get(lVar2 + 0x50);
        if (lVar1 != 0) {
          FUN_142fa2d40(lVar1 + 0x6e8,&local_18);
          local_14 = local_14 - *(float *)(lVar2 + 0x5c);
          local_18 = local_18 - *(float *)(lVar2 + 0x58);
          local_10 = local_10 - *(float *)(lVar2 + 0x60);
          fVar3 = *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x110);
          return local_14 * local_14 + local_18 * local_18 + local_10 * local_10 <= fVar3 * fVar3;
        }
      }
    }
  }
  return false;
}



// FUNCTION 1407147e0 FUN_1407147e0 body=121 status=ok
// SIG undefined FUN_1407147e0(void)

undefined8 FUN_1407147e0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1406efcd0();
  plVar4 = *(longlong **)(param_1 + 0x148);
  uVar2 = 0;
  uVar3 = (longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x150) < plVar4) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        uVar1 = (**(code **)(*(longlong *)*plVar4 + 0x308))();
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return uVar1;
}



// FUNCTION 140714860 FUN_140714860 body=50 status=ok
// SIG undefined FUN_140714860(void)

void FUN_140714860(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1406efcd0();
  plVar1 = *(longlong **)(param_1 + 0x148);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140714885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x308))(plVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1407148a0 FUN_1407148a0 body=350 status=ok
// SIG undefined FUN_1407148a0(void)

void FUN_1407148a0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  cVar3 = FUN_1407c3030(param_1 + 0x73);
  if ((cVar3 == '\0') && ((param_3 == '\0' || ((*(byte *)(param_1 + 0x3c) & 1) == 0)))) {
    cVar3 = FUN_1407c3030(param_1 + 0x86);
    FUN_142dafbc0(param_1 + 0x86,param_2);
    if (cVar3 == '\0') {
      cVar3 = FUN_1407c3030(param_1 + 0x86);
      if (cVar3 != '\0') {
        (**(code **)(param_1[0x2f] + 0x10))(param_1 + 0x2f,2);
        if (param_3 != '\0') {
          lVar1 = *param_1;
          *(undefined1 *)(param_1 + 0x99) = 1;
          uVar4 = FName::ToString(param_2,local_18);
          (**(code **)(lVar1 + 0x408))(param_1,uVar4);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
          lVar1 = param_1[0x23];
          if (lVar1 != 0) {
            lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (*(longlong *)(lVar1 + 0x628) != 0)) {
              FUN_142f97b30();
            }
          }
        }
      }
    }
    return;
  }
  FUN_1406fdab0(param_1 + 0x3d,param_2);
  return;
}



// FUNCTION 140714a00 FUN_140714a00 body=476 status=ok
// SIG undefined FUN_140714a00(void)

void FUN_140714a00(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  longlong *local_20;
  
  lVar4 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  FUN_142cbcc90(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x170,*(undefined8 *)(*param_2 + 0x568));
  iVar1 = *(int *)(lVar4 + 0x298);
  if ((iVar1 == 2) ||
     (((iVar1 == 1 || (*(char *)(param_1 + 0x144) != '\0')) &&
      (cVar2 = FUN_14076b320(param_2[1] + 0x138 + *(longlong *)(param_1 + 0xd8),iVar1 == 1),
      cVar2 != '\0')))) {
    fVar5 = *(float *)(lVar4 + 0x2a4);
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
    local_28 = param_1;
    local_20 = param_2;
    cVar2 = FUN_1406fdb70(fVar5 * *(float *)(param_1 + 0x120),lVar4 + 0x138,&local_28,1);
    if (*(int *)(lVar4 + 0x29c) == 3) {
      return;
    }
    if (cVar2 != '\0') {
      puVar3 = (undefined8 *)FUN_140757de0(lVar4 + 0x138,&local_28);
      local_48 = *puVar3;
      local_40 = *(undefined4 *)(puVar3 + 1);
      uVar6 = FUN_140753140(lVar4 + 0x138);
      cVar2 = FUN_140707b20(param_1,param_2,&local_48,&local_38,uVar6);
      if (cVar2 != '\0') {
        cVar2 = FUN_1407144b0(param_1,param_2);
        if (cVar2 == '\0') {
          *(undefined4 *)(lVar4 + 0x29c) = 1;
          FUN_142cd0820(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568),
                        *(undefined4 *)(param_1 + 0x128));
          local_48 = local_38;
          local_40 = local_30;
          FUN_142cd0df0(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568),&local_48);
          return;
        }
        goto LAB_140714b51;
      }
    }
    FUN_14071cd80(param_1,param_2);
  }
  else {
LAB_140714b51:
    FUN_140712fa0(param_1,param_2);
  }
  return;
}



// FUNCTION 140714be0 FUN_140714be0 body=34 status=ok
// SIG undefined FUN_140714be0(void)

undefined1 FUN_140714be0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x158) == '\x03') {
    cVar1 = FUN_1406f0680();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140714c10 FUN_140714c10 body=175 status=ok
// SIG undefined FUN_140714c10(void)

void FUN_140714c10(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((byte)(param_4 - 3U) < 2) {
    if (((param_2 == 0) || (plVar1 = *(longlong **)(param_3 + 8), plVar1 == (longlong *)0x0)) ||
       (*plVar1 != 0x4149416374447400)) {
      cVar2 = '\x04';
    }
    else {
      cVar2 = *(char *)(*(longlong *)(param_2 + 0xd8) + 0x29 + (longlong)plVar1);
      if ((cVar2 == '\x02') && (*(char *)(param_2 + 0xd3) != '\0')) goto LAB_140714c5b;
    }
  }
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      UGameplayTask::EndTask(param_1);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x88,0);
      return;
    }
    if ((byte)(cVar2 - 3U) < 2) {
      UGameplayTask::EndTask(param_1);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x98,0);
      return;
    }
    return;
  }
LAB_140714c5b:
  UGameplayTask::EndTask(param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x78,0);
  return;
}



// FUNCTION 140714cc0 FUN_140714cc0 body=601 status=ok
// SIG undefined FUN_140714cc0(void)

void FUN_140714cc0(longlong param_1,longlong *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  float fVar8;
  undefined8 local_res8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar4 = 0;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  if (*(char *)(*(longlong *)(lVar4 + 0xd8) + 0x41 + lVar2) == '\0') {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar4 + 0x38) < DAT_146858b78) {
      _Init_thread_header(&DAT_146858b78);
      if (DAT_146858b78 == -1) {
        puVar5 = (undefined8 *)FName::FName(&local_res8,L"SucceededCooldown",1);
        DAT_146858b70 = *puVar5;
        _Init_thread_footer(&DAT_146858b78);
      }
    }
    if (*(int *)(lVar4 + 0x38) < DAT_146858b88) {
      _Init_thread_header(&DAT_146858b88);
      if (DAT_146858b88 == -1) {
        puVar5 = (undefined8 *)FName::FName(&local_res8,L"FailedCooldown",1);
        DAT_146858b80 = *puVar5;
        _Init_thread_footer(&DAT_146858b88);
      }
    }
    if (*(int *)(lVar4 + 0x38) < DAT_146858b98) {
      _Init_thread_header(&DAT_146858b98);
      if (DAT_146858b98 == -1) {
        puVar5 = (undefined8 *)FName::FName(&local_res8,L"AbortedCooldown",1);
        DAT_146858b90 = *puVar5;
        _Init_thread_footer(&DAT_146858b98);
      }
    }
    if (param_3 == '\x01') {
      lVar4 = param_1 + 800;
      bVar7 = *(char *)(param_1 + 0x3a0) == '\0';
      uVar6 = DAT_146858b70;
    }
    else if (param_3 == '\x02') {
      lVar4 = param_1 + 0x3a8;
      bVar7 = *(char *)(param_1 + 0x428) == '\0';
      uVar6 = DAT_146858b80;
    }
    else {
      if (1 < (byte)(param_3 - 3U)) goto LAB_140714e11;
      lVar4 = param_1 + 0x430;
      bVar7 = *(char *)(param_1 + 0x4b0) == '\0';
      uVar6 = DAT_146858b90;
    }
    if (bVar7) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar8 = (float)FUN_142de77e0(lVar4,*param_2,0,&local_res8);
      fVar1 = *(float *)(param_2 + 3);
      *(undefined8 *)(lVar2 + 0x48 + lVar3) = uVar6;
      *(float *)(lVar2 + 0x50 + lVar3) = fVar1 + fVar8;
      return;
    }
  }
LAB_140714e11:
  *(undefined8 *)(lVar2 + 0x48 + lVar3) = 0;
  *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
  return;
}



// FUNCTION 140714f20 FUN_140714f20 body=96 status=ok
// SIG undefined FUN_140714f20(void)

undefined8 FUN_140714f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 local_38 [48];
  
  if (*(longlong *)(param_4 + 8) != 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_4);
    if ((cVar1 != '\0') && (**(longlong **)(param_4 + 8) == 0x4149416374447400)) {
      FUN_1406d4910(local_38,param_4);
      FUN_1406f7e60(param_1,local_38,4);
    }
  }
  return 1;
}



// FUNCTION 140714f80 FUN_140714f80 body=131 status=ok
// SIG undefined FUN_140714f80(void)

undefined8 FUN_140714f80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 local_38 [8];
  longlong local_30;
  float local_20;
  
  if (*(longlong *)(param_4 + 8) != 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_4);
    if ((cVar1 != '\0') && (**(longlong **)(param_4 + 8) == 0x4149416374447400)) {
      FUN_1406d4910(local_38,param_4);
      *(float *)(*(longlong *)(param_1 + 0xd8) + 0xb0 + local_30) =
           local_20 + *(float *)(param_1 + 0x11c);
      FUN_1406f7e60(param_1,local_38,4);
    }
  }
  return 1;
}



// FUNCTION 140715010 FUN_140715010 body=198 status=ok
// SIG undefined FUN_140715010(void)

undefined8 FUN_140715010(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  ulonglong local_38;
  longlong local_30;
  
  if (*(longlong *)(param_4 + 8) != 0) {
    cVar2 = FWeakObjectPtr::IsValid(param_4);
    if ((cVar2 != '\0') && (**(longlong **)(param_4 + 8) == 0x4149416374447400)) {
      FUN_1406d4910(&local_38,param_4);
      if (*(char *)(param_1 + 0x198) != '\0') {
        if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
          lVar3 = *(longlong *)(param_1 + 0x20);
        }
        else {
          lVar3 = 0;
        }
        if ((lVar3 != 0) && (*(char *)(*(longlong *)(lVar3 + 0xd8) + 0x28 + local_30) == '\x02')) {
          FUN_1406f7e60(lVar3,&local_38,4);
        }
      }
      if (*(char *)(param_1 + 0x199) != '\0') {
        if (*(longlong *)(local_38 + 0x608) != 0) {
          pbVar1 = (byte *)(*(longlong *)(local_38 + 0x608) + 0x218);
          *pbVar1 = *pbVar1 | 1;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140715100 FUN_140715100 body=217 status=ok
// SIG undefined FUN_140715100(void)

void FUN_140715100(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  FUN_1406f1db0();
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 8);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar7 = 0;
    do {
      if ((iVar6 != *(int *)(lVar1 + lVar2 + 0x50)) &&
         (lVar3 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x148)), lVar3 != 0)) {
        lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(undefined4 *)(*(longlong *)(lVar3 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8)) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 1407151e0 FUN_1407151e0 body=55 status=ok
// SIG undefined FUN_1407151e0(void)

void FUN_1407151e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_1406f1db0();
  if (*(char *)(param_1 + 0x160) != '\0') {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8) + 0x50);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 140715220 FUN_140715220 body=79 status=ok
// SIG undefined FUN_140715220(void)

void FUN_140715220(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1406f1df0();
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 300 + *(longlong *)(param_2 + 8));
  if (lVar1 != 0) {
    FUN_142dafbc0(lVar1 + 0x8b0,&DAT_1468588a8);
  }
  return;
}



// FUNCTION 140715270 FUN_140715270 body=62 status=ok
// SIG undefined FUN_140715270(void)

void FUN_140715270(longlong param_1,longlong param_2)

{
  FUN_1406f1df0();
  FUN_14071be40(param_1,param_2,*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8) + 0x9c);
  return;
}



// FUNCTION 1407152b0 FUN_1407152b0 body=315 status=ok
// SIG undefined FUN_1407152b0(void)

void FUN_1407152b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  
  FUN_1406f1df0();
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 != 0) {
    FUN_142ccda60(param_1 + 0x110,lVar1,local_res8);
    local_58 = FUN_140714f20;
    uStack_50 = 0;
    FWeakObjectPtr::operator=(&local_48,*param_2);
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    local_68 = 0;
    local_60 = 0;
    local_40 = lVar2;
    local_38 = lVar3;
    puVar4 = (undefined8 *)operator_new(0x40,&local_68);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144060920;
      FWeakObjectPtr::operator=(puVar4 + 1,param_1);
      *(undefined4 *)(puVar4 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_58._4_4_;
      *(undefined4 *)(puVar4 + 3) = uStack_50;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_4c;
      *(undefined4 *)(puVar4 + 4) = local_48;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_44;
      puVar4[5] = lVar2;
      puVar4[6] = lVar3;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[7] = uVar5;
    }
    FUN_142bc77b0(lVar1,local_res10,local_res8[0],param_1,&local_68);
  }
  return;
}



// FUNCTION 1407153f0 FUN_1407153f0 body=123 status=ok
// SIG undefined FUN_1407153f0(void)

void FUN_1407153f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1406f1df0();
  lVar3 = FUN_142ddddc0(*param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_142dcd660(lVar3,0);
    FUN_142ddbcf0(lVar3,1,uVar4);
    if (*(char *)(param_1 + 0x100) != '\0') {
      lVar1 = *(longlong *)(param_1 + 0xd8);
      lVar2 = param_2[1];
      uVar4 = FUN_142dcd660(lVar3,0);
      FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x48,uVar4);
    }
  }
  return;
}



// FUNCTION 140715470 FUN_140715470 body=270 status=ok
// SIG undefined FUN_140715470(void)

void FUN_140715470(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined8 local_res8;
  
  FUN_1406f1df0();
  lVar2 = param_2[1];
  lVar5 = 0;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0x208) != '\0') {
    lVar4 = lVar5;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
    if (*(char *)(*(longlong *)(lVar4 + 0xd8) + 0x41 + lVar2) == '\0') {
      *(undefined4 *)(lVar2 + 0x48 + lVar3) = 1;
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar6 = (float)FUN_142de77e0(param_1 + 0x188,*param_2,0,&local_res8);
      *(int *)(lVar2 + 0x4c + lVar3) = (int)ROUND(fVar6 * 2.0 + 0.5) >> 1;
    }
    else {
      piVar1 = (int *)(lVar2 + 0x48 + lVar3);
      *piVar1 = *piVar1 + 1;
    }
  }
  if (*(char *)(param_1 + 0x290) != '\0') {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
    if (*(char *)(*(longlong *)(lVar5 + 0xd8) + 0x41 + param_2[1]) == '\0') {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar6 = (float)FUN_142de77e0(param_1 + 0x210,*param_2,0,&local_res8);
      *(float *)(lVar2 + 0x54 + lVar3) = fVar6;
      *(float *)(lVar2 + 0x50 + lVar3) = fVar6 + *(float *)(param_2 + 3);
    }
  }
  return;
}



// FUNCTION 140715580 FUN_140715580 body=398 status=ok
// SIG undefined FUN_140715580(void)

void FUN_140715580(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffff98;
  code *local_58;
  undefined4 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  
  FUN_1406f1df0();
  lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  cVar1 = FWeakObjectPtr::IsValid(lVar5 + 0xb8);
  if ((cVar1 != '\0') && (local_res8 = 0, *(longlong *)(lVar5 + 0xc0) != 0)) {
    uVar2 = FWeakObjectPtr::Get(lVar5 + 0xb8);
    uVar3 = FWeakObjectPtr::Get(lVar5 + 0xd0);
    cVar1 = FUN_140767250(uVar3,uVar2,*(undefined8 *)(lVar5 + 0xc0),1,
                          in_stack_ffffffffffffff98 & 0xffffffffffffff00);
    if (cVar1 != '\0') {
      lVar4 = FWeakObjectPtr::Get(lVar5 + 0xd0);
      FUN_14075f9e0(lVar4 + 0x1e8,&local_58,&local_res8);
      FUN_14076b860(lVar5 + 0x50,&local_58);
    }
  }
  FUN_14071c370(param_1,param_2);
  lVar5 = *(longlong *)(*param_2 + 0x568);
  if (lVar5 != 0) {
    FUN_142ccda60(param_1 + 0x100,lVar5,&local_res8);
    local_58 = FUN_140714f80;
    uStack_50 = 0;
    FWeakObjectPtr::operator=(local_38,*param_2);
    local_30 = param_2[1];
    local_28 = param_2[2];
    uVar2 = FUN_1406fe2d0(local_48,param_1,&local_58,local_38);
    FUN_142bc77b0(lVar5,local_res10,local_res8 & 0xff,param_1,uVar2);
  }
  return;
}



// FUNCTION 140715710 FUN_140715710 body=80 status=ok
// SIG undefined FUN_140715710(void)

void FUN_140715710(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x48 + *(longlong *)(param_2 + 8));
  if (lVar1 != 0) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x108) != '\0') {
      uVar2 = 3;
    }
    FUN_142ddc610(lVar1,uVar2,*(undefined8 *)(param_1 + 0x100));
    return;
  }
  return;
}



// FUNCTION 140715760 FUN_140715760 body=71 status=ok
// SIG undefined FUN_140715760(void)

void FUN_140715760(undefined8 param_1,longlong *param_2)

{
  if (*(longlong *)(*param_2 + 0x608) != 0) {
    FUN_142dafbc0(*(longlong *)(*param_2 + 0x608) + 0x398,&DAT_1468589b8);
  }
  FUN_1406f1df0(param_1,param_2);
  return;
}



// FUNCTION 1407157b0 FUN_1407157b0 body=161 status=ok
// SIG undefined FUN_1407157b0(void)

void FUN_1407157b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined8 local_res8;
  
  FUN_1406f1df0();
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x200) != '\0') {
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(param_1 + 0x100,*param_2,0,&local_res8);
    *(float *)(lVar1 + 0x48) = fVar2 + *(float *)(param_2 + 3);
  }
  if (*(char *)(param_1 + 0x201) != '\0') {
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(param_1 + 0x180,*param_2,0,&local_res8);
    *(float *)(lVar1 + 0x4c) = fVar2 + *(float *)(param_2 + 3);
  }
  return;
}



// FUNCTION 140715860 FUN_140715860 body=205 status=ok
// SIG undefined FUN_140715860(void)

void FUN_140715860(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined8 local_res8;
  
  FUN_1406f1df0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  lVar1 = param_2[1];
  if (*(char *)(*(longlong *)(lVar2 + 0xd8) + 0x41 + lVar1) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    if (*(char *)(param_1 + 0x538) != '\0') {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar3 = (float)FUN_142de77e0(param_1 + 0x4b8,*param_2,0,&local_res8);
      *(float *)(lVar1 + 0x54 + lVar2) = fVar3 + *(float *)(param_2 + 3);
    }
    if (*(char *)(param_1 + 0x5c0) != '\0') {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar3 = (float)FUN_142de77e0(param_1 + 0x540,*param_2,0,&local_res8);
      *(float *)(lVar1 + 0x58 + lVar2) = fVar3 + *(float *)(param_2 + 3);
    }
  }
  return;
}



// FUNCTION 140715960 FUN_140715960 body=25 status=ok
// SIG undefined FUN_140715960(void)

void FUN_140715960(longlong param_1,longlong param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8)) = 0xffffffff;
  FUN_1406f1fd0();
  return;
}



// FUNCTION 140715980 FUN_140715980 body=45 status=ok
// SIG undefined FUN_140715980(void)

void FUN_140715980(undefined8 param_1,undefined8 param_2)

{
  FUN_1406f2080();
  FUN_14070a240(param_1,param_2,1);
  return;
}



// FUNCTION 1407159b0 FUN_1407159b0 body=122 status=ok
// SIG undefined FUN_1407159b0(void)

void FUN_1407159b0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  
  FUN_140715c40();
  plVar1 = (longlong *)
           FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 300 + *(longlong *)(param_2 + 8));
  if (plVar1 != (longlong *)0x0) {
    FUN_142dbb5d0(plVar1 + 0x116,&DAT_1468588a8);
    if (param_3 == '\x01') {
      (**(code **)(*plVar1 + 0x5a0))(plVar1,2);
    }
  }
  return;
}



// FUNCTION 140715a30 FUN_140715a30 body=86 status=ok
// SIG undefined FUN_140715a30(void)

void FUN_140715a30(longlong param_1,longlong *param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + 0x111) != '\0') {
    FUN_142cbcc90(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568));
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140715a90 FUN_140715a90 body=101 status=ok
// SIG undefined FUN_140715a90(void)

void FUN_140715a90(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x298 + param_2[1]);
  if (lVar1 != 0) {
    FUN_140746620(lVar1,*(undefined8 *)(*param_2 + 0x488));
  }
  FUN_1406f2b20(param_1,param_2,param_3);
  return;
}



// FUNCTION 140715b00 FUN_140715b00 body=172 status=ok
// SIG undefined FUN_140715b00(void)

void FUN_140715b00(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1406f2080();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    FUN_142f97d20(*(longlong *)(*param_2 + 0x628),*(undefined4 *)(lVar3 + 0x58));
    *(undefined4 *)(lVar3 + 0x58) = DAT_146690efc;
  }
  if (param_3 == '\x01') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 100 + param_2[1]);
    if (*(longlong *)(*param_2 + 0x628) != 0) {
      cVar1 = FUN_142fa8480();
      if (cVar1 != '\0') {
        (**(code **)(*plVar2 + 0x5a0))(plVar2,3);
      }
    }
  }
  return;
}



// FUNCTION 140715bb0 FUN_140715bb0 body=129 status=ok
// SIG undefined FUN_140715bb0(void)

void FUN_140715bb0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  FUN_140717670(param_1,param_2,1);
  FUN_142cbcc90(param_1 + 0x298,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x288,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x278,*(undefined8 *)(*param_2 + 0x568));
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140715c40 FUN_140715c40 body=153 status=ok
// SIG undefined FUN_140715c40(void)

void FUN_140715c40(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18 [2];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((undefined8 *)(lVar4 + 0x48) != local_18) {
    *(undefined8 *)(lVar4 + 0x48) = 0;
    plVar3 = *(longlong **)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  *(undefined8 *)(lVar4 + 0x120) = 0;
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140715ce0 FUN_140715ce0 body=140 status=ok
// SIG undefined FUN_140715ce0(void)

void FUN_140715ce0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  
  FUN_1406f2080();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    FUN_142f97d20(*(longlong *)(*param_2 + 0x628),*(undefined4 *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = DAT_146690efc;
  }
  if (param_3 == '\x01') {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 100 + param_2[1]);
    if (lVar1 != 0) {
      FUN_142cf3f20(lVar1,1);
    }
  }
  return;
}



// FUNCTION 140715d70 FUN_140715d70 body=83 status=ok
// SIG undefined FUN_140715d70(void)

void FUN_140715d70(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  FUN_1407177f0();
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    FUN_142bcd510(*(longlong *)(*param_2 + 0x568),param_1);
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140715dd0 FUN_140715dd0 body=153 status=ok
// SIG undefined FUN_140715dd0(void)

void FUN_140715dd0(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18 [2];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((undefined8 *)(lVar4 + 0x50) != local_18) {
    *(undefined8 *)(lVar4 + 0x50) = 0;
    plVar3 = *(longlong **)(lVar4 + 0x58);
    *(undefined8 *)(lVar4 + 0x58) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined2 *)(lVar4 + 0x4c) = 0;
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140715e70 FUN_140715e70 body=51 status=ok
// SIG undefined FUN_140715e70(void)

void FUN_140715e70(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_1406f2080();
  lVar1 = FUN_142ddddc0(*param_2);
  if (lVar1 != 0) {
    FUN_142ddbcf0(lVar1,1,0);
    return;
  }
  return;
}



// FUNCTION 140715eb0 FUN_140715eb0 body=75 status=ok
// SIG undefined FUN_140715eb0(void)

void FUN_140715eb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_1406f2080();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    FUN_142f97d20(*(longlong *)(*param_2 + 0x628),*(undefined4 *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = DAT_146690efc;
  }
  return;
}



// FUNCTION 140715f00 FUN_140715f00 body=180 status=ok
// SIG undefined FUN_140715f00(void)

void FUN_140715f00(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  FUN_1406f2080();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    FUN_142f97d20(*(longlong *)(*param_2 + 0x628),*(undefined4 *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = DAT_146690efc;
  }
  FUN_142f96fa0(param_2[1] + *(longlong *)(param_1 + 0xd8) + 0x70);
  FUN_1406f2080(param_1,param_2,param_3);
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    lVar1 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    FUN_142f97d20(*(longlong *)(*param_2 + 0x628),*(undefined4 *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = DAT_146690efc;
  }
  return;
}



// FUNCTION 140715fe0 FUN_140715fe0 body=139 status=ok
// SIG undefined FUN_140715fe0(void)

void FUN_140715fe0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x48 + param_2[1]) = 0;
  if ((*(char *)(param_1 + 0x649) == '\0') && (lVar1 = FUN_14070cef0(*param_2), lVar1 != 0)) {
    cVar2 = '\0';
    do {
      FUN_142ce6360(lVar1,cVar2);
      cVar2 = cVar2 + '\x01';
    } while (cVar2 != '\x03');
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140716070 FUN_140716070 body=278 status=ok
// SIG undefined FUN_140716070(void)

void FUN_140716070(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0xd0);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(lVar4 + 0xd0);
    cVar1 = FSimulationThreadWorker::Init(lVar2 + 0x1e8);
    if (cVar1 != '\0') {
      uVar3 = FWeakObjectPtr::Get(lVar4 + 0xd0);
      FUN_14076d250(uVar3,param_3 == '\x01');
      local_res8 = 0;
      *(float *)(lVar4 + 0xb0) = *(float *)(param_1 + 0x11c) + *(float *)(param_2 + 3);
      *(undefined4 *)(lVar4 + 0xb8) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0xbc) = 0;
      *(undefined8 *)(lVar4 + 0xc0) = 0;
    }
  }
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    FUN_142bcd510(*(longlong *)(*param_2 + 0x568),param_1);
  }
  cVar1 = FWeakObjectPtr::IsValid(lVar4 + 200);
  if (cVar1 != '\0') {
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(lVar4 + 200) = (undefined4)local_res8;
    *(undefined4 *)(lVar4 + 0xcc) = local_res8._4_4_;
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140716190 FUN_140716190 body=73 status=ok
// SIG undefined FUN_140716190(void)

void FUN_140716190(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x48 + *(longlong *)(param_2 + 8));
  if (lVar1 != 0) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x108) != '\0') {
      uVar2 = 3;
    }
    FUN_142dc7810(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1407161e0 FUN_1407161e0 body=112 status=ok
// SIG undefined FUN_1407161e0(void)

void FUN_1407161e0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  
  FUN_140715c40();
  if (param_3 == '\x01') {
    plVar1 = (longlong *)
             FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 300 + *(longlong *)(param_2 + 8));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x5a0))(plVar1,5);
      FUN_142cf3f20(plVar1,0);
    }
  }
  return;
}



// FUNCTION 140716250 FUN_140716250 body=190 status=ok
// SIG undefined FUN_140716250(void)

void FUN_140716250(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(longlong *)(*param_2 + 0x608) != 0) {
    FUN_142dbb5d0(*(longlong *)(*param_2 + 0x608) + 0x398,&DAT_1468589b8);
  }
  lVar1 = FWeakObjectPtr::Get(lVar2 + 0x78);
  if (lVar1 != 0) {
    FUN_142dbb5d0(lVar1 + 0x8b0,&DAT_1468589b8);
  }
  FUN_14070a990(param_1,param_2);
  FUN_1406f2080(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x114) != '\0') {
    FUN_142cbcc90(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568));
  }
  *(undefined1 *)(lVar2 + 0x6d) = 0;
  return;
}



// FUNCTION 140716310 FUN_140716310 body=233 status=ok
// SIG undefined FUN_140716310(void)

void FUN_140716310(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x224) == '\0') {
    return;
  }
  lVar2 = FUN_14075eaf0(*param_2);
  if (lVar2 == 0) {
    return;
  }
  if (param_3 == '\x01') {
    cVar1 = *(char *)(param_1 + 0x221);
LAB_14071637f:
    if (cVar1 != '\0') {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      uVar4 = FUN_142de77e0(param_1 + 0x188,*(undefined8 *)(*param_2 + 0x488),0,&local_res8);
      goto LAB_1407163b5;
    }
  }
  else {
    if (param_3 == '\x02') {
      cVar1 = *(char *)(param_1 + 0x222);
      goto LAB_14071637f;
    }
    if ((byte)(param_3 - 3U) < 2) {
      cVar1 = *(char *)(param_1 + 0x223);
      goto LAB_14071637f;
    }
  }
  uVar4 = 0;
LAB_1407163b5:
  uVar3 = FUN_140712d90(param_1 + 0x100,param_2);
  FUN_140754d30(lVar2 + 0x48,*(undefined8 *)(param_1 + 0x208),*param_2,uVar4,uVar3);
  return;
}



// FUNCTION 140716400 FUN_140716400 body=93 status=ok
// SIG undefined FUN_140716400(void)

void FUN_140716400(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_res8;
  
  FUN_1406f2080();
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  local_res8 = *(undefined8 *)(*param_2 + 0x568);
  uVar3 = FUN_142de77e0(param_1 + 400,*param_2,0,&local_res8);
  *(undefined4 *)(lVar1 + lVar2 + 0x48) = uVar3;
  return;
}



// FUNCTION 140716460 FUN_140716460 body=223 status=ok
// SIG undefined FUN_140716460(void)

void FUN_140716460(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_148 [304];
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar1 = FWeakObjectPtr::Get(lVar3 + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_1407265c0(local_148);
    FUN_140743c90(lVar1,uVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar3 + 0x60) = local_res8;
  *(undefined4 *)(lVar3 + 100) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar3 + 0x48) = local_res8;
  *(undefined4 *)(lVar3 + 0x4c) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar3 + 0x50) = local_res8;
  *(undefined4 *)(lVar3 + 0x54) = local_resc;
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140716540 FUN_140716540 body=178 status=ok
// SIG undefined FUN_140716540(void)

void FUN_140716540(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1406f2080();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    FUN_142f97d20(*(longlong *)(*param_2 + 0x628),*(undefined4 *)(lVar2 + 0x58));
    *(undefined4 *)(lVar2 + 0x58) = DAT_146690efc;
  }
  uVar1 = 0;
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x60 + param_2[1]);
  if (lVar2 != 0) {
    FUN_14076de60(lVar2,*(undefined8 *)(*param_2 + 0x488));
    uVar1 = FUN_14076aaa0(lVar2);
  }
  FUN_142cd0a60(param_1 + 0x240,*(undefined8 *)(*param_2 + 0x568),uVar1);
  return;
}



// FUNCTION 140716600 FUN_140716600 body=151 status=ok
// SIG undefined FUN_140716600(void)

void FUN_140716600(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  uchar *puVar2;
  
  lVar1 = *(longlong *)(*param_2 + 0x5c8);
  if (lVar1 != 0) {
    FUN_142ccd270(lVar1);
    lVar1 = *(longlong *)(lVar1 + 0x900);
    if ((lVar1 != 0) && (*(longlong *)(*param_2 + 0x630) != 0)) {
      puVar2 = AK::WriteBytesMem::Bytes((WriteBytesMem *)(*(longlong *)(*param_2 + 0x630) + 0x1e8));
      if ((puVar2 != (uchar *)0x0) && (puVar2[0x734] != '\0')) {
        FUN_142cf3f20(lVar1,1);
      }
    }
  }
  FUN_140715c40(param_1,param_2,param_3);
  return;
}



// FUNCTION 1407166a0 FUN_1407166a0 body=205 status=ok
// SIG undefined FUN_1407166a0(void)

void FUN_1407166a0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  pcVar1 = (char *)(lVar4 + 0x4a);
  pcVar3 = pcVar1;
  if (pcVar1 <= (char *)(lVar4 + 0x54U)) {
    do {
      if ((-1 < *pcVar3) && (lVar2 = FUN_140760140(*param_2,(int)*pcVar3), lVar2 != 0)) {
        *(undefined1 *)(lVar2 + 0x85c) = 0;
        FUN_140784800(lVar2,0);
        UEditableText::HandleOnTextChanged(lVar2);
        FUN_140784ab0(lVar2,1);
      }
      pcVar3 = pcVar3 + 1;
    } while ((longlong)pcVar3 - (longlong)pcVar1 != 10);
  }
  *(undefined2 *)(lVar4 + 0x48) = 0;
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140716770 FUN_140716770 body=123 status=ok
// SIG undefined FUN_140716770(void)

void FUN_140716770(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = FUN_14070cef0(*param_2);
  if (lVar1 != 0) {
    cVar2 = '\0';
    do {
      FUN_142ce6360(lVar1,cVar2);
      cVar2 = cVar2 + '\x01';
    } while (cVar2 != '\x03');
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1407167f0 FUN_1407167f0 body=357 status=ok
// SIG undefined FUN_1407167f0(void)

void FUN_1407167f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res8;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar4 = FWeakObjectPtr::Get(lVar8 + 0x298);
  if (*(longlong *)(*param_2 + 0x568) == 0) {
    lVar7 = 0;
  }
  else {
    local_res8 = 0;
    FUN_142cc3f20(param_1 + 0x1b8,*(longlong *)(*param_2 + 0x568),&local_res8);
    lVar7 = local_res8;
    if (local_res8 != 0) {
      lVar5 = ACameraActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        cVar3 = thunk_FUN_140730990(lVar7,*(undefined8 *)(*param_2 + 0x488));
        if (cVar3 == '\0') {
          lVar7 = 0;
          FUN_142cbcc90(param_1 + 0x1b8,*(undefined8 *)(*param_2 + 0x568));
        }
        goto LAB_1407168cd;
      }
    }
    lVar7 = 0;
  }
LAB_1407168cd:
  plVar1 = *(longlong **)(*param_2 + 0x488);
  if (lVar7 == lVar4) {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_1407a6820();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
      if (lVar4 != 0) {
        FUN_140732c90(lVar4,0x40a00000);
      }
    }
  }
  else {
    if (lVar4 != 0) {
      FUN_140746620(lVar4,plVar1);
    }
    FWeakObjectPtr::operator=(lVar8 + 0x298,lVar7);
    if ((lVar7 != 0) && (*(char *)(lVar8 + 0x28) == '\x02')) {
      FUN_140732750(lVar7,plVar1);
    }
  }
  return;
}



// FUNCTION 140716980 FUN_140716980 body=301 status=ok
// SIG undefined FUN_140716980(void)

void FUN_140716980(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  
  lVar9 = (longlong)*(int *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x150) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x148);
    uVar4 = 0;
    uVar11 = uVar4;
    if ((lVar1 == 0) ||
       ((*(char *)(lVar1 + 0xf0) == '\0' && ((*(uint *)(lVar1 + 8) >> 10 & 1) == 0)))) {
      bVar5 = 0;
      uVar8 = uVar4;
    }
    else {
      bVar5 = 1;
      uVar8 = uVar4;
    }
    do {
      iVar7 = (int)uVar8;
      uVar4 = uVar4 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      if ((longlong)uVar4 < lVar9) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x148) + uVar4 * 8);
        do {
          lVar1 = *plVar3;
          if ((lVar1 == 0) ||
             ((*(char *)(lVar1 + 0xf0) == '\0' && ((*(uint *)(lVar1 + 8) >> 10 & 1) == 0)))) {
            bVar2 = 0;
          }
          else {
            bVar2 = 1;
          }
          if (bVar5 != bVar2) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar4 = uVar4 + 1;
          plVar3 = plVar3 + 1;
        } while ((longlong)uVar4 < lVar9);
      }
      iVar6 = (int)uVar8 - iVar7;
      if (bVar5 != 0) {
        iVar10 = (int)uVar11;
        if (iVar10 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar7 * 8),
                     (longlong)iVar6 << 3);
        }
        uVar11 = (ulonglong)(uint)(iVar10 + iVar6);
      }
      bVar5 = bVar5 ^ 1;
    } while ((longlong)uVar4 < lVar9);
    *(int *)(param_1 + 0x150) = (int)uVar11;
  }
  FUN_1406f3360(param_1);
  return;
}



// FUNCTION 140716ae0 FUN_140716ae0 body=155 status=ok
// SIG undefined FUN_140716ae0(void)

/* WARNING: Removing unreachable block (ram,0x000140716b5a) */

void FUN_140716ae0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1417931d0();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000020;
  *(longlong *)(param_1 + 0x58) = DAT_146858860;
  if ((DAT_146858860 == 0) || (lVar2 = *(longlong *)(DAT_146858860 + 200), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_14078b390();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8)
        != lVar1 + 0x88)) {
      lVar2 = 0;
    }
  }
  *(longlong *)(param_1 + 0xe8) = lVar2;
  FUN_140713060(param_1);
  return;
}



// FUNCTION 140716b80 FUN_140716b80 body=155 status=ok
// SIG undefined FUN_140716b80(void)

/* WARNING: Removing unreachable block (ram,0x000140716bfa) */

void FUN_140716b80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1417931d0();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000020;
  *(longlong *)(param_1 + 0x58) = DAT_146858868;
  if ((DAT_146858868 == 0) || (lVar2 = *(longlong *)(DAT_146858868 + 200), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar1 = UAISense_Hearing::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8)
        != lVar1 + 0x88)) {
      lVar2 = 0;
    }
  }
  *(longlong *)(param_1 + 0xe8) = lVar2;
  FUN_140713060(param_1);
  return;
}



// FUNCTION 140716c20 FUN_140716c20 body=381 status=ok
// SIG undefined FUN_140716c20(void)

void FUN_140716c20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  thunk_FUN_1406f3800();
  plVar8 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar8 + *(int *)(param_1 + 0x150);
  do {
    if (plVar8 == plVar1) {
      return;
    }
    lVar2 = *plVar8;
    if ((((lVar2 != 0) && (lVar5 = *(longlong *)(lVar2 + 0x148), lVar5 != 0)) &&
        (*(char *)(lVar5 + 0xf0) != '\x01')) &&
       ((*(longlong *)(lVar5 + 0x20) == lVar2 &&
        (uVar3 = *(undefined8 *)(lVar5 + 0x18), param_1 != 0)))) {
      lVar5 = USafeZone::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      lVar5 = param_1;
      if (bVar4) {
        do {
          lVar6 = UObject::GetDefaultSubobjectByName(lVar5,uVar3);
          if (lVar6 != 0) {
            lVar7 = USafeZone::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              *(longlong *)(lVar2 + 0x148) = lVar6;
              break;
            }
          }
          lVar5 = *(longlong *)(lVar5 + 0x20);
          if (lVar5 == 0) break;
          lVar6 = USafeZone::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        } while (bVar4);
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 140716da0 FUN_140716da0 body=921 status=ok
// SIG undefined FUN_140716da0(void)

void FUN_140716da0(longlong param_1)

{
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1406f38d0();
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x468);
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_1 + 0x470);
  *(undefined1 *)(param_1 + 0x251) = *(undefined1 *)(param_1 + 0x471);
  *(undefined1 *)(param_1 + 0x252) = *(undefined1 *)(param_1 + 0x472);
  *(undefined1 *)(param_1 + 0x253) = *(undefined1 *)(param_1 + 0x473);
  *(undefined8 *)(param_1 + 0x254) = *(undefined8 *)(param_1 + 0x474);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x4a8);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x4e8);
  FUN_142de2d20(&local_88,*(undefined4 *)(param_1 + 0x4f0),0);
  *(undefined1 *)(param_1 + 0x2d0) = local_88;
  *(undefined1 *)(param_1 + 0x2d1) = local_87;
  *(undefined1 *)(param_1 + 0x2d2) = local_86;
  *(undefined1 *)(param_1 + 0x2d3) = local_85;
  *(undefined4 *)(param_1 + 0x2d4) = local_84;
  *(undefined8 *)(param_1 + 0x2e0) = local_78;
  *(undefined8 *)(param_1 + 0x2f0) = local_68;
  *(undefined8 *)(param_1 + 0x2f8) = uStack_60;
  *(undefined8 *)(param_1 + 0x2e8) = local_70;
  *(undefined4 *)(param_1 + 0x2d8) = local_80;
  *(undefined8 *)(param_1 + 0x338) = local_20;
  *(undefined8 *)(param_1 + 0x300) = local_58;
  *(undefined8 *)(param_1 + 0x308) = uStack_50;
  *(undefined8 *)(param_1 + 0x310) = local_48;
  *(undefined8 *)(param_1 + 0x318) = uStack_40;
  *(undefined8 *)(param_1 + 800) = local_38;
  *(undefined8 *)(param_1 + 0x328) = local_30;
  *(undefined8 *)(param_1 + 0x330) = uStack_28;
  *(undefined4 *)(param_1 + 0x340) = local_18;
  *(undefined4 *)(param_1 + 0x344) = local_14;
  *(undefined4 *)(param_1 + 0x348) = local_10;
  FUN_142de2d20(&local_88,*(undefined4 *)(param_1 + 0x4f4),0);
  *(undefined1 *)(param_1 + 0x350) = local_88;
  *(undefined1 *)(param_1 + 0x351) = local_87;
  *(undefined1 *)(param_1 + 0x352) = local_86;
  *(undefined1 *)(param_1 + 0x353) = local_85;
  *(undefined4 *)(param_1 + 0x354) = local_84;
  *(undefined8 *)(param_1 + 0x360) = local_78;
  *(undefined8 *)(param_1 + 0x370) = local_68;
  *(undefined8 *)(param_1 + 0x378) = uStack_60;
  *(undefined8 *)(param_1 + 0x368) = local_70;
  *(undefined4 *)(param_1 + 0x358) = local_80;
  *(undefined8 *)(param_1 + 0x3b8) = local_20;
  *(undefined8 *)(param_1 + 0x380) = local_58;
  *(undefined8 *)(param_1 + 0x388) = uStack_50;
  *(undefined8 *)(param_1 + 0x390) = local_48;
  *(undefined8 *)(param_1 + 0x398) = uStack_40;
  *(undefined8 *)(param_1 + 0x3a0) = local_38;
  *(undefined8 *)(param_1 + 0x3a8) = local_30;
  *(undefined8 *)(param_1 + 0x3b0) = uStack_28;
  *(undefined4 *)(param_1 + 0x3c0) = local_18;
  *(undefined4 *)(param_1 + 0x3c4) = local_14;
  *(undefined4 *)(param_1 + 0x3c8) = local_10;
  FUN_142de2d20(&local_88,*(undefined4 *)(param_1 + 0x4f8),0);
  *(undefined1 *)(param_1 + 0x3d0) = local_88;
  *(undefined1 *)(param_1 + 0x3d1) = local_87;
  *(undefined1 *)(param_1 + 0x3d2) = local_86;
  *(undefined1 *)(param_1 + 0x3d3) = local_85;
  *(undefined4 *)(param_1 + 0x3d4) = local_84;
  *(undefined8 *)(param_1 + 0x3e0) = local_78;
  *(undefined8 *)(param_1 + 0x3f0) = local_68;
  *(undefined8 *)(param_1 + 0x3f8) = uStack_60;
  *(undefined8 *)(param_1 + 1000) = local_70;
  *(undefined4 *)(param_1 + 0x3d8) = local_80;
  *(undefined8 *)(param_1 + 0x438) = local_20;
  *(undefined8 *)(param_1 + 0x400) = local_58;
  *(undefined8 *)(param_1 + 0x408) = uStack_50;
  *(undefined8 *)(param_1 + 0x410) = local_48;
  *(undefined8 *)(param_1 + 0x418) = uStack_40;
  *(undefined8 *)(param_1 + 0x420) = local_38;
  *(undefined8 *)(param_1 + 0x428) = local_30;
  *(undefined8 *)(param_1 + 0x430) = uStack_28;
  *(undefined4 *)(param_1 + 0x440) = local_18;
  *(undefined4 *)(param_1 + 0x444) = local_14;
  *(undefined4 *)(param_1 + 0x448) = local_10;
  *(undefined1 *)(param_1 + 0x450) = *(undefined1 *)(param_1 + 0x4fc);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x500);
  return;
}



// FUNCTION 1407171d0 FUN_1407171d0 body=90 status=ok
// SIG undefined FUN_1407171d0(void)

void FUN_1407171d0(longlong *param_1)

{
  char cVar1;
  
  FUN_1406f3b30();
  cVar1 = (**(code **)(*param_1 + 0x390))(param_1);
  if (((cVar1 == '\0') && (param_1[2] != 0)) && ((*(uint *)(param_1[2] + 0xb4) >> 0x12 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x154)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x29,0);
      return;
    }
  }
  return;
}



// FUNCTION 140717230 PropertyNameToDisplayName body=32 status=ok
// SIG undefined PropertyNameToDisplayName(void)

undefined8
UStruct::PropertyNameToDisplayName(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FName::ToString(local_res18);
  return param_2;
}



// FUNCTION 140717250 FUN_140717250 body=600 status=ok
// SIG undefined FUN_140717250(void)

void FUN_140717250(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  plVar9 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar9 + *(int *)(param_1 + 0x150);
  if (plVar9 != plVar1) {
    do {
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        if (*(longlong *)(lVar7 + 0x20) != param_1) {
          uVar2 = *(undefined8 *)(lVar7 + 0x18);
          uVar6 = USafeZone::GetPrivateStaticClass();
          lVar7 = FUN_141799680(uVar6,param_1,uVar2,0,0,0,0);
          if (lVar7 == 0) {
LAB_140717305:
            lVar7 = 0;
          }
          else {
            lVar8 = USafeZone::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_140717305;
          }
          *plVar9 = lVar7;
        }
        if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 0x148), lVar8 != 0)) {
          lVar3 = *(longlong *)(lVar8 + 0x20);
          lVar4 = *(longlong *)(param_1 + 0x20);
          if ((lVar3 != lVar7) && ((lVar3 != param_1 && (lVar3 != lVar4)))) {
            uVar2 = *(undefined8 *)(lVar8 + 0x18);
            uVar6 = USafeZone::GetPrivateStaticClass();
            lVar7 = FUN_141799680(uVar6,*plVar9,uVar2,0,0,0,0);
            if (lVar7 == 0) {
LAB_1407173ae:
              uVar6 = USafeZone::GetPrivateStaticClass();
              lVar7 = FUN_141799680(uVar6,param_1,uVar2,0,0,0,0);
              if (lVar7 != 0) {
                lVar8 = USafeZone::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_140717474;
              }
              uVar6 = USafeZone::GetPrivateStaticClass();
              lVar7 = FUN_141799680(uVar6,lVar4,uVar2,0,0,0,0);
              if (lVar7 != 0) {
                lVar8 = USafeZone::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_140717474;
              }
            }
            else {
              lVar8 = USafeZone::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_1407173ae;
LAB_140717474:
              *(longlong *)(*plVar9 + 0x148) = lVar7;
            }
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return;
}



// FUNCTION 140717620 FUN_140717620 body=67 status=ok
// SIG undefined FUN_140717620(void)

void FUN_140717620(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14075eaf0(*param_2);
  if (lVar1 != 0) {
    FUN_140765460(lVar1 + 0x27a8,param_1 + 0x110,*param_2,*(undefined4 *)(param_2 + 3));
  }
  return;
}



// FUNCTION 140717670 FUN_140717670 body=379 status=ok
// SIG undefined FUN_140717670(void)

void FUN_140717670(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar5 = FWeakObjectPtr::Get(lVar8 + 0x48);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x900);
  }
  if (lVar5 == 0) {
    return;
  }
  lVar2 = *(longlong *)(*param_2 + 0x628);
  if (lVar2 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(lVar8 + 0xcc);
  cVar4 = FUN_1407c3030(puVar1);
  if (cVar4 == '\0') goto LAB_140717731;
  if (*(char *)(lVar8 + 0xc9) == '\x01') {
    lVar7 = lVar5 + 0x274;
LAB_140717710:
    FUN_14248ba60(lVar7,puVar1);
  }
  else if (*(char *)(lVar8 + 0xc9) == '\x02') {
    lVar7 = lVar5 + 0x298;
    goto LAB_140717710;
  }
  FUN_14246da30(&local_58);
  *(undefined4 *)puVar1 = local_58;
  *(undefined4 *)(lVar8 + 0xd0) = uStack_54;
  *(undefined4 *)(lVar8 + 0xd4) = uStack_50;
  *(undefined4 *)(lVar8 + 0xd8) = uStack_4c;
  *(undefined4 *)(lVar8 + 0xdc) = local_48;
LAB_140717731:
  if (param_3 == '\0') {
    fVar9 = (float)FUN_140706bc0(param_1,param_2);
  }
  else {
    fVar9 = 1.0;
  }
  if (0.1 < ABS(1.0 - fVar9)) {
    fVar9 = (float)FMath::RoundHalfFromZero(fVar9 * 10.0);
    cVar4 = *(char *)(lVar2 + 0x781);
    *(char *)(lVar8 + 0xc9) = cVar4;
    if (cVar4 == '\x01') {
      lVar5 = lVar5 + 0x274;
    }
    else {
      if (cVar4 != '\x02') {
        return;
      }
      lVar5 = lVar5 + 0x298;
    }
    puVar6 = (undefined8 *)FUN_142470da0(lVar5,&local_58,3,fVar9 * 0.1,local_res8);
    uVar3 = puVar6[1];
    *puVar1 = *puVar6;
    *(undefined8 *)(lVar8 + 0xd4) = uVar3;
    *(undefined4 *)(lVar8 + 0xdc) = *(undefined4 *)(puVar6 + 2);
  }
  return;
}



// FUNCTION 1407177f0 FUN_1407177f0 body=668 status=ok
// SIG undefined FUN_1407177f0(void)

void FUN_1407177f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  lVar10 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
  plVar5 = (longlong *)FWeakObjectPtr::Get(lVar10 + 0x48);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x678))(plVar5);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar6 = (**(code **)(*plVar5 + 0xa38))(plVar5), lVar6 != 0)) {
      puVar1 = (undefined8 *)(lVar10 + 0x2a8);
      cVar4 = FUN_1407c3030(puVar1);
      if (cVar4 != '\0') {
        FUN_14248ba60(lVar6,puVar1);
        FUN_14246da30(&local_68);
        *(undefined4 *)puVar1 = local_68;
        *(undefined4 *)(lVar10 + 0x2ac) = uStack_64;
        *(undefined4 *)(lVar10 + 0x2b0) = uStack_60;
        *(undefined4 *)(lVar10 + 0x2b4) = uStack_5c;
        *(undefined4 *)(lVar10 + 0x2b8) = local_58;
      }
      fVar11 = (float)(**(code **)(*plVar5 + 0xa40))(plVar5);
      lVar9 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
      cVar4 = FWeakObjectPtr::IsValid(lVar9 + 0x50);
      if ((cVar4 == '\0') ||
         (*(char *)(*(longlong *)(param_2 + 8) + 0x28 + *(longlong *)(param_1 + 0xd8)) != '\x02')) {
        fVar11 = 1.0;
      }
      else {
        plVar5 = (longlong *)FWeakObjectPtr::Get(lVar9 + 0x50);
        pfVar7 = (float *)(**(code **)(*plVar5 + 0x308))(plVar5,&local_68);
        fVar12 = *(float *)(lVar9 + 0x244) * pfVar7[1] + *(float *)(lVar9 + 0x240) * *pfVar7 +
                 *(float *)(lVar9 + 0x248) * pfVar7[2];
        if (*(char *)(lVar9 + 0x1a4) == '\0') {
          if (0.0 <= fVar12) {
            fVar12 = 0.0;
          }
        }
        else if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        fVar14 = *(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x138);
        fVar12 = fVar12 / fVar11;
        fVar11 = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x134);
        fVar13 = fVar14;
        if ((fVar14 <= fVar12) && (fVar13 = fVar12, fVar11 <= fVar12)) {
          fVar13 = fVar11;
        }
        fVar15 = *(float *)(lVar9 + 0x294) - *(float *)(param_1 + 300);
        fVar12 = ABS(fVar15) * (0.5 / *(float *)(param_1 + 0x130));
        if (0.0 <= fVar12) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
        if (0.0 < fVar15) {
          fVar11 = fVar14;
        }
        fVar11 = (float)FMath::RoundHalfFromZero(((fVar11 - fVar13) * fVar12 + fVar13) * 10.0);
        fVar11 = fVar11 * 0.1;
      }
      *(float *)(lVar10 + 0x2a4) = fVar11;
      if (0.1 < ABS(1.0 - fVar11)) {
        puVar8 = (undefined8 *)FUN_142470da0(lVar6,&local_68,3,fVar11,local_res8);
        uVar2 = puVar8[1];
        *puVar1 = *puVar8;
        *(undefined8 *)(lVar10 + 0x2b0) = uVar2;
        *(undefined4 *)(lVar10 + 0x2b8) = *(undefined4 *)(puVar8 + 2);
      }
    }
  }
  return;
}



// FUNCTION 140717a90 FUN_140717a90 body=192 status=ok
// SIG undefined FUN_140717a90(void)

void FUN_140717a90(longlong param_1,int param_2)

{
  longlong *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x150))) {
    iVar1 = *(int *)(param_1 + 0x150);
    _Dst = (longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)param_2 * 8);
    lVar2 = *_Dst;
    iVar3 = (iVar1 - param_2) + -1;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)(*(longlong *)(param_1 + 0x148) + (longlong)(param_2 + 1) * 8),
                 (longlong)iVar3 << 3);
      iVar1 = *(int *)(param_1 + 0x150);
    }
    *(int *)(param_1 + 0x150) = iVar1 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x148);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x148) != 0) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x148) + 0x20) == lVar2) {
          UEncounterManager::RemovePlayer(lVar2);
        }
        *(undefined8 *)(lVar2 + 0x148) = 0;
      }
      UEncounterManager::RemovePlayer(param_1,lVar2);
    }
  }
  return;
}



// FUNCTION 140717b50 FUN_140717b50 body=149 status=ok
// SIG undefined FUN_140717b50(void)

void FUN_140717b50(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 140717bf0 FUN_140717bf0 body=151 status=ok
// SIG undefined FUN_140717bf0(void)

void FUN_140717bf0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x50);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x28);
    pvVar1 = *(void **)((longlong)param_1 + 0x50);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x50) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x28);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 140717c90 FUN_140717c90 body=149 status=ok
// SIG undefined FUN_140717c90(void)

void FUN_140717c90(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x20);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x20) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
  return;
}



// FUNCTION 140717d30 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  FUN_140717b50(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 140717dc0 ResizeGrow body=261 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x88);
  if (uVar1 < 0x11) {
    uVar2 = 0x10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x8c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x80);
  if (uVar2 < 0x11) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
  return;
}



// FUNCTION 140717ed0 FUN_140717ed0 body=148 status=ok
// SIG undefined FUN_140717ed0(void)

void FUN_140717ed0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x5c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x28,0);
    iVar4 = (int)(uVar3 / 0x28);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar4;
  FUN_140717bf0(param_1,param_2,iVar4,0x28);
  return;
}



// FUNCTION 140717f70 FUN_140717f70 body=257 status=ok
// SIG undefined FUN_140717f70(void)

void FUN_140717f70(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xa8);
  if (uVar1 < 0xb) {
    uVar2 = 10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xac) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xac) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0xa0);
  if (uVar2 < 0xb) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0xa0);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0xa0) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar5;
  return;
}



// FUNCTION 140718080 FUN_140718080 body=118 status=ok
// SIG undefined FUN_140718080(void)

void FUN_140718080(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar2 = 2;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = iVar2;
    FUN_140717bf0(param_1,*(undefined4 *)(param_1 + 0x58),iVar2,0x28);
  }
  return;
}



// FUNCTION 140718100 FUN_140718100 body=276 status=ok
// SIG undefined FUN_140718100(void)

void FUN_140718100(void *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar5 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      uVar5 = (uint)(uVar2 / 0xc);
      if ((int)uVar5 < (int)param_2) {
        uVar5 = 0x7fffffff;
      }
    }
  }
  if (uVar5 == *(uint *)((longlong)param_1 + 0xcc)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 200);
  *(uint *)((longlong)param_1 + 0xcc) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0xc0);
  if (uVar5 < 0x11) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)iVar1 * 0xc);
    pvVar3 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0xc,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)iVar1 * 0xc);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0xc;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar4;
  return;
}



// FUNCTION 140718220 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar1;
    FUN_140717c90(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,8);
  }
  return;
}



// FUNCTION 140718290 FUN_140718290 body=160 status=ok
// SIG undefined FUN_140718290(void)

undefined8 * FUN_140718290(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  
  cVar1 = *(char *)(param_1 + 0x118);
  *param_2 = 0;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x130) == '\0') {
      if (*(char *)(param_1 + 0x108) != '\0') {
        *param_2 = *(undefined8 *)(param_1 + 0x100);
      }
    }
    else {
      cVar1 = FUN_142cc3e50(param_1 + 0x120,*(undefined8 *)(*param_3 + 0x568),local_res8);
      if (cVar1 != '\0') {
        *param_2 = local_res8[0];
        return param_2;
      }
    }
  }
  else if (*(longlong *)(*param_3 + 0x648) != 0) {
    puVar2 = (undefined8 *)
             FUN_142c71200(*(longlong *)(*param_3 + 0x648),local_res8,
                           *(undefined8 *)(param_1 + 0x110));
    *param_2 = *puVar2;
    return param_2;
  }
  return param_2;
}



// FUNCTION 140718330 FUN_140718330 body=144 status=ok
// SIG undefined FUN_140718330(void)

undefined8 * FUN_140718330(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [8];
  
  lVar1 = *param_3;
  *param_2 = 0;
  lVar2 = *(longlong *)(lVar1 + 0x630);
  if (lVar2 == 0) {
    return param_2;
  }
  lVar1 = *(longlong *)(lVar1 + 0x648);
  if (lVar1 != 0) {
    lVar2 = lVar2 + 0x1e8;
    cVar3 = FSimulationThreadWorker::Init(lVar2);
    if (cVar3 != '\0') {
      puVar4 = (undefined8 *)IMessageToken::GetOnMessageTokenActivated(lVar2);
      puVar4 = (undefined8 *)FUN_142c71200(lVar1,local_res10,*puVar4);
      *param_2 = *puVar4;
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 1407183c0 FUN_1407183c0 body=723 status=ok
// SIG undefined FUN_1407183c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1407183c0(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_428 [32];
  undefined1 local_408 [8];
  float local_400;
  float local_3f8;
  float fStack_3f4;
  float local_3f0;
  float local_3e8;
  float fStack_3e4;
  float local_3e0;
  longlong local_3d8 [2];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [904];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  lVar2 = *(longlong *)(*param_2 + 0x568);
  if (lVar2 == 0) {
    return '\0';
  }
  FUN_142dc1ad0(local_3c8);
  cVar1 = FUN_142cc5430(param_1,lVar2,local_3c8);
  if (cVar1 == '\0') {
    cVar1 = FUN_142cc3a70(param_1,lVar2,local_3d8);
    if (cVar1 == '\0') {
      cVar1 = FUN_142cc54f0(param_1,lVar2,&local_3f8);
      if (cVar1 == '\0') {
        return '\0';
      }
      if (local_3f8 <= -(float)DAT_14622e710) {
        return '\0';
      }
      if ((float)DAT_14622e710 <= local_3f8) {
        return '\0';
      }
      if (fStack_3f4 <= -DAT_14622e710._4_4_) {
        return '\0';
      }
      if (DAT_14622e710._4_4_ <= fStack_3f4) {
        return '\0';
      }
      if (local_3f0 <= -DAT_14622e718) {
        return '\0';
      }
      if (DAT_14622e718 <= local_3f0) {
        return '\0';
      }
      if (ABS(1.0 - (fStack_3f4 * fStack_3f4 + local_3f8 * local_3f8 + local_3f0 * local_3f0)) <
          0.01) {
        local_400 = local_3f0;
        cVar1 = FUN_142ccf010(param_4,local_408);
        goto LAB_14071853c;
      }
LAB_140718525:
      cVar1 = FUN_142ccf160(param_4,local_408);
      goto LAB_14071853c;
    }
    lVar2 = local_3d8[0];
    if (param_3 == '\x02') {
      cVar1 = FUN_142ccefb0(param_4,local_3d8[0]);
      goto LAB_14071853c;
    }
  }
  else {
    lVar2 = FWeakObjectPtr::Get(local_3c0);
    if (lVar2 != 0) {
      cVar1 = FUN_142ccefe0(param_4,lVar2);
      goto LAB_14071853c;
    }
    lVar2 = FUN_142dd0030(local_3c8);
    if (lVar2 == 0) {
      cVar1 = FWeakObjectPtr::IsValid(local_3c8);
      if (cVar1 == '\0') {
        return '\0';
      }
      FUN_142dcd4d0(local_3c8,&local_3e8,0,0);
      if (local_3e8 <= -(float)DAT_14622e710) {
        return '\0';
      }
      if ((float)DAT_14622e710 <= local_3e8) {
        return '\0';
      }
      if (fStack_3e4 <= -DAT_14622e710._4_4_) {
        return '\0';
      }
      if (DAT_14622e710._4_4_ <= fStack_3e4) {
        return '\0';
      }
      if (local_3e0 <= -DAT_14622e718) {
        return '\0';
      }
      if (DAT_14622e718 <= local_3e0) {
        return '\0';
      }
      goto LAB_140718525;
    }
    if ((param_3 == '\x02') && (cVar1 = FUN_142dd38f0(local_3c8), cVar1 != '\0')) {
      cVar1 = FUN_142ccefb0(param_4,lVar2);
      goto LAB_14071853c;
    }
  }
  cVar1 = FUN_142ccef80(param_4,lVar2);
LAB_14071853c:
  if (cVar1 != '\0') {
    *(undefined8 *)(param_4 + 0x2c) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_1 + 0x18);
  }
  return cVar1;
}



// FUNCTION 1407186a0 FUN_1407186a0 body=338 status=ok
// SIG undefined FUN_1407186a0(void)

undefined8 FUN_1407186a0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x2c8) == '\0') {
LAB_14071871d:
    if (*(char *)(param_1 + 0x488) != '\0') {
      if (*(char *)(param_1 + 0x480) != '\0') {
        local_res8 = *(undefined8 *)(*param_2 + 0x568);
        fVar3 = (float)FUN_142de77e0(param_1 + 0x400,*param_2,0,&local_res8);
        if (fVar3 < 0.5) goto LAB_14071877a;
      }
      cVar1 = FUN_1407183c0(param_1 + 0x2d0,param_2,1,param_3 + 0x3c);
      if (cVar1 == '\0') goto LAB_1407187d7;
    }
LAB_14071877a:
    if (*(char *)(param_1 + 0x648) != '\0') {
      if (*(char *)(param_1 + 0x640) != '\0') {
        local_res8 = *(undefined8 *)(*param_2 + 0x568);
        fVar3 = (float)FUN_142de77e0(param_1 + 0x5c0,*param_2,0,&local_res8);
        if (fVar3 < 0.5) goto LAB_1407187db;
      }
      cVar1 = FUN_1407183c0(param_1 + 0x490,param_2,2,param_3 + 0x78);
      if (cVar1 == '\0') goto LAB_1407187d7;
    }
LAB_1407187db:
    uVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x2c0) != '\0') {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar3 = (float)FUN_142de77e0(param_1 + 0x240,*param_2,0,&local_res8);
      if (fVar3 < 0.5) goto LAB_14071871d;
    }
    cVar1 = FUN_1407183c0(param_1 + 0x110,param_2,0,param_3);
    if (cVar1 != '\0') goto LAB_14071871d;
LAB_1407187d7:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140718800 FUN_140718800 body=88 status=ok
// SIG undefined FUN_140718800(void)

longlong FUN_140718800(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FUN_142cc3a70(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),local_res8);
  lVar1 = FUN_142dd9fb0(local_res8[0]);
  if ((lVar1 == 0) ||
     ((*(longlong *)(lVar1 + 0x910) != 0 &&
      ((*(uint *)(*(longlong *)(lVar1 + 0x910) + 0x840) >> 3 & 1) != 0)))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140718860 FUN_140718860 body=174 status=ok
// SIG undefined FUN_140718860(void)

float FUN_140718860(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  fVar2 = 5.0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(param_1 + 0x20,*param_2,0,&local_res8);
    if (param_4 == '\0') {
      return fVar2;
    }
  }
  fVar3 = fVar2;
  if (param_3 == '\0') {
    lVar1 = FUN_14070cef0(*param_2);
    if ((lVar1 != 0) && (fVar3 = (float)FUN_142cecf20(lVar1), fVar3 <= fVar2)) {
      fVar3 = fVar2;
    }
  }
  else if ((param_3 == '\x01') && (lVar1 = FUN_140760140(*param_2,0), lVar1 != 0)) {
    fVar3 = *(float *)(lVar1 + 0x1c0);
  }
  return fVar3;
}



// FUNCTION 140718910 FUN_140718910 body=236 status=ok
// SIG undefined FUN_140718910(void)

void FUN_140718910(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 local_38 [8];
  longlong local_30;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = *(longlong *)(param_1 + 0x188);
  if (lVar2 != 0) {
    lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((char *)(param_1 + 0x2d0) != (char *)(param_1 + 0x330))) {
      pcVar6 = (char *)(param_1 + 0x2f9);
      do {
        if ((*(longlong *)(pcVar6 + -0x21) == 0) || (*(longlong *)(pcVar6 + -9) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (*pcVar6 != '\0')) {
          *pcVar6 = '\0';
          FUN_1406d48b0(local_38,lVar2,*(undefined8 *)(pcVar6 + -9),*(undefined8 *)(pcVar6 + -0x11))
          ;
          plVar3 = *(longlong **)(pcVar6 + -0x21);
          if (*(char *)(plVar3[0x1b] + 0x28 + local_30) == '\x03') {
            (**(code **)(*plVar3 + 0x300))(plVar3,local_38);
          }
        }
        pcVar1 = pcVar6 + 7;
        pcVar6 = pcVar6 + 0x30;
      } while (pcVar1 != (char *)(param_1 + 0x330));
    }
  }
  return;
}



// FUNCTION 140718a00 FUN_140718a00 body=1628 status=ok
// SIG undefined FUN_140718a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140718a00(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined **local_178 [5];
  byte local_14f;
  byte local_14e;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  longlong local_c8 [16];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    return;
  }
  local_188 = *(longlong *)(param_1 + 0x10);
  if (local_188 == 0) {
    return;
  }
  if ((*(uint *)(local_188 + 0xb4) >> 0x12 & 1) == 0) {
    return;
  }
  plVar8 = (longlong *)FUN_14178ca30();
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  plVar18 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FArchive::FArchive(local_178);
  local_14e = local_14e | 8;
  local_178[0] = &PTR_FUN_14406b690;
  local_e8 = local_c8;
  local_d8 = 0;
  local_e0 = plVar8;
  FArchive::SetIsPersistent(local_178,0);
  local_14f = local_14f & 0xdf;
  (**(code **)(*plVar8 + 0xa8))(plVar8,local_178);
  FArchive::~FArchive(local_178);
  local_198 = (longlong *)0x0;
  local_190 = 0;
  if (0 < (int)local_40 * 2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_198);
  }
  local_1c8 = 0;
  FUN_1417a5b30(param_1,&local_198,0,0);
  plVar1 = local_198 + (int)local_190;
  plVar13 = local_198;
  if ((local_198 != plVar1) && (*local_198 == 0)) {
    if (local_198 == plVar1) goto LAB_140718c4f;
    do {
      plVar13 = plVar13 + 1;
      if (plVar13 == plVar1) goto LAB_140718c4f;
    } while (*plVar13 == 0);
  }
joined_r0x000140718b75:
  if (plVar13 != plVar1) {
    lVar4 = *plVar13;
    lVar9 = USafeZone::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
LAB_140718c17:
      FUN_1417087d0(lVar4);
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x108);
      plVar17 = plVar10 + *(int *)(param_1 + 0x110);
      for (; plVar10 != plVar17; plVar10 = plVar10 + 1) {
        if (*plVar10 == lVar4) goto LAB_140718c1f;
      }
      plVar17 = local_c8;
      if (local_48 != (longlong *)0x0) {
        plVar17 = local_48;
      }
      plVar10 = plVar17 + (int)local_40;
      for (; plVar17 != plVar10; plVar17 = plVar17 + 1) {
        if (*plVar17 == *(longlong *)(lVar4 + 0x18)) goto LAB_140718c17;
      }
    }
LAB_140718c1f:
    if (plVar13 != local_198 + (int)local_190) {
      do {
        plVar13 = plVar13 + 1;
        if (plVar13 == local_198 + (int)local_190) break;
      } while (*plVar13 == 0);
    }
    goto joined_r0x000140718b75;
  }
LAB_140718c4f:
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  plVar1 = (longlong *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x154)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x13c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x124)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x118,0);
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  local_180 = 0;
  local_198 = (longlong *)0x0;
  FUN_1417846f0(uVar12,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1c0 = plVar8;
  plVar8 = (longlong *)FUN_1417985e0(local_188,uVar12,0,uVar2);
  if (plVar8 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FArchive::FArchive(local_178);
    local_14e = local_14e | 8;
    local_178[0] = &PTR_FUN_14406b880;
    local_e8 = local_c8;
    local_d8 = 0;
    local_e0 = plVar8;
    FArchive::SetIsPersistent(local_178,0);
    local_14f = local_14f & 0xdf;
    (**(code **)(*plVar8 + 0xa8))(plVar8,local_178);
    FArchive::~FArchive(local_178);
    plVar13 = local_c8;
    if (local_48 != (longlong *)0x0) {
      plVar13 = plVar18;
    }
    plVar17 = (longlong *)((ulonglong)local_48 | (ulonglong)plVar13);
    lVar4 = (longlong)(int)local_40 * 8;
    if (((plVar17 != plVar17 + (int)local_40) && (*plVar17 == 0)) &&
       (plVar10 = (longlong *)(((ulonglong)local_48 | (ulonglong)plVar13) + lVar4),
       plVar17 != plVar10)) {
      do {
        plVar17 = plVar17 + 1;
        if (plVar17 == plVar10) break;
      } while (*plVar17 == 0);
    }
    uVar19 = (ulonglong)local_48 | (ulonglong)plVar13;
    plVar13 = local_48;
joined_r0x000140718dda:
    if (plVar17 != (longlong *)(uVar19 + lVar4)) {
      plVar14 = (longlong *)plVar8[0x21];
      plVar5 = (longlong *)*plVar17;
      plVar10 = plVar14 + (int)plVar8[0x22];
      for (; plVar14 != plVar10; plVar14 = plVar14 + 1) {
        if ((longlong *)*plVar14 == plVar5) goto LAB_140718e62;
      }
      local_188 = plVar5[3];
      puVar11 = (undefined8 *)FName::ToString(&local_188,&local_198);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar11;
      }
      (**(code **)(*plVar5 + 0x138))(plVar5,puVar16,param_1,0x15);
      plVar13 = local_48;
      if (local_198 != (longlong *)0x0) {
        FMemory::Free();
        plVar13 = local_48;
      }
LAB_140718e62:
      plVar10 = local_c8;
      if (plVar13 != (longlong *)0x0) {
        plVar10 = plVar13;
      }
      if (plVar17 != plVar10 + (int)local_40) {
        do {
          plVar17 = plVar17 + 1;
          if (plVar17 == plVar10 + (int)local_40) break;
        } while (*plVar17 == 0);
      }
      goto joined_r0x000140718dda;
    }
    plVar13 = plVar8 + 0x26;
    plVar17 = (longlong *)(param_1 + 0x130);
    if (plVar17 != plVar13) {
      if (*plVar17 != 0) {
        FMemory::Free();
      }
      *plVar17 = *plVar13;
      *plVar13 = 0;
      *(int *)(param_1 + 0x138) = (int)plVar8[0x27];
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)((longlong)plVar8 + 0x13c);
      plVar8[0x27] = 0;
    }
    plVar13 = plVar8 + 0x29;
    if (plVar1 != plVar13) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar13;
      *plVar13 = 0;
      *(int *)(param_1 + 0x150) = (int)plVar8[0x2a];
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)((longlong)plVar8 + 0x154);
      plVar8[0x2a] = 0;
    }
    plVar1 = plVar8 + 0x23;
    plVar13 = (longlong *)(param_1 + 0x118);
    if (plVar13 != plVar1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      *plVar13 = *plVar1;
      *plVar1 = 0;
      *(int *)(param_1 + 0x120) = (int)plVar8[0x24];
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)((longlong)plVar8 + 0x124);
      plVar8[0x24] = 0;
    }
    *(char *)(param_1 + 0x100) = (char)plVar8[0x20];
    *(longlong *)(param_1 + 0xd0) = plVar8[0x1a];
    lVar4 = *plVar8;
    uVar12 = GetTransientPackage();
    (**(code **)(lVar4 + 0x138))(plVar8,0,uVar12,0x15);
    iVar3 = *(int *)((longlong)plVar8 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar15 = iVar3 >> 0x1f & 0xffff;
      uVar7 = iVar3 + uVar15;
      plVar18 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18);
    }
    *(uint *)(plVar18 + 1) = *(uint *)(plVar18 + 1) | 0x20000000;
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar9 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FUN_1422e5a50(lVar4,param_1);
    }
  }
  return;
}



// FUNCTION 140719060 FUN_140719060 body=112 status=ok
// SIG undefined FUN_140719060(void)

int FUN_140719060(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_142bef410();
  if ((*(byte *)(param_1 + 0x1e0) & 2) != 0) {
    *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) & 0xfd;
    if (iVar1 == 0) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_142bc9a90(*(longlong *)(param_1 + 0x180),1);
        return 0;
      }
    }
    else if ((iVar1 == 1) && (*(longlong *)(param_1 + 0x180) != 0)) {
      FUN_142bc9a90(*(longlong *)(param_1 + 0x180),0);
    }
  }
  return iVar1;
}



// FUNCTION 1407190d0 FUN_1407190d0 body=135 status=ok
// SIG undefined FUN_1407190d0(void)

ulonglong FUN_1407190d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140719430();
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    iVar1 = *(int *)(param_1[0x1b] + 0x50 + *(longlong *)(param_2 + 8));
    if ((((iVar1 < 0) || ((int)param_1[0x2a] <= iVar1)) ||
        (lVar2 = *(longlong *)(param_1[0x29] + (longlong)iVar1 * 8), lVar2 == 0)) ||
       (uVar3 = *(ulonglong *)(lVar2 + 0xd8),
       *(char *)(uVar3 + 0x28 + *(longlong *)(param_2 + 8)) == '\x03')) {
      FUN_1406f4800(param_1,param_2);
      uVar3 = (**(code **)(*param_1 + 0x3f8))(param_1,param_2,0);
    }
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 140719160 FUN_140719160 body=201 status=ok
// SIG undefined FUN_140719160(void)

undefined1 FUN_140719160(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_1406f4f90();
  if (((0 < *(int *)(param_1 + 0x110)) || (0 < *(int *)(param_1 + 0x120))) &&
     (cVar2 = FUN_1406ecba0(param_1,uVar1), cVar2 == '\0')) {
    return uVar1;
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    uVar3 = FUN_1406faaf0(*(longlong *)(param_1 + 0x148),param_2);
    uVar1 = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0xd8) + 0x28 +
                 *(longlong *)(param_2 + 8)) == '\x03') {
      uVar1 = uVar3;
    }
    return uVar1;
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x120) < 1) {
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 140719230 FUN_140719230 body=509 status=ok
// SIG undefined FUN_140719230(void)

undefined1 FUN_140719230(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 uVar12;
  longlong *plVar13;
  
  uVar7 = FUN_1406f4f90();
  if ((*(int *)(param_1 + 0x110) < 1) && (*(int *)(param_1 + 0x120) < 1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar5) && (cVar8 = FUN_1406ecba0(param_1,uVar7), cVar8 == '\0')) {
    return uVar7;
  }
  plVar13 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar13 + *(int *)(param_1 + 0x150);
  uVar12 = 0;
  uVar7 = 1;
  for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
    lVar3 = *plVar13;
    if (lVar3 != 0) {
      lVar11 = USoundNodeEnveloper::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) break;
    }
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)*(int *)(param_1 + 0x150) * 8);
  if (plVar13 != plVar2) {
    bVar5 = false;
    uVar12 = 0;
    do {
      plVar4 = (longlong *)*plVar13;
      cVar8 = FUN_1406faaf0(plVar4,param_2);
      cVar9 = (**(code **)(*plVar4 + 0x2d0))();
      if (cVar9 != '\0') {
        if (cVar8 == '\x01') {
          if (*(char *)((longlong)plVar4 + 0x159) != '\0') {
            uVar12 = 1;
          }
        }
        else {
          uVar6 = 0;
          if (*(char *)((longlong)plVar4 + 0x15b) == '\0') {
            uVar6 = uVar7;
          }
          uVar7 = uVar6;
          if ((cVar8 != '\0') && (*(char *)((longlong)plVar4 + 0x15a) != '\0')) {
            bVar5 = true;
          }
        }
      }
      do {
        do {
          plVar13 = plVar13 + 1;
          if (plVar13 == plVar1) goto LAB_1407193d7;
          lVar3 = *plVar13;
        } while (lVar3 == 0);
        lVar11 = USoundNodeEnveloper::StaticClass();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
            lVar11 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
      } while (!bVar10);
LAB_1407193d7:
    } while (plVar13 != plVar2);
    if (bVar5) {
      return 2;
    }
  }
  if (*(char *)(param_1 + 0x160) != '\0') {
    uVar12 = uVar7;
  }
  return uVar12;
}



// FUNCTION 140719430 FUN_140719430 body=615 status=ok
// SIG undefined FUN_140719430(void)

ulonglong FUN_140719430(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  
  cVar2 = (**(code **)(*param_1 + 0x400))();
  uVar7 = 0;
  if (cVar2 == '\0') {
LAB_140719523:
    lVar8 = param_2[1] + param_1[0x1b];
    *(int *)(lVar8 + 0x58) = (int)param_2[3];
    iVar4 = *(int *)(lVar8 + 0x50);
    if ((iVar4 < 0) || ((int)param_1[0x2a] <= iVar4)) {
      iVar4 = (int)param_1[0x2a];
    }
    uVar6 = uVar7;
    if (0 < iVar4) {
      do {
        lVar1 = *(longlong *)(param_1[0x29] + uVar7 * 8);
        if ((lVar1 != 0) && (cVar2 = FUN_1406de170(lVar1,param_2), cVar2 != '\0')) {
          lVar5 = FUN_140711ee0(param_1,param_2);
          if (lVar5 != 0) {
            cVar2 = FUN_1406f7e60(lVar5,param_2,3);
            if (cVar2 == '\0') goto LAB_1407195bb;
          }
          cVar2 = FUN_1406f70d0(lVar1,param_2,param_1);
          if (cVar2 != '\0') {
            *(int *)(lVar8 + 0x50) = (int)uVar6;
            break;
          }
          *(undefined4 *)(lVar8 + 0x50) = 0xffffffff;
        }
LAB_1407195bb:
        uVar7 = uVar7 + 1;
        uVar6 = (ulonglong)((int)uVar6 + 1);
      } while ((longlong)uVar7 < (longlong)iVar4);
    }
  }
  else {
    lVar8 = param_2[1];
    lVar1 = param_1[0x1b];
    if (*(char *)(lVar8 + 0x28 + lVar1) != '\x02') goto LAB_140719523;
    iVar4 = *(int *)(lVar8 + 0x50 + lVar1);
    if ((((iVar4 < 1) || ((int)param_1[0x2a] <= iVar4)) ||
        (lVar5 = *(longlong *)(param_1[0x29] + (longlong)iVar4 * 8), lVar5 == 0)) ||
       (*(char *)(*(longlong *)(lVar5 + 0xd8) + 0x29 + lVar8) == '\x03')) goto LAB_140719523;
    if ((char)param_2[4] == '\0') {
      fVar9 = *(float *)(param_1 + 0x2c);
      if ((*(longlong *)(*param_2 + 0x5c8) == 0) ||
         (iVar4 = (**(code **)(*(longlong *)(*(longlong *)(*param_2 + 0x5c8) + 0x8c8) + 0x10))(),
         iVar4 != 1)) {
LAB_1407194fd:
        fVar9 = fVar9 + *(float *)(lVar8 + 0x58 + lVar1);
        if (fVar9 < *(float *)(param_2 + 3) || fVar9 == *(float *)(param_2 + 3)) goto LAB_14071950d;
      }
      else if ((char)param_1[0x2d] != '\0') {
        fVar9 = *(float *)((longlong)param_1 + 0x164);
        goto LAB_1407194fd;
      }
    }
    else {
LAB_14071950d:
      cVar2 = FUN_1406de2b0(lVar5,param_2,3);
      if (cVar2 != '\0') goto LAB_140719523;
    }
  }
  bVar3 = FUN_1406f4f90(param_1,param_2);
  if (((0 < (int)param_1[0x22]) || (0 < (int)param_1[0x24])) &&
     (cVar2 = FUN_1406ecba0(param_1,bVar3), cVar2 != '\x01')) {
LAB_14071966a:
    return (ulonglong)bVar3;
  }
  iVar4 = *(int *)(param_2[1] + 0x50 + param_1[0x1b]);
  if (((iVar4 < 0) || ((int)param_1[0x2a] <= iVar4)) ||
     (lVar8 = *(longlong *)(param_1[0x29] + (longlong)iVar4 * 8), lVar8 == 0)) {
    uVar7 = (ulonglong)bVar3;
  }
  else {
    uVar6 = FUN_1406faaf0(lVar8,param_2);
    uVar7 = uVar6 & 0xff;
    if ((char)uVar6 == '\x04') {
      return uVar6;
    }
    if (*(char *)(*(longlong *)(lVar8 + 0xd8) + 0x28 + param_2[1]) != '\x03') goto LAB_14071966a;
  }
                    /* WARNING: Could not recover jumptable at 0x000140719690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*param_1 + 0x3f8))(param_1,param_2,uVar7);
  return uVar7;
}



// FUNCTION 1407196a0 FUN_1407196a0 body=226 status=ok
// SIG undefined FUN_1407196a0(void)

ulonglong FUN_1407196a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  bVar2 = FUN_1406f4f90();
  if (((0 < (int)param_1[0x22]) || (0 < (int)param_1[0x24])) &&
     (cVar3 = FUN_1406ecba0(param_1,bVar2), cVar3 != '\x01')) {
    return (ulonglong)bVar2;
  }
  iVar1 = *(int *)(param_1[0x1b] + 0x50 + *(longlong *)(param_2 + 8));
  if (((iVar1 < 0) || ((int)param_1[0x2a] <= iVar1)) ||
     (lVar5 = *(longlong *)(param_1[0x29] + (longlong)iVar1 * 8), lVar5 == 0)) {
    lVar5 = *param_1;
    uVar6 = (ulonglong)bVar2;
  }
  else {
    uVar4 = FUN_1406faaf0(lVar5,param_2);
    uVar6 = uVar4 & 0xff;
    if ((char)uVar4 == '\x04') {
      return uVar4;
    }
    if (*(char *)(*(longlong *)(lVar5 + 0xd8) + 0x28 + *(longlong *)(param_2 + 8)) != '\x03') {
      return (ulonglong)bVar2;
    }
    lVar5 = *param_1;
  }
  uVar6 = (**(code **)(lVar5 + 0x3f8))(param_1,param_2,uVar6);
  return uVar6;
}



// FUNCTION 140719790 FUN_140719790 body=48 status=ok
// SIG undefined FUN_140719790(void)

undefined1 FUN_140719790(undefined8 param_1,undefined8 param_2)

{
  FUN_14070a240(param_1,param_2,0);
  BuildSettings::IsPromotedBuild(param_1,param_2);
  return 0;
}



// FUNCTION 1407197c0 FUN_1407197c0 body=181 status=ok
// SIG undefined FUN_1407197c0(void)

char FUN_1407197c0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
  if (*(char *)(lVar3 + 0x128) == '\0') {
    cVar1 = FUN_140719b30(param_1);
    if (cVar1 == '\x01') {
      lVar3 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar3 + 300);
      if (plVar2 != (longlong *)0x0) {
        *(undefined1 *)(lVar3 + 0x128) = 1;
        (**(code **)(*plVar2 + 0x5a0))(plVar2,3);
        return '\0';
      }
      return '\x02';
    }
  }
  else {
    lVar3 = FWeakObjectPtr::Get(lVar3 + 300);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x248) == '\x03')) {
      return '\0';
    }
    cVar1 = '\x01';
  }
  return cVar1;
}



// FUNCTION 140719880 DoesNeedTargeterRegister body=29 status=ok
// SIG undefined DoesNeedTargeterRegister(void)

undefined1 USkill_SwordAndShield_BaseSkill::DoesNeedTargeterRegister(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140720f90();
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 1407198a0 FUN_1407198a0 body=93 status=ok
// SIG undefined FUN_1407198a0(void)

void FUN_1407198a0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_140709e00();
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x298 + *(longlong *)(param_2 + 8));
  if (lVar2 != 0) {
    cVar1 = FUN_14073ce30(lVar2);
    if (cVar1 == '\0') {
      FUN_1406dfae0(param_1,param_2);
    }
  }
  FUN_1406f5ff0(param_1,param_2);
  return;
}



// FUNCTION 140719900 FUN_140719900 body=97 status=ok
// SIG undefined FUN_140719900(void)

undefined8 FUN_140719900(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FWeakObjectPtr::Get(param_2[1] + *(longlong *)(param_1 + 0xd8) + 100);
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    cVar1 = FUN_142fa8480();
    if (cVar1 != '\0') {
      uVar2 = FUN_14071aa90(param_1,param_2);
      return uVar2;
    }
  }
  return 2;
}



// FUNCTION 140719970 FUN_140719970 body=446 status=ok
// SIG undefined FUN_140719970(void)

undefined8 FUN_140719970(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined1 local_38 [32];
  
  lVar5 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  local_res8 = 0;
  FUN_142cc3a70(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),&local_res8);
  lVar2 = FUN_142dd9fb0(local_res8);
  lVar4 = 0;
  if ((lVar2 != 0) &&
     ((*(longlong *)(lVar2 + 0x910) == 0 ||
      ((*(uint *)(*(longlong *)(lVar2 + 0x910) + 0x840) >> 3 & 1) == 0)))) {
    lVar4 = lVar2;
  }
  FWeakObjectPtr::operator=(lVar5 + 0x74,lVar4);
  cVar1 = FWeakObjectPtr::IsValid(lVar5 + 0x74);
  if (cVar1 == '\0') {
    FUN_142cbcc90(param_1 + 0x298,*(undefined8 *)(*param_2 + 0x568));
    FUN_142cbcc90(param_1 + 0x288,*(undefined8 *)(*param_2 + 0x568));
    FUN_142cbcc90(param_1 + 0x278,*(undefined8 *)(*param_2 + 0x568));
    FUN_142cbcc90(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568));
    return 1;
  }
  if (*(float *)(lVar5 + 0xbc) < *(float *)(param_2 + 3)) {
    FUN_140721f30(param_1,param_2);
    FUN_140703d30(param_1,local_38,param_2);
    FUN_14071be40(param_1,param_2,local_38);
    cVar1 = FUN_140714650(lVar5 + 0x7c);
    if ((cVar1 == '\0') && (cVar1 = FUN_140714650(local_38), cVar1 == '\0')) {
      FUN_14070aa20(param_1,param_2);
      return 1;
    }
  }
  cVar1 = FUN_1407146d0(param_1,param_2);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_2[1] + 0x50 + *(longlong *)(param_1 + 0xd8));
    if (plVar3 == (longlong *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*plVar3 + 0x410))(plVar3);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  FUN_140717670(param_1,param_2,0);
  return 0;
}



// FUNCTION 140719b30 FUN_140719b30 body=302 status=ok
// SIG undefined FUN_140719b30(void)

undefined8 FUN_140719b30(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((*(longlong *)(lVar8 + 0x48) != 0) && (*(longlong *)(lVar8 + 0x50) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x50) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(lVar8 + 0x50);
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
        while (plVar7 = plVar6, !bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar8 + 0x48);
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
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
      if (cVar4 == '\0') {
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
        LOCK();
        plVar6 = plVar7 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) {
          return 0;
        }
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return 0;
        }
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return 0;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  if (*(int *)(lVar8 + 0x120) <= *(int *)(lVar8 + 0x124)) {
    return 1;
  }
  cVar4 = FUN_14071f7f0(param_1,param_2);
  if (cVar4 != '\0') {
    return 0;
  }
  return 2;
}



// FUNCTION 140719c60 FUN_140719c60 body=165 status=ok
// SIG undefined FUN_140719c60(void)

ulonglong FUN_140719c60(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  ulonglong in_RAX;
  
  if (*(char *)(param_1 + 0x194) != '\0') {
    FUN_140721b10();
    in_RAX = *(ulonglong *)(param_1 + 0xd8);
    lVar2 = *(longlong *)(param_2 + 8);
    fVar1 = *(float *)(in_RAX + 0x4c + lVar2);
    if ((-(float)DAT_14622e710 < fVar1) && (fVar1 < (float)DAT_14622e710)) {
      fVar1 = *(float *)(in_RAX + 0x50 + lVar2);
      if ((-DAT_14622e710._4_4_ < fVar1) && (fVar1 < DAT_14622e710._4_4_)) {
        fVar1 = *(float *)(in_RAX + 0x54 + lVar2);
        if ((-DAT_14622e718 < fVar1) && (fVar1 < DAT_14622e718)) goto LAB_140719cf8;
      }
    }
    return CONCAT71((int7)(in_RAX >> 8),2);
  }
LAB_140719cf8:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140719d10 FUN_140719d10 body=43 status=ok
// SIG undefined FUN_140719d10(void)

undefined1 FUN_140719d10(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140711ab0();
  if (cVar1 == '\0') {
    uVar2 = FUN_1406e9cc0(*(undefined1 *)(param_1 + 0x110));
    return uVar2;
  }
  return 0;
}



// FUNCTION 140719d40 FUN_140719d40 body=308 status=ok
// SIG undefined FUN_140719d40(void)

undefined8 FUN_140719d40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 == 0) {
LAB_140719e3b:
    uVar3 = 2;
  }
  else {
    cVar2 = FUN_142cc3a70(param_1 + 0x100,lVar1,&local_res10);
    if ((cVar2 == '\0') || (local_res10 == 0)) {
LAB_140719dc4:
      cVar2 = FUN_142cc54f0(param_1 + 0x100,lVar1,&local_38);
      if (cVar2 == '\0') goto LAB_140719e3b;
    }
    else {
      uVar3 = UNavAgentInterface::GetPrivateStaticClass();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(local_res10,uVar3);
      if (plVar4 == (longlong *)0x0) goto LAB_140719dc4;
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,local_28);
      local_38 = *puVar5;
      local_30 = *(undefined4 *)(puVar5 + 1);
    }
    if (*(char *)(param_1 + 0x340) == '\0') {
      cVar2 = FUN_14070bd20(param_1 + 0x118,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
      if (cVar2 == '\0') goto LAB_140719e3b;
    }
    else {
      if ((*(char *)(param_1 + 0x339) != '\0') &&
         (cVar2 = FUN_14070bd20(param_1 + 0x228,param_2,&local_38,*(undefined1 *)(param_1 + 0x110)),
         cVar2 != '\0')) {
        return 1;
      }
      if ((*(char *)(param_1 + 0x33a) != '\0') &&
         (cVar2 = FUN_14070bd20(param_1 + 0x2b0,param_2,&local_38,*(undefined1 *)(param_1 + 0x110)),
         cVar2 != '\0')) goto LAB_140719e3b;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140719e80 FUN_140719e80 body=140 status=ok
// SIG undefined FUN_140719e80(void)

ulonglong FUN_140719e80(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = param_2[1];
  lVar4 = (**(code **)(*(longlong *)*param_2 + 0x148))();
  fVar1 = *(float *)(lVar4 + 0x790);
  uVar5 = FUN_140713aa0(param_1,param_2);
  if ((char)uVar5 == '\0') {
    uVar5 = 2;
    if (fVar1 < *(float *)(param_1 + 0x114) + *(float *)(lVar3 + 0x48 + lVar2)) {
      uVar5 = 0;
    }
  }
  else {
    *(float *)(lVar3 + 0x48 + lVar2) = fVar1;
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}



// FUNCTION 140719f10 FUN_140719f10 body=199 status=ok
// SIG undefined FUN_140719f10(void)

void FUN_140719f10(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 100 + *(longlong *)(param_2 + 8));
  if (lVar2 != 0) {
    cVar1 = FUN_142cf3960(lVar2);
    if (cVar1 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146858a58) {
        _Init_thread_header(&DAT_146858a58);
        if (DAT_146858a58 == -1) {
          FName::FName(&DAT_146858a50,L"Land2",1);
          _Init_thread_footer(&DAT_146858a58);
        }
      }
      FUN_142cff920(lVar2,1,DAT_146858a50);
    }
  }
  FUN_14071aa90(param_1,param_2);
  return;
}



// FUNCTION 140719fe0 FUN_140719fe0 body=850 status=ok
// SIG undefined FUN_140719fe0(void)

undefined8 FUN_140719fe0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *pfVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 local_38 [32];
  
  lVar8 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar2 = FWeakObjectPtr::IsValid(lVar8 + 0x48);
  if (cVar2 == '\0') {
    return 2;
  }
  lVar7 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar2 = FWeakObjectPtr::IsValid(lVar7 + 0x60);
  if (cVar2 == '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x50);
    if (plVar4 == (longlong *)0x0) {
      if (*(float *)(lVar7 + 700) != 0.0) {
        bVar6 = *(float *)(param_2 + 3) - *(float *)(lVar7 + 700) < 3.0;
        goto LAB_14071a0bb;
      }
      *(float *)(lVar7 + 700) = *(float *)(param_2 + 3);
    }
    else {
      uVar3 = UScrollBox::GetPrivateStaticClass();
      uVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
      FWeakObjectPtr::operator=(lVar7 + 0x60,uVar3);
    }
  }
  else {
    *(undefined4 *)(lVar7 + 700) = 0;
    lVar7 = FWeakObjectPtr::Get(lVar7 + 0x60);
    bVar6 = (bool)(~(byte)(*(uint *)(lVar7 + 0x840) >> 3) & 1);
LAB_14071a0bb:
    if (bVar6 == false) goto LAB_14071a109;
  }
  FUN_140721c70(param_1,param_2);
  FUN_1407177f0(param_1,param_2);
  iVar1 = *(int *)(lVar8 + 0x29c);
  if (iVar1 == 0) {
    bVar6 = *(int *)(lVar8 + 0x298) == 2;
LAB_14071a253:
    if (bVar6) goto LAB_14071a260;
LAB_14071a255:
    FUN_140714a00(param_1,param_2);
  }
  else {
    if (iVar1 == 1) {
      lVar7 = param_2[1] + *(longlong *)(param_1 + 0xd8);
      if ((*(int *)(lVar7 + 0x29c) == 1) &&
         (cVar2 = FWeakObjectPtr::IsValid(lVar7 + 0x50), cVar2 != '\0')) {
        if (*(char *)(lVar7 + 0x1a4) == '\0') {
          if (*(int *)(lVar7 + 0x298) == 1) goto LAB_14071a152;
        }
        else if (*(int *)(lVar7 + 0x298) == 3) {
          FUN_140712fa0(param_1,param_2);
          goto LAB_14071a260;
        }
        plVar4 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x50);
        pfVar5 = (float *)(**(code **)(*plVar4 + 0x308))(plVar4,local_38);
        if ((10.0 < ABS(pfVar5[1] * *(float *)(lVar7 + 0x244) + *pfVar5 * *(float *)(lVar7 + 0x240)
                        + pfVar5[2] * *(float *)(lVar7 + 0x248))) || (*(int *)(lVar7 + 0x298) != 2))
        {
          fVar9 = *(float *)(lVar8 + 0x28c) - *(float *)(lVar8 + 0x294);
          if (*(char *)(lVar8 + 0x1a4) == '\0') {
            bVar6 = 0.0 < fVar9;
          }
          else {
            bVar6 = fVar9 <= 0.0;
          }
          if (!bVar6) {
            cVar2 = FUN_1407144b0(param_1,param_2);
            bVar6 = cVar2 == '\0';
            goto LAB_14071a253;
          }
          goto LAB_14071a255;
        }
      }
    }
    else {
      if (iVar1 != 2) {
        if ((iVar1 == 3) && (cVar2 = FUN_1407144b0(param_1,param_2), cVar2 != '\0')) {
LAB_14071a109:
          FUN_14070aa80(param_1,param_2);
          FUN_14070c610(param_1,param_2);
          return 2;
        }
        goto LAB_14071a260;
      }
      cVar2 = FUN_140713bb0(param_1,param_2);
      if (cVar2 != '\0') goto LAB_14071a260;
    }
LAB_14071a152:
    FUN_140712fa0(param_1,param_2);
  }
LAB_14071a260:
  if ((*(int *)(lVar8 + 0x29c) == 3) && (cVar2 = FUN_140761c70(lVar8 + 0x1a8), cVar2 == '\0')) {
    return 2;
  }
  if (*(int *)(lVar8 + 0x29c) == 0) {
    return 1;
  }
  lVar8 = param_2[1];
  lVar7 = *(longlong *)(param_1 + 0xd8);
  if ((*(int *)(lVar8 + 0x29c + lVar7) == 1) &&
     ((*(longlong *)(*param_2 + 0x628) == 0 ||
      (cVar2 = FUN_142fa7fe0(*(longlong *)(*param_2 + 0x628) + 0x9e8), cVar2 == '\0')))) {
    if ((*(longlong *)(*param_2 + 0x628) == 0) || (cVar2 = FUN_142fa53c0(), cVar2 != '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      fVar9 = *(float *)((longlong)param_2 + 0x1c) + *(float *)(lVar8 + 0x2a0 + lVar7);
      *(float *)(lVar8 + 0x2a0 + lVar7) = fVar9;
      if (10.0 <= fVar9) {
        *(undefined4 *)(lVar8 + 0x2a0 + lVar7) = 0;
        FUN_14071cd80(param_1,param_2);
      }
      return 0;
    }
  }
  *(undefined4 *)(lVar8 + 0x2a0 + lVar7) = 0;
  return 0;
}



// FUNCTION 14071a340 FUN_14071a340 body=254 status=ok
// SIG undefined FUN_14071a340(void)

undefined8 FUN_14071a340(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((*(longlong *)(lVar7 + 0x50) != 0) && (*(longlong *)(lVar7 + 0x58) != 0)) {
    plVar5 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x58) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(lVar7 + 0x58);
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
        while (plVar6 = plVar5, !bVar8) {
          LOCK();
          bVar8 = iVar4 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar6 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar5 = *(longlong **)(lVar7 + 0x50);
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
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
      if (cVar3 == '\0') {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        return 0;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
  }
  return 1;
}



// FUNCTION 14071a440 FUN_14071a440 body=133 status=ok
// SIG undefined FUN_14071a440(void)

undefined1 FUN_14071a440(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x100) != '\0') {
    lVar4 = FUN_142ddddc0(*param_2);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0xd8);
      lVar2 = param_2[1];
      lVar4 = FUN_142dcd660(lVar4,0);
      lVar1 = FWeakObjectPtr::Get(lVar1 + lVar2 + 0x48);
      if (lVar4 != lVar1) {
        return 2;
      }
    }
  }
  uVar3 = BuildSettings::IsPromotedBuild(param_1,param_2);
  return uVar3;
}



// FUNCTION 14071a4d0 FUN_14071a4d0 body=527 status=ok
// SIG undefined FUN_14071a4d0(void)

ulonglong FUN_14071a4d0(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 local_48;
  float fStack_44;
  uint local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  uVar6 = in_RAX & 0xffffffffffffff00;
  fVar1 = *(float *)(param_1 + 0x144);
  fVar2 = *(float *)(param_2 + 3);
  fVar3 = *(float *)(param_1 + 0x148);
  if (*(float *)(param_1 + 0x148) < fVar1) {
    *(float *)(param_1 + 0x148) = fVar1;
    uVar6 = CONCAT71((int7)(in_RAX >> 8),1);
    fVar3 = fVar1;
  }
  if ((0.0 < fVar2) &&
     (((char)uVar6 != '\0' ||
      (*(float *)(param_1 + 0x108) <= fVar2 - fVar3 && fVar2 - fVar3 != *(float *)(param_1 + 0x108))
      ))) {
    local_38 = *(undefined8 *)(param_1 + 0x138);
    local_40 = *(uint *)(param_1 + 0x140);
    local_48 = (undefined4)local_38;
    fVar1 = *(float *)(param_1 + 0x100);
    fStack_44 = (float)((ulonglong)local_38 >> 0x20);
    iVar8 = (int)(*(float *)(param_1 + 0x104) - fVar1);
    local_30 = (float)local_40;
    if (iVar8 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = rand();
      iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar8);
      fVar1 = *(float *)(param_1 + 0x100);
      iVar4 = iVar8 + -1;
      if (iVar5 <= iVar8 + -1) {
        iVar4 = iVar5;
      }
    }
    iVar8 = rand();
    iVar5 = (int)((float)iVar8 * 3.051851e-05 + (float)iVar8 * 3.051851e-05);
    iVar8 = 1;
    if (iVar5 < 2) {
      iVar8 = iVar5;
    }
    iVar5 = -(int)((float)iVar4 + fVar1);
    if (iVar8 != 1) {
      iVar5 = (int)((float)iVar4 + fVar1);
    }
    fStack_44 = fStack_44 + (float)iVar5;
    pfVar7 = (float *)FRotator::Vector(&local_48,&local_28);
    local_30 = pfVar7[2] * 10000.0 + *(float *)(param_1 + 0x128);
    local_38 = CONCAT44(pfVar7[1] * 10000.0 + *(float *)(param_1 + 0x124),
                        *pfVar7 * 10000.0 + *(float *)(param_1 + 0x120));
    if (*(longlong *)(*param_2 + 0x568) != 0) {
      local_28 = local_38;
      local_20 = local_30;
      FUN_142cd0df0(param_1 + 0x110,*(longlong *)(*param_2 + 0x568),&local_28);
    }
    uVar6 = (ulonglong)local_40;
    *(ulonglong *)(param_1 + 0x138) = CONCAT44(fStack_44,local_48);
    *(uint *)(param_1 + 0x140) = local_40;
    *(float *)(param_1 + 0x148) = fVar2;
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14071a6e0 FUN_14071a6e0 body=150 status=ok
// SIG undefined FUN_14071a6e0(void)

undefined8 FUN_14071a6e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x291) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    lVar2 = param_2[1];
    if (*(char *)(param_1 + 0x180) != '\0') {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar3 = (float)FUN_142de77e0(param_1 + 0x100,*param_2,0,&local_res8);
      if (0.5 <= fVar3) {
        return 0;
      }
    }
    if ((*(char *)(param_1 + 0x290) == '\0') ||
       (fVar3 = *(float *)(lVar1 + lVar2 + 0x50),
       fVar3 < *(float *)(param_2 + 3) || fVar3 == *(float *)(param_2 + 3))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14071a780 FUN_14071a780 body=555 status=ok
// SIG undefined FUN_14071a780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14071a780(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  float local_38;
  float fStack_34;
  undefined8 local_28;
  float local_20;
  
  FUN_14071aa90();
  lVar3 = ((longlong *)*param_2)[0x91];
  uVar7 = 0;
  if (lVar3 == 0) goto LAB_14071a98f;
  lVar3 = *(longlong *)(lVar3 + 0x168);
  if (lVar3 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar3 + 0x220);
    local_20 = *(float *)(lVar3 + 0x228);
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar4 = param_2[1];
  fVar1 = *(float *)(lVar3 + 100 + lVar4);
  if ((((fVar1 <= -(float)DAT_14622e710) || ((float)DAT_14622e710 <= fVar1)) ||
      (fVar2 = *(float *)(lVar3 + 0x68 + lVar4), fVar2 <= -DAT_14622e710._4_4_)) ||
     (((DAT_14622e710._4_4_ <= fVar2 ||
       (fVar2 = *(float *)(lVar3 + 0x6c + lVar4), fVar2 <= -DAT_14622e718)) ||
      (DAT_14622e718 <= fVar2)))) {
LAB_14071a905:
    FUN_140721750(param_1,param_2);
    lVar6 = (**(code **)(*(longlong *)*param_2 + 0x148))();
    uVar7 = 0;
    if (lVar6 == 0) goto LAB_14071a98f;
    uVar7 = (ulonglong)*(uint *)(lVar6 + 0x790);
    *(uint *)(lVar3 + 0x7c + lVar4) = *(uint *)(lVar6 + 0x790);
  }
  else {
    local_38 = (float)local_28;
    fStack_34 = (float)((ulonglong)local_28 >> 0x20);
    fStack_34 = fStack_34 - *(float *)(lVar3 + 0x68 + lVar4);
    local_20 = local_20 - *(float *)(lVar3 + 0x6c + lVar4);
    if (*(float *)(param_1 + 0x288) * *(float *)(param_1 + 0x288) <=
        fStack_34 * fStack_34 + (local_38 - fVar1) * (local_38 - fVar1) + local_20 * local_20)
    goto LAB_14071a905;
    lVar6 = (**(code **)(*(longlong *)*param_2 + 0x148))();
    uVar7 = 0;
    if ((lVar6 != 0) &&
       (bVar5 = *(float *)(lVar3 + 0x7c + lVar4) + 2.0 < *(float *)(lVar6 + 0x790),
       uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),bVar5), bVar5)) goto LAB_14071a905;
  }
  fVar1 = *(float *)(lVar3 + 0x70 + lVar4);
  if (((((-(float)DAT_14622e710 < fVar1) && (fVar1 < (float)DAT_14622e710)) &&
       (fVar1 = *(float *)(lVar3 + 0x74 + lVar4), -DAT_14622e710._4_4_ < fVar1)) &&
      ((fVar1 < DAT_14622e710._4_4_ &&
       (fVar1 = *(float *)(lVar3 + 0x78 + lVar4), -DAT_14622e718 < fVar1)))) &&
     (fVar1 < DAT_14622e718)) {
    return CONCAT71((int7)(uVar7 >> 8),*(char *)(lVar3 + 0x60 + lVar4) != '\0');
  }
LAB_14071a98f:
  return CONCAT71((int7)(uVar7 >> 8),2);
}



// FUNCTION 14071a9b0 FUN_14071a9b0 body=216 status=ok
// SIG undefined FUN_14071a9b0(void)

undefined1 FUN_14071a9b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_d8 [208];
  
  lVar1 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 0xd8);
  cVar3 = FUN_14071aa90();
  if (cVar3 == '\x01') {
    return 1;
  }
  if (*(float *)(param_1 + 0x35c) == 0.0) {
    lVar5 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    if (*(float *)(param_1 + 0x358) <= *(float *)(param_2 + 3) - *(float *)(lVar5 + 0x128)) {
      uVar4 = FUN_140705cd0(param_1,local_d8,param_2);
      FUN_142f8c200(lVar5 + 0x60,uVar4);
      FUN_142f8b770(local_d8);
    }
    if ((*(longlong *)(*param_2 + 0x628) == 0) ||
       (cVar3 = FUN_142f958b0(*(longlong *)(*param_2 + 0x628) + 0x9e8,
                              *(undefined8 *)(lVar1 + lVar2 + 0x94)), cVar3 != '\x01')) {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 14071aa90 FUN_14071aa90 body=346 status=ok
// SIG undefined FUN_14071aa90(void)

undefined1 FUN_14071aa90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar6 = param_1[0x1b] + param_2[1];
  if (((*(longlong *)(lVar6 + 0x48) != 0) && (cVar2 = FUN_14070a100(), cVar2 != '\0')) &&
     (lVar1 = *(longlong *)(*param_2 + 0x628), lVar1 != 0)) {
    if ((char)param_1[0x40] == '\0') {
      FUN_142fb8fb0(*(undefined8 *)(lVar6 + 0x48),lVar1 + 0x6e8);
      cVar2 = FUN_142fa58d0(*(undefined8 *)(lVar6 + 0x48));
      if (((cVar2 == '\0') &&
          (cVar2 = FUN_14070b3f0(param_1,param_2,*(undefined8 *)(lVar6 + 0x48)), cVar2 != '\0')) ||
         ((cVar2 = FUN_142fa58d0(*(undefined8 *)(lVar6 + 0x48)), cVar2 == '\0' &&
          (cVar2 = FUN_1407c3030(*(undefined8 *)(lVar6 + 0x48)), cVar2 == '\0')))) {
        return 0;
      }
      cVar2 = (**(code **)(*param_1 + 0x3b0))(param_1,param_2,*(undefined8 *)(lVar6 + 0x48));
      if (cVar2 != '\0') {
        return 1;
      }
    }
    else {
      cVar2 = FUN_142fa8a40(*(undefined8 *)(lVar6 + 0x48));
      if (cVar2 != '\0') {
        if (*(int *)(lVar6 + 0x58) == -1) {
          if (*(char *)((longlong)param_1 + 0x205) != '\0') {
            cVar2 = FUN_142fae860(lVar1,*(undefined8 *)(lVar6 + 0x48));
            if (cVar2 != '\0') {
              return 1;
            }
            if ((char)param_1[0x40] != '\0') {
              uVar3 = FUN_14071ccd0(param_1,param_2);
              return uVar3;
            }
          }
        }
        else {
          cVar2 = FUN_142fae860(lVar1,*(undefined8 *)(lVar6 + 0x48));
          if (cVar2 != '\0') {
            return 1;
          }
          iVar4 = FUN_142eb7a00(lVar1);
          if (iVar4 != 0) {
            piVar5 = (int *)FUN_142f9f060(lVar1,local_res8);
            uVar3 = 0;
            if (*piVar5 != *(int *)(lVar6 + 0x58)) {
              uVar3 = 4;
            }
            return uVar3;
          }
        }
      }
    }
  }
  return 2;
}



// FUNCTION 14071abf0 FUN_14071abf0 body=47 status=ok
// SIG undefined FUN_14071abf0(void)

void FUN_14071abf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14071aa90();
  if (cVar1 == '\x01') {
    FUN_140705b90(param_1,param_2);
  }
  return;
}



// FUNCTION 14071ac20 FUN_14071ac20 body=320 status=ok
// SIG undefined FUN_14071ac20(void)

undefined8 FUN_14071ac20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char extraout_AL;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = FUN_14075eaf0(*param_2);
  if (lVar5 == 0) {
    return 2;
  }
  lVar7 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  cVar3 = FUN_140761900(lVar5 + 0x27a8,*param_2,*(undefined4 *)(lVar7 + 0x48));
  lVar1 = DAT_146858990;
  if (cVar3 != '\0') {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    lVar5 = 4;
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    lVar2 = DAT_1468589a8;
    if ((float)*(int *)(lVar6 + lVar1) < *(float *)(param_2 + 3) - *(float *)(lVar7 + 0x4c)) {
      FUN_1415ad720(&DAT_1468e2448);
      if (((extraout_AL != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
        lVar5 = 0;
      }
      *(float *)(lVar7 + 0x50) = (float)*(int *)(lVar5 + lVar2) + *(float *)(param_2 + 3);
      return 2;
    }
    return 0;
  }
  cVar3 = FUN_1407618b0(lVar5 + 0x27a8,*param_2,*(undefined4 *)(lVar7 + 0x48));
  if (cVar3 == '\0') {
    return 2;
  }
  return 1;
}



// FUNCTION 14071ad70 FUN_14071ad70 body=440 status=ok
// SIG undefined FUN_14071ad70(void)

char FUN_14071ad70(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined1 local_d8 [208];
  
  lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar1 = FUN_14071aa90();
  if (cVar1 != '\x01') {
    if (((cVar1 == '\0') && (*(char *)(lVar3 + 0x60) != '\x02')) &&
       (lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8),
       *(float *)(param_1 + 0x558) <= *(float *)(param_2 + 3) - *(float *)(lVar3 + 0x130))) {
      uVar2 = FUN_140706fa0(param_1,local_d8,param_2);
      FUN_142f8c200(lVar3 + 0x68,uVar2);
      FUN_142f8b770(local_d8);
    }
    return cVar1;
  }
  cVar1 = *(char *)(lVar3 + 0x60);
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar3 + 0x60) = 2;
    uVar2 = FUN_140706fa0(param_1,local_d8,param_2);
    FUN_142f8c200(lVar3 + 0x68,uVar2);
    FUN_142f8b770(local_d8);
    if (*(int *)(param_1 + 0x578) < 1) {
      return '\0';
    }
    local_100 = *param_2;
    uStack_110 = param_2[1];
    local_108 = param_2[2];
    local_f8 = *(undefined8 *)(local_100 + 0x5c8);
    param_1 = param_1 + 0x570;
  }
  else {
    *(undefined1 *)(lVar3 + 0x60) = 1;
    if (cVar1 == '\x02') {
      return '\x01';
    }
    uVar2 = FUN_140706fa0(param_1,local_d8,param_2);
    FUN_142f8c200(lVar3 + 0x68,uVar2);
    FUN_142f8b770(local_d8);
    if (*(int *)(param_1 + 0x568) < 1) {
      return '\0';
    }
    local_100 = *param_2;
    uStack_110 = param_2[1];
    local_108 = param_2[2];
    local_f8 = *(undefined8 *)(local_100 + 0x5c8);
    param_1 = param_1 + 0x560;
  }
  local_118 = (undefined4)local_100;
  uStack_114 = (undefined4)((ulonglong)local_100 >> 0x20);
  local_f0 = local_118;
  uStack_ec = uStack_114;
  uStack_e8 = (undefined4)uStack_110;
  uStack_e4 = uStack_110._4_4_;
  local_e0 = local_108;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_100);
  return '\0';
}



// FUNCTION 14071af30 FUN_14071af30 body=242 status=ok
// SIG undefined FUN_14071af30(void)

char FUN_14071af30(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar2 = FWeakObjectPtr::Get(lVar3 + 300);
  if (lVar2 == 0) {
    cVar1 = '\x02';
  }
  else {
    cVar1 = FUN_142cf3960(lVar2);
    if (cVar1 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146858b48) &&
         (_Init_thread_header(&DAT_146858b48), DAT_146858b48 == -1)) {
        FName::FName(&DAT_146858b40,L"TakeOff2",1);
        _Init_thread_footer(&DAT_146858b48);
      }
      FUN_142cff920(lVar2,0,DAT_146858b40);
    }
    if (*(char *)(lVar3 + 0x128) != '\0') {
      cVar1 = FUN_140719b30(param_1,param_2);
      if (cVar1 != '\x01') {
        return cVar1;
      }
      *(undefined1 *)(lVar3 + 0x128) = 0;
    }
    cVar1 = '\x01';
  }
  return cVar1;
}



// FUNCTION 14071b030 FUN_14071b030 body=968 status=ok
// SIG undefined FUN_14071b030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14071b030(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  
  lVar12 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  if (*(char *)(lVar12 + 0x6c) == '\x01') {
    uVar8 = FWeakObjectPtr::Get(lVar12 + 0x70);
    cVar6 = FUN_14073ca30(uVar8);
    if (((cVar6 == '\0') && (cVar6 = FUN_14073d040(uVar8), cVar6 == '\0')) &&
       (cVar6 = FUN_14073ca20(uVar8), cVar6 == '\0')) {
      return 4;
    }
  }
  do {
    lVar3 = param_2[1];
    lVar4 = *(longlong *)(param_1 + 0xd8);
    cVar6 = *(char *)(lVar3 + 0x6c + lVar4);
    if (cVar6 == '\0') {
      lVar9 = FWeakObjectPtr::Get(lVar4 + 0x70 + lVar3);
      if (lVar9 != 0) {
        FUN_140736900(lVar9,1);
      }
      *(undefined1 *)(lVar3 + 0x6c + lVar4) = 1;
    }
    else if (cVar6 == '\x01') {
      lVar9 = FWeakObjectPtr::Get(lVar4 + 0x70 + lVar3);
      if ((lVar9 == 0) ||
         ((cVar7 = FUN_14073ca30(lVar9), cVar7 != '\0' &&
          (cVar7 = FUN_14073d040(lVar9), cVar7 == '\0')))) {
        if ((*(char *)(param_1 + 0x110) == '\0') ||
           (((*(char *)(lVar3 + 0x6d + lVar4) == '\0' &&
             (cVar7 = FUN_14070bf00(param_1,param_2), cVar7 != '\0')) &&
            (cVar7 = FUN_140709e90(param_1,param_2), cVar7 != '\0')))) {
          lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
          *(undefined4 *)(lVar11 + 0x88) = 7;
          lVar9 = *param_2;
          lVar5 = *(longlong *)(lVar9 + 0x5c8);
          if (*(char *)(param_1 + 0x1a8) == '\0') {
            if (lVar5 == 0) {
              fVar13 = 0.0;
            }
            else {
              local_res10 = *(undefined8 *)(lVar9 + 0x568);
              fVar13 = (float)FUN_142de77e0(param_1 + 0x128,lVar9,0,&local_res10);
            }
            *(float *)(lVar11 + 0x80) = fVar13;
            if (0.0 < fVar13) {
              *(undefined4 *)(lVar11 + 0x84) = 0;
              lVar9 = *(longlong *)(lVar5 + 0x168);
              if (lVar9 == 0) {
                local_4c = DAT_1468b5d98;
                puVar10 = &local_54;
                local_54 = _DAT_1468b5d90;
              }
              else {
                puVar10 = (undefined8 *)&local_6c;
                local_6c = *(undefined4 *)(lVar9 + 0x220);
                local_64 = *(undefined4 *)(lVar9 + 0x228);
                local_68 = *(undefined4 *)(lVar9 + 0x224);
              }
              goto LAB_14071b346;
            }
          }
          else {
            if (lVar5 == 0) {
              fVar13 = 0.0;
            }
            else {
              local_res8 = *(undefined8 *)(lVar9 + 0x568);
              fVar13 = (float)FUN_142de77e0(param_1 + 0x1b0,lVar9,0,&local_res8);
            }
            *(float *)(lVar11 + 0x8c) = fVar13;
            if (0.0 < fVar13) {
              lVar9 = *(longlong *)(lVar5 + 0x168);
              if (lVar9 == 0) {
                local_58 = DAT_1468b5d98;
                puVar10 = &local_60;
                local_60 = _DAT_1468b5d90;
              }
              else {
                puVar10 = (undefined8 *)&local_78;
                local_78 = *(undefined4 *)(lVar9 + 0x220);
                local_70 = *(undefined4 *)(lVar9 + 0x228);
                uStack_74 = *(undefined4 *)(lVar9 + 0x224);
              }
LAB_14071b346:
              uVar2 = *(undefined4 *)(puVar10 + 1);
              *(undefined8 *)(lVar11 + 0x48) = *puVar10;
              *(undefined4 *)(lVar11 + 0x50) = uVar2;
              lVar9 = *(longlong *)(lVar5 + 0x900);
              if (lVar9 != 0) {
                bVar1 = *(byte *)(lVar9 + 0x248);
                *(uint *)(lVar11 + 0x88) = (uint)bVar1;
                FUN_142cff920(lVar9,bVar1 != 5);
                FUN_142dafbc0(lVar9 + 0x8b0,&DAT_1468589b8);
              }
              *(undefined1 *)(lVar3 + 0x6c + lVar4) = 2;
              goto LAB_14071b3be;
            }
          }
LAB_14071b140:
          FUN_14071d160(param_1,param_2);
        }
        lVar9 = FWeakObjectPtr::Get(param_2[1] + 0x70 + *(longlong *)(param_1 + 0xd8));
        if (lVar9 != 0) {
          FUN_140736920(lVar9,1);
        }
        *(undefined1 *)(lVar3 + 0x6c + lVar4) = 3;
      }
    }
    else if (cVar6 == '\x02') {
      cVar7 = FUN_140722330(param_1,param_2);
      if (cVar7 == '\0') goto LAB_14071b140;
    }
    else if ((cVar6 == '\x03') &&
            ((lVar9 = FWeakObjectPtr::Get(lVar4 + 0x70 + lVar3), lVar9 == 0 ||
             ((cVar7 = FUN_14073ca30(lVar9), cVar7 == '\0' &&
              (cVar7 = FUN_14073d040(lVar9), cVar7 == '\0')))))) {
      FUN_14070a990(param_1,param_2);
      *(undefined1 *)(lVar3 + 0x6c + lVar4) = 4;
    }
LAB_14071b3be:
    if (*(char *)(lVar3 + 0x6c + lVar4) == cVar6) {
      return *(char *)(lVar12 + 0x6c) == '\x04';
    }
  } while( true );
}



// FUNCTION 14071b400 DeleteFriendsList body=16 status=ok
// SIG undefined DeleteFriendsList(void)

undefined1 FOnlineFriendsInterfaceSynthetic::DeleteFriendsList(void)

{
  FUN_140722250();
  return 0;
}



// FUNCTION 14071b410 FUN_14071b410 body=133 status=ok
// SIG undefined FUN_14071b410(void)

undefined1 FUN_14071b410(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x224) != '\0') {
    lVar3 = FUN_14075eaf0(*param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_140712d90(param_1 + 0x100,param_2);
      cVar2 = FUN_140761b20(lVar3 + 0x48,*(undefined8 *)(param_1 + 0x208),*param_2,
                            *(undefined1 *)(param_1 + 0x101),uVar1);
      if (cVar2 == '\0') {
        return 4;
      }
    }
  }
  return 0;
}



// FUNCTION 14071b4e0 FUN_14071b4e0 body=50 status=ok
// SIG undefined FUN_14071b4e0(void)

undefined1 FUN_14071b4e0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1406e8e60(param_1 + 0x100);
  if (cVar1 == '\0') {
    uVar2 = FUN_1406e9cc0(*(undefined1 *)(param_1 + 0x210));
    return uVar2;
  }
  return 0;
}



// FUNCTION 14071b560 FUN_14071b560 body=142 status=ok
// SIG undefined FUN_14071b560(void)

undefined1 FUN_14071b560(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x58 + *(longlong *)(param_2 + 8));
  if (lVar2 != 0) {
    cVar1 = FUN_14073cf40(lVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_14073aa50(lVar2);
      if (cVar1 == '\0') {
        return 1;
      }
    }
    cVar1 = FUN_14071bd20(param_1,param_2);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 2;
}



// FUNCTION 14071b5f0 FUN_14071b5f0 body=65 status=ok
// SIG undefined FUN_14071b5f0(void)

char FUN_14071b5f0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_140719b30();
  if (cVar1 == '\0') {
    if (*(longlong *)(*param_2 + 0x630) != 0) {
      cVar1 = FSimulationThreadWorker::Init(*(longlong *)(*param_2 + 0x630) + 0x1e8);
      if (cVar1 != '\0') {
        return '\0';
      }
    }
    cVar1 = '\x02';
  }
  return cVar1;
}



// FUNCTION 14071b640 FUN_14071b640 body=21 status=ok
// SIG undefined FUN_14071b640(void)

char FUN_14071b640(void)

{
  char cVar1;
  
  cVar1 = FUN_140722570();
  return (cVar1 == '\0') + '\x01';
}



// FUNCTION 14071b670 FUN_14071b670 body=225 status=ok
// SIG undefined FUN_14071b670(void)

longlong FUN_14071b670(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x188), lVar1 != 0)) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
    lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar5 + 0x30) = 0;
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x510) + 0x28))(lVar1 + 0x510);
    FUN_142b79770(lVar5,lVar1 + 0x510,uVar2);
    *(longlong *)(lVar5 + 0x68) = param_1;
    *(undefined8 *)(lVar5 + 0x70) = param_2;
    return lVar5;
  }
  return 0;
}



// FUNCTION 14071b760 FUN_14071b760 body=162 status=ok
// SIG undefined FUN_14071b760(void)

undefined8 FUN_14071b760(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_1 + 0x668))();
  if (lVar2 != 0) {
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
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
      uVar4 = *(undefined8 *)(lVar2 + 0x608);
      goto LAB_14071b7eb;
    }
  }
  uVar4 = AGBlizzard::GetPrivateStaticClass();
  uVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
LAB_14071b7eb:
  uVar4 = FUN_14071b670(uVar4,param_2);
  return uVar4;
}



// FUNCTION 14071b810 FUN_14071b810 body=20 status=ok
// SIG undefined FUN_14071b810(void)

undefined8 FUN_14071b810(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_14071b670(*(undefined8 *)(param_1 + 0x608));
  return uVar1;
}



// FUNCTION 14071b830 FUN_14071b830 body=323 status=ok
// SIG undefined FUN_14071b830(void)

undefined8 FUN_14071b830(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = FUN_1428dfc70();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = (**(code **)(*param_1 + 0x668))(param_1);
    if (lVar2 != 0) {
      lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
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
        uVar4 = FUN_14071b670(*(undefined8 *)(lVar2 + 0x608),param_2);
        return uVar4;
      }
    }
    uVar4 = AGBlizzard::GetPrivateStaticClass();
    uVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
    uVar4 = FUN_14071b670(uVar4,param_2);
    return uVar4;
  }
  lVar2 = AGBlizzard::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    param_1 = (longlong *)0x0;
  }
  uVar4 = FUN_14071b670(param_1,param_2);
  return uVar4;
}



// FUNCTION 14071b980 FUN_14071b980 body=90 status=ok
// SIG undefined FUN_14071b980(void)

void FUN_14071b980(longlong param_1,longlong *param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_14622e730);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xe8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_140713060(param_1);
  }
  thunk_FUN_1422f8fd0(param_1,param_2);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 14071b9e0 FUN_14071b9e0 body=82 status=ok
// SIG undefined FUN_14071b9e0(void)

void FUN_14071b9e0(longlong param_1,longlong *param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_14622e740);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xe8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_140713060(param_1);
  }
  thunk_FUN_1422f8fd0(param_1,param_2);
  return;
}



// FUNCTION 14071ba40 FUN_14071ba40 body=735 status=ok
// SIG undefined FUN_14071ba40(void)

undefined8
FUN_14071ba40(longlong param_1,byte param_2,longlong *param_3,byte *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_50 [40];
  
  if (param_3 != (longlong *)0x0) {
    plVar6 = (longlong *)USafeZone::GetPrivateStaticClass();
    plVar12 = param_3;
    do {
      if (plVar12 == plVar6) {
        if (1 < param_2) {
          return 0;
        }
        plVar12 = (longlong *)param_3[0x1f];
        if (plVar12 == (longlong *)0x0) {
          (**(code **)(*param_3 + 0x368))(param_3);
          plVar12 = (longlong *)param_3[0x1f];
        }
        if ((param_2 != 0) || (plVar12 != *(longlong **)(param_1 + 0x2d8))) {
          if (*(char *)((ulonglong)param_2 * 0x30 + 0x2f8 + param_1) == '\0') {
            FUN_14070a590(param_1,param_2,4);
            if (plVar12 == (longlong *)0x0) {
              return 0;
            }
            lVar10 = *(longlong *)(param_1 + 0x188);
            if (lVar10 == 0) {
              return 0;
            }
            lVar7 = ARemnantWeaponMod::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
              return 0;
            }
            uVar8 = (**(code **)(*plVar12 + 0x308))(plVar12,8);
            lVar7 = FUN_1406dcc80(uVar8);
            if (lVar7 == 0) {
              return 0;
            }
            FUN_1406d48b0(local_78,lVar10,lVar7,uVar8);
            FUN_1406e7a20(plVar12,local_78);
            if (((*(int *)(param_4 + 8) == 0) || (*(longlong **)param_4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(**(longlong **)param_4 + 0x18))(), cVar5 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              TBaseDelegate<FSlateBrush_const_*>::operator=(plVar12[0x1b] + local_70 + 8,param_4);
            }
            puVar9 = (undefined8 *)(((ulonglong)param_2 + 0xf) * 0x30 + param_1);
            puVar9[1] = plVar12;
            puVar9[3] = uVar8;
            puVar9[4] = lVar7;
            *puVar9 = param_5;
            uVar13 = (ulonglong)*(byte *)(param_1 + 0x330);
            if (*(byte *)(param_1 + 0x330) < param_2) goto LAB_14071bca0;
            goto LAB_14071bd09;
          }
          iVar3 = *(int *)(param_1 + 0x390);
          *(int *)(param_1 + 0x390) = iVar3 + 1;
          if (*(int *)(param_1 + 0x394) < iVar3 + 1) {
            FUN_140717ed0(param_1 + 0x338,iVar3);
          }
          lVar10 = *(longlong *)(param_1 + 0x388);
          if (*(longlong *)(param_1 + 0x388) == 0) {
            lVar10 = param_1 + 0x338;
          }
          pbVar2 = (byte *)(lVar10 + (longlong)iVar3 * 0x28);
          pbVar1 = pbVar2 + 0x10;
          *pbVar2 = param_2;
          pbVar2[1] = 0;
          *(longlong **)(pbVar2 + 8) = param_3;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar2[0x18] = 0;
          pbVar2[0x19] = 0;
          pbVar2[0x1a] = 0;
          pbVar2[0x1b] = 0;
          if (((param_4 != pbVar1) && (*(int *)(param_4 + 8) != 0)) &&
             (*(longlong **)param_4 != (longlong *)0x0)) {
            (**(code **)(**(longlong **)param_4 + 0x30))();
          }
          FWeakObjectPtr::operator=(pbVar2 + 0x20,param_5);
        }
        return 1;
      }
      plVar12 = (longlong *)plVar12[6];
    } while (plVar12 != (longlong *)0x0);
  }
  return 0;
LAB_14071bca0:
  do {
    lVar7 = (uVar13 + 0xf) * 0x30 + param_1;
    if (*(longlong *)(lVar7 + 8) != 0) {
      FUN_1406d48b0(local_50,lVar10,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x18));
      if (*(char *)(lVar7 + 0x28) != -1) {
        *(char *)(lVar7 + 0x28) = *(char *)(lVar7 + 0x28) + '\x01';
      }
      cVar5 = FUN_1406f7e60(*(undefined8 *)(lVar7 + 8),local_50,4);
      if (*(char *)(lVar7 + 0x28) != '\0') {
        *(char *)(lVar7 + 0x28) = *(char *)(lVar7 + 0x28) + -1;
      }
      if (cVar5 == '\0') break;
    }
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar11;
    *(char *)(param_1 + 0x330) = (char)uVar11;
  } while (uVar11 < param_2);
LAB_14071bd09:
  FUN_1406f7da0(param_1 + 0x4e8,param_1);
  return 1;
}



// FUNCTION 14071bd20 FUN_14071bd20 body=281 status=ok
// SIG undefined FUN_14071bd20(void)

undefined8 FUN_14071bd20(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined4 local_24c;
  undefined1 local_248;
  undefined1 local_240 [128];
  undefined1 local_1c0;
  undefined1 local_1b8 [128];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_110 [128];
  undefined1 local_90;
  undefined1 local_88 [128];
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x58 + *(longlong *)(param_2 + 8));
  if (lVar2 != 0) {
    FUN_14070d210(param_1,&local_268,param_2);
    cVar1 = FUN_14073d210(&local_268);
    if (cVar1 != '\0') {
      local_130 = local_260;
      local_128 = local_258;
      local_120 = local_250;
      local_11f = local_24f;
      local_138 = local_268;
      local_118 = local_248;
      local_11c = local_24c;
      FUN_142de2b80(local_110,local_240);
      local_90 = local_1c0;
      FUN_142de2b80(local_88,local_1b8);
      cVar1 = FUN_140743c90(lVar2,&local_138);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14071be40 FUN_14071be40 body=804 status=ok
// SIG undefined FUN_14071be40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14071be40(longlong param_1,longlong *param_2,char *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [64];
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = param_2[1];
  cVar10 = FUN_140714650(param_3);
  if (cVar10 == '\0') {
    fVar14 = *(float *)(lVar3 + 0xc0 + lVar2);
    if (fVar14 < 0.0) {
      fVar14 = *(float *)(param_2 + 3);
      *(float *)(lVar3 + 0xc0 + lVar2) = fVar14;
    }
    if (*(float *)(param_2 + 3) - fVar14 < *(float *)(param_1 + 0x124)) {
      return;
    }
  }
  if (*param_3 != '\0') {
    lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    fVar14 = *(float *)(lVar11 + 0xc4);
    if (fVar14 < 0.0) {
      fVar14 = *(float *)(param_2 + 3);
      *(float *)(lVar11 + 0xc4) = fVar14;
    }
    if (*(float *)(param_2 + 3) - fVar14 < *(float *)(param_1 + 0x128)) {
      return;
    }
  }
  FUN_142cbcc90(param_1 + 0x298,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x288,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x278,*(undefined8 *)(*param_2 + 0x568));
  uVar9 = *(undefined8 *)(param_3 + 8);
  puVar12 = (undefined8 *)(lVar3 + 0x7c + lVar2);
  *puVar12 = *(undefined8 *)param_3;
  puVar12[1] = uVar9;
  uVar5 = *(undefined4 *)(param_3 + 0x10);
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  uVar7 = *(undefined4 *)(param_3 + 0x18);
  uVar8 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(lVar3 + 0xc0 + lVar2) = 0xff7fffff;
  *(undefined4 *)(lVar3 + 0xc4 + lVar2) = 0xff7fffff;
  puVar1 = (undefined4 *)(lVar3 + 0x8c + lVar2);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(float *)(lVar3 + 0xbc + lVar2) = *(float *)(param_1 + 0x120) + *(float *)(param_2 + 3);
  if (*(char *)(lVar3 + 0x7c + lVar2) == '\0') {
    lVar11 = FWeakObjectPtr::Get(lVar2 + 0x74 + lVar3);
    if (lVar11 != 0) {
      lVar4 = *(longlong *)(lVar11 + 0x168);
      if (lVar4 == 0) {
        local_88 = _DAT_1468b5d90;
        local_80 = DAT_1468b5d98;
      }
      else {
        local_88 = *(undefined8 *)(lVar4 + 0x220);
        local_80 = *(undefined4 *)(lVar4 + 0x228);
      }
      local_78 = local_88;
      local_70 = local_80;
      FUN_142fa2d70(local_68,lVar11,&local_78);
      lVar4 = *(longlong *)(lVar11 + 0x168);
      if (lVar4 == 0) {
        local_70 = DAT_1468b5d98;
        puVar12 = &local_78;
        local_78 = _DAT_1468b5d90;
      }
      else {
        puVar12 = &local_88;
        local_80 = *(undefined4 *)(lVar4 + 0x228);
        local_88 = *(undefined8 *)(lVar4 + 0x220);
      }
      fVar15 = *(float *)(lVar3 + 0x80 + lVar2) - (float)*puVar12;
      fVar13 = *(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x114);
      fVar14 = *(float *)(lVar3 + 0x84 + lVar2) - (float)((ulonglong)*puVar12 >> 0x20);
      FUN_142cd0a60(param_1 + 0x288,*(undefined8 *)(*param_2 + 0x568),lVar11);
      fVar14 = SQRT(fVar14 * fVar14 + fVar15 * fVar15);
      if (fVar14 <= fVar13) {
        fVar14 = fVar13;
      }
      FUN_142cd0820(param_1 + 0x298,*(undefined8 *)(*param_2 + 0x568),fVar14);
    }
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x80 + lVar2);
    local_80 = *(undefined4 *)(lVar3 + 0x88 + lVar2);
    FUN_142cd0df0(param_1 + 0x278,*(undefined8 *)(*param_2 + 0x568),&local_88);
  }
  return;
}



// FUNCTION 14071c170 FUN_14071c170 body=337 status=ok
// SIG undefined FUN_14071c170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14071c170(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  longlong local_18;
  longlong local_10;
  
  lVar6 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
  lVar3 = FWeakObjectPtr::Get(lVar6 + 0x58);
  local_18 = param_1;
  local_10 = param_2;
  cVar2 = FUN_1406fdf10(*(undefined4 *)(param_1 + 0x110),lVar6 + 0x50,&local_18,0);
  if (cVar2 == '\0') {
    if (lVar3 != 0) {
      lVar5 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
      lVar6 = FWeakObjectPtr::Get(lVar5 + 0x48);
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x168);
        if (lVar6 == 0) {
          local_18 = _DAT_1468b5d90;
          uVar1 = DAT_1468b5d98;
        }
        else {
          local_18 = *(longlong *)(lVar6 + 0x220);
          uVar1 = *(undefined4 *)(lVar6 + 0x228);
        }
        local_10 = CONCAT44(local_10._4_4_,uVar1);
        fVar8 = (float)local_18 - *(float *)(lVar3 + 0x220);
        fVar7 = (float)((ulonglong)local_18 >> 0x20) - *(float *)(lVar3 + 0x224);
        if (*(float *)(lVar3 + 0x704) * *(float *)(lVar3 + 0x704) < fVar8 * fVar8 + fVar7 * fVar7) {
          FWeakObjectPtr::operator=(lVar5 + 200,lVar3);
          return 1;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    FUN_14070c0a0(param_1,param_2,lVar6 + 0xb8);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 14071c2d0 FUN_14071c2d0 body=146 status=ok
// SIG undefined FUN_14071c2d0(void)

void FUN_14071c2d0(longlong param_1,char param_2)

{
  *(char *)(param_1 + 8) = param_2;
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      *(undefined1 *)(param_1 + 0x548) = 0;
      *(undefined1 *)(param_1 + 0x388) = 0;
      *(undefined1 *)(param_1 + 0x1c8) = 0;
    }
    else {
      if (param_2 == '\x02') {
        *(undefined1 *)(param_1 + 0x548) = 1;
        *(undefined1 *)(param_1 + 0x388) = 0;
        *(undefined1 *)(param_1 + 0x1c8) = 0;
        return;
      }
      if (param_2 == '\x03') {
        *(undefined1 *)(param_1 + 0x1c8) = 1;
        *(undefined1 *)(param_1 + 0x388) = 0;
        *(undefined1 *)(param_1 + 0x548) = 1;
        return;
      }
      if (param_2 == '\x04') {
        *(undefined1 *)(param_1 + 0x388) = 1;
        *(undefined1 *)(param_1 + 0x548) = 1;
        *(undefined1 *)(param_1 + 0x1c8) = 0;
        return;
      }
      if (param_2 == '\x05') {
        *(undefined1 *)(param_1 + 0x1c8) = 1;
        *(undefined1 *)(param_1 + 0x388) = 1;
        *(undefined1 *)(param_1 + 0x548) = 1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 14071c370 FUN_14071c370 body=705 status=ok
// SIG undefined FUN_14071c370(void)

void FUN_14071c370(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar4 = FWeakObjectPtr::Get(lVar6 + 0xd0);
  cVar2 = FSimulationThreadWorker::Init(lVar4 + 0x1e8);
  if (cVar2 == '\0') {
    local_res8 = param_1 + 0x178;
    cVar2 = FWeakObjectPtr::IsValid(lVar6 + 200);
    if (cVar2 == '\0') {
      puVar5 = (undefined8 *)FUN_140757de0(lVar6 + 0x50,&local_48);
      local_38 = *puVar5;
      local_30 = *(undefined4 *)(puVar5 + 1);
      FUN_142cd0df0(param_1 + 0x128,*(undefined8 *)(*param_2 + 0x568),&local_38);
      FUN_142cd0820(param_1 + 0x138,*(undefined8 *)(*param_2 + 0x568),
                    *(undefined4 *)(param_1 + 0x118));
      FUN_142cd0450(param_1 + 0x158,*(undefined8 *)(*param_2 + 0x568),0);
      param_1 = param_1 + 0x178;
    }
    else {
      lVar4 = FWeakObjectPtr::Get(lVar6 + 200);
      local_40 = SUB164(*(undefined1 (*) [16])(lVar4 + 0x220),8);
      local_38 = SUB168(*(undefined1 (*) [16])(lVar4 + 0x220),0);
      local_30 = local_40;
      FUN_142cd0df0(param_1 + 0x128,*(undefined8 *)(*param_2 + 0x568),&local_38);
      FUN_142cd0820(param_1 + 0x138,*(undefined8 *)(*param_2 + 0x568),*(undefined4 *)(lVar4 + 0x704)
                   );
      FUN_142cd0450(param_1 + 0x158,*(undefined8 *)(*param_2 + 0x568),0);
      param_1 = local_res8;
    }
    FUN_142cd0450(param_1,*(undefined8 *)(*param_2 + 0x568),0);
  }
  else {
    lVar4 = FWeakObjectPtr::Get(lVar6 + 0xd0);
    lVar4 = lVar4 + 0x1e8;
    FUN_14075f9e0(lVar4,&local_68,&local_res8);
    FUN_142cd0820(param_1 + 0x138,*(undefined8 *)(*param_2 + 0x568),(undefined4)local_res8);
    local_58 = local_68;
    local_50 = local_60;
    FUN_142cd0df0(param_1 + 0x128,*(undefined8 *)(*param_2 + 0x568),&local_58);
    uVar1 = *(undefined8 *)(*param_2 + 0x568);
    uVar3 = FUN_14075c6e0(lVar4,&local_48);
    FUN_142cd0450(param_1 + 0x158,uVar1,uVar3);
    local_58 = local_48;
    local_50 = local_40;
    FUN_142cd0df0(param_1 + 0x168,*(undefined8 *)(*param_2 + 0x568),&local_58);
    uVar1 = *(undefined8 *)(*param_2 + 0x568);
    uVar3 = FUN_14075ef00(lVar4,&local_38);
    FUN_142cd0450(param_1 + 0x178,uVar1,uVar3);
    local_58 = local_38;
    local_50 = local_30;
    FUN_142cd0df0(param_1 + 0x188,*(undefined8 *)(*param_2 + 0x568),&local_58);
  }
  return;
}



// FUNCTION 14071c640 FUN_14071c640 body=27 status=ok
// SIG undefined FUN_14071c640(void)

void FUN_14071c640(longlong param_1)

{
  FUN_1406f6a60();
  *(undefined1 *)(param_1 + 0x158) = 3;
  return;
}



// FUNCTION 14071c660 FUN_14071c660 body=27 status=ok
// SIG undefined FUN_14071c660(void)

void FUN_14071c660(longlong param_1)

{
  FUN_1406f6cd0();
  *(undefined1 *)(param_1 + 0x158) = 0;
  return;
}



// FUNCTION 14071c680 FUN_14071c680 body=44 status=ok
// SIG undefined FUN_14071c680(void)

bool FUN_14071c680(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if ((param_3 == '\x02') && (*(char *)(param_1 + 0x292) == '\0')) {
    return false;
  }
  cVar1 = FUN_14071c760(param_1,param_2,0);
  return cVar1 == '\0';
}



// FUNCTION 14071c6b0 FUN_14071c6b0 body=151 status=ok
// SIG undefined FUN_14071c6b0(void)

void FUN_14071c6b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 local_68 [96];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar2 = FUN_14071c170();
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)FUN_14074c8d0(local_68);
    *(undefined4 *)(lVar4 + 0x50) = *puVar3;
    *(undefined4 *)(lVar4 + 0x54) = puVar3[1];
    *(undefined4 *)(lVar4 + 0x58) = puVar3[2];
    *(undefined4 *)(lVar4 + 0x5c) = puVar3[3];
    uVar1 = *(undefined8 *)(puVar3 + 6);
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(puVar3 + 4);
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(puVar3 + 10);
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(lVar4 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)(puVar3 + 0xe);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(puVar3 + 0xc);
    *(undefined8 *)(lVar4 + 0x88) = uVar1;
    uVar1 = *(undefined8 *)(puVar3 + 0x12);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)(lVar4 + 0x98) = uVar1;
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(puVar3 + 0x14);
    *(undefined4 *)(lVar4 + 0xa8) = puVar3[0x16];
    *(undefined4 *)(lVar4 + 0xac) = puVar3[0x17];
  }
  FSkeletonRemapping::IsValid(lVar4 + 0x50);
  return;
}



// FUNCTION 14071c760 FUN_14071c760 body=163 status=ok
// SIG undefined FUN_14071c760(void)

undefined8 FUN_14071c760(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x180) != '\0') {
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(param_1 + 0x100,*param_2,0,&local_res8);
    if (0.5 <= fVar2) {
      return 0;
    }
  }
  if ((((*(char *)(param_1 + 0x208) == '\0') || (param_3 != '\0')) ||
      (*(int *)(lVar1 + 0x4c) <= *(int *)(lVar1 + 0x48))) &&
     ((*(char *)(param_1 + 0x290) == '\0' ||
      (*(float *)(lVar1 + 0x50) < *(float *)(param_2 + 3) ||
       *(float *)(lVar1 + 0x50) == *(float *)(param_2 + 3))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14071c810 FUN_14071c810 body=146 status=ok
// SIG undefined FUN_14071c810(void)

undefined8 FUN_14071c810(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858ba8) {
    _Init_thread_header(&DAT_146858ba8);
    if (DAT_146858ba8 == -1) {
      plVar1 = (longlong *)FName::FName(local_res8,L"Parent",1);
      DAT_146858ba0 = *plVar1;
      _Init_thread_footer(&DAT_146858ba8);
    }
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) == DAT_146858ba0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14071c8b0 FUN_14071c8b0 body=265 status=ok
// SIG undefined FUN_14071c8b0(void)

undefined8 FUN_14071c8b0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if ((*(int *)(param_2 + 0x6f4) != -1) || (*(int *)(param_2 + 0x6f8) != -1)) {
    FUN_142f89a30(&local_98);
    local_98 = *param_1;
    local_78 = *(undefined8 *)(param_2 + 0x6f8);
    uStack_70 = *(undefined8 *)(param_2 + 0x700);
    local_28 = *(undefined8 *)(param_2 + 0x6b8);
    local_88 = *(undefined8 *)(param_2 + 0x6e8);
    uStack_80 = *(undefined8 *)(param_2 + 0x6f0);
    local_90 = *(undefined4 *)(param_1 + 1);
    local_68 = *(undefined8 *)(param_2 + 0x708);
    uStack_60 = *(undefined8 *)(param_2 + 0x710);
    local_58 = *(undefined8 *)(param_2 + 0x718);
    uStack_50 = *(undefined8 *)(param_2 + 0x720);
    local_a8 = 0;
    local_48 = *(undefined4 *)(param_2 + 0x728);
    uStack_44 = *(undefined4 *)(param_2 + 0x72c);
    uStack_40 = *(undefined4 *)(param_2 + 0x730);
    uStack_3c = *(undefined4 *)(param_2 + 0x734);
    local_a0 = 0;
    local_38 = *(undefined4 *)(param_2 + 0x738);
    uStack_34 = *(undefined4 *)(param_2 + 0x73c);
    uStack_30 = *(undefined4 *)(param_2 + 0x740);
    uStack_2c = *(undefined4 *)(param_2 + 0x744);
    local_8c = param_3;
    cVar1 = FUN_142fae610(&local_98,&local_a8,0);
    if (cVar1 == '\0') {
      return 0;
    }
    *param_1 = local_a8;
    *(undefined4 *)(param_1 + 1) = local_a0;
  }
  return 1;
}



// FUNCTION 14071c9c0 FUN_14071c9c0 body=293 status=ok
// SIG undefined FUN_14071c9c0(void)

void FUN_14071c9c0(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 local_38 [8];
  longlong local_30;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = *(longlong *)(param_1 + 0x188);
  if (lVar2 != 0) {
    lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((char *)(param_1 + 0x2d0) != (char *)(param_1 + 0x330))) {
      pcVar5 = (char *)(param_1 + 0x2f8);
      do {
        if ((*(longlong *)(pcVar5 + -0x20) == 0) || (*(longlong *)(pcVar5 + -8) == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1406d48b0(local_38,lVar2,*(undefined8 *)(pcVar5 + -8),*(undefined8 *)(pcVar5 + -0x10))
          ;
          if ((byte)(*(char *)(*(longlong *)(*(longlong *)(pcVar5 + -0x20) + 0xd8) + 0x28 + local_30
                              ) - 1U) < 2) {
            if (*pcVar5 != -1) {
              *pcVar5 = *pcVar5 + '\x01';
            }
            FUN_1406f7e60(*(longlong *)(pcVar5 + -0x20),local_38,4);
            if (*pcVar5 != '\0') {
              *pcVar5 = *pcVar5 + -1;
            }
            pcVar5[1] = '\x01';
          }
        }
        pcVar1 = pcVar5 + 8;
        pcVar5 = pcVar5 + 0x30;
      } while (pcVar1 != (char *)(param_1 + 0x330));
    }
  }
  FUN_14070c6c0(param_1);
  return;
}



// FUNCTION 14071caf0 FUN_14071caf0 body=477 status=ok
// SIG undefined FUN_14071caf0(void)

void FUN_14071caf0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  longlong local_res8;
  undefined1 local_48 [48];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar8 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar8;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  else {
    lVar5 = 0;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  if (param_2 == '\x04') {
    if ((*(longlong *)(param_1 + 0x308) == 0) || (*(longlong *)(param_1 + 800) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_14070a590(param_1,1,4);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14071cbc5;
  }
  lVar5 = 0;
LAB_14071cbc5:
  lVar6 = 1;
  pcVar9 = (char *)(param_1 + 0x328);
  do {
    if ((*(longlong *)(pcVar9 + -0x20) == 0) || (*(longlong *)(pcVar9 + -8) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((lVar6 == 1 || (*(longlong *)(pcVar9 + -0x28) != 0)))) {
      if ((param_2 == '\x03') && (lVar2 = *(longlong *)(pcVar9 + -0x28), lVar2 != 0)) {
        lVar7 = UCompositionGraphCaptureProtocol::StaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_res8 = lVar5;
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x90,&local_res8);
        }
      }
      FUN_1406d48b0(local_48,lVar5,*(undefined8 *)(pcVar9 + -8),*(undefined8 *)(pcVar9 + -0x10));
      if (*pcVar9 != -1) {
        *pcVar9 = *pcVar9 + '\x01';
      }
      FUN_1406f7e60(*(undefined8 *)(pcVar9 + -0x20),local_48,param_2);
      if (*pcVar9 != '\0') {
        *pcVar9 = *pcVar9 + -1;
      }
    }
    pcVar9 = pcVar9 + -0x30;
    lVar6 = lVar6 + -1;
  } while (-1 < lVar6);
  return;
}



// FUNCTION 14071ccd0 FUN_14071ccd0 body=172 status=ok
// SIG undefined FUN_14071ccd0(void)

undefined8 FUN_14071ccd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  *(undefined4 *)(lVar4 + 0x58) = 0xffffffff;
  lVar1 = *(longlong *)(*param_2 + 0x628);
  if (lVar1 == 0) {
    return CONCAT71((int7)((ulonglong)*param_2 >> 8),2);
  }
  iVar2 = FUN_142fb3790(lVar1,lVar4 + 0x48);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      return 1;
    }
    if (iVar2 == 2) {
      puVar3 = (undefined4 *)FUN_142f9f060(lVar1,local_res8);
      *(undefined4 *)(lVar4 + 0x58) = *puVar3;
      return 0;
    }
  }
  return 2;
}



// FUNCTION 14071cd80 FUN_14071cd80 body=977 status=ok
// SIG undefined FUN_14071cd80(void)

void FUN_14071cd80(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  
  lVar11 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x145) == '\0') {
    return;
  }
  puVar1 = (undefined4 *)(lVar11 + 0x138);
  lVar6 = FWeakObjectPtr::Get(puVar1);
  if (lVar6 != 0) {
    local_118 = *(undefined8 *)(lVar6 + 0x220);
    local_110 = *(float *)(lVar6 + 0x228);
    local_100 = local_110;
    cVar4 = FUN_140707b20(param_1,param_2,&local_118,local_68,*(undefined4 *)(lVar6 + 0x6fc));
    if (cVar4 == '\0') goto LAB_14071ce38;
  }
  lVar6 = FWeakObjectPtr::Get(lVar11 + 0x140);
LAB_14071ce38:
  if (lVar6 != 0) {
    plVar2 = *(longlong **)(*param_2 + 0x488);
    FUN_14074c870(&local_f8);
    local_f8 = *puVar1;
    local_f4 = *(undefined4 *)(lVar11 + 0x13c);
    local_f0 = *(undefined4 *)(lVar11 + 0x140);
    local_ec = *(undefined4 *)(lVar11 + 0x144);
    local_e8 = *(undefined8 *)(lVar11 + 0x148);
    uStack_e0 = *(undefined8 *)(lVar11 + 0x150);
    local_d8 = *(undefined8 *)(lVar11 + 0x158);
    uStack_d0 = *(undefined8 *)(lVar11 + 0x160);
    local_c8 = *(undefined8 *)(lVar11 + 0x168);
    uStack_c0 = *(undefined8 *)(lVar11 + 0x170);
    local_b8 = *(undefined8 *)(lVar11 + 0x178);
    uStack_b0 = *(undefined8 *)(lVar11 + 0x180);
    local_a8 = *(undefined8 *)(lVar11 + 0x188);
    local_a0 = *(undefined4 *)(lVar11 + 400);
    local_9c = *(undefined4 *)(lVar11 + 0x194);
    local_98 = *(undefined8 *)(lVar11 + 0x198);
    local_90 = *(undefined4 *)(lVar11 + 0x1a0);
    local_8c = *(undefined1 *)(lVar11 + 0x1a4);
    local_118 = *(undefined8 *)(lVar6 + 0x220);
    local_110 = *(float *)(lVar6 + 0x228);
    FUN_14076b860(&local_f8,&local_118);
    *puVar1 = local_f8;
    *(undefined4 *)(lVar11 + 0x13c) = local_f4;
    *(undefined4 *)(lVar11 + 0x140) = local_f0;
    *(undefined4 *)(lVar11 + 0x144) = local_ec;
    *(undefined8 *)(lVar11 + 0x148) = local_e8;
    *(undefined8 *)(lVar11 + 0x150) = uStack_e0;
    *(undefined8 *)(lVar11 + 0x158) = local_d8;
    *(undefined8 *)(lVar11 + 0x160) = uStack_d0;
    *(undefined8 *)(lVar11 + 0x168) = local_c8;
    *(undefined8 *)(lVar11 + 0x170) = uStack_c0;
    *(undefined8 *)(lVar11 + 0x178) = local_b8;
    *(undefined8 *)(lVar11 + 0x180) = uStack_b0;
    *(undefined8 *)(lVar11 + 0x188) = local_a8;
    *(undefined4 *)(lVar11 + 400) = local_a0;
    *(undefined4 *)(lVar11 + 0x194) = local_9c;
    *(undefined8 *)(lVar11 + 0x198) = local_98;
    *(undefined4 *)(lVar11 + 0x1a0) = local_90;
    *(undefined1 *)(lVar11 + 0x1a4) = local_8c;
    FUN_14070aa80(param_1,param_2);
    *(undefined4 *)(lVar11 + 0x29c) = 2;
    if (plVar2 != (longlong *)0x0) {
      uVar7 = UDamageableInterface::GetPrivateStaticClass();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar2,uVar7);
      if ((plVar8 != (longlong *)0x0) &&
         (lVar11 = (**(code **)(*plVar2 + 0x690))(plVar2), lVar11 != 0)) {
        lVar6 = plVar2[0x2d];
        if (lVar6 == 0) {
          uVar12 = (undefined4)DAT_1468b5da0;
          uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_110 = (float)DAT_1468b5da8;
        }
        else {
          local_78 = *(float *)(lVar6 + 0x210);
          fStack_74 = *(float *)(lVar6 + 0x214);
          fStack_70 = *(float *)(lVar6 + 0x218);
          fStack_6c = *(float *)(lVar6 + 0x21c);
          auVar3._4_4_ = -(uint)(fStack_74 != *(float *)(lVar6 + 0x254));
          auVar3._0_4_ = -(uint)(local_78 != *(float *)(lVar6 + 0x250));
          auVar3._8_4_ = -(uint)(fStack_70 != *(float *)(lVar6 + 600));
          auVar3._12_4_ = -(uint)(fStack_6c != *(float *)(lVar6 + 0x25c));
          iVar5 = movmskps((int)lVar11,auVar3);
          if (iVar5 != 0) {
            *(float *)(lVar6 + 0x250) = local_78;
            *(float *)(lVar6 + 0x254) = fStack_74;
            *(float *)(lVar6 + 600) = fStack_70;
            *(float *)(lVar6 + 0x25c) = fStack_6c;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_78,local_58);
            *(undefined8 *)(lVar6 + 0x260) = *puVar9;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          uVar12 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
          uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
          local_110 = (float)*(undefined4 *)(lVar6 + 0x268);
        }
        lVar11 = *plVar8;
        local_118 = CONCAT44(uVar13,uVar12);
        local_108 = local_118;
        local_100 = local_110;
        uVar7 = FUN_140757de0(puVar1,local_88);
        (**(code **)(lVar11 + 0x10))(plVar8,uVar7,&local_108);
        return;
      }
    }
    fVar16 = (float)DAT_1464aa798 * 5.0;
    fVar15 = DAT_1464aa798._4_4_ * 5.0;
    fVar14 = DAT_1464aa7a0 * 5.0;
    pfVar10 = (float *)FUN_140757de0(puVar1,local_88);
    local_110 = fVar14 + pfVar10[2];
    local_108 = CONCAT44(fVar15 + pfVar10[1],fVar16 + *pfVar10);
    local_100 = local_110;
    FUN_142cd0df0(param_1 + 0x170,*(undefined8 *)(*param_2 + 0x568),&local_108);
  }
  return;
}



// FUNCTION 14071d160 FUN_14071d160 body=244 status=ok
// SIG undefined FUN_14071d160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14071d160(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_28 [16];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  plVar5 = (longlong *)0x0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  lVar2 = FWeakObjectPtr::Get(lVar4 + 0x78);
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(lVar2 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_142dbb5d0(lVar2 + 0x8b0,&DAT_1468589b8);
    lVar1 = *plVar5;
    uVar3 = FUN_140706830(param_1,local_28,param_2);
    (**(code **)(lVar1 + 0x500))(plVar5,lVar4 + 0x60,uVar3,0,0);
    if (*(char *)(param_1 + 0x112) != '\0') {
      *(undefined8 *)(lVar2 + 0x18c) = _DAT_1468b5d90;
      *(undefined4 *)(lVar2 + 0x194) = DAT_1468b5d98;
    }
    uVar3 = (**(code **)(*(longlong *)*param_2 + 0x148))();
    lVar2 = FUN_142d39320(uVar3);
    if (lVar2 != 0) {
      FUN_142d4ee20(lVar2,*param_2);
    }
  }
  return;
}



// FUNCTION 14071d260 FUN_14071d260 body=134 status=ok
// SIG undefined FUN_14071d260(void)

undefined8 FUN_14071d260(longlong param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  longlong *plVar1;
  char cVar2;
  
  if (((byte)(*(char *)(*(longlong *)(param_1 + 0xd8) + 0x28 + *(longlong *)(param_3 + 8)) - 1U) < 2
      ) && ((cVar2 = (*param_4)(param_2,param_3,param_1), cVar2 == '\0' ||
            ((plVar1 = *(longlong **)(param_1 + 0x148), plVar1 != (longlong *)0x0 &&
             (cVar2 = (**(code **)(*plVar1 + 0x3b8))(plVar1,param_2,param_3,param_4), cVar2 == '\0')
             ))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14071d2f0 FUN_14071d2f0 body=179 status=ok
// SIG undefined FUN_14071d2f0(void)

undefined8 FUN_14071d2f0(longlong param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if ((byte)(*(char *)(*(longlong *)(param_1 + 0xd8) + 0x28 + *(longlong *)(param_3 + 8)) - 1U) < 2)
  {
    cVar2 = (*param_4)(param_2,param_3,param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x148);
    puVar1 = puVar3 + *(int *)(param_1 + 0x150);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x3b8))
                        ((longlong *)*puVar3,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14071d3b0 FUN_14071d3b0 body=166 status=ok
// SIG undefined FUN_14071d3b0(void)

undefined8 FUN_14071d3b0(longlong param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((byte)(*(char *)(*(longlong *)(param_3 + 8) + 0x28 + *(longlong *)(param_1 + 0xd8)) - 1U) < 2)
  {
    cVar3 = (*param_4)(param_2,param_3,param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = *(int *)(*(longlong *)(param_3 + 8) + 0x50 + *(longlong *)(param_1 + 0xd8));
    if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x150))) &&
        (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8),
        plVar2 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*plVar2 + 0x3b8))(plVar2,param_2,param_3,param_4), cVar3 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14071d460 FUN_14071d460 body=154 status=ok
// SIG undefined FUN_14071d460(void)

undefined8 FUN_14071d460(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_1406f9790();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x148) == 0) {
      if (0 < *(int *)(param_1 + 0x110)) {
        return 1;
      }
      if (0 < *(int *)(param_1 + 0x120)) {
        return 1;
      }
    }
    else {
      cVar2 = FUN_1406f70d0(*(longlong *)(param_1 + 0x148),param_2,param_1);
      cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0xd8) + 0x29 +
                       *(longlong *)(param_2 + 8));
      if ((cVar1 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x148) + 0xd3) != '\0')) {
        cVar1 = '\x01';
      }
      *(char *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = cVar1;
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14071d500 FUN_14071d500 body=487 status=ok
// SIG undefined FUN_14071d500(void)

ulonglong FUN_14071d500(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *local_res20;
  longlong *local_48;
  longlong *local_40;
  
  uVar10 = FUN_1406f9790();
  if ((char)uVar10 == '\0') {
    return uVar10;
  }
  cVar8 = FUN_1406ecba0(param_1,2);
  bVar6 = false;
  bVar7 = true;
  local_res20 = (longlong *)(param_1 + 0x148);
  FUN_1407227b0(&local_res20,&local_48);
  lVar2 = *(longlong *)(param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x150);
  plVar12 = local_48;
joined_r0x00014071d58b:
  do {
    if (plVar12 == (longlong *)(lVar2 + (longlong)iVar1 * 8)) {
      if (*(char *)(param_1 + 0x160) != '\0') {
        bVar6 = bVar7;
      }
      if (bVar6) {
        uVar10 = *(ulonglong *)(param_2 + 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + uVar10) = 1;
        uVar10 = uVar10 & 0xffffffffffffff00;
      }
      else {
        uVar10 = 1;
      }
      return uVar10;
    }
    plVar3 = (longlong *)*plVar12;
    cVar9 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
    if (cVar9 != '\0') {
      cVar9 = FUN_1406de170(plVar3,param_2);
      if ((cVar9 == '\0') || (cVar9 = FUN_1406f70d0(plVar3,param_2,param_1), cVar9 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((char)plVar3[0x2b] != '\0') {
        cVar9 = *(char *)(plVar3[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar9 == '\x02') {
          if (*(char *)((longlong)plVar3 + 0xd3) != '\0') {
LAB_14071d666:
            if (*(char *)((longlong)plVar3 + 0x159) != '\0') {
              bVar6 = true;
            }
            goto LAB_14071d620;
          }
        }
        else if (cVar9 == '\x01') goto LAB_14071d666;
        bVar7 = false;
        if (((!bVar5) && (cVar8 == '\0')) && (*(char *)((longlong)plVar3 + 0x15a) != '\0')) {
          uVar10 = *(ulonglong *)(param_1 + 0xd8);
          *(undefined1 *)(uVar10 + 0x29 + *(longlong *)(param_2 + 8)) = 2;
          return uVar10 & 0xffffffffffffff00;
        }
      }
    }
LAB_14071d620:
    do {
      do {
        plVar12 = plVar12 + 1;
        if (plVar12 == local_40) goto joined_r0x00014071d58b;
        lVar4 = *plVar12;
      } while (lVar4 == 0);
      lVar11 = USoundNodeEnveloper::StaticClass();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    } while (!bVar5);
  } while( true );
}



// FUNCTION 14071d6f0 FUN_14071d6f0 body=87 status=ok
// SIG undefined FUN_14071d6f0(void)

bool FUN_14071d6f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1406f9790();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,param_2,0);
    *(char *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = cVar1;
    return cVar1 == '\0';
  }
  return false;
}



// FUNCTION 14071d750 FUN_14071d750 body=152 status=ok
// SIG undefined FUN_14071d750(void)

undefined8 FUN_14071d750(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  cVar1 = FUN_14071d8c0();
  lVar4 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar4 + 300);
    if (plVar3 != (longlong *)0x0) {
      *(undefined1 *)(lVar4 + 0x128) = 1;
      (**(code **)(*plVar3 + 0x5a0))(plVar3,3);
      return 1;
    }
  }
  else {
    lVar2 = FWeakObjectPtr::Get(lVar4 + 300);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar4 + 0x128) = 0;
      FUN_142cff920(lVar2,1,DAT_1468588a8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14071d800 FUN_14071d800 body=75 status=ok
// SIG undefined FUN_14071d800(void)

undefined1 FUN_14071d800(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x298 + param_2[1]);
  if (lVar2 != 0) {
    cVar1 = FUN_140732750(lVar2,*(undefined8 *)(*param_2 + 0x488));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14071d850 FUN_14071d850 body=97 status=ok
// SIG undefined FUN_14071d850(void)

ulonglong FUN_14071d850(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  FWeakObjectPtr::Get(param_2[1] + *(longlong *)(param_1 + 0xd8) + 100);
  uVar1 = *param_2;
  if (*(longlong *)(uVar1 + 0x628) != 0) {
    uVar1 = FUN_142fa8480();
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_14071e940(param_1,param_2);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14071d8c0 FUN_14071d8c0 body=194 status=ok
// SIG undefined FUN_14071d8c0(void)

void FUN_14071d8c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  undefined8 local_res8;
  undefined8 local_18 [2];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if ((undefined8 *)(lVar4 + 0x48) != local_18) {
    *(undefined8 *)(lVar4 + 0x48) = 0;
    plVar3 = *(longlong **)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  *(undefined8 *)(lVar4 + 0x120) = 0;
  local_res8 = *(undefined8 *)(*param_2 + 0x568);
  fVar5 = (float)FUN_142de77e0(param_1 + 0x138,*param_2,0,&local_res8);
  *(int *)(lVar4 + 0x120) = (int)ROUND(fVar5 * 2.0 + 0.5) >> 1;
  FUN_14071f7f0(param_1,param_2);
  return;
}



// FUNCTION 14071d990 FUN_14071d990 body=383 status=ok
// SIG undefined FUN_14071d990(void)

undefined8 FUN_14071d990(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 == 0) {
LAB_14071da9b:
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_142cc3a70(param_1 + 0x100,lVar1,&local_res10);
    if ((cVar2 == '\0') || (local_res10 == 0)) {
LAB_14071da14:
      cVar2 = FUN_142cc54f0(param_1 + 0x100,lVar1,&local_38);
      if (cVar2 == '\0') goto LAB_14071da9b;
    }
    else {
      uVar3 = UNavAgentInterface::GetPrivateStaticClass();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(local_res10,uVar3);
      if (plVar4 == (longlong *)0x0) goto LAB_14071da14;
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,local_28);
      local_38 = *puVar5;
      local_30 = *(undefined4 *)(puVar5 + 1);
    }
    if (*(char *)(param_1 + 0x340) == '\0') {
      cVar2 = FUN_14070bd20(param_1 + 0x118,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
      if (cVar2 == '\0') goto LAB_14071da9b;
    }
    else {
      if (*(char *)(param_1 + 0x338) != '\0') {
        cVar2 = FUN_14070bd20(param_1 + 0x1a0,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
        if (cVar2 == '\0') goto LAB_14071da9b;
      }
      if (*(char *)(param_1 + 0x339) != '\0') {
        cVar2 = FUN_14070bd20(param_1 + 0x228,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
        if (cVar2 != '\0') {
          *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 1;
          goto LAB_14071da9b;
        }
      }
      if (*(char *)(param_1 + 0x33a) != '\0') {
        cVar2 = FUN_14070bd20(param_1 + 0x2b0,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
        if (cVar2 != '\0') {
          *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 2;
          goto LAB_14071da9b;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14071db10 FUN_14071db10 body=203 status=ok
// SIG undefined FUN_14071db10(void)

void FUN_14071db10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 100 + *(longlong *)(param_2 + 8));
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858a48) {
    _Init_thread_header(&DAT_146858a48);
    if (DAT_146858a48 == -1) {
      FName::FName(&DAT_146858a40,L"Land1",1);
      _Init_thread_footer(&DAT_146858a48);
    }
  }
  FUN_142cff920(lVar1,1,DAT_146858a40);
  FUN_14071e940(param_1,param_2);
  return;
}



// FUNCTION 14071dbe0 FUN_14071dbe0 body=2707 status=ok
// SIG undefined FUN_14071dbe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14071dbe0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  char local_res8;
  char local_res18 [8];
  longlong local_res20;
  undefined4 *puVar21;
  float local_458;
  float local_454;
  float local_450;
  longlong *local_448;
  longlong *local_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  float local_428;
  float local_424;
  float local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  float local_408;
  float local_404;
  float local_400;
  longlong local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  float local_3dc;
  undefined1 local_3d8 [32];
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  undefined1 local_3a7;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [56];
  undefined1 local_2c0 [56];
  undefined1 local_288 [56];
  undefined1 local_250 [56];
  undefined1 local_218 [56];
  undefined1 local_1e0 [56];
  undefined1 local_1a8 [56];
  undefined1 local_170 [56];
  undefined1 local_138 [56];
  undefined1 local_100 [200];
  
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar19 + 0x38) < DAT_146858a68) &&
     (_Init_thread_header(&DAT_146858a68), DAT_146858a68 == -1)) {
    FName::FName(&DAT_146858a60,L"EntryX",1);
    _Init_thread_footer(&DAT_146858a68);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858a78) &&
     (_Init_thread_header(&DAT_146858a78), DAT_146858a78 == -1)) {
    FName::FName(&DAT_146858a70,L"EntryY",1);
    _Init_thread_footer(&DAT_146858a78);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858a88) &&
     (_Init_thread_header(&DAT_146858a88), DAT_146858a88 == -1)) {
    FName::FName(&DAT_146858a80,L"EntryZ",1);
    _Init_thread_footer(&DAT_146858a88);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858a98) &&
     (_Init_thread_header(&DAT_146858a98), DAT_146858a98 == -1)) {
    FName::FName(&DAT_146858a90,L"ExitX",1);
    _Init_thread_footer(&DAT_146858a98);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858aa8) &&
     (_Init_thread_header(&DAT_146858aa8), DAT_146858aa8 == -1)) {
    FName::FName(&DAT_146858aa0,L"ExitY",1);
    _Init_thread_footer(&DAT_146858aa8);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858ab8) &&
     (_Init_thread_header(&DAT_146858ab8), DAT_146858ab8 == -1)) {
    FName::FName(&DAT_146858ab0,L"ExitZ",1);
    _Init_thread_footer(&DAT_146858ab8);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858ac8) &&
     (_Init_thread_header(&DAT_146858ac8), DAT_146858ac8 == -1)) {
    FName::FName(&DAT_146858ac0,L"ArcSpeed",1);
    _Init_thread_footer(&DAT_146858ac8);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146858ad8) &&
     (_Init_thread_header(&DAT_146858ad8), DAT_146858ad8 == -1)) {
    FName::FName(&DAT_146858ad0,L"ArcAnglePct",1);
    _Init_thread_footer(&DAT_146858ad8);
  }
  uVar12 = (ulonglong)*(uint *)(lVar19 + 0x38);
  if (((int)*(uint *)(lVar19 + 0x38) < DAT_146858ae8) &&
     (uVar12 = _Init_thread_header(&DAT_146858ae8), DAT_146858ae8 == -1)) {
    FName::FName(&DAT_146858ae0,L"MaxPrediction",1);
    uVar12 = _Init_thread_footer(&DAT_146858ae8);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    uVar12 = FUN_142e20fc0();
    for (uVar6 = *(ulonglong *)(param_1 + 0x100); uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x30))
    {
      if (uVar6 == uVar12) {
        if (*(ulonglong *)(param_1 + 0x100) != 0) {
          lVar19 = *(longlong *)(param_1 + 0xd8);
          lVar20 = param_2[1];
          fVar4 = *(float *)(lVar20 + 0x48 + lVar19);
          if ((fVar4 <= 0.0) || (*(float *)(param_1 + 0x14c) <= *(float *)(param_2 + 3) - fVar4)) {
            *(int *)(lVar20 + 0x48 + lVar19) = (int)param_2[3];
            uVar12 = FUN_14070b8c0(param_1,param_2);
            lVar19 = *(longlong *)(param_1 + 0xd8);
            lVar20 = param_2[1];
          }
          if ((*(char *)(lVar19 + 0x4c + lVar20) != '\0') &&
             (*(char *)(lVar19 + 0x4d + lVar20) != '\0')) {
            local_3f8 = *(longlong *)(*param_2 + 0x648);
            uVar12 = 0;
            if (local_3f8 != 0) {
              uVar12 = FUN_1407043d0(param_1,param_2,&local_438,&local_458,0);
              if ((char)uVar12 != '\0') {
                local_res20 = 0;
                local_res8 = '\0';
                cVar11 = FUN_142cc45e0(param_1 + 0x108,*(undefined8 *)(*param_2 + 0x568),&local_408,
                                       &local_res20,local_res18);
                if (((cVar11 != '\0') && (local_res20 != 0)) &&
                   (local_res8 = local_res18[0], local_res18[0] == '\0')) {
                  lVar17 = *(longlong *)(local_res20 + 0x168);
                  if (lVar17 == 0) {
                    local_3e8 = DAT_1468b5d98;
                    puVar13 = &local_3f0;
                    local_3f0 = _DAT_1468b5d90;
                  }
                  else {
                    local_308 = *(undefined4 *)(lVar17 + 0x220);
                    uStack_304 = *(undefined4 *)(lVar17 + 0x224);
                    uStack_300 = *(undefined4 *)(lVar17 + 0x228);
                    uStack_2fc = *(undefined4 *)(lVar17 + 0x22c);
                    puVar13 = (undefined8 *)&local_418;
                    local_418 = local_308;
                    local_410 = uStack_300;
                    uStack_414 = uStack_304;
                  }
                  local_3dc = *(float *)(puVar13 + 1);
                  local_408 = (float)*puVar13 - local_408;
                  local_404 = (float)((ulonglong)*puVar13 >> 0x20) - local_404;
                  local_res8 = local_408 * local_408 + local_404 * local_404 +
                               (local_3dc - local_400) * (local_3dc - local_400) <
                               *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148);
                }
                puVar21 = &local_438;
                FUN_140706310(param_1,&local_428,param_2,local_res20,puVar21,&local_458);
                local_458 = local_458 + local_428;
                local_454 = local_454 + local_424;
                local_450 = local_450 + local_420;
                FUN_142c62180(local_3d8);
                local_3a7 = 1;
                puVar13 = (undefined8 *)FUN_142c62590(local_2f8,&DAT_146858a60,local_438);
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)FUN_142c62590(local_2c0,&DAT_146858a70,local_434);
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)FUN_142c62590(local_288,&DAT_146858a80,local_430);
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)FUN_142c62590(local_250,&DAT_146858a90,local_458);
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)FUN_142c62590(local_218,&DAT_146858aa0,local_454);
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)FUN_142c62590(local_1e0,&DAT_146858ab0,local_450);
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)
                          FUN_142c62590(local_1a8,&DAT_146858ac0,*(undefined4 *)(param_1 + 0x138));
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)
                          FUN_142c62590(local_170,&DAT_146858ad0,*(undefined4 *)(param_1 + 0x13c));
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                puVar13 = (undefined8 *)
                          FUN_142c62590(local_138,&DAT_146858ae0,*(undefined4 *)(param_1 + 0x140));
                iVar5 = local_3b0;
                lVar17 = (longlong)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (local_3ac < local_3b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_3b8,iVar5);
                }
                uVar14 = puVar13[1];
                lVar17 = lVar17 * 0x38;
                *(undefined8 *)(lVar17 + local_3b8) = *puVar13;
                ((undefined8 *)(lVar17 + local_3b8))[1] = uVar14;
                uVar14 = puVar13[3];
                puVar2 = (undefined8 *)(lVar17 + 0x10 + local_3b8);
                *puVar2 = puVar13[2];
                puVar2[1] = uVar14;
                uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
                uVar8 = *(undefined4 *)(puVar13 + 5);
                uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                puVar3 = (undefined4 *)(lVar17 + 0x20 + local_3b8);
                *puVar3 = *(undefined4 *)(puVar13 + 4);
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined8 *)(lVar17 + 0x30 + local_3b8) = puVar13[6];
                uVar14 = FUN_1405e0fd0(local_100,local_3d8);
                FUN_142c7bb40(local_3f8,&local_448,*(undefined8 *)(param_1 + 0x100),uVar14,
                              (ulonglong)puVar21 & 0xffffffffffffff00);
                if (local_448 != (longlong *)0x0) {
                  cVar11 = (**(code **)(*local_448 + 0x38))();
                  plVar16 = local_448;
                  if (cVar11 == '\0') {
                    if ((local_res8 == '\0') || (local_448 == (longlong *)0x0)) goto LAB_14071e3c4;
                    lVar17 = local_448[1];
                    lVar15 = FAnimNode_DragonSpineSolver::StaticStruct();
                    goto joined_r0x00014071e387;
                  }
                  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 1;
                }
                uVar12 = 0;
                plVar16 = local_440;
                goto LAB_14071e327;
              }
            }
          }
        }
        break;
      }
    }
  }
  return uVar12 & 0xffffffffffffff00;
joined_r0x00014071e387:
  if (lVar17 == 0) {
    bVar10 = false;
LAB_14071e3a0:
    plVar18 = (longlong *)0x0;
    if (bVar10) {
      plVar18 = plVar16;
    }
    if (plVar18 != (longlong *)0x0) {
      FUN_1406f66a0(plVar18,local_res20,&local_428);
    }
LAB_14071e3c4:
    plVar18 = local_440;
    *(longlong **)(lVar19 + 0x50 + lVar20) = local_448;
    plVar16 = *(longlong **)(lVar19 + 0x58 + lVar20);
    if (local_440 != plVar16) {
      if (local_440 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_440 + 0xc) = *(int *)((longlong)local_440 + 0xc) + 1;
        UNLOCK();
        plVar16 = *(longlong **)(lVar19 + 0x58 + lVar20);
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
      *(longlong **)(lVar19 + 0x58 + lVar20) = plVar18;
    }
    uVar12 = 1;
    plVar16 = local_440;
LAB_14071e327:
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar16 + 1;
      lVar19 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
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
    FUN_142c63c50(local_3d8);
    return uVar12;
  }
  if (lVar17 == lVar15) {
    bVar10 = true;
    goto LAB_14071e3a0;
  }
  lVar17 = *(longlong *)(lVar17 + 0x30);
  goto joined_r0x00014071e387;
}



// FUNCTION 14071e680 FUN_14071e680 body=236 status=ok
// SIG undefined FUN_14071e680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14071e680(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x688))();
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x168);
    if (lVar2 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar2 + 0x220);
      local_10 = *(undefined4 *)(lVar2 + 0x228);
    }
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 0x120) = local_18;
    *(undefined4 *)(param_1 + 0x128) = local_10;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 300) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x134) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x138) = DAT_1468b5da0;
    uVar1 = DAT_1468b5da8;
    *(undefined4 *)(param_1 + 0x140) = DAT_1468b5da8;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 14071e770 FUN_14071e770 body=173 status=ok
// SIG undefined FUN_14071e770(void)

char FUN_14071e770(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = FUN_14071e940();
  if (cVar1 != '\0') {
    if (*(longlong **)(*param_2 + 0x488) != (longlong *)0x0) {
      lVar2 = (**(code **)(**(longlong **)(*param_2 + 0x488) + 0x6e8))();
      if (lVar2 != 0) {
        uVar3 = FUN_142fc5c90();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
        if (plVar4 != (longlong *)0x0) {
          lVar2 = FUN_14070c550(param_1,param_2);
          if (lVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar2 + 0x118);
          }
          (**(code **)(*plVar4 + 0x10))(plVar4,uVar3);
        }
      }
      return cVar1;
    }
  }
  return cVar1;
}



// FUNCTION 14071e820 FUN_14071e820 body=151 status=ok
// SIG undefined FUN_14071e820(void)

void FUN_14071e820(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x250);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = *(longlong *)(param_2 + 8);
  fVar1 = *(float *)(param_1 + 0x254);
  if (fVar5 != fVar1) {
    iVar4 = rand();
    fVar5 = (float)iVar4 * 3.051851e-05 * (fVar1 - fVar5) + fVar5;
  }
  *(float *)(lVar2 + 0x60 + lVar3) = fVar5;
  FUN_14071e940(param_1,param_2);
  return;
}



// FUNCTION 14071e8c0 FUN_14071e8c0 body=128 status=ok
// SIG undefined FUN_14071e8c0(void)

ulonglong FUN_14071e8c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar4 = (**(code **)(*param_1 + 0x298))();
  if ((char)uVar4 != '\0') {
    uVar4 = FUN_14071e940(param_1,param_2);
    if ((char)uVar4 != '\0') {
      lVar2 = param_1[0x1b];
      lVar3 = *(longlong *)(param_2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29 + lVar3);
      uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
      if (cVar1 == '\x02') {
        if (*(char *)((longlong)param_1 + 0xd3) != '\0') {
          *(undefined1 *)(lVar2 + 0x29 + lVar3) = 0;
          return CONCAT71(uVar5,1);
        }
      }
      else if (cVar1 == '\x01') {
        *(undefined1 *)(lVar2 + 0x29 + lVar3) = 0;
      }
      return CONCAT71(uVar5,1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14071e940 FUN_14071e940 body=229 status=ok
// SIG undefined FUN_14071e940(void)

bool FUN_14071e940(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14070a100();
  if ((cVar1 != '\0') &&
     (lVar2 = *(longlong *)(param_2 + 8) + param_1[0x1b], *(longlong *)(lVar2 + 0x48) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x3b0))(param_1,param_2);
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x29 + param_1[0x1b]) = 1;
      return true;
    }
    if ((char)param_1[0x40] != '\0') {
      cVar1 = FUN_14071ccd0(param_1,param_2);
      *(char *)(*(longlong *)(param_2 + 8) + 0x29 + param_1[0x1b]) = cVar1;
      return cVar1 == '\0';
    }
    cVar1 = FUN_142fa58d0(*(undefined8 *)(lVar2 + 0x48));
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_14070b3f0(param_1,param_2,*(undefined8 *)(lVar2 + 0x48)), cVar1 != '\0')) {
      return true;
    }
    *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x29 + param_1[0x1b]) = 2;
  }
  return false;
}



// FUNCTION 14071ea30 FUN_14071ea30 body=133 status=ok
// SIG undefined FUN_14071ea30(void)

undefined8 FUN_14071ea30(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x298))();
  if ((cVar1 != '\0') && (cVar1 = FUN_14071e940(param_1,param_2), cVar1 != '\0')) {
    cVar1 = *(char *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
    if (cVar1 == '\x02') {
      if (*(char *)((longlong)param_1 + 0xd3) == '\0') {
        return 1;
      }
    }
    else if (cVar1 != '\x01') {
      return 1;
    }
    uVar2 = FUN_140705b90(param_1,param_2);
    *(undefined1 *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = uVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 14071eac0 FUN_14071eac0 body=53 status=ok
// SIG undefined FUN_14071eac0(void)

bool FUN_14071eac0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1407036d0();
  *(char *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = cVar1;
  return cVar1 == '\0';
}



// FUNCTION 14071eb00 FUN_14071eb00 body=216 status=ok
// SIG undefined FUN_14071eb00(void)

undefined8 FUN_14071eb00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  
  cVar3 = (**(code **)(*param_1 + 0x298))();
  if ((cVar3 != '\0') && (cVar3 = FUN_14071e940(param_1,param_2), cVar3 != '\0')) {
    lVar1 = param_1[0x1b];
    lVar2 = param_2[1];
    cVar3 = *(char *)(lVar1 + 0x29 + lVar2);
    if (cVar3 == '\x02') {
      if (*(char *)((longlong)param_1 + 0xd3) == '\0') {
        return 1;
      }
    }
    else if (cVar3 != '\x01') {
      return 1;
    }
    *(undefined1 *)(lVar1 + 0x29 + lVar2) = 0;
    *(undefined1 *)(lVar1 + 0x60 + lVar2) = 1;
    if (0 < (int)param_1[0xad]) {
      local_30 = *param_2;
      local_10 = param_2[2];
      local_48 = (undefined4)local_30;
      uStack_44 = (undefined4)((ulonglong)local_30 >> 0x20);
      uStack_40 = (undefined4)param_2[1];
      uStack_3c = (undefined4)((ulonglong)param_2[1] >> 0x20);
      local_28 = *(undefined8 *)(local_30 + 0x5c8);
      local_20 = local_48;
      uStack_1c = uStack_44;
      uStack_18 = uStack_40;
      uStack_14 = uStack_3c;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xac,&local_30);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14071ebe0 FUN_14071ebe0 body=174 status=ok
// SIG undefined FUN_14071ebe0(void)

undefined8 FUN_14071ebe0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  uVar1 = FUN_14071d8c0();
  *(undefined1 *)(lVar2 + 0x128) = uVar1;
  lVar2 = FWeakObjectPtr::Get(lVar2 + 300);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858b38) {
    _Init_thread_header(&DAT_146858b38);
    if (DAT_146858b38 == -1) {
      FName::FName(&DAT_146858b30,L"TakeOff1",1);
      _Init_thread_footer(&DAT_146858b38);
    }
  }
  FUN_142cff920(lVar2,0,DAT_146858b30);
  return 1;
}



// FUNCTION 14071ec90 FUN_14071ec90 body=956 status=ok
// SIG undefined FUN_14071ec90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14071ec90(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  
  cVar6 = (**(code **)(*param_1 + 0x298))();
  if (cVar6 == '\0') {
    return 0;
  }
  *(undefined1 *)(param_2[1] + 0x6c + param_1[0x1b]) = 0;
  do {
    lVar3 = param_2[1];
    lVar4 = param_1[0x1b];
    cVar6 = *(char *)(lVar3 + 0x6c + lVar4);
    if (cVar6 == '\0') {
      lVar8 = FWeakObjectPtr::Get(lVar4 + 0x70 + lVar3);
      if (lVar8 != 0) {
        FUN_140736900(lVar8,1);
      }
      *(undefined1 *)(lVar3 + 0x6c + lVar4) = 1;
      goto LAB_14071f00b;
    }
    if (cVar6 == '\x01') {
      lVar8 = FWeakObjectPtr::Get(lVar4 + 0x70 + lVar3);
      if (lVar8 == 0) {
LAB_14071edfc:
        if ((char)param_1[0x22] == '\0') {
LAB_14071ee2e:
          lVar10 = param_2[1] + param_1[0x1b];
          *(undefined4 *)(lVar10 + 0x88) = 7;
          lVar8 = *param_2;
          lVar5 = *(longlong *)(lVar8 + 0x5c8);
          if ((char)param_1[0x35] == '\0') {
            if (lVar5 == 0) {
              fVar11 = 0.0;
            }
            else {
              local_res18[0] = *(undefined8 *)(lVar8 + 0x568);
              fVar11 = (float)FUN_142de77e0(param_1 + 0x25,lVar8,0,local_res18);
            }
            *(float *)(lVar10 + 0x80) = fVar11;
            if (0.0 < fVar11) {
              *(undefined4 *)(lVar10 + 0x84) = 0;
              lVar8 = *(longlong *)(lVar5 + 0x168);
              if (lVar8 == 0) {
                local_4c = DAT_1468b5d98;
                puVar9 = &local_54;
                local_54 = _DAT_1468b5d90;
              }
              else {
                puVar9 = (undefined8 *)&local_6c;
                local_6c = *(undefined4 *)(lVar8 + 0x220);
                local_64 = *(undefined4 *)(lVar8 + 0x228);
                local_68 = *(undefined4 *)(lVar8 + 0x224);
              }
              goto LAB_14071ef93;
            }
          }
          else {
            if (lVar5 == 0) {
              fVar11 = 0.0;
            }
            else {
              local_res8 = *(undefined8 *)(lVar8 + 0x568);
              fVar11 = (float)FUN_142de77e0(param_1 + 0x36,lVar8,0,&local_res8);
            }
            *(float *)(lVar10 + 0x8c) = fVar11;
            if (0.0 < fVar11) {
              lVar8 = *(longlong *)(lVar5 + 0x168);
              if (lVar8 == 0) {
                local_58 = DAT_1468b5d98;
                puVar9 = &local_60;
                local_60 = _DAT_1468b5d90;
              }
              else {
                puVar9 = (undefined8 *)&local_78;
                local_78 = *(undefined4 *)(lVar8 + 0x220);
                local_70 = *(undefined4 *)(lVar8 + 0x228);
                uStack_74 = *(undefined4 *)(lVar8 + 0x224);
              }
LAB_14071ef93:
              uVar2 = *(undefined4 *)(puVar9 + 1);
              *(undefined8 *)(lVar10 + 0x48) = *puVar9;
              *(undefined4 *)(lVar10 + 0x50) = uVar2;
              lVar8 = *(longlong *)(lVar5 + 0x900);
              if (lVar8 != 0) {
                bVar1 = *(byte *)(lVar8 + 0x248);
                *(uint *)(lVar10 + 0x88) = (uint)bVar1;
                FUN_142cff920(lVar8,bVar1 != 5);
                FUN_142dafbc0(lVar8 + 0x8b0,&DAT_1468589b8);
              }
              *(undefined1 *)(lVar3 + 0x6c + lVar4) = 2;
              goto LAB_14071f00b;
            }
          }
LAB_14071ed90:
          FUN_14071d160(param_1,param_2);
        }
        else if (*(char *)(lVar3 + 0x6d + lVar4) == '\0') {
          cVar7 = FUN_14070bf00(param_1,param_2);
          if (cVar7 != '\0') {
            cVar7 = FUN_140709e90(param_1,param_2);
            if (cVar7 != '\0') goto LAB_14071ee2e;
          }
        }
        lVar8 = FWeakObjectPtr::Get(param_2[1] + 0x70 + param_1[0x1b]);
        if (lVar8 != 0) {
          FUN_140736920(lVar8,1);
        }
        *(undefined1 *)(lVar3 + 0x6c + lVar4) = 3;
      }
      else {
        cVar7 = FUN_14073ca30(lVar8);
        if (cVar7 != '\0') {
          cVar7 = FUN_14073d040(lVar8);
          if (cVar7 == '\0') goto LAB_14071edfc;
        }
      }
    }
    else if (cVar6 == '\x02') {
      cVar7 = FUN_140722330(param_1,param_2);
      if (cVar7 == '\0') goto LAB_14071ed90;
    }
    else if (cVar6 == '\x03') {
      lVar8 = FWeakObjectPtr::Get(lVar4 + 0x70 + lVar3);
      if (lVar8 == 0) {
LAB_14071ed68:
        FUN_14070a990(param_1,param_2);
        *(undefined1 *)(lVar3 + 0x6c + lVar4) = 4;
      }
      else {
        cVar7 = FUN_14073ca30(lVar8);
        if (cVar7 == '\0') {
          cVar7 = FUN_14073d040(lVar8);
          if (cVar7 == '\0') goto LAB_14071ed68;
        }
      }
    }
LAB_14071f00b:
    if (*(char *)(lVar3 + 0x6c + lVar4) == cVar6) {
      return 1;
    }
  } while( true );
}



// FUNCTION 14071f050 FUN_14071f050 body=60 status=ok
// SIG undefined FUN_14071f050(void)

undefined1 FUN_14071f050(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_140722250(param_1,param_2);
  return 1;
}



// FUNCTION 14071f090 FUN_14071f090 body=210 status=ok
// SIG undefined FUN_14071f090(void)

undefined8 FUN_14071f090(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x224) != '\0') {
    lVar1 = FUN_14075eaf0(*param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_140712d90(param_1 + 0x100,param_2);
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      uVar3 = FUN_142de77e0(param_1 + 0x108,*(undefined8 *)(*param_2 + 0x488),0,&local_res8);
      uVar2 = FUN_1407514c0(lVar1 + 0x48,*(undefined8 *)(param_1 + 0x208),*param_2,uVar3,
                            *(undefined1 *)(param_1 + 0x101),0x7f7fffff,uVar2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 14071f170 FUN_14071f170 body=87 status=ok
// SIG undefined FUN_14071f170(void)

undefined1 FUN_14071f170(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x58 + *(longlong *)(param_2 + 8));
  if (lVar3 != 0) {
    cVar1 = FUN_14073cf40(lVar3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_14071bd20(param_1,param_2);
  return uVar2;
}



// FUNCTION 14071f1d0 FUN_14071f1d0 body=92 status=ok
// SIG undefined FUN_14071f1d0(void)

undefined1 FUN_14071f1d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14071e940();
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x60 + param_2[1]);
  if (lVar2 != 0) {
    FUN_14076de30(lVar2,*(undefined8 *)(*param_2 + 0x488));
  }
  return 1;
}



// FUNCTION 14071f230 FUN_14071f230 body=920 status=ok
// SIG undefined FUN_14071f230(void)

/* WARNING: Removing unreachable block (ram,0x00014071f3b5) */

undefined8 FUN_14071f230(longlong param_1,longlong *param_2)

{
  int *piVar1;
  WriteBytesMem *this;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uchar *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  undefined4 local_res10;
  undefined4 uStackX_14;
  float local_res18 [4];
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [72];
  
  plVar14 = (longlong *)0x0;
  local_res10 = 0;
  local_c0 = *(longlong *)(*param_2 + 0x630);
  if (local_c0 == 0) {
    return 0;
  }
  this = (WriteBytesMem *)(local_c0 + 0x1e8);
  cVar7 = FSimulationThreadWorker::Init(this);
  if (cVar7 == '\0') {
    return 0;
  }
  lVar15 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar9 = IMessageToken::GetOnMessageTokenActivated(this);
  puVar10 = (undefined8 *)FUN_142c62590(local_88,&DAT_146b2fd00,*(undefined4 *)(lVar9 + 0xc));
  iVar8 = *(int *)(lVar15 + 0x80);
  *(int *)(lVar15 + 0x80) = iVar8 + 1;
  if (*(int *)(lVar15 + 0x84) < iVar8 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar15 + 0x78,iVar8);
  }
  uVar11 = puVar10[1];
  lVar9 = *(longlong *)(lVar15 + 0x78);
  lVar13 = (longlong)iVar8 * 0x38;
  *(undefined8 *)(lVar13 + lVar9) = *puVar10;
  ((undefined8 *)(lVar13 + lVar9))[1] = uVar11;
  uVar11 = puVar10[3];
  puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar9);
  *puVar2 = puVar10[2];
  puVar2[1] = uVar11;
  uVar4 = *(undefined4 *)((longlong)puVar10 + 0x24);
  uVar5 = *(undefined4 *)(puVar10 + 5);
  uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
  puVar3 = (undefined4 *)(lVar13 + 0x20 + lVar9);
  *puVar3 = *(undefined4 *)(puVar10 + 4);
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  *(undefined8 *)(lVar13 + 0x30 + lVar9) = puVar10[6];
  cVar7 = FUN_14071d8c0(param_1,param_2);
  if (cVar7 == '\0') {
    return 0;
  }
  if ((*(longlong *)(lVar15 + 0x48) == 0) || (*(longlong *)(lVar15 + 0x50) == 0)) {
LAB_14071f3ca:
    plVar16 = (longlong *)CONCAT44(uStackX_14,local_res10);
    plVar18 = plVar14;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar15 + 0x50) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_14071f3ca;
    plVar18 = *(longlong **)(lVar15 + 0x50);
    plVar16 = plVar18;
    plVar17 = plVar14;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      iVar8 = (int)plVar18[1];
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(plVar18 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (plVar16 = plVar14, !bVar19) {
        LOCK();
        bVar19 = iVar8 == (int)plVar18[1];
        if (bVar19) {
          *(int *)(plVar18 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar19) {
          plVar16 = plVar18;
          plVar17 = (longlong *)0x0;
          if (plVar18 != (longlong *)0x0) {
            plVar17 = *(longlong **)(lVar15 + 0x48);
          }
          break;
        }
        LOCK();
        iVar8 = (int)plVar18[1];
        bVar19 = iVar8 == 0;
        if (bVar19) {
          *(int *)(plVar18 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
    }
    plVar18 = (longlong *)0x1;
    if (plVar17 != (longlong *)0x0) {
      lVar9 = plVar17[1];
      lVar15 = FUN_142e219b0();
      for (; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        plVar14 = plVar17;
        if (lVar9 == lVar15) goto LAB_14071f3d5;
      }
      plVar14 = (longlong *)0x0;
    }
  }
LAB_14071f3d5:
  if ((plVar18 != (longlong *)0x0) && (plVar16 != (longlong *)0x0)) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    uVar11 = FUN_1407a3950();
    cVar7 = FUN_142c72bf0(plVar14,1,uVar11);
    if (cVar7 != '\0') goto LAB_14071f439;
  }
  FUN_140763a30(local_c0,0);
LAB_14071f439:
  plVar14 = *(longlong **)(*param_2 + 0x5c8);
  if (plVar14 != (longlong *)0x0) {
    lVar9 = plVar14[0x120];
    if (lVar9 != 0) {
      cVar7 = FUN_14075ebf0(this,&local_d8,&local_res10);
      if (cVar7 != '\0') {
        (**(code **)(*plVar14 + 0x578))(plVar14,local_c8,local_res18);
        local_d0 = local_d0 + local_res18[0];
        local_b8 = local_d8;
        local_b0 = local_d0;
        FUN_142d85c80(lVar9 + 0x2428,&local_b8,local_res10,1,0,0);
      }
      cVar7 = FUN_14075ec50(this,&local_a8,&local_res10);
      if (cVar7 != '\0') {
        local_98 = local_a8;
        local_90 = local_a0;
        FUN_142d85fe0(lVar9 + 0x2428,&local_98,local_res10,1,0,0);
      }
      puVar12 = AK::WriteBytesMem::Bytes(this);
      if ((puVar12 != (uchar *)0x0) && (puVar12[0x734] != '\0')) {
        FUN_142cff920(lVar9,1,*(undefined8 *)(param_1 + 0x18));
      }
    }
    lVar9 = *(longlong *)(*param_2 + 0x630);
    if ((lVar9 != 0) && (lVar15 = *(longlong *)(*param_2 + 0x648), lVar15 != 0)) {
      lVar9 = lVar9 + 0x1e8;
      cVar7 = FSimulationThreadWorker::Init(lVar9);
      if (cVar7 != '\0') {
        puVar10 = (undefined8 *)IMessageToken::GetOnMessageTokenActivated(lVar9);
        lVar9 = FUN_142c713b0(lVar15,*puVar10);
        if (lVar9 != 0) {
          FUN_142cd02d0(plVar14,lVar9);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 14071f5d0 FUN_14071f5d0 body=480 status=ok
// SIG undefined FUN_14071f5d0(void)

char FUN_14071f5d0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  float fVar13;
  longlong *local_res10;
  
  uVar9 = 0;
  lVar10 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  local_res10 = param_2;
  if (*(char *)(lVar10 + 0x4a) == -1) {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x678))();
    if (plVar3 != (longlong *)0x0) {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        bVar8 = 0;
        puVar6 = *(undefined8 **)(param_1 + 0x338);
        uVar12 = (longlong)*(int *)(param_1 + 0x340) & 0x1fffffffffffffff;
        if (puVar6 + *(int *)(param_1 + 0x340) < puVar6) {
          uVar12 = uVar9;
        }
        if (uVar12 != 0) {
          do {
            if (bVar8 < 10) {
              cVar2 = (**(code **)(*plVar3 + 0xa68))(plVar3,*puVar6);
              uVar5 = (ulonglong)bVar8;
              if (cVar2 == -1) {
                cVar2 = '\0';
              }
              bVar8 = bVar8 + 1;
              *(char *)(uVar5 + 0x4a + lVar10) = cVar2;
            }
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 + 1;
            param_2 = local_res10;
          } while (uVar9 != uVar12);
        }
      }
    }
    if (*(char *)(lVar10 + 0x4a) == -1) {
      *(undefined1 *)(lVar10 + 0x4a) = 0;
    }
  }
  cVar2 = FUN_140722570(param_1,param_2);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_2[1] + 0x29 + *(longlong *)(param_1 + 0xd8)) = 1;
    pcVar11 = (char *)(*(longlong *)(param_1 + 0xd8) + 0x4a + param_2[1]);
    pcVar7 = pcVar11;
    if (pcVar11 <= (char *)(*(longlong *)(param_1 + 0xd8) + 0x54 + param_2[1])) {
      do {
        if ((-1 < *pcVar7) && (lVar10 = FUN_140760140(*param_2,(int)*pcVar7), lVar10 != 0)) {
          local_res10 = *(longlong **)(*param_2 + 0x568);
          fVar13 = (float)FUN_142de77e0(param_1 + 0x348,*param_2,0,&local_res10);
          *(char *)(lVar10 + 0x85c) = (char)(int)fVar13;
          FUN_140784ab0(lVar10,*(undefined1 *)(param_1 + 0x4c9));
        }
        pcVar7 = pcVar7 + 1;
      } while ((longlong)pcVar7 - (longlong)pcVar11 != 10);
    }
  }
  return cVar2;
}



// FUNCTION 14071f7b0 FUN_14071f7b0 body=53 status=ok
// SIG undefined FUN_14071f7b0(void)

bool FUN_14071f7b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_140703860();
  *(char *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = cVar1;
  return cVar1 == '\0';
}



// FUNCTION 14071f7f0 FUN_14071f7f0 body=569 status=ok
// SIG undefined FUN_14071f7f0(void)

ulonglong FUN_14071f7f0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  float fVar18;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_138;
  longlong *local_130;
  undefined1 local_128 [56];
  undefined1 local_f0 [200];
  
  lVar17 = param_2[1] + param_1[0x1b];
  local_res8 = *(undefined8 *)(*param_2 + 0x568);
  fVar18 = (float)FUN_142de77e0(param_1 + 0x57,*param_2,0,&local_res8);
  if (fVar18 != 1.0) {
    puVar12 = (undefined8 *)FUN_142c62590(local_128,&DAT_146b2fcd8,fVar18);
    iVar5 = *(int *)(lVar17 + 0x80);
    *(int *)(lVar17 + 0x80) = iVar5 + 1;
    if (*(int *)(lVar17 + 0x84) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar17 + 0x78,iVar5);
    }
    uVar13 = puVar12[1];
    lVar6 = *(longlong *)(lVar17 + 0x78);
    lVar15 = (longlong)iVar5 * 0x38;
    *(undefined8 *)(lVar15 + lVar6) = *puVar12;
    ((undefined8 *)(lVar15 + lVar6))[1] = uVar13;
    uVar13 = puVar12[3];
    puVar3 = (undefined8 *)(lVar15 + 0x10 + lVar6);
    *puVar3 = puVar12[2];
    puVar3[1] = uVar13;
    uVar7 = *(undefined4 *)((longlong)puVar12 + 0x24);
    uVar8 = *(undefined4 *)(puVar12 + 5);
    uVar9 = *(undefined4 *)((longlong)puVar12 + 0x2c);
    puVar4 = (undefined4 *)(lVar15 + 0x20 + lVar6);
    *puVar4 = *(undefined4 *)(puVar12 + 4);
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(undefined8 *)(lVar15 + 0x30 + lVar6) = puVar12[6];
  }
  uVar14 = *param_2;
  lVar6 = *(longlong *)(uVar14 + 0x648);
  if (lVar6 != 0) {
    (**(code **)(*param_1 + 0x3a0))(param_1,&local_res10,param_2);
    uVar13 = FUN_1405e0fd0(local_f0,lVar17 + 0x58);
    uVar14 = FUN_142c7bb40(lVar6,&local_138,local_res10,uVar13,0);
    if (local_138 != (longlong *)0x0) {
      cVar10 = (**(code **)(*local_138 + 0x38))();
      plVar1 = local_130;
      if (cVar10 == '\0') {
        *(longlong **)(lVar17 + 0x48) = local_138;
        plVar16 = *(longlong **)(lVar17 + 0x50);
        if (local_130 != plVar16) {
          if (local_130 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_130 + 0xc) = *(int *)((longlong)local_130 + 0xc) + 1;
            UNLOCK();
            plVar16 = *(longlong **)(lVar17 + 0x50);
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
          *(longlong **)(lVar17 + 0x50) = plVar1;
        }
        *(int *)(lVar17 + 0x124) = *(int *)(lVar17 + 0x124) + 1;
        uVar14 = 1;
      }
      else {
        uVar14 = 0;
        *(undefined1 *)(param_2[1] + 0x29 + param_1[0x1b]) = 1;
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)local_130 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      return uVar14;
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar17 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar11 = (int)lVar17 - 1;
      uVar14 = (ulonglong)uVar11;
      if (uVar11 == 0) {
        uVar14 = (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          uVar14 = (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  return uVar14 & 0xffffffffffffff00;
}



// FUNCTION 14071fa30 FUN_14071fa30 body=291 status=ok
// SIG undefined FUN_14071fa30(void)

char FUN_14071fa30(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if ((byte)(param_3 - 1U) < 3) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8));
    if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x150))) &&
        (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8), lVar6 != 0))
       && (*(char *)(lVar6 + 0x150) == '\0')) {
      param_3 = '\0';
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  *(undefined4 *)(lVar6 + 0x50) = 0xffffffff;
  if (param_3 == '\0') {
    iVar1 = *(int *)(param_1 + 0x150);
    uVar5 = uVar4;
    if (0 < (longlong)iVar1) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar4 * 8);
        if ((lVar2 != 0) && (cVar3 = FUN_1406de170(lVar2,param_2), cVar3 != '\0')) {
          *(int *)(lVar6 + 0x50) = (int)uVar5;
          cVar3 = FUN_1406f70d0(lVar2,param_2,param_1);
          if (cVar3 != '\0') {
            return '\0';
          }
          *(undefined4 *)(lVar6 + 0x50) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while ((longlong)uVar4 < (longlong)iVar1);
    }
    *(undefined4 *)(lVar6 + 0x50) = 0xffffffff;
    return '\x02';
  }
  return param_3;
}



// FUNCTION 14071fb60 FUN_14071fb60 body=764 status=ok
// SIG undefined FUN_14071fb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14071fb60(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_108 [32];
  float local_e8 [16];
  float *local_a8;
  int local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar11 = *(longlong *)(param_2 + 8) + param_1[0x1b];
  *(undefined4 *)(lVar11 + 0x50) = 0xffffffff;
  if (param_3 == 0) {
    local_a0 = (int)param_1[0x2a];
    lVar8 = (longlong)local_a0;
    if (local_a0 < 1) {
      uVar5 = CONCAT71((int7)(local_98 >> 8),2);
    }
    else {
      uVar5 = 0;
      local_a8 = (float *)0x0;
      local_9c = 0;
      TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_e8);
      pfVar7 = local_e8;
      if (local_a8 != (float *)0x0) {
        pfVar7 = local_a8;
      }
      _guard_xfg_dispatch_icall_nop(pfVar7,0,lVar8 * 4);
      fVar14 = 0.0;
      uVar9 = uVar5;
      if (0 < lVar8) {
        do {
          lVar1 = *(longlong *)(param_1[0x29] + uVar9 * 8);
          if (lVar1 != 0) {
            lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (cVar3 = FUN_1406de170(lVar1,param_2), cVar3 != '\0')) {
              fVar12 = (float)(**(code **)(*param_1 + 0x400))(param_1,lVar1,param_2);
              fVar14 = fVar14 + fVar12;
              pfVar7 = local_e8;
              if (local_a8 != (float *)0x0) {
                pfVar7 = local_a8;
              }
              pfVar7[uVar9] = fVar12;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < lVar8);
        if (0.0 < fVar14) {
          while (0.0001 < ABS(fVar14)) {
            iVar4 = rand();
            pfVar7 = local_e8;
            if (local_a8 != (float *)0x0) {
              pfVar7 = local_a8;
            }
            auVar13 = ZEXT416((uint)((float)iVar4 * 3.051851e-05 * fVar14));
            uVar9 = uVar5;
            uVar10 = uVar5;
            do {
              fVar12 = *pfVar7;
              if ((0.0 < fVar12) && (auVar13._0_4_ = auVar13._0_4_ - fVar12, auVar13._0_4_ <= 0.0))
              {
                *(int *)(lVar11 + 0x50) = (int)uVar9;
                lVar1 = *(longlong *)(param_1[0x29] + uVar10 * 8);
                if ((lVar1 != 0) && (cVar3 = FUN_1406f70d0(lVar1,param_2,param_1), cVar3 != '\0')) {
                  uVar5 = 0;
                  goto LAB_14071fddd;
                }
                *(undefined4 *)(lVar11 + 0x50) = 0xffffffff;
                fVar14 = fVar14 - fVar12;
                pfVar7 = local_e8;
                if (local_a8 != (float *)0x0) {
                  pfVar7 = local_a8;
                }
                pfVar7[uVar10] = 0.0;
                break;
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar10 = uVar10 + 1;
              pfVar7 = pfVar7 + 1;
            } while ((longlong)uVar10 < lVar8);
            if (fVar14 <= 0.0) break;
          }
        }
      }
      uVar5 = 2;
LAB_14071fddd:
      if (local_a8 != (float *)0x0) {
        FMemory::Free(local_a8);
      }
    }
  }
  else {
    uVar5 = (ulonglong)param_3;
  }
  return uVar5;
}



// FUNCTION 14071fe60 FUN_14071fe60 body=208 status=ok
// SIG undefined FUN_14071fe60(void)

char FUN_14071fe60(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  *(undefined4 *)(lVar5 + 0x50) = 0xffffffff;
  if (param_3 != '\0') {
    return param_3;
  }
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x150);
  uVar6 = uVar4;
  if (0 < (longlong)iVar1) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar4 * 8);
      if ((lVar2 != 0) && (cVar3 = FUN_1406de170(lVar2,param_2), cVar3 != '\0')) {
        *(int *)(lVar5 + 0x50) = (int)uVar6;
        cVar3 = FUN_1406f70d0(lVar2,param_2,param_1);
        if (cVar3 != '\0') {
          return '\0';
        }
        *(undefined4 *)(lVar5 + 0x50) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while ((longlong)uVar4 < (longlong)iVar1);
  }
  *(undefined4 *)(lVar5 + 0x50) = 0xffffffff;
  return '\x02';
}



// FUNCTION 14071ff30 FUN_14071ff30 body=547 status=ok
// SIG undefined FUN_14071ff30(void)

char FUN_14071ff30(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  if ((byte)(param_3 - 2U) < 3) {
    return param_3;
  }
  lVar7 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  iVar10 = *(int *)(lVar7 + 0x50) + 1;
  *(undefined4 *)(lVar7 + 0x50) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  lVar6 = (longlong)iVar10;
  if (lVar6 < iVar1) {
    lVar8 = lVar6 * 8;
    lVar6 = lVar6 + 1;
    do {
      plVar3 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x148));
      if (((plVar3 != (longlong *)0x0) &&
          (cVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3), cVar5 != '\0')) &&
         ((plVar3[0x29] != 0 || ((0 < (int)plVar3[0x22] || (0 < (int)plVar3[0x24])))))) {
        *(int *)(lVar7 + 0x50) = iVar10;
        if (*(char *)(param_1 + 0x160) == '\x01') {
          iVar2 = *(int *)(param_1 + 0x150);
          for (lVar9 = lVar6; lVar9 < iVar2; lVar9 = lVar9 + 1) {
            plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x148) + lVar9 * 8);
            if (((plVar4 != (longlong *)0x0) &&
                (cVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4), cVar5 != '\0')) &&
               (((plVar4[0x29] != 0 || ((0 < (int)plVar4[0x22] || (0 < (int)plVar4[0x24])))) &&
                (cVar5 = FUN_1406de170(plVar4,param_2), cVar5 == '\0')))) {
              cVar5 = *(char *)(plVar4[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
              if (cVar5 == '\x02') {
                if (*(char *)((longlong)plVar4 + 0xd3) == '\0') goto LAB_1407200a2;
              }
              else if (cVar5 != '\x01') goto LAB_1407200a2;
            }
          }
        }
        cVar5 = FUN_1406f70d0(plVar3,param_2,param_1);
        if (cVar5 != '\0') {
          return '\0';
        }
LAB_1407200a2:
        *(undefined4 *)(lVar7 + 0x50) = 0xffffffff;
        cVar5 = *(char *)(plVar3[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar5 == '\x02') {
          if (*(char *)((longlong)plVar3 + 0xd3) == '\0') {
            return '\x02';
          }
        }
        else if (cVar5 != '\x01') {
          return '\x02';
        }
      }
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 <= iVar1);
  }
  return '\x01';
}



// FUNCTION 140720160 FUN_140720160 body=123 status=ok
// SIG undefined FUN_140720160(void)

void FUN_140720160(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    cVar1 = FUN_1406f7e60();
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0xd8) + 0x29 +
                     *(longlong *)(param_2 + 8));
    if ((cVar1 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x148) + 0xd3) != '\0')) {
      cVar1 = '\x01';
    }
    *(char *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = cVar1;
  }
  FUN_1406f9f40(param_1,param_2);
  return;
}



// FUNCTION 1407201e0 FUN_1407201e0 body=316 status=ok
// SIG undefined FUN_1407201e0(void)

undefined1 FUN_1407201e0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 uVar9;
  
  uVar5 = FUN_1406f9f40();
  plVar8 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar8 + *(int *)(param_1 + 0x150);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      lVar7 = USoundNodeEnveloper::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) break;
    }
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)*(int *)(param_1 + 0x150) * 8);
  if (plVar8 != plVar2) {
    uVar9 = uVar5;
    do {
      cVar6 = FUN_1406f7e60(*plVar8,param_2,param_3);
      uVar5 = uVar9;
      if (cVar6 == '\0') {
        uVar9 = 0;
        uVar5 = 0;
      }
      do {
        do {
          plVar8 = plVar8 + 1;
          if (plVar8 == plVar1) goto LAB_1407202f7;
          lVar3 = *plVar8;
        } while (lVar3 == 0);
        lVar7 = USoundNodeEnveloper::StaticClass();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      } while (!bVar4);
LAB_1407202f7:
    } while (plVar8 != plVar2);
  }
  return uVar5;
}



// FUNCTION 140720320 FUN_140720320 body=166 status=ok
// SIG undefined FUN_140720320(void)

void FUN_140720320(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 8) + 0x50 + *(longlong *)(param_1 + 0xd8));
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x150))) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8), lVar2 != 0)) {
    cVar3 = FUN_1406f7e60(lVar2);
    if (cVar3 == '\0') {
      return;
    }
    cVar3 = *(char *)(*(longlong *)(lVar2 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8));
    if ((cVar3 == '\x02') && (*(char *)(lVar2 + 0xd3) != '\0')) {
      cVar3 = '\x01';
    }
    *(char *)(*(longlong *)(param_2 + 8) + 0x29 + *(longlong *)(param_1 + 0xd8)) = cVar3;
  }
  FUN_1406f9f40(param_1,param_2);
  return;
}



// FUNCTION 1407203d0 FUN_1407203d0 body=277 status=ok
// SIG undefined FUN_1407203d0(void)

undefined8 FUN_1407203d0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
  iVar4 = *(int *)(lVar3 + 0x50);
  if (((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x150))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar4 * 8), lVar1 != 0)) {
    cVar2 = FUN_1406f7e60(lVar1);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = *(char *)(*(longlong *)(lVar1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8));
    if ((cVar2 == '\x02') && (*(char *)(lVar1 + 0xd3) != '\0')) {
      cVar2 = '\x01';
    }
    *(char *)(*(longlong *)(param_2 + 8) + 0x29 + *(longlong *)(param_1 + 0xd8)) = cVar2;
  }
  cVar2 = FUN_1406f9f40(param_1,param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)(lVar3 + 0x29) != param_3) {
    iVar4 = iVar4 + 1;
    lVar3 = (longlong)iVar4;
    while( true ) {
      if (lVar3 < 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x150) <= iVar4) {
        return 1;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x148) + lVar3 * 8);
      if ((lVar1 != 0) &&
         (((0 < *(int *)(lVar1 + 0x110) || (0 < *(int *)(lVar1 + 0x120))) ||
          (*(longlong *)(lVar1 + 0x148) != 0)))) break;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    }
    *(char *)(*(longlong *)(param_2 + 8) + 0x29 + *(longlong *)(param_1 + 0xd8)) = param_3;
  }
  return 1;
}



// FUNCTION 1407204f0 FUN_1407204f0 body=452 status=ok
// SIG undefined FUN_1407204f0(void)

undefined8 FUN_1407204f0(longlong param_1,ulonglong *param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined8 local_res20;
  longlong *local_38;
  longlong *local_30;
  ulonglong uVar7;
  
  uVar7 = *param_2;
  lVar2 = *(longlong *)(uVar7 + 0x648);
  if (lVar2 != 0) {
    lVar9 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    if ((*(longlong *)(lVar9 + 0x48) != 0) && (*(longlong *)(lVar9 + 0x50) != 0)) {
      plVar11 = (longlong *)0x0;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x50) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        plVar3 = *(longlong **)(lVar9 + 0x50);
        plVar8 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (plVar8 = plVar11, !bVar12) {
            LOCK();
            bVar12 = iVar5 == (int)plVar3[1];
            if (bVar12) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar8 = plVar3;
              if (plVar3 != (longlong *)0x0) {
                plVar11 = *(longlong **)(lVar9 + 0x48);
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar12 = iVar5 == 0;
            if (bVar12) {
              *(int *)(plVar3 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        cVar4 = (**(code **)(*plVar11 + 0x38))(plVar11);
        if (cVar4 == '\0') {
          if (param_3 != '\x04') {
            local_res20 = *(undefined8 *)(*param_2 + 0x568);
            lVar9 = 0x238;
            if (param_3 != '\x02') {
              lVar9 = 0x1b8;
            }
            fVar13 = (float)FUN_142de77e0(lVar9 + param_1,*param_2,0,&local_res20);
            if (fVar13 < 0.5) {
              uVar10 = 0;
              goto LAB_14072060e;
            }
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          local_38 = plVar11;
          local_30 = plVar8;
          FUN_142c84750(lVar2,&local_38);
          uVar10 = 1;
LAB_14072060e:
          if (plVar8 == (longlong *)0x0) {
            return uVar10;
          }
          LOCK();
          plVar11 = plVar8 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 != 1) {
            return uVar10;
          }
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return uVar10;
          }
          (**(code **)(*plVar8 + 8))(plVar8,1);
          return uVar10;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar8 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
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
      }
    }
    uVar6 = *(int *)(lVar9 + 0x120) - 1;
    uVar7 = (ulonglong)uVar6;
    if ((int)uVar6 <= *(int *)(lVar9 + 0x124)) {
      uVar7 = *(ulonglong *)(param_1 + 0xd8);
      *(undefined1 *)(param_2[1] + 0x29 + uVar7) = 1;
    }
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 1407206c0 FUN_1407206c0 body=303 status=ok
// SIG undefined FUN_1407206c0(void)

ulonglong FUN_1407206c0(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  if (((param_3 != '\x04') &&
      (lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8),
      *(longlong *)(lVar8 + 0x50) != 0)) && (*(longlong *)(lVar8 + 0x58) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x58) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar2 = *(longlong **)(lVar8 + 0x58);
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar6, !bVar9) {
          LOCK();
          bVar9 = iVar3 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar8 + 0x50);
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar2[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      uVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
      if ((char)uVar5 == '\0') {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar7 + 1;
          lVar8 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          uVar4 = (int)lVar8 - 1;
          uVar5 = (ulonglong)uVar4;
          if (uVar4 == 0) {
            uVar5 = (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              uVar5 = (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        return uVar5 & 0xffffffffffffff00;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_2 + 8);
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + lVar8) = 1;
  return CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
}



// FUNCTION 1407207f0 FUN_1407207f0 body=104 status=ok
// SIG undefined FUN_1407207f0(void)

char FUN_1407207f0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if ((cVar1 != '\0') && (*(longlong **)(*param_2 + 0x488) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(*param_2 + 0x488) + 0x6e8))();
    if (lVar2 != 0) {
      uVar3 = FUN_142fc5c90();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
  }
  return cVar1;
}



// FUNCTION 140720860 FUN_140720860 body=979 status=ok
// SIG undefined FUN_140720860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140720860(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined8 local_res20;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  uVar9 = 0;
  if (param_3 != '\x04') {
    lVar12 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    *(undefined1 *)(lVar12 + 0x6d) = 1;
    if (*(char *)(lVar12 + 0x6c) != '\x04') {
      do {
        lVar4 = param_2[1];
        lVar5 = *(longlong *)(param_1 + 0xd8);
        cVar1 = *(char *)(lVar4 + 0x6c + lVar5);
        if (cVar1 == '\0') {
          lVar8 = FWeakObjectPtr::Get(lVar5 + 0x70 + lVar4);
          uVar9 = 0;
          if (lVar8 != 0) {
            uVar9 = FUN_140736900(lVar8,1);
          }
          *(undefined1 *)(lVar4 + 0x6c + lVar5) = 1;
        }
        else if (cVar1 == '\x01') {
          lVar8 = FWeakObjectPtr::Get(lVar5 + 0x70 + lVar4);
          if ((lVar8 == 0) ||
             ((uVar9 = FUN_14073ca30(lVar8), (char)uVar9 != '\0' &&
              (uVar9 = FUN_14073d040(lVar8), (char)uVar9 == '\0')))) {
            if ((*(char *)(param_1 + 0x110) == '\0') ||
               (((*(char *)(lVar4 + 0x6d + lVar5) == '\0' &&
                 (cVar7 = FUN_14070bf00(param_1,param_2), cVar7 != '\0')) &&
                (cVar7 = FUN_140709e90(param_1,param_2), cVar7 != '\0')))) {
              lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
              *(undefined4 *)(lVar11 + 0x88) = 7;
              lVar8 = *param_2;
              lVar6 = *(longlong *)(lVar8 + 0x5c8);
              if (*(char *)(param_1 + 0x1a8) == '\0') {
                if (lVar6 == 0) {
                  fVar13 = 0.0;
                }
                else {
                  local_88 = *(undefined8 *)(lVar8 + 0x568);
                  fVar13 = (float)FUN_142de77e0(param_1 + 0x128,lVar8,0,&local_88);
                }
                *(float *)(lVar11 + 0x80) = fVar13;
                if (0.0 < fVar13) {
                  *(undefined4 *)(lVar11 + 0x84) = 0;
                  lVar8 = *(longlong *)(lVar6 + 0x168);
                  if (lVar8 == 0) {
                    local_54 = DAT_1468b5d98;
                    puVar10 = &local_5c;
                    local_5c = _DAT_1468b5d90;
                  }
                  else {
                    puVar10 = (undefined8 *)&local_74;
                    local_74 = *(undefined4 *)(lVar8 + 0x220);
                    local_6c = *(undefined4 *)(lVar8 + 0x228);
                    local_70 = *(undefined4 *)(lVar8 + 0x224);
                  }
                  goto LAB_140720b50;
                }
              }
              else {
                if (lVar6 == 0) {
                  fVar13 = 0.0;
                }
                else {
                  local_res20 = *(undefined8 *)(lVar8 + 0x568);
                  fVar13 = (float)FUN_142de77e0(param_1 + 0x1b0,lVar8,0,&local_res20);
                }
                *(float *)(lVar11 + 0x8c) = fVar13;
                if (0.0 < fVar13) {
                  lVar8 = *(longlong *)(lVar6 + 0x168);
                  if (lVar8 == 0) {
                    local_60 = DAT_1468b5d98;
                    puVar10 = &local_68;
                    local_68 = _DAT_1468b5d90;
                  }
                  else {
                    puVar10 = (undefined8 *)&local_80;
                    local_80 = *(undefined4 *)(lVar8 + 0x220);
                    local_78 = *(undefined4 *)(lVar8 + 0x228);
                    uStack_7c = *(undefined4 *)(lVar8 + 0x224);
                  }
LAB_140720b50:
                  uVar3 = *(uint *)(puVar10 + 1);
                  uVar9 = (ulonglong)uVar3;
                  *(undefined8 *)(lVar11 + 0x48) = *puVar10;
                  *(uint *)(lVar11 + 0x50) = uVar3;
                  lVar8 = *(longlong *)(lVar6 + 0x900);
                  if (lVar8 != 0) {
                    bVar2 = *(byte *)(lVar8 + 0x248);
                    *(uint *)(lVar11 + 0x88) = (uint)bVar2;
                    FUN_142cff920(lVar8,bVar2 != 5);
                    uVar9 = FUN_142dafbc0(lVar8 + 0x8b0,&DAT_1468589b8);
                  }
                  *(undefined1 *)(lVar4 + 0x6c + lVar5) = 2;
                  goto LAB_140720bc8;
                }
              }
LAB_140720950:
              FUN_14071d160(param_1,param_2);
            }
            lVar8 = FWeakObjectPtr::Get(param_2[1] + 0x70 + *(longlong *)(param_1 + 0xd8));
            uVar9 = 0;
            if (lVar8 != 0) {
              uVar9 = FUN_140736920(lVar8,1);
            }
            *(undefined1 *)(lVar4 + 0x6c + lVar5) = 3;
          }
        }
        else if (cVar1 == '\x02') {
          uVar9 = FUN_140722330(param_1,param_2);
          if ((char)uVar9 == '\0') goto LAB_140720950;
        }
        else if ((cVar1 == '\x03') &&
                ((lVar8 = FWeakObjectPtr::Get(lVar5 + 0x70 + lVar4), lVar8 == 0 ||
                 ((uVar9 = FUN_14073ca30(lVar8), (char)uVar9 == '\0' &&
                  (uVar9 = FUN_14073d040(lVar8), (char)uVar9 == '\0')))))) {
          uVar9 = FUN_14070a990(param_1,param_2);
          *(undefined1 *)(lVar4 + 0x6c + lVar5) = 4;
        }
LAB_140720bc8:
      } while (*(char *)(lVar4 + 0x6c + lVar5) != cVar1);
      if (*(char *)(lVar12 + 0x6c) != '\x04') {
        return uVar9 & 0xffffffffffffff00;
      }
    }
  }
  uVar9 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  return uVar9;
}



// FUNCTION 140720c40 FUN_140720c40 body=98 status=ok
// SIG undefined FUN_140720c40(void)

void FUN_140720c40(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  FUN_14076c7a0(*param_2,*(undefined8 *)(lVar1 + 0x48));
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  return;
}



// FUNCTION 140720cb0 FUN_140720cb0 body=122 status=ok
// SIG undefined FUN_140720cb0(void)

undefined1 FUN_140720cb0(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_138 [304];
  
  lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x58 + *(longlong *)(param_2 + 8));
  if (lVar3 != 0) {
    uVar1 = FUN_1407265c0(local_138);
    FUN_140743c90(lVar3,uVar1);
    cVar2 = FUN_14073cf40(lVar3);
    if ((cVar2 != '\0') && (param_3 != '\x04')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140720d30 FUN_140720d30 body=593 status=ok
// SIG undefined FUN_140720d30(void)

ulonglong FUN_140720d30(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong **pplVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  
  lVar12 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((*(longlong *)(lVar12 + 0x48) != 0) && (*(longlong *)(lVar12 + 0x50) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar12 + 0x50) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(lVar12 + 0x50);
      local_58 = (longlong *)0x0;
      if (local_50 == (longlong *)0x0) {
LAB_140720ddd:
        pplVar8 = &local_58;
        bVar4 = true;
        bVar14 = false;
        plVar13 = local_58;
      }
      else {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar6 == (int)local_50[1];
          if (bVar14) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar14) {
            if (local_50 != (longlong *)0x0) {
              local_58 = *(longlong **)(lVar12 + 0x48);
            }
            goto LAB_140720ddd;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        pplVar8 = &local_58;
        local_50 = (longlong *)0x0;
        bVar4 = true;
        bVar14 = false;
        plVar13 = (longlong *)0x0;
      }
      goto LAB_140720e06;
    }
  }
  pplVar8 = &local_48;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  bVar4 = false;
  bVar14 = true;
  plVar13 = (longlong *)0x0;
LAB_140720e06:
  plVar3 = pplVar8[1];
  pplVar8[1] = (longlong *)0x0;
  *pplVar8 = (longlong *)0x0;
  plVar11 = plStack_40;
  if ((bVar14) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar11 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if ((plVar13 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar13 + 0x38))(plVar13), cVar5 == '\0')) {
    lVar12 = plVar13[1];
    lVar9 = FUN_142e261f0();
    for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
      if (lVar12 == lVar9) {
        bVar14 = true;
        goto LAB_140720ee0;
      }
    }
    bVar14 = false;
LAB_140720ee0:
    plVar11 = (longlong *)0x0;
    if (bVar14) {
      plVar11 = plVar13;
    }
    if (plVar11 != (longlong *)0x0) {
      uVar10 = FUN_142c85270(plVar11);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar3 + 1;
        lVar12 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        uVar7 = (int)lVar12 - 1;
        uVar10 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uVar10 = (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            uVar10 = (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      return uVar10 & 0xffffffffffffff00;
    }
  }
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  uVar10 = FUN_1407204f0(param_1,param_2,param_3);
  return uVar10;
}



// FUNCTION 140720f90 FUN_140720f90 body=638 status=ok
// SIG undefined FUN_140720f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140720f90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  float local_64;
  longlong *local_60;
  int local_58;
  
  lVar8 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  if (((*(float *)(param_1 + 0x114) <= *(float *)(param_2 + 3) - *(float *)(lVar8 + 0x48)) ||
      (cVar5 = FUN_140712e50(), cVar5 != '\0')) || (*(char *)(lVar8 + 0x4c) != '\0')) {
    lVar10 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    *(int *)(lVar10 + 0x48) = (int)param_2[3];
    *(undefined1 *)(lVar10 + 0x4c) = 0;
    lVar8 = (**(code **)(*(longlong *)*param_2 + 0x148))();
    if ((lVar8 != 0) && (*(longlong *)(*param_2 + 0x488) != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x488) + 0x168);
      lVar9 = 0;
      fVar13 = 3.4028235e+38;
      if (lVar1 == 0) {
        local_78 = _DAT_1468b5d90;
        local_70 = DAT_1468b5d98;
      }
      else {
        local_78 = *(undefined8 *)(lVar1 + 0x220);
        local_70 = *(float *)(lVar1 + 0x228);
      }
      local_88 = local_78;
      local_80 = local_70;
      UWorld::GetPlayerControllerIterator(lVar8,&local_60);
      fVar4 = local_80;
      fVar3 = local_88._4_4_;
      fVar2 = (float)local_88;
      for (; (-1 < local_58 && (local_58 < (int)local_60[1])); local_58 = local_58 + 1) {
        uVar6 = FWeakObjectPtr::Get(*local_60 + (longlong)local_58 * 8);
        lVar8 = FUN_142dd9fb0(uVar6);
        if (lVar8 != 0) {
          lVar1 = *(longlong *)(lVar8 + 0x168);
          if (lVar1 == 0) {
            local_80 = DAT_1468b5d98;
            puVar7 = &local_88;
            local_88 = _DAT_1468b5d90;
          }
          else {
            puVar7 = &local_78;
            local_70 = *(float *)(lVar1 + 0x228);
            local_78 = *(undefined8 *)(lVar1 + 0x220);
          }
          local_64 = *(float *)(puVar7 + 1);
          fVar12 = (float)((ulonglong)*puVar7 >> 0x20) - fVar3;
          fVar11 = (float)*puVar7 - fVar2;
          fVar11 = fVar12 * fVar12 + fVar11 * fVar11 + (local_64 - fVar4) * (local_64 - fVar4);
          if (fVar11 < fVar13) {
            lVar9 = lVar8;
            fVar13 = fVar11;
          }
        }
      }
      if (lVar9 != 0) {
        FUN_142cd0a60(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),lVar9);
        *(undefined1 *)(lVar10 + 0x4c) = 1;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140721210 FUN_140721210 body=67 status=ok
// SIG undefined FUN_140721210(void)

void FUN_140721210(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    FUN_14070a590(param_1,uVar1 & 0xff,4);
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
  FUN_1406d8ac0(param_1 + 0x4e8);
  FUN_142359510(param_1);
  return;
}



// FUNCTION 140721260 FUN_140721260 body=398 status=ok
// SIG undefined FUN_140721260(void)

void FUN_140721260(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  plVar1 = (longlong *)(param_1 + 0x1e8);
  lVar5 = (longlong)*(int *)(param_1 + 0x210);
  if (*(int *)(param_1 + 0x210) != 0) {
    iVar9 = 0;
    plVar4 = *(longlong **)(param_1 + 0x208);
    if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    bVar10 = *plVar4 != *param_2;
    lVar6 = 0;
    iVar7 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar8 = iVar7 + 1;
      if (lVar6 < lVar5) {
        plVar4 = *(longlong **)(param_1 + 0x208);
        if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        plVar4 = plVar4 + lVar6;
        do {
          if (bVar10 != (*plVar4 != *param_2)) break;
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar6 < lVar5);
      }
      if (bVar10 != false) {
        if (iVar9 != iVar7) {
          plVar4 = *(longlong **)(param_1 + 0x208);
          if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) {
            plVar4 = plVar1;
          }
          _guard_xfg_dispatch_icall_nop
                    (plVar4 + iVar9,plVar4 + iVar7,(longlong)(iVar8 - iVar7) << 3);
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 0x210) = iVar9;
  }
  cVar2 = FUN_1407c3030(param_1 + 0x430);
  FUN_142dbb5d0(param_1 + 0x430,param_2);
  cVar3 = FUN_1407c3030(param_1 + 0x430);
  if ((cVar3 == '\0') && (cVar2 != '\0')) {
    if (*(char *)(param_1 + 0x4c8) != '\0') {
      FUN_142bef170(param_1);
    }
    (**(code **)(*(longlong *)(param_1 + 0x178) + 0x18))((longlong *)(param_1 + 0x178),2);
  }
  return;
}



// FUNCTION 1407213f0 FUN_1407213f0 body=855 status=ok
// SIG undefined FUN_1407213f0(void)

void FUN_1407213f0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined4 local_30;
  byte local_28;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  uVar10 = 0;
  uVar5 = uVar10;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar8 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar8;
    uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) != 0) {
    FUN_1406d8ac0(param_1 + 0x9d);
    return;
  }
  uVar5 = param_1[0x31];
  if (uVar5 != 0) {
    lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14072149f;
  }
  uVar5 = uVar10;
LAB_14072149f:
  if (((*(byte *)(param_1 + 0x3c) & 2) == 0) && (uVar5 != 0)) {
    plVar7 = param_1 + 0x61;
    uVar4 = 1;
    lVar6 = 1;
    do {
      if (*plVar7 != 0) break;
      uVar4 = uVar4 - 1;
      plVar7 = plVar7 + -6;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    if ((int)uVar4 < 0) {
      local_58 = 0;
      local_50 = 0;
      cVar3 = FUN_14071ba40(param_1,0,param_1[0x44],&local_58,0);
      uVar4 = 0;
      if (cVar3 == '\0') {
        return;
      }
    }
    uVar8 = uVar4;
    if ((int)(uint)*(byte *)(param_1 + 0x66) <= (int)uVar4) {
      uVar8 = (uint)*(byte *)(param_1 + 0x66);
    }
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
    for (; (int)uVar8 <= (int)uVar4; uVar8 = uVar8 + 1) {
      lVar6 = (longlong)(int)uVar8 + 0xf;
      if ((param_1[lVar6 * 6 + 1] == 0) || (param_1[lVar6 * 6 + 4] == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1406d48b0(local_48,uVar5,param_1[lVar6 * 6 + 4],param_1[lVar6 * 6 + 3]);
        if (((int)uVar4 <= (int)uVar8) ||
           (plVar7 = (longlong *)param_1[lVar6 * 6 + 1],
           (byte)(*(char *)(plVar7[0x1b] + 0x28 + local_40) - 1U) < 2)) {
          local_28 = *(byte *)(param_1 + 0x43) & 1;
          if ((char)param_1[lVar6 * 6 + 5] != -1) {
            *(char *)(param_1 + lVar6 * 6 + 5) = (char)param_1[lVar6 * 6 + 5] + '\x01';
          }
          FUN_1406faaf0(param_1[lVar6 * 6 + 1],local_48);
          *(undefined4 *)(param_1 + lVar6 * 6 + 2) = local_30;
          if ((char)param_1[lVar6 * 6 + 5] != '\0') {
            *(char *)(param_1 + lVar6 * 6 + 5) = (char)param_1[lVar6 * 6 + 5] + -1;
          }
          plVar7 = (longlong *)param_1[lVar6 * 6 + 1];
          if (*(char *)(plVar7[0x1b] + 0x28 + local_40) != '\x03') break;
        }
        if (uVar8 == uVar4) {
          if (uVar8 == 0) {
            (**(code **)(*plVar7 + 0x300))(plVar7,local_48);
          }
          else {
            cVar3 = *(char *)(plVar7[0x1b] + 0x29 + local_40);
            if ((cVar3 == '\x02') && (*(char *)((longlong)plVar7 + 0xd3) != '\0')) {
              cVar3 = '\x01';
            }
            FUN_14070a590(param_1,uVar8 & 0xff,cVar3);
          }
          break;
        }
      }
    }
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe;
    *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfe;
    *(char *)(param_1 + 0x66) = (char)uVar8;
    FUN_14070c6c0(param_1);
    cVar3 = FUN_1407c3030(param_1 + 0x73);
    if ((cVar3 == '\0') && (0 < (int)param_1[0x42])) {
      puVar9 = (undefined8 *)
               ((ulonglong)(param_1[0x41] != 0) - 1 & (ulonglong)(param_1 + 0x3d) | param_1[0x41]);
      uVar5 = (longlong)(int)param_1[0x42] & 0x1fffffffffffffff;
      if (puVar9 + (int)param_1[0x42] < puVar9) {
        uVar5 = uVar10;
      }
      if (uVar5 != 0) {
        do {
          local_res8 = *puVar9;
          (**(code **)(*param_1 + 0x440))(param_1,&local_res8,1);
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 != uVar5);
      }
      *(undefined4 *)(param_1 + 0x42) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x214)) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                  (param_1 + 0x3d,0);
      }
    }
  }
  return;
}



// FUNCTION 140721750 FUN_140721750 body=960 status=ok
// SIG undefined FUN_140721750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140721750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined1 uVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float local_res8 [2];
  longlong local_res10;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  
  lVar10 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  *(undefined8 *)(lVar10 + 100) = DAT_14622e710;
  puVar1 = (undefined8 *)(lVar10 + 0x70);
  *(undefined4 *)(lVar10 + 0x6c) = DAT_14622e718;
  *puVar1 = DAT_14622e710;
  *(undefined4 *)(lVar10 + 0x78) = DAT_14622e718;
  local_res10 = FUN_14070c550();
  if (local_res10 == 0) {
    return;
  }
  plVar2 = *(longlong **)(*param_2 + 0x488);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  plVar3 = *(longlong **)(*param_2 + 0x628);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x4a8))(plVar3,0x40000000);
  }
  lVar4 = plVar2[0x2d];
  if (lVar4 == 0) {
    local_78 = _DAT_1468b5d90;
    local_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(undefined8 *)(lVar4 + 0x220);
    local_70 = *(float *)(lVar4 + 0x228);
  }
  local_80 = local_70;
  local_88 = local_78;
  *(undefined8 *)(lVar10 + 100) = local_78;
  *(float *)(lVar10 + 0x6c) = local_70;
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    local_res8[0] = 0.0;
    cVar7 = FUN_142cc40f0(param_1 + 0x250,*(longlong *)(*param_2 + 0x568),local_res8);
    fVar14 = local_res8[0];
    if (cVar7 != '\0') goto LAB_1407218a6;
  }
  fVar14 = 0.0;
LAB_1407218a6:
  if (plVar2[0x2d] == 0) {
    local_70 = (float)DAT_1464aa7c0;
    puVar8 = &local_78;
    local_78 = DAT_1464aa7b8;
  }
  else {
    puVar8 = (undefined8 *)FUN_14238d380(plVar2[0x2d],&local_78);
  }
  local_78 = *puVar8;
  iVar12 = 0;
  local_70 = *(float *)(puVar8 + 1);
  local_88 = CONCAT44(local_88._4_4_ - (float)((ulonglong)local_78 >> 0x20) * fVar14,
                      (float)local_88 - (float)local_78 * fVar14);
  local_80 = local_80 - local_70 * fVar14;
  if (*(longlong *)(*param_2 + 0x568) == 0) {
    uVar11 = 0;
  }
  else {
    local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
    cVar7 = FUN_142cc3c10(param_1 + 0x260,*(longlong *)(*param_2 + 0x568),local_res8);
    uVar11 = 0;
    if (cVar7 != '\0') {
      uVar11 = local_res8[0]._0_1_;
    }
  }
  fVar15 = *(float *)(param_1 + 0x270);
  if (0.0 < *(float *)(param_1 + 0x27c)) {
    pfVar9 = (float *)(**(code **)(*plVar2 + 0x308))(plVar2,&local_78);
    fVar15 = fVar15 + SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1] + pfVar9[2] * pfVar9[2]) *
                      *(float *)(param_1 + 0x27c);
  }
  lVar4 = local_res10;
  uVar13 = FUN_140712af0(lVar10 + 0x60,local_res10,uVar11,&local_88,fVar15);
  puVar8 = (undefined8 *)FUN_140712bd0(&local_78,lVar4,uVar11,uVar13,fVar14);
  *puVar1 = *puVar8;
  *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(puVar8 + 1);
  if (((*(char *)(param_1 + 0x284) != '\0') && (lVar4 = *(longlong *)(*param_2 + 0x628), lVar4 != 0)
      ) && (cVar7 = FUN_14071c8b0(puVar1,lVar4,*(undefined4 *)(param_1 + 0x280)),
           lVar6 = local_res10, cVar7 == '\0')) {
    bVar5 = false;
    do {
      if (*(float *)(param_1 + 0x274) <= (float)iVar12) {
        return;
      }
      iVar12 = iVar12 + 1;
      uVar13 = FUN_140712af0(local_res8,lVar6,uVar11,&local_88,
                             (float)iVar12 * *(float *)(param_1 + 0x278) + fVar15);
      FUN_140712bd0(&local_78,lVar6,uVar11,uVar13,fVar14);
      cVar7 = FUN_14071c8b0(&local_78,lVar4,*(undefined4 *)(param_1 + 0x280));
      if (cVar7 != '\0') {
        bVar5 = true;
        *puVar1 = local_78;
        *(float *)(lVar10 + 0x78) = local_70;
      }
    } while (!bVar5);
  }
  return;
}



// FUNCTION 140721b10 FUN_140721b10 body=340 status=ok
// SIG undefined FUN_140721b10(void)

void FUN_140721b10(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  fVar2 = *(float *)(param_2[1] + 0x48 + *(longlong *)(param_1 + 0xd8));
  if ((fVar2 == 0.0) || (*(float *)(param_1 + 400) <= *(float *)(param_2 + 3) - fVar2)) {
    lVar3 = *param_2;
    local_res8 = *(undefined8 *)(lVar3 + 0x568);
    uVar4 = FUN_142de77e0(param_1 + 0x110,*(undefined8 *)(lVar3 + 0x488),lVar3,&local_res8);
    lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    pfVar1 = (float *)(lVar3 + 0x4c);
    *(int *)(lVar3 + 0x48) = (int)param_2[3];
    FUN_140775e50(*param_2,uVar4,pfVar1);
    if ((-(float)DAT_14622e710 < *pfVar1) && (*pfVar1 < (float)DAT_14622e710)) {
      if ((-DAT_14622e710._4_4_ < *(float *)(lVar3 + 0x50)) &&
         (*(float *)(lVar3 + 0x50) < DAT_14622e710._4_4_)) {
        if ((-DAT_14622e718 < *(float *)(lVar3 + 0x54)) &&
           (*(float *)(lVar3 + 0x54) < DAT_14622e718)) {
          local_18 = *(undefined8 *)pfVar1;
          local_10 = *(undefined4 *)(lVar3 + 0x54);
          FUN_142cd0df0(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),&local_18);
          return;
        }
      }
    }
    FUN_142cbcc90(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568));
  }
  return;
}



// FUNCTION 140721c70 FUN_140721c70 body=699 status=ok
// SIG undefined FUN_140721c70(void)

void FUN_140721c70(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar6 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar4 = FWeakObjectPtr::Get(lVar6 + 0x48);
  puVar1 = (undefined4 *)(lVar6 + 0x1a8);
  uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x458) + 0x18))((longlong *)(lVar4 + 0x458),local_88);
  FUN_14076a860(lVar6 + 0x68,uVar5,0x7f7fffff,*(undefined4 *)(lVar6 + 0x210),puVar1);
  cVar3 = FUN_140761c70(puVar1);
  if (cVar3 == '\0') {
    FUN_14070c610(param_1,param_2);
  }
  else {
    FUN_14074c870(&local_78);
    cVar3 = FWeakObjectPtr::IsValid(lVar6 + 0x50);
    if (cVar3 != '\0') {
      lVar4 = FWeakObjectPtr::Get(lVar6 + 0x50);
      uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x458) + 0x18))
                        ((longlong *)(lVar4 + 0x458),local_88);
      cVar3 = FUN_14076a860(lVar6 + 0x68,uVar5,0x7f7fffff,*(undefined4 *)(lVar6 + 0x210),&local_78);
      if (cVar3 != '\0') {
        *(undefined4 *)(lVar6 + 0x218) = local_78;
        *(undefined4 *)(lVar6 + 0x21c) = local_74;
        *(undefined4 *)(lVar6 + 0x220) = local_70;
        *(undefined4 *)(lVar6 + 0x224) = local_6c;
        *(undefined8 *)(lVar6 + 0x228) = local_68;
        *(undefined8 *)(lVar6 + 0x230) = uStack_60;
        *(undefined8 *)(lVar6 + 0x238) = local_58;
        *(undefined8 *)(lVar6 + 0x240) = uStack_50;
        *(undefined8 *)(lVar6 + 0x248) = local_48;
        *(undefined8 *)(lVar6 + 0x250) = uStack_40;
        *(undefined8 *)(lVar6 + 600) = local_38;
        *(undefined8 *)(lVar6 + 0x260) = uStack_30;
        *(undefined8 *)(lVar6 + 0x268) = local_28;
        *(undefined4 *)(lVar6 + 0x270) = local_20;
        *(undefined4 *)(lVar6 + 0x274) = local_1c;
        *(undefined8 *)(lVar6 + 0x278) = local_18;
        *(undefined4 *)(lVar6 + 0x280) = local_10;
        *(undefined1 *)(lVar6 + 0x284) = local_c;
      }
    }
    cVar3 = FUN_140761c70(lVar6 + 0x218);
    if (cVar3 == '\0') {
      *(undefined4 *)(lVar6 + 0x298) = 2;
      *(undefined8 *)(lVar6 + 0x288) = 0;
      *(undefined4 *)(lVar6 + 0x294) = 0;
      *(undefined4 *)(lVar6 + 0x290) = 2;
    }
    else {
      puVar2 = (undefined4 *)(lVar6 + 0x138);
      cVar3 = FUN_140761c70(puVar2);
      if (cVar3 == '\0') {
        *puVar2 = *puVar1;
        *(undefined4 *)(lVar6 + 0x13c) = *(undefined4 *)(lVar6 + 0x1ac);
        *(undefined4 *)(lVar6 + 0x140) = *(undefined4 *)(lVar6 + 0x1b0);
        *(undefined4 *)(lVar6 + 0x144) = *(undefined4 *)(lVar6 + 0x1b4);
        *(undefined8 *)(lVar6 + 0x148) = *(undefined8 *)(lVar6 + 0x1b8);
        *(undefined8 *)(lVar6 + 0x150) = *(undefined8 *)(lVar6 + 0x1c0);
        *(undefined8 *)(lVar6 + 0x158) = *(undefined8 *)(lVar6 + 0x1c8);
        *(undefined8 *)(lVar6 + 0x160) = *(undefined8 *)(lVar6 + 0x1d0);
        *(undefined8 *)(lVar6 + 0x168) = *(undefined8 *)(lVar6 + 0x1d8);
        *(undefined8 *)(lVar6 + 0x170) = *(undefined8 *)(lVar6 + 0x1e0);
        *(undefined8 *)(lVar6 + 0x178) = *(undefined8 *)(lVar6 + 0x1e8);
        *(undefined8 *)(lVar6 + 0x180) = *(undefined8 *)(lVar6 + 0x1f0);
        *(undefined8 *)(lVar6 + 0x188) = *(undefined8 *)(lVar6 + 0x1f8);
        *(undefined4 *)(lVar6 + 400) = *(undefined4 *)(lVar6 + 0x200);
        *(undefined4 *)(lVar6 + 0x194) = *(undefined4 *)(lVar6 + 0x204);
        *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(lVar6 + 0x208);
        *(undefined4 *)(lVar6 + 0x1a0) = *(undefined4 *)(lVar6 + 0x210);
        *(undefined1 *)(lVar6 + 0x1a4) = *(undefined1 *)(lVar6 + 0x214);
      }
      FUN_1407039e0(param_1,puVar1,lVar6 + 0x218,lVar6 + 0x294,lVar6 + 0x298);
      FUN_1407039e0(param_1,puVar2,lVar6 + 0x218,lVar6 + 0x28c,lVar6 + 0x290);
    }
  }
  return;
}



// FUNCTION 140721f30 FUN_140721f30 body=786 status=ok
// SIG undefined FUN_140721f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140721f30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar5 = FWeakObjectPtr::Get(lVar8 + 0x74);
  uVar6 = FWeakObjectPtr::Get(lVar8 + 0x50);
  if ((lVar5 != 0) && (uVar6 != 0)) {
    *(undefined8 *)(lVar8 + 0x58) = DAT_14622e710;
    uVar2 = DAT_14622e718;
    *(undefined8 *)(lVar8 + 100) = 0xffffffffffffffff;
    *(undefined4 *)(lVar8 + 0x60) = uVar2;
    bVar4 = 0;
    *(undefined8 *)(lVar8 + 0x6c) = 0xffffffffffffffff;
    cVar3 = FUN_142fa8c00(uVar6);
    if (cVar3 == '\0') {
      cVar3 = FUN_142fa8480(uVar6);
      if (cVar3 != '\0') {
        FUN_142f88ab0(&local_b8);
        local_48 = *(undefined8 *)(uVar6 + 0x6b8);
        local_98 = *(undefined8 *)(uVar6 + 0x6f8);
        uStack_90 = *(undefined8 *)(uVar6 + 0x700);
        lVar1 = *(longlong *)(lVar5 + 0x168);
        local_a8 = (undefined4)*(undefined8 *)(uVar6 + 0x6e8);
        uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(uVar6 + 0x6e8) >> 0x20);
        uStack_a0 = (undefined4)*(undefined8 *)(uVar6 + 0x6f0);
        uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(uVar6 + 0x6f0) >> 0x20);
        local_88 = *(undefined8 *)(uVar6 + 0x708);
        uStack_80 = *(undefined8 *)(uVar6 + 0x710);
        local_78 = *(undefined8 *)(uVar6 + 0x718);
        uStack_70 = *(undefined8 *)(uVar6 + 0x720);
        local_68 = *(undefined8 *)(uVar6 + 0x728);
        uStack_60 = *(undefined8 *)(uVar6 + 0x730);
        local_58 = *(undefined8 *)(uVar6 + 0x738);
        uStack_50 = *(undefined8 *)(uVar6 + 0x740);
        if (lVar1 == 0) {
          local_d4 = DAT_1468b5d98;
          puVar7 = &local_dc;
          local_dc = _DAT_1468b5d90;
        }
        else {
          puVar7 = &local_e8;
          local_e0 = *(undefined4 *)(lVar1 + 0x228);
          local_e8 = *(undefined8 *)(lVar1 + 0x220);
        }
        local_d0 = *puVar7;
        local_c8 = *(undefined4 *)(puVar7 + 1);
        puVar7 = (undefined8 *)FUN_142fa2d70(&local_dc,lVar5,&local_d0);
        local_b8 = *puVar7;
        local_b0 = *(float *)(puVar7 + 1) + *(float *)(param_1 + 0x268);
        local_ac = *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x110);
        bVar4 = FUN_142f9e4d0(&local_b8,lVar8 + 0x58,lVar8 + 0x6c);
      }
    }
    else {
      FUN_142f88b40(&local_b8);
      local_98 = *(undefined8 *)(uVar6 + 0x6e8);
      uStack_90 = *(undefined8 *)(uVar6 + 0x6f0);
      local_38 = *(undefined8 *)(uVar6 + 0x6b8);
      local_88 = *(undefined8 *)(uVar6 + 0x6f8);
      uStack_80 = *(undefined8 *)(uVar6 + 0x700);
      lVar1 = *(longlong *)(lVar5 + 0x168);
      local_78 = *(undefined8 *)(uVar6 + 0x708);
      uStack_70 = *(undefined8 *)(uVar6 + 0x710);
      local_68 = *(undefined8 *)(uVar6 + 0x718);
      uStack_60 = *(undefined8 *)(uVar6 + 0x720);
      local_58 = *(undefined8 *)(uVar6 + 0x728);
      uStack_50 = *(undefined8 *)(uVar6 + 0x730);
      local_48 = *(undefined8 *)(uVar6 + 0x738);
      uStack_40 = *(undefined4 *)(uVar6 + 0x740);
      uStack_3c = *(undefined4 *)(uVar6 + 0x744);
      if (lVar1 == 0) {
        local_e8 = _DAT_1468b5d90;
        local_e0 = DAT_1468b5d98;
      }
      else {
        local_e8 = *(undefined8 *)(lVar1 + 0x220);
        local_e0 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_dc = local_e8;
      local_d4 = local_e0;
      puVar7 = (undefined8 *)FUN_142fa2d70(&local_d0,lVar5,&local_dc);
      local_b8 = *puVar7;
      local_b0 = *(float *)(puVar7 + 1);
      local_ac = *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x110);
      uStack_a4 = (undefined4)*(undefined8 *)(lVar8 + 100);
      uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 100) >> 0x20);
      bVar4 = FUN_142f9e730(&local_b8,lVar8 + 0x58,lVar8 + 100);
    }
    return (ulonglong)bVar4;
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 140722250 FUN_140722250 body=215 status=ok
// SIG undefined FUN_140722250(void)

void FUN_140722250(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_res8;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar6 = *(longlong *)(*param_2 + 0x618);
  if (*(longlong *)(lVar8 + 0x50) == lVar6) {
    lVar6 = *(longlong *)(lVar8 + 0x48);
  }
  else {
    *(longlong *)(lVar8 + 0x48) = lVar6;
  }
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar7 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar5;
  for (; lVar4 = lVar6, lVar5 != lVar7; lVar5 = lVar5 + 0x10) {
    local_res8 = (longlong *)0x0;
    cVar2 = FUN_142cc3a70(lVar5,*(undefined8 *)(*param_2 + 0x568),&local_res8);
    plVar1 = local_res8;
    if ((cVar2 != '\0') && (local_res8 != (longlong *)0x0)) {
      uVar3 = FUN_142e7dfd0();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if (lVar4 != 0) break;
    }
  }
  FUN_14076c7a0(*param_2,lVar4);
  *(longlong *)(lVar8 + 0x50) = lVar4;
  return;
}



// FUNCTION 140722330 FUN_140722330 body=561 status=ok
// SIG undefined FUN_140722330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140722330(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  uint in_stack_ffffffffffffffb8;
  uint uVar7;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [16];
  
  lVar4 = *(longlong *)(*param_2 + 0x5c8);
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      fVar1 = *(float *)(lVar5 + 0x80);
      if ((0.0 < fVar1) && (*(float *)(lVar5 + 0x84) < fVar1)) {
        fVar6 = *(float *)(lVar5 + 0x84) + *(float *)((longlong)param_2 + 0x1c);
        if (fVar1 <= fVar6) {
          fVar6 = fVar1;
        }
        *(float *)(lVar5 + 0x84) = fVar6;
        fVar6 = fVar6 / fVar1;
        local_38 = CONCAT44((*(float *)(lVar5 + 100) - *(float *)(lVar5 + 0x4c)) * fVar6 +
                            *(float *)(lVar5 + 0x4c),
                            (*(float *)(lVar5 + 0x60) - *(float *)(lVar5 + 0x48)) * fVar6 +
                            *(float *)(lVar5 + 0x48));
        local_30 = (*(float *)(lVar5 + 0x68) - *(float *)(lVar5 + 0x50)) * fVar6 +
                   *(float *)(lVar5 + 0x50);
        FUN_14223c850(lVar4,&local_38,0,0,in_stack_ffffffffffffffb8 & 0xffffff00);
        lVar4 = FWeakObjectPtr::Get(lVar5 + 0x78);
        if ((lVar4 != 0) && (*(char *)(param_1 + 0x112) != '\0')) {
          *(undefined8 *)(lVar4 + 0x18c) = _DAT_1468b5d90;
          *(undefined4 *)(lVar4 + 0x194) = DAT_1468b5d98;
        }
        return 1;
      }
    }
    else {
      local_38 = *(undefined8 *)(lVar5 + 0x48);
      local_30 = *(float *)(lVar5 + 0x50);
      uVar7 = *(uint *)(lVar5 + 0x8c);
      puVar3 = (undefined8 *)
               FMath::VInterpConstantTo
                         (local_28,&local_38,lVar5 + 0x60,*(undefined4 *)((longlong)param_2 + 0x1c),
                          uVar7);
      *(undefined8 *)(lVar5 + 0x48) = *puVar3;
      *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(puVar3 + 1);
      FUN_14223c850(lVar4,lVar5 + 0x48,0,0,uVar7 & 0xffffff00);
      lVar4 = FWeakObjectPtr::Get(lVar5 + 0x78);
      if ((lVar4 != 0) && (*(char *)(param_1 + 0x112) != '\0')) {
        *(undefined8 *)(lVar4 + 0x18c) = _DAT_1468b5d90;
        *(undefined4 *)(lVar4 + 0x194) = DAT_1468b5d98;
      }
      if ((*(char *)(param_1 + 0x230) == '\0') ||
         (cVar2 = FUN_14070bf00(param_1,param_2), cVar2 != '\0')) {
        if (0.0001 < ABS(*(float *)(lVar5 + 0x48) - *(float *)(lVar5 + 0x60))) {
          return 1;
        }
        if (0.0001 < ABS(*(float *)(lVar5 + 0x4c) - *(float *)(lVar5 + 100))) {
          return 1;
        }
        if (0.0001 < ABS(*(float *)(lVar5 + 0x50) - *(float *)(lVar5 + 0x68))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140722570 FUN_140722570 body=388 status=ok
// SIG undefined FUN_140722570(void)

undefined8 FUN_140722570(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  float fVar10;
  longlong local_res8;
  longlong *local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  uVar8 = 0;
  lVar2 = param_2[1];
  local_res10 = param_2;
  if ((*(byte *)(lVar1 + 0x28 + lVar2) < 2) ||
     (cVar3 = FUN_142df43b0(param_1 + 0x3c8), cVar3 == '\0')) {
    local_res8 = *(longlong *)(*param_2 + 0x568);
    fVar10 = (float)FUN_142de77e0(param_1 + 0x3c8,*param_2,0,&local_res8);
    *(bool *)(lVar1 + 0x48 + lVar2) = 0.5 <= fVar10;
  }
  if ((*(byte *)(lVar1 + 0x28 + lVar2) < 2) ||
     (cVar3 = FUN_142df43b0(param_1 + 0x448), cVar3 == '\0')) {
    local_res8 = *(longlong *)(*param_2 + 0x568);
    fVar10 = (float)FUN_142de77e0(param_1 + 0x448,*param_2,0,&local_res8);
    cVar3 = 0.5 <= fVar10;
    *(char *)(lVar1 + 0x49 + lVar2) = cVar3;
  }
  else {
    cVar3 = *(char *)(lVar1 + 0x49 + lVar2);
  }
  uVar9 = *(undefined1 *)(lVar1 + 0x48 + lVar2);
  if (((cVar3 == '\0') && (*(longlong *)(*param_2 + 0x628) != 0)) &&
     (iVar4 = FUN_142eb7a00(), iVar4 != 0)) {
    uVar9 = 0;
  }
  pcVar7 = (char *)(lVar2 + 0x4a + lVar1);
  local_res8 = 10;
  pcVar6 = pcVar7;
  if (pcVar7 <= pcVar7 + 10) {
    do {
      if ((-1 < *pcVar6) &&
         (lVar5 = FUN_140760140(*param_2,(int)*pcVar6), param_2 = local_res10, lVar5 != 0)) {
        if (*(byte *)(lVar1 + 0x28 + lVar2) < 2) {
          FUN_140784ad0(lVar5,param_1 + 0x100);
        }
        FUN_140784800(lVar5,uVar9);
        uVar8 = 1;
        param_2 = local_res10;
      }
      pcVar6 = pcVar6 + 1;
    } while ((longlong)pcVar6 - (longlong)pcVar7 != local_res8);
  }
  return uVar8;
}



// FUNCTION 140722700 FUN_140722700 body=160 status=ok
// SIG undefined FUN_140722700(void)

void FUN_140722700(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0xec) == -1) {
    cVar1 = *(char *)(param_1 + 0x158);
  }
  else {
    *(undefined1 *)(param_1 + 0x158) = 0;
    cVar1 = '\0';
  }
  if (cVar1 == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x148);
    uVar3 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x150) < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        if (*plVar2 != 0) {
          *(undefined1 *)(*plVar2 + 0xf0) = 1;
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
  }
  else if (1 < (byte)(cVar1 - 1U)) {
    FUN_1406fc610(param_1);
    return;
  }
  FUN_140718a00(param_1);
  FUN_1406fc610(param_1);
  return;
}



// FUNCTION 1407227b0 FUN_1407227b0 body=158 status=ok
// SIG undefined FUN_1407227b0(void)

longlong * FUN_1407227b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)*param_1;
  lVar3 = ((longlong *)*param_1)[1];
  *param_2 = (longlong)plVar5;
  plVar1 = plVar5 + (int)lVar3;
  param_2[1] = (longlong)plVar1;
  if (plVar5 == plVar1) {
    return param_2;
  }
  do {
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar4 = USoundNodeEnveloper::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
    plVar5 = (longlong *)(*param_2 + 8);
    *param_2 = (longlong)plVar5;
    if (plVar5 == plVar1) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 140722860 FUN_140722860 body=218 status=ok
// SIG undefined FUN_140722860(void)

undefined8 *
FUN_140722860(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140722940 FUN_140722940 body=218 status=ok
// SIG undefined FUN_140722940(void)

undefined8 *
FUN_140722940(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_143fcff98;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140722a20 CopyToEmpty<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>_> body=187 status=ok
// SIG undefined CopyToEmpty<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>_>(void)

void TArray<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>,FDefaultAllocator>::
     CopyToEmpty<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>_>
               (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}



// FUNCTION 140722ae0 FUN_140722ae0 body=443 status=ok
// SIG undefined FUN_140722ae0(void)

longlong FUN_140722ae0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x568) != 0)) {
    plVar4 = (longlong *)UAITask_RunEQS::GetPrivateStaticClass();
    plVar5 = (longlong *)plVar4[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
LAB_140722b6f:
        plVar5 = (longlong *)(param_1 + 0x510);
        lVar7 = UAITask_RunEQS::GetPrivateStaticClass();
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,0);
        if (plVar4 != (longlong *)0x0) {
          uVar8 = UEnvQueryTest_Cover::StaticClass();
          lVar7 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
          if ((lVar7 != 0) && (lVar7 = FUN_142b79030(lVar7,uVar1), lVar7 != 0)) {
            lVar6 = UAITask_RunEQS::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14072b840(lVar7);
            }
          }
        }
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res8 = 0;
        uVar9 = UAITask_RunEQS::GetPrivateStaticClass();
        lVar7 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        *(undefined8 *)(lVar7 + 0x30) = uVar1;
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_142b79770(lVar7,plVar5,uVar3);
        FUN_14073b940(lVar7,param_1);
        return lVar7;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5,&local_res8,param_1);
    if (*plVar5 != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*plVar5 == 0) {
            return 0;
          }
          goto LAB_140722b6f;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140722ca0 FUN_140722ca0 body=443 status=ok
// SIG undefined FUN_140722ca0(void)

longlong FUN_140722ca0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x568) != 0)) {
    plVar4 = (longlong *)FUN_1407aa6c0();
    plVar5 = (longlong *)plVar4[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
LAB_140722d2f:
        plVar5 = (longlong *)(param_1 + 0x510);
        lVar7 = FUN_1407aa6c0();
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,0);
        if (plVar4 != (longlong *)0x0) {
          uVar8 = UEnvQueryTest_Cover::StaticClass();
          lVar7 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
          if ((lVar7 != 0) && (lVar7 = FUN_142b79030(lVar7,uVar1), lVar7 != 0)) {
            lVar6 = FUN_1407aa6c0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14072b840(lVar7);
            }
          }
        }
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res8 = 0;
        uVar9 = FUN_1407aa6c0();
        lVar7 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        *(undefined8 *)(lVar7 + 0x30) = uVar1;
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_142b79770(lVar7,plVar5,uVar3);
        FUN_14073b940(lVar7,param_1);
        return lVar7;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5,&local_res8,param_1);
    if (*plVar5 != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*plVar5 == 0) {
            return 0;
          }
          goto LAB_140722d2f;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140722e60 FUN_140722e60 body=443 status=ok
// SIG undefined FUN_140722e60(void)

longlong FUN_140722e60(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x568) != 0)) {
    plVar4 = (longlong *)FUN_1407aa8c0();
    plVar5 = (longlong *)plVar4[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
LAB_140722eef:
        plVar5 = (longlong *)(param_1 + 0x510);
        lVar7 = FUN_1407aa8c0();
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,0);
        if (plVar4 != (longlong *)0x0) {
          uVar8 = UEnvQueryTest_Cover::StaticClass();
          lVar7 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
          if ((lVar7 != 0) && (lVar7 = FUN_142b79030(lVar7,uVar1), lVar7 != 0)) {
            lVar6 = FUN_1407aa8c0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14072b840(lVar7);
            }
          }
        }
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res8 = 0;
        uVar9 = FUN_1407aa8c0();
        lVar7 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        *(undefined8 *)(lVar7 + 0x30) = uVar1;
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_142b79770(lVar7,plVar5,uVar3);
        FUN_14073b940(lVar7,param_1);
        return lVar7;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5,&local_res8,param_1);
    if (*plVar5 != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*plVar5 == 0) {
            return 0;
          }
          goto LAB_140722eef;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140723020 FUN_140723020 body=443 status=ok
// SIG undefined FUN_140723020(void)

longlong FUN_140723020(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x568) != 0)) {
    plVar4 = (longlong *)FUN_1407aacf0();
    plVar5 = (longlong *)plVar4[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
LAB_1407230af:
        plVar5 = (longlong *)(param_1 + 0x510);
        lVar7 = FUN_1407aacf0();
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,0);
        if (plVar4 != (longlong *)0x0) {
          uVar8 = UEnvQueryTest_Cover::StaticClass();
          lVar7 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
          if ((lVar7 != 0) && (lVar7 = FUN_142b79030(lVar7,uVar1), lVar7 != 0)) {
            lVar6 = FUN_1407aacf0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14072b840(lVar7);
            }
          }
        }
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res8 = 0;
        uVar9 = FUN_1407aacf0();
        lVar7 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        *(undefined8 *)(lVar7 + 0x30) = uVar1;
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_142b79770(lVar7,plVar5,uVar3);
        FUN_14073b940(lVar7,param_1);
        return lVar7;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5,&local_res8,param_1);
    if (*plVar5 != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*plVar5 == 0) {
            return 0;
          }
          goto LAB_1407230af;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1407231e0 FUN_1407231e0 body=452 status=ok
// SIG undefined FUN_1407231e0(void)

longlong FUN_1407231e0(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  if ((param_1 != 0) && (lVar4 = UCableComponent::GetAttachedActor(), lVar4 != 0)) {
    local_40 = 0;
    local_38 = 0;
    iVar3 = FUN_1407c9b90(lVar4,1,0);
    if (local_38._4_4_ < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_40,iVar3);
    }
    FUN_1407c7b00(lVar4,&local_40,0,1);
    local_50 = local_40;
    local_48 = CONCAT44(local_48._4_4_,(undefined4)local_38);
    lVar4 = FUN_1407233b0(param_1 + 0x5f0,&local_50,param_2,param_3);
    if (lVar4 != 0) {
      if (param_4 != '\0') {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UGameplayTask_ScriptedAction::OnActorSpawned",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_58,pwVar2 + 2,1);
        plVar8 = (longlong *)(param_1 + 0x460);
        FWeakObjectPtr::operator=(&local_50,0);
        local_48 = 0;
        FWeakObjectPtr::operator=(&local_50,lVar4);
        local_48 = local_58;
        if ((local_58 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_50), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_48);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
        iVar3 = *(int *)(param_1 + 0x468);
        *(int *)(param_1 + 0x468) = iVar3 + 1;
        if (*(int *)(param_1 + 0x46c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar8);
        *puVar7 = (undefined4)local_50;
        puVar7[1] = local_50._4_4_;
        *(longlong *)(puVar7 + 2) = local_48;
      }
      if (local_40 == 0) {
        return lVar4;
      }
      FMemory::Free();
      return lVar4;
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 1407233b0 FUN_1407233b0 body=609 status=ok
// SIG undefined FUN_1407233b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407233b0(undefined8 param_1,ulonglong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0 [10];
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar1 = (int)param_2[1];
  uVar10 = 0;
  local_50 = (longlong *)0x0;
  local_44 = 0;
  local_48 = 0;
  if (iVar1 < 1) {
    if ((iVar1 < 0) && (iVar1 != 0)) {
      local_48 = iVar1;
      TArray<FLinearAllocation,TInlineAllocator<10,FDefaultAllocator>_>::ResizeShrink(local_a0);
    }
  }
  else {
    local_48 = iVar1;
    TArray<FName,TInlineAllocator<10,FDefaultAllocator>_>::ResizeGrow(local_a0,0);
  }
  puVar7 = (undefined8 *)*param_2;
  plVar8 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  uVar11 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar7 + (int)param_2[1] < puVar7) {
    uVar11 = uVar10;
  }
  if (uVar11 != 0) {
    lVar9 = (longlong)plVar8 - (longlong)puVar7;
    do {
      uVar3 = FUN_140765020(*puVar7);
      uVar10 = uVar10 + 1;
      *(undefined8 *)((longlong)puVar7 + lVar9) = uVar3;
      puVar7 = puVar7 + 1;
    } while (uVar10 != uVar11);
  }
  local_a8 = 0;
  FUN_140740bf0(local_a0,&local_a8);
  lVar9 = FUN_1407ab0a0();
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  plVar8 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  plVar6 = plVar8 + local_48;
  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    if (((*plVar8 != 0) && (lVar9 = *(longlong *)(*plVar8 + 0x570), lVar9 != 0)) &&
       (lVar9 = FUN_142b79030(lVar9,uVar3), lVar9 != 0)) {
      lVar4 = FUN_1407ab0a0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14072b840(lVar9);
      }
    }
  }
  lVar9 = FUN_140724390(param_1);
  iVar1 = local_48;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar4 = (longlong)local_48;
    plVar8 = (longlong *)(lVar9 + 0x80);
    if (local_48 != 0) {
      iVar5 = *(int *)(lVar9 + 0x88);
      if (*(int *)(lVar9 + 0x8c) < iVar5 + local_48) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8);
        iVar5 = *(int *)(lVar9 + 0x88);
      }
      plVar6 = local_a0;
      if (local_50 != (longlong *)0x0) {
        plVar6 = local_50;
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar8 + (longlong)iVar5 * 8),plVar6,lVar4 << 3);
      *(int *)(lVar9 + 0x88) = *(int *)(lVar9 + 0x88) + iVar1;
    }
    local_a8 = 0;
    TArray<FName,FDefaultAllocator>::Remove(plVar8,&local_a8);
    *(undefined1 *)(lVar9 + 0x6c) = param_3;
    *(undefined1 *)(lVar9 + 0x6d) = param_4;
    FUN_140744ad0(lVar9,0);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  return lVar9;
}



// FUNCTION 140723620 FUN_140723620 body=452 status=ok
// SIG undefined FUN_140723620(void)

longlong FUN_140723620(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  if ((param_1 != 0) && (lVar4 = UCableComponent::GetAttachedActor(), lVar4 != 0)) {
    local_40 = 0;
    local_38 = 0;
    iVar3 = FUN_1407c9b90(lVar4,1,0);
    if (local_38._4_4_ < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_40,iVar3);
    }
    FUN_1407c7b00(lVar4,&local_40,0,1);
    local_50 = local_40;
    local_48 = CONCAT44(local_48._4_4_,(undefined4)local_38);
    lVar4 = FUN_1407237f0(param_1 + 0x5f0,&local_50,param_2,param_3);
    if (lVar4 != 0) {
      if (param_4 != '\0') {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UGameplayTask_ScriptedAction::OnActorSpawned",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_58,pwVar2 + 2,1);
        plVar8 = (longlong *)(param_1 + 0x460);
        FWeakObjectPtr::operator=(&local_50,0);
        local_48 = 0;
        FWeakObjectPtr::operator=(&local_50,lVar4);
        local_48 = local_58;
        if ((local_58 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_50), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_48);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
        iVar3 = *(int *)(param_1 + 0x468);
        *(int *)(param_1 + 0x468) = iVar3 + 1;
        if (*(int *)(param_1 + 0x46c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar8);
        *puVar7 = (undefined4)local_50;
        puVar7[1] = local_50._4_4_;
        *(longlong *)(puVar7 + 2) = local_48;
      }
      if (local_40 == 0) {
        return lVar4;
      }
      FMemory::Free();
      return lVar4;
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 1407237f0 FUN_1407237f0 body=609 status=ok
// SIG undefined FUN_1407237f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407237f0(undefined8 param_1,ulonglong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0 [10];
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar1 = (int)param_2[1];
  uVar10 = 0;
  local_50 = (longlong *)0x0;
  local_44 = 0;
  local_48 = 0;
  if (iVar1 < 1) {
    if ((iVar1 < 0) && (iVar1 != 0)) {
      local_48 = iVar1;
      TArray<FLinearAllocation,TInlineAllocator<10,FDefaultAllocator>_>::ResizeShrink(local_a0);
    }
  }
  else {
    local_48 = iVar1;
    TArray<FName,TInlineAllocator<10,FDefaultAllocator>_>::ResizeGrow(local_a0,0);
  }
  puVar7 = (undefined8 *)*param_2;
  plVar8 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  uVar11 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar7 + (int)param_2[1] < puVar7) {
    uVar11 = uVar10;
  }
  if (uVar11 != 0) {
    lVar9 = (longlong)plVar8 - (longlong)puVar7;
    do {
      uVar3 = FUN_140765020(*puVar7);
      uVar10 = uVar10 + 1;
      *(undefined8 *)((longlong)puVar7 + lVar9) = uVar3;
      puVar7 = puVar7 + 1;
    } while (uVar10 != uVar11);
  }
  local_a8 = 0;
  FUN_140740bf0(local_a0,&local_a8);
  lVar9 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  plVar8 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  plVar6 = plVar8 + local_48;
  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    if (((*plVar8 != 0) && (lVar9 = *(longlong *)(*plVar8 + 0x570), lVar9 != 0)) &&
       (lVar9 = FUN_142b79030(lVar9,uVar3), lVar9 != 0)) {
      lVar4 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14072b840(lVar9);
      }
    }
  }
  lVar9 = FUN_1407244d0(param_1);
  iVar1 = local_48;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar4 = (longlong)local_48;
    plVar8 = (longlong *)(lVar9 + 0x80);
    if (local_48 != 0) {
      iVar5 = *(int *)(lVar9 + 0x88);
      if (*(int *)(lVar9 + 0x8c) < iVar5 + local_48) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8);
        iVar5 = *(int *)(lVar9 + 0x88);
      }
      plVar6 = local_a0;
      if (local_50 != (longlong *)0x0) {
        plVar6 = local_50;
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar8 + (longlong)iVar5 * 8),plVar6,lVar4 << 3);
      *(int *)(lVar9 + 0x88) = *(int *)(lVar9 + 0x88) + iVar1;
    }
    local_a8 = 0;
    TArray<FName,FDefaultAllocator>::Remove(plVar8,&local_a8);
    *(undefined1 *)(lVar9 + 0x6c) = param_3;
    *(undefined1 *)(lVar9 + 0x6d) = param_4;
    FUN_140744ad0(lVar9,0);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  return lVar9;
}



// FUNCTION 140723a60 FUN_140723a60 body=802 status=ok
// SIG undefined FUN_140723a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140723a60(longlong *param_1,ulonglong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  longlong local_a0 [10];
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_44 = 0;
  local_50 = (longlong *)0x0;
  iVar1 = (int)param_2[1];
  local_48 = 0;
  if (iVar1 < 1) {
    if ((iVar1 < 0) && (iVar1 != 0)) {
      local_48 = iVar1;
      TArray<FLinearAllocation,TInlineAllocator<10,FDefaultAllocator>_>::ResizeShrink(local_a0);
    }
  }
  else {
    local_48 = iVar1;
    TArray<FName,TInlineAllocator<10,FDefaultAllocator>_>::ResizeGrow(local_a0);
  }
  uVar13 = 0;
  puVar11 = (undefined8 *)*param_2;
  plVar6 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar6 = local_50;
  }
  uVar14 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar11 + (int)param_2[1] < puVar11) {
    uVar14 = uVar13;
  }
  if (uVar14 != 0) {
    lVar12 = (longlong)plVar6 - (longlong)puVar11;
    do {
      uVar4 = FUN_140765020(*puVar11);
      uVar13 = uVar13 + 1;
      *(undefined8 *)(lVar12 + (longlong)puVar11) = uVar4;
      puVar11 = puVar11 + 1;
    } while (uVar13 != uVar14);
  }
  local_a8 = 0;
  FUN_140740bf0(local_a0,&local_a8);
  lVar12 = UAISense_Sight::GetPrivateStaticClass();
  uVar4 = *(undefined8 *)(lVar12 + 0x18);
  plVar6 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar6 = local_50;
  }
  plVar10 = plVar6 + local_48;
  for (; plVar6 != plVar10; plVar6 = plVar6 + 1) {
    if (((*plVar6 != 0) && (lVar12 = *(longlong *)(*plVar6 + 0x570), lVar12 != 0)) &&
       (lVar12 = FUN_142b79030(lVar12,uVar4), lVar12 != 0)) {
      lVar5 = UAISense_Sight::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14072b840(lVar12);
      }
    }
  }
  lVar5 = 0;
  lVar12 = UAISense_Sight::GetPrivateStaticClass();
  uVar4 = *(undefined8 *)(lVar12 + 0x18);
  if (param_1 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,0);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = UEnvQueryTest_Cover::StaticClass();
      lVar12 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      if ((lVar12 != 0) && (lVar12 = FUN_142b79030(lVar12,uVar4), lVar12 != 0)) {
        lVar5 = UAISense_Sight::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_14072b840(lVar12);
        }
      }
    }
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_a8 = 0;
    uVar8 = UAISense_Sight::GetPrivateStaticClass();
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    lVar5 = FUN_1417985e0(uVar8,uVar7,local_a8,0);
    *(undefined8 *)(lVar5 + 0x30) = uVar4;
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_142b79770(lVar5,param_1,uVar3);
    iVar1 = local_48;
    lVar12 = (longlong)local_48;
    plVar6 = (longlong *)(lVar5 + 0x80);
    if (local_48 != 0) {
      iVar9 = *(int *)(lVar5 + 0x88);
      if (*(int *)(lVar5 + 0x8c) < iVar9 + local_48) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6);
        iVar9 = *(int *)(lVar5 + 0x88);
      }
      plVar10 = local_a0;
      if (local_50 != (longlong *)0x0) {
        plVar10 = local_50;
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar6 + (longlong)iVar9 * 8),plVar10,lVar12 << 3);
      *(int *)(lVar5 + 0x88) = *(int *)(lVar5 + 0x88) + iVar1;
    }
    local_a8 = 0;
    TArray<FName,FDefaultAllocator>::Remove(plVar6,&local_a8);
    *(undefined1 *)(lVar5 + 0x6c) = param_3;
    *(undefined1 *)(lVar5 + 0x6d) = param_4;
    FUN_140744ad0(lVar5,0);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  return lVar5;
}



// FUNCTION 140723d90 FUN_140723d90 body=452 status=ok
// SIG undefined FUN_140723d90(void)

longlong FUN_140723d90(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  if ((param_1 != 0) && (lVar4 = UCableComponent::GetAttachedActor(), lVar4 != 0)) {
    local_40 = 0;
    local_38 = 0;
    iVar3 = FUN_1407c9b90(lVar4,1,0);
    if (local_38._4_4_ < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_40,iVar3);
    }
    FUN_1407c7b00(lVar4,&local_40,0,1);
    local_50 = local_40;
    local_48 = CONCAT44(local_48._4_4_,(undefined4)local_38);
    lVar4 = FUN_140723f60(param_1 + 0x5f0,&local_50,param_2,param_3);
    if (lVar4 != 0) {
      if (param_4 != '\0') {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UGameplayTask_ScriptedAction::OnActorSpawned",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_58,pwVar2 + 2,1);
        plVar8 = (longlong *)(param_1 + 0x460);
        FWeakObjectPtr::operator=(&local_50,0);
        local_48 = 0;
        FWeakObjectPtr::operator=(&local_50,lVar4);
        local_48 = local_58;
        if ((local_58 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_50), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_48);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
        iVar3 = *(int *)(param_1 + 0x468);
        *(int *)(param_1 + 0x468) = iVar3 + 1;
        if (*(int *)(param_1 + 0x46c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar8);
        *puVar7 = (undefined4)local_50;
        puVar7[1] = local_50._4_4_;
        *(longlong *)(puVar7 + 2) = local_48;
      }
      if (local_40 == 0) {
        return lVar4;
      }
      FMemory::Free();
      return lVar4;
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 140723f60 FUN_140723f60 body=609 status=ok
// SIG undefined FUN_140723f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140723f60(undefined8 param_1,ulonglong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0 [10];
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar1 = (int)param_2[1];
  uVar10 = 0;
  local_50 = (longlong *)0x0;
  local_44 = 0;
  local_48 = 0;
  if (iVar1 < 1) {
    if ((iVar1 < 0) && (iVar1 != 0)) {
      local_48 = iVar1;
      TArray<FLinearAllocation,TInlineAllocator<10,FDefaultAllocator>_>::ResizeShrink(local_a0);
    }
  }
  else {
    local_48 = iVar1;
    TArray<FName,TInlineAllocator<10,FDefaultAllocator>_>::ResizeGrow(local_a0,0);
  }
  puVar7 = (undefined8 *)*param_2;
  plVar8 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  uVar11 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar7 + (int)param_2[1] < puVar7) {
    uVar11 = uVar10;
  }
  if (uVar11 != 0) {
    lVar9 = (longlong)plVar8 - (longlong)puVar7;
    do {
      uVar3 = FUN_140765020(*puVar7);
      uVar10 = uVar10 + 1;
      *(undefined8 *)((longlong)puVar7 + lVar9) = uVar3;
      puVar7 = puVar7 + 1;
    } while (uVar10 != uVar11);
  }
  local_a8 = 0;
  FUN_140740bf0(local_a0,&local_a8);
  lVar9 = UAISense_Hearing::GetPrivateStaticClass();
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  plVar8 = local_a0;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  plVar6 = plVar8 + local_48;
  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    if (((*plVar8 != 0) && (lVar9 = *(longlong *)(*plVar8 + 0x570), lVar9 != 0)) &&
       (lVar9 = FUN_142b79030(lVar9,uVar3), lVar9 != 0)) {
      lVar4 = UAISense_Hearing::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14072b840(lVar9);
      }
    }
  }
  lVar9 = FUN_140724610(param_1);
  iVar1 = local_48;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar4 = (longlong)local_48;
    plVar8 = (longlong *)(lVar9 + 0x80);
    if (local_48 != 0) {
      iVar5 = *(int *)(lVar9 + 0x88);
      if (*(int *)(lVar9 + 0x8c) < iVar5 + local_48) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8);
        iVar5 = *(int *)(lVar9 + 0x88);
      }
      plVar6 = local_a0;
      if (local_50 != (longlong *)0x0) {
        plVar6 = local_50;
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar8 + (longlong)iVar5 * 8),plVar6,lVar4 << 3);
      *(int *)(lVar9 + 0x88) = *(int *)(lVar9 + 0x88) + iVar1;
    }
    local_a8 = 0;
    TArray<FName,FDefaultAllocator>::Remove(plVar8,&local_a8);
    *(undefined1 *)(lVar9 + 0x6c) = param_3;
    *(undefined1 *)(lVar9 + 0x6d) = param_4;
    FUN_140744ad0(lVar9,0);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  return lVar9;
}



// FUNCTION 1407241d0 FUN_1407241d0 body=443 status=ok
// SIG undefined FUN_1407241d0(void)

longlong FUN_1407241d0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x568) != 0)) {
    plVar4 = (longlong *)FUN_1407adec0();
    plVar5 = (longlong *)plVar4[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
LAB_14072425f:
        plVar5 = (longlong *)(param_1 + 0x510);
        lVar7 = FUN_1407adec0();
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,0);
        if (plVar4 != (longlong *)0x0) {
          uVar8 = UEnvQueryTest_Cover::StaticClass();
          lVar7 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
          if ((lVar7 != 0) && (lVar7 = FUN_142b79030(lVar7,uVar1), lVar7 != 0)) {
            lVar6 = FUN_1407adec0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14072b840(lVar7);
            }
          }
        }
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res8 = 0;
        uVar9 = FUN_1407adec0();
        lVar7 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        *(undefined8 *)(lVar7 + 0x30) = uVar1;
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_142b79770(lVar7,plVar5,uVar3);
        FUN_14073b940(lVar7,param_1);
        return lVar7;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5,&local_res8,param_1);
    if (*plVar5 != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*plVar5 == 0) {
            return 0;
          }
          goto LAB_14072425f;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140724390 FUN_140724390 body=307 status=ok
// SIG undefined FUN_140724390(void)

longlong FUN_140724390(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar4 = FUN_1407ab0a0();
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  if (param_1 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,0);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = UEnvQueryTest_Cover::StaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_142b79030(lVar4,uVar1);
        if (lVar4 != 0) {
          lVar7 = FUN_1407ab0a0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14072b840(lVar4);
          }
        }
      }
    }
    uVar6 = GetTransientPackage();
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = FUN_1407ab0a0();
    lVar4 = FUN_1417985e0(uVar8,uVar6,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar4 + 0x30) = uVar1;
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_142b79770(lVar4,param_1,uVar3);
    return lVar4;
  }
  return 0;
}



// FUNCTION 1407244d0 FUN_1407244d0 body=307 status=ok
// SIG undefined FUN_1407244d0(void)

longlong FUN_1407244d0(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar4 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  if (param_1 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,0);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = UEnvQueryTest_Cover::StaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_142b79030(lVar4,uVar1);
        if (lVar4 != 0) {
          lVar7 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14072b840(lVar4);
          }
        }
      }
    }
    uVar6 = GetTransientPackage();
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
    lVar4 = FUN_1417985e0(uVar8,uVar6,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar4 + 0x30) = uVar1;
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_142b79770(lVar4,param_1,uVar3);
    return lVar4;
  }
  return 0;
}



// FUNCTION 140724610 FUN_140724610 body=307 status=ok
// SIG undefined FUN_140724610(void)

longlong FUN_140724610(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar4 = UAISense_Hearing::GetPrivateStaticClass();
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  if (param_1 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,0);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = UEnvQueryTest_Cover::StaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_142b79030(lVar4,uVar1);
        if (lVar4 != 0) {
          lVar7 = UAISense_Hearing::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14072b840(lVar4);
          }
        }
      }
    }
    uVar6 = GetTransientPackage();
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = UAISense_Hearing::GetPrivateStaticClass();
    lVar4 = FUN_1417985e0(uVar8,uVar6,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar4 + 0x30) = uVar1;
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_142b79770(lVar4,param_1,uVar3);
    return lVar4;
  }
  return 0;
}



// FUNCTION 140724750 Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,float_const_&>_> body=677 status=ok
// SIG undefined Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,float_const_&>_>(void)

int * TSet<TTuple<FFlareResourceDescription_*,float>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,float_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *_Src;
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  int local_res10;
  
  uVar17 = 0xffffffff;
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
    iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar7 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar9 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar8 = (longlong)iVar10;
  _Src = (ulonglong *)(*param_1 + lVar8 * 0x18);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    iVar1 = local_res8[0];
    lVar14 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar14 * 0x18),_Src,0x10);
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar14 = *param_1;
      *(undefined4 *)(lVar14 + lVar8 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar14 + 4 + lVar8 * 0x18) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar1;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar9 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar13 = (undefined1)local_res8[0];
      goto LAB_1407249cb;
    }
  }
  uVar13 = 0;
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar5 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar15 = -(iVar10 + uVar12) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar15 ^ uVar15 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar15 ^ uVar15 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1407249cb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return param_2;
}



// FUNCTION 140724a00 FUN_140724a00 body=128 status=ok
// SIG undefined FUN_140724a00(void)

longlong FUN_140724a00(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x7200);
  if (*(longlong *)(param_1 + 0x7200) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x7208) * 0x390 + lVar3;
  while( true ) {
    if (lVar3 == lVar2) {
      return 0;
    }
    cVar1 = FUN_142dd3e20(lVar3,*param_2);
    if (cVar1 != '\0') break;
    lVar3 = lVar3 + 0x390;
  }
  return lVar3;
}



// FUNCTION 140724a80 FUN_140724a80 body=156 status=ok
// SIG undefined FUN_140724a80(void)

undefined8 * FUN_140724a80(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  puVar1 = puVar4 + (longlong)*(int *)(param_1 + 1) * 3;
  while( true ) {
    if (puVar4 == puVar1) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return (undefined8 *)0x0;
    }
    if (*(int *)(puVar4 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar4;
    }
    iVar2 = FUN_141592950(param_2,puVar3,1,0,0xffffffff);
    if (iVar2 != -1) break;
    puVar4 = puVar4 + 3;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return puVar4;
}



// FUNCTION 140724b20 FUN_140724b20 body=442 status=ok
// SIG undefined FUN_140724b20(void)

void FUN_140724b20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FUN_1407a8c50();
    lVar7 = *(longlong *)(param_1 + 0x28);
    if (lVar7 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      local_58 = 0;
      uStack_54 = 1;
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_20 = (uint *)(param_1 + 0x40);
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puStack_20;
        }
        uVar2 = *puVar8;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar7 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar6 = local_58 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar6;
          if (bVar4) goto LAB_140724c1f;
          uVar2 = puVar8[lVar7 + 1];
        }
        uStack_54 = -uVar2 & uVar2;
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
        local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
        if (iVar1 < local_48._4_4_) {
LAB_140724c1f:
          local_48._4_4_ = iVar1;
        }
      }
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      uStack_c = iStack_3c;
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_34 = iStack_3c;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar4 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x30);
      local_48 = puStack_20;
      if (bVar4) {
        do {
          iVar1 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iStack_3c * 0x18);
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return;
}



// FUNCTION 140724ce0 FUN_140724ce0 body=1136 status=ok
// SIG undefined FUN_140724ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140724ce0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  char local_158;
  longlong *local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  int local_120;
  int local_11c;
  longlong *local_118;
  int iStack_110;
  uint uStack_10c;
  uint *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8 [128];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *(undefined4 *)(param_2 + 0x88) = 0;
  local_158 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x8c)) {
    FUN_1407418a0(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_144 = 1;
  local_150 = (longlong *)(param_1 + 0x2b0);
  local_128 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_140 = (uint *)(param_1 + 0x2c0);
  local_11c = 0;
  iVar13 = 0;
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_140;
    }
    uVar12 = *puVar10;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar5 = local_148 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar5;
      if (bVar3) goto LAB_140724e00;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_144 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_134 = (iStack_130 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_134) {
LAB_140724e00:
      uStack_134 = uVar1;
    }
  }
  local_138 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_e8 = CONCAT44(uStack_144,local_148);
  uStack_100 = 0xffffffff;
  uStack_fc = uStack_134;
  local_f8 = CONCAT44(uStack_12c,iStack_130);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_110 = local_148;
  uStack_10c = uStack_144;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_140;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140724ecd;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_140724ecd:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_108 = puStack_140;
  local_f0 = local_150;
  puStack_e0 = puStack_140;
  uStack_d0 = local_f8;
  local_118 = local_150;
  uStack_d8 = uStack_100;
  uStack_d4 = uStack_fc;
  while( true ) {
    if ((uStack_fc == uVar12) && (local_108 == puStack_140)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_118 == local_150)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_118 + (longlong)(int)uStack_fc * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar2 + 1;
        if (*(int *)(param_2 + 0x8c) < iVar2 + 1) {
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_158 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_120 = iVar13 + 1;
        if (iVar5 < local_120) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,iVar13);
          plVar11 = local_128;
          iVar5 = local_11c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_120;
      }
    }
    uStack_100 = uStack_100 & ~uStack_10c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_110);
  }
  if (local_158 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140724ce0(*(longlong *)(*plVar14 + 0x2d8),local_c8,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 0x88);
            if (*(int *)(param_2 + 0x8c) < (int)local_40 + iVar5) {
              FUN_1407418a0(param_2);
              iVar5 = *(int *)(param_2 + 0x88);
            }
            _Src = local_c8;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0x80);
            if (*(longlong *)(param_2 + 0x80) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}


