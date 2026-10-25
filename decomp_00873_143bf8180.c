// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143bf8180 FUN_143bf8180 body=163 status=ok
// SIG undefined FUN_143bf8180(void)

void FUN_143bf8180(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8568);
    if (*param_1 == 0) {
      FUN_143bf7610(param_1,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        FUN_143ab2470(&DAT_146bc8568);
        return;
      }
    }
    FUN_143ab3530(*(undefined8 *)(*param_1 + 8),param_2,param_3,param_4);
    FUN_143ab2470(&DAT_146bc8568);
  }
  return;
}



// FUNCTION 143bf8230 FUN_143bf8230 body=49 status=ok
// SIG undefined FUN_143bf8230(void)

void FUN_143bf8230(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// FUNCTION 143bf8270 FUN_143bf8270 body=45 status=ok
// SIG undefined FUN_143bf8270(void)

void FUN_143bf8270(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_143bf7540(param_1);
  return;
}



// FUNCTION 143bf82a0 FUN_143bf82a0 body=701 status=ok
// SIG undefined FUN_143bf82a0(void)

double FUN_143bf82a0(double *param_1,undefined8 *param_2,double param_3,double param_4,
                    double param_5,char param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  double local_50;
  double local_48;
  double local_38;
  
  local_58 = (double)(**(code **)*param_2)(param_2,param_1);
  dVar1 = (double)FUN_143bf80d0(param_3 - local_58);
  if (param_6 == '\0') {
    local_48 = -6.283185307179586;
  }
  else {
    local_48 = 0.0;
  }
  local_38 = ((dVar1 + local_48) * param_4 * 86400000.0) / 6.283185307179586;
  dVar1 = *param_1;
  dVar2 = (double)FUN_143a916b0(local_38);
  FUN_143bf8270(param_1,*param_1 + dVar2);
  do {
    dVar2 = (double)(**(code **)*param_2)(param_2,param_1);
    dVar3 = (double)FUN_143bf8100(dVar2 - local_58);
    dVar3 = (double)FUN_143a91790(local_38 / dVar3);
    dVar4 = (double)FUN_143bf8100(param_3 - dVar2);
    dVar4 = dVar4 * dVar3;
    dVar3 = (double)FUN_143a91790(dVar4);
    dVar5 = (double)FUN_143a91790(local_38);
    if (dVar5 < dVar3) {
      local_50 = (double)FUN_143a916b0((param_4 * 86400000.0) / 8.0);
      if (param_6 == '\0') {
        local_50 = -local_50;
      }
      FUN_143bf8270(param_1,dVar1 + local_50);
      dVar1 = (double)FUN_143bf82a0(param_1,param_2,param_3,param_4,param_5,param_6);
      return dVar1;
    }
    dVar3 = (double)FUN_143a916b0(dVar4);
    FUN_143bf8270(param_1,*param_1 + dVar3);
    dVar3 = (double)FUN_143a91790(dVar4);
    local_58 = dVar2;
    local_38 = dVar4;
  } while (param_5 < dVar3);
  return *param_1;
}



// FUNCTION 143bf8560 FUN_143bf8560 body=276 status=ok
// SIG undefined FUN_143bf8560(void)

double FUN_143bf8560(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 local_28;
  
  local_28 = param_1;
  do {
    dVar1 = _guard_xfg_dispatch_icall_nop(local_28);
    dVar1 = (local_28 - param_2 * dVar1) - param_1;
    dVar2 = _guard_xfg_dispatch_icall_nop(local_28);
    local_28 = local_28 - dVar1 / (1.0 - param_2 * dVar2);
    dVar1 = (double)FUN_143a91790(dVar1);
  } while (1e-05 < dVar1);
  dVar1 = _guard_xfg_dispatch_icall_nop(local_28 / 2.0);
  dVar2 = _guard_xfg_dispatch_icall_nop((param_2 + 1.0) / (1.0 - param_2));
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1 * dVar2);
  return dVar1 * 2.0;
}



// FUNCTION 143bf8680 FUN_143bf8680 body=54 status=ok
// SIG undefined FUN_143bf8680(void)

undefined8 * FUN_143bf8680(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::CECalendar::vftable;
  return param_1;
}



// FUNCTION 143bf86c0 FUN_143bf86c0 body=106 status=ok
// SIG undefined FUN_143bf86c0(void)

undefined8 *
FUN_143bf86c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::CECalendar::vftable;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143bf8730 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CECalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143bf8760 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf87a0 FUN_143bf87a0 body=192 status=ok
// SIG undefined FUN_143bf87a0(void)

int FUN_143bf87a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_res8;
  undefined4 local_res10;
  
  if (param_2 < 0) {
    local_res8 = param_1 + -1 + (param_2 + 1) / 0xd;
    local_res10 = (param_2 + 1) % 0xd + 0xc;
  }
  else {
    local_res8 = param_1 + param_2 / 0xd;
    local_res10 = param_2 % 0xd;
  }
  iVar1 = FUN_143b91df0(local_res8,4);
  return local_res10 * 0x1e + -1 + param_3 + param_4 + local_res8 * 0x16d + iVar1;
}



// FUNCTION 143bf8860 FUN_143bf8860 body=66 status=ok
// SIG undefined FUN_143bf8860(void)

void FUN_143bf8860(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  FUN_143bf87a0(param_2,param_3,0,uVar1);
  return;
}



// FUNCTION 143bf88b0 FUN_143bf88b0 body=45 status=ok
// SIG undefined FUN_143bf88b0(void)

undefined4 FUN_143bf88b0(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d1bb40 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143bf88e0 FUN_143bf88e0 body=200 status=ok
// SIG undefined FUN_143bf88e0(void)

void FUN_143bf88e0(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int local_28;
  int local_24;
  
  iVar1 = FUN_143b91e30((double)(param_1 - param_2),0x5b5,&local_28);
  *param_3 = (local_28 / 0x16d - local_28 / 0x5b4) + iVar1 * 4;
  if (local_28 == 0x5b4) {
    local_24 = 0x16d;
  }
  else {
    local_24 = local_28 % 0x16d;
  }
  *param_4 = local_24 / 0x1e;
  *param_5 = local_24 % 0x1e + 1;
  return;
}



// FUNCTION 143bf89b0 FUN_143bf89b0 body=212 status=ok
// SIG undefined FUN_143bf89b0(void)

undefined8 * FUN_143bf89b0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FID_conflict_length_error(param_1,param_2);
  *param_1 = icu_53::RuleBasedTimeZone::vftable;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))(*(undefined8 *)(param_2 + 0x30));
  param_1[6] = uVar1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  uVar1 = FUN_143bf9bc0(param_1,*(undefined8 *)(param_2 + 0x38));
  param_1[7] = uVar1;
  uVar1 = FUN_143bf9bc0(param_1,*(undefined8 *)(param_2 + 0x40));
  param_1[8] = uVar1;
  if (*(char *)(param_2 + 0x50) != '\0') {
    local_18[0] = 0;
    FUN_143bf8fc0(param_1,local_18);
  }
  return param_1;
}



// FUNCTION 143bf8a90 FUN_143bf8a90 body=121 status=ok
// SIG undefined FUN_143bf8a90(void)

undefined8 * FUN_143bf8a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143bee090(param_1,param_2);
  *param_1 = icu_53::RuleBasedTimeZone::vftable;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 143bf8b10 FUN_143bf8b10 body=71 status=ok
// SIG undefined FUN_143bf8b10(void)

void FUN_143bf8b10(undefined8 *param_1)

{
  *param_1 = icu_53::RuleBasedTimeZone::vftable;
  FUN_143bfa070(param_1);
  FUN_143bf9e40(param_1);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143bf8b60 FUN_143bf8b60 body=232 status=ok
// SIG undefined FUN_143bf8b60(void)

undefined8 FUN_143bf8b60(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    return 1;
  }
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
  cVar1 = FUN_143aa5fe0(uVar3,uVar2);
  if ((cVar1 != '\0') || (cVar1 = FUN_143b4a2b0(param_1,param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                    (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_143bf8ef0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_143bf8ef0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143bf8c50 FUN_143bf8c50 body=54 status=ok
// SIG undefined FUN_143bf8c50(void)

undefined8 FUN_143bf8c50(undefined8 param_1,uint param_2)

{
  FUN_143bf8b10(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf8c90 FUN_143bf8c90 body=511 status=ok
// SIG undefined FUN_143bf8c90(void)

void FUN_143bf8c90(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return;
  }
  lVar3 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&icu_53::TimeZoneRule::RTTI_Type_Descriptor,
                     &icu_53::AnnualTimeZoneRule::RTTI_Type_Descriptor,0);
  if ((lVar3 == 0) || (iVar2 = FUN_143bed1c0(lVar3), iVar2 != 0x7fffffff)) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_143b08f70(lVar3,param_3);
      }
      *(undefined8 *)(param_1 + 0x38) = local_28;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_143b09430(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  else {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143b08f70(lVar3,param_3);
      }
      *(undefined8 *)(param_1 + 0x40) = local_38;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        return;
      }
    }
    else {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x40));
      if (1 < iVar2) {
        *param_3 = 0x1b;
        return;
      }
    }
    FUN_143b09430(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 143bf8e90 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x58);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143bf89b0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143bf8ef0 FUN_143bf8ef0 body=203 status=ok
// SIG undefined FUN_143bf8ef0(void)

undefined8 FUN_143bf8ef0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int local_28;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    uVar5 = 1;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2);
    if (iVar2 == iVar3) {
      for (local_28 = 0; local_28 < iVar2; local_28 = local_28 + 1) {
        plVar4 = (longlong *)FUN_143b09610(param_1,local_28);
        uVar5 = FUN_143b09610(param_2,local_28);
        cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar5);
        if (cVar1 != '\0') {
          return 0;
        }
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 143bf8fc0 FUN_143bf8fc0 body=2954 status=ok
// SIG undefined FUN_143bf8fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf8fc0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  double *local_190;
  int local_188;
  char local_184;
  char local_183;
  char local_182;
  char local_181;
  longlong *local_180;
  longlong *local_178;
  longlong local_170;
  int local_168;
  longlong *local_160;
  int local_158;
  double *local_150;
  longlong *local_148;
  double *local_140;
  double local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_124;
  double local_120;
  double local_118;
  double *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  double local_f0;
  int local_e8;
  double local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  double *local_a0;
  longlong local_98;
  longlong local_90;
  double *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x40)), iVar2 != 2)) {
    *param_2 = 0x1b;
    return;
  }
  local_170 = 0;
  if ((*(longlong *)(param_1 + 0x38) == 0) && (*(longlong *)(param_1 + 0x40) == 0)) {
LAB_143bf9ae7:
    *(undefined1 *)(param_1 + 0x50) = 1;
    if (local_170 == 0) {
      return;
    }
    FUN_143aa79f0(local_170);
    return;
  }
  local_180 = *(longlong **)(param_1 + 0x30);
  local_118 = -1.84303902528e+17;
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x38)), iVar2 < 1)) {
LAB_143bf96b9:
    if (*(longlong *)(param_1 + 0x40) == 0) goto LAB_143bf9ae7;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      local_c8 = FUN_143a8d310(0x28);
      if (local_c8 == 0) {
        local_b8 = 0;
      }
      else {
        local_b8 = FUN_143b08f70(local_c8,param_2);
      }
      local_78 = local_b8;
      *(undefined8 *)(param_1 + 0x48) = local_b8;
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 != '\0') goto LAB_143bf9b07;
    }
    local_160 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),0);
    local_148 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),1);
    local_f8 = FAnalyticsSpan::GetStackDepth(local_180);
    uVar3 = FUN_143ab3100(local_180);
    local_98 = *local_160;
    local_190 = &local_f0;
    local_198 = 0;
    local_181 = (**(code **)(local_98 + 0x40))(local_160,local_118,uVar3,local_f8);
    local_104 = FAnalyticsSpan::GetStackDepth(local_180);
    uVar3 = FUN_143ab3100(local_180);
    local_b0 = *local_148;
    local_190 = &local_e0;
    local_198 = 0;
    local_182 = (**(code **)(local_b0 + 0x40))(local_148,local_118,uVar3,local_104);
    if ((local_181 == '\0') || (local_182 == '\0')) {
      *param_2 = 0x1b;
    }
    else {
      local_150 = (double *)FUN_143aa7a40(0x18);
      if (local_150 == (double *)0x0) {
        *param_2 = 7;
      }
      else {
        local_140 = (double *)FUN_143aa7a40(0x18);
        if (local_140 == (double *)0x0) {
          FUN_143aa79f0(local_150);
          *param_2 = 7;
        }
        else {
          if (local_e0 <= local_f0) {
            *local_150 = local_e0;
            local_150[1] = (double)local_180;
            local_150[2] = (double)local_148;
            local_a0 = local_140;
            local_100 = FAnalyticsSpan::GetStackDepth(local_148);
            uVar3 = FUN_143ab3100(local_148);
            local_90 = *local_160;
            local_190 = local_a0;
            local_198 = 0;
            (**(code **)(local_90 + 0x40))(local_160,local_e0,uVar3,local_100);
            local_140[1] = (double)local_148;
            local_140[2] = (double)local_160;
          }
          else {
            *local_150 = local_f0;
            local_150[1] = (double)local_180;
            local_150[2] = (double)local_160;
            local_88 = local_140;
            local_108 = FAnalyticsSpan::GetStackDepth(local_160);
            uVar3 = FUN_143ab3100(local_160);
            local_a8 = *local_148;
            local_190 = local_88;
            local_198 = 0;
            (**(code **)(local_a8 + 0x40))(local_148,local_f0,uVar3,local_108);
            local_140[1] = (double)local_160;
            local_140[2] = (double)local_148;
          }
          FUN_143b09430(*(undefined8 *)(param_1 + 0x48),local_150,param_2);
          cVar1 = FUN_143a8b0e0(*param_2);
          if (cVar1 == '\0') {
            FUN_143b09430(*(undefined8 *)(param_1 + 0x48),local_140,param_2);
            cVar1 = FUN_143a8b0e0(*param_2);
            if (cVar1 == '\0') goto LAB_143bf9ae7;
          }
        }
      }
    }
  }
  else {
    local_158 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(param_1 + 0x38));
    local_170 = FUN_143aa7a40((longlong)local_158);
    if (local_170 != 0) {
      for (local_188 = 0; local_188 < local_158; local_188 = local_188 + 1) {
        *(undefined1 *)(local_170 + local_188) = 0;
      }
      do {
        local_124 = FUN_143ab3100(local_180);
        local_128 = FAnalyticsSpan::GetStackDepth(local_180);
        local_138 = 1.838821689216e+17;
        local_130 = (longlong *)0x0;
        local_178 = (longlong *)0x0;
        FUN_143a8ac30(local_40);
        FUN_143a8ac30(local_68);
        FUN_143b86160(local_180,local_40);
        for (local_188 = 0; local_188 < local_158; local_188 = local_188 + 1) {
          if (*(char *)(local_170 + local_188) == '\0') {
            local_178 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x38),local_188);
            local_190 = &local_120;
            local_198 = 0;
            local_184 = (**(code **)(*local_178 + 0x40))(local_178,local_118,local_124,local_128);
            if (local_184 == '\0') {
              *(undefined1 *)(local_170 + local_188) = 1;
            }
            else {
              FUN_143b86160(local_178,local_68);
              cVar1 = (**(code **)(*local_178 + 0x18))(local_178);
              if (cVar1 == '\0') {
                cVar1 = FUN_143a8dd00(local_68);
                if (cVar1 != '\0') {
                  local_fc = FUN_143ab3100(local_178);
                  iVar2 = FUN_143ab3100(local_180);
                  if (local_fc == iVar2) {
                    local_e8 = FAnalyticsSpan::GetStackDepth(local_178);
                    iVar2 = FAnalyticsSpan::GetStackDepth(local_180);
                    if (local_e8 == iVar2) goto LAB_143bf91cb;
                  }
                }
                if (local_120 < local_138) {
                  local_138 = local_120;
                  local_130 = local_178;
                }
              }
            }
          }
LAB_143bf91cb:
        }
        if (local_130 == (longlong *)0x0) {
          local_183 = '\x01';
          for (local_168 = 0; local_168 < local_158; local_168 = local_168 + 1) {
            if (*(char *)(local_170 + local_168) == '\0') {
              local_183 = '\0';
              break;
            }
          }
          if (local_183 != '\0') {
            FUN_143a8dc60(local_68);
            FUN_143a8dc60(local_40);
            goto LAB_143bf96b9;
          }
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
          for (local_188 = 0; local_188 < 2; local_188 = local_188 + 1) {
            local_d8 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),local_188);
            cVar1 = (**(code **)(*local_d8 + 0x18))(local_d8,local_180);
            if (cVar1 == '\0') {
              local_178 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),local_188);
              local_190 = &local_120;
              local_198 = 0;
              local_184 = (**(code **)(*local_178 + 0x40))(local_178,local_118,local_124,local_128);
              if ((local_184 != '\0') && (local_120 < local_138)) {
                local_138 = local_120;
                local_130 = local_178;
              }
            }
          }
        }
        if (local_130 == (longlong *)0x0) {
          FUN_143a8dc60(local_68);
          FUN_143a8dc60(local_40);
          goto LAB_143bf96b9;
        }
        if (*(longlong *)(param_1 + 0x48) == 0) {
          local_c0 = FUN_143a8d310(0x28);
          if (local_c0 == 0) {
            local_d0 = 0;
          }
          else {
            local_d0 = FUN_143b08f70(local_c0,param_2);
          }
          local_80 = local_d0;
          *(undefined8 *)(param_1 + 0x48) = local_d0;
          cVar1 = FUN_143a8b0e0(*param_2);
          if (cVar1 != '\0') {
            FUN_143a8dc60(local_68);
            FUN_143a8dc60(local_40);
            goto LAB_143bf9b07;
          }
        }
        local_110 = (double *)FUN_143aa7a40(0x18);
        if (local_110 == (double *)0x0) {
          *param_2 = 7;
          FUN_143a8dc60(local_68);
          FUN_143a8dc60(local_40);
          goto LAB_143bf9b07;
        }
        *local_110 = local_138;
        local_110[1] = (double)local_180;
        local_110[2] = (double)local_130;
        FUN_143b09430(*(undefined8 *)(param_1 + 0x48),local_110,param_2);
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') goto LAB_143bf965a;
        local_118 = local_138;
        local_180 = local_130;
        FUN_143a8dc60(local_68);
        FUN_143a8dc60(local_40);
      } while( true );
    }
    *param_2 = 7;
  }
LAB_143bf9b07:
  FUN_143bfa070(param_1);
  if (local_170 != 0) {
    FUN_143aa79f0(local_170);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
LAB_143bf965a:
  FUN_143a8dc60(local_68);
  FUN_143a8dc60(local_40);
  goto LAB_143bf9b07;
}



// FUNCTION 143bf9b50 FUN_143bf9b50 body=102 status=ok
// SIG undefined FUN_143bf9b50(void)

void FUN_143bf9b50(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8598);
    if (*(char *)(param_1 + 0x50) == '\0') {
      FUN_143bf8fc0(param_1,param_2);
    }
    FUN_143ab2470(&DAT_146bc8598);
  }
  return;
}



// FUNCTION 143bf9bc0 FUN_143bf9bc0 body=513 status=ok
// SIG undefined FUN_143bf9bc0(void)

undefined8 * FUN_143bf9bc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    local_78 = (undefined8 *)0x0;
  }
  else {
    local_84 = 0;
    local_80 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(param_2);
    local_58 = FUN_143a8d310(0x28);
    if (local_58 == 0) {
      local_60 = (undefined8 *)0x0;
    }
    else {
      local_60 = (undefined8 *)FUN_143b09000(local_58,local_80,&local_84);
    }
    local_30 = local_60;
    local_78 = local_60;
    cVar1 = FUN_143a8b0e0(local_84);
    if (cVar1 == '\0') {
      for (local_88 = 0; local_88 < local_80; local_88 = local_88 + 1) {
        local_50 = (longlong *)FUN_143b09610(param_2,local_88);
        uVar3 = (**(code **)(*local_50 + 0x10))(local_50);
        FUN_143b09430(local_78,uVar3,&local_84);
        cVar1 = FUN_143a8b0e0(local_84);
        if (cVar1 != '\0') break;
      }
      cVar1 = FUN_143a8b0e0(local_84);
      if (cVar1 != '\0') {
        for (local_88 = 0;
            iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_78), local_88 < iVar2; local_88 = local_88 + 1) {
          local_70 = (undefined8 *)FUN_143b099d0(local_78,local_88);
          local_48 = local_70;
          local_20 = local_70;
          if (local_70 == (undefined8 *)0x0) {
            local_40 = 0;
          }
          else {
            local_40 = (**(code **)*local_70)(local_70,1);
          }
        }
        local_38 = local_78;
        local_68 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)(local_78,1);
        }
        local_78 = (undefined8 *)0x0;
      }
    }
    else {
      local_78 = (undefined8 *)0x0;
    }
  }
  return local_78;
}



// FUNCTION 143bf9dd0 FUN_143bf9dd0 body=107 status=ok
// SIG undefined FUN_143bf9dd0(void)

int FUN_143bf9dd0(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(param_1 + 0x40));
    local_18 = local_18 + iVar1;
  }
  return local_18;
}



// FUNCTION 143bf9e40 FUN_143bf9e40 body=545 status=ok
// SIG undefined FUN_143bf9e40(void)

void FUN_143bf9e40(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    while (cVar1 = FUN_143b14e10(*(undefined8 *)(param_1 + 0x38)), cVar1 == '\0') {
      puVar2 = (undefined8 *)FUN_143b099d0(*(undefined8 *)(param_1 + 0x38),0);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    while (cVar1 = FUN_143b14e10(*(undefined8 *)(param_1 + 0x40)), cVar1 == '\0') {
      puVar2 = (undefined8 *)FUN_143b099d0(*(undefined8 *)(param_1 + 0x40),0);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143bfa070 FUN_143bfa070 body=161 status=ok
// SIG undefined FUN_143bfa070(void)

void FUN_143bfa070(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    while (cVar2 = FUN_143b14e10(*(undefined8 *)(param_1 + 0x48)), cVar2 == '\0') {
      uVar3 = FUN_143b099d0(*(undefined8 *)(param_1 + 0x48),0);
      FUN_143aa79f0(uVar3);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 143bfa120 FUN_143bfa120 body=1158 status=ok
// SIG undefined FUN_143bfa120(void)

undefined8
FUN_143bfa120(longlong param_1,double param_2,char param_3,double *param_4,double *param_5,
             double *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  double *pdVar12;
  int local_94;
  double local_70;
  longlong *local_68;
  longlong *local_60;
  double *local_58;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  double local_40;
  double local_38;
  longlong local_30;
  longlong local_28;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar10 = 0;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    pdVar7 = (double *)FUN_143b09610(*(undefined8 *)(param_1 + 0x48),0);
    if ((param_2 < *pdVar7) || ((param_3 != '\0' && (*pdVar7 == param_2)))) {
      pdVar12 = &local_70;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *(undefined1 *)pdVar12 = *(undefined1 *)pdVar7;
        pdVar7 = (double *)((longlong)pdVar7 + 1);
        pdVar12 = (double *)((longlong)pdVar12 + 1);
      }
      bVar1 = true;
    }
    else {
      local_94 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0x48));
      pdVar7 = (double *)FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_94 + -1);
      if ((param_3 == '\0') || (*pdVar7 != param_2)) {
        if (param_2 < *pdVar7) {
          local_58 = pdVar7;
          for (local_94 = local_94 + -2; 0 < local_94; local_94 = local_94 + -1) {
            pdVar7 = (double *)FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_94);
            if ((*pdVar7 < param_2) || ((param_3 == '\0' && (*pdVar7 == param_2)))) break;
            local_58 = pdVar7;
          }
          local_70 = *local_58;
          local_68 = (longlong *)local_58[1];
          local_60 = (longlong *)local_58[2];
          bVar1 = true;
        }
        else if (*(longlong *)(param_1 + 0x40) != 0) {
          plVar8 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),0);
          plVar9 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),1);
          local_44 = FAnalyticsSpan::GetStackDepth(plVar9);
          uVar5 = FUN_143ab3100(plVar9);
          local_28 = *plVar8;
          cVar3 = (**(code **)(local_28 + 0x40))(plVar8,param_2,uVar5,local_44,param_3,&local_40);
          local_50 = FAnalyticsSpan::GetStackDepth(plVar8);
          uVar5 = FUN_143ab3100(plVar8);
          local_30 = *plVar9;
          cVar4 = (**(code **)(local_30 + 0x40))(plVar9,param_2,uVar5,local_50,param_3,&local_38);
          if ((cVar3 == '\0') && (cVar4 == '\0')) {
            return 0;
          }
          if ((cVar4 == '\0') || (local_40 < local_38)) {
            local_70 = local_40;
            local_68 = plVar9;
            local_60 = plVar8;
          }
          else {
            local_70 = local_38;
            local_68 = plVar8;
            local_60 = plVar9;
          }
          bVar2 = true;
          bVar1 = true;
        }
      }
      else {
        pdVar12 = &local_70;
        for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
          *(undefined1 *)pdVar12 = *(undefined1 *)pdVar7;
          pdVar7 = (double *)((longlong)pdVar7 + 1);
          pdVar12 = (double *)((longlong)pdVar12 + 1);
        }
        bVar1 = true;
      }
    }
    if (bVar1) {
      local_48 = FUN_143ab3100(local_68);
      iVar6 = FUN_143ab3100(local_60);
      if (local_48 == iVar6) {
        local_4c = FAnalyticsSpan::GetStackDepth(local_68);
        iVar6 = FAnalyticsSpan::GetStackDepth(local_60);
        if (local_4c == iVar6) {
          if (bVar2) {
            return 0;
          }
          uVar10 = FUN_143bfa120(param_1,local_70,0,param_4,param_5,param_6);
          return uVar10;
        }
      }
      *param_4 = local_70;
      *param_5 = (double)local_68;
      *param_6 = (double)local_60;
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
  }
  return uVar10;
}



// FUNCTION 143bfa5b0 FUN_143bfa5b0 body=1106 status=ok
// SIG undefined FUN_143bfa5b0(void)

undefined8
FUN_143bfa5b0(longlong param_1,double param_2,char param_3,double *param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  double *pdVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  double *pdVar11;
  int local_84;
  double *local_80;
  double local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  double local_38;
  double local_30;
  longlong local_28;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar9 = 0;
  }
  else {
    bVar1 = false;
    pdVar6 = (double *)FUN_143b09610(*(undefined8 *)(param_1 + 0x48),0);
    if ((param_3 == '\0') || (*pdVar6 != param_2)) {
      if (*pdVar6 < param_2) {
        local_84 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(*(undefined8 *)(param_1 + 0x48));
        local_80 = (double *)FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_84 + -1);
        if ((param_3 == '\0') || (*local_80 != param_2)) {
          if (param_2 <= *local_80) {
            for (local_84 = local_84 + -2; -1 < local_84; local_84 = local_84 + -1) {
              local_80 = (double *)FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_84);
              if ((*local_80 < param_2) || ((param_3 != '\0' && (*local_80 == param_2)))) break;
            }
            pdVar6 = &local_60;
            for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
              *(undefined1 *)pdVar6 = *(undefined1 *)local_80;
              local_80 = (double *)((longlong)local_80 + 1);
              pdVar6 = (double *)((longlong)pdVar6 + 1);
            }
            bVar1 = true;
          }
          else {
            if (*(longlong *)(param_1 + 0x40) == 0) {
              pdVar6 = &local_60;
              for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
                *(undefined1 *)pdVar6 = *(undefined1 *)local_80;
                local_80 = (double *)((longlong)local_80 + 1);
                pdVar6 = (double *)((longlong)pdVar6 + 1);
              }
            }
            else {
              plVar7 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),0);
              plVar8 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),1);
              local_3c = FAnalyticsSpan::GetStackDepth(plVar8);
              uVar4 = FUN_143ab3100(plVar8);
              local_20 = *plVar7;
              cVar2 = (**(code **)(local_20 + 0x48))
                                (plVar7,param_2,uVar4,local_3c,param_3,&local_38);
              local_48 = FAnalyticsSpan::GetStackDepth(plVar7);
              uVar4 = FUN_143ab3100(plVar7);
              local_28 = *plVar8;
              cVar3 = (**(code **)(local_28 + 0x48))
                                (plVar8,param_2,uVar4,local_48,param_3,&local_30);
              if ((cVar2 == '\0') && (cVar3 == '\0')) {
                return 0;
              }
              if ((cVar3 == '\0') || (local_30 < local_38)) {
                local_60 = local_38;
                local_58 = plVar8;
                local_50 = plVar7;
              }
              else {
                local_60 = local_30;
                local_58 = plVar7;
                local_50 = plVar8;
              }
            }
            bVar1 = true;
          }
        }
        else {
          pdVar6 = &local_60;
          for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined1 *)pdVar6 = *(undefined1 *)local_80;
            local_80 = (double *)((longlong)local_80 + 1);
            pdVar6 = (double *)((longlong)pdVar6 + 1);
          }
          bVar1 = true;
        }
      }
    }
    else {
      pdVar11 = &local_60;
      for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined1 *)pdVar11 = *(undefined1 *)pdVar6;
        pdVar6 = (double *)((longlong)pdVar6 + 1);
        pdVar11 = (double *)((longlong)pdVar11 + 1);
      }
      bVar1 = true;
    }
    if (bVar1) {
      local_40 = FUN_143ab3100(local_58);
      iVar5 = FUN_143ab3100(local_50);
      if (local_40 == iVar5) {
        local_44 = FAnalyticsSpan::GetStackDepth(local_58);
        iVar5 = FAnalyticsSpan::GetStackDepth(local_50);
        if (local_44 == iVar5) {
          uVar9 = FUN_143bfa5b0(param_1,local_60,0,param_4,param_5,param_6);
          return uVar9;
        }
      }
      *param_4 = local_60;
      *param_5 = local_58;
      *param_6 = local_50;
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}



// FUNCTION 143bfaa10 FUN_143bfaa10 body=784 status=ok
// SIG undefined FUN_143bfaa10(void)

longlong *
FUN_143bfaa10(longlong param_1,double param_2,char param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 in_stack_ffffffffffffff70;
  double *pdVar12;
  double local_58;
  double local_20;
  longlong local_18;
  double local_10 [2];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),0);
    plVar10 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),1);
    if ((plVar9 == (longlong *)0x0) || (plVar10 == (longlong *)0x0)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      local_58 = param_2;
      if (param_3 != '\0') {
        uVar3 = FAnalyticsSpan::GetStackDepth(plVar9);
        uVar4 = FUN_143ab3100(plVar9);
        uVar5 = FAnalyticsSpan::GetStackDepth(plVar10);
        uVar6 = FUN_143ab3100(plVar10);
        iVar7 = FUN_143bfad50(param_1,uVar6,uVar5,uVar4,uVar3,CONCAT44(uVar8,param_4),param_5);
        local_58 = param_2 - (double)iVar7;
      }
      uVar8 = FAnalyticsSpan::GetStackDepth(plVar10);
      uVar3 = FUN_143ab3100(plVar10);
      local_18 = *plVar9;
      pdVar12 = &local_20;
      cVar1 = (**(code **)(local_18 + 0x48))(plVar9,local_58,uVar3,uVar8,1,pdVar12);
      uVar8 = (undefined4)((ulonglong)pdVar12 >> 0x20);
      local_58 = param_2;
      if (param_3 != '\0') {
        uVar3 = FAnalyticsSpan::GetStackDepth(plVar10);
        uVar4 = FUN_143ab3100(plVar10);
        uVar5 = FAnalyticsSpan::GetStackDepth(plVar9);
        uVar6 = FUN_143ab3100(plVar9);
        iVar7 = FUN_143bfad50(param_1,uVar6,uVar5,uVar4,uVar3,CONCAT44(uVar8,param_4),param_5);
        local_58 = param_2 - (double)iVar7;
      }
      uVar8 = FAnalyticsSpan::GetStackDepth(plVar9);
      uVar3 = FUN_143ab3100(plVar9);
      cVar2 = (**(code **)(*plVar10 + 0x48))(plVar10,local_58,uVar3,uVar8,1,local_10);
      if ((cVar1 == '\0') || (cVar2 == '\0')) {
        plVar11 = plVar9;
        if ((cVar1 == '\0') && (plVar11 = plVar10, cVar2 == '\0')) {
          plVar11 = (longlong *)0x0;
        }
      }
      else {
        plVar11 = plVar10;
        if (local_10[0] < local_20) {
          plVar11 = plVar9;
        }
      }
    }
  }
  return plVar11;
}



// FUNCTION 143bfad30 FUN_143bfad30 body=19 status=ok
// SIG undefined FUN_143bfad30(void)

void FUN_143bfad30(void)

{
  FUN_143bfb570();
  return;
}



// FUNCTION 143bfad50 FUN_143bfad50 body=430 status=ok
// SIG undefined FUN_143bfad50(void)

