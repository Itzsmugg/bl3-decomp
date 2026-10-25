// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b88a60 FUN_143b88a60 body=119 status=ok
// SIG undefined FUN_143b88a60(void)

void FUN_143b88a60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::TimeZoneNames::MatchInfoCollection::vftable;
  if ((param_1[1] != 0) && (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 143b88ae0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZoneNames::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b88b10 FUN_143b88b10 body=101 status=ok
// SIG undefined FUN_143b88b10(void)

void FUN_143b88b10(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZoneNamesDelegate::vftable;
  FUN_143ab2410(&DAT_146bc81f0);
  if (param_1[1] != 0) {
    *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + -1;
  }
  FUN_143ab2470(&DAT_146bc81f0);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b88b80 FUN_143b88b80 body=123 status=ok
// SIG undefined FUN_143b88b80(void)

bool FUN_143b88b80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&icu_53::TimeZoneNames::RTTI_Type_Descriptor,
                       &icu_53::TimeZoneNamesDelegate::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(longlong *)(param_1 + 8) == *(longlong *)(lVar1 + 8);
    }
  }
  return bVar2;
}



// FUNCTION 143b88c00 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    protected: void * __ptr64 __cdecl Concurrency::details::SchedulerProxy::`scalar deleting
   destructor'(unsigned int) __ptr64
    public: void * __ptr64 __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::InternalContextBase>::Segment::`scalar deleting destructor'(unsigned int)
   __ptr64
    public: void * __ptr64 __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::_UnrealizedChore>::Segment::`scalar deleting destructor'(unsigned int)
   __ptr64
    public: void * __ptr64 __cdecl Concurrency::details::WorkQueue::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

undefined8 FID_conflict__scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  FUN_143b88a40(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b88c40 FUN_143b88c40 body=54 status=ok
// SIG undefined FUN_143b88c40(void)

undefined8 FUN_143b88c40(undefined8 param_1,uint param_2)

{
  FUN_143b88a60(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b88c80 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b88cc0 FUN_143b88cc0 body=54 status=ok
// SIG undefined FUN_143b88cc0(void)

undefined8 FUN_143b88cc0(undefined8 param_1,uint param_2)

{
  FUN_143b88b10(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b88d00 FUN_143b88d00 body=311 status=ok
// SIG undefined FUN_143b88d00(void)

void FUN_143b88d00(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_38;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x38);
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143b88570(lVar2,param_2,param_3,0,param_4);
    }
    if (local_38 == 0) {
      *param_5 = 7;
    }
    else {
      uVar3 = FUN_143b89580(param_1,param_5);
      FUN_143b09430(uVar3,local_38,param_5);
      cVar1 = FUN_143a8b0e0(*param_5);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        FID_conflict__scalar_deleting_destructor_(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 143b88e40 FUN_143b88e40 body=312 status=ok
// SIG undefined FUN_143b88e40(void)

void FUN_143b88e40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_38;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x38);
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143b88570(lVar2,param_2,param_3,param_4,0);
    }
    if (local_38 == 0) {
      *param_5 = 7;
    }
    else {
      uVar3 = FUN_143b89580(param_1,param_5);
      FUN_143b09430(uVar3,local_38,param_5);
      cVar1 = FUN_143a8b0e0(*param_5);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        FID_conflict__scalar_deleting_destructor_(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 143b88f80 FUN_143b88f80 body=173 status=ok
// SIG undefined FUN_143b88f80(void)

longlong FUN_143b88f80(longlong param_1)

{
  longlong lVar1;
  longlong local_28;
  
  lVar1 = FUN_143a8d310(0x10);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_143b88670(lVar1);
  }
  if (local_28 != 0) {
    FUN_143ab2410(&DAT_146bc81f0);
    *(int *)(*(longlong *)(param_1 + 8) + 8) = *(int *)(*(longlong *)(param_1 + 8) + 8) + 1;
    *(undefined8 *)(local_28 + 8) = *(undefined8 *)(param_1 + 8);
    FUN_143ab2470(&DAT_146bc81f0);
  }
  return local_28;
}



// FUNCTION 143b89030 FUN_143b89030 body=102 status=ok
// SIG undefined FUN_143b89030(void)

undefined8 FUN_143b89030(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x10);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b886b0(lVar1,param_1,param_2);
  }
  return local_20;
}



// FUNCTION 143b890a0 FUN_143b890a0 body=84 status=ok
// SIG undefined FUN_143b890a0(void)

void FUN_143b890a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x60))
            (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143b89100 FUN_143b89100 body=54 status=ok
// SIG undefined FUN_143b89100(void)

void FUN_143b89100(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x28))
            (**(undefined8 **)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b89140 FUN_143b89140 body=64 status=ok
// SIG undefined FUN_143b89140(void)

void FUN_143b89140(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x20))
            (**(undefined8 **)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 143b89180 FUN_143b89180 body=226 status=ok
// SIG undefined FUN_143b89180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b89180(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_5);
  cVar1 = FUN_143a903a0(param_5);
  if (cVar1 != '\0') {
    FUN_143a8ac30(local_40);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_4,local_40);
    (**(code **)(*param_1 + 0x40))(param_1,local_40,param_3,param_5);
    FUN_143a8dc60(local_40);
  }
  return param_5;
}



// FUNCTION 143b89270 FUN_143b89270 body=39 status=ok
// SIG undefined FUN_143b89270(void)

void FUN_143b89270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143bf14a0(param_2,param_3);
  return;
}



// FUNCTION 143b892a0 FUN_143b892a0 body=64 status=ok
// SIG undefined FUN_143b892a0(void)

void FUN_143b892a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x50))
            (**(undefined8 **)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 143b892e0 FUN_143b892e0 body=61 status=ok
// SIG undefined FUN_143b892e0(void)

undefined4 FUN_143b892e0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_143b09610(*(undefined8 *)(param_1 + 8),param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x30);
  }
  return uVar1;
}



// FUNCTION 143b89320 FUN_143b89320 body=74 status=ok
// SIG undefined FUN_143b89320(void)

void FUN_143b89320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x40))
            (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



// FUNCTION 143b89370 FUN_143b89370 body=76 status=ok
// SIG undefined FUN_143b89370(void)

void FUN_143b89370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x30))
            (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



// FUNCTION 143b893c0 FUN_143b893c0 body=105 status=ok
// SIG undefined FUN_143b893c0(void)

undefined8 FUN_143b893c0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_143a90910(param_3);
  lVar1 = FUN_143b09610(*(undefined8 *)(param_1 + 8),param_2);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x34) != '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_143a8dcd0(param_3,lVar1 + 8);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143b89430 FUN_143b89430 body=60 status=ok
// SIG undefined FUN_143b89430(void)

undefined4 FUN_143b89430(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_143b09610(*(undefined8 *)(param_1 + 8),param_2);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}



// FUNCTION 143b89470 FUN_143b89470 body=74 status=ok
// SIG undefined FUN_143b89470(void)

void FUN_143b89470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x38))
            (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



// FUNCTION 143b894c0 FUN_143b894c0 body=74 status=ok
// SIG undefined FUN_143b894c0(void)

void FUN_143b894c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x48))
            (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



// FUNCTION 143b89510 FUN_143b89510 body=105 status=ok
// SIG undefined FUN_143b89510(void)

undefined8 FUN_143b89510(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_143a90910(param_3);
  lVar1 = FUN_143b09610(*(undefined8 *)(param_1 + 8),param_2);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x34) == '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_143a8dcd0(param_3,lVar1 + 8);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143b89580 FUN_143b89580 body=302 status=ok
// SIG undefined FUN_143b89580(void)

undefined8 FUN_143b89580(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar4 = FUN_143a8d310(0x28);
      if (lVar4 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143b090a0(lVar4,
                                 FID_conflict__InternalDeleteHelper<Concurrency::details::WorkQueue>
                                 ,0,param_2);
      }
      *(undefined8 *)(param_1 + 8) = local_38;
      if (*(longlong *)(param_1 + 8) == 0) {
        *param_2 = 7;
      }
      else {
        cVar2 = FUN_143a8b0e0(*param_2);
        if (cVar2 != '\0') {
          puVar1 = *(undefined8 **)(param_1 + 8);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          *(undefined8 *)(param_1 + 8) = 0;
        }
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b896b0 FUN_143b896b0 body=44 status=ok
// SIG undefined FUN_143b896b0(void)

undefined8 FUN_143b896b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(param_1 + 8));
  }
  return uVar1;
}



// FUNCTION 143b896e0 FUN_143b896e0 body=128 status=ok
// SIG undefined FUN_143b896e0(void)

void FUN_143b896e0(void)

{
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  double local_10;
  
  local_28[0] = 0xffffffff;
  local_10 = (double)FUN_143a91970();
  while (local_20 = FUN_143ab3590(DAT_146bc8220,local_28), local_20 != 0) {
    local_18 = *(longlong *)(local_20 + 8);
    if ((*(int *)(local_18 + 8) < 1) && (180000.0 < local_10 - *(double *)(local_18 + 0x10))) {
      FUN_143ab37e0(DAT_146bc8220,local_20);
    }
  }
  return;
}



// FUNCTION 143b89760 FID_conflict:_InternalDeleteHelper<Concurrency::details::WorkQueue> body=73 status=ok
// SIG undefined FID_conflict:_InternalDeleteHelper<Concurrency::details::WorkQueue>(void)

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl Concurrency::details::_InternalDeleteHelper<class
   Concurrency::details::WorkQueue>(class Concurrency::details::WorkQueue * __ptr64)
    protected: virtual void __cdecl Concurrency::details::SchedulerProxy::DeleteThis(void) __ptr64
    public: static void __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::InternalContextBase>::Segment::StaticDelete(struct
   Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Segment *
   __ptr64)
    public: static void __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::_UnrealizedChore>::Segment::StaticDelete(struct
   Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment * __ptr64)
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

void FID_conflict__InternalDeleteHelper<Concurrency::details::WorkQueue>(longlong param_1)

{
  if (param_1 != 0) {
    FID_conflict__scalar_deleting_destructor_(param_1,1);
  }
  return;
}



// FUNCTION 143b897b0 FUN_143b897b0 body=101 status=ok
// SIG undefined FUN_143b897b0(void)

void FUN_143b897b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143b89820 FUN_143b89820 body=51 status=ok
// SIG undefined FUN_143b89820(void)

undefined1 FUN_143b89820(void)

{
  if (DAT_146bc8220 != 0) {
    FUN_143ab2e80(DAT_146bc8220);
    DAT_146bc8220 = 0;
  }
  DAT_146bc8228 = 0;
  return 1;
}



// FUNCTION 143b89860 FUN_143b89860 body=60 status=ok
// SIG undefined FUN_143b89860(void)

undefined8 * FUN_143b89860(undefined8 *param_1)

{
  *param_1 = icu_53::GMTOffsetField::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 143b898a0 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::TextTrieMapSearchResultHandler::vftable;
  return param_1;
}



// FUNCTION 143b898c0 FUN_143b898c0 body=2215 status=ok
// SIG undefined FUN_143b898c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b898c0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 auStack_1c8 [32];
  code *local_1a8;
  undefined1 local_198;
  char local_197;
  char local_196;
  int local_194;
  undefined4 local_190;
  int local_18c;
  int local_188;
  wchar_t *local_180;
  longlong local_178;
  longlong *local_170;
  wchar_t *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_110 [40];
  undefined1 local_e8 [48];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_118 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  FUN_143b69a50(param_1);
  *param_1 = icu_53::TimeZoneFormat::vftable;
  FUN_143a8a610(param_1 + 0x29,param_2);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_143a8ac30(param_1 + 0x5b);
  local_1a8 = FUN_143a8dc60;
  _eh_vector_constructor_iterator_(param_1 + 0x60,0x28,6,FUN_143a8ac30);
  FUN_143a8ac30(param_1 + 0x83);
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_143a8ac30(param_1 + 0x89);
  FUN_143a8ac30(param_1 + 0x8e);
  for (local_18c = 0; local_18c < 6; local_18c = local_18c + 1) {
    param_1[(longlong)local_18c + 0x93] = 0;
  }
  local_148 = (char *)FUN_143b52030(param_1 + 0x29);
  sVar2 = _guard_xfg_dispatch_icall_nop(local_148);
  local_188 = (int)sVar2;
  if (local_188 == 0) {
    uVar3 = FUN_143a8c200(param_1 + 0x29);
    FUN_143e1c720(uVar3,local_b8,0x9d,param_3);
    local_188 = FUN_143a96880(local_b8,param_1 + 0x58,4,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 == '\0') {
      return param_1;
    }
    *(undefined1 *)((longlong)param_1 + (longlong)local_188 + 0x2c0) = 0;
  }
  else if (local_188 < 4) {
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x58),local_148);
  }
  else {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  uVar3 = FUN_143b89030(param_2,param_3);
  param_1[0x59] = uVar3;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_168 = (wchar_t *)0x0;
    local_178 = 0;
    uVar3 = FUN_143a8c200(param_2);
    local_140 = FUN_143aa5b10("icudt53l-zone",uVar3,param_3);
    local_160 = FUN_143aa3350(local_140,"zoneStrings",0,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      local_180 = (wchar_t *)FUN_143aa4fe0(local_160,"gmtFormat",&local_194,param_3);
      if (0 < local_194) {
        local_168 = local_180;
      }
      local_180 = (wchar_t *)FUN_143aa4fe0(local_160,"gmtZeroFormat",&local_194,param_3);
      if (0 < local_194) {
        FUN_143a90d80(param_1 + 0x83,1,local_180,local_194);
      }
      local_180 = (wchar_t *)FUN_143aa4fe0(local_160,"hourFormat",&local_194,param_3);
      if (0 < local_194) {
        local_178 = (longlong)local_180;
      }
      FUN_143aa2ef0(local_160);
      FUN_143aa2ef0(local_140);
    }
    if (local_168 == (wchar_t *)0x0) {
      local_168 = L"GMT{0}";
    }
    local_138 = FUN_143a8db50(local_e8,local_168,0xffffffff);
    local_128 = local_138;
    FUN_143b8ce10(param_1,local_138,param_3);
    FUN_143a8dc60(local_e8);
    local_196 = '\x01';
    if ((local_178 != 0) && (local_150 = FUN_143ab45e0(local_178,0x3b), local_150 != 0)) {
      local_190 = 0;
      FUN_143a90d80(param_1 + 0x60,0,local_178,local_150 - local_178 >> 1 & 0xffffffff);
      FUN_143a90d80(param_1 + 0x6a,1,local_150 + 2,0xffffffff);
      FUN_143b8b1c0(param_1 + 0x60,param_1 + 0x65,&local_190);
      FUN_143b8b1c0(param_1 + 0x6a,param_1 + 0x6f,&local_190);
      FUN_143b914e0(param_1 + 0x60,param_1 + 0x74,&local_190);
      FUN_143b914e0(param_1 + 0x6a,param_1 + 0x79,&local_190);
      cVar1 = FUN_143a8b110(local_190);
      if (cVar1 != '\0') {
        local_196 = '\0';
      }
    }
    if (local_196 != '\0') {
      FUN_143a90d80(param_1 + 0x74,1,&DAT_145d14314,0xffffffff);
      FUN_143a90d80(param_1 + 0x60,1,L"+H:mm",0xffffffff);
      FUN_143a90d80(param_1 + 0x65,1,L"+H:mm:ss",0xffffffff);
      FUN_143a90d80(param_1 + 0x79,1,&DAT_145d1431c,0xffffffff);
      FUN_143a90d80(param_1 + 0x6a,1,L"-H:mm",0xffffffff);
      FUN_143a90d80(param_1 + 0x6f,1,L"-H:mm:ss",0xffffffff);
    }
    FUN_143b8ccd0(param_1,param_3);
    local_170 = (longlong *)FUN_143b6f670(param_2,param_3);
    local_197 = '\x01';
    if ((local_170 != (longlong *)0x0) && (cVar1 = FUN_143b6fde0(local_170), cVar1 == '\0')) {
      (**(code **)(*local_170 + 0x10))(local_170,local_110);
      cVar1 = FUN_143b91440(local_110,param_1 + 0x7e,10);
      local_198 = cVar1 == '\0';
      local_197 = local_198;
      FUN_143a8dc60(local_110);
    }
    if (local_197 != '\0') {
      _guard_xfg_dispatch_icall_nop(param_1 + 0x7e,&DAT_145d14328,0x28);
    }
    local_130 = local_170;
    local_158 = local_170;
    if (local_170 != (longlong *)0x0) {
      (**(code **)*local_170)(local_170,1);
    }
  }
  return param_1;
}



// FUNCTION 143b8a170 FUN_143b8a170 body=313 status=ok
// SIG undefined FUN_143b8a170(void)

undefined8 * FUN_143b8a170(undefined8 *param_1,undefined8 param_2)

{
  int local_18;
  
  FUN_143b69a00(param_1,param_2);
  *param_1 = icu_53::TimeZoneFormat::vftable;
  FUN_143a8aad0(param_1 + 0x29);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_143a8ac30(param_1 + 0x5b);
  _eh_vector_constructor_iterator_(param_1 + 0x60,0x28,6,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143a8ac30(param_1 + 0x83);
  FUN_143a8ac30(param_1 + 0x89);
  FUN_143a8ac30(param_1 + 0x8e);
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    param_1[(longlong)local_18 + 0x93] = 0;
  }
  FUN_143b8a5c0(param_1,param_2);
  return param_1;
}



// FUNCTION 143b8a2b0 FUN_143b8a2b0 body=69 status=ok
// SIG undefined FUN_143b8a2b0(void)

undefined8 * FUN_143b8a2b0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ZoneIdMatchHandler::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143b8a300 FUN_143b8a300 body=103 status=ok
// SIG undefined FUN_143b8a300(void)

void FUN_143b8a300(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  FUN_143b1b790(param_1);
  return;
}



// FUNCTION 143b8a370 FUN_143b8a370 body=55 status=ok
// SIG undefined FUN_143b8a370(void)

void FUN_143b8a370(undefined8 *param_1)

{
  *param_1 = icu_53::GMTOffsetField::vftable;
  if (param_1[1] != 0) {
    FUN_143aa79f0(param_1[1]);
  }
  return;
}



// FUNCTION 143b8a3b0 FUN_143b8a3b0 body=477 status=ok
// SIG undefined FUN_143b8a3b0(void)

void FUN_143b8a3b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int local_68;
  
  *param_1 = icu_53::TimeZoneFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x59];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x5a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  for (local_68 = 0; local_68 < 6; local_68 = local_68 + 1) {
    puVar1 = (undefined8 *)param_1[(longlong)local_68 + 0x93];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  FUN_143a8dc60(param_1 + 0x8e);
  FUN_143a8dc60(param_1 + 0x89);
  FUN_143a8dc60(param_1 + 0x83);
  _eh_vector_destructor_iterator_(param_1 + 0x60,0x28,6,FUN_143a8dc60);
  FUN_143a8dc60(param_1 + 0x5b);
  FUN_143a8acf0(param_1 + 0x29);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b8a590 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ZoneIdMatchHandler::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b8a5c0 FUN_143b8a5c0 body=850 status=ok
// SIG undefined FUN_143b8a5c0(void)

longlong FUN_143b8a5c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int local_68;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  if (param_1 != param_2) {
    local_40 = *(undefined8 **)(param_1 + 0x2c8);
    if (local_40 == (undefined8 *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = (**(code **)*local_40)(local_40,1);
    }
    local_20 = *(undefined8 **)(param_1 + 0x2d0);
    if (local_20 == (undefined8 *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = (**(code **)*local_20)(local_20,1);
    }
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    FUN_143a8adb0(param_1 + 0x148,param_2 + 0x148);
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2c0),(void *)(param_2 + 0x2c0),4);
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x2c8) + 0x18))(*(undefined8 *)(param_2 + 0x2c8))
    ;
    *(undefined8 *)(param_1 + 0x2c8) = uVar1;
    if (*(longlong *)(param_2 + 0x2d0) != 0) {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x2d0) + 0x18))
                        (*(undefined8 *)(param_2 + 0x2d0));
      *(undefined8 *)(param_1 + 0x2d0) = uVar1;
    }
    FUN_143a8dcd0(param_1 + 0x2d8,param_2 + 0x2d8);
    FUN_143a8dcd0(param_1 + 0x448,param_2 + 0x448);
    FUN_143a8dcd0(param_1 + 0x470,param_2 + 0x470);
    local_50[0] = 0;
    for (local_68 = 0; local_68 < 6; local_68 = local_68 + 1) {
      FUN_143a8dcd0(param_1 + 0x300 + (longlong)local_68 * 0x28,
                    param_2 + 0x300 + (longlong)local_68 * 0x28);
      local_48 = *(undefined8 **)(param_1 + 0x498 + (longlong)local_68 * 8);
      local_28 = local_48;
      if (local_48 == (undefined8 *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = (**(code **)*local_48)(local_48,1);
      }
    }
    FUN_143b8ccd0(param_1,local_50);
    FUN_143a8dcd0(param_1 + 0x418,param_2 + 0x418);
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x3f0),(void *)(param_2 + 0x3f0),0x28);
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  }
  return param_1;
}



// FUNCTION 143b8a920 FUN_143b8a920 body=412 status=ok
// SIG undefined FUN_143b8a920(void)

char FUN_143b8a920(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char local_28;
  char local_27;
  int local_24;
  int local_20;
  
  cVar1 = FUN_143a8afa0(param_1 + 0x148,param_2 + 0x148);
  if ((((cVar1 == '\0') || (cVar1 = FUN_143a8dd00(param_1 + 0x2d8,param_2 + 0x2d8), cVar1 == '\0'))
      || (cVar1 = FUN_143a8dd00(param_1 + 0x418,param_2 + 0x418), cVar1 == '\0')) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x10))
                        (*(undefined8 *)(param_1 + 0x2c8),*(undefined8 *)(param_2 + 0x2c8)),
     cVar1 == '\0')) {
    local_27 = '\0';
  }
  else {
    local_27 = '\x01';
  }
  local_28 = local_27;
  local_24 = 0;
  while ((local_24 < 6 && (local_28 != '\0'))) {
    local_28 = FUN_143a8dd00(param_1 + 0x300 + (longlong)local_24 * 0x28,
                             param_2 + 0x300 + (longlong)local_24 * 0x28);
    local_24 = local_24 + 1;
  }
  local_20 = 0;
  while ((local_20 < 10 && (local_28 != '\0'))) {
    lVar2 = (longlong)local_20;
    lVar3 = (longlong)local_20;
    local_20 = local_20 + 1;
    local_28 = *(int *)(param_1 + 0x3f0 + lVar2 * 4) == *(int *)(param_2 + 0x3f0 + lVar3 * 4);
  }
  return local_28;
}



// FUNCTION 143b8aac0 FUN_143b8aac0 body=54 status=ok
// SIG undefined FUN_143b8aac0(void)

undefined8 FUN_143b8aac0(undefined8 param_1,uint param_2)

{
  FUN_143b8a370(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b8ab00 FUN_143b8ab00 body=54 status=ok
// SIG undefined FUN_143b8ab00(void)

undefined8 FUN_143b8ab00(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b8ab40 FUN_143b8ab40 body=54 status=ok
// SIG undefined FUN_143b8ab40(void)

undefined8 FUN_143b8ab40(undefined8 param_1,uint param_2)

{
  FUN_143b8a3b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b8ab80 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b8abc0 FUN_143b8abc0 body=211 status=ok
// SIG undefined FUN_143b8abc0(void)

void FUN_143b8abc0(longlong param_1,undefined8 param_2,int param_3,byte param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 < 10) {
    local_14 = 1;
  }
  else {
    local_14 = 2;
  }
  for (local_18 = 0; local_18 < (int)((uint)param_4 - local_14); local_18 = local_18 + 1) {
    FUN_143a8e0c0(param_2,*(undefined4 *)(param_1 + 0x3f0));
  }
  if (local_14 == 2) {
    FUN_143a8e0c0(param_2,*(undefined4 *)(param_1 + 0x3f0 + (longlong)(param_3 / 10) * 4));
  }
  FUN_143a8e0c0(param_2,*(undefined4 *)(param_1 + 0x3f0 + (longlong)(param_3 % 10) * 4));
  return;
}



// FUNCTION 143b8aca0 FUN_143b8aca0 body=76 status=ok
// SIG undefined FUN_143b8aca0(void)

void FUN_143b8aca0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_143aba0d0(param_1,param_2,param_3,param_4,0,param_3,param_5);
  return;
}



// FUNCTION 143b8acf0 FUN_143b8acf0 body=234 status=ok
// SIG undefined FUN_143b8acf0(void)

void FUN_143b8acf0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int local_24;
  int local_20;
  
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  local_24 = 0;
  do {
    if (5 < local_24) {
      return;
    }
    bVar2 = false;
    uVar1 = *(undefined8 *)(param_1 + 0x498 + (longlong)local_24 * 8);
    for (local_20 = 0;
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(uVar1), local_20 < iVar3; local_20 = local_20 + 1) {
      uVar4 = FUN_143b09610(uVar1,local_20);
      iVar3 = FUN_143a91e00(uVar4);
      if (iVar3 == 0) {
        if (bVar2) break;
      }
      else {
        if (bVar2) {
          *(undefined1 *)(param_1 + 0x4c8) = 1;
          break;
        }
        if (iVar3 == 1) {
          bVar2 = true;
        }
      }
    }
    if (*(char *)(param_1 + 0x4c8) != '\0') {
      return;
    }
    local_24 = local_24 + 1;
  } while( true );
}



// FUNCTION 143b8ade0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x4d0);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b8a170(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b8ae40 FUN_143b8ae40 body=199 status=ok
// SIG undefined FUN_143b8ae40(void)

undefined8 * FUN_143b8ae40(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *local_38;
  
  lVar2 = FUN_143a8d310(0x4d0);
  if (lVar2 == 0) {
    local_38 = (undefined8 *)0x0;
  }
  else {
    local_38 = (undefined8 *)FUN_143b898c0(lVar2,param_1,param_2);
  }
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 == '\0') {
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,1);
    }
    local_38 = (undefined8 *)0x0;
  }
  return local_38;
}



// FUNCTION 143b8af10 FUN_143b8af10 body=366 status=ok
// SIG undefined FUN_143b8af10(void)

