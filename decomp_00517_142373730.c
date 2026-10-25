// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142373730 FUN_142373730 body=383 status=ok
// SIG undefined FUN_142373730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142373730(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 local_f8 [8];
  undefined1 local_f0 [40];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af07a0) {
    _Init_thread_header(&DAT_146af07a0);
    if (DAT_146af07a0 == -1) {
      FName::FName(&DAT_146af0798,"MovementOverlapTest",1);
      _Init_thread_footer(&DAT_146af07a0);
    }
  }
  local_118 = param_6;
  FUN_1422ffb20(local_c8,DAT_146af0798,local_f8,0);
  FUN_1426d3dd0(local_f0);
  FUN_1426ea8d0(local_f0,2);
  (**(code **)(*param_1 + 0x478))(param_1,local_c8,local_f0);
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  local_108 = local_f0;
  local_110 = local_c8;
  local_118 = param_5;
  uVar1 = UWorld::OverlapAnyTestByChannel(lVar2,param_2,param_3,param_4);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1423738b0 FUN_1423738b0 body=183 status=ok
// SIG undefined FUN_1423738b0(void)

void FUN_1423738b0(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *local_res8;
  
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
    bVar1 = *(byte *)(param_1 + 0x5b);
    *(byte *)(param_1 + 0x5b) = bVar1 & 0xfe;
    (**(code **)(*param_1 + 0x550))(param_1);
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) ^ (*(byte *)(param_1 + 0x5b) ^ bVar1) & 1;
  }
  if ((param_1[0x5a] != 0) && (lVar2 != 0)) {
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
    *(undefined4 *)(param_1 + 0x73) = param_2;
    local_res8 = param_1;
    lVar2 = FUN_142368dc0(lVar2,1);
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x20,&local_res8);
  }
  return;
}



// FUNCTION 142373970 PostDuplicate body=57 status=ok
// SIG undefined PostDuplicate(void)

void ULightComponentBase::PostDuplicate(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xd0))(param_1,param_2 == 2);
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x548))(param_1);
  }
  return;
}



// FUNCTION 1423739c0 FUN_1423739c0 body=52 status=ok
// SIG undefined FUN_1423739c0(void)

void FUN_1423739c0(longlong param_1)

{
  FUN_142238430();
  *(uint *)(param_1 + 0x460) =
       *(uint *)(param_1 + 0x460) ^
       ((uint)(*(byte *)(*(longlong *)(param_1 + 0x458) + 0x24c) >> 5) ^ *(uint *)(param_1 + 0x460))
       & 1;
  return;
}



// FUNCTION 142373a00 FUN_142373a00 body=1118 status=ok
// SIG undefined FUN_142373a00(void)

void FUN_142373a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0690) &&
     (_Init_thread_header(&DAT_146af0690), DAT_146af0690 == -1)) {
    FName::FName(&DAT_146af0688,L"LightColor",1);
    _Init_thread_footer(&DAT_146af0690);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af06a0) &&
     (_Init_thread_header(&DAT_146af06a0), DAT_146af06a0 == -1)) {
    FName::FName(&DAT_146af0698,L"Intensity",1);
    _Init_thread_footer(&DAT_146af06a0);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af06b0) &&
     (_Init_thread_header(&DAT_146af06b0), DAT_146af06b0 == -1)) {
    FName::FName(&DAT_146af06a8,L"Brightness",1);
    _Init_thread_footer(&DAT_146af06b0);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af06c0) &&
     (_Init_thread_header(&DAT_146af06c0), DAT_146af06c0 == -1)) {
    FName::FName(&DAT_146af06b8,L"IndirectLightingIntensity",1);
    _Init_thread_footer(&DAT_146af06c0);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af06d0) &&
     (_Init_thread_header(&DAT_146af06d0), DAT_146af06d0 == -1)) {
    FName::FName(&DAT_146af06c8,L"VolumetricScatteringIntensity",1);
    _Init_thread_footer(&DAT_146af06d0);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af06e0) &&
     (_Init_thread_header(&DAT_146af06e0), DAT_146af06e0 == -1)) {
    FName::FName(&DAT_146af06d8,L"Temperature",1);
    _Init_thread_footer(&DAT_146af06e0);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af06f0) &&
     (_Init_thread_header(&DAT_146af06f0), DAT_146af06f0 == -1)) {
    FName::FName(&DAT_146af06e8,L"BloomScale",1);
    _Init_thread_footer(&DAT_146af06f0);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0700) &&
     (_Init_thread_header(&DAT_146af0700), DAT_146af0700 == -1)) {
    FName::FName(&DAT_146af06f8,L"BloomThreshold",1);
    _Init_thread_footer(&DAT_146af0700);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0710) &&
     (_Init_thread_header(&DAT_146af0710), DAT_146af0710 == -1)) {
    FName::FName(&DAT_146af0708,L"BloomTint",1);
    _Init_thread_footer(&DAT_146af0710);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0720) &&
     (_Init_thread_header(&DAT_146af0720), DAT_146af0720 == -1)) {
    FName::FName(&DAT_146af0718,L"OcclusionMaskDarkness",1);
    _Init_thread_footer(&DAT_146af0720);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0730) &&
     (_Init_thread_header(&DAT_146af0730), DAT_146af0730 == -1)) {
    FName::FName(&DAT_146af0728,L"OcclusionDepthRange",1);
    _Init_thread_footer(&DAT_146af0730);
  }
  lVar1 = *(longlong *)(param_2 + 0x18);
  if ((lVar1 == DAT_146af0688) || (lVar1 == DAT_146af0698)) {
LAB_142373b4f:
    if (lVar1 != DAT_146af06a8) goto LAB_142373b60;
  }
  else if (lVar1 != DAT_146af06a8) {
    if (((((lVar1 != DAT_146af06b8) && (lVar1 != DAT_146af06d8)) && (lVar1 != DAT_146af06c8)) &&
        ((lVar1 != DAT_146af06e8 && (lVar1 != DAT_146af06f8)))) &&
       ((lVar1 != DAT_146af0708 && ((lVar1 != DAT_146af0718 && (lVar1 != DAT_146af0728)))))) {
      FUN_142394530(param_1,param_2);
      return;
    }
    goto LAB_142373b4f;
  }
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2e0);
LAB_142373b60:
  FUN_14237b430(param_1);
  return;
}



// FUNCTION 142373e60 FUN_142373e60 body=323 status=ok
// SIG undefined FUN_142373e60(void)

void FUN_142373e60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0778) &&
     (_Init_thread_header(&DAT_146af0778), DAT_146af0778 == -1)) {
    FName::FName(&DAT_146af0770,L"Radius",1);
    _Init_thread_footer(&DAT_146af0778);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0788) &&
     (_Init_thread_header(&DAT_146af0788), DAT_146af0788 == -1)) {
    FName::FName(&DAT_146af0780,L"AttenuationRadius",1);
    _Init_thread_footer(&DAT_146af0788);
  }
  if (*(longlong *)(param_2 + 0x18) == DAT_146af0770) {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x43c);
  }
  else if (*(longlong *)(param_2 + 0x18) != DAT_146af0780) {
    FUN_142373a00(param_1,param_2);
    return;
  }
  if ((*(byte *)(param_1 + 0x2ec) & 2) == 0) {
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      FUN_14237c120(*(longlong *)(param_1 + 0x3a8),*(undefined4 *)(param_1 + 0x440));
    }
  }
  else {
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142373fb0 FUN_142373fb0 body=422 status=ok
// SIG undefined FUN_142373fb0(void)

void FUN_142373fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146af07b0) &&
     (_Init_thread_header(&DAT_146af07b0), DAT_146af07b0 == -1)) {
    FName::FName(&DAT_146af07a8,L"LightFalloffExponent",1);
    _Init_thread_footer(&DAT_146af07b0);
  }
  if (*(longlong *)(param_2 + 0x18) != DAT_146af07a8) {
    if ((*(int *)(lVar1 + 0x38) < DAT_146af0778) &&
       (_Init_thread_header(&DAT_146af0778), DAT_146af0778 == -1)) {
      FName::FName(&DAT_146af0770,L"Radius",1);
      _Init_thread_footer(&DAT_146af0778);
    }
    if ((*(int *)(lVar1 + 0x38) < DAT_146af0788) &&
       (_Init_thread_header(&DAT_146af0788), DAT_146af0788 == -1)) {
      FName::FName(&DAT_146af0780,L"AttenuationRadius",1);
      _Init_thread_footer(&DAT_146af0788);
    }
    if (*(longlong *)(param_2 + 0x18) == DAT_146af0770) {
      *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x43c);
    }
    else if (*(longlong *)(param_2 + 0x18) != DAT_146af0780) {
      FUN_142373a00(param_1,param_2);
      return;
    }
    if ((*(byte *)(param_1 + 0x2ec) & 2) == 0) {
      if (*(longlong *)(param_1 + 0x3a8) == 0) {
        return;
      }
      FUN_14237c120(*(longlong *)(param_1 + 0x3a8),*(undefined4 *)(param_1 + 0x440));
      return;
    }
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142374160 FUN_142374160 body=199 status=ok
// SIG undefined FUN_142374160(void)

void FUN_142374160(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  
  FUN_142349c80();
  if (((*(longlong *)(param_1 + 0x358) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (*(char *)(param_1 + 0x24e) == '\0')) {
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x2e4);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  *(float *)(param_1 + 0x2e4) = fVar3;
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar2 < 0xe4) && (lVar1 = *(longlong *)(param_1 + 0x370), lVar1 != 0)) {
    *(float *)(param_1 + 0x2e4) = *(float *)(param_1 + 0x2e4) / *(float *)(lVar1 + 0x104);
    fVar3 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x37c),2.2);
    *(float *)(param_1 + 0x37c) = fVar3;
    *(float *)(param_1 + 0x37c) = fVar3 / *(float *)(lVar1 + 0x104);
  }
  return;
}



// FUNCTION 142374230 FUN_142374230 body=276 status=ok
// SIG undefined FUN_142374230(void)

void FUN_142374230(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined1 local_18 [16];
  
  FUN_1423945d0();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  FUN_1417510e0(*(undefined8 *)(param_1 + 0x6f8));
  FUN_1425b4560(param_1);
  if (*(longlong *)(param_1 + 0x708) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar7 = FUN_142909590();
    uVar7 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x708) = uVar7;
    puVar8 = (undefined4 *)FGuid::NewGuid(local_18);
    lVar2 = *(longlong *)(param_1 + 0x708);
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *(undefined4 *)(lVar2 + 0xf0) = *puVar8;
    *(undefined4 *)(lVar2 + 0xf4) = uVar3;
    *(undefined4 *)(lVar2 + 0xf8) = uVar4;
    *(undefined4 *)(lVar2 + 0xfc) = uVar5;
    *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x9c) = 3;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x708) + 0x99);
    *pbVar1 = *pbVar1 & 0xbf;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x708) + 0x99);
    *pbVar1 = *pbVar1 | 8;
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x278))();
  }
  iVar6 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar6 < 0x145) && (*(longlong *)(param_1 + 0x708) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x708) + 0x99);
    *pbVar1 = *pbVar1 & 0xbf;
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x708) + 0x99);
  *pbVar1 = *pbVar1 | 8;
  return;
}



// FUNCTION 142374350 FUN_142374350 body=170 status=ok
// SIG undefined FUN_142374350(void)

void FUN_142374350(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_18 [16];
  
  FUN_142349c80();
  if (*(char *)(param_1 + 0x19c) == '\x04') {
    puVar3 = (undefined8 *)FUN_14236ea30(param_1,local_18,4);
    *(undefined8 *)(param_1 + 0x1a0) = *puVar3;
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(puVar3 + 1);
  }
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    lVar4 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x180) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 142374400 FUN_142374400 body=110 status=ok
// SIG undefined FUN_142374400(void)

void FUN_142374400(longlong param_1)

{
  FUN_142394700();
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0x2d8) + 0x198,param_1);
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x10);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x18);
    return;
  }
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  return;
}



// FUNCTION 142374470 FUN_142374470 body=243 status=ok
// SIG undefined FUN_142374470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142374470(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  wchar_t *pwVar4;
  float fVar5;
  undefined8 local_res10;
  undefined1 auStack_858 [32];
  int local_838 [4];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  local_res10 = param_2;
  pbVar2 = (byte *)FName::GetComparisonNameEntry(&local_res10);
  if (pbVar2 != (byte *)0x0) {
    pwVar4 = L"Intensity";
    iVar3 = 0;
    local_838[0] = 0;
    cVar1 = FName::SplitNameWithCheck(L"Intensity",local_828,0x400,local_838);
    if (cVar1 != '\0') {
      pwVar4 = local_828;
      iVar3 = local_838[0] + 1;
    }
    if (iVar3 == local_res10._4_4_) {
      if ((*pbVar2 & 1) == 0) {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar4,pbVar2 + 0x10);
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
      }
      if (iVar3 == 0) {
        fVar5 = *(float *)(param_1 + 0x2e4);
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        *(float *)(param_1 + 0x2e4) = fVar5;
      }
    }
  }
  FUN_14237b430(param_1);
  return;
}



// FUNCTION 142374580 FUN_142374580 body=247 status=ok
// SIG undefined FUN_142374580(void)

void FUN_142374580(longlong *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  undefined8 local_20;
  
  if (param_3 != '\0') {
    plVar3 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar3 + 0x38))(plVar3,0x1e);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x6a8))(param_1,&local_28,3);
  plVar3 = local_28 + (int)local_20;
  for (plVar5 = local_28; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    plVar1 = (longlong *)*plVar5;
    if (plVar1 != (longlong *)0x0) {
      lVar4 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2,param_4);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142374680 FUN_142374680 body=97 status=ok
// SIG undefined FUN_142374680(void)

void FUN_142374680(longlong *param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x17) & 3) == 3) {
    (**(code **)(*param_1 + 0x300))();
    plVar1 = param_1;
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  FUN_141edf360(param_1 + 0x76);
  if (((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x17) & 2) == 0)) &&
     ((*(byte *)(plVar1 + 0x17) & 1) != 0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1);
  }
  return;
}



// FUNCTION 1423746f0 FUN_1423746f0 body=111 status=ok
// SIG undefined FUN_1423746f0(void)

void FUN_1423746f0(longlong *param_1)

{
  if ((param_1[0xe3] != 0) && ((int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] != 0)) {
    FUN_1423684e0();
    (**(code **)(*param_1 + 0x990))(param_1);
    FUN_14239b420(param_1,0,0,1);
    (**(code **)(*param_1 + 0x4b8))(param_1);
    UActorComponent::MarkRenderDynamicDataDirty(param_1);
    FUN_1423424c0(param_1);
    return;
  }
  return;
}



// FUNCTION 142374760 FUN_142374760 body=98 status=ok
// SIG undefined FUN_142374760(void)

void FUN_142374760(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  UActorComponent::RegisterComponentTickFunctions();
  (**(code **)(*param_1 + 0x460))(param_1);
  if (((((*(byte *)(param_1 + 0x37) & 4) != 0) && (param_2 != '\0')) &&
      ((*(byte *)((longlong)param_1 + 0x3c) & 2) != 0)) &&
     ((lVar1 = param_1[0x23], lVar1 != 0 && ((*(byte *)(lVar1 + 0x34) & 2) != 0)))) {
    FTickFunction::AddPrerequisite(lVar1 + 0x28,param_1,param_1 + 6);
  }
  return;
}



// FUNCTION 1423747d0 FUN_1423747d0 body=440 status=ok
// SIG undefined FUN_1423747d0(void)

void FUN_1423747d0(longlong param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int *local_38;
  uint local_30;
  int local_2c;
  
  if (-1 < param_2) {
    if (param_2 < *(int *)(param_1 + 0x1e0)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)param_2 * 0x10);
      if ((*(byte *)(lVar6 + 1) & 1) != 0) {
        piVar12 = (int *)0x0;
        iVar9 = 0;
        local_38 = (int *)0x0;
        uVar5 = 0;
        local_2c = 0;
        cVar2 = *(char *)(lVar6 + 2);
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x1e0)) {
          lVar8 = 0;
          do {
            if ((iVar7 != param_2) &&
               (lVar4 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x1d8)),
               *(longlong *)(lVar4 + 8) == *(longlong *)(lVar6 + 8))) {
              cVar3 = *(char *)(lVar4 + 2);
              if (cVar3 == *(char *)(lVar6 + 2)) {
                local_30 = 0;
                if (iVar9 == 0) goto LAB_14237490f;
                TArray<float,FDefaultAllocator>::ResizeTo(&local_38,0);
                piVar12 = local_38;
                uVar5 = local_30;
                break;
              }
              if ((bool)cVar3 == (cVar2 == '\0')) {
                local_30 = uVar5 + 1;
                if (iVar9 < (int)local_30) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38,uVar5);
                  piVar12 = local_38;
                  iVar9 = local_2c;
                }
                piVar12[(int)uVar5] = iVar7;
                uVar5 = local_30;
              }
            }
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 0x10;
          } while (iVar7 < *(int *)(param_1 + 0x1e0));
          if (0 < (int)uVar5) {
            uVar11 = (ulonglong)uVar5;
            piVar10 = piVar12;
            do {
              iVar9 = *piVar10;
              piVar10 = piVar10 + 1;
              pbVar1 = (byte *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x1d8) + (longlong)iVar9 * 0x10) + 1);
              *pbVar1 = *pbVar1 & 0xfe;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
LAB_14237490f:
          if (piVar12 != (int *)0x0) {
            FMemory::Free(piVar12);
          }
        }
      }
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_1 + 0x1d8,param_2,1);
      lVar6 = *(longlong *)(param_1 + 0x1e8);
      lVar8 = (longlong)*(int *)(param_1 + 0x1f0) * 0x70 + lVar6;
      for (; lVar6 != lVar8; lVar6 = lVar6 + 0x70) {
        *(undefined4 *)(lVar6 + 8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142374990 RemoveAnnotation body=190 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::RemoveAnnotation
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142374a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 142374a50 FUN_142374a50 body=218 status=ok
// SIG undefined FUN_142374a50(void)

void FUN_142374a50(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x30);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x30),
                 (void *)((longlong)(iVar3 - iVar1) * 0x30 + *param_1),(longlong)iVar1 * 0x30);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142374b30 RemoveAtSwapImpl body=258 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FCachedKeyToActionInfo,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x50 + (longlong)param_2 * 0x70);
    iVar2 = param_3;
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar1 + 2);
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      FUN_140679550(plVar1 + -8,0);
      if (plVar1[-4] != 0) {
        FMemory::Free();
      }
      if (plVar1[-8] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar3 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x70),
                 (void *)((longlong)(iVar2 - iVar3) * 0x70 + *param_1),(longlong)iVar3 * 0x70);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142374c60 FUN_142374c60 body=51 status=ok
// SIG undefined FUN_142374c60(void)

void FUN_142374c60(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x208) != 0) {
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_14269c750(*(longlong *)(param_1 + 0x208),&local_18,0);
  }
  return;
}



// FUNCTION 142374ca0 FUN_142374ca0 body=220 status=ok
// SIG undefined FUN_142374ca0(void)

void FUN_142374ca0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 local_res10 [3];
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    local_res10[0] = param_2;
    iVar5 = FUN_1423ac950();
    if (iVar5 != -1) {
      lVar6 = (longlong)iVar5;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x168);
      lVar3 = *(longlong *)(param_1 + 0xa30);
      puVar7 = (undefined8 *)(lVar2 + lVar6 * 0x30);
      uVar4 = puVar7[1];
      puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x30);
      *puVar1 = *puVar7;
      puVar1[1] = uVar4;
      puVar7 = (undefined8 *)(lVar2 + 0x10 + lVar6 * 0x30);
      uVar4 = puVar7[1];
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x30);
      *puVar1 = *puVar7;
      puVar1[1] = uVar4;
      puVar7 = (undefined8 *)(lVar2 + 0x20 + lVar6 * 0x30);
      uVar4 = puVar7[1];
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar6 * 0x30);
      *puVar1 = *puVar7;
      puVar1[1] = uVar4;
      return;
    }
    puVar7 = (undefined8 *)FName::ToString(local_res10,local_18);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar7;
    }
    FString::PrintfImpl(&local_28,L"Invalid Bone Name \'%s\'",puVar8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar8 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar8 = local_28;
    }
    FUN_141790820(puVar8,3,0);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142374d80 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x34,0);
    iVar3 = (int)(uVar1 / 0x34);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x34,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 142374e00 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBatchedLine,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x34,0);
  iVar4 = (int)(uVar3 / 0x34);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x34,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 142374e90 ResizeGrow body=282 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FWholeSceneProjectedShadowInitializer,TInlineAllocator<6,FDefaultAllocator>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xd30);
  if (uVar1 < 7) {
    uVar5 = 6;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xd34) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x230,0);
    uVar5 = (uint)(uVar2 / 0x230);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xd34) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0xd20);
  if (uVar5 < 7) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x230);
    pvVar3 = *(void **)((longlong)param_1 + 0xd20);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x230,0);
        *(void **)((longlong)param_1 + 0xd20) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x230);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x230;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xd20) = uVar4;
  return;
}



// FUNCTION 142374fb0 ResizeShrink body=156 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FBatchedLine,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x34) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x34,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x34);
      }
      goto LAB_14237501e;
    }
    if (iVar4 == 0) goto LAB_14237501e;
  }
  iVar4 = iVar5;
LAB_14237501e:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x34,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142375050 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<FBatchedLine,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x34,0);
    iVar3 = (int)(uVar1 / 0x34);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x34,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1423750c0 FUN_1423750c0 body=934 status=ok
// SIG undefined FUN_1423750c0(void)

char FUN_1423750c0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  byte local_d8 [12];
  undefined4 local_cc;
  
  local_e0 = *(float *)(param_2 + 1);
  local_e8 = *param_2;
  (**(code **)(*param_1 + 0x4f0))(local_e8,&local_f8,&local_e8);
  if ((((local_f8 == 0.0) && (local_f4 == 0.0)) && (local_f0 == 0.0)) ||
     ((plVar2 = (longlong *)param_1[0x30], plVar2 == (longlong *)0x0 ||
      (lVar3 = *(longlong *)(param_1[0x2f] + 0x118), lVar3 == 0)))) {
    return '\0';
  }
  local_108._0_4_ = local_f8 + *(float *)(param_3 + 0x44);
  local_108._4_4_ = local_f4 + *(float *)(param_3 + 0x48);
  local_100 = local_f0 + *(float *)(param_3 + 0x4c);
  lVar4 = *param_1;
  uVar7 = (**(code **)(*plVar2 + 0x748))(plVar2,&local_e8,DAT_146531d08);
  uVar6 = (**(code **)(*plVar2 + 0x4f8))(plVar2);
  cVar5 = (**(code **)(lVar4 + 0x480))(param_1,&local_108,param_4,uVar6,uVar7,lVar3);
  if (cVar5 == '\0') {
    uVar7 = FUN_14247f500();
    FUN_14247ea90(uVar7);
    (**(code **)(*param_1 + 0x488))(param_1,&local_f8,param_4,0,0,1);
    return '\x01';
  }
  uVar1 = *(uint *)(param_1 + 0x31);
  *(uint *)(param_1 + 0x31) = uVar1 & 0xfffffffb;
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
  local_cc = 0x3f800000;
  uVar7 = FUN_14247f500();
  FUN_14247ea90(uVar7);
  cVar5 = (**(code **)(*param_1 + 0x488))(param_1,&local_f8,param_4,1,local_d8,1);
  if (cVar5 == '\0') {
    if ((local_d8[0] & 2) != 0) {
      (**(code **)(*param_1 + 0x490))(param_1,&local_108,local_d8);
      local_e0 = local_100 + local_f0;
      local_e8 = CONCAT44(local_108._4_4_ + local_f4,(float)local_108 + local_f8);
      if (((((float)local_108 != local_f8) || (local_108._4_4_ != local_f4)) ||
          (local_100 != local_f0)) &&
         ((((float)local_108 + local_f8 != 0.0 || (local_108._4_4_ + local_f4 != 0.0)) ||
          (local_e0 != 0.0)))) {
        uVar7 = FUN_14247f500();
        FUN_14247ea90(uVar7);
        cVar5 = (**(code **)(*param_1 + 0x488))(param_1,&local_e8,param_4,1,0,1);
        if (cVar5 != '\0') goto LAB_14237544f;
      }
    }
    local_100 = *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x4c);
    local_108 = CONCAT44(*(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x48),
                         *(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x44));
    local_e0 = local_100;
    (**(code **)(*param_1 + 0x4f0))(param_1,&local_e8,&local_108);
    if ((((float)local_e8 != 0.0) || (local_e8._4_4_ != 0.0)) || (local_e0 != 0.0)) {
      local_100 = local_e0 + local_f0;
      local_108 = CONCAT44(local_e8._4_4_ + local_f4,(float)local_e8 + local_f8);
      uVar7 = FUN_14247f500();
      FUN_14247ea90(uVar7);
      cVar5 = (**(code **)(*param_1 + 0x488))(param_1,&local_108,param_4,1,0,1);
    }
  }
LAB_14237544f:
  *(uint *)(param_1 + 0x31) = uVar1;
  return cVar5;
}



// FUNCTION 142375470 FUN_142375470 body=28 status=ok
// SIG undefined FUN_142375470(void)

void FUN_142375470(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x240) = param_2;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined2 *)(param_1 + 0x244) = 0;
  return;
}



// FUNCTION 142375490 FUN_142375490 body=327 status=ok
// SIG undefined FUN_142375490(void)

void FUN_142375490(longlong param_1,byte *param_2,undefined4 param_3,char param_4)

{
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_4 == '\x01') {
    local_9c = *(undefined4 *)(param_2 + 0xc);
    local_98 = *(undefined4 *)(param_2 + 0x10);
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_2c = 0;
    local_a8[0] = *param_2 & 3;
    local_94 = *(undefined8 *)(param_2 + 0x14);
    local_a4 = *(undefined4 *)(param_2 + 4);
    local_88 = *(undefined8 *)(param_2 + 0x20);
    local_a0 = *(uint *)(param_2 + 8) & 1;
    local_8c = *(undefined4 *)(param_2 + 0x1c);
    local_7c = *(undefined8 *)(param_2 + 0x2c);
    local_80 = *(undefined4 *)(param_2 + 0x28);
    local_74 = *(undefined4 *)(param_2 + 0x34);
    local_68 = *(undefined4 *)(param_2 + 0x40);
    local_5c = *(undefined4 *)(param_2 + 0x4c);
    local_50 = *(undefined4 *)(param_2 + 0x58);
    local_48 = *(undefined4 *)(param_2 + 0x60);
    local_44 = *(undefined4 *)(param_2 + 100);
    local_40 = *(undefined4 *)(param_2 + 0x68);
    local_3c = *(undefined4 *)(param_2 + 0x6c);
    local_38 = *(undefined4 *)(param_2 + 0x70);
    local_70 = *(undefined8 *)(param_2 + 0x38);
    local_34 = *(undefined4 *)(param_2 + 0x74);
    local_64 = *(undefined8 *)(param_2 + 0x44);
    local_30 = *(undefined4 *)(param_2 + 0x78);
    local_28 = *(undefined8 *)(param_2 + 0x80);
    local_58 = *(undefined8 *)(param_2 + 0x50);
    local_20 = *(undefined8 *)(param_2 + 0x88);
    local_4c = *(undefined4 *)(param_2 + 0x5c);
    local_18 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1d0,local_a8);
  }
  *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) ^ 0x80000000;
  return;
}



// FUNCTION 1423755e0 FUN_1423755e0 body=407 status=ok
// SIG undefined FUN_1423755e0(void)

ulonglong FUN_1423755e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       byte *param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 local_38 [2];
  
  if (param_1[0x2f] == 0) {
    uVar8 = *(undefined8 *)(param_5 + 0x44);
    uVar1 = *(undefined4 *)(param_5 + 0x4c);
    uVar2 = *(undefined4 *)(param_5 + 0x58);
    local_38[0] = *(undefined8 *)(param_5 + 0x50);
    pvVar7 = _guard_xfg_dispatch_icall_nop(param_5,0,0x90);
    *(undefined8 *)(param_5 + 0x44) = uVar8;
    *(undefined8 *)(param_5 + 0x50) = local_38[0];
    *(undefined4 *)(param_5 + 0x58) = uVar2;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[0xe] = 0x80;
    param_5[0xf] = 0x3f;
    *(undefined4 *)(param_5 + 0x4c) = uVar1;
    return (ulonglong)pvVar7 & 0xffffffffffffff00;
  }
  uVar3 = *(uint *)(param_1 + 0x31);
  uVar4 = uVar3 | 0xc;
  if (DAT_146af03d0 != 0) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 0x31) = uVar4;
  uVar8 = FUN_14247f500();
  FUN_14247ea90(uVar8);
  bVar5 = (**(code **)(*param_1 + 0x488))(param_1,param_2,param_3,param_4,param_5,param_6);
  *(uint *)(param_1 + 0x31) = uVar3;
  if (((*param_5 & 2) != 0) && (param_1[0x2f] != 0)) {
    (**(code **)(*param_1 + 0x490))(param_1,local_38,param_5);
    cVar6 = (**(code **)(*param_1 + 0x498))(param_1,local_38,param_5,param_3);
    if (cVar6 != '\0') {
      uVar8 = FUN_14247f500();
      FUN_14247ea90(uVar8);
      bVar5 = (**(code **)(*param_1 + 0x488))(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return (ulonglong)bVar5;
}



// FUNCTION 142375780 FUN_142375780 body=66 status=ok
// SIG undefined FUN_142375780(void)

void FUN_142375780(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x178))(*(longlong **)(lVar1 + 0x1b8),param_1);
  FUN_142361180(param_1);
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 1423757d0 FUN_1423757d0 body=43 status=ok
// SIG undefined FUN_1423757d0(void)

void FUN_1423757d0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14233fea0();
  (**(code **)(*plVar1 + 0x140))(plVar1,param_1);
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 142375800 FUN_142375800 body=65 status=ok
// SIG undefined FUN_142375800(void)

void FUN_142375800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x710) = 0x3f8000003f800000;
    *(undefined4 *)(lVar1 + 0x718) = 0x3f800000;
  }
  UActorComponent::SendRenderDynamicData_Concurrent();
  return;
}



// FUNCTION 142375850 FUN_142375850 body=71 status=ok
// SIG undefined FUN_142375850(void)

void FUN_142375850(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FUN_14237c120(*(longlong *)(param_1 + 0x3a8),*(undefined4 *)(param_1 + 0x440));
  }
  plVar1 = (longlong *)FUN_14233fea0(param_1);
  (**(code **)(*plVar1 + 0x140))(plVar1,param_1);
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 1423758a0 FUN_1423758a0 body=120 status=ok
// SIG undefined FUN_1423758a0(void)

void FUN_1423758a0(longlong param_1,longlong *param_2)

{
  FUN_14234e7d0();
  if (((ulonglong)param_2[6] >> 0x16 & 1) == 0) {
    if (((ulonglong)param_2[6] >> 0xc & 1) == 0) {
      return;
    }
    if (((*(byte *)(param_2 + 5) & 1) == 0) && (DAT_1468c2177 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001423758f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x2e0,8);
      return;
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x2e0);
  return;
}



// FUNCTION 142375920 FUN_142375920 body=81 status=ok
// SIG undefined FUN_142375920(void)

void FUN_142375920(longlong param_1,longlong param_2)

{
  FUN_142396660();
  if (*(int *)(param_2 + 0x40) < 0x1e3) {
    *(undefined8 *)(param_1 + 0x70c) = 0x3f8000003f800000;
    *(undefined4 *)(param_1 + 0x714) = 0x3f800000;
  }
  return;
}



// FUNCTION 142375980 FUN_142375980 body=156 status=ok
// SIG undefined FUN_142375980(void)

void FUN_142375980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142375a90();
  if ((*(int *)(param_2 + 0x40) < 0x10a) && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar3 = AAfrPlayerState::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if (*(char *)(param_1 + 0x24e) == '\x02') {
        *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x448);
        return;
      }
      if (*(char *)(param_1 + 0x24e) == '\x01') {
        *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x448);
      }
    }
  }
  return;
}



// FUNCTION 142375a20 FUN_142375a20 body=104 status=ok
// SIG undefined FUN_142375a20(void)

void FUN_142375a20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_142396660();
  FArchive::UsingCustomVersion(param_2,&DAT_146532750);
  iVar1 = FArchive::CustomVer(param_2,&DAT_146532750);
  if ((iVar1 < 1) && (*DAT_146af4c08 == 1)) {
    *(undefined8 *)(param_1 + 0x728) = *(undefined8 *)(param_1 + 0x740);
    *(undefined8 *)(param_1 + 0x740) = 0;
  }
  return;
}



// FUNCTION 142375a90 FUN_142375a90 body=493 status=ok
// SIG undefined FUN_142375a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142375a90(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  BOOL BVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 *local_28;
  
  FUN_14234e7d0();
  if (*(int *)(param_2 + 0x40) < 0x154) {
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2e0);
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  puVar10 = (undefined4 *)0x0;
  if (((0x179 < *(int *)(param_2 + 0x40)) && ((*(byte *)(param_2 + 0x28) & 1) != 0)) &&
     (iVar7 = FArchive::CustomVer(param_2,&DAT_1464b00e8), iVar7 < 9)) {
    puVar9 = (undefined4 *)operator_new(0x70);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0xffffffff;
      uVar3 = _DAT_1464aa7d8;
      *(undefined8 *)(puVar9 + 4) = _DAT_1464aa7d0;
      *(undefined8 *)(puVar9 + 6) = uVar3;
      uVar3 = _DAT_1464aa7e8;
      *(undefined8 *)(puVar9 + 8) = _DAT_1464aa7e0;
      *(undefined8 *)(puVar9 + 10) = uVar3;
      uVar6 = uRam00000001464aa7fc;
      uVar5 = DAT_1464aa7f8;
      uVar4 = DAT_1464aa7f4;
      puVar9[0xc] = DAT_1464aa7f0;
      puVar9[0xd] = uVar4;
      puVar9[0xe] = uVar5;
      puVar9[0xf] = uVar6;
      uVar3 = uRam00000001464aa808;
      *(undefined8 *)(puVar9 + 0x10) = _DAT_1464aa800;
      *(undefined8 *)(puVar9 + 0x12) = uVar3;
      *(undefined8 *)(puVar9 + 0x14) = 0;
      *(undefined8 *)(puVar9 + 0x16) = 0;
      *(undefined8 *)(puVar9 + 0x18) = 0;
      puVar10 = puVar9;
    }
    FUN_142565f10(param_2,puVar10 + 4);
    *puVar10 = *(undefined4 *)(param_1 + 0x308);
    puVar1 = *(undefined **)(param_1 + 0x2d0);
    puVar2 = *(undefined **)(param_1 + 0x2d8);
    local_38 = puVar1;
    uStack_30 = puVar2;
    local_28 = puVar10;
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
    }
    _DAT_146533678 = local_28;
    _DAT_146533660 = param_1;
    _DAT_146533668 = puVar1;
    _DAT_146533670 = puVar2;
    if (((uStack_30._4_4_ == 0 && (int)puVar2 == 0) && local_38._4_4_ == 0) && (int)puVar1 == 0) {
      FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::RemoveAnnotation
                (&PTR_PTR_1465335e0,param_1);
    }
    else {
      if (DAT_1465335f0 == DAT_14653361c) {
        FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1465335e0);
      }
      local_38 = &DAT_146533660;
      uStack_30 = &DAT_146533668;
      FUN_14235b9e0(&DAT_1465335e8,local_res8,&local_38,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
  }
  if (*(float *)(param_1 + 0x310) == 1.0) {
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  return;
}



// FUNCTION 142375c80 FUN_142375c80 body=53 status=ok
// SIG undefined FUN_142375c80(void)

void FUN_142375c80(longlong param_1,longlong param_2)

{
  FUN_14234e7d0();
  if (*(int *)(param_2 + 0x40) < 0x154) {
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2e0);
  }
  return;
}



// FUNCTION 142375cc0 FUN_142375cc0 body=53 status=ok
// SIG undefined FUN_142375cc0(void)

void FUN_142375cc0(longlong param_1,longlong param_2)

{
  FUN_142375a90();
  if (*(int *)(param_2 + 0x40) < 0x154) {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x43c);
  }
  return;
}



// FUNCTION 142375d00 FUN_142375d00 body=792 status=ok
// SIG undefined FUN_142375d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142375d00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *_Src;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_res8 [2];
  undefined8 *local_38;
  undefined8 local_30;
  
  FUN_142396660();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x6f8);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0x14a)) {
    plVar2 = (longlong *)param_2[1];
    if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(undefined4 *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
  }
  FUN_14235f670(param_2);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (0 < *(int *)(param_1 + 0x728))) {
    iVar9 = 0;
    iVar11 = 0;
    _Src = (undefined8 *)0x0;
    iVar10 = 0;
    local_38 = (undefined8 *)0x0;
    lVar13 = 0;
    local_30 = (undefined8 *)((ulonglong)local_30 & 0xffffffff);
    do {
      lVar3 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x720));
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        lVar14 = (longlong)iVar11;
        iVar12 = iVar11 + 1;
        local_30 = (undefined8 *)CONCAT44(local_30._4_4_,iVar12);
        if (iVar9 < iVar12) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_38,iVar11);
          _Src = local_38;
          iVar9 = local_30._4_4_;
          iVar12 = (int)local_30;
        }
        iVar11 = iVar12;
        uVar5 = *(undefined4 *)(lVar3 + 0x34);
        uVar6 = *(undefined4 *)(lVar3 + 0x38);
        uVar7 = *(undefined4 *)(lVar3 + 0x3c);
        puVar1 = _Src + lVar14 * 3;
        *(undefined4 *)puVar1 = *(undefined4 *)(lVar3 + 0x30);
        *(undefined4 *)((longlong)puVar1 + 4) = uVar5;
        *(undefined4 *)(puVar1 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar1 + 0xc) = uVar7;
        _Src[lVar14 * 3 + 2] = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = 0;
      }
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar10 < *(int *)(param_1 + 0x728));
    if (0 < iVar11) {
      local_38 = (undefined8 *)0x0;
      local_30 = (undefined8 *)CONCAT44(local_30._4_4_,iVar11);
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_38,iVar11,0);
      puVar1 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar11 * 0x18);
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
      if (BVar8 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
      }
      iVar9 = (int)local_30;
      lVar13 = (longlong)(int)local_30;
      _DAT_146533530 = (int)local_30;
      DAT_146533520 = param_1;
      if (((int)local_30 == 0) && (DAT_146533534 == 0)) {
        DAT_146533534 = (int)local_30;
        FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
                  (&PTR_PTR_1465334a0,param_1);
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy
                  (&DAT_146533528,(ulonglong)local_30 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(DAT_146533528,puVar1,lVar13 * 0x18);
        if (iVar9 == 0) {
          FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
                    (&PTR_PTR_1465334a0,param_1);
        }
        else {
          if (DAT_1465334b0 == DAT_1465334dc) {
            FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1465334a0);
          }
          local_30 = &DAT_146533528;
          local_38 = &DAT_146533520;
          FUN_141ef2320(&DAT_1465334a8,local_res8,&local_38,0);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
      if (puVar1 != (undefined8 *)0x0) {
        FMemory::Free(puVar1);
      }
    }
    if (_Src != (undefined8 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x700,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x700,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x700) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14091a320(param_2,param_1 + 0x710);
  return;
}



// FUNCTION 142376020 FUN_142376020 body=130 status=ok
// SIG undefined FUN_142376020(void)

void FUN_142376020(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x178);
  FUN_14234e7d0();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    return;
  }
  *(longlong *)(param_1 + 0x178) = lVar3;
  if (lVar3 != 0) {
    lVar2 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14237608b;
  }
  lVar3 = 0;
LAB_14237608b:
  *(longlong *)(param_1 + 0x180) = lVar3;
  return;
}



// FUNCTION 1423760b0 FUN_1423760b0 body=164 status=ok
// SIG undefined FUN_1423760b0(void)

void FUN_1423760b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  lVar4 = *(longlong *)(param_1 + 0x178);
  FUN_14234e7d0();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    return;
  }
  *(longlong *)(param_1 + 0x178) = lVar4;
  if (lVar4 != 0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142376129;
  }
  lVar4 = 0;
LAB_142376129:
  *(longlong *)(param_1 + 0x180) = lVar4;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x208) = uVar1;
  }
  return;
}



// FUNCTION 142376160 FUN_142376160 body=193 status=ok
// SIG undefined FUN_142376160(void)

void FUN_142376160(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  FUN_142375a90();
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 < 0x154) {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x43c);
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 < 0x154) {
      *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) & 0xfffffffe;
      *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) | *(uint *)(param_1 + 0x34c) >> 1 & 1;
      return;
    }
  }
  if (((iVar1 < 0x203) && (0.0001 < *(float *)(param_1 + 0x460))) &&
     (*(longlong *)(param_1 + 0x370) == 0)) {
    local_10 = 0;
    local_28 = 0xc2b40000;
    local_20 = 0;
    FUN_1423809e0(param_1,&local_28,0,0,0);
  }
  return;
}



// FUNCTION 142376230 FUN_142376230 body=97 status=ok
// SIG undefined FUN_142376230(void)

void FUN_142376230(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     ((*(uint *)(param_1 + 0x34c) >> 4 & 1) != (uint)param_2)) {
    *(uint *)(param_1 + 0x34c) = (uint)param_2 << 4 | *(uint *)(param_1 + 0x34c) & 0xffffffef;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423762a0 FUN_1423762a0 body=97 status=ok
// SIG undefined FUN_1423762a0(void)

void FUN_1423762a0(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     ((*(uint *)(param_1 + 0x2ec) >> 4 & 1) != (uint)param_2)) {
    *(uint *)(param_1 + 0x2ec) = (uint)param_2 << 4 | *(uint *)(param_1 + 0x2ec) & 0xffffffef;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142376310 FUN_142376310 body=119 status=ok
// SIG undefined FUN_142376310(void)

void FUN_142376310(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (1 < *(byte *)(param_1 + 0x24e))) && (param_2 != *(float *)(param_1 + 0x440))) {
    *(float *)(param_1 + 0x440) = param_2;
    if ((*(byte *)(param_1 + 0x2ec) & 2) != 0) {
      FUN_1423424e0(param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      FUN_14237c120(*(longlong *)(param_1 + 0x3a8),param_2);
    }
  }
  return;
}



// FUNCTION 142376390 FUN_142376390 body=79 status=ok
// SIG undefined FUN_142376390(void)

void FUN_142376390(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x38c))) {
    *(float *)(param_1 + 0x38c) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423763e0 FUN_1423763e0 body=79 status=ok
// SIG undefined FUN_1423763e0(void)

void FUN_1423763e0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x390))) {
    *(float *)(param_1 + 0x390) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142376430 FUN_142376430 body=74 status=ok
// SIG undefined FUN_142376430(void)

void FUN_142376430(longlong param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (*(int *)(param_1 + 0x394) != param_2)) {
    *(int *)(param_1 + 0x394) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142376480 SetBoneLocationByName body=145 status=ok
// SIG undefined SetBoneLocationByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPoseableMeshComponent::SetBoneLocationByName
               (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [12],undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_1423694f0(param_1,local_48,param_2);
  local_38._12_4_ = 0;
  local_38._0_12_ = *param_3;
  FUN_142376640(param_1,param_2,local_48,param_4);
  return;
}



// FUNCTION 142376520 SetBoneRotationByName body=121 status=ok
// SIG undefined SetBoneRotationByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPoseableMeshComponent::SetBoneRotationByName
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_1423694f0(param_1,&local_58,param_2);
  puVar1 = (undefined4 *)FRotator::Quaternion(param_3,local_68);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_142376640(param_1,param_2,&local_58,param_4);
  return;
}



// FUNCTION 1423765a0 SetBoneScaleByName body=145 status=ok
// SIG undefined SetBoneScaleByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPoseableMeshComponent::SetBoneScaleByName
               (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [12],undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_1423694f0(param_1,local_48,param_2);
  local_28._12_4_ = 0;
  local_28._0_12_ = *param_3;
  FUN_142376640(param_1,param_2,local_48,param_4);
  return;
}



// FUNCTION 142376640 FUN_142376640 body=434 status=ok
// SIG undefined FUN_142376640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142376640(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98 [6];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((((param_1[0xe3] != 0) && (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14e), cVar6 != '\0'))
      && (param_1[0x151] != 0)) && (0 < (int)param_1[0x149])) {
    iVar7 = FUN_1423ac950(param_1,param_2);
    if ((-1 < iVar7) && (iVar7 < (int)param_1[0x147])) {
      uVar8 = param_3[1];
      lVar2 = param_1[0x146];
      lVar9 = (longlong)iVar7 * 0x30;
      *(undefined8 *)(lVar9 + lVar2) = *param_3;
      ((undefined8 *)(lVar9 + lVar2))[1] = uVar8;
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar4 = *(undefined4 *)(param_3 + 3);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar1 = (undefined4 *)(lVar9 + 0x10 + lVar2);
      *puVar1 = *(undefined4 *)(param_3 + 2);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar4 = *(undefined4 *)(param_3 + 5);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar1 = (undefined4 *)(lVar9 + 0x20 + lVar2);
      *puVar1 = *(undefined4 *)(param_3 + 4);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      if (param_4 == 0) {
        FTransform::SetToRelativeTransform(param_1[0x146] + lVar9,param_1 + 0x42);
      }
      iVar7 = FBoneContainer::GetParentBoneIndex(param_1 + 0x148,iVar7);
      if (-1 < iVar7) {
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[4] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        FA2CSPose::AllocateLocalPoses(local_98,param_1 + 0x148,param_1 + 0x146);
        lVar2 = param_1[0x146];
        uVar8 = FA2CSPose::GetComponentSpaceTransform(local_98,local_68,iVar7);
        FTransform::SetToRelativeTransform(lVar9 + lVar2,uVar8);
        if (local_98[3] != 0) {
          FMemory::Free();
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
      (**(code **)(*param_1 + 0x960))(param_1,0);
    }
  }
  return;
}



// FUNCTION 142376800 FUN_142376800 body=23 status=ok
// SIG undefined FUN_142376800(void)

void FUN_142376800(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x458)) {
    *(float *)(param_1 + 0x458) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376820 FUN_142376820 body=23 status=ok
// SIG undefined FUN_142376820(void)

void FUN_142376820(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x45c)) {
    *(float *)(param_1 + 0x45c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376840 FUN_142376840 body=96 status=ok
// SIG undefined FUN_142376840(void)

void FUN_142376840(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if (((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
     (*(char *)(param_1 + 0x24e) != '\0')) {
    if ((*(uint *)(param_1 + 0x2ec) >> 1 & 1) != (uint)param_2) {
      *(uint *)(param_1 + 0x2ec) =
           (uint)param_2 + (uint)param_2 | *(uint *)(param_1 + 0x2ec) & 0xfffffffd;
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 1423768a0 FUN_1423768a0 body=97 status=ok
// SIG undefined FUN_1423768a0(void)

void FUN_1423768a0(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     ((*(uint *)(param_1 + 0x2ec) >> 6 & 1) != (uint)param_2)) {
    *(uint *)(param_1 + 0x2ec) = (uint)param_2 << 6 | *(uint *)(param_1 + 0x2ec) & 0xffffffbf;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142376910 FUN_142376910 body=803 status=ok
// SIG undefined FUN_142376910(void)

void FUN_142376910(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong local_res8;
  longlong local_res10;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  param_1[0x5a] = param_2;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      local_res8 = 0;
      param_1[0x5d] = 0;
      FUN_142367710(param_1);
      FUN_142366800(param_1);
      return;
    }
  }
  else {
    lVar9 = 0;
    lVar7 = lVar9;
    if (param_1[0x5a] != 0) {
      lVar3 = FUN_1428dfc70();
      for (lVar1 = param_1[0x5a];
          (lVar7 = lVar9, lVar1 != 0 && (lVar7 = param_1[0x5a], lVar1 != lVar3));
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
      }
    }
    lVar1 = param_1[0x5c];
    if (lVar7 == 0) {
      if (lVar1 != 0) {
        (**(code **)(*param_1 + 0x70))(param_1,1);
        lVar7 = *(longlong *)param_1[0x5c];
        uVar5 = GetTransientPackage();
        (**(code **)(lVar7 + 0x138))(param_1[0x5c],0,uVar5,0x10);
        param_1[0x5c] = 0;
      }
    }
    else {
      if (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x10);
        lVar7 = lVar9;
        if (param_1[0x5a] != 0) {
          lVar4 = FUN_1428dfc70();
          for (lVar3 = param_1[0x5a];
              (lVar7 = lVar9, lVar3 != 0 && (lVar7 = param_1[0x5a], lVar3 != lVar4));
              lVar3 = *(longlong *)(lVar3 + 0x30)) {
          }
        }
        if (lVar1 == lVar7) {
          return;
        }
      }
      (**(code **)(*param_1 + 0x70))(param_1,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
      local_res8 = 0;
      lVar7 = lVar9;
      if (param_1[0x5a] != 0) {
        lVar3 = FUN_1428dfc70();
        for (lVar1 = param_1[0x5a];
            (lVar7 = lVar9, lVar1 != 0 && (lVar7 = param_1[0x5a], lVar1 != lVar3));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      uVar5 = GetTransientPackage();
      lVar1 = local_res8;
      local_res10 = 0;
      if (local_res8 == 0) {
        FUN_1417846f0(uVar5,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      plVar6 = (longlong *)FUN_1417985e0(lVar7,uVar5,lVar1,0x29,0,0,0,0,0);
      if (param_1[0x5c] != 0) {
        local_res8 = 0x101000100010100;
        FUN_142869970(param_1[0x5c],plVar6,0x101000100010100);
        lVar7 = *(longlong *)param_1[0x5c];
        uVar5 = GetTransientPackage();
        (**(code **)(lVar7 + 0x138))(param_1[0x5c],0,uVar5,0x10);
      }
      param_1[0x5c] = (longlong)plVar6;
      (**(code **)(*plVar6 + 0x70))(plVar6,1);
      lVar7 = lVar9;
      if (param_1[0x5a] != 0) {
        lVar3 = FUN_1428dfc70();
        for (lVar1 = param_1[0x5a];
            (lVar7 = lVar9, lVar1 != 0 && (lVar7 = param_1[0x5a], lVar1 != lVar3));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      local_res8 = *(longlong *)(lVar7 + 0x18);
      FName::ToString(&local_res8,&local_48);
      local_res10 = param_1[3];
      puVar8 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar8 = local_48;
      }
      FName::ToString(&local_res10,&local_58);
      puVar10 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar10 = local_58;
      }
      FString::PrintfImpl(&local_38,L"%s_%s_CAT",puVar10,puVar8);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar8 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar8 = local_38;
      }
      (**(code **)(*(longlong *)param_1[0x5c] + 0x138))
                ((longlong *)param_1[0x5c],puVar8,param_1,0x15);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142376c40 setClutchData body=11 status=ok
// SIG undefined setClutchData(void)

void physx::PxVehicleDriveSimData::setClutchData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  return;
}



// FUNCTION 142376c50 SetDirectionalInscatteringColor body=71 status=ok
// SIG undefined SetDirectionalInscatteringColor(void)

void UExponentialHeightFogComponent::SetDirectionalInscatteringColor
               (longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*param_2 == *(float *)(param_1 + 0x31c)) && (param_2[1] == *(float *)(param_1 + 800))) &&
      (param_2[2] == *(float *)(param_1 + 0x324))) && (param_2[3] == *(float *)(param_1 + 0x328))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x31c) = *param_2;
  *(float *)(param_1 + 800) = fVar1;
  *(float *)(param_1 + 0x324) = fVar2;
  *(float *)(param_1 + 0x328) = fVar3;
  FUN_1423424e0();
  return;
}



// FUNCTION 142376ca0 FUN_142376ca0 body=23 status=ok
// SIG undefined FUN_142376ca0(void)

void FUN_142376ca0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x314)) {
    *(float *)(param_1 + 0x314) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376cc0 SetDistanceOffset body=23 status=ok
// SIG undefined SetDistanceOffset(void)

void UAtmosphericFogComponent::SetDistanceOffset(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x318)) {
    *(float *)(param_1 + 0x318) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376ce0 SetDynamicShadowCascades body=20 status=ok
// SIG undefined SetDynamicShadowCascades(void)

void UDirectionalLightComponent::SetDynamicShadowCascades(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x454) != param_2) {
    *(int *)(param_1 + 0x454) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376d00 SetCascadeTransitionFraction body=23 status=ok
// SIG undefined SetCascadeTransitionFraction(void)

void UDirectionalLightComponent::SetCascadeTransitionFraction(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x44c)) {
    *(float *)(param_1 + 0x44c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376d20 SetShadowDistanceFadeoutFraction body=23 status=ok
// SIG undefined SetShadowDistanceFadeoutFraction(void)

void UDirectionalLightComponent::SetShadowDistanceFadeoutFraction(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x450)) {
    *(float *)(param_1 + 0x450) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376d40 FUN_142376d40 body=120 status=ok
// SIG undefined FUN_142376d40(void)

void FUN_142376d40(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x6f0);
  if (puVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 0x6f8) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6fc) == 0)) {
      *(undefined4 *)(param_1 + 0x6fc) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x28);
    }
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142376dc0 FUN_142376dc0 body=91 status=ok
// SIG undefined FUN_142376dc0(void)

void FUN_142376dc0(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if (((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
     (*(char *)(param_1 + 0x24e) != '\0')) {
    if ((*(uint *)(param_1 + 0x388) & 1) != (uint)param_2) {
      *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xfffffffe | (uint)param_2;
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 142376e20 FUN_142376e20 body=91 status=ok
// SIG undefined FUN_142376e20(void)

void FUN_142376e20(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if (((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
     (*(char *)(param_1 + 0x24e) != '\0')) {
    if ((*(uint *)(param_1 + 0x430) & 1) != (uint)param_2) {
      *(uint *)(param_1 + 0x430) = *(uint *)(param_1 + 0x430) & 0xfffffffe | (uint)param_2;
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 142376e80 FUN_142376e80 body=98 status=ok
// SIG undefined FUN_142376e80(void)

void FUN_142376e80(longlong param_1,float param_2,float param_3,byte param_4)

{
  float fVar1;
  
  fVar1 = *DAT_146af0430;
  if (fVar1 <= 1e-08) {
    fVar1 = 0.0;
  }
  *(byte *)(param_1 + 0x708) = *(byte *)(param_1 + 0x708) & 0xfe;
  *(byte *)(param_1 + 0x708) = *(byte *)(param_1 + 0x708) | param_4;
  param_2 = fVar1 * param_2;
  *(float *)(param_1 + 0x704) = fVar1 * param_3;
  *(float *)(param_1 + 0x700) = param_2;
  FUN_142377330(param_2,fVar1 * param_3 + param_2);
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142376ef0 FUN_142376ef0 body=13 status=ok
// SIG undefined FUN_142376ef0(void)

void FUN_142376ef0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6fc) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 142376f00 FUN_142376f00 body=23 status=ok
// SIG undefined FUN_142376f00(void)

void FUN_142376f00(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x338)) {
    *(float *)(param_1 + 0x338) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376f20 SetFogHeightFalloff body=23 status=ok
// SIG undefined SetFogHeightFalloff(void)

void UExponentialHeightFogComponent::SetFogHeightFalloff(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x32c)) {
    *(float *)(param_1 + 0x32c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376f40 SetVolumetricFogEmissive body=71 status=ok
// SIG undefined SetVolumetricFogEmissive(void)

void UExponentialHeightFogComponent::SetVolumetricFogEmissive(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*param_2 == *(float *)(param_1 + 0x2dc)) && (param_2[1] == *(float *)(param_1 + 0x2e0))) &&
      (param_2[2] == *(float *)(param_1 + 0x2e4))) && (param_2[3] == *(float *)(param_1 + 0x2e8))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x2dc) = *param_2;
  *(float *)(param_1 + 0x2e0) = fVar1;
  *(float *)(param_1 + 0x2e4) = fVar2;
  *(float *)(param_1 + 0x2e8) = fVar3;
  FUN_1423424e0();
  return;
}



// FUNCTION 142376f90 SetFogMaxOpacity body=23 status=ok
// SIG undefined SetFogMaxOpacity(void)

void UExponentialHeightFogComponent::SetFogMaxOpacity(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x330)) {
    *(float *)(param_1 + 0x330) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142376fb0 FUN_142376fb0 body=97 status=ok
// SIG undefined FUN_142376fb0(void)

void FUN_142376fb0(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     ((*(uint *)(param_1 + 0x34c) >> 5 & 1) != (uint)param_2)) {
    *(uint *)(param_1 + 0x34c) = (uint)param_2 << 5 | *(uint *)(param_1 + 0x34c) & 0xffffffdf;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142377020 FUN_142377020 body=144 status=ok
// SIG undefined FUN_142377020(void)

void FUN_142377020(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x2a0))();
  bVar1 = *(byte *)(param_1 + 0x5b);
  *(byte *)(param_1 + 0x5b) = bVar1 & 0xfe;
  (**(code **)(*param_1 + 0x550))(param_1);
  param_1[0x5a] = param_2;
  *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) ^ (*(byte *)(param_1 + 0x5b) ^ bVar1) & 1;
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x548))(param_1,0);
  }
  return;
}



// FUNCTION 1423770b0 SetDensityOffset body=23 status=ok
// SIG undefined SetDensityOffset(void)

void UAtmosphericFogComponent::SetDensityOffset(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x30c)) {
    *(float *)(param_1 + 0x30c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423770d0 FUN_1423770d0 body=77 status=ok
// SIG undefined FUN_1423770d0(void)

void FUN_1423770d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (*(longlong *)(param_1 + 0x370) != param_2)) {
    *(longlong *)(param_1 + 0x370) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142377120 FUN_142377120 body=130 status=ok
// SIG undefined FUN_142377120(void)

void FUN_142377120(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2f0))) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    *(float *)(param_1 + 0x2f0) = param_2;
    if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    if (*(longlong *)(lVar2 + 0x1b8) != 0) {
      plVar3 = (longlong *)FUN_14233fea0(param_1);
      (**(code **)(*plVar3 + 0x148))(plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 1423771b0 FUN_1423771b0 body=150 status=ok
// SIG undefined FUN_1423771b0(void)

void FUN_1423771b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar4 = DAT_1468b5d98;
  if ((DAT_1468b5d98 <= fVar1) && (fVar4 = DAT_1464aa790, fVar1 <= DAT_1464aa790)) {
    fVar4 = fVar1;
  }
  fVar1 = param_2[1];
  fVar3 = DAT_1468b5d94;
  if ((DAT_1468b5d94 <= fVar1) && (fVar3 = DAT_1464aa788._4_4_, fVar1 <= DAT_1464aa788._4_4_)) {
    fVar3 = fVar1;
  }
  fVar1 = *param_2;
  fVar2 = DAT_1468b5d90;
  if ((DAT_1468b5d90 <= fVar1) && (fVar2 = (float)DAT_1464aa788, fVar1 <= (float)DAT_1464aa788)) {
    fVar2 = fVar1;
  }
  *(ulonglong *)(param_1 + 0x2d0) = CONCAT44(fVar3,fVar2);
  *(float *)(param_1 + 0x2d8) = fVar4;
  FUN_1423424e0();
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x2e8,param_1);
  return;
}



// FUNCTION 142377250 FUN_142377250 body=22 status=ok
// SIG undefined FUN_142377250(void)

void FUN_142377250(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2f0) != param_2) {
    *(longlong *)(param_1 + 0x2f0) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142377270 FUN_142377270 body=71 status=ok
// SIG undefined FUN_142377270(void)

void FUN_142377270(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*param_2 == *(float *)(param_1 + 0x2fc)) && (param_2[1] == *(float *)(param_1 + 0x300))) &&
      (param_2[2] == *(float *)(param_1 + 0x304))) && (param_2[3] == *(float *)(param_1 + 0x308))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x2fc) = *param_2;
  *(float *)(param_1 + 0x300) = fVar1;
  *(float *)(param_1 + 0x304) = fVar2;
  *(float *)(param_1 + 0x308) = fVar3;
  FUN_1423424e0();
  return;
}



// FUNCTION 1423772c0 FUN_1423772c0 body=86 status=ok
// SIG undefined FUN_1423772c0(void)

void FUN_1423772c0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2e4))) {
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0x2e4) = param_2;
    FUN_14237b430(param_1);
  }
  return;
}



// FUNCTION 142377320 SetOrthoWidth body=9 status=ok
// SIG undefined SetOrthoWidth(void)

void APlayerCameraManager::SetOrthoWidth(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2dc) = param_2;
  return;
}



// FUNCTION 142377330 FUN_142377330 body=529 status=ok
// SIG undefined FUN_142377330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142377330(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (param_2 <= 0.0) {
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x718);
    *(undefined8 *)(param_1 + 0x718) = 0;
  }
  else {
    uStack_b0 = 0;
    local_b8 = &LAB_14074f814;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_ac;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x718,&local_a8,param_2);
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142377550 FUN_142377550 body=140 status=ok
// SIG undefined FUN_142377550(void)

void FUN_142377550(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int local_res20 [2];
  
  FLinearColor::ToFColor(param_2,local_res20);
  cVar1 = FUN_142341170(param_1);
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (*(int *)(param_1 + 0x2e8) != local_res20[0])) {
    *(int *)(param_1 + 0x2e8) = local_res20[0];
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    lVar2 = FUN_14233fea0(param_1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_14233fea0(param_1);
      (**(code **)(*plVar3 + 0x148))(plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 1423775e0 FUN_1423775e0 body=79 status=ok
// SIG undefined FUN_1423775e0(void)

void FUN_1423775e0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x454))) {
    *(float *)(param_1 + 0x454) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142377630 FUN_142377630 body=79 status=ok
// SIG undefined FUN_142377630(void)

void FUN_142377630(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 900))) {
    *(float *)(param_1 + 900) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142377680 FUN_142377680 body=79 status=ok
// SIG undefined FUN_142377680(void)

void FUN_142377680(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x380))) {
    *(float *)(param_1 + 0x380) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423776d0 FUN_1423776d0 body=77 status=ok
// SIG undefined FUN_1423776d0(void)

void FUN_1423776d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(longlong *)(param_1 + 0x358))) {
    *(longlong *)(param_1 + 0x358) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142377720 FUN_142377720 body=123 status=ok
// SIG undefined FUN_142377720(void)

void FUN_142377720(longlong param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  
  cVar2 = FUN_142341170();
  if ((((cVar2 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     (((*(float *)(param_1 + 0x360) != *param_2 || (*(float *)(param_1 + 0x364) != param_2[1])) ||
      (*(float *)(param_1 + 0x368) != param_2[2])))) {
    fVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x368) = fVar1;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423777c0 FUN_1423777c0 body=135 status=ok
// SIG undefined FUN_1423777c0(void)

void FUN_1423777c0(longlong param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  
  cVar2 = FUN_142341170();
  if ((((cVar2 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     (((*param_2 != *(float *)(param_1 + 0x43c) || (param_2[1] != *(float *)(param_1 + 0x440))) ||
      (param_2[2] != *(float *)(param_1 + 0x444))))) {
    fVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x43c) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x444) = fVar1;
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      FUN_14237b740(*(longlong *)(param_1 + 0x3a8),param_1);
    }
  }
  return;
}



// FUNCTION 142377850 FUN_142377850 body=310 status=ok
// SIG undefined FUN_142377850(void)

void FUN_142377850(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(byte *)(param_1 + 0xe2) & 1) != 0) {
    TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(param_1 + 0xe0,0);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  lVar4 = FUN_142369ad0(param_1,param_2,1);
  if (lVar4 == 0) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
    return;
  }
  puVar6 = *(undefined4 **)(lVar4 + 0x10);
  puVar1 = puVar6 + *(int *)(lVar4 + 0x18);
  if (puVar6 == puVar1) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  else {
    do {
      uVar2 = *puVar6;
      lVar4 = (**(code **)(*param_1 + 0x560))(param_1,uVar2);
      if (lVar4 != 0) {
        lVar5 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar4 = (**(code **)(*param_1 + 0x598))(param_1,uVar2);
        }
        local_28 = *param_3;
        uStack_24 = param_3[1];
        uStack_20 = param_3[2];
        uStack_1c = param_3[3];
        FUN_1425a2be0(lVar4,param_2,&local_28);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  return;
}



// FUNCTION 142377a00 FUN_142377a00 body=287 status=ok
// SIG undefined FUN_142377a00(void)

void FUN_142377a00(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 < 0) {
    return;
  }
  lVar5 = (longlong)param_2;
  iVar1 = (int)param_1[0xdf];
  if (param_2 < iVar1) {
    if (*(longlong **)(param_1[0xde] + lVar5 * 8) == param_3) {
      return;
    }
    if (param_2 < iVar1) goto LAB_142377a51;
  }
  TArray<UMaterialInterface_*,FDefaultAllocator>::AddZeroed(param_1 + 0xde,(param_2 - iVar1) + 1);
LAB_142377a51:
  if (param_3 != (longlong *)0x0) {
    lVar4 = FUN_1429ba110();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (param_3[0x12] != *(longlong *)(param_1[0xde] + lVar5 * 8))) ||
       (*(longlong *)(param_1[0xde] + lVar5 * 8) == 0)) {
      *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) | 1;
    }
  }
  *(longlong **)(param_1[0xde] + lVar5 * 8) = param_3;
  FUN_1423424e0(param_1);
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x38))(param_3,param_1,1);
  }
  lVar5 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if ((lVar5 != 0) && (cVar3 = FBodyInstance::IsValidBodyInstance(lVar5), cVar3 != '\0')) {
    FBodyInstance::UpdatePhysicalMaterials(lVar5);
  }
  return;
}



// FUNCTION 142377b20 FUN_142377b20 body=58 status=ok
// SIG undefined FUN_142377b20(void)

void FUN_142377b20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x8f0))();
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x568))(param_1,iVar1,param_3);
  }
  return;
}



// FUNCTION 142377b60 FUN_142377b60 body=23 status=ok
// SIG undefined FUN_142377b60(void)

void FUN_142377b60(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x310)) {
    *(float *)(param_1 + 0x310) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142377b80 FUN_142377b80 body=79 status=ok
// SIG undefined FUN_142377b80(void)

void FUN_142377b80(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x434))) {
    *(float *)(param_1 + 0x434) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142377bd0 FUN_142377bd0 body=382 status=ok
// SIG undefined FUN_142377bd0(void)

void FUN_142377bd0(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                  float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xb0) = *param_2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = *param_3;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_3 + 1);
  fVar7 = param_4[2];
  fVar5 = param_5[2];
  *(ulonglong *)(param_1 + 0xcc) = CONCAT44(param_4[1] * param_5[1],*param_4 * *param_5);
  *(float *)(param_1 + 0xd4) = fVar7 * fVar5;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)param_5;
  fVar7 = *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 0xe0) = param_5[2];
  if (fVar7 <= 0.0) {
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    fVar7 = 1.0;
  }
  fVar5 = *(float *)(param_1 + 0xd0);
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
    fVar5 = 1.0;
  }
  fVar6 = *(float *)(param_1 + 0xd4);
  if (fVar6 <= 0.0) {
    *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
    fVar6 = 1.0;
  }
  fVar4 = *(float *)(param_1 + 0xd8);
  if (fVar4 <= 0.0) {
    *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
    fVar4 = 1.0;
  }
  fVar3 = *(float *)(param_1 + 0xdc);
  if (fVar3 <= 0.0) {
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    fVar3 = 1.0;
  }
  fVar2 = *(float *)(param_1 + 0xe0);
  if (fVar2 <= 0.0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    fVar2 = 1.0;
  }
  if (fVar4 <= fVar7) {
    *(float *)(param_1 + 0xcc) = fVar4 * 0.9999;
  }
  if (fVar3 <= fVar5) {
    *(float *)(param_1 + 0xd0) = fVar3 * 0.9999;
  }
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | 1;
  if (fVar2 <= fVar6) {
    *(float *)(param_1 + 0xd4) = fVar2 * 0.9999;
  }
  return;
}



// FUNCTION 142377d50 FUN_142377d50 body=67 status=ok
// SIG undefined FUN_142377d50(void)

void FUN_142377d50(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0x2dc) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar1;
  (**(code **)(*param_1 + 0x4b8))();
  FUN_1423424e0(param_1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x5d,param_1);
  return;
}



// FUNCTION 142377da0 FUN_142377da0 body=56 status=ok
// SIG undefined FUN_142377da0(void)

void FUN_142377da0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined1 *)(param_1 + 0x19c) = param_2;
  puVar1 = (undefined8 *)FUN_14236ea30(param_1,local_18,param_2);
  *(undefined8 *)(param_1 + 0x1a0) = *puVar1;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142377e00 FUN_142377e00 body=353 status=ok
// SIG undefined FUN_142377e00(void)

void FUN_142377e00(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  local_48 = param_3[1] * param_2[2] - param_3[2] * param_2[1];
  local_40 = *param_3 * param_2[1] - *param_2 * param_3[1];
  fStack_44 = *param_2 * param_3[2] - *param_3 * param_2[2];
  fVar1 = fStack_44 * fStack_44 + local_48 * local_48 + local_40 * local_40;
  if (fVar1 != 1.0) {
    if (fVar1 < 1e-08) {
      local_48 = DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
      fStack_44 = DAT_1468b5d94;
    }
    else {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar3._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      local_48 = local_48 * fVar2;
      fStack_44 = fStack_44 * fVar2;
      local_40 = local_40 * fVar2;
    }
  }
  *(ulonglong *)(param_1 + 0x1a0) = CONCAT44(fStack_44,local_48);
  *(float *)(param_1 + 0x1a8) = local_40;
  return;
}



// FUNCTION 142377f70 FUN_142377f70 body=331 status=ok
// SIG undefined FUN_142377f70(void)

void FUN_142377f70(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7;
  if (fVar4 == 1.0) {
    uVar3 = *(undefined8 *)param_2;
    fVar7 = param_2[2];
  }
  else if (1e-08 <= fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar7 = fVar7 * fVar5;
    uVar3 = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
  }
  else {
    uVar3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar7 = DAT_1468b5d98;
  }
  *(undefined8 *)(param_1 + 0x1a0) = uVar3;
  *(float *)(param_1 + 0x1a8) = fVar7;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



// FUNCTION 1423780e0 FUN_1423780e0 body=369 status=ok
// SIG undefined FUN_1423780e0(void)

void FUN_1423780e0(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  *(ulonglong *)param_2 = *(ulonglong *)param_2 & 0x7fffffff7fffffff;
  param_2[2] = ABS(param_2[2]);
  fVar1 = 1.0;
  fVar4 = *param_2;
  if (*param_2 < 1e-08) {
    *param_2 = 1.0;
    fVar4 = fVar1;
  }
  fVar3 = param_2[1];
  if (param_2[1] < 1e-08) {
    param_2[1] = 1.0;
    fVar3 = fVar1;
  }
  fVar2 = param_2[2];
  if (param_2[2] < 1e-08) {
    param_2[2] = 1.0;
    fVar2 = fVar1;
  }
  fVar2 = fVar2 * *(float *)((longlong)param_1 + 0x2e4);
  fVar4 = fVar4 * *(float *)((longlong)param_1 + 0x2dc);
  *(float *)(param_1 + 0x5c) = fVar3 * *(float *)(param_1 + 0x5c);
  *(float *)((longlong)param_1 + 0x2e4) = fVar2;
  *(float *)((longlong)param_1 + 0x2dc) = (float)-((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1);
  *(float *)(param_1 + 0x5c) =
       (float)-((int)ROUND(-0.5 - (*(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c))) >> 1);
  *(float *)((longlong)param_1 + 0x2e4) = (float)-((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  local_18 = DAT_1464aa788;
  local_10 = DAT_1464aa790;
  FUN_142398630(param_1,&local_18);
  (**(code **)(*param_1 + 0x4b8))(param_1);
  FUN_1423424e0(param_1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x5d,param_1);
  return;
}



// FUNCTION 142378260 FUN_142378260 body=313 status=ok
// SIG undefined FUN_142378260(void)

void FUN_142378260(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  if ((*(byte *)(param_1 + 0xe2) & 1) != 0) {
    TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(param_1 + 0xe0,0);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  puVar4 = (undefined8 *)FUN_142369ad0(param_1,param_2,1);
  if (puVar4 == (undefined8 *)0x0) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
    return;
  }
  puVar7 = (undefined4 *)*puVar4;
  puVar1 = puVar7 + *(int *)(puVar4 + 1);
  if (puVar7 == puVar1) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  else {
    do {
      uVar2 = *puVar7;
      lVar5 = (**(code **)(*param_1 + 0x560))(param_1,uVar2);
      if (lVar5 != 0) {
        lVar6 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar5 = (**(code **)(*param_1 + 0x598))(param_1,uVar2);
        }
        FUN_1425a2750(lVar5,param_2,param_3);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  return;
}



// FUNCTION 1423783a0 FUN_1423783a0 body=286 status=ok
// SIG undefined FUN_1423783a0(void)

void FUN_1423783a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  cVar1 = (**(code **)(*param_1 + 0xd8))();
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 5;
  if (cVar1 == '\0') {
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    puVar2 = puVar3 + 1;
    *(undefined8 **)(param_2 + 8) = puVar2;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    puVar2 = puVar3 + 1;
    *(undefined8 **)(param_2 + 8) = puVar2;
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
  }
  *puVar2 = 0;
  *puVar3 = &PTR_LAB_143f59430;
  return;
}



// FUNCTION 1423784c0 FUN_1423784c0 body=42 status=ok
// SIG undefined FUN_1423784c0(void)

void FUN_1423784c0(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x708) >> 1 & 1) != param_2) {
    *(byte *)(param_1 + 0x708) = *(byte *)(param_1 + 0x708) & 0xfd | param_2 * '\x02';
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423784f0 FUN_1423784f0 body=79 status=ok
// SIG undefined FUN_1423784f0(void)

void FUN_1423784f0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x340))) {
    *(float *)(param_1 + 0x340) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142378540 SetVolumetricFogExtinctionScale body=23 status=ok
// SIG undefined SetVolumetricFogExtinctionScale(void)

void UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x460)) {
    *(float *)(param_1 + 0x460) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142378560 FUN_142378560 body=79 status=ok
// SIG undefined FUN_142378560(void)

void FUN_142378560(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x45c))) {
    *(float *)(param_1 + 0x45c) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423785b0 FUN_1423785b0 body=11 status=ok
// SIG undefined FUN_1423785b0(void)

void FUN_1423785b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6f8) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 1423785c0 FUN_1423785c0 body=79 status=ok
// SIG undefined FUN_1423785c0(void)

void FUN_1423785c0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x460))) {
    *(float *)(param_1 + 0x460) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142378610 FUN_142378610 body=79 status=ok
// SIG undefined FUN_142378610(void)

void FUN_142378610(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x458))) {
    *(float *)(param_1 + 0x458) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142378660 SetStartDistance body=23 status=ok
// SIG undefined SetStartDistance(void)

void UExponentialHeightFogComponent::SetStartDistance(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x334)) {
    *(float *)(param_1 + 0x334) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142378680 FUN_142378680 body=133 status=ok
// SIG undefined FUN_142378680(void)

void FUN_142378680(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2f8))) {
    *(float *)(param_1 + 0x2f8) = param_2;
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    lVar2 = FUN_14233fea0(param_1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_14233fea0(param_1);
      (**(code **)(*plVar3 + 0x148))(plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 142378710 FUN_142378710 body=249 status=ok
// SIG undefined FUN_142378710(void)

void FUN_142378710(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x6a8))(param_1,&local_28,3);
  plVar1 = local_28 + (int)local_20;
  for (plVar5 = local_28; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    plVar2 = (longlong *)*plVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar2 + 0x2e8))(plVar2,0xbf800000,0);
        *(byte *)((longlong)plVar2 + 0xc4) = *(byte *)((longlong)plVar2 + 0xc4) & 0xf7;
        *(byte *)((longlong)plVar2 + 0xc4) = *(byte *)((longlong)plVar2 + 0xc4) | param_2 << 3;
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142378810 FUN_142378810 body=323 status=ok
// SIG undefined FUN_142378810(void)

void FUN_142378810(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  if ((*(byte *)(param_1 + 0xe2) & 1) != 0) {
    TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(param_1 + 0xe0,0);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  lVar4 = FUN_142369ad0(param_1,param_2,1);
  if (lVar4 == 0) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
    return;
  }
  puVar6 = *(undefined4 **)(lVar4 + 0x20);
  puVar1 = puVar6 + *(int *)(lVar4 + 0x28);
  if (puVar6 == puVar1) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
    return;
  }
  do {
    uVar2 = *puVar6;
    lVar4 = (**(code **)(*param_1 + 0x560))(param_1,uVar2);
    if (lVar4 != 0) {
      lVar5 = FUN_1429ba110();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        lVar4 = (**(code **)(*param_1 + 0x598))(param_1,uVar2);
      }
      FUN_1425a28b0(lVar4,param_2,param_3);
    }
    puVar6 = puVar6 + 1;
  } while (puVar6 != puVar1);
  *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  return;
}



// FUNCTION 142378960 FUN_142378960 body=124 status=ok
// SIG undefined FUN_142378960(void)

void FUN_142378960(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_48 [64];
  
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x80) = param_2[2];
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  puVar5 = (undefined8 *)FMatrix::InverseFast(param_2,local_48);
  uVar4 = puVar5[1];
  *(undefined8 *)(param_1 + 0x30) = *puVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = puVar5[3];
  *(undefined8 *)(param_1 + 0x40) = puVar5[2];
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  uVar4 = puVar5[5];
  *(undefined8 *)(param_1 + 0x50) = puVar5[4];
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  uVar4 = puVar5[7];
  *(undefined8 *)(param_1 + 0x60) = puVar5[6];
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  uVar4 = param_3[1];
  *(undefined8 *)(param_1 + 0xf0) = *param_3;
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  return;
}



// FUNCTION 1423789e0 FUN_1423789e0 body=97 status=ok
// SIG undefined FUN_1423789e0(void)

void FUN_1423789e0(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     ((*(uint *)(param_1 + 0x2ec) >> 5 & 1) != (uint)param_2)) {
    *(uint *)(param_1 + 0x2ec) = (uint)param_2 << 5 | *(uint *)(param_1 + 0x2ec) & 0xffffffdf;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142378a50 FUN_142378a50 body=1218 status=ok
// SIG undefined FUN_142378a50(void)

void FUN_142378a50(longlong *param_1,wchar_t *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  longlong local_res8;
  longlong *local_res10;
  int local_48;
  int local_44;
  longlong *local_40;
  
  pwVar9 = (wchar_t *)param_1[0x2f];
  pwVar18 = (wchar_t *)0x0;
  if ((pwVar9 != (wchar_t *)0x0) && (pwVar9 != param_2)) {
    FUN_142398900(pwVar9,0);
    iVar16 = *(int *)(param_1[0x2f] + 0xc);
    pwVar9 = pwVar18;
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar12 = iVar16 >> 0x1f & 0xffff;
      uVar5 = iVar16 + uVar12;
      pwVar9 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if (((byte)((uint)*(undefined4 *)(pwVar9 + 4) >> 0x1d) & 1) == 0) {
      FUN_1423979d0(param_1[0x2f],0,1);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UMovementComponent::PhysicsVolumeChanged",L"::");
      pwVar9 = pwVar18;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar9 = pwVar2;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      lVar3 = local_res8;
      lVar8 = param_1[0x2f];
      plVar19 = (longlong *)(lVar8 + 0x290);
      lVar10 = *plVar19;
      iVar16 = *(int *)(lVar8 + 0x298);
      for (lVar17 = lVar10; lVar17 != (longlong)iVar16 * 0x10 + lVar10; lVar17 = lVar17 + 0x10) {
        if ((*(longlong *)(lVar17 + 8) == lVar3) &&
           (plVar7 = (longlong *)FWeakObjectPtr::GetEvenIfUnreachable(lVar17), param_1 == plVar7)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar16 = (int)(lVar17 - lVar10 >> 4);
          if (iVar16 != -1) {
            iVar13 = *(int *)(lVar8 + 0x298);
            iVar11 = (iVar13 - iVar16) + -1;
            if (0 < iVar11) {
              iVar11 = 1;
            }
            if (iVar11 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar16 * 0x10 + *plVar19),
                         (void *)((longlong)(iVar13 - iVar11) * 0x10 + *plVar19),
                         (longlong)iVar11 << 4);
              iVar13 = *(int *)(lVar8 + 0x298);
            }
            *(int *)(lVar8 + 0x298) = iVar13 + -1;
          }
          break;
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
    }
    FTickFunction::RemovePrerequisite(param_1[0x2f] + 0x30,param_1,param_1 + 6);
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_142378c66:
    bVar1 = false;
  }
  else {
    iVar16 = *(int *)(param_2 + 6);
    pwVar9 = pwVar18;
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar12 = iVar16 >> 0x1f & 0xffff;
      uVar5 = iVar16 + uVar12;
      pwVar9 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if ((*(uint *)(pwVar9 + 4) >> 0x1d & 1) != 0) goto LAB_142378c66;
    bVar1 = true;
  }
  pwVar9 = pwVar18;
  if (bVar1) {
    pwVar9 = param_2;
  }
  param_1[0x2f] = (longlong)pwVar9;
  if (pwVar9 != (wchar_t *)0x0) {
    lVar8 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142378cbb;
  }
  pwVar9 = pwVar18;
LAB_142378cbb:
  lVar8 = param_1[0x2f];
  param_1[0x30] = (longlong)pwVar9;
  if (lVar8 != 0) {
    iVar16 = *(int *)(lVar8 + 0xc);
    pwVar9 = pwVar18;
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar12 = iVar16 >> 0x1f & 0xffff;
      uVar5 = iVar16 + uVar12;
      pwVar9 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if ((*(uint *)(pwVar9 + 4) >> 0x1d & 1) == 0) {
      FUN_142398900(lVar8,1);
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UMovementComponent::PhysicsVolumeChanged",L"::");
      while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar18 = pwVar6;
      }
      FName::FName(&local_res10,pwVar18 + 2,1);
      lVar8 = param_1[0x2f];
      plVar19 = (longlong *)(lVar8 + 0x290);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = (longlong *)0x0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      local_res8 = 0;
      if ((local_res10 != (longlong *)0x0) && (lVar10 = FWeakObjectPtr::Get(&local_48), lVar10 != 0)
         ) {
        UObject::FindFunction(lVar10,local_40);
      }
      piVar14 = (int *)*plVar19;
      iVar16 = *(int *)(lVar8 + 0x298);
      for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar16 * 4; piVar15 = piVar15 + 4) {
        if (((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (*(longlong **)(piVar15 + 2) == local_40)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_142378e7a;
          break;
        }
      }
      iVar16 = *(int *)(lVar8 + 0x298);
      *(int *)(lVar8 + 0x298) = iVar16 + 1;
      if (*(int *)(lVar8 + 0x29c) < iVar16 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar16);
      }
      piVar14 = (int *)((longlong)iVar16 * 0x10 + *plVar19);
      *piVar14 = local_48;
      piVar14[1] = local_44;
      *(longlong **)(piVar14 + 2) = local_40;
LAB_142378e7a:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
      if (((*(char *)((longlong)param_1 + 0x1bc) == '\0') &&
          (*(char *)((longlong)param_1 + 0x1bd) == '\0')) &&
         (cVar4 = FUN_142341170(param_1), cVar4 == '\0')) {
        (**(code **)(*(longlong *)param_1[0x2f] + 0x4c8))((longlong *)param_1[0x2f],1);
      }
      FTickFunction::AddPrerequisite(param_1[0x2f] + 0x30,param_1,param_1 + 6);
    }
  }
  (**(code **)(*param_1 + 0x460))(param_1);
  if ((*(byte *)(param_1 + 0x33) & 2) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142378f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x508))(param_1);
  return;
}



// FUNCTION 142378f20 FUN_142378f20 body=142 status=ok
// SIG undefined FUN_142378f20(void)

void FUN_142378f20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x118);
    if (lVar1 == 0) {
      return;
    }
    lVar3 = FUN_1429d7ab0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
  }
  FUN_142378a50(param_1,param_2);
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x118);
  }
  *(undefined8 *)(param_1 + 0x208) = uVar4;
  return;
}



// FUNCTION 142378fb0 FUN_142378fb0 body=91 status=ok
// SIG undefined FUN_142378fb0(void)

void FUN_142378fb0(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if (((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
     (*(char *)(param_1 + 0x24e) != '\0')) {
    if ((*(uint *)(param_1 + 0x450) & 1) != (uint)param_2) {
      *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) & 0xfffffffe | (uint)param_2;
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 142379010 FUN_142379010 body=321 status=ok
// SIG undefined FUN_142379010(void)

void FUN_142379010(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  if ((*(byte *)(param_1 + 0xe2) & 1) != 0) {
    TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(param_1 + 0xe0,0);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  lVar4 = FUN_142369ad0(param_1,param_2,1);
  if (lVar4 == 0) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
    return;
  }
  puVar7 = *(undefined4 **)(lVar4 + 0x10);
  puVar1 = puVar7 + *(int *)(lVar4 + 0x18);
  if (puVar7 == puVar1) {
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  else {
    do {
      uVar2 = *puVar7;
      lVar4 = (**(code **)(*param_1 + 0x560))(param_1,uVar2);
      if (lVar4 != 0) {
        lVar5 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar4 = (**(code **)(*param_1 + 0x598))(param_1,uVar2);
        }
        puVar6 = (undefined4 *)FLinearColor::FLinearColor(local_28,param_3);
        local_38 = *puVar6;
        uStack_34 = puVar6[1];
        uStack_30 = puVar6[2];
        uStack_2c = puVar6[3];
        FUN_1425a2be0(lVar4,param_2,&local_38);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
    *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfffffffe;
  }
  return;
}



// FUNCTION 142379160 FUN_142379160 body=20 status=ok
// SIG undefined FUN_142379160(void)

void FUN_142379160(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x33c) != param_2) {
    *(char *)(param_1 + 0x33c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142379180 FUN_142379180 body=20 status=ok
// SIG undefined FUN_142379180(void)

void FUN_142379180(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x344) != param_2) {
    *(int *)(param_1 + 0x344) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423791a0 FUN_1423791a0 body=23 status=ok
// SIG undefined FUN_1423791a0(void)

void FUN_1423791a0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x35c)) {
    *(float *)(param_1 + 0x35c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423791c0 FUN_1423791c0 body=71 status=ok
// SIG undefined FUN_1423791c0(void)

void FUN_1423791c0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*param_2 == *(float *)(param_1 + 0x348)) && (param_2[1] == *(float *)(param_1 + 0x34c))) &&
      (param_2[2] == *(float *)(param_1 + 0x350))) && (param_2[3] == *(float *)(param_1 + 0x354))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x348) = *param_2;
  *(float *)(param_1 + 0x34c) = fVar1;
  *(float *)(param_1 + 0x350) = fVar2;
  *(float *)(param_1 + 0x354) = fVar3;
  FUN_1423424e0();
  return;
}



// FUNCTION 142379210 FUN_142379210 body=23 status=ok
// SIG undefined FUN_142379210(void)

void FUN_142379210(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x358)) {
    *(float *)(param_1 + 0x358) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142379230 SetDynamicShadowDistanceMovableLight body=23 status=ok
// SIG undefined SetDynamicShadowDistanceMovableLight(void)

void UDirectionalLightComponent::SetDynamicShadowDistanceMovableLight
               (longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x340)) {
    *(float *)(param_1 + 0x340) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142379250 FUN_142379250 body=120 status=ok
// SIG undefined FUN_142379250(void)

void FUN_142379250(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_142341170();
  if ((((cVar2 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2f4))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    *(float *)(param_1 + 0x2f4) = param_2;
    if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
      return;
    }
    plVar1 = *(longlong **)(lVar3 + 0x1b8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1423792d0 FUN_1423792d0 body=611 status=ok
// SIG undefined FUN_1423792d0(void)

void FUN_1423792d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_142379487;
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
LAB_142379487:
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



// FUNCTION 142379540 FUN_142379540 body=60 status=ok
// SIG undefined FUN_142379540(void)

undefined1 FUN_142379540(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142379580();
  if (((cVar1 != '\0') &&
      (*(float *)(param_1 + 0x1d8) <= DAT_146531d00 && DAT_146531d00 != *(float *)(param_1 + 0x1d8))
      ) && (*(char *)(param_1 + 0x1ec) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142379580 FUN_142379580 body=216 status=ok
// SIG undefined FUN_142379580(void)

ulonglong FUN_142379580(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af0680) {
    _Init_thread_header(&DAT_146af0680);
    if (DAT_146af0680 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146af0678 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
      _Init_thread_footer(&DAT_146af0680);
    }
  }
  if (DAT_146af0678 == (longlong *)0x0) {
LAB_1423795c6:
    bVar2 = false;
  }
  else {
    iVar3 = (**(code **)(*DAT_146af0678 + 0x68))();
    if (iVar3 < 1) goto LAB_1423795c6;
    bVar2 = true;
  }
  uVar1 = *(uint *)(param_1 + 0x180);
  uVar4 = (ulonglong)(uVar1 >> 1);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = (ulonglong)(uVar1 >> 3);
    if ((((uVar1 >> 3 & 1) != 0) && ((uVar1 >> 2 & 1) == 0)) && (bVar2)) goto LAB_1423795fb;
  }
  else if ((bVar2) && ((char)uVar1 < '\0')) {
LAB_1423795fb:
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142379660 FUN_142379660 body=252 status=ok
// SIG undefined FUN_142379660(void)

undefined8
FUN_142379660(undefined8 param_1,undefined8 param_2,int param_3,undefined1 param_4,
             undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = FUN_14236d140(param_1,param_2,param_5);
  fVar6 = (float)FUN_14236a090(param_1);
  if ((iVar4 == 0) ||
     (fVar7 = (float)FUN_1423698b0(param_1,param_2,param_4,param_5), fVar6 <= fVar7)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((iVar4 != 0) || (fVar6 <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar1 = (&DAT_1464c9c48)[param_3];
  if (((((uVar1 < 0x20) && ((0xc0000005U >> (uVar1 & 0x1f) & 1) != 0)) ||
       ((uVar1 < 0x1c &&
        ((((0x8c51800U >> (uVar1 & 0x1f) & 1) != 0 && (iVar4 = FUN_1419ef5f0(uVar1), 2 < iVar4)) &&
         (uVar5 = RHIGetShaderLanguageVersion(uVar1), 1 < uVar5)))))) ||
      (((uVar1 - 4 & 0xffffffe7) == 0 && (uVar1 != 0xc)))) && ((bVar2 || (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142379760 FUN_142379760 body=380 status=ok
// SIG undefined FUN_142379760(void)

ulonglong FUN_142379760(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_28;
  undefined8 local_20;
  
  uVar6 = *(ulonglong *)(param_1 + 0x178);
  if ((uVar6 == 0) || (*(char *)(uVar6 + 0x24e) != '\x02')) {
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    uVar6 = *(ulonglong *)(param_1 + 0x180);
    if ((uVar6 == 0) || (0.41 < *(float *)(lVar4 + 0x790) - *(float *)(uVar6 + 0x36c))) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_14238b380(*(undefined8 *)(param_1 + 0x178),1,&local_28);
      plVar1 = local_28 + (int)local_20;
      plVar7 = local_28;
      do {
        if (plVar7 == plVar1) {
          uVar6 = 1;
LAB_14237988d:
          if (local_28 != (longlong *)0x0) {
            FMemory::Free(local_28);
          }
          return uVar6;
        }
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          lVar5 = FUN_1429f11d0();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (((bVar3) && ((*(byte *)(lVar2 + 0xb8) & 1) != 0)) &&
             (*(float *)(lVar4 + 0x790) - *(float *)(lVar2 + 0x36c) <= 0.41)) {
            uVar6 = 0;
            goto LAB_14237988d;
          }
        }
        plVar7 = plVar7 + 1;
      } while( true );
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1423798f0 FUN_1423798f0 body=557 status=ok
// SIG undefined FUN_1423798f0(void)

float FUN_1423798f0(longlong *param_1,float *param_2,float param_3,undefined8 *param_4,byte *param_5
                   ,char param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  ulonglong uVar5;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((*param_5 & 1) != 0) {
    local_50 = *(undefined4 *)(param_4 + 1);
    local_58 = *param_4;
    pbVar4 = param_5;
    (**(code **)(*param_1 + 0x4a0))((int)local_58,&local_68,param_2,param_3,param_4,param_5);
    if (0.0 < local_68 * *param_2 + local_64 * param_2[1] + local_60 * param_2[2]) {
      lVar1 = param_1[0x2f];
      uVar5 = (ulonglong)pbVar4 & 0xffffffffffffff00;
      local_48 = *(undefined4 *)(lVar1 + 0x210);
      uStack_44 = *(undefined4 *)(lVar1 + 0x214);
      uStack_40 = *(undefined4 *)(lVar1 + 0x218);
      uStack_3c = *(undefined4 *)(lVar1 + 0x21c);
      FUN_1423755e0(param_1,&local_68,&local_48,1,param_5,uVar5);
      fVar2 = *(float *)(param_5 + 0xc);
      if (((*param_5 & 1) != 0) && ((*param_5 & 2) == 0)) {
        if (param_6 != '\0') {
          (**(code **)(*param_1 + 0x468))(param_1,param_5,fVar2 * param_3,&local_68);
        }
        (**(code **)(*param_1 + 0x4b0))(param_1,&local_68,param_5,&local_58);
        if ((((0.001 < ABS(local_68)) || (0.001 < ABS(local_64))) || (0.001 < ABS(local_60))) &&
           (0.0 < local_68 * *param_2 + local_64 * param_2[1] + local_60 * param_2[2])) {
          FUN_1423755e0(param_1,&local_68,&local_48,1,param_5,uVar5 & 0xffffffffffffff00);
          fVar3 = (1.0 - fVar2) * *(float *)(param_5 + 0xc);
          fVar2 = fVar3 + fVar2;
          if ((param_6 != '\0') && ((*param_5 & 1) != 0)) {
            (**(code **)(*param_1 + 0x468))(param_1,param_5,fVar3 * param_3,&local_68);
          }
        }
      }
      if (fVar2 < 0.0) {
        return 0.0;
      }
      if (fVar2 < 1.0) {
        return fVar2;
      }
      return 1.0;
    }
  }
  return 0.0;
}



// FUNCTION 142379b20 FUN_142379b20 body=147 status=ok
// SIG undefined FUN_142379b20(void)

void FUN_142379b20(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  if ((param_1[0x2f] != 0) && ((*(byte *)(param_1 + 0x33) & 1) != 0)) {
    auVar1 = *(undefined1 (*) [16])(param_1[0x2f] + 0x220);
    local_20 = auVar1._8_4_;
    local_28 = auVar1._0_8_;
    local_10 = local_20;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x4f8))(local_28,local_18,&local_28);
    local_28 = *puVar2;
    local_20 = *(undefined4 *)(puVar2 + 1);
    FUN_1423990b0(param_1[0x2f],&local_28,0,0,0);
  }
  return;
}



// FUNCTION 142379be0 FUN_142379be0 body=80 status=ok
// SIG undefined FUN_142379be0(void)

void FUN_142379be0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((*(byte *)(param_1 + 500) & 8) != 0) && (lVar1 = *(longlong *)(param_1 + 0x1f8), lVar1 != 0))
  {
    uVar2 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 142379c30 FUN_142379c30 body=294 status=ok
// SIG undefined FUN_142379c30(void)

void FUN_142379c30(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfb;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  if (param_2 != '\0') {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    for (plVar5 = DAT_146af04e0; plVar5 != DAT_146af04e0 + DAT_146af04e8; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (*(longlong *)(lVar1 + 0x18) == lVar3) {
        if ((lVar1 != 0) && (iVar4 = *(int *)(lVar1 + 0x28), uVar8 = uVar7, 0 < iVar4)) {
          do {
            iVar6 = (int)uVar7;
            lVar3 = *(longlong *)(lVar1 + 0x20);
            if (*(longlong **)(uVar8 + lVar3) == param_1) {
              iVar2 = (iVar4 - iVar6) + -1;
              if (0 < iVar2) {
                iVar2 = 1;
              }
              if (iVar2 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar3 + (longlong)iVar6 * 8),
                           (void *)(lVar3 + (longlong)(iVar4 - iVar2) * 8),(longlong)iVar2 << 3);
                iVar4 = *(int *)(lVar1 + 0x28);
              }
              *(int *)(lVar1 + 0x28) = iVar4 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x20);
              iVar4 = *(int *)(lVar1 + 0x28);
              iVar6 = iVar6 + -1;
              uVar8 = uVar8 - 8;
            }
            uVar7 = (ulonglong)(iVar6 + 1U);
            uVar8 = uVar8 + 8;
          } while ((int)(iVar6 + 1U) < iVar4);
        }
        break;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x5b) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142379d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142379d60 FUN_142379d60 body=125 status=ok
// SIG undefined FUN_142379d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142379d60(longlong *param_1)

{
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  *(undefined1 *)((longlong)param_1 + 0x245) = 1;
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  FUN_142361e10(param_1 + 0x3c,local_98,(int)param_1[0x47]);
  *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
                    /* WARNING: Could not recover jumptable at 0x000142379dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x470))(param_1);
  return;
}



// FUNCTION 142379de0 FUN_142379de0 body=88 status=ok
// SIG undefined FUN_142379de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142379de0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x450))(param_1,0);
  *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
  FUN_142361e10(param_1 + 0x3c,param_2,(int)param_1[0x47]);
  return;
}



// FUNCTION 142379e40 SupportsConvertibleLaptops body=19 status=ok
// SIG undefined SupportsConvertibleLaptops(void)

bool UPlatformEventsComponent::SupportsConvertibleLaptops(void)

{
  int iVar1;
  
  iVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  return iVar1 != 0;
}



// FUNCTION 142379e60 FUN_142379e60 body=548 status=ok
// SIG undefined FUN_142379e60(void)

void FUN_142379e60(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  
  iVar7 = (int)param_1[5];
  uVar5 = 0;
  iVar6 = iVar7 + -1;
  iVar9 = 1;
  if (-1 < iVar6) {
    lVar10 = (longlong)iVar6 * 8;
    lVar11 = lVar10;
    do {
      lVar2 = param_1[4];
      plVar3 = *(longlong **)(lVar10 + lVar2);
      if (plVar3 == (longlong *)0x0) {
        iVar7 = (int)param_1[5];
        iVar4 = (iVar7 - iVar6) + -1;
        if (0 < iVar4) {
          iVar4 = iVar9;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + lVar2),(void *)(lVar2 + (longlong)(iVar7 - iVar4) * 8),
                     (longlong)iVar4 << 3);
          iVar7 = (int)param_1[5];
        }
        *(int *)(param_1 + 5) = iVar7 + -1;
      }
      else {
        if (plVar3[0x5a] != 0) {
          fVar12 = (float)UForceFeedbackEffect::GetDuration();
          dVar13 = DAT_1464a97d0;
          if ((*(byte *)(plVar3 + 0x5b) & 8) == 0) {
            dVar13 = (double)param_2;
          }
          fVar1 = *(float *)(plVar3 + 0x73);
          *(float *)(plVar3 + 0x73) = (float)((double)fVar1 + dVar13);
          if (((float)((double)fVar1 + dVar13) <= fVar12) ||
             (((*(byte *)(plVar3 + 0x5b) & 4) != 0 && (fVar12 != 0.0)))) goto LAB_142379fb8;
        }
        iVar7 = (int)param_1[5];
        iVar4 = (iVar7 - iVar6) + -1;
        if (0 < iVar4) {
          iVar4 = iVar9;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[4] + lVar11),
                     (void *)(param_1[4] + (longlong)(iVar7 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar7 = (int)param_1[5];
        }
        *(int *)(param_1 + 5) = iVar7 + -1;
        *(byte *)((longlong)plVar3 + 0xba) = *(byte *)((longlong)plVar3 + 0xba) & 0xfb;
        *(undefined4 *)(plVar3 + 0x73) = 0;
        if ((*(byte *)(plVar3 + 0x5b) & 1) != 0) {
          (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
        }
      }
LAB_142379fb8:
      lVar11 = lVar11 + -8;
      lVar10 = lVar10 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar7 = (int)param_1[5];
  }
  if (iVar7 == 0) {
    uVar8 = uVar5;
    lVar10 = DAT_146af04e0;
    iVar6 = DAT_146af04e8;
    if (0 < DAT_146af04e8) {
      do {
        iVar7 = (int)uVar8;
        if (*(longlong **)(uVar5 + lVar10) == param_1) {
          iVar4 = (iVar6 - iVar7) + -1;
          if (0 < iVar4) {
            iVar4 = iVar9;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar10 + (longlong)iVar7 * 8),
                       (void *)(lVar10 + (longlong)(iVar6 - iVar4) * 8),(longlong)iVar4 << 3);
            iVar6 = DAT_146af04e8;
          }
          DAT_146af04e8 = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146af04e0);
          iVar7 = iVar7 + -1;
          uVar5 = uVar5 - 8;
          lVar10 = DAT_146af04e0;
          iVar6 = DAT_146af04e8;
        }
        uVar5 = uVar5 + 8;
        uVar8 = (ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < iVar6);
    }
    (**(code **)(*param_1 + 0x28))(param_1,1);
  }
  return;
}



// FUNCTION 14237a090 FUN_14237a090 body=2479 status=ok
// SIG undefined FUN_14237a090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14237a090(longlong *param_1,float param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float local_378;
  float local_374;
  float local_370;
  undefined8 local_368;
  undefined4 local_360;
  byte local_358 [4];
  undefined4 local_354;
  uint local_350;
  float local_34c;
  undefined4 local_348;
  undefined8 local_344;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  byte local_2c8;
  undefined2 local_2c7;
  undefined1 local_2c5;
  undefined4 local_2c4;
  uint local_2c0;
  float local_2bc;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  float local_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined1 local_148 [12];
  undefined4 local_13c;
  
  FUN_142357eb0();
  lVar13 = param_1[0x2f];
  if (lVar13 != 0) {
    iVar14 = *(int *)(lVar13 + 0xc);
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar11 = iVar14 >> 0x1f & 0xffff;
      uVar5 = iVar14 + uVar11;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) {
      (**(code **)(*param_1 + 0x450))(param_1,0);
      lVar13 = param_1[0x2f];
    }
    if (((((lVar13 != 0) &&
          (cVar4 = (**(code **)(*param_1 + 0x438))(param_1,param_2), cVar4 == '\0')) &&
         (lVar13 = *(longlong *)(param_1[0x2f] + 0x118), lVar13 != 0)) &&
        ((cVar4 = (**(code **)(*param_1 + 0x518))(param_1), cVar4 != '\0' &&
         (cVar4 = (**(code **)(*(longlong *)param_1[0x2f] + 0x400))(), cVar4 == '\0')))) &&
       (*(char *)((longlong)param_1 + 0x245) != '\x01')) {
      iVar14 = *(int *)(lVar13 + 0xc);
      if (iVar14 < (int)DAT_1469e91c4) {
        uVar11 = iVar14 >> 0x1f & 0xffff;
        uVar5 = iVar14 + uVar11;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) && ((int)param_1[0x46] != 0)) {
        (**(code **)(*param_1 + 0x538))(param_1);
        iVar14 = 0;
        _guard_xfg_dispatch_icall_nop(local_358,0,0x90);
        local_34c = 1.0;
        iVar15 = 0;
        do {
          iVar3 = iVar15;
          if ((param_2 < 0.0002) || (*(int *)((longlong)param_1 + 0x224) <= iVar3))
          goto LAB_14237a9a9;
          uVar5 = *(uint *)(lVar13 + 0xc);
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar11 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar11 = uVar11 - 0x10000;
            }
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar11 * 0x18;
          }
          else {
            lVar7 = 0;
          }
          if ((((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (param_1[0x2f] == 0)) ||
             ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0)) goto LAB_14237a9a9;
          iVar15 = iVar3 + 1;
          cVar4 = (**(code **)(*param_1 + 0x520))(param_1);
          fVar19 = param_2;
          if (cVar4 != '\0') {
            fVar16 = *(float *)(param_1 + 0x44);
            if (((fVar16 < param_2) && (iVar15 < *(int *)((longlong)param_1 + 0x224))) &&
               (fVar19 = param_2 * 0.5, fVar16 <= param_2 * 0.5)) {
              fVar19 = fVar16;
            }
            if (fVar19 <= 0.0002) {
              fVar19 = 0.0002;
            }
          }
          param_2 = param_2 - fVar19;
          fVar16 = fVar19 * *(float *)((longlong)param_1 + 0x23c) * *(float *)(param_1 + 0x48) +
                   *(float *)(param_1 + 0x47);
          if (0.0 <= fVar16) {
            if (1.0 <= fVar16) {
              fVar16 = 1.0;
            }
          }
          else {
            fVar16 = 0.0;
          }
          (**(code **)(*param_1 + 0x530))(param_1,&local_378,fVar16);
          lVar7 = param_1[0x2f];
          fVar16 = 1.0 / fVar19;
          local_220 = local_370 * fVar16;
          *(ulonglong *)((longlong)param_1 + 0x18c) =
               CONCAT44(local_374 * fVar16,local_378 * fVar16);
          *(float *)((longlong)param_1 + 0x194) = local_220;
          local_218 = *(float *)(lVar7 + 0x210);
          fStack_214 = *(float *)(lVar7 + 0x214);
          fStack_210 = *(float *)(lVar7 + 0x218);
          fStack_20c = *(float *)(lVar7 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_214);
          auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_218);
          auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_210);
          auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_20c);
          iVar6 = movmskps(local_220,auVar2);
          if (iVar6 != 0) {
            *(float *)(lVar7 + 0x250) = local_218;
            *(float *)(lVar7 + 0x254) = fStack_214;
            *(float *)(lVar7 + 600) = fStack_210;
            *(float *)(lVar7 + 0x25c) = fStack_20c;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_218,local_208);
            *(undefined8 *)(lVar7 + 0x260) = *puVar8;
            *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          local_368 = *(undefined8 *)(lVar7 + 0x260);
          local_360 = *(undefined4 *)(lVar7 + 0x268);
          if (((*(byte *)((longlong)param_1 + 0x1c4) & 1) == 0) && ((char)param_1[0x39] != '\0')) {
            bVar1 = *(byte *)((longlong)param_1 + 0x1cc);
            uVar9 = FRotator::Quaternion(&local_368,local_1f8);
            FUN_1423755e0(param_1,&local_378,uVar9,~bVar1 & 1,local_358,0);
          }
          else {
            uVar5 = *(uint *)(param_1 + 0x31);
            *(uint *)(param_1 + 0x31) = uVar5 | 4;
            bVar1 = *(byte *)((longlong)param_1 + 0x1cc);
            uVar9 = FUN_14247f500();
            FUN_14247ea90(uVar9);
            lVar7 = *param_1;
            uVar9 = FRotator::Quaternion(&local_368,local_1e8);
            (**(code **)(lVar7 + 0x488))(param_1,&local_378,uVar9,~bVar1 & 1,local_358,0);
            *(uint *)(param_1 + 0x31) = uVar5;
          }
          uVar5 = *(uint *)(lVar13 + 0xc);
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar11 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar11 = uVar11 - 0x10000;
            }
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar11 * 0x18;
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) {
            return;
          }
          if (param_1[0x2f] == 0) {
            return;
          }
          if ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) {
            return;
          }
          fVar16 = 0.0;
          if (*(char *)((longlong)param_1 + 0x244) == '\0') {
            *(undefined1 *)((longlong)param_1 + 0x245) = 0;
            fVar18 = *(float *)(param_1 + 0x47) +
                     local_34c * fVar19 * *(float *)((longlong)param_1 + 0x23c) *
                     *(float *)(param_1 + 0x48);
            if (fVar18 < 1.0) {
              if (fVar18 < 0.0) {
                fVar16 = -fVar18;
                if ((char)param_1[0x39] == '\x01') {
                  *(undefined1 *)((longlong)param_1 + 0x245) = 1;
                  fVar18 = 0.0;
                  FUN_142361e10(param_1 + 0x3c,local_358,0);
                }
                else if ((char)param_1[0x39] == '\x03') {
                  _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
                  uVar17 = 0;
                  local_13c = 0x3f800000;
                  puVar12 = local_148;
                  fVar18 = 0.0;
                  goto LAB_14237a702;
                }
              }
            }
            else {
              fVar16 = fVar18 - 1.0;
              if ((char)param_1[0x39] == '\0') {
                *(undefined1 *)((longlong)param_1 + 0x245) = 1;
                fVar18 = 1.0;
                FUN_142361e10(param_1 + 0x3c,local_358,0x3f800000);
              }
              else if ((char)param_1[0x39] == '\x02') {
                fVar18 = 0.0;
                FUN_142361e10(param_1 + 0x42,local_358,0);
              }
              else {
                _guard_xfg_dispatch_icall_nop(local_1d8,0,0x90);
                uVar17 = 0x3f800000;
                local_1cc = 0x3f800000;
                puVar12 = local_1d8;
                fVar18 = 1.0;
LAB_14237a702:
                FUN_142375490(param_1,puVar12,uVar17,1);
              }
            }
            *(float *)(param_1 + 0x47) = fVar18;
          }
          if ((local_34c != 0.0) && (*(char *)((longlong)param_1 + 0x244) == '\x01')) {
            local_2bc = local_34c;
            local_2c7 = 0;
            local_2c5 = 0;
            local_24c = 0;
            local_2c8 = local_358[0] & 3;
            local_2b8 = local_348;
            local_2c4 = local_354;
            local_2c0 = local_350 & 1;
            local_2a8 = local_338;
            local_2ac = local_33c;
            local_2a0 = local_330;
            local_294 = local_324;
            local_288 = local_318;
            local_27c = local_30c;
            local_270 = local_300;
            local_268 = local_2f8;
            local_264 = local_2f4;
            local_260 = local_2f0;
            local_29c = local_32c;
            local_25c = local_2ec;
            local_290 = local_320;
            local_258 = local_2e8;
            local_284 = local_314;
            local_254 = local_2e4;
            local_250 = local_2e0;
            local_278 = local_308;
            local_248 = local_2d8;
            local_26c = local_2fc;
            local_238 = (undefined4)param_1[0x47];
            local_240 = local_2d0;
            local_2b4 = local_344;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x40,&local_2c8);
            *(undefined1 *)((longlong)param_1 + 0x244) = 0;
          }
          fVar18 = 0.0;
          if ((local_358[0] & 1) == 0) {
            if (*(char *)((longlong)param_1 + 0x245) == '\x01') {
              *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
              *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
LAB_14237a9a9:
              (**(code **)(*param_1 + 0x470))(param_1);
              return;
            }
            if (fVar16 != 0.0) {
              fVar18 = fVar16 * *(float *)(param_1 + 0x38);
              goto LAB_14237a968;
            }
          }
          else {
            lVar7 = 0;
            if (param_1[0x2f] != 0) {
              lVar7 = *(longlong *)(param_1[0x2f] + 0x118);
            }
            cVar4 = (**(code **)(*param_1 + 0x518))(param_1);
            if ((cVar4 == '\0') || (lVar7 == 0)) goto LAB_14237a9a9;
            uVar5 = *(uint *)(lVar7 + 0xc);
            if ((int)uVar5 < (int)DAT_1469e91c4) {
              uVar11 = uVar5 & 0xffff;
              if ((int)uVar5 < 0) {
                uVar5 = uVar5 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                       (longlong)(int)uVar11 * 0x18;
            }
            else {
              lVar10 = 0;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_14237a9a9;
            (**(code **)(*param_1 + 0x468))(param_1,local_358,fVar19,&local_378);
            uVar5 = *(uint *)(lVar7 + 0xc);
            if ((int)uVar5 < (int)DAT_1469e91c4) {
              uVar11 = uVar5 & 0xffff;
              if ((int)uVar5 < 0) {
                uVar5 = uVar5 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)uVar11 * 0x18;
            }
            else {
              lVar7 = 0;
            }
            if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (param_1[0x2f] == 0))
            goto LAB_14237a9a9;
            fVar18 = (1.0 - local_34c) * fVar19;
LAB_14237a968:
            iVar14 = iVar14 + 1;
          }
          if ((iVar14 < 3) && (0.0002 <= fVar18)) {
            param_2 = param_2 + fVar18;
            iVar15 = iVar3;
          }
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 14237aa40 FUN_14237aa40 body=574 status=ok
// SIG undefined FUN_14237aa40(void)

void FUN_14237aa40(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (((lVar4 == 0) && (lVar4 = FUN_1423407b0(), lVar4 == 0)) ||
     ((*(byte *)(lVar4 + 0x830) & 0x80) == 0)) {
    bVar3 = false;
    uVar6 = 0;
    if (0 < *(int *)(param_1 + 0x6f8)) {
      plVar1 = (longlong *)(param_1 + 0x6f0);
      uVar7 = uVar6;
      uVar9 = uVar6;
      do {
        iVar8 = (int)uVar9;
        fVar10 = *(float *)(uVar7 + 0x2c + *plVar1);
        if ((0.0 < fVar10) &&
           (fVar10 = fVar10 - param_2, *(float *)(uVar7 + 0x2c + *plVar1) = fVar10, fVar10 <= 0.0))
        {
          iVar2 = *(int *)(param_1 + 0x6f8);
          iVar5 = (iVar2 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x34 + *plVar1),
                       (void *)((longlong)(iVar2 - iVar5) * 0x34 + *plVar1),(longlong)iVar5 * 0x34);
            iVar2 = *(int *)(param_1 + 0x6f8);
          }
          *(int *)(param_1 + 0x6f8) = iVar2 + -1;
          TArray<FBatchedLine,FDefaultAllocator>::ResizeShrink(plVar1);
          iVar8 = iVar8 + -1;
          bVar3 = true;
          uVar7 = uVar7 - 0x34;
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        uVar7 = uVar7 + 0x34;
      } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0x6f8));
    }
    if (0 < *(int *)(param_1 + 0x708)) {
      plVar1 = (longlong *)(param_1 + 0x700);
      uVar7 = uVar6;
      uVar9 = uVar6;
      do {
        iVar8 = (int)uVar9;
        fVar10 = *(float *)(uVar7 + 0x20 + *plVar1);
        if ((0.0 < fVar10) &&
           (fVar10 = fVar10 - param_2, *(float *)(uVar7 + 0x20 + *plVar1) = fVar10, fVar10 <= 0.0))
        {
          iVar2 = *(int *)(param_1 + 0x708);
          iVar5 = (iVar2 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar8 * 0x28),
                       (void *)(*plVar1 + (longlong)(iVar2 - iVar5) * 0x28),(longlong)iVar5 * 0x28);
            iVar2 = *(int *)(param_1 + 0x708);
          }
          *(int *)(param_1 + 0x708) = iVar2 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
          iVar8 = iVar8 + -1;
          bVar3 = true;
          uVar7 = uVar7 - 0x28;
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        uVar7 = uVar7 + 0x28;
      } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0x708));
    }
    uVar7 = uVar6;
    if (0 < *(int *)(param_1 + 0x720)) {
      do {
        iVar8 = (int)uVar6;
        fVar10 = *(float *)(uVar7 + 0x28 + *(longlong *)(param_1 + 0x718));
        if ((0.0 < fVar10) &&
           (fVar10 = fVar10 - param_2,
           *(float *)(uVar7 + 0x28 + *(longlong *)(param_1 + 0x718)) = fVar10, fVar10 <= 0.0)) {
          FUN_142374a50(param_1 + 0x718,uVar6,1,1);
          iVar8 = iVar8 + -1;
          bVar3 = true;
          uVar7 = uVar7 - 0x30;
        }
        uVar6 = (ulonglong)(iVar8 + 1U);
        uVar7 = uVar7 + 0x30;
      } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0x720));
    }
    if (bVar3) {
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 14237ac80 FUN_14237ac80 body=117 status=ok
// SIG undefined FUN_14237ac80(void)

void FUN_14237ac80(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142357eb0();
  if (param_1[0x2f] != 0) {
    iVar1 = *(int *)(param_1[0x2f] + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014237ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x450))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14237ad00 FUN_14237ad00 body=448 status=ok
// SIG undefined FUN_14237ad00(void)

void FUN_14237ad00(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_58 [2];
  longlong local_48;
  ulonglong local_40;
  int local_38;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = -1;
  uVar3 = UAkAudioInputComponent::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_48,1,0x10,0);
  uVar5 = local_40 & 0xffffffff;
  do {
    local_38 = local_38 + 1;
    lVar9 = local_48;
    if ((int)local_40 <= local_38) break;
  } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
  do {
    do {
      if ((local_38 < 0) || ((int)uVar5 <= local_38)) {
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
        return;
      }
      lVar1 = *(longlong *)(lVar9 + (longlong)local_38 * 8);
      if (*(char *)(lVar1 + 0x24e) != '\0') {
        if (*(longlong *)(lVar1 + 0x118) == 0) {
          local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
          puVar4 = local_res18;
        }
        else {
          local_res10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x118) + 0x18);
          puVar4 = &local_res10;
        }
        FName::ToString(puVar4,local_58);
        uVar5 = 0;
        uVar8 = 0;
        if (0 < (int)param_1[1]) {
          do {
            if (*(int *)(uVar5 + 8 + *param_1) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = *(undefined2 **)(uVar5 + *param_1);
            }
            iVar2 = FUN_141592950(local_58,puVar6,1,0,0xffffffff);
            if (iVar2 != -1) {
              FUN_142398ec0(lVar1,~(*(byte *)(lVar1 + 0x24c) >> 5) & 1,1);
              break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar5 = uVar5 + 0x10;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < (int)param_1[1]);
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        uVar5 = local_40 & 0xffffffff;
        lVar9 = local_48;
      }
      local_38 = local_38 + 1;
    } while ((int)uVar5 <= local_38);
    do {
      if (*(longlong *)(lVar9 + (longlong)local_38 * 8) != 0) break;
      local_38 = local_38 + 1;
    } while (local_38 < (int)uVar5);
  } while( true );
}



// FUNCTION 14237aec0 FUN_14237aec0 body=970 status=ok
// SIG undefined FUN_14237aec0(void)

void FUN_14237aec0(longlong *param_1,undefined8 *param_2,longlong param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [160];
  
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x2c);
  fVar3 = *(float *)(param_2 + 1);
  fVar11 = *param_4;
  fVar12 = param_4[2];
  fVar6 = param_4[1];
  fVar7 = (float)uVar2;
  local_b0 = *(float *)(param_3 + 0x34);
  local_b8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar5 = fVar6 * local_b8._4_4_;
  local_c8._0_4_ = (float)uVar1;
  fVar9 = (float)local_c8;
  local_c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar10 = local_c8._4_4_;
  if (0.0 < fVar11 * fVar7 + fVar5 + fVar12 * local_b0) {
    local_c8 = uVar1;
    local_c0 = fVar3;
    local_b8 = uVar2;
    puVar4 = (undefined8 *)
             (**(code **)(*param_1 + 0x4a0))
                       (fVar5,local_a8,&local_c8,1.0 - *(float *)(param_3 + 0xc),&local_b8,param_3);
    uVar1 = *puVar4;
    local_c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_c0 = *(float *)(puVar4 + 1);
    local_c8._0_4_ = (float)uVar1;
    if (0.0 < local_c8._4_4_ * fVar10 + (float)local_c8 * fVar9 + local_c0 * fVar3) {
      if (ABS((local_b8._4_4_ * param_4[1] + (float)local_b8 * *param_4 + local_b0 * param_4[2]) -
              1.0) < 0.0001) {
        local_c0 = local_c0 + local_b0 * 0.01;
        local_c8 = CONCAT44(local_c8._4_4_ + local_b8._4_4_ * 0.01,
                            (float)local_c8 + (float)local_b8 * 0.01);
        uVar1 = local_c8;
      }
    }
    else {
      local_c0 = DAT_1468b5d98;
      local_c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      uVar1 = local_c8;
    }
  }
  else {
    fVar10 = fVar12 * local_b8._4_4_ - fVar6 * local_b0;
    fVar9 = fVar6 * fVar7 - fVar11 * local_b8._4_4_;
    fVar5 = fVar11 * local_b0 - fVar12 * fVar7;
    fVar6 = fVar5 * fVar5 + fVar10 * fVar10 + fVar9 * fVar9;
    local_c0 = fVar9;
    fVar11 = fVar10;
    fVar12 = fVar5;
    if ((fVar6 != 1.0) &&
       (local_c0 = DAT_1468b5d98, fVar11 = DAT_1468b5d90, fVar12 = DAT_1468b5d94, 1e-08 <= fVar6)) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar12 = auVar8._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar6 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar6 * 0.5 * fVar12 * fVar12);
      local_c0 = fVar9 * fVar12;
      fVar11 = fVar10 * fVar12;
      fVar12 = fVar5 * fVar12;
    }
    fVar6 = (local_c8._4_4_ * fVar12 + (float)local_c8 * fVar11 + local_c0 * fVar3) *
            (1.0 - *(float *)(param_3 + 0xc));
    fVar11 = fVar11 * fVar6;
    local_c0 = local_c0 * fVar6;
    fVar12 = fVar12 * fVar6;
    fVar6 = fVar11 * (float)local_c8;
    fVar9 = fVar12 * local_c8._4_4_;
    local_c8 = CONCAT44(fVar12,fVar11);
    uVar1 = local_c8;
    if (fVar9 + fVar6 + local_c0 * fVar3 < 0.0) {
      local_c0 = -local_c0;
      local_c8 = CONCAT44(-fVar12,-fVar11);
      uVar1 = local_c8;
    }
  }
  local_c8 = uVar1;
  *param_2 = local_c8;
  *(float *)(param_2 + 1) = local_c0;
  return;
}



// FUNCTION 14237b290 FUN_14237b290 body=409 status=ok
// SIG undefined FUN_14237b290(void)

void FUN_14237b290(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  undefined4 local_70;
  
  uVar4 = 0;
  plVar5 = *(longlong **)(param_1 + 0x20);
  uVar6 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x28) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x2d0) != 0)) {
        fVar7 = (float)UForceFeedbackEffect::GetDuration();
        fVar1 = *(float *)(lVar2 + 0x398);
        fVar10 = *(float *)(lVar2 + 0x2dc);
        fVar9 = fVar1 / fVar7;
        if (0.0 < fVar10) {
          if ((*(byte *)(lVar2 + 0x2d8) & 0x10) == 0) {
            if (*(longlong *)(lVar2 + 0x2e0) != 0) {
              lVar3 = *(longlong *)(lVar2 + 0x2e0) + 0x28;
              goto LAB_14237b391;
            }
          }
          else {
            lVar3 = lVar2 + 0x2e8;
LAB_14237b391:
            if (lVar3 != 0) {
              local_78 = *param_2;
              local_70 = *(undefined4 *)(param_2 + 1);
              fVar8 = (float)FBaseAttenuationSettings::Evaluate
                                       (local_78,lVar2 + 0x210,&local_78,0x3f800000);
              fVar10 = fVar10 * fVar8;
            }
          }
          if (0.0 < fVar10) {
            UForceFeedbackEffect::GetValues
                      (*(undefined8 *)(lVar2 + 0x2d0),
                       fVar1 - (float)((int)ROUND((fVar9 + fVar9) - 0.5) >> 1) * fVar7,param_3,
                       fVar10);
          }
        }
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 14237b430 FUN_14237b430 body=128 status=ok
// SIG undefined FUN_14237b430(void)

void FUN_14237b430(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return;
  }
  lVar2 = FUN_14233fea0(param_1);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x428) & 1;
  if ((uVar1 != 0) || (*(float *)(param_1 + 0x2e4) <= 0.0)) {
    if (uVar1 == 0) {
      return;
    }
    if (0.0 < *(float *)(param_1 + 0x2e4)) {
      plVar3 = (longlong *)FUN_14233fea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014237b496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x148))(plVar3,param_1);
      return;
    }
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 14237b4b0 FUN_14237b4b0 body=41 status=ok
// SIG undefined FUN_14237b4b0(void)

void FUN_14237b4b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x240) = *(undefined8 *)(param_1 + 0x18c);
    *(undefined4 *)(lVar1 + 0x248) = *(undefined4 *)(param_1 + 0x194);
  }
  return;
}



// FUNCTION 14237b4e0 FUN_14237b4e0 body=552 status=ok
// SIG undefined FUN_14237b4e0(void)

void FUN_14237b4e0(longlong param_1,char param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_78;
  float fStack_74;
  
  lVar9 = *(longlong *)(param_1 + 0x178);
  if ((lVar9 != 0) && (param_2 == '\x01')) {
    fVar1 = *(float *)(lVar9 + 0x220);
    fVar4 = *(float *)(lVar9 + 0x224);
    fVar5 = *(float *)(lVar9 + 0x228);
    uVar7 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x228);
    *(undefined4 *)(param_1 + 0x248) = 0;
    fVar15 = *(float *)(puVar3 + 1);
    local_78 = (float)*puVar3;
    fStack_74 = (float)((ulonglong)*puVar3 >> 0x20);
    fVar12 = local_78;
    fVar14 = fStack_74;
    if (*(char *)((longlong)puVar3 + 0xc) == '\x01') {
      fVar12 = local_78 + fVar1;
      fVar14 = fStack_74 + fVar4;
      fVar15 = fVar15 + fVar5;
    }
    iVar6 = *(int *)(param_1 + 0x230);
    uVar8 = uVar7;
    uVar11 = uVar7;
    if (0 < iVar6) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x228);
        uVar10 = (int)uVar11 + 1;
        if ((int)uVar10 < iVar6) {
          uVar2 = *(undefined8 *)(uVar8 + 0x1c + lVar9);
          fVar13 = *(float *)(uVar8 + 0x24 + lVar9);
          local_78 = (float)uVar2;
          fStack_74 = (float)((ulonglong)uVar2 >> 0x20);
          if (*(char *)(uVar8 + 0x28 + lVar9) == '\x01') {
            local_78 = local_78 + fVar1;
            fStack_74 = fStack_74 + fVar4;
            fVar13 = fVar13 + fVar5;
          }
          *(float *)(uVar8 + 0x14 + lVar9) =
               SQRT((fStack_74 - fVar14) * (fStack_74 - fVar14) +
                    (local_78 - fVar12) * (local_78 - fVar12) +
                    (fVar13 - fVar15) * (fVar13 - fVar15));
          *(float *)(param_1 + 0x248) =
               *(float *)(uVar8 + 0x14 + *(longlong *)(param_1 + 0x228)) +
               *(float *)(param_1 + 0x248);
          fVar12 = local_78;
          fVar14 = fStack_74;
          fVar15 = fVar13;
        }
        else {
          *(undefined4 *)(uVar8 + 0x14 + lVar9) = 0;
          *(undefined4 *)(uVar8 + 0x18 + *(longlong *)(param_1 + 0x228)) = 0x3f800000;
          *(undefined4 *)(uVar8 + 0x10 + *(longlong *)(param_1 + 0x228)) = 0x3f800000;
        }
        iVar6 = *(int *)(param_1 + 0x230);
        uVar8 = uVar8 + 0x1c;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < iVar6);
    }
    fVar15 = 0.0;
    if (0 < iVar6) {
      lVar9 = *(longlong *)(param_1 + 0x228);
      uVar8 = uVar7;
      do {
        *(float *)(uVar7 + 0x10 + lVar9) = fVar15;
        lVar9 = *(longlong *)(param_1 + 0x228);
        fVar1 = *(float *)(uVar7 + 0x14 + lVar9);
        if (fVar1 != 0.0) {
          *(float *)(uVar7 + 0x18 + lVar9) = fVar1 / *(float *)(param_1 + 0x248);
          lVar9 = *(longlong *)(param_1 + 0x228);
          fVar15 = fVar15 + *(float *)(uVar7 + 0x18 + lVar9);
        }
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar7 = uVar7 + 0x1c;
      } while ((int)uVar10 < *(int *)(param_1 + 0x230));
    }
  }
  return;
}



// FUNCTION 14237b710 FUN_14237b710 body=35 status=ok
// SIG undefined FUN_14237b710(void)

void FUN_14237b710(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x2d0) = *puVar2;
  *(undefined8 *)(param_1 + 0x2d8) = uVar1;
  return;
}



// FUNCTION 14237b740 FUN_14237b740 body=827 status=ok
// SIG undefined FUN_14237b740(void)

void FUN_14237b740(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  
  fVar16 = *(float *)(param_2 + 0x444);
  local_78 = *(undefined8 *)(param_2 + 0x43c);
  fVar15 = (float)local_78;
  fVar14 = (float)((ulonglong)local_78 >> 0x20);
  fVar11 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
  if (1e-08 < fVar11) {
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar15 = fVar15 * fVar12;
    fVar14 = fVar14 * fVar12;
    fVar16 = fVar16 * fVar12;
    local_78 = CONCAT44(fVar14,fVar15);
  }
  local_70 = fVar16;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_88);
    *(ulonglong *)(param_1 + 0x1cc) = CONCAT44(fVar14,fVar15);
    *(float *)(param_1 + 0x1d4) = fVar16;
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_88._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar7 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar7 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar7);
    plVar6 = plVar7;
  }
  plVar7 = (longlong *)plVar6[1];
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)*plVar6;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar10 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar10 = lVar10 + -1;
          puVar8 = puVar2;
        } while (lVar10 != 0);
        *puVar2 = 0;
        plVar7 = (longlong *)plVar6[1];
      }
      iVar9 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar9 = 0x20;
      plVar6[1] = (longlong)plVar7;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar9 = (int)plVar6[2];
  }
  plVar6[1] = *plVar7;
  *(int *)(plVar6 + 2) = iVar9 + -1;
  *plVar7 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar7 + 1) = 0xff;
  local_80 = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (longlong)&PTR_FUN_145052590;
  plVar7[6] = 0;
  plVar7[3] = CONCAT44(fVar14,fVar15);
  *(float *)(plVar7 + 4) = fVar16;
  plVar7[2] = param_1;
  lVar10 = plVar7[6];
  piVar1 = (int *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1423792d0(plVar7,0,0xff,1);
  if (lVar10 != 0) {
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle(lVar10);
    }
  }
  return;
}



// FUNCTION 14237ba80 FUN_14237ba80 body=110 status=ok
// SIG undefined FUN_14237ba80(void)

void FUN_14237ba80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  float local_res18 [4];
  
  if ((*(byte *)(param_1 + 500) & 1) != 0) {
    lVar1 = FNavigationSystem::GetDefaultSupportedAgent();
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar1 + 0x10);
    (**(code **)(*param_2 + 0x578))(param_2,local_res8,local_res18);
    *(undefined4 *)(param_1 + 0x1c4) = local_res8[0];
    *(float *)(param_1 + 0x1c8) = local_res18[0] * 2.0;
  }
  return;
}



// FUNCTION 14237baf0 FUN_14237baf0 body=156 status=ok
// SIG undefined FUN_14237baf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14237baf0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if ((*(byte *)(param_1 + 500) & 1) != 0) {
    lVar4 = FNavigationSystem::GetDefaultSupportedAgent();
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar4 + 0x10);
    uVar9 = *(uint *)(param_2 + 0x230) & _DAT_146af04d0;
    uVar10 = *(uint *)(param_2 + 0x234) & uRam0000000146af04d4;
    uVar11 = *(uint *)(param_2 + 0x238) & uRam0000000146af04d8;
    uVar12 = *(uint *)(param_2 + 0x23c) & uRam0000000146af04dc;
    auVar6._4_4_ = uVar10;
    auVar6._0_4_ = uVar9;
    auVar6._8_4_ = uVar11;
    auVar6._12_4_ = uVar12;
    auVar7._4_4_ = uVar11;
    auVar7._0_4_ = uVar10;
    auVar7._8_4_ = uVar9;
    auVar7._12_4_ = uVar12;
    auVar7 = minps(auVar6,auVar7);
    auVar2._4_4_ = uVar9;
    auVar2._0_4_ = uVar11;
    auVar2._8_4_ = uVar10;
    auVar2._12_4_ = uVar12;
    auVar7 = minps(auVar7,auVar2);
    *(float *)(param_1 + 0x1c4) = auVar7._0_4_ * *(float *)(param_2 + 0x714);
    uVar9 = *(uint *)(param_2 + 0x230) & _DAT_146af04d0;
    uVar10 = *(uint *)(param_2 + 0x234) & uRam0000000146af04d4;
    uVar11 = *(uint *)(param_2 + 0x238) & uRam0000000146af04d8;
    uVar12 = *(uint *)(param_2 + 0x23c) & uRam0000000146af04dc;
    auVar8._4_4_ = uVar10;
    auVar8._0_4_ = uVar9;
    auVar8._8_4_ = uVar11;
    auVar8._12_4_ = uVar12;
    auVar1._4_4_ = uVar11;
    auVar1._0_4_ = uVar10;
    auVar1._8_4_ = uVar9;
    auVar1._12_4_ = uVar12;
    auVar7 = minps(auVar8,auVar1);
    auVar3._4_4_ = uVar9;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar10;
    auVar3._12_4_ = uVar12;
    auVar7 = minps(auVar7,auVar3);
    fVar5 = auVar7._0_4_ * *(float *)(param_2 + 0x710);
    *(float *)(param_1 + 0x1c8) = fVar5 + fVar5;
  }
  return;
}



// FUNCTION 14237bb90 FUN_14237bb90 body=1413 status=ok
// SIG undefined FUN_14237bb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14237bb90(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  DWORD DVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  longlong local_108;
  longlong lStack_100;
  LARGE_INTEGER local_f8;
  longlong local_f0;
  longlong local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  undefined8 local_c8;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x468);
    if (lVar14 == 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        lVar14 = *(longlong *)(param_1 + 0x3a8);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_d0);
        uVar6 = _DAT_1464aa818;
        uVar3 = _DAT_1464aa810;
        *(uint *)(lVar14 + 0x180) = *(uint *)(lVar14 + 0x180) & 0xfffffffe;
        *(undefined8 *)(lVar14 + 0xb0) = uVar3;
        *(undefined8 *)(lVar14 + 0xb8) = uVar6;
        *(undefined8 *)(lVar14 + 0xc0) = 0;
        *(undefined8 *)(lVar14 + 0xcc) = 0;
        *(undefined4 *)(lVar14 + 200) = 0;
        *(undefined4 *)(lVar14 + 0xd4) = 0;
        *(undefined8 *)(lVar14 + 0xd8) = 0;
        local_110 = 0;
        *(undefined4 *)(lVar14 + 0xe0) = 0;
        QueryPerformanceCounter(&local_d8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_d8.s.LowPart - local_d0._0_4_);
      }
      else {
        pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = TlsGetValue(*pDVar9);
        plVar11 = (longlong *)0x0;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)operator_new(0x18);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = 0;
            plVar10[1] = 0;
            *(undefined4 *)(plVar10 + 2) = 0;
            plVar11 = plVar10;
          }
          TlsSetValue(*pDVar9,plVar11);
          plVar10 = plVar11;
        }
        plVar11 = (longlong *)plVar10[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
            plVar10[1] = (longlong)plVar11;
            if (plVar11 == (longlong *)0x0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar10[1] = (longlong)puVar12;
              lVar14 = 0x1f;
              do {
                puVar2 = puVar12 + 0x20;
                *puVar12 = puVar2;
                lVar14 = lVar14 + -1;
                puVar12 = puVar2;
              } while (lVar14 != 0);
              *puVar2 = 0;
              plVar11 = (longlong *)plVar10[1];
            }
            iVar15 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
          }
          else {
            iVar15 = 0x20;
            plVar10[1] = (longlong)plVar11;
            *(undefined4 *)(plVar10 + 2) = 0x20;
            *plVar10 = 0;
          }
        }
        else {
          iVar15 = (int)plVar10[2];
        }
        plVar10[1] = *plVar11;
        *(int *)(plVar10 + 2) = iVar15 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        local_68 = 0;
        local_60 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *(undefined1 *)(plVar11 + 3) = 0;
        *plVar11 = (longlong)&PTR_FUN_145059d90;
        plVar11[4] = 0;
        plVar11[2] = *(longlong *)(param_1 + 0x3a8);
        lVar14 = plVar11[4];
        piVar1 = (int *)(lVar14 + 0x48);
        if (lVar14 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_e8 = lVar14;
        FUN_140445100(plVar11,0,0xff,1);
        if (lVar14 != 0) {
          LOCK();
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            FGraphEvent::Recycle(local_e8);
          }
        }
      }
    }
    else {
      local_118 = *(undefined4 *)(lVar14 + 0x220);
      uStack_114 = *(undefined4 *)(lVar14 + 0x224);
      local_110 = *(undefined4 *)(lVar14 + 0x228);
      uStack_4c = *(undefined4 *)(lVar14 + 0x22c);
      local_108 = *(longlong *)(lVar14 + 0x210);
      lStack_100 = *(longlong *)(lVar14 + 0x218);
      uVar4 = *(undefined4 *)(lVar14 + 0x2e4);
      uVar5 = *(undefined4 *)(lVar14 + 0x2d8);
      uVar3 = *(undefined8 *)(lVar14 + 0x2d0);
      lVar14 = *(longlong *)(lVar14 + 0x2dc);
      local_58 = local_118;
      uStack_54 = uStack_114;
      uStack_50 = local_110;
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        uVar6 = *(undefined8 *)(param_1 + 0x3a8);
        local_b8 = local_108;
        lStack_b0 = lStack_100;
        local_a8 = CONCAT44(uStack_114,local_118);
        local_a0 = local_110;
        local_c8 = uVar6;
        local_9c = uVar3;
        local_94 = uVar5;
        local_90 = lVar14;
        local_88 = uVar4;
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_e0);
        local_128 = &local_90;
        FUN_142377bd0(uVar6,&local_b8,&local_a8,&local_9c);
        QueryPerformanceCounter(&local_f8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_f8.s.LowPart - local_e0._0_4_);
      }
      else {
        pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = TlsGetValue(*pDVar9);
        plVar11 = (longlong *)0x0;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)operator_new(0x18);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = 0;
            plVar10[1] = 0;
            *(undefined4 *)(plVar10 + 2) = 0;
            plVar11 = plVar10;
          }
          TlsSetValue(*pDVar9,plVar11);
          plVar10 = plVar11;
        }
        plVar11 = (longlong *)plVar10[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
            plVar10[1] = (longlong)plVar11;
            if (plVar11 == (longlong *)0x0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar10[1] = (longlong)puVar12;
              lVar13 = 0x1f;
              do {
                puVar2 = puVar12 + 0x20;
                *puVar12 = puVar2;
                lVar13 = lVar13 + -1;
                puVar12 = puVar2;
              } while (lVar13 != 0);
              *puVar2 = 0;
              plVar11 = (longlong *)plVar10[1];
            }
            iVar15 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
          }
          else {
            iVar15 = 0x20;
            plVar10[1] = (longlong)plVar11;
            *(undefined4 *)(plVar10 + 2) = 0x20;
            *plVar10 = 0;
          }
        }
        else {
          iVar15 = (int)plVar10[2];
        }
        plVar10[1] = *plVar11;
        *(int *)(plVar10 + 2) = iVar15 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        local_78 = 0;
        local_70 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_145059d80;
        *(undefined1 *)(plVar11 + 0xc) = 0;
        plVar11[0xd] = 0;
        plVar11[2] = *(longlong *)(param_1 + 0x3a8);
        plVar11[4] = local_108;
        plVar11[5] = lStack_100;
        plVar11[6] = CONCAT44(uStack_114,local_118);
        *(undefined8 *)((longlong)plVar11 + 0x3c) = uVar3;
        plVar11[9] = lVar14;
        *(undefined4 *)(plVar11 + 7) = local_110;
        *(undefined4 *)((longlong)plVar11 + 0x44) = uVar5;
        *(undefined4 *)(plVar11 + 10) = uVar4;
        lVar14 = plVar11[0xd];
        piVar1 = (int *)(lVar14 + 0x48);
        if (lVar14 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_f0 = lVar14;
        FUN_141c2c150(local_118,0,0xff,1);
        if (lVar14 != 0) {
          LOCK();
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            FGraphEvent::Recycle(local_f0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14237c120 FUN_14237c120 body=555 status=ok
// SIG undefined FUN_14237c120(void)

void FUN_14237c120(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_48);
    *(float *)(param_1 + 0x1c0) = param_2;
    if (param_2 <= 1e-05) {
      param_2 = 1e-05;
    }
    *(float *)(param_1 + 0x1c4) = 1.0 / param_2;
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_48._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_40 = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_145059d70;
  plVar9[5] = 0;
  *(float *)(plVar9 + 3) = param_2;
  plVar9[2] = param_1;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar7;
  FUN_1409421c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14237c350 FUN_14237c350 body=53 status=ok
// SIG undefined FUN_14237c350(void)

void FUN_14237c350(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x37) & 2) == 0) {
    return;
  }
  if ((param_1[0x2f] != 0) && ((*(byte *)((longlong)param_1 + 0xba) & 2) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014237c371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014237c37d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,0);
  return;
}



// FUNCTION 14237c390 FUN_14237c390 body=58 status=ok
// SIG undefined FUN_14237c390(void)

undefined1 FUN_14237c390(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142379580();
  if (((cVar1 != '\0') && ((*(uint *)(param_1 + 0x180) & 0x40000) != 0)) &&
     (0.0 < *(float *)(param_1 + 0x1d8))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14237c3d0 FUN_14237c3d0 body=135 status=ok
// SIG undefined FUN_14237c3d0(void)

void * FUN_14237c3d0(void *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)((longlong)param_1 + 0x1e8) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x1ec) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
    return param_1;
  }
  FUN_142395fb0(param_1,iVar1);
  _Dst = *(void **)((longlong)param_1 + 0x1e0);
  if (*(void **)((longlong)param_1 + 0x1e0) == (void *)0x0) {
    _Dst = param_1;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 0xa0);
  return param_1;
}



// FUNCTION 14237c460 FUN_14237c460 body=100 status=ok
// SIG undefined FUN_14237c460(void)

void FUN_14237c460(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
                (param_1);
      iVar2 = (int)param_1[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar2 * 0xa0 + *param_1),(void *)*param_2,(longlong)iVar1 * 0xa0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 14237c4d0 FUN_14237c4d0 body=395 status=ok
// SIG undefined FUN_14237c4d0(void)

int * FUN_14237c4d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar3 = (uint *)*param_3;
  puVar4 = (uint *)param_3[1];
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = *puVar4;
  puVar1[3] = puVar4[1];
  puVar1[4] = 0xffffffff;
  cVar5 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar9 = (puVar1[1] ^ *puVar1) & (int)param_1[9] - 1U;
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
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 14237c660 FUN_14237c660 body=485 status=ok
// SIG undefined FUN_14237c660(void)

void FUN_14237c660(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar10 = iVar5;
joined_r0x00014237c699:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar9 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          lVar7 = FWeakObjectPtr::Get(param_1 + (longlong)iVar6 + 2);
          lVar8 = FWeakObjectPtr::Get(param_1 + iVar9);
          if (*(int *)(lVar7 + 0x494) < *(int *)(lVar8 + 0x494)) {
            iVar9 = iVar6;
          }
          iVar9 = iVar9 + 1;
        }
        puVar11 = param_1 + iVar5;
        lVar7 = FWeakObjectPtr::Get(puVar11);
        puVar1 = param_1 + iVar9;
        lVar8 = FWeakObjectPtr::Get(puVar1);
        if (*(int *)(lVar7 + 0x494) < *(int *)(lVar8 + 0x494)) {
          if (puVar11 != puVar1) {
            uVar3 = *puVar11;
            *puVar11 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar6 = iVar9 * 2 + 1;
          iVar5 = iVar9;
          goto joined_r0x00014237c699;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar10 + -1;
      iVar4 = iVar6;
      iVar10 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + param_2;
    do {
      if (param_1 != puVar11) {
        uVar3 = *param_1;
        *param_1 = *puVar11;
        *puVar11 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            lVar7 = FWeakObjectPtr::Get(param_1 + (longlong)iVar4 + 2);
            lVar8 = FWeakObjectPtr::Get(param_1 + iVar6);
            if (*(int *)(lVar7 + 0x494) < *(int *)(lVar8 + 0x494)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          puVar1 = param_1 + iVar5;
          lVar7 = FWeakObjectPtr::Get(puVar1);
          puVar2 = param_1 + iVar6;
          lVar8 = FWeakObjectPtr::Get(puVar2);
          if (*(int *)(lVar8 + 0x494) <= *(int *)(lVar7 + 0x494)) break;
          if (puVar1 != puVar2) {
            uVar3 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14237c850 HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=443 status=ok
// SIG undefined HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar8 = iVar6;
    iVar9 = iVar5;
joined_r0x00014237c896:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_14237fc90(param_4,param_1 + (iVar6 + 2),param_1 + iVar7);
          if (cVar4 != '\0') {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        cVar4 = FUN_14237fc90(param_4,puVar1,puVar10);
        if (cVar4 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014237c896;
        }
      }
      iVar6 = iVar8 + -2;
      iVar5 = iVar9 + -1;
      iVar8 = iVar6;
      iVar9 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar5 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            cVar4 = FUN_14237fc90(param_4,param_1 + (iVar6 + 2),param_1 + iVar8);
            if (cVar4 != '\0') {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = param_1 + iVar8;
          puVar2 = param_1 + iVar5;
          cVar4 = FUN_14237fc90(param_4,puVar2,puVar1);
          if (cVar4 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14237ca10 FUN_14237ca10 body=111 status=ok
// SIG undefined FUN_14237ca10(void)

longlong FUN_14237ca10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0xa0 + lVar1;
  if (lVar1 != lVar2) {
    lVar3 = lVar1;
    do {
      if (((*(int *)(param_2 + 0x7c) == *(int *)(lVar3 + 0x7c)) &&
          (*(int *)(param_2 + 0x80) == *(int *)(lVar3 + 0x80))) &&
         (*(int *)(param_2 + 0x68) == *(int *)(lVar3 + 0x68))) {
        return (lVar3 - lVar1) / 0xa0;
      }
      lVar3 = lVar3 + 0xa0;
    } while (lVar3 != lVar2);
  }
  return 0xffffffff;
}



// FUNCTION 14237ca80 FUN_14237ca80 body=816 status=ok
// SIG undefined FUN_14237ca80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14237ca80(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auStack_398 [32];
  int local_378;
  longlong *local_370;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    local_338 = (undefined4)(longlong)(fVar10 + fVar10);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar5 = &local_348;
    do {
      puVar4 = (undefined8 *)*plVar5;
      puVar6 = (undefined8 *)plVar5[1];
      local_358 = plVar5[2];
      local_378 = (int)local_358;
      lVar3 = ((longlong)puVar6 - (longlong)puVar4 >> 3) + 1;
      puVar9 = puVar4;
      local_370 = plVar5;
      if ((int)local_358 != 0) {
LAB_14237cb62:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar4 = puVar9 + (lVar3 >> 1);
          if (puVar4 != puVar9) {
            uVar1 = *puVar4;
            *puVar4 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar7 = puVar6 + 1;
          puVar4 = puVar9;
LAB_14237cba0:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar6) goto code_r0x00014237cba9;
          goto LAB_14237cbd0;
        }
        for (; puVar7 = puVar9, puVar4 = puVar9, puVar9 < puVar6; puVar6 = puVar6 + -1) {
          while (puVar8 = puVar7, puVar4 = puVar4 + 1, puVar4 <= puVar6) {
            lVar3 = FWeakObjectPtr::Get(puVar8);
            lVar2 = FWeakObjectPtr::Get(puVar4);
            puVar7 = puVar4;
            if (*(int *)(lVar2 + 0x494) <= *(int *)(lVar3 + 0x494)) {
              puVar7 = puVar8;
            }
          }
          if (puVar8 != puVar6) {
            uVar1 = *puVar8;
            *puVar8 = *puVar6;
            *puVar6 = uVar1;
          }
          plVar5 = local_370;
        }
        goto LAB_14237ccd6;
      }
LAB_14237ccc7:
      FUN_14237c660(puVar4,lVar3,param_3,param_4);
LAB_14237ccd6:
      plVar5 = plVar5 + -3;
    } while (&local_348 <= plVar5);
  }
  return;
code_r0x00014237cba9:
  lVar3 = FWeakObjectPtr::Get(puVar9);
  lVar2 = FWeakObjectPtr::Get(puVar4);
  if (*(int *)(lVar2 + 0x494) <= *(int *)(lVar3 + 0x494)) goto LAB_14237cba0;
LAB_14237cbd0:
  do {
    puVar8 = puVar7;
    puVar7 = puVar8 + -1;
    if (puVar7 <= puVar9) break;
    lVar3 = FWeakObjectPtr::Get(puVar7);
    lVar2 = FWeakObjectPtr::Get(puVar9);
  } while (*(int *)(lVar2 + 0x494) <= *(int *)(lVar3 + 0x494));
  if (puVar4 <= puVar7) {
    if (puVar4 != puVar7) {
      uVar1 = *puVar4;
      *puVar4 = *puVar7;
      *puVar7 = uVar1;
    }
    goto LAB_14237cba0;
  }
  if (puVar9 != puVar7) {
    uVar1 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar1;
  }
  local_378 = local_378 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar6 - (longlong)puVar4 & 0xfffffffffffffff8U)) {
    if (puVar4 < puVar6) {
      *plVar5 = (longlong)puVar4;
      plVar5[1] = (longlong)puVar6;
      *(int *)(plVar5 + 2) = local_378;
      plVar5 = plVar5 + 3;
      local_370 = plVar5;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_14237ccd6;
    puVar6 = puVar8 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar5 = (longlong)puVar9;
      plVar5[1] = (longlong)(puVar8 + -2);
      *(int *)(plVar5 + 2) = local_378;
      plVar5 = plVar5 + 3;
      local_370 = plVar5;
    }
    if (puVar6 <= puVar4) goto LAB_14237ccd6;
  }
  lVar3 = ((longlong)puVar6 - (longlong)puVar4 >> 3) + 1;
  puVar9 = puVar4;
  if (local_378 == 0) goto LAB_14237ccc7;
  goto LAB_14237cb62;
}



// FUNCTION 14237cdb0 IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=706 status=ok
// SIG undefined IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
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
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14237ce90:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_14237cec7:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x00014237ced0;
          goto LAB_14237cee2;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            cVar2 = FUN_14237fc90(param_4,puVar4,puVar6);
            if (cVar2 != '\0') {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_14237cfbf;
      }
LAB_14237cfb0:
      HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_14237cfbf:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x00014237ced0:
  cVar2 = FUN_14237fc90(param_4,puVar9,puVar6);
  if (cVar2 == '\0') goto LAB_14237cec7;
LAB_14237cee2:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    cVar2 = FUN_14237fc90(param_4,puVar4,puVar9);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_14237cec7;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_14237cfbf;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_14237cfbf;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_14237cfb0;
  goto LAB_14237ce90;
}



// FUNCTION 14237d080 MultiFind<FDefaultAllocator> body=480 status=ok
// SIG undefined MultiFind<FDefaultAllocator>(void)

void TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
     ::MultiFind<FDefaultAllocator>(longlong *param_1,uint *param_2,longlong *param_3,char param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar11 +
                    ((longlong)(int)(uVar4 ^ uVar5) & (longlong)(int)param_1[9] - 1U) * 4);
    do {
      iVar9 = iVar6;
      iVar6 = iVar9;
      if (iVar9 == -1) break;
      lVar12 = (longlong)iVar9;
      lVar7 = *param_1;
      iVar6 = *(int *)(lVar7 + 0x10 + lVar12 * 0x18);
      local_2c = *(uint *)(lVar7 + 4 + lVar12 * 0x18);
      local_30 = *(uint *)(lVar7 + lVar12 * 0x18);
      local_38 = uVar4;
      local_34 = uVar5;
      cVar10 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_30,&local_38);
    } while (cVar10 == '\0');
joined_r0x00014237d146:
    iVar14 = iVar6;
    if (iVar9 != -1) {
      iVar6 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar6);
      }
      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar6 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        lVar7 = *param_1;
        *puVar1 = *(undefined4 *)(lVar7 + 8 + (longlong)iVar9 * 0x18);
        puVar1[1] = *(undefined4 *)(lVar7 + (longlong)iVar9 * 0x18 + 0xc);
      }
      if (iVar14 == -1) goto LAB_14237d1fb;
      do {
        lVar12 = (longlong)iVar14;
        lVar7 = *param_1;
        iVar6 = *(int *)(lVar7 + 0x10 + lVar12 * 0x18);
        local_34 = *(uint *)(lVar7 + 4 + lVar12 * 0x18);
        local_38 = *(uint *)(lVar7 + lVar12 * 0x18);
        local_30 = uVar4;
        local_2c = uVar5;
        cVar10 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_38,&local_30);
        iVar9 = iVar14;
        if (cVar10 != '\0') break;
        iVar14 = iVar6;
        iVar9 = iVar6;
      } while (iVar6 != -1);
      goto joined_r0x00014237d146;
    }
  }
LAB_14237d1fb:
  if (param_4 != '\0') {
    iVar6 = (int)param_3[1];
    puVar8 = (undefined8 *)*param_3;
    if (0 < iVar6 / 2) {
      uVar15 = (ulonglong)(uint)(iVar6 / 2);
      puVar13 = puVar8;
      do {
        iVar6 = iVar6 + -1;
        puVar2 = puVar8 + iVar6;
        if (puVar13 != puVar2) {
          uVar3 = *puVar13;
          *puVar13 = *puVar2;
          *puVar2 = uVar3;
        }
        puVar13 = puVar13 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  return;
}



// FUNCTION 14237d260 FUN_14237d260 body=578 status=ok
// SIG undefined FUN_14237d260(void)

undefined8 * FUN_14237d260(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  FUN_141784790(param_2,L"NewReflectionComponent");
  uVar2 = AXBakeableSplineMesh::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"NewReflectionComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_14237d9d0(param_1,param_2);
  lVar1 = param_1[0x8b];
  *param_1 = &PTR_FUN_144091548;
  *(undefined8 *)(lVar1 + 0x204) = 0x447a0000447a0000;
  *(undefined4 *)(lVar1 + 0x20c) = 0x43c80000;
  param_1[0x2d] = lVar1;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"DrawBox0",1);
  uVar2 = *puVar3;
  uVar4 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  local_res8 = 0;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  *(byte *)(plVar5 + 0xe0) = *(byte *)(plVar5 + 0xe0) | 1;
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  plVar5[0xe2] = 0x3f8000003f800000;
  *(undefined4 *)(plVar5 + 0xe3) = 0x3f800000;
  *(longlong **)(lVar1 + 0x348) = plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"DrawBox1",1);
  uVar2 = *puVar3;
  uVar4 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  local_res8 = 0;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  *(byte *)(plVar5 + 0xe0) = *(byte *)(plVar5 + 0xe0) | 1;
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  plVar5[0xe2] = 0x3f8000003f800000;
  *(undefined4 *)(plVar5 + 0xde) = 0xff645a28;
  *(undefined4 *)(plVar5 + 0xe3) = 0x3f800000;
  *(longlong **)(lVar1 + 0x350) = plVar5;
  return param_1;
}



// FUNCTION 14237d4b0 FUN_14237d4b0 body=737 status=ok
// SIG undefined FUN_14237d4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14237d4b0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_78 [32];
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_14237db50();
  *(undefined1 *)(param_1 + 0x8d) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__145064b20;
  puVar4 = (undefined8 *)FName::FName(&local_98,L"NewPlanarReflectionComponent",1);
  uVar6 = *puVar4;
  uVar5 = FUN_1429db4f0();
  local_b8 = 0;
  local_c0 = 0;
  local_c8._0_1_ = 1;
  uVar6 = FUN_141752410(param_1,uVar6,uVar5,uVar5);
  param_1[0x8c] = uVar6;
  param_1[0x2d] = uVar6;
  puVar4 = (undefined8 *)FName::FName(&local_a8,L"DrawBox0",1);
  uVar6 = *puVar4;
  uVar5 = FUN_14290f330();
  local_b8 = 0;
  local_c0 = 0;
  local_c8._0_1_ = 1;
  plVar7 = (longlong *)FUN_141752410(param_1,uVar6,uVar5,uVar5);
  local_98 = 0;
  FUN_142399e30(plVar7,param_1[0x8c],0);
  *(byte *)(plVar7 + 0x5f) = *(byte *)(plVar7 + 0x5f) | 0x40;
  (**(code **)(*plVar7 + 0x640))(plVar7,DAT_146aefc58);
  fVar10 = 0.0;
  local_90 = 0;
  local_a8 = 0;
  *(longlong **)(param_1[0x8c] + 0x3c0) = plVar7;
  lVar1 = param_1[0x8b];
  fStack_a0 = 0.0;
  if (*(longlong *)(lVar1 + 400) == 0) {
    local_a8 = 0;
    fStack_a0 = 0.0;
    local_c8 = (ulonglong)local_c8._1_7_ << 8;
    FUN_142398470(lVar1,&local_a8,0,0);
  }
  else {
    uVar6 = FRotator::Quaternion(&local_a8,0);
    FUN_14238ced0(lVar1,&local_98,uVar6);
    local_a8 = *(undefined8 *)(lVar1 + 0x1ec);
    fStack_a0 = *(float *)(lVar1 + 500);
    local_c0 = 0;
    local_c8 = 0;
    FUN_142397be0(lVar1,&local_a8,&local_98,0);
  }
  plVar7 = (longlong *)param_1[0x8b];
  fVar8 = 4.0;
  fStack_a0 = 1.0;
  fVar9 = 4.0;
  plVar2 = (longlong *)plVar7[0x32];
  fVar3 = 1.0;
  if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar7 + 0x24c) & 0x10) == 0)) {
    (**(code **)(*plVar2 + 0x420))(plVar2,local_78,plVar7[0x33],0);
    uStack_9c = uStack_4c;
    if (1e-08 < ABS(local_58)) {
      fVar8 = 1.0 / local_58;
    }
    else {
      fVar8 = 0.0;
    }
    if (1e-08 < ABS(fStack_54)) {
      fVar9 = 1.0 / fStack_54;
    }
    else {
      fVar9 = 0.0;
    }
    if (1e-08 < ABS(fStack_50)) {
      fVar10 = 1.0 / fStack_50;
    }
    fVar8 = fVar8 * 4.0;
    fVar9 = fVar9 * 4.0;
    fVar3 = fVar10;
  }
  local_a8 = CONCAT44(fVar9,fVar8);
  fStack_a0 = fVar3;
  (**(code **)(*plVar7 + 0x3f8))(plVar7,&local_a8);
  local_98 = 0;
  FUN_142399e30(param_1[0x8b],param_1[0x8c],0);
  return param_1;
}



// FUNCTION 14237d7a0 FUN_14237d7a0 body=547 status=ok
// SIG undefined FUN_14237d7a0(void)

undefined8 * FUN_14237d7a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  FUN_141784790(param_2,L"NewReflectionComponent");
  uVar2 = AXBakeableSplineMesh::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"NewReflectionComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_14237d9d0(param_1,param_2);
  lVar1 = param_1[0x8b];
  *param_1 = &PTR_FUN_144091548;
  *(undefined8 *)(lVar1 + 0x204) = 0x447a00003f800000;
  *(undefined4 *)(lVar1 + 0x20c) = 0x447a0000;
  param_1[0x2d] = lVar1;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"DrawRadius0",1);
  uVar2 = *puVar3;
  uVar4 = FUN_142928100();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  local_res8 = 0;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  *(byte *)(plVar5 + 0xe0) = *(byte *)(plVar5 + 0xe0) | 1;
  *(byte *)((longlong)plVar5 + 0x24c) = *(byte *)((longlong)plVar5 + 0x24c) | 0x10;
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  *(longlong **)(lVar1 + 0x348) = plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"DrawBox1",1);
  uVar2 = *puVar3;
  uVar4 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  local_res8 = 0;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  *(byte *)(plVar5 + 0xe0) = *(byte *)(plVar5 + 0xe0) | 1;
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  plVar5[0xe2] = 0x3f8000003f800000;
  *(undefined4 *)(plVar5 + 0xde) = 0xff645a28;
  *(undefined4 *)(plVar5 + 0xe3) = 0x3f800000;
  *(longlong **)(lVar1 + 0x350) = plVar5;
  return param_1;
}



// FUNCTION 14237d9d0 FUN_14237d9d0 body=119 status=ok
// SIG undefined FUN_14237d9d0(void)

undefined8 * FUN_14237d9d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144091548;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NewReflectionComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429f8200();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,1,0);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x80;
  param_1[0x8b] = uVar3;
  return param_1;
}



// FUNCTION 14237da50 FUN_14237da50 body=249 status=ok
// SIG undefined FUN_14237da50(void)

undefined8 * FUN_14237da50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  FUN_14237db50();
  *param_1 = &PTR__scalar_deleting_destructor__145063240;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"DrawFrust0",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142927f80();
  lVar3 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0x8d] = lVar3;
  local_res8 = 0;
  *(byte *)(lVar3 + 200) = *(byte *)(lVar3 + 200) | 4;
  FUN_142399e30(param_1[0x8d],param_1[0x8b],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"NewSceneCaptureComponent2D",1);
  uVar4 = *puVar1;
  uVar2 = FUN_1429fde70();
  uVar4 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar4;
  local_res8 = 0;
  FUN_142399e30(uVar4,param_1[0x8b],0);
  return param_1;
}



// FUNCTION 14237db50 FUN_14237db50 body=188 status=ok
// SIG undefined FUN_14237db50(void)

undefined8 * FUN_14237db50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CamMesh0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc58);
  *(byte *)(param_1[0x8b] + 0x24c) = *(byte *)(param_1[0x8b] + 0x24c) | 0x40;
  *(byte *)(param_1[0x8b] + 0x2f1) = *(byte *)(param_1[0x8b] + 0x2f1) & 0xef;
  *(byte *)(param_1[0x8b] + 0x664) = *(byte *)(param_1[0x8b] + 0x664) & 0xfd;
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 14237dc10 FUN_14237dc10 body=249 status=ok
// SIG undefined FUN_14237dc10(void)

undefined8 * FUN_14237dc10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  FUN_14237db50();
  *param_1 = &PTR__scalar_deleting_destructor__145063eb0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"DrawFrust0",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142927f80();
  lVar3 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0x8d] = lVar3;
  local_res8 = 0;
  *(byte *)(lVar3 + 200) = *(byte *)(lVar3 + 200) | 4;
  FUN_142399e30(param_1[0x8d],param_1[0x8b],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"NewSceneCaptureComponentCube",1);
  uVar4 = *puVar1;
  uVar2 = FUN_1429fdff0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar4;
  local_res8 = 0;
  FUN_142399e30(uVar4,param_1[0x8b],0);
  return param_1;
}



// FUNCTION 14237dd10 FUN_14237dd10 body=441 status=ok
// SIG undefined FUN_14237dd10(void)

undefined8 * FUN_14237dd10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  FUN_141784790(param_2,L"NewReflectionComponent");
  uVar2 = UAnimBlueprintGeneratedClass::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"NewReflectionComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_14237d9d0(param_1,param_2);
  lVar1 = param_1[0x8b];
  *param_1 = &PTR_FUN_145060fc0;
  param_1[0x2d] = lVar1;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"DrawRadius0",1);
  uVar2 = *puVar3;
  uVar4 = FUN_142928100();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  local_res8 = 0;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  *(byte *)(plVar5 + 0xe0) = *(byte *)(plVar5 + 0xe0) | 1;
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  *(longlong **)(lVar1 + 0x348) = plVar5;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"DrawRadius1",1);
  uVar2 = *puVar3;
  uVar4 = FUN_142928100();
  uVar2 = FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  param_1[0x8c] = uVar2;
  local_res8 = 0;
  FUN_142399e30(uVar2,param_1[0x8b],0);
  *(byte *)(param_1[0x8c] + 0x700) = *(byte *)(param_1[0x8c] + 0x700) | 1;
  *(byte *)(param_1[0x8c] + 0x2f8) = *(byte *)(param_1[0x8c] + 0x2f8) | 0x40;
  (**(code **)(*(longlong *)param_1[0x8c] + 0x640))((longlong *)param_1[0x8c],DAT_146aefc58);
  *(undefined4 *)(param_1[0x8c] + 0x6f0) = 0xff645a28;
  return param_1;
}



// FUNCTION 14237ded0 FUN_14237ded0 body=191 status=ok
// SIG undefined FUN_14237ded0(void)

undefined1 * FUN_14237ded0(undefined1 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0x90);
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x118);
  }
  FWeakObjectPtr::operator=(param_1 + 0x74,uVar1);
  FWeakObjectPtr::operator=(param_1 + 0x7c,param_2);
  *(undefined4 *)(param_1 + 0x68) = param_3;
  return param_1;
}



// FUNCTION 14237df90 FUN_14237df90 body=178 status=ok
// SIG undefined FUN_14237df90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14237df90(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_14237e540();
  *param_1 = &PTR_FUN_14505f6b8;
  uVar2 = uRam0000000146af083c;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(uint *)((longlong)param_1 + 0x6c) = uVar2;
  uVar2 = uRam0000000146af0834 & uRam0000000146af0844;
  uVar3 = uRam0000000146af0838 & uRam0000000146af0848;
  uVar4 = uRam0000000146af083c & uRam0000000146af084c;
  *(uint *)(param_1 + 0x10) = _DAT_146af0830 & _DAT_146af0840;
  *(uint *)((longlong)param_1 + 0x84) = uVar2;
  *(uint *)(param_1 + 0x11) = uVar3;
  *(uint *)((longlong)param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x350);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x650);
  if ((*(byte *)(param_2 + 0x24c) & 1) == 0) {
    FUN_140942fb0(param_2,0,0);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x218);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x210);
  param_1[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x220);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x238);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x230);
  param_1[0x11] = uVar1;
  return param_1;
}



// FUNCTION 14237e050 FUN_14237e050 body=723 status=ok
// SIG undefined FUN_14237e050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14237e050(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_68 [2];
  uint local_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  plVar15 = (longlong *)0x0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[7] = param_2[0x5e];
  *(int *)(param_1 + 8) = (int)param_2[0x5f];
  lVar9 = UAnimBlueprintGeneratedClass::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  plVar13 = param_2;
  if (!bVar8) {
    plVar13 = plVar15;
  }
  lVar9 = AXBakeableSplineMesh::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  plVar14 = param_2;
  if (!bVar8) {
    plVar14 = plVar15;
  }
  lVar9 = AXBakeableSplineMesh::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  plVar11 = param_2;
  if (!bVar8) {
    plVar11 = plVar15;
  }
  if (plVar13 == (longlong *)0x0) {
    if (plVar14 == (longlong *)0x0) {
      uVar16 = *(undefined4 *)((longlong)param_1 + 0x1c);
      if (plVar11 != (longlong *)0x0) {
        uVar16 = 2;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar16;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
      *(int *)((longlong)param_1 + 0x9c) = (int)plVar14[0x68];
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  *param_1 = param_2;
  param_1[2] = param_2[100];
  lVar9 = FUN_14238c0b0(param_2);
  if (lVar9 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(lVar9 + 4);
  }
  *(undefined4 *)(param_1 + 3) = uVar16;
  fVar1 = *(float *)(param_2 + 0x42);
  fVar2 = *(float *)((longlong)param_2 + 0x214);
  fVar3 = *(float *)(param_2 + 0x43);
  fVar4 = *(float *)((longlong)param_2 + 0x21c);
  fVar17 = fVar2 + fVar2;
  fVar19 = fVar3 + fVar3;
  fVar20 = fVar1 * (fVar1 + fVar1);
  fVar18 = (fVar1 + fVar1) * fVar4;
  fVar5 = *(float *)(param_2 + 0x46);
  fVar6 = *(float *)((longlong)param_2 + 0x234);
  fVar7 = *(float *)(param_2 + 0x47);
  fStack_54 = (fVar19 * fVar4 + fVar17 * fVar1) * fVar5;
  fStack_40 = (fVar18 + fVar19 * fVar2) * fVar6;
  local_38 = (fVar17 * fVar4 + fVar19 * fVar1) * fVar7;
  local_48 = fVar6 * (fVar17 * fVar1 - fVar19 * fVar4);
  fStack_34 = fVar7 * (fVar19 * fVar2 - fVar18);
  fStack_50 = fVar5 * (fVar19 * fVar1 - fVar17 * fVar4);
  local_58 = (uint)((_DAT_146af0830 - (fVar3 * fVar19 + fVar2 * fVar17)) * fVar5) & _DAT_146af0840;
  uStack_44 = (uint)((fRam0000000146af0834 - (fVar3 * fVar19 + fVar20)) * fVar6) &
              uRam0000000146af0844;
  uStack_30 = (uint)((fRam0000000146af0838 - (fVar2 * fVar17 + fVar20)) * fVar7) &
              uRam0000000146af0848;
  uStack_4c = (uint)((fRam0000000146af083c - (fVar20 + fVar20)) *
                    *(float *)((longlong)param_2 + 0x23c)) & uRam0000000146af084c;
  local_28 = (undefined4)param_2[0x44];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x224);
  uStack_20 = (undefined4)param_2[0x45];
  fStack_1c = fRam0000000146af083c;
  uStack_3c = uStack_4c;
  uStack_2c = uStack_4c;
  FReflectionCaptureProxy::SetTransform(param_1,&local_58);
  uVar16 = (**(code **)(*param_2 + 0x550))(param_2);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar16;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((longlong)param_2 + 0x2ec);
  puVar10 = (undefined8 *)UObjectBaseUtility::GetPathName(*param_1,local_68,0);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar10;
  }
  uVar16 = FUN_140438070(puVar12);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar16;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  *(bool *)(param_1 + 0x18) = lVar9 == 0;
  return param_1;
}



// FUNCTION 14237e330 FUN_14237e330 body=414 status=ok
// SIG undefined FUN_14237e330(void)

undefined8 * FUN_14237e330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0xc9);
  *(undefined1 *)((longlong)param_1 + 0xca) = *(undefined1 *)((longlong)param_2 + 0xca);
  *(undefined1 *)((longlong)param_1 + 0xcb) = *(undefined1 *)((longlong)param_2 + 0xcb);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)((longlong)param_2 + 0xcc);
  *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)((longlong)param_2 + 0xcd);
  *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)((longlong)param_2 + 0xce);
  *(undefined1 *)((longlong)param_1 + 0xcf) = *(undefined1 *)((longlong)param_2 + 0xcf);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0xd1) = *(undefined1 *)((longlong)param_2 + 0xd1);
  *(undefined1 *)((longlong)param_1 + 0xd2) = *(undefined1 *)((longlong)param_2 + 0xd2);
  *(undefined1 *)((longlong)param_1 + 0xd3) = *(undefined1 *)((longlong)param_2 + 0xd3);
  *(undefined1 *)((longlong)param_1 + 0xd4) = *(undefined1 *)((longlong)param_2 + 0xd4);
  *(undefined1 *)((longlong)param_1 + 0xd5) = *(undefined1 *)((longlong)param_2 + 0xd5);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  return param_1;
}



// FUNCTION 14237e4d0 FUN_14237e4d0 body=110 status=ok
// SIG undefined FUN_14237e4d0(void)

undefined8 * FUN_14237e4d0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 6,0,0x80);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  return param_1;
}



// FUNCTION 14237e540 FUN_14237e540 body=390 status=ok
// SIG undefined FUN_14237e540(void)

undefined8 * FUN_14237e540(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_58;
  longlong lStack_50;
  
  FUN_142324d10();
  *param_1 = &PTR_FUN_144f9ee40;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = *(longlong *)(param_2 + 0x118);
  iVar10 = *(int *)(param_2 + 0x1a8) + -1;
  lVar12 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x1a0) + lVar12 * 8);
      if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x118) == lVar1)) &&
          (cVar9 = FUN_142340f60(lVar2), cVar9 == '\0')) &&
         ((*(uint *)(lVar2 + 8) >> 0x12 & 1) == 0)) {
        FRotator::Quaternion(lVar2 + 0x1f8,&local_58);
        lVar8 = lStack_50;
        lVar7 = local_58;
        auVar5 = *(undefined1 (*) [12])(lVar2 + 0x1ec);
        iVar10 = *(int *)(param_1 + 0xb);
        auVar6 = *(undefined1 (*) [12])(lVar2 + 0x204);
        *(int *)(param_1 + 0xb) = iVar10 + 1;
        if (*(int *)((longlong)param_1 + 0x5c) < iVar10 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 10,iVar10);
        }
        plVar11 = (longlong *)((longlong)iVar10 * 0x40 + param_1[10]);
        *plVar11 = lVar2;
        plVar11[2] = lVar7;
        plVar11[3] = lVar8;
        auVar3._12_4_ = 0;
        auVar3._0_12_ = auVar5;
        *(undefined1 (*) [16])(plVar11 + 4) = auVar3;
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar6;
        *(undefined1 (*) [16])(plVar11 + 6) = auVar4;
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return param_1;
}



// FUNCTION 14237e6d0 FUN_14237e6d0 body=506 status=ok
// SIG undefined FUN_14237e6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14237e6d0(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  uVar7 = uRam0000000146af083c;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(uint *)((longlong)param_1 + 0x2c) = uVar7;
  uVar7 = uRam0000000146af0834 & uRam0000000146af0844;
  uVar8 = uRam0000000146af0838 & uRam0000000146af0848;
  uVar9 = uRam0000000146af083c & uRam0000000146af084c;
  *(uint *)(param_1 + 8) = _DAT_146af0830 & _DAT_146af0840;
  *(uint *)((longlong)param_1 + 0x44) = uVar7;
  *(uint *)(param_1 + 9) = uVar8;
  *(uint *)((longlong)param_1 + 0x4c) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xfe;
  *(byte *)(param_1 + 0x37) = param_3 == 1 | *(byte *)(param_1 + 0x37) & 0xf9 | param_4 << 2;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    lVar5 = lVar6;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar7 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      if (0 < *(int *)(param_2 + 0x2a8)) {
        lVar6 = *(longlong *)
                 (*(longlong *)(param_2 + 0x2a0) + -8 + (longlong)*(int *)(param_2 + 0x2a8) * 8);
      }
      param_1[1] = lVar6;
      lVar5 = *(longlong *)(param_2 + 0x218);
      param_1[4] = *(longlong *)(param_2 + 0x210);
      param_1[5] = lVar5;
      uVar2 = *(undefined4 *)(param_2 + 0x224);
      uVar3 = *(undefined4 *)(param_2 + 0x228);
      uVar4 = *(undefined4 *)(param_2 + 0x22c);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x220);
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
      *(undefined4 *)(param_1 + 7) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
      lVar5 = *(longlong *)(param_2 + 0x238);
      param_1[8] = *(longlong *)(param_2 + 0x230);
      param_1[9] = lVar5;
      param_1[10] = *(longlong *)(param_2 + 0x1ec);
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 500);
      *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x1f8);
      *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 0x200);
      param_1[0xd] = *(longlong *)(param_2 + 0x204);
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x20c);
      if (((param_3 == 0) && (lVar6 != 0)) && ((*(byte *)(lVar6 + 0x1b8) & 1) != 0)) {
        if ((DAT_146af082c < 100) || (((byte)DAT_1468c21b0 & 0x1f) == 0)) {
          DAT_146af082c = DAT_146af082c + 1;
        }
        *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 1;
      }
      if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
        return param_1;
      }
      iVar1 = *(int *)(param_2 + 0x2a8);
      *(int *)(param_2 + 0x2a8) = iVar1 + 1;
      if (*(int *)(param_2 + 0x2ac) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_2 + 0x2a0),iVar1);
      }
      *(longlong **)(*(longlong *)(param_2 + 0x2a0) + (longlong)iVar1 * 8) = param_1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14237e8d0 FUN_14237e8d0 body=113 status=ok
// SIG undefined FUN_14237e8d0(void)

undefined8 * FUN_14237e8d0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *param_1 = &PTR_FUN_145061c30;
  param_1[5] = &PTR_LAB_145062188;
  *(undefined4 *)(param_1 + 0x68) = 0x42c80000;
  return param_1;
}



// FUNCTION 14237e950 FUN_14237e950 body=334 status=ok
// SIG undefined FUN_14237e950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14237e950(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14237f380();
  *param_1 = &PTR_FUN_145065208;
  param_1[5] = &PTR_LAB_145065760;
  param_1[0x7f] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 99) = 1;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  param_1[0x81] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x7a) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x32;
  *(undefined4 *)(param_1 + 0x79) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x7c) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x42700000;
  *(undefined4 *)(param_1 + 0x7d) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x7e) = 0x41f00000;
  uVar1 = _DAT_1464aa7d8;
  param_1[0x82] = _DAT_1464aa7d0;
  param_1[0x83] = uVar1;
  uVar1 = _DAT_1464aa7e8;
  param_1[0x84] = _DAT_1464aa7e0;
  param_1[0x85] = uVar1;
  uVar1 = _DAT_1464aa7f8;
  param_1[0x86] = _DAT_1464aa7f0;
  param_1[0x87] = uVar1;
  uVar1 = uRam00000001464aa808;
  param_1[0x88] = _DAT_1464aa800;
  param_1[0x89] = uVar1;
  uVar1 = _DAT_1464aa7d8;
  param_1[0x8a] = _DAT_1464aa7d0;
  param_1[0x8b] = uVar1;
  uVar1 = _DAT_1464aa7e8;
  param_1[0x8c] = _DAT_1464aa7e0;
  param_1[0x8d] = uVar1;
  uVar1 = _DAT_1464aa7f8;
  param_1[0x8e] = _DAT_1464aa7f0;
  param_1[0x8f] = uVar1;
  uVar1 = uRam00000001464aa808;
  param_1[0x90] = _DAT_1464aa800;
  param_1[0x91] = uVar1;
  *(uint *)((longlong)param_1 + 0x374) = *(uint *)((longlong)param_1 + 0x374) & 0xfff7ffff;
  *(uint *)(param_1 + 0x6e) = *(uint *)(param_1 + 0x6e) & 0xe7ffffff;
  DAT_146af07cc = DAT_146af07cc + 1;
  *(int *)(param_1 + 0x92) = DAT_146af07cc;
  return param_1;
}



// FUNCTION 14237eaa0 FUN_14237eaa0 body=113 status=ok
// SIG undefined FUN_14237eaa0(void)

undefined8 * FUN_14237eaa0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *param_1 = &PTR_FUN_1450621b8;
  param_1[5] = &PTR_LAB_145062188;
  *(undefined4 *)(param_1 + 0x68) = 0x40000000;
  return param_1;
}



// FUNCTION 14237eb20 FUN_14237eb20 body=107 status=ok
// SIG undefined FUN_14237eb20(void)

undefined8 * FUN_14237eb20(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_14505f6d8;
  param_1[5] = &PTR_LAB_14505fc20;
  param_1[0x5a] = &PTR_LAB_14505fc50;
  FUN_142741540(param_1 + 0x5c);
  *(uint *)((longlong)param_1 + 0x8ec) = *(uint *)((longlong)param_1 + 0x8ec) | 3;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x11d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return param_1;
}



// FUNCTION 14237eb90 FUN_14237eb90 body=1040 status=ok
// SIG undefined FUN_14237eb90(void)

undefined8 * FUN_14237eb90(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  FUN_14237f6c0();
  *param_1 = &PTR__scalar_deleting_destructor__144280528;
  param_1[5] = &PTR_LAB_144280e10;
  param_1[0x5a] = &PTR_LAB_144280e40;
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) & 0xf9 | 1;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  FUN_1426852e0(param_1 + 0x76);
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
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
  param_1[0xc9] = 0;
  FTickFunction::FTickFunction(param_1 + 0xcb);
  param_1[0xcb] = &PTR__scalar_deleting_destructor__14505f158;
  param_1[0xdd] = 0;
  *(byte *)((longlong)param_1 + 0x664) = *(byte *)((longlong)param_1 + 0x664) & 0xfd;
  *(byte *)((longlong)param_1 + 0x664) = *(byte *)((longlong)param_1 + 0x664) | 4;
  *(undefined1 *)(param_1 + 0xcc) = 4;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0xc47a0000;
  *(undefined4 *)(param_1 + 0x6e) = 0xc47a0000;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xe;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 0xe0;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) | 0x40;
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) | 8;
  *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) & 0xfd | 1;
  *(undefined4 *)(param_1 + 0x6b) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2e6) = 1;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 2;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x30;
  FUN_142717130(param_1,DAT_146aefc60);
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) & 0x7f;
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) | 3;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x303) = 1;
  iVar7 = DAT_146af0828;
  LOCK();
  DAT_146af0828 = DAT_146af0828 + 1;
  UNLOCK();
  *(uint *)((longlong)param_1 + 0x2fc) = *(uint *)((longlong)param_1 + 0x2fc) | 0xf;
  bVar9 = *(byte *)((longlong)param_1 + 0x2ee) & 0xfe;
  *(int *)((longlong)param_1 + 0x354) = iVar7 + 1;
  bVar10 = *(byte *)(param_1 + 0x5f) & 0xbf;
  bVar8 = *(byte *)((longlong)param_1 + 0x2ef);
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined1 *)((longlong)param_1 + 0x305) = 0;
  uVar1 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  *(ulonglong *)((longlong)param_1 + 0x30c) = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  *(undefined8 *)((longlong)param_1 + 0x314) = uVar1;
  uVar1 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  *(ulonglong *)((longlong)param_1 + 0x31c) = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  *(undefined8 *)((longlong)param_1 + 0x324) = uVar1;
  uVar5 = DAT_1464aa6ec;
  uVar4 = DAT_1464aa6e8;
  uVar3 = DAT_1464aa6e4;
  *(undefined4 *)((longlong)param_1 + 0x32c) = DAT_1464aa6e0;
  *(undefined4 *)(param_1 + 0x66) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x334) = uVar4;
  *(undefined4 *)(param_1 + 0x67) = uVar5;
  uVar6 = DAT_1464aa6ec;
  uVar5 = DAT_1464aa6e8;
  uVar4 = DAT_1464aa6e4;
  uVar3 = DAT_1464aa6e0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(byte *)((longlong)param_1 + 0x2ee) = bVar9;
  *(byte *)(param_1 + 0x5f) = bVar10;
  *(undefined4 *)((longlong)param_1 + 0x33c) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x344) = uVar5;
  *(undefined4 *)(param_1 + 0x69) = uVar6;
  if ((bVar8 & 1) == 0) {
    bVar8 = bVar8 | 1;
    *(byte *)((longlong)param_1 + 0x2ef) = bVar8;
    if ((DAT_146531d70 == 1) && ((*(byte *)((longlong)param_1 + 0x24c) & 2) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) & 0xfd;
      if (param_1[0x32] != 0) {
        FUN_142386620(param_1[0x32]);
        bVar8 = *(byte *)((longlong)param_1 + 0x2ef);
        bVar9 = *(byte *)((longlong)param_1 + 0x2ee);
        bVar10 = *(byte *)(param_1 + 0x5f);
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xf7;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 0x10;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) & 0xfffffffc;
  *(byte *)((longlong)param_1 + 0x2ef) = bVar8 & 0xe9;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(byte *)((longlong)param_1 + 0x2ee) = bVar9 & 0x83;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  uVar5 = DAT_1468b5d98;
  uVar4 = DAT_1468b5d94;
  uVar3 = DAT_1468b5d90;
  *(byte *)((longlong)param_1 + 0x2f3) = *(byte *)((longlong)param_1 + 0x2f3) | 0xc;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = uVar4;
  *(undefined4 *)(param_1 + 0xd9) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0x4a000000;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0xda] = 0x4a0000004a000000;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  *(byte *)(param_1 + 0x5f) = bVar10 | 0xc;
  return param_1;
}



// FUNCTION 14237efa0 FUN_14237efa0 body=391 status=ok
// SIG undefined FUN_14237efa0(void)

undefined8 * FUN_14237efa0(undefined8 *param_1)

{
  bool bVar1;
  char local_res8 [8];
  
  FUN_14235ee30();
  *param_1 = &PTR_FUN_14505fc90;
  param_1[5] = &PTR_LAB_145060230;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f19999a;
  bVar1 = DAT_146af0a24 == '\0';
  *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) & 0xffffff97 | 4;
  *(undefined4 *)(param_1 + 0x3d) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x44) = 4;
  *(undefined4 *)((longlong)param_1 + 0x224) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  param_1[0x3a] = DAT_1464aa798;
  *(undefined4 *)(param_1 + 0x3b) = DAT_1464aa7a0;
  if ((bVar1) && (DAT_1468b6148 != 0)) {
    DAT_146af0a24 = '\x01';
    local_res8[0] = '\0';
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"ProjectileMovementComponent",L"AllowParallelMovement",local_res8,
               &DAT_1468e2360);
    DAT_146af07c8 = (uint)(local_res8[0] != '\0');
  }
  return param_1;
}



// FUNCTION 14237f130 FUN_14237f130 body=75 status=ok
// SIG undefined FUN_14237f130(void)

undefined8 * FUN_14237f130(undefined8 *param_1)

{
  FUN_14235ec70();
  *param_1 = &PTR__scalar_deleting_destructor__145060260;
  param_1[5] = &PTR_LAB_145060818;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0x42800000;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0x42800000;
  return param_1;
}



// FUNCTION 14237f180 FUN_14237f180 body=103 status=ok
// SIG undefined FUN_14237f180(void)

undefined8 * FUN_14237f180(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145060968;
  param_1[5] = &PTR_LAB_145060ec0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  return param_1;
}



// FUNCTION 14237f1f0 FUN_14237f1f0 body=95 status=ok
// SIG undefined FUN_14237f1f0(void)

undefined8 * FUN_14237f1f0(undefined8 *param_1)

{
  FUN_14235ee30();
  *(uint *)(param_1 + 0x3e) = *(uint *)(param_1 + 0x3e) | 1;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145062770;
  param_1[5] = &PTR_LAB_145062c88;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  return param_1;
}



// FUNCTION 14237f250 FUN_14237f250 body=292 status=ok
// SIG undefined FUN_14237f250(void)

undefined8 * FUN_14237f250(undefined8 *param_1)

{
  FUN_14237f380();
  *param_1 = &PTR_FUN_145063928;
  param_1[5] = &PTR_LAB_145063e80;
  FUN_142741540(param_1 + 0x7c);
  FUN_1404546d0(param_1 + 0x14a);
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x79) = 0x44000000;
  *(undefined1 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  param_1[0x13f] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa14) = 0;
  param_1[0x144] = 0;
  *(undefined4 *)(param_1 + 0x145) = 0;
  param_1[0x13e] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0x3f800000;
  param_1[0x143] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa2c) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0xa4c) = *(uint *)((longlong)param_1 + 0xa4c) & 0xfffffffe;
  *(uint *)(param_1 + 0x6e) = *(uint *)(param_1 + 0x6e) & 0xffefffef;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x149) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 1;
  return param_1;
}



// FUNCTION 14237f380 FUN_14237f380 body=732 status=ok
// SIG undefined FUN_14237f380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14237f380(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_14237f6c0();
  *param_1 = &PTR__scalar_deleting_destructor__145062cb8;
  param_1[5] = &PTR_LAB_145063210;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  *(uint *)(param_1 + 0x6e) = *(uint *)(param_1 + 0x6e) | 0x15c2625;
  *(uint *)((longlong)param_1 + 0x374) =
       *(uint *)((longlong)param_1 + 0x374) & 0xf9ffffff | 0x1120400;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 99) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x31a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined2 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x329) = 0;
  *(undefined1 *)((longlong)param_1 + 0x332) = 0;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  *(uint *)(param_1 + 0x6e) = *(uint *)(param_1 + 0x6e) & 0xff6fffff;
  *(uint *)((longlong)param_1 + 0x374) = *(uint *)((longlong)param_1 + 0x374) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x72) = 0;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x42393bf0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af7c0,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = DAT_1464af7c8;
      lVar4 = (longlong)DAT_1464af7c8;
      DAT_1464af7c8 = DAT_1464af7c8 + 1;
      if (DAT_1464af7cc < DAT_1464af7c8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af7c0,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af7c0);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x42393bb0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af7d8,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = DAT_1464af7e0;
      lVar4 = (longlong)DAT_1464af7e0;
      DAT_1464af7e0 = DAT_1464af7e0 + 1;
      if (DAT_1464af7e4 < DAT_1464af7e0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af7d8,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af7d8);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 14237f660 FUN_14237f660 body=83 status=ok
// SIG undefined FUN_14237f660(void)

undefined8 * FUN_14237f660(undefined8 *param_1)

{
  FUN_14237f380();
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR_FUN_145064598;
  param_1[5] = &PTR_LAB_145064af0;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(undefined4 *)(param_1 + 0x7c) = 0x40c66666;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  return param_1;
}



// FUNCTION 14237f6c0 FUN_14237f6c0 body=472 status=ok
// SIG undefined FUN_14237f6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14237f6c0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_142326e40();
  param_1[0x2f] = 0;
  *param_1 = &PTR_FUN_14505f170;
  param_1[5] = &PTR_LAB_143fcb200;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar1 = uRam0000000146af083c;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(uint *)((longlong)param_1 + 0x21c) = uVar1;
  uVar1 = uRam0000000146af0834 & uRam0000000146af0844;
  uVar2 = uRam0000000146af0838 & uRam0000000146af0848;
  uVar3 = uRam0000000146af083c & uRam0000000146af084c;
  *(uint *)(param_1 + 0x46) = _DAT_146af0830 & _DAT_146af0840;
  *(uint *)((longlong)param_1 + 0x234) = uVar1;
  *(uint *)(param_1 + 0x47) = uVar2;
  *(uint *)((longlong)param_1 + 0x23c) = uVar3;
  *(undefined4 *)(param_1 + 0x4a) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x254) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x4b) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x25c) = DAT_1464aa81c;
  param_1[0x4c] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x4d) = DAT_1468b5da8;
  *(undefined4 *)(param_1 + 0x4e) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x274) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x4f) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x27c) = DAT_1464aa81c;
  param_1[0x50] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x51) = DAT_1468b5da8;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 2;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 2;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x20;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfd;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  return param_1;
}



// FUNCTION 14237f8a0 FUN_14237f8a0 body=113 status=ok
// SIG undefined FUN_14237f8a0(void)

undefined8 * FUN_14237f8a0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *param_1 = &PTR_FUN_1450616a8;
  param_1[5] = &PTR_LAB_145061c00;
  *(undefined4 *)(param_1 + 0x68) = 0x453b8000;
  return param_1;
}



// FUNCTION 14237f920 ~TIndirectArray<FSceneViewStateReference,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TIndirectArray<FSceneViewStateReference,FDefaultAllocator>(void)

void TIndirectArray<FSceneViewStateReference,FDefaultAllocator>::
     ~TIndirectArray<FSceneViewStateReference,FDefaultAllocator>(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FSceneViewStateReference::~FSceneViewStateReference(*puVar1);
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



// FUNCTION 14237f990 FUN_14237f990 body=152 status=ok
// SIG undefined FUN_14237f990(void)

void FUN_14237f990(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (((*(byte *)(param_1 + 0x37) & 1) != 0) && (lVar2 = *param_1, lVar2 != 0)) {
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
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      FUN_14238a070(lVar2,param_1);
    }
  }
  *param_1 = 0;
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14237fa30 FUN_14237fa30 body=391 status=ok
// SIG undefined FUN_14237fa30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14237fa30(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x24c) =
         *(byte *)(lVar2 + 0x24c) ^ ((char)param_1[1] << 2 ^ *(byte *)(lVar2 + 0x24c)) & 4;
    pbVar1 = (byte *)(*param_1 + 0x24c);
    *pbVar1 = *pbVar1 ^ ((char)(*(uint *)(param_1 + 1) >> 1) << 3 ^ *(byte *)(*param_1 + 0x24c)) & 8
    ;
    pbVar1 = (byte *)(*param_1 + 0x24c);
    *pbVar1 = *pbVar1 ^ ((char)(*(uint *)(param_1 + 1) >> 2) << 4 ^ *(byte *)(*param_1 + 0x24c)) &
                        0x10;
    if ((*(byte *)(param_1 + 1) & 8) != 0) {
      plVar3 = *(longlong **)(*param_1 + 400);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,local_48,*(undefined8 *)(*param_1 + 0x198),0);
        FUN_14162bcf0(*param_1 + 0x210,&local_78,local_48);
        uVar4 = *(uint *)(param_1 + 1);
        if ((uVar4 & 1) == 0) {
          lVar2 = *param_1;
          local_90 = uStack_60;
          *(undefined4 *)(lVar2 + 0x1ec) = local_68;
          *(undefined4 *)(lVar2 + 0x1f0) = uStack_64;
          *(undefined4 *)(lVar2 + 500) = uStack_60;
          uVar4 = *(uint *)(param_1 + 1);
        }
        if ((uVar4 & 2) == 0) {
          local_88 = local_78;
          uStack_84 = uStack_74;
          uStack_80 = uStack_70;
          uStack_7c = uStack_6c;
          puVar5 = (undefined8 *)FQuat::Rotator(&local_88,local_98);
          lVar2 = *param_1;
          *(undefined8 *)(lVar2 + 0x1f8) = *puVar5;
          *(undefined4 *)(lVar2 + 0x200) = *(undefined4 *)(puVar5 + 1);
          uVar4 = *(uint *)(param_1 + 1);
        }
        if ((uVar4 & 4) == 0) {
          lVar2 = *param_1;
          *(undefined4 *)(lVar2 + 0x204) = local_58;
          *(undefined4 *)(lVar2 + 0x208) = uStack_54;
          *(undefined4 *)(lVar2 + 0x20c) = uStack_50;
        }
      }
    }
  }
  return;
}



// FUNCTION 14237fbc0 FUN_14237fbc0 body=197 status=ok
// SIG undefined FUN_14237fbc0(void)

void FUN_14237fbc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  TIndirectArray<FSceneViewStateReference,FDefaultAllocator>::
  ~TIndirectArray<FSceneViewStateReference,FDefaultAllocator>(param_1 + 0x3a8);
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x368);
  plVar1 = *(longlong **)(param_1 + 0x360);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x360);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  return;
}



// FUNCTION 14237fc90 FUN_14237fc90 body=109 status=ok
// SIG undefined FUN_14237fc90(void)

bool FUN_14237fc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_2);
  if (cVar3 == '\0') {
    return false;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_3);
  if (cVar3 == '\0') {
    return true;
  }
  lVar1 = FWeakObjectPtr::Get(param_2);
  lVar2 = FWeakObjectPtr::Get(param_3);
  return *(int *)(lVar2 + 0x324) < *(int *)(lVar1 + 0x324);
}



// FUNCTION 14237fd00 FUN_14237fd00 body=162 status=ok
// SIG undefined FUN_14237fd00(void)

undefined4 FUN_14237fd00(undefined8 param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((-1 < param_3) && (param_3 < (int)param_2[1])) {
    lVar3 = *param_2;
    lVar6 = (longlong)param_3 * 0xa0;
    piVar1 = (int *)(lVar3 + 0x9c + lVar6);
    *piVar1 = *piVar1 + -1;
    uVar2 = *(undefined4 *)(lVar3 + 0x9c + lVar6);
    if (*piVar1 == 0) {
      iVar5 = (int)param_2[1];
      iVar4 = (iVar5 - param_3) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 + lVar6),(void *)((longlong)(iVar5 - iVar4) * 0xa0 + *param_2),
                   (longlong)iVar4 * 0xa0);
        iVar5 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar5 + -1;
    }
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 14237fdb0 FUN_14237fdb0 body=260 status=ok
// SIG undefined FUN_14237fdb0(void)

void FUN_14237fdb0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  cVar6 = FWeakObjectPtr::IsValid();
  if (cVar6 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar1 = *(undefined1 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if ((*(byte *)(plVar8 + 0x17) & 1) != 0) {
      if ((*(byte *)((longlong)plVar8 + 0x24d) & 8) != 0) {
        (**(code **)(*plVar8 + 0x478))(plVar8,uVar2,uVar1);
      }
      bVar5 = false;
      *(int *)((longlong)plVar8 + 0x2c4) = *(int *)((longlong)plVar8 + 0x2c4) + 1;
      iVar9 = *(int *)((longlong)plVar8 + 0x2c4);
      iVar7 = (int)plVar8[0x57] + -1;
      lVar10 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar11 = lVar10 << 4;
        bVar5 = false;
        do {
          lVar3 = plVar8[0x56];
          if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,plVar8,uVar2,uVar1), cVar6 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
        iVar9 = *(int *)((longlong)plVar8 + 0x2c4);
      }
      *(int *)((longlong)plVar8 + 0x2c4) = iVar9 + -1;
      if (bVar5) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8 + 0x56,0);
      }
    }
  }
  return;
}



// FUNCTION 14237ff50 FUN_14237ff50 body=97 status=ok
// SIG undefined FUN_14237ff50(void)

undefined8 * FUN_14237ff50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145060958;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14237ffc0 FUN_14237ffc0 body=97 status=ok
// SIG undefined FUN_14237ffc0(void)

undefined8 * FUN_14237ffc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145065790;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142380030 FUN_142380030 body=62 status=ok
// SIG undefined FUN_142380030(void)

undefined8 * FUN_142380030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14505f6b8;
  FUN_1420d82a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142380070 FUN_142380070 body=43 status=ok
// SIG undefined FUN_142380070(void)

undefined8 * FUN_142380070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504f408;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 1423800a0 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FReflectionTextureCubeResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142380110 FUN_142380110 body=105 status=ok
// SIG undefined FUN_142380110(void)

longlong FUN_142380110(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x338) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x338) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 142380180 FUN_142380180 body=88 status=ok
// SIG undefined FUN_142380180(void)

longlong FUN_142380180(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3f8) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_14237fbc0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 1423801e0 FUN_1423801e0 body=104 status=ok
// SIG undefined FUN_1423801e0(void)

longlong FUN_1423801e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_143fce298;
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8f0);
  }
  return param_1;
}



// FUNCTION 142380250 FUN_142380250 body=102 status=ok
// SIG undefined FUN_142380250(void)

longlong FUN_142380250(longlong param_1,ulonglong param_2)

{
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 1423802c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHyperlinkStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14235f4e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 142380300 FUN_142380300 body=105 status=ok
// SIG undefined FUN_142380300(void)

longlong FUN_142380300(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x338) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x338) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 142380370 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1423803b0 FUN_1423803b0 body=90 status=ok
// SIG undefined FUN_1423803b0(void)

longlong FUN_1423803b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x9c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9b8) != 0) {
    FMemory::Free();
  }
  FUN_14237fbc0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xfc0);
  }
  return param_1;
}



// FUNCTION 142380410 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14237fbc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 142380450 FUN_142380450 body=52 status=ok
// SIG undefined FUN_142380450(void)

undefined8 FUN_142380450(undefined8 param_1,ulonglong param_2)

{
  FUN_14237fbc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 142380490 FUN_142380490 body=105 status=ok
// SIG undefined FUN_142380490(void)

longlong FUN_142380490(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x338) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x338) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142380500 FUN_142380500 body=753 status=ok
// SIG undefined FUN_142380500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142380500(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_b8;
  float local_b0;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  pfVar4 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar4) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_b8 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar5._12_4_ = 0;
    auVar5._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146af0860;
    fVar6 = DAT_146af0860._4_4_;
    fVar10 = DAT_146af0860._8_4_;
    auVar5 = divps(auVar5,_DAT_146af0860);
    fVar7 = (float)local_b8 - (float)(int)auVar5._0_4_ * fVar1;
    fVar8 = (float)((ulonglong)local_b8 >> 0x20) - (float)(int)auVar5._4_4_ * fVar6;
    fVar9 = *(float *)(param_1 + 0x200) - (float)(int)auVar5._8_4_ * fVar10;
    fVar7 = (float)(((uint)(fVar1 + fVar7) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                   (uint)(fVar1 + fVar7));
    fVar8 = (float)(((uint)(fVar6 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                   (uint)(fVar6 + fVar8));
    local_b0 = (float)(((uint)(fVar10 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                      (uint)(fVar10 + fVar9));
    local_b0 = (float)(((uint)(local_b0 - fVar10) ^ (uint)local_b0) &
                       -(uint)(fRam0000000146af0858 < local_b0) ^ (uint)local_b0);
    *(ulonglong *)pfVar4 =
         CONCAT44(((uint)(fVar8 - fVar6) ^ (uint)fVar8) & -(uint)(fRam0000000146af0854 < fVar8) ^
                  (uint)fVar8,
                  ((uint)(fVar7 - fVar1) ^ (uint)fVar7) & -(uint)(_DAT_146af0850 < fVar7) ^
                  (uint)fVar7);
    *(float *)(param_1 + 0x288) = local_b0;
    puVar3 = (undefined8 *)FRotator::Quaternion(pfVar4,&local_98);
    uVar2 = puVar3[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar3;
    *(undefined8 *)(param_1 + 0x278) = uVar2;
  }
  local_94 = *(float *)(param_1 + 0x274);
  local_90 = *(float *)(param_1 + 0x278);
  local_98 = *(float *)(param_1 + 0x270);
  local_8c = *(float *)(param_1 + 0x27c);
  fVar1 = *(float *)(param_2 + 1);
  fVar6 = (float)((ulonglong)*param_2 >> 0x20);
  local_b8._0_4_ = (float)*param_2;
  fVar8 = local_94 * fVar1 - local_90 * fVar6;
  fVar8 = fVar8 + fVar8;
  fVar7 = local_90 * (float)local_b8 - local_98 * fVar1;
  fVar10 = local_98 * fVar6 - local_94 * (float)local_b8;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 + fVar10;
  local_b0 = (fVar7 * local_98 - fVar8 * local_94) + fVar1 + fVar10 * local_8c +
             *(float *)(param_1 + 500);
  local_b8 = CONCAT44((fVar8 * local_90 - fVar10 * local_98) + fVar6 + fVar7 * local_8c +
                      *(float *)(param_1 + 0x1f0),
                      (fVar10 * local_94 - fVar7 * local_90) + (float)local_b8 + fVar8 * local_8c +
                      *(float *)(param_1 + 0x1ec));
  local_a0 = local_b0;
  FUN_142397be0(param_1,&local_b8,&local_98,param_3,param_4,param_5);
  return;
}



// FUNCTION 142380800 FUN_142380800 body=467 status=ok
// SIG undefined FUN_142380800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142380800(longlong param_1,float *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_28;
  uint uStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pfVar7 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar7) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_28 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar8._12_4_ = 0;
    auVar8._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146af0860;
    fVar2 = DAT_146af0860._4_4_;
    fVar3 = DAT_146af0860._8_4_;
    auVar8 = divps(auVar8,_DAT_146af0860);
    fVar9 = (float)local_28 - (float)(int)auVar8._0_4_ * fVar1;
    fVar10 = (float)((ulonglong)local_28 >> 0x20) - (float)(int)auVar8._4_4_ * fVar2;
    fVar11 = *(float *)(param_1 + 0x200) - (float)(int)auVar8._8_4_ * fVar3;
    fVar9 = (float)(((uint)(fVar1 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar1 + fVar9));
    fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar2 + fVar10));
    fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar3 + fVar11));
    uStack_20 = ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(fRam0000000146af0858 < fVar11) ^
                (uint)fVar11;
    *(ulonglong *)pfVar7 =
         CONCAT44(((uint)(fVar10 - fVar2) ^ (uint)fVar10) & -(uint)(fRam0000000146af0854 < fVar10) ^
                  (uint)fVar10,
                  ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(_DAT_146af0850 < fVar9) ^
                  (uint)fVar9);
    *(uint *)(param_1 + 0x288) = uStack_20;
    puVar6 = (undefined8 *)FRotator::Quaternion(pfVar7,&local_18);
    uVar5 = puVar6[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar6;
    *(undefined8 *)(param_1 + 0x278) = uVar5;
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = *(float *)(param_1 + 0x270);
  fVar11 = *(float *)(param_1 + 0x274);
  fVar4 = *(float *)(param_1 + 0x278);
  fStack_1c = *(float *)(param_1 + 0x27c);
  uStack_20 = *(undefined4 *)(param_1 + 500);
  local_28 = *(undefined8 *)(param_1 + 0x1ec);
  local_18 = fVar10 * fVar9 * _DAT_146af08d0 + fStack_1c * fVar1 + fVar11 * fVar3 * _DAT_146af08c0 +
             fVar4 * fVar2 * _DAT_146af08b0;
  fStack_14 = fVar10 * fVar3 * fRam0000000146af08d4 + fStack_1c * fVar2 +
              fVar11 * fVar9 * fRam0000000146af08c4 + fVar4 * fVar1 * fRam0000000146af08b4;
  fStack_10 = fVar10 * fVar2 * fRam0000000146af08d8 + fStack_1c * fVar3 +
              fVar11 * fVar1 * fRam0000000146af08c8 + fVar4 * fVar9 * fRam0000000146af08b8;
  fStack_c = fVar10 * fVar1 * fRam0000000146af08dc + fStack_1c * fVar9 +
             fVar11 * fVar2 * fRam0000000146af08cc + fVar4 * fVar3 * fRam0000000146af08bc;
  FUN_142397be0(param_1,&local_28,&local_18,param_3,param_4,param_5);
  return;
}



// FUNCTION 1423809e0 FUN_1423809e0 body=481 status=ok
// SIG undefined FUN_1423809e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423809e0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pfVar6 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar6) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_28 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146af0860;
    fVar2 = DAT_146af0860._4_4_;
    fVar3 = DAT_146af0860._8_4_;
    auVar7 = divps(auVar7,_DAT_146af0860);
    fVar16 = (float)local_28 - (float)(int)auVar7._0_4_ * fVar1;
    fVar17 = (float)((ulonglong)local_28 >> 0x20) - (float)(int)auVar7._4_4_ * fVar2;
    fVar18 = *(float *)(param_1 + 0x200) - (float)(int)auVar7._8_4_ * fVar3;
    fVar16 = (float)(((uint)(fVar1 + fVar16) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar1 + fVar16));
    fVar17 = (float)(((uint)(fVar2 + fVar17) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar2 + fVar17));
    fVar18 = (float)(((uint)(fVar3 + fVar18) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                    (uint)(fVar3 + fVar18));
    uVar11 = ((uint)(fVar18 - fVar3) ^ (uint)fVar18) & -(uint)(fRam0000000146af0858 < fVar18) ^
             (uint)fVar18;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar11);
    *(ulonglong *)pfVar6 =
         CONCAT44(((uint)(fVar17 - fVar2) ^ (uint)fVar17) & -(uint)(fRam0000000146af0854 < fVar17) ^
                  (uint)fVar17,
                  ((uint)(fVar16 - fVar1) ^ (uint)fVar16) & -(uint)(_DAT_146af0850 < fVar16) ^
                  (uint)fVar16);
    *(uint *)(param_1 + 0x288) = uVar11;
    puVar5 = (undefined8 *)FRotator::Quaternion(pfVar6,&local_18);
    uVar4 = puVar5[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar5;
    *(undefined8 *)(param_1 + 0x278) = uVar4;
  }
  local_28 = *(undefined8 *)(param_1 + 0x270);
  uStack_20 = *(undefined8 *)(param_1 + 0x278);
  pfVar6 = (float *)FRotator::Quaternion(param_2,&local_18);
  fVar17 = (float)uStack_20;
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar16 = pfVar6[3];
  fVar12 = (float)local_28 * fVar16;
  fVar13 = (float)local_28 * fVar3;
  fVar14 = (float)local_28 * fVar2;
  fVar15 = (float)local_28 * fVar1;
  uStack_20 = CONCAT44(uStack_20._4_4_,*(undefined4 *)(param_1 + 500));
  fVar18 = local_28._4_4_ * fVar3;
  fVar8 = local_28._4_4_ * fVar16;
  fVar9 = local_28._4_4_ * fVar1;
  fVar10 = local_28._4_4_ * fVar2;
  local_28 = *(undefined8 *)(param_1 + 0x1ec);
  local_18 = fVar12 * _DAT_146af08d0 + uStack_20._4_4_ * fVar1 + fVar18 * _DAT_146af08c0 +
             fVar17 * fVar2 * _DAT_146af08b0;
  fStack_14 = fVar13 * fRam0000000146af08d4 + uStack_20._4_4_ * fVar2 + fVar8 * fRam0000000146af08c4
              + fVar17 * fVar1 * fRam0000000146af08b4;
  fStack_10 = fVar14 * fRam0000000146af08d8 + uStack_20._4_4_ * fVar3 + fVar9 * fRam0000000146af08c8
              + fVar17 * fVar16 * fRam0000000146af08b8;
  fStack_c = fVar15 * fRam0000000146af08dc + uStack_20._4_4_ * fVar16 +
             fVar10 * fRam0000000146af08cc + fVar17 * fVar3 * fRam0000000146af08bc;
  FUN_142397be0(param_1,&local_28,&local_18,param_3,param_4,param_5);
  return;
}



// FUNCTION 142380bd0 FUN_142380bd0 body=1731 status=ok
// SIG undefined FUN_142380bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142380bd0(longlong param_1,float *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
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
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 local_138;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  pfVar9 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar9) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (puVar8 = (undefined8 *)register0x00000020,
     *(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_138 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar10._12_4_ = 0;
    auVar10._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar46 = (float)DAT_146af0860;
    fVar47 = DAT_146af0860._4_4_;
    fVar48 = DAT_146af0860._8_4_;
    auVar10 = divps(auVar10,_DAT_146af0860);
    fVar34 = (float)local_138 - (float)(int)auVar10._0_4_ * fVar46;
    fVar36 = (float)((ulonglong)local_138 >> 0x20) - (float)(int)auVar10._4_4_ * fVar47;
    fVar38 = *(float *)(param_1 + 0x200) - (float)(int)auVar10._8_4_ * fVar48;
    fVar34 = (float)(((uint)(fVar46 + fVar34) ^ (uint)fVar34) & -(uint)(0.0 <= fVar34) ^
                    (uint)(fVar46 + fVar34));
    fVar36 = (float)(((uint)(fVar47 + fVar36) ^ (uint)fVar36) & -(uint)(0.0 <= fVar36) ^
                    (uint)(fVar47 + fVar36));
    fStack_130 = (float)(((uint)(fVar48 + fVar38) ^ (uint)fVar38) & -(uint)(0.0 <= fVar38) ^
                        (uint)(fVar48 + fVar38));
    fStack_130 = (float)(((uint)(fStack_130 - fVar48) ^ (uint)fStack_130) &
                         -(uint)(fRam0000000146af0858 < fStack_130) ^ (uint)fStack_130);
    *(ulonglong *)pfVar9 =
         CONCAT44(((uint)(fVar36 - fVar47) ^ (uint)fVar36) & -(uint)(fRam0000000146af0854 < fVar36)
                  ^ (uint)fVar36,
                  ((uint)(fVar34 - fVar46) ^ (uint)fVar34) & -(uint)(_DAT_146af0850 < fVar34) ^
                  (uint)fVar34);
    *(float *)(param_1 + 0x288) = fStack_130;
    puVar8 = (undefined8 *)FRotator::Quaternion(pfVar9,&local_138);
    uVar6 = puVar8[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar8;
    *(undefined8 *)(param_1 + 0x278) = uVar6;
  }
  fVar28 = fRam0000000146af09c8;
  fVar32 = fRam0000000146af09c4;
  fVar30 = _DAT_146af09c0;
  fVar27 = fRam0000000146af0838;
  fVar25 = fRam0000000146af0834;
  fVar20 = _DAT_146af0830;
  local_138._0_4_ = *(float *)(param_1 + 0x270);
  local_138._4_4_ = *(float *)(param_1 + 0x274);
  fStack_130 = *(float *)(param_1 + 0x278);
  fStack_12c = *(float *)(param_1 + 0x27c);
  fVar46 = *(float *)(param_1 + 0x1ec);
  auVar10 = *(undefined1 (*) [16])(param_2 + 8);
  fVar2 = auVar10._0_4_;
  fVar3 = auVar10._4_4_;
  fVar4 = auVar10._8_4_;
  fVar34 = (float)DAT_14401b160;
  fVar36 = DAT_14401b160._4_4_;
  fVar38 = DAT_14401b160._8_4_;
  fVar1 = DAT_14401b160._12_4_;
  fVar47 = *(float *)(param_1 + 0x1f0);
  fVar48 = *(float *)(param_1 + 500);
  auVar11 = minps(auVar10,_DAT_14401b160);
  auVar12._4_4_ = -(uint)(auVar11._4_4_ < fRam0000000146af09c4);
  auVar12._0_4_ = -(uint)(auVar11._0_4_ < _DAT_146af09c0);
  auVar12._8_4_ = -(uint)(auVar11._8_4_ < fRam0000000146af09c8);
  auVar12._12_4_ = -(uint)(auVar11._12_4_ < fRam0000000146af09cc);
  iVar7 = movmskps((int)puVar8,auVar12);
  if (iVar7 == 0) {
    fVar20 = *param_2;
    fVar25 = param_2[1];
    fVar27 = param_2[2];
    fVar30 = param_2[3];
    fVar32 = param_2[4] * fVar34;
    fVar28 = param_2[5] * fVar36;
    fVar31 = param_2[6] * fVar38;
    fVar33 = param_2[7] * fVar1;
    local_e8 = (float)local_138 * fVar30 * _DAT_146af08d0 + fStack_12c * fVar20 +
               local_138._4_4_ * fVar27 * _DAT_146af08c0 + fStack_130 * fVar25 * _DAT_146af08b0;
    fStack_e4 = (float)local_138 * fVar27 * fRam0000000146af08d4 + fStack_12c * fVar25 +
                local_138._4_4_ * fVar30 * fRam0000000146af08c4 +
                fStack_130 * fVar20 * fRam0000000146af08b4;
    fStack_e0 = (float)local_138 * fVar25 * fRam0000000146af08d8 + fStack_12c * fVar27 +
                local_138._4_4_ * fVar20 * fRam0000000146af08c8 +
                fStack_130 * fVar30 * fRam0000000146af08b8;
    fStack_dc = (float)local_138 * fVar20 * fRam0000000146af08dc + fStack_12c * fVar30 +
                local_138._4_4_ * fVar25 * fRam0000000146af08cc +
                fStack_130 * fVar27 * fRam0000000146af08bc;
    fVar20 = fVar31 * local_138._4_4_ - fVar28 * fStack_130;
    fVar25 = fVar32 * fStack_130 - fVar31 * (float)local_138;
    fVar27 = fVar28 * (float)local_138 - fVar32 * local_138._4_4_;
    fVar30 = fVar33 * fStack_12c - fVar33 * fStack_12c;
    fVar20 = fVar20 + fVar20;
    fVar25 = fVar25 + fVar25;
    fVar27 = fVar27 + fVar27;
    fVar30 = fVar30 + fVar30;
    local_d8._4_4_ =
         (fVar20 * fStack_130 - fVar27 * (float)local_138) + fVar25 * fStack_12c + fVar28 + fVar47;
    local_d8._0_4_ =
         (fVar27 * local_138._4_4_ - fVar25 * fStack_130) + fVar20 * fStack_12c + fVar32 + fVar46;
    fStack_d0 = (fVar25 * (float)local_138 - fVar20 * local_138._4_4_) +
                fVar27 * fStack_12c + fVar31 + fVar48;
    fStack_cc = (fVar30 * fStack_12c - fVar30 * fStack_12c) + fVar30 * fStack_12c + fVar33 + 0.0;
  }
  else {
    fVar17 = local_138._4_4_ + local_138._4_4_;
    fVar19 = fStack_130 + fStack_130;
    fVar21 = ((float)local_138 + (float)local_138) * (float)local_138;
    fVar31 = *param_2;
    fVar33 = param_2[1];
    fVar5 = param_2[2];
    fVar13 = param_2[3];
    fVar18 = ((float)local_138 + (float)local_138) * fStack_12c;
    fVar43 = (fVar19 * fStack_12c + fVar17 * (float)local_138) * fVar34;
    fVar44 = (fVar18 + fVar19 * local_138._4_4_) * fVar36;
    fVar45 = (fVar17 * fStack_12c + fVar19 * (float)local_138) * fVar38;
    fVar23 = fVar36 * (fVar17 * (float)local_138 - fVar19 * fStack_12c);
    fVar26 = fVar38 * (fVar19 * local_138._4_4_ - fVar18);
    fVar29 = fVar34 * (fVar19 * (float)local_138 - fVar17 * fStack_12c);
    fVar18 = (float)((uint)((_DAT_146af0830 - (fVar19 * fStack_130 + fVar17 * local_138._4_4_)) *
                           fVar34) & _DAT_146af0840);
    fVar19 = (float)((uint)((fRam0000000146af0834 - (fVar19 * fStack_130 + fVar21)) * fVar36) &
                    uRam0000000146af0844);
    fVar15 = (float)((uint)((fRam0000000146af0838 - (fVar17 * local_138._4_4_ + fVar21)) * fVar38) &
                    uRam0000000146af0848);
    fVar16 = (float)((uint)((fRam0000000146af083c - (fVar21 + fVar21)) * fVar1) &
                    uRam0000000146af084c);
    fVar17 = fVar33 + fVar33;
    fVar21 = fVar5 + fVar5;
    fVar24 = (fVar31 + fVar31) * fVar31;
    fVar22 = fVar13 * (fVar31 + fVar31);
    fVar40 = (fVar13 * fVar21 + fVar31 * fVar17) * fVar2;
    fVar41 = (fVar22 + fVar33 * fVar21) * fVar3;
    fVar42 = (fVar13 * fVar17 + fVar31 * fVar21) * fVar4;
    fVar35 = fVar3 * (fVar31 * fVar17 - fVar13 * fVar21);
    fVar37 = fVar4 * (fVar33 * fVar21 - fVar22);
    fVar39 = fVar2 * (fVar31 * fVar21 - fVar13 * fVar17);
    fVar13 = (float)((uint)((_DAT_146af0830 - (fVar21 * fVar5 + fVar17 * fVar33)) * fVar2) &
                    _DAT_146af0840);
    fVar21 = (float)((uint)((fRam0000000146af0834 - (fVar21 * fVar5 + fVar24)) * fVar3) &
                    uRam0000000146af0844);
    fVar17 = (float)((uint)((fRam0000000146af0838 - (fVar17 * fVar33 + fVar24)) * fVar4) &
                    uRam0000000146af0848);
    fVar22 = (float)((uint)((fRam0000000146af083c - (fVar24 + fVar24)) * auVar10._12_4_) &
                    uRam0000000146af084c);
    fVar31 = param_2[4];
    fVar33 = param_2[5];
    fVar5 = param_2[6];
    local_128 = fVar40 * fVar23 + fVar13 * fVar18 + fVar39 * fVar45 + fVar22 * fVar46;
    fStack_124 = fVar40 * fVar19 + fVar13 * fVar43 + fVar39 * fVar26 + fVar22 * fVar47;
    fStack_120 = fVar40 * fVar44 + fVar13 * fVar29 + fVar39 * fVar15 + fVar22 * fVar48;
    fStack_11c = fVar40 * fVar16 + fVar13 * fVar16 + fVar39 * fVar16 + fVar22 * fRam0000000146af083c
    ;
    local_118 = fVar21 * fVar23 + fVar35 * fVar18 + fVar41 * fVar45 + fVar22 * fVar46;
    fStack_114 = fVar21 * fVar19 + fVar35 * fVar43 + fVar41 * fVar26 + fVar22 * fVar47;
    fStack_110 = fVar21 * fVar44 + fVar35 * fVar29 + fVar41 * fVar15 + fVar22 * fVar48;
    fStack_10c = fVar21 * fVar16 + fVar35 * fVar16 + fVar41 * fVar16 + fVar22 * fRam0000000146af083c
    ;
    local_108 = fVar37 * fVar23 + fVar42 * fVar18 + fVar17 * fVar45 + fVar22 * fVar46;
    fStack_104 = fVar37 * fVar19 + fVar42 * fVar43 + fVar17 * fVar26 + fVar22 * fVar47;
    fStack_100 = fVar37 * fVar44 + fVar42 * fVar29 + fVar17 * fVar15 + fVar22 * fVar48;
    fStack_fc = fVar37 * fVar16 + fVar42 * fVar16 + fVar17 * fVar16 + fVar22 * fRam0000000146af083c;
    local_f8 = fVar33 * fVar23 + fVar31 * fVar18 + fVar5 * fVar45 + fRam0000000146af083c * fVar46;
    fStack_f4 = fVar33 * fVar19 + fVar31 * fVar43 + fVar5 * fVar26 + fRam0000000146af083c * fVar47;
    fStack_f0 = fVar33 * fVar44 + fVar31 * fVar29 + fVar5 * fVar15 + fRam0000000146af083c * fVar48;
    fStack_ec = fVar33 * fVar16 + fVar31 * fVar16 + fVar5 * fVar16 +
                fRam0000000146af083c * fRam0000000146af083c;
    FMatrix::RemoveScaling(&local_128);
    fVar46 = (float)(-(uint)(fVar30 <= fVar2 * fVar34) & (_DAT_146af09b0 ^ (uint)fVar20) ^
                    _DAT_146af09b0);
    fVar47 = (float)(-(uint)(fVar32 <= fVar3 * fVar36) & (uRam0000000146af09b4 ^ (uint)fVar25) ^
                    uRam0000000146af09b4);
    fVar48 = (float)(-(uint)(fVar28 <= fVar4 * fVar38) & (uRam0000000146af09b8 ^ (uint)fVar27) ^
                    uRam0000000146af09b8);
    local_128 = local_128 * fVar46;
    fStack_124 = fStack_124 * fVar46;
    fStack_120 = fStack_120 * fVar46;
    fStack_114 = fStack_114 * fVar47;
    fStack_110 = fStack_110 * fVar47;
    local_118 = local_118 * fVar47;
    fStack_104 = fStack_104 * fVar48;
    fStack_100 = fStack_100 * fVar48;
    local_108 = local_108 * fVar48;
    FQuat::FQuat(&local_138,&local_128);
    auVar14._0_4_ = (float)local_138 * (float)local_138 + fStack_130 * fStack_130;
    auVar14._4_4_ = local_138._4_4_ * local_138._4_4_ + fStack_12c * fStack_12c;
    auVar14._8_4_ = fStack_130 * fStack_130 + (float)local_138 * (float)local_138;
    auVar14._12_4_ = fStack_12c * fStack_12c + local_138._4_4_ * local_138._4_4_;
    fVar25 = auVar14._4_4_ + auVar14._0_4_;
    fVar27 = auVar14._8_4_ + auVar14._4_4_;
    fVar30 = auVar14._12_4_ + auVar14._8_4_;
    fVar32 = auVar14._0_4_ + auVar14._12_4_;
    auVar11._4_4_ = fVar27;
    auVar11._0_4_ = fVar25;
    auVar11._8_4_ = fVar30;
    auVar11._12_4_ = fVar32;
    auVar11 = rsqrtps(auVar14,auVar11);
    fVar46 = auVar11._0_4_;
    fVar47 = auVar11._4_4_;
    fVar48 = auVar11._8_4_;
    fVar20 = auVar11._12_4_;
    fVar46 = (_DAT_146af09a0 - fVar46 * fVar46 * fVar25 * _DAT_146af09a0) * fVar46 + fVar46;
    fVar47 = (fRam0000000146af09a4 - fVar47 * fVar47 * fVar27 * fRam0000000146af09a4) * fVar47 +
             fVar47;
    fVar48 = (fRam0000000146af09a8 - fVar48 * fVar48 * fVar30 * fRam0000000146af09a8) * fVar48 +
             fVar48;
    fVar20 = (fRam0000000146af09ac - fVar20 * fVar20 * fVar32 * fRam0000000146af09ac) * fVar20 +
             fVar20;
    local_d8._4_4_ = fStack_f4;
    local_d8._0_4_ = local_f8;
    fStack_d0 = fStack_f0;
    local_e8 = (float)(((uint)(((_DAT_146af09a0 - fVar46 * fVar46 * fVar25 * _DAT_146af09a0) *
                                fVar46 + fVar46) * (float)local_138) ^ _DAT_146af0990) &
                       -(uint)(1e-08 <= fVar25) ^ _DAT_146af0990);
    fStack_e4 = (float)(((uint)(((fRam0000000146af09a4 -
                                 fVar47 * fVar47 * fVar27 * fRam0000000146af09a4) * fVar47 + fVar47)
                               * local_138._4_4_) ^ uRam0000000146af0994) & -(uint)(1e-08 <= fVar27)
                       ^ uRam0000000146af0994);
    fStack_e0 = (float)(((uint)(((fRam0000000146af09a8 -
                                 fVar48 * fVar48 * fVar30 * fRam0000000146af09a8) * fVar48 + fVar48)
                               * fStack_130) ^ uRam0000000146af0998) & -(uint)(1e-08 <= fVar30) ^
                       uRam0000000146af0998);
    fStack_dc = (float)(((uint)(((fRam0000000146af09ac -
                                 fVar20 * fVar20 * fVar32 * fRam0000000146af09ac) * fVar20 + fVar20)
                               * fStack_12c) ^ uRam0000000146af099c) & -(uint)(1e-08 <= fVar32) ^
                       uRam0000000146af099c);
    fStack_cc = 0.0;
  }
  fStack_bc = auVar10._12_4_ * fVar1;
  fStack_c0 = fVar4 * fVar38;
  fStack_c4 = fVar3 * fVar36;
  local_c8 = fVar2 * fVar34;
  FUN_142398770(param_1,&local_e8,param_3,param_4,param_5);
  return;
}



// FUNCTION 1423812a0 FUN_1423812a0 body=140 status=ok
// SIG undefined FUN_1423812a0(void)

void FUN_1423812a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14232cbb0();
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x40 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar1,0,0);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,(longlong *)(param_1 + 0x98),0,0);
  }
  return;
}



// FUNCTION 142381330 FUN_142381330 body=91 status=ok
// SIG undefined FUN_142381330(void)

void FUN_142381330(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14232cbb0();
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x40 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar1,0,0);
  }
  return;
}



// FUNCTION 142381390 FUN_142381390 body=122 status=ok
// SIG undefined FUN_142381390(void)

void FUN_142381390(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3b0)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3a8) + lVar3) + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x3b0));
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142381410 FUN_142381410 body=89 status=ok
// SIG undefined FUN_142381410(void)

void FUN_142381410(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  fVar1 = *(float *)(param_1 + 0x220) + *param_2;
  local_20 = *(float *)(param_1 + 0x228) + param_2[2];
  local_28 = CONCAT44(*(float *)(param_1 + 0x224) + param_2[1],fVar1);
  local_10 = local_20;
  FUN_1423990b0(fVar1,&local_28,local_20,param_4,param_5);
  return;
}



// FUNCTION 142381470 FUN_142381470 body=219 status=ok
// SIG undefined FUN_142381470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142381470(longlong param_1,float *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x210);
  fVar2 = auVar1._0_4_;
  fVar3 = auVar1._4_4_;
  fVar4 = auVar1._8_4_;
  fVar5 = auVar1._12_4_;
  fStack_20 = fVar6 * fVar3 * fRam0000000146af08d8 + fVar9 * fVar4 +
              fVar7 * fVar2 * fRam0000000146af08c8 + fVar8 * fVar5 * fRam0000000146af08b8;
  fStack_1c = fVar6 * fVar2 * fRam0000000146af08dc + fVar9 * fVar5 +
              fVar7 * fVar3 * fRam0000000146af08cc + fVar8 * fVar4 * fRam0000000146af08bc;
  local_28 = CONCAT44(fVar6 * fVar4 * fRam0000000146af08d4 + fVar9 * fVar3 +
                      fVar7 * fVar5 * fRam0000000146af08c4 + fVar8 * fVar2 * fRam0000000146af08b4,
                      fVar6 * fVar5 * _DAT_146af08d0 + fVar9 * fVar2 +
                      fVar7 * fVar4 * _DAT_146af08c0 + fVar8 * fVar3 * _DAT_146af08b0);
  FUN_14238ced0(auVar1._8_8_,local_18,&local_28);
  fStack_20 = *(float *)(param_1 + 500);
  local_28 = *(undefined8 *)(param_1 + 0x1ec);
  FUN_142397be0(param_1,&local_28,local_18,param_3,param_4,param_5);
  return;
}



// FUNCTION 142381550 FUN_142381550 body=248 status=ok
// SIG undefined FUN_142381550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142381550(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x210);
  fVar2 = auVar1._0_4_;
  fVar3 = auVar1._4_4_;
  fVar4 = auVar1._8_4_;
  fVar5 = auVar1._12_4_;
  pfVar10 = (float *)FRotator::Quaternion(param_2,local_28);
  fVar6 = *pfVar10;
  fVar7 = pfVar10[1];
  fVar8 = pfVar10[2];
  fVar9 = pfVar10[3];
  fStack_30 = fVar6 * fVar3 * fRam0000000146af08d8 + fVar9 * fVar4 +
              fVar7 * fVar2 * fRam0000000146af08c8 + fVar8 * fVar5 * fRam0000000146af08b8;
  fStack_2c = fVar6 * fVar2 * fRam0000000146af08dc + fVar9 * fVar5 +
              fVar7 * fVar3 * fRam0000000146af08cc + fVar8 * fVar4 * fRam0000000146af08bc;
  local_38 = CONCAT44(fVar6 * fVar4 * fRam0000000146af08d4 + fVar9 * fVar3 +
                      fVar7 * fVar5 * fRam0000000146af08c4 + fVar8 * fVar2 * fRam0000000146af08b4,
                      fVar6 * fVar5 * _DAT_146af08d0 + fVar9 * fVar2 +
                      fVar7 * fVar4 * _DAT_146af08c0 + fVar8 * fVar3 * _DAT_146af08b0);
  FUN_14238ced0(param_1,local_28,&local_38);
  fStack_30 = *(float *)(param_1 + 500);
  local_38 = *(undefined8 *)(param_1 + 0x1ec);
  FUN_142397be0(param_1,&local_38,local_28,param_3,param_4,param_5);
  return;
}



// FUNCTION 142381650 FUN_142381650 body=216 status=ok
// SIG undefined FUN_142381650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142381650(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *(float *)(param_1 + 0x210);
  fVar6 = *(float *)(param_1 + 0x214);
  fVar7 = *(float *)(param_1 + 0x218);
  fVar8 = *(float *)(param_1 + 0x21c);
  local_58 = param_5;
  local_48 = fVar8 * fVar1 * _DAT_146af08d0 + fVar4 * fVar5 + fVar7 * fVar2 * _DAT_146af08c0 +
             fVar6 * fVar3 * _DAT_146af08b0;
  fStack_44 = fVar7 * fVar1 * fRam0000000146af08d4 + fVar4 * fVar6 +
              fVar8 * fVar2 * fRam0000000146af08c4 + fVar5 * fVar3 * fRam0000000146af08b4;
  fStack_40 = fVar6 * fVar1 * fRam0000000146af08d8 + fVar4 * fVar7 +
              fVar5 * fVar2 * fRam0000000146af08c8 + fVar8 * fVar3 * fRam0000000146af08b8;
  fStack_3c = fVar5 * fVar1 * fRam0000000146af08dc + fVar4 * fVar8 +
              fVar6 * fVar2 * fRam0000000146af08cc + fVar7 * fVar3 * fRam0000000146af08bc;
  local_38._4_4_ = param_2[5] + *(float *)(param_1 + 0x224);
  local_38._0_4_ = param_2[4] + *(float *)(param_1 + 0x220);
  local_38._8_4_ = param_2[6] + *(float *)(param_1 + 0x228);
  local_38._12_4_ = 0;
  local_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_1c = 0;
  FUN_142399d60(0x3f800000,&local_48);
  return;
}



// FUNCTION 142381730 FUN_142381730 body=186 status=ok
// SIG undefined FUN_142381730(void)

void FUN_142381730(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (iVar1 != 0) {
    iVar2 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar2 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x1a0),
               (longlong)iVar1 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  plVar3 = *(longlong **)(param_1 + 0x1a0);
  uVar4 = 0;
  uVar5 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x1a8) < plVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_142381730(*plVar3,param_2);
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 1423817f0 FUN_1423817f0 body=223 status=ok
// SIG undefined FUN_1423817f0(void)

void FUN_1423817f0(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) | 2;
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_4 == '\0') {
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
    FUN_14237c460(param_1 + 0x78);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 2;
    if (*(int *)(param_2 + 1) == 0) {
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x74) = iVar3;
      iVar2 = *(int *)(param_2 + 1);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x84) < iVar3 + iVar2) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x78);
          iVar3 = *(int *)(param_1 + 0x80);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 * 0xa0 + *(longlong *)(param_1 + 0x78)),(void *)*param_2
                   ,(longlong)iVar2 * 0xa0);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + iVar2;
      }
    }
  }
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return;
}



// FUNCTION 1423818d0 FUN_1423818d0 body=514 status=ok
// SIG undefined FUN_1423818d0(void)

void FUN_1423818d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_14232f420();
  if (0 < *(int *)(param_1 + 0x28)) {
    FUN_140942fb0(param_2,0,0);
  }
  plVar9 = *(longlong **)(param_1 + 0x50);
  plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x58) * 8;
  if (plVar9 != plVar10) {
    do {
      lVar2 = *plVar9;
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 400) != 0) {
          uVar5 = *(uint *)(*(longlong *)(lVar2 + 400) + 0xc);
          lVar6 = 0;
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar8 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar8 = uVar8 - 0x10000;
            }
            lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar8 * 0x18;
          }
          if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) goto LAB_142381a3e;
        }
        uVar3 = *(undefined4 *)((longlong)plVar9 + 0x24);
        lVar6 = plVar9[5];
        *(int *)(lVar2 + 0x1ec) = (int)plVar9[4];
        *(undefined4 *)(lVar2 + 0x1f0) = uVar3;
        *(int *)(lVar2 + 500) = (int)lVar6;
        local_28 = (undefined4)plVar9[2];
        uStack_24 = *(undefined4 *)((longlong)plVar9 + 0x14);
        uStack_20 = (undefined4)plVar9[3];
        uStack_1c = *(undefined4 *)((longlong)plVar9 + 0x1c);
        puVar7 = (undefined8 *)FQuat::Rotator(&local_28,local_40);
        *(undefined8 *)(lVar2 + 0x1f8) = *puVar7;
        *(undefined4 *)(lVar2 + 0x200) = *(undefined4 *)(puVar7 + 1);
        uVar3 = *(undefined4 *)((longlong)plVar9 + 0x34);
        lVar6 = plVar9[7];
        *(int *)(lVar2 + 0x204) = (int)plVar9[6];
        *(undefined4 *)(lVar2 + 0x208) = uVar3;
        *(int *)(lVar2 + 0x20c) = (int)lVar6;
        FUN_142382f60(lVar2,param_2,&DAT_146af29ec,0);
      }
LAB_142381a3e:
      plVar9 = plVar9 + 8;
    } while (plVar9 != plVar10);
  }
  *(undefined8 *)(param_2 + 0x650) = *(undefined8 *)(param_1 + 0x98);
  FUN_1423424e0(param_2);
  iVar1 = *(int *)(param_1 + 0x90);
  if ((iVar1 != -1) &&
     (cVar4 = FUN_141296720(param_1 + 0x60,param_2 + 0x210,0x3a83126f), cVar4 != '\0')) {
    *(int *)(param_2 + 0x350) = iVar1;
  }
  if (((*(byte *)(param_2 + 0xb8) & 1) != 0) &&
     ((*(int *)(param_1 + 0x90) != -1 || (0 < *(int *)(param_1 + 0x28))))) {
    FUN_1423424e0(param_2);
  }
  return;
}



// FUNCTION 142381ae0 FUN_142381ae0 body=387 status=ok
// SIG undefined FUN_142381ae0(void)

void FUN_142381ae0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_14232f420();
  if (0 < *(int *)(param_1 + 0x28)) {
    FUN_140942fb0(param_2,0,0);
  }
  plVar7 = *(longlong **)(param_1 + 0x50);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x58) * 8;
  if (plVar7 != plVar8) {
    do {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 400) != 0) {
          uVar3 = *(uint *)(*(longlong *)(lVar1 + 400) + 0xc);
          lVar4 = 0;
          if ((int)uVar3 < (int)DAT_1469e91c4) {
            uVar6 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar6 = uVar6 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar6 * 0x18;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) goto LAB_142381c3e;
        }
        uVar2 = *(undefined4 *)((longlong)plVar7 + 0x24);
        lVar4 = plVar7[5];
        *(int *)(lVar1 + 0x1ec) = (int)plVar7[4];
        *(undefined4 *)(lVar1 + 0x1f0) = uVar2;
        *(int *)(lVar1 + 500) = (int)lVar4;
        local_28 = (undefined4)plVar7[2];
        uStack_24 = *(undefined4 *)((longlong)plVar7 + 0x14);
        uStack_20 = (undefined4)plVar7[3];
        uStack_1c = *(undefined4 *)((longlong)plVar7 + 0x1c);
        puVar5 = (undefined8 *)FQuat::Rotator(&local_28,local_40);
        *(undefined8 *)(lVar1 + 0x1f8) = *puVar5;
        *(undefined4 *)(lVar1 + 0x200) = *(undefined4 *)(puVar5 + 1);
        uVar2 = *(undefined4 *)((longlong)plVar7 + 0x34);
        lVar4 = plVar7[7];
        *(int *)(lVar1 + 0x204) = (int)plVar7[6];
        *(undefined4 *)(lVar1 + 0x208) = uVar2;
        *(int *)(lVar1 + 0x20c) = (int)lVar4;
        FUN_142382f60(lVar1,param_2,&DAT_146af29ec,0);
      }
LAB_142381c3e:
      plVar7 = plVar7 + 8;
    } while (plVar7 != plVar8);
  }
  return;
}



// FUNCTION 142381c70 FUN_142381c70 body=3961 status=ok
// SIG undefined FUN_142381c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142381c70(longlong *param_1,float *param_2,char param_3)

{
  undefined1 (*pauVar1) [12];
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 auVar6 [12];
  longlong *plVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [4];
  undefined1 auVar55 [4];
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined4 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [4];
  undefined1 auStack_174 [4];
  undefined8 uStack_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  pfVar8 = (float *)(param_1 + 0x50);
  if (((*(float *)(param_1 + 0x3f) != *pfVar8) ||
      (*(float *)((longlong)param_1 + 0x1fc) != *(float *)((longlong)param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x40) != *(float *)(param_1 + 0x51))) {
    local_1a8 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
    auVar12._12_4_ = 0;
    auVar12._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
    fVar19 = (float)DAT_146af0860;
    fVar41 = DAT_146af0860._4_4_;
    fVar26 = DAT_146af0860._8_4_;
    auVar12 = divps(auVar12,_DAT_146af0860);
    fVar45 = (float)local_1a8 - (float)(int)auVar12._0_4_ * fVar19;
    fVar46 = (float)((ulonglong)local_1a8 >> 0x20) - (float)(int)auVar12._4_4_ * fVar41;
    fVar47 = *(float *)(param_1 + 0x40) - (float)(int)auVar12._8_4_ * fVar26;
    fVar45 = (float)(((uint)(fVar45 + fVar19) ^ (uint)fVar45) & -(uint)(0.0 <= fVar45) ^
                    (uint)(fVar45 + fVar19));
    fVar46 = (float)(((uint)(fVar46 + fVar41) ^ (uint)fVar46) & -(uint)(0.0 <= fVar46) ^
                    (uint)(fVar46 + fVar41));
    fStack_1a0 = (float)(((uint)(fVar47 + fVar26) ^ (uint)fVar47) & -(uint)(0.0 <= fVar47) ^
                        (uint)(fVar47 + fVar26));
    fStack_1a0 = (float)(((uint)(fStack_1a0 - fVar26) ^ (uint)fStack_1a0) &
                         -(uint)(fRam0000000146af0858 < fStack_1a0) ^ (uint)fStack_1a0);
    *(ulonglong *)pfVar8 =
         CONCAT44(((uint)(fVar46 - fVar41) ^ (uint)fVar46) & -(uint)(fRam0000000146af0854 < fVar46)
                  ^ (uint)fVar46,
                  ((uint)(fVar45 - fVar19) ^ (uint)fVar45) & -(uint)(_DAT_146af0850 < fVar45) ^
                  (uint)fVar45);
    *(float *)(param_1 + 0x51) = fStack_1a0;
    plVar7 = (longlong *)FRotator::Quaternion(pfVar8,&local_148);
    lVar5 = plVar7[1];
    param_1[0x4e] = *plVar7;
    param_1[0x4f] = lVar5;
  }
  fVar46 = *(float *)(param_1 + 0x4e);
  fVar47 = *(float *)((longlong)param_1 + 0x274);
  fVar44 = *(float *)(param_1 + 0x4f);
  fVar43 = *(float *)((longlong)param_1 + 0x27c);
  plVar7 = (longlong *)param_1[0x32];
  auVar55 = *(undefined1 (*) [4])(param_1 + 0x3e);
  auVar54 = *(undefined1 (*) [4])*(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
  pauVar1 = (undefined1 (*) [12])((longlong)param_1 + 0x204);
  fVar19 = *(float *)*pauVar1;
  fVar18 = 0.0;
  fVar41 = *(float *)((longlong)param_1 + 500);
  fVar26 = *(float *)((longlong)param_1 + 0x20c);
  fVar45 = *(float *)(param_1 + 0x41);
  auVar6 = *pauVar1;
  fStack_10c = 0.0;
  _local_118 = *pauVar1;
  fStack_11c = 0.0;
  _local_128 = *(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
  fStack_1a0 = fVar44;
  fStack_19c = fVar43;
  local_138 = fVar46;
  fStack_134 = fVar47;
  fStack_130 = fVar44;
  fStack_12c = fVar43;
  local_1a8._0_4_ = fVar46;
  local_1a8._4_4_ = fVar47;
  if (plVar7 == (longlong *)0x0) {
    fVar23 = 0.0;
  }
  else if ((*(byte *)((longlong)param_1 + 0x24c) & 0x1c) == 0) {
    pfVar8 = (float *)(**(code **)(*plVar7 + 0x420))(plVar7,local_108,param_1[0x33],0);
    fVar27 = fRam0000000146af0838;
    fVar35 = fRam0000000146af0834;
    fVar38 = _DAT_146af0830;
    auVar13._12_4_ = 0;
    auVar13._0_12_ = auVar6;
    auVar12 = *(undefined1 (*) [16])(pfVar8 + 8);
    fVar18 = auVar12._0_4_;
    fVar22 = auVar12._4_4_;
    fVar24 = auVar12._8_4_;
    fVar23 = auVar12._12_4_;
    fVar25 = *pfVar8;
    fVar28 = pfVar8[1];
    fVar37 = pfVar8[2];
    fVar40 = pfVar8[3];
    auVar12 = minps(auVar13,auVar12);
    auVar14._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146af09c4);
    auVar14._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146af09c0);
    auVar14._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146af09c8);
    auVar14._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146af09cc);
    iVar9 = movmskps((int)plVar7,auVar14);
    if (iVar9 == 0) {
      fVar39 = (float)auVar54 * fVar18;
      fVar42 = (float)auVar55 * fVar22;
      fVar41 = fVar41 * fVar24;
      fVar48 = fVar23 * 0.0;
      fVar34 = fVar25 * fVar47;
      fVar36 = fVar25 * fVar46;
      fVar27 = fVar28 * fVar46;
      fVar29 = fVar28 * fVar47;
      fVar38 = fVar37 * fVar46;
      fVar35 = fVar37 * fVar44;
      fVar30 = fVar41 * fVar28 - fVar42 * fVar37;
      fVar33 = fVar39 * fVar37 - fVar41 * fVar25;
      fVar31 = fVar42 * fVar25 - fVar39 * fVar28;
      fVar32 = fVar48 * fVar40 - fVar48 * fVar40;
      fVar30 = fVar30 + fVar30;
      fVar33 = fVar33 + fVar33;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar19 = fVar19 * fVar18;
      fVar45 = fVar45 * fVar22;
      fVar26 = fVar26 * fVar24;
      fVar23 = fVar23 * 0.0;
      auVar54 = (undefined1  [4])
                ((fVar31 * fVar28 - fVar33 * fVar37) + fVar30 * fVar40 + fVar39 + pfVar8[4]);
      auVar55 = (undefined1  [4])
                ((fVar30 * fVar37 - fVar31 * fVar25) + fVar33 * fVar40 + fVar42 + pfVar8[5]);
      fVar41 = (fVar33 * fVar25 - fVar30 * fVar28) + fVar31 * fVar40 + fVar41 + pfVar8[6];
      fVar46 = fVar25 * fVar43 * _DAT_146af08d0 + fVar46 * fVar40 + fVar28 * fVar44 * _DAT_146af08c0
               + fVar37 * fVar47 * _DAT_146af08b0;
      fVar47 = fVar25 * fVar44 * fRam0000000146af08d4 + fVar47 * fVar40 +
               fVar28 * fVar43 * fRam0000000146af08c4 + fVar38 * fRam0000000146af08b4;
      fVar44 = fVar34 * fRam0000000146af08d8 + fVar44 * fVar40 + fVar27 * fRam0000000146af08c8 +
               fVar37 * fVar43 * fRam0000000146af08b8;
      fVar43 = fVar36 * fRam0000000146af08dc + fVar43 * fVar40 + fVar29 * fRam0000000146af08cc +
               fVar35 * fRam0000000146af08bc;
      fVar18 = (fVar32 * fVar40 - fVar32 * fVar40) + fVar32 * fVar40 + fVar48 + pfVar8[7];
    }
    else {
      fVar29 = pfVar8[4];
      fVar30 = pfVar8[5];
      fVar33 = pfVar8[6];
      fVar31 = fVar28 + fVar28;
      fVar34 = fVar37 + fVar37;
      local_1a8._0_4_ = fVar19 * fVar18;
      local_1a8._4_4_ = fVar45 * fVar22;
      fStack_1a0 = fVar26 * fVar24;
      fStack_19c = fVar23 * 0.0;
      fVar36 = fVar25 * (fVar25 + fVar25);
      fVar32 = (fVar25 + fVar25) * fVar40;
      fVar49 = (fVar34 * fVar40 + fVar31 * fVar25) * fVar18;
      fVar50 = (fVar32 + fVar34 * fVar28) * fVar22;
      fVar52 = (fVar31 * fVar40 + fVar34 * fVar25) * fVar24;
      fVar39 = fVar22 * (fVar31 * fVar25 - fVar34 * fVar40);
      fVar32 = fVar24 * (fVar34 * fVar28 - fVar32);
      fVar42 = fVar18 * (fVar34 * fVar25 - fVar31 * fVar40);
      fVar18 = (float)((uint)((_DAT_146af0830 - (fVar37 * fVar34 + fVar28 * fVar31)) * fVar18) &
                      _DAT_146af0840);
      fVar22 = (float)((uint)((fRam0000000146af0834 - (fVar37 * fVar34 + fVar36)) * fVar22) &
                      uRam0000000146af0844);
      fVar24 = (float)((uint)((fRam0000000146af0838 - (fVar28 * fVar31 + fVar36)) * fVar24) &
                      uRam0000000146af0848);
      fVar28 = (float)((uint)((fRam0000000146af083c - (fVar36 + fVar36)) * fVar23) &
                      uRam0000000146af084c);
      fVar23 = fVar47 + fVar47;
      fVar25 = fVar44 + fVar44;
      fVar37 = fVar46 * (fVar46 + fVar46);
      fVar31 = fVar43 * (fVar46 + fVar46);
      fVar34 = (fVar43 * fVar25 + fVar46 * fVar23) * fVar19;
      fVar36 = (fVar31 + fVar47 * fVar25) * fVar45;
      fVar48 = (fVar43 * fVar23 + fVar46 * fVar25) * fVar26;
      fVar40 = fVar45 * (fVar46 * fVar23 - fVar43 * fVar25);
      fVar31 = fVar26 * (fVar47 * fVar25 - fVar31);
      fVar43 = fVar19 * (fVar46 * fVar25 - fVar43 * fVar23);
      fVar19 = (float)((uint)((_DAT_146af0830 - (fVar44 * fVar25 + fVar47 * fVar23)) * fVar19) &
                      _DAT_146af0840);
      fVar45 = (float)((uint)((fRam0000000146af0834 - (fVar44 * fVar25 + fVar37)) * fVar45) &
                      uRam0000000146af0844);
      fVar26 = (float)((uint)((fRam0000000146af0838 - (fVar47 * fVar23 + fVar37)) * fVar26) &
                      uRam0000000146af0848);
      fVar46 = (float)((uint)((fRam0000000146af083c - (fVar37 + fVar37)) * 0.0) &
                      uRam0000000146af084c);
      local_188 = fVar34 * fVar39 + fVar19 * fVar18 + fVar43 * fVar52 + fVar46 * fVar29;
      fStack_184 = fVar34 * fVar22 + fVar19 * fVar49 + fVar43 * fVar32 + fVar46 * fVar30;
      fStack_180 = fVar34 * fVar50 + fVar19 * fVar42 + fVar43 * fVar24 + fVar46 * fVar33;
      fStack_17c = fVar34 * fVar28 + fVar19 * fVar28 + fVar43 * fVar28 +
                   fVar46 * fRam0000000146af083c;
      auStack_174 = (undefined1  [4])
                    (fVar45 * fVar22 + fVar40 * fVar49 + fVar36 * fVar32 + fVar46 * fVar30);
      local_178 = (undefined1  [4])
                  (fVar45 * fVar39 + fVar40 * fVar18 + fVar36 * fVar52 + fVar46 * fVar29);
      uStack_170._0_4_ = fVar45 * fVar50 + fVar40 * fVar42 + fVar36 * fVar24 + fVar46 * fVar33;
      uStack_170._4_4_ =
           fVar45 * fVar28 + fVar40 * fVar28 + fVar36 * fVar28 + fVar46 * fRam0000000146af083c;
      local_168._4_4_ = fVar31 * fVar22 + fVar48 * fVar49 + fVar26 * fVar32 + fVar46 * fVar30;
      local_168._0_4_ = fVar31 * fVar39 + fVar48 * fVar18 + fVar26 * fVar52 + fVar46 * fVar29;
      fStack_160 = fVar31 * fVar50 + fVar48 * fVar42 + fVar26 * fVar24 + fVar46 * fVar33;
      fStack_15c = fVar31 * fVar28 + fVar48 * fVar28 + fVar26 * fVar28 +
                   fVar46 * fRam0000000146af083c;
      local_158 = (float)auVar55 * fVar39 + (float)auVar54 * fVar18 + fVar41 * fVar52 +
                  fRam0000000146af083c * fVar29;
      fStack_154 = (float)auVar55 * fVar22 + (float)auVar54 * fVar49 + fVar41 * fVar32 +
                   fRam0000000146af083c * fVar30;
      fStack_150 = (float)auVar55 * fVar50 + (float)auVar54 * fVar42 + fVar41 * fVar24 +
                   fRam0000000146af083c * fVar33;
      fStack_14c = (float)auVar55 * fVar28 + (float)auVar54 * fVar28 + fVar41 * fVar28 +
                   fRam0000000146af083c * fRam0000000146af083c;
      FMatrix::RemoveScaling(&local_188);
      fVar19 = (float)(-(uint)(_DAT_146af09c0 <= (float)local_1a8) & (_DAT_146af09b0 ^ (uint)fVar38)
                      ^ _DAT_146af09b0);
      fVar41 = (float)(-(uint)(fRam0000000146af09c4 <= local_1a8._4_4_) &
                       (uRam0000000146af09b4 ^ (uint)fVar35) ^ uRam0000000146af09b4);
      fVar45 = (float)(-(uint)(fRam0000000146af09c8 <= fStack_1a0) &
                       (uRam0000000146af09b8 ^ (uint)fVar27) ^ uRam0000000146af09b8);
      local_188 = local_188 * fVar19;
      fStack_184 = fStack_184 * fVar19;
      fStack_180 = fStack_180 * fVar19;
      fVar19 = (float)auStack_174 * fVar41;
      fVar26 = (float)local_178 * fVar41;
      uStack_170._0_4_ = (float)uStack_170 * fVar41;
      auStack_174 = (undefined1  [4])fVar19;
      fVar41 = (float)local_168._0_4_ * fVar45;
      fVar19 = (float)local_168._4_4_ * fVar45;
      fStack_160 = fStack_160 * fVar45;
      local_178 = (undefined1  [4])fVar26;
      local_168._4_4_ = fVar19;
      local_168._0_4_ = fVar41;
      FQuat::FQuat(&local_148,&local_188);
      local_198 = 0x322bcc77;
      auVar20._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
      auVar20._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
      auVar20._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
      auVar20._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
      fVar46 = auVar20._4_4_ + auVar20._0_4_;
      fVar47 = auVar20._8_4_ + auVar20._4_4_;
      fVar44 = auVar20._12_4_ + auVar20._8_4_;
      fVar43 = auVar20._0_4_ + auVar20._12_4_;
      auVar3._4_4_ = fVar47;
      auVar3._0_4_ = fVar46;
      auVar3._8_4_ = fVar44;
      auVar3._12_4_ = fVar43;
      auVar12 = rsqrtps(auVar20,auVar3);
      fVar19 = auVar12._0_4_;
      fVar41 = auVar12._4_4_;
      fVar26 = auVar12._8_4_;
      fVar45 = auVar12._12_4_;
      fVar19 = (_DAT_146af09a0 - fVar19 * fVar19 * fVar46 * _DAT_146af09a0) * fVar19 + fVar19;
      fVar41 = (fRam0000000146af09a4 - fVar41 * fVar41 * fVar47 * fRam0000000146af09a4) * fVar41 +
               fVar41;
      fVar26 = (fRam0000000146af09a8 - fVar26 * fVar26 * fVar44 * fRam0000000146af09a8) * fVar26 +
               fVar26;
      fVar45 = (fRam0000000146af09ac - fVar45 * fVar45 * fVar43 * fRam0000000146af09ac) * fVar45 +
               fVar45;
      fVar46 = (float)(((uint)(((_DAT_146af09a0 - fVar19 * fVar19 * fVar46 * _DAT_146af09a0) *
                                fVar19 + fVar19) * local_148) ^ _DAT_146af0990) &
                       -(uint)(1e-08 <= fVar46) ^ _DAT_146af0990);
      fVar47 = (float)(((uint)(((fRam0000000146af09a4 -
                                fVar41 * fVar41 * fVar47 * fRam0000000146af09a4) * fVar41 + fVar41)
                              * fStack_144) ^ uRam0000000146af0994) & -(uint)(1e-08 <= fVar47) ^
                      uRam0000000146af0994);
      fVar44 = (float)(((uint)(((fRam0000000146af09a8 -
                                fVar26 * fVar26 * fVar44 * fRam0000000146af09a8) * fVar26 + fVar26)
                              * fStack_140) ^ uRam0000000146af0998) & -(uint)(1e-08 <= fVar44) ^
                      uRam0000000146af0998);
      fVar43 = (float)(((uint)(((fRam0000000146af09ac -
                                fVar45 * fVar45 * fVar43 * fRam0000000146af09ac) * fVar45 + fVar45)
                              * fStack_13c) ^ uRam0000000146af099c) & -(uint)(1e-08 <= fVar43) ^
                      uRam0000000146af099c);
      auVar54 = (undefined1  [4])local_158;
      auVar55 = (undefined1  [4])fStack_154;
      fVar41 = fStack_150;
      fVar18 = 0.0;
      fVar19 = (float)local_1a8;
      fVar45 = local_1a8._4_4_;
      fVar26 = fStack_1a0;
      fVar23 = fStack_19c;
    }
  }
  else {
    local_1b8 = param_1[0x33];
    FUN_142385450(param_1,&local_188,&local_138,plVar7);
    fVar46 = local_188;
    fVar47 = fStack_184;
    fVar44 = fStack_180;
    fVar43 = fStack_17c;
    auVar54 = local_178;
    auVar55 = auStack_174;
    fVar41 = (float)uStack_170;
    fVar18 = uStack_170._4_4_;
    fVar19 = (float)local_168._0_4_;
    fVar45 = (float)local_168._4_4_;
    fVar26 = fStack_160;
    fVar23 = fStack_15c;
  }
  *(float *)(param_1 + 0x42) = fVar46;
  *(float *)((longlong)param_1 + 0x214) = fVar47;
  *(float *)(param_1 + 0x43) = fVar44;
  *(float *)((longlong)param_1 + 0x21c) = fVar43;
  *(undefined1 (*) [4])(param_1 + 0x44) = auVar54;
  *(undefined1 (*) [4])((longlong)param_1 + 0x224) = auVar55;
  *(float *)(param_1 + 0x45) = fVar41;
  *(float *)((longlong)param_1 + 0x22c) = fVar18;
  *(float *)(param_1 + 0x46) = fVar19;
  *(float *)((longlong)param_1 + 0x234) = fVar45;
  *(float *)(param_1 + 0x47) = fVar26;
  *(float *)((longlong)param_1 + 0x23c) = fVar23;
  *(float *)(param_1 + 0x3a) = *(float *)(param_1 + 0x3a) + *param_2;
  *(float *)((longlong)param_1 + 0x1d4) = param_2[1] + *(float *)((longlong)param_1 + 0x1d4);
  *(float *)(param_1 + 0x3b) = param_2[2] + *(float *)(param_1 + 0x3b);
  plVar7 = (longlong *)param_1[0x32];
  if ((plVar7 == (longlong *)0x0) || ((*(byte *)((longlong)param_1 + 0x24c) & 4) != 0)) {
    pfVar8 = (float *)(param_1 + 0x50);
    fVar19 = param_2[2];
    *(ulonglong *)((longlong)param_1 + 0x1ec) =
         CONCAT44((float)auVar55 + param_2[1],(float)auVar54 + *param_2);
    *(float *)((longlong)param_1 + 500) = fVar41 + fVar19;
    if ((*(float *)(param_1 + 0x3f) != *pfVar8) ||
       ((*(float *)((longlong)param_1 + 0x1fc) != *(float *)((longlong)param_1 + 0x284) ||
        (*(float *)(param_1 + 0x40) != *(float *)(param_1 + 0x51))))) {
      local_1a8 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
      auVar15._12_4_ = 0;
      auVar15._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
      fVar19 = (float)DAT_146af0860;
      fVar41 = DAT_146af0860._4_4_;
      fVar26 = DAT_146af0860._8_4_;
      auVar12 = divps(auVar15,_DAT_146af0860);
      fVar45 = (float)local_1a8 - (float)(int)auVar12._0_4_ * fVar19;
      fVar46 = (float)((ulonglong)local_1a8 >> 0x20) - (float)(int)auVar12._4_4_ * fVar41;
      fVar47 = *(float *)(param_1 + 0x40) - (float)(int)auVar12._8_4_ * fVar26;
      fVar45 = (float)(((uint)(fVar45 + fVar19) ^ (uint)fVar45) & -(uint)(0.0 <= fVar45) ^
                      (uint)(fVar45 + fVar19));
      fVar46 = (float)(((uint)(fVar46 + fVar41) ^ (uint)fVar46) & -(uint)(0.0 <= fVar46) ^
                      (uint)(fVar46 + fVar41));
      fStack_1a0 = (float)(((uint)(fVar47 + fVar26) ^ (uint)fVar47) & -(uint)(0.0 <= fVar47) ^
                          (uint)(fVar47 + fVar26));
      fStack_1a0 = (float)(((uint)(fStack_1a0 - fVar26) ^ (uint)fStack_1a0) &
                           -(uint)(fRam0000000146af0858 < fStack_1a0) ^ (uint)fStack_1a0);
      *(ulonglong *)pfVar8 =
           CONCAT44(((uint)(fVar46 - fVar41) ^ (uint)fVar46) &
                    -(uint)(fRam0000000146af0854 < fVar46) ^ (uint)fVar46,
                    ((uint)(fVar45 - fVar19) ^ (uint)fVar45) & -(uint)(_DAT_146af0850 < fVar45) ^
                    (uint)fVar45);
      *(float *)(param_1 + 0x51) = fStack_1a0;
      plVar7 = (longlong *)FRotator::Quaternion(pfVar8,&local_148);
      lVar5 = plVar7[1];
      param_1[0x4e] = *plVar7;
      param_1[0x4f] = lVar5;
      plVar7 = (longlong *)param_1[0x32];
    }
    fVar19 = *(float *)(param_1 + 0x3e);
    fVar41 = *(float *)*(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
    pauVar1 = (undefined1 (*) [12])((longlong)param_1 + 0x204);
    fVar26 = *(float *)*pauVar1;
    fVar22 = 0.0;
    fVar44 = *(float *)(param_1 + 0x4e);
    fVar43 = *(float *)((longlong)param_1 + 0x274);
    fVar18 = *(float *)(param_1 + 0x4f);
    fVar23 = *(float *)((longlong)param_1 + 0x27c);
    fVar45 = *(float *)((longlong)param_1 + 500);
    fVar46 = *(float *)((longlong)param_1 + 0x20c);
    fVar47 = *(float *)(param_1 + 0x41);
    auVar6 = *pauVar1;
    fStack_15c = 0.0;
    _local_168 = *pauVar1;
    uStack_170._4_4_ = 0.0;
    _local_178 = *(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
    fStack_1a0 = fVar18;
    fStack_19c = fVar23;
    local_188 = fVar44;
    fStack_184 = fVar43;
    fStack_180 = fVar18;
    fStack_17c = fVar23;
    local_1a8._0_4_ = fVar44;
    local_1a8._4_4_ = fVar43;
    if (plVar7 == (longlong *)0x0) {
      fVar24 = 0.0;
    }
    else if ((*(byte *)((longlong)param_1 + 0x24c) & 0x1c) == 0) {
      pfVar8 = (float *)(**(code **)(*plVar7 + 0x420))(plVar7,local_108,param_1[0x33],0);
      fVar30 = fRam0000000146af0838;
      fVar29 = fRam0000000146af0834;
      fVar27 = _DAT_146af0830;
      auVar16._12_4_ = 0;
      auVar16._0_12_ = auVar6;
      auVar12 = *(undefined1 (*) [16])(pfVar8 + 8);
      fVar22 = auVar12._0_4_;
      fVar25 = auVar12._4_4_;
      fVar28 = auVar12._8_4_;
      fVar24 = auVar12._12_4_;
      fVar37 = *pfVar8;
      fVar40 = pfVar8[1];
      fVar38 = pfVar8[2];
      fVar35 = pfVar8[3];
      auVar12 = minps(auVar16,auVar12);
      auVar17._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146af09c4);
      auVar17._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146af09c0);
      auVar17._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146af09c8);
      auVar17._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146af09cc);
      iVar9 = movmskps((int)plVar7,auVar17);
      if (iVar9 == 0) {
        fVar41 = fVar41 * fVar22;
        fVar19 = fVar19 * fVar25;
        fVar45 = fVar45 * fVar28;
        fVar39 = fVar24 * 0.0;
        fVar34 = fVar43 * fVar37;
        fVar36 = fVar44 * fVar37;
        fVar27 = fVar44 * fVar40;
        fVar29 = fVar43 * fVar40;
        fVar42 = fVar44 * fVar38;
        fVar48 = fVar18 * fVar38;
        fVar30 = fVar45 * fVar40 - fVar19 * fVar38;
        fVar33 = fVar41 * fVar38 - fVar45 * fVar37;
        fVar31 = fVar19 * fVar37 - fVar41 * fVar40;
        fVar32 = fVar39 * fVar35 - fVar39 * fVar35;
        fVar30 = fVar30 + fVar30;
        fVar33 = fVar33 + fVar33;
        fVar31 = fVar31 + fVar31;
        fVar32 = fVar32 + fVar32;
        fVar26 = fVar26 * fVar22;
        fVar47 = fVar47 * fVar25;
        fVar46 = fVar46 * fVar28;
        fVar24 = fVar24 * 0.0;
        fVar41 = (fVar31 * fVar40 - fVar33 * fVar38) + fVar30 * fVar35 + fVar41 + pfVar8[4];
        fVar19 = (fVar30 * fVar38 - fVar31 * fVar37) + fVar33 * fVar35 + fVar19 + pfVar8[5];
        fVar45 = (fVar33 * fVar37 - fVar30 * fVar40) + fVar31 * fVar35 + fVar45 + pfVar8[6];
        fVar44 = fVar23 * fVar37 * _DAT_146af08d0 + fVar44 * fVar35 +
                 fVar18 * fVar40 * _DAT_146af08c0 + fVar43 * fVar38 * _DAT_146af08b0;
        fVar43 = fVar18 * fVar37 * fRam0000000146af08d4 + fVar43 * fVar35 +
                 fVar23 * fVar40 * fRam0000000146af08c4 + fVar42 * fRam0000000146af08b4;
        fVar18 = fVar34 * fRam0000000146af08d8 + fVar18 * fVar35 + fVar27 * fRam0000000146af08c8 +
                 fVar23 * fVar38 * fRam0000000146af08b8;
        fVar23 = fVar36 * fRam0000000146af08dc + fVar23 * fVar35 + fVar29 * fRam0000000146af08cc +
                 fVar48 * fRam0000000146af08bc;
        fVar22 = (fVar32 * fVar35 - fVar32 * fVar35) + fVar32 * fVar35 + fVar39 + pfVar8[7];
      }
      else {
        fVar33 = pfVar8[4];
        fVar31 = pfVar8[5];
        fVar32 = pfVar8[6];
        fVar34 = fVar40 + fVar40;
        fVar36 = fVar38 + fVar38;
        local_1a8._0_4_ = fVar26 * fVar22;
        local_1a8._4_4_ = fVar47 * fVar25;
        fStack_1a0 = fVar46 * fVar28;
        fStack_19c = fVar24 * 0.0;
        fVar39 = fVar37 * (fVar37 + fVar37);
        fVar48 = fVar35 * (fVar37 + fVar37);
        fVar52 = (fVar35 * fVar36 + fVar37 * fVar34) * fVar22;
        fVar51 = (fVar48 + fVar40 * fVar36) * fVar25;
        fVar53 = (fVar35 * fVar34 + fVar37 * fVar36) * fVar28;
        fVar42 = fVar25 * (fVar37 * fVar34 - fVar35 * fVar36);
        fVar48 = fVar28 * (fVar40 * fVar36 - fVar48);
        fVar49 = fVar22 * (fVar37 * fVar36 - fVar35 * fVar34);
        fVar37 = fVar43 + fVar43;
        fVar35 = fVar18 + fVar18;
        fVar22 = (float)((uint)((_DAT_146af0830 - (fVar38 * fVar36 + fVar40 * fVar34)) * fVar22) &
                        _DAT_146af0840);
        fVar25 = (float)((uint)((fRam0000000146af0834 - (fVar38 * fVar36 + fVar39)) * fVar25) &
                        uRam0000000146af0844);
        fVar28 = (float)((uint)((fRam0000000146af0838 - (fVar40 * fVar34 + fVar39)) * fVar28) &
                        uRam0000000146af0848);
        fVar24 = (float)((uint)((fRam0000000146af083c - (fVar39 + fVar39)) * fVar24) &
                        uRam0000000146af084c);
        fVar38 = fVar44 * (fVar44 + fVar44);
        fVar40 = (fVar44 + fVar44) * fVar23;
        fVar36 = (fVar35 * fVar23 + fVar37 * fVar44) * fVar26;
        fVar39 = (fVar40 + fVar35 * fVar43) * fVar47;
        fVar50 = (fVar37 * fVar23 + fVar35 * fVar44) * fVar46;
        fVar34 = fVar47 * (fVar37 * fVar44 - fVar35 * fVar23);
        fVar40 = fVar46 * (fVar35 * fVar43 - fVar40);
        fVar23 = fVar26 * (fVar35 * fVar44 - fVar37 * fVar23);
        fVar26 = (float)((uint)((_DAT_146af0830 - (fVar18 * fVar35 + fVar43 * fVar37)) * fVar26) &
                        _DAT_146af0840);
        fVar47 = (float)((uint)((fRam0000000146af0834 - (fVar18 * fVar35 + fVar38)) * fVar47) &
                        uRam0000000146af0844);
        fVar46 = (float)((uint)((fRam0000000146af0838 - (fVar43 * fVar37 + fVar38)) * fVar46) &
                        uRam0000000146af0848);
        fVar44 = (float)((uint)((fRam0000000146af083c - (fVar38 + fVar38)) * 0.0) &
                        uRam0000000146af084c);
        local_188 = fVar36 * fVar42 + fVar26 * fVar22 + fVar23 * fVar53 + fVar44 * fVar33;
        fStack_184 = fVar36 * fVar25 + fVar26 * fVar52 + fVar23 * fVar48 + fVar44 * fVar31;
        fStack_180 = fVar36 * fVar51 + fVar26 * fVar49 + fVar23 * fVar28 + fVar44 * fVar32;
        fStack_17c = fVar36 * fVar24 + fVar26 * fVar24 + fVar23 * fVar24 +
                     fVar44 * fRam0000000146af083c;
        auStack_174 = (undefined1  [4])
                      (fVar47 * fVar25 + fVar34 * fVar52 + fVar39 * fVar48 + fVar44 * fVar31);
        local_178 = (undefined1  [4])
                    (fVar47 * fVar42 + fVar34 * fVar22 + fVar39 * fVar53 + fVar44 * fVar33);
        uStack_170._0_4_ = fVar47 * fVar51 + fVar34 * fVar49 + fVar39 * fVar28 + fVar44 * fVar32;
        uStack_170._4_4_ =
             fVar47 * fVar24 + fVar34 * fVar24 + fVar39 * fVar24 + fVar44 * fRam0000000146af083c;
        local_168._4_4_ = fVar40 * fVar25 + fVar50 * fVar52 + fVar46 * fVar48 + fVar44 * fVar31;
        local_168._0_4_ = fVar40 * fVar42 + fVar50 * fVar22 + fVar46 * fVar53 + fVar44 * fVar33;
        fStack_160 = fVar40 * fVar51 + fVar50 * fVar49 + fVar46 * fVar28 + fVar44 * fVar32;
        fStack_15c = fVar40 * fVar24 + fVar50 * fVar24 + fVar46 * fVar24 +
                     fVar44 * fRam0000000146af083c;
        local_158 = fVar19 * fVar42 + fVar41 * fVar22 + fVar45 * fVar53 +
                    fRam0000000146af083c * fVar33;
        fStack_154 = fVar19 * fVar25 + fVar41 * fVar52 + fVar45 * fVar48 +
                     fRam0000000146af083c * fVar31;
        fStack_150 = fVar19 * fVar51 + fVar41 * fVar49 + fVar45 * fVar28 +
                     fRam0000000146af083c * fVar32;
        fStack_14c = fVar19 * fVar24 + fVar41 * fVar24 + fVar45 * fVar24 +
                     fRam0000000146af083c * fRam0000000146af083c;
        FMatrix::RemoveScaling(&local_188);
        fVar19 = (float)(-(uint)(_DAT_146af09c0 <= (float)local_1a8) &
                         (_DAT_146af09b0 ^ (uint)fVar27) ^ _DAT_146af09b0);
        fVar41 = (float)(-(uint)(fRam0000000146af09c4 <= local_1a8._4_4_) &
                         (uRam0000000146af09b4 ^ (uint)fVar29) ^ uRam0000000146af09b4);
        fVar45 = (float)(-(uint)(fRam0000000146af09c8 <= fStack_1a0) &
                         (uRam0000000146af09b8 ^ (uint)fVar30) ^ uRam0000000146af09b8);
        local_188 = local_188 * fVar19;
        fStack_184 = fStack_184 * fVar19;
        fStack_180 = fStack_180 * fVar19;
        fVar19 = (float)auStack_174 * fVar41;
        fVar26 = (float)local_178 * fVar41;
        uStack_170._0_4_ = (float)uStack_170 * fVar41;
        auStack_174 = (undefined1  [4])fVar19;
        fVar41 = (float)local_168._0_4_ * fVar45;
        fVar19 = (float)local_168._4_4_ * fVar45;
        fStack_160 = fStack_160 * fVar45;
        local_178 = (undefined1  [4])fVar26;
        local_168._4_4_ = fVar19;
        local_168._0_4_ = fVar41;
        FQuat::FQuat(&local_148,&local_188);
        local_198 = 0x322bcc77;
        auVar21._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
        auVar21._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
        auVar21._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
        auVar21._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
        fVar46 = auVar21._4_4_ + auVar21._0_4_;
        fVar47 = auVar21._8_4_ + auVar21._4_4_;
        fVar18 = auVar21._12_4_ + auVar21._8_4_;
        fVar23 = auVar21._0_4_ + auVar21._12_4_;
        auVar4._4_4_ = fVar47;
        auVar4._0_4_ = fVar46;
        auVar4._8_4_ = fVar18;
        auVar4._12_4_ = fVar23;
        auVar12 = rsqrtps(auVar21,auVar4);
        fVar19 = auVar12._0_4_;
        fVar41 = auVar12._4_4_;
        fVar26 = auVar12._8_4_;
        fVar45 = auVar12._12_4_;
        fVar19 = (_DAT_146af09a0 - fVar19 * fVar19 * fVar46 * _DAT_146af09a0) * fVar19 + fVar19;
        fVar41 = (fRam0000000146af09a4 - fVar41 * fVar41 * fVar47 * fRam0000000146af09a4) * fVar41 +
                 fVar41;
        fVar26 = (fRam0000000146af09a8 - fVar26 * fVar26 * fVar18 * fRam0000000146af09a8) * fVar26 +
                 fVar26;
        fVar45 = (fRam0000000146af09ac - fVar45 * fVar45 * fVar23 * fRam0000000146af09ac) * fVar45 +
                 fVar45;
        fVar44 = (float)(((uint)(((_DAT_146af09a0 - fVar19 * fVar19 * fVar46 * _DAT_146af09a0) *
                                  fVar19 + fVar19) * local_148) ^ _DAT_146af0990) &
                         -(uint)(1e-08 <= fVar46) ^ _DAT_146af0990);
        fVar43 = (float)(((uint)(((fRam0000000146af09a4 -
                                  fVar41 * fVar41 * fVar47 * fRam0000000146af09a4) * fVar41 + fVar41
                                 ) * fStack_144) ^ uRam0000000146af0994) & -(uint)(1e-08 <= fVar47)
                        ^ uRam0000000146af0994);
        fVar18 = (float)(((uint)(((fRam0000000146af09a8 -
                                  fVar26 * fVar26 * fVar18 * fRam0000000146af09a8) * fVar26 + fVar26
                                 ) * fStack_140) ^ uRam0000000146af0998) & -(uint)(1e-08 <= fVar18)
                        ^ uRam0000000146af0998);
        fVar23 = (float)(((uint)(((fRam0000000146af09ac -
                                  fVar45 * fVar45 * fVar23 * fRam0000000146af09ac) * fVar45 + fVar45
                                 ) * fStack_13c) ^ uRam0000000146af099c) & -(uint)(1e-08 <= fVar23)
                        ^ uRam0000000146af099c);
        fVar41 = local_158;
        fVar19 = fStack_154;
        fVar45 = fStack_150;
        fVar22 = 0.0;
        fVar26 = (float)local_1a8;
        fVar47 = local_1a8._4_4_;
        fVar46 = fStack_1a0;
        fVar24 = fStack_19c;
      }
    }
    else {
      local_1b8 = param_1[0x33];
      FUN_142385450(param_1,&local_138,&local_188,plVar7);
      fVar44 = local_138;
      fVar43 = fStack_134;
      fVar18 = fStack_130;
      fVar23 = fStack_12c;
      fVar41 = (float)local_128._0_4_;
      fVar19 = (float)local_128._4_4_;
      fVar45 = fStack_120;
      fVar22 = fStack_11c;
      fVar26 = (float)local_118._0_4_;
      fVar47 = (float)local_118._4_4_;
      fVar46 = fStack_110;
      fVar24 = fStack_10c;
    }
    *(float *)(param_1 + 0x42) = fVar44;
    *(float *)((longlong)param_1 + 0x214) = fVar43;
    *(float *)(param_1 + 0x43) = fVar18;
    *(float *)((longlong)param_1 + 0x21c) = fVar23;
    *(float *)(param_1 + 0x44) = fVar41;
    *(float *)((longlong)param_1 + 0x224) = fVar19;
    *(float *)(param_1 + 0x45) = fVar45;
    *(float *)((longlong)param_1 + 0x22c) = fVar22;
    *(float *)(param_1 + 0x46) = fVar26;
    *(float *)((longlong)param_1 + 0x234) = fVar47;
    *(float *)(param_1 + 0x47) = fVar46;
    *(float *)((longlong)param_1 + 0x23c) = fVar24;
  }
  uVar11 = 0;
  if (((*(byte *)(param_1 + 0x17) & 4) == 0) ||
     ((uVar10 = uVar11, param_3 != '\0' &&
      (((*param_2 != 0.0 || (param_2[1] != 0.0)) || (param_2[2] != 0.0)))))) {
    uVar10 = 1;
  }
  (**(code **)(*param_1 + 0x478))(param_1,uVar10,0);
  if ((*(byte *)((longlong)param_1 + 0x24d) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x540))(param_1,uVar10,0);
  }
  if ((param_3 == '\0') || (((*param_2 == 0.0 && (param_2[1] == 0.0)) && (param_2[2] == 0.0)))) {
    UActorComponent::MarkRenderDynamicDataDirty(param_1);
  }
  if ((*(char *)((longlong)param_1 + 0x24c) < '\0') && (param_3 == '\0')) {
    (**(code **)(*param_1 + 0x4c8))(param_1,1);
  }
  plVar7 = (longlong *)param_1[0x34];
  uVar10 = (longlong)(int)param_1[0x35] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_1[0x35] < plVar7) {
    uVar10 = uVar11;
  }
  if (uVar10 != 0) {
    do {
      plVar2 = (longlong *)*plVar7;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 1000))(plVar2,param_2,param_3);
      }
      plVar7 = plVar7 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  return;
}



// FUNCTION 142382bf0 FUN_142382bf0 body=750 status=ok
// SIG undefined FUN_142382bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142382bf0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  byte bVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (0 < (int)param_1[0x35]) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0();
    }
    if (((param_2 != '\0') && ((*(byte *)(param_1 + 0x60) & 1) == 0)) &&
       (*(float *)(lVar5 + 0x790) - *(float *)(param_1 + 0x6c) < 1.0)) {
      return 0;
    }
    local_40._0_4_ = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    if (((int)param_1[0x55] < 1) ||
       (lVar6 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8), lVar6 == 0)) {
      bVar10 = 1;
    }
    else {
      bVar10 = *(byte *)(lVar6 + 0x1b8) >> 2 & 1;
    }
    iVar9 = (int)param_1[0x35];
    if (iVar9 != 0) {
      if (0 < iVar9) {
        FUN_140615c30(local_108,iVar9);
      }
      puVar7 = local_108;
      if (local_48 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(((ulonglong)puVar7 | (ulonglong)local_48) + (longlong)(int)local_40 * 8),
                 (void *)param_1[0x34],(longlong)iVar9 << 3);
      local_40._0_4_ = (int)local_40 + iVar9;
      puVar7 = local_48;
      while (0 < (int)local_40) {
        iVar9 = (int)local_40 + -1;
        puVar8 = local_108;
        if (puVar7 != (undefined1 *)0x0) {
          puVar8 = (undefined1 *)0x0;
        }
        plVar1 = *(longlong **)(((ulonglong)puVar8 | (ulonglong)puVar7) + (longlong)iVar9 * 8);
        iVar3 = ((int)local_40 - iVar9) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(((ulonglong)puVar8 | (ulonglong)puVar7) + (longlong)iVar9 * 8),
                     (void *)(((ulonglong)puVar8 | (ulonglong)puVar7) + (longlong)(int)local_40 * 8)
                     ,(longlong)iVar3 << 3);
          puVar7 = local_48;
        }
        local_40._0_4_ = (int)local_40 + -1;
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)((longlong)plVar1 + 0x24c) & 0xc) != 0) {
            lVar6 = FUN_1429f11d0();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            puVar7 = local_48;
            if ((bVar2) &&
               ((((*(byte *)((longlong)plVar1 + 0x2ef) & 1) != 0 || (bVar10 == 0)) &&
                (iVar9 = (**(code **)(*plVar1 + 0x4e8))(plVar1), puVar7 = local_48,
                (iVar9 - 1U & 0xfffffffd) == 0)))) {
              lVar6 = *plVar1;
              uVar4 = (**(code **)(*param_1 + 0x4f8))(param_1);
              iVar9 = (**(code **)(lVar6 + 0x4f0))(plVar1,uVar4);
              puVar7 = local_48;
              if (iVar9 != 0) {
                *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
                *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar5 + 0x790);
                if (local_48 == (undefined1 *)0x0) {
                  return 0;
                }
                FMemory::Free();
                return 0;
              }
            }
          }
          iVar9 = (int)plVar1[0x35];
          if (iVar9 != 0) {
            if (local_40._4_4_ < (int)local_40 + iVar9) {
              FUN_140615c30(local_108,(int)local_40 + iVar9);
              puVar7 = local_48;
            }
            puVar8 = local_108;
            if (puVar7 != (undefined1 *)0x0) {
              puVar8 = puVar7;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar8 + (longlong)(int)local_40 * 8,(void *)plVar1[0x34],
                       (longlong)iVar9 << 3);
            local_40._0_4_ = (int)local_40 + iVar9;
            puVar7 = local_48;
          }
        }
      }
      if (puVar7 != (undefined1 *)0x0) {
        FMemory::Free(puVar7);
      }
    }
  }
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  return 1;
}



// FUNCTION 142382ee0 AttachTo body=117 status=ok
// SIG undefined AttachTo(void)

void USceneComponent::AttachTo
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined1 param_5)

{
  undefined2 local_res20;
  undefined1 local_res22;
  undefined1 local_res23;
  
  local_res23 = param_5;
  local_res20 = 0;
  local_res22 = 0;
  if (param_4 != 0) {
    if (param_4 == 1) {
      local_res20 = 0x101;
    }
    else {
      if (param_4 != 2) {
        if (param_4 == 3) {
          local_res20 = 0x202;
          local_res22 = 2;
          FUN_142382f60(param_1,param_2,&local_res20,param_3);
          return;
        }
        goto LAB_142382f43;
      }
      local_res20 = 0x202;
    }
    local_res22 = 1;
  }
LAB_142382f43:
  FUN_142382f60(param_1,param_2,&local_res20,param_3);
  return;
}



// FUNCTION 142382f60 FUN_142382f60 body=6238 status=ok
// SIG undefined FUN_142382f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142382f60(longlong *param_1,longlong *param_2,char *param_3,longlong param_4)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  float *pfVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auStack_7b8 [32];
  longlong *local_798;
  undefined1 local_790;
  byte local_788;
  char local_787;
  undefined1 local_784;
  undefined1 local_783;
  undefined1 local_782;
  undefined1 local_781;
  undefined4 local_780;
  undefined4 *local_778;
  undefined4 *puStack_770;
  uint local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined4 *local_748;
  float *pfStack_740;
  undefined4 *local_738;
  undefined1 *puStack_730;
  undefined4 *local_728;
  undefined1 *puStack_720;
  undefined4 local_710;
  longlong local_708 [3];
  longlong lStack_6f0;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  undefined1 local_6d8 [8];
  undefined1 local_6d0 [8];
  undefined1 local_6c8 [8];
  longlong local_6c0;
  undefined1 local_6b8 [8];
  longlong *local_6b0;
  undefined8 local_6a8;
  longlong local_6a0;
  code *local_698;
  byte *pbStack_690;
  undefined4 local_680;
  undefined4 local_674;
  undefined4 local_668;
  undefined4 local_65c;
  undefined4 local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [8];
  longlong *local_610;
  code *local_5f8;
  byte *pbStack_5f0;
  undefined4 *local_5e8;
  undefined4 *puStack_5e0;
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong local_5b8 [2];
  undefined4 *local_5a8;
  undefined1 *puStack_5a0;
  undefined1 local_598 [16];
  undefined1 local_588 [8];
  longlong *local_580;
  longlong local_578 [2];
  undefined4 *local_568;
  float *pfStack_560;
  undefined1 local_558 [16];
  undefined1 local_548 [8];
  longlong *local_540;
  longlong local_538 [2];
  longlong local_528 [2];
  undefined4 *local_518;
  undefined1 *puStack_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [8];
  longlong *local_4f0;
  longlong local_4e8 [2];
  longlong local_4d8 [2];
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  undefined1 local_4a8 [8];
  longlong *local_4a0;
  undefined1 local_490 [12];
  undefined1 local_484 [12];
  undefined1 local_478 [16];
  undefined1 local_468 [8];
  longlong *local_460;
  undefined1 local_450 [8];
  longlong *local_448;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420 [8];
  longlong *local_418;
  undefined1 local_408 [8];
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [8];
  longlong *local_3d0;
  undefined1 local_3c0 [8];
  longlong *local_3b8;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [40];
  undefined1 local_330 [40];
  undefined1 local_308 [40];
  undefined1 local_2e0 [40];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined4 local_210 [4];
  undefined1 local_200 [8];
  longlong *local_1f8;
  char local_1e8;
  undefined4 local_1e0 [4];
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  char local_1b8;
  undefined1 local_1b0 [8];
  undefined4 local_1a8 [4];
  undefined1 local_198 [24];
  undefined1 local_180;
  undefined4 local_178;
  undefined1 local_168 [24];
  undefined1 local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 auStack_120 [2];
  undefined4 local_118 [4];
  undefined1 local_108 [24];
  undefined1 local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [24];
  undefined1 local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [24];
  undefined1 local_90;
  undefined1 local_88 [40];
  char local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  pbStack_690 = &local_788;
  local_788 = 0;
  local_698 = FUN_1406ddef0;
  local_5f8 = FUN_1406ddef0;
  pbStack_5f0 = pbStack_690;
  lVar13 = FUN_1415d8310(&local_5f8,&DAT_14622e6dc);
  if (0 < *(int *)(lVar13 + 0x5c)) {
    FUN_142399e30(param_1,param_2,param_4);
    return 1;
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if ((param_2 == (longlong *)param_1[0x32]) && (param_4 == param_1[0x33])) {
    plVar19 = (longlong *)param_2[0x34];
    local_787 = '\x01';
    plVar15 = plVar19 + (int)param_2[0x35];
    for (; plVar19 != plVar15; plVar19 = plVar19 + 1) {
      if ((longlong *)*plVar19 == param_1) {
        return 1;
      }
    }
  }
  else {
    local_787 = '\0';
  }
  if (param_2 == param_1) {
    FName::FName(local_6d8,&DAT_14505af3c,1);
    uVar14 = UObjectBaseUtility::GetPathName(param_1,local_5b8,0);
    lVar13 = FText::FromString(local_270,uVar14);
    uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_450,L"AttachTo: \'{0}\' cannot be attached to itself. Aborting.",
                        L"SceneComponent",L"AttachToSelfWarning");
    plVar15 = (longlong *)FTextFormat::FTextFormat(local_398,uVar14);
    local_210[0] = 4;
    FText::FText(local_200,lVar13);
    local_728 = (undefined4 *)*plVar15;
    local_778 = local_210;
    puStack_770 = local_1e0;
    puStack_720 = (undefined1 *)plVar15[1];
    local_1e8 = '\x01';
    if (puStack_720 != (undefined1 *)0x0) {
      LOCK();
      *(int *)(puStack_720 + 8) = *(int *)(puStack_720 + 8) + 1;
      UNLOCK();
    }
    local_5e8 = local_778;
    puStack_5e0 = puStack_770;
    uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_5d8,&local_5e8);
    uVar14 = FText::Format(local_468,&local_728,uVar14);
    FText::FText(local_4a8,uVar14);
    if (local_460 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_460 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_460)(local_460);
        LOCK();
        piVar1 = (int *)((longlong)local_460 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_460 + 8))(local_460,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_5d8);
    if ((local_1e8 != '\0') && (local_1e8 = '\0', local_1f8 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_1f8 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)local_1f8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
    plVar15 = (longlong *)plVar15[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(lVar13 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    uVar14 = FUN_14161fb50(local_358,local_6d8);
    FMessageLog::Warning(uVar14,local_5c8,local_4a8);
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_5c0 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_358);
    if (local_4a0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_4a0 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_4a0)(local_4a0);
        LOCK();
        piVar1 = (int *)((longlong)local_4a0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_4a0 + 8))(local_4a0,1);
        }
      }
    }
    local_578[0] = local_5b8[0];
    if (local_448 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_448 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_448)(local_448);
        LOCK();
        piVar1 = (int *)((longlong)local_448 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_578[0] = local_5b8[0];
        if (iVar12 == 1) {
          (**(code **)(*local_448 + 8))(local_448,1);
          local_578[0] = local_5b8[0];
        }
      }
    }
LAB_14238333a:
    if (local_578[0] != 0) {
      FMemory::Free();
    }
    return 0;
  }
  lVar13 = param_1[0x23];
  if (((lVar13 == param_2[0x23]) && (lVar13 != 0)) && (*(longlong **)(lVar13 + 0x168) == param_1)) {
    FName::FName(local_6d0,&DAT_14505b1e4,1);
    uVar14 = UObjectBaseUtility::GetPathName(param_1,local_578,0);
    lVar13 = FText::FromString(local_258,uVar14);
    uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_420,
                        L"AttachTo: \'{0}\' root component cannot be attached to other components in the same actor. Aborting."
                        ,L"SceneComponent",L"AttachToSelfRootWarning");
    plVar15 = (longlong *)FTextFormat::FTextFormat(local_388,uVar14);
    local_1e0[0] = 4;
    FText::FText(local_1d0,lVar13);
    local_748 = (undefined4 *)*plVar15;
    local_728 = local_1e0;
    puStack_720 = local_1b0;
    pfStack_740 = (float *)plVar15[1];
    local_1b8 = '\x01';
    if (pfStack_740 != (float *)0x0) {
      LOCK();
      pfStack_740[2] = (float)((int)pfStack_740[2] + 1);
      UNLOCK();
    }
    local_5a8 = local_728;
    puStack_5a0 = puStack_720;
    uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_598,&local_5a8);
    uVar14 = FText::Format(local_438,&local_748,uVar14);
    FText::FText(local_648,uVar14);
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_430 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_598);
    if ((local_1b8 != '\0') && (local_1b8 = '\0', local_1c8 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_1c8 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    plVar15 = (longlong *)plVar15[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(lVar13 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    uVar14 = FUN_14161fb50(local_330,local_6d0);
    FMessageLog::Warning(uVar14,local_588,local_648);
    if (local_580 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_580 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_580)(local_580);
        LOCK();
        piVar1 = (int *)((longlong)local_580 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_580 + 8))(local_580,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_330);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_640 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_418 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_418 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_418)(local_418);
        LOCK();
        piVar1 = (int *)((longlong)local_418 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_418 + 8))(local_418,1);
        }
      }
    }
    goto LAB_14238333a;
  }
  for (plVar15 = (longlong *)param_2[0x32]; plVar15 != (longlong *)0x0;
      plVar15 = (longlong *)plVar15[0x32]) {
    if (param_1 == plVar15) {
      FName::FName(local_6c8,&DAT_14505b254,1);
      uVar14 = UObjectBaseUtility::GetPathName(param_1,local_528,0);
      lVar13 = FText::FromString(local_240,uVar14);
      uVar14 = UObjectBaseUtility::GetPathName(param_2,local_538,0);
      lVar16 = FText::FromString(local_228,uVar14);
      uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_3f0,
                          L"AttachTo: \'{0}\' already attached to \'{1}\', would form cycle. Aborting."
                          ,L"SceneComponent",L"AttachCycleWarning");
      plVar15 = (longlong *)FTextFormat::FTextFormat(local_378,uVar14);
      local_1a8[0] = 4;
      FText::FText(local_198,lVar16);
      local_180 = 1;
      local_178 = 4;
      FText::FText(local_168,lVar13);
      local_748 = local_1a8;
      local_150 = 1;
      pfStack_740 = &local_148;
      local_738 = (undefined4 *)*plVar15;
      puStack_730 = (undefined1 *)plVar15[1];
      if (puStack_730 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(puStack_730 + 8) = *(int *)(puStack_730 + 8) + 1;
        UNLOCK();
      }
      local_568 = local_748;
      pfStack_560 = pfStack_740;
      uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_558,&local_568);
      uVar14 = FText::Format(local_408,&local_738,uVar14);
      FText::FText(local_630,uVar14);
      if (local_400 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_400 + 1;
        lVar17 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_400)(local_400);
          LOCK();
          piVar1 = (int *)((longlong)local_400 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_400 + 8))(local_400,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_558);
      lVar17 = 2;
      pcVar21 = (char *)auStack_120;
      do {
        lVar17 = lVar17 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar19 = *(longlong **)(pcVar21 + -0x40);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar19 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar17 != 0);
      plVar15 = (longlong *)plVar15[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar15 + 1;
        lVar17 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar16 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar15 + 1;
        lVar16 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar13 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar15 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      uVar14 = FUN_14161fb50(local_308,local_6c8);
      FMessageLog::Warning(uVar14,local_548,local_630);
      if (local_540 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_540 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_540)(local_540);
          LOCK();
          piVar1 = (int *)((longlong)local_540 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_540 + 8))(local_540,1);
          }
        }
      }
      FMessageLog::~FMessageLog(local_308);
      if (local_628 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_628 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_628)(local_628);
          LOCK();
          piVar1 = (int *)((longlong)local_628 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_628 + 8))(local_628,1);
          }
        }
      }
      if (local_3e8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_3e8 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
      local_578[0] = local_528[0];
      if (local_538[0] != 0) {
        FMemory::Free();
        local_578[0] = local_528[0];
      }
      goto LAB_14238333a;
    }
  }
  cVar8 = (**(code **)(*param_2 + 0x508))(param_2,param_1,param_4);
  if (cVar8 == '\0') {
    return 0;
  }
  cVar8 = FUN_142341170(param_1);
  if (((cVar8 == '\0') && (*(char *)((longlong)param_1 + 0x24e) == '\0')) &&
     (*(char *)((longlong)param_2 + 0x24e) != '\0')) {
    local_708[0] = 0;
    local_708[1] = 0;
    FName::FName(local_6b8,&DAT_14505b27c,1);
    uVar14 = UObjectBaseUtility::GetPathName(param_1,local_4d8,0);
    lVar13 = FText::FromString(local_2b8,uVar14);
    local_6c0 = lVar13;
    lVar16 = FText::FromString(local_2a0,local_708);
    uVar14 = UObjectBaseUtility::GetPathName(param_2,local_4e8,0);
    lVar17 = FText::FromString(local_288,uVar14);
    uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_3c0,
                        L"AttachTo: \'{0}\' is not static {1}, cannot attach \'{2}\' which is static to it. Aborting."
                        ,L"SceneComponent",L"NoStaticToDynamicWarning");
    puVar18 = (undefined8 *)FTextFormat::FTextFormat(local_368,uVar14);
    local_118[0] = 4;
    FText::FText(local_108,lVar17);
    local_f0 = 1;
    local_e8 = 4;
    FText::FText(local_d8,lVar16);
    local_c0 = 1;
    local_b8 = 4;
    FText::FText(local_a8,lVar13);
    local_738 = local_118;
    local_90 = 1;
    puStack_730 = local_88;
    local_6a8 = *puVar18;
    local_6a0 = puVar18[1];
    if (local_6a0 != 0) {
      LOCK();
      *(int *)(local_6a0 + 8) = *(int *)(local_6a0 + 8) + 1;
      UNLOCK();
    }
    local_518 = local_738;
    puStack_510 = puStack_730;
    uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_508,&local_518);
    uVar14 = FText::Format(local_3d8,&local_6a8,uVar14);
    FText::FText(local_618,uVar14);
    if (local_3d0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_3d0 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_3d0)(local_3d0);
        LOCK();
        piVar1 = (int *)((longlong)local_3d0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_3d0 + 8))(local_3d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_508);
    lVar13 = 3;
    pcVar21 = local_60;
    do {
      lVar13 = lVar13 + -1;
      pcVar2 = pcVar21 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar15 = *(longlong **)(pcVar21 + -0x40);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar15 + 1;
          lVar7 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
      }
      pcVar21 = pcVar2;
    } while (lVar13 != 0);
    plVar15 = (longlong *)puVar18[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(lVar17 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(lVar16 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(local_6c0 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar15 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    uVar14 = FUN_14161fb50(local_2e0,local_6b8);
    FMessageLog::Warning(uVar14,local_4f8,local_618);
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_4f0 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_4f0)(local_4f0);
        LOCK();
        piVar1 = (int *)((longlong)local_4f0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_4f0 + 8))(local_4f0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_2e0);
    if (local_610 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_610 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_610)(local_610);
        LOCK();
        piVar1 = (int *)((longlong)local_610 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_610 + 8))(local_610,1);
        }
      }
    }
    if (local_3b8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_3b8 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_3b8)(local_3b8);
        LOCK();
        piVar1 = (int *)((longlong)local_3b8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_3b8 + 8))(local_3b8,1);
        }
      }
    }
    if (local_4e8[0] != 0) {
      FMemory::Free();
    }
    local_578[0] = local_708[0];
    if (local_4d8[0] != 0) {
      FMemory::Free();
      local_578[0] = local_708[0];
    }
    goto LAB_14238333a;
  }
  cVar8 = UObjectBaseUtility::IsTemplate(param_2,0x30);
  cVar9 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar8 != cVar9) {
    UObjectBaseUtility::IsTemplate(param_2,0x30);
    return 0;
  }
  bVar5 = *(byte *)((longlong)param_1 + 0x24d);
  *(byte *)((longlong)param_1 + 0x24d) = bVar5 | 4;
  puVar18 = (undefined8 *)param_2[0x34];
  for (puVar22 = puVar18; puVar22 != puVar18 + (int)param_2[0x35]; puVar22 = puVar22 + 1) {
    if ((longlong *)*puVar22 == param_1) {
      iVar12 = (int)((longlong)puVar22 - (longlong)puVar18 >> 3);
      goto LAB_142383ef7;
    }
  }
  iVar12 = -1;
LAB_142383ef7:
  if ((((DAT_146531d70 == 1) && ((*(byte *)((longlong)param_1 + 0x24c) & 2) == 0)) &&
      ((*(byte *)((longlong)param_2 + 0x24c) & 2) != 0)) &&
     (*(byte *)((longlong)param_2 + 0x24c) = *(byte *)((longlong)param_2 + 0x24c) & 0xfd,
     param_2[0x32] != 0)) {
    FUN_142386620();
  }
  local_784 = *param_3 != '\0';
  local_781 = 1;
  local_783 = param_3[1] != '\0';
  local_782 = param_3[2] != '\0';
  if (((((local_787 == '\0') || ((*(byte *)(param_1 + 0x17) & 1) != 0)) ||
       ((*param_3 != '\0' || ((param_3[1] != '\0' || (param_3[2] != '\0')))))) || (iVar12 != -1)) &&
     (((**(code **)(*param_1 + 0x418))(param_1,&local_784), -1 < iVar12 &&
      (iVar12 < (int)param_2[0x35])))) {
    lVar16 = param_2[0x34];
    if (*(longlong **)(lVar16 + (longlong)iVar12 * 8) == param_1) {
      iVar20 = (int)param_2[0x35];
      iVar10 = (iVar20 - iVar12) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar16 + (longlong)iVar12 * 8),
                   (void *)(lVar16 + (longlong)(iVar12 + 1) * 8),(longlong)iVar10 << 3);
        iVar20 = (int)param_2[0x35];
      }
      *(int *)(param_2 + 0x35) = iVar20 + -1;
    }
  }
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xfb;
  local_788 = bVar5 & 4;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | local_788;
  cVar8 = FUN_140a9e330(param_1);
  if (cVar8 != '\0') {
    local_758 = 0;
    lVar16 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    if ((((lVar16 != 0) && ((*(byte *)(lVar16 + 0x10) & 8) != 0)) && (param_3[3] == '\0')) &&
       (((lVar16 = param_1[0x24], lVar16 != 0 || (lVar16 = FUN_1423407b0(param_1), lVar16 != 0)) &&
        ((cVar8 = UWorld::IsGameWorld(lVar16), cVar8 != '\0' &&
         ((*(char *)(lVar16 + 0x70d) == '\0' &&
          (((*(byte *)(param_1[0x23] + 0x94) & 0x18) - 8 & 0xf7) == 0)))))))) {
      *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 4;
      (**(code **)(*param_1 + 0x418))(param_1,&local_784);
      *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xfb | local_788
      ;
      if ((*param_3 != '\0') && ((param_3[1] != '\0' && (param_3[2] != '\0')))) {
        return 0;
      }
      pfVar4 = (float *)(param_1 + 0x50);
      if (((*(float *)(param_1 + 0x3f) != *pfVar4) ||
          (*(float *)((longlong)param_1 + 0x1fc) != *(float *)((longlong)param_1 + 0x284))) ||
         (*(float *)(param_1 + 0x40) != *(float *)(param_1 + 0x51))) {
        lVar13 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
        fVar28 = (float)DAT_146af0860;
        fVar29 = DAT_146af0860._4_4_;
        fVar30 = DAT_146af0860._8_4_;
        auVar23._12_4_ = 0;
        auVar23._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
        auVar23 = divps(auVar23,_DAT_146af0860);
        fVar33 = (float)lVar13 - (float)(int)auVar23._0_4_ * fVar28;
        fVar34 = (float)((ulonglong)lVar13 >> 0x20) - (float)(int)auVar23._4_4_ * fVar29;
        fVar36 = *(float *)(param_1 + 0x40) - (float)(int)auVar23._8_4_ * fVar30;
        fVar33 = (float)(((uint)(fVar33 + fVar28) ^ (uint)fVar33) & -(uint)(0.0 <= fVar33) ^
                        (uint)(fVar33 + fVar28));
        fVar34 = (float)(((uint)(fVar34 + fVar29) ^ (uint)fVar34) & -(uint)(0.0 <= fVar34) ^
                        (uint)(fVar34 + fVar29));
        fVar36 = (float)(((uint)(fVar36 + fVar30) ^ (uint)fVar36) & -(uint)(0.0 <= fVar36) ^
                        (uint)(fVar36 + fVar30));
        local_760 = ((uint)(fVar36 - fVar30) ^ (uint)fVar36) &
                    -(uint)(fRam0000000146af0858 < fVar36) ^ (uint)fVar36;
        *(ulonglong *)pfVar4 =
             CONCAT44(((uint)(fVar34 - fVar29) ^ (uint)fVar34) &
                      -(uint)(fRam0000000146af0854 < fVar34) ^ (uint)fVar34,
                      ((uint)(fVar33 - fVar28) ^ (uint)fVar33) & -(uint)(_DAT_146af0850 < fVar33) ^
                      (uint)fVar33);
        *(uint *)(param_1 + 0x51) = local_760;
        plVar15 = (longlong *)FRotator::Quaternion(pfVar4,local_3a8);
        lVar13 = plVar15[1];
        param_1[0x4e] = *plVar15;
        param_1[0x4f] = lVar13;
      }
      local_708[2] = param_1[0x4e];
      lStack_6f0 = param_1[0x4f];
      local_798 = local_708 + 2;
      local_790 = 0;
      uVar11 = FUN_14239b520(param_1,param_2,param_4,0);
      if (*param_3 == '\0') {
        local_680 = (undefined4)param_1[0x45];
        *(longlong *)((longlong)param_1 + 0x1ec) = param_1[0x44];
        *(undefined4 *)((longlong)param_1 + 500) = local_680;
        uVar11 = local_680;
      }
      if (param_3[1] == '\0') {
        local_4c8 = *(float *)(param_1 + 0x42);
        fStack_4c4 = *(float *)((longlong)param_1 + 0x214);
        fStack_4c0 = *(float *)(param_1 + 0x43);
        fStack_4bc = *(float *)((longlong)param_1 + 0x21c);
        auVar24._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x254) != fStack_4c4);
        auVar24._0_4_ = -(uint)(*(float *)(param_1 + 0x4a) != local_4c8);
        auVar24._8_4_ = -(uint)(*(float *)(param_1 + 0x4b) != fStack_4c0);
        auVar24._12_4_ = -(uint)(*(float *)((longlong)param_1 + 0x25c) != fStack_4bc);
        iVar12 = movmskps(uVar11,auVar24);
        if (iVar12 != 0) {
          *(float *)(param_1 + 0x4a) = local_4c8;
          *(float *)((longlong)param_1 + 0x254) = fStack_4c4;
          *(float *)(param_1 + 0x4b) = fStack_4c0;
          *(float *)((longlong)param_1 + 0x25c) = fStack_4bc;
          plVar15 = (longlong *)FQuat::Rotator(&local_4c8,local_490);
          param_1[0x4c] = *plVar15;
          *(int *)(param_1 + 0x4d) = (int)plVar15[1];
        }
        param_1[0x3f] = param_1[0x4c];
        *(int *)(param_1 + 0x40) = (int)param_1[0x4d];
      }
      if (param_3[2] == '\0') {
        local_674 = (undefined4)param_1[0x47];
        *(longlong *)((longlong)param_1 + 0x204) = param_1[0x46];
        *(undefined4 *)((longlong)param_1 + 0x20c) = local_674;
      }
      if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
        (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
        return 0;
      }
      return 0;
    }
  }
  FTickFunction::AddPrerequisite(param_1 + 6,param_2,param_2 + 6);
  param_1[0x32] = (longlong)param_2;
  param_1[0x33] = param_4;
  (**(code **)(*param_1 + 0x498))(param_1);
  plVar15 = param_2 + 0x34;
  if (iVar12 == -1) {
    iVar12 = (int)param_2[0x35];
    *(int *)(param_2 + 0x35) = iVar12 + 1;
    if (*(int *)((longlong)param_2 + 0x1ac) < iVar12 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar12);
    }
    *(longlong **)(*plVar15 + (longlong)iVar12 * 8) = param_1;
  }
  else {
    TArray<USceneComponent_*,FDefaultAllocator>::InsertUninitialized(plVar15,iVar12,1);
    *(longlong **)(*plVar15 + (longlong)iVar12 * 8) = param_1;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,1);
  if (((((*(byte *)(param_2 + 0x17) & 8) != 0) && (iVar12 = FUN_14233f450(param_2), iVar12 != 3)) ||
      ((cVar8 = FUN_1423411c0(param_2), cVar8 != '\0' &&
       (iVar12 = FUN_142340f30(param_2), iVar12 == 3)))) &&
     (((*(byte *)(param_1 + 0x17) & 8) == 0 || (iVar12 = FUN_14233f450(param_1), iVar12 == 3)))) {
    local_6b0 = param_1;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 0x36,&local_6b0);
  }
  (**(code **)(*(longlong *)param_1[0x32] + 0x420))
            ((longlong *)param_1[0x32],local_88,param_1[0x33],0);
  uVar11 = FUN_14162bcf0(param_1 + 0x42,&local_148,local_88);
  if (*param_3 == '\x01') {
    if ((*(byte *)((longlong)param_1 + 0x24c) & 4) == 0) {
      local_710 = uStack_130;
    }
    else {
      local_138 = (undefined4)param_1[0x44];
      uStack_134 = *(undefined4 *)((longlong)param_1 + 0x224);
      uStack_130 = (undefined4)param_1[0x45];
      local_668 = uStack_130;
    }
    *(ulonglong *)((longlong)param_1 + 0x1ec) = CONCAT44(uStack_134,local_138);
    uVar11 = uStack_130;
LAB_14238449a:
    *(undefined4 *)((longlong)param_1 + 500) = uVar11;
  }
  else if (*param_3 == '\x02') {
    *(undefined8 *)((longlong)param_1 + 0x1ec) = _DAT_1468b5d90;
    uVar11 = DAT_1468b5d98;
    goto LAB_14238449a;
  }
  if (param_3[1] == '\x01') {
    if ((*(byte *)((longlong)param_1 + 0x24c) & 8) == 0) {
      pfVar4 = (float *)(param_1 + 0x4e);
      auVar26._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x274) != fStack_144);
      auVar26._0_4_ = -(uint)(*pfVar4 != local_148);
      auVar26._8_4_ = -(uint)(*(float *)(param_1 + 0x4f) != fStack_140);
      auVar26._12_4_ = -(uint)(*(float *)((longlong)param_1 + 0x27c) != fStack_13c);
      iVar12 = movmskps(uVar11,auVar26);
      local_6e8 = local_148;
      fStack_6e4 = fStack_144;
      fStack_6e0 = fStack_140;
      fStack_6dc = fStack_13c;
      if (iVar12 != 0) {
        local_780 = 0x322bcc77;
        auVar27._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
        auVar27._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
        auVar27._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
        auVar27._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
        fVar34 = auVar27._4_4_ + auVar27._0_4_;
        fVar36 = auVar27._8_4_ + auVar27._4_4_;
        fVar31 = auVar27._12_4_ + auVar27._8_4_;
        fVar32 = auVar27._0_4_ + auVar27._12_4_;
        auVar6._4_4_ = fVar36;
        auVar6._0_4_ = fVar34;
        auVar6._8_4_ = fVar31;
        auVar6._12_4_ = fVar32;
        auVar23 = rsqrtps(auVar27,auVar6);
        fVar28 = auVar23._0_4_;
        fVar29 = auVar23._4_4_;
        fVar30 = auVar23._8_4_;
        fVar33 = auVar23._12_4_;
        fVar28 = (_DAT_146af09a0 - fVar28 * fVar28 * fVar34 * _DAT_146af09a0) * fVar28 + fVar28;
        fVar29 = (fRam0000000146af09a4 - fVar29 * fVar29 * fVar36 * fRam0000000146af09a4) * fVar29 +
                 fVar29;
        fVar30 = (fRam0000000146af09a8 - fVar30 * fVar30 * fVar31 * fRam0000000146af09a8) * fVar30 +
                 fVar30;
        fVar33 = (fRam0000000146af09ac - fVar33 * fVar33 * fVar32 * fRam0000000146af09ac) * fVar33 +
                 fVar33;
        uVar35 = ((uint)(((fRam0000000146af09a4 - fVar29 * fVar29 * fVar36 * fRam0000000146af09a4) *
                          fVar29 + fVar29) * fStack_144) ^ uRam0000000146af0994) &
                 -(uint)(1e-08 <= fVar36) ^ uRam0000000146af0994;
        uVar37 = ((uint)(((fRam0000000146af09a8 - fVar30 * fVar30 * fVar31 * fRam0000000146af09a8) *
                          fVar30 + fVar30) * fStack_140) ^ uRam0000000146af0998) &
                 -(uint)(1e-08 <= fVar31) ^ uRam0000000146af0998;
        uVar38 = ((uint)(((fRam0000000146af09ac - fVar33 * fVar33 * fVar32 * fRam0000000146af09ac) *
                          fVar33 + fVar33) * fStack_13c) ^ uRam0000000146af099c) &
                 -(uint)(1e-08 <= fVar32) ^ uRam0000000146af099c;
        *pfVar4 = (float)(((uint)(((_DAT_146af09a0 - fVar28 * fVar28 * fVar34 * _DAT_146af09a0) *
                                   fVar28 + fVar28) * local_148) ^ _DAT_146af0990) &
                          -(uint)(1e-08 <= fVar34) ^ _DAT_146af0990);
        *(uint *)((longlong)param_1 + 0x274) = uVar35;
        *(uint *)(param_1 + 0x4f) = uVar37;
        *(uint *)((longlong)param_1 + 0x27c) = uVar38;
        plVar15 = (longlong *)FQuat::Rotator(pfVar4,local_478);
        param_1[0x50] = *plVar15;
        *(int *)(param_1 + 0x51) = (int)plVar15[1];
      }
      param_1[0x3f] = param_1[0x50];
      uVar11 = (undefined4)param_1[0x51];
    }
    else {
      local_4b8 = *(float *)(param_1 + 0x42);
      fStack_4b4 = *(float *)((longlong)param_1 + 0x214);
      fStack_4b0 = *(float *)(param_1 + 0x43);
      fStack_4ac = *(float *)((longlong)param_1 + 0x21c);
      auVar25._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x254) != fStack_4b4);
      auVar25._0_4_ = -(uint)(*(float *)(param_1 + 0x4a) != local_4b8);
      auVar25._8_4_ = -(uint)(*(float *)(param_1 + 0x4b) != fStack_4b0);
      auVar25._12_4_ = -(uint)(*(float *)((longlong)param_1 + 0x25c) != fStack_4ac);
      iVar12 = movmskps(uVar11,auVar25);
      if (iVar12 != 0) {
        *(float *)(param_1 + 0x4a) = local_4b8;
        *(float *)((longlong)param_1 + 0x254) = fStack_4b4;
        *(float *)(param_1 + 0x4b) = fStack_4b0;
        *(float *)((longlong)param_1 + 0x25c) = fStack_4ac;
        plVar15 = (longlong *)FQuat::Rotator(&local_4b8,local_484);
        param_1[0x4c] = *plVar15;
        *(int *)(param_1 + 0x4d) = (int)plVar15[1];
      }
      param_1[0x3f] = param_1[0x4c];
      uVar11 = (undefined4)param_1[0x4d];
    }
LAB_14238462f:
    *(undefined4 *)(param_1 + 0x40) = uVar11;
  }
  else if (param_3[1] == '\x02') {
    param_1[0x3f] = DAT_1468b5da0;
    uVar11 = DAT_1468b5da8;
    goto LAB_14238462f;
  }
  if (param_3[2] == '\x01') {
    if ((*(byte *)((longlong)param_1 + 0x24c) & 0x10) == 0) {
      local_650 = auStack_120[0];
    }
    else {
      local_128 = (undefined4)param_1[0x46];
      uStack_124 = *(undefined4 *)((longlong)param_1 + 0x234);
      auStack_120[0] = (undefined4)param_1[0x47];
      local_65c = auStack_120[0];
    }
    uVar14 = CONCAT44(uStack_124,local_128);
  }
  else {
    if (param_3[2] != '\x02') goto LAB_1423846b0;
    local_710 = 0x3f800000;
    auStack_120[0] = 0x3f800000;
    uVar14 = 0x3f8000003f800000;
  }
  *(undefined8 *)((longlong)param_1 + 0x204) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x20c) = auStack_120[0];
LAB_1423846b0:
  (**(code **)(*(longlong *)param_1[0x32] + 0x518))((longlong *)param_1[0x32],param_1);
  FUN_140942fb0(param_1,0,1);
  if ((param_3[3] != '\0') && (cVar8 = FUN_140a9e330(param_1), cVar8 != '\0')) {
    local_750 = 0;
    lVar16 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    if (lVar16 != 0) {
      (**(code **)(*param_1 + 0x708))(param_1,param_1[0x32],param_1[0x33],param_3[3]);
    }
  }
  plVar15 = *(longlong **)(param_1[0x32] + 0x118);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x6a0))(plVar15,param_1);
  }
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
  }
  (**(code **)(*param_1 + 0x4a0))(param_1);
  if (((((lVar13 != 0) && (*(char *)(lVar13 + 0x129) == '\x02')) &&
       ((*(byte *)(param_1 + 0x17) & 1) != 0)) &&
      (((*(byte *)(lVar13 + 0x94) & 0x18) == 0x10 && (*(char *)(lVar13 + 0x128) == '\x03')))) &&
     (((*(byte *)(lVar13 + 0x92) & 0x40) != 0 && (*(longlong **)(lVar13 + 0x168) == param_1)))) {
    FUN_14222c7e0(lVar13);
  }
  return 1;
}



// FUNCTION 1423847c0 FUN_1423847c0 body=1426 status=ok
// SIG undefined FUN_1423847c0(void)

void FUN_1423847c0(longlong param_1,char *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte *pbVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong *local_208;
  undefined8 local_200;
  byte local_1f8 [4];
  undefined4 local_1f4;
  uint local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  ulonglong local_1cc;
  uint local_1c4;
  ulonglong local_1c0;
  uint local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [144];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [144];
  
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 < (int)DAT_1469e91c4) {
    uVar14 = iVar9 >> 0x1f & 0xffff;
    uVar8 = iVar9 + uVar14;
    lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
             (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
  }
  else {
    lVar11 = 0;
  }
  if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  lVar11 = FWeakObjectPtr::Get(param_2 + 0x7c);
  if (lVar11 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x3a0);
  iVar9 = FUN_14237ca10(plVar1,param_2);
  if (iVar9 == -1) {
    iVar9 = 1;
  }
  else {
    lVar15 = *plVar1;
    piVar2 = (int *)((longlong)iVar9 * 0xa0 + 0x9c + lVar15);
    *piVar2 = *piVar2 + 1;
    iVar9 = *(int *)((longlong)iVar9 * 0xa0 + 0x9c + lVar15);
  }
  FUN_14237ded0(local_168,param_1,*(undefined4 *)(param_2 + 0x68));
  if ((param_1 != lVar11) && (iVar10 = FUN_14237ca10(lVar11 + 0x3a0,local_168), iVar10 != -1)) {
    piVar2 = (int *)((longlong)iVar10 * 0xa0 + 0x9c + *(longlong *)(lVar11 + 0x3a0));
    *piVar2 = *piVar2 + 1;
  }
  if (iVar9 != 1) {
    return;
  }
  if ((*(byte *)(lVar11 + 0x2ef) & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x2ef) & 1) == 0) {
    return;
  }
  iVar9 = USceneComponent::GetCollisionResponseToComponent(param_1,lVar11);
  if (iVar9 < 1) {
    return;
  }
  DAT_146af07c0 = DAT_146af07c0 + 1;
  plVar3 = *(longlong **)(param_1 + 0x118);
  plVar4 = *(longlong **)(lVar11 + 0x118);
  if (param_3 != '\0') {
    plVar13 = plVar3;
    plVar5 = plVar4;
    if ((int)plVar4[0x57] - *(int *)((longlong)plVar4 + 0x2e4) <
        (int)plVar3[0x57] - *(int *)((longlong)plVar3 + 0x2e4)) {
      plVar13 = plVar4;
      plVar5 = plVar3;
    }
    cVar7 = FUN_142235c20(plVar13,plVar5);
    bVar6 = true;
    if (cVar7 == '\0') goto LAB_142384971;
  }
  bVar6 = false;
LAB_142384971:
  iVar9 = *(int *)(param_1 + 0x3a8);
  *(int *)(param_1 + 0x3a8) = iVar9 + 1;
  if (*(int *)(param_1 + 0x3ac) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar9);
  }
  pcVar16 = (char *)((longlong)iVar9 * 0xa0 + *plVar1);
  *pcVar16 = *param_2;
  FUN_140729f20(pcVar16 + 8,param_2 + 8);
  plVar1 = (longlong *)(lVar11 + 0x3a0);
  *(undefined4 *)(pcVar16 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(pcVar16 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  iVar9 = FUN_14237ca10(plVar1,local_168);
  if (iVar9 == -1) {
    iVar9 = *(int *)(lVar11 + 0x3a8);
    *(int *)(lVar11 + 0x3a8) = iVar9 + 1;
    if (*(int *)(lVar11 + 0x3ac) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar9);
    }
    puVar17 = (undefined1 *)((longlong)iVar9 * 0xa0 + *plVar1);
    *puVar17 = local_168[0];
    FUN_140729f20(puVar17 + 8,local_160);
    *(undefined4 *)(puVar17 + 0x98) = local_d0;
    *(undefined4 *)(puVar17 + 0x9c) = local_cc;
  }
  if (param_3 != '\0') {
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar14 = iVar9 >> 0x1f & 0xffff;
      uVar8 = iVar9 + uVar14;
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
    }
    else {
      lVar15 = 0;
    }
    lVar18 = 0;
    pbVar12 = (byte *)(param_2 + 8);
    if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) {
      FUN_142385240(param_1 + 0x570,param_1,plVar4,lVar11,*(undefined4 *)(param_2 + 0x68),*param_2,
                    pbVar12);
    }
    iVar9 = *(int *)(lVar11 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar14 = iVar9 >> 0x1f & 0xffff;
      uVar8 = iVar9 + uVar14;
      lVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
    }
    if ((*(uint *)(lVar18 + 8) >> 0x1d & 1) == 0) {
      cVar7 = *param_2;
      if (cVar7 == '\0') {
        pbVar12 = (byte *)FUN_140729f20(local_c8,pbVar12);
        cVar7 = *param_2;
      }
      else {
        local_1ec = *(undefined4 *)(param_2 + 0x14);
        local_1e8 = *(undefined4 *)(param_2 + 0x18);
        local_1f8[0] = local_1f8[0] ^ (local_1f8[0] ^ *pbVar12) & 3;
        local_1f4 = *(undefined4 *)(param_2 + 0xc);
        local_1e4 = *(undefined8 *)(param_2 + 0x1c);
        local_1d8 = *(undefined8 *)(param_2 + 0x28);
        local_1b4 = *(undefined8 *)(param_2 + 0x4c);
        local_1a8 = *(undefined8 *)(param_2 + 0x58);
        local_19c = *(undefined4 *)(param_2 + 100);
        local_1cc = CONCAT44(*(undefined4 *)(param_2 + 0x38),(int)*(undefined8 *)(param_2 + 0x34)) ^
                    0x8000000080000000;
        local_1f0 = local_1f0 ^ (*(uint *)(param_2 + 0x10) ^ local_1f0) & 1;
        local_1dc = *(undefined4 *)(param_2 + 0x24);
        local_1d0 = *(undefined4 *)(param_2 + 0x30);
        local_1ac = *(undefined4 *)(param_2 + 0x54);
        local_1a0 = *(undefined4 *)(param_2 + 0x60);
        local_198 = *(undefined4 *)(param_2 + 0x68);
        local_194 = *(undefined4 *)(param_2 + 0x6c);
        local_190 = *(undefined4 *)(param_2 + 0x70);
        local_18c = *(undefined4 *)(param_2 + 0x74);
        local_188 = *(undefined4 *)(param_2 + 0x78);
        local_184 = *(undefined4 *)(param_2 + 0x7c);
        local_180 = *(undefined4 *)(param_2 + 0x80);
        local_178 = *(undefined8 *)(param_2 + 0x88);
        local_200._0_4_ = *(uint *)(param_2 + 0x3c) ^ 0x80000000;
        local_1c4 = (uint)local_200;
        local_1b8 = *(uint *)(param_2 + 0x48) ^ 0x80000000;
        local_170 = *(undefined8 *)(param_2 + 0x90);
        local_200 = (longlong *)(CONCAT44(local_200._4_4_,*(uint *)(param_2 + 0x48)) ^ 0x80000000);
        local_1c0 = CONCAT44(*(undefined4 *)(param_2 + 0x44),(int)*(undefined8 *)(param_2 + 0x40)) ^
                    0x8000000080000000;
        pbVar12 = local_1f8;
      }
      FUN_142385240(lVar11 + 0x570,lVar11,plVar3,param_1,*(undefined4 *)(param_2 + 0x98),cVar7,
                    pbVar12);
    }
    if (bVar6) {
      cVar7 = FUN_142235710(plVar3);
      if (cVar7 != '\0') {
        (**(code **)(*plVar3 + 0x348))(plVar3,plVar4);
      }
      cVar7 = FUN_142235710(plVar4);
      if (cVar7 != '\0') {
        (**(code **)(*plVar4 + 0x348))(plVar4,plVar3);
      }
      cVar7 = FUN_142235710(plVar3);
      if (cVar7 != '\0') {
        local_208 = plVar3;
        local_200 = plVar4;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar3 + 0x3c,&local_208);
      }
      cVar7 = FUN_142235710(plVar4);
      if (cVar7 != '\0') {
        local_208 = plVar4;
        local_200 = plVar3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar4 + 0x3c,&local_208);
      }
    }
  }
  return;
}



// FUNCTION 142384d60 FUN_142384d60 body=88 status=ok
// SIG undefined FUN_142384d60(void)

void FUN_142384d60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) != 0) {
    FUN_141edf360();
  }
  FUN_141edede0(param_1 + 0x3f8,0);
  FUN_142395540(param_1);
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x290,0);
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 142384dc0 FUN_142384dc0 body=185 status=ok
// SIG undefined FUN_142384dc0(void)

void FUN_142384dc0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x2ee);
  if ((bVar1 & 0xc) != 0) {
    plVar3 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
    bVar1 = *(byte *)(param_1 + 0x2ee);
  }
  if ((bVar1 & 0x40) != 0) {
    plVar3 = (longlong *)IStreamingManager::Get();
    cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar2 != '\0') {
      uVar4 = IStreamingManager::Get();
      plVar3 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar4);
      (**(code **)(*plVar3 + 0x100))(plVar3,param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x290,0);
  }
  FUN_142330890(param_1);
  FUN_141edede0(param_1 + 0x648,0);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_141edede0(*(longlong *)(param_1 + 0x118) + 0x3a8,0);
    return;
  }
  return;
}



// FUNCTION 142384e80 FUN_142384e80 body=525 status=ok
// SIG undefined FUN_142384e80(void)

void FUN_142384e80(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  BOOL BVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  longlong local_res8;
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
  
  if (*(char *)(param_1 + 0x318) != '\0') {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
    }
    local_res8 = param_1;
    TArray<FName,FDefaultAllocator>::Remove(&DAT_146af08e0,&local_res8);
    local_res8 = param_1;
    TArray<FName,FDefaultAllocator>::Remove(&DAT_146af08f0,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
  }
  plVar6 = (longlong *)GetRendererModule();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0xa8))();
  iVar1 = (int)plVar6[5];
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(plVar6 + 2);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)plVar6[4];
    if ((uint *)plVar6[4] == (uint *)0x0) {
      puVar9 = puStack_20;
    }
    uVar2 = *puVar9;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_142384faf;
      uVar2 = puVar9[lVar8 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    local_48._4_4_ = (uStack_40 - iVar7) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_142384faf:
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
  local_30 = plVar6;
  local_48 = puStack_20;
  if (bVar4) {
    do {
      plVar3 = *(longlong **)(*plVar6 + (longlong)iStack_3c * 0x10);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_1);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_141edf360();
  }
  FUN_141edede0(param_1 + 0x338,0);
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x290,0);
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 142385090 FUN_142385090 body=54 status=ok
// SIG undefined FUN_142385090(void)

void FUN_142385090(longlong param_1)

{
  FUN_142395540();
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x290,0);
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 1423850d0 FUN_1423850d0 body=49 status=ok
// SIG undefined FUN_1423850d0(void)

void FUN_1423850d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x290,0);
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 142385110 FUN_142385110 body=132 status=ok
// SIG undefined FUN_142385110(void)

void FUN_142385110(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_142330a70();
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,0,0);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x10) & 8) != 0)) && (*(longlong *)(lVar2 + 200) == 0)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x24d);
    *(byte *)((longlong)param_1 + 0x24d) = bVar1 | 4;
    (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
    *(byte *)((longlong)param_1 + 0x24d) =
         *(byte *)((longlong)param_1 + 0x24d) ^ (*(byte *)((longlong)param_1 + 0x24d) ^ bVar1) & 4;
  }
  return;
}



// FUNCTION 1423851a0 FUN_1423851a0 body=114 status=ok
// SIG undefined FUN_1423851a0(void)

void FUN_1423851a0(longlong param_1)

{
  float fVar1;
  
  FUN_142330a70();
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    fVar1 = 1.0 / *(float *)(param_1 + 0x1dc);
    *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1dc);
    *(ulonglong *)(param_1 + 0x1c4) =
         CONCAT44(fVar1 * *(float *)(param_1 + 0x1d4),fVar1 * *(float *)(param_1 + 0x1d0));
    *(float *)(param_1 + 0x1cc) = fVar1 * *(float *)(param_1 + 0x1d8);
  }
  return;
}