int FUN_143bfad50(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  bool bVar1;
  bool bVar2;
  int local_14;
  
  param_2 = param_2 + param_3;
  param_4 = param_4 + param_5;
  if ((param_3 == 0) || (param_5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((param_3 == 0) && (param_5 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_14 = param_2;
  if (param_4 - param_2 < 0) {
    if (((((((param_7 & 3) != 1) || (local_14 = param_4, !bVar1)) &&
          (((param_7 & 3) != 3 || (local_14 = param_4, !bVar2)))) &&
         (((param_7 & 3) != 1 || (local_14 = param_2, !bVar2)))) &&
        (((param_7 & 3) != 3 || (local_14 = param_2, !bVar1)))) &&
       (local_14 = param_4, (param_7 & 0xc) == 4)) {
      local_14 = param_2;
    }
  }
  else if ((((((param_6 & 3) != 1) || (!bVar1)) && (((param_6 & 3) != 3 || (!bVar2)))) &&
           ((((param_6 & 3) != 1 || (local_14 = param_4, !bVar2)) &&
            (((param_6 & 3) != 3 || (local_14 = param_4, !bVar1)))))) &&
          (local_14 = param_4, (param_6 & 0xc) == 0xc)) {
    local_14 = param_2;
  }
  return local_14;
}



// FUNCTION 143bfaf00 FUN_143bfaf00 body=185 status=ok
// SIG undefined FUN_143bfaf00(void)

undefined8
FUN_143bfaf00(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_24 = 0;
  FUN_143bf9b50(param_1,&local_24);
  cVar1 = FUN_143a8b0e0(local_24);
  if (cVar1 == '\0') {
    cVar1 = FUN_143bfa120(param_1,param_2,param_3,&local_20,&local_18,local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      FUN_143b98cd0(param_4,local_20);
      FUN_143b98c50(param_4,local_18);
      FUN_143b98cf0(param_4,local_10[0]);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bfafc0 FUN_143bfafc0 body=215 status=ok
// SIG undefined FUN_143bfafc0(void)

undefined8
FUN_143bfafc0(longlong *param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5
             ,undefined1 param_6,undefined4 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    if ((param_4 < 0) || (0xb < param_4)) {
      *param_8 = 1;
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_143b4c990(param_3,param_4);
      uVar2 = (**(code **)(*param_1 + 0x20))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)cVar1,param_8)
      ;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bfb0a0 FUN_143bfb0a0 body=231 status=ok
// SIG undefined FUN_143bfb0a0(void)

int FUN_143bfb0a0(undefined8 param_1,char param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined8 param_6,int param_7,undefined8 param_8,undefined4 *param_9)

{
  char cVar1;
  double dVar2;
  int local_res18;
  int local_18;
  int local_14;
  double local_10;
  
  cVar1 = FUN_143a8b0e0(*param_9);
  if (cVar1 == '\0') {
    local_res18 = param_3;
    if (param_2 == '\0') {
      local_res18 = 1 - param_3;
    }
    dVar2 = (double)FUN_143b91d10(local_res18,param_4,param_5);
    local_10 = dVar2 * 86400000.0 + (double)param_7;
    FUN_143bfb250(param_1,local_10,1,3,1,&local_14,&local_18,param_9);
    cVar1 = FUN_143a8b0e0(*param_9);
    if (cVar1 == '\0') {
      local_14 = local_14 + local_18;
    }
    else {
      local_14 = 0;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



// FUNCTION 143bfb190 FUN_143bfb190 body=96 status=ok
// SIG undefined FUN_143bfb190(void)

void FUN_143bfb190(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_143bfb250(param_1,param_2,param_3,4,0xc,param_4,param_5,param_6);
  return;
}



// FUNCTION 143bfb1f0 FUN_143bfb1f0 body=95 status=ok
// SIG undefined FUN_143bfb1f0(void)

void FUN_143bfb1f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143bfb250(param_1,param_2,1,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143bfb250 FUN_143bfb250 body=593 status=ok
// SIG undefined FUN_143bfb250(void)

void FUN_143bfb250(longlong param_1,double param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  undefined4 local_28;
  undefined8 local_20;
  
  *param_6 = 0;
  *param_7 = 0;
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x50) == '\0') {
      *param_8 = 0x1b;
    }
    else {
      local_20 = 0;
      if (*(longlong *)(param_1 + 0x48) == 0) {
        local_20 = *(longlong *)(param_1 + 0x30);
      }
      else {
        uVar3 = FUN_143b09610(*(undefined8 *)(param_1 + 0x48),0);
        dVar5 = (double)FUN_143bfb6f0(param_1,uVar3,param_3,param_4,param_5);
        if (dVar5 <= param_2) {
          local_28 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                     ::GetIndex(*(undefined8 *)(param_1 + 0x48));
          local_28 = local_28 + -1;
          uVar3 = FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_28);
          dVar5 = (double)FUN_143bfb6f0(param_1,uVar3,param_3,param_4,param_5);
          if (param_2 <= dVar5) {
            for (; -1 < local_28; local_28 = local_28 + -1) {
              uVar3 = FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_28);
              dVar5 = (double)FUN_143bfb6f0(param_1,uVar3,param_3,param_4,param_5);
              if (dVar5 <= param_2) break;
            }
            lVar4 = FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_28);
            local_20 = *(longlong *)(lVar4 + 0x10);
          }
          else {
            if (*(longlong *)(param_1 + 0x40) != 0) {
              local_20 = FUN_143bfaa10(param_1,param_2,param_3,param_4,param_5);
            }
            if (local_20 == 0) {
              lVar4 = FUN_143b09610(*(undefined8 *)(param_1 + 0x48),local_28);
              local_20 = *(longlong *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_20 = *(longlong *)(param_1 + 0x30);
        }
      }
      if (local_20 != 0) {
        uVar2 = FUN_143ab3100(local_20);
        *param_6 = uVar2;
        uVar2 = FAnalyticsSpan::GetStackDepth(local_20);
        *param_7 = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 143bfb4b0 FUN_143bfb4b0 body=185 status=ok
// SIG undefined FUN_143bfb4b0(void)

undefined8
FUN_143bfb4b0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_24 = 0;
  FUN_143bf9b50(param_1,&local_24);
  cVar1 = FUN_143a8b0e0(local_24);
  if (cVar1 == '\0') {
    cVar1 = FUN_143bfa5b0(param_1,param_2,param_3,&local_20,&local_18,local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      FUN_143b98cd0(param_4,local_20);
      FUN_143b98c50(param_4,local_18);
      FUN_143b98cf0(param_4,local_10[0]);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bfb570 FUN_143bfb570 body=8 status=ok
// SIG undefined FUN_143bfb570(void)

undefined * FUN_143bfb570(void)

{
  return &DAT_146bc85c8;
}



// FUNCTION 143bfb580 FUN_143bfb580 body=361 status=ok
// SIG undefined FUN_143bfb580(void)

void FUN_143bfb580(longlong param_1,undefined8 *param_2,longlong param_3,int *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_28;
  int local_24;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x30);
    local_28 = 0;
    if ((*(longlong *)(param_1 + 0x38) != 0) && (0 < *param_4)) {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x38));
      for (local_24 = 0; (local_28 < *param_4 && (local_24 < iVar2)); local_24 = local_24 + 1) {
        uVar3 = FUN_143b09610(*(undefined8 *)(param_1 + 0x38),local_24);
        *(undefined8 *)(param_3 + (longlong)local_28 * 8) = uVar3;
        local_28 = local_28 + 1;
      }
    }
    if ((*(longlong *)(param_1 + 0x40) != 0) && (local_28 < *param_4)) {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x40));
      for (local_24 = 0; (local_28 < *param_4 && (local_24 < iVar2)); local_24 = local_24 + 1) {
        uVar3 = FUN_143b09610(*(undefined8 *)(param_1 + 0x40),local_24);
        *(undefined8 *)(param_3 + (longlong)local_28 * 8) = uVar3;
        local_28 = local_28 + 1;
      }
    }
    *param_4 = local_28;
  }
  return;
}



// FUNCTION 143bfb6f0 FUN_143bfb6f0 body=213 status=ok
// SIG undefined FUN_143bfb6f0(void)

double FUN_143bfb6f0(undefined8 param_1,double *param_2,char param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  double local_18;
  
  local_18 = *param_2;
  if (param_3 != '\0') {
    uVar1 = FAnalyticsSpan::GetStackDepth(param_2[2]);
    uVar2 = FUN_143ab3100(param_2[2]);
    uVar3 = FAnalyticsSpan::GetStackDepth(param_2[1]);
    uVar4 = FUN_143ab3100(param_2[1]);
    iVar5 = FUN_143bfad50(param_1,uVar4,uVar3,uVar2,uVar1,param_4,param_5);
    local_18 = local_18 + (double)iVar5;
  }
  return local_18;
}



// FUNCTION 143bfb7d0 FUN_143bfb7d0 body=210 status=ok
// SIG undefined FUN_143bfb7d0(void)

undefined8 FUN_143bfb7d0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                        (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
      if (cVar1 == '\0') {
        cVar1 = FUN_143bf8ef0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
        if ((cVar1 != '\0') &&
           (cVar1 = FUN_143bf8ef0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40)),
           cVar1 != '\0')) {
          return 1;
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 143bfb8b0 FUN_143bfb8b0 body=111 status=ok
// SIG undefined FUN_143bfb8b0(void)

undefined8 FUN_143bfb8b0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_18;
  undefined1 local_14 [20];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,0,local_14,&local_18,param_3);
    if (local_18 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bfb920 FUN_143bfb920 body=179 status=ok
// SIG undefined FUN_143bfb920(void)

undefined8 FUN_143bfb920(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_34;
  int local_30;
  undefined1 local_2c [4];
  double local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [16];
  
  local_34 = 0;
  local_28 = (double)FUN_143a91970();
  local_28 = local_28 * 1000.0;
  (**(code **)(*param_1 + 0x18))(param_1,local_28,0,local_2c,&local_30,&local_34);
  if (local_30 == 0) {
    cVar1 = FUN_143bfa120(param_1,local_28,0,local_10,local_18,&local_20);
    if ((cVar1 != '\0') && (iVar2 = FAnalyticsSpan::GetStackDepth(local_20), iVar2 != 0)) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143bfb9e0 FUN_143bfb9e0 body=147 status=ok
// SIG undefined FUN_143bfb9e0(void)

undefined8 * FUN_143bfb9e0(undefined8 *param_1,undefined8 param_2)

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
  *param_1 = icu_53::DateFormatSymbols::vftable;
  FUN_143a8aad0(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 99);
  uVar1 = FUN_143a8b650();
  FUN_143bfe600(param_1,uVar1,0,param_2,1);
  return param_1;
}



// FUNCTION 143bfba80 FUN_143bfba80 body=120 status=ok
// SIG undefined FUN_143bfba80(void)

undefined8 *
FUN_143bfba80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::DateFormatSymbols::vftable;
  FUN_143a8aad0(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 99);
  FUN_143bfc620(param_1,param_2);
  return param_1;
}



// FUNCTION 143bfbb00 FUN_143bfbb00 body=156 status=ok
// SIG undefined FUN_143bfbb00(void)

undefined8 *
FUN_143bfbb00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DateFormatSymbols::vftable;
  FUN_143a8aad0(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 99);
  FUN_143bfe600(param_1,param_2,param_3,param_4,0);
  return param_1;
}



// FUNCTION 143bfbba0 FUN_143bfbba0 body=100 status=ok
// SIG undefined FUN_143bfbba0(void)

void FUN_143bfbba0(undefined8 *param_1)

{
  *param_1 = icu_53::DateFormatSymbols::vftable;
  FUN_143bfce70(param_1);
  FUN_143a8dc60(param_1 + 99);
  FUN_143a8acf0(param_1 + 0x34);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bfbc10 FUN_143bfbc10 body=2215 status=ok
// SIG undefined FUN_143bfbc10(void)

char FUN_143bfbc10(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  char local_28;
  int local_24;
  
  if (param_1 == param_2) {
    cVar1 = '\x01';
  }
  else if ((((((((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
                (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) &&
               (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) &&
              ((*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40) &&
               (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50))))) &&
             (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60))) &&
            (((*(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x70) &&
              (*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80))) &&
             ((*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90) &&
              (((*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0) &&
                (*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0))) &&
               (*(int *)(param_1 + 0xc0) == *(int *)(param_2 + 0xc0))))))))) &&
           (((*(int *)(param_1 + 0xd0) == *(int *)(param_2 + 0xd0) &&
             (*(int *)(param_1 + 0xe0) == *(int *)(param_2 + 0xe0))) &&
            ((*(int *)(param_1 + 0xf0) == *(int *)(param_2 + 0xf0) &&
             (((*(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100) &&
               (*(int *)(param_1 + 0x110) == *(int *)(param_2 + 0x110))) &&
              ((*(int *)(param_1 + 0x120) == *(int *)(param_2 + 0x120) &&
               (((*(int *)(param_1 + 0x130) == *(int *)(param_2 + 0x130) &&
                 (*(int *)(param_1 + 0x140) == *(int *)(param_2 + 0x140))) &&
                (*(int *)(param_1 + 0x150) == *(int *)(param_2 + 0x150))))))))))))) &&
          ((((*(int *)(param_1 + 0x160) == *(int *)(param_2 + 0x160) &&
             (*(int *)(param_1 + 0x170) == *(int *)(param_2 + 0x170))) &&
            ((*(int *)(param_1 + 0x180) == *(int *)(param_2 + 0x180) &&
             (((((iVar2 = _guard_xfg_dispatch_icall_nop
                                    ((void *)(param_1 + 0x340),(void *)(param_2 + 0x340),0x1c),
                 iVar2 == 0 &&
                 (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),
                                        *(undefined4 *)(param_1 + 0x10)), cVar1 != '\0')) &&
                ((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x18),
                                        *(undefined8 *)(param_2 + 0x18),
                                        *(undefined4 *)(param_1 + 0x20)), cVar1 != '\0' &&
                 ((((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x28),
                                           *(undefined8 *)(param_2 + 0x28),
                                           *(undefined4 *)(param_1 + 0x30)), cVar1 != '\0' &&
                    (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x38),
                                           *(undefined8 *)(param_2 + 0x38),
                                           *(undefined4 *)(param_1 + 0x40)), cVar1 != '\0')) &&
                   (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x48),
                                          *(undefined8 *)(param_2 + 0x48),
                                          *(undefined4 *)(param_1 + 0x50)), cVar1 != '\0')) &&
                  ((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x58),
                                          *(undefined8 *)(param_2 + 0x58),
                                          *(undefined4 *)(param_1 + 0x60)), cVar1 != '\0' &&
                   (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x68),
                                          *(undefined8 *)(param_2 + 0x68),
                                          *(undefined4 *)(param_1 + 0x70)), cVar1 != '\0')))))))) &&
               (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x78),
                                      *(undefined8 *)(param_2 + 0x78),
                                      *(undefined4 *)(param_1 + 0x80)), cVar1 != '\0')) &&
              ((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x88),
                                      *(undefined8 *)(param_2 + 0x88),
                                      *(undefined4 *)(param_1 + 0x90)), cVar1 != '\0' &&
               (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x98),
                                      *(undefined8 *)(param_2 + 0x98),
                                      *(undefined4 *)(param_1 + 0xa0)), cVar1 != '\0')))))))) &&
           ((((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0xa8)
                                     ,*(undefined4 *)(param_1 + 0xb0)), cVar1 != '\0' &&
              (((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0xb8),
                                       *(undefined8 *)(param_2 + 0xb8),
                                       *(undefined4 *)(param_1 + 0xc0)), cVar1 != '\0' &&
                (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_2 + 200)
                                       ,*(undefined4 *)(param_1 + 0xd0)), cVar1 != '\0')) &&
               (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0xd8),
                                      *(undefined8 *)(param_2 + 0xd8),
                                      *(undefined4 *)(param_1 + 0xe0)), cVar1 != '\0')))) &&
             (((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0xe8),
                                      *(undefined8 *)(param_2 + 0xe8),
                                      *(undefined4 *)(param_1 + 0xf0)), cVar1 != '\0' &&
               (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0xf8),
                                      *(undefined8 *)(param_2 + 0xf8),
                                      *(undefined4 *)(param_1 + 0x100)), cVar1 != '\0')) &&
              (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x108),
                                     *(undefined8 *)(param_2 + 0x108),
                                     *(undefined4 *)(param_1 + 0x110)), cVar1 != '\0')))) &&
            (((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x118),
                                     *(undefined8 *)(param_2 + 0x118),
                                     *(undefined4 *)(param_1 + 0x120)), cVar1 != '\0' &&
              (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x128),
                                     *(undefined8 *)(param_2 + 0x128),
                                     *(undefined4 *)(param_1 + 0x130)), cVar1 != '\0')) &&
             (((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x138),
                                      *(undefined8 *)(param_2 + 0x138),
                                      *(undefined4 *)(param_1 + 0x140)), cVar1 != '\0' &&
               (((cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x148),
                                        *(undefined8 *)(param_2 + 0x148),
                                        *(undefined4 *)(param_1 + 0x150)), cVar1 != '\0' &&
                 (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x158),
                                        *(undefined8 *)(param_2 + 0x158),
                                        *(undefined4 *)(param_1 + 0x160)), cVar1 != '\0')) &&
                (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x168),
                                       *(undefined8 *)(param_2 + 0x168),
                                       *(undefined4 *)(param_1 + 0x170)), cVar1 != '\0')))) &&
              (cVar1 = FUN_143bfc500(*(undefined8 *)(param_1 + 0x178),
                                     *(undefined8 *)(param_2 + 0x178),
                                     *(undefined4 *)(param_1 + 0x180)), cVar1 != '\0')))))))))) {
    if ((*(longlong *)(param_1 + 0x188) == 0) && (*(longlong *)(param_2 + 0x188) == 0)) {
      cVar1 = FUN_143a8afa0(param_1 + 0x1a0,param_2 + 0x1a0);
      if (cVar1 != '\0') {
        return '\x01';
      }
    }
    else if (((*(longlong *)(param_1 + 0x188) != 0) &&
             ((*(longlong *)(param_2 + 0x188) != 0 &&
              (*(int *)(param_1 + 0x198) == *(int *)(param_2 + 0x198))))) &&
            (*(int *)(param_1 + 0x19c) == *(int *)(param_2 + 0x19c))) {
      local_28 = '\x01';
      local_24 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x198) <= local_24) {
          return local_28;
        }
        if (local_28 == '\0') break;
        local_28 = FUN_143bfc500(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x188) + (longlong)local_24 * 8),
                                 *(undefined8 *)
                                  (*(longlong *)(param_2 + 0x188) + (longlong)local_24 * 8),
                                 *(undefined4 *)(param_1 + 0x19c));
        local_24 = local_24 + 1;
      }
      return '\0';
    }
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



// FUNCTION 143bfc4c0 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl CMFCRibbonComboBox::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: virtual void * __ptr64 __cdecl CMFCRibbonStatusBarPane::`scalar deleting
   destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl CPaneFrameWnd::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 FID_conflict__scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  FUN_143bfbba0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bfc500 FUN_143bfc500 body=120 status=ok
// SIG undefined FUN_143bfc500(void)

undefined8 FUN_143bfc500(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_res18;
  
  local_res18 = param_3;
  if (param_1 == param_2) {
    uVar2 = 1;
  }
  else {
    do {
      if (local_res18 < 1) {
        return 1;
      }
      local_res18 = local_res18 + -1;
      cVar1 = FUN_143b0c130(param_1 + (longlong)local_res18 * 0x28,
                            param_2 + (longlong)local_res18 * 0x28);
    } while (cVar1 == '\0');
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bfc580 FUN_143bfc580 body=149 status=ok
// SIG undefined FUN_143bfc580(void)

void FUN_143bfc580(longlong *param_1,int *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 local_18;
  
  *param_2 = param_4;
  lVar1 = FUN_143c01690((longlong)param_4);
  *param_1 = lVar1;
  if (*param_1 != 0) {
    for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
      UDarwinGameplayFunctionLibrary::GetInSameTeam
                ((longlong)local_18 * 0x28 + *param_1,param_3 + (longlong)local_18 * 0x28);
    }
  }
  return;
}



// FUNCTION 143bfc620 FUN_143bfc620 body=1596 status=ok
// SIG undefined FUN_143bfc620(void)

void FUN_143bfc620(longlong param_1,longlong param_2)

{
  FUN_143bfc580(param_1 + 8,param_1 + 0x10,*(undefined8 *)(param_2 + 8),
                *(undefined4 *)(param_2 + 0x10));
  FUN_143bfc580(param_1 + 0x18,param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),
                *(undefined4 *)(param_2 + 0x20));
  FUN_143bfc580(param_1 + 0x28,param_1 + 0x30,*(undefined8 *)(param_2 + 0x28),
                *(undefined4 *)(param_2 + 0x30));
  FUN_143bfc580(param_1 + 0x38,param_1 + 0x40,*(undefined8 *)(param_2 + 0x38),
                *(undefined4 *)(param_2 + 0x40));
  FUN_143bfc580(param_1 + 0x48,param_1 + 0x50,*(undefined8 *)(param_2 + 0x48),
                *(undefined4 *)(param_2 + 0x50));
  FUN_143bfc580(param_1 + 0x58,param_1 + 0x60,*(undefined8 *)(param_2 + 0x58),
                *(undefined4 *)(param_2 + 0x60));
  FUN_143bfc580(param_1 + 0x68,param_1 + 0x70,*(undefined8 *)(param_2 + 0x68),
                *(undefined4 *)(param_2 + 0x70));
  FUN_143bfc580(param_1 + 0x78,param_1 + 0x80,*(undefined8 *)(param_2 + 0x78),
                *(undefined4 *)(param_2 + 0x80));
  FUN_143bfc580(param_1 + 0x88,param_1 + 0x90,*(undefined8 *)(param_2 + 0x88),
                *(undefined4 *)(param_2 + 0x90));
  FUN_143bfc580(param_1 + 0x98,param_1 + 0xa0,*(undefined8 *)(param_2 + 0x98),
                *(undefined4 *)(param_2 + 0xa0));
  FUN_143bfc580(param_1 + 0xa8,param_1 + 0xb0,*(undefined8 *)(param_2 + 0xa8),
                *(undefined4 *)(param_2 + 0xb0));
  FUN_143bfc580(param_1 + 0xb8,param_1 + 0xc0,*(undefined8 *)(param_2 + 0xb8),
                *(undefined4 *)(param_2 + 0xc0));
  FUN_143bfc580(param_1 + 200,param_1 + 0xd0,*(undefined8 *)(param_2 + 200),
                *(undefined4 *)(param_2 + 0xd0));
  FUN_143bfc580(param_1 + 0xd8,param_1 + 0xe0,*(undefined8 *)(param_2 + 0xd8),
                *(undefined4 *)(param_2 + 0xe0));
  FUN_143bfc580(param_1 + 0xe8,param_1 + 0xf0,*(undefined8 *)(param_2 + 0xe8),
                *(undefined4 *)(param_2 + 0xf0));
  FUN_143bfc580(param_1 + 0xf8,param_1 + 0x100,*(undefined8 *)(param_2 + 0xf8),
                *(undefined4 *)(param_2 + 0x100));
  FUN_143bfc580(param_1 + 0x108,param_1 + 0x110,*(undefined8 *)(param_2 + 0x108),
                *(undefined4 *)(param_2 + 0x110));
  FUN_143bfc580(param_1 + 0x118,param_1 + 0x120,*(undefined8 *)(param_2 + 0x118),
                *(undefined4 *)(param_2 + 0x120));
  FUN_143bfc580(param_1 + 0x128,param_1 + 0x130,*(undefined8 *)(param_2 + 0x128),
                *(undefined4 *)(param_2 + 0x130));
  FUN_143bfc580(param_1 + 0x138,param_1 + 0x140,*(undefined8 *)(param_2 + 0x138),
                *(undefined4 *)(param_2 + 0x140));
  FUN_143bfc580(param_1 + 0x148,param_1 + 0x150,*(undefined8 *)(param_2 + 0x148),
                *(undefined4 *)(param_2 + 0x150));
  FUN_143bfc580(param_1 + 0x158,param_1 + 0x160,*(undefined8 *)(param_2 + 0x158),
                *(undefined4 *)(param_2 + 0x160));
  if (*(longlong *)(param_2 + 0x168) == 0) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  else {
    FUN_143bfc580(param_1 + 0x168,param_1 + 0x170,*(undefined8 *)(param_2 + 0x168),
                  *(undefined4 *)(param_2 + 0x170));
  }
  if (*(longlong *)(param_2 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  else {
    FUN_143bfc580(param_1 + 0x178,param_1 + 0x180,*(undefined8 *)(param_2 + 0x178),
                  *(undefined4 *)(param_2 + 0x180));
  }
  if (*(longlong *)(param_2 + 0x188) == 0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    FUN_143bfcc60(param_1,*(undefined8 *)(param_2 + 0x188));
  }
  FUN_143a8adb0(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 400) = 0;
  UDarwinGameplayFunctionLibrary::GetInSameTeam(param_1 + 0x318,param_2 + 0x318);
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x340),(void *)(param_2 + 0x340),0x1c);
  return;
}



// FUNCTION 143bfcc60 FUN_143bfcc60 body=525 status=ok
// SIG undefined FUN_143bfcc60(void)

void FUN_143bfcc60(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_44;
  int local_40;
  int local_3c;
  
  bVar2 = false;
  uVar3 = FUN_143aa7a40((longlong)*(int *)(param_1 + 0x198) << 3);
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    for (local_44 = 0; local_44 < *(int *)(param_1 + 0x198); local_44 = local_44 + 1) {
      uVar3 = FUN_143c01690((longlong)*(int *)(param_1 + 0x19c));
      *(undefined8 *)(*(longlong *)(param_1 + 0x188) + (longlong)local_44 * 8) = uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)local_44 * 8) == 0) {
        bVar2 = true;
        break;
      }
      for (local_40 = 0; local_40 < *(int *)(param_1 + 0x19c); local_40 = local_40 + 1) {
        UDarwinGameplayFunctionLibrary::GetInSameTeam
                  ((longlong)local_40 * 0x28 +
                   *(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)local_44 * 8),
                   (longlong)local_40 * 0x28 + *(longlong *)(param_2 + (longlong)local_44 * 8));
      }
    }
  }
  if (bVar2) {
    for (local_3c = local_44; -1 < local_3c; local_3c = local_3c + -1) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x188) + (longlong)local_3c * 8);
      if (puVar1 != (undefined8 *)0x0) {
        if (puVar1[-1] == 0) {
          FMemory::operator_delete(puVar1 + -1);
        }
        else {
          (**(code **)*puVar1)(puVar1,3);
        }
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}



// FUNCTION 143bfce70 FUN_143bfce70 body=4665 status=ok
// SIG undefined FUN_143bfce70(void)

void FUN_143bfce70(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x18), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x28), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x38), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x48), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x58), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x68), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x78), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x88), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x98) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x98), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xa8), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xb8), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 200), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xd8), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0xe8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xe8), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0xf8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x108) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x108), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x118), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x128) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x128), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x138) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x138), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x148) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x148), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x158) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x158), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x168) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x168), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x178), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  FUN_143bfe0b0(param_1);
  return;
}



// FUNCTION 143bfe0b0 FUN_143bfe0b0 body=562 status=ok
// SIG undefined FUN_143bfe0b0(void)

void FUN_143bfe0b0(longlong param_1)

{
  undefined8 *puVar1;
  int local_68;
  int local_64;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    for (local_68 = 0; local_68 < *(int *)(param_1 + 0x198); local_68 = local_68 + 1) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x188) + (longlong)local_68 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        if (puVar1[-1] == 0) {
          FMemory::operator_delete(puVar1 + -1);
        }
        else {
          (**(code **)*puVar1)(puVar1,3);
        }
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x188));
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    for (local_64 = 0; local_64 < *(int *)(param_1 + 0x198); local_64 = local_64 + 1) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 400) + (longlong)local_64 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        if (puVar1[-1] == 0) {
          FMemory::operator_delete(puVar1 + -1);
        }
        else {
          (**(code **)*puVar1)(puVar1,3);
        }
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 400));
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  return;
}



// FUNCTION 143bfe2f0 FUN_143bfe2f0 body=19 status=ok
// SIG undefined FUN_143bfe2f0(void)

void FUN_143bfe2f0(void)

{
  FUN_143bfe370();
  return;
}



// FUNCTION 143bfe310 FUN_143bfe310 body=72 status=ok
// SIG undefined FUN_143bfe310(void)

longlong FUN_143bfe310(undefined2 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_143ab45e0(L"GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxr",param_1);
  if (lVar1 == 0) {
    lVar1 = 0x23;
  }
  else {
    lVar1 = lVar1 + -0x145d1c0f0 >> 1;
  }
  return lVar1;
}



// FUNCTION 143bfe360 FUN_143bfe360 body=8 status=ok
// SIG undefined FUN_143bfe360(void)

wchar_t * FUN_143bfe360(void)

{
  return L"GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxr";
}



// FUNCTION 143bfe370 FUN_143bfe370 body=8 status=ok
// SIG undefined FUN_143bfe370(void)

undefined * FUN_143bfe370(void)

{
  return &DAT_146bc8600;
}



// FUNCTION 143bfe380 FUN_143bfe380 body=237 status=ok
// SIG undefined FUN_143bfe380(void)

void FUN_143bfe380(longlong *param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    local_14 = 0;
    iVar2 = FUN_143aa4d80(param_3);
    *param_2 = iVar2;
    lVar3 = FUN_143c01690((longlong)*param_2);
    *param_1 = lVar3;
    if (*param_1 == 0) {
      *param_2 = 0;
      *param_4 = 7;
    }
    else {
      for (local_18 = 0; local_18 < *param_2; local_18 = local_18 + 1) {
        local_10 = FUN_143aa4da0(param_3,local_18,&local_14,param_4);
        FUN_143a90d80((longlong)local_18 * 0x28 + *param_1,1,local_10,local_14);
      }
    }
  }
  return;
}



// FUNCTION 143bfe470 FUN_143bfe470 body=207 status=ok
// SIG undefined FUN_143bfe470(void)

void FUN_143bfe470(longlong *param_1,int *param_2,longlong param_3,int param_4,int param_5,
                  undefined4 *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_18;
  
  cVar1 = FUN_143a8b110(*param_6);
  if (cVar1 != '\0') {
    *param_2 = param_4;
    lVar2 = FUN_143c01690((longlong)param_4);
    *param_1 = lVar2;
    if (*param_1 == 0) {
      *param_2 = 0;
      *param_6 = 7;
    }
    else {
      for (local_18 = 0; local_18 < *param_2; local_18 = local_18 + 1) {
        FUN_143a90d80((longlong)local_18 * 0x28 + *param_1,1,
                      param_3 + (longlong)(local_18 * param_5) * 2,0xffffffff);
      }
    }
  }
  return;
}



// FUNCTION 143bfe540 FUN_143bfe540 body=185 status=ok
// SIG undefined FUN_143bfe540(void)

void FUN_143bfe540(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  FUN_143a90910(param_1 + (longlong)param_2 * 0x28);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    local_18[0] = 0;
    local_10 = FUN_143aa5130(param_3,&DAT_145d1c24c,local_18,param_4);
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      FUN_143a90d80(param_1 + (longlong)param_2 * 0x28,1,local_10,local_18[0]);
    }
  }
  *param_4 = 0;
  return;
}



// FUNCTION 143bfe600 FUN_143bfe600 body=12254 status=ok
// SIG undefined FUN_143bfe600(void)