undefined8 * FUN_143b8af10(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *local_40;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar3 = FUN_143a8d310(0x18);
    if (lVar3 == 0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = (undefined8 *)FUN_143b89860(lVar3);
    }
    if (local_40 == (undefined8 *)0x0) {
      *param_2 = 7;
      local_40 = (undefined8 *)0x0;
    }
    else {
      iVar2 = FUN_143a904f0(param_1);
      uVar4 = FUN_143aa7a40((longlong)(iVar2 + 1) << 1);
      local_40[1] = uVar4;
      if (local_40[1] == 0) {
        *param_2 = 7;
        if (local_40 != (undefined8 *)0x0) {
          (**(code **)*local_40)(local_40,1);
        }
        local_40 = (undefined8 *)0x0;
      }
      else {
        uVar4 = FUN_143a8fe10(param_1);
        FUN_143ab47f0(local_40[1],uVar4,iVar2);
        *(undefined2 *)(local_40[1] + (longlong)iVar2 * 2) = 0;
        *(undefined4 *)(local_40 + 2) = 0;
      }
    }
  }
  else {
    local_40 = (undefined8 *)0x0;
  }
  return local_40;
}



// FUNCTION 143b8b080 FUN_143b8b080 body=176 status=ok
// SIG undefined FUN_143b8b080(void)

longlong FUN_143b8b080(undefined4 param_1,undefined1 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x18);
    if (lVar2 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143b89860(lVar2);
    }
    if (local_28 == 0) {
      *param_3 = 7;
      local_28 = 0;
    }
    else {
      *(undefined4 *)(local_28 + 0x10) = param_1;
      *(undefined1 *)(local_28 + 0x14) = param_2;
    }
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143b8b130 FUN_143b8b130 body=141 status=ok
// SIG undefined FUN_143b8b130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b8b130(undefined8 param_1,int param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    local_50 = FUN_143a8dad0(local_38,L"Etc/GMT");
    local_48 = local_50;
    local_58 = FUN_143b4ae60(local_50);
    FUN_143a8dc60(local_38);
  }
  else {
    local_58 = FUN_143b96270(param_2);
  }
  return local_58;
}



// FUNCTION 143b8b1c0 FUN_143b8b1c0 body=609 status=ok
// SIG undefined FUN_143b8b1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b8b1c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_158 [32];
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_e8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_143a90e90(param_2);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_138 = FUN_143b19dc0(param_1,&DAT_145d14358,2,0);
    if (local_138 < 0) {
      *param_3 = 1;
    }
    else {
      FUN_143a8ac30(local_e0);
      local_110 = FUN_143a90ff0(param_1,local_68,0,local_138);
      local_100 = local_110;
      local_134 = FUN_143b0c690(local_110,0x48);
      FUN_143a8dc60(local_68);
      if (-1 < local_134) {
        local_118 = FUN_143a90ff0(param_1,local_b8,local_134 + 1,local_138 - (local_134 + 1));
        local_f0 = local_118;
        FUN_143a8dcd0(local_e0,local_118);
        FUN_143a8dc60(local_b8);
      }
      local_108 = FUN_143a90ff0(param_1,local_90,0,local_138 + 2);
      local_f8 = local_108;
      FUN_143a8dcd0(param_2,local_108);
      FUN_143a8dc60(local_90);
      FUN_143a8e070(param_2,local_e0);
      FUN_143b17350(param_2,&DAT_145d14360,0xffffffff);
      local_130 = FUN_143a90ff0(param_1,local_40,local_138 + 2,0x7fffffff);
      local_128 = local_130;
      FUN_143a8e070(param_2,local_130);
      FUN_143a8dc60(local_40);
      local_120 = param_2;
      FUN_143a8dc60(local_e0);
      param_2 = local_120;
    }
  }
  return param_2;
}



// FUNCTION 143b8b430 FUN_143b8b430 body=530 status=ok
// SIG undefined FUN_143b8b430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b8b430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_48 = FUN_143b52670();
    iVar2 = FUN_143b695b0(param_2);
    if (iVar2 == 6) {
      local_50 = FUN_143b694f0(param_2);
      local_78._0_4_ = 0;
      local_68 = (longlong *)
                 _guard_xfg_dispatch_icall_nop
                           (local_50,0,&icu_53::UObject::RTTI_Type_Descriptor,
                            &icu_53::TimeZone::RTTI_Type_Descriptor);
      if (local_68 == (longlong *)0x0) {
        local_78 = (int *)((ulonglong)local_78._4_4_ << 0x20);
        local_60 = _guard_xfg_dispatch_icall_nop
                             (local_50,0,&icu_53::UObject::RTTI_Type_Descriptor,
                              &icu_53::Calendar::RTTI_Type_Descriptor);
        if (local_60 != 0) {
          local_68 = (longlong *)FUN_143b528b0(local_60);
          local_48 = FUN_143b52810(local_60,param_5);
        }
      }
      if (local_68 != (longlong *)0x0) {
        local_70 = param_5;
        local_78 = &local_54;
        (**(code **)(*local_68 + 0x18))(local_68,local_48,0,&local_58);
        FUN_143a8ac30(local_38);
        FUN_143b8c6c0(param_1,local_58 + local_54,local_38,param_5);
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          FUN_143a8e070(param_3,local_38);
          iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_4);
          if (iVar2 == 0x11) {
            FUN_143b44cd0(param_4,0);
            uVar3 = FUN_143a904f0(local_38);
            FUN_143b76e30(param_4,uVar3);
          }
        }
        FUN_143a8dc60(local_38);
      }
    }
  }
  return param_3;
}



// FUNCTION 143b8b650 FUN_143b8b650 body=1419 status=ok
// SIG undefined FUN_143b8b650(void)

undefined8
FUN_143b8b650(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  uint7 uVar4;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined *local_18;
  
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  bVar1 = false;
  local_24 = param_2;
  switch(param_2) {
  case 0:
    FUN_143b8be20(param_1,param_3,1,param_4,param_5);
    break;
  case 1:
    FUN_143b8be20(param_1,param_3,2,param_4,param_5);
    break;
  case 2:
    FUN_143b8be20(param_1,param_3,4,param_4,param_5);
    break;
  case 3:
    FUN_143b8c740(param_1,param_3,2,4,param_4,param_5,param_6);
    break;
  case 4:
    FUN_143b8c740(param_1,param_3,0x10,0x20,param_4,param_5,param_6);
    break;
  case 0x11:
    FUN_143b86160(param_3,param_5);
    bVar1 = true;
    break;
  case 0x12:
    local_18 = (undefined *)FUN_143b978e0(param_3);
    if (local_18 == (undefined *)0x0) {
      local_18 = &DAT_145d142a0;
    }
    FUN_143ab21b0(param_5,local_18,0xffffffff);
    bVar1 = true;
    break;
  case 0x13:
    FUN_143b8bc70(param_1,param_3,param_5);
    bVar1 = true;
  }
  cVar2 = FUN_143a903a0(param_5);
  if ((cVar2 != '\0') && (!bVar1)) {
    local_34 = 0;
    piVar3 = &local_20;
    (**(code **)(*param_3 + 0x18))(param_3,param_4,0,&local_1c,piVar3,&local_34);
    local_30 = local_1c + local_20;
    cVar2 = FUN_143a8b110(local_34);
    if (cVar2 != '\0') {
      uVar4 = (uint7)((ulonglong)piVar3 >> 8);
      local_2c = param_2;
      switch(param_2) {
      case 0:
      case 1:
      case 3:
      case 5:
        FUN_143b8c6c0(param_1,local_30,param_5,&local_34);
        break;
      case 2:
      case 4:
      case 6:
        FUN_143b8c700(param_1,local_30,param_5,&local_34);
        break;
      case 7:
        FUN_143b8c290(param_1,local_30,1,1,CONCAT71(uVar4,1),param_5,&local_34);
        break;
      case 8:
        FUN_143b8c290(param_1,local_30,0,1,CONCAT71(uVar4,1),param_5,&local_34);
        break;
      case 9:
        FUN_143b8c290(param_1,local_30,1,0,CONCAT71(uVar4,1),param_5,&local_34);
        break;
      case 10:
        FUN_143b8c290(param_1,local_30,0,0,CONCAT71(uVar4,1),param_5,&local_34);
        break;
      case 0xb:
        FUN_143b8c290(param_1,local_30,1,0,(ulonglong)uVar4 << 8,param_5,&local_34);
        break;
      case 0xc:
        FUN_143b8c290(param_1,local_30,0,0,(ulonglong)uVar4 << 8,param_5,&local_34);
        break;
      case 0xd:
        FUN_143b8c2f0(param_1,local_30,1,0,CONCAT71(uVar4,1),param_5,&local_34);
        break;
      case 0xe:
        FUN_143b8c2f0(param_1,local_30,0,0,CONCAT71(uVar4,1),param_5,&local_34);
        break;
      case 0xf:
        FUN_143b8c2f0(param_1,local_30,1,0,(ulonglong)uVar4 << 8,param_5,&local_34);
        break;
      case 0x10:
        FUN_143b8c2f0(param_1,local_30,0,0,(ulonglong)uVar4 << 8,param_5,&local_34);
      }
      if (param_6 != (undefined4 *)0x0) {
        if (local_20 == 0) {
          local_28 = 1;
        }
        else {
          local_28 = 2;
        }
        *param_6 = local_28;
      }
    }
  }
  return param_5;
}



// FUNCTION 143b8bc70 FUN_143b8bc70 body=423 status=ok
// SIG undefined FUN_143b8bc70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b8bc70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_143a8ac30(local_90);
  local_c8 = FUN_143b96b20(param_2);
  if (local_c8 != 0) {
    local_b0 = FUN_143a8dad0(local_68,local_c8);
    local_a0 = local_b0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x50))
              (*(undefined8 *)(param_1 + 0x2c8),local_b0,local_90);
    FUN_143a8dc60(local_68);
  }
  iVar1 = FUN_143a904f0(local_90);
  if (iVar1 < 1) {
    local_c0 = FUN_143a8dad0(local_40,L"Etc/Unknown");
    local_a8 = local_c0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x50))
              (*(undefined8 *)(param_1 + 0x2c8),local_c0,local_90);
    FUN_143a8dc60(local_40);
    iVar1 = FUN_143a904f0(local_90);
    if (iVar1 < 1) {
      FUN_143ab21b0(param_3,L"Unknown",0xffffffff);
    }
    else {
      FUN_143a8dcd0(param_3,local_90);
    }
  }
  else {
    FUN_143a8dcd0(param_3,local_90);
  }
  local_b8 = param_3;
  FUN_143a8dc60(local_90);
  return local_b8;
}



// FUNCTION 143b8be20 FUN_143b8be20 body=334 status=ok
// SIG undefined FUN_143b8be20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b8be20(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78[0] = 0;
  local_68 = FUN_143b8ca00(param_1,local_78);
  cVar1 = FUN_143a8b0e0(local_78[0]);
  if (cVar1 == '\0') {
    if (param_3 == 1) {
      local_70 = FUN_143b96b20(param_2);
      if (local_70 == 0) {
        FUN_143a90e90(param_5);
      }
      else {
        local_60 = FUN_143a8dad0(local_40,local_70);
        local_50 = local_60;
        local_58 = FUN_143bf5c60(local_68,local_60,param_5);
        FUN_143a8dc60(local_40);
        param_5 = local_58;
      }
    }
    else {
      local_88 = param_5;
      param_5 = FUN_143bf5630(local_68,param_2,param_3,param_4);
    }
  }
  else {
    FUN_143a90e90(param_5);
  }
  return param_5;
}



// FUNCTION 143b8bf70 FUN_143b8bf70 body=790 status=ok
// SIG undefined FUN_143b8bf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b8bf70(undefined8 param_1,int param_2,char param_3,char param_4,char param_5,char param_6,
             undefined8 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  short local_4c;
  undefined2 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int aiStack_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    local_40 = param_2;
    if (param_2 < 0) {
      local_40 = -param_2;
    }
    local_58 = local_40;
    if ((param_4 == '\0') || ((999 < local_40 && ((param_6 == '\0' || (59999 < local_40)))))) {
      local_34 = (uint)(param_5 == '\0');
      local_2c = local_34;
      if (param_6 == '\0') {
        local_38 = 2;
      }
      else {
        local_38 = 1;
      }
      local_30 = local_38;
      if (param_3 == '\0') {
        local_3c = 0x3a;
      }
      else {
        local_3c = 0;
      }
      local_4c = (short)local_3c;
      if (local_40 < DAT_146832ae8) {
        aiStack_28[0] = local_40 / 3600000;
        aiStack_28[1] = (local_40 % 3600000) / 60000;
        local_58 = (local_40 % 3600000) % 60000;
        aiStack_28[2] = local_58 / 1000;
        for (local_54 = local_38; ((int)local_34 < local_54 && (aiStack_28[local_54] == 0));
            local_54 = local_54 + -1) {
        }
        local_48 = 0x2b;
        if (param_2 < 0) {
          for (local_44 = 0; local_44 <= local_54; local_44 = local_44 + 1) {
            if (aiStack_28[local_44] != 0) {
              local_48 = 0x2d;
              break;
            }
          }
        }
        FUN_143b913f0(param_7,local_48);
        for (local_50 = 0; local_50 <= local_54; local_50 = local_50 + 1) {
          if ((local_4c != 0) && (local_50 != 0)) {
            FUN_143acc590(param_7,local_4c);
          }
          FUN_143acc590(param_7,aiStack_28[local_50] / 10 + 0x30U & 0xffff);
          FUN_143acc590(param_7,aiStack_28[local_50] % 10 + 0x30U & 0xffff);
        }
      }
      else {
        FUN_143a90e90(param_7);
        *param_8 = 1;
      }
    }
    else {
      FUN_143b913f0(param_7,0x5a);
    }
  }
  else {
    FUN_143a90e90(param_7);
  }
  return param_7;
}



// FUNCTION 143b8c290 FUN_143b8c290 body=92 status=ok
// SIG undefined FUN_143b8c290(void)

void FUN_143b8c290(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143b8bf70(param_1,param_2,1,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143b8c2f0 FUN_143b8c2f0 body=92 status=ok
// SIG undefined FUN_143b8c2f0(void)

void FUN_143b8c2f0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143b8bf70(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143b8c350 FUN_143b8c350 body=876 status=ok
// SIG undefined FUN_143b8c350(void)

undefined8
FUN_143b8c350(longlong param_1,int param_2,char param_3,undefined8 param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_res10;
  int local_44;
  undefined8 local_38;
  undefined1 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if ((-DAT_146832ae8 < param_2) && (param_2 < DAT_146832ae8)) {
      if (param_2 == 0) {
        FUN_143a8dcd0(param_4,param_1 + 0x418);
      }
      else {
        local_res10 = param_2;
        if (param_2 < 0) {
          local_res10 = -param_2;
        }
        iVar2 = (local_res10 % 3600000) / 60000;
        iVar3 = ((local_res10 % 3600000) % 60000) / 1000;
        if (param_2 < 0) {
          if (iVar3 == 0) {
            if ((iVar2 == 0) && (param_3 != '\0')) {
              local_38 = *(undefined8 *)(param_1 + 0x4c0);
            }
            else {
              local_38 = *(undefined8 *)(param_1 + 0x4a8);
            }
          }
          else {
            local_38 = *(undefined8 *)(param_1 + 0x4b0);
          }
        }
        else if (iVar3 == 0) {
          if ((iVar2 == 0) && (param_3 != '\0')) {
            local_38 = *(undefined8 *)(param_1 + 0x4b8);
          }
          else {
            local_38 = *(undefined8 *)(param_1 + 0x498);
          }
        }
        else {
          local_38 = *(undefined8 *)(param_1 + 0x4a0);
        }
        FUN_143a8dcd0(param_4,param_1 + 0x448);
        for (local_44 = 0;
            iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_38), local_44 < iVar4; local_44 = local_44 + 1) {
          uVar5 = FUN_143b09610(local_38,local_44);
          iVar4 = FUN_143a91e00(uVar5);
          if (iVar4 == 0) {
            uVar5 = FUN_143ac0690(uVar5);
            FUN_143b17350(param_4,uVar5,0xffffffff);
          }
          else if (iVar4 == 1) {
            if (param_3 == '\0') {
              local_28 = 2;
            }
            else {
              local_28 = 1;
            }
            FUN_143b8abc0(param_1,param_4,local_res10 / 3600000,local_28);
          }
          else if (iVar4 == 2) {
            FUN_143b8abc0(param_1,param_4,iVar2,2);
          }
          else if (iVar4 == 4) {
            FUN_143b8abc0(param_1,param_4,iVar3,2);
          }
        }
        FUN_143a8e070(param_4,param_1 + 0x470);
      }
    }
    else {
      FUN_143a90e90(param_4);
      *param_5 = 1;
    }
  }
  else {
    FUN_143a90e90(param_4);
  }
  return param_4;
}



// FUNCTION 143b8c6c0 FUN_143b8c6c0 body=60 status=ok
// SIG undefined FUN_143b8c6c0(void)

void FUN_143b8c6c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b8c350(param_1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 143b8c700 FUN_143b8c700 body=60 status=ok
// SIG undefined FUN_143b8c700(void)

void FUN_143b8c700(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b8c350(param_1,param_2,1,param_3,param_4);
  return;
}



// FUNCTION 143b8c740 FUN_143b8c740 body=559 status=ok
// SIG undefined FUN_143b8c740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b8c740(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    FUN_143a90e90(param_6);
  }
  else {
    local_a4 = 0;
    local_a8 = (**(code **)(*param_2 + 0x48))(param_2,param_5,&local_a4);
    local_98 = FUN_143b96b20(param_2);
    cVar1 = FUN_143a8b0e0(local_a4);
    if ((cVar1 == '\0') && (local_98 != 0)) {
      if (local_a8 == '\0') {
        local_88 = FUN_143a8dad0(local_40,local_98);
        local_b8 = param_6;
        local_80 = local_88;
        (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x58))
                  (*(undefined8 *)(param_1 + 0x2c8),local_88,param_3,param_5);
        FUN_143a8dc60(local_40);
      }
      else {
        local_90 = FUN_143a8dad0(local_68,local_98);
        local_b8 = param_6;
        local_78 = local_90;
        (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x58))
                  (*(undefined8 *)(param_1 + 0x2c8),local_90,param_4,param_5);
        FUN_143a8dc60(local_68);
      }
      if ((param_7 != (undefined4 *)0x0) && (cVar1 = FUN_143a903a0(param_6), cVar1 == '\0')) {
        if (local_a8 == '\0') {
          local_a0 = 1;
        }
        else {
          local_a0 = 2;
        }
        *param_7 = local_a0;
      }
    }
    else {
      FUN_143a90e90(param_6);
    }
  }
  return param_6;
}



// FUNCTION 143b8c970 FUN_143b8c970 body=17 status=ok
// SIG undefined FUN_143b8c970(void)

undefined4 FUN_143b8c970(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x440);
}



// FUNCTION 143b8c990 FUN_143b8c990 body=19 status=ok
// SIG undefined FUN_143b8c990(void)

void FUN_143b8c990(void)

{
  FUN_143b8c9b0();
  return;
}



// FUNCTION 143b8c9b0 FUN_143b8c9b0 body=8 status=ok
// SIG undefined FUN_143b8c9b0(void)

undefined * FUN_143b8c9b0(void)

{
  return &DAT_146bc8280;
}



// FUNCTION 143b8c9c0 FUN_143b8c9c0 body=62 status=ok
// SIG undefined FUN_143b8c9c0(void)

undefined8 FUN_143b8c9c0(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
LAB_143b8c9e9:
    uVar1 = 1;
  }
  else {
    if (param_1 != 4) {
      if (param_1 == 0x10) goto LAB_143b8c9e9;
      if (param_1 != 0x20) {
        return 0;
      }
    }
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 143b8ca00 FUN_143b8ca00 body=139 status=ok
// SIG undefined FUN_143b8ca00(void)

undefined8 FUN_143b8ca00(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8250);
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      uVar2 = FUN_143bf3a80(param_1 + 0x148,param_2);
      *(undefined8 *)(param_1 + 0x2d0) = uVar2;
    }
    FUN_143ab2470(&DAT_146bc8250);
    uVar2 = *(undefined8 *)(param_1 + 0x2d0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b8ca90 FUN_143b8ca90 body=256 status=ok
// SIG undefined FUN_143b8ca90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b8ca90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FUN_143b89510(param_2,param_3,param_4);
  if (cVar1 == '\0') {
    FUN_143a8ac30(local_40);
    cVar1 = FUN_143b893c0(param_2,param_3,local_40);
    if (cVar1 != '\0') {
      local_50 = *(undefined8 *)(param_1 + 0x2c8);
      local_58 = **(longlong **)(param_1 + 0x2c8);
      (**(code **)(local_58 + 0x38))(local_50,local_40,param_1 + 0x2c0,param_4);
    }
    FUN_143a8dc60(local_40);
  }
  return param_4;
}



// FUNCTION 143b8cb90 FUN_143b8cb90 body=59 status=ok
// SIG undefined FUN_143b8cb90(void)

undefined8 FUN_143b8cb90(short param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0x48) {
    uVar1 = 1;
  }
  else if (param_1 == 0x6d) {
    uVar1 = 2;
  }
  else if (param_1 == 0x73) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143b8cbd0 FUN_143b8cbd0 body=58 status=ok
// SIG undefined FUN_143b8cbd0(void)

