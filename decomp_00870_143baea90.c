// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143baea90 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(800);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143bae3e0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143baeaf0 FUN_143baeaf0 body=1075 status=ok
// SIG undefined FUN_143baeaf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143baeaf0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char *_Str1;
  longlong lVar2;
  undefined1 *puVar3;
  TIME_ZONE_INFORMATION *pTVar4;
  double dVar5;
  undefined1 auStack_388 [32];
  code *local_368;
  undefined4 local_358 [2];
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  FILETIME local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  char *local_2e0;
  undefined8 local_2d8;
  _SYSTEMTIME local_2d0;
  _SYSTEMTIME local_2c0;
  undefined1 local_2b0 [40];
  TIME_ZONE_INFORMATION local_288;
  undefined1 local_1d8 [216];
  undefined1 local_100 [216];
  ulonglong local_28;
  
  local_2d8 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  puVar3 = *(undefined1 **)(param_1 + 0x318);
  pTVar4 = &local_288;
  for (lVar2 = 0xac; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pTVar4->Bias = *puVar3;
    puVar3 = puVar3 + 1;
    pTVar4 = (TIME_ZONE_INFORMATION *)((longlong)&pTVar4->Bias + 1);
  }
  local_358[0] = 0;
  local_308 = FUN_143b528b0(param_2);
  FUN_143baf690(param_1,local_2b0,&local_288,local_308);
  FUN_143a8dc60(local_2b0);
  dVar5 = (double)FUN_143b52810(param_2,local_358);
  local_2f8 = FUN_143c08200((longlong)dVar5,2,local_358);
  local_318 = FUN_143c082e0(local_2f8,3,local_358);
  local_328.dwLowDateTime = (DWORD)local_318;
  local_328.dwHighDateTime = (DWORD)((ulonglong)local_318 >> 0x20);
  FileTimeToSystemTime(&local_328,&local_2c0);
  SystemTimeToTzSpecificLocalTime(&local_288,&local_2c0,&local_2d0);
  if ((*(int *)(param_1 + 0x16c) == -1) || (*(int *)(param_1 + 0x168) == -1)) {
    if (*(int *)(param_1 + 0x16c) == -1) {
      if (*(int *)(param_1 + 0x168) != -1) {
        FUN_143baf0d0(param_1,&local_2d0,param_3);
      }
    }
    else {
      FUN_143baef30(param_1,&local_2d0,param_3);
    }
  }
  else {
    local_338 = FUN_143a8d310(0x28);
    if (local_338 == 0) {
      local_350 = 0;
    }
    else {
      local_350 = FUN_143a8ac30(local_338);
    }
    local_2e8 = local_350;
    local_320 = local_350;
    local_348 = FUN_143a8d310(0x28);
    if (local_348 == 0) {
      local_340 = 0;
    }
    else {
      local_340 = FUN_143a8ac30(local_348);
    }
    local_300 = local_340;
    local_330 = local_340;
    local_310 = *(undefined8 *)(param_1 + 0x160);
    local_368 = Concurrency::
                call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                ::
                ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
    ;
    _eh_vector_constructor_iterator_(local_1d8,0xd8,2,FUN_143b686d0);
    FUN_143baef30(param_1,&local_2d0,local_320);
    FUN_143baf0d0(param_1,&local_2d0,local_330);
    FUN_143b68d30(local_1d8,local_330);
    FUN_143b68d30(local_100,local_320);
    local_2e0 = (char *)(**(code **)(*param_2 + 0xb0))(param_2);
    local_2f0 = **(longlong **)(param_1 + 0x148);
    _Str1 = (char *)(**(code **)(local_2f0 + 0xb0))(*(undefined8 *)(param_1 + 0x148));
    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,local_2e0);
    if (iVar1 != 0) {
      local_310 = FUN_143baf2a0(param_1,param_2,param_1 + 0x170,local_358);
    }
    local_368 = (code *)local_358;
    FUN_143c04f50(local_310,local_1d8,2,param_3);
    _eh_vector_destructor_iterator_
              (local_1d8,0xd8,2,
               Concurrency::
               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               ::
               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              );
  }
  return param_3;
}



// FUNCTION 143baef30 FUN_143baef30 body=416 status=ok
// SIG undefined FUN_143baef30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143baef30(longlong param_1,SYSTEMTIME *param_2,undefined8 param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined1 auStackY_d8 [32];
  wchar_t *local_a8;
  WCHAR local_98 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_d8;
  local_a8 = local_98;
  iVar1 = GetDateFormatW(*(LCID *)(param_1 + 0x2e8),
                         *(DWORD *)(&DAT_145d186a0 + (longlong)(*(int *)(param_1 + 0x16c) + -4) * 4)
                         ,param_2,(LPCWSTR)0x0,local_a8,0x40);
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      iVar1 = GetDateFormatW(*(LCID *)(param_1 + 0x2e8),
                             *(DWORD *)(&DAT_145d186a0 +
                                       (longlong)(*(int *)(param_1 + 0x16c) + -4) * 4),param_2,
                             (LPCWSTR)0x0,(LPWSTR)0x0,0);
      local_a8 = (wchar_t *)FUN_143aa7a40((longlong)iVar1 << 1);
      GetDateFormatW(*(LCID *)(param_1 + 0x2e8),
                     *(DWORD *)(&DAT_145d186a0 + (longlong)(*(int *)(param_1 + 0x16c) + -4) * 4),
                     param_2,(LPCWSTR)0x0,local_a8,iVar1);
    }
  }
  sVar3 = wcslen(local_a8);
  FUN_143b17350(param_3,local_a8,sVar3 & 0xffffffff);
  if (local_a8 != local_98) {
    FUN_143aa79f0(local_a8);
  }
  return;
}



// FUNCTION 143baf0d0 FUN_143baf0d0 body=404 status=ok
// SIG undefined FUN_143baf0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143baf0d0(longlong param_1,SYSTEMTIME *param_2,undefined8 param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined1 auStackY_d8 [32];
  wchar_t *local_a8;
  WCHAR local_98 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_d8;
  local_a8 = local_98;
  iVar1 = GetTimeFormatW(*(LCID *)(param_1 + 0x2e8),
                         *(DWORD *)(&DAT_145d186b0 + (longlong)*(int *)(param_1 + 0x168) * 4),
                         param_2,(LPCWSTR)0x0,local_a8,0x40);
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      iVar1 = GetTimeFormatW(*(LCID *)(param_1 + 0x2e8),
                             *(DWORD *)(&DAT_145d186b0 + (longlong)*(int *)(param_1 + 0x168) * 4),
                             param_2,(LPCWSTR)0x0,(LPWSTR)0x0,0);
      local_a8 = (wchar_t *)FUN_143aa7a40((longlong)iVar1 << 1);
      GetTimeFormatW(*(LCID *)(param_1 + 0x2e8),
                     *(DWORD *)(&DAT_145d186b0 + (longlong)*(int *)(param_1 + 0x168) * 4),param_2,
                     (LPCWSTR)0x0,local_a8,iVar1);
    }
  }
  sVar3 = wcslen(local_a8);
  FUN_143b17350(param_3,local_a8,sVar3 & 0xffffffff);
  if (local_a8 != local_98) {
    FUN_143aa79f0(local_a8);
  }
  return;
}



// FUNCTION 143baf270 FUN_143baf270 body=19 status=ok
// SIG undefined FUN_143baf270(void)

void FUN_143baf270(void)

{
  FUN_143baf290();
  return;
}



// FUNCTION 143baf290 FUN_143baf290 body=8 status=ok
// SIG undefined FUN_143baf290(void)

undefined * FUN_143baf290(void)

{
  return &DAT_146bc8472;
}



// FUNCTION 143baf2a0 FUN_143baf2a0 body=667 status=ok
// SIG undefined FUN_143baf2a0(void)

undefined8 FUN_143baf2a0(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined4 local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = 0;
  local_30 = (**(code **)(*param_2 + 0xb0))(param_2);
  local_40 = FUN_143a8b520(param_3);
  local_58 = FUN_143aa5b10(0,local_40,param_4);
  local_78 = FUN_143aa37c0(local_58,"calendar",0,param_4);
  local_90 = FUN_143aa3350(local_78,local_30,0,param_4);
  local_88 = FUN_143aa3350(local_90,"DateTimePatterns",0,param_4);
  if (*param_4 == 2) {
    *param_4 = 0;
    local_90 = FUN_143aa3350(local_78,"gregorian",local_90,param_4);
    local_88 = FUN_143aa3350(local_90,"DateTimePatterns",local_88,param_4);
  }
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_98 = 0;
    local_94 = 8;
    local_80 = FUN_143aa4d80(local_88);
    if (0xc < local_80) {
      local_94 = *(int *)(param_1 + 0x16c) + 5;
    }
    local_38 = FUN_143aa4da0(local_88,local_94,&local_98,param_4);
    local_70 = FUN_143a8d310(0x28);
    if (local_70 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_143a8d4f0(local_70,1,local_38,local_98);
    }
    local_28 = local_68;
    local_48 = local_68;
    FUN_143aa2ef0(local_88);
    FUN_143aa2ef0(local_90);
    FUN_143aa2ef0(local_78);
    FUN_143aa2ef0(local_58);
  }
  else {
    local_50 = FUN_143a8d310(0x28);
    if (local_50 == 0) {
      local_60 = 0;
      local_48 = local_60;
    }
    else {
      local_48 = FUN_143a8db50(local_50,L"{1} {0}",8);
    }
  }
  return local_48;
}



// FUNCTION 143baf540 FUN_143baf540 body=51 status=ok
// SIG undefined FUN_143baf540(void)

void FUN_143baf540(void)

{
  undefined4 uVar1;
  undefined8 in_R9;
  
  uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(in_R9);
  FUN_143b44cd0(in_R9,uVar1);
  return;
}



// FUNCTION 143baf580 FUN_143baf580 body=67 status=ok
// SIG undefined FUN_143baf580(void)

void FUN_143baf580(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
  return;
}



// FUNCTION 143baf5d0 FUN_143baf5d0 body=178 status=ok
// SIG undefined FUN_143baf5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143baf5d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143baf690(param_1,local_40,*(undefined8 *)(param_1 + 0x318),param_2);
  local_50 = local_58;
  FUN_143a8dcd0(param_1 + 0x2f0,local_58);
  FUN_143a8dc60(local_40);
  FUN_143b556c0(*(undefined8 *)(param_1 + 0x148),param_2);
  return;
}



// FUNCTION 143baf690 FUN_143baf690 body=490 status=ok
// SIG undefined FUN_143baf690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143baf690(longlong param_1,undefined8 param_2,LPTIME_ZONE_INFORMATION param_3,undefined8 param_4
             )

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  char local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FUN_143a8ac30(local_38);
  FUN_143b86160(param_4,local_38);
  cVar1 = FUN_143b0fd00(local_38,param_1 + 0x2f0);
  if (cVar1 != '\0') {
    FUN_143a8ac30(local_88);
    FUN_143b86160(param_4,local_88);
    local_98 = FUN_143a904f0(local_88);
    uVar2 = FUN_143a8fe10(local_88);
    cVar1 = FUN_143c08bf0(param_3,uVar2,local_98);
    if (cVar1 == '\0') {
      local_a8 = '\0';
      local_9c = FUN_143b4a4d0(local_88);
      for (local_a4 = 0; local_a4 < local_9c; local_a4 = local_a4 + 1) {
        FUN_143b4b6a0(local_60,local_88,local_a4);
        local_94 = FUN_143a904f0(local_60);
        uVar2 = FUN_143a8fe10(local_60);
        local_a8 = FUN_143c08bf0(param_3,uVar2,local_94);
        if (local_a8 != '\0') {
          FUN_143a8dc60(local_60);
          break;
        }
        FUN_143a8dc60(local_60);
      }
      if (local_a8 == '\0') {
        GetTimeZoneInformation(param_3);
      }
    }
    FUN_143a8dc60(local_88);
  }
  FUN_143a8d3a0(param_2,local_38);
  local_a0 = local_a0 | 1;
  FUN_143a8dc60(local_38);
  return param_2;
}



// FUNCTION 143baf880 FUN_143baf880 body=201 status=ok
// SIG undefined FUN_143baf880(void)

undefined8 *
FUN_143baf880(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::RegexMatcher::vftable;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  FUN_143bbfb50(param_1,(longlong)param_1 + 0x13c);
  cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x13c) = 1;
    }
    else {
      param_1[1] = param_2;
      FUN_143bbf9c0(param_1,*(undefined8 *)(DAT_146bc8478 + 0x5d8),(longlong)param_1 + 0x13c,param_4
                    ,uVar2);
    }
  }
  return param_1;
}



// FUNCTION 143baf950 FUN_143baf950 body=557 status=ok
// SIG undefined FUN_143baf950(void)

void FUN_143baf950(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::RegexMatcher::vftable;
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((undefined8 *)param_1[0x18] != param_1 + 0x19) {
    FUN_143aa79f0(param_1[0x18]);
    param_1[0x18] = 0;
  }
  if (param_1[2] != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[2] = 0;
    param_1[1] = 0;
  }
  if ((param_1[3] != 0) && (puVar1 = (undefined8 *)param_1[3], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[4] != 0) {
    FUN_143b07390(param_1[4]);
  }
  if (param_1[5] != 0) {
    FUN_143b07390(param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[0x28];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bafb80 FUN_143bafb80 body=54 status=ok
// SIG undefined FUN_143bafb80(void)

undefined8 FUN_143bafb80(undefined8 param_1,uint param_2)

{
  FUN_143baf950(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bafbc0 FUN_143bafbc0 body=176 status=ok
// SIG undefined FUN_143bafbc0(void)

void FUN_143bafbc0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x110) = 10000;
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (cVar1 = (**(code **)(param_1 + 0x118))
                        (*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x10c)),
     cVar1 == '\0')) {
    *param_2 = 0x10313;
    return;
  }
  if ((0 < *(int *)(param_1 + 0x108)) && (*(int *)(param_1 + 0x108) <= *(int *)(param_1 + 0x10c))) {
    *param_2 = 0x10312;
  }
  return;
}



// FUNCTION 143bafc70 FUN_143bafc70 body=27008 status=ok
// SIG undefined FUN_143bafc70(void)

void FUN_143bafc70(longlong param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *local_608;
  char local_5fb;
  bool local_5d6;
  bool local_5d3;
  uint local_5cc;
  uint local_5c8;
  int local_594;
  int local_590;
  uint local_58c;
  uint local_584;
  int local_580;
  longlong local_558;
  longlong local_540;
  uint local_538;
  uint local_534;
  uint local_530;
  uint local_52c;
  uint local_524;
  uint local_50c;
  uint local_4f8;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4cc;
  uint local_4c4;
  uint local_4c0;
  uint local_4bc;
  uint local_4b0;
  uint local_4a8;
  uint local_4a4;
  uint local_4a0;
  uint local_49c;
  uint local_494;
  uint local_490;
  uint local_484;
  uint local_47c;
  uint local_478;
  uint local_474;
  undefined4 local_450;
  undefined4 local_440;
  undefined4 local_430;
  undefined4 local_420;
  undefined4 local_3e0;
  undefined4 local_3d0;
  undefined4 local_3c0;
  undefined4 local_3b0;
  undefined4 local_3a0;
  undefined4 local_390;
  undefined4 local_380;
  undefined4 local_370;
  undefined4 local_360;
  undefined4 local_350;
  undefined4 local_340;
  undefined4 local_330;
  undefined4 local_320;
  undefined4 local_310;
  undefined4 local_300;
  undefined4 local_2f0;
  undefined4 local_2d0;
  undefined4 local_2b0;
  undefined4 local_2a0;
  undefined4 local_290;
  undefined4 local_280;
  longlong local_250;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a0;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e0;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined1 local_28 [40];
  
  local_30 = 0xfffffffffffffffe;
  cVar7 = FUN_143a8b0e0(*param_4);
  if (cVar7 == '\0') {
    lVar12 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
             ::GetObjectForTimerManager(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
    lVar13 = FUN_143a8fe10(*(longlong *)(param_1 + 8) + 0x28);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68);
    local_608 = (longlong *)FUN_143bc21a0(param_1);
    local_608[1] = 0;
    *local_608 = param_2;
    for (local_580 = 0; local_580 < *(int *)(*(longlong *)(param_1 + 8) + 0x6c);
        local_580 = local_580 + 1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_580 * 8) = 0;
    }
    do {
      uVar10 = *(uint *)(lVar12 + local_608[1] * 8);
      uVar8 = uVar10 & 0xffffff;
      local_608[1] = local_608[1] + 1;
      switch(uVar10 >> 0x18) {
      case 1:
        local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 2:
        if ((param_3 == '\0') || (*local_608 == *(longlong *)(param_1 + 0x78))) {
          local_5fb = '\x01';
          goto LAB_143bb657d;
        }
        local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 3:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_3e0 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_3e0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4a8 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4a8 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (local_4a8 == uVar8) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_250 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_250 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_250;
            break;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
        local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 4:
        uVar10 = *(uint *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        uVar10 = uVar10 & 0xffffff;
        lVar15 = lVar13 + (longlong)(int)uVar8 * 2;
        local_5cc = 0;
        lVar16 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        if ((lVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar16)) {
          FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
        }
        else {
          local_3d0 = (undefined4)lVar16;
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_3d0;
        }
        bVar6 = true;
        do {
          if ((int)uVar10 <= (int)local_5cc) goto LAB_143bb03bb;
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_240 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_240 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          if (*(longlong *)(param_1 + 0x78) <= local_240) {
            bVar6 = false;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            goto LAB_143bb03bb;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4a0 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4a0 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          local_58c = (uint)*(ushort *)(lVar15 + (longlong)(int)local_5cc * 2);
          uVar8 = local_5cc + 1;
          if ((((local_58c & 0xfffffc00) == 0xd800) && (uVar8 != uVar10)) &&
             (uVar2 = *(ushort *)(lVar15 + (longlong)(int)uVar8 * 2), (uVar2 & 0xfc00) == 0xdc00)) {
            local_58c = local_58c * 0x400 + -0x35fdc00 + (uint)uVar2;
            uVar8 = local_5cc + 2;
          }
          local_5cc = uVar8;
        } while (local_58c == local_4a0);
        bVar6 = false;
LAB_143bb03bb:
        if (bVar6) {
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_230 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_230 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *local_608 = local_230;
        }
        else {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 6:
        local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,uVar8,param_4);
        break;
      case 8:
        local_608[(longlong)(int)(uVar8 + 2) + 2] = *local_608;
        break;
      case 9:
        local_608[(longlong)(int)uVar8 + 2] = local_608[(longlong)(int)(uVar8 + 2) + 2];
        local_608[(longlong)(int)(uVar8 + 1) + 2] = *local_608;
        break;
      case 10:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          local_5d6 = (uVar10 & 0x800000) == 0x800000;
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_340 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_340;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4a4 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4a4 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if ((int)local_4a4 < 0x100) {
            cVar7 = FUN_143bbc310((longlong)(int)(uVar10 & 0x7fffff) * 0x20 +
                                  *(longlong *)(*(longlong *)(param_1 + 8) + 0x88));
            if (cVar7 != '\0') {
              local_5d3 = !local_5d6;
              local_5d6 = local_5d3;
            }
          }
          else {
            plVar14 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) +
                       (longlong)(int)(uVar10 & 0x7fffff) * 8);
            cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14);
            if (cVar7 != '\0') {
              local_5d6 = !local_5d6;
            }
          }
          if (local_5d6) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_148 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_148 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_148;
          }
          else {
            local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0xb:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_320 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_320;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_484 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_484 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if ((int)local_484 < 0x100) {
            cVar7 = FUN_143bbc310((longlong)(int)uVar8 * 0x20 +
                                  *(longlong *)(*(longlong *)(param_1 + 8) + 0x58));
            if (cVar7 == '\0') {
LAB_143bb348a:
              local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
            }
            else {
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                local_128 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40)
                            )(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                local_128 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              }
              *local_608 = local_128;
            }
          }
          else {
            plVar14 = (longlong *)FUN_143b09610(uVar4,uVar8);
            cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14);
            if (cVar7 == '\0') goto LAB_143bb348a;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_118 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_118 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_118;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0xc:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_310 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_310;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4d4 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4d4 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (((local_4d4 & 0x7f) < 0x2a) &&
             (((((int)local_4d4 < 0xe && (9 < (int)local_4d4)) || (local_4d4 == 0x85)) ||
              ((local_4d4 == 0x2028 || (local_4d4 == 0x2029)))))) {
            local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
          else {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_180 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_180 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_180;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0xd:
        local_608[1] = (longlong)(int)uVar8;
        break;
      case 0xe:
        local_5fb = '\0';
        goto LAB_143bb657d;
      case 0xf:
        local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1],param_4);
        local_608[1] = (longlong)(int)uVar8;
        break;
      case 0x10:
        cVar7 = FUN_143bc0360(param_1);
        if ((bool)cVar7 == (uVar8 != 0)) {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x11:
        if (((*(char *)(param_1 + 0x82) == '\0') || (*local_608 != *(longlong *)(param_1 + 0x90)))
           && ((*(char *)(param_1 + 0x82) != '\0' || (*local_608 != *(longlong *)(param_1 + 0x70))))
           ) {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x12:
        uVar10 = *(uint *)(lVar12 + (longlong)(int)(uVar8 - 1) * 8) & 0xffffff;
        if (local_608[(longlong)(int)uVar10 + 2] < *local_608) {
          local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1],param_4);
          local_608[1] = (longlong)(int)uVar8;
          local_608[(longlong)(int)uVar10 + 2] = *local_608;
        }
        break;
      case 0x13:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_350 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_350;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_47c = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_47c = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_130 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_130 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *local_608 = local_130;
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
          cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x28) + 0x30))
                            (*(undefined8 *)(lVar15 + 0x28));
          if (cVar7 == '\0') {
            cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x38) + 0x30))
                              (*(undefined8 *)(lVar15 + 0x38));
            if (cVar7 == '\0') {
              cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x30))
                                (*(undefined8 *)(lVar15 + 0x40));
              if (cVar7 == '\0') {
                cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x48) + 0x30))
                                  (*(undefined8 *)(lVar15 + 0x48));
                if (cVar7 != '\0') goto LAB_143bb2014;
                cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x50) + 0x30))
                                  (*(undefined8 *)(lVar15 + 0x50));
                if (cVar7 == '\0') {
                  cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x58) + 0x30))
                                    (*(undefined8 *)(lVar15 + 0x58));
                  if (cVar7 != '\0') goto LAB_143bb2014;
                  cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x60) + 0x30))
                                    (*(undefined8 *)(lVar15 + 0x60));
                  if (cVar7 == '\0') goto LAB_143bb25e3;
                }
              }
              else {
                do {
                  if (*(longlong *)(param_1 + 0x78) <= *local_608) goto LAB_143bb2a13;
                  if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                       *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                     (*(ushort *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                    *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                         *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
                  }
                  else {
                    FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
                  }
                  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                      *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                    local_200 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                            0x40))(*(undefined8 *)(param_1 + 0x20));
                  }
                  else {
                    local_200 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                                *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                  }
                  *local_608 = local_200;
                  cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x30))
                                    (*(undefined8 *)(lVar15 + 0x40));
                } while (cVar7 != '\0');
                cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x48) + 0x30))
                                  (*(undefined8 *)(lVar15 + 0x48));
                if (cVar7 == '\0') {
                  cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x50) + 0x30))
                                    (*(undefined8 *)(lVar15 + 0x50));
                  if (cVar7 != '\0') goto LAB_143bb231b;
                  cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x58) + 0x30))
                                    (*(undefined8 *)(lVar15 + 0x58));
                  if (cVar7 == '\0') {
                    if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
                       (0xd7ff < *(ushort *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                  (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) *
                                  2))) {
                      FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
                    }
                    else {
                      *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                           *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
                    }
                    if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                        *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                      local_100 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                              0x40))(*(undefined8 *)(param_1 + 0x20));
                    }
                    else {
                      local_100 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                                  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                    }
                    *local_608 = local_100;
                    goto LAB_143bb25e3;
                  }
                }
LAB_143bb2014:
                do {
                  if (*(longlong *)(param_1 + 0x78) <= *local_608) goto LAB_143bb2a13;
                  if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                       *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                     (*(ushort *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                    *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                         *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
                  }
                  else {
                    FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
                  }
                  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                      *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                    local_1f0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                            0x40))(*(undefined8 *)(param_1 + 0x20));
                  }
                  else {
                    local_1f0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                                *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                  }
                  *local_608 = local_1f0;
                  cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x58) + 0x30))
                                    (*(undefined8 *)(lVar15 + 0x58));
                } while (cVar7 != '\0');
                cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x60) + 0x30))
                                  (*(undefined8 *)(lVar15 + 0x60));
                if (cVar7 == '\0') {
                  if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
                     (0xd7ff < *(ushort *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2)
                     )) {
                    FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
                  }
                  else {
                    *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                         *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
                  }
                  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                      *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                    local_120 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                            0x40))(*(undefined8 *)(param_1 + 0x20));
                  }
                  else {
                    local_120 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                                *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                  }
                  *local_608 = local_120;
                  goto LAB_143bb25e3;
                }
              }
LAB_143bb231b:
              do {
                if (*(longlong *)(param_1 + 0x78) <= *local_608) goto LAB_143bb2a13;
                if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                   (*(ushort *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                       *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
                }
                else {
                  FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
                }
                if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                    *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                  local_1e0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                          0x40))(*(undefined8 *)(param_1 + 0x20));
                }
                else {
                  local_1e0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                }
                *local_608 = local_1e0;
                cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x60) + 0x30))
                                  (*(undefined8 *)(lVar15 + 0x60));
              } while (cVar7 != '\0');
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                            (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
                FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
              }
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                local_e0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                     (*(undefined8 *)(param_1 + 0x20));
              }
              else {
                local_e0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                           *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              }
              *local_608 = local_e0;
              goto LAB_143bb25e3;
            }
            if ((local_47c == 0xd) && (*local_608 < *(longlong *)(param_1 + 0x78))) {
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                 (*(ushort *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                local_478 = (uint)*(ushort *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                   (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
              }
              else {
                local_478 = FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
              }
              if (local_478 == 10) {
                if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                   (*(ushort *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                       *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
                }
                else {
                  FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
                }
                if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                    *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                  local_110 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                          0x40))(*(undefined8 *)(param_1 + 0x20));
                }
                else {
                  local_110 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                }
                *local_608 = local_110;
              }
            }
          }
          else {
LAB_143bb25e3:
            while (*local_608 < *(longlong *)(param_1 + 0x78)) {
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x2c) <=
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2))) {
                FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
              }
              cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x30) + 0x30))
                                (*(undefined8 *)(lVar15 + 0x30));
              if (cVar7 == '\0') break;
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                 (*(ushort *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
              }
              else {
                FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
              }
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                local_1d0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40)
                            )(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                local_1d0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              }
              *local_608 = local_1d0;
            }
          }
LAB_143bb2a13:
          if (*(longlong *)(param_1 + 0x78) <= *local_608) {
            *(undefined1 *)(param_1 + 0xa8) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x14:
        if (*local_608 < *(longlong *)(param_1 + 0x58)) {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x15:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_300 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_300;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_49c = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_49c = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_108 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_108 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *local_608 = local_108;
          if ((local_49c == 0xd) && (*local_608 < *(longlong *)(param_1 + 0x78))) {
            if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
               (*(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
              local_534 = (uint)*(ushort *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            }
            else {
              local_534 = FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
            }
            if (local_534 == 10) {
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                 (*(ushort *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
              }
              else {
                FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
              }
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                local_170 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40)
                            )(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                local_170 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              }
              *local_608 = local_170;
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x16:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_360 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_360;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_50c = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_50c = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          cVar7 = FUN_143a9db60(local_50c);
          if ((cVar7 == '\t') == (uVar8 != 0)) {
            local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
          else {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_210 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_210 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_210;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x17:
        if (*local_608 != *(longlong *)(param_1 + 0x50)) {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x18:
        if (*local_608 < *(longlong *)(param_1 + 0x58)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_3c0 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_3c0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_490 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_490 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_140 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_140 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          if (local_140 < *(longlong *)(param_1 + 0x58)) {
            if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
               (*(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
              local_474 = (uint)*(ushort *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
            }
            else {
              local_474 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
            }
            if ((local_490 == 0xd) && (local_474 == 10)) {
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                local_220 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40)
                            )(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                local_220 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              }
              if (*(longlong *)(param_1 + 0x58) <= local_220) {
                *(undefined1 *)(param_1 + 0xa8) = 1;
                *(undefined1 *)(param_1 + 0xa9) = 1;
                break;
              }
            }
          }
          else if ((((9 < (int)local_490) && ((int)local_490 < 0xe)) || (local_490 == 0x85)) ||
                  ((local_490 == 0x2028 || (local_490 == 0x2029)))) {
            if ((local_490 == 10) && (*(longlong *)(param_1 + 0x50) < *local_608)) {
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                            (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
                FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
              }
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                            (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
                local_538 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar11;
                local_538 = (uint)*(ushort *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                   (longlong)iVar11 * 2);
              }
              if (local_538 == 0xd) goto LAB_143bb0ac2;
            }
            *(undefined1 *)(param_1 + 0xa8) = 1;
            *(undefined1 *)(param_1 + 0xa9) = 1;
            break;
          }
LAB_143bb0ac2:
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x19:
        local_608[(longlong)(int)uVar8 + 2] = 0;
        iVar11 = (int)local_608[1];
        local_608[1] = local_608[1] + 3;
        iVar9 = *(int *)(lVar12 + (longlong)(iVar11 + 2) * 8);
        if (*(int *)(lVar12 + (longlong)(iVar11 + 1) * 8) == 0) {
          local_608 = (longlong *)
                      FUN_143bbaa60(param_1,local_608,
                                    ((uint)*(undefined8 *)(lVar12 + (longlong)iVar11 * 8) & 0xffffff
                                    ) + 1,param_4);
        }
        if (iVar9 == -1) {
          local_608[(longlong)(int)(uVar8 + 1) + 2] = *local_608;
        }
        else if (iVar9 == 0) {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x1a:
        local_608[(longlong)(int)uVar8 + 2] = 0;
        iVar11 = (int)local_608[1];
        local_608[1] = local_608[1] + 3;
        uVar5 = *(undefined8 *)(lVar12 + (longlong)iVar11 * 8);
        iVar9 = *(int *)(lVar12 + (longlong)(iVar11 + 1) * 8);
        iVar11 = *(int *)(lVar12 + (longlong)(iVar11 + 2) * 8);
        if (iVar11 == -1) {
          local_608[(longlong)(int)(uVar8 + 1) + 2] = *local_608;
        }
        if (iVar9 == 0) {
          if (iVar11 != 0) {
            local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1],param_4);
          }
          local_608[1] = (longlong)(int)(((uint)uVar5 & 0xffffff) + 1);
        }
        break;
      case 0x1b:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_2f0 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_2f0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_530 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_530 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (local_530 == 10) {
            local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
          else {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_f8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                   (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_f8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_f8;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x1c:
        uVar10 = *(uint *)(lVar12 + (longlong)(int)uVar8 * 8);
        puVar1 = (ulonglong *)(local_608 + (longlong)(int)(uVar10 & 0xffffff) + 2);
        iVar11 = *(int *)(lVar12 + (longlong)(int)(uVar8 + 2) * 8);
        uVar3 = *(uint *)(lVar12 + (longlong)(int)(uVar8 + 3) * 8);
        *puVar1 = *puVar1 + 1;
        if ((*puVar1 < (ulonglong)uVar3) || (uVar3 == 0xffffffff)) {
          if ((longlong)iVar11 <= (longlong)*puVar1) {
            if (uVar3 == 0xffffffff) {
              if (*local_608 == local_608[(longlong)(int)((uVar10 & 0xffffff) + 1) + 2]) break;
              local_608[(longlong)(int)((uVar10 & 0xffffff) + 1) + 2] = *local_608;
            }
            local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1],param_4);
          }
          local_608[1] = (longlong)(int)(uVar8 + 4);
        }
        break;
      case 0x1d:
        uVar10 = *(uint *)(lVar12 + (longlong)(int)uVar8 * 8);
        puVar1 = (ulonglong *)(local_608 + (longlong)(int)(uVar10 & 0xffffff) + 2);
        iVar11 = *(int *)(lVar12 + (longlong)(int)(uVar8 + 2) * 8);
        uVar3 = *(uint *)(lVar12 + (longlong)(int)(uVar8 + 3) * 8);
        *puVar1 = *puVar1 + 1;
        if ((*puVar1 < (ulonglong)uVar3) || (uVar3 == 0xffffffff)) {
          if ((longlong)*puVar1 < (longlong)iVar11) {
            local_608[1] = (longlong)(int)(uVar8 + 4);
          }
          else {
            if (uVar3 == 0xffffffff) {
              if (*local_608 == local_608[(longlong)(int)((uVar10 & 0xffffff) + 1) + 2]) break;
              local_608[(longlong)(int)((uVar10 & 0xffffff) + 1) + 2] = *local_608;
            }
            local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,uVar8 + 4,param_4);
          }
        }
        break;
      case 0x1e:
        if (*(longlong *)(param_1 + 0x50) < *local_608) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_370 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_370;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            local_4bc = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar11;
            local_4bc = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)iVar11 * 2);
          }
          if (local_4bc != 10) {
            local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        break;
      case 0x20:
        iVar11 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar8 * 8) = (longlong)iVar11;
        break;
      case 0x21:
        iVar11 = *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar8 * 8);
        lVar15 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                 ::GetObjectForTimerManager(*(undefined8 *)(param_1 + 0xb0));
        plVar14 = (longlong *)
                  (lVar15 + (longlong)iVar11 * 8 + (longlong)*(int *)(param_1 + 0x38) * -8);
        if (plVar14 != local_608) {
          for (local_590 = 0; local_590 < *(int *)(param_1 + 0x38); local_590 = local_590 + 1) {
            plVar14[local_590] = local_608[local_590];
          }
          FUN_143e1d440(*(undefined8 *)(param_1 + 0xb0));
          local_608 = plVar14;
        }
        break;
      case 0x22:
        lVar15 = local_608[(longlong)(int)(uVar8 + 1) + 2];
        if (local_608[(longlong)(int)uVar8 + 2] < 0) {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          lVar16 = local_608[(longlong)(int)uVar8 + 2] -
                   *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
          if ((lVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x28) + 0x1c) < lVar16)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x28));
          }
          else {
            local_2d0 = (undefined4)lVar16;
            *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x28) = local_2d0;
          }
          lVar16 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar16)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_2b0 = (undefined4)lVar16;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_2b0;
          }
          do {
            lVar16 = FUN_143b07740(*(undefined8 *)(param_1 + 0x28));
            if (lVar15 <= lVar16) {
              bVar6 = true;
              goto LAB_143bb4676;
            }
            lVar16 = FUN_143b07740(*(undefined8 *)(param_1 + 0x20));
            if (*(longlong *)(param_1 + 0x78) <= lVar16) {
              bVar6 = false;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              goto LAB_143bb4676;
            }
            iVar11 = FUN_143b07920(*(undefined8 *)(param_1 + 0x28));
            iVar9 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          } while (iVar9 == iVar11);
          bVar6 = false;
LAB_143bb4676:
          if (bVar6) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_150 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_150 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_150;
          }
          else {
            local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        break;
      case 0x23:
        local_608[(longlong)(int)uVar8 + 2] = *local_608;
        break;
      case 0x24:
        lVar15 = local_608[1];
        local_608[1] = local_608[1] + 1;
        if (local_608[(longlong)
                      (int)((uint)*(undefined8 *)(lVar12 + (longlong)(int)lVar15 * 8) & 0xffffff) +
                      2] < *local_608) {
          local_608[1] = (longlong)(int)uVar8;
        }
        else {
          local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x25:
        iVar11 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar8 * 8) = (longlong)iVar11;
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 1) * 8) = *local_608;
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
        break;
      case 0x26:
        iVar9 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        iVar11 = *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar8 * 8);
        if (iVar11 < iVar9) {
          lVar15 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                   ::GetObjectForTimerManager(*(undefined8 *)(param_1 + 0xb0));
          plVar14 = (longlong *)
                    (lVar15 + (longlong)iVar11 * 8 + (longlong)*(int *)(param_1 + 0x38) * -8);
          for (local_594 = 0; local_594 < *(int *)(param_1 + 0x38); local_594 = local_594 + 1) {
            plVar14[local_594] = local_608[local_594];
          }
          FUN_143e1d440(*(undefined8 *)(param_1 + 0xb0),iVar11);
          local_608 = plVar14;
        }
        *local_608 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 1) * 8);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x48);
        break;
      case 0x27:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_2a0 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_2a0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4f8 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4f8 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          uVar10 = FUN_143a9b5a0(local_4f8,0);
          if (uVar10 == uVar8) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_218 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_218 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_218;
            break;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
        local_608 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 0x28:
        lVar15 = lVar13 + (longlong)(int)uVar8 * 2;
        local_5c8 = 0;
        uVar10 = *(uint *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        uVar10 = uVar10 & 0xffffff;
        bVar6 = true;
        lVar16 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        if ((lVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar16)) {
          FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
        }
        else {
          local_290 = (undefined4)lVar16;
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_290;
        }
        FUN_143c08cb0(local_70,*(undefined8 *)(param_1 + 0x20));
        do {
          if ((int)uVar10 <= (int)local_5c8) goto LAB_143bb513a;
          cVar7 = FUN_143c08d40(local_70);
          if (cVar7 == '\0') {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_1f8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_1f8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            if (*(longlong *)(param_1 + 0x78) <= local_1f8) {
              bVar6 = false;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              goto LAB_143bb513a;
            }
          }
          local_584 = (uint)*(ushort *)(lVar15 + (longlong)(int)local_5c8 * 2);
          uVar8 = local_5c8 + 1;
          if ((((local_584 & 0xfffffc00) == 0xd800) && (uVar8 != uVar10)) &&
             (uVar2 = *(ushort *)(lVar15 + (longlong)(int)uVar8 * 2), (uVar2 & 0xfc00) == 0xdc00)) {
            local_584 = local_584 * 0x400 + -0x35fdc00 + (uint)uVar2;
            uVar8 = local_5c8 + 2;
          }
          local_5c8 = uVar8;
          uVar8 = FUN_143c08fb0(local_70);
        } while (uVar8 == local_584);
        bVar6 = false;
LAB_143bb513a:
        cVar7 = FUN_143c08d40(local_70);
        if (cVar7 != '\0') {
          bVar6 = false;
        }
        if (bVar6) {
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_1d8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_1d8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *local_608 = local_1d8;
        }
        else {
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        FUN_143b1b790(local_70);
        break;
      case 0x29:
        lVar15 = local_608[(longlong)(int)(uVar8 + 1) + 2];
        if (local_608[(longlong)(int)uVar8 + 2] < 0) {
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        else {
          FUN_143b08380(*(undefined8 *)(param_1 + 0x28),local_608[(longlong)(int)uVar8 + 2]);
          FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          FUN_143c08cb0(local_28,*(undefined8 *)(param_1 + 0x28));
          FUN_143c08cb0(local_50,*(undefined8 *)(param_1 + 0x20));
          do {
            cVar7 = FUN_143c08d40(local_28);
            if ((cVar7 == '\0') &&
               (lVar16 = FUN_143b07740(*(undefined8 *)(param_1 + 0x28)), lVar15 <= lVar16)) {
              bVar6 = true;
              goto LAB_143bb48c8;
            }
            cVar7 = FUN_143c08d40(local_50);
            if ((cVar7 == '\0') &&
               (lVar16 = FUN_143b07740(*(undefined8 *)(param_1 + 0x20)),
               *(longlong *)(param_1 + 0x78) <= lVar16)) {
              bVar6 = false;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              goto LAB_143bb48c8;
            }
            iVar11 = FUN_143c08fb0(local_28);
            iVar9 = FUN_143c08fb0(local_50);
          } while (iVar9 == iVar11);
          bVar6 = false;
LAB_143bb48c8:
          if ((bVar6) && (cVar7 = FUN_143c08d40(local_50), cVar7 != '\0')) {
            bVar6 = false;
          }
          if (bVar6) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_238 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_238 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_238;
          }
          else {
            local_608 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
          FUN_143b1b790(local_50);
          FUN_143b1b790(local_28);
        }
        break;
      case 0x2a:
        if (*local_608 < *(longlong *)(param_1 + 0x58)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_3a0 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_3a0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_52c = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
          }
          else {
            local_52c = FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
          }
          if (((((int)local_52c < 10) || (0xd < (int)local_52c)) && (local_52c != 0x85)) &&
             ((local_52c != 0x2028 && (local_52c != 0x2029)))) {
LAB_143bb0fab:
            local_608 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
          else if ((local_52c == 10) && (*(longlong *)(param_1 + 0x50) < *local_608)) {
            if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
               (0xd7ff < *(ushort *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                          (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
              local_524 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
            }
            else {
              iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar11;
              local_524 = (uint)*(ushort *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                 (longlong)iVar11 * 2);
            }
            if (local_524 == 0xd) goto LAB_143bb0fab;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x2b:
        if (*local_608 != *(longlong *)(param_1 + 0x50)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_380 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_380;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            local_494 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar11;
            local_494 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)iVar11 * 2);
          }
          if ((*(longlong *)(param_1 + 0x58) <= *local_608) ||
             ((((0xd < (int)local_494 || ((int)local_494 < 10)) && (local_494 != 0x85)) &&
              ((local_494 != 0x2028 && (local_494 != 0x2029)))))) {
            local_608 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
        }
        break;
      case 0x2c:
        iVar11 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar8 * 8) = (longlong)iVar11;
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 1) * 8) = *local_608;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 2) * 8) =
             0xffffffffffffffff;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 3) * 8) =
             *(undefined8 *)(param_1 + 0x78);
        *(longlong *)(param_1 + 0x78) = *local_608;
        break;
      case 0x2d:
        iVar11 = *(int *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        iVar9 = *(int *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 2) * 8);
        if (*plVar14 < 0) {
          *plVar14 = *local_608 - (longlong)iVar11;
        }
        else if (*plVar14 == 0) {
          *plVar14 = *plVar14 + -1;
        }
        else {
          lVar15 = *plVar14 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*plVar14);
          }
          else {
            local_280 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_280;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_1c8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_1c8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *plVar14 = local_1c8;
        }
        if ((*plVar14 < 0) || (*plVar14 < *local_608 - (longlong)iVar9)) {
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 3) * 8);
        }
        else {
          local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1] + -3,param_4);
          *local_608 = *plVar14;
        }
        break;
      case 0x2e:
        if (*local_608 == *(longlong *)(param_1 + 0x78)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 3) * 8);
        }
        else {
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x2f:
        iVar11 = *(int *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        iVar9 = *(int *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        uVar10 = *(uint *)(lVar12 + local_608[1] * 8);
        local_608[1] = local_608[1] + 1;
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 2) * 8);
        if (*plVar14 < 0) {
          *plVar14 = *local_608 - (longlong)iVar11;
        }
        else if (*plVar14 == 0) {
          *plVar14 = *plVar14 + -1;
        }
        else {
          lVar15 = *plVar14 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*plVar14);
          }
          else {
            local_450 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_450;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_1b8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_1b8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *plVar14 = local_1b8;
        }
        if ((*plVar14 < 0) || (*plVar14 < *local_608 - (longlong)iVar9)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 3) * 8);
          local_608[1] = (longlong)(int)(uVar10 & 0xffffff);
        }
        else {
          local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1] + -4,param_4);
          *local_608 = *plVar14;
        }
        break;
      case 0x30:
        if (*local_608 == *(longlong *)(param_1 + 0x78)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar8 + 3) * 8);
          FUN_143e1d440(*(undefined8 *)(param_1 + 0xb0),
                        *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar8 * 8));
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        else {
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x31:
        if (*local_608 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_330 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_330;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4dc = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4dc = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if ((int)local_4dc < 0x100) {
            cVar7 = FUN_143bbc310((longlong)(int)uVar8 * 0x20 +
                                  *(longlong *)(*(longlong *)(param_1 + 8) + 0x88),local_4dc);
            if (cVar7 == '\0') {
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                local_1b0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40)
                            )(*(undefined8 *)(param_1 + 0x20));
              }
              else {
                local_1b0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              }
              *local_608 = local_1b0;
            }
            else {
LAB_143bb3128:
              local_608 = (longlong *)
                          FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                        *(undefined4 *)(param_1 + 0x38));
            }
          }
          else {
            plVar14 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + (longlong)(int)uVar8 * 8)
            ;
            cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14,local_4dc);
            if (cVar7 != '\0') goto LAB_143bb3128;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_1a0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_1a0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_1a0;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x32:
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
        plVar14 = (longlong *)FUN_143b09610(uVar4,uVar8);
        local_540 = *local_608;
        lVar16 = local_540 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        if ((lVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar16)) {
          FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_540);
        }
        else {
          local_440 = (undefined4)lVar16;
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_440;
        }
        while (local_540 < *(longlong *)(param_1 + 0x78)) {
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4d8 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4d8 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if ((int)local_4d8 < 0x100) {
            cVar7 = FUN_143bbc310((longlong)(int)uVar8 * 0x20 + lVar15,local_4d8);
          }
          else {
            cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14,local_4d8);
          }
          if (cVar7 == '\0') goto LAB_143bb5d9e;
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_188 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_188 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          local_540 = local_188;
        }
        *(undefined1 *)(param_1 + 0xa8) = 1;
LAB_143bb5d9e:
        if (local_540 == *local_608) {
          local_608[1] = local_608[1] + 1;
        }
        else {
          local_608[(longlong)(int)(*(uint *)(lVar12 + local_608[1] * 8) & 0xffffff) + 2] =
               *local_608;
          *local_608 = local_540;
          local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1],param_4);
          local_608[1] = local_608[1] + 1;
        }
        break;
      case 0x33:
        lVar15 = local_608[(longlong)(int)uVar8 + 2];
        if (lVar15 != *local_608) {
          lVar16 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar16)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_420 = (undefined4)lVar16;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_420;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            local_4c0 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar11;
            local_4c0 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)iVar11 * 2);
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_168 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                  (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_168 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          *local_608 = local_168;
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            local_4b0 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar11;
            local_4b0 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)iVar11 * 2);
          }
          if ((((local_4c0 == 10) && (lVar15 < *local_608)) && (local_4b0 == 0xd)) &&
             (*(uint *)(lVar12 + -0x10 + local_608[1] * 8) >> 0x18 == 0x34)) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_158 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_158 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            *local_608 = local_158;
          }
          local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1] + -1,param_4);
        }
        break;
      case 0x34:
        if ((uVar10 & 1) == 1) {
          local_558 = *(longlong *)(param_1 + 0x78);
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
        else {
          local_558 = *local_608;
          lVar15 = local_558 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_558);
          }
          else {
            local_430 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_430;
          }
          while (local_558 < *(longlong *)(param_1 + 0x78)) {
            if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
               (*(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
              local_4d0 = (uint)*(ushort *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
            }
            else {
              local_4d0 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
            }
            if (((local_4d0 & 0x7f) < 0x2a) &&
               (((local_4d0 == 10 ||
                 (((((uVar10 & 2) == 0 && ((int)local_4d0 < 0xe)) && (9 < (int)local_4d0)) ||
                  ((local_4d0 == 0x85 || (local_4d0 == 0x2028)))))) || (local_4d0 == 0x2029))))
            goto LAB_143bb60de;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_178 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                    (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_178 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            local_558 = local_178;
          }
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
LAB_143bb60de:
        if (local_558 == *local_608) {
          local_608[1] = local_608[1] + 1;
        }
        else {
          local_608[(longlong)(int)(*(uint *)(lVar12 + local_608[1] * 8) & 0xffffff) + 2] =
               *local_608;
          *local_608 = local_558;
          local_608 = (longlong *)FUN_143bbaa60(param_1,local_608,local_608[1],param_4);
          local_608[1] = local_608[1] + 1;
        }
        break;
      case 0x35:
        cVar7 = FUN_143bc01f0(param_1,*local_608);
        if ((bool)cVar7 == (uVar8 != 0)) {
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x36:
        if (*local_608 < *(longlong *)(param_1 + 0x58)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_3b0 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_3b0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4cc = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_4cc = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (local_4cc == 10) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_f0 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                   (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_f0 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            if (local_f0 == *(longlong *)(param_1 + 0x58)) {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              *(undefined1 *)(param_1 + 0xa9) = 1;
              break;
            }
          }
          local_608 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x37:
        if (*local_608 < *(longlong *)(param_1 + 0x58)) {
          lVar15 = *local_608 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar15 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar15)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),*local_608);
          }
          else {
            local_390 = (undefined4)lVar15;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_390;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_4c4 = (uint)*(ushort *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
          }
          else {
            local_4c4 = FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
          }
          if (local_4c4 != 10) {
            local_608 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
      }
      cVar7 = FUN_143a8b0e0(*param_4);
    } while (cVar7 == '\0');
    local_5fb = '\0';
LAB_143bb657d:
    *(char *)(param_1 + 0x82) = local_5fb;
    if (local_5fb != '\0') {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
      *(longlong *)(param_1 + 0x88) = param_2;
      *(longlong *)(param_1 + 0x90) = *local_608;
    }
    *(longlong **)(param_1 + 0xb8) = local_608;
  }
  return;
}



// FUNCTION 143bb66e0 FUN_143bb66e0 body=16951 status=ok
// SIG undefined FUN_143bb66e0(void)

void FUN_143bb66e0(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  short *psVar1;
  ulonglong *puVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *local_3a8;
  uint local_39c;
  int local_38c;
  char local_387;
  int local_384;
  uint local_370;
  bool local_360;
  bool local_35f;
  uint local_34c;
  uint local_348;
  uint local_340;
  uint local_320;
  uint local_318;
  uint local_314;
  uint local_310;
  int local_308;
  int local_2ec;
  int local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_290;
  short *local_268;
  longlong local_230;
  longlong local_220;
  short *local_1a8;
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  undefined1 local_38 [56];
  
  cVar12 = FUN_143a8b0e0(*param_4);
  if (cVar12 == '\0') {
    lVar17 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
             ::GetObjectForTimerManager(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
    lVar18 = FUN_143a8fe10(*(longlong *)(param_1 + 8) + 0x28);
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68);
    local_3a8 = (longlong *)FUN_143bc21a0(param_1);
    local_3a8[1] = 0;
    *local_3a8 = (longlong)param_2;
    for (local_2b0 = 0; local_2b0 < *(int *)(*(longlong *)(param_1 + 8) + 0x6c);
        local_2b0 = local_2b0 + 1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_2b0 * 8) = 0;
    }
    do {
      uVar15 = *(uint *)(lVar17 + local_3a8[1] * 8);
      uVar13 = uVar15 & 0xffffff;
      local_3a8[1] = local_3a8[1] + 1;
      switch(uVar15 >> 0x18) {
      case 1:
        local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 2:
        if ((param_3 == '\0') || (*local_3a8 == *(longlong *)(param_1 + 0x78))) {
          local_387 = '\x01';
          goto LAB_143bba89a;
        }
        local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 3:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_2ac = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_2ac & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_2ac = local_2ac * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if (local_2ac == uVar13) break;
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
        local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 4:
        uVar15 = *(uint *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        uVar15 = uVar15 & 0xffffff;
        local_268 = (short *)(lVar8 + *local_3a8 * 2);
        local_1a8 = (short *)(lVar18 + (longlong)(int)uVar13 * 2);
        psVar1 = local_268 + (int)uVar15;
        bVar11 = true;
        do {
          if (psVar1 <= local_268) goto LAB_143bb6b89;
          if ((short *)(lVar8 + *(longlong *)(param_1 + 0x78) * 2) <= local_268) {
            *(undefined1 *)(param_1 + 0xa8) = 1;
            bVar11 = false;
            goto LAB_143bb6b89;
          }
          sVar3 = *local_268;
          sVar4 = *local_1a8;
          local_1a8 = local_1a8 + 1;
          local_268 = local_268 + 1;
        } while (sVar3 == sVar4);
        bVar11 = false;
LAB_143bb6b89:
        if (bVar11) {
          *local_3a8 = (longlong)(int)uVar15 + *local_3a8;
        }
        else {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 6:
        local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,uVar13,param_4);
        break;
      case 8:
        local_3a8[(longlong)(int)(uVar13 + 2) + 2] = *local_3a8;
        break;
      case 9:
        local_3a8[(longlong)(int)uVar13 + 2] = local_3a8[(longlong)(int)(uVar13 + 2) + 2];
        local_3a8[(longlong)(int)(uVar13 + 1) + 2] = *local_3a8;
        break;
      case 10:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_360 = (uVar15 & 0x800000) == 0x800000;
          local_318 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_318 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_318 = local_318 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if ((int)local_318 < 0x100) {
            cVar12 = FUN_143bbc310((longlong)(int)(uVar15 & 0x7fffff) * 0x20 +
                                   *(longlong *)(*(longlong *)(param_1 + 8) + 0x88));
            if (cVar12 != '\0') {
              local_35f = !local_360;
              local_360 = local_35f;
            }
          }
          else {
            plVar20 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) +
                       (longlong)(int)(uVar15 & 0x7fffff) * 8);
            cVar12 = (**(code **)(*plVar20 + 0x30))(plVar20);
            if (cVar12 != '\0') {
              local_360 = !local_360;
            }
          }
          if (!local_360) {
            local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0xb:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_320 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_320 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_320 = local_320 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if ((int)local_320 < 0x100) {
            cVar12 = FUN_143bbc310((longlong)(int)uVar13 * 0x20 +
                                   *(longlong *)(*(longlong *)(param_1 + 8) + 0x58));
          }
          else {
            plVar20 = (longlong *)FUN_143b09610(uVar7,uVar13);
            cVar12 = (**(code **)(*plVar20 + 0x30))(plVar20);
          }
          if (cVar12 == '\0') {
            local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0xc:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_348 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_348 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_348 = local_348 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if (((local_348 & 0x7f) < 0x2a) &&
             ((((int)local_348 < 0xe && (9 < (int)local_348)) ||
              ((local_348 == 0x85 || ((local_348 == 0x2028 || (local_348 == 0x2029)))))))) {
            local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0xd:
        local_3a8[1] = (longlong)(int)uVar13;
        break;
      case 0xe:
        local_387 = '\0';
        goto LAB_143bba89a;
      case 0xf:
        local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1],param_4);
        local_3a8[1] = (longlong)(int)uVar13;
        break;
      case 0x10:
        cVar12 = FUN_143bbff30(param_1);
        if ((bool)cVar12 == (uVar13 != 0)) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x11:
        if (((*(char *)(param_1 + 0x82) == '\0') || (*local_3a8 != *(longlong *)(param_1 + 0x90)))
           && ((*(char *)(param_1 + 0x82) != '\0' || (*local_3a8 != *(longlong *)(param_1 + 0x70))))
           ) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x12:
        uVar15 = *(uint *)(lVar17 + (longlong)(int)(uVar13 - 1) * 8) & 0xffffff;
        if ((longlong)(int)local_3a8[(longlong)(int)uVar15 + 2] < *local_3a8) {
          local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1],param_4);
          local_3a8[1] = (longlong)(int)uVar13;
          local_3a8[(longlong)(int)uVar15 + 2] = *local_3a8;
        }
        break;
      case 0x13:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_39c = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_39c & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_39c = local_39c * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
          cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x28) + 0x30))
                             (*(undefined8 *)(lVar19 + 0x28));
          if (cVar12 == '\0') {
            cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x38) + 0x30))
                               (*(undefined8 *)(lVar19 + 0x38));
            if (cVar12 == '\0') {
              cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x40) + 0x30))
                                 (*(undefined8 *)(lVar19 + 0x40));
              if (cVar12 == '\0') {
                cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x48) + 0x30))
                                   (*(undefined8 *)(lVar19 + 0x48));
                if (cVar12 != '\0') goto LAB_143bb7ab9;
                cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x50) + 0x30))
                                   (*(undefined8 *)(lVar19 + 0x50));
                if (cVar12 == '\0') {
                  cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x58) + 0x30))
                                     (*(undefined8 *)(lVar19 + 0x58));
                  if (cVar12 != '\0') goto LAB_143bb7ab9;
                  cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x30))
                                     (*(undefined8 *)(lVar19 + 0x60));
                  if (cVar12 == '\0') goto LAB_143bb7e4e;
                }
              }
              else {
                do {
                  if (*(longlong *)(param_1 + 0x78) <= *local_3a8) goto LAB_143bb8011;
                  uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2);
                  *local_3a8 = *local_3a8 + 1;
                  if ((((uVar5 & 0xfc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
                      ) && ((*(ushort *)(lVar8 + *local_3a8 * 2) & 0xfc00) == 0xdc00)) {
                    *local_3a8 = *local_3a8 + 1;
                  }
                  cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x40) + 0x30))
                                     (*(undefined8 *)(lVar19 + 0x40));
                } while (cVar12 != '\0');
                cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x48) + 0x30))
                                   (*(undefined8 *)(lVar19 + 0x48));
                if (cVar12 == '\0') {
                  cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x50) + 0x30))
                                     (*(undefined8 *)(lVar19 + 0x50));
                  if (cVar12 != '\0') goto LAB_143bb7ca3;
                  cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x58) + 0x30))
                                     (*(undefined8 *)(lVar19 + 0x58));
                  if (cVar12 == '\0') {
                    lVar10 = *local_3a8;
                    *local_3a8 = lVar10 + -1;
                    if ((((*(ushort *)(lVar8 + (lVar10 + -1) * 2) & 0xfc00) == 0xdc00) &&
                        (0 < *local_3a8)) &&
                       ((*(ushort *)(lVar8 + -2 + *local_3a8 * 2) & 0xfc00) == 0xd800)) {
                      *local_3a8 = *local_3a8 + -1;
                    }
                    goto LAB_143bb7e4e;
                  }
                }
LAB_143bb7ab9:
                do {
                  if (*(longlong *)(param_1 + 0x78) <= *local_3a8) goto LAB_143bb8011;
                  uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2);
                  *local_3a8 = *local_3a8 + 1;
                  if ((((uVar5 & 0xfc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
                      ) && ((*(ushort *)(lVar8 + *local_3a8 * 2) & 0xfc00) == 0xdc00)) {
                    *local_3a8 = *local_3a8 + 1;
                  }
                  cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x58) + 0x30))
                                     (*(undefined8 *)(lVar19 + 0x58));
                } while (cVar12 != '\0');
                cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x30))
                                   (*(undefined8 *)(lVar19 + 0x60));
                if (cVar12 == '\0') {
                  lVar10 = *local_3a8;
                  *local_3a8 = lVar10 + -1;
                  if ((((*(ushort *)(lVar8 + (lVar10 + -1) * 2) & 0xfc00) == 0xdc00) &&
                      (0 < *local_3a8)) &&
                     ((*(ushort *)(lVar8 + -2 + *local_3a8 * 2) & 0xfc00) == 0xd800)) {
                    *local_3a8 = *local_3a8 + -1;
                  }
                  goto LAB_143bb7e4e;
                }
              }
LAB_143bb7ca3:
              do {
                if (*(longlong *)(param_1 + 0x78) <= *local_3a8) goto LAB_143bb8011;
                uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2);
                *local_3a8 = *local_3a8 + 1;
                if ((((uVar5 & 0xfc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78)))
                   && ((*(ushort *)(lVar8 + *local_3a8 * 2) & 0xfc00) == 0xdc00)) {
                  *local_3a8 = *local_3a8 + 1;
                }
                cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x30))
                                   (*(undefined8 *)(lVar19 + 0x60));
              } while (cVar12 != '\0');
              lVar10 = *local_3a8;
              *local_3a8 = lVar10 + -1;
              if ((((*(ushort *)(lVar8 + (lVar10 + -1) * 2) & 0xfc00) == 0xdc00) && (0 < *local_3a8)
                  ) && ((*(ushort *)(lVar8 + -2 + *local_3a8 * 2) & 0xfc00) == 0xd800)) {
                *local_3a8 = *local_3a8 + -1;
              }
              goto LAB_143bb7e4e;
            }
            if (((local_39c == 0xd) && (*local_3a8 < *(longlong *)(param_1 + 0x78))) &&
               (*(short *)(lVar8 + *local_3a8 * 2) == 10)) {
              *local_3a8 = *local_3a8 + 1;
            }
          }
          else {
LAB_143bb7e4e:
            do {
              if (*(longlong *)(param_1 + 0x78) <= *local_3a8) goto LAB_143bb8011;
              uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2);
              *local_3a8 = *local_3a8 + 1;
              if ((((uVar5 & 0xfc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))) &&
                 ((*(ushort *)(lVar8 + *local_3a8 * 2) & 0xfc00) == 0xdc00)) {
                *local_3a8 = *local_3a8 + 1;
              }
              cVar12 = (**(code **)(**(longlong **)(lVar19 + 0x30) + 0x30))
                                 (*(undefined8 *)(lVar19 + 0x30));
            } while (cVar12 != '\0');
            lVar19 = *local_3a8;
            *local_3a8 = lVar19 + -1;
            if ((((*(ushort *)(lVar8 + (lVar19 + -1) * 2) & 0xfc00) == 0xdc00) && (0 < *local_3a8))
               && ((*(ushort *)(lVar8 + -2 + *local_3a8 * 2) & 0xfc00) == 0xd800)) {
              *local_3a8 = *local_3a8 + -1;
            }
          }
LAB_143bb8011:
          if (*(longlong *)(param_1 + 0x78) <= *local_3a8) {
            *(undefined1 *)(param_1 + 0xa8) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x14:
        if (*local_3a8 < *(longlong *)(param_1 + 0x58)) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x15:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_2a0 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_2a0 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_2a0 = local_2a0 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if (((local_2a0 == 0xd) && (*local_3a8 < *(longlong *)(param_1 + 0x78))) &&
             ((*(short *)(lVar8 + *local_3a8 * 2) == 10 &&
              (((uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), *local_3a8 = *local_3a8 + 1,
                (uVar5 & 0xfc00) == 0xd800 && (*local_3a8 != *(longlong *)(param_1 + 0x78))) &&
               ((*(ushort *)(lVar8 + *local_3a8 * 2) & 0xfc00) == 0xdc00)))))) {
            *local_3a8 = *local_3a8 + 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x16:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_2a8 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_2a8 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_2a8 = local_2a8 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          cVar12 = FUN_143a9db60(local_2a8);
          if ((cVar12 == '\t') == (uVar13 != 0)) {
            local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x17:
        if (*local_3a8 != *(longlong *)(param_1 + 0x50)) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x18:
        if (*local_3a8 < *(longlong *)(param_1 + 0x58) + -2) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        else if (*local_3a8 < *(longlong *)(param_1 + 0x58)) {
          if (*local_3a8 == *(longlong *)(param_1 + 0x58) + -1) {
            uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2);
            local_370 = (uint)uVar5;
            if ((local_370 & 0xfffff800) == 0xd800) {
              if ((uVar5 & 0x400) == 0) {
                if ((*local_3a8 + 1 != *(longlong *)(param_1 + 0x58)) &&
                   (uVar5 = *(ushort *)(lVar8 + 2 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
                  local_370 = local_370 * 0x400 + -0x35fdc00 + (uint)uVar5;
                }
              }
              else if ((*(longlong *)(param_1 + 0x50) < *local_3a8) &&
                      (uVar5 = *(ushort *)(lVar8 + -2 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xd800)
                      ) {
                local_370 = (uint)uVar5 * 0x400 + -0x35fdc00 + local_370;
              }
            }
            if ((((((int)local_370 < 10) || (0xd < (int)local_370)) && (local_370 != 0x85)) &&
                ((local_370 != 0x2028 && (local_370 != 0x2029)))) ||
               ((local_370 == 10 &&
                ((*(longlong *)(param_1 + 0x50) < *local_3a8 &&
                 (*(short *)(lVar8 + -2 + *local_3a8 * 2) == 0xd)))))) {
LAB_143bb6f24:
              local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
            }
            else {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              *(undefined1 *)(param_1 + 0xa9) = 1;
            }
          }
          else {
            if (((*local_3a8 != *(longlong *)(param_1 + 0x58) + -2) ||
                (*(short *)(lVar8 + *local_3a8 * 2) != 0xd)) ||
               (*(short *)(lVar8 + 2 + *local_3a8 * 2) != 10)) goto LAB_143bb6f24;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            *(undefined1 *)(param_1 + 0xa9) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x19:
        local_3a8[(longlong)(int)uVar13 + 2] = 0;
        iVar16 = (int)local_3a8[1];
        local_3a8[1] = local_3a8[1] + 3;
        iVar14 = *(int *)(lVar17 + (longlong)(iVar16 + 2) * 8);
        if (*(int *)(lVar17 + (longlong)(iVar16 + 1) * 8) == 0) {
          local_3a8 = (longlong *)
                      FUN_143bbaa60(param_1,local_3a8,
                                    ((uint)*(undefined8 *)(lVar17 + (longlong)iVar16 * 8) & 0xffffff
                                    ) + 1,param_4);
        }
        if (iVar14 == -1) {
          local_3a8[(longlong)(int)(uVar13 + 1) + 2] = *local_3a8;
        }
        else if (iVar14 == 0) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x1a:
        local_3a8[(longlong)(int)uVar13 + 2] = 0;
        iVar16 = (int)local_3a8[1];
        local_3a8[1] = local_3a8[1] + 3;
        uVar9 = *(undefined8 *)(lVar17 + (longlong)iVar16 * 8);
        iVar14 = *(int *)(lVar17 + (longlong)(iVar16 + 1) * 8);
        iVar16 = *(int *)(lVar17 + (longlong)(iVar16 + 2) * 8);
        if (iVar16 == -1) {
          local_3a8[(longlong)(int)(uVar13 + 1) + 2] = *local_3a8;
        }
        if (iVar14 == 0) {
          if (iVar16 != 0) {
            local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1],param_4);
          }
          local_3a8[1] = (longlong)(int)(((uint)uVar9 & 0xffffff) + 1);
        }
        break;
      case 0x1b:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_298 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_298 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_298 = local_298 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if (local_298 == 10) {
            local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x1c:
        uVar15 = *(uint *)(lVar17 + (longlong)(int)uVar13 * 8);
        puVar2 = (ulonglong *)(local_3a8 + (longlong)(int)(uVar15 & 0xffffff) + 2);
        iVar16 = *(int *)(lVar17 + (longlong)(int)(uVar13 + 2) * 8);
        uVar6 = *(uint *)(lVar17 + (longlong)(int)(uVar13 + 3) * 8);
        *puVar2 = *puVar2 + 1;
        if ((*puVar2 < (ulonglong)uVar6) || (uVar6 == 0xffffffff)) {
          if ((longlong)iVar16 <= (longlong)*puVar2) {
            if (uVar6 == 0xffffffff) {
              if (*local_3a8 == local_3a8[(longlong)(int)((uVar15 & 0xffffff) + 1) + 2]) break;
              local_3a8[(longlong)(int)((uVar15 & 0xffffff) + 1) + 2] = *local_3a8;
            }
            local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1],param_4);
          }
          local_3a8[1] = (longlong)(int)(uVar13 + 4);
        }
        break;
      case 0x1d:
        uVar15 = *(uint *)(lVar17 + (longlong)(int)uVar13 * 8);
        puVar2 = (ulonglong *)(local_3a8 + (longlong)(int)(uVar15 & 0xffffff) + 2);
        iVar16 = *(int *)(lVar17 + (longlong)(int)(uVar13 + 2) * 8);
        uVar6 = *(uint *)(lVar17 + (longlong)(int)(uVar13 + 3) * 8);
        *puVar2 = *puVar2 + 1;
        if ((*puVar2 < (ulonglong)uVar6) || (uVar6 == 0xffffffff)) {
          if ((longlong)*puVar2 < (longlong)iVar16) {
            local_3a8[1] = (longlong)(int)(uVar13 + 4);
          }
          else {
            if (uVar6 == 0xffffffff) {
              if (*local_3a8 == local_3a8[(longlong)(int)((uVar15 & 0xffffff) + 1) + 2]) break;
              local_3a8[(longlong)(int)((uVar15 & 0xffffff) + 1) + 2] = *local_3a8;
            }
            local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,uVar13 + 4,param_4);
          }
        }
        break;
      case 0x1e:
        if ((*(longlong *)(param_1 + 0x50) < *local_3a8) &&
           (*(short *)(lVar8 + -2 + *local_3a8 * 2) != 10)) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x20:
        iVar16 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar13 * 8) = (longlong)iVar16;
        break;
      case 0x21:
        iVar16 = *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar13 * 8);
        lVar19 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                 ::GetObjectForTimerManager(*(undefined8 *)(param_1 + 0xb0));
        plVar20 = (longlong *)
                  (lVar19 + (longlong)iVar16 * 8 + (longlong)*(int *)(param_1 + 0x38) * -8);
        if (plVar20 != local_3a8) {
          for (local_2ec = 0; local_2ec < *(int *)(param_1 + 0x38); local_2ec = local_2ec + 1) {
            plVar20[local_2ec] = local_3a8[local_2ec];
          }
          FUN_143e1d440(*(undefined8 *)(param_1 + 0xb0));
          local_3a8 = plVar20;
        }
        break;
      case 0x22:
        local_220 = local_3a8[(longlong)(int)uVar13 + 2];
        local_230 = *local_3a8;
        if (local_220 < 0) {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          bVar11 = true;
          for (; local_220 < local_3a8[(longlong)(int)(uVar13 + 1) + 2]; local_220 = local_220 + 1)
          {
            if (*(longlong *)(param_1 + 0x78) <= local_230) {
              bVar11 = false;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              break;
            }
            if (*(short *)(lVar8 + local_220 * 2) != *(short *)(lVar8 + local_230 * 2)) {
              bVar11 = false;
              break;
            }
            local_230 = local_230 + 1;
          }
          if (bVar11) {
            *local_3a8 = local_230;
          }
          else {
            local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        break;
      case 0x23:
        local_3a8[(longlong)(int)uVar13 + 2] = *local_3a8;
        break;
      case 0x24:
        lVar19 = local_3a8[1];
        local_3a8[1] = local_3a8[1] + 1;
        if ((longlong)
            (int)local_3a8[(longlong)
                           (int)((uint)*(undefined8 *)(lVar17 + (longlong)(int)lVar19 * 8) &
                                0xffffff) + 2] < *local_3a8) {
          local_3a8[1] = (longlong)(int)uVar13;
        }
        else {
          local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        }
        break;
      case 0x25:
        iVar16 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar13 * 8) = (longlong)iVar16;
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 1) * 8) = *local_3a8;
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
        break;
      case 0x26:
        iVar14 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        iVar16 = *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar13 * 8);
        if (iVar16 < iVar14) {
          lVar19 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                   ::GetObjectForTimerManager(*(undefined8 *)(param_1 + 0xb0));
          plVar20 = (longlong *)
                    (lVar19 + (longlong)iVar16 * 8 + (longlong)*(int *)(param_1 + 0x38) * -8);
          for (local_308 = 0; local_308 < *(int *)(param_1 + 0x38); local_308 = local_308 + 1) {
            plVar20[local_308] = local_3a8[local_308];
          }
          FUN_143e1d440(*(undefined8 *)(param_1 + 0xb0),iVar16);
          local_3a8 = plVar20;
        }
        *local_3a8 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 1) * 8);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x48);
        break;
      case 0x27:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_290 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_290 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_290 = local_290 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          uVar15 = FUN_143a9b5a0(local_290,0);
          if (uVar15 == uVar13) break;
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
        local_3a8 = (longlong *)FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0));
        break;
      case 0x28:
        lVar19 = lVar18 + (longlong)(int)uVar13 * 2;
        uVar15 = *(uint *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        uVar15 = uVar15 & 0xffffff;
        bVar11 = true;
        local_340 = 0;
        FUN_143c08c30(local_98,lVar8,*local_3a8,*(undefined8 *)(param_1 + 0x78));
        do {
          if ((int)uVar15 <= (int)local_340) goto LAB_143bb9a58;
          local_29c = (uint)*(ushort *)(lVar19 + (longlong)(int)local_340 * 2);
          uVar13 = local_340 + 1;
          if ((((local_29c & 0xfffffc00) == 0xd800) && (uVar13 != uVar15)) &&
             (uVar5 = *(ushort *)(lVar19 + (longlong)(int)uVar13 * 2), (uVar5 & 0xfc00) == 0xdc00))
          {
            local_29c = local_29c * 0x400 + -0x35fdc00 + (uint)uVar5;
            uVar13 = local_340 + 2;
          }
          local_340 = uVar13;
          uVar13 = FUN_143c08d70(local_98);
        } while (uVar13 == local_29c);
        bVar11 = false;
        if (uVar13 == 0xffffffff) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
LAB_143bb9a58:
        cVar12 = FUN_143c08d10(local_98);
        if (cVar12 != '\0') {
          bVar11 = false;
        }
        if (bVar11) {
          lVar19 = FUN_143ac0690(local_98);
          *local_3a8 = lVar19;
        }
        else {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        FUN_143b1b790(local_98);
        break;
      case 0x29:
        if (local_3a8[(longlong)(int)uVar13 + 2] < 0) {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        else {
          FUN_143c08c30(local_38,lVar8,local_3a8[(longlong)(int)uVar13 + 2],
                        local_3a8[(longlong)(int)(uVar13 + 1) + 2]);
          FUN_143c08c30(local_68,lVar8,*local_3a8,*(undefined8 *)(param_1 + 0x78));
          do {
            iVar16 = FUN_143c08d70(local_38);
            if (iVar16 == -1) {
              bVar11 = true;
              goto LAB_143bb9456;
            }
            iVar14 = FUN_143c08d70(local_68);
            if (iVar14 == -1) {
              bVar11 = false;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              goto LAB_143bb9456;
            }
          } while (iVar14 == iVar16);
          bVar11 = false;
LAB_143bb9456:
          if ((bVar11) && (cVar12 = FUN_143c08d10(local_68), cVar12 != '\0')) {
            bVar11 = false;
          }
          if (bVar11) {
            lVar19 = FUN_143ac0690(local_68);
            *local_3a8 = lVar19;
          }
          else {
            local_3a8 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
          FUN_143b1b790(local_68);
          FUN_143b1b790(local_38);
        }
        break;
      case 0x2a:
        if (*local_3a8 < *(longlong *)(param_1 + 0x58)) {
          uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2);
          if (((((uVar5 < 10) || (0xd < uVar5)) && (uVar5 != 0x85)) &&
              ((uVar5 != 0x2028 && (uVar5 != 0x2029)))) ||
             ((uVar5 == 10 &&
              ((*(longlong *)(param_1 + 0x50) < *local_3a8 &&
               (*(short *)(lVar8 + -2 + *local_3a8 * 2) == 0xd)))))) {
            local_3a8 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x2b:
        if ((*local_3a8 != *(longlong *)(param_1 + 0x50)) &&
           ((uVar5 = *(ushort *)(lVar8 + -2 + *local_3a8 * 2),
            *(longlong *)(param_1 + 0x58) <= *local_3a8 ||
            (((0xd < uVar5 || (uVar5 < 10)) &&
             ((uVar5 != 0x85 && ((uVar5 != 0x2028 && (uVar5 != 0x2029)))))))))) {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x2c:
        iVar16 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0xb0));
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar13 * 8) = (longlong)iVar16;
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 1) * 8) = *local_3a8;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 2) * 8) =
             0xffffffffffffffff;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 3) * 8) =
             *(undefined8 *)(param_1 + 0x78);
        *(longlong *)(param_1 + 0x78) = *local_3a8;
        break;
      case 0x2d:
        iVar16 = *(int *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        iVar14 = *(int *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        plVar20 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 2) * 8);
        if (*plVar20 < 0) {
          *plVar20 = *local_3a8 - (longlong)iVar16;
        }
        else if (*plVar20 == 0) {
          *plVar20 = *plVar20 + -1;
        }
        else {
          *plVar20 = *plVar20 + -1;
          if ((((*(ushort *)(lVar8 + *plVar20 * 2) & 0xfc00) == 0xdc00) && (0 < *plVar20)) &&
             ((*(ushort *)(lVar8 + -2 + *plVar20 * 2) & 0xfc00) == 0xd800)) {
            *plVar20 = *plVar20 + -1;
          }
        }
        if ((*plVar20 < 0) || (*plVar20 < *local_3a8 - (longlong)iVar14)) {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 3) * 8);
        }
        else {
          local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1] + -3,param_4);
          *local_3a8 = *plVar20;
        }
        break;
      case 0x2e:
        if (*local_3a8 == *(longlong *)(param_1 + 0x78)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 3) * 8);
        }
        else {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x2f:
        iVar16 = *(int *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        iVar14 = *(int *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        uVar15 = *(uint *)(lVar17 + local_3a8[1] * 8);
        local_3a8[1] = local_3a8[1] + 1;
        plVar20 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 2) * 8);
        if (*plVar20 < 0) {
          *plVar20 = *local_3a8 - (longlong)iVar16;
        }
        else if (*plVar20 == 0) {
          *plVar20 = *plVar20 + -1;
        }
        else {
          *plVar20 = *plVar20 + -1;
          if ((((*(ushort *)(lVar8 + *plVar20 * 2) & 0xfc00) == 0xdc00) && (0 < *plVar20)) &&
             ((*(ushort *)(lVar8 + -2 + *plVar20 * 2) & 0xfc00) == 0xd800)) {
            *plVar20 = *plVar20 + -1;
          }
        }
        if ((*plVar20 < 0) || (*plVar20 < *local_3a8 - (longlong)iVar14)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 3) * 8);
          local_3a8[1] = (longlong)(int)(uVar15 & 0xffffff);
        }
        else {
          local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1] + -4,param_4);
          *local_3a8 = *plVar20;
        }
        break;
      case 0x30:
        if (*local_3a8 == *(longlong *)(param_1 + 0x78)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)(uVar13 + 3) * 8);
          FUN_143e1d440(*(undefined8 *)(param_1 + 0xb0),
                        *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar13 * 8));
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        else {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x31:
        if (*local_3a8 < *(longlong *)(param_1 + 0x78)) {
          local_310 = (uint)*(ushort *)(lVar8 + *local_3a8 * 2);
          *local_3a8 = *local_3a8 + 1;
          if ((((local_310 & 0xfffffc00) == 0xd800) && (*local_3a8 != *(longlong *)(param_1 + 0x78))
              ) && (uVar5 = *(ushort *)(lVar8 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
            *local_3a8 = *local_3a8 + 1;
            local_310 = local_310 * 0x400 + -0x35fdc00 + (uint)uVar5;
          }
          if ((int)local_310 < 0x100) {
            cVar12 = FUN_143bbc310((longlong)(int)uVar13 * 0x20 +
                                   *(longlong *)(*(longlong *)(param_1 + 8) + 0x88),local_310);
          }
          else {
            plVar20 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + (longlong)(int)uVar13 * 8
                       );
            cVar12 = (**(code **)(*plVar20 + 0x30))(plVar20,local_310);
          }
          if (cVar12 != '\0') {
            local_3a8 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x32:
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
        plVar20 = (longlong *)FUN_143b09610(uVar7,uVar13);
        local_38c = (int)*local_3a8;
        do {
          while( true ) {
            if (*(longlong *)(param_1 + 0x78) <= (longlong)local_38c) {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              iVar16 = local_38c;
              goto LAB_143bba36e;
            }
            local_314 = (uint)*(ushort *)(lVar8 + (longlong)local_38c * 2);
            iVar16 = local_38c + 1;
            if ((((local_314 & 0xfffffc00) == 0xd800) &&
                ((longlong)iVar16 != *(longlong *)(param_1 + 0x78))) &&
               (uVar5 = *(ushort *)(lVar8 + (longlong)iVar16 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
              local_314 = local_314 * 0x400 + -0x35fdc00 + (uint)uVar5;
              iVar16 = local_38c + 2;
            }
            local_38c = iVar16;
            if (0xff < (int)local_314) break;
            cVar12 = FUN_143bbc310((longlong)(int)uVar13 * 0x20 + lVar19,local_314);
            if (cVar12 == '\0') {
              iVar16 = local_38c + -1;
              if ((((*(ushort *)(lVar8 + (longlong)iVar16 * 2) & 0xfc00) == 0xdc00) && (0 < iVar16))
                 && ((*(ushort *)(lVar8 + (longlong)(local_38c + -2) * 2) & 0xfc00) == 0xd800)) {
                iVar16 = local_38c + -2;
              }
              goto LAB_143bba36e;
            }
          }
          cVar12 = (**(code **)(*plVar20 + 0x30))(plVar20,local_314);
        } while (cVar12 != '\0');
        iVar16 = local_38c + -1;
        if ((((*(ushort *)(lVar8 + (longlong)iVar16 * 2) & 0xfc00) == 0xdc00) && (0 < iVar16)) &&
           ((*(ushort *)(lVar8 + (longlong)(local_38c + -2) * 2) & 0xfc00) == 0xd800)) {
          iVar16 = local_38c + -2;
        }
LAB_143bba36e:
        local_38c = iVar16;
        if ((longlong)local_38c == *local_3a8) {
          local_3a8[1] = local_3a8[1] + 1;
        }
        else {
          local_3a8[(longlong)(int)(*(uint *)(lVar17 + local_3a8[1] * 8) & 0xffffff) + 2] =
               *local_3a8;
          *local_3a8 = (longlong)local_38c;
          local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1],param_4);
          local_3a8[1] = local_3a8[1] + 1;
        }
        break;
      case 0x33:
        lVar19 = local_3a8[(longlong)(int)uVar13 + 2];
        if ((longlong)(int)lVar19 != *local_3a8) {
          lVar10 = *local_3a8;
          *local_3a8 = lVar10 + -1;
          local_2a4 = (uint)*(ushort *)(lVar8 + (lVar10 + -1) * 2);
          if ((((local_2a4 & 0xfffffc00) == 0xdc00) && (0 < *local_3a8)) &&
             (uVar5 = *(ushort *)(lVar8 + -2 + *local_3a8 * 2), (uVar5 & 0xfc00) == 0xd800)) {
            *local_3a8 = *local_3a8 + -1;
            local_2a4 = (uint)uVar5 * 0x400 + -0x35fdc00 + local_2a4;
          }
          if (((((local_2a4 == 10) && ((longlong)(int)lVar19 < *local_3a8)) &&
               ((*(short *)(lVar8 + -2 + *local_3a8 * 2) == 0xd &&
                ((*(uint *)(lVar17 + -0x10 + local_3a8[1] * 8) >> 0x18 == 0x34 &&
                 (lVar19 = *local_3a8, *local_3a8 = lVar19 + -1,
                 (*(ushort *)(lVar8 + (lVar19 + -1) * 2) & 0xfc00) == 0xdc00)))))) &&
              (0 < *local_3a8)) && ((*(ushort *)(lVar8 + -2 + *local_3a8 * 2) & 0xfc00) == 0xd800))
          {
            *local_3a8 = *local_3a8 + -1;
          }
          local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1] + -1,param_4);
        }
        break;
      case 0x34:
        if ((uVar15 & 1) == 1) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          iVar16 = *(int *)(param_1 + 0x78);
        }
        else {
          local_384 = (int)*local_3a8;
          do {
            if (*(longlong *)(param_1 + 0x78) <= (longlong)local_384) {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              iVar16 = local_384;
              goto LAB_143bba5c4;
            }
            local_34c = (uint)*(ushort *)(lVar8 + (longlong)local_384 * 2);
            iVar16 = local_384 + 1;
            if ((((local_34c & 0xfffffc00) == 0xd800) &&
                ((longlong)iVar16 != *(longlong *)(param_1 + 0x78))) &&
               (uVar5 = *(ushort *)(lVar8 + (longlong)iVar16 * 2), (uVar5 & 0xfc00) == 0xdc00)) {
              local_34c = local_34c * 0x400 + -0x35fdc00 + (uint)uVar5;
              iVar16 = local_384 + 2;
            }
            local_384 = iVar16;
          } while ((0x29 < (local_34c & 0x7f)) ||
                  ((local_34c != 10 &&
                   (((uVar15 & 2) != 0 ||
                    (((0xd < (int)local_34c || ((int)local_34c < 10)) &&
                     ((local_34c != 0x85 && ((local_34c != 0x2028 && (local_34c != 0x2029)))))))))))
                  );
          iVar16 = local_384 + -1;
          if (((*(ushort *)(lVar8 + (longlong)iVar16 * 2) & 0xfc00) == 0xdc00) &&
             ((0 < iVar16 &&
              ((*(ushort *)(lVar8 + (longlong)(local_384 + -2) * 2) & 0xfc00) == 0xd800)))) {
            iVar16 = local_384 + -2;
          }
        }
LAB_143bba5c4:
        local_384 = iVar16;
        if ((longlong)local_384 == *local_3a8) {
          local_3a8[1] = local_3a8[1] + 1;
        }
        else {
          local_3a8[(longlong)(int)(*(uint *)(lVar17 + local_3a8[1] * 8) & 0xffffff) + 2] =
               *local_3a8;
          *local_3a8 = (longlong)local_384;
          local_3a8 = (longlong *)FUN_143bbaa60(param_1,local_3a8,local_3a8[1],param_4);
          local_3a8[1] = local_3a8[1] + 1;
        }
        break;
      case 0x35:
        cVar12 = FUN_143bc01f0(param_1,*local_3a8);
        if ((bool)cVar12 == (uVar13 != 0)) {
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        break;
      case 0x36:
        if (*local_3a8 < *(longlong *)(param_1 + 0x58) + -1) {
LAB_143bb6fdd:
          local_3a8 = (longlong *)
                      FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38))
          ;
        }
        else if (*local_3a8 == *(longlong *)(param_1 + 0x58) + -1) {
          if (*(short *)(lVar8 + *local_3a8 * 2) != 10) goto LAB_143bb6fdd;
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
        break;
      case 0x37:
        if (*local_3a8 < *(longlong *)(param_1 + 0x58)) {
          if (*(short *)(lVar8 + *local_3a8 * 2) != 10) {
            local_3a8 = (longlong *)
                        FUN_143bc0c40(*(undefined8 *)(param_1 + 0xb0),
                                      *(undefined4 *)(param_1 + 0x38));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          *(undefined1 *)(param_1 + 0xa9) = 1;
        }
      }
      cVar12 = FUN_143a8b0e0(*param_4);
    } while (cVar12 == '\0');
    local_387 = '\0';
LAB_143bba89a:
    *(char *)(param_1 + 0x82) = local_387;
    if (local_387 != '\0') {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
      *(longlong *)(param_1 + 0x88) = (longlong)param_2;
      *(longlong *)(param_1 + 0x90) = *local_3a8;
    }
    *(longlong **)(param_1 + 0xb8) = local_3a8;
  }
  return;
}



// FUNCTION 143bbaa00 FUN_143bbaa00 body=91 status=ok
// SIG undefined FUN_143bbaa00(void)

undefined8 FUN_143bbaa00(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x128) != 0) &&
     (cVar1 = (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),param_2),
     cVar1 == '\0')) {
    *param_3 = 0;
    return 0;
  }
  return 1;
}



// FUNCTION 143bbaa60 FUN_143bbaa60 body=274 status=ok
// SIG undefined FUN_143bbaa60(void)

undefined8 *
FUN_143bbaa60(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *local_20;
  undefined8 *local_18;
  
  puVar2 = (undefined8 *)
           FUN_143bc1c90(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38),param_4);
  if (puVar2 == (undefined8 *)0x0) {
    *param_4 = 0x10311;
    puVar2 = param_2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38);
    local_20 = puVar2 + -(longlong)iVar1;
    local_18 = puVar2;
    do {
      *local_18 = *local_20;
      local_18 = local_18 + 1;
      local_20 = local_20 + 1;
    } while (local_20 != puVar2);
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -1;
    if (*(int *)(param_1 + 0x110) < 1) {
      FUN_143bafbc0(param_1,param_4);
    }
    (puVar2 + -(longlong)iVar1)[1] = param_3;
  }
  return puVar2;
}



// FUNCTION 143bbab80 FUN_143bbab80 body=1001 status=ok
// SIG undefined FUN_143bbab80(void)

longlong FUN_143bbab80(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      local_38 = FUN_143b07900(param_3);
      if (*(char *)(param_1 + 0x82) == '\0') {
        *param_4 = 0x10302;
        iVar2 = FUN_143b082f0(param_3,local_38,local_38,0,0,param_4);
        local_18 = (longlong)iVar2;
      }
      else if ((param_2 < 0) ||
              (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                       ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70)),
              iVar2 < param_2)) {
        *param_4 = 8;
        iVar2 = FUN_143b082f0(param_3,local_38,local_38,0,0,param_4);
        local_18 = (longlong)iVar2;
      }
      else {
        if (param_2 == 0) {
          local_30 = *(longlong *)(param_1 + 0x88);
          local_28 = *(undefined8 *)(param_1 + 0x90);
        }
        else {
          iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),param_2 + -1);
          local_30 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)iVar2 * 8);
          local_28 = *(undefined8 *)
                      (*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)(iVar2 + 1) * 8);
        }
        if (local_30 < 0) {
          iVar2 = FUN_143b082f0(param_3,local_38,local_38,0,0,param_4);
          local_18 = (longlong)iVar2;
        }
        else if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) &&
                 (*(longlong *)(param_1 + 0x30) ==
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10))) &&
                (*(longlong *)(param_1 + 0x30) ==
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c))) {
          iVar2 = FUN_143b082f0(param_3,local_38,local_38,
                                *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) + local_30 * 2,
                                (int)local_28 - (int)local_30,param_4);
          local_18 = (longlong)iVar2;
        }
        else {
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
            local_48 = (int)local_28 - (int)local_30;
          }
          else {
            local_40[0] = 0;
            local_48 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),local_30,local_28,0,0,local_40)
            ;
          }
          local_20 = FUN_143aa7a40((longlong)(local_48 + 1) << 1);
          if (local_20 == 0) {
            *param_4 = 7;
            local_18 = 0;
          }
          else {
            FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),local_30,local_28,local_20,local_48 + 1,
                          param_4);
            iVar2 = FUN_143b082f0(param_3,local_38,local_38,local_20,local_48,param_4);
            local_18 = (longlong)iVar2;
            FUN_143aa79f0(local_20);
          }
        }
      }
    }
    else {
      *param_4 = *(undefined4 *)(param_1 + 0x13c);
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143bbaf70 FUN_143bbaf70 body=719 status=ok
// SIG undefined FUN_143bbaf70(void)

longlong *
FUN_143bbaf70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_98 = 0x345ad82c;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x90;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_143b07bf0(&local_98,param_3,param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    local_128 = 0x345ad82c;
    local_124 = 0;
    local_120 = 0;
    local_11c = 0x90;
    local_118 = 0;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0;
    FUN_143b07fe0(&local_128,param_2,param_4);
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x178))(param_1,&local_128,&local_98,param_4);
      FUN_143b07390(&local_128);
    }
    FUN_143b07390(&local_98);
  }
  return param_1;
}



// FUNCTION 143bbb240 FUN_143bbb240 body=3153 status=ok
// SIG undefined FUN_143bbb240(void)

longlong FUN_143bbb240(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_98;
  uint local_90;
  ushort local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined2 local_7c [2];
  uint local_78;
  ushort local_74 [2];
  int local_70;
  ushort local_6c [2];
  ushort local_68 [2];
  short local_64;
  ushort uStack_62;
  short local_60;
  ushort uStack_5e;
  uint local_5c;
  int local_58;
  uint local_54;
  short local_50;
  ushort uStack_4e;
  uint local_4c;
  uint local_48;
  longlong local_40;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  longlong local_28;
  uint local_20;
  longlong local_18;
  int local_10;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x82) == '\0') {
        *param_4 = 0x10302;
      }
      else {
        local_98 = FUN_143b07900(param_2);
        if (*(longlong *)(param_1 + 0xa0) < *(longlong *)(param_1 + 0x88)) {
          if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) &&
              (*(longlong *)(param_1 + 0x30) == *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10))
              ) && (*(longlong *)(param_1 + 0x30) ==
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c))) {
            iVar2 = FUN_143b082f0(param_2,local_98,local_98,
                                  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                  *(longlong *)(param_1 + 0xa0) * 2,
                                  (int)*(undefined8 *)(param_1 + 0x88) -
                                  (int)*(undefined8 *)(param_1 + 0xa0),param_4);
            local_98 = local_98 + iVar2;
          }
          else {
            if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
              local_80 = (int)*(undefined8 *)(param_1 + 0x88) - (int)*(undefined8 *)(param_1 + 0xa0)
              ;
            }
            else {
              local_34 = 0;
              local_80 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),
                                       *(undefined8 *)(param_1 + 0xa0),
                                       *(undefined8 *)(param_1 + 0x88),0,0,&local_34);
            }
            local_40 = FUN_143aa7a40((longlong)(local_80 + 1) << 1);
            if (local_40 == 0) {
              *param_4 = 7;
              return param_1;
            }
            FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xa0),
                          *(undefined8 *)(param_1 + 0x88),local_40,local_80 + 1,param_4);
            iVar2 = FUN_143b082f0(param_2,local_98,local_98,local_40,local_80,param_4);
            local_98 = local_98 + iVar2;
            FUN_143aa79f0(local_40);
          }
        }
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
        local_28 = -*(longlong *)(param_3 + 0x20);
        if ((local_28 < 0) || (*(int *)(param_3 + 0x1c) < local_28)) {
          FUN_143b08380(param_3,0);
        }
        else {
          *(undefined4 *)(param_3 + 0x28) = (undefined4)local_28;
        }
        if ((*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x2c)) &&
           (*(ushort *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2) <
            0xd800)) {
          local_48 = (uint)*(ushort *)
                            (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2)
          ;
          *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
        }
        else {
          local_48 = FUN_143b07920(param_3);
        }
        local_90 = local_48;
        while (local_90 != 0xffffffff) {
          if (local_90 == 0x5c) {
            if ((*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x2c)) &&
               (*(ushort *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2)
                < 0xd800)) {
              local_4c = (uint)*(ushort *)
                                (*(longlong *)(param_3 + 0x30) +
                                (longlong)*(int *)(param_3 + 0x28) * 2);
            }
            else {
              local_4c = FUN_143b07490(param_3);
            }
            uVar3 = local_4c;
            if (local_4c == 0xffffffff) {
              return param_1;
            }
            if ((local_4c == 0x55) || (local_4c == 0x75)) {
              local_88 = 0;
              local_10 = -1;
              local_18 = param_3;
              uVar3 = FUN_143ab4b10(FUN_143c091e0,&local_88,0x7fffffff,&local_18);
              if (uVar3 != 0xffffffff) {
                local_8c = (ushort)uVar3;
                if (uVar3 < 0x10000) {
                  local_68[0] = local_8c;
                  iVar2 = FUN_143b082f0(param_2,local_98,local_98,local_68,1,param_4);
                  local_98 = local_98 + iVar2;
                }
                else {
                  local_64 = (short)((int)uVar3 >> 10) + -0x2840;
                  uStack_62 = local_8c & 0x3ff | 0xdc00;
                  cVar1 = FUN_143a8b110(*param_4);
                  if (cVar1 != '\0') {
                    iVar2 = FUN_143b082f0(param_2,local_98,local_98,&local_64,2,param_4);
                    local_98 = local_98 + iVar2;
                  }
                }
                if (local_10 == local_88) {
                  if ((*(int *)(param_3 + 0x28) < 1) ||
                     (0xd7ff < *(ushort *)
                                (*(longlong *)(param_3 + 0x30) +
                                (longlong)(*(int *)(param_3 + 0x28) + -1) * 2))) {
                    local_38 = FUN_143b08190(param_3);
                  }
                  else {
                    local_58 = *(int *)(param_3 + 0x28) + -1;
                    *(int *)(param_3 + 0x28) = local_58;
                    local_38 = (uint)*(ushort *)
                                      (*(longlong *)(param_3 + 0x30) + (longlong)local_58 * 2);
                  }
                }
                else if (local_10 != local_88 + -1) {
                  FUN_143b07790(param_3,(local_88 - local_10) + -1);
                }
              }
            }
            else {
              if ((*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x2c)) &&
                 (*(ushort *)
                   (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2) < 0xd800
                 )) {
                local_30 = (uint)*(ushort *)
                                  (*(longlong *)(param_3 + 0x30) +
                                  (longlong)*(int *)(param_3 + 0x28) * 2);
                *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
              }
              else {
                local_30 = FUN_143b07920(param_3);
              }
              local_90._0_2_ = (ushort)uVar3;
              if (uVar3 < 0x10000) {
                local_74[0] = (ushort)local_90;
                iVar2 = FUN_143b082f0(param_2,local_98,local_98,local_74,1,param_4);
                local_98 = local_98 + iVar2;
              }
              else {
                local_50 = (short)((int)uVar3 >> 10) + -0x2840;
                uStack_4e = (ushort)local_90 & 0x3ff | 0xdc00;
                cVar1 = FUN_143a8b110(*param_4);
                if (cVar1 != '\0') {
                  iVar2 = FUN_143b082f0(param_2,local_98,local_98,&local_50,2,param_4);
                  local_98 = local_98 + iVar2;
                }
              }
            }
          }
          else if (local_90 == 0x24) {
            local_84 = 0;
            local_70 = 0;
            do {
              if ((*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x2c)) &&
                 (*(ushort *)
                   (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2) < 0xd800
                 )) {
                local_5c = (uint)*(ushort *)
                                  (*(longlong *)(param_3 + 0x30) +
                                  (longlong)*(int *)(param_3 + 0x28) * 2);
              }
              else {
                local_5c = FUN_143b07490(param_3);
              }
              local_78 = local_5c;
              if ((local_5c == 0xffffffff) || (cVar1 = FUN_143a9e680(local_5c), cVar1 == '\0'))
              break;
              if ((*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x2c)) &&
                 (*(ushort *)
                   (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2) < 0xd800
                 )) {
                local_20 = (uint)*(ushort *)
                                  (*(longlong *)(param_3 + 0x30) +
                                  (longlong)*(int *)(param_3 + 0x28) * 2);
                *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
              }
              else {
                local_20 = FUN_143b07920(param_3);
              }
              local_2c = local_70 * 10;
              local_70 = FUN_143a9da10(local_78);
              local_70 = local_2c + local_70;
              local_84 = local_84 + 1;
            } while (local_84 < *(int *)(*(longlong *)(param_1 + 8) + 0x78));
            if (local_84 == 0) {
              local_7c[0] = 0x24;
              iVar2 = FUN_143b082f0(param_2,local_98,local_98,local_7c,1,param_4);
              local_98 = local_98 + iVar2;
            }
            else {
              lVar4 = FUN_143bbab80(param_1,local_70,param_2,param_4);
              local_98 = local_98 + lVar4;
              cVar1 = FUN_143a8b0e0(*param_4);
              if (cVar1 != '\0') {
                return param_1;
              }
            }
          }
          else if (local_90 < 0x10000) {
            local_6c[0] = (ushort)local_90;
            iVar2 = FUN_143b082f0(param_2,local_98,local_98,local_6c,1,param_4);
            local_98 = local_98 + iVar2;
          }
          else {
            local_60 = (short)((int)local_90 >> 10) + -0x2840;
            uStack_5e = (ushort)local_90 & 0x3ff | 0xdc00;
            cVar1 = FUN_143a8b110(*param_4);
            if (cVar1 != '\0') {
              iVar2 = FUN_143b082f0(param_2,local_98,local_98,&local_60,2,param_4);
              local_98 = local_98 + iVar2;
            }
          }
          cVar1 = FUN_143a8b0e0(*param_4);
          if (cVar1 != '\0') {
            return param_1;
          }
          if ((*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x2c)) &&
             (*(ushort *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x28) * 2) <
              0xd800)) {
            local_54 = (uint)*(ushort *)
                              (*(longlong *)(param_3 + 0x30) +
                              (longlong)*(int *)(param_3 + 0x28) * 2);
            *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
          }
          else {
            local_54 = FUN_143b07920(param_3);
          }
          local_90 = local_54;
        }
      }
    }
    else {
      *param_4 = *(undefined4 *)(param_1 + 0x13c);
    }
  }
  return param_1;
}



// FUNCTION 143bbbea0 FUN_143bbbea0 body=359 status=ok
// SIG undefined FUN_143bbbea0(void)

undefined8 FUN_143bbbea0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_a8 [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_a8[0] = 0;
  local_98 = 0x345ad82c;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x90;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_143b07fe0(&local_98,param_2,local_a8);
  cVar1 = FUN_143a8b110(local_a8[0]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x188))(param_1,&local_98,local_a8);
    FUN_143b07390(&local_98);
  }
  return param_2;
}



// FUNCTION 143bbc010 FUN_143bbc010 body=611 status=ok
// SIG undefined FUN_143bbc010(void)

undefined8 FUN_143bbc010(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0xa0) < *(longlong *)(param_1 + 0x30)) {
        if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) &&
            (*(longlong *)(param_1 + 0x30) == *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10)))
           && (*(longlong *)(param_1 + 0x30) ==
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c))) {
          uVar2 = FUN_143b07900(param_2);
          FUN_143b082f0(param_2,uVar2,uVar2,
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        *(longlong *)(param_1 + 0xa0) * 2,
                        (int)*(undefined8 *)(param_1 + 0x30) - (int)*(undefined8 *)(param_1 + 0xa0),
                        param_3);
        }
        else {
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
            local_28 = (int)*(undefined8 *)(param_1 + 0x30) - (int)*(undefined8 *)(param_1 + 0xa0);
          }
          else {
            local_28 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xa0)
                                     ,*(undefined8 *)(param_1 + 0x30),0,0,param_3);
            *param_3 = 0;
          }
          lVar3 = FUN_143aa7a40((longlong)local_28 << 1);
          if (lVar3 == 0) {
            *(undefined4 *)(param_1 + 0x13c) = 7;
          }
          else {
            FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xa0),
                          *(undefined8 *)(param_1 + 0x30),lVar3,local_28,param_3);
            uVar2 = FUN_143b07900(param_2);
            FUN_143b082f0(param_2,uVar2,uVar2,lVar3,local_28,param_3);
            FUN_143aa79f0(lVar3);
          }
        }
      }
    }
    else {
      *param_3 = *(undefined4 *)(param_1 + 0x13c);
    }
  }
  return param_2;
}



// FUNCTION 143bbc280 FUN_143bbc280 body=138 status=ok
// SIG undefined FUN_143bbc280(void)

bool FUN_143bbc280(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = FUN_143b07900(param_1);
  bVar4 = lVar2 != *(int *)(param_1 + 0x1c);
  if (bVar4) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    iVar1 = FUN_143a904f0(uVar3);
    uVar3 = FUN_143a8fe10(uVar3);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(int *)(param_1 + 0x2c) = iVar1;
    *(longlong *)(param_1 + 0x10) = (longlong)iVar1;
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  return bVar4;
}



// FUNCTION 143bbc310 FUN_143bbc310 body=72 status=ok
// SIG undefined FUN_143bbc310(void)

bool FUN_143bbc310(longlong param_1,int param_2)

{
  return ((int)*(char *)(param_1 + (param_2 >> 3)) & 1 << ((byte)param_2 & 7)) != 0;
}



// FUNCTION 143bbc360 FUN_143bbc360 body=45 status=ok
// SIG undefined FUN_143bbc360(void)

void FUN_143bbc360(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xa0))(param_1,0,param_2);
  return;
}



// FUNCTION 143bbc390 FUN_143bbc390 body=245 status=ok
// SIG undefined FUN_143bbc390(void)

undefined8 FUN_143bbc390(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x82) == '\0') {
      *param_3 = 0x10302;
      uVar3 = 0xffffffffffffffff;
    }
    else if ((param_2 < 0) ||
            (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                     ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70)), iVar2 < param_2
            )) {
      *param_3 = 8;
      uVar3 = 0xffffffffffffffff;
    }
    else if (param_2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x90);
    }
    else {
      iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),param_2 + -1);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)(iVar2 + 1) * 8);
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



// FUNCTION 143bbc490 FUN_143bbc490 body=45 status=ok
// SIG undefined FUN_143bbc490(void)

void FUN_143bbc490(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x90))(param_1,0,param_2);
  return;
}



// FUNCTION 143bbc4c0 FUN_143bbc4c0 body=51 status=ok
// SIG undefined FUN_143bbc4c0(void)

void FUN_143bbc4c0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 143bbc500 FUN_143bbc500 body=6270 status=ok
// SIG undefined FUN_143bbc500(void)

ulonglong FUN_143bbc500(ulonglong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong local_108;
  uint local_100;
  longlong local_f8;
  uint local_ec;
  uint local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
  if (cVar3 == '\0') {
    if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) &&
        (*(longlong *)(param_1 + 0x30) == *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10))) &&
       (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c)))
    {
      param_1 = FUN_143bbde90(param_1);
    }
    else {
      local_108 = *(longlong *)(param_1 + 0x90);
      if (local_108 == 0) {
        local_108 = *(longlong *)(param_1 + 0x70);
      }
      if (*(char *)(param_1 + 0x82) == '\0') {
        if (-1 < *(longlong *)(param_1 + 0x98)) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          return param_1 & 0xffffffffffffff00;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0x88) == *(longlong *)(param_1 + 0x90)) {
          if (*(longlong *)(param_1 + 0x78) <= local_108) {
            *(undefined1 *)(param_1 + 0x82) = 0;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            return param_1 & 0xffffffffffffff00;
          }
          lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
          }
          else {
            local_a0 = (undefined4)lVar5;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_a0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_48 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_48 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          local_108 = local_48;
        }
      }
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
        local_f8 = *(longlong *)(param_1 + 0x78) -
                   (longlong)*(int *)(*(longlong *)(param_1 + 8) + 100);
        if (local_f8 < local_108) {
          *(undefined1 *)(param_1 + 0x82) = 0;
          *(undefined1 *)(param_1 + 0xa8) = 1;
          return param_1 & 0xffffffffffffff00;
        }
      }
      else {
        local_f8 = *(longlong *)(param_1 + 0x78);
      }
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90);
      switch(uVar1) {
      case 0:
        do {
          FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
          cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
          if (cVar3 != '\0') {
            return (ulonglong)(uint3)(cVar3 >> 7) << 8;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
          }
          if (local_f8 <= local_108) {
            *(undefined1 *)(param_1 + 0xa8) = 1;
            return param_1 & 0xffffffffffffff00;
          }
          lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
          }
          else {
            local_c8 = (undefined4)lVar5;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_c8;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_38 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_38 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          local_108 = local_38;
        } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                (cVar3 = FUN_143bbaa00(param_1,local_38), cVar3 != '\0'));
        param_1 = 0;
        break;
      case 1:
      case 5:
        uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0xa8);
        lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
          FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
        }
        else {
          local_50 = (undefined4)lVar5;
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_50;
        }
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_d0 = (uint)*(ushort *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_d0 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_28 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          if (local_d0 == uVar2) {
            FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
            cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
            if (cVar3 != '\0') {
              return (ulonglong)(uint3)(cVar3 >> 7) << 8;
            }
            if (*(char *)(param_1 + 0x82) != '\0') {
              return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
            }
            lVar5 = local_28 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
              FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_28);
            }
            else {
              local_70 = (undefined4)lVar5;
              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_70;
            }
          }
          if (local_f8 <= local_108) {
            *(undefined1 *)(param_1 + 0x82) = 0;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            return param_1 & 0xffffffffffffff00;
          }
          local_108 = local_28;
        } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                (cVar3 = FUN_143bbaa00(param_1,local_28), cVar3 != '\0'));
        param_1 = 0;
        break;
      case 2:
        lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
          FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
        }
        else {
          local_90 = (undefined4)lVar5;
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_90;
        }
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_d8 = (uint)*(ushort *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_d8 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_18 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          if ((-1 < (int)local_d8) &&
             ((((int)local_d8 < 0x100 &&
               (cVar3 = FUN_143bbc310(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_d8),
               cVar3 != '\0')) ||
              ((0xff < (int)local_d8 &&
               (cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xa0) + 0x30))
                                  (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),local_d8),
               cVar3 != '\0')))))) {
            FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
            cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
            if (cVar3 != '\0') {
              return (ulonglong)(uint3)(cVar3 >> 7) << 8;
            }
            if (*(char *)(param_1 + 0x82) != '\0') {
              return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
            }
            lVar5 = local_18 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
              FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_18);
            }
            else {
              local_60 = (undefined4)lVar5;
              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_60;
            }
          }
          if (local_f8 <= local_108) {
            *(undefined1 *)(param_1 + 0x82) = 0;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            return param_1 & 0xffffffffffffff00;
          }
          local_108 = local_18;
        } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                (cVar3 = FUN_143bbaa00(param_1,local_18), cVar3 != '\0'));
        param_1 = 0;
        break;
      case 3:
        if (*(longlong *)(param_1 + 0x70) < local_108) {
          *(undefined1 *)(param_1 + 0x82) = 0;
          param_1 = param_1 & 0xffffffffffffff00;
        }
        else {
          FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
          cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
          if (cVar3 == '\0') {
            param_1 = (ulonglong)*(byte *)(param_1 + 0x82);
          }
          else {
            param_1 = (ulonglong)(uint3)(cVar3 >> 7) << 8;
          }
        }
        break;
      case 4:
        if (local_108 == *(longlong *)(param_1 + 0x50)) {
          FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
          cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
          if (cVar3 != '\0') {
            return (ulonglong)(uint3)(cVar3 >> 7) << 8;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
          }
          lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
          }
          else {
            local_c0 = (undefined4)lVar5;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_c0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
            local_dc = (uint)*(ushort *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
          }
          else {
            local_dc = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
          }
          local_100 = local_dc;
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
            local_40 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x20));
          }
          else {
            local_40 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          }
          local_108 = local_40;
        }
        else {
          lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
          }
          else {
            local_b8 = (undefined4)lVar5;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_b8;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
            local_d4 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
          }
          else {
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
            *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar4;
            local_d4 = (uint)*(ushort *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                              (longlong)iVar4 * 2);
          }
          local_100 = local_d4;
          lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
          if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
          }
          else {
            local_a8 = (undefined4)lVar5;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_a8;
          }
        }
        if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x18) & 1) == 0) {
          do {
            if (((local_100 & 0x7f) < 0x2a) &&
               (((((int)local_100 < 0xe && (9 < (int)local_100)) || (local_100 == 0x85)) ||
                ((local_100 == 0x2028 || (local_100 == 0x2029)))))) {
              if ((local_100 == 0xd) && (local_108 < *(longlong *)(param_1 + 0x78))) {
                if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                   (*(ushort *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                  local_e8 = (uint)*(ushort *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                    (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
                }
                else {
                  local_e8 = FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
                }
                if (local_e8 == 10) {
                  if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                       *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
                     (*(ushort *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
                    *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                         *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
                  }
                  else {
                    FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
                  }
                  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                      *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
                    local_20 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) +
                                           0x40))(*(undefined8 *)(param_1 + 0x20));
                  }
                  else {
                    local_20 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                               *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
                  }
                  local_108 = local_20;
                }
              }
              FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
              cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
              if (cVar3 != '\0') {
                return (ulonglong)(uint3)(cVar3 >> 7) << 8;
              }
              if (*(char *)(param_1 + 0x82) != '\0') {
                return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
              }
              lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
                FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
              }
              else {
                local_88 = (undefined4)lVar5;
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_88;
              }
            }
            if (local_f8 <= local_108) {
              *(undefined1 *)(param_1 + 0x82) = 0;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              return param_1 & 0xffffffffffffff00;
            }
            if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
               (*(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
              local_e0 = (uint)*(ushort *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
            }
            else {
              local_e0 = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
            }
            local_100 = local_e0;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_10 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                   (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            local_108 = local_10;
          } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                  (cVar3 = FUN_143bbaa00(param_1,local_10), cVar3 != '\0'));
          param_1 = 0;
        }
        else {
          do {
            if (local_100 == 10) {
              FUN_143bafc70(param_1,local_108,0,param_1 + 0x13c);
              cVar3 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
              if (cVar3 != '\0') {
                return (ulonglong)(uint3)(cVar3 >> 7) << 8;
              }
              if (*(char *)(param_1 + 0x82) != '\0') {
                return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
              }
              lVar5 = local_108 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
              if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar5)) {
                FUN_143b08380(*(undefined8 *)(param_1 + 0x20),local_108);
              }
              else {
                local_98 = (undefined4)lVar5;
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_98;
              }
            }
            if (local_f8 <= local_108) {
              *(undefined1 *)(param_1 + 0x82) = 0;
              *(undefined1 *)(param_1 + 0xa8) = 1;
              return param_1 & 0xffffffffffffff00;
            }
            if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
               (*(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
              local_ec = (uint)*(ushort *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
              *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) =
                   *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + 1;
            }
            else {
              local_ec = FUN_143b07920(*(undefined8 *)(param_1 + 0x20));
            }
            local_100 = local_ec;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
                *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
              local_30 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                                   (*(undefined8 *)(param_1 + 0x20));
            }
            else {
              local_30 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
            }
            local_108 = local_30;
          } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                  (cVar3 = FUN_143bbaa00(param_1,local_30), cVar3 != '\0'));
          param_1 = 0;
        }
        break;
      default:
        param_1 = (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
      }
    }
  }
  else {
    param_1 = (ulonglong)(uint3)(cVar3 >> 7) << 8;
  }
  return param_1;
}



// FUNCTION 143bbdda0 FUN_143bbdda0 body=230 status=ok
// SIG undefined FUN_143bbdda0(void)

ulonglong FUN_143bbdda0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 200))(param_1);
      if (param_2 < 0) {
        *param_3 = 8;
        uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
      }
      else if ((param_2 < param_1[0xe]) || (param_1[0xf] < param_2)) {
        *param_3 = 8;
        uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
      }
      else {
        param_1[0x12] = param_2;
        uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      }
    }
    else {
      *param_3 = *(undefined4 *)((longlong)param_1 + 0x13c);
      uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143bbde90 FUN_143bbde90 body=2838 status=ok
// SIG undefined FUN_143bbde90(void)

ulonglong FUN_143bbde90(ulonglong param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_58;
  uint local_54;
  
  local_58 = *(int *)(param_1 + 0x90);
  if (local_58 == 0) {
    local_58 = *(int *)(param_1 + 0x70);
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  iVar6 = local_58;
  if (*(char *)(param_1 + 0x82) == '\0') {
    if (-1 < *(longlong *)(param_1 + 0x98)) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      return param_1 & 0xffffffffffffff00;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x88) == *(longlong *)(param_1 + 0x90)) {
      if (*(longlong *)(param_1 + 0x78) <= (longlong)local_58) {
        *(undefined1 *)(param_1 + 0x82) = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        return param_1 & 0xffffffffffffff00;
      }
      iVar6 = local_58 + 1;
      if ((((*(ushort *)(lVar4 + (longlong)local_58 * 2) & 0xfc00) == 0xd800) &&
          ((longlong)iVar6 != *(longlong *)(param_1 + 0x30))) &&
         ((*(ushort *)(lVar4 + (longlong)iVar6 * 2) & 0xfc00) == 0xdc00)) {
        iVar6 = local_58 + 2;
      }
    }
  }
  local_58 = iVar6;
  iVar6 = (int)*(undefined8 *)(param_1 + 0x78) - *(int *)(*(longlong *)(param_1 + 8) + 100);
  if (iVar6 < local_58) {
    *(undefined1 *)(param_1 + 0x82) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    param_1 = param_1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90);
    switch(uVar2) {
    case 0:
      do {
        FUN_143bb66e0(param_1,local_58,0,param_1 + 0x13c);
        cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
        if (cVar5 != '\0') {
          return (ulonglong)(uint3)(cVar5 >> 7) << 8;
        }
        if (*(char *)(param_1 + 0x82) != '\0') {
          return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
        }
        if (iVar6 <= local_58) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          return param_1 & 0xffffffffffffff00;
        }
        iVar8 = local_58 + 1;
        if ((((*(ushort *)(lVar4 + (longlong)local_58 * 2) & 0xfc00) == 0xd800) &&
            ((longlong)iVar8 != *(longlong *)(param_1 + 0x78))) &&
           ((*(ushort *)(lVar4 + (longlong)iVar8 * 2) & 0xfc00) == 0xdc00)) {
          iVar8 = local_58 + 2;
        }
        local_58 = iVar8;
      } while ((*(longlong *)(param_1 + 0x128) == 0) ||
              (cVar5 = FUN_143bbaa00(param_1,(longlong)local_58), cVar5 != '\0'));
      param_1 = 0;
      break;
    case 1:
    case 5:
      uVar3 = *(uint *)(*(longlong *)(param_1 + 8) + 0xa8);
      do {
        iVar8 = local_58;
        local_54 = (uint)*(ushort *)(lVar4 + (longlong)local_58 * 2);
        iVar7 = local_58 + 1;
        if ((((local_54 & 0xfffffc00) == 0xd800) &&
            ((longlong)iVar7 != *(longlong *)(param_1 + 0x78))) &&
           (uVar1 = *(ushort *)(lVar4 + (longlong)iVar7 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
          local_54 = local_54 * 0x400 + -0x35fdc00 + (uint)uVar1;
          iVar7 = local_58 + 2;
        }
        local_58 = iVar7;
        if (local_54 == uVar3) {
          FUN_143bb66e0(param_1,iVar8,0,param_1 + 0x13c);
          cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
          if (cVar5 != '\0') {
            return (ulonglong)(uint3)(cVar5 >> 7) << 8;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
          }
        }
        if (iVar6 <= iVar8) {
          *(undefined1 *)(param_1 + 0x82) = 0;
          *(undefined1 *)(param_1 + 0xa8) = 1;
          return param_1 & 0xffffffffffffff00;
        }
      } while ((*(longlong *)(param_1 + 0x128) == 0) ||
              (cVar5 = FUN_143bbaa00(param_1,(longlong)local_58), cVar5 != '\0'));
      param_1 = 0;
      break;
    case 2:
      do {
        iVar8 = local_58;
        local_54 = (uint)*(ushort *)(lVar4 + (longlong)local_58 * 2);
        iVar7 = local_58 + 1;
        if ((((local_54 & 0xfffffc00) == 0xd800) &&
            ((longlong)iVar7 != *(longlong *)(param_1 + 0x78))) &&
           (uVar1 = *(ushort *)(lVar4 + (longlong)iVar7 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
          local_54 = local_54 * 0x400 + -0x35fdc00 + (uint)uVar1;
          iVar7 = local_58 + 2;
        }
        local_58 = iVar7;
        if ((((int)local_54 < 0x100) &&
            (cVar5 = FUN_143bbc310(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_54),
            cVar5 != '\0')) ||
           ((0xff < (int)local_54 &&
            (cVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xa0) + 0x30))
                               (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),local_54),
            cVar5 != '\0')))) {
          FUN_143bb66e0(param_1,iVar8,0,param_1 + 0x13c);
          cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
          if (cVar5 != '\0') {
            return (ulonglong)(uint3)(cVar5 >> 7) << 8;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
          }
        }
        if (iVar6 <= iVar8) {
          *(undefined1 *)(param_1 + 0x82) = 0;
          *(undefined1 *)(param_1 + 0xa8) = 1;
          return param_1 & 0xffffffffffffff00;
        }
      } while ((*(longlong *)(param_1 + 0x128) == 0) ||
              (cVar5 = FUN_143bbaa00(param_1,(longlong)local_58), cVar5 != '\0'));
      param_1 = 0;
      break;
    case 3:
      if (*(longlong *)(param_1 + 0x70) < (longlong)local_58) {
        *(undefined1 *)(param_1 + 0x82) = 0;
        param_1 = param_1 & 0xffffffffffffff00;
      }
      else {
        FUN_143bb66e0(param_1,local_58,0,param_1 + 0x13c);
        cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
        if (cVar5 == '\0') {
          param_1 = (ulonglong)*(byte *)(param_1 + 0x82);
        }
        else {
          param_1 = (ulonglong)(uint3)(cVar5 >> 7) << 8;
        }
      }
      break;
    case 4:
      iVar8 = local_58;
      if ((longlong)local_58 == *(longlong *)(param_1 + 0x50)) {
        FUN_143bb66e0(param_1,local_58,0,param_1 + 0x13c);
        cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
        if (cVar5 != '\0') {
          return (ulonglong)(uint3)(cVar5 >> 7) << 8;
        }
        if (*(char *)(param_1 + 0x82) != '\0') {
          return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
        }
        iVar8 = local_58 + 1;
        if ((((*(ushort *)(lVar4 + (longlong)local_58 * 2) & 0xfc00) == 0xd800) &&
            ((longlong)iVar8 != *(longlong *)(param_1 + 0x78))) &&
           ((*(ushort *)(lVar4 + (longlong)iVar8 * 2) & 0xfc00) == 0xdc00)) {
          iVar8 = local_58 + 2;
        }
      }
      local_58 = iVar8;
      if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x18) & 1) == 0) {
        do {
          uVar1 = *(ushort *)(lVar4 + (longlong)(local_58 + -1) * 2);
          if (((uVar1 & 0x7f) < 0x2a) &&
             (((uVar1 < 0xe && (9 < uVar1)) ||
              ((uVar1 == 0x85 || ((uVar1 == 0x2028 || (uVar1 == 0x2029)))))))) {
            if ((uVar1 == 0xd) &&
               (((longlong)local_58 < *(longlong *)(param_1 + 0x78) &&
                (*(short *)(lVar4 + (longlong)local_58 * 2) == 10)))) {
              local_58 = local_58 + 1;
            }
            FUN_143bb66e0(param_1,local_58,0,param_1 + 0x13c);
            cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
            if (cVar5 != '\0') {
              return (ulonglong)(uint3)(cVar5 >> 7) << 8;
            }
            if (*(char *)(param_1 + 0x82) != '\0') {
              return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
            }
          }
          if (iVar6 <= local_58) {
            *(undefined1 *)(param_1 + 0x82) = 0;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            return param_1 & 0xffffffffffffff00;
          }
          iVar8 = local_58 + 1;
          if ((((*(ushort *)(lVar4 + (longlong)local_58 * 2) & 0xfc00) == 0xd800) &&
              ((longlong)iVar8 != *(longlong *)(param_1 + 0x78))) &&
             ((*(ushort *)(lVar4 + (longlong)iVar8 * 2) & 0xfc00) == 0xdc00)) {
            iVar8 = local_58 + 2;
          }
          local_58 = iVar8;
        } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                (cVar5 = FUN_143bbaa00(param_1,(longlong)local_58), cVar5 != '\0'));
        param_1 = 0;
      }
      else {
        do {
          if (*(short *)(lVar4 + (longlong)(local_58 + -1) * 2) == 10) {
            FUN_143bb66e0(param_1,local_58,0,param_1 + 0x13c);
            cVar5 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
            if (cVar5 != '\0') {
              return (ulonglong)(uint3)(cVar5 >> 7) << 8;
            }
            if (*(char *)(param_1 + 0x82) != '\0') {
              return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x82) >> 7),1);
            }
          }
          if (iVar6 <= local_58) {
            *(undefined1 *)(param_1 + 0x82) = 0;
            *(undefined1 *)(param_1 + 0xa8) = 1;
            return param_1 & 0xffffffffffffff00;
          }
          iVar8 = local_58 + 1;
          if ((((*(ushort *)(lVar4 + (longlong)local_58 * 2) & 0xfc00) == 0xd800) &&
              ((longlong)iVar8 != *(longlong *)(param_1 + 0x78))) &&
             ((*(ushort *)(lVar4 + (longlong)iVar8 * 2) & 0xfc00) == 0xdc00)) {
            iVar8 = local_58 + 2;
          }
          local_58 = iVar8;
        } while ((*(longlong *)(param_1 + 0x128) == 0) ||
                (cVar5 = FUN_143bbaa00(param_1,(longlong)local_58), cVar5 != '\0'));
        param_1 = 0;
      }
      break;
    default:
      param_1 = (ulonglong)(uint3)((uint)uVar2 >> 8) << 8;
    }
  }
  return param_1;
}



// FUNCTION 143bbe9d0 FUN_143bbe9d0 body=19 status=ok
// SIG undefined FUN_143bbe9d0(void)

void FUN_143bbe9d0(void)

{
  FUN_143bbed00();
  return;
}



// FUNCTION 143bbe9f0 FUN_143bbe9f0 body=90 status=ok
// SIG undefined FUN_143bbe9f0(void)

void FUN_143bbe9f0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x128);
    *param_3 = *(undefined8 *)(param_1 + 0x130);
  }
  return;
}



// FUNCTION 143bbea50 FUN_143bbea50 body=553 status=ok
// SIG undefined FUN_143bbea50(void)

longlong FUN_143bbea50(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  int local_28;
  undefined4 local_24;
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    uVar3 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    if (cVar1 == '\0') {
      if (param_2 == 0) {
        param_2 = FUN_143b07330(0,*(undefined8 *)(param_1 + 0x20),0,1,param_3);
      }
      else if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) &&
               (*(longlong *)(param_1 + 0x30) == *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10)
               )) && (*(longlong *)(param_1 + 0x30) ==
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c))) {
        local_18 = *(longlong *)(param_1 + 0x20);
        uVar2 = FUN_143b07900(param_2);
        FUN_143b082f0(param_2,0,uVar2,*(undefined8 *)(local_18 + 0x30),
                      CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x30)),param_3);
      }
      else {
        if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
          local_28 = *(int *)(param_1 + 0x30);
        }
        else {
          local_24 = 0;
          in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
          local_28 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30)
                                   ,0,in_stack_ffffffffffffffc8,&local_24);
          uVar3 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
        }
        local_20 = FUN_143aa7a40((longlong)local_28 << 1);
        if (local_20 != 0) {
          *param_3 = 0;
          uVar2 = CONCAT44(uVar3,local_28);
          FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30),local_20,
                        uVar2,param_3);
          uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
          *param_3 = 0;
          uVar2 = FUN_143b07900(param_2);
          FUN_143b082f0(param_2,0,uVar2,local_20,CONCAT44(uVar3,local_28),param_3);
          FUN_143aa79f0(local_20);
        }
      }
    }
    else {
      *param_3 = *(undefined4 *)(param_1 + 0x13c);
    }
  }
  return param_2;
}



// FUNCTION 143bbec80 FUN_143bbec80 body=90 status=ok
// SIG undefined FUN_143bbec80(void)

void FUN_143bbec80(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x118);
    *param_3 = *(undefined8 *)(param_1 + 0x120);
  }
  return;
}



// FUNCTION 143bbece0 FUN_143bbece0 body=17 status=ok
// SIG undefined FUN_143bbece0(void)

undefined4 FUN_143bbece0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x114);
}



// FUNCTION 143bbed00 FUN_143bbed00 body=8 status=ok
// SIG undefined FUN_143bbed00(void)

undefined * FUN_143bbed00(void)

{
  return &DAT_146bc8476;
}



// FUNCTION 143bbed10 FUN_143bbed10 body=17 status=ok
// SIG undefined FUN_143bbed10(void)

undefined4 FUN_143bbed10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// FUNCTION 143bbed30 FUN_143bbed30 body=77 status=ok
// SIG undefined FUN_143bbed30(void)

undefined8 FUN_143bbed30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x58))(param_1,param_2,0,param_3,0);
  return param_2;
}



// FUNCTION 143bbed80 FUN_143bbed80 body=548 status=ok
// SIG undefined FUN_143bbed80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143bbed80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  FUN_143a8ac30(local_40);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_d8 = 0x345ad82c;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0x90;
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    FUN_143b07fe0(&local_d8,local_40,param_4);
    (**(code **)(*param_1 + 0x40))(param_1,param_3,&local_d8,param_4);
    FUN_143b07390(&local_d8);
    FUN_143a8d3a0(param_2,local_40);
    local_e8 = local_e8 | 1;
    FUN_143a8dc60(local_40);
  }
  else {
    FUN_143a8d3a0(param_2,local_40);
    local_e8 = local_e8 | 1;
    FUN_143a8dc60(local_40);
  }
  return param_2;
}



// FUNCTION 143bbefb0 FUN_143bbefb0 body=1786 status=ok
// SIG undefined FUN_143bbefb0(void)

longlong FUN_143bbefb0(longlong param_1,int param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res18;
  ulonglong in_stack_fffffffffffffe88;
  undefined4 uVar5;
  int local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_144;
  longlong local_140;
  longlong local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x82) == '\0') {
        *param_4 = 0x10302;
      }
      else if ((param_2 < 0) ||
              (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                       ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70)),
              iVar2 < param_2)) {
        *param_4 = 8;
      }
    }
    else {
      *param_4 = *(undefined4 *)(param_1 + 0x13c);
    }
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      if (param_2 == 0) {
        local_160 = *(longlong *)(param_1 + 0x88);
        local_158 = *(longlong *)(param_1 + 0x90);
      }
      else {
        iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),param_2 + -1);
        local_160 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)iVar2 * 8);
        local_158 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)(iVar2 + 1) * 8);
      }
      uVar5 = (undefined4)(in_stack_fffffffffffffe88 >> 0x20);
      if (local_160 < 0) {
        if (param_3 == 0) {
          param_3 = FUN_143b07d10(0,0,0,param_4);
        }
        else {
          uVar3 = FUN_143b07900(param_3);
          FUN_143b082f0(param_3,0,uVar3,0,in_stack_fffffffffffffe88 & 0xffffffff00000000,param_4);
        }
      }
      else if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) &&
               (*(longlong *)(param_1 + 0x30) == *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10)
               )) && (*(longlong *)(param_1 + 0x30) ==
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c))) {
        if (param_3 == 0) {
          local_128 = 0x345ad82c;
          local_124 = 0;
          local_120 = 0;
          local_11c = 0x90;
          local_118 = 0;
          local_110 = 0;
          local_10c = 0;
          local_108 = 0;
          local_100 = 0;
          local_fc = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_9c = 0;
          FUN_143b07d10(&local_128,
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) + local_160 * 2,
                        local_158 - local_160,param_4);
          param_3 = FUN_143b07330(0,&local_128,1,0,param_4);
          FUN_143b07390(&local_128);
        }
        else {
          local_140 = local_158 - local_160;
          local_138 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) + local_160 * 2;
          uVar3 = FUN_143b07900(param_3);
          FUN_143b082f0(param_3,0,uVar3,local_138,CONCAT44(uVar5,(int)local_140),param_4);
        }
      }
      else {
        if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
          local_168 = (int)local_158 - (int)local_160;
        }
        else {
          local_144 = 0;
          in_stack_fffffffffffffe88 = in_stack_fffffffffffffe88 & 0xffffffff00000000;
          local_168 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),local_160,local_158,0,
                                    in_stack_fffffffffffffe88,&local_144);
          uVar5 = (undefined4)(in_stack_fffffffffffffe88 >> 0x20);
        }
        lVar4 = FUN_143aa7a40((longlong)(local_168 + 1) << 1);
        if (lVar4 == 0) {
          *param_4 = 7;
        }
        else {
          uVar3 = CONCAT44(uVar5,local_168 + 1);
          FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),local_160,local_158,lVar4,uVar3,param_4);
          uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
          if (param_3 == 0) {
            local_98 = 0x345ad82c;
            local_94 = 0;
            local_90 = 0;
            local_8c = 0x90;
            local_88 = 0;
            local_80 = 0;
            local_7c = 0;
            local_78 = 0;
            local_70 = 0;
            local_6c = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_30 = 0;
            local_28 = 0;
            local_20 = 0;
            local_1c = 0;
            local_18 = 0;
            local_10 = 0;
            local_c = 0;
            FUN_143b07d10(&local_98,lVar4,(longlong)local_168,param_4);
            local_res18 = FUN_143b07330(0,&local_98,1,0,param_4);
            FUN_143b07390(&local_98);
          }
          else {
            uVar3 = FUN_143b07900(param_3);
            FUN_143b082f0(param_3,0,uVar3,lVar4,CONCAT44(uVar5,local_168),param_4);
            local_res18 = param_3;
          }
          FUN_143aa79f0(lVar4);
          param_3 = local_res18;
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 143bbf6b0 FUN_143bbf6b0 body=567 status=ok
// SIG undefined FUN_143bbf6b0(void)

longlong FUN_143bbf6b0(longlong param_1,int param_2,longlong param_3,longlong *param_4,
                      undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong local_20;
  undefined4 local_18;
  longlong local_10;
  
  *param_4 = 0;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x82) == '\0') {
        *param_5 = 0x10302;
      }
      else if ((param_2 < 0) ||
              (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                       ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70)),
              iVar2 < param_2)) {
        *param_5 = 8;
      }
    }
    else {
      *param_5 = *(undefined4 *)(param_1 + 0x13c);
    }
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      if (param_2 == 0) {
        local_20 = *(longlong *)(param_1 + 0x88);
        local_10 = *(longlong *)(param_1 + 0x90);
      }
      else {
        iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),param_2 + -1);
        local_20 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)iVar2 * 8);
        local_10 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)(iVar2 + 1) * 8);
      }
      if (local_20 < 0) {
        param_3 = FUN_143b07330(param_3,*(undefined8 *)(param_1 + 0x20),0,1,param_5);
      }
      else {
        *param_4 = local_10 - local_20;
        param_3 = FUN_143b07330(param_3,*(undefined8 *)(param_1 + 0x20),0,1,param_5);
        if (param_3 != 0) {
          lVar3 = local_20 - *(longlong *)(param_3 + 0x20);
          if ((lVar3 < 0) || (*(int *)(param_3 + 0x1c) < lVar3)) {
            FUN_143b08380(param_3,local_20);
          }
          else {
            local_18 = (undefined4)lVar3;
            *(undefined4 *)(param_3 + 0x28) = local_18;
          }
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 143bbf8f0 FUN_143bbf8f0 body=67 status=ok
// SIG undefined FUN_143bbf8f0(void)

void FUN_143bbf8f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x48))(param_1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 143bbf940 FUN_143bbf940 body=32 status=ok
// SIG undefined FUN_143bbf940(void)

void FUN_143bbf940(longlong param_1)

{
  TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
  ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70));
  return;
}



// FUNCTION 143bbf960 FUN_143bbf960 body=18 status=ok
// SIG undefined FUN_143bbf960(void)

undefined1 FUN_143bbf960(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



// FUNCTION 143bbf980 FUN_143bbf980 body=18 status=ok
// SIG undefined FUN_143bbf980(void)

undefined1 FUN_143bbf980(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



// FUNCTION 143bbf9a0 FUN_143bbf9a0 body=18 status=ok
// SIG undefined FUN_143bbf9a0(void)

undefined1 FUN_143bbf9a0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



// FUNCTION 143bbf9c0 FUN_143bbf9c0 body=387 status=ok
// SIG undefined FUN_143bbf9c0(void)

void FUN_143bbf9c0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong local_20;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (8 < *(int *)(param_1[1] + 0x6c)) {
      lVar2 = FUN_143aa7a40((longlong)*(int *)(param_1[1] + 0x6c) << 3);
      param_1[0x18] = lVar2;
      if (param_1[0x18] == 0) {
        *(undefined4 *)((longlong)param_1 + 0x13c) = 7;
        *param_3 = 7;
        return;
      }
    }
    lVar2 = FUN_143a8d310(0x20);
    if (lVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143e1ce70(lVar2,param_3);
    }
    param_1[0x16] = local_20;
    if (param_1[0x16] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x13c) = 7;
      *param_3 = 7;
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2);
      (**(code **)(*param_1 + 0x1b8))(param_1,8000000,param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x13c) = *param_3;
      }
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x13c) = *param_3;
  }
  return;
}



// FUNCTION 143bbfb50 FUN_143bbfb50 body=627 status=ok
// SIG undefined FUN_143bbfb50(void)

void FUN_143bbfb50(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 8000000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined4 *)(param_1 + 0x13c) = *param_2;
  *(longlong *)(param_1 + 0xc0) = param_1 + 200;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x13c) = *param_2;
  }
  return;
}



// FUNCTION 143bbfdd0 FUN_143bbfdd0 body=349 status=ok
// SIG undefined FUN_143bbfdd0(void)

undefined8 FUN_143bbfdd0(longlong param_1)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_44 = 0;
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
      local_48 = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      local_48 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30),0,0
                               ,&local_44);
    }
    local_44 = 0;
    local_38 = FUN_143a8d310(0x28);
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143a8d6f0(local_38,local_48,0,0);
    }
    local_28 = local_30;
    local_40 = local_30;
    local_20 = FUN_143a8fd90(local_30,local_48);
    FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30),local_20,
                  local_48,&local_44);
    FUN_143a90820(local_40,local_48);
    *(undefined8 *)(param_1 + 0x18) = local_40;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 143bbff30 FUN_143bbff30 body=704 status=ok
// SIG undefined FUN_143bbff30(void)

uint FUN_143bbff30(longlong param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int local_res10;
  byte local_28;
  byte local_27;
  uint local_1c;
  uint local_18;
  
  local_28 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  if ((longlong)param_2 < *(longlong *)(param_1 + 0x68)) {
    uVar1 = *(ushort *)(lVar2 + (longlong)param_2 * 2);
    local_1c = (uint)uVar1;
    if ((local_1c & 0xfffff800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) {
        if (((longlong)(param_2 + 1) != *(longlong *)(param_1 + 0x68)) &&
           (uVar1 = *(ushort *)(lVar2 + (longlong)(param_2 + 1) * 2), (uVar1 & 0xfc00) == 0xdc00)) {
          local_1c = local_1c * 0x400 + -0x35fdc00 + (uint)uVar1;
        }
      }
      else if ((*(longlong *)(param_1 + 0x60) < (longlong)param_2) &&
              (uVar1 = *(ushort *)(lVar2 + (longlong)(param_2 + -1) * 2), (uVar1 & 0xfc00) == 0xd800
              )) {
        local_1c = (uint)uVar1 * 0x400 + -0x35fdc00 + local_1c;
      }
    }
    cVar3 = FUN_143b10d70(local_1c,0xb);
    uVar4 = (uint)cVar3;
    if (uVar4 == 0) {
      cVar3 = FUN_143a9db60(local_1c);
      uVar4 = (uint)cVar3;
      if (uVar4 != 0x10) {
        local_28 = (**(code **)(**(longlong **)
                                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8) + 0x30))
                             (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8),
                              local_1c);
        goto LAB_143bc00c3;
      }
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
LAB_143bc00c3:
    local_27 = 0;
    local_res10 = param_2;
    do {
      if ((longlong)local_res10 <= *(longlong *)(param_1 + 0x60)) goto LAB_143bc01d6;
      iVar5 = local_res10 + -1;
      local_18 = (uint)*(ushort *)(lVar2 + (longlong)iVar5 * 2);
      if ((((local_18 & 0xfffffc00) == 0xdc00) && (*(longlong *)(param_1 + 0x60) < (longlong)iVar5))
         && (uVar1 = *(ushort *)(lVar2 + (longlong)(local_res10 + -2) * 2),
            (uVar1 & 0xfc00) == 0xd800)) {
        local_18 = (uint)uVar1 * 0x400 + -0x35fdc00 + local_18;
        iVar5 = local_res10 + -2;
      }
      local_res10 = iVar5;
      cVar3 = FUN_143b10d70(local_18,0xb);
    } while ((cVar3 != '\0') || (cVar3 = FUN_143a9db60(local_18), cVar3 == '\x10'));
    local_27 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8) +
                           0x30))(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8),local_18);
LAB_143bc01d6:
    uVar4 = (uint)(local_28 ^ local_27);
  }
  return uVar4;
}



// FUNCTION 143bc01f0 FUN_143bc01f0 body=356 status=ok
// SIG undefined FUN_143bc01f0(void)

ulonglong FUN_143bc01f0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  undefined1 uVar4;
  byte bVar5;
  undefined4 local_24;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x140) == 0) {
    local_20 = param_1 + 0x13c;
    uVar3 = FUN_143a8b6f0();
    uVar3 = FUN_143a9fdc0(uVar3,local_20);
    *(undefined8 *)(param_1 + 0x140) = uVar3;
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 != '\0') {
      return (ulonglong)(uint3)(cVar1 >> 7) << 8;
    }
    local_18 = *(undefined8 *)(param_1 + 0x140);
    local_10 = **(longlong **)(param_1 + 0x140);
    (**(code **)(local_10 + 0x30))(local_18,*(undefined8 *)(param_1 + 0x20),param_1 + 0x13c);
  }
  if ((longlong)param_2 < *(longlong *)(param_1 + 0x68)) {
    local_res10 = param_2;
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) != 0) {
      local_24 = 0;
      iVar2 = FUN_143b076d0(*(undefined8 *)(param_1 + 0x20),0,param_2,0,0,&local_24,uVar4);
      local_res10 = (ulonglong)iVar2;
    }
    bVar5 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x88))
                      (*(undefined8 *)(param_1 + 0x140),local_res10 & 0xffffffff);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    bVar5 = 1;
  }
  return (ulonglong)bVar5;
}



// FUNCTION 143bc0360 FUN_143bc0360 body=798 status=ok
// SIG undefined FUN_143bc0360(void)

uint FUN_143bc0360(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte local_38;
  byte local_37;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  longlong local_18;
  
  local_37 = 0;
  if (param_2 < *(longlong *)(param_1 + 0x68)) {
    lVar4 = param_2 - *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    if ((lVar4 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) < lVar4)) {
      FUN_143b08380(*(undefined8 *)(param_1 + 0x20),param_2);
    }
    else {
      local_20 = (undefined4)lVar4;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28) = local_20;
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) <
         *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) &&
       (*(ushort *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
         (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2) < 0xd800)) {
      local_24 = (uint)*(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) * 2);
    }
    else {
      local_24 = FUN_143b07490(*(undefined8 *)(param_1 + 0x20));
    }
    cVar1 = FUN_143b10d70(local_24,0xb);
    uVar2 = (uint)cVar1;
    if (uVar2 == 0) {
      cVar1 = FUN_143a9db60(local_24);
      uVar2 = (uint)cVar1;
      if (uVar2 != 0x10) {
        local_37 = (**(code **)(**(longlong **)
                                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8) + 0x30))
                             (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8),
                              local_24);
        goto LAB_143bc04e9;
      }
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
LAB_143bc04e9:
    local_38 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) <
          *(int *)(*(longlong *)(param_1 + 0x20) + 0x28)) {
        local_18 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x40))
                             (*(undefined8 *)(param_1 + 0x20));
      }
      else {
        local_18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) +
                   *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      }
      if (local_18 <= *(longlong *)(param_1 + 0x60)) goto LAB_143bc0664;
      if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) < 1) ||
         (0xd7ff < *(ushort *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) +
                    (longlong)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1) * 2))) {
        local_28 = FUN_143b08190(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) + -1;
        *(int *)(*(longlong *)(param_1 + 0x20) + 0x28) = iVar3;
        local_28 = (uint)*(ushort *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) + (longlong)iVar3 * 2
                          );
      }
      cVar1 = FUN_143b10d70(local_28,0xb);
    } while ((cVar1 != '\0') || (cVar1 = FUN_143a9db60(local_28), cVar1 == '\x10'));
    local_38 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8) +
                           0x30))(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 8),local_28);
LAB_143bc0664:
    uVar2 = (uint)(local_37 ^ local_38);
  }
  return uVar2;
}



// FUNCTION 143bc0680 FUN_143bc0680 body=315 status=ok
// SIG undefined FUN_143bc0680(void)

ulonglong FUN_143bc0680(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      if ((char)param_1[0x27] == '\0') {
        FUN_143bc2110(param_1);
      }
      else {
        cVar1 = FUN_143bbc280(param_1[4]);
        if (cVar1 != '\0') {
          lVar3 = FUN_143b07900(param_1[4]);
          param_1[6] = lVar3;
          (**(code **)(*param_1 + 200))(param_1);
        }
      }
      if (((*(longlong *)(param_1[4] + 0x20) == 0) &&
          (param_1[6] == *(longlong *)(param_1[4] + 0x10))) &&
         (param_1[6] == (longlong)*(int *)(param_1[4] + 0x1c))) {
        FUN_143bb66e0(param_1,(int)param_1[0xe],0,param_2);
      }
      else {
        FUN_143bafc70(param_1,param_1[0xe],0,param_2);
      }
      uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x82);
    }
    else {
      *param_2 = *(undefined4 *)((longlong)param_1 + 0x13c);
      uVar2 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143bc07c0 FUN_143bc07c0 body=402 status=ok
// SIG undefined FUN_143bc07c0(void)

ulonglong FUN_143bc07c0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 200))(param_1);
      if ((longlong)param_2 < 0) {
        *param_3 = 8;
        uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
      }
      else {
        if ((char)param_1[0x27] != '\0') {
          cVar1 = FUN_143bbc280(param_1[4]);
          if (cVar1 != '\0') {
            lVar3 = FUN_143b07900(param_1[4]);
            param_1[6] = lVar3;
            (**(code **)(*param_1 + 200))(param_1);
          }
        }
        if (((longlong)param_2 < param_1[0xe]) || (param_1[0xf] < (longlong)param_2)) {
          *param_3 = 8;
          uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
        }
        else {
          if ((*(longlong *)(param_1[4] + 0x20) == 0) &&
             ((param_1[6] == *(longlong *)(param_1[4] + 0x10) &&
              (param_1[6] == (longlong)*(int *)(param_1[4] + 0x1c))))) {
            FUN_143bb66e0(param_1,param_2 & 0xffffffff,0,param_3);
          }
          else {
            FUN_143bafc70(param_1,param_2,0,param_3);
          }
          uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x82);
        }
      }
    }
    else {
      *param_3 = *(undefined4 *)((longlong)param_1 + 0x13c);
      uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143bc0960 FUN_143bc0960 body=315 status=ok
// SIG undefined FUN_143bc0960(void)

ulonglong FUN_143bc0960(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      if ((char)param_1[0x27] == '\0') {
        FUN_143bc2110(param_1);
      }
      else {
        cVar1 = FUN_143bbc280(param_1[4]);
        if (cVar1 != '\0') {
          lVar3 = FUN_143b07900(param_1[4]);
          param_1[6] = lVar3;
          (**(code **)(*param_1 + 200))(param_1);
        }
      }
      if (((*(longlong *)(param_1[4] + 0x20) == 0) &&
          (param_1[6] == *(longlong *)(param_1[4] + 0x10))) &&
         (param_1[6] == (longlong)*(int *)(param_1[4] + 0x1c))) {
        FUN_143bb66e0(param_1,(int)param_1[0xe],1,param_2);
      }
      else {
        FUN_143bafc70(param_1,param_1[0xe],1,param_2);
      }
      uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x82);
    }
    else {
      *param_2 = *(undefined4 *)((longlong)param_1 + 0x13c);
      uVar2 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143bc0aa0 FUN_143bc0aa0 body=402 status=ok
// SIG undefined FUN_143bc0aa0(void)

ulonglong FUN_143bc0aa0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint7 uVar4;
  
  uVar4 = (uint7)((ulonglong)param_3 >> 8);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 200))(param_1);
      if ((longlong)param_2 < 0) {
        *param_3 = 8;
        uVar2 = (ulonglong)uVar4 << 8;
      }
      else {
        if ((char)param_1[0x27] != '\0') {
          cVar1 = FUN_143bbc280(param_1[4]);
          if (cVar1 != '\0') {
            lVar3 = FUN_143b07900(param_1[4]);
            param_1[6] = lVar3;
            (**(code **)(*param_1 + 200))(param_1);
          }
        }
        if (((longlong)param_2 < param_1[0xe]) || (param_1[0xf] < (longlong)param_2)) {
          *param_3 = 8;
          uVar2 = (ulonglong)uVar4 << 8;
        }
        else {
          if ((*(longlong *)(param_1[4] + 0x20) == 0) &&
             ((param_1[6] == *(longlong *)(param_1[4] + 0x10) &&
              (param_1[6] == (longlong)*(int *)(param_1[4] + 0x1c))))) {
            FUN_143bb66e0(param_1,param_2 & 0xffffffff,1,param_3);
          }
          else {
            FUN_143bafc70(param_1,param_2,1,param_3);
          }
          uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x82);
        }
      }
    }
    else {
      *param_3 = *(undefined4 *)((longlong)param_1 + 0x13c);
      uVar2 = (ulonglong)uVar4 << 8;
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143bc0c40 FUN_143bc0c40 body=89 status=ok
// SIG undefined FUN_143bc0c40(void)

longlong FUN_143bc0c40(longlong param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_2;
  if (*(int *)(param_1 + 8) < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 8 +
         (longlong)param_2 * -8;
}



// FUNCTION 143bc0ca0 FUN_143bc0ca0 body=378 status=ok
// SIG undefined FUN_143bc0ca0(void)

longlong FUN_143bc0ca0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      *param_3 = 1;
    }
    else {
      lVar2 = FUN_143b07900(*(undefined8 *)(param_1 + 0x20));
      lVar3 = FUN_143b07900(param_2);
      if (lVar2 == lVar3) {
        uVar4 = FUN_143b07740(*(undefined8 *)(param_1 + 0x20));
        uVar5 = FUN_143b07330(*(undefined8 *)(param_1 + 0x20),param_2,0,1,param_3);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        cVar1 = FUN_143a8b0e0(*param_3);
        if ((cVar1 == '\0') &&
           (FUN_143b08380(*(undefined8 *)(param_1 + 0x20),uVar4), *(longlong *)(param_1 + 0x28) != 0
           )) {
          uVar4 = FUN_143b07740(*(undefined8 *)(param_1 + 0x28));
          uVar5 = FUN_143b07330(*(undefined8 *)(param_1 + 0x28),param_2,0,1,param_3);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          cVar1 = FUN_143a8b0e0(*param_3);
          if (cVar1 == '\0') {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x28),uVar4);
          }
        }
      }
      else {
        *param_3 = 1;
      }
    }
  }
  return param_1;
}



// FUNCTION 143bc0e20 FUN_143bc0e20 body=416 status=ok
// SIG undefined FUN_143bc0e20(void)

longlong *
FUN_143bc0e20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (((param_3 < param_2) || (param_2 < 0)) || (param_3 < 0)) {
      *param_5 = 1;
    }
    if ((param_1[6] < param_2) || (param_1[6] < param_3)) {
      *param_5 = 1;
    }
    if (param_4 == -1) {
      (**(code **)(*param_1 + 200))(param_1);
    }
    else {
      FUN_143bc2110(param_1);
    }
    param_1[8] = param_2;
    param_1[9] = param_3;
    param_1[0xe] = param_2;
    param_1[0xf] = param_3;
    if (param_4 != -1) {
      if ((param_4 < param_1[0xe]) || (param_1[0xf] < param_4)) {
        *param_5 = 8;
      }
      param_1[0x12] = param_4;
    }
    if ((char)param_1[0x10] == '\0') {
      param_1[0xc] = param_2;
      param_1[0xd] = param_3;
    }
    if (*(char *)((longlong)param_1 + 0x81) != '\0') {
      param_1[10] = param_2;
      param_1[0xb] = param_3;
    }
  }
  return param_1;
}



// FUNCTION 143bc0fc0 FUN_143bc0fc0 body=75 status=ok
// SIG undefined FUN_143bc0fc0(void)

void FUN_143bc0fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3,0xffffffffffffffff,param_4);
  return;
}



// FUNCTION 143bc1010 FUN_143bc1010 body=15 status=ok
// SIG undefined FUN_143bc1010(void)

undefined8 FUN_143bc1010(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 143bc1020 FUN_143bc1020 body=14 status=ok
// SIG undefined FUN_143bc1020(void)

undefined4 FUN_143bc1020(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 143bc1030 FUN_143bc1030 body=870 status=ok
// SIG undefined FUN_143bc1030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143bc1030(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = 0;
  local_168 = 0x345ad82c;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0x90;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0x345ad82c;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0x90;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_143a8ac30(local_40);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143b07bf0(&local_168,param_3,param_4);
    FUN_143b07fe0(&local_d8,local_40,param_4);
    (**(code **)(*param_1 + 0x158))(param_1,&local_168,&local_d8,param_4);
    FUN_143b07390(&local_d8);
    FUN_143b07390(&local_168);
    FUN_143a8d3a0(param_2,local_40);
    local_178 = local_178 | 1;
    FUN_143a8dc60(local_40);
  }
  else {
    FUN_143a8d3a0(param_2,local_40);
    local_178 = local_178 | 1;
    FUN_143a8dc60(local_40);
  }
  return param_2;
}



// FUNCTION 143bc13a0 FUN_143bc13a0 body=721 status=ok
// SIG undefined FUN_143bc13a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143bc13a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong local_res18;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      local_res18 = param_3;
      if (param_3 == 0) {
        FUN_143a8ac30(local_38);
        local_c8 = 0x345ad82c;
        local_c4 = 0;
        local_c0 = 0;
        local_bc = 0x90;
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 0;
        FUN_143b07fe0(&local_c8,local_38,param_4);
        local_d8 = param_4;
        local_res18 = FUN_143b07330(0,&local_c8,1,0);
        FUN_143b07390(&local_c8);
        FUN_143a8dc60(local_38);
      }
      cVar1 = FUN_143a8b110(*param_4);
      param_3 = local_res18;
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 200))(param_1);
        do {
          cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
          if (cVar1 == '\0') break;
          (**(code **)(*param_1 + 0x178))(param_1,local_res18,param_2,param_4);
          cVar1 = FUN_143a8b0e0(*param_4);
        } while (cVar1 == '\0');
        (**(code **)(*param_1 + 0x188))(param_1,local_res18,param_4);
      }
    }
    else {
      *param_4 = *(undefined4 *)((longlong)param_1 + 0x13c);
    }
  }
  return param_3;
}



// FUNCTION 143bc1680 FUN_143bc1680 body=790 status=ok
// SIG undefined FUN_143bc1680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bc1680(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_198 [32];
  uint local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = 0;
  local_168 = 0x345ad82c;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0x90;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0x345ad82c;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0x90;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_143a8ac30(local_40);
  FUN_143b07bf0(&local_168,param_3,param_4);
  FUN_143b07fe0(&local_d8,local_40,param_4);
  (**(code **)(*param_1 + 0x168))(param_1,&local_168,&local_d8,param_4);
  FUN_143b07390(&local_d8);
  FUN_143b07390(&local_168);
  FUN_143a8d3a0(param_2,local_40);
  local_178 = local_178 | 1;
  FUN_143a8dc60(local_40);
  return param_2;
}



// FUNCTION 143bc19a0 FUN_143bc19a0 body=715 status=ok
// SIG undefined FUN_143bc19a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143bc19a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong local_res18;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 200))(param_1);
      cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
      if (cVar1 == '\0') {
        param_3 = (**(code **)(*param_1 + 0xe8))(param_1,param_3,param_4);
      }
      else {
        local_res18 = param_3;
        if (param_3 == 0) {
          FUN_143a8ac30(local_38);
          local_c8 = 0x345ad82c;
          local_c4 = 0;
          local_c0 = 0;
          local_bc = 0x90;
          local_b8 = 0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_40 = 0;
          local_3c = 0;
          FUN_143b07fe0(&local_c8,local_38,param_4);
          local_d8 = param_4;
          local_res18 = FUN_143b07330(0,&local_c8,1,0);
          FUN_143b07390(&local_c8);
          FUN_143a8dc60(local_38);
        }
        (**(code **)(*param_1 + 0x178))(param_1,local_res18,param_2,param_4);
        (**(code **)(*param_1 + 0x188))(param_1,local_res18,param_4);
        param_3 = local_res18;
      }
    }
    else {
      *param_4 = *(undefined4 *)((longlong)param_1 + 0x13c);
    }
  }
  return param_3;
}



// FUNCTION 143bc1c70 FUN_143bc1c70 body=18 status=ok
// SIG undefined FUN_143bc1c70(void)

undefined1 FUN_143bc1c70(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



// FUNCTION 143bc1c90 FUN_143bc1c90 body=115 status=ok
// SIG undefined FUN_143bc1c90(void)

longlong FUN_143bc1c90(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_143b64130(param_1,*(int *)(param_1 + 8) + param_2,param_3);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 8;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  }
  return lVar2;
}



// FUNCTION 143bc1d10 FUN_143bc1d10 body=342 status=ok
// SIG undefined FUN_143bc1d10(void)

longlong * FUN_143bc1d10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  lVar1 = FUN_143b07bf0(param_1[4],param_2,(longlong)param_1 + 0x13c);
  param_1[4] = lVar1;
  if (*(char *)(param_1[1] + 0xb8) != '\0') {
    lVar1 = FUN_143b07330(param_1[5],param_1[4],0,1,(longlong)param_1 + 0x13c);
    param_1[5] = lVar1;
  }
  lVar1 = FUN_143b07900(param_1[4]);
  param_1[6] = lVar1;
  (**(code **)(*param_1 + 200))(param_1);
  local_20 = (undefined8 *)param_1[3];
  local_18 = local_20;
  if (local_20 == (undefined8 *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = (**(code **)*local_20)(local_20,1);
  }
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  if (param_1[0x28] != 0) {
    local_28[0] = 0;
    (**(code **)(*(longlong *)param_1[0x28] + 0x30))(param_1[0x28],param_1[4],local_28);
  }
  return param_1;
}



// FUNCTION 143bc1e70 FUN_143bc1e70 body=366 status=ok
// SIG undefined FUN_143bc1e70(void)

longlong * FUN_143bc1e70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  if (param_1[4] != param_2) {
    lVar1 = FUN_143b07330(param_1[4],param_2,0,1,(longlong)param_1 + 0x13c);
    param_1[4] = lVar1;
    if (*(char *)(param_1[1] + 0xb8) != '\0') {
      lVar1 = FUN_143b07330(param_1[5],param_1[4],0,1,(longlong)param_1 + 0x13c);
      param_1[5] = lVar1;
    }
    lVar1 = FUN_143b07900(param_1[4]);
    param_1[6] = lVar1;
    local_20 = (undefined8 *)param_1[3];
    local_18 = local_20;
    if (local_20 == (undefined8 *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = (**(code **)*local_20)(local_20,1);
    }
    param_1[3] = 0;
    if (param_1[0x28] != 0) {
      local_28[0] = 0;
      (**(code **)(*(longlong *)param_1[0x28] + 0x30))(param_1[0x28],param_2,local_28);
    }
  }
  (**(code **)(*param_1 + 200))(param_1);
  *(undefined1 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 143bc1fe0 FUN_143bc1fe0 body=153 status=ok
// SIG undefined FUN_143bc1fe0(void)

longlong FUN_143bc1fe0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x30);
  FUN_143bc2110(param_1);
  return param_1;
}



// FUNCTION 143bc2080 FUN_143bc2080 body=133 status=ok
// SIG undefined FUN_143bc2080(void)

longlong * FUN_143bc2080(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 200))(param_1);
    if ((param_2 < 0) || (param_1[0xf] < param_2)) {
      *param_3 = 8;
    }
    else {
      param_1[0x12] = param_2;
    }
  }
  return param_1;
}



// FUNCTION 143bc2110 FUN_143bc2110 body=136 status=ok
// SIG undefined FUN_143bc2110(void)

void FUN_143bc2110(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 10000;
  return;
}



// FUNCTION 143bc21a0 FUN_143bc21a0 body=146 status=ok
// SIG undefined FUN_143bc21a0(void)

longlong FUN_143bc21a0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  
  FUN_143e1d310(*(undefined8 *)(param_1 + 0xb0));
  lVar1 = FUN_143bc1c90(*(undefined8 *)(param_1 + 0xb0),
                        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68),param_1 + 0x13c);
  for (local_18 = 0; local_18 < *(int *)(*(longlong *)(param_1 + 8) + 0x68) + -2;
      local_18 = local_18 + 1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_18 * 8) = 0xffffffffffffffff;
  }
  return lVar1;
}



// FUNCTION 143bc2240 FUN_143bc2240 body=84 status=ok
// SIG undefined FUN_143bc2240(void)

void FUN_143bc2240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x128) = param_2;
    *(undefined8 *)(param_1 + 0x130) = param_3;
  }
  return;
}



// FUNCTION 143bc22a0 FUN_143bc22a0 body=84 status=ok
// SIG undefined FUN_143bc22a0(void)

void FUN_143bc22a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x118) = param_2;
    *(undefined8 *)(param_1 + 0x120) = param_3;
  }
  return;
}



// FUNCTION 143bc2300 FUN_143bc2300 body=252 status=ok
// SIG undefined FUN_143bc2300(void)

void FUN_143bc2300(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  int local_18;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    cVar2 = FUN_143a8b0e0(*(undefined4 *)((longlong)param_1 + 0x13c));
    if (cVar2 == '\0') {
      if (param_2 < 0) {
        *param_3 = 1;
      }
      else {
        (**(code **)(*param_1 + 200))(param_1);
        if (param_2 == 0) {
          FUN_143e1d370(param_1[0x16],0);
        }
        else {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = (longlong)param_2;
          local_18 = SUB164(auVar1 / ZEXT816(4),0);
          if (local_18 < *(int *)(param_1[1] + 0x68)) {
            local_18 = *(int *)(param_1[1] + 0x68);
          }
          FUN_143e1d370(param_1[0x16],local_18);
        }
        *(int *)((longlong)param_1 + 0x114) = param_2;
      }
    }
    else {
      *param_3 = *(undefined4 *)((longlong)param_1 + 0x13c);
    }
  }
  return;
}



// FUNCTION 143bc2400 FUN_143bc2400 body=122 status=ok
// SIG undefined FUN_143bc2400(void)

void FUN_143bc2400(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      if (param_2 < 0) {
        *param_3 = 1;
      }
      else {
        *(int *)(param_1 + 0x108) = param_2;
      }
    }
    else {
      *param_3 = *(undefined4 *)(param_1 + 0x13c);
    }
  }
  return;
}



// FUNCTION 143bc2480 FUN_143bc2480 body=618 status=ok
// SIG undefined FUN_143bc2480(void)

undefined4
FUN_143bc2480(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_b8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_98 = 0x345ad82c;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x90;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_143b07bf0(&local_98,param_2,param_5);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    lVar3 = FUN_143aa7a40((longlong)param_4 << 3);
    if (lVar3 == 0) {
      *param_5 = 7;
      uVar2 = 0;
    }
    else {
      for (local_b8 = 0; local_b8 < param_4; local_b8 = local_b8 + 1) {
        uVar4 = FUN_143b07fe0(0,param_3 + (longlong)local_b8 * 0x28,param_5);
        *(undefined8 *)(lVar3 + (longlong)local_b8 * 8) = uVar4;
      }
      uVar2 = (**(code **)(*param_1 + 0x198))(param_1,&local_98,lVar3,param_4,param_5);
      for (local_b8 = 0; local_b8 < param_4; local_b8 = local_b8 + 1) {
        FUN_143b07390(*(undefined8 *)(lVar3 + (longlong)local_b8 * 8));
      }
      FUN_143aa79f0(lVar3);
      FUN_143b07390(&local_98);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bc26f0 FUN_143bc26f0 body=4662 status=ok
// SIG undefined FUN_143bc26f0(void)

int FUN_143bc26f0(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                 undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *in_stack_fffffffffffffc08;
  uint uVar6;
  ulonglong uVar5;
  undefined4 uVar7;
  int local_3e8;
  longlong local_3e0;
  int local_3d0;
  undefined4 local_3b0;
  int local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_4 < 1) {
      *param_5 = 1;
      local_3e8 = 0;
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2);
      local_3e0 = 0;
      if (param_1[0xf] == 0) {
        local_3e8 = 0;
      }
      else {
        local_3ac = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(*(undefined8 *)(param_1[1] + 0x70));
        for (local_3e8 = 0; uVar6 = (uint)((ulonglong)in_stack_fffffffffffffc08 >> 0x20),
            local_3e8 < param_4 + -1; local_3e8 = local_3e8 + 1) {
          cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
          if (cVar1 == '\0') {
            if (((*(longlong *)(param_2 + 0x20) == 0) &&
                (param_1[6] == *(longlong *)(param_2 + 0x10))) &&
               (param_1[6] == (longlong)*(int *)(param_2 + 0x1c))) {
              if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
                local_1b8 = 0x345ad82c;
                local_1b4 = 0;
                local_1b0 = 0;
                local_1ac = 0x90;
                local_1a8 = 0;
                local_1a0 = 0;
                local_19c = 0;
                local_198 = 0;
                local_190 = 0;
                local_18c = 0;
                local_188 = 0;
                local_180 = 0;
                local_178 = 0;
                local_170 = 0;
                local_168 = 0;
                local_160 = 0;
                local_158 = 0;
                local_150 = 0;
                local_148 = 0;
                local_140 = 0;
                local_13c = 0;
                local_138 = 0;
                local_130 = 0;
                local_12c = 0;
                FUN_143b07d10(&local_1b8,*(longlong *)(param_2 + 0x30) + local_3e0 * 2,
                              param_1[0xf] - local_3e0,param_5);
                uVar3 = FUN_143b07330(0,&local_1b8,1,0,param_5);
                *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
                FUN_143b07390(&local_1b8);
              }
              else {
                local_380 = param_1[0xf] - local_3e0;
                local_398 = *(longlong *)(param_2 + 0x30) + local_3e0 * 2;
                uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
                FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,local_398,
                              CONCAT44(uVar6,(int)local_380),param_5);
              }
            }
            else {
              local_3a8 = 0;
              lVar4 = (ulonglong)uVar6 << 0x20;
              iVar2 = FUN_143b076d0(param_2,local_3e0,param_1[0xf],0,lVar4,&local_3a8);
              uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
              lVar4 = FUN_143aa7a40((longlong)(iVar2 + 1) << 1);
              if (lVar4 == 0) {
                *param_5 = 7;
              }
              else {
                uVar3 = CONCAT44(uVar7,iVar2 + 1);
                FUN_143b076d0(param_2,local_3e0,param_1[0xf],lVar4,uVar3,param_5);
                uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
                if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
                  local_98 = 0x345ad82c;
                  local_94 = 0;
                  local_90 = 0;
                  local_8c = 0x90;
                  local_88 = 0;
                  local_80 = 0;
                  local_7c = 0;
                  local_78 = 0;
                  local_70 = 0;
                  local_6c = 0;
                  local_68 = 0;
                  local_60 = 0;
                  local_58 = 0;
                  local_50 = 0;
                  local_48 = 0;
                  local_40 = 0;
                  local_38 = 0;
                  local_30 = 0;
                  local_28 = 0;
                  local_20 = 0;
                  local_1c = 0;
                  local_18 = 0;
                  local_10 = 0;
                  local_c = 0;
                  FUN_143b07d10(&local_98,lVar4,(longlong)iVar2,param_5);
                  uVar3 = FUN_143b07330(0,&local_98,1,0,param_5);
                  *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
                  FUN_143b07390(&local_98);
                }
                else {
                  uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
                  FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,lVar4,
                                CONCAT44(uVar7,iVar2),param_5);
                }
                FUN_143aa79f0(lVar4);
              }
            }
            goto LAB_143bc3918;
          }
          in_stack_fffffffffffffc08 = param_5;
          if (((*(longlong *)(param_2 + 0x20) == 0) && (param_1[6] == *(longlong *)(param_2 + 0x10))
              ) && (param_1[6] == (longlong)*(int *)(param_2 + 0x1c))) {
            if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
              local_128 = 0x345ad82c;
              local_124 = 0;
              local_120 = 0;
              local_11c = 0x90;
              local_118 = 0;
              local_110 = 0;
              local_10c = 0;
              local_108 = 0;
              local_100 = 0;
              local_fc = 0;
              local_f8 = 0;
              local_f0 = 0;
              local_e8 = 0;
              local_e0 = 0;
              local_d8 = 0;
              local_d0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_ac = 0;
              local_a8 = 0;
              local_a0 = 0;
              local_9c = 0;
              FUN_143b07d10(&local_128,*(longlong *)(param_2 + 0x30) + local_3e0 * 2,
                            param_1[0x11] - local_3e0);
              uVar3 = FUN_143b07330(0,&local_128,1,0,param_5);
              *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
              FUN_143b07390(&local_128);
            }
            else {
              local_388 = param_1[0x11] - local_3e0;
              local_3a0 = *(longlong *)(param_2 + 0x30) + local_3e0 * 2;
              uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
              in_stack_fffffffffffffc08 = (undefined4 *)CONCAT44(uVar6,(int)local_388);
              FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,local_3a0,
                            in_stack_fffffffffffffc08,param_5);
            }
          }
          else {
            local_3a4 = 0;
            lVar4 = (ulonglong)uVar6 << 0x20;
            iVar2 = FUN_143b076d0(param_2,local_3e0,param_1[0x11],0,lVar4,&local_3a4);
            uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
            lVar4 = FUN_143aa7a40((longlong)(iVar2 + 1) << 1);
            if (lVar4 == 0) {
              *param_5 = 7;
              goto LAB_143bc3918;
            }
            uVar3 = CONCAT44(uVar7,iVar2 + 1);
            FUN_143b076d0(param_2,local_3e0,param_1[0x11],lVar4,uVar3,param_5);
            uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
            if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
              local_2d8 = 0x345ad82c;
              local_2d4 = 0;
              local_2d0 = 0;
              local_2cc = 0x90;
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 0;
              local_2b8 = 0;
              local_2b0 = 0;
              local_2ac = 0;
              local_2a8 = 0;
              local_2a0 = 0;
              local_298 = 0;
              local_290 = 0;
              local_288 = 0;
              local_280 = 0;
              local_278 = 0;
              local_270 = 0;
              local_268 = 0;
              local_260 = 0;
              local_25c = 0;
              local_258 = 0;
              local_250 = 0;
              local_24c = 0;
              FUN_143b07d10(&local_2d8,lVar4,(longlong)iVar2);
              uVar3 = FUN_143b07330(0,&local_2d8,1,0,param_5);
              *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
              FUN_143b07390(&local_2d8);
            }
            else {
              uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
              in_stack_fffffffffffffc08 = (undefined4 *)CONCAT44(uVar7,iVar2);
              FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,lVar4,
                            in_stack_fffffffffffffc08,param_5);
            }
            FUN_143aa79f0(lVar4);
          }
          local_3e0 = param_1[0x12];
          local_3d0 = 1;
          while ((local_3d0 <= local_3ac && (local_3e8 < param_4 + -2))) {
            local_3e8 = local_3e8 + 1;
            local_390 = *param_1;
            uVar3 = (**(code **)(local_390 + 0x40))
                              (param_1,local_3d0,*(undefined8 *)(param_3 + (longlong)local_3e8 * 8))
            ;
            *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
            local_3d0 = local_3d0 + 1;
          }
          if (local_3e0 == param_1[0xf]) {
            if (local_3e8 + 1 < param_4) {
              local_3e8 = local_3e8 + 1;
              if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
                uVar3 = FUN_143b07d10(0,0,0,param_5);
                *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
              }
              else {
                uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
                FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,
                              &DAT_146bc8474,
                              (ulonglong)in_stack_fffffffffffffc08 & 0xffffffff00000000,param_5);
              }
            }
            goto LAB_143bc3918;
          }
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 != '\0') goto LAB_143bc3918;
        }
        local_3e8 = param_4 + -1;
        if (local_3e0 < param_1[0xf]) {
          if (((*(longlong *)(param_2 + 0x20) == 0) && (param_1[6] == *(longlong *)(param_2 + 0x10))
              ) && (param_1[6] == (longlong)*(int *)(param_2 + 0x1c))) {
            if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
              local_368 = 0x345ad82c;
              local_364 = 0;
              local_360 = 0;
              local_35c = 0x90;
              local_358 = 0;
              local_350 = 0;
              local_34c = 0;
              local_348 = 0;
              local_340 = 0;
              local_33c = 0;
              local_338 = 0;
              local_330 = 0;
              local_328 = 0;
              local_320 = 0;
              local_318 = 0;
              local_310 = 0;
              local_308 = 0;
              local_300 = 0;
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 0;
              local_2e8 = 0;
              local_2e0 = 0;
              local_2dc = 0;
              FUN_143b07d10(&local_368,*(longlong *)(param_2 + 0x30) + local_3e0 * 2,
                            param_1[0xf] - local_3e0,param_5);
              uVar3 = FUN_143b07330(0,&local_368,1,0,param_5);
              *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
              FUN_143b07390(&local_368);
            }
            else {
              local_378 = param_1[0xf] - local_3e0;
              local_370 = *(longlong *)(param_2 + 0x30) + local_3e0 * 2;
              uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
              FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,local_370,
                            CONCAT44(uVar6,(int)local_378),param_5);
            }
          }
          else {
            local_3b0 = 0;
            uVar5 = (ulonglong)in_stack_fffffffffffffc08 & 0xffffffff00000000;
            iVar2 = FUN_143b076d0(param_2,local_3e0,param_1[0xf],0,uVar5,&local_3b0);
            uVar7 = (undefined4)(uVar5 >> 0x20);
            lVar4 = FUN_143aa7a40((longlong)(iVar2 + 1) << 1);
            if (lVar4 == 0) {
              *param_5 = 7;
            }
            else {
              uVar3 = CONCAT44(uVar7,iVar2 + 1);
              FUN_143b076d0(param_2,local_3e0,param_1[0xf],lVar4,uVar3,param_5);
              uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
              if (*(longlong *)(param_3 + (longlong)local_3e8 * 8) == 0) {
                local_248 = 0x345ad82c;
                local_244 = 0;
                local_240 = 0;
                local_23c = 0x90;
                local_238 = 0;
                local_230 = 0;
                local_22c = 0;
                local_228 = 0;
                local_220 = 0;
                local_21c = 0;
                local_218 = 0;
                local_210 = 0;
                local_208 = 0;
                local_200 = 0;
                local_1f8 = 0;
                local_1f0 = 0;
                local_1e8 = 0;
                local_1e0 = 0;
                local_1d8 = 0;
                local_1d0 = 0;
                local_1cc = 0;
                local_1c8 = 0;
                local_1c0 = 0;
                local_1bc = 0;
                FUN_143b07d10(&local_248,lVar4,(longlong)iVar2,param_5);
                uVar3 = FUN_143b07330(0,&local_248,1,0,param_5);
                *(undefined8 *)(param_3 + (longlong)local_3e8 * 8) = uVar3;
                FUN_143b07390(&local_248);
              }
              else {
                uVar3 = FUN_143b07900(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8));
                FUN_143b082f0(*(undefined8 *)(param_3 + (longlong)local_3e8 * 8),0,uVar3,lVar4,
                              CONCAT44(uVar7,iVar2),param_5);
              }
              FUN_143aa79f0(lVar4);
            }
          }
        }
LAB_143bc3918:
        local_3e8 = local_3e8 + 1;
      }
    }
  }
  else {
    local_3e8 = 0;
  }
  return local_3e8;
}



// FUNCTION 143bc3930 FUN_143bc3930 body=45 status=ok
// SIG undefined FUN_143bc3930(void)

void FUN_143bc3930(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x80))(param_1,0,param_2);
  return;
}



// FUNCTION 143bc3960 FUN_143bc3960 body=285 status=ok
// SIG undefined FUN_143bc3960(void)

undefined8 FUN_143bc3960(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x13c));
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x82) == '\0') {
        *param_3 = 0x10302;
        uVar3 = 0xffffffffffffffff;
      }
      else if ((param_2 < 0) ||
              (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                       ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70)),
              iVar2 < param_2)) {
        *param_3 = 8;
        uVar3 = 0xffffffffffffffff;
      }
      else if (param_2 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x88);
      }
      else {
        iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),param_2 + -1);
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)iVar2 * 8);
      }
    }
    else {
      *param_3 = *(undefined4 *)(param_1 + 0x13c);
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



// FUNCTION 143bc3a80 FUN_143bc3a80 body=42 status=ok
// SIG undefined FUN_143bc3a80(void)

void FUN_143bc3a80(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,0,param_2);
  return;
}



// FUNCTION 143bc3ab0 FUN_143bc3ab0 body=51 status=ok
// SIG undefined FUN_143bc3ab0(void)

void FUN_143bc3ab0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
  return;
}



// FUNCTION 143bc3af0 FUN_143bc3af0 body=151 status=ok
// SIG undefined FUN_143bc3af0(void)

longlong FUN_143bc3af0(longlong param_1,undefined1 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 0x81) = param_2;
  if (*(char *)(param_1 + 0x81) == '\0') {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x50) = local_18;
  if (*(char *)(param_1 + 0x81) == '\0') {
    local_10 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x58) = local_10;
  return param_1;
}



// FUNCTION 143bc3b90 FUN_143bc3b90 body=151 status=ok
// SIG undefined FUN_143bc3b90(void)

longlong FUN_143bc3b90(longlong param_1,undefined1 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 0x80) = param_2;
  if (*(char *)(param_1 + 0x80) == '\0') {
    local_18 = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    local_18 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = local_18;
  if (*(char *)(param_1 + 0x80) == '\0') {
    local_10 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x68) = local_10;
  return param_1;
}



// FUNCTION 143bc3c30 FUN_143bc3c30 body=387 status=ok
// SIG undefined FUN_143bc3c30(void)

undefined8 * FUN_143bc3c30(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  *param_1 = icu_53::RegexCompile::vftable;
  FUN_143a8ac30(param_1 + 0x26);
  FUN_143e1c860(param_1 + 0x2c,param_3);
  FUN_143b09f10(param_1 + 0x33,param_3);
  FUN_143b09f10(param_1 + 0x38,param_3);
  FUN_143bcf760(param_3);
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  param_1[6] = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  *(uint *)((longlong)param_1 + 0x124) = *(uint *)(param_1[2] + 0x18) | 0x80000000;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xffffffff;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_2 + 0x60));
    if (cVar1 != '\0') {
      *param_3 = *(undefined4 *)(param_2 + 0x60);
    }
  }
  return param_1;
}



// FUNCTION 143bc3dc0 FUN_143bc3dc0 body=105 status=ok
// SIG undefined FUN_143bc3dc0(void)

void FUN_143bc3dc0(undefined8 *param_1)

{
  *param_1 = icu_53::RegexCompile::vftable;
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1 + 0x38);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1 + 0x33);
  FUN_143e1c980(param_1 + 0x2c);
  FUN_143a8dc60(param_1 + 0x26);
  return;
}



// FUNCTION 143bc3e30 FUN_143bc3e30 body=54 status=ok
// SIG undefined FUN_143bc3e30(void)

undefined8 FUN_143bc3e30(undefined8 param_1,uint param_2)

{
  FUN_143bc3dc0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bc3e70 FUN_143bc3e70 body=64 status=ok
// SIG undefined FUN_143bc3e70(void)

void FUN_143bc3e70(longlong param_1,int param_2)

{
  *(byte *)(param_1 + (param_2 >> 3)) =
       *(byte *)(param_1 + (param_2 >> 3)) | (byte)(1 << ((byte)param_2 & 7));
  return;
}



// FUNCTION 143bc3eb0 FUN_143bc3eb0 body=140 status=ok
// SIG undefined FUN_143bc3eb0(void)

void FUN_143bc3eb0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_68 [104];
  
  uVar1 = FUN_143b11ea0(local_68);
  uVar1 = FUN_143b17570(uVar1,0x2000,param_2,param_3);
  (**(code **)(*param_1 + 0x70))(param_1,uVar1);
  FUN_143b11ff0(local_68);
  return;
}



// FUNCTION 143bc3f40 FUN_143bc3f40 body=127 status=ok
// SIG undefined FUN_143bc3f40(void)

void FUN_143bc3f40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x68))(param_1,0,8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x68))(plVar1,0xe,0x1b);
  (**(code **)(*plVar1 + 0x68))(plVar1,0x7f,0x9f);
  FUN_143bc3eb0(param_1,0x10000,param_2);
  return;
}



// FUNCTION 143bc3fc0 FUN_143bc3fc0 body=214 status=ok
// SIG undefined FUN_143bc3fc0(void)

int FUN_143bc3fc0(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  
  FUN_143bca630(param_1,1);
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
  if (iVar1 == *(int *)(param_1 + 0x184)) {
    local_18 = *(int *)(param_1 + 0x180);
  }
  else {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    local_18 = iVar1 + -1;
    uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_18);
    if (uVar2 >> 0x18 == 5) {
      local_18 = iVar1 + -2;
    }
    if (param_2 != '\0') {
      FUN_143e1d240(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,local_18,
                    *(undefined8 *)(param_1 + 8));
    }
  }
  return local_18;
}



// FUNCTION 143bc40a0 FUN_143bc40a0 body=475 status=ok
// SIG undefined FUN_143bc40a0(void)

void FUN_143bc40a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_c0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar2 = FUN_143a8d310(0x28);
  if (lVar2 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = FUN_143a8d3a0(lVar2,param_2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = local_c0;
  local_a8 = 0x345ad82c;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0x90;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_143b07bf0(&local_a8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    FUN_143bc4280(param_1,&local_a8,param_3,param_4);
    FUN_143b07390(&local_a8);
  }
  return;
}



// FUNCTION 143bc4280 FUN_143bc4280 body=1851 status=ok
// SIG undefined FUN_143bc4280(void)

void FUN_143bc4280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *local_78;
  ushort local_70;
  int local_6c;
  int local_68;
  longlong local_40;
  
  *(undefined4 **)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x58 + (longlong)*(int *)(param_1 + 0x120) * 2) = 0;
  cVar2 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar2 == '\0') {
    uVar5 = FUN_143b07330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),param_2,0,1,
                          *(undefined8 *)(param_1 + 8));
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar5;
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80) = DAT_146bc8478;
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) = DAT_146bc8478 + 0x68;
    uVar5 = FUN_143b07900(param_2);
    *(undefined8 *)(param_1 + 0x158) = uVar5;
    local_70 = 1;
    if ((*(uint *)(param_1 + 0x124) & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    FUN_143bccb90(param_1,param_1 + 0x48);
    while (cVar2 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8)), cVar2 == '\0') {
      local_78 = (undefined4 *)(&DAT_145d18ce0 + (ulonglong)local_70 * 8);
      while ((((((0x7e < *(byte *)(local_78 + 1) || (*(char *)(param_1 + 0x4c) != '\0')) ||
                ((uint)*(byte *)(local_78 + 1) != *(uint *)(param_1 + 0x48))) &&
               (*(char *)(local_78 + 1) != -1)) &&
              (((*(char *)(local_78 + 1) != -2 || (*(char *)(param_1 + 0x4c) == '\0')) &&
               ((*(char *)(local_78 + 1) != -3 || (*(int *)(param_1 + 0x48) != -1)))))) &&
             (((*(byte *)(local_78 + 1) < 0x80 || (0xef < *(byte *)(local_78 + 1))) ||
              ((*(char *)(param_1 + 0x4c) != '\0' ||
               ((*(int *)(param_1 + 0x48) == -1 ||
                (cVar2 = (**(code **)(*(longlong *)
                                       (DAT_146bc8478 + 0x208 +
                                       (longlong)(int)(*(byte *)(local_78 + 1) - 0x80) * 0x58) +
                                     0x30))(DAT_146bc8478 + 0x208 +
                                            (longlong)(int)(*(byte *)(local_78 + 1) - 0x80) * 0x58,
                                            *(undefined4 *)(param_1 + 0x48)), cVar2 == '\0')))))))))
      {
        local_78 = local_78 + 2;
      }
      cVar2 = FUN_143bc6a80(param_1,*local_78);
      if (cVar2 == '\0') break;
      if (*(char *)((longlong)local_78 + 6) != '\0') {
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
        if (99 < *(int *)(param_1 + 0x120)) {
          FUN_143bca470(param_1,0x10300);
          *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
        }
        *(ushort *)(param_1 + 0x58 + (longlong)*(int *)(param_1 + 0x120) * 2) =
             (ushort)*(byte *)((longlong)local_78 + 6);
      }
      if (*(char *)((longlong)local_78 + 7) != '\0') {
        FUN_143bccb90(param_1,param_1 + 0x48);
      }
      if (*(char *)((longlong)local_78 + 5) == -1) {
        local_70 = *(ushort *)(param_1 + 0x58 + (longlong)*(int *)(param_1 + 0x120) * 2);
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
        if (*(int *)(param_1 + 0x120) < 0) {
          *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
          FUN_143bca470(param_1,0x10306);
        }
      }
      else {
        local_70 = (ushort)*(byte *)((longlong)local_78 + 5);
      }
    }
    cVar2 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x78) = 1;
      local_68 = 10;
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
      for (; local_68 <= iVar3; local_68 = local_68 * 10) {
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x78) =
             *(int *)(*(longlong *)(param_1 + 0x10) + 0x78) + 1;
      }
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
           *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 2;
      FUN_143bce2c0(param_1);
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      uVar4 = FUN_143bcc6b0(param_1,3,iVar3 + -1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100) = uVar4;
      FUN_143bcb370(param_1);
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)iVar3;
      uVar5 = SUB168(ZEXT816(0x20) * auVar1,0);
      if (SUB168(ZEXT816(0x20) * auVar1,8) != 0) {
        uVar5 = 0xffffffffffffffff;
      }
      local_40 = FUN_143a8d310(uVar5);
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        _vector_constructor_iterator_(local_40,0x20,(longlong)iVar3,FUN_143b5dc90);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58) = local_40;
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58) == 0) {
        **(undefined4 **)(param_1 + 8) = 7;
        *param_4 = 7;
      }
      else {
        for (local_6c = 0; local_6c < iVar3; local_6c = local_6c + 1) {
          uVar5 = FUN_143b09610(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),local_6c);
          FUN_143bcb0b0((longlong)local_6c * 0x20 +
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58),uVar5);
        }
      }
    }
    else {
      while (cVar2 = FUN_143bca450(param_1 + 0x198), cVar2 == '\0') {
        puVar6 = (undefined8 *)FUN_143b0a040(param_1 + 0x198);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143bc49c0 FUN_143bc49c0 body=513 status=ok
// SIG undefined FUN_143bc49c0(void)

undefined8 FUN_143bc49c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_24;
  
  if ((*(int *)(param_1 + 0x18c) < 0xb) && (*(int *)(param_1 + 0x188) <= *(int *)(param_1 + 0x18c)))
  {
    iVar1 = FUN_143bc3fc0(param_1,0);
    if (*(int *)(param_1 + 0x18c) == 0) {
      FUN_143e1d440(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),iVar1);
      uVar5 = 1;
    }
    else {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      if ((iVar1 == iVar2 + -1) || (*(int *)(param_1 + 0x18c) == 1)) {
        iVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),iVar1);
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
        uVar4 = iVar3 + -1 + *(int *)(param_1 + 0x18c) +
                (*(int *)(param_1 + 0x18c) - *(int *)(param_1 + 0x188)) | 0x6000000;
        if (*(int *)(param_1 + 0x188) == 0) {
          FUN_143bcb120(param_1,iVar1);
          FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)uVar4,
                        iVar1);
        }
        for (local_24 = 1; local_24 < *(int *)(param_1 + 0x18c); local_24 = local_24 + 1) {
          if (local_24 == *(int *)(param_1 + 0x188)) {
            FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)uVar4
                          ,*(undefined8 *)(param_1 + 8));
          }
          if (*(int *)(param_1 + 0x188) < local_24) {
            FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)uVar4
                          ,*(undefined8 *)(param_1 + 8));
          }
          FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar2,
                        *(undefined8 *)(param_1 + 8));
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143bc4bd0 FUN_143bc4bd0 body=567 status=ok
// SIG undefined FUN_143bc4bd0(void)

void FUN_143bc4bd0(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_143bc3fc0(param_1,1);
  FUN_143bcb120(param_1,uVar1);
  FUN_143bcb120(param_1,uVar1);
  FUN_143bcb120(param_1,uVar1);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
  *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
       *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
  if (*(int *)(param_1 + 0x18c) < 0) {
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
  }
  FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)(int)(param_2 << 0x18 | uVar2),uVar1);
  uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
  FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)(int)(uVar2 | 0x1f000000),uVar1 + 1);
  FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)*(int *)(param_1 + 0x188),uVar1 + 2);
  FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)*(int *)(param_1 + 0x18c),uVar1 + 3);
  FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)(int)(param_3 << 0x18 | uVar1),*(undefined8 *)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x188) & 0xff000000) != 0) ||
     ((0 < *(int *)(param_1 + 0x18c) && ((*(uint *)(param_1 + 0x18c) & 0xff000000) != 0)))) {
    FUN_143bca470(param_1,0x10307);
  }
  if ((*(int *)(param_1 + 0x18c) < *(int *)(param_1 + 0x188)) && (*(int *)(param_1 + 0x18c) != -1))
  {
    FUN_143bca470(param_1,0x10309);
  }
  return;
}



// FUNCTION 143bc4e10 FUN_143bc4e10 body=442 status=ok
// SIG undefined FUN_143bc4e10(void)

void FUN_143bc4e10(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar1 == 0) {
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x1000000,
                    *(undefined8 *)(param_1 + 8));
      if (param_2 != (longlong *)0x0) {
        (**(code **)*param_2)(param_2,1);
      }
    }
    else if (iVar1 == 1) {
      uVar2 = FUN_143b13c30(param_2,0);
      FUN_143bcb340(param_1,uVar2);
      if (param_2 != (longlong *)0x0) {
        (**(code **)*param_2)(param_2,1);
      }
    }
    else {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50));
      FUN_143b09430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),param_2,
                    *(undefined8 *)(param_1 + 8));
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(uVar3 | 0xb000000),*(undefined8 *)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 143bc4fd0 FUN_143bc4fd0 body=6827 status=ok
// SIG undefined FUN_143bc4fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143bc4fd0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_918 [32];
  undefined8 local_8f8;
  longlong *local_8e8;
  undefined4 local_8e0;
  uint local_8dc;
  char local_8d8;
  char local_8d7;
  char local_8d6;
  char local_8d5;
  char local_8d4;
  char local_8d3;
  char local_8d2;
  char local_8d1;
  char local_8d0;
  char local_8cf;
  char local_8ce;
  char local_8cd;
  char local_8cc;
  char local_8cb;
  char local_8ca;
  char local_8c9;
  char local_8c8;
  char local_8c7;
  char local_8c6;
  char local_8c5;
  char local_8c4;
  char local_8c3;
  char local_8c2;
  char local_8c1;
  uint local_8c0;
  uint local_8bc;
  uint local_8b8;
  uint local_8b4;
  uint local_8b0;
  uint local_8ac;
  uint local_8a8;
  uint local_8a4;
  uint local_8a0;
  uint local_89c;
  uint local_898;
  uint local_894;
  uint local_890;
  uint local_88c;
  undefined4 local_888;
  uint local_884;
  undefined4 local_880;
  uint local_87c;
  uint local_878;
  uint local_874;
  uint local_870;
  uint local_86c;
  uint local_868;
  uint local_864;
  uint local_860;
  longlong *local_858;
  longlong *local_850;
  longlong *local_848;
  longlong *local_840;
  longlong *local_838;
  longlong *local_830;
  longlong local_828;
  longlong local_820;
  longlong *local_818;
  longlong local_810;
  longlong *local_808;
  longlong local_800;
  longlong *local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  longlong *local_7e0;
  undefined8 local_7d8;
  longlong *local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  longlong *local_7b0;
  undefined8 local_7a8;
  longlong *local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  longlong *local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  longlong local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  longlong *local_6b8;
  undefined8 local_6b0;
  longlong *local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  longlong *local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  longlong *local_628;
  longlong *local_620;
  longlong *local_618;
  undefined8 local_610;
  longlong *local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined1 local_568 [88];
  undefined1 local_510 [40];
  undefined1 local_4e8 [40];
  undefined1 local_4c0 [40];
  undefined1 local_498 [40];
  undefined1 local_470 [40];
  undefined1 local_448 [40];
  undefined1 local_420 [40];
  undefined1 local_3f8 [40];
  undefined1 local_3d0 [40];
  undefined1 local_3a8 [40];
  undefined1 local_380 [40];
  undefined1 local_358 [40];
  undefined1 local_330 [40];
  undefined1 local_308 [40];
  undefined1 local_2e0 [40];
  undefined1 local_2b8 [40];
  undefined1 local_290 [40];
  undefined1 local_268 [40];
  undefined1 local_240 [40];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [40];
  undefined1 local_1a0 [40];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_570 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_918;
  local_8dc = 0;
  FUN_143a8ac30(local_4e8);
  local_8c0 = 0;
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 != '\0') {
    local_628 = (longlong *)0x0;
    FUN_143a8dc60(local_4e8);
    return local_628;
  }
  if (param_3 == '\0') {
    FUN_143b17350(local_4e8,L"[\\p{",0xffffffff);
  }
  else {
    FUN_143b17350(local_4e8,L"[\\P{",0xffffffff);
  }
  FUN_143a8e070(local_4e8,param_2);
  FUN_143acc590(local_4e8,0x7d);
  FUN_143acc590(local_4e8,0x5d);
  if ((*(uint *)(param_1 + 0x124) & 2) != 0) {
    local_8c0 = local_8c0 | 2;
  }
  local_820 = FUN_143a8d310(0x58);
  if (local_820 == 0) {
    local_830 = (longlong *)0x0;
  }
  else {
    local_8f8 = *(undefined8 *)(param_1 + 8);
    local_830 = (longlong *)FUN_143e21f60(local_820,local_4e8,local_8c0,0);
  }
  local_7e0 = local_830;
  local_8e8 = local_830;
  cVar1 = FUN_143a8b110(**(undefined4 **)(param_1 + 8));
  if (cVar1 != '\0') {
    local_620 = local_8e8;
    FUN_143a8dc60(local_4e8);
    return local_620;
  }
  local_7d0 = local_8e8;
  local_858 = local_8e8;
  if (local_8e8 == (longlong *)0x0) {
    local_5a0 = 0;
  }
  else {
    local_5a0 = (**(code **)*local_8e8)(local_8e8,1);
  }
  local_8e8 = (longlong *)0x0;
  local_7c0 = FUN_143a8d4f0(local_290,1,L"word",0xffffffff);
  local_610 = local_7c0;
  cVar1 = FUN_143ab9d90(param_2,local_7c0,0);
  local_8c2 = cVar1 == '\0';
  local_8a8 = (uint)(byte)local_8c2;
  FUN_143a8dc60(local_290);
  if (local_8c2 != '\0') {
    **(undefined4 **)(param_1 + 8) = 0;
    local_810 = FUN_143a8d310(0x58);
    if (local_810 == 0) {
      local_840 = (longlong *)0x0;
    }
    else {
      local_840 = (longlong *)
                  FUN_143b11bb0(local_810,
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80) + 8));
    }
    local_7b0 = local_840;
    local_8e8 = local_840;
    if (local_840 == (longlong *)0x0) {
      **(undefined4 **)(param_1 + 8) = 7;
      local_5c0 = local_840;
      FUN_143a8dc60(local_4e8);
      return local_5c0;
    }
    if (param_3 != '\0') {
      (**(code **)(*local_840 + 0xa8))(local_840);
    }
    local_7a0 = local_8e8;
    FUN_143a8dc60(local_4e8);
    return local_7a0;
  }
  FUN_143a8d3a0(local_510,param_2);
  local_790 = FUN_143a8d4f0(local_38,1,L"InGreek",0xffffffff);
  local_600 = local_790;
  cVar1 = FUN_143ab9d90(local_510,local_790,0);
  local_8cd = cVar1 == '\0';
  local_894 = (uint)(byte)local_8cd;
  FUN_143a8dc60(local_38);
  if (local_8cd != '\0') {
    local_780 = FUN_143a8d4f0(local_470,1,L"InGreek and Coptic",0xffffffff);
    local_580 = local_780;
    FUN_143a8dcd0(local_510,local_780);
    FUN_143a8dc60(local_470);
  }
  local_770 = FUN_143a8d4f0(local_420,1,L"InCombining Marks for Symbols",0xffffffff);
  local_8dc = local_8dc | 1;
  local_678 = local_770;
  cVar1 = FUN_143ab9d90(local_510,local_770,0);
  if (cVar1 == '\0') {
LAB_143bc557c:
    local_888 = 1;
  }
  else {
    local_760 = FUN_143a8d4f0(local_240,1,L"InCombiningMarksforSymbols",0xffffffff);
    local_8dc = local_8dc | 2;
    local_668 = local_760;
    cVar1 = FUN_143ab9d90(local_510,local_760,0);
    if (cVar1 == '\0') goto LAB_143bc557c;
    local_888 = 0;
  }
  local_8c6 = (char)local_888;
  if ((local_8dc & 2) != 0) {
    local_8dc = local_8dc & 0xfffffffd;
    FUN_143a8dc60(local_240);
  }
  if ((local_8dc & 1) != 0) {
    local_8dc = local_8dc & 0xfffffffe;
    FUN_143a8dc60(local_420);
  }
  if (local_8c6 == '\0') {
    local_740 = FUN_143a8d4f0(local_3d0,1,&DAT_145d19618,0xffffffff);
    local_648 = local_740;
    cVar1 = FUN_143b0fd00(local_510,local_740);
    local_8c4 = cVar1 == '\0';
    local_8b0 = (uint)(byte)local_8c4;
    FUN_143a8dc60(local_3d0);
    if (local_8c4 != '\0') {
      local_730 = FUN_143a8d4f0(local_1f0,1,L"javaValidCodePoint",0xffffffff);
      local_638 = local_730;
      FUN_143a8dcd0(local_510,local_730);
      FUN_143a8dc60(local_1f0);
    }
  }
  else {
    local_750 = FUN_143a8d4f0(local_b0,1,L"InCombining Diacritical Marks for Symbols",0xffffffff);
    local_658 = local_750;
    FUN_143a8dcd0(local_510,local_750);
    FUN_143a8dc60(local_b0);
  }
  cVar1 = FUN_143b4d510(local_510,&DAT_145d194e0,2);
  if ((cVar1 != '\0') && (iVar2 = FUN_143a904f0(param_2), 2 < iVar2)) {
    FUN_143a99400(local_4e8,4);
    FUN_143b17350(local_4e8,L"Block=",0xffffffff);
    local_7f0 = FUN_143a8d400(local_380,local_510,2);
    local_720 = local_7f0;
    FUN_143a8e070(local_4e8,local_7f0);
    FUN_143a8dc60(local_380);
    FUN_143acc590(local_4e8,0x7d);
    FUN_143acc590(local_4e8,0x5d);
    **(undefined4 **)(param_1 + 8) = 0;
    local_800 = FUN_143a8d310(0x58);
    if (local_800 == 0) {
      local_838 = (longlong *)0x0;
    }
    else {
      local_8f8 = *(undefined8 *)(param_1 + 8);
      local_838 = (longlong *)FUN_143e21f60(local_800,local_4e8,local_8c0,0);
    }
    local_618 = local_838;
    local_8e8 = local_838;
    cVar1 = FUN_143a8b110(**(undefined4 **)(param_1 + 8));
    if (cVar1 != '\0') {
      local_710 = local_8e8;
      FUN_143a8dc60(local_510);
      FUN_143a8dc60(local_4e8);
      return local_710;
    }
    local_608 = local_8e8;
    local_850 = local_8e8;
    if (local_8e8 == (longlong *)0x0) {
      local_700 = 0;
    }
    else {
      local_700 = (**(code **)*local_8e8)(local_8e8,1);
    }
    local_8e8 = (longlong *)0x0;
  }
  local_6f0 = FUN_143a8d4f0(local_330,1,L"java",0xffffffff);
  local_8dc = local_8dc | 4;
  local_5f8 = local_6f0;
  cVar1 = FUN_143b73b70(param_2,local_6f0);
  if (cVar1 == '\0') {
    local_6e0 = FUN_143a8d4f0(local_100,1,&DAT_145d19618,0xffffffff);
    local_8dc = local_8dc | 8;
    local_5e8 = local_6e0;
    cVar1 = FUN_143b0fd00(param_2,local_6e0);
    if (cVar1 != '\0') {
      local_880 = 0;
      goto LAB_143bc59f8;
    }
  }
  local_880 = 1;
LAB_143bc59f8:
  local_8cb = (char)local_880;
  if ((local_8dc & 8) != 0) {
    local_8dc = local_8dc & 0xfffffff7;
    FUN_143a8dc60(local_100);
  }
  if ((local_8dc & 4) != 0) {
    local_8dc = local_8dc & 0xfffffffb;
    FUN_143a8dc60(local_330);
  }
  if (local_8cb != '\0') {
    local_8e0 = 0;
    local_828 = FUN_143a8d310(0x58);
    if (local_828 == 0) {
      local_818 = (longlong *)0x0;
    }
    else {
      local_818 = (longlong *)FUN_143b11ea0(local_828);
    }
    local_5d8 = local_818;
    local_8e8 = local_818;
    local_6d0 = FUN_143a8d4f0(local_1a0,1,L"javaDefined",0xffffffff);
    local_5c8 = local_6d0;
    cVar1 = FUN_143b0fd00(local_510,local_6d0);
    local_8d5 = cVar1 == '\0';
    local_8bc = (uint)(byte)local_8d5;
    FUN_143a8dc60(local_1a0);
    if (local_8d5 == '\0') {
      local_6c0 = FUN_143a8d4f0(local_2e0,1,L"javaDigit",0xffffffff);
      local_5b8 = local_6c0;
      cVar1 = FUN_143b0fd00(local_510,local_6c0);
      local_8c5 = cVar1 == '\0';
      local_878 = (uint)(byte)local_8c5;
      FUN_143a8dc60(local_2e0);
      if (local_8c5 == '\0') {
        local_6b0 = FUN_143a8d4f0(local_60,1,L"javaIdentifierIgnorable",0xffffffff);
        local_5a8 = local_6b0;
        cVar1 = FUN_143b0fd00(local_510,local_6b0);
        local_8d3 = cVar1 == '\0';
        local_8a0 = (uint)(byte)local_8d3;
        FUN_143a8dc60(local_60);
        if (local_8d3 == '\0') {
          local_6a0 = FUN_143a8d4f0(local_4c0,1,L"javaISOControl",0xffffffff);
          local_598 = local_6a0;
          cVar1 = FUN_143b0fd00(local_510,local_6a0);
          local_8c9 = cVar1 == '\0';
          local_870 = (uint)(byte)local_8c9;
          FUN_143a8dc60(local_4c0);
          if (local_8c9 == '\0') {
            local_690 = FUN_143a8d4f0(local_150,1,L"javaJavaIdentifierPart",0xffffffff);
            local_588 = local_690;
            cVar1 = FUN_143b0fd00(local_510,local_690);
            local_8d1 = cVar1 == '\0';
            local_898 = (uint)(byte)local_8d1;
            FUN_143a8dc60(local_150);
            if (local_8d1 == '\0') {
              local_680 = FUN_143a8d4f0(local_498,1,L"javaJavaIdentifierStart",0xffffffff);
              local_578 = local_680;
              cVar1 = FUN_143b0fd00(local_510,local_680);
              local_8c1 = cVar1 == '\0';
              local_868 = (uint)(byte)local_8c1;
              FUN_143a8dc60(local_498);
              if (local_8c1 == '\0') {
                local_670 = FUN_143a8d4f0(local_448,1,L"javaLetter",0xffffffff);
                local_5f0 = local_670;
                cVar1 = FUN_143b0fd00(local_510,local_670);
                local_8cf = cVar1 == '\0';
                local_890 = (uint)(byte)local_8cf;
                FUN_143a8dc60(local_448);
                if (local_8cf == '\0') {
                  local_660 = FUN_143a8d4f0(local_3f8,1,L"javaLetterOrDigit",0xffffffff);
                  local_5b0 = local_660;
                  cVar1 = FUN_143b0fd00(local_510,local_660);
                  local_8c7 = cVar1 == '\0';
                  local_860 = (uint)(byte)local_8c7;
                  FUN_143a8dc60(local_3f8);
                  if (local_8c7 == '\0') {
                    local_650 = FUN_143a8d4f0(local_3a8,1,L"javaLowerCase",0xffffffff);
                    local_5e0 = local_650;
                    cVar1 = FUN_143b0fd00(local_510,local_650);
                    local_8d8 = cVar1 == '\0';
                    local_874 = (uint)(byte)local_8d8;
                    FUN_143a8dc60(local_3a8);
                    if (local_8d8 == '\0') {
                      local_640 = FUN_143a8d4f0(local_358,1,L"javaMirrored",0xffffffff);
                      local_590 = local_640;
                      cVar1 = FUN_143b0fd00(local_510,local_640);
                      local_8c3 = cVar1 == '\0';
                      local_884 = (uint)(byte)local_8c3;
                      FUN_143a8dc60(local_358);
                      if (local_8c3 == '\0') {
                        local_630 = FUN_143a8d4f0(local_308,1,L"javaSpaceChar",0xffffffff);
                        local_5d0 = local_630;
                        cVar1 = FUN_143b0fd00(local_510,local_630);
                        local_8d7 = cVar1 == '\0';
                        local_864 = (uint)(byte)local_8d7;
                        FUN_143a8dc60(local_308);
                        if (local_8d7 == '\0') {
                          local_7e8 = FUN_143a8d4f0(local_2b8,1,L"javaSupplementaryCodePoint",
                                                    0xffffffff);
                          local_7d8 = local_7e8;
                          cVar1 = FUN_143b0fd00(local_510,local_7e8);
                          local_8d6 = cVar1 == '\0';
                          local_87c = (uint)(byte)local_8d6;
                          FUN_143a8dc60(local_2b8);
                          if (local_8d6 == '\0') {
                            local_7c8 = FUN_143a8d4f0(local_268,1,L"javaTitleCase",0xffffffff);
                            local_7b8 = local_7c8;
                            cVar1 = FUN_143b0fd00(local_510,local_7c8);
                            local_8d4 = cVar1 == '\0';
                            local_86c = (uint)(byte)local_8d4;
                            FUN_143a8dc60(local_268);
                            if (local_8d4 == '\0') {
                              local_7a8 = FUN_143a8d4f0(local_218,1,L"javaUnicodeIdentifierStart",
                                                        0xffffffff);
                              local_798 = local_7a8;
                              cVar1 = FUN_143b0fd00(local_510,local_7a8);
                              local_8d2 = cVar1 == '\0';
                              local_88c = (uint)(byte)local_8d2;
                              FUN_143a8dc60(local_218);
                              if (local_8d2 == '\0') {
                                local_788 = FUN_143a8d4f0(local_1c8,1,L"javaUnicodeIdentifierPart",
                                                          0xffffffff);
                                local_778 = local_788;
                                cVar1 = FUN_143b0fd00(local_510,local_788);
                                local_8d0 = cVar1 == '\0';
                                local_8b8 = (uint)(byte)local_8d0;
                                FUN_143a8dc60(local_1c8);
                                if (local_8d0 == '\0') {
                                  local_768 = FUN_143a8d4f0(local_178,1,L"javaUpperCase",0xffffffff)
                                  ;
                                  local_758 = local_768;
                                  cVar1 = FUN_143b0fd00(local_510,local_768);
                                  local_8ce = cVar1 == '\0';
                                  local_8b4 = (uint)(byte)local_8ce;
                                  FUN_143a8dc60(local_178);
                                  if (local_8ce == '\0') {
                                    local_748 = FUN_143a8d4f0(local_128,1,L"javaValidCodePoint",
                                                              0xffffffff);
                                    local_738 = local_748;
                                    cVar1 = FUN_143b0fd00(local_510,local_748);
                                    local_8cc = cVar1 == '\0';
                                    local_8ac = (uint)(byte)local_8cc;
                                    FUN_143a8dc60(local_128);
                                    if (local_8cc == '\0') {
                                      local_728 = FUN_143a8d4f0(local_d8,1,L"javaWhitespace",
                                                                0xffffffff);
                                      local_718 = local_728;
                                      cVar1 = FUN_143b0fd00(local_510,local_728);
                                      local_8ca = cVar1 == '\0';
                                      local_8a4 = (uint)(byte)local_8ca;
                                      FUN_143a8dc60(local_d8);
                                      if (local_8ca == '\0') {
                                        local_6d8 = FUN_143a8d4f0(local_88,1,&DAT_145d19618,
                                                                  0xffffffff);
                                        local_6c8 = local_6d8;
                                        cVar1 = FUN_143b0fd00(local_510,local_6d8);
                                        local_8c8 = cVar1 == '\0';
                                        local_89c = (uint)(byte)local_8c8;
                                        FUN_143a8dc60(local_88);
                                        if (local_8c8 != '\0') {
                                          (**(code **)(*local_8e8 + 0x68))(local_8e8,0,0x10ffff);
                                        }
                                      }
                                      else {
                                        FUN_143bc3eb0(local_8e8,0x7000,&local_8e0);
                                        local_708 = FUN_143b11ea0(local_568);
                                        local_6f8 = local_708;
                                        uVar3 = FUN_143b13590(local_708,0xa0);
                                        uVar3 = FUN_143b13590(uVar3,0x2007);
                                        uVar3 = FUN_143b13590(uVar3,0x202f);
                                        local_6e8 = *local_8e8;
                                        (**(code **)(local_6e8 + 0x88))(local_8e8,uVar3);
                                        FUN_143b11ff0(local_568);
                                        local_7f8 = (longlong *)
                                                    (**(code **)(*local_8e8 + 0x68))
                                                              (local_8e8,9,0xd);
                                        (**(code **)(*local_7f8 + 0x68))(local_7f8,0x1c,0x1f);
                                      }
                                    }
                                    else {
                                      (**(code **)(*local_8e8 + 0x68))(local_8e8,0,0x10ffff);
                                    }
                                  }
                                  else {
                                    FUN_143bc3eb0(local_8e8,2,&local_8e0);
                                  }
                                }
                                else {
                                  FUN_143bc3eb0(local_8e8,0x3e,&local_8e0);
                                  FUN_143bc3eb0(local_8e8,0x400000,&local_8e0);
                                  FUN_143bc3eb0(local_8e8,0x200,&local_8e0);
                                  FUN_143bc3eb0(local_8e8,0x400,&local_8e0);
                                  FUN_143bc3eb0(local_8e8,0x100,&local_8e0);
                                  FUN_143bc3eb0(local_8e8,0x40,&local_8e0);
                                  FUN_143bc3f40(local_8e8,&local_8e0);
                                }
                              }
                              else {
                                FUN_143bc3eb0(local_8e8,0x3e,&local_8e0);
                                FUN_143bc3eb0(local_8e8,0x400,&local_8e0);
                              }
                            }
                            else {
                              FUN_143bc3eb0(local_8e8,8,&local_8e0);
                            }
                          }
                          else {
                            (**(code **)(*local_8e8 + 0x68))(local_8e8,0x10000,0x10ffff);
                          }
                        }
                        else {
                          FUN_143bc3eb0(local_8e8,0x7000,&local_8e0);
                        }
                      }
                      else {
                        FUN_143b17570(local_8e8,3,1,&local_8e0);
                      }
                    }
                    else {
                      FUN_143bc3eb0(local_8e8,4,&local_8e0);
                    }
                  }
                  else {
                    FUN_143bc3eb0(local_8e8,0x3e,&local_8e0);
                    FUN_143bc3eb0(local_8e8,0x200,&local_8e0);
                  }
                }
                else {
                  FUN_143bc3eb0(local_8e8,0x3e,&local_8e0);
                }
              }
              else {
                FUN_143bc3eb0(local_8e8,0x3e,&local_8e0);
                FUN_143bc3eb0(local_8e8,0x400,&local_8e0);
                FUN_143bc3eb0(local_8e8,0x2000000,&local_8e0);
                FUN_143bc3eb0(local_8e8,0x400000,&local_8e0);
              }
            }
            else {
              FUN_143bc3eb0(local_8e8,0x3e,&local_8e0);
              FUN_143bc3eb0(local_8e8,0x2000000,&local_8e0);
              FUN_143bc3eb0(local_8e8,0x400000,&local_8e0);
              FUN_143bc3eb0(local_8e8,0x200,&local_8e0);
              FUN_143bc3eb0(local_8e8,0x400,&local_8e0);
              FUN_143bc3eb0(local_8e8,0x100,&local_8e0);
              FUN_143bc3eb0(local_8e8,0x40,&local_8e0);
              FUN_143bc3f40(local_8e8,&local_8e0);
            }
          }
          else {
            local_808 = (longlong *)(**(code **)(*local_8e8 + 0x68))(local_8e8,0,0x1f);
            (**(code **)(*local_808 + 0x68))(local_808,0x7f,0x9f);
          }
        }
        else {
          FUN_143bc3f40(local_8e8,&local_8e0);
        }
      }
      else {
        FUN_143bc3eb0(local_8e8,0x200,&local_8e0);
      }
    }
    else {
      FUN_143bc3eb0(local_8e8,1,&local_8e0);
      (**(code **)(*local_8e8 + 0xa8))(local_8e8);
    }
    cVar1 = FUN_143a8b110(local_8e0);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*local_8e8 + 0x50))(local_8e8), cVar1 == '\0')) {
      **(undefined4 **)(param_1 + 8) = 0;
      if ((local_8c0 & 2) != 0) {
        FUN_143e224c0(local_8e8,2);
      }
      if (param_3 != '\0') {
        (**(code **)(*local_8e8 + 0xa8))(local_8e8);
      }
      local_6b8 = local_8e8;
      FUN_143a8dc60(local_510);
      FUN_143a8dc60(local_4e8);
      return local_6b8;
    }
    local_6a8 = local_8e8;
    local_848 = local_8e8;
    if (local_8e8 == (longlong *)0x0) {
      local_698 = 0;
    }
    else {
      local_698 = (**(code **)*local_8e8)(local_8e8,1);
    }
    local_8e8 = (longlong *)0x0;
  }
  FUN_143bca470(param_1,**(undefined4 **)(param_1 + 8));
  local_688 = (longlong *)0x0;
  FUN_143a8dc60(local_510);
  FUN_143a8dc60(local_4e8);
  return local_688;
}



// FUNCTION 143bc6a80 FUN_143bc6a80 body=14193 status=ok
// SIG undefined FUN_143bc6a80(void)

undefined1 FUN_143bc6a80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_398;
  uint local_390;
  uint local_368;
  uint local_364;
  uint local_360;
  int local_350;
  int local_34c;
  undefined4 local_334;
  undefined4 local_330;
  int local_308;
  int local_300;
  uint local_2f8;
  uint local_2e4;
  undefined8 local_210;
  undefined1 local_128 [96];
  undefined1 local_c8 [96];
  undefined1 local_68 [104];
  
  local_398 = 1;
  switch(param_2) {
  case 0:
    FUN_143bcb340(param_1,*(undefined4 *)(param_1 + 0x48));
    break;
  case 1:
    FUN_143bcdf20(param_1,0x10002);
    FUN_143b0a0a0(param_1 + 0x1c0);
    break;
  case 2:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x17000000,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 3:
    FUN_143bce210(param_1,0x40006);
    FUN_143b1dc80(param_1 + 0x1c0,1,*(undefined8 *)(param_1 + 8));
    if ((*(uint *)(param_1 + 0x124) & 2) != 0) {
      FUN_143b1dc80(param_1 + 0x1c0,0x20009,*(undefined8 *)(param_1 + 8));
    }
    break;
  case 4:
    break;
  case 5:
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    (**(code **)(*plVar7 + 0x70))(plVar7,*(undefined8 *)(DAT_146bc8478 + 8));
    break;
  case 6:
    if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x1e8)) {
      FUN_143bca470(param_1,0x10310);
    }
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    (**(code **)(*plVar7 + 0x68))
              (plVar7,*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x48));
    break;
  case 7:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x11000000,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 8:
  case 0x3d:
    FUN_143bca470(param_1,0x10305);
    break;
  case 9:
    uVar8 = FUN_143bcd570(param_1 + 0x198);
    FUN_143b13590(uVar8,0x2d);
    break;
  case 10:
    iVar4 = FUN_143a9da10(*(undefined4 *)(param_1 + 0x48));
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) * 10 + iVar4;
    if (*(int *)(param_1 + 0x188) < 0) {
      FUN_143bca470(param_1,0x10307);
    }
    break;
  case 0xb:
    FUN_143bca630(param_1,0);
    uVar8 = FUN_143bcdd60(param_1);
    FUN_143bc4e10(param_1,uVar8);
    break;
  case 0xc:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x13000000,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0xd:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 1;
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x20000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffffd,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -3,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0xe:
    if (((*(uint *)(param_1 + 0x124) & 0x200) != 0) &&
       (((0x40 < *(int *)(param_1 + 0x48) && (*(int *)(param_1 + 0x48) < 0x5b)) ||
        ((0x60 < *(int *)(param_1 + 0x48) && (*(int *)(param_1 + 0x48) < 0x7b)))))) {
      FUN_143bca470(param_1,0x10303);
    }
    FUN_143bcdf20(param_1,0x40006);
    uVar8 = FUN_143bcd570(param_1 + 0x198);
    FUN_143b13590(uVar8,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x48);
    break;
  case 0xf:
    FUN_143bca8d0(param_1);
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x160);
    if (0 < iVar4) {
      FUN_143bca470(param_1,0x10306);
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x2000000,
                  *(undefined8 *)(param_1 + 8));
    local_398 = 0;
    break;
  case 0x10:
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    FUN_143b11ea0(local_128);
    FUN_143b17570(local_128,0x2000,0x200,*(undefined8 *)(param_1 + 8));
    FUN_143b140b0(local_128);
    (**(code **)(*plVar7 + 0x70))(plVar7,local_128);
    FUN_143b11ff0(local_128);
    break;
  case 0x11:
    FUN_143bce210(param_1,0x30004);
    break;
  case 0x12:
    uVar6 = FUN_143bcd720(param_1);
    FUN_143bcb340(param_1,uVar6);
    break;
  case 0x13:
    uVar3 = FUN_143bc3fc0(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x6000000),*(undefined8 *)(param_1 + 8));
    break;
  case 0x14:
    FUN_143bca630(param_1,0);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 4;
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x2c000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x2f000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffff8,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -2,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0x15:
    FUN_143bca470(param_1,0x10308);
    break;
  case 0x16:
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x188);
    break;
  case 0x17:
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
    local_364 = 0;
    local_330 = *(undefined4 *)(param_1 + 0x48);
    while( true ) {
      iVar5 = FUN_143a9da10(local_330);
      local_364 = local_364 * 10 + iVar5;
      if (iVar4 <= (int)local_364) break;
      local_330 = FUN_143bcd590(param_1);
      cVar1 = (**(code **)(**(longlong **)(DAT_146bc8478 + 0x5d0) + 0x30))
                        (*(undefined8 *)(DAT_146bc8478 + 0x5d0),local_330);
      if (cVar1 == '\0') break;
      FUN_143bcd3f0(param_1);
    }
    FUN_143bca630(param_1,0);
    if ((*(uint *)(param_1 + 0x124) & 2) == 0) {
      local_2f8 = local_364 | 0x22000000;
    }
    else {
      local_2f8 = local_364 | 0x29000000;
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)local_2f8,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x18:
    uVar3 = FUN_143bc3fc0(param_1,0);
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    if (uVar3 == iVar4 - 1U) {
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar3);
      if (uVar2 >> 0x18 == 0xb) {
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      uVar2 & 0xffffff | 0x32000000,*(undefined8 *)(param_1 + 8));
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
             *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      (longlong)(int)(uVar3 | 0x33000000),*(undefined8 *)(param_1 + 8));
        break;
      }
      if (((uVar2 >> 0x18 == 0xc) || (uVar2 >> 0x18 == 0x15)) || (uVar2 >> 0x18 == 0x1b)) {
        local_360 = 0x34000000;
        if (uVar2 >> 0x18 == 0x15) {
          local_360 = 0x34000001;
        }
        if ((*(uint *)(param_1 + 0x124) & 1) != 0) {
          local_360 = local_360 | 2;
        }
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_360,
                      *(undefined8 *)(param_1 + 8));
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
             *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      (longlong)(int)(uVar3 | 0x33000000),*(undefined8 *)(param_1 + 8));
        break;
      }
    }
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    iVar4 = FUN_143bcc6b0(param_1,uVar3,iVar4 + -1);
    if (iVar4 == 0) {
      FUN_143bcb120(param_1,uVar3);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
           *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
      FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(uVar2 | 0x23000000),uVar3);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(uVar3 + 1 | 0x12000000),*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(uVar3 | 0xf000000),*(undefined8 *)(param_1 + 8));
    }
    break;
  case 0x19:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 3;
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x8000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffffe,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -3,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    FUN_143b58ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),uVar3,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x1a:
    FUN_143bca470(param_1,0x10306);
    break;
  case 0x1b:
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x124);
    *(undefined1 *)(param_1 + 300) = 1;
    break;
  case 0x1c:
    FUN_143bca470(param_1,0x10303);
    break;
  case 0x1d:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xffffffff,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -2,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0x1e:
    FUN_143bca630(param_1,0);
    local_350 = 0;
    if (((*(uint *)(param_1 + 0x124) & 8) == 0) && ((*(uint *)(param_1 + 0x124) & 1) == 0)) {
      local_350 = 0x18;
    }
    else if (((*(uint *)(param_1 + 0x124) & 8) == 0) || ((*(uint *)(param_1 + 0x124) & 1) != 0)) {
      if (((*(uint *)(param_1 + 0x124) & 8) == 0) && ((*(uint *)(param_1 + 0x124) & 1) != 0)) {
        local_350 = 0x36;
      }
      else if (((*(uint *)(param_1 + 0x124) & 8) != 0) && ((*(uint *)(param_1 + 0x124) & 1) != 0)) {
        local_350 = 0x37;
      }
    }
    else {
      local_350 = 0x2a;
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_350 << 0x18,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x1f:
    puVar10 = (undefined8 *)FUN_143bcdd60(param_1);
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
      (**(code **)(*plVar7 + 0x70))(plVar7,puVar10);
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    break;
  case 0x20:
    if (*(int *)(param_1 + 0x18c) < 0) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
    }
    iVar4 = FUN_143a9da10(*(undefined4 *)(param_1 + 0x48));
    *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) * 10 + iVar4;
    if (*(int *)(param_1 + 0x18c) < 0) {
      FUN_143bca470(param_1,0x10307);
    }
    break;
  case 0x21:
    FUN_143bca630(param_1,0);
    lVar9 = FUN_143a8d310(0x58);
    if (lVar9 == 0) {
      local_210 = 0;
    }
    else {
      local_210 = FUN_143b11ea0(lVar9);
    }
    FUN_143acb220(param_1 + 0x198,local_210,*(undefined8 *)(param_1 + 8));
    FUN_143b1dc80(param_1 + 0x1c0,1,*(undefined8 *)(param_1 + 8));
    if ((*(uint *)(param_1 + 0x124) & 2) != 0) {
      FUN_143b1dc80(param_1 + 0x1c0,0x20009,*(undefined8 *)(param_1 + 8));
    }
    break;
  case 0x22:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0xa000004,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x23:
    FUN_143bca630(param_1,0);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 4;
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x2c000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x2d000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffff9,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -2,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0x24:
    FUN_143bca630(param_1,0);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x128);
    break;
  case 0x25:
    FUN_143bca630(param_1,0);
    uVar6 = FUN_143bcd5d0(param_1 + 0x160);
    FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar6);
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 1U | 0x6000000),uVar6);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0xd000000,
                  *(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0x26:
    FUN_143bca630(param_1,0);
    local_34c = 0;
    if (((*(uint *)(param_1 + 0x124) & 8) == 0) && ((*(uint *)(param_1 + 0x124) & 1) == 0)) {
      local_34c = 0x17;
    }
    else if (((*(uint *)(param_1 + 0x124) & 8) == 0) || ((*(uint *)(param_1 + 0x124) & 1) != 0)) {
      if (((*(uint *)(param_1 + 0x124) & 8) == 0) && ((*(uint *)(param_1 + 0x124) & 1) != 0)) {
        local_34c = 0x17;
      }
      else if (((*(uint *)(param_1 + 0x124) & 8) != 0) && ((*(uint *)(param_1 + 0x124) & 1) != 0)) {
        local_34c = 0x1e;
      }
    }
    else {
      local_34c = 0x2b;
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_34c << 0x18,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x27:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffffa,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -2,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x128);
    break;
  case 0x28:
    iVar4 = FUN_143bc3fc0(param_1,0);
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    if (iVar4 == iVar5 + -1) {
      uVar3 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),iVar4);
      if (uVar3 >> 0x18 == 0xb) {
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      uVar3 & 0xffffff | 0x32000000,iVar4);
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
             *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      (longlong)(int)(uVar3 | 0x33000000),*(undefined8 *)(param_1 + 8));
        break;
      }
      if (((uVar3 >> 0x18 == 0xc) || (uVar3 >> 0x18 == 0x15)) || (uVar3 >> 0x18 == 0x1b)) {
        local_368 = 0x34000000;
        if (uVar3 >> 0x18 == 0x15) {
          local_368 = 0x34000001;
        }
        if ((*(uint *)(param_1 + 0x124) & 1) != 0) {
          local_368 = local_368 | 2;
        }
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_368,iVar4);
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
             *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      (longlong)(int)(uVar3 | 0x33000000),*(undefined8 *)(param_1 + 8));
        break;
      }
    }
    iVar4 = FUN_143bc3fc0(param_1,1);
    local_2e4 = iVar4 + 1U | 0xf000000;
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    iVar5 = FUN_143bcc6b0(param_1,iVar4,iVar5 + -1);
    if (iVar5 == 0) {
      FUN_143bcb120(param_1,iVar4);
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x68);
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) =
           *(int *)(*(longlong *)(param_1 + 0x10) + 0x68) + 1;
      FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(uVar3 | 0x23000000),iVar4 + 1);
      local_2e4 = iVar4 + 2U | 0x12000000;
    }
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar5 + 1U | 0x6000000),iVar4);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)local_2e4,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x29:
    uVar6 = FUN_143bc3fc0(param_1,1);
    uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x6000000),uVar6);
    break;
  case 0x2a:
    local_390 = 0;
    switch(*(undefined4 *)(param_1 + 0x48)) {
    case 0x2d:
      *(undefined1 *)(param_1 + 300) = 0;
      break;
    case 100:
      local_390 = 1;
      break;
    case 0x69:
      local_390 = 2;
      break;
    case 0x6d:
      local_390 = 8;
      break;
    case 0x73:
      local_390 = 0x20;
      break;
    case 0x75:
      local_390 = 0;
      break;
    case 0x77:
      local_390 = 0x100;
      break;
    case 0x78:
      local_390 = 4;
    }
    if (*(char *)(param_1 + 300) == '\0') {
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & ~local_390;
    }
    else {
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | local_390;
    }
    break;
  case 0x2b:
    *(undefined1 *)(param_1 + 0x2a) = 0;
    break;
  case 0x2c:
    uVar6 = FUN_143bc3fc0(param_1,0);
    FUN_143bc4bd0(param_1,0x19,0x1c);
    FUN_143bcb120(param_1,uVar6);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 1;
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x20000000),uVar6);
    iVar4 = FUN_143bcd620(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd6b0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(iVar4 + 1),
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x21000000),*(undefined8 *)(param_1 + 8));
    break;
  case 0x2d:
    FUN_143bca630(param_1,0);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 2;
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x25000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x6000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffffb,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -2,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0x2e:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x31000001,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x2f:
    FUN_143bca8d0(param_1);
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x160);
    if (iVar4 < 1) {
      FUN_143bca470(param_1,0x10306);
    }
    break;
  case 0x30:
    FUN_143bca470(param_1,0x10301);
    break;
  case 0x31:
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
    break;
  case 0x32:
    uVar8 = FUN_143b0a040(param_1 + 0x198);
    FUN_143bc4e10(param_1,uVar8);
    break;
  case 0x33:
    FUN_143bce210(param_1,0x30005);
    break;
  case 0x34:
    iVar4 = FUN_143bc3fc0(param_1,1);
    uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0xd000000),iVar4);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 1U | 0x6000000),*(undefined8 *)(param_1 + 8));
    break;
  default:
    FUN_143bca470(param_1,0x10300);
    break;
  case 0x36:
    uVar8 = FUN_143bcd570(param_1 + 0x198);
    FUN_143b13590(uVar8,0x26);
    break;
  case 0x37:
    FUN_143bca630(param_1,0);
    if ((*(uint *)(param_1 + 0x124) & 0x100) == 0) {
      local_308 = 0x10;
    }
    else {
      local_308 = 0x35;
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_308 << 0x18 | 1,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x38:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0xa000001,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x39:
    iVar4 = FUN_143bc3fc0(param_1,1);
    FUN_143bcb120(param_1,iVar4);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 1;
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x20000000),iVar4);
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar5 + 1U | 0x6000000),iVar4 + 1);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x21000000),*(undefined8 *)(param_1 + 8));
    break;
  case 0x3a:
    iVar4 = FUN_143aca700(param_1 + 0x1c0);
    if (iVar4 == 0x20009) {
      FUN_143b0a0a0(param_1 + 0x1c0);
      FUN_143b1dc80(param_1 + 0x1c0,0x20003,*(undefined8 *)(param_1 + 8));
      FUN_143b1dc80(param_1 + 0x1c0,0x20009,*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_143b1dc80(param_1 + 0x1c0,0x20003,*(undefined8 *)(param_1 + 8));
    }
    break;
  case 0x3b:
  case 0x3f:
    FUN_143bca470(param_1,0x10301);
    break;
  case 0x3c:
    FUN_143bca630(param_1,0);
    if ((*(uint *)(param_1 + 0x124) & 0x100) == 0) {
      local_300 = 0x10;
    }
    else {
      local_300 = 0x35;
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_300 << 0x18,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x3e:
    iVar4 = FUN_143bc3fc0(param_1,1);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 1;
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x20000000),iVar4);
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar5 + 2U | 0x6000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 1U | 0xd000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x21000000),*(undefined8 *)(param_1 + 8));
    break;
  case 0x40:
    FUN_143bc4bd0(param_1,0x1a,0x1d);
    break;
  case 0x41:
    FUN_143bcdf20(param_1,0x40006);
    uVar8 = FUN_143bcd570(param_1 + 0x198);
    FUN_143b13590(uVar8,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x48);
    break;
  case 0x42:
    uVar6 = FUN_143bcd720(param_1);
    FUN_143bcdf20(param_1,0x40006);
    uVar8 = FUN_143bcd570(param_1 + 0x198);
    FUN_143b13590(uVar8,uVar6);
    *(undefined4 *)(param_1 + 0x1e8) = uVar6;
    break;
  case 0x43:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x16000000,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x44:
    FUN_143bce210(param_1,0x40007);
    FUN_143b1dc80(param_1 + 0x1c0,1,*(undefined8 *)(param_1 + 8));
    if ((*(uint *)(param_1 + 0x124) & 2) != 0) {
      FUN_143b1dc80(param_1 + 0x1c0,0x20009,*(undefined8 *)(param_1 + 8));
    }
    break;
  case 0x45:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x16000001,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x46:
    FUN_143bca630(param_1,0);
    local_398 = 0;
    break;
  case 0x47:
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    FUN_143b11bb0(local_c8,*(undefined8 *)(DAT_146bc8478 + 0x20));
    FUN_143b140b0(local_c8);
    (**(code **)(*plVar7 + 0x70))(plVar7,local_c8);
    FUN_143b11ff0(local_c8);
    break;
  case 0x48:
    cVar1 = FUN_143bc49c0(param_1);
    if (cVar1 == '\0') {
      FUN_143bc4bd0(param_1,0x19,0x1c);
    }
    break;
  case 0x49:
    FUN_143bca470(param_1,0x1030f);
    break;
  case 0x4a:
    iVar4 = FUN_143bc3fc0(param_1,1);
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar5 + 1U | 0xd000000),iVar4);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar5 + 2U | 0xd000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 1U | 0x6000000),*(undefined8 *)(param_1 + 8));
    break;
  case 0x4b:
    puVar10 = (undefined8 *)FUN_143bcd970(param_1);
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
      (**(code **)(*plVar7 + 0x70))(plVar7,puVar10);
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    break;
  case 0x4c:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x31000004,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x4d:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x18000000,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x4e:
    FUN_143bce210(param_1,0x40008);
    FUN_143b1dc80(param_1 + 0x1c0,1,*(undefined8 *)(param_1 + 8));
    if ((*(uint *)(param_1 + 0x124) & 2) != 0) {
      FUN_143b1dc80(param_1 + 0x1c0,0x20009,*(undefined8 *)(param_1 + 8));
    }
    break;
  case 0x4f:
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    FUN_143b11bb0(local_68,*(undefined8 *)(DAT_146bc8478 + 8));
    FUN_143b140b0(local_68);
    (**(code **)(*plVar7 + 0x70))(plVar7,local_68);
    FUN_143b11ff0(local_68);
    break;
  case 0x50:
    uVar8 = FUN_143bcd570(param_1 + 0x198);
    FUN_143bc3eb0(uVar8,0x200,*(undefined8 *)(param_1 + 8));
    break;
  case 0x51:
    FUN_143bca630(param_1,0);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 2;
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x25000000),*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 2U | 0x6000000),*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 3U | 0xd000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x26000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x1000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x7000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_143bcd680(param_1 + 0x160,0xfffffffc,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -2,*(undefined8 *)(param_1 + 8));
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143bcd680(param_1 + 0x160,iVar4 + -1,*(undefined8 *)(param_1 + 8));
    break;
  case 0x52:
    FUN_143bca470(param_1,0x1030b);
    break;
  case 0x53:
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x6000002,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0xd000003,
                  *(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0xe000000,
                  *(undefined8 *)(param_1 + 8));
    FUN_143bc6a80(param_1,0x1d);
    break;
  case 0x54:
    iVar4 = FUN_143bcd720(param_1);
    cVar1 = FUN_143a8b110(**(undefined4 **)(param_1 + 8));
    if ((cVar1 != '\0') && (iVar4 < *(int *)(param_1 + 0x1e8))) {
      FUN_143bca470(param_1,0x10310);
    }
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x1e8),iVar4);
    *(int *)(param_1 + 0x1e8) = iVar4;
    break;
  case 0x55:
    iVar4 = FUN_143bc3fc0(param_1,1);
    FUN_143bcb120(param_1,iVar4);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) =
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c) + 1;
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x20000000),iVar4);
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar5 + 1U | 0x6000000),iVar4 + 1);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(iVar4 + 1U | 0xd000000),*(undefined8 *)(param_1 + 8));
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                  (longlong)(int)(uVar3 | 0x21000000),*(undefined8 *)(param_1 + 8));
    break;
  case 0x56:
    if (((*(uint *)(param_1 + 0x124) & 0x200) != 0) &&
       (((0x40 < *(int *)(param_1 + 0x48) && (*(int *)(param_1 + 0x48) < 0x5b)) ||
        ((0x60 < *(int *)(param_1 + 0x48) && (*(int *)(param_1 + 0x48) < 0x7b)))))) {
      FUN_143bca470(param_1,0x10303);
    }
    FUN_143bcb340(param_1,*(undefined4 *)(param_1 + 0x48));
    break;
  case 0x57:
    plVar7 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    (**(code **)(*plVar7 + 0x70))(plVar7,*(undefined8 *)(DAT_146bc8478 + 0x20));
    break;
  case 0x58:
    FUN_143bca630(param_1,0);
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x14000000,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x59:
    FUN_143bca630(param_1,0);
    if ((*(uint *)(param_1 + 0x124) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 0x124) & 1) == 0) {
        local_334 = 0xc000000;
      }
      else {
        local_334 = 0x1b000000;
      }
    }
    else {
      local_334 = 0x15000000;
    }
    FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_334,
                  *(undefined8 *)(param_1 + 8));
  }
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 != '\0') {
    local_398 = 0;
  }
  return local_398;
}



// FUNCTION 143bca400 FUN_143bca400 body=75 status=ok
// SIG undefined FUN_143bca400(void)

undefined8 FUN_143bca400(longlong param_1,int param_2)

{
  undefined8 local_18;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  }
  return local_18;
}



// FUNCTION 143bca450 FUN_143bca450 body=24 status=ok
// SIG undefined FUN_143bca450(void)

void FUN_143bca450(undefined8 param_1)

{
  FUN_143b14e10(param_1);
  return;
}



// FUNCTION 143bca470 FUN_143bca470 body=439 status=ok
// SIG undefined FUN_143bca470(void)

void FUN_143bca470(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b110(**(undefined4 **)(param_1 + 8));
  if (cVar1 != '\0') {
    **(undefined4 **)(param_1 + 8) = param_2;
    if (*(longlong *)(param_1 + 0x30) < 0x80000000) {
      if (*(longlong *)(param_1 + 0x38) < 0x80000000) {
        **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = *(undefined4 *)(param_1 + 0x38);
      }
      else {
        **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = 0xffffffff;
      }
    }
    else {
      **(undefined4 **)(param_1 + 0x18) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = 0xffffffff;
    }
    local_28[0] = 0;
    _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 0x18) + 8),0,0x20);
    _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 0x18) + 0x28),0,0x20);
    local_20 = *(longlong *)(param_1 + 0x10);
    FUN_143b076d0(*(undefined8 *)(local_20 + 8),*(longlong *)(param_1 + 0x20) + -0xf,
                  *(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18) + 8,0x10,local_28);
    local_18 = *(longlong *)(param_1 + 0x10);
    FUN_143b076d0(*(undefined8 *)(local_18 + 8),*(undefined8 *)(param_1 + 0x20),
                  *(longlong *)(param_1 + 0x20) + 0xf,*(longlong *)(param_1 + 0x18) + 0x28,0x10,
                  local_28);
  }
  return;
}



// FUNCTION 143bca630 FUN_143bca630 body=660 status=ok
// SIG undefined FUN_143bca630(void)

void FUN_143bca630(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_14;
  uint local_10;
  
  uVar5 = 0;
  iVar2 = FUN_143a904f0(param_1 + 0x130);
  if (iVar2 != 0) {
    uVar3 = FUN_143a904f0(param_1 + 0x130);
    local_14 = FUN_143a90530(param_1 + 0x130,uVar3,0xffffffff,param_4,uVar5);
    local_10 = FUN_143a8e3e0(param_1 + 0x130,local_14);
    if (param_2 == '\0') {
      if ((*(uint *)(param_1 + 0x124) & 2) != 0) {
        FUN_143aba210(param_1 + 0x130,0);
        uVar5 = FUN_143a904f0(param_1 + 0x130);
        local_14 = FUN_143a90530(param_1 + 0x130,uVar5,0xffffffff);
        local_10 = FUN_143a8e3e0(param_1 + 0x130,local_14);
      }
      if (local_14 == 0) {
        if (((*(uint *)(param_1 + 0x124) & 2) == 0) ||
           (cVar1 = FUN_143b10d70(local_10,0x22), cVar1 == '\0')) {
          local_10 = local_10 | 0x3000000;
        }
        else {
          local_10 = local_10 | 0x27000000;
        }
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)local_10,
                      *(undefined8 *)(param_1 + 8));
      }
      else {
        if ((*(uint *)(param_1 + 0x124) & 2) == 0) {
          uVar4 = FUN_143a904f0(*(longlong *)(param_1 + 0x10) + 0x28);
          uVar4 = uVar4 | 0x4000000;
        }
        else {
          uVar4 = FUN_143a904f0(*(longlong *)(param_1 + 0x10) + 0x28);
          uVar4 = uVar4 | 0x28000000;
        }
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)uVar4,
                      *(undefined8 *)(param_1 + 8));
        uVar4 = FUN_143a904f0(param_1 + 0x130);
        FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      (longlong)(int)(uVar4 | 0x5000000),*(undefined8 *)(param_1 + 8));
        FUN_143a8e070(*(longlong *)(param_1 + 0x10) + 0x28,param_1 + 0x130);
      }
      FUN_143a90910(param_1 + 0x130);
    }
    else {
      FUN_143a99400(param_1 + 0x130,local_14);
      FUN_143bca630(param_1,0);
      FUN_143bcb340(param_1,local_10);
      FUN_143bca630(param_1,0);
    }
  }
  return;
}



// FUNCTION 143bca8d0 FUN_143bca8d0 body=1978 status=ok
// SIG undefined FUN_143bca8d0(void)

void FUN_143bca8d0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x160);
  if (iVar1 < 1) {
    FUN_143bca470(param_1,0x10306);
  }
  else {
    FUN_143bca630(param_1,0);
    while (iVar1 = FUN_143bcd5d0(param_1 + 0x160), -1 < iVar1) {
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),iVar1);
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(uVar2 | uVar3),iVar1);
      *(int *)(param_1 + 0x180) = iVar1;
    }
    uVar4 = FUN_143bcd5d0(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x124) = uVar4;
    switch(iVar1) {
    case -8:
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                            *(int *)(param_1 + 0x180) + -5);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x30000000,*(undefined8 *)(param_1 + 8));
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      iVar5 = FUN_143bcc6b0(param_1,*(undefined4 *)(param_1 + 0x180),iVar1 + -1);
      iVar1 = FUN_143bcc1a0(param_1,*(undefined4 *)(param_1 + 0x180),iVar1 + -1);
      if (iVar1 == 0x7fffffff) {
        FUN_143bca470(param_1,0x1030c);
      }
      else {
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar5,
                      *(int *)(param_1 + 0x180) + -3);
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar1,
                      *(int *)(param_1 + 0x180) + -2);
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                      (longlong)(int)(uVar2 | 0x1f000000),*(int *)(param_1 + 0x180) + -1);
      }
      break;
    case -7:
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                            *(int *)(param_1 + 0x180) + -4);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x2e000000,*(undefined8 *)(param_1 + 8));
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x26000000,*(undefined8 *)(param_1 + 8));
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      iVar5 = FUN_143bcc6b0(param_1,*(undefined4 *)(param_1 + 0x180),iVar1 + -1);
      iVar1 = FUN_143bcc1a0(param_1,*(undefined4 *)(param_1 + 0x180),iVar1 + -1);
      if (iVar1 == 0x7fffffff) {
        FUN_143bca470(param_1,0x1030c);
      }
      else {
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar5,
                      *(int *)(param_1 + 0x180) + -2);
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar1,
                      *(int *)(param_1 + 0x180) + -1);
      }
      break;
    case -5:
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                            *(int *)(param_1 + 0x180) + -1);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x26000000,*(undefined8 *)(param_1 + 8));
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),0x1000000,
                    *(undefined8 *)(param_1 + 8));
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x26000000,*(undefined8 *)(param_1 + 8));
      FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    *(undefined4 *)(param_1 + 0x180));
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    (longlong)(int)(iVar1 - 1U | 0x6000000),*(undefined4 *)(param_1 + 0x180));
      break;
    case -4:
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                            *(int *)(param_1 + 0x180) + -5);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x26000000,*(undefined8 *)(param_1 + 8));
      break;
    case -3:
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                            *(int *)(param_1 + 0x180) + 1);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x21000000,*(undefined8 *)(param_1 + 8));
      break;
    case -2:
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                            *(int *)(param_1 + 0x180) + 1);
      FUN_143b62060(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                    uVar2 & 0xffffff | 0x9000000,*(undefined8 *)(param_1 + 8));
    }
    uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    *(undefined4 *)(param_1 + 0x184) = uVar4;
  }
  return;
}



// FUNCTION 143bcb0b0 FUN_143bcb0b0 body=100 status=ok
// SIG undefined FUN_143bcb0b0(void)

void FUN_143bcb0b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 local_18;
  
  if (param_2 != (longlong *)0x0) {
    for (local_18 = 0; local_18 < 0x100; local_18 = local_18 + 1) {
      cVar1 = (**(code **)(*param_2 + 0x30))(param_2,local_18);
      if (cVar1 != '\0') {
        FUN_143bc3e70(param_1,local_18);
      }
    }
  }
  return;
}



// FUNCTION 143bcb120 FUN_143bcb120 body=481 status=ok
// SIG undefined FUN_143bcb120(void)

void FUN_143bcb120(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_28;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20);
  FUN_143e1d240(uVar1,0x7000000,param_2,*(undefined8 *)(param_1 + 8));
  local_28 = 0;
  while( true ) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(uVar1);
    if (iVar2 <= local_28) break;
    uVar3 = FUN_143bca400(uVar1,local_28);
    uVar4 = uVar3 >> 0x18;
    if ((((((uVar4 == 0xd) || (uVar4 == 0x24)) || (uVar4 == 6)) ||
         ((uVar4 == 0x1c || (uVar4 == 0x1d)))) ||
        ((uVar4 == 0xf || ((uVar4 == 0x12 || (uVar4 == 0x1f)))))) &&
       (param_2 < (int)(uVar3 & 0xffffff))) {
      FUN_143e1d330(uVar1,(longlong)(int)(uVar4 << 0x18 | (uVar3 & 0xffffff) + 1),local_28);
    }
    local_28 = local_28 + 1;
  }
  local_28 = 0;
  while( true ) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x160);
    if (iVar2 <= local_28) break;
    iVar2 = FUN_143b59890(param_1 + 0x160,local_28);
    if (param_2 < iVar2) {
      FUN_143e1cd90(param_1 + 0x160,iVar2 + 1,local_28);
    }
    local_28 = local_28 + 1;
  }
  if (param_2 < *(int *)(param_1 + 0x184)) {
    *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  }
  if (param_2 < *(int *)(param_1 + 0x180)) {
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  }
  return;
}



// FUNCTION 143bcb310 FUN_143bcb310 body=36 status=ok
// SIG undefined FUN_143bcb310(void)

void FUN_143bcb310(longlong param_1)

{
  FUN_143b09610(param_1,*(int *)(param_1 + 8) + -1);
  return;
}



// FUNCTION 143bcb340 FUN_143bcb340 body=41 status=ok
// SIG undefined FUN_143bcb340(void)

void FUN_143bcb340(longlong param_1,undefined4 param_2)

{
  FUN_143a8e0c0(param_1 + 0x130,param_2);
  return;
}



// FUNCTION 143bcb370 FUN_143bcb370 body=3482 status=ok
// SIG undefined FUN_143bcb370(void)

void FUN_143bcb370(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d4;
  int local_1a8;
  undefined1 local_1a0 [32];
  uint local_180;
  undefined4 local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined4 local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [96];
  undefined1 local_c8 [96];
  undefined1 local_68 [104];
  
  local_130 = 0xfffffffffffffffe;
  cVar2 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar2 == '\0') {
    local_1e4 = 0;
    local_1dc = 0;
    bVar1 = true;
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1c8f0(local_1a0,iVar3 + 1,*(undefined8 *)(param_1 + 8));
    FUN_143e1cdd0(local_1a0,iVar3 + 1);
    for (local_1e0 = 3; local_1e0 < iVar3; local_1e0 = local_1e0 + 1) {
      FUN_143e1cd90(local_1a0,0x7fffffff,local_1e0);
    }
    for (local_1e0 = 3; local_1e0 < iVar3; local_1e0 = local_1e0 + 1) {
      uVar4 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_1e0);
      iVar5 = FUN_143b59890(local_1a0,local_1e0);
      if (iVar5 < local_1e4) {
        local_1e4 = FUN_143b59890(local_1a0,local_1e0);
      }
      switch(uVar4 >> 0x18) {
      case 1:
        local_1e4 = FUN_143b59890(local_1a0,local_1e0 + 1);
        bVar1 = false;
        break;
      case 3:
        if (local_1e4 == 0) {
          FUN_143b13590(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),uVar4 & 0xffffff);
          local_1dc = local_1dc + 2;
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 4:
        local_1e0 = local_1e0 + 1;
        local_164 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_1e0);
        uVar6 = local_164 & 0xffffff;
        if (local_1e4 == 0) {
          local_16c = FUN_143a8e3e0(*(longlong *)(param_1 + 0x10) + 0x28,uVar4 & 0xffffff);
          FUN_143b13590(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_16c);
          local_1dc = local_1dc + 1;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x94) = uVar4 & 0xffffff;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x98) = uVar6;
        }
        local_1e4 = local_1e4 + uVar6;
        bVar1 = false;
        break;
      case 6:
        uVar4 = uVar4 & 0xffffff;
        if ((local_1e0 < (int)uVar4) && (iVar5 = FUN_143b59890(local_1a0,uVar4), local_1e4 < iVar5))
        {
          FUN_143e1cd90(local_1a0,local_1e4,uVar4);
        }
        bVar1 = false;
        break;
      case 10:
        if (local_1e4 == 0) {
          local_160 = uVar4 & 0xffffff;
          local_140 = *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80) +
                       (longlong)(int)local_160 * 8);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_140);
          local_1dc = local_1dc + 2;
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 0xb:
        if (local_1e4 == 0) {
          local_180 = uVar4 & 0xffffff;
          local_150 = FUN_143b09610(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),local_180)
          ;
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_150);
          local_1dc = local_1dc + 2;
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 0xc:
      case 0x13:
      case 0x15:
      case 0x1b:
        if (local_1e4 == 0) {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0xb0))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0xa8))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
          local_1dc = local_1dc + 2;
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 0xf:
      case 0x12:
        bVar1 = false;
        break;
      case 0x16:
        if (local_1e4 == 0) {
          FUN_143b11ea0(local_128);
          FUN_143b17570(local_128,0x2000,0x200,*(undefined8 *)(param_1 + 8));
          if ((uVar4 & 0xffffff) != 0) {
            FUN_143b140b0(local_128);
          }
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_128);
          local_1dc = local_1dc + 2;
          FUN_143b11ff0(local_128);
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 0x17:
        if (bVar1) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 3;
        }
        break;
      case 0x19:
      case 0x1a:
        uVar4 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_1e0 + 1);
        local_168 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                                  local_1e0 + 2);
        if ((local_168 == 0) &&
           (iVar5 = FUN_143b59890(local_1a0,uVar4 & 0xffffff), local_1e4 < iVar5)) {
          FUN_143e1cd90(local_1a0,local_1e4,uVar4 & 0xffffff);
        }
        local_1e0 = local_1e0 + 3;
        bVar1 = false;
        break;
      case 0x1c:
      case 0x1d:
        bVar1 = false;
        break;
      case 0x1e:
      case 0x2b:
        if (bVar1) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 4;
        }
        break;
      case 0x24:
        local_1e0 = local_1e0 + 1;
      case 0xd:
        uVar4 = uVar4 & 0xffffff;
        if ((int)uVar4 < local_1e0) {
          local_1e4 = FUN_143b59890(local_1a0,local_1e0 + 1);
        }
        else {
          iVar5 = FUN_143b59890(local_1a0,uVar4);
          if (local_1e4 < iVar5) {
            FUN_143e1cd90(local_1a0,local_1e4,uVar4);
          }
        }
        bVar1 = false;
        break;
      case 0x25:
      case 0x2c:
        if (uVar4 >> 0x18 == 0x25) {
          local_1a8 = 2;
        }
        else {
          local_1a8 = 1;
        }
        local_1d4 = local_1a8;
        while( true ) {
          local_1e0 = local_1e0 + 1;
          uVar4 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_1e0);
          if (uVar4 >> 0x18 == 0x25) {
            local_1d4 = local_1d4 + 2;
          }
          if (uVar4 >> 0x18 == 0x2c) {
            local_1d4 = local_1d4 + 1;
          }
          if (((uVar4 >> 0x18 == 0x26) || (uVar4 >> 0x18 == 0x30)) &&
             (local_1d4 = local_1d4 + -1, local_1d4 == 0)) break;
          if (((uVar4 >> 0x18 == 6) && (uVar4 = uVar4 & 0xffffff, local_1e0 < (int)uVar4)) &&
             (iVar5 = FUN_143b59890(local_1a0,uVar4), local_1e4 < iVar5)) {
            FUN_143e1cd90(local_1a0,local_1e4,uVar4);
          }
        }
        break;
      case 0x27:
        if (local_1e4 == 0) {
          cVar2 = FUN_143b10d70(uVar4 & 0xffffff,0x22);
          if (cVar2 == '\0') {
            FUN_143b13590(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),uVar4 & 0xffffff);
          }
          else {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0xb0))
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0xa8))
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
          }
          local_1dc = local_1dc + 2;
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 0x28:
        local_1e0 = local_1e0 + 1;
        local_15c = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_1e0);
        local_170 = local_15c & 0xffffff;
        if (local_1e4 == 0) {
          local_178 = uVar4 & 0xffffff;
          uVar7 = FUN_143a8e3e0(*(longlong *)(param_1 + 0x10) + 0x28,local_178);
          FUN_143b11d30(local_c8,uVar7,uVar7);
          FUN_143b13ce0(local_c8);
          FUN_143b140b0(local_c8);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_c8);
          local_1dc = local_1dc + 2;
          FUN_143b11ff0(local_c8);
        }
        local_1e4 = local_1e4 + local_170;
        bVar1 = false;
        break;
      case 0x31:
        if (local_1e4 == 0) {
          local_158 = uVar4 & 0xffffff;
          local_138 = *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80) +
                       (longlong)(int)local_158 * 8);
          FUN_143b11bb0(local_68,local_138);
          FUN_143b140b0(local_68);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_68);
          local_1dc = local_1dc + 2;
          FUN_143b11ff0(local_68);
        }
        local_1e4 = local_1e4 + 1;
        bVar1 = false;
        break;
      case 0x32:
        if (local_1e4 == 0) {
          local_174 = uVar4 & 0xffffff;
          local_148 = FUN_143b09610(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),local_174)
          ;
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),local_148);
          local_1dc = local_1dc + 2;
        }
        bVar1 = false;
        break;
      case 0x33:
        bVar1 = false;
        break;
      case 0x34:
        if (local_1e4 == 0) {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0xb0))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0xa8))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
          local_1dc = local_1dc + 2;
        }
        bVar1 = false;
      }
    }
    iVar5 = FUN_143b59890(local_1a0,iVar3 + 1);
    if (iVar5 < local_1e4) {
      FUN_143b59890(local_1a0,iVar3 + 1);
    }
    FUN_143bcb0b0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) != 3) {
      if ((local_1dc == 1) && (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 100))) {
        local_17c = FUN_143a8e3e0(*(longlong *)(param_1 + 0x10) + 0x28,
                                  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x94));
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 5;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa8) = local_17c;
      }
      else if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) != 4) {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 100) == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 0;
        }
        else {
          iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x48))
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0));
          if (iVar3 == 1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 1;
            uVar7 = FUN_143b13c30(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),0);
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa8) = uVar7;
          }
          else {
            cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x58))
                              (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),0,0x10ffff);
            if ((cVar2 == '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 100))) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 2;
            }
            else {
              *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x90) = 0;
            }
          }
        }
      }
    }
    FUN_143e1c980(local_1a0);
  }
  return;
}



// FUNCTION 143bcc1a0 FUN_143bcc1a0 body=1175 status=ok
// SIG undefined FUN_143bcc1a0(void)

int FUN_143bcc1a0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_68;
  int local_64;
  int local_5c;
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 == '\0') {
    local_64 = 0;
    FUN_143e1c8f0(local_30,param_3 + 1,*(undefined8 *)(param_1 + 8));
    FUN_143e1cdd0(local_30,param_3 + 1);
    for (local_68 = param_2; uVar2 = param_2, (int)local_68 <= param_3; local_68 = local_68 + 1) {
      FUN_143e1cd90(local_30,0,local_68);
    }
    while (local_68 = uVar2, (int)local_68 <= param_3) {
      uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_68);
      iVar3 = FUN_143b59890(local_30,local_68);
      if (local_64 < iVar3) {
        local_64 = FUN_143b59890(local_30,local_68);
      }
      uVar4 = local_68;
      switch(uVar2 >> 0x18) {
      case 1:
        local_64 = FUN_143b59890(local_30,local_68 + 1);
        break;
      case 3:
        local_64 = FUN_143bcd6f0(local_64,1);
        if (0x10000 < (uVar2 & 0xffffff)) {
          local_64 = FUN_143bcd6f0(local_64,1);
        }
        break;
      case 4:
        uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_68 + 1);
        local_64 = FUN_143bcd6f0(local_64,uVar2 & 0xffffff);
        uVar4 = local_68 + 1;
        break;
      case 6:
        uVar2 = uVar2 & 0xffffff;
        if ((int)local_68 < (int)uVar2) {
          iVar3 = FUN_143b59890(local_30,uVar2);
          if (iVar3 < local_64) {
            FUN_143e1cd90(local_30,local_64,uVar2);
          }
        }
        else {
          local_64 = 0x7fffffff;
        }
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0x15:
      case 0x16:
      case 0x1b:
      case 0x27:
      case 0x31:
        local_64 = FUN_143bcd6f0(local_64,2);
        break;
      case 0xd:
      case 0xf:
      case 0x12:
      case 0x24:
        uVar2 = uVar2 & 0xffffff;
        if ((int)uVar2 < (int)local_68) {
          local_64 = 0x7fffffff;
        }
        else {
          iVar3 = FUN_143b59890(local_30,uVar2);
          if (iVar3 < local_64) {
            FUN_143e1cd90(local_30,local_64,uVar2);
          }
          local_64 = 0;
        }
        break;
      case 0x13:
      case 0x22:
      case 0x29:
        local_64 = 0x7fffffff;
        break;
      case 0x19:
      case 0x1a:
        uVar4 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_68 + 1);
        uVar4 = uVar4 & 0xffffff;
        if (uVar4 != local_68 + 4) {
          iVar3 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_68 + 3);
          if (iVar3 == -1) {
            local_64 = 0x7fffffff;
            uVar4 = local_68;
          }
          else {
            iVar5 = FUN_143bcc1a0(param_1,local_68 + 4,uVar4 - 1);
            if (iVar5 == 0x7fffffff) {
              local_64 = 0x7fffffff;
              uVar4 = local_68;
            }
            else {
              local_64 = local_64 + iVar5 * iVar3;
            }
          }
        }
        break;
      case 0x28:
        uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_68 + 1);
        local_64 = FUN_143bcd6f0(local_64,uVar2 & 0xffffff);
        uVar4 = local_68 + 1;
        break;
      case 0x2c:
        local_5c = 0;
        while( true ) {
          do {
            local_68 = local_68 + 1;
            uVar2 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_68);
            if ((uVar2 >> 0x18 == 0x25) || (uVar2 >> 0x18 == 0x2c)) {
              local_5c = local_5c + 1;
            }
          } while ((uVar2 >> 0x18 != 0x26) && (uVar2 >> 0x18 != 0x30));
          uVar4 = local_68;
          if (local_5c == 0) break;
          local_5c = local_5c + -1;
        }
        break;
      case 0x32:
      case 0x33:
      case 0x34:
        local_64 = 0x7fffffff;
      }
      local_68 = uVar4;
      if (local_64 == 0x7fffffff) break;
      uVar2 = local_68 + 1;
    }
    FUN_143e1c980(local_30);
  }
  else {
    local_64 = 0;
  }
  return local_64;
}



// FUNCTION 143bcc6b0 FUN_143bcc6b0 body=1128 status=ok
// SIG undefined FUN_143bcc6b0(void)

int FUN_143bcc6b0(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint local_78;
  int local_74;
  int local_70;
  int local_54;
  undefined1 local_40 [32];
  uint local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar2 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar2 == '\0') {
    local_74 = 0;
    FUN_143e1c8f0(local_40,param_3 + 2,*(undefined8 *)(param_1 + 8));
    FUN_143e1cdd0(local_40,param_3 + 2);
    for (local_78 = param_2; uVar3 = param_2, (int)local_78 <= param_3 + 1; local_78 = local_78 + 1)
    {
      FUN_143e1cd90(local_40,0x7fffffff,local_78);
    }
    while (local_78 = uVar3, (int)local_78 <= param_3) {
      uVar3 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_78);
      iVar4 = FUN_143b59890(local_40,local_78);
      if (iVar4 < local_74) {
        local_74 = FUN_143b59890(local_40,local_78);
      }
      uVar1 = local_78;
      switch(uVar3 >> 0x18) {
      case 1:
        local_74 = FUN_143b59890(local_40,local_78 + 1);
        break;
      case 3:
      case 10:
      case 0xb:
      case 0xc:
      case 0x13:
      case 0x15:
      case 0x16:
      case 0x1b:
      case 0x27:
      case 0x31:
        local_74 = local_74 + 1;
        break;
      case 4:
        local_20 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_78 + 1)
        ;
        local_74 = local_74 + (local_20 & 0xffffff);
        uVar1 = local_78 + 1;
        break;
      case 6:
        uVar3 = uVar3 & 0xffffff;
        if (((int)local_78 < (int)uVar3) &&
           (iVar4 = FUN_143b59890(local_40,uVar3), local_74 < iVar4)) {
          FUN_143e1cd90(local_40,local_74,uVar3);
        }
        break;
      case 0x19:
      case 0x1a:
        uVar3 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_78 + 1);
        iVar4 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_78 + 2);
        uVar1 = uVar3 & 0xffffff;
        if (iVar4 != 0) {
          uVar1 = local_78 + 3;
        }
        break;
      case 0x24:
        local_78 = local_78 + 1;
      case 0xd:
        uVar3 = uVar3 & 0xffffff;
        uVar1 = local_78;
        if ((int)uVar3 < (int)local_78) {
          local_74 = FUN_143b59890(local_40,local_78 + 1);
        }
        else {
          iVar4 = FUN_143b59890(local_40,uVar3);
          if (local_74 < iVar4) {
            FUN_143e1cd90(local_40,local_74,uVar3);
          }
        }
        break;
      case 0x25:
      case 0x2c:
        if (uVar3 >> 0x18 == 0x25) {
          local_54 = 2;
        }
        else {
          local_54 = 1;
        }
        local_70 = local_54;
        while( true ) {
          local_78 = local_78 + 1;
          uVar3 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_78);
          if (uVar3 >> 0x18 == 0x25) {
            local_70 = local_70 + 2;
          }
          if (uVar3 >> 0x18 == 0x2c) {
            local_70 = local_70 + 1;
          }
          uVar1 = local_78;
          if (((uVar3 >> 0x18 == 0x26) && (local_70 = local_70 + -1, local_70 == 0)) ||
             ((uVar3 >> 0x18 == 0x30 && (local_70 = local_70 + -1, local_70 == 0)))) break;
          if (((uVar3 >> 0x18 == 6) && (uVar3 = uVar3 & 0xffffff, (int)local_78 < (int)uVar3)) &&
             (iVar4 = FUN_143b59890(local_40,uVar3), local_74 < iVar4)) {
            FUN_143e1cd90(local_40,local_74,uVar3);
          }
        }
        break;
      case 0x28:
        local_74 = local_74 + 1;
        uVar1 = local_78 + 1;
      }
      local_78 = uVar1;
      uVar3 = local_78 + 1;
    }
    iVar4 = FUN_143b59890(local_40,param_3 + 1);
    if (iVar4 < local_74) {
      local_74 = FUN_143b59890(local_40,param_3 + 1);
    }
    FUN_143e1c980(local_40);
  }
  else {
    local_74 = 0;
  }
  return local_74;
}



// FUNCTION 143bccb90 FUN_143bccb90 body=2133 status=ok
// SIG undefined FUN_143bccb90(void)

void FUN_143bccb90(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c) <
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28)) {
    local_10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x38);
    local_28 = (**(code **)(local_10 + 0x40))(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
  }
  else {
    local_28 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) +
               *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20);
  }
  *(longlong *)(param_1 + 0x20) = local_28;
  iVar2 = FUN_143bcd3f0(param_1);
  *param_2 = iVar2;
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x29) == '\0') {
      if ((*(uint *)(param_1 + 0x124) & 4) != 0) {
        while (*param_2 != -1) {
          if ((*param_2 == 0x23) && (*(char *)(param_1 + 0x2a) == '\x01')) {
            do {
              iVar2 = FUN_143bcd3f0(param_1);
              *param_2 = iVar2;
              if ((*param_2 == -1) ||
                 (((*param_2 == 0xd || (*param_2 == 10)) || (*param_2 == 0x85)))) break;
            } while (*param_2 != 0x2028);
          }
          cVar1 = FUN_143b28380(*param_2);
          if (cVar1 == '\0') break;
          iVar2 = FUN_143bcd3f0(param_1);
          *param_2 = iVar2;
        }
      }
      if (*param_2 == 0x5c) {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c) <
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28)) {
          local_20 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x38);
          local_40 = (**(code **)(local_20 + 0x40))
                               (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
        }
        else {
          local_40 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) +
                     *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20);
        }
        local_60 = local_40;
        uVar3 = FUN_143bcd590(param_1);
        local_18 = *(longlong *)(DAT_146bc8478 + 0x578);
        cVar1 = (**(code **)(local_18 + 0x30))(DAT_146bc8478 + 0x578,uVar3);
        if (cVar1 == '\0') {
          iVar2 = FUN_143bcd590(param_1);
          if (iVar2 == 0x30) {
            *param_2 = 0;
            FUN_143bcd3f0(param_1);
            for (local_70 = 0; local_70 < 3; local_70 = local_70 + 1) {
              local_6c = FUN_143bcd590(param_1);
              if (((int)local_6c < 0x30) || (0x37 < (int)local_6c)) {
                if (local_70 == 0) {
                  FUN_143bca470(param_1,0x10303);
                }
                break;
              }
              *param_2 = *param_2 << 3;
              *param_2 = (local_6c & 7) + *param_2;
              if (*param_2 < 0x100) {
                FUN_143bcd3f0(param_1);
              }
              else {
                *param_2 = *param_2 >> 3;
              }
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          else {
            iVar2 = FUN_143bcd590(param_1);
            if (iVar2 == 0x51) {
              *(undefined1 *)(param_1 + 0x28) = 1;
              FUN_143bcd3f0(param_1);
              FUN_143bccb90(param_1,param_2);
            }
            else {
              *(undefined1 *)(param_1 + 0x29) = 1;
            }
          }
        }
        else {
          FUN_143bcd3f0(param_1);
          *(undefined1 *)(param_2 + 1) = 1;
          if (((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20) == 0) &&
              (*(longlong *)(param_1 + 0x158) ==
               *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x10))) &&
             (*(longlong *)(param_1 + 0x158) ==
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c))) {
            local_74 = (int)local_60;
            iVar2 = FUN_143ab4b10(FUN_143c091c0,&local_74,*(undefined4 *)(param_1 + 0x158),
                                  *(undefined8 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x30));
            *param_2 = iVar2;
            if (local_74 == local_60) {
              FUN_143bca470(param_1,0x10303);
            }
            *(longlong *)(param_1 + 0x38) = (local_74 - local_60) + *(longlong *)(param_1 + 0x38);
            local_58 = (longlong)local_74 -
                       *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20);
            if ((local_58 < 0) ||
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c) < local_58)) {
              FUN_143b08380(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),(longlong)local_74);
            }
            else {
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) =
                   (undefined4)local_58;
            }
          }
          else {
            local_78 = 0;
            local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
            local_30 = -1;
            local_48 = local_60 -
                       *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20);
            if ((local_48 < 0) ||
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c) < local_48)) {
              FUN_143b08380(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),local_60);
            }
            else {
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) =
                   (undefined4)local_48;
            }
            iVar2 = FUN_143ab4b10(FUN_143c091e0,&local_78,0x7fffffff,&local_38);
            *param_2 = iVar2;
            if (local_78 == 0) {
              FUN_143bca470(param_1,0x10303);
            }
            else if (local_30 == local_78) {
              if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) < 1) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x30)
                            + (longlong)
                              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) +
                              -1) * 2))) {
                FUN_143b08190(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
              }
              else {
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) =
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) + -1;
              }
            }
            else if (local_30 != local_78 + -1) {
              FUN_143b07790(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),
                            (local_78 - local_30) + -1);
            }
            *(longlong *)(param_1 + 0x38) = (longlong)local_78 + *(longlong *)(param_1 + 0x38);
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
  }
  else {
    *(undefined1 *)(param_2 + 1) = 1;
    if ((((*param_2 == 0x5c) && (iVar2 = FUN_143bcd590(param_1), iVar2 == 0x45)) &&
        ((*(uint *)(param_1 + 0x124) & 0x10) == 0)) || (*param_2 == -1)) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      FUN_143bcd3f0(param_1);
      FUN_143bccb90(param_1,param_2);
    }
  }
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return;
}



// FUNCTION 143bcd3f0 FUN_143bcd3f0 body=383 status=ok
// SIG undefined FUN_143bcd3f0(void)

uint FUN_143bcd3f0(longlong param_1)

{
  uint local_14;
  
  if (*(int *)(param_1 + 0x44) == -1) {
    if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) <
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x2c)) &&
       (*(ushort *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x30) +
         (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) * 2) < 0xd800))
    {
      local_14 = (uint)*(ushort *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x30) +
                        (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28)
                        * 2);
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) + 1;
    }
    else {
      local_14 = FUN_143b07920(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
    }
    if (local_14 != 0xffffffff) {
      if ((((local_14 == 0xd) || (local_14 == 0x85)) || (local_14 == 0x2028)) ||
         ((local_14 == 10 && (*(int *)(param_1 + 0x40) != 0xd)))) {
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else if (local_14 != 10) {
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
      }
      *(uint *)(param_1 + 0x40) = local_14;
    }
  }
  else {
    local_14 = *(uint *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  return local_14;
}



// FUNCTION 143bcd570 FUN_143bcd570 body=24 status=ok
// SIG undefined FUN_143bcd570(void)

void FUN_143bcd570(undefined8 param_1)

{
  FUN_143bcb310(param_1);
  return;
}



// FUNCTION 143bcd590 FUN_143bcd590 body=51 status=ok
// SIG undefined FUN_143bcd590(void)

undefined4 FUN_143bcd590(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x44) == -1) {
    uVar1 = FUN_143bcd3f0(param_1);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 143bcd5d0 FUN_143bcd5d0 body=77 status=ok
// SIG undefined FUN_143bcd5d0(void)

undefined4 FUN_143bcd5d0(longlong param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    local_18 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 4);
  }
  return local_18;
}



// FUNCTION 143bcd620 FUN_143bcd620 body=81 status=ok
// SIG undefined FUN_143bcd620(void)

undefined8 FUN_143bcd620(longlong param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 8);
  }
  return local_18;
}



// FUNCTION 143bcd680 FUN_143bcd680 body=46 status=ok
// SIG undefined FUN_143bcd680(void)

undefined4 FUN_143bcd680(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143b58ed0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143bcd6b0 FUN_143bcd6b0 body=49 status=ok
// SIG undefined FUN_143bcd6b0(void)

undefined8 FUN_143bcd6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b62060(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143bcd6f0 FUN_143bcd6f0 body=43 status=ok
// SIG undefined FUN_143bcd6f0(void)

int FUN_143bcd6f0(int param_1,int param_2)

{
  if (param_2 < 0x7fffffff - param_1) {
    param_1 = param_1 + param_2;
  }
  else {
    param_1 = 0x7fffffff;
  }
  return param_1;
}



// FUNCTION 143bcd720 FUN_143bcd720 body=582 status=ok
// SIG undefined FUN_143bcd720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143bcd720(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [48];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 == '\0') {
    FUN_143bccb90(param_1,param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) == 0x7b) {
      FUN_143a8ac30(local_b8);
      while (FUN_143bccb90(param_1,param_1 + 0x48), *(int *)(param_1 + 0x48) != 0x7d) {
        if (*(int *)(param_1 + 0x48) == -1) {
          FUN_143bca470(param_1,0x10304);
          local_cc = 0;
          FUN_143a8dc60(local_b8);
          return local_cc;
        }
        FUN_143a8e0c0(local_b8,*(undefined4 *)(param_1 + 0x48));
      }
      local_d0 = FUN_143a904f0(local_b8);
      uVar4 = FUN_143a8fe10(local_b8);
      cVar1 = FUN_143ab5890(uVar4,local_d0);
      if ((cVar1 != '\0') && (uVar2 = FUN_143a904f0(local_b8), uVar2 < 100)) {
        uVar3 = FUN_143a904f0(local_b8);
        local_e0 = 0;
        local_e8 = 100;
        FUN_143a8f880(local_b8,0,uVar3,local_88);
        local_d8 = FUN_143b30230(0,local_88,*(undefined8 *)(param_1 + 8));
        cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
        if (cVar1 != '\0') {
          FUN_143bca470(param_1,0x10304);
        }
        FUN_143bccb90(param_1,param_1 + 0x48);
        local_d4 = local_d8;
        FUN_143a8dc60(local_b8);
        return local_d4;
      }
      FUN_143bca470(param_1,0x10304);
      local_c8 = 0;
      FUN_143a8dc60(local_b8);
    }
    else {
      FUN_143bca470(param_1,0x10304);
      local_c8 = 0;
    }
  }
  else {
    local_c8 = 0;
  }
  return local_c8;
}



// FUNCTION 143bcd970 FUN_143bcd970 body=1001 status=ok
// SIG undefined FUN_143bcd970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bcd970(longlong param_1)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_80 = 0;
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 == '\0') {
    local_68 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c) <
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28)) {
      local_50 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x38);
      local_88 = (**(code **)(local_50 + 0x40))(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
    }
    else {
      local_88 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) +
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20);
    }
    local_90 = local_88;
    local_a5 = *(undefined1 *)(param_1 + 0x28);
    local_a6 = *(undefined1 *)(param_1 + 0x29);
    local_a4 = *(undefined1 *)(param_1 + 0x2a);
    local_78 = *(undefined8 *)(param_1 + 0x30);
    local_58 = *(undefined8 *)(param_1 + 0x38);
    local_a0 = *(undefined4 *)(param_1 + 0x40);
    local_9c = *(undefined4 *)(param_1 + 0x44);
    local_70 = *(undefined8 *)(param_1 + 0x48);
    FUN_143a8ac30(local_40);
    local_a7 = 0;
    FUN_143bccb90(param_1,param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) == 0x5e) {
      local_a7 = 1;
      FUN_143bccb90(param_1,param_1 + 0x48);
    }
    local_a8 = '\0';
    do {
      FUN_143a8e0c0(local_40,*(undefined4 *)(param_1 + 0x48));
      FUN_143bccb90(param_1,param_1 + 0x48);
      if ((*(char *)(param_1 + 0x4c) != '\0') || (*(int *)(param_1 + 0x48) == -1))
      goto LAB_143bcdbeb;
    } while (*(int *)(param_1 + 0x48) != 0x3a);
    FUN_143bccb90(param_1,param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) == 0x5d) {
      local_a8 = '\x01';
    }
LAB_143bcdbeb:
    if (local_a8 == '\0') {
      *(undefined8 *)(param_1 + 0x20) = local_68;
      *(undefined1 *)(param_1 + 0x28) = local_a5;
      *(undefined1 *)(param_1 + 0x29) = local_a6;
      *(undefined1 *)(param_1 + 0x2a) = local_a4;
      *(undefined8 *)(param_1 + 0x30) = local_78;
      *(undefined8 *)(param_1 + 0x38) = local_58;
      *(undefined4 *)(param_1 + 0x40) = local_a0;
      *(undefined4 *)(param_1 + 0x44) = local_9c;
      *(undefined8 *)(param_1 + 0x48) = local_70;
      local_98 = local_90 - *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x20);
      if ((local_98 < 0) ||
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x1c) < local_98)) {
        FUN_143b08380(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),local_90);
      }
      else {
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x28) =
             (undefined4)local_98;
      }
    }
    else {
      local_80 = FUN_143bc4fd0(param_1,local_40,local_a7);
    }
    local_60 = local_80;
    FUN_143a8dc60(local_40);
  }
  else {
    local_60 = 0;
  }
  return local_60;
}



// FUNCTION 143bcdd60 FUN_143bcdd60 body=441 status=ok
// SIG undefined FUN_143bcdd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bcdd60(longlong param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = 0;
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 == '\0') {
    local_68 = *(int *)(param_1 + 0x48) == 0x50;
    local_67 = local_68;
    FUN_143a8ac30(local_38);
    FUN_143bccb90(param_1,param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) == 0x7b) {
      while (FUN_143bccb90(param_1,param_1 + 0x48), *(int *)(param_1 + 0x48) != 0x7d) {
        if (*(int *)(param_1 + 0x48) == -1) {
          FUN_143bca470(param_1,0x10304);
          local_48 = 0;
          FUN_143a8dc60(local_38);
          return local_48;
        }
        FUN_143a8e0c0(local_38,*(undefined4 *)(param_1 + 0x48));
      }
      local_60 = FUN_143bc4fd0(param_1,local_38,local_67);
      FUN_143bccb90(param_1,param_1 + 0x48);
      local_50 = local_60;
      FUN_143a8dc60(local_38);
      local_58 = local_50;
    }
    else {
      FUN_143bca470(param_1,0x10304);
      local_58 = 0;
      FUN_143a8dc60(local_38);
    }
  }
  else {
    local_58 = 0;
  }
  return local_58;
}



// FUNCTION 143bcdf20 FUN_143bcdf20 body=747 status=ok
// SIG undefined FUN_143bcdf20(void)

void FUN_143bcdf20(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  do {
    while( true ) {
      while( true ) {
        uVar1 = FUN_143aca700(param_1 + 0x1c0);
        if ((uVar1 & 0xffff0000) < (param_2 & 0xffff0000)) {
          return;
        }
        FUN_143b0a0a0(param_1 + 0x1c0);
        plVar2 = (longlong *)FUN_143bcd570(param_1 + 0x198);
        if ((int)uVar1 < 0x30006) break;
        if (uVar1 == 0x40006) {
          FUN_143b0a040(param_1 + 0x198);
          plVar3 = (longlong *)FUN_143bcd570(param_1 + 0x198);
          (**(code **)(*plVar3 + 0x70))(plVar3,plVar2);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)*plVar2)(plVar2,1);
          }
        }
        else {
          if (uVar1 == 0x40007) goto LAB_143bce059;
          if (uVar1 == 0x40008) goto LAB_143bce0e7;
        }
      }
      if (uVar1 == 0x30005) break;
      if (uVar1 == 0x20003) {
        (**(code **)(*plVar2 + 0xa8))(plVar2);
      }
      else if (uVar1 == 0x20009) {
        FUN_143e224c0(plVar2,2);
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      else if (uVar1 == 0x30004) {
LAB_143bce059:
        FUN_143b0a040(param_1 + 0x198);
        plVar3 = (longlong *)FUN_143bcd570(param_1 + 0x198);
        (**(code **)(*plVar3 + 0x88))(plVar3,plVar2);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
        }
      }
    }
LAB_143bce0e7:
    FUN_143b0a040(param_1 + 0x198);
    plVar3 = (longlong *)FUN_143bcd570(param_1 + 0x198);
    (**(code **)(*plVar3 + 0x78))(plVar3,plVar2);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
  } while( true );
}



// FUNCTION 143bce210 FUN_143bce210 body=165 status=ok
// SIG undefined FUN_143bce210(void)

void FUN_143bce210(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  FUN_143bcdf20(param_1,param_2);
  FUN_143b1dc80(param_1 + 0x1c0,param_2,*(undefined8 *)(param_1 + 8));
  lVar1 = FUN_143a8d310(0x58);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b11ea0(lVar1);
  }
  FUN_143acb220(param_1 + 0x198,local_20,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143bce2c0 FUN_143bce2c0 body=836 status=ok
// SIG undefined FUN_143bce2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bce2c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_68 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_143a8b0e0(**(undefined4 **)(param_1 + 8));
  if (cVar1 == '\0') {
    local_80 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    FUN_143e1c8f0(local_60,local_80,*(undefined8 *)(param_1 + 8));
    local_78 = 0;
    for (local_90 = 0; local_90 < local_80; local_90 = local_90 + 1) {
      FUN_143b58ed0(local_60,local_78,*(undefined8 *)(param_1 + 8));
      local_70 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_90);
      if (local_70 >> 0x18 == 7) {
        local_78 = local_78 + 1;
      }
    }
    FUN_143a8ac30(local_40);
    local_98 = 0;
    for (local_88 = 0; local_88 < local_80; local_88 = local_88 + 1) {
      local_94 = FUN_143bca400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_88);
      local_8c = local_94 >> 0x18;
      local_7c = local_8c;
      if (0xff < local_8c) {
switchD_143bce455_default:
        FUN_143bca470(param_1,0x10300);
        goto LAB_143bce3cc;
      }
      if (local_8c == 0xff) {
switchD_143bce455_caseD_0:
        FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(int)local_94,
                      local_98);
        local_98 = local_98 + 1;
      }
      else {
        switch(local_8c) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0x10:
        case 0x11:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1e:
        case 0x20:
        case 0x21:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
          goto switchD_143bce455_caseD_0;
        case 6:
        case 0xd:
        case 0xf:
        case 0x12:
        case 0x1c:
        case 0x1d:
        case 0x1f:
        case 0x24:
          local_74 = local_94 & 0xffffff;
          iVar2 = FUN_143b59890(local_60,local_74);
          local_6c = local_74 - iVar2;
          local_94 = local_7c << 0x18 | local_6c;
          FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                        (longlong)(int)local_94,local_98);
          local_98 = local_98 + 1;
          break;
        case 7:
          break;
        case 0x22:
        case 0x29:
          local_84 = local_94 & 0xffffff;
          iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
          if (iVar2 < (int)local_84) {
            FUN_143bca470(param_1,0x1030a);
          }
          else {
            local_84 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),
                                     local_84 - 1);
            local_94 = local_7c << 0x18 | local_84;
            FUN_143e1d330(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                          (longlong)(int)local_94,local_98);
            local_98 = local_98 + 1;
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xb8) = 1;
          }
          break;
        default:
          goto switchD_143bce455_default;
        }
      }
LAB_143bce3cc:
    }
    FUN_143e1d440(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_98);
    FUN_143a8dc60(local_40);
    FUN_143e1c980(local_60);
  }
  return;
}



// FUNCTION 143bce650 FUN_143bce650 body=3960 status=ok
// SIG undefined FUN_143bce650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143bce650(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_508 [32];
  code *local_4e8;
  uint local_4d8;
  int local_4d4;
  undefined8 *local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  longlong local_480;
  undefined8 local_478;
  undefined8 local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  undefined8 local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  undefined8 local_430;
  undefined8 local_428;
  longlong local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [88];
  undefined1 local_248 [88];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [40];
  undefined1 local_1a0 [40];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_2a8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  local_4d8 = 0;
  _vector_constructor_iterator_(param_1 + 0x68,0x20,0xd,FUN_143b5dc90);
  local_4e8 = FUN_143b11ff0;
  _eh_vector_constructor_iterator_(param_1 + 0x208,0x58,10,FUN_143b11ea0);
  local_318 = FUN_143a8d4f0(local_b0,1,L"[acefnrtuUx]",0xffffffff);
  local_2c0 = local_318;
  FUN_143b16d40(param_1 + 0x578,local_318,param_2);
  FUN_143a8dc60(local_b0);
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  for (local_4d4 = 0; local_4d4 < 0xd; local_4d4 = local_4d4 + 1) {
    *(undefined8 *)(param_1 + (longlong)local_4d4 * 8) = 0;
  }
  local_458 = FUN_143a8d310(0x58);
  if (local_458 == 0) {
    local_4b8 = 0;
  }
  else {
    local_410 = FUN_143a8d4f0(local_88,1,L"[\\p{alphabetic}\\p{M}\\p{Nd}\\p{Pc}\\u200c\\u200d]",
                              0xffffffff);
    local_4d8 = local_4d8 | 1;
    local_320 = local_410;
    local_4b8 = FUN_143b16d40(local_458,local_410,param_2);
  }
  local_400 = local_4b8;
  *(undefined8 *)(param_1 + 8) = local_4b8;
  if ((local_4d8 & 1) != 0) {
    local_4d8 = local_4d8 & 0xfffffffe;
    FUN_143a8dc60(local_88);
  }
  local_438 = FUN_143a8d310(0x58);
  if (local_438 == 0) {
    local_4a8 = 0;
  }
  else {
    local_3f0 = FUN_143a8d4f0(local_38,1,L"[\\p{WhiteSpace}]",0xffffffff);
    local_4d8 = local_4d8 | 2;
    local_2b0 = local_3f0;
    local_4a8 = FUN_143b16d40(local_438,local_3f0,param_2);
  }
  local_2c8 = local_4a8;
  *(undefined8 *)(param_1 + 0x20) = local_4a8;
  if ((local_4d8 & 2) != 0) {
    local_4d8 = local_4d8 & 0xfffffffd;
    FUN_143a8dc60(local_38);
  }
  local_468 = FUN_143a8d310(0x58);
  if (local_468 == 0) {
    local_498 = 0;
  }
  else {
    local_3e0 = FUN_143a8d4f0(local_1a0,1,L"[\\p{Grapheme_Extend}]",0xffffffff);
    local_4d8 = local_4d8 | 4;
    local_308 = local_3e0;
    local_498 = FUN_143b16d40(local_468,local_3e0,param_2);
  }
  local_3d0 = local_498;
  *(undefined8 *)(param_1 + 0x30) = local_498;
  if ((local_4d8 & 4) != 0) {
    local_4d8 = local_4d8 & 0xfffffffb;
    FUN_143a8dc60(local_1a0);
  }
  local_448 = FUN_143a8d310(0x58);
  if (local_448 == 0) {
    local_488 = 0;
  }
  else {
    local_3c0 = FUN_143a8d4f0(local_60,1,L"[[:Zl:][:Zp:][:Cc:][:Cf:]-[:Grapheme_Extend:]]",
                              0xffffffff);
    local_4d8 = local_4d8 | 8;
    local_2d8 = local_3c0;
    local_488 = FUN_143b16d40(local_448,local_3c0,param_2);
  }
  local_2f8 = local_488;
  *(undefined8 *)(param_1 + 0x38) = local_488;
  if ((local_4d8 & 8) != 0) {
    local_4d8 = local_4d8 & 0xfffffff7;
    FUN_143a8dc60(local_60);
  }
  local_4c8 = FUN_143a8d310(0x58);
  if (local_4c8 == 0) {
    local_478 = 0;
  }
  else {
    local_3b0 = FUN_143a8d4f0(local_150,1,L"[\\p{Hangul_Syllable_Type=L}]",0xffffffff);
    local_4d8 = local_4d8 | 0x10;
    local_2b8 = local_3b0;
    local_478 = FUN_143b16d40(local_4c8,local_3b0,param_2);
  }
  local_3a0 = local_478;
  *(undefined8 *)(param_1 + 0x40) = local_478;
  if ((local_4d8 & 0x10) != 0) {
    local_4d8 = local_4d8 & 0xffffffef;
    FUN_143a8dc60(local_150);
  }
  local_4c0 = FUN_143a8d310(0x58);
  if (local_4c0 == 0) {
    local_4b0 = 0;
  }
  else {
    local_390 = FUN_143a8d4f0(local_1f0,1,L"[\\p{Hangul_Syllable_Type=V}]",0xffffffff);
    local_4d8 = local_4d8 | 0x20;
    local_2e8 = local_390;
    local_4b0 = FUN_143b16d40(local_4c0,local_390,param_2);
  }
  local_428 = local_4b0;
  *(undefined8 *)(param_1 + 0x58) = local_4b0;
  if ((local_4d8 & 0x20) != 0) {
    local_4d8 = local_4d8 & 0xffffffdf;
    FUN_143a8dc60(local_1f0);
  }
  local_4a0 = FUN_143a8d310(0x58);
  if (local_4a0 == 0) {
    local_490 = 0;
  }
  else {
    local_380 = FUN_143a8d4f0(local_100,1,L"[\\p{Hangul_Syllable_Type=T}]",0xffffffff);
    local_4d8 = local_4d8 | 0x40;
    local_310 = local_380;
    local_490 = FUN_143b16d40(local_4a0,local_380,param_2);
  }
  local_370 = local_490;
  *(undefined8 *)(param_1 + 0x60) = local_490;
  if ((local_4d8 & 0x40) != 0) {
    local_4d8 = local_4d8 & 0xffffffbf;
    FUN_143a8dc60(local_100);
  }
  local_480 = FUN_143a8d310(0x58);
  if (local_480 == 0) {
    local_470 = 0;
  }
  else {
    local_360 = FUN_143a8d4f0(local_1c8,1,L"[\\p{Hangul_Syllable_Type=LV}]",0xffffffff);
    local_4d8 = local_4d8 | 0x80;
    local_300 = local_360;
    local_470 = FUN_143b16d40(local_480,local_360,param_2);
  }
  local_2f0 = local_470;
  *(undefined8 *)(param_1 + 0x48) = local_470;
  if ((local_4d8 & 0x80) != 0) {
    local_4d8 = local_4d8 & 0xffffff7f;
    FUN_143a8dc60(local_1c8);
  }
  local_460 = FUN_143a8d310(0x58);
  if (local_460 == 0) {
    local_450 = 0;
  }
  else {
    local_350 = FUN_143a8d4f0(local_178,1,L"[\\p{Hangul_Syllable_Type=LVT}]",0xffffffff);
    local_4d8 = local_4d8 | 0x100;
    local_2e0 = local_350;
    local_450 = FUN_143b16d40(local_460,local_350,param_2);
  }
  local_340 = local_450;
  *(undefined8 *)(param_1 + 0x50) = local_450;
  if ((local_4d8 & 0x100) != 0) {
    local_4d8 = local_4d8 & 0xfffffeff;
    FUN_143a8dc60(local_178);
  }
  if ((((((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
        (*(longlong *)(param_1 + 0x30) != 0)) &&
       ((*(longlong *)(param_1 + 0x38) != 0 && (*(longlong *)(param_1 + 0x40) != 0)))) &&
      ((*(longlong *)(param_1 + 0x58) != 0 &&
       ((*(longlong *)(param_1 + 0x60) != 0 && (*(longlong *)(param_1 + 0x48) != 0)))))) &&
     (*(longlong *)(param_1 + 0x50) != 0)) {
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      return param_1;
    }
    local_440 = FUN_143a8d310(0x58);
    if (local_440 == 0) {
      local_430 = 0;
    }
    else {
      local_430 = FUN_143b11d30(local_440,0,0x10ffff);
    }
    local_2d0 = local_430;
    *(undefined8 *)(param_1 + 0x28) = local_430;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                (*(undefined8 *)(param_1 + 0x28),0xac00,0xd7a4);
      local_330 = *(undefined8 *)(param_1 + 0x28);
      local_420 = **(longlong **)(param_1 + 0x28);
      (**(code **)(local_420 + 0x88))(local_330,*(undefined8 *)(param_1 + 0x38));
      local_418 = *(undefined8 *)(param_1 + 0x28);
      local_408 = **(longlong **)(param_1 + 0x28);
      (**(code **)(local_408 + 0x88))(local_418,*(undefined8 *)(param_1 + 0x40));
      local_3f8 = *(undefined8 *)(param_1 + 0x28);
      local_3e8 = **(longlong **)(param_1 + 0x28);
      (**(code **)(local_3e8 + 0x88))(local_3f8,*(undefined8 *)(param_1 + 0x58));
      local_3d8 = *(undefined8 *)(param_1 + 0x28);
      local_3c8 = **(longlong **)(param_1 + 0x28);
      (**(code **)(local_3c8 + 0x88))(local_3d8,*(undefined8 *)(param_1 + 0x60));
      for (local_4d4 = 0; local_4d4 < 0xd; local_4d4 = local_4d4 + 1) {
        if (*(longlong *)(param_1 + (longlong)local_4d4 * 8) != 0) {
          (**(code **)(**(longlong **)(param_1 + (longlong)local_4d4 * 8) + 0xd8))
                    (*(undefined8 *)(param_1 + (longlong)local_4d4 * 8));
          FUN_143bcb0b0(param_1 + 0x68 + (longlong)local_4d4 * 0x20,
                        *(undefined8 *)(param_1 + (longlong)local_4d4 * 8));
        }
      }
      local_3b8 = FUN_143a8d4f0(local_128,1,L"[^\\*\\?\\+\\[\\(\\)\\{\\}\\^\\$\\|\\\\\\.]",
                                0xffffffff);
      local_3a8 = local_3b8;
      local_398 = FUN_143b16d40(local_248,local_3b8,param_2);
      local_388 = local_398;
      FUN_143b12150(param_1 + 0x260,local_398);
      FUN_143b11ff0(local_248);
      FUN_143a8dc60(local_128);
      local_378 = FUN_143a8d4f0(local_d8,1,L"[0-9]",0xffffffff);
      local_368 = local_378;
      local_358 = FUN_143b16d40(local_2a0,local_378,param_2);
      local_348 = local_358;
      FUN_143b12150(param_1 + 0x208,local_358);
      FUN_143b11ff0(local_2a0);
      FUN_143a8dc60(local_d8);
      *(longlong *)(param_1 + 0x5d0) = param_1 + 0x208;
      for (local_4d4 = 0; local_4d4 < 10; local_4d4 = local_4d4 + 1) {
        (**(code **)(*(longlong *)(param_1 + 0x208 + (longlong)local_4d4 * 0x58) + 0xd8))();
      }
      uVar2 = FUN_143b07d10(0,0,0,param_2);
      *(undefined8 *)(param_1 + 0x5d8) = uVar2;
      return param_1;
    }
  }
  for (local_4d4 = 0; local_4d4 < 0xd; local_4d4 = local_4d4 + 1) {
    local_4d0 = *(undefined8 **)(param_1 + (longlong)local_4d4 * 8);
    if (local_4d0 == (undefined8 *)0x0) {
      local_328 = 0;
    }
    else {
      local_338 = local_4d0;
      local_328 = (**(code **)*local_4d0)(local_4d0,1);
    }
    *(undefined8 *)(param_1 + (longlong)local_4d4 * 8) = 0;
  }
  *param_2 = 7;
  return param_1;
}



// FUNCTION 143bcf5d0 FUN_143bcf5d0 body=236 status=ok
// SIG undefined FUN_143bcf5d0(void)

void FUN_143bcf5d0(longlong param_1)

{
  undefined8 *puVar1;
  int local_38;
  
  for (local_38 = 0; local_38 < 0xd; local_38 = local_38 + 1) {
    puVar1 = *(undefined8 **)(param_1 + (longlong)local_38 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + (longlong)local_38 * 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  FUN_143b07390(*(undefined8 *)(param_1 + 0x5d8));
  FUN_143b11ff0(param_1 + 0x578);
  _eh_vector_destructor_iterator_(param_1 + 0x208,0x58,10,FUN_143b11ff0);
  return;
}



// FUNCTION 143bcf6c0 FUN_143bcf6c0 body=54 status=ok
// SIG undefined FUN_143bcf6c0(void)

undefined8 FUN_143bcf6c0(undefined8 param_1,uint param_2)

{
  FUN_143bcf5d0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bcf700 FUN_143bcf700 body=95 status=ok
// SIG undefined FUN_143bcf700(void)

undefined8 FUN_143bcf700(void)

{
  if (DAT_146bc8478 != 0) {
    FUN_143bcf6c0(DAT_146bc8478,1);
  }
  DAT_146bc8478 = 0;
  FUN_143a9a9f0(&DAT_146bc8480);
  return 1;
}



// FUNCTION 143bcf760 FUN_143bcf760 body=38 status=ok
// SIG undefined FUN_143bcf760(void)

void FUN_143bcf760(undefined8 param_1)

{
  FUN_143aa29a0(&DAT_146bc8480,FUN_143bcf790,param_1);
  return;
}



// FUNCTION 143bcf790 FUN_143bcf790 body=238 status=ok
// SIG undefined FUN_143bcf790(void)

void FUN_143bcf790(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_30;
  
  FUN_143b68380(3,FUN_143bcf880);
  lVar2 = FUN_143a8d310(0x5e0);
  if (lVar2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_143bce650(lVar2,param_1);
  }
  DAT_146bc8478 = local_30;
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 != '\0') {
    if (DAT_146bc8478 != 0) {
      FUN_143bcf6c0(DAT_146bc8478,1);
    }
    DAT_146bc8478 = 0;
  }
  if ((DAT_146bc8478 == 0) && (cVar1 = FUN_143a8b110(*param_1), cVar1 != '\0')) {
    *param_1 = 7;
  }
  return;
}



// FUNCTION 143bcf880 FUN_143bcf880 body=14 status=ok
// SIG undefined FUN_143bcf880(void)

void FUN_143bcf880(void)

{
  FUN_143bcf700();
  return;
}



// FUNCTION 143bcf890 FUN_143bcf890 body=61 status=ok
// SIG undefined FUN_143bcf890(void)

undefined4 FUN_143bcf890(longlong param_1,int param_2,int param_3)

{
  undefined4 local_18;
  
  if (param_3 < param_2) {
    local_18 = *(undefined4 *)(param_1 + (longlong)param_3 * 4);
  }
  else {
    local_18 = 0xffffffff;
  }
  return local_18;
}



// FUNCTION 143bcf8d0 FUN_143bcf8d0 body=256 status=ok
// SIG undefined FUN_143bcf8d0(void)

undefined8 FUN_143bcf8d0(void *param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  undefined8 uVar1;
  
  if (((((*param_4 < 0x14) || ((char)param_4[2] != '\0')) ||
       (*(char *)((longlong)param_4 + 5) != '\0')) ||
      (((char)param_4[4] != 'U' || (*(char *)((longlong)param_4 + 9) != 'C')))) ||
     (((char)param_4[5] != 'o' ||
      ((*(char *)((longlong)param_4 + 0xb) != 'l' || ((char)param_4[6] != '\x04')))))) {
    uVar1 = 0;
  }
  else {
    if (param_1 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_1,param_4 + 8,4);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143bcf9e0 FUN_143bcf9e0 body=4384 status=ok
// SIG undefined FUN_143bcf9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bcf9e0(longlong param_1,ushort *param_2,int param_3,longlong param_4,undefined4 *param_5
                  )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort *local_res10;
  int local_res18;
  undefined1 auStack_538 [32];
  undefined4 *local_518;
  int local_508;
  int local_504;
  int local_500;
  int local_4fc;
  undefined8 *local_4f8;
  ushort *local_4f0;
  longlong local_4e8;
  ushort local_4e0;
  int local_4dc;
  longlong local_4d8;
  int local_4d0;
  int local_4cc;
  longlong local_4c8;
  int local_4c0;
  uint local_4bc;
  int local_4b8;
  void *local_4b0;
  uint local_4a8;
  ushort *local_4a0;
  undefined4 local_498;
  int local_494;
  undefined4 local_490;
  undefined4 local_48c;
  uint local_488;
  int local_484;
  longlong local_480;
  undefined8 local_478;
  longlong local_470;
  longlong local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined1 local_440 [40];
  undefined1 local_418 [256];
  undefined1 local_318 [768];
  ulonglong local_18;
  
  local_448 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 != '\0') {
    return;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_1 != 0) {
    if ((param_2 == (ushort *)0x0) || ((-1 < param_3 && (param_3 < 0x18)))) {
      *param_5 = 1;
      return;
    }
    if ((((char)param_2[1] != -0x26) || (*(char *)((longlong)param_2 + 3) != '\'')) ||
       (local_4a0 = param_2, cVar1 = FUN_143bcf8d0(param_4 + 0x1c0,0,0,param_2 + 2), cVar1 == '\0'))
    {
      *param_5 = 3;
      return;
    }
    local_494 = FUN_143bd1190(param_1);
    iVar2 = FUN_143bd1190(param_4);
    if (local_494 != iVar2) {
      *param_5 = 0x1c;
      return;
    }
    local_4bc = (uint)*local_4a0;
    local_res10 = (ushort *)((longlong)param_2 + (longlong)(int)local_4bc);
    if (-1 < param_3) {
      local_res18 = param_3 - local_4bc;
    }
  }
  if ((local_res10 == (ushort *)0x0) || ((-1 < local_res18 && (local_res18 < 8)))) {
    *param_5 = 1;
  }
  else {
    local_4f0 = local_res10;
    local_4fc = *(int *)local_res10;
    if ((local_4fc < 2) || ((-1 < local_res18 && (local_res18 < local_4fc * 4)))) {
      *param_5 = 3;
    }
    else {
      if (local_4fc < 0x14) {
        if (local_4fc < 6) {
          local_508 = 0;
        }
        else {
          local_508 = *(int *)(local_res10 + (longlong)(local_4fc + -1) * 2);
        }
      }
      else {
        local_508 = *(int *)(local_res10 + 0x26);
      }
      if ((local_res18 < 0) || (local_508 <= local_res18)) {
        if (param_1 == 0) {
          local_468 = 0;
        }
        else {
          local_468 = *(longlong *)(param_1 + 0x10);
        }
        local_4e8 = local_468;
        local_4b0 = (void *)0x0;
        local_4dc = 0;
        local_500 = 5;
        local_504 = FUN_143bcf890(local_res10,local_4fc,5);
        local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
        local_508 = local_508 - local_504;
        if (3 < local_508) {
          if (local_4e8 == 0) {
            *param_5 = 3;
            return;
          }
          local_4b0 = (void *)((longlong)local_res10 + (longlong)local_504);
          local_4dc = (int)(local_508 + (local_508 >> 0x1f & 3U)) >> 2;
        }
        local_480 = 0;
        local_500 = 6;
        local_504 = FUN_143bcf890(local_4f0,local_4fc,6);
        local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
        local_508 = local_508 - local_504;
        if (0xff < local_508) {
          if (local_4dc == 0) {
            *param_5 = 3;
            return;
          }
          local_480 = (longlong)local_res10 + (longlong)local_504;
        }
        if ((local_4e8 == 0) ||
           (*(uint *)(local_4e8 + 0x38) == (*(uint *)(local_4f0 + 2) & 0xff000000))) {
          local_4f8 = (undefined8 *)0x0;
          local_500 = 7;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,7);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (local_508 < 8) {
            if (local_4e8 == 0) {
              *param_5 = 3;
              return;
            }
            *(longlong *)(param_4 + 0x10) = local_4e8;
          }
          else {
            cVar1 = FUN_143bd1090(param_4,param_5);
            if (cVar1 == '\0') {
              return;
            }
            local_4f8 = *(undefined8 **)(param_4 + 0x1c8);
            local_4f8[4] = local_4e8;
            *(uint *)(local_4f8 + 7) = *(uint *)(local_4f0 + 2) & 0xff000000;
            local_518 = param_5;
            local_478 = FUN_143ac2ea0(1,(longlong)local_res10 + (longlong)local_504,local_508,0);
            *(undefined8 *)(param_4 + 0x1e8) = local_478;
            *local_4f8 = local_478;
            cVar1 = FUN_143a8b0e0(*param_5);
            if (cVar1 != '\0') {
              return;
            }
          }
          local_500 = 9;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,9);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (7 < local_508) {
            if (local_4f8 == (undefined8 *)0x0) {
              *param_5 = 3;
              return;
            }
            local_4f8[2] = (longlong)local_res10 + (longlong)local_504;
            *(int *)(local_4f8 + 8) = (int)(local_508 + (local_508 >> 0x1f & 7U)) >> 3;
          }
          local_500 = 0xb;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,0xb);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (3 < local_508) {
            if (local_4f8 == (undefined8 *)0x0) {
              *param_5 = 3;
              return;
            }
            local_4f8[1] = (longlong)local_res10 + (longlong)local_504;
            *(int *)((longlong)local_4f8 + 0x3c) = (int)(local_508 + (local_508 >> 0x1f & 3U)) >> 2;
          }
          local_4c0 = FUN_143bcf890(local_4f0,local_4fc,4);
          if (local_4c0 < 0) {
            if (local_4f8 != (undefined8 *)0x0) {
              if (local_4e8 == 0) {
                *param_5 = 3;
                return;
              }
              local_4f8[5] = *(undefined8 *)(local_4e8 + 0x28);
            }
          }
          else {
            if ((local_4f8 == (undefined8 *)0x0) || (local_4f8[1] == 0)) {
              *param_5 = 3;
              return;
            }
            local_4f8[5] = local_4f8[1] + (longlong)local_4c0 * 4;
          }
          local_500 = 0xc;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,0xc);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (3 < local_508) {
            local_508 = (int)(local_508 + (local_508 >> 0x1f & 3U)) >> 2;
            if ((local_4f8 == (undefined8 *)0x0) || (local_508 < 5)) {
              *param_5 = 3;
              return;
            }
            local_4f8[0xf] = (longlong)local_res10 + (longlong)local_504;
            *(int *)(local_4f8 + 0x10) = local_508;
            if (*(int *)(local_4f8[0xf] + 0xc) != 0x5000500) {
              *param_5 = 3;
              return;
            }
            local_488 = *(uint *)(local_4f8[0xf] + 0x10);
            local_490 = 0x5000500;
            if (local_488 >> 0x18 < 0x45) {
              *param_5 = 3;
              return;
            }
          }
          local_500 = 0xd;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,0xd);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (1 < local_508) {
            if (local_4f8 == (undefined8 *)0x0) {
              *param_5 = 3;
              return;
            }
            local_4f8[3] = (longlong)local_res10 + (longlong)local_504;
            *(int *)((longlong)local_4f8 + 0x44) = local_508 / 2;
          }
          local_500 = 0xe;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,0xe);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (local_508 < 2) {
            if (local_4f8 != (undefined8 *)0x0) {
              if (local_4e8 == 0) {
                *param_5 = 3;
                return;
              }
              local_4f8[10] = *(undefined8 *)(local_4e8 + 0x50);
            }
          }
          else {
            if (local_4f8 == (undefined8 *)0x0) {
              *param_5 = 3;
              return;
            }
            if (local_4e8 == 0) {
              local_470 = FUN_143a8d310(0x58);
              if (local_470 == 0) {
                local_460 = 0;
              }
              else {
                local_460 = FUN_143b11d30(local_470,0xdc00,0xdfff);
              }
              local_450 = local_460;
              *(undefined8 *)(param_4 + 0x1f0) = local_460;
              if (*(longlong *)(param_4 + 0x1f0) == 0) {
                *param_5 = 7;
                return;
              }
              FUN_143b21320(local_4f8[6],*(undefined8 *)(param_4 + 0x1f0));
            }
            else {
              uVar4 = FUN_143b13df0(*(undefined8 *)(local_4e8 + 0x50));
              *(undefined8 *)(param_4 + 0x1f0) = uVar4;
              if (*(longlong *)(param_4 + 0x1f0) == 0) {
                *param_5 = 7;
                return;
              }
            }
            local_458 = (longlong)local_res10 + (longlong)local_504;
            cVar1 = FUN_143e22d90(local_440,local_458,local_508 / 2);
            if (cVar1 == '\0') {
              *param_5 = 3;
              return;
            }
            local_484 = FUN_143e22b70(local_440);
            for (local_4d0 = 0; local_4d0 < local_484; local_4d0 = local_4d0 + 1) {
              FUN_143e22bb0(local_440,local_4d0,&local_498,&local_48c);
              (**(code **)(**(longlong **)(param_4 + 0x1f0) + 0x68))
                        (*(undefined8 *)(param_4 + 0x1f0),local_498,local_48c);
            }
            local_4cc = 0x10000;
            for (local_4e0 = 0xd800; local_4e0 < 0xdc00; local_4e0 = local_4e0 + 1) {
              cVar1 = FUN_143b14510(*(undefined8 *)(param_4 + 0x1f0),local_4cc,local_4cc + 0x3ff);
              if (cVar1 == '\0') {
                FUN_143b13590(*(undefined8 *)(param_4 + 0x1f0),local_4e0);
              }
              local_4cc = local_4cc + 0x400;
            }
            FUN_143b149a0(*(undefined8 *)(param_4 + 0x1f0));
            local_4f8[10] = *(undefined8 *)(param_4 + 0x1f0);
          }
          if (local_4f8 != (undefined8 *)0x0) {
            local_4f8[0xb] = 0;
            *(undefined4 *)(local_4f8 + 0xc) = 0;
            if ((*(int *)(local_4f0 + 2) >> 0x10 & 0xffU) == 1) {
              local_500 = 0xf;
              local_504 = FUN_143bcf890(local_4f0,local_4fc,0xf);
              local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
              local_508 = local_508 - local_504;
              if (local_508 < 2) {
                if (local_4e8 != 0) {
                  local_4f8[0xb] = *(undefined8 *)(local_4e8 + 0x58);
                  *(undefined4 *)(local_4f8 + 0xc) = *(undefined4 *)(local_4e8 + 0x60);
                }
              }
              else {
                local_4f8[0xb] = (longlong)local_res10 + (longlong)local_504;
                *(int *)(local_4f8 + 0xc) = local_508 / 2;
                if ((int)(uint)*(ushort *)local_4f8[0xb] >> 8 != 1) {
                  *param_5 = 3;
                  return;
                }
              }
            }
          }
          local_500 = 0x10;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,0x10);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (local_508 < 2) {
            if ((local_4f8 != (undefined8 *)0x0) && (local_4e8 != 0)) {
              local_4f8[0xd] = *(undefined8 *)(local_4e8 + 0x68);
              *(undefined4 *)(local_4f8 + 0xe) = *(undefined4 *)(local_4e8 + 0x70);
            }
          }
          else {
            if (local_4f8 == (undefined8 *)0x0) {
              *param_5 = 3;
              return;
            }
            local_4f8[0xd] = (longlong)local_res10 + (longlong)local_504;
            *(int *)(local_4f8 + 0xe) = local_508 / 2;
          }
          local_500 = 0x11;
          local_504 = FUN_143bcf890(local_4f0,local_4fc,0x11);
          local_508 = FUN_143bcf890(local_4f0,local_4fc,local_500 + 1);
          local_508 = local_508 - local_504;
          if (local_508 < 0x100) {
            if (local_4f8 != (undefined8 *)0x0) {
              if (local_4e8 == 0) {
                *param_5 = 3;
                return;
              }
              local_4f8[9] = *(undefined8 *)(local_4e8 + 0x48);
            }
          }
          else {
            if (local_4f8 == (undefined8 *)0x0) {
              *param_5 = 3;
              return;
            }
            local_4f8[9] = (longlong)local_res10 + (longlong)local_504;
          }
          local_4c8 = *(longlong *)(param_4 + 0x18);
          local_4a8 = *(uint *)(local_4f0 + 2) & 0xffff;
          local_4b8 = FUN_143bd5890(*(undefined8 *)(param_4 + 0x10),local_4c8,local_318,0x180);
          if (((((local_4a8 != *(uint *)(local_4c8 + 0x10)) || (*(int *)(local_4c8 + 0x14) == 0)) ||
               (local_4dc != *(int *)(local_4c8 + 0x28))) ||
              ((iVar2 = _guard_xfg_dispatch_icall_nop
                                  (local_4b0,*(void **)(local_4c8 + 0x20),(longlong)(local_4dc << 2)
                                  ), iVar2 != 0 || (local_4b8 != *(int *)(local_4c8 + 0x30))))) ||
             ((-1 < local_4b8 &&
              (iVar2 = _guard_xfg_dispatch_icall_nop(local_318,(void *)(local_4c8 + 0x34),0x300),
              iVar2 != 0)))) {
            local_4d8 = FUN_143b60540(param_4 + 0x18);
            if (local_4d8 == 0) {
              *param_5 = 7;
            }
            else {
              *(uint *)(local_4d8 + 0x10) = local_4a8;
              iVar2 = FUN_143b64860(local_4d8);
              uVar3 = FUN_143b67b70(*(undefined8 *)(param_4 + 0x10),iVar2 + 0x1000);
              *(undefined4 *)(local_4d8 + 0x14) = uVar3;
              if (*(int *)(local_4d8 + 0x14) == 0) {
                *param_5 = 3;
              }
              else {
                if ((local_4dc == 0) || (local_480 != 0)) {
                  FUN_143bdda00(local_4d8,local_4b0,local_4dc,local_480);
                }
                else {
                  local_518 = param_5;
                  FUN_143b67be0(local_4e8,local_4b0,local_4dc,local_418);
                  cVar1 = FUN_143a8b0e0(*param_5);
                  if (cVar1 != '\0') {
                    return;
                  }
                  cVar1 = FUN_143bdde30(local_4d8,local_4b0,local_4dc,local_418);
                  if (cVar1 == '\0') {
                    *param_5 = 7;
                    return;
                  }
                }
                uVar3 = FUN_143bd5890(*(undefined8 *)(param_4 + 0x10),local_4d8,local_4d8 + 0x34,
                                      0x180);
                *(undefined4 *)(local_4d8 + 0x30) = uVar3;
              }
            }
          }
        }
        else {
          *param_5 = 3;
        }
      }
      else {
        *param_5 = 3;
      }
    }
  }
  return;
}



// FUNCTION 143bd0b00 FUN_143bd0b00 body=259 status=ok
// SIG undefined FUN_143bd0b00(void)

undefined8 * FUN_143bd0b00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = 0x12000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 143bd0c10 FUN_143bd0c10 body=130 status=ok
// SIG undefined FUN_143bd0c10(void)

_AfxBindHost * FUN_143bd0c10(_AfxBindHost *param_1)

{
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 = icu_53::CollationSettings::vftable;
  *(undefined4 *)(param_1 + 0x10) = 0x2010;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return param_1;
}



// FUNCTION 143bd0ca0 FUN_143bd0ca0 body=502 status=ok
// SIG undefined FUN_143bd0ca0(void)

_AfxBindHost * FUN_143bd0ca0(_AfxBindHost *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 = icu_53::CollationTailoring::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(longlong *)(param_1 + 0x18) = param_2;
  FUN_143a8ac30(param_1 + 0x20);
  FUN_143a8a690(param_1 + 0x48,&DAT_145af3922,0,0,0);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (param_2 == 0) {
    lVar1 = FUN_143a8d310(0x338);
    if (lVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143bd0c10(lVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = local_20;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_143e1a120(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_143a8ffc0(param_1 + 0x20);
  param_1[0x1c3] = (_AfxBindHost)0x0;
  param_1[0x1c2] = (_AfxBindHost)0x0;
  param_1[0x1c1] = (_AfxBindHost)0x0;
  param_1[0x1c0] = (_AfxBindHost)0x0;
  FUN_143a9a9f0(param_1 + 0x200);
  return param_1;
}



// FUNCTION 143bd0ea0 FUN_143bd0ea0 body=367 status=ok
// SIG undefined FUN_143bd0ea0(void)

void FUN_143bd0ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::CollationTailoring::vftable;
  FUN_143b60500(param_1 + 3);
  FUN_143a8d330(param_1[0x39]);
  puVar1 = (undefined8 *)param_1[0x3a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143ac56d0(param_1[0x3b]);
  FUN_143aa2ef0(param_1[0x3c]);
  FUN_143ac2a70(param_1[0x3d]);
  puVar1 = (undefined8 *)param_1[0x3e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143ab2e80(param_1[0x3f]);
  FUN_143a9a9f0(param_1 + 0x40);
  FUN_143a8acf0(param_1 + 9);
  FUN_143a8dc60(param_1 + 4);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143bd1010 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void * __ptr64 __cdecl std::ctype<unsigned short>::`scalar deleting
   destructor'(unsigned int) __ptr64
    protected: virtual void * __ptr64 __cdecl std::ctype<wchar_t>::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug, Visual Studio 2010 Release */

undefined8 FID_conflict__scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~ctype<>(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bd1050 FUN_143bd1050 body=54 status=ok
// SIG undefined FUN_143bd1050(void)

undefined8 FUN_143bd1050(undefined8 param_1,uint param_2)

{
  FUN_143bd0ea0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bd1090 FUN_143bd1090 body=248 status=ok
// SIG undefined FUN_143bd1090(void)

undefined8 FUN_143bd1090(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar2 = FUN_143b1f1c0(param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = FUN_143a8d310(0x88);
    if (lVar3 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143bd0b00(lVar3,uVar2);
    }
    *(undefined8 *)(param_1 + 0x1c8) = local_30;
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      *param_2 = 7;
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c8);
  return 1;
}



// FUNCTION 143bd1190 FUN_143bd1190 body=58 status=ok
// SIG undefined FUN_143bd1190(void)

uint FUN_143bd1190(longlong param_1)

{
  return (uint)*(byte *)(param_1 + 0x1c1) << 4 | (int)(uint)*(byte *)(param_1 + 0x1c2) >> 6;
}



// FUNCTION 143bd11d0 FUN_143bd11d0 body=298 status=ok
// SIG undefined FUN_143bd11d0(void)

void FUN_143bd11d0(longlong param_1,longlong param_2,byte *param_3)

{
  *(undefined1 *)(param_1 + 0x1c0) = 9;
  *(undefined1 *)(param_1 + 0x1c1) = *(undefined1 *)(param_2 + 1);
  *(byte *)(param_1 + 0x1c2) =
       (*(byte *)(param_2 + 2) & 0xc0) + (*param_3 + (char)((int)(uint)*param_3 >> 6) & 0x3f);
  *(byte *)(param_1 + 0x1c3) =
       (char)((int)(uint)param_3[1] >> 5) + param_3[1] * '\b' + param_3[2] + param_3[3] * '\x10' +
       (char)((int)(uint)param_3[3] >> 4);
  return;
}



// FUNCTION 143bd1300 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::ContractionsAndExpansions::CESink::vftable;
  return param_1;
}



// FUNCTION 143bd1320 FUN_143bd1320 body=169 status=ok
// SIG undefined FUN_143bd1320(void)

undefined8 *
FUN_143bd1320(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationElementIterator::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  FUN_143a8ac30(param_1 + 5);
  FUN_143bd1c50(param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143bd13d0 FUN_143bd13d0 body=169 status=ok
// SIG undefined FUN_143bd13d0(void)

undefined8 *
FUN_143bd13d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationElementIterator::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  FUN_143a8ac30(param_1 + 5);
  FUN_143bd1cd0(param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143bd1480 FUN_143bd1480 body=82 status=ok
// SIG undefined FUN_143bd1480(void)

undefined8 * FUN_143bd1480(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::_anon_4509A82B::MaxExpSink::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}



// FUNCTION 143bd14e0 FUN_143bd14e0 body=205 status=ok
// SIG undefined FUN_143bd14e0(void)

void FUN_143bd14e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::CollationElementIterator::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 5);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bd15b0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::_anon_4509A82B::MaxExpSink::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bd15e0 FUN_143bd15e0 body=54 status=ok
// SIG undefined FUN_143bd15e0(void)

undefined8 FUN_143bd15e0(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bd1620 FUN_143bd1620 body=54 status=ok
// SIG undefined FUN_143bd1620(void)

undefined8 FUN_143bd1620(undefined8 param_1,uint param_2)

{
  FUN_143bd14e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bd1660 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bd16a0 FUN_143bd16a0 body=54 status=ok
// SIG undefined FUN_143bd16a0(void)

bool FUN_143bd16a0(ulonglong param_1)

{
  return (param_1 & 0xffff00ff003f) != 0;
}



// FUNCTION 143bd16e0 FUN_143bd16e0 body=33 status=ok
// SIG undefined FUN_143bd16e0(void)

void FUN_143bd16e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return;
}



// FUNCTION 143bd1710 FUN_143bd1710 body=45 status=ok
// SIG undefined FUN_143bd1710(void)

void FUN_143bd1710(longlong param_1)

{
  if (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x18)) {
    FUN_143bd16e0(param_1);
  }
  return;
}



// FUNCTION 143bd1740 FUN_143bd1740 body=355 status=ok
// SIG undefined FUN_143bd1740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bd1740(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250 [24];
  undefined8 local_238;
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_238 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_278 = FUN_143ab3680(FUN_143ab33a0,FUN_143ab3020,FUN_143ab3020,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      FUN_143bd1480(local_250,local_278,param_2);
      local_288 = 1;
      local_260 = FUN_143b60770(local_228,0,0,local_250);
      local_258 = local_260;
      FUN_143bdc450(local_260,param_1,param_2);
      FUN_143b613b0(local_228);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 == '\0') {
        local_268 = local_278;
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_250);
        local_270 = local_268;
      }
      else {
        FUN_143ab2e80(local_278);
        local_270 = 0;
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_250);
      }
    }
    else {
      local_270 = 0;
    }
  }
  else {
    local_270 = 0;
  }
  return local_270;
}



// FUNCTION 143bd18b0 FUN_143bd18b0 body=19 status=ok
// SIG undefined FUN_143bd18b0(void)

void FUN_143bd18b0(void)

{
  FUN_143bd19c0();
  return;
}



// FUNCTION 143bd18d0 FUN_143bd18d0 body=48 status=ok
// SIG undefined FUN_143bd18d0(void)

uint FUN_143bd18d0(uint param_1,uint param_2)

{
  return param_1 & 0xffff0000 | param_2 >> 0x10 & 0xff00 | param_2 >> 8 & 0xff;
}



// FUNCTION 143bd1900 FUN_143bd1900 body=143 status=ok
// SIG undefined FUN_143bd1900(void)

void FUN_143bd1900(longlong param_1)

{
  char cVar1;
  int local_18;
  
  if (((*(char *)(param_1 + 0x1c) < '\0') && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (cVar1 = FUN_143b14e10(*(undefined8 *)(param_1 + 0x20)), cVar1 == '\0')) {
    local_18 = FUN_143b5e700(*(undefined8 *)(param_1 + 8));
    if (*(int *)(param_1 + 0x18) != 0) {
      local_18 = local_18 + 1;
    }
    FUN_143b59890(*(undefined8 *)(param_1 + 0x20),local_18);
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143bd1990 FUN_143bd1990 body=40 status=ok
// SIG undefined FUN_143bd1990(void)

uint FUN_143bd1990(int param_1,uint param_2)

{
  return param_1 << 0x10 | param_2 >> 8 & 0xff00 | param_2 & 0x3f;
}



// FUNCTION 143bd19c0 FUN_143bd19c0 body=8 status=ok
// SIG undefined FUN_143bd19c0(void)

undefined * FUN_143bd19c0(void)

{
  return &DAT_146bc8488;
}



// FUNCTION 143bd19d0 FUN_143bd19d0 body=291 status=ok
// SIG undefined FUN_143bd19d0(void)

void FUN_143bd19d0(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (1 < param_3) {
    local_20 = 0;
    for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
      cVar2 = FUN_143bd16a0(*(undefined8 *)(param_2 + (longlong)local_24 * 8));
      if (cVar2 == '\0') {
        local_1c = 1;
      }
      else {
        local_1c = 2;
      }
      local_20 = local_20 + local_1c;
    }
    uVar1 = *(ulonglong *)(param_2 + (longlong)(param_3 + -1) * 8);
    uVar3 = (undefined4)(uVar1 >> 0x20);
    local_28 = FUN_143bd1990(uVar3,uVar1 & 0xffffffff);
    if (local_28 == 0) {
      local_28 = FUN_143bd18d0(uVar3,uVar1 & 0xffffffff);
    }
    else {
      local_28 = local_28 | 0xc0;
    }
    iVar4 = FUN_143ab3440(*(undefined8 *)(param_1 + 8),local_28);
    if (iVar4 < local_20) {
      FUN_143ab3530(*(undefined8 *)(param_1 + 8),local_28,local_20,*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 143bd1b00 FUN_143bd1b00 body=323 status=ok
// SIG undefined FUN_143bd1b00(void)

undefined4 FUN_143bd1b00(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x1c) < '\x02') {
      if (*(char *)(param_1 + 0x1c) == '\x01') {
        *(undefined1 *)(param_1 + 0x1c) = 2;
      }
      else {
        if (*(char *)(param_1 + 0x1c) != '\0') {
          *param_2 = 0x1b;
          return 0xffffffff;
        }
        *(undefined1 *)(param_1 + 0x1c) = 2;
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      return uVar2;
    }
    FUN_143bd1710(*(undefined8 *)(param_1 + 8));
    uVar5 = FUN_143b65f60(*(undefined8 *)(param_1 + 8),param_2);
    if (uVar5 == 0x101000100) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar2 = (undefined4)(uVar5 >> 0x20);
      uVar3 = FUN_143bd18d0(uVar2,uVar5 & 0xffffffff);
      uVar4 = FUN_143bd1990(uVar2,uVar5 & 0xffffffff);
      if (uVar4 != 0) {
        *(uint *)(param_1 + 0x18) = uVar4 | 0xc0;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143bd1c50 FUN_143bd1c50 body=113 status=ok
// SIG undefined FUN_143bd1c50(void)

void FUN_143bd1c50(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 200))(param_2,param_1 + 0x28);
    FUN_143bd1cd0(param_1,param_1 + 0x28,param_3);
  }
  return;
}



// FUNCTION 143bd1cd0 FUN_143bd1cd0 body=619 status=ok
// SIG undefined FUN_143bd1cd0(void)

void FUN_143bd1cd0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_60;
  longlong local_48;
  longlong local_40;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    FUN_143a8dcd0(param_1 + 0x28,param_2);
    lVar5 = FUN_143a8fe10(param_1 + 0x28);
    uVar3 = FUN_143b65e00(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
    cVar2 = FUN_143b64100(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
    if (cVar2 == '\0') {
      lVar6 = FUN_143a8d310(0x1f8);
      if (lVar6 == 0) {
        local_40 = 0;
      }
      else {
        iVar4 = FUN_143a904f0(param_1 + 0x28);
        local_40 = FUN_143b60950(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),uVar3,
                                 lVar5,lVar5,lVar5 + (longlong)iVar4 * 2);
      }
      local_60 = local_40;
    }
    else {
      lVar6 = FUN_143a8d310(0x1a0);
      if (lVar6 == 0) {
        local_48 = 0;
      }
      else {
        iVar4 = FUN_143a904f0(param_1 + 0x28);
        local_48 = FUN_143b611c0(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),uVar3,
                                 lVar5,lVar5,lVar5 + (longlong)iVar4 * 2);
      }
      local_60 = local_48;
    }
    if (local_60 == 0) {
      *param_3 = 7;
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(longlong *)(param_1 + 8) = local_60;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}



// FUNCTION 143bd1f40 FUN_143bd1f40 body=177 status=ok
// SIG undefined FUN_143bd1f40(void)

void * FUN_143bd1f40(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  void *_Src;
  
  _Dst = (void *)FUN_143aa7a40((longlong)param_2);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    if (0 < param_3) {
      _Src = (void *)FUN_143b64300(param_1);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)param_3);
    }
    if (*(int *)(param_1 + 8) < 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
    }
    *(void **)(param_1 + 0x10) = _Dst;
    *(int *)(param_1 + 0x18) = param_2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  }
  return _Dst;
}



// FUNCTION 143bd2000 FUN_143bd2000 body=44 status=ok
// SIG undefined FUN_143bd2000(void)

longlong FUN_143bd2000(longlong param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return param_1;
}



// FUNCTION 143bd2030 FUN_143bd2030 body=47 status=ok
// SIG undefined FUN_143bd2030(void)

void FUN_143bd2030(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x80000000 | param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 143bd2060 FUN_143bd2060 body=44 status=ok
// SIG undefined FUN_143bd2060(void)

longlong FUN_143bd2060(longlong param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 2;
  return param_1;
}



// FUNCTION 143bd2090 FUN_143bd2090 body=1074 status=ok
// SIG undefined FUN_143bd2090(void)

char * FUN_143bd2090(int param_1,char *param_2)

{
  int local_res8;
  char *local_res10;
  int local_18;
  
  if (param_1 < -0x50) {
    if (param_1 < -0x29ac) {
      if (param_1 < -0x2f112) {
        local_18 = param_1 % 0xfd;
        local_res8 = param_1 / 0xfd;
        if (local_18 < 0) {
          local_res8 = local_res8 + -1;
          local_18 = local_18 + 0xfd;
        }
        param_2[3] = (char)local_18 + '\x03';
        local_18 = local_res8 % 0xfd;
        local_res8 = local_res8 / 0xfd;
        if (local_18 < 0) {
          local_res8 = local_res8 + -1;
          local_18 = local_18 + 0xfd;
        }
        param_2[2] = (char)local_18 + '\x03';
        local_18 = local_res8 % 0xfd;
        if (local_18 < 0) {
          local_18 = local_18 + 0xfd;
        }
        param_2[1] = (char)local_18 + '\x03';
        *param_2 = '\x03';
        local_res10 = param_2 + 4;
      }
      else {
        local_18 = param_1 % 0xfd;
        local_res8 = param_1 / 0xfd;
        if (local_18 < 0) {
          local_res8 = local_res8 + -1;
          local_18 = local_18 + 0xfd;
        }
        param_2[2] = (char)local_18 + '\x03';
        local_18 = local_res8 % 0xfd;
        local_res8._0_1_ = (char)(local_res8 / 0xfd);
        if (local_18 < 0) {
          local_res8._0_1_ = (char)local_res8 + -1;
          local_18 = local_18 + 0xfd;
        }
        param_2[1] = (char)local_18 + '\x03';
        *param_2 = (char)local_res8 + '\a';
        local_res10 = param_2 + 3;
      }
    }
    else {
      local_18 = param_1 % 0xfd;
      local_res8._0_1_ = (char)(param_1 / 0xfd);
      if (local_18 < 0) {
        local_res8._0_1_ = (char)local_res8 + -1;
        local_18 = local_18 + 0xfd;
      }
      *param_2 = (char)local_res8 + '1';
      param_2[1] = (char)local_18 + '\x03';
      local_res10 = param_2 + 2;
    }
  }
  else if (param_1 < 0x51) {
    *param_2 = (char)param_1 + -0x7f;
    local_res10 = param_2 + 1;
  }
  else if (param_1 < 0x29ac) {
    *param_2 = (char)(param_1 / 0xfd) + -0x2e;
    param_2[1] = (char)((longlong)param_1 % 0xfd) + '\x03';
    local_res10 = param_2 + 2;
  }
  else if (param_1 < 0x2f112) {
    param_2[2] = (char)((longlong)param_1 % 0xfd) + '\x03';
    param_2[1] = (char)((longlong)(param_1 / 0xfd) % 0xfd) + '\x03';
    *param_2 = (char)((param_1 / 0xfd) / 0xfd) + -4;
    local_res10 = param_2 + 3;
  }
  else {
    param_2[3] = (char)((longlong)param_1 % 0xfd) + '\x03';
    param_2[2] = (char)((longlong)(param_1 / 0xfd) % 0xfd) + '\x03';
    param_2[1] = (char)((longlong)((param_1 / 0xfd) / 0xfd) % 0xfd) + '\x03';
    *param_2 = -1;
    local_res10 = param_2 + 4;
  }
  return local_res10;
}



// FUNCTION 143bd24d0 FUN_143bd24d0 body=609 status=ok
// SIG undefined FUN_143bd24d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143bd24d0(uint param_1,longlong param_2,int param_3,longlong *param_4)

{
  int iVar1;
  uint local_res8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int *local_a0;
  int local_98;
  uint local_94;
  ushort local_90;
  undefined1 *local_88;
  int local_80 [2];
  undefined1 *local_78;
  longlong local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_res8 = param_1;
  while (local_98 < param_3) {
    local_70 = *param_4;
    local_a0 = local_80;
    local_a8 = 0x40;
    local_78 = (undefined1 *)(**(code **)(local_70 + 0x10))(param_4,1,param_3 << 1,local_58);
    if (local_80[0] < 0x10) {
      local_78 = local_58;
      local_80[0] = 0x40;
    }
    local_88 = local_78;
    local_60 = local_78 + (longlong)local_80[0] + -4;
    while ((local_98 < param_3 && (local_88 <= local_60))) {
      if (((int)local_res8 < 0x4e00) || (0x9fff < (int)local_res8)) {
        local_res8 = (local_res8 & 0xffffff80) + 0x50;
      }
      else {
        local_res8 = 0x7654;
      }
      local_94 = (uint)*(ushort *)(param_2 + (longlong)local_98 * 2);
      iVar1 = local_98 + 1;
      if ((((local_94 & 0xfffffc00) == 0xd800) && (iVar1 != param_3)) &&
         (local_90 = *(ushort *)(param_2 + (longlong)iVar1 * 2), (local_90 & 0xfc00) == 0xdc00)) {
        local_94 = local_94 * 0x400 + -0x35fdc00 + (uint)local_90;
        iVar1 = local_98 + 2;
      }
      local_98 = iVar1;
      if (local_94 == 0xfffe) {
        *local_88 = 2;
        local_88 = local_88 + 1;
        local_res8 = 0;
      }
      else {
        local_88 = (undefined1 *)FUN_143bd2090(local_94 - local_res8,local_88);
        local_res8 = local_94;
      }
    }
    local_68 = *param_4;
    (**(code **)(local_68 + 8))
              (param_4,local_78,(longlong)local_88 - (longlong)local_78 & 0xffffffff);
  }
  return local_res8;
}



// FUNCTION 143bd2740 FUN_143bd2740 body=2910 status=ok
// SIG undefined FUN_143bd2740(void)

undefined4 FUN_143bd2740(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  int local_c8;
  int local_c4;
  uint local_c0;
  int local_b8;
  int local_b4;
  int local_a8;
  int local_a4;
  uint local_9c;
  uint local_80;
  ulonglong local_68;
  ulonglong local_60;
  uint local_18;
  uint local_10;
  
  cVar3 = FUN_143a8b0e0(*param_4);
  if (cVar3 == '\0') {
    uVar1 = *(uint *)(param_3 + 0x10);
    if ((uVar1 & 0xc) == 0) {
      local_d4 = 0;
    }
    else {
      local_d4 = *(int *)(param_3 + 0x14) + 1;
    }
    bVar2 = false;
    do {
      do {
        local_60 = FUN_143b65f60(param_1,param_4);
        local_114 = (uint)(local_60 >> 0x20);
        if ((local_114 < local_d4) && (0x2000000 < local_114)) {
          bVar2 = true;
          do {
            FUN_143bd3370(param_1,local_60 & 0xffffffff00000000);
            while( true ) {
              local_60 = FUN_143b65f60(param_1,param_4);
              local_114 = (uint)(local_60 >> 0x20);
              if (local_114 != 0) break;
              FUN_143bd3370(param_1,0);
            }
          } while ((local_114 < local_d4) && (0x2000000 < local_114));
        }
      } while (local_114 == 0);
      do {
        local_68 = FUN_143b65f60(param_2,param_4);
        local_108 = (uint)(local_68 >> 0x20);
        if ((local_108 < local_d4) && (0x2000000 < local_108)) {
          bVar2 = true;
          do {
            FUN_143bd3370(param_2,local_68 & 0xffffffff00000000);
            while( true ) {
              local_68 = FUN_143b65f60(param_2,param_4);
              local_108 = (uint)(local_68 >> 0x20);
              if (local_108 != 0) break;
              FUN_143bd3370(param_2,0);
            }
          } while ((local_108 < local_d4) && (0x2000000 < local_108));
        }
      } while (local_108 == 0);
      if (local_114 != local_108) {
        lVar8 = *(longlong *)(param_3 + 0x18);
        if (lVar8 != 0) {
          local_114 = FUN_143bd3340(lVar8,local_114);
          local_108 = FUN_143bd3340(lVar8,local_108);
        }
        if (local_108 <= local_114) {
          return 1;
        }
        return 0xffffffff;
      }
    } while (local_114 != 1);
    cVar3 = FUN_143a8b0e0(*param_4);
    if (cVar3 == '\0') {
      iVar4 = FUN_143b64b50(uVar1);
      if (0 < iVar4) {
        if ((uVar1 & 0x800) == 0) {
          local_a4 = 0;
          local_a8 = 0;
          do {
            do {
              uVar5 = FUN_143bd32a0(param_1,local_a4);
              uVar5 = uVar5 >> 0x10;
              local_a4 = local_a4 + 1;
            } while (uVar5 == 0);
            do {
              uVar6 = FUN_143bd32a0(param_2,local_a8);
              uVar6 = uVar6 >> 0x10;
              local_a8 = local_a8 + 1;
            } while (uVar6 == 0);
            if (uVar5 != uVar6) {
              if (uVar6 <= uVar5) {
                return 1;
              }
              return 0xffffffff;
            }
          } while (uVar5 != 0x100);
        }
        else {
          local_b8 = 0;
          local_b4 = 0;
          while( true ) {
            local_e8 = local_b8;
            while ((uVar5 = FUN_143bd32a0(param_1,local_e8), 0x2000200 < uVar5 || (uVar5 == 0))) {
              local_e8 = local_e8 + 1;
            }
            local_d8 = local_b4;
            while ((uVar5 = FUN_143bd32a0(param_2,local_d8), 0x2000200 < uVar5 || (uVar5 == 0))) {
              local_d8 = local_d8 + 1;
            }
            local_c4 = local_e8;
            local_c8 = local_d8;
            do {
              local_dc = 0;
              while ((local_dc == 0 && (local_b8 < local_c4))) {
                local_c4 = local_c4 + -1;
                local_dc = FUN_143bd32a0(param_1,local_c4);
                local_dc = local_dc >> 0x10;
              }
              local_c0 = 0;
              while ((local_c0 == 0 && (local_b4 < local_c8))) {
                local_c8 = local_c8 + -1;
                local_c0 = FUN_143bd32a0(param_2,local_c8);
                local_c0 = local_c0 >> 0x10;
              }
              if (local_dc != local_c0) {
                if (local_c0 <= local_dc) {
                  return 1;
                }
                return 0xffffffff;
              }
            } while (local_dc != 0);
            lVar8 = FUN_143bd32a0(param_1,local_e8);
            if (lVar8 == 0x101000100) break;
            local_b8 = local_e8 + 1;
            local_b4 = local_d8 + 1;
          }
        }
      }
      if ((uVar1 & 0x400) != 0) {
        iVar4 = FUN_143b64b50(uVar1);
        local_e4 = 0;
        local_e0 = 0;
        do {
          if (iVar4 == 0) {
            do {
              do {
                uVar9 = FUN_143bd32a0(param_1,local_e4);
                local_e4 = local_e4 + 1;
                local_80 = (uint)uVar9;
              } while ((int)((ulonglong)uVar9 >> 0x20) == 0);
            } while (local_80 == 0);
            local_9c = local_80;
            do {
              do {
                uVar9 = FUN_143bd32a0(param_2,local_e0);
                local_e0 = local_e0 + 1;
                local_80 = (uint)uVar9;
              } while ((int)((ulonglong)uVar9 >> 0x20) == 0);
            } while (local_80 == 0);
          }
          else {
            do {
              local_9c = FUN_143bd32a0(param_1,local_e4);
              local_e4 = local_e4 + 1;
            } while (local_9c < 0x10000);
            do {
              local_80 = FUN_143bd32a0(param_2,local_e0);
              local_e0 = local_e0 + 1;
            } while (local_80 < 0x10000);
          }
          local_fc = local_80 & 0xc000;
          local_110 = local_9c & 0xc000;
          if (local_110 != local_fc) {
            if ((uVar1 & 0x100) != 0) {
              if (local_fc <= local_110) {
                return 0xffffffff;
              }
              return 1;
            }
            if (local_fc <= local_110) {
              return 1;
            }
            return 0xffffffff;
          }
        } while (local_9c >> 0x10 != 0x100);
      }
      iVar4 = FUN_143b64b50(uVar1);
      if (1 < iVar4) {
        uVar5 = FUN_143bd32d0(uVar1);
        local_ec = 0;
        local_f0 = 0;
        local_d0 = 0;
        do {
          do {
            uVar6 = FUN_143bd32a0(param_1,local_ec);
            local_ec = local_ec + 1;
            local_d0 = local_d0 | uVar6;
            local_f8 = uVar6 & uVar5;
          } while (local_f8 == 0);
          do {
            uVar7 = FUN_143bd32a0(param_2,local_f0);
            local_f0 = local_f0 + 1;
            local_d0 = local_d0 | uVar7;
            local_f4 = uVar7 & uVar5;
          } while (local_f4 == 0);
          if (local_f8 != local_f4) {
            cVar3 = FUN_143bd33b0(uVar1);
            if (cVar3 != '\0') {
              if (0x200 < local_f8) {
                if (uVar6 < 0x10000) {
                  local_f8 = local_f8 + 0x4000;
                }
                else {
                  local_f8 = local_f8 ^ 0xc000;
                }
              }
              if (0x200 < local_f4) {
                if (uVar7 < 0x10000) {
                  local_f4 = local_f4 + 0x4000;
                }
                else {
                  local_f4 = local_f4 ^ 0xc000;
                }
              }
            }
            if (local_f4 <= local_f8) {
              return 1;
            }
            return 0xffffffff;
          }
        } while (local_f8 != 0x100);
        iVar4 = FUN_143b64b50(uVar1);
        if ((2 < iVar4) && ((bVar2 || ((local_d0 & 0xc0) != 0)))) {
          local_ec = 0;
          local_f0 = 0;
          do {
            do {
              uVar10 = FUN_143bd32a0(param_1,local_ec);
              local_ec = local_ec + 1;
              local_18 = (uint)uVar10;
              local_10c = local_18 & 0xffff;
              if ((uVar10 & 0xffff) == 0) {
                local_10c = (uint)(uVar10 >> 0x20);
              }
              else if (0x200 < local_10c) {
                local_10c = local_10c | 0xffffff3f;
              }
            } while (local_10c == 0);
            do {
              uVar10 = FUN_143bd32a0(param_2,local_f0);
              local_f0 = local_f0 + 1;
              local_10 = (uint)uVar10;
              local_100 = local_10 & 0xffff;
              if ((uVar10 & 0xffff) == 0) {
                local_100 = (uint)(uVar10 >> 0x20);
              }
              else if (0x200 < local_100) {
                local_100 = local_100 | 0xffffff3f;
              }
            } while (local_100 == 0);
            if (local_10c != local_100) {
              lVar8 = *(longlong *)(param_3 + 0x18);
              if (lVar8 != 0) {
                local_10c = FUN_143bd3340(lVar8,local_10c);
                local_100 = FUN_143bd3340(lVar8,local_100);
              }
              if (local_100 <= local_10c) {
                return 1;
              }
              return 0xffffffff;
            }
          } while (local_10c != 0x100);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143bd32a0 FUN_143bd32a0 body=39 status=ok
// SIG undefined FUN_143bd32a0(void)

void FUN_143bd32a0(longlong param_1,undefined4 param_2)

{
  FUN_143b64180(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 143bd32d0 FUN_143bd32d0 body=51 status=ok
// SIG undefined FUN_143bd32d0(void)

undefined4 FUN_143bd32d0(undefined4 param_1)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143bd3310(param_1);
  if (cVar1 == '\0') {
    local_18 = 0x3f3f;
  }
  else {
    local_18 = 0xff3f;
  }
  return local_18;
}



// FUNCTION 143bd3310 FUN_143bd3310 body=43 status=ok
// SIG undefined FUN_143bd3310(void)

bool FUN_143bd3310(uint param_1)

{
  return (param_1 & 0x600) == 0x200;
}



// FUNCTION 143bd3340 FUN_143bd3340 body=43 status=ok
// SIG undefined FUN_143bd3340(void)

uint FUN_143bd3340(longlong param_1,uint param_2)

{
  return (uint)*(byte *)(param_1 + (ulonglong)(param_2 >> 0x18)) << 0x18 | param_2 & 0xffffff;
}



// FUNCTION 143bd3370 FUN_143bd3370 body=53 status=ok
// SIG undefined FUN_143bd3370(void)

void FUN_143bd3370(longlong param_1,undefined8 param_2)

{
  FUN_143b66780(param_1 + 0x18,*(int *)(param_1 + 0x170) + -1,param_2);
  return;
}



// FUNCTION 143bd33b0 FUN_143bd33b0 body=43 status=ok
// SIG undefined FUN_143bd33b0(void)

bool FUN_143bd33b0(uint param_1)

{
  return (param_1 & 0x700) == 0x300;
}



// FUNCTION 143bd33e0 FUN_143bd33e0 body=4327 status=ok
// SIG undefined FUN_143bd33e0(void)

undefined4
FUN_143bd33e0(ushort *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
             longlong param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  param_1 = param_1 + (int)(*param_1 & 0xff);
  local_98 = param_3 >> 0x10;
  uVar2 = param_3 & 0xffff;
  local_9c = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_a4 = 0;
LAB_143bd346c:
  while (local_a8 == 0) {
    if (local_9c == param_5) {
      local_a8 = 2;
      break;
    }
    local_90 = (uint)*(ushort *)(param_4 + (longlong)local_9c * 2);
    local_9c = local_9c + 1;
    if (local_90 < 0x180) {
      local_a8 = (uint)*(ushort *)(param_2 + (longlong)(int)local_90 * 2);
      if (local_a8 != 0) break;
      if (((local_90 < 0x3a) && (0x2f < local_90)) && ((param_3 & 2) != 0)) {
        return 0xfffffffe;
      }
      local_a8 = (uint)param_1[(int)local_90];
    }
    else if ((local_90 < 0x2000) || (0x203f < local_90)) {
      local_a8 = FUN_143bd5ec0(param_1,local_90);
    }
    else {
      local_a8 = (uint)param_1[(int)(local_90 - 0x1e80)];
    }
    if (0xfff < local_a8) {
      local_a8 = local_a8 & 0xfc00;
      break;
    }
    if (local_98 < local_a8) {
      local_a8 = local_a8 & 0xfff8;
      break;
    }
    iVar3 = FUN_143bd6100(param_1,local_90,local_a8,param_4,0,&local_9c,&param_5);
    if (iVar3 == 1) {
      return 0xfffffffe;
    }
    local_a8 = FUN_143bd5b50(local_98,iVar3);
  }
  while (local_a4 == 0) {
    if (local_a0 == param_7) {
      local_a4 = 2;
      break;
    }
    local_8c = (uint)*(ushort *)(param_6 + (longlong)local_a0 * 2);
    local_a0 = local_a0 + 1;
    if (local_8c < 0x180) {
      local_a4 = (uint)*(ushort *)(param_2 + (longlong)(int)local_8c * 2);
      if (local_a4 != 0) break;
      if (((local_8c < 0x3a) && (0x2f < local_8c)) && ((param_3 & 2) != 0)) {
        return 0xfffffffe;
      }
      local_a4 = (uint)param_1[(int)local_8c];
    }
    else if ((local_8c < 0x2000) || (0x203f < local_8c)) {
      local_a4 = FUN_143bd5ec0(param_1,local_8c);
    }
    else {
      local_a4 = (uint)param_1[(int)(local_8c - 0x1e80)];
    }
    if (0xfff < local_a4) {
      local_a4 = local_a4 & 0xfc00;
      break;
    }
    if (local_98 < local_a4) {
      local_a4 = local_a4 & 0xfff8;
      break;
    }
    iVar3 = FUN_143bd6100(param_1,local_8c,local_a4,param_6,0,&local_a0,&param_7);
    if (iVar3 == 1) {
      return 0xfffffffe;
    }
    local_a4 = FUN_143bd5b50(local_98,iVar3);
  }
  if (local_a8 == local_a4) {
    if (local_a8 != 2) {
      local_a4 = 0;
      local_a8 = 0;
      goto LAB_143bd346c;
    }
  }
  else {
    local_50 = local_a8 & 0xffff;
    local_40 = local_a4 & 0xffff;
    if (local_50 != local_40) {
      if (local_40 <= local_50) {
        return 1;
      }
      return 0xffffffff;
    }
    if (local_a8 != 2) {
      local_a8 = local_a8 >> 0x10;
      local_a4 = local_a4 >> 0x10;
      goto LAB_143bd346c;
    }
  }
  iVar3 = FUN_143b64b50(uVar2);
  if (iVar3 < 1) goto LAB_143bd3bb1;
  local_a0 = 0;
  local_9c = 0;
  local_a4 = 0;
  local_a8 = 0;
LAB_143bd387c:
  if (local_a8 == 0) {
    if (local_9c == param_5) {
      local_a8 = 2;
      goto LAB_143bd39b0;
    }
    local_84 = (uint)*(ushort *)(param_4 + (longlong)local_9c * 2);
    local_9c = local_9c + 1;
    if (local_84 < 0x180) {
      local_a8 = (uint)param_1[(int)local_84];
    }
    else if ((local_84 < 0x2000) || (0x203f < local_84)) {
      local_a8 = FUN_143bd5ec0(param_1,local_84);
    }
    else {
      local_a8 = (uint)param_1[(int)(local_84 - 0x1e80)];
    }
    if (0xfff < local_a8) {
      local_a8 = FUN_143bd5d10(local_a8);
      goto LAB_143bd39b0;
    }
    if (local_98 < local_a8) {
      local_a8 = 0xc0;
      goto LAB_143bd39b0;
    }
    uVar4 = FUN_143bd6100(param_1,local_84,local_a8,param_4,0,&local_9c,&param_5);
    local_a8 = FUN_143bd5c60(local_98,uVar4);
    goto LAB_143bd387c;
  }
LAB_143bd39b0:
  while (local_a4 == 0) {
    if (local_a0 == param_7) {
      local_a4 = 2;
      break;
    }
    local_88 = (uint)*(ushort *)(param_6 + (longlong)local_a0 * 2);
    local_a0 = local_a0 + 1;
    if (local_88 < 0x180) {
      local_a4 = (uint)param_1[(int)local_88];
    }
    else if ((local_88 < 0x2000) || (0x203f < local_88)) {
      local_a4 = FUN_143bd5ec0(param_1,local_88);
    }
    else {
      local_a4 = (uint)param_1[(int)(local_88 - 0x1e80)];
    }
    if (0xfff < local_a4) {
      local_a4 = FUN_143bd5d10(local_a4);
      break;
    }
    if (local_98 < local_a4) {
      local_a4 = 0xc0;
      break;
    }
    uVar4 = FUN_143bd6100(param_1,local_88,local_a4,param_6,0,&local_a0,&param_7);
    local_a4 = FUN_143bd5c60(local_98,uVar4);
  }
  if (local_a8 == local_a4) {
    if (local_a8 == 2) goto LAB_143bd3bb1;
    local_a4 = 0;
    local_a8 = 0;
    goto LAB_143bd387c;
  }
  local_20 = local_a8 & 0xffff;
  local_48 = local_a4 & 0xffff;
  if (local_20 != local_48) {
    if ((param_3 & 0x800) != 0) {
      return 0xfffffffe;
    }
    if (local_48 <= local_20) {
      return 1;
    }
    return 0xffffffff;
  }
  if (local_a8 != 2) {
    local_a8 = local_a8 >> 0x10;
    local_a4 = local_a4 >> 0x10;
    goto LAB_143bd387c;
  }
LAB_143bd3bb1:
  if ((param_3 & 0x400) != 0) {
    iVar3 = FUN_143b64b50(uVar2);
    local_94 = iVar3 == 0;
    local_a0 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_93 = local_94;
LAB_143bd3c0a:
    for (; local_a8 == 0; local_a8 = FUN_143bd5790(local_98,local_94,local_a8)) {
      if (local_9c == param_5) {
        local_a8 = 2;
        break;
      }
      local_6c = (uint)*(ushort *)(param_4 + (longlong)local_9c * 2);
      local_9c = local_9c + 1;
      if (local_6c < 0x180) {
        local_28 = (uint)param_1[(int)local_6c];
      }
      else {
        local_28 = FUN_143bd5ec0(param_1,local_6c);
      }
      local_a8 = local_28;
      if (local_28 < 0xc00) {
        local_a8 = FUN_143bd6100(param_1,local_6c,local_28,param_4,0,&local_9c,&param_5);
      }
    }
    for (; local_a4 == 0; local_a4 = FUN_143bd5790(local_98,local_94,local_a4)) {
      if (local_a0 == param_7) {
        local_a4 = 2;
        break;
      }
      local_70 = (uint)*(ushort *)(param_6 + (longlong)local_a0 * 2);
      local_a0 = local_a0 + 1;
      if (local_70 < 0x180) {
        local_38 = (uint)param_1[(int)local_70];
      }
      else {
        local_38 = FUN_143bd5ec0(param_1,local_70);
      }
      local_a4 = local_38;
      if (local_38 < 0xc00) {
        local_a4 = FUN_143bd6100(param_1,local_70,local_38,param_6,0,&local_a0,&param_7);
      }
    }
    if (local_a8 == local_a4) {
      if (local_a8 == 2) goto LAB_143bd3ee9;
      local_a4 = 0;
      local_a8 = 0;
      goto LAB_143bd3c0a;
    }
    local_5c = local_a8 & 0xffff;
    local_60 = local_a4 & 0xffff;
    if (local_5c != local_60) {
      if ((param_3 & 0x100) != 0) {
        if (local_60 <= local_5c) {
          return 0xffffffff;
        }
        return 1;
      }
      if (local_60 <= local_5c) {
        return 1;
      }
      return 0xffffffff;
    }
    if (local_a8 != 2) {
      local_a8 = local_a8 >> 0x10;
      local_a4 = local_a4 >> 0x10;
      goto LAB_143bd3c0a;
    }
  }
LAB_143bd3ee9:
  iVar3 = FUN_143b64b50(uVar2);
  if (1 < iVar3) {
    local_92 = FUN_143bd3310(uVar2);
    local_a0 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
LAB_143bd3f31:
    for (; local_a8 == 0; local_a8 = FUN_143bd5d50(local_98,local_92,local_a8)) {
      if (local_9c == param_5) {
        local_a8 = 2;
        break;
      }
      local_64 = (uint)*(ushort *)(param_4 + (longlong)local_9c * 2);
      local_9c = local_9c + 1;
      if (local_64 < 0x180) {
        local_4c = (uint)param_1[(int)local_64];
      }
      else {
        local_4c = FUN_143bd5ec0(param_1,local_64);
      }
      local_a8 = local_4c;
      if (local_4c < 0xc00) {
        local_a8 = FUN_143bd6100(param_1,local_64,local_4c,param_4,0,&local_9c,&param_5);
      }
    }
    for (; local_a4 == 0; local_a4 = FUN_143bd5d50(local_98,local_92,local_a4)) {
      if (local_a0 == param_7) {
        local_a4 = 2;
        break;
      }
      local_68 = (uint)*(ushort *)(param_6 + (longlong)local_a0 * 2);
      local_a0 = local_a0 + 1;
      if (local_68 < 0x180) {
        local_44 = (uint)param_1[(int)local_68];
      }
      else {
        local_44 = FUN_143bd5ec0(param_1,local_68);
      }
      local_a4 = local_44;
      if (local_44 < 0xc00) {
        local_a4 = FUN_143bd6100(param_1,local_68,local_44,param_6,0,&local_a0,&param_7);
      }
    }
    if (local_a8 == local_a4) {
      if (local_a8 == 2) goto LAB_143bd420d;
      local_a4 = 0;
      local_a8 = 0;
      goto LAB_143bd3f31;
    }
    local_7c = local_a8 & 0xffff;
    local_80 = local_a4 & 0xffff;
    if (local_7c != local_80) {
      cVar1 = FUN_143bd33b0(uVar2);
      if (cVar1 != '\0') {
        if (3 < local_7c) {
          local_7c = local_7c ^ 0x18;
        }
        if (3 < local_80) {
          local_80 = local_80 ^ 0x18;
        }
      }
      if (local_80 <= local_7c) {
        return 1;
      }
      return 0xffffffff;
    }
    if (local_a8 != 2) {
      local_a8 = local_a8 >> 0x10;
      local_a4 = local_a4 >> 0x10;
      goto LAB_143bd3f31;
    }
LAB_143bd420d:
    iVar3 = FUN_143b64b50(uVar2);
    if (2 < iVar3) {
      local_a0 = 0;
      local_9c = 0;
      local_a4 = 0;
      local_a8 = 0;
      do {
        while (local_a8 != 0) {
LAB_143bd4332:
          for (; local_a4 == 0; local_a4 = FUN_143bd5bb0(local_98,local_a4)) {
            if (local_a0 == param_7) {
              local_a4 = 2;
              break;
            }
            local_78 = (uint)*(ushort *)(param_6 + (longlong)local_a0 * 2);
            local_a0 = local_a0 + 1;
            if (local_78 < 0x180) {
              local_2c = (uint)param_1[(int)local_78];
            }
            else {
              local_2c = FUN_143bd5ec0(param_1,local_78);
            }
            local_a4 = local_2c;
            if (local_2c < 0xc00) {
              local_a4 = FUN_143bd6100(param_1,local_78,local_2c,param_6,0,&local_a0,&param_7);
            }
          }
          if (local_a8 == local_a4) {
            if (local_a8 == 2) {
              return 0;
            }
            local_a4 = 0;
            local_a8 = 0;
          }
          else {
            local_1c = local_a8 & 0xffff;
            local_24 = local_a4 & 0xffff;
            if (local_1c != local_24) {
              if (local_24 <= local_1c) {
                return 1;
              }
              return 0xffffffff;
            }
            if (local_a8 == 2) {
              return 0;
            }
            local_a8 = local_a8 >> 0x10;
            local_a4 = local_a4 >> 0x10;
          }
        }
        if (local_9c == param_5) {
          local_a8 = 2;
          goto LAB_143bd4332;
        }
        local_74 = (uint)*(ushort *)(param_4 + (longlong)local_9c * 2);
        local_9c = local_9c + 1;
        if (local_74 < 0x180) {
          local_34 = (uint)param_1[(int)local_74];
        }
        else {
          local_34 = FUN_143bd5ec0(param_1,local_74);
        }
        local_a8 = local_34;
        if (local_34 < 0xc00) {
          local_a8 = FUN_143bd6100(param_1,local_74,local_34,param_4,0,&local_9c,&param_5);
        }
        local_a8 = FUN_143bd5bb0(local_98,local_a8);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 143bd44e0 FUN_143bd44e0 body=4764 status=ok
// SIG undefined FUN_143bd44e0(void)

undefined4
FUN_143bd44e0(ushort *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
             longlong param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  byte local_98;
  byte local_97;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  param_1 = param_1 + (int)(*param_1 & 0xff);
  local_94 = param_3 >> 0x10;
  uVar2 = param_3 & 0xffff;
  local_9c = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_a4 = 0;
LAB_143bd456c:
  while (local_a8 == 0) {
    if (local_9c == param_5) {
      local_a8 = 2;
      break;
    }
    local_8c = (uint)*(byte *)(param_4 + local_9c);
    iVar3 = local_9c + 1;
    if (local_8c < 0x80) {
      local_a8 = (uint)*(ushort *)(param_2 + (longlong)(int)local_8c * 2);
      local_9c = iVar3;
      if (local_a8 != 0) break;
      if (((local_8c < 0x3a) && (0x2f < local_8c)) && ((param_3 & 2) != 0)) {
        return 0xfffffffe;
      }
      local_a8 = (uint)param_1[(int)local_8c];
    }
    else if ((((local_8c < 0xc6) && (0xc1 < local_8c)) && (iVar3 != param_5)) &&
            ((local_97 = *(byte *)(param_4 + iVar3), 0x7f < local_97 && (local_97 < 0xc0)))) {
      local_9c = local_9c + 2;
      local_8c = (local_8c - 0xc2) * 0x40 + (uint)local_97;
      local_a8 = (uint)*(ushort *)(param_2 + (longlong)(int)local_8c * 2);
      if (local_a8 != 0) break;
      local_a8 = (uint)param_1[(int)local_8c];
    }
    else {
      local_9c = iVar3;
      local_a8 = FUN_143bd5f30(param_1,local_8c,param_4,&local_9c,param_5);
    }
    if (0xfff < local_a8) {
      local_a8 = local_a8 & 0xfc00;
      break;
    }
    if (local_94 < local_a8) {
      local_a8 = local_a8 & 0xfff8;
      break;
    }
    iVar3 = FUN_143bd6100(param_1,local_8c,local_a8,0,param_4,&local_9c,&param_5);
    if (iVar3 == 1) {
      return 0xfffffffe;
    }
    local_a8 = FUN_143bd5b50(local_94,iVar3);
  }
  while (local_a4 == 0) {
    if (local_a0 == param_7) {
      local_a4 = 2;
      break;
    }
    local_90 = (uint)*(byte *)(param_6 + local_a0);
    iVar3 = local_a0 + 1;
    if (local_90 < 0x80) {
      local_a4 = (uint)*(ushort *)(param_2 + (longlong)(int)local_90 * 2);
      local_a0 = iVar3;
      if (local_a4 != 0) break;
      if (((local_90 < 0x3a) && (0x2f < local_90)) && ((param_3 & 2) != 0)) {
        return 0xfffffffe;
      }
      local_a4 = (uint)param_1[(int)local_90];
    }
    else if ((((local_90 < 0xc6) && (0xc1 < local_90)) && (iVar3 != param_7)) &&
            ((local_98 = *(byte *)(param_6 + iVar3), 0x7f < local_98 && (local_98 < 0xc0)))) {
      local_a0 = local_a0 + 2;
      local_90 = (local_90 - 0xc2) * 0x40 + (uint)local_98;
      local_a4 = (uint)*(ushort *)(param_2 + (longlong)(int)local_90 * 2);
      if (local_a4 != 0) break;
      local_a4 = (uint)param_1[(int)local_90];
    }
    else {
      local_a0 = iVar3;
      local_a4 = FUN_143bd5f30(param_1,local_90,param_6,&local_a0,param_7);
    }
    if (0xfff < local_a4) {
      local_a4 = local_a4 & 0xfc00;
      break;
    }
    if (local_94 < local_a4) {
      local_a4 = local_a4 & 0xfff8;
      break;
    }
    iVar3 = FUN_143bd6100(param_1,local_90,local_a4,0,param_6,&local_a0,&param_7);
    if (iVar3 == 1) {
      return 0xfffffffe;
    }
    local_a4 = FUN_143bd5b50(local_94,iVar3);
  }
  if (local_a8 == local_a4) {
    if (local_a8 != 2) {
      local_a4 = 0;
      local_a8 = 0;
      goto LAB_143bd456c;
    }
  }
  else {
    local_4c = local_a8 & 0xffff;
    local_3c = local_a4 & 0xffff;
    if (local_4c != local_3c) {
      if (local_3c <= local_4c) {
        return 1;
      }
      return 0xffffffff;
    }
    if (local_a8 != 2) {
      local_a8 = local_a8 >> 0x10;
      local_a4 = local_a4 >> 0x10;
      goto LAB_143bd456c;
    }
  }
  iVar3 = FUN_143b64b50(uVar2);
  if (iVar3 < 1) goto LAB_143bd4e21;
  local_a0 = 0;
  local_9c = 0;
  local_a4 = 0;
  local_a8 = 0;
LAB_143bd4aae:
  if (local_a8 == 0) {
    if (local_9c == param_5) {
      local_a8 = 2;
      goto LAB_143bd4c01;
    }
    local_84 = (uint)*(byte *)(param_4 + local_9c);
    iVar3 = local_9c + 1;
    if (local_84 < 0x80) {
      local_a8 = (uint)param_1[(int)local_84];
      local_9c = iVar3;
    }
    else if (local_84 < 0xc6) {
      local_a8 = (uint)param_1[(int)((local_84 - 0xc2) * 0x40 + (uint)*(byte *)(param_4 + iVar3))];
      local_9c = local_9c + 2;
    }
    else {
      local_9c = iVar3;
      local_a8 = FUN_143bd6030(param_1,local_84,param_4,&local_9c);
    }
    if (0xfff < local_a8) {
      local_a8 = FUN_143bd5d10(local_a8);
      goto LAB_143bd4c01;
    }
    if (local_94 < local_a8) {
      local_a8 = 0xc0;
      goto LAB_143bd4c01;
    }
    uVar4 = FUN_143bd6100(param_1,local_84,local_a8,0,param_4,&local_9c,&param_5);
    local_a8 = FUN_143bd5c60(local_94,uVar4);
    goto LAB_143bd4aae;
  }
LAB_143bd4c01:
  while (local_a4 == 0) {
    if (local_a0 == param_7) {
      local_a4 = 2;
      break;
    }
    local_80 = (uint)*(byte *)(param_6 + local_a0);
    iVar3 = local_a0 + 1;
    if (local_80 < 0x80) {
      local_a4 = (uint)param_1[(int)local_80];
      local_a0 = iVar3;
    }
    else if (local_80 < 0xc6) {
      local_a4 = (uint)param_1[(int)((local_80 - 0xc2) * 0x40 + (uint)*(byte *)(param_6 + iVar3))];
      local_a0 = local_a0 + 2;
    }
    else {
      local_a0 = iVar3;
      local_a4 = FUN_143bd6030(param_1,local_80,param_6);
    }
    if (0xfff < local_a4) {
      local_a4 = FUN_143bd5d10(local_a4);
      break;
    }
    if (local_94 < local_a4) {
      local_a4 = 0xc0;
      break;
    }
    uVar4 = FUN_143bd6100(param_1,local_80,local_a4,0,param_6,&local_a0,&param_7);
    local_a4 = FUN_143bd5c60(local_94,uVar4);
  }
  if (local_a8 == local_a4) {
    if (local_a8 == 2) goto LAB_143bd4e21;
    local_a4 = 0;
    local_a8 = 0;
    goto LAB_143bd4aae;
  }
  local_1c = local_a8 & 0xffff;
  local_44 = local_a4 & 0xffff;
  if (local_1c != local_44) {
    if ((param_3 & 0x800) != 0) {
      return 0xfffffffe;
    }
    if (local_44 <= local_1c) {
      return 1;
    }
    return 0xffffffff;
  }
  if (local_a8 != 2) {
    local_a8 = local_a8 >> 0x10;
    local_a4 = local_a4 >> 0x10;
    goto LAB_143bd4aae;
  }
LAB_143bd4e21:
  if ((param_3 & 0x400) != 0) {
    iVar3 = FUN_143b64b50(uVar2);
    local_87 = iVar3 == 0;
    local_a0 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_86 = local_87;
LAB_143bd4e7a:
    for (; local_a8 == 0; local_a8 = FUN_143bd5790(local_94,local_87,local_a8)) {
      if (local_9c == param_5) {
        local_a8 = 2;
        break;
      }
      local_70 = (uint)*(byte *)(param_4 + local_9c);
      local_9c = local_9c + 1;
      if (local_70 < 0x80) {
        local_24 = (uint)param_1[(int)local_70];
      }
      else {
        local_24 = FUN_143bd6030(param_1,local_70,param_4,&local_9c);
      }
      local_a8 = local_24;
      if (local_24 < 0xc00) {
        local_a8 = FUN_143bd6100(param_1,local_70,local_24,0,param_4,&local_9c,&param_5);
      }
    }
    for (; local_a4 == 0; local_a4 = FUN_143bd5790(local_94,local_87,local_a4)) {
      if (local_a0 == param_7) {
        local_a4 = 2;
        break;
      }
      local_6c = (uint)*(byte *)(param_6 + local_a0);
      local_a0 = local_a0 + 1;
      if (local_6c < 0x80) {
        local_34 = (uint)param_1[(int)local_6c];
      }
      else {
        local_34 = FUN_143bd6030(param_1,local_6c,param_6);
      }
      local_a4 = local_34;
      if (local_34 < 0xc00) {
        local_a4 = FUN_143bd6100(param_1,local_6c,local_34,0,param_6,&local_a0,&param_7);
      }
    }
    if (local_a8 == local_a4) {
      if (local_a8 == 2) goto LAB_143bd516b;
      local_a4 = 0;
      local_a8 = 0;
      goto LAB_143bd4e7a;
    }
    local_58 = local_a8 & 0xffff;
    local_5c = local_a4 & 0xffff;
    if (local_58 != local_5c) {
      if ((param_3 & 0x100) != 0) {
        if (local_5c <= local_58) {
          return 0xffffffff;
        }
        return 1;
      }
      if (local_5c <= local_58) {
        return 1;
      }
      return 0xffffffff;
    }
    if (local_a8 != 2) {
      local_a8 = local_a8 >> 0x10;
      local_a4 = local_a4 >> 0x10;
      goto LAB_143bd4e7a;
    }
  }
LAB_143bd516b:
  iVar3 = FUN_143b64b50(uVar2);
  if (1 < iVar3) {
    local_88 = FUN_143bd3310(uVar2);
    local_a0 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
LAB_143bd51b3:
    for (; local_a8 == 0; local_a8 = FUN_143bd5d50(local_94,local_88,local_a8)) {
      if (local_9c == param_5) {
        local_a8 = 2;
        break;
      }
      local_60 = (uint)*(byte *)(param_4 + local_9c);
      local_9c = local_9c + 1;
      if (local_60 < 0x80) {
        local_48 = (uint)param_1[(int)local_60];
      }
      else {
        local_48 = FUN_143bd6030(param_1,local_60,param_4,&local_9c);
      }
      local_a8 = local_48;
      if (local_48 < 0xc00) {
        local_a8 = FUN_143bd6100(param_1,local_60,local_48,0,param_4,&local_9c,&param_5);
      }
    }
    for (; local_a4 == 0; local_a4 = FUN_143bd5d50(local_94,local_88,local_a4)) {
      if (local_a0 == param_7) {
        local_a4 = 2;
        break;
      }
      local_64 = (uint)*(byte *)(param_6 + local_a0);
      local_a0 = local_a0 + 1;
      if (local_64 < 0x80) {
        local_40 = (uint)param_1[(int)local_64];
      }
      else {
        local_40 = FUN_143bd6030(param_1,local_64,param_6);
      }
      local_a4 = local_40;
      if (local_40 < 0xc00) {
        local_a4 = FUN_143bd6100(param_1,local_64,local_40,0,param_6,&local_a0,&param_7);
      }
    }
    if (local_a8 == local_a4) {
      if (local_a8 == 2) goto LAB_143bd54a1;
      local_a4 = 0;
      local_a8 = 0;
      goto LAB_143bd51b3;
    }
    local_78 = local_a8 & 0xffff;
    local_7c = local_a4 & 0xffff;
    if (local_78 != local_7c) {
      cVar1 = FUN_143bd33b0(uVar2);
      if (cVar1 != '\0') {
        if (3 < local_78) {
          local_78 = local_78 ^ 0x18;
        }
        if (3 < local_7c) {
          local_7c = local_7c ^ 0x18;
        }
      }
      if (local_7c <= local_78) {
        return 1;
      }
      return 0xffffffff;
    }
    if (local_a8 != 2) {
      local_a8 = local_a8 >> 0x10;
      local_a4 = local_a4 >> 0x10;
      goto LAB_143bd51b3;
    }
LAB_143bd54a1:
    iVar3 = FUN_143b64b50(uVar2);
    if (2 < iVar3) {
      local_a0 = 0;
      local_9c = 0;
      local_a4 = 0;
      local_a8 = 0;
      do {
        while (local_a8 != 0) {
LAB_143bd55cf:
          for (; local_a4 == 0; local_a4 = FUN_143bd5bb0(local_94,local_a4)) {
            if (local_a0 == param_7) {
              local_a4 = 2;
              break;
            }
            local_68 = (uint)*(byte *)(param_6 + local_a0);
            local_a0 = local_a0 + 1;
            if (local_68 < 0x80) {
              local_28 = (uint)param_1[(int)local_68];
            }
            else {
              local_28 = FUN_143bd6030(param_1,local_68,param_6);
            }
            local_a4 = local_28;
            if (local_28 < 0xc00) {
              local_a4 = FUN_143bd6100(param_1,local_68,local_28,0,param_6,&local_a0,&param_7);
            }
          }
          if (local_a8 == local_a4) {
            if (local_a8 == 2) {
              return 0;
            }
            local_a4 = 0;
            local_a8 = 0;
          }
          else {
            local_18 = local_a8 & 0xffff;
            local_20 = local_a4 & 0xffff;
            if (local_18 != local_20) {
              if (local_20 <= local_18) {
                return 1;
              }
              return 0xffffffff;
            }
            if (local_a8 == 2) {
              return 0;
            }
            local_a8 = local_a8 >> 0x10;
            local_a4 = local_a4 >> 0x10;
          }
        }
        if (local_9c == param_5) {
          local_a8 = 2;
          goto LAB_143bd55cf;
        }
        local_74 = (uint)*(byte *)(param_4 + local_9c);
        local_9c = local_9c + 1;
        if (local_74 < 0x80) {
          local_30 = (uint)param_1[(int)local_74];
        }
        else {
          local_30 = FUN_143bd6030(param_1,local_74,param_4,&local_9c);
        }
        local_a8 = local_30;
        if (local_30 < 0xc00) {
          local_a8 = FUN_143bd6100(param_1,local_74,local_30,0,param_4,&local_9c,&param_5);
        }
        local_a8 = FUN_143bd5bb0(local_94,local_a8);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 143bd5790 FUN_143bd5790 body=242 status=ok
// SIG undefined FUN_143bd5790(void)

uint FUN_143bd5790(uint param_1,char param_2,uint param_3)

{
  uint local_res18;
  
  if (param_3 < 0x10000) {
    if (param_3 < 0x1000) {
      if (param_1 < param_3) {
        local_res18 = 8;
      }
      else {
        local_res18 = param_3;
        if (0xbff < param_3) {
          local_res18 = 0;
        }
      }
    }
    else {
      local_res18 = param_3 & 0x18;
      if ((param_2 == '\0') && (0x17f < (param_3 & 0x3e0))) {
        local_res18 = local_res18 | 0x80000;
      }
    }
  }
  else if ((param_3 & 0xffff) < 0x1000) {
    if (param_1 < (param_3 & 0xffff)) {
      local_res18 = 0x80008;
    }
    else {
      local_res18 = 0;
    }
  }
  else if ((param_2 == '\0') || ((param_3 & 0xfc000000) != 0)) {
    local_res18 = param_3 & 0x180018;
  }
  else {
    local_res18 = param_3 & 0x18;
  }
  return local_res18;
}



// FUNCTION 143bd5890 FUN_143bd5890 body=690 status=ok
// SIG undefined FUN_143bd5890(void)

uint FUN_143bd5890(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ushort local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_40;
  uint local_3c;
  
  puVar3 = *(ushort **)(param_1 + 0x58);
  if (puVar3 == (ushort *)0x0) {
    uVar6 = 0xffffffff;
  }
  else if (param_4 == 0x180) {
    if ((*(uint *)(param_2 + 0x10) & 0xc) == 0) {
      local_3c = 0xbff;
    }
    else {
      uVar6 = *(uint *)(param_2 + 0x14) >> 0x18;
      local_54 = (*puVar3 & 0xff) - 1;
      if ((local_54 < 1) || ((puVar3[local_54] & 0x7f) < uVar6)) {
        return 0xffffffff;
      }
      while ((1 < local_54 && (uVar6 <= (puVar3[local_54 + -1] & 0x7f)))) {
        local_54 = local_54 + -1;
      }
      local_3c = (int)(puVar3[local_54] & 0xff80) >> 4;
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
      bVar5 = 0;
      for (local_50 = 0; local_50 < *(int *)(param_1 + 0x70);
          local_50 = local_50 + 2 + (uint)*(ushort *)(lVar4 + (longlong)(local_50 + 1) * 2)) {
        bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) +
                         (longlong)(int)(*(ushort *)(lVar4 + (longlong)local_50 * 2) & 0xff));
        if (bVar1 < bVar5) {
          return 0xffffffff;
        }
        if (*(short *)(lVar4 + (longlong)(local_50 + 2) * 2) == 0x19) break;
        bVar5 = bVar1;
      }
    }
    uVar2 = *puVar3;
    for (local_4c = 0; local_4c < 0x180; local_4c = local_4c + 1) {
      local_58 = puVar3[(longlong)(int)(uVar2 & 0xff) + (longlong)local_4c];
      if (local_58 < 0x1000) {
        if (local_3c < local_58) {
          local_58 = local_58 & 0xfff8;
        }
        else {
          local_58 = 0;
        }
      }
      else {
        local_58 = local_58 & 0xfc00;
      }
      *(ushort *)(param_3 + (longlong)local_4c * 2) = local_58;
    }
    if ((*(uint *)(param_2 + 0x10) & 2) != 0) {
      for (local_40 = 0x30; local_40 < 0x3a; local_40 = local_40 + 1) {
        *(undefined2 *)(param_3 + (longlong)local_40 * 2) = 0;
      }
    }
    uVar6 = local_3c << 0x10 | *(uint *)(param_2 + 0x10);
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 143bd5b50 FUN_143bd5b50 body=86 status=ok
// SIG undefined FUN_143bd5b50(void)

uint FUN_143bd5b50(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 < 0x1000) {
    if (param_1 < uVar1) {
      param_2 = param_2 & 0xfff8fff8;
    }
    else if (0xbff < uVar1) {
      param_2 = 0;
    }
  }
  else {
    param_2 = param_2 & 0xfc00fc00;
  }
  return param_2;
}



// FUNCTION 143bd5bb0 FUN_143bd5bb0 body=166 status=ok
// SIG undefined FUN_143bd5bb0(void)

uint FUN_143bd5bb0(uint param_1,uint param_2)

{
  undefined4 local_res10;
  
  if (param_2 < 0x10000) {
    if (param_2 < 0x1000) {
      if (param_1 < param_2) {
        local_res10 = 0xfc00;
      }
      else {
        local_res10 = param_2;
        if (0xbff < param_2) {
          local_res10 = param_2 & 0xfff8;
        }
      }
    }
    else if ((param_2 & 0x3e0) < 0x180) {
      local_res10 = 0xfc00;
    }
    else {
      local_res10 = 0xfc00fc00;
    }
  }
  else if (param_1 < (param_2 & 0xffff)) {
    local_res10 = 0xfc00fc00;
  }
  else {
    local_res10 = param_2 & 0xfff8fff8;
  }
  return local_res10;
}



// FUNCTION 143bd5c60 FUN_143bd5c60 body=167 status=ok
// SIG undefined FUN_143bd5c60(void)

uint FUN_143bd5c60(uint param_1,uint param_2)

{
  undefined4 local_res10;
  
  if (param_2 < 0x10000) {
    if (param_2 < 0x1000) {
      if (param_1 < param_2) {
        local_res10 = 0xc0;
      }
      else {
        local_res10 = param_2;
        if (0xbff < param_2) {
          local_res10 = 0;
        }
      }
    }
    else {
      local_res10 = FUN_143bd5d10(param_2);
    }
  }
  else if ((param_2 & 0xffff) < 0x1000) {
    if (param_1 < (param_2 & 0xffff)) {
      local_res10 = 0xc000c0;
    }
    else {
      local_res10 = 0;
    }
  }
  else {
    local_res10 = (param_2 & 0x3e003e0) + 0x200020;
  }
  return local_res10;
}



// FUNCTION 143bd5d10 FUN_143bd5d10 body=52 status=ok
// SIG undefined FUN_143bd5d10(void)

uint FUN_143bd5d10(uint param_1)

{
  param_1 = param_1 & 0x3e0;
  if (param_1 < 0x180) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = (param_1 + 0x20) * 0x10000 | 0xc0;
  }
  return param_1;
}



// FUNCTION 143bd5d50 FUN_143bd5d50 body=357 status=ok
// SIG undefined FUN_143bd5d50(void)

uint FUN_143bd5d50(uint param_1,char param_2,uint param_3)

{
  undefined4 local_res18;
  
  if (param_3 < 0x10000) {
    if (param_3 < 0x1000) {
      if (param_1 < param_3) {
        local_res18 = (param_3 & 7) + 0x20;
        if (param_2 != '\0') {
          local_res18 = local_res18 | 8;
        }
      }
      else {
        local_res18 = param_3;
        if (0xbff < param_3) {
          local_res18 = 0;
        }
      }
    }
    else if (param_2 == '\0') {
      local_res18 = (param_3 & 7) + 0x20;
      if (0x17f < (param_3 & 0x3e0)) {
        local_res18 = local_res18 | 0x200000;
      }
    }
    else {
      local_res18 = (param_3 & 0x1f) + 0x20;
      if (0x17f < (param_3 & 0x3e0)) {
        local_res18 = local_res18 | 0x280000;
      }
    }
  }
  else if ((param_3 & 0xffff) < 0x1000) {
    if (param_1 < (param_3 & 0xffff)) {
      local_res18 = (param_3 & 0x70007) + 0x200020;
      if (param_2 != '\0') {
        local_res18 = local_res18 | 0x80008;
      }
    }
    else {
      local_res18 = 0;
    }
  }
  else {
    if (param_2 == '\0') {
      local_res18 = param_3 & 0x70007;
    }
    else {
      local_res18 = param_3 & 0x1f001f;
    }
    local_res18 = local_res18 + 0x200020;
  }
  return local_res18;
}



// FUNCTION 143bd5ec0 FUN_143bd5ec0 body=91 status=ok
// SIG undefined FUN_143bd5ec0(void)

undefined2 FUN_143bd5ec0(longlong param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_2 < 0x2000) || (0x203f < param_2)) {
    if (param_2 == 0xfffe) {
      uVar1 = 3;
    }
    else if (param_2 == 0xffff) {
      uVar1 = 0xfca8;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + (longlong)(param_2 + -0x1e80) * 2);
  }
  return uVar1;
}



// FUNCTION 143bd5f30 FUN_143bd5f30 body=246 status=ok
// SIG undefined FUN_143bd5f30(void)

undefined2 FUN_143bd5f30(longlong param_1,int param_2,longlong param_3,int *param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  
  if ((*param_4 + 1 < param_5) || (param_5 < 0)) {
    cVar1 = *(char *)(param_3 + *param_4);
    bVar2 = *(byte *)(param_3 + (*param_4 + 1));
    *param_4 = *param_4 + 2;
    if ((param_2 == 0xe2) && (((cVar1 == -0x80 && (0x7f < bVar2)) && (bVar2 < 0xc0)))) {
      return *(undefined2 *)(param_1 + (longlong)(int)(bVar2 + 0x100) * 2);
    }
    if ((param_2 == 0xef) && (cVar1 == -0x41)) {
      if (bVar2 == 0xbe) {
        return 3;
      }
      if (bVar2 == 0xbf) {
        return 0xfca8;
      }
    }
  }
  return 1;
}



// FUNCTION 143bd6030 FUN_143bd6030 body=201 status=ok
// SIG undefined FUN_143bd6030(void)

undefined2 FUN_143bd6030(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  
  if (param_2 < 0xc6) {
    uVar2 = *(undefined2 *)
             (param_1 +
             (longlong)(int)((param_2 + -0xc2) * 0x40 + (uint)*(byte *)(param_3 + *param_4)) * 2);
    *param_4 = *param_4 + 1;
  }
  else {
    bVar1 = *(byte *)(param_3 + (*param_4 + 1));
    *param_4 = *param_4 + 2;
    if (param_2 == 0xe2) {
      uVar2 = *(undefined2 *)(param_1 + (longlong)(int)(bVar1 + 0x100) * 2);
    }
    else if (bVar1 == 0xbe) {
      uVar2 = 3;
    }
    else {
      uVar2 = 0xfca8;
    }
  }
  return uVar2;
}



// FUNCTION 143bd6100 FUN_143bd6100 body=975 status=ok
// SIG undefined FUN_143bd6100(void)

uint FUN_143bd6100(longlong param_1,int param_2,uint param_3,longlong param_4,longlong param_5,
                  int *param_6,int *param_7)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  if ((param_3 < 0xc00) && (0x3ff < param_3)) {
    if (param_3 < 0x800) {
      if ((param_2 == 0) && (*param_7 < 0)) {
        *param_7 = *param_6 + -1;
        param_3 = 2;
      }
      else {
        local_2c = (param_3 & 0x3ff) + 0x1c0;
        if (*param_6 != *param_7) {
          iVar4 = *param_6;
          if (param_4 == 0) {
            local_34 = (uint)*(byte *)(param_5 + iVar4);
            local_30 = iVar4 + 1;
            if (0x7f < local_34) {
              if ((((local_34 < 0xc6) && (0xc1 < local_34)) && (local_30 != *param_7)) &&
                 ((bVar1 = *(byte *)(param_5 + local_30), 0x7f < bVar1 && (bVar1 < 0xc0)))) {
                local_34 = (local_34 - 0xc2) * 0x40 + (uint)bVar1;
                local_30 = iVar4 + 2;
              }
              else {
                iVar3 = iVar4 + 2;
                if ((*param_7 <= iVar3) && (-1 < *param_7)) {
                  return 1;
                }
                if (((local_34 == 0xe2) && (*(char *)(param_5 + local_30) == -0x80)) &&
                   ((bVar1 = *(byte *)(param_5 + iVar3), 0x7f < bVar1 && (bVar1 < 0xc0)))) {
                  local_34 = bVar1 + 0x100;
                }
                else {
                  if (((local_34 != 0xef) || (*(char *)(param_5 + local_30) != -0x41)) ||
                     ((*(char *)(param_5 + iVar3) != -0x42 && (*(char *)(param_5 + iVar3) != -0x41))
                     )) {
                    return 1;
                  }
                  local_34 = 0xffffffff;
                }
                local_30 = iVar4 + 3;
              }
            }
          }
          else {
            local_34 = (uint)*(ushort *)(param_4 + (longlong)iVar4 * 2);
            local_30 = iVar4 + 1;
            if (0x17f < local_34) {
              if ((local_34 < 0x2000) || (0x203f < local_34)) {
                if ((local_34 != 0xfffe) && (local_34 != 0xffff)) {
                  return 1;
                }
                local_34 = 0xffffffff;
              }
              else {
                local_34 = local_34 - 0x1e80;
              }
            }
          }
          if ((local_34 == 0) && (*param_7 < 0)) {
            *param_7 = *param_6;
            local_34 = 0xffffffff;
          }
          local_24 = (uint)*(ushort *)(param_1 + (longlong)local_2c * 2);
          local_28 = local_2c;
          do {
            local_28 = local_28 + ((int)local_24 >> 9);
            local_24 = (uint)*(ushort *)(param_1 + (longlong)local_28 * 2);
          } while ((int)(local_24 & 0x1ff) < (int)local_34);
          if ((local_24 & 0x1ff) == local_34) {
            *param_6 = local_30;
            local_2c = local_28;
          }
        }
        iVar4 = (int)(uint)*(ushort *)(param_1 + (longlong)local_2c * 2) >> 9;
        if (iVar4 == 1) {
          param_3 = 1;
        }
        else {
          uVar2 = *(ushort *)(param_1 + (longlong)(local_2c + 1) * 2);
          param_3 = (uint)uVar2;
          if (iVar4 != 2) {
            param_3 = CONCAT22(*(undefined2 *)(param_1 + (longlong)(local_2c + 2) * 2),uVar2);
          }
        }
      }
    }
    else {
      param_3 = CONCAT22(*(undefined2 *)(param_1 + (longlong)(int)((param_3 & 0x3ff) + 0x1c1) * 2),
                         *(undefined2 *)(param_1 + (longlong)(int)((param_3 & 0x3ff) + 0x1c0) * 2));
    }
  }
  return param_3;
}



// FUNCTION 143bd64e0 FUN_143bd64e0 body=102 status=ok
// SIG undefined FUN_143bd64e0(void)

longlong FUN_143bd64e0(longlong param_1)

{
  FUN_143a8ac30(param_1);
  FUN_143a8ac30(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_143acbf40(param_1 + 0x58);
  return param_1;
}



// FUNCTION 143bd6550 FUN_143bd6550 body=31 status=ok
// SIG undefined FUN_143bd6550(void)

void FUN_143bd6550(longlong param_1)

{
  FUN_143a8ac70(param_1 + 8);
  return;
}



// FUNCTION 143bd6570 FUN_143bd6570 body=122 status=ok
// SIG undefined FUN_143bd6570(void)

void FUN_143bd6570(undefined8 *param_1)

{
  *param_1 = icu_53::CollationIterator::vftable;
  if (param_1[0x2f] != 0) {
    FUN_143bd6730(param_1[0x2f],1);
  }
  FUN_143bd6550(param_1 + 3);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bd65f0 FUN_143bd65f0 body=44 status=ok
// SIG undefined FUN_143bd65f0(void)

void FUN_143bd65f0(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x28);
  FUN_143a8dc60(param_1);
  return;
}



// FUNCTION 143bd6620 FUN_143bd6620 body=261 status=ok
// SIG undefined FUN_143bd6620(void)

ulonglong FUN_143bd6620(ulonglong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_28;
  
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
  cVar1 = FUN_143ab1e10(uVar3,uVar2);
  uVar4 = 0;
  if ((((cVar1 == '\0') || (uVar4 = param_1, *(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)))
      || (*(int *)(param_1 + 0x170) != *(int *)(param_2 + 0x170))) ||
     ((*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180) ||
      (uVar4 = (ulonglong)(uint)(int)*(char *)(param_1 + 0x184),
      (int)*(char *)(param_1 + 0x184) != (int)*(char *)(param_2 + 0x184))))) {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    for (local_28 = 0; local_28 < *(int *)(param_1 + 0x18); local_28 = local_28 + 1) {
      uVar4 = FUN_143b64180(param_1 + 0x18,local_28);
      uVar5 = FUN_143b64180(param_2 + 0x18,local_28);
      if (uVar4 != uVar5) {
        return uVar5 & 0xffffffffffffff00;
      }
    }
    uVar4 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x18) >> 8),1);
  }
  return uVar4;
}



// FUNCTION 143bd6730 FUN_143bd6730 body=54 status=ok
// SIG undefined FUN_143bd6730(void)

undefined8 FUN_143bd6730(undefined8 param_1,uint param_2)

{
  FUN_143bd65f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bd6770 FUN_143bd6770 body=120 status=ok
// SIG undefined FUN_143bd6770(void)

void FUN_143bd6770(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if ((0x27 < *param_1) && (cVar2 = FUN_143bd7ea0(param_1,1,param_3), cVar2 == '\0')) {
    return;
  }
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  puVar3 = (undefined8 *)FUN_143b618b0(param_1 + 2,(longlong)iVar1);
  *puVar3 = param_2;
  return;
}



// FUNCTION 143bd67f0 FUN_143bd67f0 body=2836 status=ok
// SIG undefined FUN_143bd67f0(void)

void FUN_143bd67f0(longlong *param_1,longlong param_2,uint param_3,uint param_4,char param_5,
                  undefined4 *param_6)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  undefined4 *in_stack_ffffffffffffff70;
  int local_74;
  int local_68;
  int local_64;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 *local_38;
  
  local_res10 = param_2;
  local_res18 = param_3;
  uVar8 = param_4;
  do {
    local_res20 = uVar8;
    cVar2 = FUN_143b65e30(local_res20);
    if (cVar2 == '\0') {
      uVar9 = FUN_143bd7e20(local_res20);
      FUN_143bd6770(param_1 + 3,uVar9,param_6);
      return;
    }
    uVar4 = FUN_143b67480(local_res20);
    uVar8 = local_res20;
    switch(uVar4) {
    case 0:
    case 3:
      cVar2 = FUN_143a8b110(*param_6);
      if (cVar2 != '\0') {
        *param_6 = 5;
      }
      return;
    case 1:
      uVar9 = FUN_143bd7df0(local_res20);
      FUN_143bd6770(param_1 + 3,uVar9,param_6);
      return;
    case 2:
      uVar9 = FUN_143bd7e10(local_res20);
      FUN_143bd6770(param_1 + 3,uVar9,param_6);
      return;
    case 4:
      cVar2 = FUN_143bd7ea0(param_1 + 3,2,param_6);
      if (cVar2 == '\0') {
        return;
      }
      uVar9 = FUN_143bd83c0(local_res20);
      FUN_143b66780(param_1 + 3,(int)param_1[3],uVar9);
      uVar9 = FUN_143bd83f0(local_res20);
      FUN_143b66780(param_1 + 3,(int)param_1[3] + 1,uVar9);
      *(int *)(param_1 + 3) = (int)param_1[3] + 2;
      return;
    case 5:
      iVar5 = FUN_143b67bd0(local_res20);
      local_38 = (undefined4 *)(*(longlong *)(local_res10 + 8) + (longlong)iVar5 * 4);
      local_68 = FUN_143bd8410(local_res20);
      cVar2 = FUN_143bd7ea0(param_1 + 3,local_68,param_6);
      if (cVar2 == '\0') {
        return;
      }
      do {
        uVar9 = FUN_143bd7d60(*local_38);
        FUN_143bd7bb0(param_1 + 3,uVar9);
        local_38 = local_38 + 1;
        local_68 = local_68 + -1;
      } while (0 < local_68);
      return;
    case 6:
      iVar5 = FUN_143b67bd0(local_res20);
      local_48 = (undefined8 *)(*(longlong *)(local_res10 + 0x10) + (longlong)iVar5 * 8);
      local_64 = FUN_143bd8410(local_res20);
      cVar2 = FUN_143bd7ea0(param_1 + 3,local_64,param_6);
      if (cVar2 == '\0') {
        return;
      }
      do {
        FUN_143bd7bb0(param_1 + 3,*local_48);
        local_48 = local_48 + 1;
        local_64 = local_64 + -1;
      } while (0 < local_64);
      return;
    case 7:
      uVar8 = (**(code **)(*param_1 + 0x70))(param_1,local_res20,param_6);
      cVar2 = FUN_143a8b0e0(*param_6);
      if (cVar2 != '\0') {
        return;
      }
      if (uVar8 == 0xc0) {
        local_res10 = *(longlong *)(param_1[2] + 0x20);
        uVar8 = FUN_143b64340(local_res10,local_res18);
      }
      break;
    case 8:
      if (param_5 != '\0') {
        (**(code **)(*param_1 + 0x60))(param_1,1,param_6);
      }
      uVar8 = FUN_143bd8020(param_1,local_res10,local_res20,param_6);
      if (param_5 != '\0') {
        (**(code **)(*param_1 + 0x58))(param_1,1,param_6);
      }
      break;
    case 9:
      iVar5 = FUN_143b67bd0(local_res20);
      lVar1 = *(longlong *)(local_res10 + 0x18) + (longlong)iVar5 * 2;
      uVar8 = FUN_143bd8fd0(lVar1);
      if (param_5 != '\0') {
        if ((param_1[0x2f] == 0) && ((int)param_1[0x30] < 0)) {
          local_74 = (**(code **)(*param_1 + 0x28))(param_1,param_6);
          uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
          if (local_74 < 0) break;
          if ((local_res20 & 0x200) != 0) {
            cVar2 = FUN_143bd8440(local_74);
            uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
            if (cVar2 == '\0') {
              (**(code **)(*param_1 + 0x60))(param_1,1,param_6);
              break;
            }
          }
        }
        else {
          local_74 = FUN_143bd8ed0(param_1,param_6);
          uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
          if (local_74 < 0) break;
          if ((local_res20 & 0x200) != 0) {
            cVar2 = FUN_143bd8440(local_74);
            uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
            if (cVar2 == '\0') {
              FUN_143bd7cc0(param_1,1,param_6);
              break;
            }
          }
        }
        in_stack_ffffffffffffff70 = (undefined4 *)CONCAT44(uVar4,local_74);
        uVar8 = FUN_143bd8540(param_1,local_res10,local_res20,lVar1 + 4,uVar8,
                              in_stack_ffffffffffffff70,param_6);
        if (uVar8 == 1) {
          return;
        }
        break;
      }
      break;
    case 10:
      if (*(char *)((longlong)param_1 + 0x184) != '\0') {
        FUN_143bd7360(param_1,local_res20,param_5,param_6);
        return;
      }
      iVar5 = FUN_143b67bd0(local_res20);
      uVar8 = *(uint *)(*(longlong *)(local_res10 + 8) + (longlong)iVar5 * 4);
      break;
    case 0xb:
      if ((param_5 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x48))(param_1), cVar2 != '\0')) {
        FUN_143bd6770(param_1 + 3,0x101000100,param_6);
        return;
      }
      uVar8 = **(uint **)(local_res10 + 8);
      break;
    case 0xc:
      lVar1 = *(longlong *)(local_res10 + 0x28);
      iVar5 = (int)(local_res18 - 0xac00) % 0x1c;
      iVar6 = (int)(local_res18 - 0xac00) / 0x1c;
      iVar7 = iVar6 % 0x15;
      iVar6 = iVar6 / 0x15;
      if ((local_res20 & 0x100) != 0) {
        if (iVar5 == 0) {
          local_50 = 2;
        }
        else {
          local_50 = 3;
        }
        cVar2 = FUN_143bd7ea0(param_1 + 3,local_50,param_6);
        if (cVar2 == '\0') {
          return;
        }
        uVar9 = FUN_143bd7d60(*(undefined4 *)(lVar1 + (longlong)iVar6 * 4));
        FUN_143b66780(param_1 + 3,(int)param_1[3],uVar9);
        uVar9 = FUN_143bd7d60(*(undefined4 *)(lVar1 + (longlong)(iVar7 + 0x13) * 4));
        FUN_143b66780(param_1 + 3,(int)param_1[3] + 1,uVar9);
        *(int *)(param_1 + 3) = (int)param_1[3] + 2;
        if (iVar5 == 0) {
          return;
        }
        uVar9 = FUN_143bd7d60(*(undefined4 *)(lVar1 + (longlong)(iVar5 + 0x27) * 4));
        FUN_143bd7bb0(param_1 + 3,uVar9);
        return;
      }
      FUN_143bd67f0(param_1,local_res10,0xffffffff,*(undefined4 *)(lVar1 + (longlong)iVar6 * 4),
                    param_5,param_6);
      in_stack_ffffffffffffff70 = param_6;
      FUN_143bd67f0(param_1,local_res10,0xffffffff,
                    *(undefined4 *)(lVar1 + (longlong)(iVar7 + 0x13) * 4),param_5,param_6);
      if (iVar5 == 0) {
        return;
      }
      local_res18 = 0xffffffff;
      uVar8 = *(uint *)(lVar1 + (longlong)(iVar5 + 0x27) * 4);
      break;
    case 0xd:
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
      if ((uVar3 & 0xfc00) == 0xdc00) {
        local_res18 = local_res18 * 0x400 + -0x35fdc00 + (uint)uVar3;
        if ((local_res20 & 0x300) == 0) {
          local_res20 = 0xffffffff;
          uVar8 = local_res20;
        }
        else if (((local_res20 & 0x300) == 0x100) ||
                (uVar8 = FUN_143bd8140(local_res10,local_res18), uVar8 == 0xc0)) {
          local_res10 = *(longlong *)(local_res10 + 0x20);
          uVar8 = FUN_143bd8140(local_res10,local_res18);
        }
      }
      else {
        local_res20 = 0xffffffff;
        uVar8 = local_res20;
      }
      break;
    case 0xe:
      uVar9 = FUN_143bd81d0(local_res10,local_res18,local_res20);
      FUN_143bd6770(param_1 + 3,uVar9,param_6);
      return;
    case 0xf:
      if (((local_res18 & 0xfffff800) != 0xd800) ||
         (cVar2 = (**(code **)(*param_1 + 0x50))(param_1), cVar2 == '\0')) {
        uVar9 = FUN_143bd9350(local_res18);
        FUN_143bd6770(param_1 + 3,uVar9,param_6);
        return;
      }
      local_res20 = 0xfffd0505;
      uVar8 = local_res20;
    }
  } while( true );
}



// FUNCTION 143bd7360 FUN_143bd7360 body=994 status=ok
// SIG undefined FUN_143bd7360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bd7360(longlong *param_1,int param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_res10;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  int local_80;
  int local_7c;
  int local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_60 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_143aa03f0(local_58);
  local_res10 = param_2;
  if (param_3 == '\0') {
    do {
      local_83 = FUN_143bd7e90(local_res10);
      FUN_143acfeb0(local_58,local_83,param_4);
      local_78 = (**(code **)(*param_1 + 0x30))(param_1,param_4);
      if (local_78 < 0) goto LAB_143bd75ba;
      local_res10 = FUN_143b64340(param_1[2],local_78);
      if (local_res10 == 0xc0) {
        local_res10 = FUN_143b64340(*(undefined8 *)(param_1[2] + 0x20),local_78);
      }
      cVar1 = FUN_143b64d60(local_res10,10);
    } while (cVar1 != '\0');
    (**(code **)(*param_1 + 0x58))(param_1,1,param_4);
LAB_143bd75ba:
    local_70 = (undefined1 *)
               TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
               ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
    iVar2 = FUN_143ac4740(local_58);
    for (local_68 = local_70 + (longlong)iVar2 + -1; local_70 < local_68; local_68 = local_68 + -1)
    {
      local_84 = *local_70;
      *local_70 = *local_68;
      local_70 = local_70 + 1;
      *local_68 = local_84;
    }
  }
  else {
    while( true ) {
      local_82 = FUN_143bd7e90(local_res10);
      FUN_143acfeb0(local_58,local_82,param_4);
      if (((int)param_1[0x30] == 0) ||
         (local_7c = (**(code **)(*param_1 + 0x28))(param_1,param_4), local_7c < 0))
      goto LAB_143bd7633;
      local_res10 = FUN_143b64340(param_1[2],local_7c);
      if (local_res10 == 0xc0) {
        local_res10 = FUN_143b64340(*(undefined8 *)(param_1[2] + 0x20),local_7c);
      }
      cVar1 = FUN_143b64d60(local_res10,10);
      if (cVar1 == '\0') break;
      if (0 < (int)param_1[0x30]) {
        *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
      }
    }
    (**(code **)(*param_1 + 0x60))(param_1,1,param_4);
  }
LAB_143bd7633:
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_88 = 0;
    do {
      while ((iVar2 = FUN_143ac4740(local_58), local_88 < iVar2 + -1 &&
             (cVar1 = FUN_143ac3410(local_58,local_88), cVar1 == '\0'))) {
        local_88 = local_88 + 1;
      }
      local_80 = FUN_143ac4740(local_58);
      local_80 = local_80 - local_88;
      if (0xfe < local_80) {
        local_80 = 0xfe;
      }
      lVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      FUN_143bd7750(param_1,lVar3 + local_88,local_80,param_4);
      local_88 = local_88 + local_80;
      cVar1 = FUN_143a8b110(*param_4);
    } while ((cVar1 != '\0') && (iVar2 = FUN_143ac4740(local_58), local_88 < iVar2));
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  }
  else {
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  }
  return;
}



// FUNCTION 143bd7750 FUN_143bd7750 body=1106 status=ok
// SIG undefined FUN_143bd7750(void)

void FUN_143bd7750(longlong param_1,char *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint local_res18;
  int local_48;
  uint local_44;
  uint local_38;
  int local_34;
  int local_30;
  int local_24;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if ((int)param_3 < 8) {
    local_48 = (int)*param_2;
    for (local_24 = 1; local_24 < (int)param_3; local_24 = local_24 + 1) {
      local_48 = local_48 * 10 + (int)param_2[local_24];
    }
    if (local_48 < 0x4a) {
      uVar2 = FUN_143bd8420(uVar1 | (local_48 + 2) * 0x10000);
      FUN_143bd6770(param_1 + 0x18,uVar2,param_4);
      return;
    }
    iVar3 = local_48 + -0x4a;
    if (iVar3 < 0x27b0) {
      uVar2 = FUN_143bd8420(uVar1 | (iVar3 / 0xfe + 0x4c) * 0x10000 | (iVar3 % 0xfe + 2) * 0x100);
      FUN_143bd6770(param_1 + 0x18,uVar2,param_4);
      return;
    }
    local_48 = local_48 + -0x27fa;
    if (local_48 < 0xfc040) {
      uVar2 = FUN_143bd8420(uVar1 | local_48 % 0xfe + 2U | ((local_48 / 0xfe) % 0xfe + 2) * 0x100 |
                            (((local_48 / 0xfe) / 0xfe) % 0xfe + 0x74) * 0x10000);
      FUN_143bd6770(param_1 + 0x18,uVar2,param_4);
      return;
    }
  }
  local_44 = uVar1 | ((int)(param_3 + 1) / 2 + 0x80) * 0x10000;
  local_res18 = param_3;
  while ((param_2[(int)(local_res18 - 1)] == '\0' && (param_2[(int)(local_res18 - 2)] == '\0'))) {
    local_res18 = local_res18 - 2;
  }
  if ((local_res18 & 1) == 0) {
    local_38 = *param_2 * 10 + (int)param_2[1];
    local_30 = 2;
  }
  else {
    local_38 = (uint)*param_2;
    local_30 = 1;
  }
  local_34 = 8;
  while( true ) {
    iVar3 = local_38 * 2;
    local_38 = iVar3 + 0xb;
    if ((int)local_res18 <= local_30) break;
    if (local_34 == 0) {
      uVar2 = FUN_143bd8420(local_44 | local_38);
      FUN_143bd6770(param_1 + 0x18,uVar2,param_4);
      local_34 = 0x10;
      local_44 = uVar1;
    }
    else {
      local_44 = local_44 | local_38 << ((byte)local_34 & 0x1f);
      local_34 = local_34 + -8;
    }
    local_38 = param_2[local_30] * 10 + (int)param_2[local_30 + 1];
    local_30 = local_30 + 2;
  }
  uVar2 = FUN_143bd8420(local_44 | iVar3 + 10 << ((byte)local_34 & 0x1f));
  FUN_143bd6770(param_1 + 0x18,uVar2,param_4);
  return;
}



// FUNCTION 143bd7bb0 FUN_143bd7bb0 body=78 status=ok
// SIG undefined FUN_143bd7bb0(void)

void FUN_143bd7bb0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  puVar2 = (undefined8 *)FUN_143b618b0(param_1 + 2,(longlong)iVar1);
  *puVar2 = param_2;
  return;
}



// FUNCTION 143bd7c00 FUN_143bd7c00 body=178 status=ok
// SIG undefined FUN_143bd7c00(void)

int FUN_143bd7c00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_143a904f0(param_1);
  iVar2 = *(int *)(param_1 + 0x50) - iVar1;
  if (iVar2 < 1) {
    uVar3 = FUN_143a90530(param_1,*(undefined4 *)(param_1 + 0x50),-param_2);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    iVar2 = 0;
  }
  else if (iVar2 < param_2) {
    uVar3 = FUN_143a90530(param_1,iVar1,iVar2 - param_2);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - param_2;
    iVar2 = param_2;
  }
  return iVar2;
}



// FUNCTION 143bd7cc0 FUN_143bd7cc0 body=152 status=ok
// SIG undefined FUN_143bd7cc0(void)

void FUN_143bd7cc0(longlong *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int local_res10;
  
  local_res10 = param_2;
  if (param_1[0x2f] != 0) {
    cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1[0x2f]);
    if (cVar1 == '\0') {
      local_res10 = FUN_143bd7c00(param_1[0x2f],param_2);
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1,local_res10,param_3);
  if (-1 < (int)param_1[0x30]) {
    *(int *)(param_1 + 0x30) = (int)param_1[0x30] + local_res10;
  }
  return;
}



// FUNCTION 143bd7d60 FUN_143bd7d60 body=126 status=ok
// SIG undefined FUN_143bd7d60(void)

ulonglong FUN_143bd7d60(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 & 0xff;
  if (uVar1 < 0xc0) {
    uVar2 = CONCAT44(param_1,(param_1 & 0xff00) << 0x10) & 0xffff0000ffffffff |
            (ulonglong)(uVar1 << 8);
  }
  else if ((param_1 & 0xf) == 1) {
    uVar2 = (ulonglong)(param_1 - uVar1) << 0x20 | 0x5000500;
  }
  else {
    uVar2 = (ulonglong)(param_1 - uVar1);
  }
  return uVar2;
}



// FUNCTION 143bd7df0 FUN_143bd7df0 body=26 status=ok
// SIG undefined FUN_143bd7df0(void)

ulonglong FUN_143bd7df0(uint param_1)

{
  return (ulonglong)(param_1 & 0xffffff00) << 0x20 | 0x5000500;
}



// FUNCTION 143bd7e10 FUN_143bd7e10 body=16 status=ok
// SIG undefined FUN_143bd7e10(void)

uint FUN_143bd7e10(uint param_1)

{
  return param_1 & 0xffffff00;
}



// FUNCTION 143bd7e20 FUN_143bd7e20 body=56 status=ok
// SIG undefined FUN_143bd7e20(void)

ulonglong FUN_143bd7e20(uint param_1)

{
  return CONCAT44(param_1,(param_1 & 0xff00) << 0x10) & 0xffff0000ffffffff |
         (ulonglong)((param_1 & 0xff) << 8);
}



// FUNCTION 143bd7e60 FUN_143bd7e60 body=39 status=ok
// SIG undefined FUN_143bd7e60(void)

void FUN_143bd7e60(longlong param_1)

{
  FUN_143a90910(param_1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 143bd7e90 FUN_143bd7e90 body=15 status=ok
// SIG undefined FUN_143bd7e90(void)

uint FUN_143bd7e90(uint param_1)

{
  return param_1 >> 8 & 0xf;
}



// FUNCTION 143bd7ea0 FUN_143bd7ea0 body=200 status=ok
// SIG undefined FUN_143bd7ea0(void)

undefined8 FUN_143bd7ea0(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_18;
  
  local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_1 + 2);
  if (local_18 < *param_1 + param_2) {
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      do {
        if (local_18 < 1000) {
          local_18 = local_18 << 2;
        }
        else {
          local_18 = local_18 << 1;
        }
      } while (local_18 < *param_1 + param_2);
      lVar3 = FUN_143bd9190(param_1 + 2,local_18,*param_1);
      if (lVar3 == 0) {
        *param_3 = 7;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143bd7f70 FUN_143bd7f70 body=97 status=ok
// SIG undefined FUN_143bd7f70(void)

undefined4 FUN_143bd7f70(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  while( true ) {
    cVar1 = FUN_143a8b110(*param_2);
    if (cVar1 == '\0') break;
    lVar2 = FUN_143b65f60(param_1,param_2);
    if (lVar2 == 0x101000100) break;
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x18);
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 143bd7fe0 FUN_143bd7fe0 body=55 status=ok
// SIG undefined FUN_143bd7fe0(void)

undefined8 FUN_143bd7fe0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    *param_3 = 5;
  }
  return 0;
}



// FUNCTION 143bd8020 FUN_143bd8020 body=282 status=ok
// SIG undefined FUN_143bd8020(void)

undefined4 FUN_143bd8020(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_res18;
  int local_48;
  undefined1 local_28 [40];
  
  iVar2 = FUN_143b67bd0(param_3);
  lVar1 = *(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 2;
  local_res18 = FUN_143bd8fd0(lVar1);
  local_48 = 0;
  FUN_143b10f90(local_28,lVar1 + 4);
  do {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_4);
    if (iVar2 < 0) break;
    local_48 = local_48 + 1;
    uVar3 = FUN_143b31ec0(local_28,iVar2);
    if (1 < (int)uVar3) {
      local_res18 = FUN_143b1def0(local_28);
    }
  } while ((uVar3 & 1) != 0);
  (**(code **)(*param_1 + 0x58))(param_1,local_48,param_4);
  FUN_143b27580(local_28);
  return local_res18;
}



// FUNCTION 143bd8140 FUN_143bd8140 body=144 status=ok
// SIG undefined FUN_143bd8140(void)

undefined4 FUN_143bd8140(longlong *param_1,uint param_2)

{
  undefined4 local_18;
  
  if ((int)param_2 < *(int *)(*param_1 + 0x2c)) {
    local_18 = (param_2 & 0x1f) +
               (uint)*(ushort *)
                      (*(longlong *)*param_1 +
                      (longlong)
                      (int)((uint)*(ushort *)
                                   (*(longlong *)*param_1 +
                                   (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                           ((int)param_2 >> 5 & 0x3fU)) * 2) * 4;
  }
  else {
    local_18 = *(int *)(*param_1 + 0x30);
  }
  return *(undefined4 *)(*(longlong *)(*param_1 + 0x10) + (longlong)local_18 * 4);
}



// FUNCTION 143bd81d0 FUN_143bd81d0 body=73 status=ok
// SIG undefined FUN_143bd81d0(void)

void FUN_143bd81d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_143b67bd0(param_3);
  uVar2 = FUN_143c09600(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8)
                       );
  FUN_143bd8420(uVar2);
  return;
}



// FUNCTION 143bd8220 FUN_143bd8220 body=36 status=ok
// SIG undefined FUN_143bd8220(void)

void FUN_143bd8220(longlong param_1,undefined4 param_2)

{
  FUN_143b64340(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 143bd8250 FUN_143bd8250 body=36 status=ok
// SIG undefined FUN_143bd8250(void)

void FUN_143bd8250(longlong param_1,undefined4 param_2)

{
  FUN_143b1f030(*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



// FUNCTION 143bd8280 FUN_143bd8280 body=101 status=ok
// SIG undefined FUN_143bd8280(void)

undefined4 FUN_143bd8280(longlong *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
  *param_2 = iVar1;
  if (*param_2 < 0) {
    local_18 = 0xc0;
  }
  else {
    local_18 = FUN_143b64340(param_1[2],*param_2);
  }
  return local_18;
}



// FUNCTION 143bd82f0 FUN_143bd82f0 body=54 status=ok
// SIG undefined FUN_143bd82f0(void)

bool FUN_143bd82f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143a904f0(param_1);
  return *(int *)(param_1 + 0x50) < iVar1;
}



// FUNCTION 143bd8330 FUN_143bd8330 body=24 status=ok
// SIG undefined FUN_143bd8330(void)

void FUN_143bd8330(longlong param_1)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 143bd8350 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> body=27 status=ok
// SIG undefined ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(void)

void TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
     ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(undefined8 param_1)

{
  FUN_143a903a0(param_1);
  return;
}



// FUNCTION 143bd8370 FUN_143bd8370 body=74 status=ok
// SIG undefined FUN_143bd8370(void)

undefined1 FUN_143bd8370(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143b65e30(param_1);
  if (((cVar1 != '\0') && (iVar2 = FUN_143b67480(param_1), iVar2 != 1)) &&
     (iVar2 = FUN_143b67480(param_1), iVar2 != 2)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143bd83c0 FUN_143bd83c0 body=44 status=ok
// SIG undefined FUN_143bd83c0(void)

ulonglong FUN_143bd83c0(uint param_1)

{
  return (ulonglong)(param_1 & 0xff000000) << 0x20 | 0x5000000 |
         (ulonglong)((param_1 & 0xff0000) >> 8);
}



// FUNCTION 143bd83f0 FUN_143bd83f0 body=24 status=ok
// SIG undefined FUN_143bd83f0(void)

uint FUN_143bd83f0(uint param_1)

{
  return (param_1 & 0xff00) << 0x10 | 0x500;
}



// FUNCTION 143bd8410 FUN_143bd8410 body=15 status=ok
// SIG undefined FUN_143bd8410(void)

uint FUN_143bd8410(uint param_1)

{
  return param_1 >> 8 & 0x1f;
}



// FUNCTION 143bd8420 FUN_143bd8420 body=19 status=ok
// SIG undefined FUN_143bd8420(void)

ulonglong FUN_143bd8420(uint param_1)

{
  return (ulonglong)param_1 << 0x20 | 0x5000500;
}



// FUNCTION 143bd8440 FUN_143bd8440 body=158 status=ok
// SIG undefined FUN_143bd8440(void)

ulonglong FUN_143bd8440(uint param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint local_res8;
  byte local_18;
  
  if ((int)param_1 < 0x300) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8 = param_1;
    if (0xffff < (int)param_1) {
      local_res8 = ((int)param_1 >> 10) + 0xd7c0U & 0xffff;
    }
    if (((byte)(&DAT_145d1d0b0)[(int)local_res8 >> 5] == 0) ||
       ((*(uint *)(&DAT_145d1e0b0 +
                  (longlong)(int)(uint)(byte)(&DAT_145d1d0b0)[(int)local_res8 >> 5] * 4) &
        1 << ((byte)local_res8 & 0x1f)) == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    uVar1 = (ulonglong)local_18;
  }
  return uVar1;
}



// FUNCTION 143bd84e0 FUN_143bd84e0 body=91 status=ok
// SIG undefined FUN_143bd84e0(void)

uint FUN_143bd84e0(longlong param_1)

{
  uint uVar1;
  undefined4 local_18;
  
  uVar1 = FUN_143a8e3e0(param_1,*(undefined4 *)(param_1 + 0x50));
  if (uVar1 < 0x10000) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_18;
  return uVar1;
}



// FUNCTION 143bd8540 FUN_143bd8540 body=767 status=ok
// SIG undefined FUN_143bd8540(void)

undefined4
FUN_143bd8540(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined4 param_5
             ,int param_6,undefined8 param_7)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_58;
  int local_54;
  uint local_50;
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_54 = 1;
  local_58 = 1;
  FUN_143b10f90(local_38,param_4);
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(*(undefined8 *)(param_1 + 0x178)),
     cVar1 == '\0')) {
    FUN_143bd92b0(*(undefined8 *)(param_1 + 0x178),local_38);
  }
  local_50 = FUN_143b31c80(local_38,param_6);
  do {
    if ((int)local_50 < 2) {
      if ((local_50 == 0) || (iVar3 = FUN_143bd8ed0(param_1,param_7), iVar3 < 0)) {
        if (((param_3 & 0x400) != 0) && (((param_3 & 0x100) == 0 || (local_58 < local_54)))) {
          if (1 < local_58) {
            FUN_143bd7cc0(param_1,local_58,param_7);
            param_6 = FUN_143bd8ed0(param_1,param_7);
            local_54 = local_54 - (local_58 + -1);
            local_58 = 1;
          }
          uVar2 = FUN_143bd8250(param_2,param_6);
          if (0xff < uVar2) {
            uVar4 = FUN_143bd8850(param_1,param_2,local_38,param_5,local_54,param_6,param_7);
            FUN_143b27580(local_38);
            return uVar4;
          }
        }
        FUN_143bd7cc0(param_1,local_58,param_7);
        FUN_143b27580(local_38);
        return param_5;
      }
      local_58 = local_58 + 1;
      param_6 = iVar3;
    }
    else {
      param_5 = FUN_143b1def0(local_38);
      if (((local_50 & 1) == 0) || (param_6 = FUN_143bd8ed0(param_1,param_7), param_6 < 0)) {
        FUN_143b27580(local_38);
        return param_5;
      }
      if ((*(longlong *)(param_1 + 0x178) != 0) &&
         (cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
                            (*(undefined8 *)(param_1 + 0x178)), cVar1 == '\0')) {
        FUN_143bd92b0(*(undefined8 *)(param_1 + 0x178),local_38);
      }
      local_58 = 1;
    }
    local_54 = local_54 + 1;
    local_50 = FUN_143b31ec0(local_38,param_6);
  } while( true );
}



// FUNCTION 143bd8850 FUN_143bd8850 body=1475 status=ok
// SIG undefined FUN_143bd8850(void)

int FUN_143bd8850(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                 int param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_res10;
  int local_res20;
  ushort local_48;
  byte local_44;
  int local_40;
  int local_38;
  longlong local_28;
  
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    local_44 = FUN_143bd8250(param_2,param_6);
    iVar2 = FUN_143bd8ed0(param_1,param_7);
    if (iVar2 < 0) {
      FUN_143bd7cc0(param_1,1,param_7);
    }
    else {
      param_5 = param_5 + 1;
      local_48 = FUN_143bd8250(param_2,iVar2);
      if (local_48 < 0x100) {
        FUN_143bd7cc0(param_1,2,param_7);
      }
      else {
        if ((param_1[0x2f] == 0) ||
           (cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1[0x2f]),
           cVar1 != '\0')) {
          if (param_1[0x2f] == 0) {
            lVar5 = FUN_143a8d310(0x70);
            if (lVar5 == 0) {
              local_28 = 0;
            }
            else {
              local_28 = FUN_143bd64e0(lVar5);
            }
            param_1[0x2f] = local_28;
            if (param_1[0x2f] == 0) {
              *param_7 = 7;
              return 0;
            }
          }
          FUN_143bd90d0(param_3);
          if (2 < param_5) {
            (**(code **)(*param_1 + 0x60))(param_1,param_5,param_7);
            uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
            FUN_143b31c80(param_3,uVar3);
            for (local_38 = 3; local_38 < param_5; local_38 = local_38 + 1) {
              uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
              FUN_143b31ec0(param_3,uVar3);
            }
            (**(code **)(*param_1 + 0x58))(param_1,2,param_7);
          }
          FUN_143bd92b0(param_1[0x2f],param_3);
        }
        else {
          FUN_143bd9160(param_1[0x2f],param_3);
        }
        FUN_143bd92e0(param_1[0x2f],param_6);
        local_40 = 2;
        local_res20 = param_4;
        param_6 = iVar2;
        do {
          if (((uint)local_44 < (uint)((int)(uint)local_48 >> 8)) &&
             (uVar4 = FUN_143b31ec0(param_3,param_6), 1 < (int)uVar4)) {
            local_res20 = FUN_143b1def0(param_3);
            local_40 = 0;
            FUN_143bd9000(param_1[0x2f]);
            if ((uVar4 & 1) == 0) break;
            FUN_143bd92b0(param_1[0x2f],param_3);
          }
          else {
            FUN_143bd9320(param_1[0x2f],param_6);
            FUN_143bd9160(param_1[0x2f],param_3);
            local_44 = (byte)local_48;
          }
          param_6 = FUN_143bd8ed0(param_1,param_7);
          if (param_6 < 0) break;
          local_40 = local_40 + 1;
          local_48 = FUN_143bd8250(param_2,param_6);
        } while (0xff < local_48);
        FUN_143bd7cc0(param_1,local_40,param_7);
        cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1[0x2f]);
        FUN_143bd9030(param_1[0x2f]);
        param_4 = local_res20;
        if ((cVar1 != '\0') &&
           (cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1[0x2f]),
           cVar1 == '\0')) {
          param_6 = 0xffffffff;
          local_res10 = param_2;
          while( true ) {
            FUN_143bd67f0(param_1,local_res10,param_6,local_res20,1,param_7);
            cVar1 = FUN_143bd82f0(param_1[0x2f]);
            if (cVar1 == '\0') break;
            param_6 = FUN_143bd84e0(param_1[0x2f]);
            local_res20 = (**(code **)(*param_1 + 0x68))(param_1,param_6);
            if (local_res20 == 0xc0) {
              local_res10 = *(longlong *)(param_1[2] + 0x20);
              local_res20 = FUN_143b64340(local_res10,param_6);
            }
            else {
              local_res10 = param_1[2];
            }
          }
          FUN_143bd7e60(param_1[0x2f]);
          local_res20 = 1;
          param_4 = local_res20;
        }
      }
    }
  }
  else {
    param_4 = 0;
  }
  return param_4;
}



// FUNCTION 143bd8e20 FUN_143bd8e20 body=173 status=ok
// SIG undefined FUN_143bd8e20(void)

undefined8
FUN_143bd8e20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_143bd67f0(param_1,param_2,param_3,param_4,1,param_5);
  cVar2 = FUN_143a8b110(*param_5);
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
    uVar3 = FUN_143b64180(param_1 + 0x18,uVar1);
  }
  return uVar3;
}



// FUNCTION 143bd8ed0 FUN_143bd8ed0 body=241 status=ok
// SIG undefined FUN_143bd8ed0(void)

ulonglong FUN_143bd8ed0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((param_1[0x2f] != 0) && (cVar1 = FUN_143bd82f0(param_1[0x2f]), cVar1 != '\0')) {
    uVar3 = FUN_143bd84e0(param_1[0x2f]);
    return uVar3;
  }
  if ((int)param_1[0x30] == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    if (((param_1[0x2f] != 0) &&
        (cVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1[0x2f]), cVar1 == '\0'))
       && (-1 < (int)uVar2)) {
      FUN_143bd8330(param_1[0x2f]);
    }
    if ((0 < (int)param_1[0x30]) && (-1 < (int)uVar2)) {
      *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
    }
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 143bd8fd0 FUN_143bd8fd0 body=47 status=ok
// SIG undefined FUN_143bd8fd0(void)

undefined4 FUN_143bd8fd0(undefined2 *param_1)

{
  return CONCAT22(*param_1,param_1[1]);
}



// FUNCTION 143bd9000 FUN_143bd9000 body=39 status=ok
// SIG undefined FUN_143bd9000(void)

void FUN_143bd9000(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return;
}



// FUNCTION 143bd9030 FUN_143bd9030 body=79 status=ok
// SIG undefined FUN_143bd9030(void)

void FUN_143bd9030(longlong param_1)

{
  FUN_143a90980(param_1,0,*(undefined4 *)(param_1 + 0x50),param_1 + 0x28,0,
                *(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 143bd9080 FUN_143bd9080 body=73 status=ok
// SIG undefined FUN_143bd9080(void)

void FUN_143bd9080(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_143bd7e60(*(undefined8 *)(param_1 + 0x178));
  }
  return;
}



// FUNCTION 143bd90d0 FUN_143bd90d0 body=41 status=ok
// SIG undefined FUN_143bd90d0(void)

longlong FUN_143bd90d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



// FUNCTION 143bd9100 FUN_143bd9100 body=81 status=ok
// SIG undefined FUN_143bd9100(void)

longlong FUN_143bd9100(longlong param_1,longlong *param_2)

{
  if ((*(longlong *)(param_1 + 8) == *param_2) && (*(longlong *)(param_1 + 8) != 0)) {
    *(longlong *)(param_1 + 0x10) = param_2[1];
    *(int *)(param_1 + 0x18) = (int)param_2[2];
  }
  return param_1;
}



// FUNCTION 143bd9160 FUN_143bd9160 body=41 status=ok
// SIG undefined FUN_143bd9160(void)

void FUN_143bd9160(longlong param_1,undefined8 param_2)

{
  FUN_143bd9100(param_2,param_1 + 0x58);
  return;
}



// FUNCTION 143bd9190 FUN_143bd9190 body=198 status=ok
// SIG undefined FUN_143bd9190(void)

void * FUN_143bd9190(undefined8 *param_1,int param_2,int param_3)

{
  void *_Dst;
  int local_res18;
  
  if (param_2 < 1) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_143aa7a40((longlong)param_2 << 3);
    if (_Dst != (void *)0x0) {
      if (0 < param_3) {
        local_res18 = param_3;
        if (*(int *)(param_1 + 1) < param_3) {
          local_res18 = *(int *)(param_1 + 1);
        }
        if (param_2 < local_res18) {
          local_res18 = param_2;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(longlong)local_res18 << 3);
      }
      FUN_143a8ce70(param_1);
      *param_1 = _Dst;
      *(int *)(param_1 + 1) = param_2;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  return _Dst;
}



// FUNCTION 143bd9260 FUN_143bd9260 body=67 status=ok
// SIG undefined FUN_143bd9260(void)

longlong FUN_143bd9260(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x18);
  return param_1;
}



// FUNCTION 143bd92b0 FUN_143bd92b0 body=41 status=ok
// SIG undefined FUN_143bd92b0(void)

void FUN_143bd92b0(longlong param_1,undefined8 param_2)

{
  FUN_143bd9260(param_2,param_1 + 0x58);
  return;
}



// FUNCTION 143bd92e0 FUN_143bd92e0 body=51 status=ok
// SIG undefined FUN_143bd92e0(void)

void FUN_143bd92e0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_143b10c50(param_1 + 0x28,param_2);
  return;
}