void FUN_143bfe600(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,char param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 *in_stack_fffffffffffffcc8;
  int local_328;
  undefined4 local_324;
  int local_320 [2];
  undefined8 local_318;
  undefined1 local_310 [32];
  int local_2f0;
  undefined **local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  ulonglong *local_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  ulonglong *local_2a0;
  ulonglong local_298;
  undefined8 local_290;
  undefined8 local_288;
  ulonglong local_280;
  longlong local_278;
  ulonglong *local_270;
  ulonglong *local_268;
  undefined8 local_260;
  ulonglong local_258;
  ulonglong local_250;
  ulonglong local_248;
  ulonglong *local_240;
  undefined8 local_238;
  ulonglong local_230;
  ulonglong *local_228;
  ulonglong *local_220;
  ulonglong *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  longlong local_1c8;
  ulonglong *local_1c0;
  undefined8 local_1b8;
  ulonglong *local_1b0;
  undefined8 local_1a8;
  ulonglong *local_1a0;
  ulonglong *local_198;
  ulonglong *local_190;
  ulonglong *local_188;
  ulonglong *local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  char *local_168;
  ulonglong *local_160;
  undefined8 local_158;
  ulonglong *local_150;
  undefined8 local_148;
  ulonglong *local_140;
  ulonglong *local_138;
  ulonglong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  ulonglong *local_98;
  undefined8 local_90;
  ulonglong *local_88;
  longlong local_80;
  ulonglong *local_78;
  longlong local_70;
  ulonglong *local_68;
  longlong local_60;
  ulonglong *local_58;
  longlong local_50;
  ulonglong *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18 [24];
  
  local_20 = 0xfffffffffffffffe;
  local_320[0] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x340),0,0x1c);
  FUN_143a8adb0(param_1 + 0x1a0,param_2);
  cVar9 = FUN_143a8b0e0(*param_4);
  if (cVar9 == '\0') {
    FUN_143b91920(local_310,param_2,param_3,param_4);
    local_2d8 = FUN_143b92290(local_310,&DAT_145d1c138,param_4);
    local_260 = FUN_143aa3350(local_2d8,"abbreviated",0,param_4);
    local_2f0 = *param_4;
    local_200 = FUN_143aa3350(local_2d8,&DAT_145d1c224,0,param_4);
    if (*param_4 == 2) {
      *param_4 = local_2f0;
      local_200 = FUN_143aa3350(local_2d8,"abbreviated",0,param_4);
    }
    local_2f0 = *param_4;
    local_1f0 = FUN_143aa3350(local_2d8,"narrow",0,param_4);
    if (*param_4 == 2) {
      *param_4 = local_2f0;
      local_1f0 = FUN_143aa3350(local_2d8,"abbreviated",0,param_4);
    }
    local_324 = 0;
    local_f0 = FUN_143b92290(local_310,"monthPatterns",&local_324);
    cVar9 = FUN_143a8b110(local_324);
    if ((cVar9 != '\0') && (local_f0 != 0)) {
      uVar11 = FUN_143c01690(7);
      *(undefined8 *)(param_1 + 0x168) = uVar11;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        uVar11 = FUN_143b91fb0(local_310,"monthPatterns",&DAT_145d1c224,&local_324);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),0,uVar11,&local_324);
        uVar11 = FUN_143b91fb0(local_310,"monthPatterns","abbreviated",&local_324);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),1,uVar11,&local_324);
        uVar11 = FUN_143b91fb0(local_310,"monthPatterns","narrow",&local_324);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),2,uVar11,&local_324);
        uVar11 = FUN_143b92120(local_310,"monthPatterns","stand-alone",&DAT_145d1c224,&local_324);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),3,uVar11,&local_324);
        uVar11 = FUN_143b92120(local_310,"monthPatterns","stand-alone","abbreviated",&local_324);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),4,uVar11,&local_324);
        uVar11 = FUN_143b92120(local_310,"monthPatterns","stand-alone","narrow",&local_324);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),5,uVar11,&local_324);
        in_stack_fffffffffffffcc8 = &local_324;
        uVar11 = FUN_143b92120(local_310,"monthPatterns","numeric",&DAT_145d1c1cc,
                               in_stack_fffffffffffffcc8);
        FUN_143bfe540(*(undefined8 *)(param_1 + 0x168),6,uVar11,&local_324);
        cVar9 = FUN_143a8b110(local_324);
        if (cVar9 == '\0') {
          local_210 = *(undefined8 **)(param_1 + 0x168);
          local_1e0 = local_210;
          local_30 = local_210;
          if (local_210 == (undefined8 *)0x0) {
            local_90 = 0;
          }
          else {
            if (local_210[-1] == 0) {
              FMemory::operator_delete(local_210 + -1);
              local_158 = 0;
            }
            else {
              local_158 = (**(code **)*local_210)(local_210,3);
            }
            local_90 = local_158;
          }
          *(undefined8 *)(param_1 + 0x168) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x170) = 7;
        }
      }
    }
    local_324 = 0;
    local_1c8 = FUN_143b92290(local_310,"cyclicNameSets",&local_324);
    cVar9 = FUN_143a8b110(local_324);
    if ((cVar9 != '\0') && (local_1c8 != 0)) {
      local_1b8 = FUN_143aa3350(local_1c8,"years",0,&local_324);
      cVar9 = FUN_143a8b110(local_324);
      if (cVar9 != '\0') {
        local_148 = FUN_143aa3350(local_1b8,"format",0,&local_324);
        cVar9 = FUN_143a8b110(local_324);
        if (cVar9 != '\0') {
          local_120 = FUN_143aa3350(local_148,"abbreviated",0,&local_324);
          cVar9 = FUN_143a8b110(local_324);
          if (cVar9 != '\0') {
            FUN_143bfe380(param_1 + 0x178,param_1 + 0x180,local_120,&local_324);
            FUN_143aa2ef0(local_120);
          }
          FUN_143aa2ef0(local_148);
        }
        FUN_143aa2ef0(local_1b8);
      }
    }
    local_324 = 0;
    uVar11 = FUN_143a8c200(param_2);
    local_128 = FUN_143aa5b10(0,uVar11,&local_324);
    cVar9 = FUN_143a8b110(local_324);
    uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffcc8 >> 0x20);
    if (cVar9 != '\0') {
      local_1a8 = FUN_143aa3350(local_128,"contextTransforms",0,&local_324);
      cVar9 = FUN_143a8b110(local_324);
      uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffcc8 >> 0x20);
      if (cVar9 != '\0') {
        while( true ) {
          local_278 = FUN_143aa4880(local_1a8,0,&local_324);
          uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffcc8 >> 0x20);
          if (local_278 == 0) break;
          local_1e8 = (undefined1 *)FUN_143aa4640(local_278,local_320,param_4);
          cVar9 = FUN_143a8b110(local_324);
          if ((((cVar9 != '\0') && (local_1e8 != (undefined1 *)0x0)) && (1 < local_320[0])) &&
             (local_168 = (char *)FUN_143aa4760(local_278), local_168 != (char *)0x0)) {
            local_2e8 = &PTR_s_day_format_except_narrow_145d1c010;
            local_2e0 = 0;
            while ((*local_2e8 != (undefined *)0x0 &&
                   (local_2e0 = _guard_xfg_dispatch_icall_nop(local_168,*local_2e8), 0 < local_2e0))
                  ) {
              local_2e8 = local_2e8 + 2;
            }
            if ((*local_2e8 != (undefined *)0x0) && (local_2e0 == 0)) {
              *(undefined1 *)(param_1 + 0x340 + (longlong)*(int *)(local_2e8 + 1) * 2) = *local_1e8;
              *(undefined1 *)(param_1 + (longlong)*(int *)(local_2e8 + 1) * 2 + 0x341) =
                   local_1e8[4];
            }
          }
          local_324 = 0;
          FUN_143aa2ef0(local_278);
        }
        FUN_143aa2ef0(local_1a8);
      }
      FUN_143aa2ef0(local_128);
    }
    local_1f8 = 0;
    local_208 = 0;
    local_288 = 0;
    local_2c8 = 0;
    local_238 = 0;
    local_2b8 = 0;
    local_290 = 0;
    local_2d0 = 0;
    FUN_143a9f4f0(local_18,param_1 + 0x35c,param_1 + 0x3f9);
    cVar9 = FUN_143a8b0e0(*param_4);
    if (cVar9 == '\0') {
      local_100 = FUN_143aa4780(local_260,0,param_4);
      uVar11 = FUN_143aa4780(local_260,1,param_4);
      FUN_143acfd80(local_18,uVar11,local_100);
      FUN_143bfe380(param_1 + 8,param_1 + 0x10,local_260,param_4);
      FUN_143bfe380(param_1 + 0x18,param_1 + 0x20,local_200,param_4);
      FUN_143bfe380(param_1 + 0x28,param_1 + 0x30,local_1f0,param_4);
      uVar11 = FUN_143b91fb0(local_310,"monthNames",&DAT_145d1c224,param_4);
      local_50 = param_1 + 0x38;
      FUN_143bfe380(local_50,param_1 + 0x40,uVar11,param_4);
      uVar11 = FUN_143b91fb0(local_310,"monthNames","abbreviated",param_4);
      local_118 = param_1 + 0x48;
      FUN_143bfe380(local_118,param_1 + 0x50,uVar11,param_4);
      uVar11 = FUN_143b91fb0(local_310,"monthNames","narrow",param_4);
      local_80 = param_1 + 0x58;
      FUN_143bfe380(local_80,param_1 + 0x60,uVar11,param_4);
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b92120(local_310,"monthNames","stand-alone","narrow",param_4);
        local_e0 = param_1 + 0x58;
        FUN_143bfe380(local_e0,param_1 + 0x60,uVar11,param_4);
      }
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b91fb0(local_310,"monthNames","abbreviated",param_4);
        local_28 = param_1 + 0x58;
        FUN_143bfe380(local_28,param_1 + 0x60,uVar11,param_4);
      }
      uVar11 = FUN_143b92120(local_310,"monthNames","stand-alone",&DAT_145d1c224,param_4);
      local_d0 = param_1 + 0x68;
      FUN_143bfe380(local_d0,param_1 + 0x70,uVar11,param_4);
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b91fb0(local_310,"monthNames",&DAT_145d1c224,param_4);
        local_70 = param_1 + 0x68;
        FUN_143bfe380(local_70,param_1 + 0x70,uVar11,param_4);
      }
      uVar11 = FUN_143b92120(local_310,"monthNames","stand-alone","abbreviated",param_4);
      local_c0 = param_1 + 0x78;
      FUN_143bfe380(local_c0,param_1 + 0x80,uVar11,param_4);
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b91fb0(local_310,"monthNames","abbreviated",param_4);
        local_40 = param_1 + 0x78;
        FUN_143bfe380(local_40,param_1 + 0x80,uVar11,param_4);
      }
      uVar11 = FUN_143b92120(local_310,"monthNames","stand-alone","narrow",param_4);
      local_b0 = param_1 + 0x88;
      FUN_143bfe380(local_b0,param_1 + 0x90,uVar11,param_4);
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b91fb0(local_310,"monthNames","narrow",param_4);
        local_60 = param_1 + 0x88;
        FUN_143bfe380(local_60,param_1 + 0x90,uVar11,param_4);
        if (*param_4 == 2) {
          *param_4 = 0;
          uVar11 = FUN_143b91fb0(local_310,"monthNames","abbreviated",param_4);
          local_a0 = param_1 + 0x88;
          FUN_143bfe380(local_a0,param_1 + 0x90,uVar11,param_4);
        }
      }
      uVar11 = FUN_143b92290(local_310,"AmPmMarkers",param_4);
      local_38 = param_1 + 0x118;
      FUN_143bfe380(local_38,param_1 + 0x120,uVar11,param_4);
      uVar11 = FUN_143b91fb0(local_310,"quarters",&DAT_145d1c224,param_4);
      local_110 = param_1 + 0x128;
      FUN_143bfe380(local_110,param_1 + 0x130,uVar11,param_4);
      uVar11 = FUN_143b91fb0(local_310,"quarters","abbreviated",param_4);
      local_108 = param_1 + 0x138;
      FUN_143bfe380(local_108,param_1 + 0x140,uVar11,param_4);
      uVar11 = FUN_143b92120(local_310,"quarters","stand-alone",&DAT_145d1c224,param_4);
      local_f8 = param_1 + 0x148;
      FUN_143bfe380(local_f8,param_1 + 0x150,uVar11,param_4);
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b91fb0(local_310,"quarters",&DAT_145d1c224,param_4);
        local_e8 = param_1 + 0x148;
        FUN_143bfe380(local_e8,param_1 + 0x150,uVar11,param_4);
      }
      uVar11 = FUN_143b92120(local_310,"quarters","stand-alone","abbreviated",param_4);
      local_d8 = param_1 + 0x158;
      FUN_143bfe380(local_d8,param_1 + 0x160,uVar11,param_4);
      if (*param_4 == 2) {
        *param_4 = 0;
        uVar11 = FUN_143b91fb0(local_310,"quarters","abbreviated",param_4);
        local_c8 = param_1 + 0x158;
        FUN_143bfe380(local_c8,param_1 + 0x160,uVar11,param_4);
      }
      FUN_143a90d80(param_1 + 0x318,1,L"GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxr",0x23);
      local_1f8 = FUN_143b91fb0(local_310,"dayNames",&DAT_145d1c224,param_4);
      uVar10 = FUN_143aa4d80(local_1f8);
      *(undefined4 *)(param_1 + 0xa0) = uVar10;
      local_230 = (ulonglong)(*(int *)(param_1 + 0xa0) + 1);
      if (local_230 == 0) {
        local_198 = (ulonglong *)operator_new(8);
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_230;
        uVar12 = SUB168(ZEXT816(0x28) * auVar1,0);
        if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        lVar13 = uVar12 + 8;
        if (0xfffffffffffffff7 < uVar12) {
          lVar13 = -1;
        }
        local_198 = (ulonglong *)FUN_143a8d310(lVar13);
      }
      local_218 = local_198;
      if (local_198 == (ulonglong *)0x0) {
        local_1d8 = (ulonglong *)0x0;
      }
      else {
        *local_198 = local_230;
        _eh_vector_constructor_iterator_(local_198 + 1,0x28,local_230,FUN_143a8ac30,FUN_143a8dc60);
        local_1d8 = local_218 + 1;
      }
      local_b8 = local_1d8;
      *(ulonglong **)(param_1 + 0x98) = local_1d8;
      if (*(longlong *)(param_1 + 0x98) == 0) {
        *param_4 = 7;
      }
      else {
        for (local_328 = 0; local_328 < *(int *)(param_1 + 0xa0); local_328 = local_328 + 1) {
          local_318 = FUN_143aa4da0(local_1f8,local_328,local_320,param_4);
          FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 0x98),1,local_318
                        ,local_320[0]);
        }
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        local_208 = FUN_143b91fb0(local_310,"dayNames","abbreviated",param_4);
        uVar10 = FUN_143aa4d80(local_208);
        *(undefined4 *)(param_1 + 0xb0) = uVar10;
        local_2a8 = (ulonglong)(*(int *)(param_1 + 0xb0) + 1);
        if (local_2a8 == 0) {
          local_188 = (ulonglong *)operator_new(8);
        }
        else {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_2a8;
          uVar12 = SUB168(ZEXT816(0x28) * auVar2,0);
          if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
            uVar12 = 0xffffffffffffffff;
          }
          lVar13 = uVar12 + 8;
          if (0xfffffffffffffff7 < uVar12) {
            lVar13 = -1;
          }
          local_188 = (ulonglong *)FUN_143a8d310(lVar13);
        }
        local_240 = local_188;
        if (local_188 == (ulonglong *)0x0) {
          local_138 = (ulonglong *)0x0;
        }
        else {
          *local_188 = local_2a8;
          _eh_vector_constructor_iterator_(local_188 + 1,0x28,local_2a8,FUN_143a8ac30,FUN_143a8dc60)
          ;
          local_138 = local_240 + 1;
        }
        local_a8 = local_138;
        *(ulonglong **)(param_1 + 0xa8) = local_138;
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          *param_4 = 7;
        }
        else {
          for (local_328 = 0; local_328 < *(int *)(param_1 + 0xb0); local_328 = local_328 + 1) {
            local_318 = FUN_143aa4da0(local_208,local_328,local_320,param_4);
            FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 0xa8),1,
                          local_318,local_320[0]);
          }
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
          local_288 = FUN_143b91fb0(local_310,"dayNames","short",param_4);
          if (*param_4 == 2) {
            *param_4 = 0;
            local_288 = FUN_143b91fb0(local_310,"dayNames","abbreviated",param_4);
          }
          uVar10 = FUN_143aa4d80(local_288);
          *(undefined4 *)(param_1 + 0xc0) = uVar10;
          local_298 = (ulonglong)(*(int *)(param_1 + 0xc0) + 1);
          if (local_298 == 0) {
            local_178 = (ulonglong *)operator_new(8);
          }
          else {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_298;
            uVar12 = SUB168(ZEXT816(0x28) * auVar3,0);
            if (SUB168(ZEXT816(0x28) * auVar3,8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            lVar13 = uVar12 + 8;
            if (0xfffffffffffffff7 < uVar12) {
              lVar13 = -1;
            }
            local_178 = (ulonglong *)FUN_143a8d310(lVar13);
          }
          local_220 = local_178;
          if (local_178 == (ulonglong *)0x0) {
            local_1d0 = (ulonglong *)0x0;
          }
          else {
            *local_178 = local_298;
            _eh_vector_constructor_iterator_
                      (local_178 + 1,0x28,local_298,FUN_143a8ac30,FUN_143a8dc60);
            local_1d0 = local_220 + 1;
          }
          local_98 = local_1d0;
          *(ulonglong **)(param_1 + 0xb8) = local_1d0;
          if (*(longlong *)(param_1 + 0xb8) == 0) {
            *param_4 = 7;
          }
          else {
            for (local_328 = 0; local_328 < *(int *)(param_1 + 0xc0); local_328 = local_328 + 1) {
              local_318 = FUN_143aa4da0(local_288,local_328,local_320,param_4);
              FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 0xb8),1,
                            local_318,local_320[0]);
            }
            *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
            local_2c8 = FUN_143b91fb0(local_310,"dayNames","narrow",param_4);
            if (*param_4 == 2) {
              *param_4 = 0;
              local_2c8 = FUN_143b92120(local_310,"dayNames","stand-alone","narrow",param_4);
            }
            if (*param_4 == 2) {
              *param_4 = 0;
              local_2c8 = FUN_143b91fb0(local_310,"dayNames","abbreviated",param_4);
            }
            uVar10 = FUN_143aa4d80(local_2c8);
            *(undefined4 *)(param_1 + 0xd0) = uVar10;
            local_250 = (ulonglong)(*(int *)(param_1 + 0xd0) + 1);
            if (local_250 == 0) {
              local_1c0 = (ulonglong *)operator_new(8);
            }
            else {
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_250;
              uVar12 = SUB168(ZEXT816(0x28) * auVar4,0);
              if (SUB168(ZEXT816(0x28) * auVar4,8) != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              lVar13 = uVar12 + 8;
              if (0xfffffffffffffff7 < uVar12) {
                lVar13 = -1;
              }
              local_1c0 = (ulonglong *)FUN_143a8d310(lVar13);
            }
            local_2c0 = local_1c0;
            if (local_1c0 == (ulonglong *)0x0) {
              local_1b0 = (ulonglong *)0x0;
            }
            else {
              *local_1c0 = local_250;
              _eh_vector_constructor_iterator_
                        (local_1c0 + 1,0x28,local_250,FUN_143a8ac30,FUN_143a8dc60);
              local_1b0 = local_2c0 + 1;
            }
            local_88 = local_1b0;
            *(ulonglong **)(param_1 + 200) = local_1b0;
            if (*(longlong *)(param_1 + 200) == 0) {
              *param_4 = 7;
            }
            else {
              for (local_328 = 0; local_328 < *(int *)(param_1 + 0xd0); local_328 = local_328 + 1) {
                local_318 = FUN_143aa4da0(local_2c8,local_328,local_320,param_4);
                FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 200),1,
                              local_318,local_320[0]);
              }
              *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
              local_238 = FUN_143b92120(local_310,"dayNames","stand-alone",&DAT_145d1c224,param_4);
              if (*param_4 == 2) {
                *param_4 = 0;
                local_238 = FUN_143b91fb0(local_310,"dayNames",&DAT_145d1c224,param_4);
              }
              uVar10 = FUN_143aa4d80(local_238);
              *(undefined4 *)(param_1 + 0xe0) = uVar10;
              local_248 = (ulonglong)(*(int *)(param_1 + 0xe0) + 1);
              if (local_248 == 0) {
                local_1a0 = (ulonglong *)operator_new(8);
              }
              else {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = local_248;
                uVar12 = SUB168(ZEXT816(0x28) * auVar5,0);
                if (SUB168(ZEXT816(0x28) * auVar5,8) != 0) {
                  uVar12 = 0xffffffffffffffff;
                }
                lVar13 = uVar12 + 8;
                if (0xfffffffffffffff7 < uVar12) {
                  lVar13 = -1;
                }
                local_1a0 = (ulonglong *)FUN_143a8d310(lVar13);
              }
              local_268 = local_1a0;
              if (local_1a0 == (ulonglong *)0x0) {
                local_190 = (ulonglong *)0x0;
              }
              else {
                *local_1a0 = local_248;
                _eh_vector_constructor_iterator_
                          (local_1a0 + 1,0x28,local_248,FUN_143a8ac30,FUN_143a8dc60);
                local_190 = local_268 + 1;
              }
              local_78 = local_190;
              *(ulonglong **)(param_1 + 0xd8) = local_190;
              if (*(longlong *)(param_1 + 0xd8) == 0) {
                *param_4 = 7;
              }
              else {
                for (local_328 = 0; local_328 < *(int *)(param_1 + 0xe0); local_328 = local_328 + 1)
                {
                  local_318 = FUN_143aa4da0(local_238,local_328,local_320,param_4);
                  FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 0xd8),1,
                                local_318,local_320[0]);
                }
                *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
                local_2b8 = FUN_143b92120(local_310,"dayNames","stand-alone","abbreviated",param_4);
                if (*param_4 == 2) {
                  *param_4 = 0;
                  local_2b8 = FUN_143b91fb0(local_310,"dayNames","abbreviated",param_4);
                }
                uVar10 = FUN_143aa4d80(local_2b8);
                *(undefined4 *)(param_1 + 0xf0) = uVar10;
                local_258 = (ulonglong)(*(int *)(param_1 + 0xf0) + 1);
                if (local_258 == 0) {
                  local_180 = (ulonglong *)operator_new(8);
                }
                else {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = local_258;
                  uVar12 = SUB168(ZEXT816(0x28) * auVar6,0);
                  if (SUB168(ZEXT816(0x28) * auVar6,8) != 0) {
                    uVar12 = 0xffffffffffffffff;
                  }
                  lVar13 = uVar12 + 8;
                  if (0xfffffffffffffff7 < uVar12) {
                    lVar13 = -1;
                  }
                  local_180 = (ulonglong *)FUN_143a8d310(lVar13);
                }
                local_228 = local_180;
                if (local_180 == (ulonglong *)0x0) {
                  local_170 = (ulonglong *)0x0;
                }
                else {
                  *local_180 = local_258;
                  _eh_vector_constructor_iterator_
                            (local_180 + 1,0x28,local_258,FUN_143a8ac30,FUN_143a8dc60);
                  local_170 = local_228 + 1;
                }
                local_68 = local_170;
                *(ulonglong **)(param_1 + 0xe8) = local_170;
                if (*(longlong *)(param_1 + 0xe8) == 0) {
                  *param_4 = 7;
                }
                else {
                  for (local_328 = 0; local_328 < *(int *)(param_1 + 0xf0);
                      local_328 = local_328 + 1) {
                    local_318 = FUN_143aa4da0(local_2b8,local_328,local_320,param_4);
                    FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 0xe8),1
                                  ,local_318,local_320[0]);
                  }
                  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
                  local_290 = FUN_143b92120(local_310,"dayNames","stand-alone","short",param_4);
                  if (*param_4 == 2) {
                    *param_4 = 0;
                    local_290 = FUN_143b91fb0(local_310,"dayNames","abbreviated",param_4);
                  }
                  uVar10 = FUN_143aa4d80(local_290);
                  *(undefined4 *)(param_1 + 0x100) = uVar10;
                  local_2b0 = (ulonglong)(*(int *)(param_1 + 0x100) + 1);
                  if (local_2b0 == 0) {
                    local_160 = (ulonglong *)operator_new(8);
                  }
                  else {
                    auVar7._8_8_ = 0;
                    auVar7._0_8_ = local_2b0;
                    uVar12 = SUB168(ZEXT816(0x28) * auVar7,0);
                    if (SUB168(ZEXT816(0x28) * auVar7,8) != 0) {
                      uVar12 = 0xffffffffffffffff;
                    }
                    lVar13 = uVar12 + 8;
                    if (0xfffffffffffffff7 < uVar12) {
                      lVar13 = -1;
                    }
                    local_160 = (ulonglong *)FUN_143a8d310(lVar13);
                  }
                  local_2a0 = local_160;
                  if (local_160 == (ulonglong *)0x0) {
                    local_150 = (ulonglong *)0x0;
                  }
                  else {
                    *local_160 = local_2b0;
                    _eh_vector_constructor_iterator_
                              (local_160 + 1,0x28,local_2b0,FUN_143a8ac30,FUN_143a8dc60);
                    local_150 = local_2a0 + 1;
                  }
                  local_58 = local_150;
                  *(ulonglong **)(param_1 + 0xf8) = local_150;
                  if (*(longlong *)(param_1 + 0xf8) == 0) {
                    *param_4 = 7;
                  }
                  else {
                    for (local_328 = 0; local_328 < *(int *)(param_1 + 0x100);
                        local_328 = local_328 + 1) {
                      local_318 = FUN_143aa4da0(local_290,local_328,local_320,param_4);
                      FUN_143a90d80((longlong)(local_328 + 1) * 0x28 + *(longlong *)(param_1 + 0xf8)
                                    ,1,local_318,local_320[0]);
                    }
                    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
                    local_2d0 = FUN_143b92120(local_310,"dayNames","stand-alone","narrow",param_4);
                    if (*param_4 == 2) {
                      *param_4 = 0;
                      local_2d0 = FUN_143b91fb0(local_310,"dayNames","narrow",param_4);
                      if (*param_4 == 2) {
                        *param_4 = 0;
                        local_2d0 = FUN_143b91fb0(local_310,"dayNames","abbreviated",param_4);
                      }
                    }
                    uVar10 = FUN_143aa4d80(local_2d0);
                    *(undefined4 *)(param_1 + 0x110) = uVar10;
                    local_280 = (ulonglong)(*(int *)(param_1 + 0x110) + 1);
                    if (local_280 == 0) {
                      local_140 = (ulonglong *)operator_new(8);
                    }
                    else {
                      auVar8._8_8_ = 0;
                      auVar8._0_8_ = local_280;
                      uVar12 = SUB168(ZEXT816(0x28) * auVar8,0);
                      if (SUB168(ZEXT816(0x28) * auVar8,8) != 0) {
                        uVar12 = 0xffffffffffffffff;
                      }
                      lVar13 = uVar12 + 8;
                      if (0xfffffffffffffff7 < uVar12) {
                        lVar13 = -1;
                      }
                      local_140 = (ulonglong *)FUN_143a8d310(lVar13);
                    }
                    local_270 = local_140;
                    if (local_140 == (ulonglong *)0x0) {
                      local_130 = (ulonglong *)0x0;
                    }
                    else {
                      *local_140 = local_280;
                      _eh_vector_constructor_iterator_
                                (local_140 + 1,0x28,local_280,FUN_143a8ac30,FUN_143a8dc60);
                      local_130 = local_270 + 1;
                    }
                    local_48 = local_130;
                    *(ulonglong **)(param_1 + 0x108) = local_130;
                    if (*(longlong *)(param_1 + 0x108) == 0) {
                      *param_4 = 7;
                    }
                    else {
                      for (local_328 = 0; local_328 < *(int *)(param_1 + 0x110);
                          local_328 = local_328 + 1) {
                        local_318 = FUN_143aa4da0(local_2d0,local_328,local_320,param_4);
                        FUN_143a90d80((longlong)(local_328 + 1) * 0x28 +
                                      *(longlong *)(param_1 + 0x108),1,local_318,local_320[0]);
                      }
                      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (param_5 != '\0') {
      *param_4 = -0x80;
      FUN_143bfe470(param_1 + 8,param_1 + 0x10,&DAT_145d1c1d0,2,CONCAT44(uVar10,3),param_4);
      FUN_143bfe470(param_1 + 0x18,param_1 + 0x20,&DAT_145d1c1d0,2,3,param_4);
      FUN_143bfe470(param_1 + 0x28,param_1 + 0x30,&DAT_145d1c1d0,2,3,param_4);
      FUN_143bfe470(param_1 + 0x38,param_1 + 0x40,&DAT_145d1c140,0xd,3,param_4);
      FUN_143bfe470(param_1 + 0x48,param_1 + 0x50,&DAT_145d1c140,0xd,3,param_4);
      FUN_143bfe470(param_1 + 0x58,param_1 + 0x60,&DAT_145d1c140,0xd,3,param_4);
      FUN_143bfe470(param_1 + 0x68,param_1 + 0x70,&DAT_145d1c140,0xd,3,param_4);
      FUN_143bfe470(param_1 + 0x78,param_1 + 0x80,&DAT_145d1c140,0xd,3,param_4);
      FUN_143bfe470(param_1 + 0x88,param_1 + 0x90,&DAT_145d1c140,0xd,3,param_4);
      FUN_143bfe470(param_1 + 0x98,param_1 + 0xa0,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0xa8,param_1 + 0xb0,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0xb8,param_1 + 0xc0,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 200,param_1 + 0xd0,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0xd8,param_1 + 0xe0,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0xe8,param_1 + 0xf0,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0xf8,param_1 + 0x100,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0x108,param_1 + 0x110,&DAT_145d1c190,8,2,param_4);
      FUN_143bfe470(param_1 + 0x118,param_1 + 0x120,&DAT_145d1c1c0,2,3,param_4);
      FUN_143bfe470(param_1 + 0x128,param_1 + 0x130,&DAT_145d1c1b0,4,2,param_4);
      FUN_143bfe470(param_1 + 0x138,param_1 + 0x140,&DAT_145d1c1b0,4,2,param_4);
      FUN_143bfe470(param_1 + 0x148,param_1 + 0x150,&DAT_145d1c1b0,4,2,param_4);
      FUN_143bfe470(param_1 + 0x158,param_1 + 0x160,&DAT_145d1c1b0,4,2,param_4);
      FUN_143a90d80(param_1 + 0x318,1,L"GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxr",0x23);
    }
    FUN_143aa2ef0(local_260);
    FUN_143aa2ef0(local_200);
    FUN_143aa2ef0(local_1f0);
    FUN_143b919a0(local_310);
  }
  return;
}



// FUNCTION 143c015e0 FUN_143c015e0 body=121 status=ok
// SIG undefined FUN_143c015e0(void)

ulonglong FUN_143c015e0(int param_1,int param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined1 local_28;
  
  if (param_1 == 0x23) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = 1L << ((byte)param_1 & 0x3f);
    if (((uVar1 & 0x40075bdfa) == 0) && (((uVar1 & 0x1e080004) == 0 || (2 < param_2)))) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    uVar1 = (ulonglong)local_28;
  }
  return uVar1;
}



// FUNCTION 143c01660 FUN_143c01660 body=39 status=ok
// SIG undefined FUN_143c01660(void)

void FUN_143c01660(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143bfe310(param_1);
  FUN_143c015e0(uVar1,param_2);
  return;
}



// FUNCTION 143c01690 FUN_143c01690 body=259 status=ok
// SIG undefined FUN_143c01690(void)

ulonglong * FUN_143c01690(ulonglong param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_38;
  ulonglong *local_30;
  ulonglong *local_28;
  
  local_38 = param_1;
  if (param_1 == 0) {
    local_38 = 1;
  }
  if (local_38 == 0) {
    local_30 = (ulonglong *)operator_new(8);
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_38;
    uVar2 = SUB168(ZEXT816(0x28) * auVar1,0);
    if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    lVar3 = uVar2 + 8;
    if (0xfffffffffffffff7 < uVar2) {
      lVar3 = -1;
    }
    local_30 = (ulonglong *)FUN_143a8d310(lVar3);
  }
  if (local_30 == (ulonglong *)0x0) {
    local_28 = (ulonglong *)0x0;
  }
  else {
    *local_30 = local_38;
    _eh_vector_constructor_iterator_(local_30 + 1,0x28,local_38,FUN_143a8ac30,FUN_143a8dc60);
    local_28 = local_30 + 1;
  }
  return local_28;
}



// FUNCTION 143c017a0 FUN_143c017a0 body=44 status=ok
// SIG undefined FUN_143c017a0(void)

undefined8 * FUN_143c017a0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Appendable::vftable;
  return param_1;
}



// FUNCTION 143c017d0 FUN_143c017d0 body=41 status=ok
// SIG undefined FUN_143c017d0(void)

undefined8 * FUN_143c017d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 143c01800 FUN_143c01800 body=44 status=ok
// SIG undefined FUN_143c01800(void)

undefined8 * FUN_143c01800(undefined8 *param_1)

{
  FUN_143b69a50(param_1);
  *param_1 = icu_53::MessageFormat::DummyFormat::vftable;
  return param_1;
}



// FUNCTION 143c01830 FUN_143c01830 body=80 status=ok
// SIG undefined FUN_143c01830(void)

undefined8 * FUN_143c01830(undefined8 *param_1,undefined8 param_2)

{
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::FormatNameEnumeration::vftable;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = param_2;
  return param_1;
}



// FUNCTION 143c01880 FUN_143c01880 body=406 status=ok
// SIG undefined FUN_143c01880(void)

undefined8 * FUN_143c01880(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143b69a00(param_1,param_2);
  *param_1 = icu_53::MessageFormat::vftable;
  FUN_143a8a610(param_1 + 0x29,param_2 + 0x148);
  FUN_143e1e010(param_1 + 0x58,param_2 + 0x2c0);
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x348);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_143c01f00(param_1 + 0x6e,param_1,0);
  FUN_143c01f00(param_1 + 0x72,param_1,1);
  local_18[0] = 0;
  FUN_143c03560(param_1,param_2,local_18);
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if (cVar1 != '\0') {
    FUN_143c06ef0(param_1);
  }
  return param_1;
}



// FUNCTION 143c01a20 FUN_143c01a20 body=410 status=ok
// SIG undefined FUN_143c01a20(void)