undefined8 FUN_143b8cbd0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_1 + 0xe) == '\0') {
    uVar1 = *param_1;
  }
  else {
    uVar1 = FUN_143b09610(*param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 143b8cc10 FUN_143b8cc10 body=135 status=ok
// SIG undefined FUN_143b8cc10(void)

undefined8 FUN_143b8cc10(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b8cca0(param_3);
    if (cVar1 != '\0') {
      lVar3 = FUN_143b8cbd0(param_3,0);
      if ((lVar3 != 0) && (*(int *)(param_1 + 8) < param_2)) {
        *(longlong *)(param_1 + 0x10) = lVar3;
        *(int *)(param_1 + 8) = param_2;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b8cca0 FUN_143b8cca0 body=39 status=ok
// SIG undefined FUN_143b8cca0(void)

bool FUN_143b8cca0(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 143b8ccd0 FUN_143b8ccd0 body=283 status=ok
// SIG undefined FUN_143b8ccd0(void)

void FUN_143b8ccd0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_18;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    switch(local_18) {
    case 0:
    case 2:
      uVar1 = FUN_143b90980(param_1 + 0x300 + (longlong)local_18 * 0x28,1,param_2);
      *(undefined8 *)(param_1 + 0x498 + (longlong)local_18 * 8) = uVar1;
      break;
    case 1:
    case 3:
      uVar1 = FUN_143b90980(param_1 + 0x300 + (longlong)local_18 * 0x28,2,param_2);
      *(undefined8 *)(param_1 + 0x498 + (longlong)local_18 * 8) = uVar1;
      break;
    case 4:
    case 5:
      uVar1 = FUN_143b90980(param_1 + 0x300 + (longlong)local_18 * 0x28,0,param_2);
      *(undefined8 *)(param_1 + 0x498 + (longlong)local_18 * 8) = uVar1;
    }
  }
  FUN_143b8acf0(param_1);
  return;
}



// FUNCTION 143b8ce10 FUN_143b8ce10 body=381 status=ok
// SIG undefined FUN_143b8ce10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b8ce10(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_a8 = FUN_143b19dc0(param_2,&DAT_145d14350,3,0);
    if (local_a8 < 0) {
      *param_3 = 1;
    }
    else {
      FUN_143a8dcd0(param_1 + 0x2d8,param_2);
      local_80 = param_1 + 0x448;
      local_88 = FUN_143a90ff0(param_2,local_68,0,local_a8);
      local_78 = local_88;
      FUN_143b91740(local_88,local_80);
      FUN_143a8dc60(local_68);
      local_98 = param_1 + 0x470;
      local_a0 = FUN_143a90ff0(param_2,local_40,local_a8 + 3,0x7fffffff);
      local_90 = local_a0;
      FUN_143b91740(local_a0,local_98);
      FUN_143a8dc60(local_40);
    }
  }
  return;
}



// FUNCTION 143b8cf90 FUN_143b8cf90 body=381 status=ok
// SIG undefined FUN_143b8cf90(void)

void FUN_143b8cf90(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_40;
  
  FUN_143b68380(10,FUN_143b91840);
  plVar2 = (longlong *)FUN_143b4aec0(1,0,0,param_1);
  cVar1 = FUN_143a8b110(*param_1);
  if (cVar1 != '\0') {
    lVar3 = FUN_143a8d310(0x38);
    if (lVar3 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_143bef8e0(lVar3,1,0);
    }
    DAT_146bc8240 = local_40;
    if (local_40 == 0) {
      *param_1 = 7;
    }
    else {
      while (lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1), lVar3 != 0) {
        lVar4 = FUN_143b968e0(lVar3);
        lVar3 = FUN_143b97950(lVar3);
        if ((lVar3 != 0) && (lVar4 != 0)) {
          FUN_143bf2c60(DAT_146bc8240,lVar3,lVar4,param_1);
        }
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return;
}



// FUNCTION 143b8d110 FUN_143b8d110 body=311 status=ok
// SIG undefined FUN_143b8d110(void)

void FUN_143b8d110(undefined4 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_40;
  
  FUN_143b68380(10,FUN_143b91840);
  lVar1 = FUN_143a8d310(0x38);
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_143bef8e0(lVar1,1,0);
  }
  DAT_146bc8230 = local_40;
  if (local_40 == 0) {
    *param_1 = 7;
  }
  else {
    plVar2 = (longlong *)FUN_143b4ac60();
    while (lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1), lVar1 != 0) {
      lVar1 = FUN_143b968e0(lVar1);
      if (lVar1 != 0) {
        FUN_143bf2c60(DAT_146bc8230,lVar1,lVar1,param_1);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
  }
  return;
}



// FUNCTION 143b8d250 FUN_143b8d250 body=128 status=ok
// SIG undefined FUN_143b8d250(void)

bool FUN_143b8d250(int param_1,int param_2)

{
  bool local_18;
  
  if (param_1 == 1) {
    if ((param_2 == 1) || (param_2 == 2)) {
      local_18 = true;
    }
    else {
      local_18 = false;
    }
  }
  else if ((param_1 == 2) || (param_1 == 4)) {
    local_18 = param_2 == 2;
  }
  else {
    local_18 = 0 < param_2;
  }
  return local_18;
}



// FUNCTION 143b8d2d0 FUN_143b8d2d0 body=93 status=ok
// SIG undefined FUN_143b8d2d0(void)

void FUN_143b8d2d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_res20 [2];
  
  local_res20[0] = param_4;
  FUN_143a906b0(param_1,local_res20);
  iVar1 = FUN_143a904f0(param_1);
  FUN_143a90400(param_1,param_2,0,param_3,local_res20[0],iVar1 - local_res20[0]);
  return;
}



// FUNCTION 143b8d330 FUN_143b8d330 body=76 status=ok
// SIG undefined FUN_143b8d330(void)

void FUN_143b8d330(undefined8 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_143a906b0(param_1,local_res18);
  iVar1 = FUN_143a904f0(param_1);
  FUN_143a8ef80(param_1,param_2,local_res18[0],iVar1 - local_res18[0]);
  return;
}



// FUNCTION 143b8d380 FUN_143b8d380 body=92 status=ok
// SIG undefined FUN_143b8d380(void)

void FUN_143b8d380(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b8c970(param_1);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 143b8d3e0 FUN_143b8d3e0 body=5619 status=ok
// SIG undefined FUN_143b8d3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b8d3e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1f8 [32];
  char *local_1d8;
  undefined4 *local_1d0;
  undefined4 *local_1c8;
  int local_1b8;
  int local_1b4;
  undefined1 local_1b0 [16];
  undefined4 local_1a0;
  uint local_19c;
  undefined4 local_198;
  char local_194;
  char local_193;
  char local_192;
  char local_191;
  char local_190;
  char local_18f;
  int local_18c;
  char local_188;
  char local_187 [3];
  undefined4 local_184;
  undefined4 local_180;
  char local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  undefined4 local_168;
  undefined1 local_160 [8];
  int local_158;
  undefined1 local_150 [8];
  undefined4 local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  local_1b8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_4);
  local_18c = FUN_143a904f0(param_3);
  if (((param_2 == 3) || (param_2 == 1)) || (param_2 == 0)) {
    local_18f = '\x01';
  }
  else {
    local_18f = '\0';
  }
  local_17c = local_18f;
  if ((param_2 == 4) || (param_2 == 2)) {
    local_191 = '\x01';
  }
  else {
    local_191 = '\0';
  }
  local_188 = local_191;
  local_19c = 0;
  FUN_143b16ce0(local_1b0,local_1b8);
  local_184 = 0x7fffffff;
  local_1b4 = -1;
  if ((local_17c != '\0') || (local_188 != '\0')) {
    local_193 = '\0';
    local_1d8 = &local_193;
    local_1a0 = FUN_143b90570(param_1,param_3,local_1b0,local_188);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      if ((iVar2 == local_18c) || (local_193 != '\0')) {
        uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        FUN_143b0fce0(param_4,uVar3);
        local_c8 = FUN_143b8b130(param_1,local_1a0);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
        return local_c8;
      }
      local_184 = local_1a0;
      local_1b4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_1b0);
    }
    local_19c = local_19c | 0x60;
  }
  local_198 = 0;
  FUN_143a8ac30(local_68);
  local_12c = param_2;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    local_168 = 0;
    if (param_2 == 0) {
      local_168 = 1;
    }
    else if (param_2 == 1) {
      local_168 = 3;
    }
    else if (param_2 == 2) {
      local_168 = 5;
    }
    local_140 = 0;
    local_134 = 0;
    local_144 = param_2;
    local_e8 = FUN_143b8ca00(param_1,&local_198);
    cVar1 = FUN_143a8b110(local_198);
    if (cVar1 != '\0') {
      local_1c8 = &local_198;
      local_1d0 = &local_134;
      local_1d8 = local_68;
      local_140 = FUN_143bf4400(local_e8,param_3,local_1b8,local_168);
    }
    cVar1 = FUN_143a8b0e0(local_198);
    if (cVar1 != '\0') {
      FUN_143b44cd0(param_4,local_1b8);
      local_90 = 0;
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_90;
    }
    if (0 < local_140) {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_134;
      }
      FUN_143b0fce0(param_4,local_1b8 + local_140);
      local_d8 = FUN_143b4ae60(local_68);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_d8;
    }
    break;
  case 3:
  case 4:
    if (param_2 == 3) {
      local_148 = 6;
    }
    else {
      local_148 = 0x30;
    }
    local_1d8 = (char *)&local_198;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x60))
                      (*(undefined8 *)(param_1 + 0x2c8),param_3,local_1b8,local_148);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_160,uVar4)
    ;
    cVar1 = FUN_143a8b0e0(local_198);
    if (cVar1 != '\0') {
      FUN_143b44cd0(param_4,local_1b8);
      local_f8 = 0;
      FUN_143b36bb0(local_160);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_f8;
    }
    cVar1 = FUN_143b1fd90(local_160);
    if (cVar1 == '\0') {
      local_170 = -1;
      local_16c = -1;
      local_174 = 0;
      while( true ) {
        uVar4 = FUN_143a8b510(local_160);
        iVar2 = FUN_143b896b0(uVar4);
        if (iVar2 <= local_174) break;
        uVar4 = FUN_143a8b510(local_160);
        local_16c = FUN_143b892e0(uVar4,local_174);
        local_16c = local_1b8 + local_16c;
        if (local_1b4 < local_16c) {
          local_170 = local_174;
          local_1b4 = local_16c;
        }
        local_174 = local_174 + 1;
      }
      if (-1 < local_170) {
        if (param_6 != (undefined4 *)0x0) {
          uVar4 = FUN_143a8b510(local_160);
          uVar3 = FUN_143b89430(uVar4,local_170);
          uVar3 = FUN_143b8c9c0(uVar3);
          *param_6 = uVar3;
        }
        FUN_143b0fce0(param_4,local_16c);
        uVar4 = FUN_143a8b510(local_160);
        FUN_143b8ca90(param_1,uVar4,local_170,local_68);
        local_a8 = FUN_143b4ae60(local_68);
        FUN_143b36bb0(local_160);
        FUN_143a8dc60(local_68);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
        return local_a8;
      }
    }
    FUN_143b36bb0(local_160);
    break;
  case 5:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    local_1a0 = FUN_143b907c0(param_1,param_3,local_1b0);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_80 = FUN_143b8b130(param_1,local_1a0);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_80;
    }
    local_19c = local_19c | 0x40;
    break;
  case 6:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    local_1a0 = FUN_143b90f80(param_1,param_3,local_1b0);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_b8 = FUN_143b8b130(param_1,local_1a0);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_b8;
    }
    local_19c = local_19c | 0x20;
    break;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    local_1a0 = FUN_143b90530(param_1,param_3,local_1b0);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_108 = FUN_143b8b130(param_1,local_1a0);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_108;
    }
    break;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    local_192 = '\0';
    local_1d8 = &local_192;
    local_1a0 = FUN_143b902a0(param_1,param_3,local_1b0,0);
    iVar2 = FUN_143a93e60(local_1b0);
    if ((iVar2 == -1) && (local_192 != '\0')) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_78 = FUN_143b8b130(param_1,local_1a0);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_78;
    }
    break;
  case 0x11:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    FUN_143b91260(param_1,param_3,local_1b0,local_68);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_98 = FUN_143b4ae60(local_68);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_98;
    }
    break;
  case 0x12:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    FUN_143b90fc0(param_1,param_3,local_1b0,local_68);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_120 = FUN_143b4ae60(local_68);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_120;
    }
    break;
  case 0x13:
    FUN_143b0fce0(local_1b0,local_1b8);
    FUN_143b44cd0(local_1b0,0xffffffff);
    FUN_143b8f720(param_1,param_3,local_1b0,local_68);
    iVar2 = FUN_143a93e60(local_1b0);
    if (iVar2 == -1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1b0);
      FUN_143b0fce0(param_4,uVar3);
      local_88 = FUN_143b4ae60(local_68);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      return local_88;
    }
  }
  local_19c = local_19c | (int)*(short *)(&DAT_145d14210 + (longlong)param_2 * 2);
  if (local_1b8 < local_1b4) {
    FUN_143b0fce0(param_4,local_1b4);
    local_118 = FUN_143b8b130(param_1,local_184);
    FUN_143a8dc60(local_68);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
  }
  else {
    FUN_143a8ac30(local_40);
    local_180 = 0;
    if ((local_1b4 < local_18c) && (((local_19c & 0x80) == 0 || ((local_19c & 0x100) == 0)))) {
      FUN_143b0fce0(local_1b0,local_1b8);
      FUN_143b44cd0(local_1b0,0xffffffff);
      local_190 = '\0';
      local_1d8 = &local_190;
      local_1a0 = FUN_143b902a0(param_1,param_3,local_1b0,0);
      iVar2 = FUN_143a93e60(local_1b0);
      if (iVar2 == -1) {
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        if ((iVar2 == local_18c) || (local_190 != '\0')) {
          uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_1b0);
          FUN_143b0fce0(param_4,uVar3);
          local_110 = FUN_143b8b130(param_1,local_1a0);
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
          return local_110;
        }
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        if (local_1b4 < iVar2) {
          local_184 = local_1a0;
          FUN_143a90e90(local_40);
          local_180 = 0;
          local_1b4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_1b0);
        }
      }
    }
    if ((local_1b4 < local_18c) && ((local_19c & 0x20) == 0)) {
      FUN_143b0fce0(local_1b0,local_1b8);
      FUN_143b44cd0(local_1b0,0xffffffff);
      local_187[0] = '\0';
      local_1d8 = local_187;
      local_1a0 = FUN_143b90570(param_1,param_3,local_1b0,0);
      iVar2 = FUN_143a93e60(local_1b0);
      if (iVar2 == -1) {
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        if ((iVar2 == local_18c) || (local_187[0] != '\0')) {
          uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_1b0);
          FUN_143b0fce0(param_4,uVar3);
          local_100 = FUN_143b8b130(param_1,local_1a0);
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
          return local_100;
        }
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        if (local_1b4 < iVar2) {
          local_184 = local_1a0;
          FUN_143a90e90(local_40);
          local_180 = 0;
          local_1b4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_1b0);
        }
      }
    }
    if ((local_1b4 < local_18c) && ((local_19c & 0x40) == 0)) {
      FUN_143b0fce0(local_1b0,local_1b8);
      FUN_143b44cd0(local_1b0,0xffffffff);
      local_194 = '\0';
      local_1d8 = &local_194;
      local_1a0 = FUN_143b90570(param_1,param_3,local_1b0,1);
      iVar2 = FUN_143a93e60(local_1b0);
      if (iVar2 == -1) {
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        if ((iVar2 == local_18c) || (local_194 != '\0')) {
          uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_1b0);
          FUN_143b0fce0(param_4,uVar3);
          local_f0 = FUN_143b8b130(param_1,local_1a0);
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
          return local_f0;
        }
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1b0);
        if (local_1b4 < iVar2) {
          local_184 = local_1a0;
          FUN_143a90e90(local_40);
          local_180 = 0;
          local_1b4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_1b0);
        }
      }
    }
    if ((param_5 & 1) != 0) {
      if (local_1b4 < local_18c) {
        local_1d8 = (char *)&local_198;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x60))
                          (*(undefined8 *)(param_1 + 0x2c8),param_3,local_1b8,0x76);
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                  (local_150,uVar4);
        cVar1 = FUN_143a8b0e0(local_198);
        if (cVar1 != '\0') {
          FUN_143b44cd0(param_4,local_1b8);
          local_e0 = 0;
          FUN_143b36bb0(local_150);
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
          return local_e0;
        }
        local_138 = -1;
        local_158 = -1;
        cVar1 = FUN_143b1fd90(local_150);
        if (cVar1 == '\0') {
          local_178 = 0;
          while( true ) {
            uVar4 = FUN_143a8b510(local_150);
            iVar2 = FUN_143b896b0(uVar4);
            if (iVar2 <= local_178) break;
            uVar4 = FUN_143a8b510(local_150);
            iVar2 = FUN_143b892e0(uVar4,local_178);
            if (local_158 < local_1b8 + iVar2) {
              local_138 = local_178;
              uVar4 = FUN_143a8b510(local_150);
              local_158 = FUN_143b892e0(uVar4,local_178);
              local_158 = local_1b8 + local_158;
            }
            local_178 = local_178 + 1;
          }
        }
        if (local_1b4 < local_158) {
          local_1b4 = local_158;
          uVar4 = FUN_143a8b510(local_150);
          FUN_143b8ca90(param_1,uVar4,local_138,local_40);
          uVar4 = FUN_143a8b510(local_150);
          uVar3 = FUN_143b89430(uVar4,local_138);
          local_180 = FUN_143b8c9c0(uVar3);
          local_184 = 0x7fffffff;
        }
        FUN_143b36bb0(local_150);
      }
      if (local_1b4 < local_18c) {
        local_13c = -1;
        local_130 = 0;
        local_d0 = FUN_143b8ca00(param_1,&local_198);
        cVar1 = FUN_143a8b110(local_198);
        if (cVar1 != '\0') {
          local_1c8 = &local_198;
          local_1d0 = &local_130;
          local_1d8 = local_68;
          local_13c = FUN_143bf4400(local_d0,param_3,local_1b8,7);
        }
        cVar1 = FUN_143a8b0e0(local_198);
        if (cVar1 != '\0') {
          FUN_143b44cd0(param_4,local_1b8);
          local_c0 = 0;
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
          return local_c0;
        }
        if (local_1b4 < local_1b8 + local_13c) {
          local_1b4 = local_1b8 + local_13c;
          FUN_143a8dcd0(local_40,local_68);
          local_180 = local_130;
          local_184 = 0x7fffffff;
        }
      }
      if ((local_1b4 < local_18c) && ((local_19c & 0x200) == 0)) {
        FUN_143b0fce0(local_1b0,local_1b8);
        FUN_143b44cd0(local_1b0,0xffffffff);
        FUN_143b91260(param_1,param_3,local_1b0,local_68);
        iVar2 = FUN_143a93e60(local_1b0);
        if ((iVar2 == -1) &&
           (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_1b0), local_1b4 < iVar2)) {
          local_1b4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_1b0);
          FUN_143a8dcd0(local_40,local_68);
          local_180 = 0;
          local_184 = 0x7fffffff;
        }
      }
      if ((local_1b4 < local_18c) && ((local_19c & 0x200) == 0)) {
        FUN_143b0fce0(local_1b0,local_1b8);
        FUN_143b44cd0(local_1b0,0xffffffff);
        FUN_143b90fc0(param_1,param_3,local_1b0,local_68);
        iVar2 = FUN_143a93e60(local_1b0);
        if ((iVar2 == -1) &&
           (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_1b0), local_1b4 < iVar2)) {
          local_1b4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_1b0);
          FUN_143a8dcd0(local_40,local_68);
          local_180 = 0;
          local_184 = 0x7fffffff;
        }
      }
    }
    if (local_1b8 < local_1b4) {
      iVar2 = FUN_143a904f0(local_40);
      if (iVar2 < 1) {
        local_128 = FUN_143b8b130(param_1,local_184);
      }
      else {
        local_128 = FUN_143b4ae60(local_40);
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_180;
      }
      FUN_143b0fce0(param_4,local_1b4);
      local_b0 = local_128;
      FUN_143a8dc60(local_40);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      local_118 = local_b0;
    }
    else {
      FUN_143b44cd0(param_4,local_1b8);
      local_a0 = 0;
      FUN_143a8dc60(local_40);
      FUN_143a8dc60(local_68);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b0);
      local_118 = local_a0;
    }
  }
  return local_118;
}



// FUNCTION 143b8ea40 FUN_143b8ea40 body=1028 status=ok
// SIG undefined FUN_143b8ea40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b8ea40(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_88 [32];
  uint local_68;
  char local_64;
  int local_60;
  int local_5c;
  ushort local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_28 [4];
  int iStack_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_4c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_2);
  local_38 = (uint)(param_5 == '\0');
  local_40 = (param_3 * 2 + 2) - local_38;
  local_30 = param_4 * 2 + 2;
  piVar3 = local_28;
  for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((longlong)piVar3 + 1);
  }
  local_68 = 0;
  local_48 = local_4c;
  while (((int)local_68 < local_30 && (iVar1 = FUN_143a904f0(param_1), local_4c < iVar1))) {
    local_58 = FUN_143a8e4f0(param_1,local_4c);
    if ((local_58 < 0x30) || (0x39 < local_58)) {
      local_34 = -1;
    }
    else {
      local_34 = local_58 - 0x30;
    }
    local_44 = local_34;
    if (local_34 < 0) break;
    local_28[(int)local_68] = local_34;
    local_68 = local_68 + 1;
    local_4c = local_4c + 1;
  }
  if ((param_5 != '\0') && ((local_68 & 1) != 0)) {
    local_68 = local_68 - 1;
  }
  if ((int)local_68 < local_40) {
    FUN_143b44cd0(param_2,local_48);
    iVar1 = 0;
  }
  else {
    local_64 = '\0';
    while( true ) {
      local_5c = 0;
      local_60 = 0;
      local_54 = 0;
      if ((int)local_68 < local_40) break;
      local_50 = local_68 - 1;
      switch(local_50) {
      case 0:
        local_60 = local_28[0];
        break;
      case 1:
        local_60 = local_28[0] * 10 + local_28[1];
        break;
      case 2:
        local_60 = local_28[0];
        local_5c = local_28[1] * 10 + local_28[2];
        break;
      case 3:
        local_60 = local_28[0] * 10 + local_28[1];
        local_5c = local_28[2] * 10 + local_28[3];
        break;
      case 4:
        local_60 = local_28[0];
        local_5c = local_28[1] * 10 + local_28[2];
        local_54 = local_28[3] * 10 + iStack_18;
        break;
      case 5:
        local_60 = local_28[0] * 10 + local_28[1];
        local_5c = local_28[2] * 10 + local_28[3];
        local_54 = iStack_18 * 10 + iStack_14;
      }
      if (((local_60 < 0x18) && (local_5c < 0x3c)) && (local_54 < 0x3c)) {
        local_64 = '\x01';
        break;
      }
      if (param_5 == '\0') {
        local_3c = 1;
      }
      else {
        local_3c = 2;
      }
      local_68 = local_68 - local_3c;
    }
    if (local_64 == '\0') {
      FUN_143b44cd0(param_2,local_48);
      iVar1 = 0;
    }
    else {
      FUN_143b0fce0(param_2,local_48 + local_68);
      iVar1 = ((local_60 * 0x3c + local_5c) * 0x3c + local_54) * 1000;
    }
  }
  return iVar1;
}



// FUNCTION 143b8ee60 FUN_143b8ee60 body=795 status=ok
// SIG undefined FUN_143b8ee60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b8ee60(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  int local_4c [3];
  int aiStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_4c[0] = 0;
  local_68 = 0;
  local_54 = param_3;
  for (local_60 = 0; local_60 < 6; local_60 = local_60 + 1) {
    iVar1 = FUN_143b91150(param_1,param_2,local_54,local_4c);
    aiStack_40[local_60] = iVar1;
    if (aiStack_40[local_60] < 0) break;
    local_54 = local_54 + local_4c[0];
    aiStack_28[local_60] = local_54 - param_3;
    local_68 = local_68 + 1;
  }
  if (local_68 == 0) {
    *param_4 = 0;
  }
  else {
    for (; 0 < local_68; local_68 = local_68 + -1) {
      local_64 = 0;
      local_5c = 0;
      local_50 = 0;
      switch(local_68) {
      case 1:
        local_64 = aiStack_40[0];
        break;
      case 2:
        local_64 = aiStack_40[0] * 10 + aiStack_40[1];
        break;
      case 3:
        local_64 = aiStack_40[0];
        local_5c = aiStack_40[1] * 10 + aiStack_40[2];
        break;
      case 4:
        local_64 = aiStack_40[0] * 10 + aiStack_40[1];
        local_5c = aiStack_40[2] * 10 + aiStack_40[3];
        break;
      case 5:
        local_64 = aiStack_40[0];
        local_5c = aiStack_40[1] * 10 + aiStack_40[2];
        local_50 = aiStack_40[3] * 10 + iStack_30;
        break;
      case 6:
        local_64 = aiStack_40[0] * 10 + aiStack_40[1];
        local_5c = aiStack_40[2] * 10 + aiStack_40[3];
        local_50 = iStack_30 * 10 + iStack_2c;
      }
      if (((local_64 < 0x18) && (local_5c < 0x3c)) && (local_50 < 0x3c)) {
        *param_4 = aiStack_28[local_68 + -1];
        return local_64 * 3600000 + local_5c * 60000 + local_50 * 1000;
      }
    }
  }
  return 0;
}



// FUNCTION 143b8f1a0 FUN_143b8f1a0 body=870 status=ok
// SIG undefined FUN_143b8f1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b8f1a0(undefined8 param_1,undefined8 param_2,ushort param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 auStack_78 [32];
  int local_58;
  ushort local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30 [4];
  int local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_44 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_2);
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_30[0] = 0;
  local_30[1] = -1;
  local_30[2] = -1;
  local_58 = 0;
  local_40 = local_44;
  do {
    iVar1 = FUN_143a904f0(param_1);
    if ((iVar1 <= local_44) || (param_5 < local_58)) goto LAB_143b8f349;
    local_54 = FUN_143a8e4f0(param_1,local_44);
    if (local_54 == param_3) {
      if (local_58 == 0) {
        if (local_30[0] == 0) goto LAB_143b8f349;
      }
      else {
        if (local_30[local_58] != -1) goto LAB_143b8f349;
        local_30[local_58] = 0;
      }
    }
    else {
      if (local_30[local_58] == -1) {
LAB_143b8f349:
        local_4c = 0;
        local_50 = 0;
        local_48 = -1;
        if (local_30[0] != 0) {
          if (local_20[0] < 0x18) {
            local_4c = local_20[0] * 3600000;
            local_50 = local_30[0];
            local_48 = 0;
            if ((local_30[1] == 2) && (local_20[1] < 0x3c)) {
              local_4c = local_4c + local_20[1] * 60000;
              local_50 = local_30[0] + 3;
              local_48 = 1;
              if ((local_30[2] == 2) && (local_20[2] < 0x3c)) {
                local_4c = local_4c + local_20[2] * 1000;
                local_50 = local_30[0] + 6;
                local_48 = 2;
              }
            }
          }
          else {
            local_4c = (local_20[0] / 10) * 3600000;
            local_48 = 0;
            local_50 = 1;
          }
        }
        if (local_48 < param_4) {
          FUN_143b44cd0(param_2,local_40);
          local_4c = 0;
        }
        else {
          FUN_143b0fce0(param_2,local_40 + local_50);
        }
        return local_4c;
      }
      if ((local_54 < 0x30) || (0x39 < local_54)) {
        local_38 = -1;
      }
      else {
        local_38 = local_54 - 0x30;
      }
      local_3c = local_38;
      if (local_38 < 0) goto LAB_143b8f349;
      local_20[local_58] = local_20[local_58] * 10 + local_38;
      local_30[local_58] = local_30[local_58] + 1;
      if (1 < local_30[local_58]) {
        local_58 = local_58 + 1;
      }
    }
    local_44 = local_44 + 1;
  } while( true );
}



// FUNCTION 143b8f510 FUN_143b8f510 body=528 status=ok
// SIG undefined FUN_143b8f510(void)

int FUN_143b8f510(undefined8 param_1,undefined8 param_2,int param_3,short param_4,int *param_5)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  sVar1 = param_4;
  local_20 = FUN_143a904f0(param_2);
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  *param_5 = 0;
  uVar3 = CONCAT11((char)((ushort)sVar1 >> 8),1);
  local_1c = FUN_143b8fc00(param_1,param_2,param_3,uVar3,2,0,0x17,&local_24);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  local_28 = param_3;
  if (((local_24 != 0) && (local_28 = param_3 + local_24, local_28 + 1 < local_20)) &&
     (sVar1 = FUN_143a8e4f0(param_2,local_28), sVar1 == param_4)) {
    uVar3 = CONCAT11(uVar4,2);
    local_18 = FUN_143b8fc00(param_1,param_2,local_28 + 1,uVar3,2,0,0x3b,&local_24);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
    if (((local_24 != 0) && (local_28 = local_28 + 1 + local_24, local_28 + 1 < local_20)) &&
       ((sVar1 = FUN_143a8e4f0(param_2,local_28), sVar1 == param_4 &&
        (local_14 = FUN_143b8fc00(param_1,param_2,local_28 + 1,CONCAT11(uVar4,2),2,0,0x3b,&local_24)
        , local_24 != 0)))) {
      local_28 = local_28 + 1 + local_24;
    }
  }
  if (local_28 == param_3) {
    iVar2 = 0;
  }
  else {
    *param_5 = local_28 - param_3;
    iVar2 = local_1c * 3600000 + local_18 * 60000 + local_14 * 1000;
  }
  return iVar2;
}



// FUNCTION 143b8f720 FUN_143b8f720 body=507 status=ok
// SIG undefined FUN_143b8f720(void)

undefined8 FUN_143b8f720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_48;
  int local_40;
  undefined1 local_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
  local_40 = -1;
  FUN_143a90e90(param_4);
  local_2c = 0;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x60))
                    (*(undefined8 *)(param_1 + 0x2c8),param_2,iVar2,0x40,&local_2c);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_38,uVar4);
  cVar1 = FUN_143a8b0e0(local_2c);
  if (cVar1 == '\0') {
    local_30 = -1;
    cVar1 = FUN_143b1fd90(local_38);
    if (cVar1 == '\0') {
      local_48 = 0;
      while( true ) {
        uVar4 = FUN_143a8b510(local_38);
        iVar3 = FUN_143b896b0(uVar4);
        if (iVar3 <= local_48) break;
        uVar4 = FUN_143a8b510(local_38);
        iVar3 = FUN_143b892e0(uVar4,local_48);
        if (local_40 < iVar2 + iVar3) {
          local_30 = local_48;
          uVar4 = FUN_143a8b510(local_38);
          local_40 = FUN_143b892e0(uVar4,local_48);
          local_40 = iVar2 + local_40;
        }
        local_48 = local_48 + 1;
      }
      if (0 < local_40) {
        FUN_143b0fce0(param_3,local_40);
        uVar4 = FUN_143a8b510(local_38);
        FUN_143b8ca90(param_1,uVar4,local_30,param_4);
      }
    }
    iVar3 = FUN_143a904f0(param_4);
    if (iVar3 == 0) {
      FUN_143b44cd0(param_3,iVar2);
    }
    local_20 = param_4;
    FUN_143b36bb0(local_38);
    local_28 = local_20;
  }
  else {
    FUN_143b44cd0(param_3,iVar2);
    local_28 = param_4;
    FUN_143b36bb0(local_38);
  }
  return local_28;
}



// FUNCTION 143b8f920 FUN_143b8f920 body=87 status=ok
// SIG undefined FUN_143b8f920(void)

void FUN_143b8f920(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1,0,param_2,param_4,1,0);
  FUN_143b68cf0(param_3,uVar1);
  return;
}



// FUNCTION 143b8f980 FUN_143b8f980 body=628 status=ok
// SIG undefined FUN_143b8f980(void)