undefined8 * FUN_143c01a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_143b69a50(param_1);
  *param_1 = icu_53::MessageFormat::vftable;
  uVar1 = FUN_143a8b650();
  FUN_143a8a610(param_1 + 0x29,uVar1);
  FUN_143e1df40(param_1 + 0x58,param_3);
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_143c01f00(param_1 + 0x6e,param_1,0);
  FUN_143c01f00(param_1 + 0x72,param_1,1);
  uVar1 = FUN_143a8c200(param_1 + 0x29);
  uVar2 = FUN_143a8c200(param_1 + 0x29);
  FUN_143b69ce0(param_1,uVar2,uVar1);
  FUN_143c02d90(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143c01bc0 FUN_143c01bc0 body=414 status=ok
// SIG undefined FUN_143c01bc0(void)

undefined8 *
FUN_143c01bc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_143b69a50(param_1);
  *param_1 = icu_53::MessageFormat::vftable;
  FUN_143a8a610(param_1 + 0x29,param_3);
  FUN_143e1df40(param_1 + 0x58,param_4);
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_143c01f00(param_1 + 0x6e,param_1,0);
  FUN_143c01f00(param_1 + 0x72,param_1,1);
  uVar1 = FUN_143a8c200(param_1 + 0x29);
  uVar2 = FUN_143a8c200(param_1 + 0x29);
  FUN_143b69ce0(param_1,uVar2,uVar1);
  FUN_143c02d90(param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143c01d60 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::PluralFormat::PluralSelector::vftable;
  return param_1;
}



// FUNCTION 143c01d80 FUN_143c01d80 body=375 status=ok
// SIG undefined FUN_143c01d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_143c01d80(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,undefined8 param_6)

{
  double dVar1;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_108 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  FUN_143b686d0(param_1 + 4);
  *(double *)(param_1 + 0x3a) = param_5;
  param_1[0x3c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  FUN_143a8ac30(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (param_5 == 0.0) {
    FUN_143b687b0(param_1 + 4,param_4);
  }
  else {
    dVar1 = (double)FUN_143b69180(param_4,param_6);
    FUN_143b68650(local_f8,SUB84(dVar1 - param_5,0));
    FUN_143b687b0(param_1 + 4,local_f8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
  }
  return param_1;
}



// FUNCTION 143c01f00 FUN_143c01f00 body=93 status=ok
// SIG undefined FUN_143c01f00(void)

undefined8 * FUN_143c01f00(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::MessageFormat::PluralSelectorProvider::vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  return param_1;
}



// FUNCTION 143c01f60 SchedulerResourceManagement body=63 status=ok
// SIG undefined SchedulerResourceManagement(SchedulerResourceManagement * this, SchedulerBase * param_1)

/* Library Function - Single Match
    public: __cdecl
   Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(class
   Concurrency::details::SchedulerBase * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

SchedulerResourceManagement * __thiscall
Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement
          (SchedulerResourceManagement *this,SchedulerBase *param_1)

{
  FUN_143c017a0(this);
  *(undefined ***)this = icu_53::UnicodeStringAppendable::vftable;
  *(SchedulerBase **)(this + 8) = param_1;
  return this;
}



// FUNCTION 143c01fa0 FUN_143c01fa0 body=163 status=ok
// SIG undefined FUN_143c01fa0(void)

void FUN_143c01fa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[-1] == 0) {
      FMemory::operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  FUN_143b1b790(param_1);
  return;
}



// FUNCTION 143c02050 operator_delete body=24 status=ok
// SIG undefined operator_delete(void)

void operator_delete(undefined8 param_1)

{
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143c02070 FUN_143c02070 body=118 status=ok
// SIG undefined FUN_143c02070(void)

void FUN_143c02070(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::FormatNameEnumeration::vftable;
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143ab1d60(param_1);
  return;
}



// FUNCTION 143c020f0 FUN_143c020f0 body=345 status=ok
// SIG undefined FUN_143c020f0(void)

void FUN_143c020f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::MessageFormat::vftable;
  FUN_143ab2e80(param_1[0x6c]);
  FUN_143ab2e80(param_1[0x6d]);
  FUN_143aa79f0(param_1[0x67]);
  FUN_143aa79f0(param_1[0x65]);
  puVar1 = (undefined8 *)param_1[0x6a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x6b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143c02290(param_1 + 0x72);
  FUN_143c02290(param_1 + 0x6e);
  FUN_143e1e170(param_1 + 0x58);
  FUN_143a8acf0(param_1 + 0x29);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143c02250 FUN_143c02250 body=50 status=ok
// SIG undefined FUN_143c02250(void)

void FUN_143c02250(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x100);
  Concurrency::
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
  ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            ((call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              *)(param_1 + 0x10));
  return;
}



// FUNCTION 143c02290 FUN_143c02290 body=118 status=ok
// SIG undefined FUN_143c02290(void)

void FUN_143c02290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::MessageFormat::PluralSelectorProvider::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c02310 FUN_143c02310 body=13 status=ok
// SIG undefined FUN_143c02310(void)

undefined1 FUN_143c02310(void)

{
  return 1;
}



// FUNCTION 143c02320 FUN_143c02320 body=632 status=ok
// SIG undefined FUN_143c02320(void)

undefined8 FUN_143c02320(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_58;
  int local_54;
  undefined4 local_34;
  undefined4 local_30 [2];
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    cVar1 = FUN_143ab1dd0(param_1,param_2);
    if (((cVar1 == '\0') || (cVar1 = FUN_143c025a0(param_1 + 0x2c0,param_2 + 0x2c0), cVar1 != '\0'))
       || (cVar1 = FUN_143acc2f0(param_1 + 0x148,param_2 + 0x148), cVar1 != '\0')) {
      uVar4 = 0;
    }
    else if ((*(longlong *)(param_1 + 0x368) == 0) == (*(longlong *)(param_2 + 0x368) == 0)) {
      if (*(longlong *)(param_1 + 0x368) == 0) {
        uVar4 = 1;
      }
      else {
        iVar2 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x368));
        iVar3 = FUN_143ab3100(*(undefined8 *)(param_2 + 0x368));
        if (iVar2 == iVar3) {
          local_54 = 0;
          local_58 = 0;
          local_30[0] = 0xffffffff;
          local_34 = 0xffffffff;
          while (((local_54 < iVar2 && (local_58 < iVar3)) &&
                 (cVar1 = FUN_143a8b110(0), cVar1 != '\0'))) {
            local_28 = FUN_143ab3590(*(undefined8 *)(param_1 + 0x368),local_30);
            local_20 = FUN_143ab3590(*(undefined8 *)(param_2 + 0x368),&local_34);
            if (*(int *)(local_28 + 0x10) != *(int *)(local_20 + 0x10)) {
              return 0;
            }
            local_10 = FUN_143ab3400(*(undefined8 *)(param_1 + 0x360),
                                     *(undefined4 *)(local_28 + 0x10));
            local_18 = FUN_143ab3400(*(undefined8 *)(param_2 + 0x360),
                                     *(undefined4 *)(local_20 + 0x10));
            cVar1 = FUN_143b358c0(local_10,local_18);
            if (cVar1 != '\0') {
              return 0;
            }
            local_54 = local_54 + 1;
            local_58 = local_58 + 1;
          }
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 143c025a0 FUN_143c025a0 body=58 status=ok
// SIG undefined FUN_143c025a0(void)

bool FUN_143c025a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143e1e250(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143c025e0 FUN_143c025e0 body=28 status=ok
// SIG undefined FUN_143c025e0(void)

longlong FUN_143c025e0(longlong *param_1,longlong param_2)

{
  return param_2 * 0xd8 + *param_1;
}



// FUNCTION 143c02600 FUN_143c02600 body=54 status=ok
// SIG undefined FUN_143c02600(void)

undefined8 FUN_143c02600(undefined8 param_1,uint param_2)

{
  operator_delete(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c02640 FUN_143c02640 body=54 status=ok
// SIG undefined FUN_143c02640(void)

undefined8 FUN_143c02640(undefined8 param_1,uint param_2)

{
  FUN_143c02070(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c02680 FUN_143c02680 body=54 status=ok
// SIG undefined FUN_143c02680(void)

undefined8 FUN_143c02680(undefined8 param_1,uint param_2)

{
  FUN_143c020f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c026c0 FUN_143c026c0 body=54 status=ok
// SIG undefined FUN_143c026c0(void)

undefined8 FUN_143c026c0(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c02700 FUN_143c02700 body=54 status=ok
// SIG undefined FUN_143c02700(void)

undefined8 FUN_143c02700(undefined8 param_1,uint param_2)

{
  FUN_143c02290(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c02740 FUN_143c02740 body=378 status=ok
// SIG undefined FUN_143c02740(void)

void FUN_143c02740(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_20,param_3);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar2 = FUN_143e21d00(param_2);
    if (iVar2 < -1) {
      *param_4 = 1;
      FUN_143b36bb0(local_20);
    }
    else {
      local_28 = 0;
      while ((local_28 = FUN_143c06210(param_1,local_28), -1 < local_28 &&
             (cVar1 = FUN_143a8b110(*param_4), cVar1 != '\0'))) {
        cVar1 = FUN_143c02e70(param_1,local_28 + 1,param_2,iVar2);
        if (cVar1 != '\0') {
          cVar1 = FUN_143b8cca0(local_20);
          if (cVar1 == '\0') {
            if (param_3 == (longlong *)0x0) {
              local_18 = 0;
            }
            else {
              local_18 = (**(code **)(*param_3 + 0x18))(param_3);
              if (local_18 == 0) {
                *param_4 = 7;
                FUN_143b36bb0(local_20);
                return;
              }
            }
          }
          else {
            local_18 = FUN_143b20430(local_20);
          }
          FUN_143c07450(param_1,local_28,local_18,param_4);
        }
      }
      FUN_143b36bb0(local_20);
    }
  }
  else {
    FUN_143b36bb0(local_20);
  }
  return;
}



// FUNCTION 143c028c0 FUN_143c028c0 body=181 status=ok
// SIG undefined FUN_143c028c0(void)

void FUN_143c028c0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_28;
  int local_24;
  undefined4 local_20 [2];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_18,param_3);
  if (-1 < param_2) {
    local_24 = 0;
    local_28 = 0;
    while (local_28 = FUN_143c06210(param_1,local_28), -1 < local_28) {
      if (param_2 == local_24) {
        local_20[0] = 0;
        uVar1 = FUN_143b20430(local_18);
        FUN_143c07450(param_1,local_28,uVar1,local_20);
        FUN_143b36bb0(local_18);
        return;
      }
      local_24 = local_24 + 1;
    }
  }
  FUN_143b36bb0(local_18);
  return;
}



// FUNCTION 143c02980 FUN_143c02980 body=325 status=ok
// SIG undefined FUN_143c02980(void)

void FUN_143c02980(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int local_38;
  int local_34;
  undefined4 local_30 [2];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  if ((param_2 != 0) && (-1 < param_3)) {
    if (*(longlong *)(param_1 + 0x360) != 0) {
      FUN_143ab3790(*(undefined8 *)(param_1 + 0x360));
    }
    if (*(longlong *)(param_1 + 0x368) != 0) {
      FUN_143ab3790(*(undefined8 *)(param_1 + 0x368));
    }
    local_38 = 0;
    local_30[0] = 0;
    local_34 = 0;
    while (((local_38 < param_3 && (cVar1 = FUN_143a8b110(local_30[0]), cVar1 != '\0')) &&
           (local_34 = FUN_143c06210(param_1,local_34), -1 < local_34))) {
      FUN_143c07450(param_1,local_34,*(undefined8 *)(param_2 + (longlong)local_38 * 8),local_30);
      local_38 = local_38 + 1;
    }
    for (; local_38 < param_3; local_38 = local_38 + 1) {
      local_28 = *(undefined8 **)(param_2 + (longlong)local_38 * 8);
      if (local_28 == (undefined8 *)0x0) {
        local_18 = 0;
      }
      else {
        local_20 = local_28;
        local_18 = (**(code **)*local_28)(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 143c02ad0 FUN_143c02ad0 body=217 status=ok
// SIG undefined FUN_143c02ad0(void)

undefined8 FUN_143c02ad0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x344) < param_2) {
      if (param_2 < 10) {
        local_res10 = 10;
      }
      else {
        local_res10 = param_2;
        if (param_2 < *(int *)(param_1 + 0x344) * 2) {
          local_res10 = *(int *)(param_1 + 0x344) << 1;
        }
      }
      lVar3 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x338),(longlong)local_res10 << 2);
      if (lVar3 == 0) {
        *param_3 = 7;
        uVar2 = 0;
      }
      else {
        *(longlong *)(param_1 + 0x338) = lVar3;
        *(int *)(param_1 + 0x344) = local_res10;
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143c02bb0 FUN_143c02bb0 body=122 status=ok
// SIG undefined FUN_143c02bb0(void)

void FUN_143c02bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar3 = FUN_143a8fe10(param_2);
  (**(code **)(*(longlong *)*param_1 + 0x20))(*param_1,uVar3,uVar1);
  iVar2 = FUN_143a904f0(param_2);
  *(int *)(param_1 + 1) = iVar2 + *(int *)(param_1 + 1);
  return;
}



// FUNCTION 143c02c30 FUN_143c02c30 body=144 status=ok
// SIG undefined FUN_143c02c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c02c30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143a90ff0(param_2,local_40,param_3,param_4);
  local_50 = local_58;
  FUN_143c02bb0(param_1,local_58);
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143c02cc0 FUN_143c02cc0 body=76 status=ok
// SIG undefined FUN_143c02cc0(void)

void FUN_143c02cc0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  (**(code **)(*(longlong *)*param_1 + 0x20))(*param_1,param_2,param_3);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + param_3;
  return;
}



// FUNCTION 143c02d10 FUN_143c02d10 body=128 status=ok
// SIG undefined FUN_143c02d10(void)

void FUN_143c02d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143e1f8a0(param_1 + 0x2c0,param_2,param_3,param_4);
    FUN_143c02f10(param_1,param_4);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 != '\0') {
      FUN_143c06ef0(param_1);
    }
  }
  return;
}



// FUNCTION 143c02d90 FUN_143c02d90 body=101 status=ok
// SIG undefined FUN_143c02d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c02d90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,local_68,param_3);
  return;
}



// FUNCTION 143c02e00 FUN_143c02e00 body=108 status=ok
// SIG undefined FUN_143c02e00(void)

void FUN_143c02e00(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x58);
  if (param_3 != iVar1) {
    FUN_143c03460(param_1 + 0x58,param_3);
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_4,param_5);
  return;
}



// FUNCTION 143c02e70 FUN_143c02e70 body=156 status=ok
// SIG undefined FUN_143c02e70(void)

undefined1 FUN_143c02e70(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_143b779c0(param_1 + 0x2c0,param_2);
  iVar2 = FStoredID::GetData<unsigned_int>(uVar3);
  if (iVar2 == 8) {
    uVar1 = FUN_143c06e30(param_1 + 0x2c0,uVar3,param_3);
  }
  else {
    iVar2 = FUN_143c06000(uVar3);
    uVar1 = iVar2 == param_4;
  }
  return uVar1;
}



// FUNCTION 143c02f10 FUN_143c02f10 body=1301 status=ok
// SIG undefined FUN_143c02f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c02f10(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined4 *local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined8 local_130;
  int local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_e8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x360) != 0) {
      FUN_143ab3790(*(undefined8 *)(param_1 + 0x360));
    }
    if (*(longlong *)(param_1 + 0x368) != 0) {
      FUN_143ab3790(*(undefined8 *)(param_1 + 0x368));
    }
    local_128 = FUN_143b772b0(param_1 + 0x2c0);
    local_128 = local_128 + -2;
    *(undefined4 *)(param_1 + 0x340) = 0;
    local_138 = 2;
    while ((local_138 < local_128 && (cVar1 = FUN_143a8b110(*param_2), cVar1 != '\0'))) {
      local_110 = FUN_143b779c0(param_1 + 0x2c0,local_138);
      iVar2 = FStoredID::GetData<unsigned_int>(local_110);
      if ((iVar2 == 7) &&
         (local_120 = FUN_143c06000(local_110), *(int *)(param_1 + 0x340) <= local_120)) {
        *(int *)(param_1 + 0x340) = local_120 + 1;
      }
      local_138 = local_138 + 1;
    }
    cVar1 = FUN_143c02ad0(param_1,*(undefined4 *)(param_1 + 0x340),param_2);
    if (cVar1 != '\0') {
      for (local_13c = 0; local_13c < *(int *)(param_1 + 0x340); local_13c = local_13c + 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x338) + (longlong)local_13c * 4) = 6;
      }
      *(undefined1 *)(param_1 + 0x348) = 0;
      local_148 = 1;
      while ((local_148 < local_128 && (cVar1 = FUN_143a8b110(*param_2), cVar1 != '\0'))) {
        local_130 = FUN_143b779c0(param_1 + 0x2c0,local_148);
        iVar2 = FStoredID::GetData<unsigned_int>(local_130);
        if (iVar2 == 5) {
          local_114 = FUN_143c05730(local_130);
          local_140 = -1;
          local_130 = FUN_143b779c0(param_1 + 0x2c0,local_148 + 1);
          iVar2 = FStoredID::GetData<unsigned_int>(local_130);
          if (iVar2 == 7) {
            local_140 = FUN_143c06000(local_130);
          }
          local_124 = local_114;
          switch(local_114) {
          case 0:
            local_144 = 3;
            break;
          case 1:
            local_11c = local_148;
            local_148 = local_148 + 2;
            local_118 = local_148;
            local_100 = FUN_143b779c0(param_1 + 0x2c0,local_148);
            FUN_143c05fa0(param_1 + 0x2c0,local_b8,local_100);
            local_148 = local_148 + 1;
            FUN_143a8ac30(local_e0);
            local_130 = FUN_143b779c0(param_1 + 0x2c0,local_148);
            iVar2 = FStoredID::GetData<unsigned_int>(local_130);
            if (iVar2 == 10) {
              local_108 = FUN_143c05fa0(param_1 + 0x2c0,local_90,local_130);
              local_f8 = local_108;
              FUN_143a8dcd0(local_e0,local_108);
              FUN_143a8dc60(local_90);
              local_148 = local_148 + 1;
            }
            local_158 = local_68;
            local_150 = param_2;
            local_f0 = FUN_143c038a0(param_1,local_b8,local_e0,&local_144);
            FUN_143c07270(param_1,local_11c,local_f0,param_2);
            FUN_143a8dc60(local_e0);
            FUN_143a8dc60(local_b8);
            break;
          case 2:
          case 3:
          case 5:
            local_144 = 1;
            break;
          case 4:
            local_144 = 3;
            break;
          default:
            *param_2 = 5;
            local_144 = 3;
          }
          if (local_140 != -1) {
            if ((*(int *)(*(longlong *)(param_1 + 0x338) + (longlong)local_140 * 4) != 6) &&
               (*(int *)(*(longlong *)(param_1 + 0x338) + (longlong)local_140 * 4) != local_144)) {
              *(undefined1 *)(param_1 + 0x348) = 1;
            }
            *(int *)(*(longlong *)(param_1 + 0x338) + (longlong)local_140 * 4) = local_144;
          }
        }
        local_148 = local_148 + 1;
      }
    }
  }
  return;
}



// FUNCTION 143c03460 FUN_143c03460 body=40 status=ok
// SIG undefined FUN_143c03460(void)

void FUN_143c03460(longlong param_1,undefined4 param_2)

{
  FUN_143e1e9a0(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143c03490 FUN_143c03490 body=103 status=ok
// SIG undefined FUN_143c03490(void)

undefined8 FUN_143c03490(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_20;
  
  puVar1 = (undefined1 *)FUN_143a8d310(0x148);
  if (puVar1 == (undefined1 *)0x0) {
    local_20 = 0;
  }
  else {
    puVar3 = puVar1;
    for (lVar2 = 0x148; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_20 = FUN_143c01800(puVar1);
  }
  return local_20;
}



// FUNCTION 143c03500 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x3b0);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143c01880(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143c03560 FUN_143c03560 body=758 status=ok
// SIG undefined FUN_143c03560(void)

void FUN_143c03560(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  undefined4 local_2c;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  longlong local_18;
  longlong local_10;
  
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  if (0 < *(int *)(param_1 + 0x340)) {
    cVar1 = FUN_143c02ad0(param_1,*(undefined4 *)(param_1 + 0x340),param_3);
    if (cVar1 == '\0') {
      return;
    }
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x338),*(void **)(param_2 + 0x338),
               (longlong)*(int *)(param_1 + 0x340) << 2);
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_143ab3790(*(undefined8 *)(param_1 + 0x360));
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FUN_143ab3790(*(undefined8 *)(param_1 + 0x368));
  }
  if (*(longlong *)(param_2 + 0x360) != 0) {
    if (*(longlong *)(param_1 + 0x360) == 0) {
      uVar3 = FUN_143ab3680(FUN_143ab33a0,FUN_143ab3020,FUN_143c07a60,param_3);
      *(undefined8 *)(param_1 + 0x360) = uVar3;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        return;
      }
      std::ios_base::width(*(ios_base **)(param_1 + 0x360),0x143a8d350);
    }
    local_20 = FUN_143ab3100(*(undefined8 *)(param_2 + 0x360));
    local_38 = 0;
    local_1c = 0xffffffff;
    while ((local_38 < local_20 && (cVar1 = FUN_143a8b110(*param_3), cVar1 != '\0'))) {
      local_28 = FUN_143ab3590(*(undefined8 *)(param_2 + 0x360),&local_1c);
      local_18 = (**(code **)(**(longlong **)(local_28 + 8) + 0x18))(*(undefined8 *)(local_28 + 8));
      if (local_18 == 0) {
        *param_3 = 7;
        return;
      }
      FUN_143ab34d0(*(undefined8 *)(param_1 + 0x360),*(undefined4 *)(local_28 + 0x10),local_18,
                    param_3);
      local_38 = local_38 + 1;
    }
  }
  if (*(longlong *)(param_2 + 0x368) != 0) {
    if (*(longlong *)(param_1 + 0x368) == 0) {
      uVar3 = FUN_143ab3680(FUN_143ab33a0,FUN_143ab3020,0,param_3);
      *(undefined8 *)(param_1 + 0x368) = uVar3;
    }
    iVar2 = FUN_143ab3100(*(undefined8 *)(param_2 + 0x368));
    local_34 = 0;
    local_2c = 0xffffffff;
    while ((local_34 < iVar2 && (cVar1 = FUN_143a8b110(*param_3), cVar1 != '\0'))) {
      local_10 = FUN_143ab3590(*(undefined8 *)(param_2 + 0x368),&local_2c);
      FUN_143ab3530(*(undefined8 *)(param_1 + 0x368),*(undefined4 *)(local_10 + 0x10),
                    *(undefined4 *)(local_10 + 8),param_3);
      local_34 = local_34 + 1;
    }
  }
  return;
}



// FUNCTION 143c03860 FUN_143c03860 body=63 status=ok
// SIG undefined FUN_143c03860(void)

undefined4 FUN_143c03860(longlong param_1)

{
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(*(undefined8 *)(param_1 + 0x68));
  }
  return local_18;
}



// FUNCTION 143c038a0 FUN_143c038a0 body=961 status=ok
// SIG undefined FUN_143c038a0(void)

longlong FUN_143c038a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong local_38;
  undefined4 local_24;
  
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    local_38 = 0;
    iVar2 = FUN_143c03e70(param_2,&PTR_u_number_145d1c538);
    switch(iVar2) {
    case 0:
      *param_4 = 1;
      iVar2 = FUN_143c03e70(param_3,&PTR_DAT_145d1c5a8);
      if (iVar2 == 0) {
        local_38 = FUN_143b37290(param_1 + 0x148,param_6);
      }
      else if (iVar2 == 1) {
        local_38 = FUN_143b37230(param_1 + 0x148,param_6);
      }
      else if (iVar2 == 2) {
        local_38 = FUN_143b37370(param_1 + 0x148,param_6);
      }
      else if (iVar2 == 3) {
        *param_4 = 2;
        local_38 = FUN_143c03c80(param_1,param_1 + 0x148,param_6);
      }
      else {
        local_38 = FUN_143b37290(param_1 + 0x148,param_6);
        if ((local_38 != 0) &&
           (plVar4 = (longlong *)
                     _guard_xfg_dispatch_icall_nop
                               (local_38,0,&icu_53::Format::RTTI_Type_Descriptor,
                                &icu_53::DecimalFormat::RTTI_Type_Descriptor,0),
           plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x228))(plVar4,param_3,param_5,param_6);
        }
      }
      break;
    case 1:
    case 2:
      *param_4 = 0;
      iVar3 = FUN_143c03e70(param_3,&PTR_DAT_145d1c610);
      if (iVar3 < 0) {
        local_24 = 2;
      }
      else {
        local_24 = *(undefined4 *)(&DAT_145d1c640 + (longlong)iVar3 * 4);
      }
      if (iVar2 == 1) {
        local_38 = FUN_143b56e80(local_24,param_1 + 0x148);
      }
      else {
        local_38 = FUN_143b56f00(local_24,param_1 + 0x148);
      }
      if (((iVar3 < 0) && (local_38 != 0)) &&
         (plVar4 = (longlong *)
                   _guard_xfg_dispatch_icall_nop
                             (local_38,0,&icu_53::Format::RTTI_Type_Descriptor,
                              &icu_53::SimpleDateFormat::RTTI_Type_Descriptor,0),
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0xf8))(plVar4,param_3);
      }
      break;
    case 3:
      *param_4 = 1;
      local_38 = FUN_143c06130(0,param_1 + 0x148,param_3,param_6);
      break;
    case 4:
      *param_4 = 1;
      local_38 = FUN_143c06130(1,param_1 + 0x148,param_3,param_6);
      break;
    case 5:
      *param_4 = 1;
      local_38 = FUN_143c06130(2,param_1 + 0x148,param_3,param_6);
      break;
    default:
      *param_4 = 3;
      *param_6 = 1;
    }
  }
  else {
    local_38 = 0;
  }
  return local_38;
}



// FUNCTION 143c03c80 FUN_143c03c80 body=167 status=ok
// SIG undefined FUN_143c03c80(void)

longlong FUN_143c03c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_143b37290(param_2,param_3);
  if (lVar1 != 0) {
    plVar2 = (longlong *)
             _guard_xfg_dispatch_icall_nop
                       (lVar1,0,&icu_53::NumberFormat::RTTI_Type_Descriptor,
                        &icu_53::DecimalFormat::RTTI_Type_Descriptor,0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xe0))(plVar2,0);
      (**(code **)(*plVar2 + 0x208))(plVar2,0);
      (**(code **)(*plVar2 + 0xb0))(plVar2,1);
    }
  }
  return lVar1;
}



// FUNCTION 143c03d30 FUN_143c03d30 body=40 status=ok
// SIG undefined FUN_143c03d30(void)

void FUN_143c03d30(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return;
}



// FUNCTION 143c03d60 FUN_143c03d60 body=269 status=ok
// SIG undefined FUN_143c03d60(void)

int FUN_143c03d60(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int local_28;
  
  while( true ) {
    iVar1 = param_2;
    local_28 = iVar1 + 1;
    uVar4 = FUN_143b779c0(param_1 + 0x2c0,local_28);
    iVar3 = FStoredID::GetData<unsigned_int>(uVar4);
    if (iVar3 == 1) {
      return 0;
    }
    if (iVar3 == 4) break;
    param_2 = local_28;
    if (iVar3 == 5) {
      iVar3 = FUN_143c05730(uVar4);
      cVar2 = FUN_143a903a0(param_3);
      if ((cVar2 == '\0') && ((iVar3 == 0 || (iVar3 == 1)))) {
        uVar4 = FUN_143b779c0(param_1 + 0x2c0,iVar1 + 2);
        cVar2 = FUN_143c06e30(param_1 + 0x2c0,uVar4,param_3);
        if (cVar2 != '\0') {
          return local_28;
        }
      }
      param_2 = FUN_143b77980(param_1 + 0x2c0,local_28);
    }
  }
  return -1;
}



// FUNCTION 143c03e70 FUN_143c03e70 body=381 status=ok
// SIG undefined FUN_143c03e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c03e70(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  int local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [48];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1d0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  cVar1 = FUN_143a903a0(param_1);
  if (cVar1 == '\0') {
    local_1e4 = FUN_143a904f0(param_1);
    uVar3 = FUN_143a8fe10(param_1);
    local_1d8 = FUN_143b284a0(uVar3,&local_1e4);
    FUN_143a8d4f0(local_1c8,0,local_1d8,local_1e4);
    local_1f8 = 0;
    FUN_143a8a690(local_198,&DAT_145af3922,0,0);
    FUN_143a941a0(local_1c8,local_198);
    FUN_143a8acf0(local_198);
    local_1e8 = 0;
    while (*(longlong *)(param_2 + (longlong)local_1e8 * 8) != 0) {
      uVar2 = FreeLib(*(undefined8 *)(param_2 + (longlong)local_1e8 * 8));
      cVar1 = FUN_143b0fc90(local_1c8,*(undefined8 *)(param_2 + (longlong)local_1e8 * 8),uVar2);
      if (cVar1 == '\0') {
        local_1dc = local_1e8;
        FUN_143a8dc60(local_1c8);
        return local_1dc;
      }
      local_1e8 = local_1e8 + 1;
    }
    local_1e0 = -1;
    FUN_143a8dc60(local_1c8);
  }
  else {
    local_1e0 = 0;
  }
  return local_1e0;
}



// FUNCTION 143c03ff0 FUN_143c03ff0 body=490 status=ok
// SIG undefined FUN_143c03ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c03ff0(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_res10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = FUN_143b772b0(param_1 + 0x2c0);
  local_68 = FUN_143b779c0(param_1 + 0x2c0,param_2);
  uVar2 = FStoredID::GetData<unsigned_int>(local_68);
  cVar1 = FUN_143c06020(uVar2);
  local_res10 = param_2;
  if (cVar1 != '\0') {
    local_res10 = param_2 + 1;
  }
  FUN_143a8d4f0(local_40,0,L"other",5);
  do {
    local_54 = local_res10;
    local_68 = FUN_143b779c0(param_1 + 0x2c0,local_res10);
    iVar3 = local_res10 + 1;
    local_58 = FStoredID::GetData<unsigned_int>(local_68);
    if (local_58 == 6) break;
    cVar1 = FUN_143c06e30(param_1 + 0x2c0,local_68,local_40);
    if (cVar1 != '\0') {
      local_50 = iVar3;
      FUN_143a8dc60(local_40);
      return local_50;
    }
    uVar2 = FUN_143b779e0(param_1 + 0x2c0,iVar3);
    cVar1 = FUN_143c06020(uVar2);
    if (cVar1 != '\0') {
      iVar3 = local_res10 + 2;
    }
    local_res10 = iVar3;
    local_res10 = FUN_143b77980(param_1 + 0x2c0,local_res10);
    local_res10 = local_res10 + 1;
  } while (local_res10 < local_60);
  local_5c = 0;
  FUN_143a8dc60(local_40);
  return local_5c;
}



// FUNCTION 143c041e0 FUN_143c041e0 body=64 status=ok
// SIG undefined FUN_143c041e0(void)

undefined8
FUN_143c041e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    *param_4 = 0x10;
  }
  return param_3;
}



// FUNCTION 143c04220 FUN_143c04220 body=227 status=ok
// SIG undefined FUN_143c04220(void)

SchedulerBase *
FUN_143c04220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             SchedulerBase *param_5,undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  SchedulerResourceManagement local_28 [16];
  undefined1 local_18 [24];
  
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(local_28,param_5)
    ;
    FUN_143c017d0(local_18,local_28);
    FUN_143c04310(param_1,0,0,param_2,param_3,param_4,local_18,param_6,param_7);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
  }
  return param_5;
}



// FUNCTION 143c04310 FUN_143c04310 body=3026 status=ok
// SIG undefined FUN_143c04310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c04310(longlong param_1,int param_2,longlong param_3,longlong param_4,ulonglong param_5,
                  int param_6,undefined8 param_7,undefined4 *param_8,undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_688 [32];
  undefined4 *local_668;
  undefined4 *local_660;
  undefined8 local_658;
  undefined4 *local_650;
  undefined4 *local_648;
  int local_638;
  char local_634;
  undefined4 *local_630;
  int local_628;
  int local_624;
  int local_620;
  undefined8 local_618;
  int local_610;
  longlong local_608;
  longlong local_600;
  longlong local_5f8;
  int local_5f0;
  int local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  longlong local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  longlong local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578 [10];
  undefined1 local_550 [40];
  undefined1 local_528 [48];
  undefined1 local_4f8 [304];
  undefined1 local_3c8 [944];
  ulonglong local_18;
  
  local_580 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  cVar1 = FUN_143a8b0e0(*param_9);
  if (cVar1 == '\0') {
    local_5b0 = RtAudioError::getType(param_1 + 0x2c0);
    uVar3 = FUN_143b779c0(param_1 + 0x2c0,param_2);
    local_624 = FUN_143b77960(uVar3);
    while( true ) {
      local_638 = param_2 + 1;
      cVar1 = FUN_143a8b110(*param_9);
      if (cVar1 == '\0') break;
      local_618 = FUN_143b779c0(param_1 + 0x2c0,local_638);
      local_620 = FStoredID::GetData<unsigned_int>(local_618);
      local_5ec = FUN_143b77950(local_618);
      FUN_143c02c30(param_7,local_5b0,local_624,local_5ec - local_624);
      if (local_620 == 1) {
        return;
      }
      local_624 = FUN_143b77960(local_618);
      if (local_620 == 4) {
        local_5f8 = param_3;
        if (*(char *)(param_3 + 0x128) == '\0') {
          local_5c0 = FUN_143c058a0(param_1,param_9);
          FUN_143c050c0(param_7,local_5c0,local_5f8 + 0x10,param_9);
          param_2 = local_638;
        }
        else {
          local_668 = param_9;
          FUN_143c05160(param_7,*(undefined8 *)(param_3 + 0xf8),param_3 + 0x10,param_3 + 0x100);
          param_2 = local_638;
        }
      }
      else {
        param_2 = local_638;
        if (local_620 == 5) {
          local_5f0 = FUN_143b77980(param_1 + 0x2c0,local_638);
          local_628 = FUN_143c05730(local_618);
          local_638 = local_638 + 1;
          local_618 = FUN_143b779c0(param_1 + 0x2c0,local_638);
          local_634 = '\0';
          FUN_143c05fa0(param_1 + 0x2c0,local_578,local_618);
          if (param_5 == 0) {
            local_610 = FUN_143c06000(local_618);
            if ((local_610 < 0) || (param_6 <= local_610)) {
              local_630 = (undefined4 *)0x0;
              local_634 = '\x01';
            }
            else {
              local_630 = (undefined4 *)(param_4 + (longlong)local_610 * 0xd8);
            }
          }
          else {
            local_668 = local_578;
            local_630 = (undefined4 *)FUN_143c05640(param_1,param_4,param_5,param_6);
            if (local_630 == (undefined4 *)0x0) {
              local_634 = '\x01';
            }
          }
          local_638 = local_638 + 1;
          local_5e8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(param_7);
          local_608 = 0;
          if (local_634 == '\0') {
            if (local_630 == (undefined4 *)0x0) {
              FUN_143c02cc0(param_7,L"null",4);
            }
            else if ((param_3 == 0) || (*(int *)(param_3 + 0xf0) != local_638 + -2)) {
              local_608 = FUN_143c057a0(param_1,local_638 + -2);
              if (local_608 == 0) {
                if ((local_628 == 0) ||
                   ((*(longlong *)(param_1 + 0x360) != 0 &&
                    (lVar4 = FUN_143ab3400(*(undefined8 *)(param_1 + 0x360),local_638 + -2),
                    lVar4 != 0)))) {
                  cVar1 = FUN_143b69680(local_630);
                  if (cVar1 == '\0') {
                    iVar2 = FUN_143b695b0(local_630);
                    if (iVar2 == 0) {
                      local_5a0 = FUN_143c05820(param_1,param_9);
                      FUN_143c050c0(param_7,local_5a0,local_630,param_9);
                    }
                    else {
                      uVar3 = FUN_143b69540(local_630,param_9);
                      FUN_143c02bb0(param_7,uVar3);
                    }
                  }
                  else {
                    local_588 = FUN_143c058a0(param_1,param_9);
                    FUN_143c050c0(param_7,local_588,local_630,param_9);
                  }
                }
                else if (local_628 == 2) {
                  cVar1 = FUN_143b69680(local_630);
                  if (cVar1 == '\0') {
                    *param_9 = 1;
                    FUN_143a8dc60(local_578);
                    return;
                  }
                  local_590 = FUN_143b69180(local_630,param_9);
                  local_5dc = FUN_143b774e0(param_1 + 0x2c0,local_638,local_590);
                  local_650 = param_9;
                  local_658 = param_7;
                  local_660 = (undefined4 *)CONCAT44(local_660._4_4_,param_6);
                  local_668 = (undefined4 *)param_5;
                  FUN_143c051d0(param_1,local_5dc,0,param_4);
                }
                else if ((local_628 == 3) || (local_628 == 5)) {
                  cVar1 = FUN_143b69680(local_630);
                  if (cVar1 == '\0') {
                    *param_9 = 1;
                    FUN_143a8dc60(local_578);
                    return;
                  }
                  if (local_628 == 3) {
                    local_5d8 = param_1 + 0x370;
                  }
                  else {
                    local_5d8 = param_1 + 0x390;
                  }
                  local_5a8 = local_5d8;
                  local_5b8 = local_5d8;
                  local_668 = (undefined4 *)FUN_143e1efe0(param_1 + 0x2c0,local_638);
                  local_660 = param_9;
                  local_5c8 = local_668;
                  FUN_143c01d80(local_4f8,local_638,local_578,local_630);
                  local_668 = (undefined4 *)FUN_143b69180(local_630,param_9);
                  local_660 = param_9;
                  local_5e0 = FUN_143c19e40(param_1 + 0x2c0,local_638,local_5b8,local_4f8);
                  local_650 = param_9;
                  local_658 = param_7;
                  local_660 = (undefined4 *)CONCAT44(local_660._4_4_,param_6);
                  local_668 = (undefined4 *)param_5;
                  FUN_143c051d0(param_1,local_5e0,local_4f8,param_4);
                  FUN_143c02250(local_4f8);
                }
                else {
                  if (local_628 != 4) {
                    *param_9 = 5;
                    FUN_143a8dc60(local_578);
                    return;
                  }
                  uVar3 = FUN_143b69540(local_630,param_9);
                  local_5e4 = FUN_143c1a1f0(param_1 + 0x2c0,local_638,uVar3,param_9);
                  local_650 = param_9;
                  local_658 = param_7;
                  local_660 = (undefined4 *)CONCAT44(local_660._4_4_,param_6);
                  local_668 = (undefined4 *)param_5;
                  FUN_143c051d0(param_1,local_5e4,0,param_4);
                }
              }
              else {
                local_668 = (undefined4 *)((ulonglong)local_668 & 0xffffffff00000000);
                lVar4 = _guard_xfg_dispatch_icall_nop
                                  (local_608,0,&icu_53::Format::RTTI_Type_Descriptor,
                                   &icu_53::ChoiceFormat::RTTI_Type_Descriptor);
                if (lVar4 == 0) {
                  local_668 = (undefined4 *)((ulonglong)local_668 & 0xffffffff00000000);
                  lVar4 = _guard_xfg_dispatch_icall_nop
                                    (local_608,0,&icu_53::Format::RTTI_Type_Descriptor,
                                     &icu_53::PluralFormat::RTTI_Type_Descriptor);
                  if (lVar4 == 0) {
                    local_668 = (undefined4 *)((ulonglong)local_668 & 0xffffffff00000000);
                    lVar4 = _guard_xfg_dispatch_icall_nop
                                      (local_608,0,&icu_53::Format::RTTI_Type_Descriptor,
                                       &icu_53::SelectFormat::RTTI_Type_Descriptor);
                    if (lVar4 == 0) {
                      FUN_143c050c0(param_7,local_608,local_630,param_9);
                      goto LAB_143c04e4d;
                    }
                  }
                }
                FUN_143a8ac30(local_550);
                FUN_143b69bc0(local_608,local_630,local_550,param_9);
                iVar2 = FUN_143acddd0(local_550,0x7b);
                if ((iVar2 < 0) &&
                   ((iVar2 = FUN_143acddd0(local_550,0x27), iVar2 < 0 ||
                    (cVar1 = FUN_143b77a70(param_1 + 0x2c0), cVar1 != '\0')))) {
                  FUN_143c02bb0(param_7,local_550);
                }
                else {
                  FUN_143c01bc0(local_3c8,local_550,param_1 + 0x148,param_9);
                  local_648 = param_9;
                  local_650 = param_8;
                  local_658 = param_7;
                  local_660 = (undefined4 *)CONCAT44(local_660._4_4_,param_6);
                  local_668 = (undefined4 *)param_5;
                  FUN_143c04310(local_3c8,0,0,param_4);
                  FUN_143c020f0(local_3c8);
                }
                FUN_143a8dc60(local_550);
              }
            }
            else {
              local_600 = param_3;
              if (*(double *)(param_3 + 0xe8) == 0.0) {
                local_668 = param_9;
                FUN_143c05160(param_7,*(undefined8 *)(param_3 + 0xf8),param_3 + 0x10,param_3 + 0x100
                             );
              }
              else {
                FUN_143c050c0(param_7,*(undefined8 *)(param_3 + 0xf8),local_630,param_9);
              }
            }
          }
          else {
            local_5d0 = FUN_143a8dbd0(local_528,0x7b);
            local_598 = local_5d0;
            uVar3 = FUN_143a8e070(local_5d0,local_578);
            uVar3 = FUN_143acc590(uVar3,0x7d);
            FUN_143c02bb0(param_7,uVar3);
            FUN_143a8dc60(local_528);
          }
LAB_143c04e4d:
          local_668 = local_630;
          param_8 = (undefined4 *)MUTKSQLiteDBInner::ue4sFetch(param_1,param_7,local_5e8,param_8);
          uVar3 = FUN_143b779c0(param_1 + 0x2c0,local_5f0);
          local_624 = FUN_143b77960(uVar3);
          local_638 = local_5f0;
          FUN_143a8dc60(local_578);
          param_2 = local_638;
        }
      }
    }
  }
  return;
}



// FUNCTION 143c04ef0 FUN_143c04ef0 body=82 status=ok
// SIG undefined FUN_143c04ef0(void)

void FUN_143c04ef0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_143c04220(param_1,param_2,0,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143c04f50 FUN_143c04f50 body=189 status=ok
// SIG undefined FUN_143c04f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c04f50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [944];
  ulonglong local_18;
  
  local_3d0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  FUN_143c01a20(local_3c8,param_1,param_5);
  local_3e8 = param_5;
  local_3f0 = 0;
  local_3f8 = param_4;
  local_3d8 = FUN_143c04220(local_3c8,param_2,0,param_3);
  FUN_143c020f0(local_3c8);
  return local_3d8;
}



// FUNCTION 143c05010 FUN_143c05010 body=170 status=ok
// SIG undefined FUN_143c05010(void)

undefined8
FUN_143c05010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    iVar2 = FUN_143b695b0(param_2);
    if (iVar2 == 4) {
      local_10 = FUN_143c05770(param_2,local_18);
      param_3 = FUN_143c04220(param_1,local_10,0,local_18[0],param_3,param_4,param_5);
    }
    else {
      *param_5 = 1;
    }
  }
  return param_3;
}



// FUNCTION 143c050c0 FUN_143c050c0 body=156 status=ok
// SIG undefined FUN_143c050c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c050c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_143a8ac30(local_40);
  FUN_143b69bc0(param_2,param_3,local_40,param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    FUN_143c02bb0(param_1,local_40);
  }
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143c05160 FUN_143c05160 body=107 status=ok
// SIG undefined FUN_143c05160(void)

void FUN_143c05160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a903a0(param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 != '\0') {
      FUN_143c02bb0(param_1,param_4);
    }
  }
  else {
    FUN_143c050c0(param_1,param_2,param_3,param_5);
  }
  return;
}



// FUNCTION 143c051d0 FUN_143c051d0 body=1116 status=ok
// SIG undefined FUN_143c051d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c051d0(longlong param_1,int param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_4a8 [32];
  undefined4 *local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined4 *local_468;
  int local_458;
  int local_454;
  int local_450;
  int local_44c;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420 [40];
  undefined1 local_3f8 [48];
  undefined1 local_3c8 [944];
  ulonglong local_18;
  
  local_428 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b77a70(param_1 + 0x2c0);
    if (cVar1 == '\0') {
      local_468 = param_8;
      local_470 = 0;
      local_478 = param_7;
      local_480 = param_6;
      local_488 = (undefined4 *)param_5;
      FUN_143c04310(param_1,param_2,param_3,param_4);
    }
    else {
      local_448 = RtAudioError::getType(param_1 + 0x2c0);
      FUN_143a8ac30(local_420);
      uVar3 = FUN_143b779c0(param_1 + 0x2c0,param_2);
      local_458 = FUN_143b77960(uVar3);
      local_450 = param_2;
      while( true ) {
        local_450 = local_450 + 1;
        local_438 = FUN_143b779c0(param_1 + 0x2c0,local_450);
        local_44c = FStoredID::GetData<unsigned_int>(local_438);
        local_454 = FUN_143b77950(local_438);
        if (local_44c == 1) break;
        if ((local_44c == 4) || (local_44c == 2)) {
          FUN_143acc540(local_420,local_448,local_458,local_454 - local_458);
          if (local_44c == 4) {
            local_440 = param_3;
            if (*(char *)(param_3 + 0x128) == '\0') {
              local_430 = FUN_143c058a0(param_1,param_8);
              uVar3 = FUN_143b69bc0(local_430,local_440 + 0x10,local_420,param_8);
              FUN_143a8e070(local_420,uVar3);
            }
            else {
              FUN_143a8e070(local_420,param_3 + 0x100);
            }
          }
          local_458 = FUN_143b77960(local_438);
        }
        else if (local_44c == 5) {
          FUN_143acc540(local_420,local_448,local_458,local_454 - local_458);
          local_458 = local_454;
          local_450 = FUN_143b77980(param_1 + 0x2c0,local_450);
          uVar3 = FUN_143b779c0(param_1 + 0x2c0,local_450);
          local_454 = FUN_143b77960(uVar3);
          FUN_143e1e740(local_448,local_458,local_454,local_420);
          local_458 = local_454;
        }
      }
      FUN_143acc540(local_420,local_448,local_458,local_454 - local_458);
      iVar2 = FUN_143acddd0(local_420,0x7b);
      if (iVar2 < 0) {
        FUN_143c02bb0(param_7,local_420);
      }
      else {
        FUN_143a8ac30(local_3f8);
        FUN_143c01bc0(local_3c8,local_3f8,param_1 + 0x148,param_8);
        local_488 = param_8;
        FUN_143c02e00(local_3c8,local_420,1,0);
        local_468 = param_8;
        local_470 = 0;
        local_478 = param_7;
        local_480 = param_6;
        local_488 = (undefined4 *)param_5;
        FUN_143c04310(local_3c8,0,0,param_4);
        FUN_143c020f0(local_3c8);
        FUN_143a8dc60(local_3f8);
      }
      FUN_143a8dc60(local_420);
    }
  }
  return;
}



// FUNCTION 143c05640 FUN_143c05640 body=128 status=ok
// SIG undefined FUN_143c05640(void)

longlong FUN_143c05640(undefined8 param_1,longlong param_2,longlong param_3,int param_4,
                      undefined8 param_5)

{
  char cVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_4 <= local_18) {
      return 0;
    }
    cVar1 = FUN_143b0fd00(param_3 + (longlong)local_18 * 0x28,param_5);
    if (cVar1 == '\0') break;
    local_18 = local_18 + 1;
  }
  return param_2 + (longlong)local_18 * 0xd8;
}



// FUNCTION 143c056c0 FUN_143c056c0 body=105 status=ok
// SIG undefined FUN_143c056c0(void)

undefined8 FUN_143c056c0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b779c0(param_1 + 0x2c0,param_3 & 0xffffffff,param_3,param_4,0);
  FUN_143c05fa0(param_1 + 0x2c0,param_2,uVar1);
  return param_2;
}



// FUNCTION 143c05730 FUN_143c05730 body=55 status=ok
// SIG undefined FUN_143c05730(void)

int FUN_143c05730(longlong param_1)

{
  int iVar1;
  
  iVar1 = FStoredID::GetData<unsigned_int>(param_1);
  if ((iVar1 == 5) || (iVar1 == 6)) {
    iVar1 = (int)*(short *)(param_1 + 10);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143c05770 FUN_143c05770 body=35 status=ok
// SIG undefined FUN_143c05770(void)

undefined8 FUN_143c05770(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 143c057a0 FUN_143c057a0 body=119 status=ok
// SIG undefined FUN_143c057a0(void)

longlong FUN_143c057a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x360) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_143ab3400(*(undefined8 *)(param_1 + 0x360),param_2);
    if ((lVar1 == 0) ||
       (lVar2 = _guard_xfg_dispatch_icall_nop
                          (lVar1,0,&icu_53::Format::RTTI_Type_Descriptor,
                           &icu_53::MessageFormat::DummyFormat::RTTI_Type_Descriptor,0), lVar2 != 0)
       ) {
      lVar1 = 0;
    }
  }
  return lVar1;
}



// FUNCTION 143c05820 FUN_143c05820 body=123 status=ok
// SIG undefined FUN_143c05820(void)

undefined8 FUN_143c05820(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x358) == 0) {
    uVar1 = FUN_143b56ec0(3,3,param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x358) = uVar1;
    if (*(longlong *)(param_1 + 0x358) == 0) {
      *param_2 = 7;
    }
  }
  return *(undefined8 *)(param_1 + 0x358);
}



// FUNCTION 143c058a0 FUN_143c058a0 body=230 status=ok
// SIG undefined FUN_143c058a0(void)

undefined8 FUN_143c058a0(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x350) == 0) {
    uVar3 = FUN_143b37290(param_1 + 0x148,param_2);
    *(undefined8 *)(param_1 + 0x350) = uVar3;
    cVar2 = FUN_143a8b0e0(*param_2);
    if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0x350) == 0) {
        *param_2 = 7;
      }
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x350);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x350);
}



// FUNCTION 143c05990 FUN_143c05990 body=19 status=ok
// SIG undefined FUN_143c05990(void)

void FUN_143c05990(void)

{
  FUN_143c05f80();
  return;
}



// FUNCTION 143c059b0 FUN_143c059b0 body=19 status=ok
// SIG undefined FUN_143c059b0(void)

void FUN_143c059b0(void)

{
  FUN_143c05f90();
  return;
}



// FUNCTION 143c059d0 FUN_143c059d0 body=186 status=ok
// SIG undefined FUN_143c059d0(void)

undefined8 FUN_143c059d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x360) != 0)) {
    iVar2 = FUN_143e21d00(param_2);
    if (iVar2 < -1) {
      *param_3 = 1;
      uVar3 = 0;
    }
    else {
      local_18 = 0;
      do {
        local_18 = FUN_143c06210(param_1,local_18);
        if (local_18 < 0) {
          return 0;
        }
        cVar1 = FUN_143c02e70(param_1,local_18 + 1,param_2,iVar2);
      } while (cVar1 == '\0');
      uVar3 = FUN_143c057a0(param_1,local_18);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c05a90 FUN_143c05a90 body=430 status=ok
// SIG undefined FUN_143c05a90(void)

undefined8 FUN_143c05a90(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  int local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_40;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x28);
    if (lVar2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_143b08f70(lVar2,param_2);
    }
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      FUN_143ab38b0(local_40,FUN_143a8d350);
      local_78 = 0;
      while (local_78 = FUN_143c06210(param_1,local_78), -1 < local_78) {
        lVar2 = FUN_143a8d310(0x28);
        if (lVar2 == 0) {
          local_58 = 0;
        }
        else {
          local_58 = FUN_143c056c0(param_1,lVar2,local_78 + 1);
        }
        FUN_143b09430(local_40,local_58,param_2);
      }
      lVar2 = FUN_143a8d310(0x70);
      if (lVar2 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = FUN_143c01830(lVar2,local_40,param_2);
      }
    }
    else {
      *param_2 = 7;
      local_60 = 0;
    }
  }
  else {
    local_60 = 0;
  }
  return local_60;
}



// FUNCTION 143c05c40 FUN_143c05c40 body=429 status=ok
// SIG undefined FUN_143c05c40(void)

undefined8 FUN_143c05c40(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_28;
  undefined4 local_24;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x328) == 0) {
    if (*(int *)(param_1 + 0x340) < 10) {
      local_24 = 10;
    }
    else {
      local_24 = *(undefined4 *)(param_1 + 0x340);
    }
    *(undefined4 *)(param_1 + 0x330) = local_24;
    lVar1 = FUN_143aa7a40((longlong)*(int *)(param_1 + 0x330) << 3);
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x330) = 0;
      return 0;
    }
    *(longlong *)(param_1 + 0x328) = lVar1;
  }
  else if (*(int *)(param_1 + 0x330) < *(int *)(param_1 + 0x340)) {
    lVar1 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x328),(longlong)*(int *)(param_1 + 0x340) << 3)
    ;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x330) = 0;
      return 0;
    }
    *(longlong *)(param_1 + 0x328) = lVar1;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x340);
  }
  local_28 = 0;
  while (local_28 = FUN_143c06210(param_1,local_28), -1 < local_28) {
    uVar2 = FUN_143c057a0(param_1,local_28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x328) + (longlong)*param_2 * 8) = uVar2;
    *param_2 = *param_2 + 1;
  }
  return *(undefined8 *)(param_1 + 0x328);
}



// FUNCTION 143c05df0 FUN_143c05df0 body=355 status=ok
// SIG undefined FUN_143c05df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c05df0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_5c = 0;
  local_48 = RtAudioError::getType(param_1 + 0x2c0);
  uVar1 = FUN_143b779c0(param_1 + 0x2c0,param_3);
  local_68 = FUN_143b77960(uVar1);
  FUN_143a8ac30(local_38);
  while( true ) {
    local_64 = param_3 + 1;
    local_50 = FUN_143b779c0(param_1 + 0x2c0,local_64);
    local_60 = FStoredID::GetData<unsigned_int>(local_50);
    local_58 = FUN_143b77950(local_50);
    FUN_143acc540(local_38,local_48,local_68,local_58 - local_68);
    if ((local_60 == 5) || (local_60 == 1)) break;
    local_68 = FUN_143b77960(local_50);
    param_3 = local_64;
  }
  FUN_143a8d3a0(param_2,local_38);
  local_5c = local_5c | 1;
  FUN_143a8dc60(local_38);
  return param_2;
}



// FUNCTION 143c05f60 FUN_143c05f60 body=17 status=ok
// SIG undefined FUN_143c05f60(void)

longlong FUN_143c05f60(longlong param_1)

{
  return param_1 + 0x148;
}



// FUNCTION 143c05f80 FUN_143c05f80 body=8 status=ok
// SIG undefined FUN_143c05f80(void)

undefined * FUN_143c05f80(void)

{
  return &DAT_146bc8602;
}



// FUNCTION 143c05f90 FUN_143c05f90 body=8 status=ok
// SIG undefined FUN_143c05f90(void)

undefined * FUN_143c05f90(void)

{
  return &DAT_146bc8601;
}



// FUNCTION 143c05fa0 FUN_143c05fa0 body=88 status=ok
// SIG undefined FUN_143c05fa0(void)

undefined8 FUN_143c05fa0(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_143a90ff0(param_1 + 0x10,param_2,*(undefined4 *)(param_3 + 4),*(undefined2 *)(param_3 + 8),0);
  return param_2;
}



// FUNCTION 143c06000 FUN_143c06000 body=15 status=ok
// SIG undefined FUN_143c06000(void)

int FUN_143c06000(longlong param_1)

{
  return (int)*(short *)(param_1 + 10);
}



// FUNCTION 143c06010 FUN_143c06010 body=15 status=ok
// SIG undefined FUN_143c06010(void)

undefined1 FUN_143c06010(longlong param_1)

{
  return *(undefined1 *)(param_1 + 100);
}



// FUNCTION 143c06020 FUN_143c06020 body=41 status=ok
// SIG undefined FUN_143c06020(void)

undefined1 FUN_143c06020(int param_1)

{
  undefined1 local_18;
  
  if ((param_1 == 0xc) || (param_1 == 0xd)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143c06050 FUN_143c06050 body=104 status=ok
// SIG undefined FUN_143c06050(void)

void FUN_143c06050(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_143a906b0(param_1,local_res18);
  iVar1 = FUN_143a904f0(param_1);
  iVar1 = iVar1 - local_res18[0];
  uVar2 = FUN_143a904f0(param_2);
  FUN_143a90160(param_1,param_2,0,uVar2,local_res18[0],iVar1);
  return;
}



// FUNCTION 143c060c0 FUN_143c060c0 body=106 status=ok
// SIG undefined FUN_143c060c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c060c0(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_143b0cf90(local_38,0x10,param_1,10);
  FUN_143b17350(param_2,local_38,0xffffffff);
  return param_2;
}



// FUNCTION 143c06130 FUN_143c06130 body=216 status=ok
// SIG undefined FUN_143c06130(void)

longlong *
FUN_143c06130(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_38 [2];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = FUN_143a8d310(0x368);
  if (local_28 == 0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_20 = (longlong *)FUN_143b700f0(local_28,param_1,param_2,param_4);
  }
  local_18 = local_20;
  local_30 = local_20;
  if (local_20 == (longlong *)0x0) {
    *param_4 = 7;
  }
  else {
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      iVar2 = FUN_143a904f0(param_3);
      if (0 < iVar2) {
        local_38[0] = 0;
        (**(code **)(*local_30 + 0x160))(local_30,param_3,local_38);
      }
    }
  }
  return local_30;
}



// FUNCTION 143c06210 FUN_143c06210 body=118 status=ok
// SIG undefined FUN_143c06210(void)

int FUN_143c06210(longlong param_1,int param_2)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 != 0) {
    local_res10 = FUN_143b77980(param_1 + 0x2c0,param_2);
  }
  do {
    local_res10 = local_res10 + 1;
    iVar1 = FUN_143b779e0(param_1 + 0x2c0,local_res10);
    if (iVar1 == 5) {
      return local_res10;
    }
  } while (iVar1 != 1);
  return -1;
}



// FUNCTION 143c06290 FUN_143c06290 body=2379 status=ok
// SIG undefined FUN_143c06290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c06290(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5,
             undefined4 *param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1c8 [32];
  code *local_1a8;
  int local_1a0;
  char local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined1 local_180 [8];
  int local_178;
  int local_174;
  undefined1 local_170 [16];
  int local_160;
  int local_15c;
  undefined8 local_158;
  int local_150;
  ulonglong local_148;
  longlong *local_140;
  ulonglong *local_138;
  undefined8 local_130;
  int local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  *param_5 = 0;
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    cVar2 = FUN_143c06010(param_1 + 0x2c0);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        local_150 = 1;
      }
      else {
        local_150 = *(int *)(param_1 + 0x340);
      }
      local_148 = (ulonglong)local_150;
      if (local_148 == 0) {
        local_118 = (ulonglong *)operator_new(8);
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_148;
        uVar5 = SUB168(ZEXT816(0xd8) * auVar1,0);
        if (SUB168(ZEXT816(0xd8) * auVar1,8) != 0) {
          uVar5 = 0xffffffffffffffff;
        }
        lVar7 = uVar5 + 8;
        if (0xfffffffffffffff7 < uVar5) {
          lVar7 = -1;
        }
        local_118 = (ulonglong *)FUN_143a8d310(lVar7);
      }
      local_138 = local_118;
      if (local_118 == (ulonglong *)0x0) {
        local_120 = (ulonglong *)0x0;
      }
      else {
        *local_118 = local_148;
        local_1a8 = Concurrency::
                    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    ::
                    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
        ;
        _eh_vector_constructor_iterator_(local_118 + 1,0xd8,local_148,FUN_143b686d0);
        local_120 = local_138 + 1;
      }
      local_e0 = local_120;
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                (local_180,local_120);
      local_d0 = RtAudioError::getType(param_1 + 0x2c0);
      uVar6 = FUN_143b779c0(param_1 + 0x2c0,param_2);
      local_18c = FUN_143b77960(uVar6);
      local_194 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_4);
      FUN_143b16ce0(local_170,0);
      while( true ) {
        local_190 = param_2 + 1;
        local_198 = '\0';
        local_158 = FUN_143b779c0(param_1 + 0x2c0,local_190);
        local_160 = FStoredID::GetData<unsigned_int>(local_158);
        local_128 = FUN_143b77950(local_158);
        local_188 = local_128 - local_18c;
        if (local_188 != 0) {
          local_1a8 = (code *)CONCAT44(local_1a8._4_4_,local_194);
          local_1a0 = local_188;
          cVar2 = FUN_143b3e630(local_d0,local_18c,local_188,param_3);
          if (cVar2 != '\0') {
            FUN_143b44cd0(param_4,local_194);
            local_e8 = 0;
            UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
            FUN_143c01fa0(local_180);
            return local_e8;
          }
        }
        local_194 = local_194 + local_188;
        local_18c = local_18c + local_188;
        if (local_160 == 1) break;
        if ((local_160 == 2) || (local_160 == 3)) {
          local_18c = FUN_143b77960(local_158);
          param_2 = local_190;
        }
        else {
          local_15c = FUN_143b77980(param_1 + 0x2c0,local_190);
          local_184 = FUN_143c05730(local_158);
          local_190 = local_190 + 1;
          local_158 = FUN_143b779c0(param_1 + 0x2c0,local_190);
          local_178 = FUN_143c06000(local_158);
          FUN_143a8ac30(local_b8);
          local_190 = local_190 + 1;
          local_140 = (longlong *)0x0;
          local_130 = FUN_143c025e0(local_180,(longlong)local_178);
          if ((*(longlong *)(param_1 + 0x360) == 0) ||
             (local_140 = (longlong *)FUN_143c057a0(param_1,local_190 + -2),
             local_140 == (longlong *)0x0)) {
            if ((local_184 == 0) ||
               ((*(longlong *)(param_1 + 0x360) != 0 &&
                (lVar7 = FUN_143ab3400(*(undefined8 *)(param_1 + 0x360),local_190 + -2), lVar7 != 0)
                ))) {
              FUN_143c05df0(param_1,local_68,local_15c);
              cVar2 = FUN_143a903a0(local_68);
              if (cVar2 == '\0') {
                local_174 = FUN_143c06050(param_3,local_68,local_194);
              }
              else {
                local_174 = FUN_143a904f0(param_3);
              }
              if (local_174 < 0) {
                FUN_143b44cd0(param_4,local_194);
                local_c8 = 0;
                FUN_143a8dc60(local_68);
                FUN_143a8dc60(local_b8);
                UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
                FUN_143c01fa0(local_180);
                return local_c8;
              }
              FUN_143a90ff0(param_3,local_40,local_194,local_174 - local_194);
              FUN_143a8ac30(local_90);
              FUN_143acc590(local_90,0x7b);
              FUN_143c060c0(local_178,local_90);
              FUN_143acc590(local_90,0x7d);
              cVar2 = FUN_143b0fd00(local_40,local_90);
              if (cVar2 != '\0') {
                FUN_143b69970(local_130,local_40);
                local_198 = '\x01';
              }
              local_194 = local_174;
              FUN_143a8dc60(local_90);
              FUN_143a8dc60(local_40);
              FUN_143a8dc60(local_68);
            }
            else {
              if (local_184 != 2) {
                if (((local_184 != 3) && (local_184 != 5)) && (local_184 != 4)) {
                  *param_6 = 5;
                  local_100 = 0;
                  FUN_143a8dc60(local_b8);
                  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
                  FUN_143c01fa0(local_180);
                  return local_100;
                }
                *param_6 = 0x10;
                local_108 = 0;
                FUN_143a8dc60(local_b8);
                UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
                FUN_143c01fa0(local_180);
                return local_108;
              }
              FUN_143b0fce0(local_170,local_194);
              local_f0 = FUN_143b77c10(param_1 + 0x2c0,local_190,param_3,local_170);
              iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_170);
              if (iVar4 == local_194) {
                FUN_143b44cd0(param_4,local_194);
                local_110 = 0;
                FUN_143a8dc60(local_b8);
                UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
                FUN_143c01fa0(local_180);
                return local_110;
              }
              FUN_143b698c0(local_130,local_f0);
              local_198 = '\x01';
              local_194 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                          ::GetIndex(local_170);
            }
          }
          else {
            FUN_143b0fce0(local_170,local_194);
            (**(code **)(*local_140 + 0x30))(local_140,param_3,local_130,local_170);
            iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_170);
            if (iVar4 == local_194) {
              FUN_143b44cd0(param_4,local_194);
              local_d8 = 0;
              FUN_143a8dc60(local_b8);
              UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
              FUN_143c01fa0(local_180);
              return local_d8;
            }
            local_194 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                        ::GetIndex(local_170);
            local_198 = '\x01';
          }
          if ((local_198 != '\0') && (*param_5 <= local_178)) {
            *param_5 = local_178 + 1;
          }
          uVar6 = FUN_143b779c0(param_1 + 0x2c0,local_15c);
          local_18c = FUN_143b77960(uVar6);
          local_190 = local_15c;
          FUN_143a8dc60(local_b8);
          param_2 = local_190;
        }
      }
      FUN_143b0fce0(param_4,local_194);
      local_f8 = FUN_143b20430(local_180);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_170);
      FUN_143c01fa0(local_180);
    }
    else {
      *param_6 = 0x1010c;
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_4);
      FUN_143b44cd0(param_4,uVar3);
      local_f8 = 0;
    }
  }
  else {
    uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_4);
    FUN_143b44cd0(param_4,uVar3);
    local_f8 = 0;
  }
  return local_f8;
}



// FUNCTION 143c06c00 FUN_143c06c00 body=365 status=ok
// SIG undefined FUN_143c06c00(void)

undefined8 *
FUN_143c06c00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined1 local_48 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = FUN_143c06010(param_1 + 0x58);
  if (cVar1 == '\0') {
    FUN_143b16ce0(local_48,0);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0xb8))(param_1,param_2,local_48,param_3);
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_48);
    if (iVar2 == 0) {
      *param_4 = 6;
      local_38 = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        local_28 = 0;
      }
      else {
        if (puVar3[-1] == 0) {
          FMemory::operator_delete(puVar3 + -1);
          local_58 = 0;
        }
        else {
          local_58 = (**(code **)*puVar3)(puVar3,3);
        }
        local_28 = local_58;
      }
      local_20 = (undefined8 *)0x0;
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_48);
    }
    else {
      local_30 = puVar3;
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_48);
      local_20 = local_30;
    }
  }
  else {
    *param_4 = 0x1010c;
    local_20 = (undefined8 *)0x0;
  }
  return local_20;
}



// FUNCTION 143c06d70 FUN_143c06d70 body=79 status=ok
// SIG undefined FUN_143c06d70(void)

void FUN_143c06d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  FUN_143c06290(param_1,0,param_2,param_3,param_4,local_18);
  return;
}



// FUNCTION 143c06dc0 FUN_143c06dc0 body=104 status=ok
// SIG undefined FUN_143c06dc0(void)

void FUN_143c06dc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18 [2];
  longlong local_10;
  
  local_18[0] = 0;
  local_10 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_4,local_18);
  if (local_10 != 0) {
    FUN_143b68ba0(param_3,local_10,local_18[0]);
  }
  return;
}



// FUNCTION 143c06e30 FUN_143c06e30 body=87 status=ok
// SIG undefined FUN_143c06e30(void)

bool FUN_143c06e30(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b3e5e0(param_1 + 0x10,*(undefined4 *)(param_2 + 4),*(undefined2 *)(param_2 + 8),
                        param_3);
  return cVar1 == '\0';
}



// FUNCTION 143c06e90 FUN_143c06e90 body=95 status=ok
// SIG undefined FUN_143c06e90(void)

void FUN_143c06e90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 143c06ef0 FUN_143c06ef0 body=126 status=ok
// SIG undefined FUN_143c06ef0(void)

void FUN_143c06ef0(longlong param_1)

{
  FUN_143e1e9a0(param_1 + 0x2c0);
  FUN_143ab2e80(*(undefined8 *)(param_1 + 0x360));
  *(undefined8 *)(param_1 + 0x360) = 0;
  FUN_143ab2e80(*(undefined8 *)(param_1 + 0x368));
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  return;
}



// FUNCTION 143c06f70 FUN_143c06f70 body=751 status=ok
// SIG undefined FUN_143c06f70(void)

undefined8
FUN_143c06f70(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_38 [56];
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar3 = FUN_143b59970(*(longlong *)(param_1 + 8) + 0x148,*(undefined4 *)(param_1 + 0x18),
                            param_5);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 != '\0') {
        FUN_143a8d4f0(param_2,0,L"other",5);
        return param_2;
      }
    }
    uVar2 = FUN_143c03ff0(*(undefined8 *)(param_1 + 8),*param_3);
    uVar2 = FUN_143c03d60(*(undefined8 *)(param_1 + 8),uVar2,*(undefined8 *)(param_3 + 2));
    param_3[0x3c] = uVar2;
    if ((0 < (int)param_3[0x3c]) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x360) != 0)) {
      uVar3 = FUN_143ab3400(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x360),param_3[0x3c]);
      *(undefined8 *)(param_3 + 0x3e) = uVar3;
    }
    if (*(longlong *)(param_3 + 0x3e) == 0) {
      uVar3 = FUN_143c058a0(*(undefined8 *)(param_1 + 8),param_5);
      *(undefined8 *)(param_3 + 0x3e) = uVar3;
      *(undefined1 *)(param_3 + 0x4a) = 1;
    }
    FUN_143b69bc0(*(undefined8 *)(param_3 + 0x3e),param_3 + 4,param_3 + 0x40,param_5);
    lVar4 = _guard_xfg_dispatch_icall_nop
                      (*(undefined8 *)(param_3 + 0x3e),0,&icu_53::Format::RTTI_Type_Descriptor,
                       &icu_53::DecimalFormat::RTTI_Type_Descriptor,0);
    if (lVar4 == 0) {
      FUN_143b5beb0(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
    }
    else {
      FUN_143b42080(lVar4,local_38,param_3 + 4,param_5);
      FUN_143b5be20(*(undefined8 *)(param_1 + 0x10),param_2,local_38);
    }
  }
  else {
    FUN_143a8d4f0(param_2,0,L"other",5);
  }
  return param_2;
}



// FUNCTION 143c07270 FUN_143c07270 body=465 status=ok
// SIG undefined FUN_143c07270(void)

void FUN_143c07270(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *local_res18;
  undefined8 *local_40;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x360) == 0) {
      uVar2 = FUN_143ab3680(FUN_143ab33a0,FUN_143ab3020,FUN_143c07a60,param_4);
      *(undefined8 *)(param_1 + 0x360) = uVar2;
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        if (param_3 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*param_3)(param_3,1);
        return;
      }
      std::ios_base::width(*(ios_base **)(param_1 + 0x360),0x143a8d350);
    }
    local_res18 = param_3;
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined1 *)FUN_143a8d310(0x148);
      if (puVar3 == (undefined1 *)0x0) {
        local_40 = (undefined8 *)0x0;
      }
      else {
        puVar5 = puVar3;
        for (lVar4 = 0x148; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_40 = (undefined8 *)FUN_143c01800(puVar3);
      }
      local_res18 = local_40;
    }
    FUN_143ab34d0(*(undefined8 *)(param_1 + 0x360),param_2,local_res18,param_4);
  }
  else if (param_3 != (undefined8 *)0x0) {
    (**(code **)*param_3)(param_3,1);
  }
  return;
}



// FUNCTION 143c07450 FUN_143c07450 body=138 status=ok
// SIG undefined FUN_143c07450(void)

void FUN_143c07450(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_143c07270(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x368) == 0) {
    uVar1 = FUN_143ab3680(FUN_143ab33a0,FUN_143ab3020,0,param_4);
    *(undefined8 *)(param_1 + 0x368) = uVar1;
  }
  FUN_143ab3530(*(undefined8 *)(param_1 + 0x368),param_2,1,param_4);
  return;
}



// FUNCTION 143c074e0 FUN_143c074e0 body=288 status=ok
// SIG undefined FUN_143c074e0(void)

void FUN_143c074e0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar2 = FUN_143e21d00(param_2);
    if (iVar2 < -1) {
      *param_4 = 1;
    }
    else {
      local_18 = 0;
      while( true ) {
        while( true ) {
          do {
            local_18 = FUN_143c06210(param_1,local_18);
            if (local_18 < 0) {
              return;
            }
            cVar1 = FUN_143a8b110(*param_4);
            if (cVar1 == '\0') {
              return;
            }
            cVar1 = FUN_143c02e70(param_1,local_18 + 1,param_2,iVar2);
          } while (cVar1 == '\0');
          if (param_3 != (longlong *)0x0) break;
          FUN_143c07450(param_1,local_18,0,param_4);
        }
        lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
        if (lVar3 == 0) break;
        FUN_143c07450(param_1,local_18,lVar3,param_4);
      }
      *param_4 = 7;
    }
  }
  return;
}



// FUNCTION 143c07600 FUN_143c07600 body=156 status=ok
// SIG undefined FUN_143c07600(void)

void FUN_143c07600(undefined8 param_1,int param_2,longlong *param_3)

{
  int local_28;
  int local_24;
  undefined4 local_20 [2];
  longlong local_18;
  
  if (-1 < param_2) {
    local_24 = 0;
    local_28 = 0;
    while (local_28 = FUN_143c06210(param_1,local_28), -1 < local_28) {
      if (param_2 == local_24) {
        local_18 = (**(code **)(*param_3 + 0x18))(param_3);
        if (local_18 == 0) {
          return;
        }
        local_20[0] = 0;
        FUN_143c07450(param_1,local_28,local_18,local_20);
        return;
      }
      local_24 = local_24 + 1;
    }
  }
  return;
}



// FUNCTION 143c076a0 FUN_143c076a0 body=337 status=ok
// SIG undefined FUN_143c076a0(void)

void FUN_143c076a0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int local_28;
  int local_24;
  undefined4 local_20 [2];
  longlong local_18;
  
  if ((param_2 != 0) && (-1 < param_3)) {
    if (*(longlong *)(param_1 + 0x360) != 0) {
      FUN_143ab3790(*(undefined8 *)(param_1 + 0x360));
    }
    if (*(longlong *)(param_1 + 0x368) != 0) {
      FUN_143ab3790(*(undefined8 *)(param_1 + 0x368));
    }
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0;
    while (((local_28 < param_3 && (cVar1 = FUN_143a8b110(local_20[0]), cVar1 != '\0')) &&
           (local_24 = FUN_143c06210(param_1,local_24), -1 < local_24))) {
      local_18 = 0;
      if ((*(longlong *)(param_2 + (longlong)local_28 * 8) != 0) &&
         (local_18 = (**(code **)(**(longlong **)(param_2 + (longlong)local_28 * 8) + 0x18))
                               (*(undefined8 *)(param_2 + (longlong)local_28 * 8)), local_18 == 0))
      {
        local_20[0] = 7;
      }
      FUN_143c07450(param_1,local_24,local_18,local_20);
      local_28 = local_28 + 1;
    }
    cVar1 = FUN_143a8b0e0(local_20[0]);
    if (cVar1 != '\0') {
      FUN_143c06ef0(param_1);
    }
  }
  return;
}



// FUNCTION 143c07800 FUN_143c07800 body=352 status=ok
// SIG undefined FUN_143c07800(void)

void FUN_143c07800(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_143acc2f0(param_1 + 0x148,param_2);
  if (cVar2 != '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x350);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x350) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x358);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x358) = 0;
    FUN_143a8adb0(param_1 + 0x148,param_2);
    uVar3 = FUN_143a8c200(param_1 + 0x148);
    uVar4 = FUN_143a8c200(param_1 + 0x148);
    FUN_143b69ce0(param_1,uVar4,uVar3);
    FUN_143c06e90(param_1 + 0x370);
    FUN_143c06e90(param_1 + 0x390);
  }
  return;
}



// FUNCTION 143c07960 FUN_143c07960 body=114 status=ok
// SIG undefined FUN_143c07960(void)

undefined8 FUN_143c07960(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_143a8b110(*param_2);
  if ((cVar2 != '\0') &&
     (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x68)), *(int *)(param_1 + 0x60) < iVar3)) {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    uVar4 = FUN_143b09610(*(undefined8 *)(param_1 + 0x68),uVar1);
    return uVar4;
  }
  return 0;
}



// FUNCTION 143c079e0 FUN_143c079e0 body=127 status=ok
// SIG undefined FUN_143c079e0(void)

undefined8 FUN_143c079e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x368) == 0) ||
      (iVar1 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x368)), iVar1 == 0)) &&
     (iVar1 = FUN_143b772b0(param_1 + 0x2c0), iVar1 != 0)) {
    uVar2 = RtAudioError::getType(param_1 + 0x2c0);
    uVar2 = FUN_143a8e070(param_2,uVar2);
    return uVar2;
  }
  FUN_143a90e90(param_2);
  return param_2;
}



// FUNCTION 143c07a60 FUN_143c07a60 body=34 status=ok
// SIG undefined FUN_143c07a60(void)

void FUN_143c07a60(undefined8 param_1,undefined8 param_2)

{
  FUN_143c03d30(param_1,param_2);
  return;
}



// FUNCTION 143c07a90 FUN_143c07a90 body=1101 status=ok
// SIG undefined FUN_143c07a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143c07a90(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_178 [32];
  uint local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_158 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_138 = FUN_143a8d310(0x58);
  if (local_138 == 0) {
    local_128 = 0;
  }
  else {
    local_e0 = FUN_143a8d4f0(local_60,1,L"[-,./[:whitespace:]]",0x14);
    local_158 = local_158 | 1;
    local_a8 = local_e0;
    local_128 = FUN_143b16d40(local_138,local_e0,param_2);
  }
  local_f0 = local_128;
  *param_1 = local_128;
  if ((local_158 & 1) != 0) {
    local_158 = local_158 & 0xfffffffe;
    FUN_143a8dc60(local_60);
  }
  local_118 = FUN_143a8d310(0x58);
  if (local_118 == 0) {
    local_130 = 0;
  }
  else {
    local_108 = FUN_143a8d4f0(local_88,1,L"[-.:[:whitespace:]]",0x13);
    local_158 = local_158 | 2;
    local_b0 = local_108;
    local_130 = FUN_143b16d40(local_118,local_108,param_2);
  }
  local_98 = local_130;
  param_1[1] = local_130;
  if ((local_158 & 2) != 0) {
    local_158 = local_158 & 0xfffffffd;
    FUN_143a8dc60(local_88);
  }
  local_120 = FUN_143a8d310(0x58);
  if (local_120 == 0) {
    local_110 = 0;
  }
  else {
    local_d0 = FUN_143a8d4f0(local_38,1,L"[:whitespace:]",0xe);
    local_158 = local_158 | 4;
    local_a0 = local_d0;
    local_110 = FUN_143b16d40(local_120,local_d0,param_2);
  }
  local_c0 = local_110;
  param_1[2] = local_110;
  if ((local_158 & 4) != 0) {
    local_158 = local_158 & 0xfffffffb;
    FUN_143a8dc60(local_38);
  }
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    local_150 = (undefined8 *)*param_1;
    local_100 = local_150;
    if (local_150 == (undefined8 *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = (**(code **)*local_150)(local_150,1);
    }
    *param_1 = 0;
    local_148 = (undefined8 *)param_1[1];
    local_e8 = local_148;
    if (local_148 == (undefined8 *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = (**(code **)*local_148)(local_148,1);
    }
    param_1[1] = 0;
    local_140 = (undefined8 *)param_1[2];
    if (local_140 != (undefined8 *)0x0) {
      local_c8 = local_140;
      (**(code **)*local_140)(local_140,1);
    }
    param_1[2] = 0;
    *param_2 = 7;
  }
  else {
    FUN_143b149a0(*param_1);
    FUN_143b149a0(param_1[1]);
    FUN_143b149a0(param_1[2]);
  }
  return param_1;
}



// FUNCTION 143c07ee0 FUN_143c07ee0 body=285 status=ok
// SIG undefined FUN_143c07ee0(void)

void FUN_143c07ee0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = 0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 143c08000 FUN_143c08000 body=54 status=ok
// SIG undefined FUN_143c08000(void)

undefined8 FUN_143c08000(undefined8 param_1,uint param_2)

{
  FUN_143c07ee0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c08040 FUN_143c08040 body=95 status=ok
// SIG undefined FUN_143c08040(void)

undefined8 FUN_143c08040(void)

{
  if (DAT_146bc8608 != 0) {
    FUN_143c08000(DAT_146bc8608,1);
  }
  DAT_146bc8608 = 0;
  FUN_143a9a9f0(&DAT_146bc8610);
  return 1;
}



// FUNCTION 143c080a0 FUN_143c080a0 body=158 status=ok
// SIG undefined FUN_143c080a0(void)

undefined8 FUN_143c080a0(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_14 [5];
  
  local_14[0] = 0;
  FUN_143aa29a0(&DAT_146bc8610,FUN_143c08180,local_14);
  cVar1 = FUN_143a8b0e0(local_14[0]);
  if (cVar1 == '\0') {
    switch(param_1) {
    case 1:
    case 2:
    case 3:
    case 0x19:
    case 0x1a:
      uVar2 = *DAT_146bc8608;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar2 = DAT_146bc8608[1];
      break;
    default:
      uVar2 = DAT_146bc8608[2];
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143c08170 FUN_143c08170 body=14 status=ok
// SIG undefined FUN_143c08170(void)

void FUN_143c08170(void)

{
  FUN_143c08040();
  return;
}



// FUNCTION 143c08180 FUN_143c08180 body=128 status=ok
// SIG undefined FUN_143c08180(void)

void FUN_143c08180(undefined4 *param_1)

{
  longlong lVar1;
  longlong local_20;
  
  FUN_143b68380(0x15,FUN_143c08170);
  lVar1 = FUN_143a8d310(0x18);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143c07a90(lVar1,param_1);
  }
  DAT_146bc8608 = local_20;
  if (local_20 == 0) {
    *param_1 = 7;
  }
  return;
}



// FUNCTION 143c08200 FUN_143c08200 body=215 status=ok
// SIG undefined FUN_143c08200(void)

longlong FUN_143c08200(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
    lVar1 = 0;
  }
  else if ((param_2 < 0) || (9 < param_2)) {
    *param_3 = 1;
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)param_2 * 0x58;
    if ((param_1 < *(longlong *)(&DAT_145d1cd20 + lVar1)) ||
       (*(longlong *)(&DAT_145d1cd28 + lVar1) < param_1)) {
      *param_3 = 1;
      lVar1 = 0;
    }
    else {
      lVar1 = (param_1 + *(longlong *)(&DAT_145d1cd18 + lVar1)) *
              *(longlong *)(&DAT_145d1cd10 + lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 143c082e0 FUN_143c082e0 body=500 status=ok
// SIG undefined FUN_143c082e0(void)

longlong FUN_143c082e0(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
    lVar1 = 0;
  }
  else if ((param_2 < 0) || (9 < param_2)) {
    *param_3 = 1;
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)param_2 * 0x58;
    plVar2 = (longlong *)(&DAT_145d1cd10 + lVar1);
    if ((param_1 < *(longlong *)(&DAT_145d1cd30 + lVar1)) ||
       (*(longlong *)(&DAT_145d1cd38 + lVar1) < param_1)) {
      *param_3 = 1;
      lVar1 = 0;
    }
    else if (param_1 < 0) {
      if (param_1 < *(longlong *)(&DAT_145d1cd58 + lVar1)) {
        lVar1 = (param_1 + *(longlong *)(&DAT_145d1cd50 + lVar1)) / *plVar2 -
                *(longlong *)(&DAT_145d1cd40 + lVar1);
      }
      else {
        lVar1 = (param_1 - *(longlong *)(&DAT_145d1cd50 + lVar1)) / *plVar2 -
                *(longlong *)(&DAT_145d1cd18 + lVar1);
      }
    }
    else if (*(longlong *)(&DAT_145d1cd60 + lVar1) < param_1) {
      lVar1 = (param_1 - *(longlong *)(&DAT_145d1cd50 + lVar1)) / *plVar2 -
              *(longlong *)(&DAT_145d1cd48 + lVar1);
    }
    else {
      lVar1 = (param_1 + *(longlong *)(&DAT_145d1cd50 + lVar1)) / *plVar2 -
              *(longlong *)(&DAT_145d1cd18 + lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 143c084e0 FUN_143c084e0 body=1451 status=ok
// SIG undefined FUN_143c084e0(void)

/* WARNING: Removing unreachable block (ram,0x000143c08756) */
/* WARNING: Removing unreachable block (ram,0x000143c088a2) */

undefined1
FUN_143c084e0(longlong *param_1,undefined2 *param_2,undefined2 *param_3,int *param_4,int *param_5,
             undefined4 *param_6)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined2 local_88;
  undefined1 local_84;
  undefined8 *local_80;
  undefined8 *local_78;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_64 = 0;
  local_84 = 1;
  local_48 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_40 = param_1;
  uVar6 = FUN_143a91970();
  (**(code **)(*local_40 + 0x90))(local_40,uVar6,&local_48,&local_78,&local_80,&local_64);
  cVar1 = FUN_143a8b110(local_64);
  if (cVar1 == '\0') {
    local_84 = 0;
  }
  else if ((local_78 == (undefined8 *)0x0) || (local_80 == (undefined8 *)0x0)) {
    iVar4 = FUN_143ab3100(local_48);
    *param_4 = -(iVar4 / 60000);
    *param_6 = 0;
    *param_5 = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    iVar4 = FUN_143ab3100(local_78);
    *param_4 = -(iVar4 / 60000);
    *param_6 = 0;
    iVar4 = FAnalyticsSpan::GetStackDepth(local_80,(longlong)iVar4 % 60000 & 0xffffffff);
    *param_5 = -(iVar4 / 60000);
    *param_3 = 0;
    uVar5 = FUN_143bed790(local_78,(longlong)iVar4 % 60000 & 0xffffffff);
    sVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(uVar5);
    param_3[1] = sVar2 + 1;
    uVar5 = FUN_143bed790(local_78);
    uVar3 = FUN_143a93e50(uVar5);
    param_3[3] = uVar3;
    uVar5 = FUN_143bed790(local_78);
    sVar2 = FUN_143a91e00(uVar5);
    param_3[2] = sVar2 + -1;
    uVar5 = FUN_143bed790(local_78);
    iVar4 = FUN_143b5e700(uVar5);
    local_6c = iVar4 / 3600000;
    local_70 = (iVar4 % 3600000) / 60000;
    iVar4 = (iVar4 % 3600000) % 60000;
    local_68 = iVar4 / 1000;
    param_3[4] = (undefined2)local_6c;
    param_3[5] = (undefined2)local_70;
    param_3[6] = (undefined2)local_68;
    local_88 = (undefined2)(iVar4 % 1000);
    param_3[7] = local_88;
    *param_2 = 0;
    uVar5 = FUN_143bed790(local_80);
    sVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(uVar5);
    param_2[1] = sVar2 + 1;
    uVar5 = FUN_143bed790(local_80);
    uVar3 = FUN_143a93e50(uVar5);
    param_2[3] = uVar3;
    uVar5 = FUN_143bed790(local_80);
    sVar2 = FUN_143a91e00(uVar5);
    param_2[2] = sVar2 + -1;
    uVar5 = FUN_143bed790(local_80);
    iVar4 = FUN_143b5e700(uVar5);
    local_6c = iVar4 / 3600000;
    local_70 = (iVar4 % 3600000) / 60000;
    iVar4 = (iVar4 % 3600000) % 60000;
    local_68 = iVar4 / 1000;
    param_2[4] = (undefined2)local_6c;
    param_2[5] = (undefined2)local_70;
    param_2[6] = (undefined2)local_68;
    local_88 = (undefined2)(iVar4 % 1000);
    param_2[7] = local_88;
  }
  local_38 = local_48;
  local_60 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)*local_48)(local_48,1);
  }
  local_18 = local_78;
  local_58 = local_78;
  if (local_78 == (undefined8 *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = (**(code **)*local_78)(local_78,1);
  }
  local_20 = local_80;
  local_50 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  return local_84;
}



// FUNCTION 143c08a90 FUN_143c08a90 body=346 status=ok
// SIG undefined FUN_143c08a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143c08a90(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 *local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_70 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  FUN_143a8db50(local_48,param_2,param_3);
  local_78 = FUN_143b4ae60(local_48);
  if (local_78 != 0) {
    local_90 = &local_84;
    local_98 = &local_7c;
    cVar1 = FUN_143c084e0(local_78,local_58,local_68,&local_80);
    if (cVar1 != '\0') {
      _guard_xfg_dispatch_icall_nop(param_1,0,0xac);
      *param_1 = local_80;
      param_1[0x2a] = local_7c;
      param_1[0x15] = local_84;
      puVar3 = local_58;
      puVar4 = param_1 + 0x26;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = (undefined4 *)((longlong)puVar4 + 1);
      }
      puVar3 = local_68;
      puVar4 = param_1 + 0x11;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = (undefined4 *)((longlong)puVar4 + 1);
      }
      local_88 = 1;
    }
  }
  local_87 = local_88;
  FUN_143a8dc60(local_48);
  return local_87;
}



// FUNCTION 143c08bf0 FUN_143c08bf0 body=57 status=ok
// SIG undefined FUN_143c08bf0(void)

undefined8 FUN_143c08bf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143c08a90(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
  }
  return uVar2;
}



// FUNCTION 143c08c30 FUN_143c08c30 body=127 status=ok
// SIG undefined FUN_143c08c30(void)

undefined8 *
FUN_143c08c30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = FUN_143a9c510();
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 143c08cb0 FUN_143c08cb0 body=89 status=ok
// SIG undefined FUN_143c08cb0(void)

undefined8 * FUN_143c08cb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = FUN_143a9c510();
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 143c08d10 FUN_143c08d10 body=40 status=ok
// SIG undefined FUN_143c08d10(void)

bool FUN_143c08d10(longlong param_1)

{
  return *(longlong *)(param_1 + 0x20) != 0;
}



// FUNCTION 143c08d40 FUN_143c08d40 body=40 status=ok
// SIG undefined FUN_143c08d40(void)

bool FUN_143c08d40(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) != 0;
}



// FUNCTION 143c08d70 FUN_143c08d70 body=565 status=ok
// SIG undefined FUN_143c08d70(void)

uint FUN_143c08d70(longlong *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_c;
  
  if (param_1[4] == 0) {
    if (param_1[2] <= param_1[1]) {
      return 0xffffffff;
    }
    local_c = (uint)*(ushort *)(*param_1 + param_1[1] * 2);
    param_1[1] = param_1[1] + 1;
    if ((((local_c & 0xfffffc00) == 0xd800) && (param_1[1] != param_1[2])) &&
       (uVar1 = *(ushort *)(*param_1 + param_1[1] * 2), (uVar1 & 0xfc00) == 0xdc00)) {
      param_1[1] = param_1[1] + 1;
      local_c = local_c * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
    uVar2 = FUN_143a9cce0(param_1[3],local_c,param_1 + 4,0);
    *(undefined4 *)(param_1 + 5) = uVar2;
    if ((0x1e < (int)param_1[5]) || ((int)param_1[5] < 0)) {
      if ((int)param_1[5] < 0) {
        *(uint *)(param_1 + 5) = ~*(uint *)(param_1 + 5);
      }
      param_1[4] = 0;
      return *(uint *)(param_1 + 5);
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  uVar3 = (uint)*(ushort *)(param_1[4] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 2);
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  if ((((uVar3 & 0xfffffc00) == 0xd800) && (*(int *)((longlong)param_1 + 0x2c) != (int)param_1[5]))
     && (uVar1 = *(ushort *)(param_1[4] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 2),
        (uVar1 & 0xfc00) == 0xdc00)) {
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
    uVar3 = uVar3 * 0x400 + -0x35fdc00 + (uint)uVar1;
  }
  if ((int)param_1[5] <= *(int *)((longlong)param_1 + 0x2c)) {
    param_1[4] = 0;
  }
  return uVar3;
}



// FUNCTION 143c08fb0 FUN_143c08fb0 body=524 status=ok
// SIG undefined FUN_143c08fb0(void)

uint FUN_143c08fb0(longlong *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_c;
  
  if (param_1[2] == 0) {
    if ((*(int *)(*param_1 + 0x28) < *(int *)(*param_1 + 0x2c)) &&
       (*(ushort *)(*(longlong *)(*param_1 + 0x30) + (longlong)*(int *)(*param_1 + 0x28) * 2) <
        0xd800)) {
      local_c = (uint)*(ushort *)
                       (*(longlong *)(*param_1 + 0x30) + (longlong)*(int *)(*param_1 + 0x28) * 2);
      *(int *)(*param_1 + 0x28) = *(int *)(*param_1 + 0x28) + 1;
    }
    else {
      local_c = FUN_143b07920(*param_1);
    }
    if (local_c == 0xffffffff) {
      return 0xffffffff;
    }
    uVar2 = FUN_143a9cce0(param_1[1],local_c,param_1 + 2,0);
    *(undefined4 *)(param_1 + 3) = uVar2;
    if ((0x1e < (int)param_1[3]) || ((int)param_1[3] < 0)) {
      if ((int)param_1[3] < 0) {
        *(uint *)(param_1 + 3) = ~*(uint *)(param_1 + 3);
      }
      param_1[2] = 0;
      return *(uint *)(param_1 + 3);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  uVar3 = (uint)*(ushort *)(param_1[2] + (longlong)*(int *)((longlong)param_1 + 0x1c) * 2);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  if ((((uVar3 & 0xfffffc00) == 0xd800) && (*(int *)((longlong)param_1 + 0x1c) != (int)param_1[3]))
     && (uVar1 = *(ushort *)(param_1[2] + (longlong)*(int *)((longlong)param_1 + 0x1c) * 2),
        (uVar1 & 0xfc00) == 0xdc00)) {
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
    uVar3 = uVar3 * 0x400 + -0x35fdc00 + (uint)uVar1;
  }
  if ((int)param_1[3] <= *(int *)((longlong)param_1 + 0x1c)) {
    param_1[2] = 0;
  }
  return uVar3;
}



// FUNCTION 143c091c0 FUN_143c091c0 body=24 status=ok
// SIG undefined FUN_143c091c0(void)

undefined2 FUN_143c091c0(int param_1,longlong param_2)

{
  return *(undefined2 *)(param_2 + (longlong)param_1 * 2);
}



// FUNCTION 143c091e0 FUN_143c091e0 body=713 status=ok
// SIG undefined FUN_143c091e0(void)

undefined2 FUN_143c091e0(int param_1,longlong *param_2)

{
  int iVar1;
  uint local_28;
  uint local_24;
  uint local_1c;
  uint local_18;
  
  if (param_1 == (int)param_2[1] + 1) {
    if ((*(int *)(*param_2 + 0x28) < *(int *)(*param_2 + 0x2c)) &&
       (*(ushort *)(*(longlong *)(*param_2 + 0x30) + (longlong)*(int *)(*param_2 + 0x28) * 2) <
        0xd800)) {
      local_24 = (uint)*(ushort *)
                        (*(longlong *)(*param_2 + 0x30) + (longlong)*(int *)(*param_2 + 0x28) * 2);
      *(int *)(*param_2 + 0x28) = *(int *)(*param_2 + 0x28) + 1;
    }
    else {
      local_24 = FUN_143b07920(*param_2);
    }
    local_28 = local_24;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  else if (param_1 == (int)param_2[1]) {
    if ((*(int *)(*param_2 + 0x28) < 1) ||
       (0xd7ff < *(ushort *)
                  (*(longlong *)(*param_2 + 0x30) + (longlong)(*(int *)(*param_2 + 0x28) + -1) * 2))
       ) {
      local_1c = FUN_143b08190(*param_2);
    }
    else {
      iVar1 = *(int *)(*param_2 + 0x28) + -1;
      *(int *)(*param_2 + 0x28) = iVar1;
      local_1c = (uint)*(ushort *)(*(longlong *)(*param_2 + 0x30) + (longlong)iVar1 * 2);
    }
    local_28 = local_1c;
    if ((*(int *)(*param_2 + 0x28) < *(int *)(*param_2 + 0x2c)) &&
       (*(ushort *)(*(longlong *)(*param_2 + 0x30) + (longlong)*(int *)(*param_2 + 0x28) * 2) <
        0xd800)) {
      *(int *)(*param_2 + 0x28) = *(int *)(*param_2 + 0x28) + 1;
    }
    else {
      FUN_143b07920(*param_2);
    }
  }
  else {
    FUN_143b07790(*param_2,(param_1 - (int)param_2[1]) + -1);
    if ((*(int *)(*param_2 + 0x28) < *(int *)(*param_2 + 0x2c)) &&
       (*(ushort *)(*(longlong *)(*param_2 + 0x30) + (longlong)*(int *)(*param_2 + 0x28) * 2) <
        0xd800)) {
      local_18 = (uint)*(ushort *)
                        (*(longlong *)(*param_2 + 0x30) + (longlong)*(int *)(*param_2 + 0x28) * 2);
      *(int *)(*param_2 + 0x28) = *(int *)(*param_2 + 0x28) + 1;
    }
    else {
      local_18 = FUN_143b07920(*param_2);
    }
    local_28 = local_18;
    *(int *)(param_2 + 1) = param_1;
  }
  if (local_28 < 0x10000) {
  }
  else {
    local_28._0_2_ = 0;
  }
  return (undefined2)local_28;
}



// FUNCTION 143c094b0 FUN_143c094b0 body=188 status=ok
// SIG undefined FUN_143c094b0(void)

uint FUN_143c094b0(uint param_1,char param_2,int param_3)

{
  uint uVar1;
  undefined4 local_res8;
  undefined4 local_18;
  
  param_3 = (param_1 >> 8 & 0xff) - param_3;
  if (param_3 < 2) {
    local_18 = (param_1 >> 0x10 & 0xff) - 1;
    local_res8 = param_1;
    if (param_2 == '\0') {
      if (local_18 < 2) {
        local_18 = 0xff;
        local_res8 = param_1 - 0x1000000;
      }
    }
    else if (local_18 < 4) {
      local_18 = 0xfe;
      local_res8 = param_1 - 0x1000000;
    }
    uVar1 = local_res8 & 0xff000000 | local_18 << 0x10 | (param_3 + 0xfe) * 0x100;
  }
  else {
    uVar1 = param_1 & 0xffff0000 | param_3 * 0x100;
  }
  return uVar1;
}



// FUNCTION 143c09570 FUN_143c09570 body=129 status=ok
// SIG undefined FUN_143c09570(void)

uint FUN_143c09570(uint param_1,char param_2,int param_3)

{
  undefined4 local_res8;
  undefined4 local_18;
  
  local_18 = (param_1 >> 0x10 & 0xff) - param_3;
  local_res8 = param_1;
  if (param_2 == '\0') {
    if (local_18 < 2) {
      local_18 = local_18 + 0xfe;
      local_res8 = param_1 - 0x1000000;
    }
  }
  else if (local_18 < 4) {
    local_18 = local_18 + 0xfb;
    local_res8 = param_1 - 0x1000000;
  }
  return local_res8 & 0xff000000 | local_18 << 0x10;
}



// FUNCTION 143c09600 FUN_143c09600 body=121 status=ok
// SIG undefined FUN_143c09600(void)

void FUN_143c09600(int param_1,ulonglong param_2)

{
  uint local_res10;
  
  local_res10 = (uint)param_2;
  FUN_143c09680((int)(param_2 >> 0x20),(param_2 & 0x80) != 0,
                (param_1 - ((int)local_res10 >> 8)) * (local_res10 & 0x7f));
  return;
}



// FUNCTION 143c09680 FUN_143c09680 body=261 status=ok
// SIG undefined FUN_143c09680(void)

uint FUN_143c09680(uint param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_res18;
  undefined4 local_18;
  
  iVar1 = param_3 + -2 + (param_1 >> 8 & 0xff);
  iVar2 = iVar1 / 0xfe;
  if (param_2 == '\0') {
    local_res18 = iVar2 + -2 + (param_1 >> 0x10 & 0xff);
    iVar2 = local_res18 % 0xfe + 2;
    local_res18 = local_res18 / 0xfe;
  }
  else {
    local_res18 = iVar2 + -4 + (param_1 >> 0x10 & 0xff);
    iVar2 = local_res18 % 0xfb + 4;
    local_res18 = local_res18 / 0xfb;
  }
  local_18 = (iVar1 % 0xfe + 2) * 0x100 | iVar2 * 0x10000;
  return local_18 | (param_1 & 0xff000000) + local_res18 * 0x1000000;
}



// FUNCTION 143c09790 FUN_143c09790 body=184 status=ok
// SIG undefined FUN_143c09790(void)

uint FUN_143c09790(uint param_1,char param_2,int param_3)

{
  int iVar1;
  undefined4 local_res18;
  undefined4 local_18;
  
  if (param_2 == '\0') {
    local_res18 = param_3 + -2 + (param_1 >> 0x10 & 0xff);
    iVar1 = local_res18 % 0xfe + 2;
    local_res18 = local_res18 / 0xfe;
  }
  else {
    local_res18 = param_3 + -4 + (param_1 >> 0x10 & 0xff);
    iVar1 = local_res18 % 0xfb + 4;
    local_res18 = local_res18 / 0xfb;
  }
  local_18 = iVar1 * 0x10000;
  return local_18 | (param_1 & 0xff000000) + local_res18 * 0x1000000;
}



// FUNCTION 143c09850 FUN_143c09850 body=146 status=ok
// SIG undefined FUN_143c09850(void)

uint FUN_143c09850(int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 1) / 0x12;
  return ((param_1 + 1) % 0x12) * 0xe + 2U | (iVar1 % 0xfe + 2) * 0x100 |
         ((iVar1 / 0xfe) % 0xfb + 4) * 0x10000 | 0xfe000000;
}



// FUNCTION 143c098f0 FUN_143c098f0 body=107 status=ok
// SIG undefined FUN_143c098f0(void)

undefined8 * FUN_143c098f0(undefined8 *param_1,longlong param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::MeasureUnit::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  _guard_xfg_dispatch_icall_nop((char *)(param_1 + 2),(char *)(param_2 + 0x10));
  return param_1;
}



// FUNCTION 143c09960 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::MeasureUnit::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c09990 FUN_143c09990 body=183 status=ok
// SIG undefined FUN_143c09990(void)

undefined1 FUN_143c09990(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar3 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar4 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar4,uVar3);
    if (cVar1 == '\0') {
      if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
          (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
         (iVar2 = _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x10),(char *)(param_2 + 0x10)),
         iVar2 == 0)) {
        local_28 = 1;
      }
      else {
        local_28 = 0;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143c09a50 FUN_143c09a50 body=134 status=ok
// SIG undefined FUN_143c09a50(void)

int FUN_143c09a50(longlong param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int local_res10;
  int local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    while( true ) {
      if (local_res18 <= local_res10) {
        return -1;
      }
      iVar1 = (local_res10 + local_res18) / 2;
      iVar2 = _guard_xfg_dispatch_icall_nop(*(char **)(param_1 + (longlong)iVar1 * 8),param_4);
      if (-1 < iVar2) break;
      local_res10 = iVar1 + 1;
    }
    local_res18 = iVar1;
  } while (iVar2 != 0);
  return iVar1;
}



// FUNCTION 143c09ae0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x18);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143c098f0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143c09b40 FUN_143c09b40 body=19 status=ok
// SIG undefined FUN_143c09b40(void)

void FUN_143c09b40(void)

{
  FUN_143c09b60();
  return;
}



// FUNCTION 143c09b60 FUN_143c09b60 body=8 status=ok
// SIG undefined FUN_143c09b60(void)

undefined * FUN_143c09b60(void)

{
  return &DAT_146bc8618;
}



// FUNCTION 143c09b70 FUN_143c09b70 body=208 status=ok
// SIG undefined FUN_143c09b70(void)

void FUN_143c09b70(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_143c09a50(&PTR_s_acceleration_145d1e400,0,0xc,"currency");
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = FUN_143c09a50(&PTR_s_g_force_145d1e460,
                        *(undefined4 *)(&DAT_145d1e390 + (longlong)*(int *)(param_1 + 8) * 4),
                        *(undefined4 *)(&DAT_145d1e390 + (longlong)(*(int *)(param_1 + 8) + 1) * 4),
                        param_2);
  if (iVar2 == -1) {
    strncpy((char *)(param_1 + 0x10),param_2,4);
  }
  else {
    *(int *)(param_1 + 0xc) = iVar2 - *(int *)(&DAT_145d1e390 + (longlong)*(int *)(param_1 + 8) * 4)
    ;
  }
  return;
}



// FUNCTION 143c09c40 FUN_143c09c40 body=148 status=ok
// SIG undefined FUN_143c09c40(void)

longlong FUN_143c09c40(longlong param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
    if ((param_2 & 1) != 0) {
      FUN_143a8d330(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (param_1,0x18,*(undefined8 *)(param_1 + -8),
               UCameraModifier_Climbing::~UCameraModifier_Climbing,0xfffffffffffffffe);
    if ((param_2 & 1) != 0) {
      FUN_143a8d330(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}



// FUNCTION 143c09ce0 FUN_143c09ce0 body=233 status=ok
// SIG undefined FUN_143c09ce0(void)

char * FUN_143c09ce0(longlong param_1,uint param_2,char *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  char *local_res18;
  int local_18;
  
  local_18 = 0;
  local_res18 = param_3;
  do {
    if (((param_2 == 0) || (param_2 == 4)) || (param_2 == 5)) {
      uVar1 = FUN_143ab82e0(*local_res18);
      *(undefined1 *)(param_1 + (ulonglong)param_2 * 0x20 + (longlong)local_18) = uVar1;
    }
    else {
      *(char *)(param_1 + (ulonglong)param_2 * 0x20 + (longlong)local_18) = *local_res18;
    }
    local_18 = local_18 + 1;
    local_res18 = local_res18 + 1;
  } while (((*local_res18 != '_') && (*local_res18 != '\0')) && (local_18 < 0x20));
  if (0x1f < local_18) {
    *param_4 = 0xf;
  }
  return local_res18;
}



// FUNCTION 143c09dd0 FUN_143c09dd0 body=179 status=ok
// SIG undefined FUN_143c09dd0(void)

char * FUN_143c09dd0(longlong param_1,undefined8 param_2,char *param_3,undefined4 *param_4)

{
  char *_Source;
  char *pcVar1;
  
  _Source = param_3 + 1;
  pcVar1 = strchr(param_3 + 2,(int)*param_3);
  if ((pcVar1 == (char *)0x0) || (0xff < (longlong)pcVar1 - (longlong)_Source)) {
    *param_4 = 0xf;
  }
  else {
    strncpy((char *)(param_1 + 0xc0),_Source,(longlong)pcVar1 - (longlong)_Source);
    _Source = pcVar1 + 1;
  }
  return _Source;
}



// FUNCTION 143c09e90 FUN_143c09e90 body=135 status=ok
// SIG undefined FUN_143c09e90(void)

char * FUN_143c09e90(longlong param_1,uint param_2,undefined1 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = FUN_143c0a140(*param_3,param_4);
  *(undefined4 *)(param_1 + 0x1cc + (ulonglong)param_2 * 4) = uVar2;
  pcVar3 = param_3 + 1;
  if (((*pcVar3 == '_') || (*pcVar3 == '\0')) && (cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    return pcVar3;
  }
  *param_4 = 1;
  return pcVar3;
}



// FUNCTION 143c09f20 FUN_143c09f20 body=268 status=ok
// SIG undefined FUN_143c09f20(void)

char * FUN_143c09f20(longlong param_1,int param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  char *local_res18;
  undefined4 *local_res20;
  int local_18;
  
  local_18 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 == 0) {
    while ((((cVar1 = FUN_143a8b110(*local_res20), cVar1 != '\0' && (local_18 < 0x20)) &&
            (*local_res18 != '\0')) && (*local_res18 != '_'))) {
      uVar2 = FUN_143c0a030(&local_res18,local_res20);
      *(undefined2 *)(param_1 + 0x1f0 + (longlong)local_18 * 2) = uVar2;
      local_18 = local_18 + 1;
    }
    *(int *)(param_1 + 0x230) = local_18;
    if (((local_18 == 0x20) && (*local_res18 != '\0')) && (*local_res18 != '_')) {
      *local_res20 = 0xf;
    }
  }
  else {
    uVar3 = FUN_143c0a030(&local_res18,param_4);
    *(uint *)(param_1 + 0x1ec) = (uint)uVar3;
  }
  cVar1 = FUN_143a8b110(*local_res20);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x234) = 1;
  }
  return local_res18;
}



// FUNCTION 143c0a030 FUN_143c0a030 body=264 status=ok
// SIG undefined FUN_143c0a030(void)

ushort FUN_143c0a030(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort local_10;
  int local_c;
  
  uVar2 = 0;
  local_c = 0;
  do {
    cVar1 = *(char *)*param_1;
    if ((cVar1 == '\0') || (3 < local_c)) {
      if (local_c < 4) {
        *param_2 = 1;
      }
      return uVar2;
    }
    if ((cVar1 < '0') || ('9' < cVar1)) {
      if ((cVar1 < 'a') || ('f' < cVar1)) {
        if ((cVar1 < 'A') || ('F' < cVar1)) {
          *param_2 = 1;
          return 0;
        }
        local_10 = (short)cVar1 - 0x37;
      }
      else {
        local_10 = (short)cVar1 - 0x57;
      }
    }
    else {
      local_10 = (short)cVar1 - 0x30;
    }
    uVar2 = uVar2 << 4 | local_10;
    local_c = local_c + 1;
    *param_1 = *param_1 + 1;
  } while( true );
}



// FUNCTION 143c0a140 FUN_143c0a140 body=108 status=ok
// SIG undefined FUN_143c0a140(void)

undefined4 FUN_143c0a140(char param_1,undefined4 *param_2)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (0xb < local_18) {
      *param_2 = 1;
      return 0xffffffff;
    }
    if ((&DAT_145d1f0d0)[(ulonglong)local_18 * 8] == param_1) break;
    local_18 = local_18 + 1;
  }
  return *(undefined4 *)(&DAT_145d1f0d4 + (ulonglong)local_18 * 8);
}



// FUNCTION 143c0a1b0 FUN_143c0a1b0 body=342 status=ok
// SIG undefined FUN_143c0a1b0(void)

int FUN_143c0a1b0(longlong *param_1,uint param_2)

{
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = *(int *)(*param_1 + 8);
  local_18 = (int)param_1[1] + -1;
  do {
    if (local_18 <= local_1c + 1) {
      return local_1c;
    }
    local_20 = (local_1c + local_18) / 2;
    local_24 = *(uint *)(*param_1 + (longlong)local_20 * 4);
    local_28 = local_20;
    if ((local_24 & 0x80) != 0) {
      do {
        local_28 = local_28 + 1;
        if (local_28 == local_18) goto LAB_143c0a274;
        local_24 = *(uint *)(*param_1 + (longlong)local_28 * 4);
      } while ((local_24 & 0x80) != 0);
      local_20 = local_28;
LAB_143c0a274:
      local_28 = local_20;
      if ((local_24 & 0x80) != 0) {
        do {
          local_28 = local_28 + -1;
          if (local_28 == local_1c) goto LAB_143c0a2c8;
          local_24 = *(uint *)(*param_1 + (longlong)local_28 * 4);
        } while ((local_24 & 0x80) != 0);
        local_20 = local_28;
LAB_143c0a2c8:
        if ((local_24 & 0x80) != 0) {
          return local_1c;
        }
      }
    }
    if (param_2 < (local_24 & 0xffffff00)) {
      local_18 = local_20;
    }
    else {
      local_1c = local_20;
    }
  } while( true );
}



// FUNCTION 143c0a310 FUN_143c0a310 body=40 status=ok
// SIG undefined FUN_143c0a310(void)

undefined4 FUN_143c0a310(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143c0a1b0(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c0a340 FUN_143c0a340 body=135 status=ok
// SIG undefined FUN_143c0a340(void)

ulonglong FUN_143c0a340(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  uint local_res10;
  int local_18;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_18 = FUN_143c0a1b0(param_1,param_2);
    local_res10 = param_2;
    if (param_2 != (*(uint *)(*param_1 + (longlong)local_18 * 4) & 0xffffff00)) {
      do {
        local_18 = local_18 + 1;
        local_res10 = *(uint *)(*param_1 + (longlong)local_18 * 4);
      } while ((local_res10 & 0x80) != 0);
    }
    uVar1 = (ulonglong)local_res10 << 0x20 | 0x5000500;
  }
  return uVar1;
}



// FUNCTION 143c0a3d0 FUN_143c0a3d0 body=193 status=ok
// SIG undefined FUN_143c0a3d0(void)

ulonglong FUN_143c0a3d0(longlong *param_1,uint param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_res18;
  undefined4 local_18;
  
  local_res18 = param_3 + 1;
  local_18 = *(uint *)(*param_1 + (longlong)local_res18 * 4);
  if (((local_18 & 0x80) == 0) && (uVar1 = local_18 & 0x7f, uVar1 != 0)) {
    if ((param_2 & 0xffff) == 0) {
      uVar2 = FUN_143c09790(param_2,param_4,uVar1);
    }
    else {
      uVar2 = FUN_143c09680(param_2,param_4,uVar1);
    }
  }
  else {
    while ((local_18 & 0x80) != 0) {
      local_res18 = local_res18 + 1;
      local_18 = *(uint *)(*param_1 + (longlong)local_res18 * 4);
    }
    uVar2 = (ulonglong)local_18;
  }
  return uVar2;
}



// FUNCTION 143c0a4a0 FUN_143c0a4a0 body=237 status=ok
// SIG undefined FUN_143c0a4a0(void)

ulonglong FUN_143c0a4a0(longlong *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int local_18;
  uint local_14;
  
  local_18 = FUN_143c0a310(param_1,param_2);
  local_14 = *(uint *)(*param_1 + (longlong)local_18 * 4);
  if (param_2 == (local_14 & 0xffffff00)) {
    local_14 = local_14 & 0x7f;
    if (local_14 == 0) {
      do {
        local_18 = local_18 + -1;
        uVar1 = *(uint *)(*param_1 + (longlong)local_18 * 4);
      } while ((uVar1 & 0x80) != 0);
      return (ulonglong)(uVar1 & 0xffffff00);
    }
  }
  else {
    local_14 = *(uint *)(*param_1 + (longlong)(local_18 + 1) * 4) & 0x7f;
  }
  if ((param_2 & 0xffff) == 0) {
    uVar2 = FUN_143c09570(param_2,param_3,local_14);
  }
  else {
    uVar2 = FUN_143c094b0(param_2,param_3,local_14);
  }
  return uVar2;
}



// FUNCTION 143c0a590 FUN_143c0a590 body=166 status=ok
// SIG undefined FUN_143c0a590(void)

uint FUN_143c0a590(longlong *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_res10;
  uint local_18;
  
  if (param_2 == 0) {
    local_res10 = *(int *)(*param_1 + 4);
    local_18 = 0x10000;
  }
  else {
    local_res10 = param_2 + 1;
    local_18 = FUN_143be7400(param_1);
  }
  while ((uVar1 = *(uint *)(*param_1 + (longlong)local_res10 * 4), uVar2 = local_18,
         (uVar1 & 0x80) != 0 && (uVar2 = uVar1 >> 0x10, uVar2 <= param_3))) {
    local_res10 = local_res10 + 1;
  }
  return uVar2;
}



// FUNCTION 143c0a640 FUN_143c0a640 body=180 status=ok
// SIG undefined FUN_143c0a640(void)

uint FUN_143c0a640(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    local_18 = *(int *)(*param_1 + 4);
    local_10 = 0;
    local_14 = *(uint *)(*param_1 + (longlong)local_18 * 4) >> 0x10;
  }
  else {
    local_18 = FUN_143c0a310(param_1,param_2);
    local_18 = local_18 + 1;
    local_10 = 0x200;
    local_14 = 0x500;
  }
  while (local_14 < param_3) {
    local_10 = local_14;
    lVar1 = (longlong)local_18;
    local_18 = local_18 + 1;
    local_14 = *(uint *)(*param_1 + lVar1 * 4) >> 0x10;
  }
  return local_10;
}



// FUNCTION 143c0a700 FUN_143c0a700 body=252 status=ok
// SIG undefined FUN_143c0a700(void)

uint FUN_143c0a700(longlong *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int local_res10;
  uint local_14;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      local_res10 = *(int *)*param_1;
      local_14 = 0x4000;
    }
    else {
      local_res10 = *(int *)(*param_1 + 4);
      local_14 = FUN_143be7bb0(param_1);
    }
  }
  else {
    local_res10 = param_2 + 1;
    local_14 = FUN_143be7bb0(param_1);
  }
  while( true ) {
    uVar1 = *(uint *)(*param_1 + (longlong)local_res10 * 4);
    if ((uVar1 & 0x80) == 0) {
      return local_14;
    }
    if (param_3 < uVar1 >> 0x10) break;
    if ((param_3 << 0x10 | param_4) < (uVar1 & 0xffffff7f)) {
      return uVar1 & 0xff7f;
    }
    local_res10 = local_res10 + 1;
  }
  return local_14;
}



// FUNCTION 143c0a800 FUN_143c0a800 body=261 status=ok
// SIG undefined FUN_143c0a800(void)

uint FUN_143c0a800(longlong *param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      local_18 = *(int *)*param_1;
      local_10 = 0;
    }
    else {
      local_18 = *(int *)(*param_1 + 4);
      local_10 = 0x200;
    }
    local_14 = *(uint *)(*param_1 + (longlong)local_18 * 4) & 0xffffff7f;
  }
  else {
    local_18 = FUN_143c0a310(param_1,param_2);
    local_18 = local_18 + 1;
    local_10 = 0x200;
    local_14 = 0x5000500;
  }
  while (local_14 < (param_3 << 0x10 | param_4)) {
    if (local_14 >> 0x10 == param_3) {
      local_10 = local_14;
    }
    lVar1 = (longlong)local_18;
    local_18 = local_18 + 1;
    local_14 = *(uint *)(*param_1 + lVar1 * 4) & 0xffffff7f;
  }
  return local_10 & 0xffff;
}