int FUN_143b8f980(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong in_stack_ffffffffffffffa8;
  int local_48;
  int local_44;
  int local_40;
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined *local_10;
  
  local_34 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  while (*(short *)(&DAT_145d14368 + (longlong)local_38 * 8) != 0) {
    local_10 = &DAT_145d14368 + (longlong)local_38 * 8;
    local_20 = FreeLib(local_10);
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
    cVar1 = FUN_143b8aca0(param_2,param_3,local_20,local_10,in_stack_ffffffffffffffa8);
    if (cVar1 == '\0') {
      local_30 = local_20;
      break;
    }
    local_38 = local_38 + 1;
  }
  if (local_30 != 0) {
    local_48 = param_3 + local_30;
    local_1c = local_48 + 1;
    iVar2 = FUN_143a904f0(param_2);
    if (local_1c < iVar2) {
      local_40 = 1;
      local_3c = FUN_143a8e4f0(param_2,local_48);
      if (local_3c == 0x2b) {
        local_40 = 1;
      }
      else {
        if (local_3c != 0x2d) goto LAB_143b8fbdd;
        local_40 = -1;
      }
      local_48 = local_48 + 1;
      local_44 = 0;
      local_24 = FUN_143b8f510(param_1,param_2,local_48,0x3a,&local_44);
      iVar2 = FUN_143a904f0(param_2);
      if (local_44 == iVar2 - local_48) {
        local_34 = local_24 * local_40;
        local_48 = local_48 + local_44;
      }
      else {
        local_2c = 0;
        local_34 = FUN_143b8ee60(param_1,param_2,local_48,&local_2c);
        if (local_2c < local_44) {
          local_34 = local_24 * local_40;
          local_48 = local_48 + local_44;
        }
        else {
          local_34 = local_34 * local_40;
          local_48 = local_48 + local_2c;
        }
      }
      local_28 = local_48 - param_3;
    }
  }
LAB_143b8fbdd:
  *param_4 = local_28;
  return local_34;
}



// FUNCTION 143b8fc00 FUN_143b8fc00 body=274 status=ok
// SIG undefined FUN_143b8fc00(void)

int FUN_143b8fc00(undefined8 param_1,undefined8 param_2,int param_3,byte param_4,byte param_5,
                 ushort param_6,ushort param_7,int *param_8)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_14 [5];
  
  *param_8 = 0;
  local_20 = 0;
  local_28 = 0;
  local_14[0] = 0;
  local_24 = param_3;
  while ((((iVar1 = FUN_143a904f0(param_2), local_24 < iVar1 && (local_28 < (int)(uint)param_5)) &&
          (iVar1 = FUN_143b91150(param_1,param_2,local_24,local_14), -1 < iVar1)) &&
         (iVar1 = local_20 * 10 + iVar1, iVar1 <= (int)(uint)param_7))) {
    local_28 = local_28 + 1;
    local_24 = local_24 + local_14[0];
    local_20 = iVar1;
  }
  if ((local_28 < (int)(uint)param_4) || (local_20 < (int)(uint)param_6)) {
    local_20 = -1;
  }
  else {
    *param_8 = local_24 - param_3;
  }
  return local_20;
}



// FUNCTION 143b8fd20 FUN_143b8fd20 body=713 status=ok
// SIG undefined FUN_143b8fd20(void)

int FUN_143b8fd20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int *param_5)

{
  int iVar1;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_68 = 0;
  local_40 = 0;
  local_48 = 1;
  *param_5 = 0;
  local_4c = 0;
  local_54 = 0;
  local_44 = 0;
  local_58 = 0;
  while (-1 < *(int *)(&DAT_145d14388 + (longlong)local_58 * 4)) {
    local_50 = *(int *)(&DAT_145d14388 + (longlong)local_58 * 4);
    local_20 = *(undefined8 *)(param_1 + 0x498 + (longlong)local_50 * 8);
    local_68 = FUN_143b8fff0(param_1,param_2,param_3,local_20,0,&local_44,&local_54,&local_4c);
    if (0 < local_68) {
      if (((local_50 == 4) || (local_50 == 0)) || (local_50 == 1)) {
        local_34 = 1;
      }
      else {
        local_34 = -1;
      }
      local_48 = local_34;
      break;
    }
    local_58 = local_58 + 1;
  }
  if ((0 < local_68) && (*(char *)(param_1 + 0x4c8) != '\0')) {
    local_5c = 0;
    local_3c = 1;
    local_64 = 0;
    while (-1 < *(int *)(&DAT_145d14388 + (longlong)local_64 * 4)) {
      iVar1 = *(int *)(&DAT_145d14388 + (longlong)local_64 * 4);
      local_18 = *(undefined8 *)(param_1 + 0x498 + (longlong)iVar1 * 8);
      local_5c = FUN_143b8fff0(param_1,param_2,param_3,local_18,1,&local_30,local_28,&local_2c);
      if (0 < local_5c) {
        if (((iVar1 == 4) || (iVar1 == 0)) || (iVar1 == 1)) {
          local_38 = 1;
        }
        else {
          local_38 = -1;
        }
        local_3c = local_38;
        break;
      }
      local_64 = local_64 + 1;
    }
    if (local_68 < local_5c) {
      local_68 = local_5c;
      local_48 = local_3c;
      local_44 = local_30;
      local_54 = local_28[0];
      local_4c = local_2c;
    }
  }
  if (0 < local_68) {
    local_40 = ((local_44 * 0x3c + local_54) * 0x3c + local_4c) * 1000 * local_48;
    *param_5 = local_68;
  }
  return local_40;
}



// FUNCTION 143b8fff0 FUN_143b8fff0 body=675 status=ok
// SIG undefined FUN_143b8fff0(void)

int FUN_143b8fff0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,char param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_44;
  int local_40;
  undefined1 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  bVar1 = false;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  local_44 = param_3;
  do {
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_4);
    if (iVar3 <= local_34) {
LAB_143b9021b:
      if (bVar1) {
        *param_8 = 0;
        *param_7 = 0;
        *param_6 = 0;
        local_44 = 0;
      }
      else {
        *param_6 = local_24;
        *param_7 = local_30;
        *param_8 = local_2c;
        local_44 = local_44 - param_3;
      }
      return local_44;
    }
    local_40 = 0;
    local_20 = FUN_143b09610(param_4,local_34);
    local_38 = FUN_143a91e00(local_20);
    if (local_38 == 0) {
      local_18 = FUN_143ac0690(local_20);
      local_40 = FreeLib(local_18);
      cVar2 = FUN_143b8aca0(param_2,local_44,local_40,local_18,0);
      if (cVar2 != '\0') {
        bVar1 = true;
        goto LAB_143b9021b;
      }
    }
    else {
      if (local_38 == 1) {
        if (param_5 == '\0') {
          local_28 = 2;
        }
        else {
          local_28 = 1;
        }
        local_3c = (undefined1)local_28;
        local_24 = FUN_143b8fc00(param_1,param_2,local_44,1,local_28,0,0x17,&local_40);
      }
      else if (local_38 == 2) {
        local_30 = FUN_143b8fc00(param_1,param_2,local_44,2,2,0,0x3b,&local_40);
      }
      else if (local_38 == 4) {
        local_2c = FUN_143b8fc00(param_1,param_2,local_44,2,2,0,0x3b,&local_40);
      }
      if (local_40 == 0) {
        bVar1 = true;
        goto LAB_143b9021b;
      }
    }
    local_44 = local_44 + local_40;
    local_34 = local_34 + 1;
  } while( true );
}



// FUNCTION 143b902a0 FUN_143b902a0 body=656 status=ok
// SIG undefined FUN_143b902a0(void)

int FUN_143b902a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                 undefined1 *param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
  iVar3 = FUN_143a904f0(param_2);
  if (iVar2 < iVar3) {
    sVar1 = FUN_143a8e4f0(param_2,iVar2);
    if ((sVar1 == 0x5a) || (sVar1 == 0x7a)) {
      FUN_143b0fce0(param_3,iVar2 + 1);
      local_30 = 0;
    }
    else {
      if (sVar1 == 0x2b) {
        local_50 = 1;
      }
      else {
        if (sVar1 != 0x2d) {
          FUN_143b44cd0(param_3,iVar2);
          return 0;
        }
        local_50 = -1;
      }
      FUN_143b16ce0(local_48,iVar2 + 1);
      uVar5 = 0;
      local_4c = FUN_143b8f1a0(param_2,local_48,0x3a,0,2);
      iVar3 = FUN_143a93e60(local_48);
      if (((iVar3 == -1) && (param_4 == '\0')) &&
         (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_48), iVar3 - iVar2 < 4)) {
        FUN_143b16ce0(local_28,iVar2 + 1);
        local_38 = FUN_143b8ea40(param_2,local_28,0,2,uVar5 & 0xffffff00);
        iVar3 = FUN_143a93e60(local_28);
        if (iVar3 == -1) {
          local_2c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                     ::GetIndex(local_28);
          iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_48);
          if (iVar3 < local_2c) {
            local_4c = local_38;
            uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_28);
            FUN_143b0fce0(local_48,uVar4);
          }
        }
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
      }
      iVar3 = FUN_143a93e60(local_48);
      if (iVar3 == -1) {
        uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_48);
        FUN_143b0fce0(param_3,uVar4);
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
        local_34 = local_50 * local_4c;
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_48);
        local_30 = local_34;
      }
      else {
        FUN_143b44cd0(param_3,iVar2);
        local_30 = 0;
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_48);
      }
    }
  }
  else {
    FUN_143b44cd0(param_3,iVar2);
    local_30 = 0;
  }
  return local_30;
}



// FUNCTION 143b90530 FUN_143b90530 body=56 status=ok
// SIG undefined FUN_143b90530(void)

void FUN_143b90530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b902a0(param_1,param_2,param_3,0,0);
  return;
}



// FUNCTION 143b90570 FUN_143b90570 body=590 status=ok
// SIG undefined FUN_143b90570(void)

undefined4
FUN_143b90570(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined *local_20;
  longlong local_18;
  
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
  local_30 = 0;
  local_34 = 0;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  piVar5 = &local_34;
  local_30 = FUN_143b90800(param_1,param_2,iVar2,param_4,piVar5);
  if (local_34 < 1) {
    local_30 = FUN_143b8f980(param_1,param_2,iVar2,&local_34);
    if (local_34 < 1) {
      local_18 = param_1 + 0x418;
      uVar3 = FUN_143a904f0(param_1 + 0x418);
      uVar6 = (ulonglong)piVar5 & 0xffffffff00000000;
      cVar1 = FUN_143b3e520(param_2,iVar2,uVar3,local_18,uVar6);
      if (cVar1 == '\0') {
        iVar4 = FUN_143a904f0(param_1 + 0x418);
        FUN_143b0fce0(param_3,iVar2 + iVar4);
        local_30 = 0;
      }
      else {
        local_2c = 0;
        while (*(short *)(&DAT_145d14368 + (longlong)local_2c * 8) != 0) {
          local_20 = &DAT_145d14368 + (longlong)local_2c * 8;
          local_28 = FreeLib(local_20);
          uVar6 = uVar6 & 0xffffffff00000000;
          cVar1 = FUN_143b8aca0(param_2,iVar2,local_28,local_20,uVar6);
          if (cVar1 == '\0') {
            FUN_143b0fce0(param_3,iVar2 + local_28);
            return 0;
          }
          local_2c = local_2c + 1;
        }
        FUN_143b44cd0(param_3,iVar2);
        local_30 = 0;
      }
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      FUN_143b0fce0(param_3,iVar2 + local_34);
    }
  }
  else {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    FUN_143b0fce0(param_3,iVar2 + local_34);
  }
  return local_30;
}



// FUNCTION 143b907c0 FUN_143b907c0 body=56 status=ok
// SIG undefined FUN_143b907c0(void)

void FUN_143b907c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b90570(param_1,param_2,param_3,0,0);
  return;
}



// FUNCTION 143b90800 FUN_143b90800 body=375 status=ok
// SIG undefined FUN_143b90800(void)

undefined4
FUN_143b90800(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  undefined8 in_stack_ffffffffffffffc8;
  uint uVar4;
  int *piVar3;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_18 = 0;
  bVar1 = false;
  local_20 = param_3;
  local_24 = FUN_143a904f0(param_1 + 0x448);
  if ((local_24 < 1) ||
     (cVar2 = FUN_143b3e520(param_2,local_20,local_24,param_1 + 0x448,(ulonglong)uVar4 << 0x20),
     cVar2 == '\0')) {
    local_20 = local_20 + local_24;
    piVar3 = &local_24;
    local_18 = FUN_143b8fd20(param_1,param_2,local_20,0,piVar3);
    if (local_24 != 0) {
      local_20 = local_20 + local_24;
      local_24 = FUN_143a904f0(param_1 + 0x470);
      if ((local_24 < 1) ||
         (cVar2 = FUN_143b3e520(param_2,local_20,local_24,param_1 + 0x470,
                                (ulonglong)piVar3 & 0xffffffff00000000), cVar2 == '\0')) {
        local_20 = local_20 + local_24;
        bVar1 = true;
      }
    }
  }
  if (bVar1) {
    local_1c = local_20 - param_3;
  }
  else {
    local_1c = 0;
  }
  *param_5 = local_1c;
  return local_18;
}



// FUNCTION 143b90980 FUN_143b90980 body=1531 status=ok
// SIG undefined FUN_143b90980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b90980(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  char local_e8;
  uint local_e4;
  char local_e0;
  undefined1 local_df;
  int local_dc;
  short local_d8;
  int local_d4;
  uint local_d0;
  undefined8 *local_c8;
  uint local_c0;
  int local_bc;
  uint local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_a8 = FUN_143a8d310(0x28);
    if (local_a8 == 0) {
      local_a0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = (undefined8 *)FUN_143b090a0(local_a8,FUN_143a8d180,0,param_3);
    }
    local_50 = local_a0;
    local_c8 = local_a0;
    if (local_a0 == (undefined8 *)0x0) {
      *param_3 = 7;
      local_58 = (undefined8 *)0x0;
    }
    else {
      local_b8 = 0;
      local_e8 = '\0';
      local_e0 = '\0';
      FUN_143a8ac30(local_38);
      local_e4 = 0;
      local_dc = 1;
      local_d4 = 0;
      while (iVar2 = FUN_143a904f0(param_1), local_d4 < iVar2) {
        local_d8 = FUN_143a8e4f0(param_1,local_d4);
        if (local_d8 == 0x27) {
          if (local_e8 == '\0') {
            local_e8 = '\x01';
            if (local_e4 != 0) {
              cVar1 = FUN_143b8d250(local_e4,local_dc);
              if (cVar1 == '\0') {
                *param_3 = 1;
                break;
              }
              local_60 = FUN_143b8b080(local_e4,(undefined1)local_dc,param_3);
              FUN_143b09430(local_c8,local_60,param_3);
              cVar1 = FUN_143a8b0e0(*param_3);
              if (cVar1 != '\0') break;
              local_e4 = 0;
            }
          }
          else {
            FUN_143acc590(local_38,0x27);
            local_e8 = '\0';
          }
          local_e0 = local_e0 == '\0';
          local_df = local_e0;
        }
        else {
          local_e8 = '\0';
          if (local_e0 == '\0') {
            local_c0 = FUN_143b8cb90(local_d8);
            if (local_c0 == 0) {
              if (local_e4 != 0) {
                cVar1 = FUN_143b8d250(local_e4,local_dc);
                if (cVar1 == '\0') {
                  *param_3 = 1;
                  break;
                }
                local_70 = FUN_143b8b080(local_e4,(undefined1)local_dc,param_3);
                FUN_143b09430(local_c8,local_70,param_3);
                cVar1 = FUN_143a8b0e0(*param_3);
                if (cVar1 != '\0') break;
                local_e4 = 0;
              }
              FUN_143acc590(local_38,local_d8);
            }
            else if (local_c0 == local_e4) {
              local_dc = local_dc + 1;
            }
            else {
              if (local_e4 == 0) {
                iVar2 = FUN_143a904f0(local_38);
                if (0 < iVar2) {
                  local_80 = FUN_143b8af10(local_38,param_3);
                  FUN_143b09430(local_c8,local_80,param_3);
                  cVar1 = FUN_143a8b0e0(*param_3);
                  if (cVar1 != '\0') break;
                  FUN_143a90910(local_38);
                }
              }
              else {
                cVar1 = FUN_143b8d250(local_e4,local_dc);
                if (cVar1 == '\0') {
                  *param_3 = 1;
                  break;
                }
                local_48 = FUN_143b8b080(local_e4,(undefined1)local_dc,param_3);
                FUN_143b09430(local_c8,local_48,param_3);
                cVar1 = FUN_143a8b0e0(*param_3);
                if (cVar1 != '\0') break;
              }
              local_e4 = local_c0;
              local_dc = 1;
              local_b8 = local_b8 | local_c0;
            }
          }
          else {
            FUN_143acc590(local_38,local_d8);
          }
        }
        local_d4 = local_d4 + 1;
      }
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        if (local_e4 == 0) {
          iVar2 = FUN_143a904f0(local_38);
          if (0 < iVar2) {
            local_98 = FUN_143b8af10(local_38,param_3);
            FUN_143b09430(local_c8,local_98,param_3);
          }
        }
        else {
          cVar1 = FUN_143b8d250(local_e4,local_dc);
          if (cVar1 == '\0') {
            *param_3 = 1;
          }
          else {
            local_90 = FUN_143b8b080(local_e4,(undefined1)local_dc,param_3);
            FUN_143b09430(local_c8,local_90,param_3);
          }
        }
        cVar1 = FUN_143a8b110(*param_3);
        if (cVar1 != '\0') {
          local_d0 = 0;
          if (param_2 == 0) {
            local_d0 = 1;
          }
          else if (param_2 == 1) {
            local_d0 = 3;
          }
          else if (param_2 == 2) {
            local_d0 = 7;
          }
          local_bc = param_2;
          if (local_b8 == local_d0) {
            local_88 = local_c8;
            FUN_143a8dc60(local_38);
            return local_88;
          }
        }
      }
      local_78 = local_c8;
      local_b0 = local_c8;
      if (local_c8 == (undefined8 *)0x0) {
        local_68 = 0;
      }
      else {
        local_68 = (**(code **)*local_c8)(local_c8,1);
      }
      local_58 = (undefined8 *)0x0;
      FUN_143a8dc60(local_38);
    }
  }
  else {
    local_58 = (undefined8 *)0x0;
  }
  return local_58;
}



// FUNCTION 143b90f80 FUN_143b90f80 body=56 status=ok
// SIG undefined FUN_143b90f80(void)

void FUN_143b90f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b90570(param_1,param_2,param_3,1,0);
  return;
}



// FUNCTION 143b90fc0 FUN_143b90fc0 body=392 status=ok
// SIG undefined FUN_143b90fc0(void)

undefined8
FUN_143b90fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_44 = 0;
  FUN_143aa29a0(&DAT_146bc8248,FUN_143b8cf90,&local_44);
  local_40 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_3);
  local_48 = 0;
  FUN_143a90e90(param_4);
  cVar1 = FUN_143a8b110(local_44);
  if (cVar1 != '\0') {
    local_30 = FUN_143a8d310(0x18);
    if (local_30 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143b8a2b0(local_30);
    }
    local_20 = local_28;
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
              (local_38,local_28);
    uVar2 = FUN_143a8b510(local_38);
    FUN_143bf3160(DAT_146bc8240,param_2,local_40,uVar2,&local_44);
    uVar2 = FUN_143a8b510(local_38);
    local_48 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(uVar2);
    if (0 < local_48) {
      uVar2 = FUN_143a8b510(local_38);
      uVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(uVar2);
      FUN_143ab21b0(param_4,uVar2,0xffffffff);
    }
    FUN_143b8a300(local_38);
  }
  if (local_48 < 1) {
    FUN_143b44cd0(param_3,local_40);
  }
  else {
    FUN_143b0fce0(param_3,local_40 + local_48);
  }
  return param_4;
}



// FUNCTION 143b91150 FUN_143b91150 body=262 status=ok
// SIG undefined FUN_143b91150(void)

int FUN_143b91150(longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  local_24 = -1;
  *param_4 = 0;
  iVar1 = FUN_143a904f0(param_2);
  if (param_3 < iVar1) {
    iVar1 = FUN_143a8e3e0(param_2,param_3);
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      if (iVar1 == *(int *)(param_1 + 0x3f0 + (longlong)local_28 * 4)) {
        local_24 = local_28;
        break;
      }
    }
    if (local_24 < 0) {
      local_18 = FUN_143a9da10(iVar1);
      if ((local_18 < 0) || (9 < local_18)) {
        local_18 = -1;
      }
      local_24 = local_18;
    }
    if (-1 < local_24) {
      iVar1 = FUN_143a90530(param_2,param_3,1);
      *param_4 = iVar1 - param_3;
    }
  }
  return local_24;
}



// FUNCTION 143b91260 FUN_143b91260 body=392 status=ok
// SIG undefined FUN_143b91260(void)

undefined8
FUN_143b91260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_44 = 0;
  FUN_143aa29a0(&DAT_146bc8238,FUN_143b8d110,&local_44);
  local_40 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_3);
  local_48 = 0;
  FUN_143a90e90(param_4);
  cVar1 = FUN_143a8b110(local_44);
  if (cVar1 != '\0') {
    local_30 = FUN_143a8d310(0x18);
    if (local_30 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143b8a2b0(local_30);
    }
    local_20 = local_28;
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
              (local_38,local_28);
    uVar2 = FUN_143a8b510(local_38);
    FUN_143bf3160(DAT_146bc8230,param_2,local_40,uVar2,&local_44);
    uVar2 = FUN_143a8b510(local_38);
    local_48 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(uVar2);
    if (0 < local_48) {
      uVar2 = FUN_143a8b510(local_38);
      uVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(uVar2);
      FUN_143ab21b0(param_4,uVar2,0xffffffff);
    }
    FUN_143b8a300(local_38);
  }
  if (local_48 < 1) {
    FUN_143b44cd0(param_3,local_40);
  }
  else {
    FUN_143b0fce0(param_3,local_40 + local_48);
  }
  return param_4;
}



// FUNCTION 143b913f0 FUN_143b913f0 body=75 status=ok
// SIG undefined FUN_143b913f0(void)

void FUN_143b913f0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  FUN_143a91100(param_1);
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f0d0(param_1,0,uVar1,local_res10,0,1);
  return;
}



// FUNCTION 143b91440 FUN_143b91440 body=153 status=ok
// SIG undefined FUN_143b91440(void)

longlong FUN_143b91440(undefined8 param_1,longlong param_2,int param_3)

{
  uint3 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = FUN_143a8eb50(param_1,0,0x7fffffff);
  uVar1 = (uint3)((uint)param_3 >> 8);
  if (iVar2 == param_3) {
    local_14 = 0;
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      uVar3 = FUN_143a8e3e0(param_1,local_14);
      *(undefined4 *)(param_2 + (longlong)local_18 * 4) = uVar3;
      local_14 = FUN_143a90530(param_1,local_14,1);
    }
    lVar4 = CONCAT71((uint7)uVar1,1);
  }
  else {
    lVar4 = (ulonglong)uVar1 << 8;
  }
  return lVar4;
}



// FUNCTION 143b914e0 FUN_143b914e0 body=596 status=ok
// SIG undefined FUN_143b914e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b914e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_138 [32];
  int local_118;
  undefined2 local_114;
  undefined2 local_112;
  int local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_b8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_143a90e90(param_2);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_118 = FUN_143b19dc0(param_1,&DAT_145d14358,2,0);
    if (local_118 < 0) {
      *param_3 = 1;
    }
    else {
      local_114 = 0x48;
      local_112 = 0x48;
      local_d8 = FUN_143a90ff0(param_1,local_60,0,local_118);
      local_c0 = local_d8;
      local_110 = FUN_143b8d2d0(local_d8,&local_114,2,0);
      FUN_143a8dc60(local_60);
      if (local_110 < 0) {
        local_108 = FUN_143a90ff0(param_1,local_88,0,local_118);
        local_c8 = local_108;
        local_10c = FUN_143b8d330(local_108,0x48,0);
        FUN_143a8dc60(local_88);
        if (local_10c < 0) {
          *param_3 = 1;
        }
        else {
          local_100 = FUN_143a90ff0(param_1,local_38,0,local_10c + 1);
          local_f8 = local_100;
          local_e8 = FUN_143a8dcd0(param_2,local_100);
          FUN_143a8dc60(local_38);
          param_2 = local_e8;
        }
      }
      else {
        local_f0 = FUN_143a90ff0(param_1,local_b0,0,local_110 + 2);
        local_d0 = local_f0;
        local_e0 = FUN_143a8dcd0(param_2,local_f0);
        FUN_143a8dc60(local_b0);
        param_2 = local_e0;
      }
    }
  }
  return param_2;
}



// FUNCTION 143b91740 FUN_143b91740 body=245 status=ok
// SIG undefined FUN_143b91740(void)

undefined8 FUN_143b91740(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int local_10;
  
  iVar3 = FUN_143acddd0(param_1,0x27);
  if (iVar3 < 0) {
    FUN_143a8dcd0(param_2,param_1);
  }
  else {
    FUN_143a90910(param_2);
    bVar1 = false;
    for (local_10 = 0; iVar3 = FUN_143a904f0(param_1), local_10 < iVar3; local_10 = local_10 + 1) {
      sVar2 = FUN_143a8e4f0(param_1,local_10);
      if (sVar2 == 0x27) {
        bVar1 = !bVar1;
        if (!bVar1) {
          FUN_143acc590(param_2,0x27);
        }
      }
      else {
        bVar1 = false;
        FUN_143acc590(param_2,sVar2);
      }
    }
  }
  return param_2;
}



// FUNCTION 143b91840 FUN_143b91840 body=209 status=ok
// SIG undefined FUN_143b91840(void)

undefined8 FUN_143b91840(void)

{
  if ((DAT_146bc8230 != (undefined8 *)0x0) && (DAT_146bc8230 != (undefined8 *)0x0)) {
    (**(code **)*DAT_146bc8230)(DAT_146bc8230,1);
  }
  DAT_146bc8230 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc8238);
  if ((DAT_146bc8240 != (undefined8 *)0x0) && (DAT_146bc8240 != (undefined8 *)0x0)) {
    (**(code **)*DAT_146bc8240)(DAT_146bc8240,1);
  }
  DAT_146bc8240 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc8248);
  return 1;
}



// FUNCTION 143b91920 FUN_143b91920 body=118 status=ok
// SIG undefined FUN_143b91920(void)

undefined8 *
FUN_143b91920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_143a8b520(param_2);
  FUN_143b92350(param_1,uVar1,param_3,param_4);
  return param_1;
}



// FUNCTION 143b919a0 FUN_143b919a0 body=69 status=ok
// SIG undefined FUN_143b919a0(void)

void FUN_143b919a0(undefined8 *param_1)

{
  FUN_143aa2ef0(*param_1);
  FUN_143aa2ef0(param_1[2]);
  FUN_143aa2ef0(param_1[3]);
  FUN_143aa2ef0(param_1[1]);
  return;
}



// FUNCTION 143b919f0 FUN_143b919f0 body=73 status=ok
// SIG undefined FUN_143b919f0(void)