// FUNCTION 143c0a910 FUN_143c0a910 body=318 status=ok
// SIG undefined FUN_143c0a910(void)

ulonglong FUN_143c0a910(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_18;
  uint local_14;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = FUN_143c0a1b0(param_1,param_2);
    uVar1 = *(uint *)(*param_1 + (longlong)local_18 * 4);
    if (param_2 == (uVar1 & 0xffffff00)) {
      uVar2 = *(uint *)(*param_1 + (longlong)(local_18 + -1) * 4);
      if ((uVar2 & 0x80) == 0) {
        local_14 = 0x5000500;
        uVar1 = uVar2;
      }
      else {
        local_18 = local_18 + -2;
        while (uVar1 = *(uint *)(*param_1 + (longlong)local_18 * 4), local_14 = uVar2,
              (uVar1 & 0x80) != 0) {
          local_18 = local_18 + -1;
        }
      }
    }
    else {
      local_14 = 0x5000500;
      uVar2 = local_14;
      do {
        local_14 = uVar2;
        local_18 = local_18 + 1;
        uVar2 = *(uint *)(*param_1 + (longlong)local_18 * 4);
      } while ((uVar2 & 0x80) != 0);
    }
    uVar3 = CONCAT44(uVar1,local_14) & 0xffffff00ffffff7f;
  }
  return uVar3;
}