int FUN_143b919f0(double param_1)

{
  int local_18;
  int local_14;
  
  FUN_143b91e30(param_1 + 5.0,7,&local_18);
  if (local_18 == 0) {
    local_14 = 7;
  }
  else {
    local_14 = local_18;
  }
  return local_14;
}



// FUNCTION 143b91a40 FUN_143b91a40 body=112 status=ok
// SIG undefined FUN_143b91a40(void)

int FUN_143b91a40(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 local_18;
  
  local_18 = (param_3 + 6) / 7;
  if (local_18 == 4) {
    cVar1 = FUN_143b4c990(param_1,param_2);
    if ((int)cVar1 < param_3 + 7) {
      local_18 = -1;
    }
  }
  else if (local_18 == 5) {
    local_18 = -1;
  }
  return local_18;
}



// FUNCTION 143b91ab0 FUN_143b91ab0 body=598 status=ok
// SIG undefined FUN_143b91ab0(void)

void FUN_143b91ab0(double param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  iVar2 = FUN_143b91e30(param_1 + 719162.0,0x23ab1,param_6);
  iVar3 = FUN_143b91e30((double)*param_6,0x8eac,param_6);
  iVar4 = FUN_143b91e30((double)*param_6,0x5b5,param_6);
  iVar5 = FUN_143b91e30((double)*param_6,0x16d,param_6);
  *param_2 = iVar3 * 100 + iVar5 + iVar2 * 400 + iVar4 * 4;
  if ((iVar3 == 4) || (iVar5 == 4)) {
    *param_6 = 0x16d;
  }
  else {
    *param_2 = *param_2 + 1;
  }
  cVar1 = FUN_143b4c880(*param_2);
  dVar6 = (double)FUN_143a917d0(param_1 + 719162.0 + 1.0,0x401c000000000000);
  *param_5 = (int)dVar6;
  if (*param_5 < 0) {
    local_20 = 8;
  }
  else {
    local_20 = 1;
  }
  *param_5 = *param_5 + local_20;
  local_30 = 0;
  if (cVar1 == '\0') {
    local_24 = 0x3b;
  }
  else {
    local_24 = 0x3c;
  }
  if (local_24 <= *param_6) {
    if (cVar1 == '\0') {
      local_34 = 2;
    }
    else {
      local_34 = 1;
    }
    local_30 = local_34;
  }
  *param_3 = ((*param_6 + local_30) * 0xc + 6) / 0x16f;
  if (cVar1 == '\0') {
    local_28 = 0;
  }
  else {
    local_28 = 0xc;
  }
  *param_4 = (*param_6 - (int)*(short *)(&DAT_145d14830 + (longlong)(*param_3 + local_28) * 2)) + 1;
  *param_6 = *param_6 + 1;
  return;
}



// FUNCTION 143b91d10 FUN_143b91d10 body=217 status=ok
// SIG undefined FUN_143b91d10(void)

double FUN_143b91d10(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  
  iVar2 = param_1 + -1;
  cVar1 = FUN_143b4c880(param_1);
  if (cVar1 == '\0') {
    local_24 = 0;
  }
  else {
    local_24 = 0xc;
  }
  iVar3 = FUN_143b91df0(iVar2,4);
  iVar4 = FUN_143b91df0(iVar2,400);
  iVar5 = FUN_143b91df0(iVar2,100);
  return (double)((int)*(short *)(&DAT_145d14830 + (longlong)(param_2 + local_24) * 2) +
                 param_3 + ((iVar2 * 0x16d + iVar3 + 0x1a4451 + iVar4) - iVar5)) - 2440588.0;
}



// FUNCTION 143b91df0 FUN_143b91df0 body=57 status=ok
// SIG undefined FUN_143b91df0(void)

int FUN_143b91df0(int param_1,int param_2)

{
  undefined4 local_18;
  
  if (param_1 < 0) {
    local_18 = (param_1 + 1) / param_2 + -1;
  }
  else {
    local_18 = param_1 / param_2;
  }
  return local_18;
}



// FUNCTION 143b91e30 FUN_143b91e30 body=103 status=ok
// SIG undefined FUN_143b91e30(void)

int FUN_143b91e30(double param_1,int param_2,int *param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_143a917b0(param_1 / (double)param_2);
  *param_3 = (int)(param_1 - dVar1 * (double)param_2);
  return (int)dVar1;
}



// FUNCTION 143b91ea0 FUN_143b91ea0 body=257 status=ok
// SIG undefined FUN_143b91ea0(void)

double FUN_143b91ea0(double param_1,double param_2,double *param_3)

{
  double dVar1;
  undefined4 local_28;
  undefined8 local_20;
  
  dVar1 = (double)FUN_143b512a0(param_1,param_2);
  *param_3 = param_1 - dVar1 * param_2;
  if ((*param_3 <= 0.0 && *param_3 != 0.0) || (local_20 = dVar1, param_2 <= *param_3)) {
    if (0.0 < *param_3 || *param_3 == 0.0) {
      local_28 = 1;
    }
    else {
      local_28 = -1;
    }
    local_20 = dVar1 + (double)local_28;
    if (dVar1 == local_20) {
      *param_3 = 0.0;
    }
    else {
      *param_3 = param_1 - local_20 * param_2;
    }
  }
  return local_20;
}



// FUNCTION 143b91fb0 FUN_143b91fb0 body=362 status=ok
// SIG undefined FUN_143b91fb0(void)

undefined8 FUN_143b91fb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_1[2] != 0) {
      uVar2 = FUN_143aa3350(param_1[2],param_2,*param_1,param_4);
      *param_1 = uVar2;
      uVar2 = FUN_143aa3350(*param_1,"format",param_1[1],param_4);
      param_1[1] = uVar2;
      uVar2 = FUN_143aa3350(param_1[1],param_3,*param_1,param_4);
      *param_1 = uVar2;
    }
    if ((param_1[3] != 0) && (*param_4 == 2)) {
      *param_4 = 0;
      uVar2 = FUN_143aa3350(param_1[3],param_2,*param_1,param_4);
      *param_1 = uVar2;
      uVar2 = FUN_143aa3350(*param_1,"format",param_1[1],param_4);
      param_1[1] = uVar2;
      uVar2 = FUN_143aa3350(param_1[1],param_3,*param_1,param_4);
      *param_1 = uVar2;
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b92120 FUN_143b92120 body=358 status=ok
// SIG undefined FUN_143b92120(void)

undefined8
FUN_143b92120(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_1[2] != 0) {
      uVar2 = FUN_143aa3350(param_1[2],param_2,*param_1,param_5);
      *param_1 = uVar2;
      uVar2 = FUN_143aa3350(*param_1,param_3,param_1[1],param_5);
      param_1[1] = uVar2;
      uVar2 = FUN_143aa3350(param_1[1],param_4,*param_1,param_5);
      *param_1 = uVar2;
    }
    if ((param_1[3] != 0) && (*param_5 == 2)) {
      *param_5 = 0;
      uVar2 = FUN_143aa3350(param_1[3],param_2,*param_1,param_5);
      *param_1 = uVar2;
      uVar2 = FUN_143aa3350(*param_1,param_3,param_1[1],param_5);
      param_1[1] = uVar2;
      uVar2 = FUN_143aa3350(param_1[1],param_4,*param_1,param_5);
      *param_1 = uVar2;
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b92290 FUN_143b92290 body=183 status=ok
// SIG undefined FUN_143b92290(void)

undefined8 FUN_143b92290(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_1[2] != 0) {
      uVar2 = FUN_143aa3350(param_1[2],param_2,*param_1,param_3);
      *param_1 = uVar2;
    }
    if ((param_1[3] != 0) && (*param_3 == 2)) {
      *param_3 = 0;
      uVar2 = FUN_143aa3350(param_1[3],param_2,*param_1,param_3);
      *param_1 = uVar2;
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b92350 FUN_143b92350 body=249 status=ok
// SIG undefined FUN_143b92350(void)

void FUN_143b92350(undefined8 *param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_143aa5b10(0,param_2,param_4);
  param_1[1] = uVar2;
  uVar2 = FUN_143aa37c0(param_1[1],"calendar",*param_1,param_4);
  *param_1 = uVar2;
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) &&
     (iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"gregorian"), iVar1 != 0)) {
    uVar2 = FUN_143aa3350(*param_1,param_3,0,param_4);
    param_1[2] = uVar2;
    uVar2 = FUN_143aa3350(*param_1,"gregorian",0,param_4);
    param_1[3] = uVar2;
    return;
  }
  uVar2 = FUN_143aa3350(*param_1,"gregorian",0,param_4);
  param_1[2] = uVar2;
  return;
}



// FUNCTION 143b92450 FUN_143b92450 body=122 status=ok
// SIG undefined FUN_143b92450(void)

void FUN_143b92450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7)

{
  double local_18;
  undefined8 local_10;
  
  local_10 = FUN_143b91ea0(param_1,0x4194997000000000,&local_18);
  *param_7 = (int)local_18;
  FUN_143b91ab0(local_10,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143b924d0 FUN_143b924d0 body=105 status=ok
// SIG undefined FUN_143b924d0(void)

undefined8 *
FUN_143b924d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FID_conflict_length_error(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::OlsonTimeZone::vftable;
  param_1[0xd] = 0;
  FUN_143b92f30(param_1,param_2);
  return param_1;
}



// FUNCTION 143b92540 FUN_143b92540 body=2389 status=ok
// SIG undefined FUN_143b92540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143b92540(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_200;
  int local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  int local_1d0;
  undefined4 local_1c8;
  int local_1c0;
  int *local_1b8;
  uint local_1a8 [2];
  undefined1 *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_158 [192];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_168 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  FUN_143bee090(param_1,param_4);
  *param_1 = icu_53::OlsonTimeZone::vftable;
  param_1[0xd] = 0;
  FUN_143b931e0(param_1);
  if ((param_2 == 0) || (param_3 == 0)) {
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 != '\0') {
      *param_5 = 1;
    }
  }
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    FUN_143aa5540(local_158);
    FUN_143aa37c0(param_3,"transPre32",local_158,param_5);
    uVar3 = FUN_143aa4640(local_158,local_1a8,param_5);
    param_1[7] = uVar3;
    *(short *)(param_1 + 6) = (short)((int)local_1a8[0] >> 1);
    if (*param_5 == 2) {
      param_1[7] = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      *param_5 = 0;
    }
    else {
      cVar1 = FUN_143a8b110(*param_5);
      if ((cVar1 != '\0') &&
         ((((int)local_1a8[0] < 0 || (0x7fff < (int)local_1a8[0])) || ((local_1a8[0] & 1) != 0)))) {
        *param_5 = 3;
      }
    }
    FUN_143aa37c0(param_3,"trans",local_158,param_5);
    uVar3 = FUN_143aa4640(local_158,local_1a8,param_5);
    param_1[8] = uVar3;
    *(short *)((longlong)param_1 + 0x32) = (short)local_1a8[0];
    if (*param_5 == 2) {
      param_1[8] = 0;
      *(undefined2 *)((longlong)param_1 + 0x32) = 0;
      *param_5 = 0;
    }
    else {
      cVar1 = FUN_143a8b110(*param_5);
      if ((cVar1 != '\0') && (((int)local_1a8[0] < 0 || (0x7fff < (int)local_1a8[0])))) {
        *param_5 = 3;
      }
    }
    FUN_143aa37c0(param_3,"transPost32",local_158,param_5);
    uVar3 = FUN_143aa4640(local_158,local_1a8,param_5);
    param_1[9] = uVar3;
    *(short *)((longlong)param_1 + 0x34) = (short)((int)local_1a8[0] >> 1);
    if (*param_5 == 2) {
      param_1[9] = 0;
      *(undefined2 *)((longlong)param_1 + 0x34) = 0;
      *param_5 = 0;
    }
    else {
      cVar1 = FUN_143a8b110(*param_5);
      if ((cVar1 != '\0') &&
         ((((int)local_1a8[0] < 0 || (0x7fff < (int)local_1a8[0])) || ((local_1a8[0] & 1) != 0)))) {
        *param_5 = 3;
      }
    }
    FUN_143aa37c0(param_3,"typeOffsets",local_158,param_5);
    uVar3 = FUN_143aa4640(local_158,local_1a8,param_5);
    param_1[0xb] = uVar3;
    cVar1 = FUN_143a8b110(*param_5);
    if ((cVar1 != '\0') &&
       ((((int)local_1a8[0] < 2 || (0x7ffe < (int)local_1a8[0])) || ((local_1a8[0] & 1) != 0)))) {
      *param_5 = 3;
    }
    *(short *)(param_1 + 10) = (short)local_1a8[0] >> 1;
    param_1[0xc] = 0;
    sVar2 = FUN_143b95d40(param_1);
    if (0 < sVar2) {
      FUN_143aa37c0(param_3,"typeMap",local_158,param_5);
      uVar3 = FUN_143aa3040(local_158,local_1a8,param_5);
      param_1[0xc] = uVar3;
      if (*param_5 == 2) {
        *param_5 = 3;
      }
      else {
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          sVar2 = FUN_143b95d40(param_1);
          if (local_1a8[0] != (int)sVar2) {
            *param_5 = 3;
          }
        }
      }
    }
    local_170 = FUN_143aa5130(param_3,"finalRule",local_1a8,param_5);
    FUN_143aa37c0(param_3,"finalRaw",local_158,param_5);
    local_198 = FUN_143aa46d0(local_158,param_5);
    FUN_143aa37c0(param_3,"finalYear",local_158,param_5);
    local_194 = FUN_143aa46d0(local_158,param_5);
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 == '\0') {
      if (*param_5 == 2) {
        *param_5 = 0;
      }
    }
    else {
      FUN_143a8d4f0(local_70,1,local_170,local_1a8[0]);
      local_190 = FUN_143b4c8d0(param_2,local_70,0,param_5);
      local_1a0 = (undefined1 *)FUN_143aa4640(local_190,local_1a8,param_5);
      cVar1 = FUN_143a8b110(*param_5);
      if ((cVar1 == '\0') || (local_1a8[0] != 0xb)) {
        *param_5 = 3;
      }
      else {
        FUN_143a8ac30(local_98);
        local_180 = FUN_143a8d310(0x88);
        if (local_180 == 0) {
          local_188 = 0;
        }
        else {
          local_1c0 = *(int *)(local_1a0 + 0x28) * 1000;
          local_1d0 = *(int *)(local_1a0 + 0x20) * 1000;
          local_1f8 = *(int *)(local_1a0 + 0xc) * 1000;
          local_1b8 = param_5;
          local_1c8 = *(undefined4 *)(local_1a0 + 0x24);
          local_1d8 = local_1a0[0x1c];
          local_1e0 = local_1a0[0x18];
          local_1e8 = local_1a0[0x14];
          local_1f0 = *(undefined4 *)(local_1a0 + 0x10);
          local_200 = local_1a0[8];
          local_208 = local_1a0[4];
          local_188 = FUN_143b85240(local_180,local_198 * 1000,local_98,*local_1a0);
        }
        local_178 = local_188;
        param_1[0xd] = local_188;
        if (param_1[0xd] == 0) {
          *param_5 = 7;
        }
        else {
          *(undefined4 *)(param_1 + 0xf) = local_194;
          dVar4 = (double)FUN_143b91d10(*(undefined4 *)(param_1 + 0xf),0,1);
          param_1[0xe] = dVar4 * 86400000.0;
        }
        FUN_143a8dc60(local_98);
      }
      FUN_143aa2ef0(local_190);
      FUN_143a8dc60(local_70);
    }
    FUN_143aa2ef0(local_158);
    uVar3 = FUN_143b96bf0(param_4,param_5);
    param_1[0x10] = uVar3;
  }
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 != '\0') {
    FUN_143b932d0(param_1);
  }
  return param_1;
}



// FUNCTION 143b92ea0 FUN_143b92ea0 body=129 status=ok
// SIG undefined FUN_143b92ea0(void)

void FUN_143b92ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::OlsonTimeZone::vftable;
  FUN_143b93470(param_1);
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b92f30 FUN_143b92f30 body=390 status=ok
// SIG undefined FUN_143b92f30(void)

longlong FUN_143b92f30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_2 + 0x68) == 0) {
    local_20 = 0;
  }
  else {
    local_20 = (**(code **)(**(longlong **)(param_2 + 0x68) + 0x58))
                         (*(undefined8 *)(param_2 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = local_20;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_143b931e0(param_1);
  return param_1;
}



// FUNCTION 143b930c0 FUN_143b930c0 body=54 status=ok
// SIG undefined FUN_143b930c0(void)

undefined8 FUN_143b930c0(undefined8 param_1,uint param_2)

{
  FUN_143b92ea0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b93100 FUN_143b93100 body=140 status=ok
// SIG undefined FUN_143b93100(void)

bool FUN_143b93100(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 == (void *)0x0) && (param_2 == (void *)0x0)) {
    bVar2 = true;
  }
  else if (((param_1 == (void *)0x0) || (param_2 != (void *)0x0)) &&
          ((param_1 != (void *)0x0 || (param_2 == (void *)0x0)))) {
    if (param_1 == param_2) {
      bVar2 = true;
    }
    else {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)param_3);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 143b93190 FUN_143b93190 body=65 status=ok
// SIG undefined FUN_143b93190(void)

void FUN_143b93190(longlong param_1,undefined8 param_2)

{
  FUN_143b1e530(param_1 + 0xc0,FUN_143b94ec0,param_1,param_2);
  return;
}



// FUNCTION 143b931e0 FUN_143b931e0 body=141 status=ok
// SIG undefined FUN_143b931e0(void)

void FUN_143b931e0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  FUN_143a9a9f0(param_1 + 0xc0);
  return;
}



// FUNCTION 143b93270 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(200);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b924d0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b932d0 FUN_143b932d0 body=150 status=ok
// SIG undefined FUN_143b932d0(void)

void FUN_143b932d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x50) = 1;
  *(undefined **)(param_1 + 0x58) = &DAT_145d14880;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 143b93370 FUN_143b93370 body=253 status=ok
// SIG undefined FUN_143b93370(void)

int FUN_143b93370(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143b93190(param_1,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      local_18 = 0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        for (local_14 = 0; local_14 < *(short *)(param_1 + 0xb0); local_14 = local_14 + 1) {
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_14 * 8) != 0) {
            local_18 = local_18 + 1;
          }
        }
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                          (*(undefined8 *)(param_1 + 0x68));
        if (cVar1 == '\0') {
          local_18 = local_18 + 1;
        }
        else {
          local_18 = local_18 + 2;
        }
      }
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b93470 FUN_143b93470 body=623 status=ok
// SIG undefined FUN_143b93470(void)

void FUN_143b93470(longlong param_1)

{
  undefined8 *puVar1;
  int local_88;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x88), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x90), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0xa0) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xa0), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xb8), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    for (local_88 = 0; local_88 < *(short *)(param_1 + 0xb0); local_88 = local_88 + 1) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_88 * 8) != 0) &&
         (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + (longlong)local_88 * 8),
         puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_143b931e0(param_1);
  return;
}



// FUNCTION 143b936e0 FUN_143b936e0 body=91 status=ok
// SIG undefined FUN_143b936e0(void)

undefined4 FUN_143b936e0(longlong param_1,short param_2)

{
  ushort uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)((short)(uVar1 << 1) + 1) * 4);
}



// FUNCTION 143b93740 FUN_143b93740 body=62 status=ok
// SIG undefined FUN_143b93740(void)

void FUN_143b93740(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_143b4b650(param_1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))(*(undefined8 *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 143b93780 FUN_143b93780 body=19 status=ok
// SIG undefined FUN_143b93780(void)

void FUN_143b93780(void)

{
  FUN_143b949b0();
  return;
}



// FUNCTION 143b937a0 FUN_143b937a0 body=1042 status=ok
// SIG undefined FUN_143b937a0(void)

void FUN_143b937a0(undefined8 param_1,double param_2,char param_3,uint param_4,uint param_5,
                  int *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  short local_38;
  longlong local_28;
  
  sVar3 = FUN_143b95d40(param_1);
  if (sVar3 < 1) {
    iVar4 = FUN_143b95cc0(param_1);
    *param_6 = iVar4 * 1000;
    iVar4 = FUN_143b95ca0(param_1);
    *param_7 = iVar4 * 1000;
  }
  else {
    dVar9 = (double)FUN_143a917b0(param_2 / 1000.0);
    if ((param_3 != '\0') || (lVar8 = FUN_143b95da0(param_1,0), (double)lVar8 <= dVar9)) {
      do {
        local_38 = sVar3 + -1;
        if (local_38 < 0) break;
        local_28 = FUN_143b95da0(param_1,local_38);
        if ((param_3 != '\0') && ((double)(local_28 + -0x15180) <= dVar9)) {
          iVar4 = FUN_143b96030(param_1,sVar3 + -2);
          iVar5 = FUN_143b936e0(param_1,sVar3 + -2);
          iVar6 = FUN_143b96030(param_1,local_38);
          iVar7 = FUN_143b936e0(param_1,local_38);
          if ((iVar5 == 0) || (iVar7 != 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((iVar5 != 0) || (iVar7 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (iVar6 - iVar4 < 0) {
            if ((((param_5 & 3) == 1) && (bVar1)) || (((param_5 & 3) == 3 && (bVar2)))) {
              local_28 = local_28 + iVar6;
            }
            else if ((((param_5 & 3) == 1) && (bVar2)) || (((param_5 & 3) == 3 && (bVar1)))) {
              local_28 = local_28 + iVar4;
            }
            else if ((param_5 & 0xc) == 4) {
              local_28 = local_28 + iVar4;
            }
            else {
              local_28 = local_28 + iVar6;
            }
          }
          else if ((((param_4 & 3) == 1) && (bVar1)) || (((param_4 & 3) == 3 && (bVar2)))) {
            local_28 = local_28 + iVar4;
          }
          else if ((((param_4 & 3) == 1) && (bVar2)) || (((param_4 & 3) == 3 && (bVar1)))) {
            local_28 = local_28 + iVar6;
          }
          else if ((param_4 & 0xc) == 0xc) {
            local_28 = local_28 + iVar4;
          }
          else {
            local_28 = local_28 + iVar6;
          }
        }
        sVar3 = local_38;
      } while (dVar9 < (double)local_28);
      iVar4 = FUN_143b95ce0(param_1,local_38);
      *param_6 = iVar4 * 1000;
      iVar4 = FUN_143b936e0(param_1,local_38);
      *param_7 = iVar4 * 1000;
    }
    else {
      iVar4 = FUN_143b95cc0(param_1);
      *param_6 = iVar4 * 1000;
      iVar4 = FUN_143b95ca0(param_1);
      *param_7 = iVar4 * 1000;
    }
  }
  return;
}



// FUNCTION 143b93bc0 FUN_143b93bc0 body=1149 status=ok
// SIG undefined FUN_143b93bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b93bc0(longlong *param_1,double param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  short local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  short local_a0;
  longlong *local_98;
  undefined4 local_90 [2];
  longlong *local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_90[0] = 0;
  FUN_143b93190(param_1,local_90);
  cVar1 = FUN_143a8b0e0(local_90[0]);
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_1[0xd] != 0) {
    if ((param_3 != '\0') && (dVar5 = (double)FUN_143b381e0(param_1[0x14]), param_2 == dVar5)) {
      FUN_143b98a80(param_4,param_1[0x14]);
      return 1;
    }
    dVar5 = (double)FUN_143b381e0(param_1[0x14]);
    if (dVar5 <= param_2) {
      cVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))(param_1[0xd]);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*(longlong *)param_1[0x17] + 0x68))
                          (param_1[0x17],param_2,param_3,param_4);
        return uVar2;
      }
      return 0;
    }
  }
  if (param_1[0x15] == 0) {
    local_a4 = 0;
  }
  else {
    local_a0 = FUN_143b95d40(param_1);
    local_a8 = local_a0;
    do {
      local_a8 = local_a8 + -1;
      if ((local_a8 < (short)param_1[0x13]) ||
         (local_70 = (double)FUN_143b95d70(param_1,local_a8), local_70 < param_2)) break;
    } while ((param_3 != '\0') || (param_2 != local_70));
    if ((int)local_a8 == local_a0 + -1) {
      if (param_1[0x14] == 0) {
        local_a4 = 0;
      }
      else {
        FUN_143b98a80(param_4,param_1[0x14]);
        local_a4 = 1;
      }
    }
    else if (local_a8 < (short)param_1[0x13]) {
      FUN_143b98a80(param_4,param_1[0x12]);
      local_a4 = 1;
    }
    else {
      local_98 = *(longlong **)
                  (param_1[0x15] + (ulonglong)*(byte *)(param_1[0xc] + (longlong)(local_a8 + 1)) * 8
                  );
      local_88 = *(longlong **)
                  (param_1[0x15] + (ulonglong)*(byte *)(param_1[0xc] + (longlong)local_a8) * 8);
      local_78 = FUN_143b95d70(param_1,local_a8 + 1);
      FUN_143a8ac30(local_38);
      FUN_143a8ac30(local_60);
      FUN_143b86160(local_88,local_38);
      FUN_143b86160(local_98,local_60);
      cVar1 = FUN_143a8dd00(local_38,local_60);
      if (cVar1 != '\0') {
        local_7c = FUN_143ab3100(local_88);
        iVar3 = FUN_143ab3100(local_98);
        if (local_7c == iVar3) {
          local_80 = FAnalyticsSpan::GetStackDepth(local_88);
          iVar3 = FAnalyticsSpan::GetStackDepth(local_98);
          if (local_80 == iVar3) {
            local_a3 = (**(code **)(*param_1 + 0x68))(param_1,local_78,0,param_4);
            FUN_143a8dc60(local_60);
            FUN_143a8dc60(local_38);
            return local_a3;
          }
        }
      }
      FUN_143b98cd0(param_4,local_78);
      uVar4 = (**(code **)(*local_88 + 0x10))(local_88);
      FUN_143b98b20(param_4,uVar4);
      uVar4 = (**(code **)(*local_98 + 0x10))(local_98);
      FUN_143b98ba0(param_4,uVar4);
      local_a4 = 1;
      FUN_143a8dc60(local_60);
      FUN_143a8dc60(local_38);
    }
  }
  return local_a4;
}



// FUNCTION 143b94050 FUN_143b94050 body=208 status=ok
// SIG undefined FUN_143b94050(void)

undefined8
FUN_143b94050(longlong *param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5
             ,undefined1 param_6,undefined4 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_4 < 0) || (0xb < param_4)) {
    cVar1 = FUN_143a8b110(*param_8);
    if (cVar1 != '\0') {
      *param_8 = 1;
    }
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_143b4c990(param_3,param_4);
    uVar2 = (**(code **)(*param_1 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)cVar1,param_8);
  }
  return uVar2;
}



// FUNCTION 143b94130 FUN_143b94130 body=490 status=ok
// SIG undefined FUN_143b94130(void)

ulonglong FUN_143b94130(longlong param_1,char param_2,int param_3,int param_4,int param_5,
                       byte param_6,int param_7,int param_8,undefined4 *param_9)

{
  char cVar1;
  ulonglong uVar2;
  double dVar3;
  int local_res18;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  int local_18;
  int local_14;
  double local_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  cVar1 = FUN_143a8b0e0(*param_9);
  if (cVar1 == '\0') {
    if ((((((param_2 == '\x01') || (param_2 == '\0')) && (-1 < param_4)) &&
         (((param_4 < 0xc && (0 < param_5)) &&
          ((param_5 <= param_8 && ((param_6 != 0 && (param_6 < 8)))))))) && (-1 < param_7)) &&
       (((param_7 < 86400000 && (0x1b < param_8)) && (param_8 < 0x20)))) {
      local_res18 = param_3;
      if (param_2 == '\0') {
        local_res18 = -param_3;
      }
      if ((*(longlong *)(param_1 + 0x68) == 0) || (local_res18 < *(int *)(param_1 + 0x78))) {
        dVar3 = (double)FUN_143b91d10(local_res18,param_4,param_5);
        local_10 = dVar3 * 86400000.0 + (double)param_7;
        FUN_143b937a0(param_1,local_10,1,3,1,&local_14,&local_18);
        uVar2 = (ulonglong)(uint)(local_14 + local_18);
      }
      else {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))
                          (*(undefined8 *)(param_1 + 0x68),param_2,local_res18,param_4,param_5,
                           param_6,CONCAT44(uVar4,param_7),param_8,param_9);
      }
    }
    else {
      *param_9 = 1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b94320 FUN_143b94320 body=203 status=ok
// SIG undefined FUN_143b94320(void)

void FUN_143b94320(longlong param_1,double param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x68) == 0) || (param_2 < *(double *)(param_1 + 0x70))) {
      FUN_143b937a0(param_1,param_2,param_3,4,CONCAT44(uVar2,0xc),param_4,param_5);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
                (*(undefined8 *)(param_1 + 0x68),param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 143b943f0 FUN_143b943f0 body=217 status=ok
// SIG undefined FUN_143b943f0(void)

void FUN_143b943f0(longlong param_1,double param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x68) == 0) || (param_2 < *(double *)(param_1 + 0x70))) {
      FUN_143b937a0(param_1,param_2,1,param_3,CONCAT44(uVar2,param_4),param_5,param_6);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x98))
                (*(undefined8 *)(param_1 + 0x68),param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 143b944d0 FUN_143b944d0 body=1122 status=ok
// SIG undefined FUN_143b944d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b944d0(longlong *param_1,double param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  short local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  int local_8c;
  int local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  FUN_143b93190(param_1,&local_90);
  cVar1 = FUN_143a8b0e0(local_90);
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_1[0xd] != 0) {
    if ((param_3 != '\0') && (dVar5 = (double)FUN_143b381e0(param_1[0x14]), param_2 == dVar5)) {
      FUN_143b98a80(param_4,param_1[0x14]);
      return 1;
    }
    dVar5 = (double)FUN_143b381e0(param_1[0x14]);
    if (dVar5 < param_2) {
      cVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))(param_1[0xd]);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*(longlong *)param_1[0x17] + 0x70))
                          (param_1[0x17],param_2,param_3,param_4);
        return uVar2;
      }
      FUN_143b98a80(param_4,param_1[0x14]);
      return 1;
    }
  }
  if (param_1[0x15] == 0) {
    local_a4 = 0;
  }
  else {
    local_a8 = FUN_143b95d40(param_1);
    do {
      local_a8 = local_a8 + -1;
      if ((local_a8 < (short)param_1[0x13]) ||
         (local_80 = (double)FUN_143b95d70(param_1,local_a8), local_80 < param_2)) break;
    } while ((param_3 == '\0') || (param_2 != local_80));
    if (local_a8 < (short)param_1[0x13]) {
      local_a4 = 0;
    }
    else if (local_a8 == (short)param_1[0x13]) {
      FUN_143b98a80(param_4,param_1[0x12]);
      local_a4 = 1;
    }
    else {
      local_98 = *(longlong **)
                  (param_1[0x15] + (ulonglong)*(byte *)(param_1[0xc] + (longlong)local_a8) * 8);
      local_a0 = *(longlong **)
                  (param_1[0x15] +
                  (ulonglong)*(byte *)(param_1[0xc] + (longlong)(local_a8 + -1)) * 8);
      local_78 = FUN_143b95d70(param_1,local_a8);
      FUN_143a8ac30(local_40);
      FUN_143a8ac30(local_68);
      FUN_143b86160(local_a0,local_40);
      FUN_143b86160(local_98,local_68);
      cVar1 = FUN_143a8dd00(local_40,local_68);
      if (cVar1 != '\0') {
        local_88 = FUN_143ab3100(local_a0);
        iVar3 = FUN_143ab3100(local_98);
        if (local_88 == iVar3) {
          local_8c = FAnalyticsSpan::GetStackDepth(local_a0);
          iVar3 = FAnalyticsSpan::GetStackDepth(local_98);
          if (local_8c == iVar3) {
            local_a3 = (**(code **)(*param_1 + 0x70))(param_1,local_78,0,param_4);
            FUN_143a8dc60(local_68);
            FUN_143a8dc60(local_40);
            return local_a3;
          }
        }
      }
      FUN_143b98cd0(param_4,local_78);
      uVar4 = (**(code **)(*local_a0 + 0x10))(local_a0);
      FUN_143b98b20(param_4,uVar4);
      uVar4 = (**(code **)(*local_98 + 0x10))(local_98);
      FUN_143b98ba0(param_4,uVar4);
      local_a4 = 1;
      FUN_143a8dc60(local_68);
      FUN_143a8dc60(local_40);
    }
  }
  return local_a4;
}



// FUNCTION 143b94950 FUN_143b94950 body=86 status=ok
// SIG undefined FUN_143b94950(void)

undefined4 FUN_143b94950(longlong *param_1)

{
  double dVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_18 = 0;
  dVar1 = (double)FUN_143a91970();
  (**(code **)(*param_1 + 0x18))(param_1,SUB84(dVar1 * 1000.0,0),0,&local_14,local_10,&local_18);
  return local_14;
}



// FUNCTION 143b949b0 FUN_143b949b0 body=8 status=ok
// SIG undefined FUN_143b949b0(void)

undefined * FUN_143b949b0(void)

{
  return &DAT_146bc8281;
}



// FUNCTION 143b949c0 FUN_143b949c0 body=510 status=ok
// SIG undefined FUN_143b949c0(void)

void FUN_143b949c0(longlong param_1,undefined8 *param_2,longlong param_3,int *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int local_38;
  int local_34;
  int local_30 [2];
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [24];
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143b93190(param_1,param_5);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      *param_2 = *(undefined8 *)(param_1 + 0x88);
      local_38 = 0;
      if ((*(longlong *)(param_1 + 0xa8) != 0) && (0 < *param_4)) {
        for (local_34 = 0; local_34 < *(short *)(param_1 + 0xb0); local_34 = local_34 + 1) {
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_34 * 8) != 0) {
            *(undefined8 *)(param_3 + (longlong)local_38 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_34 * 8);
            local_38 = local_38 + 1;
            if (*param_4 <= local_38) break;
          }
        }
      }
      if ((*(longlong *)(param_1 + 0xb8) != 0) && (local_38 < *param_4)) {
        local_30[0] = *param_4 - local_38;
        local_28 = *(undefined8 *)(param_1 + 0xb8);
        local_20 = **(longlong **)(param_1 + 0xb8);
        (**(code **)(local_20 + 0x88))
                  (local_28,local_18,param_3 + (longlong)local_38 * 8,local_30,param_5);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          return;
        }
        local_38 = local_38 + local_30[0];
      }
      *param_4 = local_38;
    }
  }
  return;
}



// FUNCTION 143b94bc0 FUN_143b94bc0 body=653 status=ok
// SIG undefined FUN_143b94bc0(void)

undefined1 FUN_143b94bc0(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  undefined1 local_18;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else {
    lVar3 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                       &icu_53::OlsonTimeZone::RTTI_Type_Descriptor,0);
    if (lVar3 == 0) {
      local_18 = 0;
    }
    else if (*(longlong *)(param_1 + 0x60) == *(longlong *)(lVar3 + 0x60)) {
      local_18 = 1;
    }
    else if ((((*(longlong *)(param_1 + 0x68) == 0) && (*(longlong *)(lVar3 + 0x68) != 0)) ||
             ((*(longlong *)(param_1 + 0x68) != 0 && (*(longlong *)(lVar3 + 0x68) == 0)))) ||
            (((*(longlong *)(param_1 + 0x68) != 0 && (*(longlong *)(lVar3 + 0x68) != 0)) &&
             (cVar1 = FUN_143b358c0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar3 + 0x68)),
             cVar1 != '\0')))) {
      local_18 = 0;
    }
    else if ((*(longlong *)(param_1 + 0x68) == 0) ||
            ((*(int *)(param_1 + 0x78) == *(int *)(lVar3 + 0x78) &&
             (*(double *)(param_1 + 0x70) == *(double *)(lVar3 + 0x70))))) {
      if (((*(short *)(param_1 + 0x50) == *(short *)(lVar3 + 0x50)) &&
          ((*(short *)(param_1 + 0x30) == *(short *)(lVar3 + 0x30) &&
           (*(short *)(param_1 + 0x32) == *(short *)(lVar3 + 0x32))))) &&
         (*(short *)(param_1 + 0x34) == *(short *)(lVar3 + 0x34))) {
        cVar1 = FUN_143b93100(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar3 + 0x38),
                              ((longlong)*(short *)(param_1 + 0x30) & 0x1fffffffU) << 3);
        if ((((cVar1 != '\0') &&
             (cVar1 = FUN_143b93100(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar3 + 0x40),
                                    ((longlong)*(short *)(param_1 + 0x32) & 0x3fffffffU) << 2),
             cVar1 != '\0')) &&
            (cVar1 = FUN_143b93100(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(lVar3 + 0x48),
                                   ((longlong)*(short *)(param_1 + 0x34) & 0x1fffffffU) << 3),
            cVar1 != '\0')) &&
           (cVar1 = FUN_143b93100(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar3 + 0x58),
                                  ((longlong)*(short *)(param_1 + 0x50) & 0x1fffffffU) << 3),
           cVar1 != '\0')) {
          sVar2 = FUN_143b95d40(param_1);
          cVar1 = FUN_143b93100(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(lVar3 + 0x60),
                                (int)sVar2);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        local_18 = 0;
      }
      else {
        local_18 = 0;
      }
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}



// FUNCTION 143b94e50 FUN_143b94e50 body=99 status=ok
// SIG undefined FUN_143b94e50(void)

bool FUN_143b94e50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_14;
  undefined1 local_10 [16];
  
  (**(code **)(*param_1 + 0x18))(param_1,param_2,0,local_10,&local_14,param_3);
  return local_14 != 0;
}



// FUNCTION 143b94ec0 FUN_143b94ec0 body=34 status=ok
// SIG undefined FUN_143b94ec0(void)

void FUN_143b94ec0(undefined8 param_1,undefined8 param_2)

{
  FUN_143b94ef0(param_1,param_2);
  return;
}



// FUNCTION 143b94ef0 FUN_143b94ef0 body=3493 status=ok
// SIG undefined FUN_143b94ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b94ef0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  int local_230;
  undefined4 local_228;
  short local_218;
  ushort local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  longlong *local_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined1 *local_118;
  longlong local_110;
  undefined1 *local_108;
  undefined1 local_100 [32];
  undefined8 local_e0;
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_e0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143b93470(param_1);
    FUN_143a8ac30(local_d8);
    FUN_143b86160(param_1,local_d8);
    local_158 = FUN_143a8d4f0(local_60,1,L"(STD)",0xffffffff);
    local_148 = local_158;
    FUN_143a8dda0(local_b0,local_d8,local_158);
    FUN_143a8dc60(local_60);
    local_168 = FUN_143a8d4f0(local_38,1,L"(DST)",0xffffffff);
    local_130 = local_168;
    FUN_143a8dda0(local_88,local_d8,local_168);
    FUN_143a8dc60(local_38);
    local_200 = FUN_143b95cc0(param_1);
    local_200 = local_200 * 1000;
    local_208 = FUN_143b95ca0(param_1);
    local_208 = local_208 * 1000;
    local_1c8 = FUN_143a8d310(0x38);
    if (local_1c8 == 0) {
      local_198 = 0;
    }
    else {
      if (local_208 == 0) {
        local_190 = local_b0;
      }
      else {
        local_190 = local_88;
      }
      local_118 = local_190;
      local_198 = FUN_143bec820(local_1c8,local_190,local_200,local_208);
    }
    local_138 = local_198;
    *(undefined8 *)(param_1 + 0x88) = local_198;
    if (*(longlong *)(param_1 + 0x88) == 0) {
      *param_2 = 7;
      FUN_143b93470(param_1);
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_b0);
      FUN_143a8dc60(local_d8);
    }
    else {
      sVar2 = FUN_143b95d40(param_1);
      local_210 = (int)sVar2;
      if (0 < local_210) {
        *(undefined2 *)(param_1 + 0x98) = 0;
        for (local_218 = 0;
            (local_218 < local_210 &&
            (*(char *)(*(longlong *)(param_1 + 0x60) + (longlong)local_218) == '\0'));
            local_218 = local_218 + 1) {
          *(short *)(param_1 + 0x98) = *(short *)(param_1 + 0x98) + 1;
        }
        if (local_218 != local_210) {
          local_1e8 = (undefined8 *)FUN_143aa7a40((longlong)local_210 << 3);
          if (local_1e8 == (undefined8 *)0x0) {
            *param_2 = 7;
            FUN_143b93470(param_1);
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_d8);
            return;
          }
          for (local_214 = 0; (short)local_214 < *(short *)(param_1 + 0x50);
              local_214 = local_214 + 1) {
            local_20c = 0;
            for (local_218 = *(short *)(param_1 + 0x98); local_218 < local_210;
                local_218 = local_218 + 1) {
              if ((local_214 == *(byte *)(*(longlong *)(param_1 + 0x60) + (longlong)local_218)) &&
                 ((local_1b8 = (double)FUN_143b95d70(param_1,local_218),
                  *(longlong *)(param_1 + 0x68) == 0 || (local_1b8 <= *(double *)(param_1 + 0x70))))
                 ) {
                local_1e8[local_20c] = local_1b8;
                local_20c = local_20c + 1;
              }
            }
            if (0 < local_20c) {
              local_200 = *(int *)(*(longlong *)(param_1 + 0x58) +
                                  (longlong)((int)(short)local_214 << 1) * 4) * 1000;
              local_208 = *(int *)(*(longlong *)(param_1 + 0x58) +
                                  (longlong)((short)local_214 * 2 + 1) * 4) * 1000;
              if (*(longlong *)(param_1 + 0xa8) == 0) {
                *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_1 + 0x50);
                uVar4 = FUN_143aa7a40((longlong)*(short *)(param_1 + 0xb0) << 3);
                *(undefined8 *)(param_1 + 0xa8) = uVar4;
                if (*(longlong *)(param_1 + 0xa8) == 0) {
                  *param_2 = 7;
                  FUN_143b93470(param_1);
                  FUN_143aa79f0(local_1e8);
                  FUN_143a8dc60(local_88);
                  FUN_143a8dc60(local_b0);
                  FUN_143a8dc60(local_d8);
                  return;
                }
                for (local_204 = 0; local_204 < *(short *)(param_1 + 0xb0);
                    local_204 = local_204 + 1) {
                  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_204 * 8) = 0;
                }
              }
              local_1a8 = FUN_143a8d310(0x148);
              if (local_1a8 == 0) {
                local_188 = 0;
              }
              else {
                if (local_208 == 0) {
                  local_178 = local_b0;
                }
                else {
                  local_178 = local_88;
                }
                local_108 = local_178;
                local_228 = 2;
                local_230 = local_20c;
                local_238 = local_1e8;
                local_188 = FUN_143bec900(local_1a8,local_178,local_200,local_208);
              }
              local_120 = local_188;
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)(short)local_214 * 8) =
                   local_188;
              if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)(short)local_214 * 8) == 0
                 ) {
                *param_2 = 7;
                FUN_143b93470(param_1);
                FUN_143a8dc60(local_88);
                FUN_143a8dc60(local_b0);
                FUN_143a8dc60(local_d8);
                return;
              }
            }
          }
          FUN_143aa79f0(local_1e8);
          local_214 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x60) +
                                       (longlong)*(short *)(param_1 + 0x98));
          local_1d0 = FUN_143a8d310(0x20);
          if (local_1d0 == 0) {
            local_1c0 = 0;
          }
          else {
            local_110 = (longlong)(short)local_214;
            local_128 = *(longlong *)(param_1 + 0xa8);
            uVar4 = FUN_143b95d70(param_1,*(undefined2 *)(param_1 + 0x98));
            local_1c0 = FUN_143b98890(local_1d0,uVar4,*(undefined8 *)(param_1 + 0x88),
                                      *(undefined8 *)(local_128 + local_110 * 8));
          }
          local_160 = local_1c0;
          *(undefined8 *)(param_1 + 0x90) = local_1c0;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            *param_2 = 7;
            FUN_143b93470(param_1);
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_d8);
            return;
          }
        }
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        local_1e0 = *(undefined8 *)(param_1 + 0x70);
        local_1f0 = 0;
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                          (*(undefined8 *)(param_1 + 0x68));
        if (cVar1 == '\0') {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
                            (*(undefined8 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0xb8) = uVar4;
          if (*(longlong *)(param_1 + 0xb8) == 0) {
            *param_2 = 7;
            FUN_143b93470(param_1);
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_d8);
            return;
          }
          FUN_143b86160(*(undefined8 *)(param_1 + 0x68),local_d8);
          local_1a0 = FUN_143a8d310(0x148);
          if (local_1a0 == 0) {
            local_1d8 = 0;
          }
          else {
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))
                              (*(undefined8 *)(param_1 + 0x68));
            local_228 = 2;
            local_230 = 1;
            local_238 = &local_1e0;
            local_1d8 = FUN_143bec900(local_1a0,local_d8,uVar3,0);
          }
          local_150 = local_1d8;
          local_1f0 = local_1d8;
          if (local_1d8 == 0) {
            *param_2 = 7;
            FUN_143b93470(param_1);
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_d8);
            return;
          }
        }
        else {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
                            (*(undefined8 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0xb8) = uVar4;
          if (*(longlong *)(param_1 + 0xb8) == 0) {
            *param_2 = 7;
            FUN_143b93470(param_1);
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_d8);
            return;
          }
          FUN_143b88540(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x78));
          FUN_143b98930(local_100);
          (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x68))
                    (*(undefined8 *)(param_1 + 0xb8),local_1e0,0,local_100);
          local_1b0 = (longlong *)
                      TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                      ::GetObjectForTimerManager(local_100);
          local_1f0 = (**(code **)(*local_1b0 + 0x10))(local_1b0);
          if (local_1f0 == 0) {
            *param_2 = 7;
            FUN_143b93470(param_1);
            FUN_143b989a0(local_100);
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_d8);
            return;
          }
          local_1e0 = FUN_143b381e0(local_100);
          FUN_143b989a0(local_100);
        }
        local_1f8 = (longlong *)0x0;
        if (0 < local_210) {
          local_1f8 = *(longlong **)
                       (*(longlong *)(param_1 + 0xa8) +
                       (ulonglong)
                       *(byte *)(*(longlong *)(param_1 + 0x60) + (longlong)(local_210 + -1)) * 8);
        }
        if (local_1f8 == (longlong *)0x0) {
          local_1f8 = *(longlong **)(param_1 + 0x88);
        }
        local_180 = FUN_143a8d310(0x20);
        if (local_180 == 0) {
          local_170 = 0;
        }
        else {
          local_170 = FUN_143b98930(local_180);
        }
        local_140 = local_170;
        *(undefined8 *)(param_1 + 0xa0) = local_170;
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          *param_2 = 7;
          FUN_143b93470(param_1);
          FUN_143a8dc60(local_88);
          FUN_143a8dc60(local_b0);
          FUN_143a8dc60(local_d8);
          return;
        }
        FUN_143b98cd0(*(undefined8 *)(param_1 + 0xa0),local_1e0);
        uVar4 = (**(code **)(*local_1f8 + 0x10))(local_1f8);
        FUN_143b98b20(*(undefined8 *)(param_1 + 0xa0),uVar4);
        FUN_143b98ba0(*(undefined8 *)(param_1 + 0xa0),local_1f0);
      }
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_b0);
      FUN_143a8dc60(local_d8);
    }
  }
  return;
}



// FUNCTION 143b95ca0 FUN_143b95ca0 body=27 status=ok
// SIG undefined FUN_143b95ca0(void)

undefined4 FUN_143b95ca0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 4);
}



// FUNCTION 143b95cc0 FUN_143b95cc0 body=27 status=ok
// SIG undefined FUN_143b95cc0(void)

undefined4 FUN_143b95cc0(longlong param_1)

{
  return **(undefined4 **)(param_1 + 0x58);
}



// FUNCTION 143b95ce0 FUN_143b95ce0 body=88 status=ok
// SIG undefined FUN_143b95ce0(void)

undefined4 FUN_143b95ce0(longlong param_1,short param_2)

{
  ushort uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)(short)(uVar1 << 1) * 4);
}



// FUNCTION 143b95d40 FUN_143b95d40 body=37 status=ok
// SIG undefined FUN_143b95d40(void)

int FUN_143b95d40(longlong param_1)

{
  return (int)*(short *)(param_1 + 0x30) + (int)*(short *)(param_1 + 0x32) +
         (int)*(short *)(param_1 + 0x34);
}



// FUNCTION 143b95d70 FUN_143b95d70 body=47 status=ok
// SIG undefined FUN_143b95d70(void)

double FUN_143b95d70(undefined8 param_1,undefined2 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143b95da0(param_1,param_2);
  return (double)lVar1 * 1000.0;
}



// FUNCTION 143b95da0 FUN_143b95da0 body=223 status=ok
// SIG undefined FUN_143b95da0(void)

longlong FUN_143b95da0(longlong param_1,short param_2)

{
  longlong lVar1;
  
  if (param_2 < *(short *)(param_1 + 0x30)) {
    lVar1 = CONCAT44(*(undefined4 *)
                      (*(longlong *)(param_1 + 0x38) + (longlong)((int)param_2 << 1) * 4),
                     *(undefined4 *)
                      (*(longlong *)(param_1 + 0x38) + (longlong)(param_2 * 2 + 1) * 4));
  }
  else {
    param_2 = param_2 - *(short *)(param_1 + 0x30);
    if (param_2 < *(short *)(param_1 + 0x32)) {
      lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 4);
    }
    else {
      param_2 = param_2 - *(short *)(param_1 + 0x32);
      lVar1 = CONCAT44(*(undefined4 *)
                        (*(longlong *)(param_1 + 0x48) + (longlong)((int)param_2 << 1) * 4),
                       *(undefined4 *)
                        (*(longlong *)(param_1 + 0x48) + (longlong)(param_2 * 2 + 1) * 4));
    }
  }
  return lVar1;
}



// FUNCTION 143b95e80 FUN_143b95e80 body=420 status=ok
// SIG undefined FUN_143b95e80(void)

undefined8 FUN_143b95e80(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  short local_58;
  int local_54;
  int local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  double local_18;
  
  local_38 = (double)FUN_143a91970();
  if ((*(longlong *)(param_1 + 0x68) == 0) || (local_38 < *(double *)(param_1 + 0x70))) {
    FUN_143b92450(local_38,&local_54,local_28,local_24,local_30,local_20,local_2c);
    local_40 = (double)FUN_143b91d10(local_54,0,1);
    local_40 = local_40 * 86400.0;
    local_18 = (double)FUN_143b91d10(local_54 + 1,0,1);
    local_18 = local_18 * 86400.0;
    local_58 = 0;
    while( true ) {
      local_50 = (int)local_58;
      sVar1 = FUN_143b95d40(param_1);
      if (sVar1 <= local_50) break;
      lVar4 = FUN_143b95da0(param_1,local_58);
      local_48 = (double)lVar4;
      if (local_18 <= local_48) break;
      if (((local_40 <= local_48) && (iVar2 = FUN_143b936e0(param_1,local_58), iVar2 != 0)) ||
         ((local_40 < local_48 && (iVar2 = FUN_143b936e0(param_1,local_58 + -1), iVar2 != 0)))) {
        return 1;
      }
      local_58 = local_58 + 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))(*(undefined8 *)(param_1 + 0x68));
  }
  return uVar3;
}



// FUNCTION 143b96030 FUN_143b96030 body=110 status=ok
// SIG undefined FUN_143b96030(void)

int FUN_143b96030(longlong param_1,short param_2)

{
  ushort uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2);
  }
  return *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)(short)(uVar1 << 1) * 4) +
         *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)((short)(uVar1 << 1) + 1) * 4);
}



// FUNCTION 143b960a0 FUN_143b960a0 body=453 status=ok
// SIG undefined FUN_143b960a0(void)

void FUN_143b960a0(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *local_58;
  undefined8 *local_50;
  
  lVar2 = FUN_143a8d310(0x28);
  if (lVar2 == 0) {
    local_58 = (undefined8 *)0x0;
  }
  else {
    local_58 = (undefined8 *)FUN_143b090a0(lVar2,0,FUN_143ab3050,param_1);
  }
  DAT_146bc82f0 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    *param_1 = 7;
  }
  lVar2 = FUN_143a8d310(0x28);
  if (lVar2 == 0) {
    local_50 = (undefined8 *)0x0;
  }
  else {
    local_50 = (undefined8 *)FUN_143b090a0(lVar2,0,FUN_143ab3050,param_1);
  }
  DAT_146bc82f8 = local_50;
  if (local_50 == (undefined8 *)0x0) {
    *param_1 = 7;
  }
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 != '\0') {
    if (DAT_146bc82f0 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc82f0)(DAT_146bc82f0,1);
    }
    if (DAT_146bc82f8 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc82f8)(DAT_146bc82f8,1);
    }
    DAT_146bc82f0 = (undefined8 *)0x0;
    DAT_146bc82f8 = (undefined8 *)0x0;
  }
  FUN_143b68380(0xd,FUN_143b98700);
  return;
}