// FUNCTION 143c0aa50 FUN_143c0aa50 body=170 status=ok
// SIG undefined FUN_143c0aa50(void)

undefined8 * FUN_143c0aa50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b1f2a0(param_3);
  *param_1 = uVar1;
  uVar1 = FUN_143b1f220(param_3);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143c0ab00 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CollationRuleParser::Importer::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c0ab30 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CollationRuleParser::Sink::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c0ab60 FUN_143c0ab60 body=68 status=ok
// SIG undefined FUN_143c0ab60(void)

void FUN_143c0ab60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_143a8ebe0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143c0abb0 FUN_143c0abb0 body=244 status=ok
// SIG undefined FUN_143c0abb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c0abb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  char local_98;
  char local_97;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_80 = FUN_143a8d4f0(local_68,1,&DAT_145d1fcc0,0xffffffff);
  local_78 = local_80;
  local_98 = FUN_143a8dd00(param_1,local_80);
  FUN_143a8dc60(local_68);
  if (local_98 == '\0') {
    local_90 = FUN_143a8d4f0(local_40,1,&DAT_145d1fb00,0xffffffff);
    local_88 = local_90;
    local_97 = FUN_143a8dd00(param_1,local_90);
    FUN_143a8dc60(local_40);
    if (local_97 == '\0') {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0x10;
    }
  }
  else {
    uVar1 = 0x11;
  }
  return uVar1;
}



// FUNCTION 143c0acb0 FUN_143c0acb0 body=149 status=ok
// SIG undefined FUN_143c0acb0(void)

int FUN_143c0acb0(undefined8 param_1)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      iVar1 = FClearIrradianceSamplesCS::ModifyCompilationEnvironment(0x100a,param_1);
      if (iVar1 < 0) {
        iVar1 = FUN_143ab83b0(param_1,"default");
        if (iVar1 == 0) {
          iVar1 = -1;
        }
        else {
          iVar1 = -2;
        }
      }
      return iVar1;
    }
    iVar1 = FUN_143ab83b0(param_1,(&PTR_s_space_145d1f2d0)[local_18]);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return local_18 + 0x1000;
}



// FUNCTION 143c0ad50 FUN_143c0ad50 body=83 status=ok
// SIG undefined FUN_143c0ad50(void)

undefined1 FUN_143c0ad50(int param_1)

{
  undefined1 local_18;
  
  if (((param_1 < 0x21) || (0x7e < param_1)) ||
     ((((0x2f < param_1 && ((param_1 < 0x3a || (0x40 < param_1)))) &&
       ((param_1 < 0x5b || (0x60 < param_1)))) && (param_1 < 0x7b)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143c0adb0 FUN_143c0adb0 body=419 status=ok
// SIG undefined FUN_143c0adb0(void)

void FUN_143c0adb0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 0;
    do {
      while( true ) {
        iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if (iVar3 <= *(int *)(param_1 + 0x48)) {
          return;
        }
        sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x48));
        cVar1 = FUN_143b28380(sVar2);
        if (cVar1 == '\0') break;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
      if (sVar2 == 0x21) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
      else if (sVar2 == 0x23) {
        uVar4 = FUN_143c0e890(param_1,*(int *)(param_1 + 0x48) + 1);
        *(undefined4 *)(param_1 + 0x48) = uVar4;
      }
      else if (sVar2 == 0x26) {
        FUN_143c0bd50(param_1,param_3);
      }
      else if (sVar2 == 0x40) {
        FUN_143bddcd0(*(undefined8 *)(param_1 + 0x20),0x800,0x11,0,param_3);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
      else if (sVar2 == 0x5b) {
        FUN_143c0bf00(param_1,param_3);
      }
      else {
        FUN_143c0e830(param_1,"expected a reset or setting or comment",param_3);
      }
      cVar1 = FUN_143a8b0e0(*param_3);
    } while (cVar1 == '\0');
  }
  return;
}



// FUNCTION 143c0af60 FUN_143c0af60 body=207 status=ok
// SIG undefined FUN_143c0af60(void)

void FUN_143c0af60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined8 *)(param_1 + 0x28) = param_4;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      **(undefined4 **)(param_1 + 0x28) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4) = 0xffffffff;
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x28) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_143c0adb0(param_1,param_2,param_5);
  }
  return;
}



// FUNCTION 143c0b030 FUN_143c0b030 body=625 status=ok
// SIG undefined FUN_143c0b030(void)

uint FUN_143c0b030(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_24;
  uint local_20;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_143c0e930(param_1,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x48) < iVar4) {
      iVar4 = *(int *)(param_1 + 0x48);
      sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),iVar4);
      local_24 = iVar4 + 1;
      if (sVar2 == 0x2c) {
        local_20 = 2;
      }
      else if (sVar2 == 0x3b) {
        local_20 = 1;
      }
      else if (sVar2 == 0x3c) {
        iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if ((local_24 < iVar5) &&
           (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_24), sVar2 == 0x3c)) {
          local_24 = iVar4 + 2;
          iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
          if ((local_24 < iVar5) &&
             (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_24), sVar2 == 0x3c)) {
            local_24 = iVar4 + 3;
            iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
            if ((local_24 < iVar5) &&
               (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_24), sVar2 == 0x3c)) {
              local_24 = iVar4 + 4;
              local_20 = 3;
            }
            else {
              local_20 = 2;
            }
          }
          else {
            local_20 = 1;
          }
        }
        else {
          local_20 = 0;
        }
        iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if ((local_24 < iVar4) &&
           (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_24), sVar2 == 0x2a)) {
          local_24 = local_24 + 1;
          local_20 = local_20 | 0x10;
        }
      }
      else {
        if (sVar2 != 0x3d) {
          return 0xffffffff;
        }
        local_20 = 0xf;
        iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if ((local_24 < iVar5) &&
           (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_24), sVar2 == 0x2a)) {
          local_24 = iVar4 + 2;
          local_20 = 0x1f;
        }
      }
      local_20 = (local_24 - *(int *)(param_1 + 0x48)) * 0x100 | local_20;
    }
    else {
      local_20 = 0xffffffff;
    }
  }
  else {
    local_20 = 0xffffffff;
  }
  return local_20;
}



// FUNCTION 143c0b2b0 FUN_143c0b2b0 body=993 status=ok
// SIG undefined FUN_143c0b2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c0b2b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int local_res18;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  short local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_143a8ac30(local_60);
  FUN_143a8ac30(local_88);
  FUN_143a8ac30(local_38);
  local_res18 = FUN_143c0e2b0(param_1,param_3,local_88,param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    FUN_143a8dc60(local_38);
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
    return;
  }
  iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
  if (local_res18 < iVar3) {
    uVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res18);
    local_b0 = (uint)uVar2;
  }
  else {
    local_b0 = 0;
  }
  local_b8 = (short)local_b0;
  if ((short)local_b0 == 0x7c) {
    FUN_143a8dcd0(local_60,local_88);
    local_res18 = FUN_143c0e2b0(param_1,local_res18 + 1,local_88,param_4);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 != '\0') {
      FUN_143a8dc60(local_38);
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (local_res18 < iVar3) {
      uVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res18);
      local_b4 = (uint)uVar2;
    }
    else {
      local_b4 = 0;
    }
    local_b8 = (short)local_b4;
  }
  if (local_b8 == 0x2f) {
    local_res18 = FUN_143c0e2b0(param_1,local_res18 + 1,local_38,param_4);
  }
  cVar1 = FUN_143a903a0(local_60);
  if (cVar1 == '\0') {
    local_ac = FUN_143a8e3e0(local_60,0);
    local_a8 = FUN_143a8e3e0(local_88,0);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                      (*(undefined8 *)(param_1 + 8),local_ac);
    if ((cVar1 == '\0') ||
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                          (*(undefined8 *)(param_1 + 8),local_a8), cVar1 == '\0')) {
      FUN_143c0e830(param_1,"in \'prefix|str\', prefix and str must each start with an NFC boundary"
                    ,param_4);
      FUN_143a8dc60(local_38);
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
  }
  local_d0 = param_1 + 0x30;
  local_a0 = *(undefined8 *)(param_1 + 0x38);
  local_98 = **(longlong **)(param_1 + 0x38);
  local_d8 = local_38;
  local_c8 = param_4;
  (**(code **)(local_98 + 0x18))(local_a0,param_2,local_60,local_88);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    FUN_143c0e690(param_1);
  }
  *(int *)(param_1 + 0x48) = local_res18;
  FUN_143a8dc60(local_38);
  FUN_143a8dc60(local_88);
  FUN_143a8dc60(local_60);
  return;
}



// FUNCTION 143c0b6a0 FUN_143c0b6a0 body=900 status=ok
// SIG undefined FUN_143c0b6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c0b6a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188 [64];
  undefined1 local_148 [48];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_198 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_1d8 = 7;
    iVar2 = FUN_143a904f0(param_2);
    if (local_1d8 == iVar2) {
      FUN_143bddb30(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      FUN_143e1c860(local_1c8,param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        FUN_143aa03f0(local_188);
        while (iVar2 = FUN_143a904f0(param_2), local_1d8 < iVar2) {
          local_1d8 = local_1d8 + 1;
          local_1d4 = FUN_143b0bae0(param_2,0x20,local_1d8);
          if (local_1d4 < 0) {
            local_1d4 = FUN_143a904f0(param_2);
          }
          local_1a8 = FUN_143b355b0(param_2,local_148,local_1d8,local_1d4);
          local_1a0 = local_1a8;
          uVar3 = FUN_143ac35b0(local_188);
          FUN_143ad0270(uVar3,local_1a8,param_3);
          FUN_143a8dc60(local_148);
          cVar1 = FUN_143a8b0e0(*param_3);
          if (cVar1 != '\0') {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
            FUN_143e1c980(local_1c8);
            return;
          }
          uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
          local_1cc = FUN_143c0acb0(uVar3);
          if (local_1cc < 0) {
            FUN_143c0e830(param_1,"unknown script or reorder code",param_3);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
            FUN_143e1c980(local_1c8);
            return;
          }
          FUN_143b58ed0(local_1c8,local_1cc,param_3);
          cVar1 = FUN_143a8b0e0(*param_3);
          if (cVar1 != '\0') {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
            FUN_143e1c980(local_1c8);
            return;
          }
          local_1d8 = local_1d4;
        }
        local_1d0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_1c8);
        if ((local_1d0 == 1) && (iVar2 = FUN_143b59890(local_1c8,0), iVar2 == -1)) {
          FUN_143bddb30(*(undefined8 *)(param_1 + 0x20));
          TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
          FUN_143e1c980(local_1c8);
        }
        else {
          uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                  ::GetObjectForTimerManager(local_1c8);
          local_1e8 = param_3;
          FUN_143b67be0(*(undefined8 *)(param_1 + 0x18),uVar3,local_1d0,local_118);
          cVar1 = FUN_143a8b0e0(*param_3);
          if (cVar1 == '\0') {
            uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                    ::GetObjectForTimerManager(local_1c8);
            cVar1 = FUN_143bdde30(*(undefined8 *)(param_1 + 0x20),uVar3,local_1d0,local_118);
            if (cVar1 == '\0') {
              *param_3 = 7;
            }
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
            FUN_143e1c980(local_1c8);
          }
          else {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_188);
            FUN_143e1c980(local_1c8);
          }
        }
      }
      else {
        FUN_143e1c980(local_1c8);
      }
    }
  }
  return;
}



// FUNCTION 143c0ba30 FUN_143c0ba30 body=793 status=ok
// SIG undefined FUN_143c0ba30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c0ba30(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  int local_68;
  int local_64;
  ushort local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return -1;
  }
  local_68 = FUN_143c0e930(param_1,*(int *)(param_1 + 0x48) + 1);
  local_70 = 7;
  local_78 = (undefined4 *)((ulonglong)local_78._4_4_ << 0x20);
  cVar1 = FUN_143c0ab60(*(undefined8 *)(param_1 + 0x10),local_68,7,L"[before");
  if (cVar1 == '\0') {
    local_64 = local_68 + 7;
    iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (local_64 < iVar4) {
      uVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_64);
      cVar1 = FUN_143b28380(uVar2);
      if (cVar1 != '\0') {
        local_64 = FUN_143c0e930(param_1,local_64 + 1);
        local_58 = local_64 + 1;
        iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if ((((local_58 < iVar4) &&
             (local_60 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_64), 0x30 < local_60))
            && (local_60 < 0x34)) &&
           (sVar3 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_64 + 1), sVar3 == 0x5d)) {
          local_5c = local_60 - 0x31;
          local_68 = FUN_143c0e930(param_1,local_64 + 2);
          goto LAB_143c0bbe4;
        }
      }
    }
  }
  local_5c = 0xf;
LAB_143c0bbe4:
  iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
  if (local_68 < iVar4) {
    FUN_143a8ac30(local_38);
    sVar3 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_68);
    if (sVar3 == 0x5b) {
      local_68 = FUN_143c0d550(param_1,local_68,local_38,param_2);
    }
    else {
      local_68 = FUN_143c0e2b0(param_1,local_68,local_38,param_2);
    }
    local_48 = *(undefined8 *)(param_1 + 0x38);
    local_50 = **(longlong **)(param_1 + 0x38);
    local_78 = param_2;
    (**(code **)(local_50 + 0x10))(local_48,local_5c,local_38,param_1 + 0x30);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      FUN_143c0e690(param_1);
    }
    *(int *)(param_1 + 0x48) = local_68;
    local_54 = local_5c;
    FUN_143a8dc60(local_38);
  }
  else {
    FUN_143c0e830(param_1,"reset without position",param_2);
    local_54 = -1;
  }
  return local_54;
}



// FUNCTION 143c0bd50 FUN_143c0bd50 body=429 status=ok
// SIG undefined FUN_143c0bd50(void)

void FUN_143c0bd50(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar4 = FUN_143c0ba30(param_1,param_2);
  bVar1 = true;
  while( true ) {
    while( true ) {
      uVar5 = FUN_143c0b030(param_1,param_2);
      cVar2 = FUN_143a8b0e0(*param_2);
      if (cVar2 != '\0') {
        return;
      }
      if (-1 < (int)uVar5) break;
      iVar6 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
      if ((iVar6 <= *(int *)(param_1 + 0x48)) ||
         (sVar3 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x48)),
         sVar3 != 0x23)) {
        if (!bVar1) {
          return;
        }
        FUN_143c0e830(param_1,"reset not followed by a relation",param_2);
        return;
      }
      uVar7 = FUN_143c0e890(param_1,*(int *)(param_1 + 0x48) + 1);
      *(undefined4 *)(param_1 + 0x48) = uVar7;
    }
    uVar8 = uVar5 & 0xf;
    if ((int)uVar4 < 0xf) {
      if (bVar1) {
        if (uVar8 != uVar4) {
          FUN_143c0e830(param_1,"reset-before strength differs from its first relation",param_2);
          return;
        }
      }
      else if ((int)uVar8 < (int)uVar4) {
        FUN_143c0e830(param_1,"reset-before strength followed by a stronger relation",param_2);
        return;
      }
    }
    iVar6 = ((int)uVar5 >> 8) + *(int *)(param_1 + 0x48);
    if ((uVar5 & 0x10) == 0) {
      FUN_143c0b2b0(param_1,uVar8,iVar6,param_2);
    }
    else {
      FUN_143c0d850(param_1,uVar8,iVar6,param_2);
    }
    cVar2 = FUN_143a8b0e0(*param_2);
    if (cVar2 != '\0') break;
    bVar1 = false;
  }
  return;
}



// FUNCTION 143c0bf00 FUN_143c0bf00 body=5694 status=ok
// SIG undefined FUN_143c0bf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c0bf00(longlong param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_838 [32];
  int *local_818;
  int local_808;
  uint local_804;
  ushort local_800;
  char local_7fc;
  char local_7fb;
  char local_7fa;
  char local_7f9;
  char local_7f8;
  char local_7f7;
  char local_7f6;
  int local_7f4;
  char local_7f0;
  char local_7ef;
  char local_7ee;
  char local_7ed;
  char local_7ec;
  char local_7eb;
  char local_7ea;
  char local_7e9;
  char local_7e8;
  char local_7e7;
  char local_7e6;
  char local_7e5;
  char local_7e4;
  char local_7e3;
  char local_7e2;
  int local_7e0;
  int local_7dc;
  int local_7d8;
  int local_7d4;
  int local_7d0;
  undefined4 local_7cc;
  int local_7c8;
  undefined4 local_7c4;
  int local_7c0;
  int local_7bc;
  int local_7b8;
  int local_7b4;
  int local_7b0;
  undefined4 local_7ac;
  char *local_7a8;
  undefined8 local_7a0;
  longlong local_798;
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
  longlong local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  longlong local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
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
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined1 local_5f8 [96];
  undefined1 local_598 [40];
  undefined1 local_570 [40];
  undefined1 local_548 [64];
  undefined1 local_508 [40];
  undefined1 local_4e0 [40];
  undefined1 local_4b8 [40];
  undefined1 local_490 [40];
  undefined1 local_468 [40];
  undefined1 local_440 [40];
  undefined1 local_418 [40];
  undefined1 local_3f0 [40];
  undefined1 local_3c8 [40];
  undefined1 local_3a0 [40];
  undefined1 local_378 [40];
  undefined1 local_350 [40];
  undefined1 local_328 [40];
  undefined1 local_300 [40];
  undefined1 local_2d8 [40];
  undefined1 local_2b0 [40];
  undefined1 local_288 [40];
  undefined1 local_260 [40];
  undefined1 local_238 [40];
  undefined1 local_210 [40];
  undefined1 local_1e8 [40];
  undefined1 local_1c0 [40];
  char local_198 [64];
  undefined1 local_158 [160];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_600 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_838;
  local_804 = 0;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return;
  }
  FUN_143a8ac30(local_598);
  local_7b8 = *(int *)(param_1 + 0x48) + 1;
  local_808 = FUN_143c0e550(param_1,local_7b8,local_598);
  if ((local_808 <= local_7b8) || (cVar1 = FUN_143a903a0(local_598), cVar1 != '\0')) {
    FUN_143c0e830(param_1,"expected a setting/option at \'[\'",param_2);
  }
  sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_808);
  if (sVar2 == 0x5d) {
    local_808 = local_808 + 1;
    local_790 = FUN_143a8d4f0(local_350,1,L"reorder",0xffffffff);
    local_804 = local_804 | 1;
    local_618 = local_790;
    cVar1 = FUN_143b73b70(local_598,local_790);
    if ((cVar1 == '\0') ||
       ((iVar3 = FUN_143a904f0(local_598), iVar3 != 7 &&
        (sVar2 = FUN_143a8e4f0(local_598,7), sVar2 != 0x20)))) {
      local_7c4 = 0;
    }
    else {
      local_7c4 = 1;
    }
    local_7ec = (char)local_7c4;
    if ((local_804 & 1) != 0) {
      local_804 = local_804 & 0xfffffffe;
      FUN_143a8dc60(local_350);
    }
    if (local_7ec != '\0') {
      FUN_143c0b6a0(param_1,local_598,param_2);
      *(int *)(param_1 + 0x48) = local_808;
      FUN_143a8dc60(local_598);
      return;
    }
    local_780 = FUN_143a8d4f0(local_1c0,1,L"backwards 2",0xffffffff);
    local_6a8 = local_780;
    local_7fb = FUN_143a8dd00(local_598,local_780);
    FUN_143a8dc60(local_1c0);
    local_818 = param_2;
    if (local_7fb != '\0') {
      FUN_143bddcd0(*(undefined8 *)(param_1 + 0x20),0x800,0x11,0);
      *(int *)(param_1 + 0x48) = local_808;
      FUN_143a8dc60(local_598);
      return;
    }
    FUN_143a8ac30(local_570);
    local_7d0 = FUN_143b0c690(local_598,0x20);
    if (-1 < local_7d0) {
      FUN_143a90ca0(local_570,local_598,local_7d0 + 1);
      FUN_143a99400(local_598,local_7d0);
    }
    local_770 = FUN_143a8d4f0(local_1e8,1,L"strength",0xffffffff);
    local_804 = local_804 | 2;
    local_698 = local_770;
    cVar1 = FUN_143a8dd00(local_598,local_770);
    if ((cVar1 == '\0') || (iVar3 = FUN_143a904f0(local_570), iVar3 != 1)) {
      local_7cc = 0;
    }
    else {
      local_7cc = 1;
    }
    local_7f9 = (char)local_7cc;
    if ((local_804 & 2) != 0) {
      local_804 = local_804 & 0xfffffffd;
      FUN_143a8dc60(local_1e8);
    }
    if (local_7f9 == '\0') {
      local_760 = FUN_143a8d4f0(local_300,1,L"alternate",0xffffffff);
      local_688 = local_760;
      local_7f7 = FUN_143a8dd00(local_598,local_760);
      FUN_143a8dc60(local_300);
      if (local_7f7 == '\0') {
        local_730 = FUN_143a8d4f0(local_440,1,L"maxVariable",0xffffffff);
        local_658 = local_730;
        local_7f8 = FUN_143a8dd00(local_598,local_730);
        FUN_143a8dc60(local_440);
        if (local_7f8 == '\0') {
          local_6e0 = FUN_143a8d4f0(local_210,1,L"caseFirst",0xffffffff);
          local_608 = local_6e0;
          local_7e2 = FUN_143a8dd00(local_598,local_6e0);
          FUN_143a8dc60(local_210);
          if (local_7e2 == '\0') {
            local_6a0 = FUN_143a8d4f0(local_4b8,1,L"caseLevel",0xffffffff);
            local_630 = local_6a0;
            local_7eb = FUN_143a8dd00(local_598,local_6a0);
            FUN_143a8dc60(local_4b8);
            if (local_7eb == '\0') {
              local_690 = FUN_143a8d4f0(local_468,1,L"normalization",0xffffffff);
              local_650 = local_690;
              local_7e3 = FUN_143a8dd00(local_598,local_690);
              FUN_143a8dc60(local_468);
              if (local_7e3 == '\0') {
                local_680 = FUN_143a8d4f0(local_418,1,L"numericOrdering",0xffffffff);
                local_610 = local_680;
                local_7e9 = FUN_143a8dd00(local_598,local_680);
                FUN_143a8dc60(local_418);
                if (local_7e9 == '\0') {
                  local_6e8 = FUN_143a8d4f0(local_3c8,1,L"hiraganaQ",0xffffffff);
                  local_640 = local_6e8;
                  local_7ef = FUN_143a8dd00(local_598,local_6e8);
                  FUN_143a8dc60(local_3c8);
                  if (local_7ef == '\0') {
                    local_6d8 = FUN_143a8d4f0(local_378,1,L"import",0xffffffff);
                    local_6c8 = local_6d8;
                    local_7ee = FUN_143a8dd00(local_598,local_6d8);
                    FUN_143a8dc60(local_378);
                    if (local_7ee != '\0') {
                      FUN_143aa03f0(local_548);
                      FUN_143ad0270(local_548,local_570,param_2);
                      if (*param_2 == 7) {
                        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                        FUN_143a8dc60(local_570);
                        FUN_143a8dc60(local_598);
                        return;
                      }
                      uVar5 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                      local_7e0 = FUN_143abff90(uVar5,local_158,0x9d,&local_7b0);
                      cVar1 = FUN_143a8b0e0(*param_2);
                      if (((cVar1 != '\0') || (iVar3 = FUN_143ac4740(local_548), local_7b0 != iVar3)
                          ) || (0x9c < local_7e0)) {
                        *param_2 = 0;
                        FUN_143c0e830(param_1,"expected language tag in [import langTag]",param_2);
                        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                        FUN_143a8dc60(local_570);
                        FUN_143a8dc60(local_598);
                        return;
                      }
                      local_7e0 = FUN_143a96830(local_158,local_b8,0x9d,param_2);
                      cVar1 = FUN_143a8b0e0(*param_2);
                      if ((cVar1 != '\0') || (0x31 < local_7e0)) {
                        *param_2 = 0;
                        FUN_143c0e830(param_1,"expected language tag in [import langTag]",param_2);
                        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                        FUN_143a8dc60(local_570);
                        FUN_143a8dc60(local_598);
                        return;
                      }
                      local_818 = param_2;
                      local_7e0 = FUN_143a96b00(local_158,"collation",local_198,0x32);
                      cVar1 = FUN_143a8b0e0(*param_2);
                      if ((cVar1 == '\0') && (local_7e0 < 0x32)) {
                        if (*(longlong *)(param_1 + 0x40) == 0) {
                          FUN_143c0e830(param_1,"[import langTag] is not supported",param_2);
                        }
                        else {
                          if (local_7e0 < 1) {
                            local_7a8 = "standard";
                          }
                          else {
                            local_7a8 = local_198;
                          }
                          local_6b8 = *(undefined8 *)(param_1 + 0x40);
                          local_798 = **(longlong **)(param_1 + 0x40);
                          local_818 = param_2;
                          local_788 = (**(code **)(local_798 + 0x10))
                                                (local_6b8,local_b8,local_7a8,param_1 + 0x30);
                          cVar1 = FUN_143a8b0e0(*param_2);
                          if (cVar1 != '\0') {
                            if (*(longlong *)(param_1 + 0x30) == 0) {
                              *(char **)(param_1 + 0x30) = "[import langTag] failed";
                            }
                            FUN_143c0e690(param_1);
                            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                            FUN_143a8dc60(local_570);
                            FUN_143a8dc60(local_598);
                            return;
                          }
                          local_778 = *(undefined8 *)(param_1 + 0x10);
                          local_7ac = *(undefined4 *)(param_1 + 0x48);
                          FUN_143c0adb0(param_1,local_788,param_2);
                          cVar1 = FUN_143a8b0e0(*param_2);
                          if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x28) != 0)) {
                            *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4) = local_7ac;
                          }
                          *(undefined8 *)(param_1 + 0x10) = local_778;
                          *(int *)(param_1 + 0x48) = local_808;
                        }
                        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                        FUN_143a8dc60(local_570);
                        FUN_143a8dc60(local_598);
                        return;
                      }
                      *param_2 = 0;
                      FUN_143c0e830(param_1,"expected language tag in [import langTag]",param_2);
                      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_548);
                      FUN_143a8dc60(local_570);
                      FUN_143a8dc60(local_598);
                      return;
                    }
                  }
                  else {
                    local_7c0 = FUN_143c0abb0(local_570);
                    if (local_7c0 != -1) {
                      if (local_7c0 == 0x11) {
                        FUN_143c0e830(param_1,"[hiraganaQ on] is not supported",param_2);
                      }
                      *(int *)(param_1 + 0x48) = local_808;
                      FUN_143a8dc60(local_570);
                      FUN_143a8dc60(local_598);
                      return;
                    }
                    local_7c0 = 0xffffffff;
                  }
                }
                else {
                  local_7c8 = FUN_143c0abb0(local_570);
                  if (local_7c8 != -1) {
                    FUN_143bddcd0(*(undefined8 *)(param_1 + 0x20),2,local_7c8,0);
                    *(int *)(param_1 + 0x48) = local_808;
                    FUN_143a8dc60(local_570);
                    FUN_143a8dc60(local_598);
                    return;
                  }
                  local_7c8 = 0xffffffff;
                }
              }
              else {
                local_7b4 = FUN_143c0abb0(local_570);
                if (local_7b4 != -1) {
                  FUN_143bddcd0(*(undefined8 *)(param_1 + 0x20),1,local_7b4,0);
                  *(int *)(param_1 + 0x48) = local_808;
                  FUN_143a8dc60(local_570);
                  FUN_143a8dc60(local_598);
                  return;
                }
                local_7b4 = 0xffffffff;
              }
            }
            else {
              local_7bc = FUN_143c0abb0(local_570);
              if (local_7bc != -1) {
                FUN_143bddcd0(*(undefined8 *)(param_1 + 0x20),0x400,local_7bc,0);
                *(int *)(param_1 + 0x48) = local_808;
                FUN_143a8dc60(local_570);
                FUN_143a8dc60(local_598);
                return;
              }
              local_7bc = 0xffffffff;
            }
          }
          else {
            local_7dc = -1;
            local_6d0 = FUN_143a8d4f0(local_508,1,&DAT_145d1fb00,0xffffffff);
            local_670 = local_6d0;
            local_7e5 = FUN_143a8dd00(local_570,local_6d0);
            FUN_143a8dc60(local_508);
            if (local_7e5 == '\0') {
              local_6c0 = FUN_143a8d4f0(local_238,1,L"lower",0xffffffff);
              local_620 = local_6c0;
              local_7ed = FUN_143a8dd00(local_570,local_6c0);
              FUN_143a8dc60(local_238);
              if (local_7ed == '\0') {
                local_6b0 = FUN_143a8d4f0(local_4e0,1,L"upper",0xffffffff);
                local_660 = local_6b0;
                local_7e7 = FUN_143a8dd00(local_570,local_6b0);
                FUN_143a8dc60(local_4e0);
                if (local_7e7 != '\0') {
                  local_7dc = 0x19;
                }
              }
              else {
                local_7dc = 0x18;
              }
            }
            else {
              local_7dc = 0x10;
            }
            if (local_7dc != -1) {
              FUN_143bddc00(*(undefined8 *)(param_1 + 0x20),local_7dc,0,param_2);
              *(int *)(param_1 + 0x48) = local_808;
              FUN_143a8dc60(local_570);
              FUN_143a8dc60(local_598);
              return;
            }
          }
        }
        else {
          local_7f4 = -1;
          local_720 = FUN_143a8d4f0(local_2b0,1,L"space",0xffffffff);
          local_648 = local_720;
          local_7e6 = FUN_143a8dd00(local_570,local_720);
          FUN_143a8dc60(local_2b0);
          if (local_7e6 == '\0') {
            local_710 = FUN_143a8d4f0(local_3f0,1,L"punct",0xffffffff);
            local_638 = local_710;
            local_7f6 = FUN_143a8dd00(local_570,local_710);
            FUN_143a8dc60(local_3f0);
            if (local_7f6 == '\0') {
              local_700 = FUN_143a8d4f0(local_260,1,L"symbol",0xffffffff);
              local_628 = local_700;
              local_7e4 = FUN_143a8dd00(local_570,local_700);
              FUN_143a8dc60(local_260);
              if (local_7e4 == '\0') {
                local_7a0 = FUN_143a8d4f0(local_3a0,1,L"currency",0xffffffff);
                local_6f0 = local_7a0;
                local_7f0 = FUN_143a8dd00(local_570,local_7a0);
                FUN_143a8dc60(local_3a0);
                if (local_7f0 != '\0') {
                  local_7f4 = 3;
                }
              }
              else {
                local_7f4 = 2;
              }
            }
            else {
              local_7f4 = 1;
            }
          }
          else {
            local_7f4 = 0;
          }
          if (local_7f4 != -1) {
            FUN_143bddd90(*(undefined8 *)(param_1 + 0x20),local_7f4,0,param_2);
            uVar4 = FUN_143b67b70(*(undefined8 *)(param_1 + 0x18),local_7f4 + 0x1000);
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14) = uVar4;
            *(int *)(param_1 + 0x48) = local_808;
            FUN_143a8dc60(local_570);
            FUN_143a8dc60(local_598);
            return;
          }
        }
      }
      else {
        local_7d4 = -1;
        local_750 = FUN_143a8d4f0(local_490,1,L"non-ignorable",0xffffffff);
        local_678 = local_750;
        local_7fa = FUN_143a8dd00(local_570,local_750);
        FUN_143a8dc60(local_490);
        if (local_7fa == '\0') {
          local_740 = FUN_143a8d4f0(local_288,1,L"shifted",0xffffffff);
          local_668 = local_740;
          local_7e8 = FUN_143a8dd00(local_570,local_740);
          FUN_143a8dc60(local_288);
          if (local_7e8 != '\0') {
            local_7d4 = 0x14;
          }
        }
        else {
          local_7d4 = 0x15;
        }
        if (local_7d4 != -1) {
          FUN_143bddb50(*(undefined8 *)(param_1 + 0x20),local_7d4,0,param_2);
          *(int *)(param_1 + 0x48) = local_808;
          FUN_143a8dc60(local_570);
          FUN_143a8dc60(local_598);
          return;
        }
      }
    }
    else {
      local_7d8 = -1;
      local_800 = FUN_143a8e4f0(local_570,0);
      if ((local_800 < 0x31) || (0x34 < local_800)) {
        if (local_800 == 0x49) {
          local_7d8 = 0xf;
        }
      }
      else {
        local_7d8 = local_800 - 0x31;
      }
      if (local_7d8 != -1) {
        FUN_143bddf70(*(undefined8 *)(param_1 + 0x20),local_7d8,0,param_2);
        *(int *)(param_1 + 0x48) = local_808;
        FUN_143a8dc60(local_570);
        FUN_143a8dc60(local_598);
        return;
      }
    }
    FUN_143a8dc60(local_570);
  }
  else {
    sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_808);
    if (sVar2 == 0x5b) {
      FUN_143b11ea0(local_5f8);
      local_808 = FUN_143c0e340(param_1,local_808,local_5f8,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 != '\0') {
        FUN_143b11ff0(local_5f8);
        FUN_143a8dc60(local_598);
        return;
      }
      local_768 = FUN_143a8d4f0(local_328,1,L"optimize",0xffffffff);
      local_758 = local_768;
      local_7fc = FUN_143a8dd00(local_598,local_768);
      FUN_143a8dc60(local_328);
      if (local_7fc != '\0') {
        local_748 = *(undefined8 *)(param_1 + 0x38);
        local_738 = **(longlong **)(param_1 + 0x38);
        (**(code **)(local_738 + 0x28))(local_748,local_5f8,param_1 + 0x30,param_2);
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') {
          FUN_143c0e690(param_1);
        }
        *(int *)(param_1 + 0x48) = local_808;
        FUN_143b11ff0(local_5f8);
        FUN_143a8dc60(local_598);
        return;
      }
      local_728 = FUN_143a8d4f0(local_2d8,1,L"suppressContractions",0xffffffff);
      local_718 = local_728;
      local_7ea = FUN_143a8dd00(local_598,local_728);
      FUN_143a8dc60(local_2d8);
      if (local_7ea != '\0') {
        local_708 = *(undefined8 *)(param_1 + 0x38);
        local_6f8 = **(longlong **)(param_1 + 0x38);
        (**(code **)(local_6f8 + 0x20))(local_708,local_5f8,param_1 + 0x30,param_2);
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') {
          FUN_143c0e690(param_1);
        }
        *(int *)(param_1 + 0x48) = local_808;
        FUN_143b11ff0(local_5f8);
        FUN_143a8dc60(local_598);
        return;
      }
      FUN_143b11ff0(local_5f8);
    }
  }
  FUN_143c0e830(param_1,"not a valid setting/option",param_2);
  FUN_143a8dc60(local_598);
  return;
}



// FUNCTION 143c0d550 FUN_143c0d550 body=763 status=ok
// SIG undefined FUN_143c0d550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c0d550(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  char local_108;
  char local_107;
  char local_106;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
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
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_143a8ac30(local_b0);
  local_104 = FUN_143c0e550(param_1,param_2 + 1,local_b0);
  if (param_2 < local_104) {
    sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_104);
    if ((sVar2 == 0x5d) && (cVar1 = FUN_143a903a0(local_b0), cVar1 == '\0')) {
      local_104 = local_104 + 1;
      for (local_100 = 0; local_100 < 0xe; local_100 = local_100 + 1) {
        local_e8 = FUN_143a8d9f0(local_88,(&PTR_s_first_tertiary_ignorable_145d1f310)[local_100],
                                 0xffffffff,0);
        local_c0 = local_e8;
        local_106 = FUN_143a8dd00(local_b0,local_e8);
        FUN_143a8dc60(local_88);
        if (local_106 != '\0') {
          local_f8 = local_100 + 0x2800;
          uVar3 = FUN_143b913f0(param_3,0xfffe);
          FUN_143acc590(uVar3,local_f8 & 0xffff);
          local_f0 = local_104;
          FUN_143a8dc60(local_b0);
          return local_f0;
        }
      }
      local_d8 = FUN_143a8d4f0(local_60,1,&DAT_145d1f988,0xffffffff);
      local_c8 = local_d8;
      local_108 = FUN_143a8dd00(local_b0,local_d8);
      FUN_143a8dc60(local_60);
      if (local_108 != '\0') {
        uVar3 = FUN_143b913f0(param_3,0xfffe);
        FUN_143acc590(uVar3,0x2809);
        local_fc = local_104;
        FUN_143a8dc60(local_b0);
        return local_fc;
      }
      local_e0 = FUN_143a8d4f0(local_38,1,L"variable top",0xffffffff);
      local_d0 = local_e0;
      local_107 = FUN_143a8dd00(local_b0,local_e0);
      FUN_143a8dc60(local_38);
      if (local_107 != '\0') {
        uVar3 = FUN_143b913f0(param_3,0xfffe);
        FUN_143acc590(uVar3,0x2807);
        local_f4 = local_104;
        FUN_143a8dc60(local_b0);
        return local_f4;
      }
    }
  }
  FUN_143c0e830(param_1,"not a valid special reset position",param_4);
  local_ec = param_2;
  FUN_143a8dc60(local_b0);
  return local_ec;
}



// FUNCTION 143c0d850 FUN_143c0d850 body=1816 status=ok
// SIG undefined FUN_143c0d850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c0d850(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int local_res18;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  uint local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_b8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_143a8ac30(local_88);
  FUN_143a8ac30(local_b0);
  uVar3 = FUN_143c0e930(param_1,param_3);
  local_res18 = FUN_143c0df70(param_1,uVar3,local_b0,param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a903a0(local_b0);
    if (cVar1 == '\0') {
      local_f8 = 0xffffffff;
      local_f4 = 0;
      while( true ) {
        while (iVar4 = FUN_143a904f0(local_b0), iVar4 <= local_f4) {
          iVar4 = FUN_143a904f0(param_1[2]);
          if ((iVar4 <= local_res18) ||
             (sVar2 = FUN_143a8e4f0(param_1[2],local_res18), sVar2 != 0x2d)) {
            uVar3 = FUN_143c0e930(param_1,local_res18);
            *(undefined4 *)(param_1 + 9) = uVar3;
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_88);
            return;
          }
          if ((int)local_f8 < 0) {
            FUN_143c0e830(param_1,"range without start in starred-relation string",param_4);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_88);
            return;
          }
          local_res18 = FUN_143c0df70(param_1,local_res18 + 1,local_b0,param_4);
          cVar1 = FUN_143a8b0e0(*param_4);
          if (cVar1 != '\0') {
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_88);
            return;
          }
          cVar1 = FUN_143a903a0(local_b0);
          if (cVar1 != '\0') {
            FUN_143c0e830(param_1,"range without end in starred-relation string",param_4);
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_88);
            return;
          }
          local_ec = FUN_143a8e3e0(local_b0,0);
          if ((int)local_ec < (int)local_f8) {
            FUN_143c0e830(param_1,"range start greater than end in starred-relation string",param_4)
            ;
            FUN_143a8dc60(local_b0);
            FUN_143a8dc60(local_88);
            return;
          }
          FUN_143a8ac30(local_60);
          while (local_f8 = local_f8 + 1, (int)local_f8 <= (int)local_ec) {
            cVar1 = (**(code **)(*(longlong *)*param_1 + 0x70))(*param_1,local_f8);
            if (cVar1 == '\0') {
              FUN_143c0e830(param_1,"starred-relation string range is not all NFD-inert",param_4);
              FUN_143a8dc60(local_60);
              FUN_143a8dc60(local_b0);
              FUN_143a8dc60(local_88);
              return;
            }
            if ((local_f8 & 0xfffff800) == 0xd800) {
              FUN_143c0e830(param_1,"starred-relation string range contains a surrogate",param_4);
              FUN_143a8dc60(local_60);
              FUN_143a8dc60(local_b0);
              FUN_143a8dc60(local_88);
              return;
            }
            if ((0xfffc < (int)local_f8) && ((int)local_f8 < 0x10000)) {
              FUN_143c0e830(param_1,
                            "starred-relation string range contains U+FFFD, U+FFFE or U+FFFF",
                            param_4);
              FUN_143a8dc60(local_60);
              FUN_143a8dc60(local_b0);
              FUN_143a8dc60(local_88);
              return;
            }
            FUN_143b10c50(local_60,local_f8);
            local_110 = param_1 + 6;
            local_d0 = param_1[7];
            local_c0 = *(longlong *)param_1[7];
            local_118 = local_88;
            local_108 = param_4;
            (**(code **)(local_c0 + 0x18))(local_d0,param_2,local_88,local_60);
            cVar1 = FUN_143a8b0e0(*param_4);
            if (cVar1 != '\0') {
              FUN_143c0e690(param_1);
              FUN_143a8dc60(local_60);
              FUN_143a8dc60(local_b0);
              FUN_143a8dc60(local_88);
              return;
            }
          }
          local_f8 = 0xffffffff;
          if (local_ec < 0x10000) {
            local_e4 = 1;
          }
          else {
            local_e4 = 2;
          }
          local_f4 = local_e4;
          FUN_143a8dc60(local_60);
        }
        local_f0 = FUN_143a8e3e0(local_b0,local_f4);
        cVar1 = (**(code **)(*(longlong *)*param_1 + 0x70))(*param_1,local_f0);
        if (cVar1 == '\0') {
          FUN_143c0e830(param_1,"starred-relation string is not all NFD-inert",param_4);
          FUN_143a8dc60(local_b0);
          FUN_143a8dc60(local_88);
          return;
        }
        local_e0 = param_1 + 6;
        local_d8 = FUN_143a8d5f0(local_38,local_f0);
        local_110 = local_e0;
        local_118 = local_88;
        local_108 = param_4;
        local_c8 = local_d8;
        (**(code **)(*(longlong *)param_1[7] + 0x18))(param_1[7],param_2,local_88,local_d8);
        FUN_143a8dc60(local_38);
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 != '\0') break;
        if (local_f0 < 0x10000) {
          local_e8 = 1;
        }
        else {
          local_e8 = 2;
        }
        local_f4 = local_f4 + local_e8;
        local_f8 = local_f0;
      }
      FUN_143c0e690(param_1);
      FUN_143a8dc60(local_b0);
      FUN_143a8dc60(local_88);
    }
    else {
      FUN_143c0e830(param_1,"missing starred-relation string",param_4);
      FUN_143a8dc60(local_b0);
      FUN_143a8dc60(local_88);
    }
  }
  else {
    FUN_143a8dc60(local_b0);
    FUN_143a8dc60(local_88);
  }
  return;
}



// FUNCTION 143c0df70 FUN_143c0df70 body=822 status=ok
// SIG undefined FUN_143c0df70(void)

int FUN_143c0df70(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_res10;
  int local_20;
  int local_1c;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  local_res10 = param_2;
  if (cVar1 == '\0') {
    FUN_143a90910(param_3);
    iVar4 = param_2;
LAB_143c0dfad:
    local_res10 = iVar4;
    iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (local_res10 < iVar4) {
      sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res10);
      iVar4 = local_res10 + 1;
      cVar1 = FUN_143c0ad50(sVar2);
      if (cVar1 == '\0') {
        cVar1 = FUN_143b28380(sVar2);
        if (cVar1 != '\0') goto LAB_143c0e1e4;
        FUN_143acc590(param_3,sVar2);
      }
      else if (sVar2 == 0x27) {
        iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if ((iVar5 <= iVar4) ||
           (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),iVar4), sVar2 != 0x27)) {
          do {
            local_res10 = iVar4;
            iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
            if (local_res10 == iVar4) {
              FUN_143c0e830(param_1,"quoted literal text missing terminating apostrophe",param_4);
              return local_res10;
            }
            sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res10);
            iVar4 = local_res10 + 1;
            if (sVar2 == 0x27) {
              iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
              if ((iVar5 <= iVar4) ||
                 (sVar3 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),iVar4), sVar3 != 0x27))
              goto LAB_143c0dfad;
              iVar4 = local_res10 + 2;
            }
            local_res10 = iVar4;
            FUN_143acc590(param_3,sVar2);
            iVar4 = local_res10;
          } while( true );
        }
        FUN_143acc590(param_3,0x27);
        iVar4 = local_res10 + 2;
      }
      else {
        if (sVar2 != 0x5c) goto LAB_143c0e1e4;
        iVar5 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
        if (iVar4 == iVar5) {
          FUN_143c0e830(param_1,"backslash escape at the end of the rule string",param_4);
          return iVar4;
        }
        uVar6 = FUN_143a8e3e0(*(undefined8 *)(param_1 + 0x10),iVar4);
        FUN_143a8e0c0(param_3,uVar6);
        if (uVar6 < 0x10000) {
          local_1c = 1;
        }
        else {
          local_1c = 2;
        }
        iVar4 = iVar4 + local_1c;
      }
      goto LAB_143c0dfad;
    }
LAB_143c0e1e4:
    for (local_20 = 0; iVar4 = FUN_143a904f0(param_3), local_20 < iVar4;
        local_20 = local_20 + local_18) {
      uVar6 = FUN_143a8e3e0(param_3,local_20);
      if ((uVar6 & 0xfffff800) == 0xd800) {
        FUN_143c0e830(param_1,"string contains an unpaired surrogate",param_4);
        return local_res10;
      }
      if ((0xfffc < (int)uVar6) && ((int)uVar6 < 0x10000)) {
        FUN_143c0e830(param_1,"string contains U+FFFD, U+FFFE or U+FFFF",param_4);
        return local_res10;
      }
      if (uVar6 < 0x10000) {
        local_18 = 1;
      }
      else {
        local_18 = 2;
      }
    }
  }
  return local_res10;
}



// FUNCTION 143c0e2b0 FUN_143c0e2b0 body=140 status=ok
// SIG undefined FUN_143c0e2b0(void)

void FUN_143c0e2b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_143c0e930(param_1,param_2);
  uVar2 = FUN_143c0df70(param_1,uVar2,param_3,param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a903a0(param_3);
    if (cVar1 != '\0') {
      FUN_143c0e830(param_1,"missing relation string",param_4);
    }
  }
  FUN_143c0e930(param_1,uVar2);
  return;
}



// FUNCTION 143c0e340 FUN_143c0e340 body=528 status=ok
// SIG undefined FUN_143c0e340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c0e340(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  int local_68;
  short local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_68 = param_2;
  do {
    while( true ) {
      iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
      if (local_68 == iVar3) {
        FUN_143c0e830(param_1,"unbalanced UnicodeSet pattern brackets",param_4);
        return local_68;
      }
      local_5c = local_68;
      local_64 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_68);
      local_68 = local_68 + 1;
      if (local_64 != 0x5b) break;
      local_60 = local_60 + 1;
    }
  } while ((local_64 != 0x5d) || (local_60 = local_60 + -1, local_60 != 0));
  local_58 = FUN_143b355b0(*(undefined8 *)(param_1 + 0x10),local_40,param_2,local_68);
  local_50 = local_58;
  FUN_143b18800(param_3,local_58,param_4);
  FUN_143a8dc60(local_40);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_68 = FUN_143c0e930(param_1,local_68);
    iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if ((local_68 == iVar3) ||
       (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_68), sVar2 != 0x5d)) {
      FUN_143c0e830(param_1,"missing option-terminating \']\' after UnicodeSet pattern",param_4);
    }
    else {
      local_68 = local_68 + 1;
    }
  }
  else {
    *param_4 = 0;
    FUN_143c0e830(param_1,"not a valid UnicodeSet pattern",param_4);
  }
  return local_68;
}



// FUNCTION 143c0e550 FUN_143c0e550 body=314 status=ok
// SIG undefined FUN_143c0e550(void)

int FUN_143c0e550(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int local_res10;
  
  FUN_143a90910(param_3);
  local_res10 = FUN_143c0e930(param_1,param_2);
  while( true ) {
    iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 <= local_res10) {
      return 0;
    }
    sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res10);
    cVar1 = FUN_143c0ad50(sVar2);
    if (((cVar1 != '\0') && (sVar2 != 0x2d)) && (sVar2 != 0x5f)) break;
    cVar1 = FUN_143b28380(sVar2);
    if (cVar1 == '\0') {
      FUN_143acc590(param_3,sVar2);
      local_res10 = local_res10 + 1;
    }
    else {
      FUN_143a8e0c0(param_3,0x20);
      local_res10 = FUN_143c0e930(param_1,local_res10 + 1);
    }
  }
  cVar1 = FUN_143a903a0(param_3);
  if (cVar1 != '\0') {
    return local_res10;
  }
  cVar1 = FUN_143bea7b0(param_3,&DAT_145d1fd48,1);
  if (cVar1 == '\0') {
    return local_res10;
  }
  iVar3 = FUN_143a904f0(param_3);
  FUN_143a99400(param_3,iVar3 + -1);
  return local_res10;
}



// FUNCTION 143c0e690 FUN_143c0e690 body=404 status=ok
// SIG undefined FUN_143c0e690(void)

void FUN_143c0e690(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x48);
    **(undefined4 **)(param_1 + 0x28) = 0;
    iVar2 = *(int *)(param_1 + 0x48);
    local_14 = iVar2 + -0xf;
    if (local_14 < 0) {
      local_14 = 0;
    }
    else if ((0 < local_14) &&
            (uVar1 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_14),
            (uVar1 & 0xfc00) == 0xdc00)) {
      local_14 = iVar2 + -0xe;
    }
    iVar2 = *(int *)(param_1 + 0x48) - local_14;
    FUN_143b06f40(*(undefined8 *)(param_1 + 0x10),local_14,iVar2,*(longlong *)(param_1 + 0x28) + 8,0
                 );
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iVar2 * 2) = 0;
    local_18 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    local_18 = local_18 - *(int *)(param_1 + 0x48);
    if (0xf < local_18) {
      local_18 = 0xf;
      uVar1 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x48) + 0xe);
      if ((uVar1 & 0xfc00) == 0xd800) {
        local_18 = 0xe;
      }
    }
    FUN_143b06f40(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x48),local_18,
                  *(longlong *)(param_1 + 0x28) + 0x28,0);
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x28 + (longlong)local_18 * 2) = 0;
  }
  return;
}



// FUNCTION 143c0e830 FUN_143c0e830 body=92 status=ok
// SIG undefined FUN_143c0e830(void)

void FUN_143c0e830(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    *param_3 = 3;
    *(undefined8 *)(param_1 + 0x30) = param_2;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_143c0e690(param_1);
    }
  }
  return;
}



// FUNCTION 143c0e890 FUN_143c0e890 body=156 status=ok
// SIG undefined FUN_143c0e890(void)

int FUN_143c0e890(longlong param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    iVar2 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 <= local_res10) {
      return local_res10;
    }
    sVar1 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res10);
    local_res10 = local_res10 + 1;
    if (sVar1 == 10) {
      return local_res10;
    }
    if (sVar1 == 0xc) {
      return local_res10;
    }
    if (sVar1 == 0xd) break;
    if (sVar1 == 0x85) {
      return local_res10;
    }
    if (sVar1 == 0x2028) {
      return local_res10;
    }
    if (sVar1 == 0x2029) {
      return local_res10;
    }
  }
  return local_res10;
}



// FUNCTION 143c0e930 FUN_143c0e930 body=89 status=ok
// SIG undefined FUN_143c0e930(void)

int FUN_143c0e930(longlong param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_res10;
  
  local_res10 = param_2;
  while( true ) {
    iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 <= local_res10) {
      return local_res10;
    }
    uVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x10),local_res10);
    cVar1 = FUN_143b28380(uVar2);
    if (cVar1 == '\0') break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}



// FUNCTION 143c0e990 FUN_143c0e990 body=351 status=ok
// SIG undefined FUN_143c0e990(void)

undefined8 * FUN_143c0e990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationDataBuilder::vftable;
  uVar1 = FUN_143b1f1c0(param_2);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_143e1c860(param_1 + 5,param_2);
  FUN_143e1ce70(param_1 + 9,param_2);
  FUN_143b08f70(param_1 + 0xd,param_2);
  FUN_143b11ea0(param_1 + 0x12);
  FUN_143a8ac30(param_1 + 0x1d);
  FUN_143b11ea0(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x169) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_143b58ed0(param_1 + 5,0,param_2);
  FUN_143ab38b0(param_1 + 0xd,FID_conflict__InternalDeleteHelper<Concurrency::details::WorkQueue>);
  return param_1;
}



// FUNCTION 143c0eaf0 FUN_143c0eaf0 body=95 status=ok
// SIG undefined FUN_143c0eaf0(void)

longlong FUN_143c0eaf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143a8d3a0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return param_1;
}



// FUNCTION 143c0eb50 FUN_143c0eb50 body=85 status=ok
// SIG undefined FUN_143c0eb50(void)

undefined8 *
FUN_143c0eb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 0x22) = *param_5;
  return param_1;
}



// FUNCTION 143c0ebb0 FUN_143c0ebb0 body=280 status=ok
// SIG undefined FUN_143c0ebb0(void)

undefined8 * FUN_143c0ebb0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_18;
  
  FUN_143b60650(param_1,param_1 + 0x32,0);
  *param_1 = icu_53::DataBuilderCollationIterator::vftable;
  param_1[0x31] = param_2;
  FUN_143bd0b00(param_1 + 0x32,*(undefined8 *)(param_2 + 8));
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x36] = *(undefined8 *)(param_1[0x31] + 0x10);
  for (local_18 = 0; local_18 < 0x43; local_18 = local_18 + 1) {
    uVar1 = FUN_143c13160(local_18);
    uVar2 = FUN_143c13200(7,uVar1);
    *(uint *)((longlong)param_1 + (longlong)local_18 * 4 + 0x218) = uVar2 | 0x100;
  }
  param_1[0x37] = param_1 + 0x43;
  return param_1;
}



// FUNCTION 143c0ecd0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CollationDataBuilder::CEModifier::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c0ed00 FUN_143c0ed00 body=322 status=ok
// SIG undefined FUN_143c0ed00(void)

void FUN_143c0ed00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::CollationDataBuilder::vftable;
  FUN_143ac2a70(param_1[4]);
  puVar1 = (undefined8 *)param_1[0x2e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x2f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b11ff0(param_1 + 0x22);
  FUN_143a8dc60(param_1 + 0x1d);
  FUN_143b11ff0(param_1 + 0x12);
  FUN_143b091e0(param_1 + 0xd);
  FUN_143e1cf00(param_1 + 9);
  FUN_143e1c980(param_1 + 5);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c0ee50 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> body=27 status=ok
// SIG undefined ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(void)

void TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
     ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(undefined8 param_1)

{
  FUN_143a8dc60(param_1);
  return;
}