// FUNCTION 143b96270 FUN_143b96270 body=334 status=ok
// SIG undefined FUN_143b96270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b96270(int param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78 = param_1 < 0;
  local_74 = param_1;
  if ((bool)local_78) {
    local_74 = -param_1;
  }
  local_70 = (local_74 / 1000) % 0x3c;
  local_74 = (local_74 / 1000) / 0x3c;
  local_6c = local_74 % 0x3c;
  local_68 = local_74 / 0x3c;
  FUN_143a8ac30(local_38,(longlong)local_74 % 0x3c & 0xffffffff);
  local_88 = local_38;
  FUN_143b96900((undefined1)local_68,(undefined1)local_6c,(undefined1)local_70,local_78);
  local_60 = FUN_143a8d310(0x88);
  if (local_60 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_143b85140(local_60,param_1,local_38);
  }
  local_48 = local_58;
  local_50 = local_58;
  FUN_143a8dc60(local_38);
  return local_50;
}



// FUNCTION 143b963c0 FUN_143b963c0 body=1235 status=ok
// SIG undefined FUN_143b963c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b963c0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198 [2];
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  char *local_170;
  undefined8 *local_168;
  int local_160;
  undefined8 *local_158;
  longlong local_150;
  wchar_t *local_148;
  ulonglong local_140;
  wchar_t *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [48];
  char local_a8 [144];
  ulonglong local_18;
  
  local_e0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_190 = (undefined8 *)0x0;
  local_198[0] = 0;
  FUN_143a8ac30(local_d8);
  local_180 = FUN_143aa56e0(0,"metaZones",local_198);
  FUN_143aa37c0(local_180,"metazoneInfo",local_180,local_198);
  FUN_143b96aa0(param_1,local_d8,local_198);
  cVar1 = FUN_143a8b110(local_198[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143a904f0(local_d8);
    local_1a0 = 0;
    local_1a8 = 0x81;
    local_160 = FUN_143a8f880(local_d8,0,uVar2,local_a8);
    local_140 = (ulonglong)local_160;
    if (0x80 < local_140) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_a8[local_140] = '\0';
    for (local_170 = local_a8; *local_170 != '\0'; local_170 = local_170 + 1) {
      if (*local_170 == '/') {
        *local_170 = ':';
      }
    }
    FUN_143aa37c0(local_180,local_a8,local_180,local_198);
    cVar1 = FUN_143a8b110(local_198[0]);
    if (cVar1 != '\0') {
      local_188 = 0;
      do {
        while( true ) {
          while( true ) {
            cVar1 = FUN_143aa54f0(local_180);
            if (cVar1 == '\0') goto LAB_143b967d8;
            local_188 = FUN_143aa4880(local_180,local_188,local_198);
            local_108 = FUN_143aa4da0(local_188,0,0,local_198);
            local_138 = L"1970-01-01 00:00";
            local_148 = L"9999-12-31 23:59";
            iVar3 = FUN_143aa4d80(local_188);
            if (iVar3 == 3) {
              local_138 = (wchar_t *)FUN_143aa4da0(local_188,1,0,local_198);
              local_148 = (wchar_t *)FUN_143aa4da0(local_188,2,0,local_198);
            }
            cVar1 = FUN_143a8b0e0(local_198[0]);
            if (cVar1 == '\0') break;
            local_198[0] = 0;
          }
          local_118 = FUN_143b982a0(local_138,local_198);
          local_e8 = FUN_143b982a0(local_148,local_198);
          cVar1 = FUN_143a8b0e0(local_198[0]);
          if (cVar1 == '\0') break;
          local_198[0] = 0;
        }
        local_178 = (undefined8 *)FUN_143aa7a40(0x18);
        if (local_178 == (undefined8 *)0x0) {
          local_198[0] = 7;
          break;
        }
        *local_178 = local_108;
        local_178[1] = local_118;
        local_178[2] = local_e8;
        if (local_190 == (undefined8 *)0x0) {
          local_150 = FUN_143a8d310(0x28);
          if (local_150 == 0) {
            local_130 = (undefined8 *)0x0;
          }
          else {
            local_130 = (undefined8 *)FUN_143b090a0(local_150,FUN_143b986d0,0,local_198);
          }
          local_128 = local_130;
          local_190 = local_130;
          cVar1 = FUN_143a8b0e0(local_198[0]);
          if (cVar1 != '\0') {
            local_f0 = local_190;
            local_168 = local_190;
            if (local_190 == (undefined8 *)0x0) {
              local_f8 = 0;
            }
            else {
              local_f8 = (**(code **)*local_190)(local_190,1);
            }
            FUN_143b986d0(local_178);
            FUN_143aa79f0(local_178);
            break;
          }
        }
        FUN_143b09430(local_190,local_178,local_198);
        cVar1 = FUN_143a8b0e0(local_198[0]);
      } while (cVar1 == '\0');
LAB_143b967d8:
      FUN_143aa2ef0(local_188);
      cVar1 = FUN_143a8b0e0(local_198[0]);
      if ((cVar1 != '\0') && (local_190 != (undefined8 *)0x0)) {
        local_120 = local_190;
        local_158 = local_190;
        if (local_190 == (undefined8 *)0x0) {
          local_110 = 0;
        }
        else {
          local_110 = (**(code **)*local_190)(local_190,1);
        }
        local_190 = (undefined8 *)0x0;
      }
    }
  }
  FUN_143aa2ef0(local_180);
  local_100 = local_190;
  FUN_143a8dc60(local_d8);
  return local_100;
}



// FUNCTION 143b968a0 FUN_143b968a0 body=64 status=ok
// SIG undefined FUN_143b968a0(void)

undefined8 FUN_143b968a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_143a9aa60(&DAT_146bc82e8,FUN_143b97d80);
  if (DAT_146bc82e0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143ab32d0(DAT_146bc82e0,param_1);
  }
  return uVar1;
}



// FUNCTION 143b968e0 FUN_143b968e0 body=24 status=ok
// SIG undefined FUN_143b968e0(void)

void FUN_143b968e0(undefined8 param_1)

{
  FUN_143b4b090(param_1);
  return;
}



// FUNCTION 143b96900 FUN_143b96900 body=363 status=ok
// SIG undefined FUN_143b96900(void)

undefined8 FUN_143b96900(byte param_1,byte param_2,byte param_3,char param_4,undefined8 param_5)

{
  FUN_143ab21b0(param_5,&DAT_145d14ba0,0xffffffff);
  if ((param_1 != 0) || (param_2 != 0)) {
    if (param_4 == '\0') {
      FUN_143acc590(param_5,0x2b);
    }
    else {
      FUN_143acc590(param_5,0x2d);
    }
    FUN_143acc590(param_5,(int)(((ulonglong)param_1 % 100) / 10) + 0x30);
    FUN_143acc590(param_5,(uint)param_1 % 10 + 0x30);
    FUN_143acc590(param_5,0x3a);
    FUN_143acc590(param_5,(int)(((ulonglong)param_2 % 100) / 10) + 0x30);
    FUN_143acc590(param_5,(uint)param_2 % 10 + 0x30);
    if (param_3 != 0) {
      FUN_143acc590(param_5,0x3a);
      FUN_143acc590(param_5,(int)(((ulonglong)param_3 % 100) / 10) + 0x30);
      FUN_143acc590(param_5,(uint)param_3 % 10 + 0x30);
    }
  }
  return param_5;
}



// FUNCTION 143b96a70 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc82e8,FUN_143b97d80);
  return DAT_146bc82d8;
}



// FUNCTION 143b96aa0 FUN_143b96aa0 body=116 status=ok
// SIG undefined FUN_143b96aa0(void)

undefined8 FUN_143b96aa0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_143b96bf0(param_1,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (lVar2 != 0)) {
    FUN_143a90d80(param_2,1,lVar2,0xffffffff);
  }
  else {
    FUN_143a90e90(param_2);
  }
  return param_2;
}



// FUNCTION 143b96b20 FUN_143b96b20 body=194 status=ok
// SIG undefined FUN_143b96b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b96b20(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                     &icu_53::OlsonTimeZone::RTTI_Type_Descriptor);
  if (lVar1 == 0) {
    local_58[0] = 0;
    FUN_143a8ac30(local_38);
    uVar2 = FUN_143b86160(param_1,local_38);
    local_50 = FUN_143b96bf0(uVar2,local_58);
    FUN_143a8dc60(local_38);
  }
  else {
    local_48 = param_1;
    local_50 = FUN_143b97520(param_1);
  }
  return local_50;
}



// FUNCTION 143b96bf0 FUN_143b96bf0 body=1304 status=ok
// SIG undefined FUN_143b96bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b96bf0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  char local_228;
  undefined4 local_224;
  longlong local_220;
  undefined8 local_218;
  char *local_210;
  char *local_208;
  int local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  char local_1b8 [144];
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a90330(param_1);
    if ((cVar1 == '\0') && (iVar2 = FUN_143a904f0(param_1), iVar2 < 0x81)) {
      FUN_143aa29a0(&DAT_146bc82c0,FUN_143b98190,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 == '\0') {
        local_220 = 0;
        local_224 = 0;
        FUN_143a8f920(param_1,local_128,0x81,&local_224);
        FUN_143ab2410(&DAT_146bc8288);
        local_220 = FUN_143ab32d0(DAT_146bc82b8,local_128);
        FUN_143ab2470(&DAT_146bc8288);
        if (local_220 == 0) {
          local_228 = '\0';
          local_230 = 0;
          local_238 = 0x81;
          FUN_143a8f880(param_1,0,0x7fffffff,local_1b8);
          local_208 = local_1b8;
          while( true ) {
            local_1e0 = (int)*local_208;
            local_208 = local_208 + 1;
            if (local_1e0 == 0) break;
            if (*local_208 == '/') {
              *local_208 = ':';
            }
          }
          local_1f0 = FUN_143aa56e0(0,"keyTypeData",&local_224);
          local_218 = FUN_143aa37c0(local_1f0,"typeMap",0,&local_224);
          FUN_143aa37c0(local_218,"timezone",local_218,&local_224);
          FUN_143aa37c0(local_218,local_1b8,local_218,&local_224);
          cVar1 = FUN_143a8b110(local_224);
          if (cVar1 != '\0') {
            local_220 = FUN_143b4b090(param_1);
            local_228 = '\x01';
          }
          if (local_220 == 0) {
            local_224 = 0;
            FUN_143aa37c0(local_1f0,"typeAlias",local_218,&local_224);
            FUN_143aa37c0(local_218,"timezone",local_218,&local_224);
            local_1e8 = FUN_143aa5130(local_218,local_1b8,0,&local_224);
            cVar1 = FUN_143a8b110(local_224);
            if (cVar1 != '\0') {
              local_220 = local_1e8;
            }
            if (local_220 == 0) {
              local_1f8 = FUN_143b4af50(param_1);
              if (local_1f8 == 0) {
                *param_2 = 1;
              }
              else {
                local_200 = FreeLib(local_1f8);
                FUN_143ab5770(local_1f8,local_1b8,local_200);
                local_1c8 = (ulonglong)local_200;
                if (0x80 < local_1c8) {
                    /* WARNING: Subroutine does not return */
                  __report_rangecheckfailure();
                }
                local_1b8[local_1c8] = '\0';
                local_210 = local_1b8;
                while( true ) {
                  local_1dc = (int)*local_210;
                  local_210 = local_210 + 1;
                  if (local_1dc == 0) break;
                  if (*local_210 == '/') {
                    *local_210 = ':';
                  }
                }
                local_224 = 0;
                local_1e8 = FUN_143aa5130(local_218,local_1b8,0,&local_224);
                cVar1 = FUN_143a8b110(local_224);
                if (cVar1 == '\0') {
                  local_220 = local_1f8;
                  local_228 = '\x01';
                }
                else {
                  local_220 = local_1e8;
                }
              }
            }
          }
          FUN_143aa2ef0(local_218);
          FUN_143aa2ef0(local_1f0);
          cVar1 = FUN_143a8b110(*param_2);
          if (cVar1 != '\0') {
            FUN_143ab2410(&DAT_146bc8288);
            local_1c0 = FUN_143ab32d0(DAT_146bc82b8,local_128);
            if ((local_1c0 == 0) && (local_1d8 = FUN_143b968e0(param_1), local_1d8 != 0)) {
              local_1c0 = FUN_143ab36d0(DAT_146bc82b8,local_1d8,local_220,param_2);
            }
            cVar1 = FUN_143a8b110(*param_2);
            if (((cVar1 != '\0') && (local_228 != '\0')) &&
               (local_1d0 = FUN_143ab32d0(DAT_146bc82b8,local_220), local_1d0 == 0)) {
              local_1d0 = FUN_143ab36d0(DAT_146bc82b8,local_220,local_220,param_2);
            }
            FUN_143ab2470(&DAT_146bc8288);
          }
        }
      }
      else {
        local_220 = 0;
      }
    }
    else {
      *param_2 = 1;
      local_220 = 0;
    }
  }
  else {
    local_220 = 0;
  }
  return local_220;
}



// FUNCTION 143b97110 FUN_143b97110 body=1037 status=ok
// SIG undefined FUN_143b97110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b97110(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  char local_98;
  char local_97;
  undefined4 local_94;
  char local_90 [8];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_88 = FUN_143b4bd60(param_1);
  if ((local_88 == 0) || (iVar2 = FUN_143ab4670(&DAT_145d14b48,local_88), iVar2 == 0)) {
    FUN_143a90e90(param_2);
  }
  else {
    FUN_143ab21b0(param_2,local_88,0xffffffff);
    if (param_3 != (undefined1 *)0x0) {
      local_90[0] = '\0';
      local_90[1] = 0;
      local_90[2] = 0;
      local_94 = 0;
      FUN_143aa29a0(&DAT_146bc8300,FUN_143b960a0,&local_94);
      cVar1 = FUN_143a8b0e0(local_94);
      if (cVar1 == '\0') {
        local_98 = 0;
        local_97 = 0;
        FUN_143ab2410(&DAT_146bc8288);
        local_98 = FUN_143b0fdf0(DAT_146bc82f0,local_88);
        local_97 = local_98;
        if (local_98 == '\0') {
          local_98 = FUN_143b0fdf0(DAT_146bc82f8,local_88);
        }
        FUN_143ab2470(&DAT_146bc8288);
        if (local_98 == '\0') {
          FUN_143ab5770(local_88,local_90,2);
          local_60 = (longlong *)FUN_143b4aec0(2,local_90,0,&local_94);
          local_68 = (**(code **)(*local_60 + 0x18))(local_60,&local_94);
          cVar1 = FUN_143a8b110(local_94);
          if ((cVar1 != '\0') && (local_68 == 1)) {
            local_97 = '\x01';
          }
          local_50 = local_60;
          local_70 = local_60;
          if (local_60 == (longlong *)0x0) {
            local_48 = 0;
          }
          else {
            local_48 = (**(code **)*local_60)(local_60,1);
          }
          FUN_143ab2410(&DAT_146bc8288);
          local_7c = 0;
          if (local_97 == '\0') {
            cVar1 = FUN_143b0fdf0(DAT_146bc82f8,local_88);
            if (cVar1 == '\0') {
              FUN_143b09430(DAT_146bc82f8,local_88,&local_7c);
            }
          }
          else {
            cVar1 = FUN_143b0fdf0(DAT_146bc82f0,local_88);
            if (cVar1 == '\0') {
              FUN_143b09430(DAT_146bc82f0,local_88,&local_7c);
            }
          }
          FUN_143ab2470(&DAT_146bc8288);
        }
        if (local_97 == '\0') {
          local_80 = 0;
          if (local_90[0] == '\0') {
            FUN_143ab5770(local_88,local_90,2);
          }
          local_78 = FUN_143aa56e0(0,"metaZones",&local_94);
          FUN_143aa37c0(local_78,"primaryZones",local_78,&local_94);
          local_58 = FUN_143aa5130(local_78,local_90,&local_80,&local_94);
          cVar1 = FUN_143a8b110(local_94);
          if (cVar1 != '\0') {
            cVar1 = FUN_143b0fc90(param_1,local_58,local_80);
            if (cVar1 == '\0') {
              *param_3 = 1;
            }
            else {
              FUN_143a8ac30(local_38);
              FUN_143b4b560(param_1,local_38,&local_94);
              cVar1 = FUN_143a8b110(local_94);
              if ((cVar1 != '\0') &&
                 (cVar1 = FUN_143b0fc90(local_38,local_58,local_80), cVar1 == '\0')) {
                *param_3 = 1;
              }
              FUN_143a8dc60(local_38);
            }
          }
          FUN_143aa2ef0(local_78);
        }
        else {
          *param_3 = 1;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 143b97520 FUN_143b97520 body=18 status=ok
// SIG undefined FUN_143b97520(void)

undefined8 FUN_143b97520(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// FUNCTION 143b97540 FUN_143b97540 body=201 status=ok
// SIG undefined FUN_143b97540(void)

undefined8 FUN_143b97540(undefined8 param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int local_24;
  
  bVar1 = false;
  lVar3 = FUN_143b97610(param_1);
  if (lVar3 != 0) {
    local_24 = 0;
    while( true ) {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(lVar3);
      if (iVar2 <= local_24) break;
      puVar4 = (undefined8 *)FUN_143b09610(lVar3,local_24);
      if (((double)puVar4[1] <= param_2) && (param_2 < (double)puVar4[2])) {
        FUN_143ab21b0(param_3,*puVar4,0xffffffff);
        bVar1 = true;
        break;
      }
      local_24 = local_24 + 1;
    }
  }
  if (!bVar1) {
    FUN_143a90e90(param_3);
  }
  return param_3;
}



// FUNCTION 143b97610 FUN_143b97610 body=706 status=ok
// SIG undefined FUN_143b97610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b97610(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_1b8 [32];
  int local_198 [2];
  undefined8 *local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_198[0] = 0;
  FUN_143a8f920(param_1,local_128,0x81,local_198);
  cVar1 = FUN_143a8b0e0(local_198[0]);
  if ((cVar1 == '\0') && (local_198[0] != -0x7c)) {
    FUN_143aa29a0(&DAT_146bc82d0,FUN_143b98210,local_198);
    cVar1 = FUN_143a8b0e0(local_198[0]);
    if (cVar1 == '\0') {
      local_190 = (undefined8 *)0x0;
      FUN_143ab2410(&DAT_146bc8288);
      local_190 = (undefined8 *)FUN_143ab32d0(DAT_146bc82c8,local_128);
      FUN_143ab2470(&DAT_146bc8288);
      if (local_190 == (undefined8 *)0x0) {
        local_188 = (undefined8 *)FUN_143b963c0(param_1);
        if (local_188 == (undefined8 *)0x0) {
          local_190 = (undefined8 *)0x0;
        }
        else {
          FUN_143ab2410(&DAT_146bc8288);
          local_190 = (undefined8 *)FUN_143ab32d0(DAT_146bc82c8,local_128);
          if (local_190 == (undefined8 *)0x0) {
            local_180 = FUN_143a904f0(param_1);
            local_180 = local_180 + 1;
            local_168 = FUN_143aa7a40((longlong)local_180 << 1);
            if (local_168 == 0) {
              local_190 = (undefined8 *)0x0;
              local_130 = local_188;
              local_160 = local_188;
              if (local_188 == (undefined8 *)0x0) {
                local_158 = 0;
              }
              else {
                local_158 = (**(code **)*local_188)(local_188,1);
              }
            }
            else {
              FUN_143a8f920(param_1,local_168,local_180,local_198);
              FUN_143ab36d0(DAT_146bc82c8,local_168,local_188,local_198);
              cVar1 = FUN_143a8b0e0(local_198[0]);
              if (cVar1 == '\0') {
                local_190 = local_188;
              }
              else {
                local_190 = (undefined8 *)0x0;
                local_140 = local_188;
                local_170 = local_188;
                if (local_188 == (undefined8 *)0x0) {
                  local_150 = 0;
                }
                else {
                  local_150 = (**(code **)*local_188)(local_188,1);
                }
              }
            }
          }
          else {
            local_148 = local_188;
            local_178 = local_188;
            if (local_188 == (undefined8 *)0x0) {
              local_138 = 0;
            }
            else {
              local_138 = (**(code **)*local_188)(local_188,1);
            }
          }
          FUN_143ab2470(&DAT_146bc8288);
        }
      }
    }
    else {
      local_190 = (undefined8 *)0x0;
    }
  }
  else {
    local_190 = (undefined8 *)0x0;
  }
  return local_190;
}



// FUNCTION 143b978e0 FUN_143b978e0 body=109 status=ok
// SIG undefined FUN_143b978e0(void)

undefined8 FUN_143b978e0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  
  local_18 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                     &icu_53::OlsonTimeZone::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
    local_18 = FUN_143b97520(param_1);
  }
  if (local_18 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143b979a0(local_18);
  }
  return uVar2;
}



// FUNCTION 143b97950 FUN_143b97950 body=80 status=ok
// SIG undefined FUN_143b97950(void)

undefined8 FUN_143b97950(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  longlong local_10;
  
  local_18[0] = 0;
  local_10 = FUN_143b96bf0(param_1,local_18);
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if ((cVar1 == '\0') && (local_10 != 0)) {
    uVar2 = FUN_143b979a0(local_10);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b979a0 FUN_143b979a0 body=335 status=ok
// SIG undefined FUN_143b979a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b979a0(undefined8 param_1)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  undefined8 local_d0;
  char *local_c8;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  char local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b0 = 0;
  local_c0 = FreeLib(param_1);
  FUN_143ab5770(param_1,local_a8,local_c0);
  local_b8 = (ulonglong)local_c0;
  if (0x80 < local_b8) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  local_a8[local_b8] = '\0';
  local_c8 = local_a8;
  while( true ) {
    local_bc = (int)*local_c8;
    local_c8 = local_c8 + 1;
    if (local_bc == 0) break;
    if (*local_c8 == '/') {
      *local_c8 = ':';
    }
  }
  local_d8[0] = 0;
  local_d0 = FUN_143aa56e0(0,"keyTypeData",local_d8);
  FUN_143aa37c0(local_d0,"typeMap",local_d0,local_d8);
  FUN_143aa37c0(local_d0,"timezone",local_d0,local_d8);
  local_b0 = FUN_143aa5130(local_d0,local_a8,0,local_d8);
  FUN_143aa2ef0(local_d0);
  return local_b0;
}



// FUNCTION 143b97af0 FUN_143b97af0 body=652 status=ok
// SIG undefined FUN_143b97af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b97af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  local_c0 = 0;
  local_c8[0] = 0;
  local_d4 = 0;
  cVar1 = FUN_143a90330(param_1);
  if ((cVar1 == '\0') && (iVar2 = FUN_143a904f0(param_1), iVar2 < 0x81)) {
    uVar3 = FUN_143a904f0(param_1);
    local_e0 = 0;
    local_e8 = 0x81;
    local_d4 = FUN_143a8f880(param_1,0,uVar3,local_a8);
    local_b8 = (ulonglong)local_d4;
    if (0x80 < local_b8) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_a8[local_b8] = 0;
    local_d0 = FUN_143aa56e0(0,"metaZones",&local_d8);
    FUN_143aa37c0(local_d0,"mapTimezones",local_d0,&local_d8);
    FUN_143aa37c0(local_d0,local_a8,local_d0,&local_d8);
    cVar1 = FUN_143a8b110(local_d8);
    if (cVar1 != '\0') {
      iVar2 = FUN_143a904f0(param_2);
      if ((iVar2 == 2) || (iVar2 = FUN_143a904f0(param_2), iVar2 == 3)) {
        uVar3 = FUN_143a904f0(param_2);
        local_e0 = 0;
        local_e8 = 0x81;
        local_d4 = FUN_143a8f880(param_2,0,uVar3,local_a8);
        local_b0 = (ulonglong)local_d4;
        if (0x80 < local_b0) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_a8[local_b0] = 0;
        local_c0 = FUN_143aa5130(local_d0,local_a8,local_c8,&local_d8);
        if (local_d8 == 2) {
          local_d8 = 0;
        }
      }
      cVar1 = FUN_143a8b110(local_d8);
      if ((cVar1 != '\0') && (local_c0 == 0)) {
        local_c0 = FUN_143aa5130(local_d0,&DAT_145d14b0c,local_c8,&local_d8);
      }
    }
    FUN_143aa2ef0(local_d0);
    if (local_c0 == 0) {
      FUN_143a90e90(param_3);
    }
    else {
      FUN_143ab21b0(param_3,local_c0,local_c8[0]);
    }
  }
  else {
    FUN_143a90e90(param_3);
  }
  return param_3;
}



// FUNCTION 143b97d80 FUN_143b97d80 body=1026 status=ok
// SIG undefined FUN_143b97d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b97d80(void)

{
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_174;
  longlong local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_e8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FUN_143b68380(0xd,FUN_143b98700);
  local_178 = 0;
  DAT_146bc82e0 = (ios_base *)FUN_143ab3680(FUN_143a913e0,FUN_143a91380,0,&local_178);
  cVar1 = FUN_143a8b0e0(local_178);
  if ((cVar1 == '\0') && (DAT_146bc82e0 != (ios_base *)0x0)) {
    std::ios_base::precision(DAT_146bc82e0,0x143a8d350);
    local_140 = FUN_143a8d310(0x28);
    if (local_140 == 0) {
      local_138 = (undefined8 *)0x0;
    }
    else {
      local_138 = (undefined8 *)FUN_143b090a0(local_140,0,FUN_143ab3050,&local_178);
    }
    local_108 = local_138;
    DAT_146bc82d8 = local_138;
    cVar1 = FUN_143a8b0e0(local_178);
    if ((cVar1 == '\0') && (DAT_146bc82d8 != (undefined8 *)0x0)) {
      FUN_143ab38b0(DAT_146bc82d8,FUN_143aa79f0);
      local_120 = FUN_143aa56e0(0,"metaZones",&local_178);
      local_160 = FUN_143aa37c0(local_120,"mapTimezones",0,&local_178);
      FUN_143aa5540(local_d8);
      while( true ) {
        cVar1 = FUN_143a8b110(local_178);
        if ((cVar1 == '\0') || (cVar1 = FUN_143aa54f0(local_160), cVar1 == '\0'))
        goto LAB_143b980c9;
        FUN_143aa4880(local_160,local_d8,&local_178);
        cVar1 = FUN_143a8b0e0(local_178);
        if (cVar1 != '\0') goto LAB_143b980c9;
        local_128 = (char *)FUN_143aa4760(local_d8);
        sVar2 = _guard_xfg_dispatch_icall_nop(local_128);
        local_174 = (int)sVar2;
        local_170 = FUN_143aa7a40((longlong)(local_174 + 1) << 1);
        if (local_170 == 0) break;
        FUN_143ab5820(local_128,local_170,local_174);
        *(undefined2 *)(local_170 + (longlong)local_174 * 2) = 0;
        local_148 = FUN_143a8d310(0x28);
        if (local_148 == 0) {
          local_130 = (undefined8 *)0x0;
        }
        else {
          local_130 = (undefined8 *)FUN_143a8dad0(local_148,local_170);
        }
        local_118 = local_130;
        local_168 = local_130;
        lVar3 = FUN_143ab32d0(DAT_146bc82e0,local_130);
        if (lVar3 == 0) {
          FUN_143b09430(DAT_146bc82d8,local_170,&local_178);
          FUN_143ab36d0(DAT_146bc82e0,local_168,local_170,&local_178);
        }
        else {
          FUN_143aa79f0(local_170);
          local_f0 = local_168;
          local_158 = local_168;
          if (local_168 == (undefined8 *)0x0) {
            local_f8 = 0;
          }
          else {
            local_f8 = (**(code **)*local_168)(local_168,1);
          }
        }
      }
      local_178 = 7;
LAB_143b980c9:
      FUN_143aa2ef0(local_d8);
      FUN_143aa2ef0(local_160);
      FUN_143aa2ef0(local_120);
      cVar1 = FUN_143a8b0e0(local_178);
      if (cVar1 != '\0') {
        FUN_143ab2e80(DAT_146bc82e0);
        local_110 = DAT_146bc82d8;
        local_150 = DAT_146bc82d8;
        if (DAT_146bc82d8 != (undefined8 *)0x0) {
          (**(code **)*DAT_146bc82d8)(DAT_146bc82d8,1);
        }
        DAT_146bc82e0 = (ios_base *)0x0;
        DAT_146bc82d8 = (undefined8 *)0x0;
      }
    }
    else {
      DAT_146bc82d8 = (undefined8 *)0x0;
      FUN_143ab2e80(DAT_146bc82e0);
      DAT_146bc82e0 = (ios_base *)0x0;
    }
  }
  else {
    DAT_146bc82e0 = (ios_base *)0x0;
  }
  return;
}



// FUNCTION 143b98190 FUN_143b98190 body=116 status=ok
// SIG undefined FUN_143b98190(void)

void FUN_143b98190(undefined4 *param_1)

{
  char cVar1;
  
  DAT_146bc82b8 = FUN_143ab3680(FUN_143ab33b0,FUN_143ab3050,0,param_1);
  if (DAT_146bc82b8 == 0) {
    *param_1 = 7;
  }
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 != '\0') {
    DAT_146bc82b8 = 0;
  }
  FUN_143b68380(0xd,FUN_143b98700);
  return;
}



// FUNCTION 143b98210 FUN_143b98210 body=135 status=ok
// SIG undefined FUN_143b98210(void)

void FUN_143b98210(undefined4 *param_1)

{
  char cVar1;
  
  FUN_143b68380(0xd,FUN_143b98700);
  DAT_146bc82c8 = (ios_base *)FUN_143ab3680(FUN_143ab33b0,FUN_143ab3050,0,param_1);
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 == '\0') {
    std::ios_base::precision(DAT_146bc82c8,0x143b986d0);
    std::ios_base::width(DAT_146bc82c8,0x143a8d180);
  }
  else {
    DAT_146bc82c8 = (ios_base *)0x0;
  }
  return;
}



// FUNCTION 143b982a0 FUN_143b982a0 body=1067 status=ok
// SIG undefined FUN_143b982a0(void)

double FUN_143b982a0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  double dVar3;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    iVar2 = FreeLib(param_1);
    if ((iVar2 == 0x10) || (iVar2 == 10)) {
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_40 = 0;
      local_2c = 0;
      for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
        cVar1 = FUN_143a8b110(*param_2);
        if (cVar1 == '\0') break;
        if ((*(ushort *)(param_1 + (longlong)local_48 * 2) < 0x30) ||
           (0x39 < *(ushort *)(param_1 + (longlong)local_48 * 2))) {
          local_28 = -1;
        }
        else {
          local_28 = *(ushort *)(param_1 + (longlong)local_48 * 2) - 0x30;
        }
        if (local_28 < 0) {
          *param_2 = 3;
        }
        else {
          local_3c = local_3c * 10 + local_28;
        }
      }
      for (local_48 = 5; local_48 < 7; local_48 = local_48 + 1) {
        cVar1 = FUN_143a8b110(*param_2);
        if (cVar1 == '\0') break;
        if ((*(ushort *)(param_1 + (longlong)local_48 * 2) < 0x30) ||
           (0x39 < *(ushort *)(param_1 + (longlong)local_48 * 2))) {
          local_20 = -1;
        }
        else {
          local_20 = *(ushort *)(param_1 + (longlong)local_48 * 2) - 0x30;
        }
        if (local_20 < 0) {
          *param_2 = 3;
        }
        else {
          local_38 = local_38 * 10 + local_20;
        }
      }
      for (local_48 = 8; local_48 < 10; local_48 = local_48 + 1) {
        cVar1 = FUN_143a8b110(*param_2);
        if (cVar1 == '\0') break;
        if ((*(ushort *)(param_1 + (longlong)local_48 * 2) < 0x30) ||
           (0x39 < *(ushort *)(param_1 + (longlong)local_48 * 2))) {
          local_18 = -1;
        }
        else {
          local_18 = *(ushort *)(param_1 + (longlong)local_48 * 2) - 0x30;
        }
        if (local_18 < 0) {
          *param_2 = 3;
        }
        else {
          local_30 = local_30 * 10 + local_18;
        }
      }
      if (iVar2 == 0x10) {
        for (local_48 = 0xb; local_48 < 0xd; local_48 = local_48 + 1) {
          cVar1 = FUN_143a8b110(*param_2);
          if (cVar1 == '\0') break;
          if ((*(ushort *)(param_1 + (longlong)local_48 * 2) < 0x30) ||
             (0x39 < *(ushort *)(param_1 + (longlong)local_48 * 2))) {
            local_24 = -1;
          }
          else {
            local_24 = *(ushort *)(param_1 + (longlong)local_48 * 2) - 0x30;
          }
          if (local_24 < 0) {
            *param_2 = 3;
          }
          else {
            local_40 = local_40 * 10 + local_24;
          }
        }
        for (local_48 = 0xe; local_48 < 0x10; local_48 = local_48 + 1) {
          cVar1 = FUN_143a8b110(*param_2);
          if (cVar1 == '\0') break;
          if ((*(ushort *)(param_1 + (longlong)local_48 * 2) < 0x30) ||
             (0x39 < *(ushort *)(param_1 + (longlong)local_48 * 2))) {
            local_1c = -1;
          }
          else {
            local_1c = *(ushort *)(param_1 + (longlong)local_48 * 2) - 0x30;
          }
          if (local_1c < 0) {
            *param_2 = 3;
          }
          else {
            local_2c = local_2c * 10 + local_1c;
          }
        }
      }
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 == '\0') {
        dVar3 = 0.0;
      }
      else {
        dVar3 = (double)FUN_143b91d10(local_3c,local_38 + -1,local_30);
        dVar3 = dVar3 * 86400000.0 + (double)(local_40 * 3600000) + (double)(local_2c * 60000);
      }
    }
    else {
      *param_2 = 3;
      dVar3 = 0.0;
    }
  }
  else {
    dVar3 = 0.0;
  }
  return dVar3;
}



// FUNCTION 143b986d0 FUN_143b986d0 body=34 status=ok
// SIG undefined FUN_143b986d0(void)

void FUN_143b986d0(undefined8 param_1)

{
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143b98700 FUN_143b98700 body=389 status=ok
// SIG undefined FUN_143b98700(void)

undefined8 FUN_143b98700(void)

{
  if (DAT_146bc82b8 != 0) {
    FUN_143ab2e80(DAT_146bc82b8);
    DAT_146bc82b8 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc82c0);
  if (DAT_146bc82c8 != 0) {
    FUN_143ab2e80(DAT_146bc82c8);
    DAT_146bc82c8 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc82d0);
  if (DAT_146bc82e0 != 0) {
    FUN_143ab2e80(DAT_146bc82e0);
    DAT_146bc82e0 = 0;
  }
  if (DAT_146bc82d8 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc82d8)(DAT_146bc82d8,1);
  }
  DAT_146bc82d8 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc82e8);
  if (DAT_146bc82f0 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc82f0)(DAT_146bc82f0,1);
  }
  DAT_146bc82f0 = (undefined8 *)0x0;
  if (DAT_146bc82f8 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc82f8)(DAT_146bc82f8,1);
  }
  DAT_146bc82f8 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc8300);
  return 1;
}



// FUNCTION 143b98890 FUN_143b98890 body=152 status=ok
// SIG undefined FUN_143b98890(void)

undefined8 *
FUN_143b98890(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::TimeZoneTransition::vftable;
  param_1[1] = param_2;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  param_1[2] = uVar1;
  uVar1 = (**(code **)(*param_4 + 0x10))(param_4);
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 143b98930 FUN_143b98930 body=99 status=ok
// SIG undefined FUN_143b98930(void)

undefined8 * FUN_143b98930(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::TimeZoneTransition::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143b989a0 FUN_143b989a0 body=211 status=ok
// SIG undefined FUN_143b989a0(void)

void FUN_143b989a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::TimeZoneTransition::vftable;
  if ((param_1[2] != 0) && (puVar1 = (undefined8 *)param_1[2], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1[3] != 0) && (puVar1 = (undefined8 *)param_1[3], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b98a80 FUN_143b98a80 body=94 status=ok
// SIG undefined FUN_143b98a80(void)

longlong FUN_143b98a80(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    FUN_143b98c50(param_1,*(undefined8 *)(param_2 + 0x10));
    FUN_143b98cf0(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  return param_1;
}



// FUNCTION 143b98ae0 FUN_143b98ae0 body=54 status=ok
// SIG undefined FUN_143b98ae0(void)

undefined8 FUN_143b98ae0(undefined8 param_1,uint param_2)

{
  FUN_143b989a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b98b20 FUN_143b98b20 body=113 status=ok
// SIG undefined FUN_143b98b20(void)

void FUN_143b98b20(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x10), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 143b98ba0 FUN_143b98ba0 body=113 status=ok
// SIG undefined FUN_143b98ba0(void)

void FUN_143b98ba0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x18), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 143b98c20 FUN_143b98c20 body=19 status=ok
// SIG undefined FUN_143b98c20(void)

void FUN_143b98c20(void)

{
  FUN_143b98c40();
  return;
}



// FUNCTION 143b98c40 FUN_143b98c40 body=8 status=ok
// SIG undefined FUN_143b98c40(void)

undefined * FUN_143b98c40(void)

{
  return &DAT_146bc8308;
}



// FUNCTION 143b98c50 FUN_143b98c50 body=124 status=ok
// SIG undefined FUN_143b98c50(void)

void FUN_143b98c50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x10), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 143b98cd0 FUN_143b98cd0 body=28 status=ok
// SIG undefined FUN_143b98cd0(void)

void FUN_143b98cd0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143b98cf0 FUN_143b98cf0 body=124 status=ok
// SIG undefined FUN_143b98cf0(void)

void FUN_143b98cf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x18), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}



// FUNCTION 143b98d70 FUN_143b98d70 body=54 status=ok
// SIG undefined FUN_143b98d70(void)

undefined8 * FUN_143b98d70(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b5c200(param_1,param_2);
  *param_1 = icu_53::BuddhistCalendar::vftable;
  return param_1;
}



// FUNCTION 143b98db0 FUN_143b98db0 body=98 status=ok
// SIG undefined FUN_143b98db0(void)

undefined8 *
FUN_143b98db0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_143b5c2d0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::BuddhistCalendar::vftable;
  uVar1 = FUN_143b52670();
  FUN_143b55580(param_1,uVar1,param_3);
  return param_1;
}



// FUNCTION 143b98e20 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::BuddhistCalendar::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b98e50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b98e90 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x290);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b98d70(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b98ef0 FUN_143b98ef0 body=41 status=ok
// SIG undefined FUN_143b98ef0(void)

undefined8 FUN_143b98ef0(void)

{
  FUN_143a9aa60(&DAT_146bc8310,FUN_143b990f0);
  return DAT_146832af0;
}



// FUNCTION 143b98f20 FUN_143b98f20 body=39 status=ok
// SIG undefined FUN_143b98f20(void)

undefined4 FUN_143b98f20(void)

{
  FUN_143a9aa60(&DAT_146bc8310,FUN_143b990f0);
  return DAT_146832af8;
}



// FUNCTION 143b98f50 FUN_143b98f50 body=19 status=ok
// SIG undefined FUN_143b98f50(void)

void FUN_143b98f50(void)

{
  FUN_143b98f70();
  return;
}



// FUNCTION 143b98f70 FUN_143b98f70 body=8 status=ok
// SIG undefined FUN_143b98f70(void)

undefined * FUN_143b98f70(void)

{
  return &DAT_146bc8309;
}



// FUNCTION 143b98f80 FUN_143b98f80 body=13 status=ok
// SIG undefined FUN_143b98f80(void)

char * FUN_143b98f80(void)

{
  return "buddhist";
}



// FUNCTION 143b98f90 FUN_143b98f90 body=101 status=ok
// SIG undefined FUN_143b98f90(void)

void FUN_143b98f90(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_143b5c900(param_1,param_2,param_3);
  iVar1 = FUN_143b536c0(param_1,0x13);
  FUN_143b53750(param_1,0,0);
  FUN_143b53750(param_1,1,iVar1 + 0x21f);
  return;
}



// FUNCTION 143b99000 Server_MakeItemToWorld_Implementation body=53 status=ok
// SIG undefined Server_MakeItemToWorld_Implementation(void)

void UGISInventoryComponent::Server_MakeItemToWorld_Implementation
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_143b5cd40(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b99040 FUN_143b99040 body=101 status=ok
// SIG undefined FUN_143b99040(void)

int FUN_143b99040(undefined8 param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_143b53cf0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    local_18 = FUN_143b536e0(param_1,0x13,0x7b2);
  }
  else {
    local_18 = FUN_143b536e0(param_1,1,0x9d1);
    local_18 = local_18 + -0x21f;
  }
  return local_18;
}



// FUNCTION 143b990b0 FUN_143b990b0 body=53 status=ok
// SIG undefined FUN_143b990b0(void)

undefined8 FUN_143b990b0(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143b5d100(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 143b990f0 FUN_143b990f0 body=294 status=ok
// SIG undefined FUN_143b990f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b990f0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined4 local_458;
  undefined4 local_454;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined1 local_428 [656];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_438 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  local_458 = 0;
  local_468 = 0;
  local_450 = FUN_143a8a690(local_198,"@calendar=buddhist",0,0);
  local_448 = local_450;
  FUN_143b98db0(local_428,local_450,&local_458);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_458);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_428,uVar2,&local_458);
    FUN_143b4e270(local_428,1,0xffffffb0,&local_458);
    local_440 = FUN_143b52810(local_428,&local_458);
    DAT_146832af8 = FUN_143b512d0(local_428,1,&local_458);
    DAT_146832af0 = local_440;
    local_454 = DAT_146832af8;
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_428);
  return;
}



// FUNCTION 143b99220 FUN_143b99220 body=54 status=ok
// SIG undefined FUN_143b99220(void)

undefined8 * FUN_143b99220(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b5c200(param_1,param_2);
  *param_1 = icu_53::TaiwanCalendar::vftable;
  return param_1;
}



// FUNCTION 143b99260 FUN_143b99260 body=98 status=ok
// SIG undefined FUN_143b99260(void)

undefined8 *
FUN_143b99260(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_143b5c2d0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::TaiwanCalendar::vftable;
  uVar1 = FUN_143b52670();
  FUN_143b55580(param_1,uVar1,param_3);
  return param_1;
}



// FUNCTION 143b992d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::TaiwanCalendar::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b99300 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b99340 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x290);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b99220(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b993a0 FUN_143b993a0 body=41 status=ok
// SIG undefined FUN_143b993a0(void)

undefined8 FUN_143b993a0(void)

{
  FUN_143a9aa60(&DAT_146bc8318,FUN_143b99610);
  return DAT_146832b00;
}



// FUNCTION 143b993d0 FUN_143b993d0 body=39 status=ok
// SIG undefined FUN_143b993d0(void)

undefined4 FUN_143b993d0(void)

{
  FUN_143a9aa60(&DAT_146bc8318,FUN_143b99610);
  return DAT_146832b08;
}



// FUNCTION 143b99400 FUN_143b99400 body=19 status=ok
// SIG undefined FUN_143b99400(void)

void FUN_143b99400(void)

{
  FUN_143b99420();
  return;
}



// FUNCTION 143b99420 FUN_143b99420 body=8 status=ok
// SIG undefined FUN_143b99420(void)

undefined * FUN_143b99420(void)

{
  return &DAT_146bc8320;
}



// FUNCTION 143b99430 FUN_143b99430 body=13 status=ok
// SIG undefined FUN_143b99430(void)

undefined * FUN_143b99430(void)

{
  return &DAT_145d0eb5c;
}



// FUNCTION 143b99440 FUN_143b99440 body=155 status=ok
// SIG undefined FUN_143b99440(void)

void FUN_143b99440(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_143b5c900(param_1,param_2,param_3);
  iVar1 = FUN_143b536c0(param_1,0x13);
  iVar1 = iVar1 + -0x777;
  if (iVar1 < 1) {
    FUN_143b53750(param_1,0,0);
    FUN_143b53750(param_1,1,1 - iVar1);
  }
  else {
    FUN_143b53750(param_1,0,1);
    FUN_143b53750(param_1,1,iVar1);
  }
  return;
}



// FUNCTION 143b994e0 FUN_143b994e0 body=209 status=ok
// SIG undefined FUN_143b994e0(void)

int FUN_143b994e0(undefined8 param_1)

{
  int iVar1;
  int local_18;
  
  local_18 = 0x7b2;
  iVar1 = FUN_143b53cf0(param_1,0x13,1);
  if ((iVar1 == 0x13) && (iVar1 = FUN_143b53cf0(param_1,0x13,0), iVar1 == 0x13)) {
    iVar1 = FUN_143b536e0(param_1,0x13,0x7b2);
    return iVar1;
  }
  iVar1 = FUN_143b536e0(param_1,0,1);
  if (iVar1 == 1) {
    local_18 = FUN_143b536e0(param_1,1,1);
    local_18 = local_18 + 0x777;
  }
  else if (iVar1 == 0) {
    local_18 = FUN_143b536e0(param_1,1,1);
    local_18 = 0x778 - local_18;
  }
  return local_18;
}



// FUNCTION 143b995c0 FUN_143b995c0 body=74 status=ok
// SIG undefined FUN_143b995c0(void)

undefined8 FUN_143b995c0(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if ((param_3 == 0) || (param_3 == 1)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_143b5d100(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 143b99610 FUN_143b99610 body=274 status=ok
// SIG undefined FUN_143b99610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b99610(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined4 local_448 [2];
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_428 [656];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_430 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  local_448[0] = 0;
  local_458 = 0;
  local_440 = FUN_143a8a690(local_198,"@calendar=roc",0,0);
  local_438 = local_440;
  FUN_143b99260(local_428,local_440,local_448);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_448[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_428,uVar2,local_448);
    FUN_143b4e270(local_428,1,0xffffffb0,local_448);
    DAT_146832b00 = FUN_143b52810(local_428,local_448);
    DAT_146832b08 = FUN_143b512d0(local_428,1,local_448);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_428);
  return;
}



// FUNCTION 143b99730 FUN_143b99730 body=54 status=ok
// SIG undefined FUN_143b99730(void)

undefined8 * FUN_143b99730(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b5c200(param_1,param_2);
  *param_1 = icu_53::JapaneseCalendar::vftable;
  return param_1;
}



// FUNCTION 143b99770 FUN_143b99770 body=98 status=ok
// SIG undefined FUN_143b99770(void)

undefined8 *
FUN_143b99770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_143b5c2d0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::JapaneseCalendar::vftable;
  uVar1 = FUN_143b52670();
  FUN_143b55580(param_1,uVar1,param_3);
  return param_1;
}



// FUNCTION 143b997e0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::JapaneseCalendar::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b99810 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b99850 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x290);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b99730(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b998b0 FUN_143b998b0 body=9 status=ok
// SIG undefined FUN_143b998b0(void)

undefined8 FUN_143b998b0(void)

{
  return 0;
}



// FUNCTION 143b998c0 FUN_143b998c0 body=276 status=ok
// SIG undefined FUN_143b998c0(void)

ulonglong FUN_143b998c0(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint local_24;
  
  if (param_2 == 1) {
    iVar2 = FUN_143b512d0(param_1,0,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      if (iVar2 == 0xeb) {
        uVar3 = (**(code **)(*param_1 + 0xf0))(param_1,1,3);
      }
      else {
        local_24 = ((int)*(short *)(&DAT_145d15260 + (longlong)(iVar2 + 1) * 4) -
                   (int)*(short *)(&DAT_145d15260 + (longlong)iVar2 * 4)) + 1;
        if (((&DAT_145d15262)[(longlong)(iVar2 + 1) * 4] == '\x01') &&
           ((&DAT_145d15263)[(longlong)(iVar2 + 1) * 4] == '\x01')) {
          local_24 = (int)*(short *)(&DAT_145d15260 + (longlong)(iVar2 + 1) * 4) -
                     (int)*(short *)(&DAT_145d15260 + (longlong)iVar2 * 4);
        }
        uVar3 = (ulonglong)local_24;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_143b5c5a0(param_1,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 143b999e0 FUN_143b999e0 body=124 status=ok
// SIG undefined FUN_143b999e0(void)

int FUN_143b999e0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if ((param_2 == *(short *)(&DAT_145d15260 + (longlong)iVar1 * 4)) &&
     (param_3 == (char)(&DAT_145d15262)[(longlong)iVar1 * 4] + -1)) {
    iVar1 = (int)(char)(&DAT_145d15263)[(longlong)iVar1 * 4];
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



// FUNCTION 143b99a60 FUN_143b99a60 body=96 status=ok
// SIG undefined FUN_143b99a60(void)

int FUN_143b99a60(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (param_2 == *(short *)(&DAT_145d15260 + (longlong)iVar1 * 4)) {
    iVar1 = (char)(&DAT_145d15262)[(longlong)iVar1 * 4] + -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143b99ac0 FUN_143b99ac0 body=19 status=ok
// SIG undefined FUN_143b99ac0(void)

void FUN_143b99ac0(void)

{
  FUN_143b99ae0();
  return;
}



// FUNCTION 143b99ae0 FUN_143b99ae0 body=8 status=ok
// SIG undefined FUN_143b99ae0(void)

undefined * FUN_143b99ae0(void)

{
  return &DAT_146bc8321;
}



// FUNCTION 143b99af0 FUN_143b99af0 body=13 status=ok
// SIG undefined FUN_143b99af0(void)

char * FUN_143b99af0(void)

{
  return "japanese";
}



// FUNCTION 143b99b00 FUN_143b99b00 body=367 status=ok
// SIG undefined FUN_143b99b00(void)

void FUN_143b99b00(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_1c;
  
  FUN_143b5c900(param_1,param_2,param_3);
  iVar1 = FUN_143b536c0(param_1,0x13);
  local_28 = 0;
  if (iVar1 < 0x7c6) {
    local_1c = 0xec;
    iVar2 = local_1c;
    while (local_1c = iVar2, local_28 < local_1c + -1) {
      iVar2 = (local_28 + local_1c) / 2;
      local_24 = iVar1 - *(short *)(&DAT_145d15260 + (longlong)iVar2 * 4);
      if (local_24 == 0) {
        local_24 = FUN_143b536c0(param_1,2);
        local_24 = local_24 - ((char)(&DAT_145d15262)[(longlong)iVar2 * 4] + -1);
        if (local_24 == 0) {
          local_24 = FUN_143b536c0(param_1,5);
          local_24 = local_24 - (char)(&DAT_145d15263)[(longlong)iVar2 * 4];
        }
      }
      if (-1 < local_24) {
        local_28 = iVar2;
        iVar2 = local_1c;
      }
    }
  }
  else {
    local_28 = 0xeb;
  }
  FUN_143b53750(param_1,0,local_28);
  FUN_143b53750(param_1,1,(iVar1 - *(short *)(&DAT_145d15260 + (longlong)local_28 * 4)) + 1);
  return;
}



// FUNCTION 143b99c70 FUN_143b99c70 body=157 status=ok
// SIG undefined FUN_143b99c70(void)

int FUN_143b99c70(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_143b53cf0(param_1,0x13,1);
  if ((iVar1 == 0x13) && (iVar1 = FUN_143b53cf0(param_1,0x13,0), iVar1 == 0x13)) {
    iVar1 = FUN_143b536e0(param_1,0x13,0x7b2);
    return iVar1;
  }
  iVar1 = FUN_143b536c0(param_1,1);
  iVar2 = (**(code **)(*param_1 + 0x188))(param_1);
  return iVar1 + -1 + (int)*(short *)(&DAT_145d15260 + (longlong)iVar2 * 4);
}



// FUNCTION 143b99d10 FUN_143b99d10 body=214 status=ok
// SIG undefined FUN_143b99d10(void)

ulonglong FUN_143b99d10(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    if ((param_3 == 0) || (param_3 == 1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xeb;
    }
  }
  else if (param_2 == 1) {
    if (-1 < param_3) {
      if (param_3 < 2) {
        return 1;
      }
      if (param_3 == 2) {
        return 1;
      }
      if ((2 < param_3) && (param_3 < 5)) {
        iVar1 = FUN_143b5d100(param_1,1,3);
        return (ulonglong)(iVar1 - 0x7c5);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_143b5d100(param_1,param_2,param_3);
  }
  return uVar2;
}



// FUNCTION 143b99df0 FUN_143b99df0 body=32 status=ok
// SIG undefined FUN_143b99df0(void)

void FUN_143b99df0(undefined8 param_1)

{
  FUN_143b536e0(param_1,0,0xeb);
  return;
}



// FUNCTION 143b99e10 FUN_143b99e10 body=76 status=ok
// SIG undefined FUN_143b99e10(void)

undefined8 * FUN_143b99e10(undefined8 *param_1,longlong param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::IslamicCalendar::vftable;
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 143b99e60 FUN_143b99e60 body=126 status=ok
// SIG undefined FUN_143b99e60(void)

undefined8 *
FUN_143b99e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::IslamicCalendar::vftable;
  *(int *)(param_1 + 0x4d) = (int)param_4;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b99ee0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::IslamicCalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143b99f10 FUN_143b99f10 body=54 status=ok
// SIG undefined FUN_143b99f10(void)

undefined8 FUN_143b99f10(undefined8 param_1,uint param_2)

{
  FUN_143b1b790(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b99f50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b99f90 FUN_143b99f90 body=50 status=ok
// SIG undefined FUN_143b99f90(void)

bool FUN_143b99f90(int param_1)

{
  return (param_1 * 0xb + 0xe) % 0x1e < 0xb;
}



// FUNCTION 143b99fd0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x270);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b99e10(lVar1,param_1);
  }
  return local_20;
}


