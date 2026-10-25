// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c0ee70 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::DataBuilderCollationIterator::vftable;
  FUN_143bd6570(param_1);
  return;
}



// FUNCTION 143c0eea0 FUN_143c0eea0 body=54 status=ok
// SIG undefined FUN_143c0eea0(void)

undefined8 FUN_143c0eea0(undefined8 param_1,uint param_2)

{
  FUN_143c0ed00(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c0eee0 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
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
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c0ef20 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c0ef60 FUN_143c0ef60 body=139 status=ok
// SIG undefined FUN_143c0ef60(void)

int FUN_143c0ef60(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x28);
  local_18 = 0;
  while( true ) {
    if (iVar1 <= local_18) {
      FUN_143b58ed0(param_1 + 0x28,param_2,param_3);
      return iVar1;
    }
    iVar2 = FUN_143b59890(param_1 + 0x28,local_18);
    if (param_2 == iVar2) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}



// FUNCTION 143c0eff0 FUN_143c0eff0 body=1439 status=ok
// SIG undefined FUN_143c0eff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c0eff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  char local_e8;
  char local_e7;
  char local_e6;
  uint local_e4;
  int local_e0;
  int local_dc;
  longlong local_d8;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a903a0(param_3);
    if (cVar1 == '\0') {
      if ((*(longlong *)(param_1 + 0x20) == 0) ||
         (cVar1 = FUN_143ac2e70(*(undefined8 *)(param_1 + 0x20)), cVar1 != '\0')) {
        *param_5 = 0x1b;
      }
      else {
        local_e4 = FUN_143a8e3e0(param_3,0);
        if (local_e4 < 0x10000) {
          local_c8 = 1;
        }
        else {
          local_c8 = 2;
        }
        local_cc = local_c8;
        local_e0 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),local_e4);
        cVar1 = FUN_143a903a0(param_2);
        if ((cVar1 == '\0') || (iVar3 = FUN_143a904f0(param_3), local_cc < iVar3)) {
          local_e7 = '\x01';
        }
        else {
          local_e7 = '\0';
        }
        local_e8 = local_e7;
        if (local_e0 == 0xc0) {
          uVar4 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),local_e4);
          local_c0 = FUN_143b679b0(*(undefined8 *)(param_1 + 0x10),uVar4);
          if ((local_e8 != '\0') || (cVar1 = FUN_143c10920(local_c0), cVar1 != '\0')) {
            local_f8 = param_5;
            local_e0 = FUN_143c11510(param_1,local_e4,local_c0,1);
            FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),local_e4,local_e0,param_5);
            cVar1 = FUN_143a8b0e0(*param_5);
            if (cVar1 != '\0') {
              return;
            }
          }
        }
        if (local_e8 == '\0') {
          cVar1 = FUN_143c13110(local_e0);
          if (cVar1 == '\0') {
            FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),local_e4,param_4,param_5);
          }
          else {
            lVar5 = FUN_143c12c50(param_1,local_e0);
            *(undefined4 *)(lVar5 + 0x30) = 1;
            *(undefined4 *)(lVar5 + 0x28) = param_4;
          }
        }
        else {
          cVar1 = FUN_143c13110(local_e0);
          if (cVar1 == '\0') {
            local_a0 = FUN_143a8dbd0(local_38,0);
            local_98 = local_a0;
            local_c4 = FUN_143c0f630(param_1,local_a0,local_e0,param_5);
            FUN_143a8dc60(local_38);
            cVar1 = FUN_143a8b0e0(*param_5);
            if (cVar1 != '\0') {
              return;
            }
            local_ac = FUN_143c131e0(local_c4);
            FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),local_e4,local_ac,param_5);
            FUN_143b13590(param_1 + 0x90,local_e4);
            local_d8 = FUN_143c12c20(param_1,local_c4);
          }
          else {
            local_d8 = FUN_143c12c50(param_1,local_e0);
            *(undefined4 *)(local_d8 + 0x30) = 1;
          }
          FUN_143a8d400(local_60,param_3,local_cc);
          uVar2 = FUN_143a904f0(param_2);
          FUN_143a8dbd0(local_88,uVar2);
          uVar6 = FUN_143a8e070(local_88,param_2);
          FUN_143a8e070(uVar6,local_60);
          FUN_143b13960(param_1 + 0x110,local_60);
          while (local_dc = *(int *)(local_d8 + 0x34), -1 < local_dc) {
            local_b8 = FUN_143c12c20(param_1,local_dc);
            local_e6 = FUN_143b0fd00(local_88,local_b8);
            if (local_e6 < '\0') {
              local_d0 = FUN_143c0f630(param_1,local_88,param_4,param_5);
              cVar1 = FUN_143a8b0e0(*param_5);
              if (cVar1 != '\0') {
                FUN_143a8dc60(local_88);
                FUN_143a8dc60(local_60);
                return;
              }
              *(undefined4 *)(local_d8 + 0x34) = local_d0;
              lVar5 = FUN_143c12c20(param_1,local_d0);
              *(int *)(lVar5 + 0x34) = local_dc;
              goto LAB_143c0f54f;
            }
            if (local_e6 == '\0') {
              *(undefined4 *)(local_b8 + 0x28) = param_4;
              goto LAB_143c0f54f;
            }
            local_d8 = local_b8;
          }
          local_b0 = FUN_143c0f630(param_1,local_88,param_4,param_5);
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 != '\0') {
            FUN_143a8dc60(local_88);
            FUN_143a8dc60(local_60);
            return;
          }
          *(undefined4 *)(local_d8 + 0x34) = local_b0;
LAB_143c0f54f:
          FUN_143a8dc60(local_88);
          FUN_143a8dc60(local_60);
        }
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
    }
    else {
      *param_5 = 1;
    }
  }
  return;
}



// FUNCTION 143c0f5a0 FUN_143c0f5a0 body=142 status=ok
// SIG undefined FUN_143c0f5a0(void)

int FUN_143c0f5a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int local_18;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x48);
  local_18 = 0;
  while( true ) {
    if (iVar1 <= local_18) {
      FUN_143b62060(param_1 + 0x48,param_2,param_3);
      return iVar1;
    }
    lVar2 = FUN_143bca400(param_1 + 0x48,local_18);
    if (param_2 == lVar2) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}



// FUNCTION 143c0f630 FUN_143c0f630 body=255 status=ok
// SIG undefined FUN_143c0f630(void)

int FUN_143c0f630(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x68);
    if (iVar2 < 0x80000) {
      lVar3 = FUN_143a8d310(0x38);
      if (lVar3 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_143c0eaf0(lVar3,param_2,param_3);
      }
      if (local_28 == 0) {
        *param_4 = 7;
        iVar2 = -1;
      }
      else {
        FUN_143b09430(param_1 + 0x68,local_28,param_4);
      }
    }
    else {
      *param_4 = 0xf;
      iVar2 = -1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 143c0f730 FUN_143c0f730 body=363 status=ok
// SIG undefined FUN_143c0f730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c0f730(longlong param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 local_res10;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143a8ac30(local_60);
  uVar2 = FUN_143acc590(local_60,param_2 >> 0x10);
  local_res10 = (undefined2)param_2;
  FUN_143acc590(uVar2,local_res10);
  FUN_143a8ac30(local_38);
  uVar2 = FUN_143e26350(param_3,1,local_38,param_4);
  FUN_143a8e070(local_60,uVar2);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_78 = FUN_143b0ba90(param_1 + 0xe8,local_60);
    if (local_78 < 0) {
      local_78 = FUN_143a904f0(param_1 + 0xe8);
      FUN_143a8e070(param_1 + 0xe8,local_60);
    }
    local_74 = local_78;
    FUN_143a8dc60(local_38);
    FUN_143a8dc60(local_60);
    local_70 = local_74;
  }
  else {
    local_70 = -1;
    FUN_143a8dc60(local_38);
    FUN_143a8dc60(local_60);
  }
  return local_70;
}



// FUNCTION 143c0f8a0 FUN_143c0f8a0 body=71 status=ok
// SIG undefined FUN_143c0f8a0(void)

void FUN_143c0f8a0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a90530(*(undefined8 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330),-param_2);
  *(undefined4 *)(param_1 + 0x330) = uVar1;
  return;
}



// FUNCTION 143c0f8f0 FUN_143c0f8f0 body=160 status=ok
// SIG undefined FUN_143c0f8f0(void)

void FUN_143c0f8f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  FUN_143c103e0(param_1,param_2,param_3);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x70);
  }
  FUN_143c10110(param_1,param_2,param_3);
  return;
}



// FUNCTION 143c0f990 FUN_143c0f990 body=1564 status=ok
// SIG undefined FUN_143c0f990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143c0f990(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  uint local_180;
  ushort local_17c;
  int local_178;
  uint local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  longlong local_160;
  undefined4 local_158;
  longlong local_150;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  undefined8 local_130;
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_143e25a80(local_78,param_3);
  FUN_143e25a80(local_d8,param_3);
  local_188 = param_2;
  do {
    local_178 = FUN_143c13490(local_188);
    FUN_143a8d470(local_128,local_188,0,local_178 + 1);
    local_160 = local_188;
    do {
      local_150 = local_188;
      if (*(int *)(local_188 + 0x34) < 0) break;
      local_188 = FUN_143c12c20(param_1,*(undefined4 *)(local_188 + 0x34));
      cVar1 = FUN_143b73b70(local_188,local_128);
    } while (cVar1 != '\0');
    local_170 = local_178 + 1;
    iVar2 = FUN_143a904f0(local_150);
    if (iVar2 == local_170) {
      local_174 = *(uint *)(local_150 + 0x28);
      local_188 = local_150;
    }
    else {
      FUN_143c10970(local_d8);
      local_180 = 0;
      iVar2 = FUN_143a904f0(local_160);
      if (iVar2 == local_170) {
        local_158 = *(undefined4 *)(local_160 + 0x28);
        local_188 = FUN_143c12c20(param_1,*(undefined4 *)(local_160 + 0x34));
      }
      else {
        local_180 = local_180 | 0x100;
        local_188 = param_2;
        while (local_16c = FUN_143c13490(local_188), local_16c != local_178) {
          if ((*(int *)(local_188 + 0x2c) != 1) &&
             ((local_16c == 0 ||
              (cVar1 = FUN_143c12520(local_128,local_188,1,local_16c), cVar1 != '\0')))) {
            local_158 = *(undefined4 *)(local_188 + 0x2c);
          }
          local_188 = FUN_143c12c20(param_1,*(undefined4 *)(local_188 + 0x34));
        }
        local_188 = local_160;
      }
      local_180 = local_180 | 0x200;
      while( true ) {
        FUN_143a8d400(local_100,local_188,local_170);
        uVar3 = FUN_143a8e3e0(local_100,0);
        local_17c = FUN_143b1f030(*(undefined8 *)(param_1 + 8),uVar3);
        if (local_17c < 0x100) {
          local_180 = local_180 & 0xfffffdff;
        }
        iVar2 = FUN_143a904f0(local_100);
        uVar3 = FUN_143a8e3e0(local_100,iVar2 + -1);
        local_17c = FUN_143b1f030(*(undefined8 *)(param_1 + 8),uVar3);
        if (0xff < local_17c) {
          local_180 = local_180 | 0x400;
        }
        FUN_143e25e10(local_d8,local_100,*(undefined4 *)(local_188 + 0x28),param_3);
        if (local_188 == local_150) break;
        local_188 = FUN_143c12c20(param_1,*(undefined4 *)(local_188 + 0x34));
        FUN_143a8dc60(local_100);
      }
      FUN_143a8dc60(local_100);
      local_164 = FUN_143c0f730(param_1,local_158,local_d8,param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        local_13c = 0;
        FUN_143a8dc60(local_128);
        FUN_143e25bd0(local_d8);
        FUN_143e25bd0(local_78);
        return local_13c;
      }
      if (0x7ffff < local_164) {
        *param_3 = 0xf;
        local_140 = 0;
        FUN_143a8dc60(local_128);
        FUN_143e25bd0(local_d8);
        FUN_143e25bd0(local_78);
        return local_140;
      }
      local_174 = FUN_143c13200(9,local_164);
      local_174 = local_174 | local_180;
    }
    *(uint *)(local_160 + 0x2c) = local_174;
    if (local_178 == 0) {
      if (*(int *)(local_188 + 0x34) < 0) {
        local_148 = local_174;
        FUN_143a8dc60(local_128);
        FUN_143e25bd0(local_d8);
        FUN_143e25bd0(local_78);
        return local_148;
      }
    }
    else {
      FUN_143ace4e0(local_128,0,1);
      FUN_143bdd3c0(local_128);
      FUN_143e25e10(local_78,local_128,local_174,param_3);
      if (*(int *)(local_188 + 0x34) < 0) {
        FUN_143a8dc60(local_128);
        local_168 = FUN_143c0f730(param_1,*(undefined4 *)(param_2 + 0x2c),local_78,param_3);
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 != '\0') {
          local_144 = 0;
          FUN_143e25bd0(local_d8);
          FUN_143e25bd0(local_78);
          return local_144;
        }
        if (0x7ffff < local_168) {
          *param_3 = 0xf;
          local_134 = 0;
          FUN_143e25bd0(local_d8);
          FUN_143e25bd0(local_78);
          return local_134;
        }
        local_138 = FUN_143c13200(8,local_168);
        FUN_143e25bd0(local_d8);
        FUN_143e25bd0(local_78);
        return local_138;
      }
    }
    FUN_143a8dc60(local_128);
    local_188 = FUN_143c12c20(param_1,*(undefined4 *)(local_188 + 0x34));
  } while( true );
}



// FUNCTION 143c0ffb0 FUN_143c0ffb0 body=340 status=ok
// SIG undefined FUN_143c0ffb0(void)

void FUN_143c0ffb0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [72];
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143a90910(param_1 + 0xe8);
    FUN_143e1d760(local_48,param_1 + 0x90);
    while ((cVar1 = FUN_143a8b110(*param_2), cVar1 != '\0' &&
           (cVar1 = FUN_143e1d9e0(local_48), cVar1 != '\0'))) {
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_48);
      uVar3 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),uVar2);
      cVar1 = FUN_143c13110(uVar3);
      if (cVar1 == '\0') {
        *param_2 = 5;
        FUN_143e1d7c0(local_48);
        return;
      }
      uVar4 = FUN_143c12c50(param_1,uVar3);
      uVar3 = FUN_143c0f990(param_1,uVar4,param_2);
      FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),uVar2,uVar3,param_2);
    }
    FUN_143e1d7c0(local_48);
  }
  return;
}



// FUNCTION 143c10110 FUN_143c10110 body=720 status=ok
// SIG undefined FUN_143c10110(void)

void FUN_143c10110(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *local_80;
  undefined8 local_58;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x169) != '\0')) {
    puVar1 = *(undefined8 **)(param_1 + 0x170);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar5 = FUN_143a8d310(0x1ca8);
    if (lVar5 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = FUN_143c1a3a0(lVar5,param_3);
    }
    *(undefined8 *)(param_1 + 0x170) = local_58;
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_3 = 7;
    }
    else {
      cVar2 = FUN_143c1b2b0(*(undefined8 *)(param_1 + 0x170),param_2,param_3);
      if (cVar2 == '\0') {
        puVar1 = *(undefined8 **)(param_1 + 0x170);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(undefined8 *)(param_1 + 0x170) = 0;
      }
      else {
        local_80 = (void *)FUN_143c12f60(*(undefined8 *)(param_1 + 0x170));
        iVar3 = FUN_143c131b0(*(undefined8 *)(param_1 + 0x170));
        if (((*(longlong *)(param_1 + 0x10) != 0) &&
            (iVar3 == *(int *)(*(longlong *)(param_1 + 0x10) + 0x60))) &&
           (iVar4 = _guard_xfg_dispatch_icall_nop
                              (local_80,*(void **)(*(longlong *)(param_1 + 0x10) + 0x58),
                               (longlong)(iVar3 << 1)), iVar4 == 0)) {
          puVar1 = *(undefined8 **)(param_1 + 0x170);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          *(undefined8 *)(param_1 + 0x170) = 0;
          local_80 = *(void **)(*(longlong *)(param_1 + 0x10) + 0x58);
        }
        *(void **)(param_2 + 0x58) = local_80;
        *(int *)(param_2 + 0x60) = iVar3;
      }
    }
  }
  return;
}



// FUNCTION 143c103e0 FUN_143c103e0 body=1339 status=ok
// SIG undefined FUN_143c103e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c103e0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 *local_170;
  char local_168;
  ushort local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_138;
  undefined4 local_134;
  undefined4 local_128 [68];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x20) == 0) ||
       (cVar1 = FUN_143ac2e70(*(undefined8 *)(param_1 + 0x20)), cVar1 != '\0')) {
      *param_3 = 0x1b;
    }
    else {
      FUN_143c0ffb0(param_1,param_3);
      local_144 = -1;
      cVar1 = FUN_143c12cb0(param_1,local_128,param_3);
      if (cVar1 == '\0') {
        local_160 = 0xac00;
        while (local_160 < 0xd7a4) {
          local_134 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),local_160);
          local_140 = local_160 + 0x24c;
          local_178 = 1;
          local_170 = param_3;
          FUN_143b34120(*(undefined8 *)(param_1 + 0x20),local_160,local_160 + 0x24b,local_134);
          local_160 = local_140;
        }
      }
      else {
        local_144 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(param_1 + 0x28);
        for (local_15c = 0; local_15c < 0x43; local_15c = local_15c + 1) {
          FUN_143b58ed0(param_1 + 0x28);
        }
        local_168 = '\0';
        for (local_154 = 0x13; local_154 < 0x43; local_154 = local_154 + 1) {
          cVar1 = FUN_143b65e30(local_128[local_154]);
          if (cVar1 != '\0') {
            local_168 = '\x01';
            break;
          }
        }
        local_138 = FUN_143c13200(0xc,0);
        local_148 = 0xac00;
        for (local_158 = 0; local_158 < 0x13; local_158 = local_158 + 1) {
          local_14c = local_138;
          if ((local_168 == '\0') && (cVar1 = FUN_143b65e30(local_128[local_158]), cVar1 == '\0')) {
            local_14c = local_14c | 0x100;
          }
          local_13c = local_148 + 0x24c;
          local_178 = 1;
          local_170 = param_3;
          FUN_143b34120(*(undefined8 *)(param_1 + 0x20),local_148,local_148 + 0x24b,local_14c);
          local_148 = local_13c;
        }
      }
      FUN_143c13570(param_1,param_3);
      FUN_143c13780(param_1,param_3);
      uVar2 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),0);
      FUN_143e1cd90(param_1 + 0x28,uVar2,0);
      uVar2 = FUN_143c13200(0xb,0);
      FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),0,uVar2,param_3);
      FUN_143b33500(*(undefined8 *)(param_1 + 0x20),1,param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        local_150 = 0x10000;
        for (local_164 = 0xd800; local_164 < 0xdc00; local_164 = local_164 + 1) {
          cVar1 = FUN_143bdc400(param_1 + 0x110,local_150,local_150 + 0x3ff);
          if (cVar1 != '\0') {
            FUN_143b13590(param_1 + 0x110,local_164);
          }
          local_150 = local_150 + 0x400;
        }
        FUN_143b149a0(param_1 + 0x110);
        *param_2 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(param_1 + 0x28);
        param_2[1] = uVar3;
        uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(param_1 + 0x48);
        param_2[2] = uVar3;
        uVar3 = FUN_143a8fe10(param_1 + 0xe8);
        param_2[3] = uVar3;
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1 + 0x28);
        *(undefined4 *)((longlong)param_2 + 0x3c) = uVar2;
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1 + 0x48);
        *(undefined4 *)(param_2 + 8) = uVar2;
        uVar2 = FUN_143a904f0(param_1 + 0xe8);
        *(undefined4 *)((longlong)param_2 + 0x44) = uVar2;
        param_2[4] = *(undefined8 *)(param_1 + 0x10);
        if (local_144 < 0) {
          param_2[5] = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
        }
        else {
          param_2[5] = param_2[1] + (longlong)local_144 * 4;
        }
        param_2[10] = param_1 + 0x110;
      }
    }
  }
  return;
}



// FUNCTION 143c10920 FUN_143c10920 body=74 status=ok
// SIG undefined FUN_143c10920(void)

undefined1 FUN_143c10920(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_18;
  
  cVar1 = FUN_143b65e30(param_1);
  if (cVar1 == '\0') {
LAB_143c1095b:
    local_18 = 0;
  }
  else {
    iVar2 = FUN_143b67480(param_1);
    if (iVar2 != 8) {
      iVar2 = FUN_143b67480(param_1);
      if (iVar2 != 9) goto LAB_143c1095b;
    }
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143c10970 FUN_143c10970 body=60 status=ok
// SIG undefined FUN_143c10970(void)

longlong FUN_143c10970(longlong param_1)

{
  FUN_143a90910(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 143c109b0 FUN_143c109b0 body=159 status=ok
// SIG undefined FUN_143c109b0(void)

void FUN_143c109b0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_48 [72];
  
  FUN_143a90910(param_1 + 0xe8);
  FUN_143e1d760(local_48,param_1 + 0x90);
  while( true ) {
    cVar1 = FUN_143e1d9e0(local_48);
    if (cVar1 == '\0') break;
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_48);
    uVar2 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),uVar2);
    lVar3 = FUN_143c12c50(param_1,uVar2);
    *(undefined4 *)(lVar3 + 0x30) = 1;
  }
  FUN_143e1d7c0(local_48);
  return;
}



// FUNCTION 143c10a50 FUN_143c10a50 body=1732 status=ok
// SIG undefined FUN_143c10a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143c10a50(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 local_res10;
  undefined1 auStack_118 [32];
  char local_f8;
  char local_f7;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  longlong local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = FUN_143b65e30(param_2);
  local_res10 = param_2;
  if (cVar1 == '\0') {
    local_b0 = (**(code **)(*(longlong *)param_1[2] + 0x10))(param_1[2],param_2);
    if (local_b0 != 0x101000100) {
      local_res10 = FUN_143c123d0(param_1[1],local_b0,param_1 + 0x22);
    }
  }
  else {
    local_d8 = FUN_143b67480(param_2);
    if (local_d8 == 5) {
      local_c0 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                 ::GetObjectForTimerManager(*param_1 + 0x28);
      iVar2 = FUN_143b67bd0(param_2);
      local_c0 = local_c0 + (longlong)iVar2 * 4;
      local_d4 = FUN_143bd8410(param_2);
      local_f8 = '\0';
      for (local_f4 = 0; local_f4 < local_d4; local_f4 = local_f4 + 1) {
        uVar3 = *(undefined4 *)(local_c0 + (longlong)local_f4 * 4);
        cVar1 = FUN_143b65e30(uVar3);
        if ((cVar1 == '\0') &&
           (local_a0 = (**(code **)(*(longlong *)param_1[2] + 0x10))(param_1[2],uVar3),
           local_a0 != 0x101000100)) {
          if (local_f8 == '\0') {
            for (local_ec = 0; local_ec < local_f4; local_ec = local_ec + 1) {
              lVar4 = FUN_143bd7d60(*(undefined4 *)(local_c0 + (longlong)local_ec * 4));
              param_1[(longlong)local_ec + 3] = lVar4;
            }
            local_f8 = '\x01';
          }
          param_1[(longlong)local_f4 + 3] = local_a0;
        }
        else if (local_f8 != '\0') {
          lVar4 = FUN_143bd7d60(uVar3);
          param_1[(longlong)local_f4 + 3] = lVar4;
        }
      }
      if (local_f8 == '\0') {
        local_res10 = FUN_143c12060(param_1[1],local_c0,local_d4,param_1 + 0x22);
      }
      else {
        local_58 = param_1[1];
        local_50 = *(longlong *)param_1[1];
        local_res10 = (**(code **)(local_50 + 0x18))(local_58,param_1 + 3,local_d4,param_1 + 0x22);
      }
    }
    else if (local_d8 == 6) {
      local_c8 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                 ::GetObjectForTimerManager(*param_1 + 0x48);
      iVar2 = FUN_143b67bd0(param_2);
      local_c8 = local_c8 + (longlong)iVar2 * 8;
      local_d0 = FUN_143bd8410(param_2);
      local_f7 = '\0';
      for (local_f0 = 0; local_f0 < local_d0; local_f0 = local_f0 + 1) {
        local_a8 = *(longlong *)(local_c8 + (longlong)local_f0 * 8);
        local_98 = (**(code **)(*(longlong *)param_1[2] + 0x18))(param_1[2],local_a8);
        if (local_98 == 0x101000100) {
          if (local_f7 != '\0') {
            param_1[(longlong)local_f0 + 3] = local_a8;
          }
        }
        else {
          if (local_f7 == '\0') {
            for (local_e8 = 0; local_e8 < local_f0; local_e8 = local_e8 + 1) {
              param_1[(longlong)local_e8 + 3] = *(longlong *)(local_c8 + (longlong)local_e8 * 8);
            }
            local_f7 = '\x01';
          }
          param_1[(longlong)local_f0 + 3] = local_98;
        }
      }
      if (local_f7 == '\0') {
        local_res10 = FUN_143c12210(param_1[1],local_c8,local_d0,param_1 + 0x22);
      }
      else {
        local_78 = param_1[1];
        local_90 = *(longlong *)param_1[1];
        local_res10 = (**(code **)(local_90 + 0x18))(local_78,param_1 + 3,local_d0,param_1 + 0x22);
      }
    }
    else if (local_d8 == 7) {
      local_e0 = FUN_143c12c50(*param_1,param_2);
      local_68 = param_1 + 0x22;
      uVar3 = FUN_143c10a50(param_1,*(undefined4 *)(local_e0 + 0x28));
      local_e4 = FUN_143c0f630(param_1[1],local_e0,uVar3,local_68);
      local_res10 = FUN_143c131e0(local_e4);
      while (-1 < *(int *)(local_e0 + 0x34)) {
        local_e0 = FUN_143c12c20(*param_1,*(undefined4 *)(local_e0 + 0x34));
        local_60 = FUN_143c12c20(param_1[1],local_e4);
        local_88 = param_1 + 0x22;
        uVar3 = FUN_143c10a50(param_1,*(undefined4 *)(local_e0 + 0x28));
        local_e4 = FUN_143c0f630(param_1[1],local_e0,uVar3,local_88);
        local_b8 = FUN_143c13490(local_e0);
        local_b8 = local_b8 + 1;
        local_80 = FUN_143a90ff0(local_e0,local_40,local_b8,0x7fffffff);
        local_70 = local_80;
        FUN_143b13960(param_1[1] + 0x110,local_80);
        FUN_143a8dc60(local_40);
        *(undefined4 *)(local_60 + 0x34) = local_e4;
      }
    }
  }
  return local_res10;
}



// FUNCTION 143c11120 FUN_143c11120 body=696 status=ok
// SIG undefined FUN_143c11120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143c11120(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,longlong param_5,
             undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    local_90 = *(longlong *)(param_1 + 0x10);
    iVar2 = FUN_143b67bd0(param_4);
    local_98 = *(longlong *)(local_90 + 0x18) + (longlong)iVar2 * 2;
    if ((param_4 & 0x100) == 0) {
      uVar3 = FUN_143bd8fd0(local_98);
      local_b8 = param_6;
      uVar3 = FUN_143c11510(param_1,param_3,uVar3,1);
      local_a8 = FUN_143c0f630(param_1,param_2,uVar3,param_6);
      *(undefined4 *)(param_5 + 0x34) = local_a8;
      cVar1 = FUN_143a8b0e0(*param_6);
      if (cVar1 != '\0') {
        return 0;
      }
      param_5 = FUN_143c12c20(param_1,local_a8);
    }
    else {
      local_a8 = 0xffffffff;
    }
    local_a0 = FUN_143a904f0(param_2);
    FUN_143e22eb0(local_78,local_98 + 4,0,param_6);
    while (cVar1 = FUN_143e23230(local_78,param_6), cVar1 != '\0') {
      uVar4 = FPlugin::GetDescriptor(local_78);
      FUN_143a8e070(param_2,uVar4);
      uVar3 = FUN_143b1dc50(local_78);
      local_b8 = param_6;
      uVar3 = FUN_143c11510(param_1,param_3,uVar3,1);
      local_a8 = FUN_143c0f630(param_1,param_2,uVar3,param_6);
      *(undefined4 *)(param_5 + 0x34) = local_a8;
      cVar1 = FUN_143a8b0e0(*param_6);
      if (cVar1 != '\0') {
        local_9c = 0;
        FUN_143e22fe0(local_78);
        return local_9c;
      }
      param_5 = FUN_143c12c20(param_1,local_a8);
      FUN_143a99400(param_2,local_a0);
    }
    local_a4 = local_a8;
    FUN_143e22fe0(local_78);
  }
  else {
    local_a4 = 0;
  }
  return local_a4;
}



// FUNCTION 143c113e0 FUN_143c113e0 body=297 status=ok
// SIG undefined FUN_143c113e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c113e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined1 local_138 [272];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x20) == 0) ||
       (cVar1 = FUN_143ac2e70(*(undefined8 *)(param_1 + 0x20)), cVar1 != '\0')) {
      *param_4 = 0x1b;
    }
    else {
      local_148 = param_4;
      FUN_143c0eb50(local_138,param_2,param_1,param_3);
      FUN_143ac2b60(*(undefined8 *)(param_2 + 0x20),0,FUN_143c13a00,local_138);
      *param_4 = local_28;
      *(byte *)(param_1 + 0x168) = *(byte *)(param_1 + 0x168) | *(byte *)(param_2 + 0x168);
    }
  }
  return;
}



// FUNCTION 143c11510 FUN_143c11510 body=1952 status=ok
// SIG undefined FUN_143c11510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c11510(longlong param_1,undefined4 param_2,uint param_3,char param_4,
                       undefined4 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint local_res18;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  undefined4 *local_220;
  undefined4 local_218;
  int local_214;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined4 *local_200;
  uint local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined1 local_188 [40];
  undefined4 local_160 [13];
  undefined4 local_12c;
  undefined1 local_128 [40];
  undefined1 local_100 [52];
  undefined4 local_cc;
  undefined1 local_c8 [96];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_190 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b65e30(param_3);
    if (cVar1 == '\0') {
      uVar5 = (ulonglong)param_3;
    }
    else {
      local_214 = FUN_143b67480(param_3);
      local_214 = local_214 + -5;
      local_res18 = param_3;
      switch(local_214) {
      case 0:
        local_1a0 = *(longlong *)(param_1 + 0x10);
        iVar3 = FUN_143b67bd0(param_3);
        local_1a8 = *(longlong *)(local_1a0 + 8) + (longlong)iVar3 * 4;
        local_208 = FUN_143bd8410(param_3);
        local_res18 = FUN_143c12060(param_1,local_1a8,local_208,param_5);
        break;
      case 1:
        local_1d0 = *(longlong *)(param_1 + 0x10);
        iVar3 = FUN_143b67bd0(param_3);
        local_198 = *(longlong *)(local_1d0 + 0x10) + (longlong)iVar3 * 8;
        local_210 = FUN_143bd8410(param_3);
        local_res18 = FUN_143c12210(param_1,local_198,local_210,param_5);
        break;
      case 3:
        local_1c0 = *(longlong *)(param_1 + 0x10);
        iVar3 = FUN_143b67bd0(param_3);
        local_1f0 = *(longlong *)(local_1c0 + 0x18) + (longlong)iVar3 * 2;
        uVar4 = FUN_143bd8fd0(local_1f0);
        if (param_4 == '\0') {
          local_228 = param_5;
          uVar5 = FUN_143c11510(param_1,param_2,uVar4,0);
          return uVar5;
        }
        local_1e8 = FUN_143a8ac30(local_40);
        local_1b0 = local_1e8;
        FUN_143c0eaf0(local_160,local_1e8,0);
        FUN_143a8dc60(local_40);
        FUN_143a8dbd0(local_188,0);
        cVar1 = FUN_143bdd2a0(uVar4);
        if (cVar1 == '\0') {
          local_228 = param_5;
          uVar4 = FUN_143c11510(param_1,param_2,uVar4,1);
          local_218 = FUN_143c0f630(param_1,local_188,uVar4,param_5);
          local_12c = local_218;
        }
        else {
          local_220 = param_5;
          local_228 = local_160;
          local_218 = FUN_143c11120(param_1,local_188,param_2,uVar4);
        }
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          local_1f8 = 0;
          FUN_143a8dc60(local_188);
          TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_160);
          return (ulonglong)local_1f8;
        }
        local_200 = (undefined4 *)FUN_143c12c20(param_1,local_218);
        FUN_143e22eb0(local_c8,local_1f0 + 4,0,param_5);
        while (cVar1 = FUN_143e23230(local_c8,param_5), cVar1 != '\0') {
          uVar6 = FPlugin::GetDescriptor(local_c8);
          FUN_143a8dcd0(local_188,uVar6);
          FUN_143bdd3c0(local_188);
          uVar2 = FUN_143a904f0(local_188);
          FUN_143bad030(local_188,0,uVar2);
          uVar4 = FUN_143b1dc50(local_c8);
          cVar1 = FUN_143bdd2a0(uVar4);
          if (cVar1 == '\0') {
            local_228 = param_5;
            uVar4 = FUN_143c11510(param_1,param_2,uVar4,1);
            local_218 = FUN_143c0f630(param_1,local_188,uVar4,param_5);
            local_200[0xd] = local_218;
          }
          else {
            local_220 = param_5;
            local_228 = local_200;
            local_218 = FUN_143c11120(param_1,local_188,param_2,uVar4);
          }
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 != '\0') {
            local_20c = 0;
            FUN_143e22fe0(local_c8);
            FUN_143a8dc60(local_188);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_160);
            return (ulonglong)local_20c;
          }
          local_200 = (undefined4 *)FUN_143c12c20(param_1,local_218);
        }
        local_res18 = FUN_143c131e0(local_12c);
        FUN_143b13590(param_1 + 0x90,param_2);
        FUN_143e22fe0(local_c8);
        FUN_143a8dc60(local_188);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_160);
        break;
      case 4:
        if (param_4 == '\0') {
          local_1c8 = *(longlong *)(param_1 + 0x10);
          iVar3 = FUN_143b67bd0(param_3);
          local_1b8 = *(longlong *)(local_1c8 + 0x18) + (longlong)iVar3 * 2;
          uVar4 = FUN_143bd8fd0(local_1b8);
          local_228 = param_5;
          uVar5 = FUN_143c11510(param_1,param_2,uVar4,0);
          return uVar5;
        }
        local_1e0 = FUN_143a8ac30(local_68);
        local_1d8 = local_1e0;
        FUN_143c0eaf0(local_100,local_1e0,0);
        FUN_143a8dc60(local_68);
        FUN_143a8dbd0(local_128,0);
        local_220 = param_5;
        local_228 = (undefined4 *)local_100;
        FUN_143c11120(param_1,local_128,param_2,param_3);
        local_res18 = FUN_143c131e0(local_cc);
        FUN_143b13590(param_1 + 0x90,param_2);
        FUN_143a8dc60(local_128);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_100);
        break;
      case 7:
        *param_5 = 0x10;
        break;
      case 9:
        local_res18 = FUN_143c12980(param_1,1,param_2,param_3);
        break;
      case 10:
        uVar6 = FUN_143bd9350(param_2);
        local_res18 = FUN_143c123d0(param_1,uVar6,param_5);
      }
      uVar5 = (ulonglong)local_res18;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143c11d30 FUN_143c11d30 body=175 status=ok
// SIG undefined FUN_143c11d30(void)

void FUN_143c11d30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_143c10a50(param_1,param_4);
  FUN_143b34120(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),param_2,param_3,uVar2,1,
                param_1 + 0x110);
  cVar1 = FUN_143c13110(uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x68))
              (*(longlong *)(param_1 + 8) + 0x90,param_2,param_3);
  }
  FUN_143a8b110(*(undefined4 *)(param_1 + 0x110));
  return;
}



// FUNCTION 143c11de0 FUN_143c11de0 body=622 status=ok
// SIG undefined FUN_143c11de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c11de0(longlong param_1,ulonglong *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  uint local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_98 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_3 < 0) || (0x1f < param_3)) {
      *param_4 = 1;
    }
    else {
      if ((*(longlong *)(param_1 + 0x20) != 0) &&
         (cVar1 = FUN_143ac2e70(*(undefined8 *)(param_1 + 0x20)), cVar1 == '\0')) {
        if (param_3 == 0) {
          uVar2 = FUN_143c12460(0);
          return uVar2;
        }
        if (param_3 != 1) {
          if (param_3 == 2) {
            local_a8 = *param_2;
            local_a0 = param_2[1];
            local_b0 = (uint)(local_a8 >> 0x20);
            if ((((local_a8 & 0xffffffffff00ff) == 0x5000000) &&
                ((local_a0 & 0xffffffff00ffffff) == 0x500)) && (local_b0 != 0)) {
              return (ulonglong)
                     (local_b0 | ((uint)local_a8 & 0xff00) << 8 | (uint)(local_a0 >> 0x10) | 0xc4);
            }
          }
          local_b8 = 0;
          while( true ) {
            if (local_b8 == param_3) {
              uVar2 = FUN_143c12060(param_1,local_98,param_3,param_4);
              return uVar2;
            }
            local_b4 = FUN_143c12460(param_2[local_b8]);
            if (local_b4 == 1) break;
            local_98[local_b8] = local_b4;
            local_b8 = local_b8 + 1;
          }
          uVar2 = FUN_143c12210(param_1,param_2,param_3,param_4);
          return uVar2;
        }
        uVar2 = FUN_143c123d0(param_1,*param_2,param_4);
        return uVar2;
      }
      *param_4 = 0x1b;
    }
  }
  return 0;
}



// FUNCTION 143c12060 FUN_143c12060 body=429 status=ok
// SIG undefined FUN_143c12060(void)

undefined8 FUN_143c12060(longlong param_1,int *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_28;
  int local_24;
  int local_20;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar4 = *param_2;
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x28);
    for (local_28 = 0; local_28 <= iVar2 - param_3; local_28 = local_28 + 1) {
      iVar3 = FUN_143b59890(param_1 + 0x28,local_28);
      if (iVar4 == iVar3) {
        if (0x7ffff < local_28) {
          *param_4 = 0xf;
          return 0;
        }
        local_24 = 1;
        while( true ) {
          if (local_24 == param_3) {
            uVar5 = FUN_143c13220(5,local_28,param_3);
            return uVar5;
          }
          iVar3 = FUN_143b59890(param_1 + 0x28,local_28 + local_24);
          if (iVar3 != param_2[local_24]) break;
          local_24 = local_24 + 1;
        }
      }
    }
    iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x28);
    if (iVar4 < 0x80000) {
      for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
        FUN_143b58ed0(param_1 + 0x28,param_2[local_20],param_4);
      }
      uVar5 = FUN_143c13220(5,iVar4,param_3);
    }
    else {
      *param_4 = 0xf;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143c12210 FUN_143c12210 body=434 status=ok
// SIG undefined FUN_143c12210(void)

undefined8 FUN_143c12210(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_28;
  int local_24;
  int local_20;
  
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    lVar1 = *param_2;
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x48);
    for (local_28 = 0; local_28 <= iVar3 - param_3; local_28 = local_28 + 1) {
      lVar4 = FUN_143bca400(param_1 + 0x48,local_28);
      if (lVar1 == lVar4) {
        if (0x7ffff < local_28) {
          *param_4 = 0xf;
          return 0;
        }
        local_24 = 1;
        while( true ) {
          if (local_24 == param_3) {
            uVar5 = FUN_143c13220(6,local_28,param_3);
            return uVar5;
          }
          lVar4 = FUN_143bca400(param_1 + 0x48,local_28 + local_24);
          if (lVar4 != param_2[local_24]) break;
          local_24 = local_24 + 1;
        }
      }
    }
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x48);
    if (iVar3 < 0x80000) {
      for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
        FUN_143b62060(param_1 + 0x48,param_2[local_20],param_4);
      }
      uVar5 = FUN_143c13220(6,iVar3,param_3);
    }
    else {
      *param_4 = 0xf;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143c123d0 FUN_143c123d0 body=143 status=ok
// SIG undefined FUN_143c123d0(void)

ulonglong FUN_143c123d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_143c12460(param_2);
  if (uVar2 == 1) {
    iVar3 = FUN_143c0f5a0(param_1,param_2,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      if (iVar3 < 0x80000) {
        uVar4 = FUN_143c13220(6,iVar3,1);
      }
      else {
        *param_3 = 0xf;
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  return uVar4;
}



// FUNCTION 143c12460 FUN_143c12460 body=178 status=ok
// SIG undefined FUN_143c12460(void)

ulonglong FUN_143c12460(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_res8;
  
  uVar1 = (uint)(param_1 >> 0x20);
  local_res8 = (uint)param_1;
  if ((param_1 & 0xffff00ff00ff) == 0) {
    uVar2 = (ulonglong)(uVar1 | local_res8 >> 0x10 | (local_res8 & 0xffff) >> 8);
  }
  else if ((param_1 & 0xffffffffff) == 0x5000500) {
    uVar2 = FUN_143c13250(uVar1);
  }
  else if ((uVar1 == 0) && ((param_1 & 0xff) == 0)) {
    uVar2 = FUN_143c13260(param_1 & 0xffffffff);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c12520 FUN_143c12520 body=125 status=ok
// SIG undefined FUN_143c12520(void)

bool FUN_143c12520(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_143a90700(param_2,local_res18,local_res20);
  iVar2 = FUN_143a904f0(param_1);
  cVar1 = FUN_143b0fd50(param_1,iVar2 - local_res20[0],local_res20[0],param_2,local_res18[0],
                        local_res20[0]);
  return cVar1 == '\0';
}



// FUNCTION 143c125a0 FUN_143c125a0 body=617 status=ok
// SIG undefined FUN_143c125a0(void)

int FUN_143c125a0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                 int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  
  uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
          ::GetObjectForTimerManager(*(longlong *)(param_1 + 0x188) + 0x28);
  *(undefined8 *)(param_1 + 0x198) = uVar4;
  uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
          ::GetObjectForTimerManager(*(longlong *)(param_1 + 0x188) + 0x48);
  *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  uVar4 = FUN_143a8fe10(*(longlong *)(param_1 + 0x188) + 0xe8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  FUN_143bd9080(param_1);
  *(undefined8 *)(param_1 + 0x328) = param_2;
  *(undefined4 *)(param_1 + 0x330) = param_3;
  local_28[0] = 0;
  while ((cVar1 = FUN_143a8b110(local_28[0]), cVar1 != '\0' &&
         (iVar2 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x328)), *(int *)(param_1 + 0x330) < iVar2
         ))) {
    FUN_143bd16e0(param_1);
    uVar3 = FUN_143a8e3e0(*(undefined8 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330));
    if (uVar3 < 0x10000) {
      local_2c = 1;
    }
    else {
      local_2c = 2;
    }
    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + local_2c;
    local_30 = FUN_143ac2bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20),uVar3);
    if (local_30 == 0xc0) {
      local_20 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x10);
      local_30 = FUN_143b64340(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x10),uVar3);
    }
    else {
      local_20 = param_1 + 400;
    }
    FUN_143bd67f0(param_1,local_20,uVar3,local_30,1,local_28);
    for (local_34 = 0; iVar2 = FUN_143b5e700(param_1), local_34 < iVar2; local_34 = local_34 + 1) {
      local_18 = FUN_143bd32a0(param_1,local_34);
      if (local_18 != 0) {
        if (param_5 < 0x1f) {
          *(longlong *)(param_4 + (longlong)param_5 * 8) = local_18;
        }
        param_5 = param_5 + 1;
      }
    }
  }
  return param_5;
}



// FUNCTION 143c12810 FUN_143c12810 body=67 status=ok
// SIG undefined FUN_143c12810(void)

void FUN_143c12810(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a90530(*(undefined8 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330),param_2);
  *(undefined4 *)(param_1 + 0x330) = uVar1;
  return;
}



// FUNCTION 143c12860 FUN_143c12860 body=274 status=ok
// SIG undefined FUN_143c12860(void)

ulonglong FUN_143c12860(longlong param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 & 0x100) == 0) {
    lVar3 = FUN_143c12c50(*(undefined8 *)(param_1 + 0x188),param_2);
    if (*(int *)(lVar3 + 0x30) == 1) {
      uVar1 = FUN_143c0f990(*(undefined8 *)(param_1 + 0x188),lVar3,param_3);
      *(undefined4 *)(lVar3 + 0x30) = uVar1;
      if (*param_3 == 0xf) {
        *param_3 = 0;
        FUN_143c109b0(*(undefined8 *)(param_1 + 0x188));
        uVar1 = FUN_143c0f990(*(undefined8 *)(param_1 + 0x188),lVar3,param_3);
        *(undefined4 *)(lVar3 + 0x30) = uVar1;
      }
      uVar4 = FUN_143a8fe10(*(longlong *)(param_1 + 0x188) + 0xe8);
      *(undefined8 *)(param_1 + 0x1a8) = uVar4;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + 0x30);
  }
  else {
    uVar1 = FUN_143b67bd0(param_2);
    uVar2 = FUN_143ac2bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20),uVar1);
  }
  return uVar2;
}



// FUNCTION 143c12980 FUN_143c12980 body=142 status=ok
// SIG undefined FUN_143c12980(void)

void FUN_143c12980(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  iVar1 = FUN_143b67bd0(param_4);
  if (param_2 == '\0') {
    local_20 = FUN_143bca400(param_1 + 0x48,iVar1);
  }
  else {
    local_20 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + (longlong)iVar1 * 8);
  }
  uVar2 = FUN_143c09600(param_3,local_20);
  FUN_143c13250(uVar2);
  return;
}



// FUNCTION 143c12a10 FUN_143c12a10 body=196 status=ok
// SIG undefined FUN_143c12a10(void)

undefined8
FUN_143c12a10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x178) == 0) {
    lVar1 = FUN_143a8d310(0x338);
    if (lVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143c0ebb0(lVar1,param_1);
    }
    *(undefined8 *)(param_1 + 0x178) = local_20;
    if (*(longlong *)(param_1 + 0x178) == 0) {
      return 0;
    }
  }
  uVar2 = FUN_143c125a0(*(undefined8 *)(param_1 + 0x178),param_2,param_3,param_4,param_5);
  return uVar2;
}



// FUNCTION 143c12ae0 FUN_143c12ae0 body=242 status=ok
// SIG undefined FUN_143c12ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c12ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  ulonglong uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = FUN_143a904f0(param_2);
  if (local_58 == 0) {
    local_68 = param_5;
    uVar1 = FUN_143c12a10(param_1,param_3,0,param_4);
  }
  else {
    local_50 = FUN_143a8dda0(local_38,param_2,param_3);
    local_68 = param_5;
    local_48 = local_50;
    local_54 = FUN_143c12a10(param_1,local_50,local_58,param_4);
    FUN_143a8dc60(local_38);
    uVar1 = (ulonglong)local_54;
  }
  return uVar1;
}



// FUNCTION 143c12be0 _aligned_malloc_dbg body=60 status=ok
// SIG undefined _aligned_malloc_dbg(void)

/* Library Function - Single Match
    _aligned_malloc_dbg
   
   Library: Visual Studio */

void _aligned_malloc_dbg(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4
                        )

{
  FUN_143c12a10(param_1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 143c12c20 FUN_143c12c20 body=39 status=ok
// SIG undefined FUN_143c12c20(void)

void FUN_143c12c20(longlong param_1,undefined4 param_2)

{
  FUN_143acf270(param_1 + 0x68,param_2);
  return;
}



// FUNCTION 143c12c50 FUN_143c12c50 body=39 status=ok
// SIG undefined FUN_143c12c50(void)

void FUN_143c12c50(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b67bd0(param_2);
  FUN_143c12c20(param_1,uVar1);
  return;
}



// FUNCTION 143c12c80 FUN_143c12c80 body=43 status=ok
// SIG undefined FUN_143c12c80(void)

void FUN_143c12c80(longlong param_1,undefined4 param_2)

{
  FUN_143ac2bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20),param_2);
  return;
}



// FUNCTION 143c12cb0 FUN_143c12cb0 body=584 status=ok
// SIG undefined FUN_143c12cb0(void)

ulonglong FUN_143c12cb0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  bool bVar7;
  byte local_28;
  byte local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    local_28 = *(longlong *)(param_1 + 0x10) == 0;
    bVar1 = false;
    for (local_18 = 0; local_18 < 0x43; local_18 = local_18 + 1) {
      uVar4 = FUN_143c13160(local_18);
      local_20 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),uVar4);
      bVar3 = FUN_143c130e0(local_20);
      local_28 = local_28 | bVar3;
      bVar7 = local_20 == 0xc0;
      if (bVar7) {
        local_20 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),uVar4);
      }
      cVar2 = FUN_143b65e30(local_20);
      if (cVar2 != '\0') {
        uVar5 = FUN_143b67480(local_20);
        switch(uVar5) {
        case 0:
        case 3:
        case 7:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          *param_3 = 5;
          return (ulonglong)param_3 & 0xffffffffffffff00;
        case 5:
        case 6:
        case 8:
        case 9:
          if (bVar7) {
            local_20 = 0xc0;
            bVar1 = true;
          }
          break;
        case 0xe:
          local_20 = FUN_143c12980(param_1,bVar7,uVar4,local_20);
          break;
        case 0xf:
          local_20 = 0xc0;
          bVar1 = true;
        }
      }
      *(int *)(param_2 + (longlong)local_18 * 4) = local_20;
    }
    if ((local_28 != 0) && (bVar1)) {
      for (local_1c = 0; local_1c < 0x43; local_1c = local_1c + 1) {
        if (*(int *)(param_2 + (longlong)local_1c * 4) == 0xc0) {
          uVar4 = FUN_143c13160(local_1c);
          uVar5 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),uVar4);
          uVar4 = FUN_143c11510(param_1,uVar4,uVar5,1,param_3);
          *(undefined4 *)(param_2 + (longlong)local_1c * 4) = uVar4;
        }
      }
    }
    if ((local_28 == 0) || (cVar2 = FUN_143a8b110(*param_3), cVar2 == '\0')) {
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
    uVar6 = (ulonglong)local_24;
  }
  else {
    uVar6 = (ulonglong)(uint3)(cVar2 >> 7) << 8;
  }
  return uVar6;
}



// FUNCTION 143c12f40 FUN_143c12f40 body=17 status=ok
// SIG undefined FUN_143c12f40(void)

undefined4 FUN_143c12f40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x330);
}



// FUNCTION 143c12f60 FUN_143c12f60 body=33 status=ok
// SIG undefined FUN_143c12f60(void)

void FUN_143c12f60(longlong param_1)

{
  FUN_143a8fe10(param_1 + 0x1c78);
  return;
}



// FUNCTION 143c12f90 FUN_143c12f90 body=328 status=ok
// SIG undefined FUN_143c12f90(void)

undefined4 * FUN_143c12f90(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  puVar3 = (undefined4 *)(ulonglong)(uint)(int)cVar1;
  if ((int)cVar1 == 0) {
    puVar3 = param_3;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      if (param_2 == 0) {
        *param_3 = 1;
      }
      else {
        *(longlong *)(param_1 + 0x10) = param_2;
        uVar4 = FUN_143b33bb0(0xc0,0xfffd0505,param_3);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        for (local_18 = 0xc0; local_18 < 0x100; local_18 = local_18 + 1) {
          FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),local_18,0xc0,param_3);
        }
        uVar2 = FUN_143c13200(0xc,0);
        FUN_143b34120(*(undefined8 *)(param_1 + 0x20),0xac00,0xd7a3,uVar2,1,param_3);
        (**(code **)(*(longlong *)(param_1 + 0x110) + 0x70))
                  (param_1 + 0x110,*(undefined8 *)(param_2 + 0x50));
        cVar1 = FUN_143a8b0e0(*param_3);
        puVar3 = (undefined4 *)(ulonglong)(uint)(int)cVar1;
      }
    }
    else {
      *param_3 = 0x1b;
    }
  }
  return puVar3;
}



// FUNCTION 143c130e0 FUN_143c130e0 body=44 status=ok
// SIG undefined FUN_143c130e0(void)

undefined1 FUN_143c130e0(int param_1)

{
  undefined1 local_18;
  
  if ((param_1 == 0xc0) || (param_1 == -1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143c13110 FUN_143c13110 body=27 status=ok
// SIG undefined FUN_143c13110(void)

void FUN_143c13110(undefined4 param_1)

{
  FUN_143b64d60(param_1,7);
  return;
}



// FUNCTION 143c13130 FUN_143c13130 body=36 status=ok
// SIG undefined FUN_143c13130(void)

void FUN_143c13130(longlong param_1,undefined4 param_2)

{
  FUN_143be83d0(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 143c13160 FUN_143c13160 body=72 status=ok
// SIG undefined FUN_143c13160(void)

int FUN_143c13160(int param_1)

{
  if (param_1 < 0x13) {
    param_1 = param_1 + 0x1100;
  }
  else if (param_1 + -0x13 < 0x15) {
    param_1 = param_1 + 0x114e;
  }
  else {
    param_1 = param_1 + 0x1180;
  }
  return param_1;
}



// FUNCTION 143c131b0 FUN_143c131b0 body=33 status=ok
// SIG undefined FUN_143c131b0(void)

void FUN_143c131b0(longlong param_1)

{
  FUN_143a904f0(param_1 + 0x1c78);
  return;
}



// FUNCTION 143c131e0 FUN_143c131e0 body=27 status=ok
// SIG undefined FUN_143c131e0(void)

void FUN_143c131e0(undefined4 param_1)

{
  FUN_143c13200(7,param_1);
  return;
}



// FUNCTION 143c13200 FUN_143c13200 body=25 status=ok
// SIG undefined FUN_143c13200(void)

uint FUN_143c13200(uint param_1,int param_2)

{
  return param_2 << 0xd | 0xc0U | param_1;
}



// FUNCTION 143c13220 FUN_143c13220 body=39 status=ok
// SIG undefined FUN_143c13220(void)

uint FUN_143c13220(uint param_1,int param_2,int param_3)

{
  return param_2 << 0xd | param_3 << 8 | 0xc0U | param_1;
}



// FUNCTION 143c13250 FUN_143c13250 body=14 status=ok
// SIG undefined FUN_143c13250(void)

uint FUN_143c13250(uint param_1)

{
  return param_1 | 0xc1;
}



// FUNCTION 143c13260 FUN_143c13260 body=17 status=ok
// SIG undefined FUN_143c13260(void)

uint FUN_143c13260(uint param_1)

{
  return param_1 | 0xc2;
}



// FUNCTION 143c13280 FUN_143c13280 body=146 status=ok
// SIG undefined FUN_143c13280(void)

uint FUN_143c13280(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  
  iVar1 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x328));
  if (*(int *)(param_1 + 0x330) == iVar1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143a8e3e0(*(undefined8 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330));
    if (uVar2 < 0x10000) {
      local_18 = 1;
    }
    else {
      local_18 = 2;
    }
    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + local_18;
  }
  return uVar2;
}



// FUNCTION 143c13320 FUN_143c13320 body=355 status=ok
// SIG undefined FUN_143c13320(void)

void FUN_143c13320(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_48 [72];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 == '\0')) {
    FUN_143e1d760(local_48,param_2);
    while ((cVar1 = FUN_143e1d9e0(local_48), cVar1 != '\0' &&
           (cVar1 = FUN_143b65e60(local_48), cVar1 == '\0'))) {
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_48);
      iVar3 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),uVar2);
      if (iVar3 == 0xc0) {
        uVar4 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),uVar2);
        uVar4 = FUN_143b679b0(*(undefined8 *)(param_1 + 0x10),uVar4);
        uVar4 = FUN_143c11510(param_1,uVar2,uVar4,1,param_3);
        FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),uVar2,uVar4,param_3);
      }
    }
    *(undefined1 *)(param_1 + 0x168) = 1;
    FUN_143e1d7c0(local_48);
  }
  return;
}



// FUNCTION 143c13490 FUN_143c13490 body=32 status=ok
// SIG undefined FUN_143c13490(void)

undefined2 FUN_143c13490(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_143a8e4f0(param_1,0);
  return uVar1;
}



// FUNCTION 143c134b0 FUN_143c134b0 body=136 status=ok
// SIG undefined FUN_143c134b0(void)

uint FUN_143c134b0(longlong param_1)

{
  uint uVar1;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x330) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_143a8e3e0(*(undefined8 *)(param_1 + 0x328),*(int *)(param_1 + 0x330) + -1);
    if (uVar1 < 0x10000) {
      local_18 = 1;
    }
    else {
      local_18 = 2;
    }
    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) - local_18;
  }
  return uVar1;
}



// FUNCTION 143c13540 FUN_143c13540 body=43 status=ok
// SIG undefined FUN_143c13540(void)

void FUN_143c13540(longlong param_1,undefined4 param_2)

{
  FUN_143bd9080(param_1);
  *(undefined4 *)(param_1 + 0x330) = param_2;
  return;
}



// FUNCTION 143c13570 FUN_143c13570 body=518 status=ok
// SIG undefined FUN_143c13570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c13570(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_104;
  int local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [64];
  undefined1 local_98 [96];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_e8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f8 = FUN_143a8d4f0(local_38,1,L"[:Nd:]",0xffffffff);
  local_f0 = local_f8;
  FUN_143b16d40(local_98,local_f8,param_2);
  FUN_143a8dc60(local_38);
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143e1d760(local_d8,local_98);
    while (cVar1 = FUN_143e1d9e0(local_d8), cVar1 != '\0') {
      local_104 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_d8);
      local_108 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),local_104);
      if ((local_108 != 0xc0) && (local_108 != -1)) {
        local_100 = FUN_143c0ef60(param_1,local_108,param_2);
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') {
          FUN_143e1d7c0(local_d8);
          FUN_143b11ff0(local_98);
          return;
        }
        if (0x7ffff < local_100) {
          *param_2 = 0xf;
          FUN_143e1d7c0(local_d8);
          FUN_143b11ff0(local_98);
          return;
        }
        uVar2 = FUN_143a9da10(local_104);
        local_108 = FUN_143c13220(10,local_100,uVar2);
        FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),local_104,local_108,param_2);
      }
    }
    FUN_143e1d7c0(local_d8);
    FUN_143b11ff0(local_98);
  }
  else {
    FUN_143b11ff0(local_98);
  }
  return;
}



// FUNCTION 143c13780 FUN_143c13780 body=152 status=ok
// SIG undefined FUN_143c13780(void)

void FUN_143c13780(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ushort local_18;
  uint local_14 [5];
  
  for (local_18 = 0xd800; local_18 < 0xdc00; local_18 = local_18 + 1) {
    local_14[0] = 0xffffffff;
    FUN_143ac2ae0(*(undefined8 *)(param_1 + 0x20),local_18,0,FUN_143c13a60,local_14);
    uVar1 = FUN_143c13200(0xd,0);
    FUN_143b34030(*(undefined8 *)(param_1 + 0x20),local_18,uVar1 | local_14[0],param_2);
  }
  return;
}



// FUNCTION 143c13820 FUN_143c13820 body=477 status=ok
// SIG undefined FUN_143c13820(void)

void FUN_143c13820(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 local_48 [72];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 == '\0')) {
    FUN_143e1d760(local_48,param_2);
    while ((cVar1 = FUN_143e1d9e0(local_48), cVar1 != '\0' &&
           (cVar1 = FUN_143b65e60(local_48), cVar1 == '\0'))) {
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_48);
      iVar3 = FUN_143ac2bb0(*(undefined8 *)(param_1 + 0x20),uVar2);
      if (iVar3 == 0xc0) {
        uVar4 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),uVar2);
        uVar4 = FUN_143b679b0(*(undefined8 *)(param_1 + 0x10),uVar4);
        cVar1 = FUN_143c10920(uVar4);
        if (cVar1 != '\0') {
          uVar4 = FUN_143c11510(param_1,uVar2,uVar4,0,param_3);
          FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),uVar2,uVar4);
        }
      }
      else {
        cVar1 = FUN_143c13110(iVar3);
        if (cVar1 != '\0') {
          lVar5 = FUN_143c12c50(param_1,iVar3);
          FUN_143b340b0(*(undefined8 *)(param_1 + 0x20),uVar2,*(undefined4 *)(lVar5 + 0x28),param_3)
          ;
          FUN_143b155e0(param_1 + 0x90,uVar2);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x168) = 1;
    FUN_143e1d7c0(local_48);
  }
  return;
}



// FUNCTION 143c13a00 FUN_143c13a00 body=93 status=ok
// SIG undefined FUN_143c13a00(void)

undefined1 FUN_143c13a00(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if (((param_4 != -1) && (param_4 != 0xc0)) &&
     (cVar1 = FUN_143c11d30(param_1,param_2,param_3,param_4), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143c13a60 FUN_143c13a60 body=137 status=ok
// SIG undefined FUN_143c13a60(void)

undefined8 FUN_143c13a60(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int local_res20;
  
  if (param_4 == -1) {
    local_res20 = 0;
  }
  else {
    if (param_4 != 0xc0) {
      *param_1 = 0x200;
      return 0;
    }
    local_res20 = 0x100;
  }
  if (*param_1 < 0) {
    *param_1 = local_res20;
  }
  else if (*param_1 != local_res20) {
    *param_1 = 0x200;
    return 0;
  }
  return 1;
}



// FUNCTION 143c13af0 FID_conflict:_InternalDeleteHelper<Concurrency::details::WorkQueue> body=73 status=ok
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



// FUNCTION 143c13b40 FUN_143c13b40 body=119 status=ok
// SIG undefined FUN_143c13b40(void)

undefined4 * FUN_143c13b40(undefined4 *param_1)

{
  int local_18;
  
  *param_1 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    param_1[(longlong)local_18 + 6] = 0;
    param_1[(longlong)local_18 + 1] = 0;
  }
  return param_1;
}



// FUNCTION 143c13bc0 FUN_143c13bc0 body=253 status=ok
// SIG undefined FUN_143c13bc0(void)

undefined8 FUN_143c13bc0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int local_14;
  
  cVar2 = FUN_143c14210(param_1,param_2,param_3);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x34);
      cVar2 = FUN_143c13fe0(param_1,param_4,iVar1);
      if (cVar2 != '\0') break;
      if (iVar1 == 4) {
        return 0;
      }
      cVar2 = FUN_143c13cc0(param_1,param_4,iVar1);
      if (cVar2 != '\0') break;
      local_14 = 0;
      while (*(int *)(param_1 + 0x34 + (longlong)local_14 * 0x10) == iVar1) {
        FUN_143c14d90(param_1,param_1 + 0x2c + (longlong)local_14 * 0x10);
        local_14 = local_14 + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143c13cc0 FUN_143c13cc0 body=786 status=ok
// SIG undefined FUN_143c13cc0(void)

undefined8 FUN_143c13cc0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = 0;
  local_24 = 0;
  while ((local_24 < *(int *)(param_1 + 0xa0) &&
         (*(int *)(param_1 + 0x34 + (longlong)local_24 * 0x10) == param_3))) {
    local_20 = local_20 + *(int *)(param_1 + 0x38 + (longlong)local_24 * 0x10);
    local_24 = local_24 + 1;
  }
  iVar1 = FUN_143c14180(param_1,param_3 + 1);
  if (local_20 * iVar1 < param_2) {
    uVar3 = 0;
  }
  else {
    local_14 = *(uint *)(param_1 + 0x2c);
    local_10 = *(uint *)(param_1 + 0x30);
    for (local_28 = 1; local_28 < local_24; local_28 = local_28 + 1) {
      if (*(uint *)(param_1 + 0x2c + (longlong)local_28 * 0x10) < local_14) {
        local_14 = *(uint *)(param_1 + 0x2c + (longlong)local_28 * 0x10);
      }
      if (local_10 < *(uint *)(param_1 + 0x30 + (longlong)local_28 * 0x10)) {
        local_10 = *(uint *)(param_1 + 0x30 + (longlong)local_28 * 0x10);
      }
    }
    local_18 = (param_2 - local_20) / (iVar1 + -1);
    local_1c = local_20 - local_18;
    if ((local_18 == 0) || (local_1c + local_18 * iVar1 < param_2)) {
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    }
    *(uint *)(param_1 + 0x2c) = local_14;
    if (local_1c == 0) {
      *(uint *)(param_1 + 0x30) = local_10;
      *(int *)(param_1 + 0x38) = local_20;
      FUN_143c14d90(param_1,param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0xa0) = 1;
    }
    else {
      uVar2 = FUN_143c14960(param_1,local_14,param_3,local_1c + -1);
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(int *)(param_1 + 0x38) = local_1c;
      uVar2 = FUN_143c148d0(param_1,*(undefined4 *)(param_1 + 0x30),param_3);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(uint *)(param_1 + 0x40) = local_10;
      *(int *)(param_1 + 0x44) = param_3;
      *(int *)(param_1 + 0x48) = local_18;
      FUN_143c14d90(param_1,param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0xa0) = 2;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143c13fe0 FUN_143c13fe0 body=313 status=ok
// SIG undefined FUN_143c13fe0(void)

undefined8 FUN_143c13fe0(longlong param_1,int param_2,int param_3)

{
  int local_res10;
  int local_18;
  undefined4 local_14 [5];
  
  local_18 = 0;
  local_res10 = param_2;
  while ((local_18 < *(int *)(param_1 + 0xa0) &&
         (*(int *)(param_1 + 0x34 + (longlong)local_18 * 0x10) <= param_3 + 1))) {
    if (local_res10 <= *(int *)(param_1 + 0x38 + (longlong)local_18 * 0x10)) {
      if (param_3 < *(int *)(param_1 + 0x34 + (longlong)local_18 * 0x10)) {
        *(int *)(param_1 + 0x38 + (longlong)local_18 * 0x10) = local_res10;
      }
      *(int *)(param_1 + 0xa0) = local_18 + 1;
      if (1 < *(int *)(param_1 + 0xa0)) {
        local_14[0] = 0;
        FUN_143ac1910(param_1 + 0x2c,*(undefined4 *)(param_1 + 0xa0),0x10,FUN_143c14120,0,0,local_14
                     );
      }
      return 1;
    }
    local_res10 = local_res10 - *(int *)(param_1 + 0x38 + (longlong)local_18 * 0x10);
    local_18 = local_18 + 1;
  }
  return 0;
}



// FUNCTION 143c14120 FUN_143c14120 body=79 status=ok
// SIG undefined FUN_143c14120(void)

undefined8 FUN_143c14120(undefined8 param_1,uint *param_2,uint *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  else if (*param_3 < *param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143c14180 FUN_143c14180 body=43 status=ok
// SIG undefined FUN_143c14180(void)

int FUN_143c14180(longlong param_1,int param_2)

{
  return (*(int *)(param_1 + 0x18 + (longlong)param_2 * 4) -
         *(int *)(param_1 + 4 + (longlong)param_2 * 4)) + 1;
}



// FUNCTION 143c141b0 FUN_143c141b0 body=53 status=ok
// SIG undefined FUN_143c141b0(void)

int FUN_143c141b0(int param_1,char param_2)

{
  return param_1 - (1 << (('\x04' - param_2) * '\b' & 0x1fU));
}



// FUNCTION 143c141f0 FUN_143c141f0 body=30 status=ok
// SIG undefined FUN_143c141f0(void)

void FUN_143c141f0(undefined4 param_1,undefined4 param_2)

{
  FUN_143c148a0(param_1,param_2);
  return;
}



// FUNCTION 143c14210 FUN_143c14210 body=1676 status=ok
// SIG undefined FUN_143c14210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c14210(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_128 [32];
  int local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  uint local_b8 [20];
  uint local_68 [20];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_e8 = FUN_143c14d40(param_2);
  local_e0 = FUN_143c14d40(param_3);
  if (param_2 < param_3) {
    if (((int)local_e8 < (int)local_e0) && (uVar3 = FUN_143c14fd0(param_3), param_2 == (uint)uVar3))
    {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x50);
      _guard_xfg_dispatch_icall_nop(&local_c8,0,0x10);
      _guard_xfg_dispatch_icall_nop(local_68,0,0x50);
      local_fc = param_2;
      for (local_100 = local_e8; *param_1 < (int)local_100; local_100 = local_100 - 1) {
        local_e4 = FUN_143c148a0(local_fc,local_100);
        if (local_e4 < (uint)param_1[(longlong)(int)local_100 + 6]) {
          uVar1 = FUN_143c14a60(local_fc,local_100);
          local_b8[(longlong)(int)local_100 * 4] = uVar1;
          uVar1 = FUN_143c14f80(local_fc,local_100,param_1[(longlong)(int)local_100 + 6]);
          local_b8[(longlong)(int)local_100 * 4 + 1] = uVar1;
          local_b8[(longlong)(int)local_100 * 4 + 2] = local_100;
          local_b8[(longlong)(int)local_100 * 4 + 3] =
               param_1[(longlong)(int)local_100 + 6] - local_e4;
        }
        local_fc = FUN_143c14fd0(local_fc,local_100 - 1);
      }
      if (local_fc < 0xff000000) {
        local_c8 = FUN_143c14a60(local_fc,*param_1);
      }
      else {
        local_c8 = 0xffffffff;
      }
      local_fc = param_3;
      for (local_104 = local_e0; *param_1 < (int)local_104; local_104 = local_104 - 1) {
        local_dc = FUN_143c148a0(local_fc,local_104);
        if ((uint)param_1[(longlong)(int)local_104 + 1] < local_dc) {
          uVar1 = FUN_143c14f80(local_fc,local_104,param_1[(longlong)(int)local_104 + 1]);
          local_68[(longlong)(int)local_104 * 4] = uVar1;
          uVar1 = FUN_143c141b0(local_fc,local_104);
          local_68[(longlong)(int)local_104 * 4 + 1] = uVar1;
          local_68[(longlong)(int)local_104 * 4 + 2] = local_104;
          local_68[(longlong)(int)local_104 * 4 + 3] =
               local_dc - param_1[(longlong)(int)local_104 + 1];
        }
        local_fc = FUN_143c14fd0(local_fc,local_104 - 1);
      }
      local_c4 = FUN_143c141b0(local_fc,*param_1);
      local_c0 = *param_1;
      if (local_c4 < local_c8) {
        local_108 = 4;
LAB_143c1455e:
        if (*param_1 < local_108) {
          if (((int)local_b8[(longlong)local_108 * 4 + 3] < 1) ||
             ((int)local_68[(longlong)local_108 * 4 + 3] < 1)) goto LAB_143c14554;
          local_ec = local_68[(longlong)local_108 * 4];
          local_f0 = local_b8[(longlong)local_108 * 4 + 1];
          if ((local_f0 < local_ec) &&
             (uVar1 = FUN_143c148d0(param_1,local_f0,local_108), uVar1 != local_ec))
          goto LAB_143c14554;
          local_ec = local_b8[(longlong)local_108 * 4];
          local_b8[(longlong)local_108 * 4 + 1] = local_68[(longlong)local_108 * 4 + 1];
          local_f0 = local_b8[(longlong)local_108 * 4 + 1];
          local_d0 = FUN_143c148a0(local_f0,local_108);
          local_d4 = FUN_143c148a0(local_ec,local_108);
          local_d4 = local_d0 - local_d4;
          local_d8 = FUN_143c14180(param_1,local_108);
          local_cc = FUN_143c141f0(local_f0,local_108 + -1);
          iVar2 = FUN_143c141f0(local_ec,local_108 + -1);
          local_b8[(longlong)local_108 * 4 + 3] = local_d4 + 1 + local_d8 * (local_cc - iVar2);
          local_68[(longlong)local_108 * 4 + 3] = 0;
          while (local_108 = local_108 + -1, *param_1 < local_108) {
            local_68[(longlong)local_108 * 4 + 3] = 0;
            local_b8[(longlong)local_108 * 4 + 3] = 0;
          }
        }
        goto LAB_143c14712;
      }
      local_bc = (local_c4 - local_c8 >> (('\x04' - (char)*param_1) * '\b' & 0x1fU)) + 1;
LAB_143c14712:
      param_1[0x28] = 0;
      if (0 < local_bc) {
        _guard_xfg_dispatch_icall_nop(param_1 + 0xb,&local_c8,0x10);
        param_1[0x28] = 1;
      }
      local_f4 = *param_1;
      while (local_f4 = local_f4 + 1, local_f4 < 5) {
        if (0 < (int)local_68[(longlong)local_f4 * 4 + 3]) {
          _guard_xfg_dispatch_icall_nop
                    (param_1 + (longlong)param_1[0x28] * 4 + 0xb,local_68 + (longlong)local_f4 * 4,
                     0x10);
          param_1[0x28] = param_1[0x28] + 1;
        }
        if (0 < (int)local_b8[(longlong)local_f4 * 4 + 3]) {
          _guard_xfg_dispatch_icall_nop
                    (param_1 + (longlong)param_1[0x28] * 4 + 0xb,local_b8 + (longlong)local_f4 * 4,
                     0x10);
          param_1[0x28] = param_1[0x28] + 1;
        }
      }
      uVar3 = (ulonglong)(0 < param_1[0x28]);
    }
  }
  else {
    uVar3 = (ulonglong)(uint3)(param_3 >> 8) << 8;
  }
  return uVar3;
LAB_143c14554:
  local_108 = local_108 + -1;
  goto LAB_143c1455e;
}



// FUNCTION 143c148a0 FUN_143c148a0 body=35 status=ok
// SIG undefined FUN_143c148a0(void)

uint FUN_143c148a0(uint param_1,char param_2)

{
  return param_1 >> (('\x04' - param_2) * '\b' & 0x1fU) & 0xff;
}



// FUNCTION 143c148d0 FUN_143c148d0 body=128 status=ok
// SIG undefined FUN_143c148d0(void)

void FUN_143c148d0(longlong param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 local_res10;
  undefined4 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    uVar1 = FUN_143c141f0(local_res10,local_res18);
    if (uVar1 < *(uint *)(param_1 + 0x18 + (longlong)local_res18 * 4)) break;
    local_res10 = FUN_143c14ef0(local_res10,local_res18,
                                *(undefined4 *)(param_1 + 4 + (longlong)local_res18 * 4));
    local_res18 = local_res18 + -1;
  }
  FUN_143c14ef0(local_res10,local_res18,uVar1 + 1);
  return;
}



// FUNCTION 143c14960 FUN_143c14960 body=245 status=ok
// SIG undefined FUN_143c14960(void)

void FUN_143c14960(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  while( true ) {
    iVar1 = FUN_143c141f0(local_res10,local_res18);
    uVar2 = local_res20 + iVar1;
    if (uVar2 <= *(uint *)(param_1 + 0x18 + (longlong)local_res18 * 4)) break;
    local_res20 = uVar2 - *(int *)(param_1 + 4 + (longlong)local_res18 * 4);
    iVar1 = FUN_143c14180(param_1,local_res18);
    local_res10 = FUN_143c14ef0(local_res10,local_res18,
                                local_res20 % iVar1 +
                                *(int *)(param_1 + 4 + (longlong)local_res18 * 4));
    iVar1 = FUN_143c14180(param_1,local_res18);
    local_res20 = local_res20 / iVar1;
    local_res18 = local_res18 + -1;
  }
  FUN_143c14ef0(local_res10,local_res18,uVar2);
  return;
}



// FUNCTION 143c14a60 FUN_143c14a60 body=53 status=ok
// SIG undefined FUN_143c14a60(void)

int FUN_143c14a60(int param_1,char param_2)

{
  return param_1 + (1 << (('\x04' - param_2) * '\b' & 0x1fU));
}



// FUNCTION 143c14aa0 FUN_143c14aa0 body=252 status=ok
// SIG undefined FUN_143c14aa0(void)

void FUN_143c14aa0(undefined4 *param_1,char param_2)

{
  *param_1 = 1;
  param_1[2] = 3;
  param_1[7] = 0xff;
  if (param_2 == '\0') {
    param_1[3] = 2;
    param_1[8] = 0xff;
  }
  else {
    param_1[3] = 4;
    param_1[8] = 0xfe;
  }
  param_1[4] = 2;
  param_1[9] = 0xff;
  param_1[5] = 2;
  param_1[10] = 0xff;
  return;
}



// FUNCTION 143c14ba0 FUN_143c14ba0 body=193 status=ok
// SIG undefined FUN_143c14ba0(void)

void FUN_143c14ba0(undefined4 *param_1)

{
  *param_1 = 3;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[4] = 3;
  param_1[9] = 0xff;
  param_1[5] = 2;
  param_1[10] = 0xff;
  return;
}



// FUNCTION 143c14c70 FUN_143c14c70 body=193 status=ok
// SIG undefined FUN_143c14c70(void)

void FUN_143c14c70(undefined4 *param_1)

{
  *param_1 = 3;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[4] = 3;
  param_1[9] = 0x3f;
  param_1[5] = 2;
  param_1[10] = 0x3f;
  return;
}



// FUNCTION 143c14d40 FUN_143c14d40 body=70 status=ok
// SIG undefined FUN_143c14d40(void)

undefined8 FUN_143c14d40(uint3 param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else if ((param_1 & 0xffff) == 0) {
    uVar1 = 2;
  }
  else if ((param_1 & 0xff) == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



// FUNCTION 143c14d90 FUN_143c14d90 body=158 status=ok
// SIG undefined FUN_143c14d90(void)

void FUN_143c14d90(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2[2] + 1;
  uVar2 = FUN_143c14f80(*param_2,iVar1,*(undefined4 *)(param_1 + 4 + (longlong)iVar1 * 4));
  *param_2 = uVar2;
  uVar2 = FUN_143c14f80(param_2[1],iVar1,*(undefined4 *)(param_1 + 0x18 + (longlong)iVar1 * 4));
  param_2[1] = uVar2;
  iVar3 = FUN_143c14180(param_1,iVar1);
  param_2[3] = param_2[3] * iVar3;
  param_2[2] = iVar1;
  return;
}



// FUNCTION 143c14e30 FUN_143c14e30 body=183 status=ok
// SIG undefined FUN_143c14e30(void)

undefined4 FUN_143c14e30(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0)) {
    puVar1 = (undefined4 *)(param_1 + 0x2c + (longlong)*(int *)(param_1 + 0x9c) * 0x10);
    uVar4 = *puVar1;
    iVar2 = puVar1[3];
    puVar1[3] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    else {
      uVar3 = FUN_143c148d0(param_1,uVar4,puVar1[2]);
      *puVar1 = uVar3;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143c14ef0 FUN_143c14ef0 body=144 status=ok
// SIG undefined FUN_143c14ef0(void)

uint FUN_143c14ef0(uint param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 local_18;
  
  if (param_2 * 8 < 0x20) {
    local_18 = 0xffffffff >> ((byte)(param_2 * 8) & 0x1f);
  }
  else {
    local_18 = 0;
  }
  bVar1 = (char)param_2 * -8 + 0x20;
  return param_1 & (local_18 | -0x100 << (bVar1 & 0x1f)) | param_3 << (bVar1 & 0x1f);
}



// FUNCTION 143c14f80 FUN_143c14f80 body=80 status=ok
// SIG undefined FUN_143c14f80(void)

uint FUN_143c14f80(uint param_1,char param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = ('\x04' - param_2) * '\b';
  return param_1 & -0x100 << (bVar1 & 0x1f) | param_3 << (bVar1 & 0x1f);
}



// FUNCTION 143c14fd0 FUN_143c14fd0 body=53 status=ok
// SIG undefined FUN_143c14fd0(void)

uint FUN_143c14fd0(uint param_1,char param_2)

{
  return param_1 & -1 << (('\x04' - param_2) * '\b' & 0x1fU);
}



// FUNCTION 143c15010 FUN_143c15010 body=116 status=ok
// SIG undefined FUN_143c15010(void)

undefined8 * FUN_143c15010(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  FUN_143a8ac30(param_1 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  return param_1;
}



// FUNCTION 143c15090 FUN_143c15090 body=179 status=ok
// SIG undefined FUN_143c15090(void)

void FUN_143c15090(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 0x10);
  return;
}



// FUNCTION 143c15150 FUN_143c15150 body=215 status=ok
// SIG undefined FUN_143c15150(void)

undefined1 FUN_143c15150(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if ((((*param_1 == *param_2) && ((int)param_1[1] == (int)param_2[1])) &&
      (*(short *)((longlong)param_1 + 0xc) == *(short *)((longlong)param_2 + 0xc))) &&
     (((cVar1 = FUN_143a8dd00(param_1 + 2,param_2 + 2), cVar1 != '\0' &&
       (cVar1 = (**(code **)(*(longlong *)param_1[7] + 0x10))(param_1[7],param_2[7]), cVar1 != '\0')
       ) && (cVar1 = (**(code **)(*(longlong *)param_1[8] + 0x10))(param_1[8],param_2[8]),
            cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c15230 FUN_143c15230 body=747 status=ok
// SIG undefined FUN_143c15230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c15230(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = FUN_143beaf30(param_1);
  if (local_78 == -4) {
    FUN_143b17350(param_2,&DAT_145d200f0,3);
  }
  else if (local_78 == -3) {
    FUN_143b17350(param_2,&DAT_145d200f8,3);
  }
  else if (local_78 == -2) {
    FUN_143b17350(param_2,&DAT_145d200e8,3);
  }
  else if (local_78 == -1) {
    FUN_143b17350(param_2,&DAT_145d200e0,2);
  }
  else {
    FUN_143c17a90(param_2,*param_1);
    if (*(int *)(param_1 + 1) != 10) {
      FUN_143acc590(param_2,0x2f);
      FUN_143c17a90(param_2,(longlong)*(int *)(param_1 + 1));
    }
    sVar1 = FUN_143c15ee0(param_1);
    local_70 = (int)sVar1 - (int)*(short *)((longlong)param_1 + 0xc);
    for (local_74 = 0; local_74 < local_70; local_74 = local_74 + 1) {
      FUN_143acc590(param_2,0x3e);
    }
  }
  FUN_143acc590(param_2,0x3a);
  FUN_143acc590(param_2,0x20);
  sVar1 = FUN_143a8e4f0(param_1 + 2,0);
  if (sVar1 == 0x20) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[7]);
    if (iVar2 != 0) {
      FUN_143acc590(param_2,0x60);
    }
  }
  FUN_143a8ac30(local_38);
  FUN_143a8dcd0(local_38,param_1 + 2);
  FUN_143a8ac30(local_60);
  (**(code **)(*(longlong *)param_1[8] + 0x20))(param_1[8],local_60);
  uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1[8]);
  FUN_143b42ea0(local_38,uVar3,local_60);
  (**(code **)(*(longlong *)param_1[7] + 0x20))(param_1[7],local_60);
  uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1[7]);
  FUN_143b42ea0(local_38,uVar3,local_60);
  FUN_143a8e070(param_2,local_38);
  FUN_143acc590(param_2,0x3b);
  FUN_143a8dc60(local_60);
  FUN_143a8dc60(local_38);
  return;
}



// FUNCTION 143c15520 FUN_143c15520 body=359 status=ok
// SIG undefined FUN_143c15520(void)

bool FUN_143c15520(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int local_34;
  undefined4 local_30 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  iVar2 = FUN_143a904f0(param_2);
  if (iVar2 == 0) {
    bVar4 = true;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xc0))(*(undefined8 *)(param_1 + 0x48));
    if (cVar1 == '\0') {
      bVar4 = false;
    }
    else {
      local_20 = (longlong *)FUN_143b71570(*(undefined8 *)(param_1 + 0x48));
      if (local_20 == (longlong *)0x0) {
        *param_3 = 7;
        bVar4 = false;
      }
      else {
        uVar3 = (**(code **)(*local_20 + 0x138))(local_20,param_2);
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                  (local_28,uVar3);
        cVar1 = FUN_143b1fd90(local_28);
        if (cVar1 == '\0') {
          local_30[0] = 0;
          uVar3 = FUN_143a8b510(local_28);
          local_34 = FUN_143bd1b00(uVar3,local_30);
          while ((local_34 != -1 && (iVar2 = FUN_143c17780(local_34), iVar2 == 0))) {
            uVar3 = FUN_143a8b510(local_28);
            local_34 = FUN_143bd1b00(uVar3,local_30);
          }
          bVar4 = local_34 == -1;
          FUN_143b36bb0(local_28);
        }
        else {
          *param_3 = 7;
          FUN_143b36bb0(local_28);
          bVar4 = false;
        }
      }
    }
  }
  return bVar4;
}



// FUNCTION 143c15690 FUN_143c15690 body=136 status=ok
// SIG undefined FUN_143c15690(void)

void FUN_143c15690(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143b42ea0(param_3,param_4,param_1 + 0x10);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
            (*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
            (*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
  return;
}



// FUNCTION 143c15720 FUN_143c15720 body=133 status=ok
// SIG undefined FUN_143c15720(void)

void FUN_143c15720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143b42ea0(param_3,param_4,param_1 + 0x10);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
            (*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
            (*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
  return;
}



// FUNCTION 143c157b0 FUN_143c157b0 body=1840 status=ok
// SIG undefined FUN_143c157b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143c157b0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_147;
  int local_144;
  undefined1 local_140 [16];
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  double local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  double local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_b8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_143b0fbf0(local_140);
  FUN_143a8d3a0(local_b0,param_2);
  FUN_143a8ac30(local_60);
  uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1[7]);
  FUN_143a90d20(local_60,param_1 + 2,0,uVar2);
  FUN_143c179f0(param_1,local_b0,local_60,local_140);
  local_e0 = FUN_143a904f0(param_2);
  local_12c = FUN_143a904f0(local_b0);
  local_12c = local_e0 - local_12c;
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(local_140);
  if ((iVar3 == 0) &&
     (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1[7]), iVar3 != 0)) {
    uVar2 = FUN_143a93e60(local_140);
    FUN_143b44cd0(param_3,uVar2);
    FUN_143b69930(param_6,0);
    local_148 = 1;
    FUN_143a8dc60(local_60);
    FUN_143a8dc60(local_b0);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_140);
  }
  else {
    local_144 = 0;
    local_120 = 0.0;
    local_130 = 0;
    if (*param_1 < 1) {
      local_c8 = 0;
    }
    else {
      local_c8 = *param_1;
    }
    local_c0 = (double)local_c8;
    FUN_143a8ac30(local_88);
    while( true ) {
      FUN_143b0fce0(local_140,0);
      local_110 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_1[8]);
      local_dc = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(param_1[7]);
      local_dc = local_110 - local_dc;
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1[7]);
      FUN_143a90d20(local_88,param_1 + 2,uVar2,local_dc);
      local_150 = param_5;
      local_158 = param_1[7];
      local_160 = local_140;
      local_168 = local_88;
      local_108 = (double)FUN_143c16ad0(param_1,local_b0,local_130,local_c0);
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_140);
      if ((iVar3 == 0) &&
         (cVar1 = (**(code **)(*(longlong *)param_1[7] + 0x68))(param_1[7]), cVar1 == '\0')) {
        local_ec = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(param_1[7]);
        local_124 = FUN_143a93e60(local_140);
        local_124 = local_ec + local_124;
        iVar3 = FUN_143a93e60(param_3);
        if (iVar3 < local_124) {
          FUN_143b44cd0(param_3);
        }
      }
      else {
        local_130 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_140);
        FUN_143a8ac30(local_38);
        local_f8 = FUN_143a904f0(local_b0);
        local_10c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_140);
        local_10c = local_f8 - local_10c;
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_140);
        FUN_143a90d20(local_38,local_b0,uVar2,local_10c);
        FUN_143b0fbf0(local_d8);
        local_f0 = FUN_143a904f0(param_1 + 2);
        local_100 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(param_1[8]);
        local_100 = local_f0 - local_100;
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1[8]);
        FUN_143a90d20(local_88,param_1 + 2,uVar2,local_100);
        local_150 = param_5;
        local_158 = param_1[8];
        local_160 = local_d8;
        local_168 = local_88;
        local_108 = (double)FUN_143c16ad0(param_1,local_38,0,local_108);
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_d8);
        if ((iVar3 == 0) &&
           (cVar1 = (**(code **)(*(longlong *)param_1[8] + 0x68))(param_1[8]), cVar1 == '\0')) {
          local_f4 = FUN_143a93e60(local_d8);
          local_e4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                     ::GetIndex(param_1[7]);
          local_e4 = local_f4 + local_e4;
          local_128 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_140);
          local_128 = local_e4 + local_128;
          iVar3 = FUN_143a93e60(param_3);
          if (iVar3 < local_128) {
            FUN_143b44cd0(param_3);
          }
        }
        else {
          local_e8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                     ::GetIndex(local_140);
          local_e8 = local_12c + local_e8;
          iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_d8);
          if (local_144 < local_e8 + iVar3) {
            local_118 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                        ::GetIndex(local_140);
            local_118 = local_12c + local_118;
            local_144 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                        ::GetIndex(local_d8);
            local_144 = local_118 + local_144;
            local_120 = local_108;
          }
        }
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_d8);
        FUN_143a8dc60(local_38);
      }
      local_fc = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(param_1[7]);
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1[8]);
      if ((local_fc == iVar3) ||
         (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_140), iVar3 < 1)) break;
      local_114 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_140);
      iVar3 = FUN_143a904f0(local_b0);
      if ((iVar3 <= local_114) ||
         (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_140), iVar3 == local_130)) break;
    }
    FUN_143b0fce0(param_3,local_144);
    if (0 < local_144) {
      FUN_143b44cd0(param_3,0);
    }
    if (((param_4 != '\0') && (0 < local_144)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[7] + 0x68))(param_1[7]), cVar1 != '\0')) {
      local_120 = 1.0 / local_120;
    }
    FUN_143b698c0(param_6,local_120);
    local_147 = 1;
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
    FUN_143a8dc60(local_b0);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_140);
    local_148 = local_147;
  }
  return local_148;
}



// FUNCTION 143c15ee0 FUN_143c15ee0 body=160 status=ok
// SIG undefined FUN_143c15ee0(void)

short FUN_143c15ee0(longlong *param_1)

{
  short sVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  if (((int)param_1[1] == 0) || (*param_1 < 1)) {
    sVar1 = 0;
  }
  else {
    dVar3 = (double)FUN_143a91ab0((double)*param_1);
    dVar4 = (double)FUN_143a91ab0((double)(int)param_1[1]);
    sVar1 = (short)(int)(dVar3 / dVar4);
    lVar2 = FUN_143bebad0((int)param_1[1],sVar1 + 1);
    if (lVar2 <= *param_1) {
      sVar1 = sVar1 + 1;
    }
  }
  return sVar1;
}



// FUNCTION 143c15f80 FUN_143c15f80 body=851 status=ok
// SIG undefined FUN_143c15f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c15f80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  int local_e8;
  int local_e4;
  short local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
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
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  local_e8 = FUN_143c16520(param_1,&PTR_DAT_145d20160);
  local_108 = param_4;
  local_e4 = local_e8;
  if (local_e8 == -1) {
    local_b0 = FUN_143a8ac30(local_68);
    local_a0 = local_b0;
    uVar2 = FUN_143a904f0(param_1 + 0x10);
    local_f8 = param_5;
    local_100 = (undefined1 *)local_b0;
    local_b8 = FUN_143c1ec60(uVar2,param_1,param_3,param_2);
    FUN_143a8dc60(local_68);
  }
  else {
    iVar3 = FUN_143b19dc0(param_1 + 0x10,&DAT_145d20158,3,0);
    if (iVar3 == local_e4) {
      local_e8 = local_e4 + 2;
    }
    else {
      local_e0 = FUN_143a8e4f0(param_1 + 0x10,local_e4);
      local_e8 = FUN_143b0bae0(param_1 + 0x10,local_e0,local_e4 + 1);
      if ((local_e0 == 0x3c) && (local_e8 != -1)) {
        iVar3 = FUN_143a904f0(param_1 + 0x10);
        if (local_e8 < iVar3 + -1) {
          sVar1 = FUN_143a8e4f0(param_1 + 0x10,local_e8 + 1);
          if (sVar1 == local_e0) {
            local_e8 = local_e8 + 1;
          }
        }
      }
    }
    if (local_e8 == -1) {
      local_d0 = FUN_143a8ac30(local_40);
      local_a8 = local_d0;
      uVar2 = FUN_143a904f0(param_1 + 0x10);
      local_f8 = param_5;
      local_100 = (undefined1 *)local_a8;
      local_c8 = FUN_143c1ec60(uVar2,param_1,param_3,param_2);
      FUN_143a8dc60(local_40);
      local_b8 = local_c8;
    }
    else {
      FUN_143a8ac30(local_90);
      FUN_143a90d20(local_90,param_1 + 0x10,local_e4,(local_e8 + 1) - local_e4);
      local_f8 = param_5;
      local_100 = local_90;
      local_d8 = FUN_143c1ec60(local_e4,param_1,param_3,param_2);
      FUN_143c177a0(param_1 + 0x10,local_e4,local_e8 + 1);
      local_c0 = local_d8;
      FUN_143a8dc60(local_90);
      local_b8 = local_c0;
    }
  }
  return local_b8;
}



// FUNCTION 143c162e0 FUN_143c162e0 body=136 status=ok
// SIG undefined FUN_143c162e0(void)

void FUN_143c162e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    uVar2 = FUN_143c15f80(param_1,param_2,param_3,param_4,param_5);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar2 = FUN_143c15f80(param_1,param_2,param_3,param_4,param_5);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  return;
}



// FUNCTION 143c16370 FUN_143c16370 body=427 status=ok
// SIG undefined FUN_143c16370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c16370(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                       int *param_5)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xc0))(*(undefined8 *)(param_1 + 0x48));
  if (cVar1 == '\0') {
    iVar2 = FUN_143a904f0(param_3);
    *param_5 = iVar2;
    uVar3 = FUN_143c06050(param_2,param_3,param_4);
  }
  else {
    local_54 = 0;
    local_58 = param_4;
    FUN_143a8ac30(local_38);
    local_50 = 0;
    while ((iVar2 = FUN_143a904f0(param_2), (int)local_58 < iVar2 && (local_54 == 0))) {
      iVar2 = FUN_143a904f0(param_2);
      FUN_143a90d20(local_38,param_2,local_58,iVar2 - local_58);
      local_54 = FUN_143c17450(param_1,local_38,param_3,&local_50);
      cVar1 = FUN_143a8b0e0(local_50);
      if (cVar1 != '\0') break;
      if (local_54 != 0) {
        *param_5 = local_54;
        local_4c = local_58;
        FUN_143a8dc60(local_38);
        return (ulonglong)local_4c;
      }
      local_58 = local_58 + 1;
    }
    *param_5 = 0;
    local_48 = 0xffffffff;
    FUN_143a8dc60(local_38);
    uVar3 = (ulonglong)local_48;
  }
  return uVar3;
}



// FUNCTION 143c16520 FUN_143c16520 body=137 status=ok
// SIG undefined FUN_143c16520(void)

int FUN_143c16520(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = -1;
  local_18 = 0;
  while (*(longlong *)(param_2 + (longlong)local_18 * 8) != 0) {
    iVar1 = FUN_143acddd0(param_1 + 0x10,**(undefined2 **)(param_2 + (longlong)local_18 * 8));
    if ((iVar1 != -1) && ((local_14 == -1 || (iVar1 < local_14)))) {
      local_14 = iVar1;
    }
    local_18 = local_18 + 1;
  }
  return local_14;
}



// FUNCTION 143c165b0 FUN_143c165b0 body=1301 status=ok
// SIG undefined FUN_143c165b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c165b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int local_80;
  int local_7c;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_68 = FUN_143a8d310(0x50);
  if (local_68 == 0) {
    local_78 = (longlong *)0x0;
  }
  else {
    local_78 = (longlong *)FUN_143c15010(local_68,param_4);
  }
  local_58 = local_78;
  local_98 = local_78;
  if (local_78 == (longlong *)0x0) {
    *param_6 = 7;
  }
  else {
    FUN_143c16f40(local_78,param_1,param_6);
    local_8c = FUN_143acddd0(param_1,0x5b);
    local_90 = FUN_143acddd0(param_1,0x5d);
    if ((((local_8c == -1) || (local_90 == -1)) || (local_90 < local_8c)) ||
       ((iVar2 = FUN_143beaf30(local_98), iVar2 == -3 ||
        (iVar2 = FUN_143beaf30(local_98), iVar2 == -1)))) {
      FUN_143a8dcd0(local_98 + 2,param_1);
      local_a8 = param_6;
      FUN_143c162e0(local_98,param_2,param_3,param_4);
      FUN_143bea4d0(param_5,local_98);
    }
    else {
      local_88 = (longlong *)0x0;
      FUN_143a8ac30(local_38);
      if (((0 < *local_98) &&
          (local_48 = FUN_143bebad0((int)local_98[1],(int)*(short *)((longlong)local_98 + 0xc)),
          *local_98 % local_48 == 0)) ||
         ((iVar2 = FUN_143beaf30(local_98), iVar2 == -2 ||
          (iVar2 = FUN_143beaf30(local_98), iVar2 == -4)))) {
        local_70 = FUN_143a8d310(0x50);
        if (local_70 == 0) {
          local_60 = (longlong *)0x0;
        }
        else {
          local_60 = (longlong *)FUN_143c15010(local_70,param_4);
        }
        local_50 = local_60;
        local_88 = local_60;
        if (local_60 == (longlong *)0x0) {
          *param_6 = 7;
          FUN_143a8dc60(local_38);
          return;
        }
        if (*local_98 < 0) {
          iVar2 = FUN_143beaf30(local_98);
          if (iVar2 == -2) {
            FUN_143c17910(local_88,0xfffffffd);
          }
          else {
            iVar2 = FUN_143beaf30(local_98);
            if (iVar2 == -4) {
              *local_88 = *local_98;
              FUN_143c17910(local_98,0xfffffffe);
            }
          }
        }
        else {
          *local_60 = *local_98;
          cVar1 = FUN_143beaf60(param_2);
          if (cVar1 == '\0') {
            *local_98 = *local_98 + 1;
          }
        }
        *(int *)(local_88 + 1) = (int)local_98[1];
        *(undefined2 *)((longlong)local_88 + 0xc) = *(undefined2 *)((longlong)local_98 + 0xc);
        FUN_143acc540(local_38,param_1,0,local_8c);
        local_80 = local_90 + 1;
        iVar2 = FUN_143a904f0(param_1);
        if (local_80 < iVar2) {
          iVar2 = FUN_143a904f0(param_1);
          FUN_143acc540(local_38,param_1,local_90 + 1,(iVar2 - local_90) + -1);
        }
        FUN_143a8dcd0(local_88 + 2,local_38);
        local_a8 = param_6;
        FUN_143c162e0(local_88,param_2,param_3,param_4);
      }
      FUN_143a90d20(local_38,param_1,0,local_8c);
      FUN_143acc540(local_38,param_1,local_8c + 1,(local_90 - local_8c) + -1);
      local_7c = local_90 + 1;
      iVar2 = FUN_143a904f0(param_1);
      if (local_7c < iVar2) {
        iVar2 = FUN_143a904f0(param_1);
        FUN_143acc540(local_38,param_1,local_90 + 1,(iVar2 - local_90) + -1);
      }
      FUN_143a8dcd0(local_98 + 2,local_38);
      local_a8 = param_6;
      FUN_143c162e0(local_98,param_2,param_3,param_4);
      if (local_88 != (longlong *)0x0) {
        FUN_143bea4d0(param_5,local_88);
      }
      FUN_143bea4d0(param_5,local_98);
      FUN_143a8dc60(local_38);
    }
  }
  return;
}



// FUNCTION 143c16ad0 FUN_143c16ad0 body=1122 status=ok
// SIG undefined FUN_143c16ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c16ad0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7,int *param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2a8 [32];
  int *local_288;
  undefined1 local_280;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  *local_278;
  char local_268;
  char local_267;
  int local_264;
  int local_260;
  undefined4 local_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_200 [40];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_1d8 [224];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_208 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_25c = 0;
  cVar1 = FUN_143c15520(param_1,param_5,&local_25c);
  if (cVar1 != '\0') {
    FUN_143b0fbf0(local_248);
    FUN_143b686d0(local_f8);
    local_280 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xc0))
                          (*(undefined8 *)(param_1 + 0x48));
    local_238 = *param_7;
    local_278 = local_f8;
    local_288 = param_8;
    local_268 = (**(code **)(local_238 + 0x48))(param_7,param_2,local_248,param_4);
    if ((local_268 == '\0') ||
       ((iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(local_248), iVar2 == 0 &&
        (cVar1 = (**(code **)(*param_7 + 0x68))(param_7), cVar1 == '\0')))) {
      uVar3 = FUN_143a93e60(local_248);
      FUN_143b44cd0(param_6,uVar3);
      local_218 = 0;
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_248);
      local_210 = local_218;
    }
    else {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_248);
      FUN_143b0fce0(param_6,uVar3);
      local_210 = FUN_143b381e0(local_f8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_248);
    }
    return local_210;
  }
  cVar1 = FUN_143a8b0e0(local_25c);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_143b0fbf0(local_258);
  FUN_143b686d0(local_1d8);
  local_288 = &local_260;
  local_264 = FUN_143c16370(param_1,param_2,param_5,param_3);
  do {
    if (local_264 < 0) {
      FUN_143b0fce0(param_6,0);
      local_220 = 0;
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_1d8);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_258);
      return local_220;
    }
    FUN_143a8ac30(local_200);
    FUN_143a90d20(local_200,param_2,0,local_264);
    iVar2 = FUN_143a904f0(local_200);
    if (0 < iVar2) {
      local_280 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xc0))
                            (*(undefined8 *)(param_1 + 0x48));
      local_228 = *param_7;
      local_278 = local_1d8;
      local_288 = param_8;
      local_267 = (**(code **)(local_228 + 0x48))(param_7,local_200,local_258,param_4);
      if ((local_267 != '\0') &&
         (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_258), iVar2 == local_264)) {
        FUN_143b0fce0(param_6,local_264 + local_260);
        local_230 = FUN_143b381e0(local_1d8);
        FUN_143a8dc60(local_200);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_1d8);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_258);
        return local_230;
      }
      iVar2 = FUN_143a93e60(local_258);
      if (iVar2 < 1) {
        uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_258);
        FUN_143b44cd0(param_6,uVar3);
      }
      else {
        uVar3 = FUN_143a93e60(local_258);
        FUN_143b44cd0(param_6,uVar3);
      }
    }
    FUN_143b0fce0(local_258,0);
    local_288 = &local_260;
    local_264 = FUN_143c16370(param_1,param_2,param_5,local_264 + local_260);
    FUN_143a8dc60(local_200);
  } while( true );
}



// FUNCTION 143c16f40 FUN_143c16f40 body=1286 status=ok
// SIG undefined FUN_143c16f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c16f40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  ushort local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = FUN_143acddd0(param_2,0x3a);
  if (local_64 == -1) {
    FUN_143c177f0(param_1,0,param_3);
  }
  else {
    FUN_143a8ac30(local_40);
    FUN_143a90d20(local_40,param_2,0,local_64);
    do {
      local_64 = local_64 + 1;
      iVar5 = FUN_143a904f0(param_2);
      if (iVar5 <= local_64) break;
      uVar2 = FUN_143a8e4f0(param_2,local_64);
      cVar1 = FUN_143b28380(uVar2);
    } while (cVar1 != '\0');
    FUN_143c177a0(param_2,0,local_64);
    cVar1 = FUN_143b0fc90(local_40,&DAT_145d200e0,2);
    if (cVar1 == '\0') {
      FUN_143c17910(param_1,0xffffffff);
    }
    else {
      cVar1 = FUN_143b0fc90(local_40,&DAT_145d200e8,3);
      if (cVar1 == '\0') {
        FUN_143c17910(param_1,0xfffffffe);
      }
      else {
        cVar1 = FUN_143b0fc90(local_40,&DAT_145d200f8,3);
        if (cVar1 == '\0') {
          FUN_143c17910(param_1,0xfffffffd);
        }
        else {
          cVar1 = FUN_143b0fc90(local_40,&DAT_145d200f0,3);
          if (cVar1 == '\0') {
            FUN_143c17910(param_1,0xfffffffc);
          }
          else {
            uVar3 = FUN_143a8e4f0(local_40,0);
            if ((0x2f < uVar3) && (uVar3 = FUN_143a8e4f0(local_40,0), uVar3 < 0x3a)) {
              local_60 = 0;
              local_64 = 0;
              local_68 = 0x20;
              local_58 = 10;
              while (iVar5 = FUN_143a904f0(local_40), local_64 < iVar5) {
                local_68 = FUN_143a8e4f0(local_40,local_64);
                if ((local_68 < 0x30) || (0x39 < local_68)) {
                  if ((local_68 == 0x2f) || (local_68 == 0x3e)) break;
                  cVar1 = FUN_143b28380(local_68);
                  if (((cVar1 == '\0') && (local_68 != 0x2c)) && (local_68 != 0x2e)) {
                    *param_3 = 9;
                    FUN_143a8dc60(local_40);
                    return;
                  }
                }
                else {
                  local_60 = local_60 * local_58 + (longlong)(int)(local_68 - 0x30);
                }
                local_64 = local_64 + 1;
              }
              FUN_143c177f0(param_1,local_60,param_3);
              if (local_68 == 0x2f) {
                local_60 = 0;
                local_50 = 10;
                while( true ) {
                  local_64 = local_64 + 1;
                  iVar5 = FUN_143a904f0(local_40);
                  if (iVar5 <= local_64) break;
                  local_68 = FUN_143a8e4f0(local_40,local_64);
                  if ((local_68 < 0x30) || (0x39 < local_68)) {
                    if (local_68 == 0x3e) break;
                    cVar1 = FUN_143b28380(local_68);
                    if (((cVar1 == '\0') && (local_68 != 0x2c)) && (local_68 != 0x2e)) {
                      *param_3 = 9;
                      FUN_143a8dc60(local_40);
                      return;
                    }
                  }
                  else {
                    local_60 = local_60 * local_50 + (longlong)(int)(local_68 - 0x30);
                  }
                }
                *(undefined4 *)(param_1 + 8) = (undefined4)local_60;
                if (*(int *)(param_1 + 8) == 0) {
                  *param_3 = 9;
                }
                uVar2 = FUN_143c15ee0(param_1);
                *(undefined2 *)(param_1 + 0xc) = uVar2;
              }
              if (local_68 == 0x3e) {
                while (iVar5 = FUN_143a904f0(local_40), local_64 < iVar5) {
                  local_68 = FUN_143a8e4f0(local_40,local_64);
                  if ((local_68 != 0x3e) || (*(short *)(param_1 + 0xc) < 1)) {
                    *param_3 = 9;
                    FUN_143a8dc60(local_40);
                    return;
                  }
                  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
                  local_64 = local_64 + 1;
                  local_68 = 0x3e;
                }
              }
            }
          }
        }
      }
    }
    FUN_143a8dc60(local_40);
  }
  iVar5 = FUN_143a904f0(param_2);
  if ((0 < iVar5) && (sVar4 = FUN_143a8e4f0(param_2,0), sVar4 == 0x60)) {
    FUN_143c177a0(param_2,0,1);
  }
  return;
}



// FUNCTION 143c17450 FUN_143c17450 body=799 status=ok
// SIG undefined FUN_143c17450(void)

ulonglong FUN_143c17450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int local_58;
  int local_54;
  undefined4 local_50 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  uint local_38;
  longlong *local_30;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  iVar2 = FUN_143a904f0(param_3);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xc0))(*(undefined8 *)(param_1 + 0x48));
    if (cVar1 == '\0') {
      cVar1 = FUN_143b73b70(param_2,param_3);
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_143a904f0(param_3);
      }
    }
    else {
      local_30 = (longlong *)FUN_143b71570(*(undefined8 *)(param_1 + 0x48));
      if (local_30 == (longlong *)0x0) {
        *param_4 = 7;
        uVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*local_30 + 0x138))(local_30,param_2);
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                  (local_48,uVar3);
        uVar3 = (**(code **)(*local_30 + 0x138))(local_30,param_3);
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                  (local_40,uVar3);
        cVar1 = FUN_143b1fd90(local_48);
        if ((cVar1 == '\0') && (cVar1 = FUN_143b1fd90(local_40), cVar1 == '\0')) {
          local_50[0] = 0;
          uVar3 = FUN_143a8b510(local_48);
          local_54 = FUN_143bd1b00(uVar3,local_50);
          uVar3 = FUN_143a8b510(local_40);
          local_58 = FUN_143bd1b00(uVar3,local_50);
          while (local_58 != -1) {
            while ((iVar2 = FUN_143c17780(local_54), iVar2 == 0 && (local_54 != -1))) {
              uVar3 = FUN_143a8b510(local_48);
              local_54 = FUN_143bd1b00(uVar3,local_50);
            }
            while ((iVar2 = FUN_143c17780(local_58), iVar2 == 0 && (local_58 != -1))) {
              uVar3 = FUN_143a8b510(local_40);
              local_58 = FUN_143bd1b00(uVar3,local_50);
            }
            if (local_58 == -1) break;
            if (local_54 == -1) {
              local_18 = 0;
              FUN_143b36bb0(local_40);
              FUN_143b36bb0(local_48);
              return (ulonglong)local_18;
            }
            local_28 = FUN_143c17780(local_54);
            iVar2 = FUN_143c17780(local_58);
            if (local_28 != iVar2) {
              local_1c = 0;
              FUN_143b36bb0(local_40);
              FUN_143b36bb0(local_48);
              return (ulonglong)local_1c;
            }
            uVar3 = FUN_143a8b510(local_48);
            local_54 = FUN_143bd1b00(uVar3,local_50);
            uVar3 = FUN_143a8b510(local_40);
            local_58 = FUN_143bd1b00(uVar3,local_50);
          }
          uVar3 = FUN_143a8b510(local_48);
          local_38 = FUN_143bd1900(uVar3);
          if (local_54 != -1) {
            local_38 = local_38 - 1;
          }
          local_20 = local_38;
          FUN_143b36bb0(local_40);
          FUN_143b36bb0(local_48);
          uVar4 = (ulonglong)local_20;
        }
        else {
          *param_4 = 7;
          local_24 = 0;
          FUN_143b36bb0(local_40);
          FUN_143b36bb0(local_48);
          uVar4 = (ulonglong)local_24;
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 143c17780 FUN_143c17780 body=17 status=ok
// SIG undefined FUN_143c17780(void)

uint FUN_143c17780(int param_1)

{
  return param_1 >> 0x10 & 0xffff;
}



// FUNCTION 143c177a0 FUN_143c177a0 body=71 status=ok
// SIG undefined FUN_143c177a0(void)

void FUN_143c177a0(undefined8 param_1,int param_2,int param_3)

{
  FUN_143a8f0d0(param_1,param_2,param_3 - param_2,0,0,0);
  return;
}



// FUNCTION 143c177f0 FUN_143c177f0 body=276 status=ok
// SIG undefined FUN_143c177f0(void)

void FUN_143c177f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  *param_1 = param_2;
  if (*param_1 < 1) {
    *(undefined4 *)(param_1 + 1) = 10;
    *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 10;
    uVar1 = FUN_143c15ee0(param_1);
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar1;
    if (param_1[7] != 0) {
      (**(code **)(*(longlong *)param_1[7] + 0x18))
                (param_1[7],(int)param_1[1],(int)*(short *)((longlong)param_1 + 0xc),param_3);
    }
    if (param_1[8] != 0) {
      (**(code **)(*(longlong *)param_1[8] + 0x18))
                (param_1[8],(int)param_1[1],(int)*(short *)((longlong)param_1 + 0xc),param_3);
    }
  }
  return;
}



// FUNCTION 143c17910 FUN_143c17910 body=23 status=ok
// SIG undefined FUN_143c17910(void)

void FUN_143c17910(longlong *param_1,int param_2)

{
  *param_1 = (longlong)param_2;
  return;
}



// FUNCTION 143c17930 FUN_143c17930 body=188 status=ok
// SIG undefined FUN_143c17930(void)

undefined1 FUN_143c17930(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  undefined1 local_18;
  
  cVar1 = (**(code **)(*(longlong *)param_1[7] + 0x70))(param_1[7]);
  if ((cVar1 == '\0') &&
     (cVar1 = (**(code **)(*(longlong *)param_1[8] + 0x70))(param_1[8]), cVar1 == '\0')) {
    local_18 = 0;
  }
  else {
    lVar2 = FUN_143bebad0((int)param_1[1],(int)*(short *)((longlong)param_1 + 0xc));
    dVar3 = (double)FUN_143a917d0(param_2,SUB84((double)lVar2,0));
    if ((dVar3 == 0.0) && (*param_1 % lVar2 != 0)) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}



// FUNCTION 143c179f0 FUN_143c179f0 body=148 status=ok
// SIG undefined FUN_143c179f0(void)

void FUN_143c179f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14 [5];
  
  iVar2 = FUN_143a904f0(param_3);
  if (iVar2 != 0) {
    local_14[0] = 0;
    iVar2 = FUN_143c17450(param_1,param_2,param_3,local_14);
    cVar1 = FUN_143a8b0e0(local_14[0]);
    if ((cVar1 == '\0') && (iVar2 != 0)) {
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_4);
      FUN_143b0fce0(param_4,iVar3 + iVar2);
      FUN_143ace4e0(param_2,0,iVar2);
    }
  }
  return;
}



// FUNCTION 143c17a90 FUN_143c17a90 body=157 status=ok
// SIG undefined FUN_143c17a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c17a90(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined4 local_258;
  undefined8 local_250;
  undefined1 local_248 [48];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_250 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_268 = 0;
  local_258 = FUN_143bebb40(param_2,local_218,0x200,10);
  FUN_143a8db50(local_248,local_218,local_258);
  FUN_143a8e070(param_1,local_248);
  FUN_143a8dc60(local_248);
  return;
}



// FUNCTION 143c17b30 FUN_143c17b30 body=171 status=ok
// SIG undefined FUN_143c17b30(void)

longlong * FUN_143c17b30(longlong *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  longlong lVar3;
  
  *param_1 = 0;
  uVar1 = FUN_143a8c210();
  FUN_143a8a610(param_1 + 1,uVar1);
  if (param_2 != (char *)0x0) {
    sVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    lVar3 = FUN_143aa7a40((longlong)((int)sVar2 + 1));
    *param_1 = lVar3;
    if (*param_1 != 0) {
      _guard_xfg_dispatch_icall_nop((char *)*param_1,param_2);
      FUN_143a8adb0(param_1 + 1,param_3);
    }
  }
  return param_1;
}



// FUNCTION 143c17be0 FUN_143c17be0 body=44 status=ok
// SIG undefined FUN_143c17be0(void)

undefined8 * FUN_143c17be0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::LocaleDisplayNames::vftable;
  return param_1;
}



// FUNCTION 143c17c10 FUN_143c17c10 body=331 status=ok
// SIG undefined FUN_143c17c10(void)

undefined8 *
FUN_143c17c10(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_143c17be0(param_1);
  *param_1 = icu_53::LocaleDisplayNamesImpl::vftable;
  FUN_143a8aad0(param_1 + 1);
  *(undefined4 *)(param_1 + 0x30) = param_3;
  FUN_143c17b30(param_1 + 0x31,"icudt53l-lang",param_2,param_4,uVar1);
  FUN_143c17b30(param_1 + 0x61,"icudt53l-region",param_2);
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x100;
  param_1[0x95] = 0;
  FUN_143a8ac30(param_1 + 0x96);
  FUN_143a8ac30(param_1 + 0x9b);
  FUN_143a8ac30(param_1 + 0xa0);
  FUN_143a8ac30(param_1 + 0xa5);
  FUN_143c185e0(param_1);
  return param_1;
}



// FUNCTION 143c17d60 FUN_143c17d60 body=67 status=ok
// SIG undefined FUN_143c17d60(void)

void FUN_143c17d60(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_143aa79f0(*param_1);
    *param_1 = 0;
  }
  FUN_143a8acf0(param_1 + 1);
  return;
}



// FUNCTION 143c17db0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::LocaleDisplayNames::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c17de0 FUN_143c17de0 body=523 status=ok
// SIG undefined FUN_143c17de0(void)

void FUN_143c17de0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::LocaleDisplayNamesImpl::vftable;
  puVar1 = (undefined8 *)param_1[0x91];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x92];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x93];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x95];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 0xa5);
  FUN_143a8dc60(param_1 + 0xa0);
  FUN_143a8dc60(param_1 + 0x9b);
  FUN_143a8dc60(param_1 + 0x96);
  FUN_143c17d60(param_1 + 0x61);
  FUN_143c17d60(param_1 + 0x31);
  FUN_143a8acf0(param_1 + 1);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143c17ff0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c18030 FUN_143c18030 body=54 status=ok
// SIG undefined FUN_143c18030(void)

undefined8 FUN_143c18030(undefined8 param_1,uint param_2)

{
  FUN_143c17de0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c18070 FUN_143c18070 body=162 status=ok
// SIG undefined FUN_143c18070(void)

undefined8 FUN_143c18070(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_143a904f0(param_3);
  if (0 < iVar2) {
    uVar3 = FUN_143a8e3e0(param_3,0);
    cVar1 = FUN_143a9e940(uVar3);
    if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x4a8) != 0)) &&
       ((*(int *)(param_1 + 0x4a0) == 0x102 ||
        (*(char *)(param_1 + 0x550 + (longlong)param_2) != '\0')))) {
      FUN_143e1dc70(param_3,*(undefined8 *)(param_1 + 0x4a8),param_1 + 8,0x300);
    }
  }
  return param_3;
}



// FUNCTION 143c18120 FUN_143c18120 body=348 status=ok
// SIG undefined FUN_143c18120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c18120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined4 *local_220;
  undefined4 local_218 [2];
  undefined1 local_210 [24];
  undefined8 local_1f8;
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [216];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_1f8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  cVar1 = FUN_143a903a0(param_2);
  if (cVar1 == '\0') {
    FUN_143a8ac30(local_1f0);
    FUN_143b68520(local_1c8,param_2);
    FUN_143b68520(local_f0,param_3);
    FUN_143baba50(local_210);
    local_218[0] = 0;
    local_220 = local_218;
    local_228 = local_210;
    FUN_143c04ef0(*(undefined8 *)(param_1 + 0x488),local_1c8,2,local_1f0);
    cVar1 = FUN_143a8b110(local_218[0]);
    if (cVar1 != '\0') {
      FUN_143a8dcd0(param_2,local_1f0);
    }
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_210);
    _eh_vector_destructor_iterator_
              (local_1c8,0xd8,2,
               Concurrency::
               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               ::
               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              );
    FUN_143a8dc60(local_1f0);
  }
  else {
    FUN_143a8dcd0(param_2,param_3);
  }
  return param_2;
}



// FUNCTION 143c18280 Create body=101 status=ok
// SIG FreeThreadProxy * Create(FreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    private: virtual class Concurrency::details::FreeThreadProxy * __ptr64 __cdecl
   Concurrency::details::FreeThreadProxyFactory::Create(unsigned int) __ptr64
   
   Library: Visual Studio 2010 Debug */

FreeThreadProxy * __thiscall
Concurrency::details::FreeThreadProxyFactory::Create(FreeThreadProxyFactory *this,uint param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x558);
  if (lVar1 == 0) {
    local_20 = (FreeThreadProxy *)0x0;
  }
  else {
    local_20 = (FreeThreadProxy *)FUN_143c17c10(lVar1,this,param_1);
  }
  return local_20;
}



// FUNCTION 143c182f0 FUN_143c182f0 body=315 status=ok
// SIG undefined FUN_143c182f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c182f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  undefined4 *local_78;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_64 = 0;
  local_68 = 0;
  uVar2 = FUN_143a8c200(param_1 + 1);
  local_78 = &local_64;
  local_80 = &local_68;
  local_88 = param_4;
  local_50 = FUN_143ac1b20(*param_1,uVar2,param_2,param_3);
  cVar1 = FUN_143a8b110(local_64);
  if ((cVar1 == '\0') || (local_68 < 1)) {
    local_60 = FUN_143a8d9f0(local_38,param_4,0xffffffff,0);
    local_48 = local_60;
    local_58 = FUN_143a8dcd0(param_5,local_60);
    FUN_143a8dc60(local_38);
  }
  else {
    local_58 = FUN_143ab21b0(param_5,local_50,local_68);
  }
  return local_58;
}



// FUNCTION 143c18430 FUN_143c18430 body=62 status=ok
// SIG undefined FUN_143c18430(void)

void FUN_143c18430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143c182f0(param_1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 143c18470 FUN_143c18470 body=67 status=ok
// SIG undefined FUN_143c18470(void)

undefined4 FUN_143c18470(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x180);
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x4a0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143c184c0 FUN_143c184c0 body=17 status=ok
// SIG undefined FUN_143c184c0(void)

undefined4 FUN_143c184c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x180);
}



// FUNCTION 143c184e0 FUN_143c184e0 body=185 status=ok
// SIG undefined FUN_143c184e0(void)

undefined8
FUN_143c184e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = 0;
  local_14 = 0;
  uVar2 = FUN_143a8c200(param_1 + 1);
  local_10 = FUN_143ac1b20(*param_1,uVar2,param_2,param_3,param_4,&local_14,&local_18);
  cVar1 = FUN_143a8b110(local_18);
  if (cVar1 == '\0') {
    FUN_143a90e90(param_5);
  }
  else {
    param_5 = FUN_143ab21b0(param_5,local_10,local_14);
  }
  return param_5;
}



// FUNCTION 143c185a0 FUN_143c185a0 body=62 status=ok
// SIG undefined FUN_143c185a0(void)

void FUN_143c185a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143c184e0(param_1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 143c185e0 FUN_143c185e0 body=2318 status=ok
// SIG undefined FUN_143c185e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c185e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  char local_284;
  int local_280;
  undefined **local_278;
  int local_270;
  int local_26c;
  longlong local_268;
  undefined8 *local_260;
  int *local_258;
  int local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  char *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [40];
  undefined1 local_158 [40];
  undefined1 local_130 [40];
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  undefined1 local_b8 [48];
  undefined *local_88;
  undefined4 local_80;
  char *local_78;
  undefined4 local_70;
  char *local_68;
  undefined4 local_60;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  undefined4 local_40;
  char *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_188 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_1e8 = param_1;
  local_1f8 = FUN_143a8c210();
  uVar3 = FUN_143accb70(param_1 + 0x188);
  cVar1 = FUN_143a8afa0(uVar3,local_1f8);
  if (cVar1 == '\0') {
    local_228 = FUN_143accb70(param_1 + 0x188);
  }
  else {
    local_228 = FUN_143accb70(param_1 + 0x308);
  }
  local_1b0 = local_228;
  FUN_143a8adb0(local_1e8 + 8,local_228);
  FUN_143a8ac30(local_130);
  FUN_143c185a0(param_1 + 0x188,"localeDisplayPattern","separator",local_130);
  cVar1 = FUN_143a90330(local_130);
  if (cVar1 != '\0') {
    local_1d8 = FUN_143a8d9f0(local_108,"{0}, {1}",0xffffffff,0);
    local_1a0 = local_1d8;
    FUN_143a8dcd0(local_130,local_1d8);
    FUN_143a8dc60(local_108);
  }
  local_288 = 0;
  local_238 = FUN_143a8d310(0x3b0);
  if (local_238 == 0) {
    local_218 = 0;
  }
  else {
    local_218 = FUN_143c01a20(local_238,local_130,&local_288);
  }
  local_1c8 = local_218;
  *(undefined8 *)(param_1 + 0x488) = local_218;
  FUN_143a8ac30(local_180);
  FUN_143c185a0(param_1 + 0x188,"localeDisplayPattern","pattern",local_180);
  cVar1 = FUN_143a90330(local_180);
  if (cVar1 != '\0') {
    local_1b8 = FUN_143a8d9f0(local_b8,"{0} ({1})",0xffffffff,0);
    local_190 = local_1b8;
    FUN_143a8dcd0(local_180,local_1b8);
    FUN_143a8dc60(local_b8);
  }
  local_248 = FUN_143a8d310(0x3b0);
  if (local_248 == 0) {
    local_208 = 0;
  }
  else {
    local_208 = FUN_143c01a20(local_248,local_180,&local_288);
  }
  local_198 = local_208;
  *(undefined8 *)(param_1 + 0x490) = local_208;
  iVar2 = FUN_143acddd0(local_180,0xff08);
  if (iVar2 < 0) {
    FUN_143b913f0(param_1 + 0x4b0,0x28);
    FUN_143b913f0(param_1 + 0x4d8,0x5b);
    FUN_143b913f0(param_1 + 0x500,0x29);
    FUN_143b913f0(param_1 + 0x528,0x5d);
  }
  else {
    FUN_143b913f0(param_1 + 0x4b0,0xff08);
    FUN_143b913f0(param_1 + 0x4d8,0xff3b);
    FUN_143b913f0(param_1 + 0x500,0xff09);
    FUN_143b913f0(param_1 + 0x528,0xff3d);
  }
  FUN_143a8ac30(local_158);
  FUN_143c18430(param_1 + 0x188,"localeDisplayPattern","keyTypePattern",local_158);
  cVar1 = FUN_143a90330(local_158);
  if (cVar1 != '\0') {
    local_1c0 = FUN_143a8d9f0(local_e0,"{0}={1}",0xffffffff,0);
    local_1a8 = local_1c0;
    FUN_143a8dcd0(local_158);
    FUN_143a8dc60(local_e0);
  }
  local_240 = FUN_143a8d310(0x3b0);
  if (local_240 == 0) {
    local_230 = 0;
  }
  else {
    local_230 = FUN_143c01a20(local_240,local_158,&local_288);
  }
  local_1f0 = local_230;
  *(undefined8 *)(param_1 + 0x498) = local_230;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x550),0,6);
  local_88 = &DAT_145b4e200;
  local_80 = 4;
  local_78 = "keyValue";
  local_70 = 5;
  local_68 = "languages";
  local_60 = 0;
  local_58 = "script";
  local_50 = 1;
  local_48 = "territory";
  local_40 = 2;
  local_38 = "variant";
  local_30 = 3;
  local_28 = 0;
  local_20 = 0;
  local_284 = '\0';
  if ((*(int *)(param_1 + 0x4a0) == 0x103) || (*(int *)(param_1 + 0x4a0) == 0x104)) {
    local_270 = 0;
    uVar3 = FUN_143a8c200(param_1 + 8);
    local_200 = FUN_143aa5b10(0,uVar3,&local_288);
    cVar1 = FUN_143a8b110(local_288);
    if (cVar1 != '\0') {
      local_210 = FUN_143aa3350(local_200,"contextTransforms",0,&local_288);
      cVar1 = FUN_143a8b110(local_288);
      if (cVar1 != '\0') {
        while( true ) {
          local_268 = FUN_143aa4880(local_210,0,&local_288);
          if (local_268 == 0) break;
          local_258 = (int *)FUN_143aa4640(local_268,&local_270,&local_288);
          cVar1 = FUN_143a8b110(local_288);
          if (((cVar1 != '\0') && (local_258 != (int *)0x0)) && (1 < local_270)) {
            local_220 = (char *)FUN_143aa4760(local_268);
            if (local_220 != (char *)0x0) {
              local_280 = 0;
              for (local_278 = &local_88; *local_278 != (undefined *)0x0; local_278 = local_278 + 2)
              {
                local_280 = _guard_xfg_dispatch_icall_nop(local_220,*local_278);
                if (local_280 < 1) break;
              }
              if ((*local_278 != (undefined *)0x0) && (local_280 == 0)) {
                if (*(int *)(param_1 + 0x4a0) == 0x103) {
                  local_26c = *local_258;
                }
                else {
                  local_26c = local_258[1];
                }
                local_250 = local_26c;
                if (local_26c != 0) {
                  *(undefined1 *)(param_1 + 0x550 + (longlong)*(int *)(local_278 + 1)) = 1;
                  local_284 = '\x01';
                }
              }
            }
          }
          local_288 = 0;
          FUN_143aa2ef0(local_268);
        }
        FUN_143aa2ef0(local_210);
      }
      FUN_143aa2ef0(local_200);
    }
  }
  if ((local_284 != '\0') || (*(int *)(param_1 + 0x4a0) == 0x102)) {
    local_288 = 0;
    uVar3 = FUN_143a9fd60(param_1 + 8,&local_288);
    *(undefined8 *)(param_1 + 0x4a8) = uVar3;
    cVar1 = FUN_143a8b0e0(local_288);
    if (cVar1 != '\0') {
      local_260 = *(undefined8 **)(param_1 + 0x4a8);
      local_1e0 = local_260;
      if (local_260 == (undefined8 *)0x0) {
        local_1d0 = 0;
      }
      else {
        local_1d0 = (**(code **)*local_260)(local_260,1);
      }
      *(undefined8 *)(param_1 + 0x4a8) = 0;
    }
  }
  FUN_143a8dc60(local_158);
  FUN_143a8dc60(local_180);
  FUN_143a8dc60(local_130);
  return;
}



// FUNCTION 143c18ef0 FUN_143c18ef0 body=80 status=ok
// SIG undefined FUN_143c18ef0(void)

void FUN_143c18ef0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c18430(param_1 + 0x188,&DAT_145d2069c,param_2,param_3);
  FUN_143c18070(param_1,4,param_3);
  return;
}



// FUNCTION 143c18f40 FUN_143c18f40 body=95 status=ok
// SIG undefined FUN_143c18f40(void)

void FUN_143c18f40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143c182f0(param_1 + 0x188,"Types",param_2,param_3,param_4);
  FUN_143c18070(param_1,5,param_4);
  return;
}



// FUNCTION 143c18fa0 FUN_143c18fa0 body=259 status=ok
// SIG undefined FUN_143c18fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c18fa0(longlong param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar1 = _guard_xfg_dispatch_icall_nop("root",param_2);
  if ((iVar1 != 0) && (pcVar2 = strchr(param_2,0x5f), pcVar2 == (char *)0x0)) {
    FUN_143c18430(param_1 + 0x188,"Languages",param_2,param_3);
    uVar3 = FUN_143c18070(param_1,0,param_3);
    return uVar3;
  }
  local_50 = FUN_143a8d9f0(local_38,param_2,0xffffffff,0);
  local_48 = local_50;
  local_58 = FUN_143a8dcd0(param_3,local_50);
  FUN_143a8dc60(local_38);
  return local_58;
}



// FUNCTION 143c190b0 FUN_143c190b0 body=2558 status=ok
// SIG undefined FUN_143c190b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c190b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 auStack_6a8 [32];
  char *local_688;
  undefined4 *local_680;
  char *local_678;
  undefined8 local_670;
  char local_668;
  char local_667;
  undefined1 local_666;
  undefined1 local_665;
  undefined1 local_664;
  undefined4 local_660;
  char local_65c;
  char local_65b;
  char local_65a;
  char *local_658;
  longlong *local_650;
  longlong local_648;
  char *local_640;
  char *local_638;
  longlong *local_630;
  char *local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  longlong *local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  char local_5d8 [24];
  undefined1 local_5c0 [24];
  undefined1 local_5a8 [40];
  undefined1 local_580 [40];
  undefined1 local_558 [40];
  undefined1 local_530 [40];
  undefined1 local_508 [40];
  undefined1 local_4e0 [40];
  undefined1 local_4b8 [48];
  undefined1 local_488 [216];
  undefined1 local_3b0 [216];
  undefined1 local_2d8 [216];
  undefined1 local_200 [216];
  undefined1 local_128 [160];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_5e0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  FUN_143a8ac30(local_5a8);
  local_658 = (char *)FUN_143accb70(param_2);
  sVar2 = _guard_xfg_dispatch_icall_nop(local_658);
  if (sVar2 == 0) {
    local_658 = "root";
  }
  local_638 = (char *)FUN_143b52800(param_2);
  local_640 = (char *)FUN_143b52030(param_2);
  local_628 = (char *)FUN_143ba2b50(param_2);
  sVar2 = _guard_xfg_dispatch_icall_nop(local_638);
  local_668 = sVar2 != 0;
  local_666 = local_668;
  sVar2 = _guard_xfg_dispatch_icall_nop(local_640);
  local_667 = sVar2 != 0;
  local_664 = local_667;
  sVar2 = _guard_xfg_dispatch_icall_nop(local_628);
  local_665 = sVar2 != 0;
  local_65a = local_665;
  if ((int)param_1[0x30] == 1) {
    if ((local_668 != '\0') && (local_667 != '\0')) {
      local_670 = 0;
      local_678 = local_640;
      local_680 = (undefined4 *)&DAT_145d1f2c8;
      local_688 = local_638;
      FUN_143c19ba0(local_128,0x9d,local_658,&DAT_145d1f2c8);
      FUN_143c19b60(param_1,local_128,local_5a8);
      cVar1 = FUN_143a90330(local_5a8);
      if (cVar1 == '\0') {
        local_668 = '\0';
        local_667 = '\0';
        goto LAB_143c1936b;
      }
    }
    if (local_668 != '\0') {
      local_680 = (undefined4 *)0x0;
      local_688 = local_638;
      FUN_143c19ba0(local_128,0x9d,local_658,&DAT_145d1f2c8);
      FUN_143c19b60(param_1,local_128,local_5a8);
      cVar1 = FUN_143a90330(local_5a8);
      if (cVar1 == '\0') {
        local_668 = '\0';
        goto LAB_143c1936b;
      }
    }
    if (local_667 != '\0') {
      local_680 = (undefined4 *)0x0;
      local_688 = local_640;
      FUN_143c19ba0(local_128,0x9d,local_658,&DAT_145d1f2c8);
      FUN_143c19b60(param_1,local_128,local_5a8);
      cVar1 = FUN_143a90330(local_5a8);
      if (cVar1 == '\0') {
        local_667 = '\0';
      }
    }
  }
LAB_143c1936b:
  cVar1 = FUN_143a90330(local_5a8);
  if ((cVar1 != '\0') || (cVar1 = FUN_143a903a0(local_5a8), cVar1 != '\0')) {
    FUN_143c19b60(param_1,local_658,local_5a8);
  }
  FUN_143a8ac30(local_580);
  FUN_143a8ac30(local_558);
  local_650 = (longlong *)0x0;
  local_660 = 0;
  if (local_668 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1,local_638,local_558);
    FUN_143a8e070(local_580,uVar3);
  }
  if (local_667 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1,local_640,local_558);
    FUN_143c18120(param_1,local_580,uVar3);
  }
  if (local_65a != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,local_628,local_558);
    FUN_143c18120(param_1,local_580,uVar3);
  }
  FUN_143b37590(local_580,param_1 + 0x96,param_1 + 0x9b);
  FUN_143b37590(local_580,param_1 + 0xa0,param_1 + 0xa5);
  local_650 = (longlong *)FUN_143a8b390(param_2,&local_660);
  if ((local_650 != (longlong *)0x0) && (cVar1 = FUN_143a8b110(local_660), cVar1 != '\0')) {
    FUN_143a8ac30(local_530);
    while (local_648 = (**(code **)(*local_650 + 0x20))(local_650,0,&local_660), local_648 != 0) {
      local_688 = (char *)&local_660;
      FUN_143a8b730(param_2,local_648,local_88,100);
      (**(code **)(*param_1 + 0x60))(param_1,local_648,local_558);
      FUN_143b37590(local_558,param_1 + 0x96,param_1 + 0x9b);
      FUN_143b37590(local_558,param_1 + 0xa0,param_1 + 0xa5);
      (**(code **)(*param_1 + 0x68))(param_1,local_648,local_88,local_530);
      FUN_143b37590(local_530,param_1 + 0x96,param_1 + 0x9b);
      FUN_143b37590(local_530,param_1 + 0xa0,param_1 + 0xa5);
      local_608 = FUN_143a8d9f0(local_4e0,local_88,0xffffffff,0);
      local_5e8 = local_608;
      local_65b = FUN_143b0c130(local_530,local_608);
      FUN_143a8dc60(local_4e0);
      if (local_65b == '\0') {
        local_620 = FUN_143a8d9f0(local_4b8,local_648,0xffffffff,0);
        local_5f0 = local_620;
        local_65c = FUN_143b0c130(local_558,local_620);
        FUN_143a8dc60(local_4b8);
        if (local_65c == '\0') {
          uVar3 = FUN_143c18120(param_1,local_580,local_558);
          uVar3 = FUN_143acc590(uVar3,0x3d);
          FUN_143a8e070(uVar3);
        }
        else {
          FUN_143a8ac30(local_508);
          FUN_143b68520(local_2d8,local_558);
          FUN_143b68520(local_200,local_530);
          FUN_143baba50(local_5d8);
          local_660 = 0;
          local_680 = &local_660;
          local_688 = local_5d8;
          FUN_143c04ef0(param_1[0x93],local_2d8,2,local_508);
          FUN_143c18120(param_1,local_580,local_508);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_5d8);
          _eh_vector_destructor_iterator_
                    (local_2d8,0xd8,2,
                     Concurrency::
                     call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                     ::
                     ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    );
          FUN_143a8dc60(local_508);
        }
      }
      else {
        FUN_143c18120(param_1,local_580,local_530);
      }
    }
    local_5f8 = local_650;
    local_630 = local_650;
    if (local_650 == (longlong *)0x0) {
      local_618 = 0;
    }
    else {
      local_618 = (**(code **)*local_650)(local_650,1);
    }
    FUN_143a8dc60(local_530);
  }
  cVar1 = FUN_143a903a0(local_580);
  if (cVar1 == '\0') {
    FUN_143b68520(local_488,local_5a8);
    FUN_143b68520(local_3b0,local_580);
    FUN_143baba50(local_5c0);
    local_660 = 0;
    local_680 = &local_660;
    local_688 = local_5c0;
    FUN_143c04ef0(param_1[0x92],local_488,2,param_3);
    local_610 = FUN_143c18070(param_1,0,param_3);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_5c0);
    _eh_vector_destructor_iterator_
              (local_488,0xd8,2,
               Concurrency::
               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               ::
               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              );
    FUN_143a8dc60(local_558);
    FUN_143a8dc60(local_580);
    FUN_143a8dc60(local_5a8);
  }
  else {
    FUN_143a8dcd0(param_3,local_5a8);
    local_600 = FUN_143c18070(param_1,0,param_3);
    FUN_143a8dc60(local_558);
    FUN_143a8dc60(local_580);
    FUN_143a8dc60(local_5a8);
    local_610 = local_600;
  }
  return local_610;
}



// FUNCTION 143c19ab0 FUN_143c19ab0 body=176 status=ok
// SIG undefined FUN_143c19ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c19ab0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1c8 = 0;
  local_1b0 = FUN_143a8a690(local_198,param_2,0,0);
  local_1a8 = local_1b0;
  local_1b8 = (**(code **)(*param_1 + 0x30))(param_1,local_1b0,param_3);
  FUN_143a8acf0(local_198);
  return local_1b8;
}



// FUNCTION 143c19b60 FUN_143c19b60 body=60 status=ok
// SIG undefined FUN_143c19b60(void)

void FUN_143c19b60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c185a0(param_1 + 0x188,"Languages",param_2,param_3);
  return;
}



// FUNCTION 143c19ba0 FUN_143c19ba0 body=300 status=ok
// SIG undefined FUN_143c19ba0(void)

/* WARNING: Removing unreachable block (ram,0x000143c19c02) */

longlong FUN_143c19ba0(char *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  undefined8 *local_30;
  char *local_28;
  char *local_20;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    lVar2 = 0xffffffff;
  }
  else {
    local_res18[0] = param_3;
    local_res18[1] = param_4;
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
    local_30 = local_res18;
    local_28 = param_1;
LAB_143c19bfc:
    puVar3 = local_30 + 1;
    local_20 = (char *)*local_30;
    if (local_20 != (char *)0x0) {
      for (; local_30 = puVar3, local_28 != param_1 + ((ulonglong)param_2 - 1);
          local_28 = local_28 + 1) {
        cVar1 = *local_20;
        local_20 = local_20 + 1;
        if (cVar1 == '\0') break;
        *local_28 = cVar1;
      }
      goto LAB_143c19bfc;
    }
    *local_28 = '\0';
    lVar2 = (longlong)local_28 - (longlong)param_1;
  }
  return lVar2;
}



// FUNCTION 143c19cd0 FUN_143c19cd0 body=80 status=ok
// SIG undefined FUN_143c19cd0(void)

void FUN_143c19cd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c18430(param_1 + 0x308,"Countries",param_2,param_3);
  FUN_143c18070(param_1,2,param_3);
  return;
}



// FUNCTION 143c19d20 FUN_143c19d20 body=80 status=ok
// SIG undefined FUN_143c19d20(void)

void FUN_143c19d20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c18430(param_1 + 0x188,"Scripts",param_2,param_3);
  FUN_143c18070(param_1,1,param_3);
  return;
}



// FUNCTION 143c19d70 FUN_143c19d70 body=93 status=ok
// SIG undefined FUN_143c19d70(void)

void FUN_143c19d70(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b11730(param_2);
  FUN_143c18430(param_1 + 0x188,"Scripts",uVar1,param_3);
  FUN_143c18070(param_1,1,param_3);
  return;
}



// FUNCTION 143c19dd0 FUN_143c19dd0 body=80 status=ok
// SIG undefined FUN_143c19dd0(void)

void FUN_143c19dd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c18430(param_1 + 0x188,"Variants",param_2,param_3);
  FUN_143c18070(param_1,3,param_3);
  return;
}



// FUNCTION 143c19e20 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::PluralFormat::PluralSelector::vftable;
  return;
}



// FUNCTION 143c19e40 FUN_143c19e40 body=943 status=ok
// SIG undefined FUN_143c19e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c19e40(undefined8 param_1,int param_2,longlong *param_3,undefined8 param_4,double param_5
                 ,undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  int local_res10;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  char local_d8;
  int local_d4;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    local_c4 = FUN_143b772b0(param_1);
    local_d0 = FUN_143b779c0(param_1,param_2);
    uVar2 = FStoredID::GetData<unsigned_int>(local_d0);
    cVar1 = FUN_143c06020(uVar2);
    if (cVar1 == '\0') {
      local_b0 = 0.0;
      local_res10 = param_2;
    }
    else {
      local_b0 = (double)FUN_143e1ef80(param_1,local_d0);
      local_res10 = param_2 + 1;
    }
    FUN_143a8ac30(local_90);
    FUN_143a8d4f0(local_68,0,L"other",5);
    local_d8 = '\0';
    local_d4 = 0;
    do {
      local_bc = local_res10;
      local_d0 = FUN_143b779c0(param_1,local_res10);
      iVar3 = local_res10 + 1;
      local_b4 = FStoredID::GetData<unsigned_int>(local_d0);
      if (local_b4 == 6) break;
      uVar2 = FUN_143b779e0(param_1,iVar3);
      cVar1 = FUN_143c06020(uVar2);
      if (cVar1 == '\0') {
        local_res10 = iVar3;
        if (local_d8 == '\0') {
          cVar1 = FUN_143c06e30(param_1,local_d0,local_68);
          if (cVar1 == '\0') {
            cVar1 = FUN_143a903a0(local_90);
            if (cVar1 != '\0') {
              local_e8 = param_6;
              local_a8 = (**(code **)(*param_3 + 8))
                                   (param_3,local_40,param_4,SUB84(param_5 - local_b0,0));
              local_a0 = local_a8;
              FUN_143a8dcd0(local_90,local_a8);
              FUN_143a8dc60(local_40);
              if ((local_d4 != 0) && (cVar1 = FUN_143b0fd00(local_90,local_68), cVar1 == '\0')) {
                local_d8 = '\x01';
              }
            }
            if ((local_d8 == '\0') &&
               (cVar1 = FUN_143c06e30(param_1,local_d0,local_90), cVar1 != '\0')) {
              local_d8 = '\x01';
              local_d4 = iVar3;
            }
          }
          else if ((local_d4 == 0) &&
                  (local_d4 = iVar3, cVar1 = FUN_143b0fd00(local_90,local_68), cVar1 == '\0')) {
            local_d8 = '\x01';
          }
        }
      }
      else {
        local_c0 = iVar3;
        local_d0 = FUN_143b779c0(param_1,iVar3);
        local_res10 = local_res10 + 2;
        dVar4 = (double)FUN_143e1ef80(param_1,local_d0);
        if (param_5 == dVar4) {
          local_b8 = local_res10;
          FUN_143a8dc60(local_68);
          FUN_143a8dc60(local_90);
          return local_b8;
        }
      }
      local_res10 = FUN_143b77980(param_1,local_res10);
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_c4);
    local_c8 = local_d4;
    FUN_143a8dc60(local_68);
    FUN_143a8dc60(local_90);
  }
  else {
    local_c8 = 0;
  }
  return local_c8;
}



// FUNCTION 143c1a1f0 FUN_143c1a1f0 body=419 status=ok
// SIG undefined FUN_143c1a1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c1a1f0(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143a8d4f0(local_40,0,L"other",5);
    local_64 = FUN_143b772b0(param_1);
    local_68 = 0;
    local_res10 = param_2;
    do {
      local_50 = local_res10;
      local_58 = FUN_143b779c0(param_1,local_res10);
      local_res10 = local_res10 + 1;
      local_5c = FStoredID::GetData<unsigned_int>(local_58);
      if (local_5c == 6) break;
      cVar1 = FUN_143c06e30(param_1,local_58,param_3);
      if (cVar1 != '\0') {
        local_4c = local_res10;
        FUN_143a8dc60(local_40);
        return local_4c;
      }
      if ((local_68 == 0) && (cVar1 = FUN_143c06e30(param_1,local_58,local_40), cVar1 != '\0')) {
        local_68 = local_res10;
      }
      local_res10 = FUN_143b77980(param_1,local_res10);
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_64);
    local_60 = local_68;
    FUN_143a8dc60(local_40);
  }
  else {
    local_60 = 0;
  }
  return local_60;
}



// FUNCTION 143c1a3a0 FUN_143c1a3a0 body=257 status=ok
// SIG undefined FUN_143c1a3a0(void)

undefined8 *
FUN_143c1a3a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationFastLatinBuilder::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_143e1ce70(param_1 + 899,param_2,param_3,param_4,uVar1);
  FUN_143e1ce70(param_1 + 0x387,param_2);
  param_1[0x38b] = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c64) = 0;
  *(undefined4 *)(param_1 + 0x38d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c6c) = 0;
  *(undefined1 *)(param_1 + 0x38e) = 0;
  FUN_143a8ac30(param_1 + 0x38f);
  *(undefined4 *)(param_1 + 0x394) = 0;
  return param_1;
}



// FUNCTION 143c1a4b0 FUN_143c1a4b0 body=113 status=ok
// SIG undefined FUN_143c1a4b0(void)

void FUN_143c1a4b0(undefined8 *param_1)

{
  *param_1 = icu_53::CollationFastLatinBuilder::vftable;
  FUN_143aa79f0(param_1[0x38b]);
  FUN_143a8dc60(param_1 + 0x38f);
  FUN_143e1cf00(param_1 + 0x387);
  FUN_143e1cf00(param_1 + 899);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c1a530 FUN_143c1a530 body=54 status=ok
// SIG undefined FUN_143c1a530(void)

undefined8 FUN_143c1a530(undefined8 param_1,uint param_2)

{
  FUN_143c1a4b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1a570 FUN_143c1a570 body=156 status=ok
// SIG undefined FUN_143c1a570(void)

void FUN_143c1a570(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143b62060(param_1 + 0x1c18,(longlong)param_2,param_5);
  FUN_143b62060(param_1 + 0x1c18,param_3,param_5);
  FUN_143b62060(param_1 + 0x1c18,param_4,param_5);
  FUN_143c1a610(param_1,param_3,param_5);
  FUN_143c1a610(param_1,param_4,param_5);
  return;
}



// FUNCTION 143c1a610 FUN_143c1a610 body=194 status=ok
// SIG undefined FUN_143c1a610(void)

void FUN_143c1a610(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (((cVar1 == '\0') && (param_2 != 0)) && ((int)(param_2 >> 0x20) != 1)) {
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x1c38);
    uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(param_1 + 0x1c38);
    uVar3 = FUN_143c1a6e0(uVar4,uVar2,param_2 & 0xffffffffffff3fff);
    if ((int)uVar3 < 0) {
      FUN_143e1d240(param_1 + 0x1c38,param_2 & 0xffffffffffff3fff,~uVar3,param_3);
    }
  }
  return;
}



// FUNCTION 143c1a6e0 FUN_143c1a6e0 body=178 status=ok
// SIG undefined FUN_143c1a6e0(void)

uint FUN_143c1a6e0(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_res10;
  uint local_14;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    local_14 = 0;
    local_res10 = param_2;
    uVar3 = local_14;
    do {
      while( true ) {
        local_14 = uVar3;
        uVar1 = (int)(local_14 + local_res10) / 2;
        iVar2 = FUN_143c1a7a0(param_3,*(undefined8 *)(param_1 + (longlong)(int)uVar1 * 8));
        if (iVar2 == 0) {
          return uVar1;
        }
        if (-1 < iVar2) break;
        local_res10 = uVar1;
        uVar3 = local_14;
        if (uVar1 == local_14) {
          return ~local_14;
        }
      }
      uVar3 = uVar1;
    } while (uVar1 != local_14);
    uVar3 = ~(local_14 + 1);
  }
  return uVar3;
}



// FUNCTION 143c1a7a0 FUN_143c1a7a0 body=51 status=ok
// SIG undefined FUN_143c1a7a0(void)

undefined8 FUN_143c1a7a0(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143c1a7e0 FUN_143c1a7e0 body=448 status=ok
// SIG undefined FUN_143c1a7e0(void)

longlong FUN_143c1a7e0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_143a904f0(param_1 + 0x1c78);
    for (local_20 = 0; local_20 < 0x1c0; local_20 = local_20 + 1) {
      FUN_143a8e0c0(param_1 + 0x1c78,0);
    }
    iVar3 = FUN_143a904f0(param_1 + 0x1c78);
    for (local_28 = 0; local_28 < 0x1c0; local_28 = local_28 + 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x18 + (longlong)local_28 * 0x10);
      cVar1 = FUN_143c1c150(uVar5);
      if (cVar1 == '\0') {
        local_24 = FUN_143c1aca0(param_1,uVar5,
                                 *(undefined8 *)(param_1 + (longlong)local_28 * 0x10 + 0x20));
        if (0xffff < local_24) {
          iVar4 = FUN_143a904f0(param_1 + 0x1c78);
          if (iVar4 - iVar3 < 0x400) {
            uVar5 = FUN_143acc590(param_1 + 0x1c78,local_24 >> 0x10);
            FUN_143acc590(uVar5,(undefined2)local_24);
            local_24 = iVar4 - iVar3 | 0x800;
          }
          else {
            local_24 = 1;
          }
        }
        FUN_143a90bc0(param_1 + 0x1c78,iVar2 + local_28,(undefined2)local_24);
      }
    }
    lVar6 = FUN_143a8b110(*param_2);
  }
  else {
    lVar6 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return lVar6;
}



// FUNCTION 143c1a9a0 FUN_143c1a9a0 body=763 status=ok
// SIG undefined FUN_143c1a9a0(void)

ulonglong FUN_143c1a9a0(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_44;
  uint local_40;
  undefined2 local_3c;
  uint local_28;
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    iVar8 = *(int *)(param_1 + 0x1ca0);
    iVar3 = FUN_143a904f0(param_1 + 0x1c78);
    for (local_44 = 0; local_44 < 0x1c0; local_44 = local_44 + 1) {
      uVar10 = *(undefined8 *)(param_1 + 0x18 + (longlong)local_44 * 0x10);
      cVar2 = FUN_143c1c150(uVar10);
      if (cVar2 != '\0') {
        iVar4 = FUN_143a904f0(param_1 + 0x1c78);
        uVar5 = iVar4 - (iVar8 + 0x1c0);
        if ((int)uVar5 < 0x400) {
          bVar1 = true;
          local_28 = (uint)uVar10;
          local_40 = local_28 & 0x7fffffff;
          while ((uVar6 = FUN_143bca400(param_1 + 0x1c18,local_40), uVar6 != 0x1ff || (bVar1))) {
            uVar10 = FUN_143bca400(param_1 + 0x1c18,local_40 + 1);
            uVar11 = FUN_143bca400(param_1 + 0x1c18,local_40 + 2);
            uVar7 = FUN_143c1aca0(param_1,uVar10,uVar11);
            if (uVar7 == 1) {
              FUN_143acc590(param_1 + 0x1c78,uVar6 & 0xffff | 0x200);
            }
            else {
              local_3c = (undefined2)uVar7;
              if (uVar7 < 0x10000) {
                FUN_143acc590(param_1 + 0x1c78,uVar6 & 0xffff | 0x400);
                FUN_143acc590(param_1 + 0x1c78,local_3c);
              }
              else {
                FUN_143acc590(param_1 + 0x1c78,uVar6 & 0xffff | 0x600);
                uVar10 = FUN_143acc590(param_1 + 0x1c78,uVar7 >> 0x10);
                FUN_143acc590(uVar10,local_3c);
              }
            }
            bVar1 = false;
            local_40 = local_40 + 3;
          }
          FUN_143a90bc0(param_1 + 0x1c78,*(int *)(param_1 + 0x1ca0) + local_44,
                        uVar5 & 0xffff | 0x400);
        }
        else {
          FUN_143a90bc0(param_1 + 0x1c78,*(int *)(param_1 + 0x1ca0) + local_44,1);
        }
      }
    }
    iVar8 = FUN_143a904f0(param_1 + 0x1c78);
    if (iVar3 < iVar8) {
      FUN_143acc590(param_1 + 0x1c78,0x1ff);
    }
    cVar2 = FUN_143a90330(param_1 + 0x1c78);
    if (cVar2 == '\0') {
      uVar9 = 1;
    }
    else {
      *param_2 = 7;
      uVar9 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
  }
  else {
    uVar9 = (ulonglong)(uint3)(cVar2 >> 7) << 8;
  }
  return uVar9;
}



// FUNCTION 143c1aca0 FUN_143c1aca0 body=369 status=ok
// SIG undefined FUN_143c1aca0(void)

uint FUN_143c1aca0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  uint local_res10;
  uint local_res18;
  uint local_28;
  uint local_24;
  
  if (param_2 == 0) {
    local_28 = 0;
  }
  else if (param_2 == 0x101000100) {
    local_28 = 1;
  }
  else {
    local_28 = FUN_143c1bf90(param_1,param_2);
    if (local_28 != 1) {
      if (0xfff < local_28) {
        local_res10 = (uint)param_2;
        local_28 = local_28 | ((local_res10 & 0xc000) >> 0xb) + 8;
      }
      if (param_3 != 0) {
        local_24 = FUN_143c1bf90(param_1,param_3);
        if (local_24 == 1) {
          local_28 = 1;
        }
        else {
          local_res18 = (uint)param_3;
          if ((0xfff < local_28) && ((local_28 & 0x3e0) == 0xa0)) {
            if ((0x17f < (local_24 & 0x3e0)) && (((param_3 & 0xc000) == 0 && ((local_24 & 7) == 0)))
               ) {
              return local_28 & 0xfffffc1f | local_24 & 0x3e0;
            }
          }
          if ((local_24 < 0x3e1) || (0xfff < local_24)) {
            local_24 = local_24 | ((local_res18 & 0xc000) >> 0xb) + 8;
          }
          local_28 = local_28 << 0x10 | local_24;
        }
      }
    }
  }
  return local_28;
}



// FUNCTION 143c1ae20 FUN_143c1ae20 body=1168 status=ok
// SIG undefined FUN_143c1ae20(void)

ulonglong FUN_143c1ae20(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_30;
  uint local_28;
  uint local_20;
  uint local_10;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x1c58));
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x1c38);
    uVar5 = FUN_143aa7a40((longlong)(iVar3 << 1));
    *(undefined8 *)(param_1 + 0x1c58) = uVar5;
    if (*(longlong *)(param_1 + 0x1c58) == 0) {
      *param_2 = 7;
      uVar6 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
    else {
      local_38 = 1;
      uVar2 = FUN_143a8e4f0(param_1 + 0x1c78,1);
      local_30 = (uint)uVar2;
      local_20 = 0;
      local_28 = 0;
      local_44 = 0;
      local_48 = 0;
      local_3c = 0;
      for (local_40 = 0;
          iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_1 + 0x1c38), local_40 < iVar3; local_40 = local_40 + 1) {
        uVar5 = FUN_143bca400(param_1 + 0x1c38,local_40);
        uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
        if (uVar4 == local_20) {
LAB_143c1b0ad:
          local_10 = (uint)uVar5;
          uVar4 = local_10 >> 0x10;
          if (uVar4 != local_28) {
            if (local_44 == 0) {
              if (local_48 == 0) {
                local_48 = 0x180;
              }
              else {
                if (0x3df < local_48) {
                  *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) = 1;
                  goto LAB_143c1aefd;
                }
                local_48 = local_48 + 0x20;
              }
            }
            else if (uVar4 < 0x500) {
              if (local_48 == 0xa0) {
                local_48 = 0;
              }
              else {
                if (0x7f < local_48) {
                  *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) = 1;
                  goto LAB_143c1aefd;
                }
                local_48 = local_48 + 0x20;
              }
            }
            else if (uVar4 == 0x500) {
              local_48 = 0xa0;
            }
            else if (local_48 < 0xc0) {
              local_48 = 0xc0;
            }
            else {
              if (0x15f < local_48) {
                *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) = 1;
                goto LAB_143c1aefd;
              }
              local_48 = local_48 + 0x20;
            }
            local_3c = 0;
            local_28 = uVar4;
          }
          if (0x500 < (local_10 & 0x3f3f)) {
            if (6 < local_3c) {
              *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) = 1;
              goto LAB_143c1aefd;
            }
            local_3c = local_3c + 1;
          }
          if ((local_44 < 0xc00) || (0xff8 < local_44)) {
            *(ushort *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) =
                 (ushort)local_44 | (ushort)local_48 | (ushort)local_3c;
          }
          else {
            *(ushort *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) =
                 (ushort)local_44 | (ushort)local_3c;
          }
        }
        else {
          while (local_30 < uVar4 >> 0x18) {
            FUN_143a90bc0(param_1 + 0x1c78,local_38,(local_44 & 0xfff) << 4 | local_30);
            local_38 = local_38 + 1;
            if (*(int *)(param_1 + 0x1ca0) <= local_38) {
              local_30 = 0xff;
              break;
            }
            uVar2 = FUN_143a8e4f0(param_1 + 0x1c78,local_38);
            local_30 = (uint)uVar2;
          }
          if (*(uint *)(param_1 + 0x1c6c) <= uVar4) {
            if (local_44 < 0x1000) {
              local_44 = 0x1000;
            }
            else {
              if (0xf7ff < local_44) {
                *(undefined1 *)(param_1 + 0x1c70) = 1;
                *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) = 1;
                goto LAB_143c1aefd;
              }
              local_44 = local_44 + 0x400;
            }
LAB_143c1b08d:
            local_28 = 0x500;
            local_48 = 0xa0;
            local_3c = 0;
            local_20 = uVar4;
            goto LAB_143c1b0ad;
          }
          if (local_44 == 0) {
            local_44 = 0xc00;
            goto LAB_143c1b08d;
          }
          if (local_44 < 0xff8) {
            local_44 = local_44 + 8;
            goto LAB_143c1b08d;
          }
          *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)local_40 * 2) = 1;
        }
LAB_143c1aefd:
      }
      uVar6 = FUN_143a8b110(*param_2);
    }
  }
  else {
    uVar6 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar6;
}



// FUNCTION 143c1b2b0 FUN_143c1b2b0 body=417 status=ok
// SIG undefined FUN_143c1b2b0(void)

ulonglong FUN_143c1b2b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  byte local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  cVar1 = FUN_143a903a0(param_1 + 0x1c78);
  if (cVar1 == '\0') {
    *param_3 = 0x1b;
    return (ulonglong)param_3 & 0xffffffffffffff00;
  }
  cVar1 = FUN_143c1c190(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1c6c) = *(undefined4 *)(param_1 + 0x1c60);
  FUN_143c1b460(param_1,param_2,param_3);
  cVar1 = FUN_143c1ae20(param_1,param_3);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x1c70) != '\0') {
      *(undefined4 *)(param_1 + 0x1c6c) = *(undefined4 *)(param_1 + 0x1c64);
      FUN_143c1c360(param_1);
      FUN_143c1b460(param_1,param_2,param_3);
      cVar1 = FUN_143c1ae20(param_1,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (((*(char *)(param_1 + 0x1c70) == '\0') &&
        (cVar1 = FUN_143c1a7e0(param_1,param_3), cVar1 != '\0')) &&
       (cVar1 = FUN_143c1a9a0(param_1,param_3), cVar1 != '\0')) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
    FUN_143e1d310(param_1 + 0x1c18);
    FUN_143e1d310(param_1 + 0x1c38);
    return (ulonglong)local_18;
  }
  return 0;
}



// FUNCTION 143c1b460 FUN_143c1b460 body=687 status=ok
// SIG undefined FUN_143c1b460(void)

void FUN_143c1b460(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  short local_28;
  int local_24;
  int local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return;
  }
  local_24 = 0;
  local_28 = 0;
  do {
    if (local_28 == 0x180) {
      local_28 = 0x2000;
    }
    else if (local_28 == 0x2040) {
      FUN_143b62060(param_1 + 0x1c18,0x1ff,param_3);
      return;
    }
    local_20 = FUN_143b64340(param_2,local_28);
    local_18 = param_2;
    if (local_20 == 0xc0) {
      local_18 = *(longlong *)(param_2 + 0x20);
      local_20 = FUN_143b64340(local_18,local_28);
    }
    cVar1 = FUN_143c1b710(param_1,local_18,local_28,local_20,param_3);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 8) = 0x101000100;
      *(undefined8 *)(param_1 + 0x18 + (longlong)local_24 * 0x10) = 0x101000100;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + (longlong)local_24 * 0x10 + 0x20) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x18 + (longlong)local_24 * 0x10) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + (longlong)local_24 * 0x10 + 0x20) = *(undefined8 *)(param_1 + 0x10);
      FUN_143c1a610(param_1,*(undefined8 *)(param_1 + 8),param_3);
      FUN_143c1a610(param_1,*(undefined8 *)(param_1 + 0x10),param_3);
    }
    if ((local_28 == 0) && (cVar1 = FUN_143c1c150(*(undefined8 *)(param_1 + 8)), cVar1 == '\0')) {
      FUN_143c1a570(param_1,0x1ff,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                    param_3);
      *(undefined8 *)(param_1 + 0x18) = 0x180000000;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    local_24 = local_24 + 1;
    local_28 = local_28 + 1;
  } while( true );
}



// FUNCTION 143c1b710 FUN_143c1b710 body=1152 status=ok
// SIG undefined FUN_143c1b710(void)

ulonglong FUN_143c1b710(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  cVar3 = FUN_143a8b0e0(*param_5);
  if (cVar3 != '\0') {
    return (ulonglong)(uint3)(cVar3 >> 7) << 8;
  }
  uVar4 = FUN_143b679b0(param_2,param_4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  cVar3 = FUN_143bd8370(uVar4);
  if (cVar3 == '\0') {
    uVar9 = FUN_143b67480(uVar4);
    iVar5 = (int)uVar9;
    if (iVar5 == 4) {
      uVar8 = FUN_143bd83c0(uVar4);
      *(undefined8 *)(param_1 + 8) = uVar8;
      uVar8 = FUN_143bd83f0(uVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar8;
    }
    else if (iVar5 == 5) {
      iVar5 = FUN_143b67bd0(uVar4);
      puVar1 = (undefined4 *)(*(longlong *)(param_2 + 8) + (longlong)iVar5 * 4);
      uVar9 = FUN_143bd8410(uVar4);
      if (2 < (int)uVar9) {
        return uVar9 & 0xffffffffffffff00;
      }
      uVar8 = FUN_143bd7d60(*puVar1);
      *(undefined8 *)(param_1 + 8) = uVar8;
      if ((int)uVar9 == 2) {
        uVar8 = FUN_143bd7d60(puVar1[1]);
        *(undefined8 *)(param_1 + 0x10) = uVar8;
      }
    }
    else if (iVar5 == 6) {
      iVar5 = FUN_143b67bd0(uVar4);
      puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar5 * 8);
      uVar9 = FUN_143bd8410(uVar4);
      if (2 < (int)uVar9) {
        return uVar9 & 0xffffffffffffff00;
      }
      *(undefined8 *)(param_1 + 8) = *puVar2;
      if ((int)uVar9 == 2) {
        *(undefined8 *)(param_1 + 0x10) = puVar2[1];
      }
    }
    else {
      if (iVar5 == 9) {
        uVar9 = FUN_143c1bba0(param_1,param_2,uVar4,param_5);
        return uVar9;
      }
      if (iVar5 != 0xe) {
        return uVar9 & 0xffffffffffffff00;
      }
      uVar8 = FUN_143bd81d0(param_2,param_3,uVar4);
      *(undefined8 *)(param_1 + 8) = uVar8;
    }
  }
  else {
    uVar8 = FUN_143bd7d60(uVar4);
    *(undefined8 *)(param_1 + 8) = uVar8;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar9 = (ulonglong)(*(longlong *)(param_1 + 0x10) == 0);
  }
  else {
    uVar6 = (uint)((ulonglong)*(longlong *)(param_1 + 8) >> 0x20);
    if (uVar6 == 0) {
      uVar9 = *(longlong *)(param_1 + 8) >> 0x20 & 0xffffffffffffff00;
    }
    else if (*(uint *)(param_1 + 0x1c68) < uVar6) {
      uVar9 = (ulonglong)(uint3)(*(uint *)(param_1 + 0x1c68) >> 8) << 8;
    }
    else if ((uVar6 < *(uint *)(param_1 + 0x1c6c)) &&
            (uVar7 = *(uint *)(param_1 + 8) & 0xffffc000, uVar7 != 0x5000000)) {
      uVar9 = (ulonglong)(uint3)(uVar7 >> 8) << 8;
    }
    else {
      uVar7 = *(uint *)(param_1 + 8) & 0x3f3f;
      if (uVar7 < 0x500) {
        uVar9 = (ulonglong)(uint3)(uVar7 >> 8) << 8;
      }
      else {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          uVar7 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
          if (uVar7 == 0) {
            bVar10 = *(uint *)(param_1 + 0x1c6c) <= uVar6;
          }
          else {
            cVar3 = FUN_143c1c010(param_1,uVar6,uVar7);
            bVar10 = cVar3 != '\0';
          }
          if (!bVar10) {
            return 0;
          }
          uVar6 = *(uint *)(param_1 + 0x10);
          if (uVar6 >> 0x10 == 0) {
            return (ulonglong)(byte)(uVar6 >> 0x18) << 8;
          }
          if (((uVar7 != 0) && (uVar7 < *(uint *)(param_1 + 0x1c6c))) &&
             ((uVar6 & 0xffffc000) != 0x5000000)) {
            return (ulonglong)(uint3)((uVar6 & 0xffffc000) >> 8) << 8;
          }
          if ((uVar6 & 0x3f3f) < 0x500) {
            return (ulonglong)(uint3)((uVar6 & 0x3f3f) >> 8) << 8;
          }
        }
        if (((*(ulonglong *)(param_1 + 8) | *(ulonglong *)(param_1 + 0x10)) & 0xc0) == 0) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
      }
    }
  }
  return uVar9;
}



// FUNCTION 143c1bba0 FUN_143c1bba0 body=928 status=ok
// SIG undefined FUN_143c1bba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c1bba0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  char local_a8;
  byte local_a7;
  byte local_a6;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar3 = FUN_143b67bd0(param_3);
    local_90 = *(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 2;
    uVar4 = FUN_143bd8fd0(local_90);
    local_9c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(param_1 + 0x1c18);
    local_b8 = param_4;
    cVar1 = FUN_143c1b710(param_1,param_2,0xffffffff,uVar4);
    if (cVar1 == '\0') {
      local_b8 = param_4;
      FUN_143c1a570(param_1,0x1ff,0x101000100,0);
    }
    else {
      local_b8 = param_4;
      FUN_143c1a570(param_1,0x1ff,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    }
    local_a0 = -1;
    local_a8 = '\0';
    FUN_143e22eb0(local_78,local_90 + 4,0,param_4);
    while (cVar1 = FUN_143e23230(local_78,param_4), cVar1 != '\0') {
      local_98 = FPlugin::GetDescriptor(local_78);
      uVar2 = FUN_143a8e4f0(local_98,0);
      local_a4 = FUN_143c1bf40(uVar2);
      if (-1 < local_a4) {
        if (local_a4 == local_a0) {
          if (local_a8 != '\0') {
            local_b8 = param_4;
            FUN_143c1a570(param_1,local_a4,0x101000100,0);
            local_a8 = '\0';
          }
        }
        else {
          if (local_a8 != '\0') {
            local_b8 = param_4;
            FUN_143c1a570(param_1,local_a0,*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)(param_1 + 0x10));
          }
          uVar4 = FUN_143b1dc50(local_78);
          iVar3 = FUN_143a904f0(local_98);
          if ((iVar3 == 1) &&
             (local_b8 = param_4, cVar1 = FUN_143c1b710(param_1,param_2,0xffffffff,uVar4),
             cVar1 != '\0')) {
            local_a8 = '\x01';
          }
          else {
            local_b8 = param_4;
            FUN_143c1a570(param_1,local_a4,0x101000100,0);
            local_a8 = '\0';
          }
          local_a0 = local_a4;
        }
      }
    }
    if (local_a8 != '\0') {
      local_b8 = param_4;
      FUN_143c1a570(param_1,local_a0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    }
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      *(ulonglong *)(param_1 + 8) = (longlong)local_9c | 0x180000000;
      *(undefined8 *)(param_1 + 0x10) = 0;
      local_a6 = 1;
      FUN_143e22fe0(local_78);
      uVar5 = (ulonglong)local_a6;
    }
    else {
      local_a7 = 0;
      FUN_143e22fe0(local_78);
      uVar5 = (ulonglong)local_a7;
    }
  }
  else {
    uVar5 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar5;
}



// FUNCTION 143c1bf40 FUN_143c1bf40 body=66 status=ok
// SIG undefined FUN_143c1bf40(void)

uint FUN_143c1bf40(ushort param_1)

{
  uint uVar1;
  
  if (param_1 < 0x180) {
    uVar1 = (uint)param_1;
  }
  else if ((param_1 < 0x2000) || (0x203f < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1 - 0x1e80;
  }
  return uVar1;
}



// FUNCTION 143c1bf90 FUN_143c1bf90 body=119 status=ok
// SIG undefined FUN_143c1bf90(void)

undefined2 FUN_143c1bf90(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x1c38);
  uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
          ::GetObjectForTimerManager(param_1 + 0x1c38);
  iVar2 = FUN_143c1a6e0(uVar3,uVar1,param_2 & 0xffffffffffff3fff);
  return *(undefined2 *)(*(longlong *)(param_1 + 0x1c58) + (longlong)iVar2 * 2);
}



// FUNCTION 143c1c010 FUN_143c1c010 body=310 status=ok
// SIG undefined FUN_143c1c010(void)

ulonglong FUN_143c1c010(longlong param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_14;
  
  if (param_2 < *(uint *)(param_1 + 0x1c6c)) {
    if (param_3 < *(uint *)(param_1 + 0x1c6c)) {
      if (param_2 < *(uint *)(param_1 + 0x1c60)) {
        if (param_3 < *(uint *)(param_1 + 0x1c60)) {
          local_14 = 1;
          while( true ) {
            uVar1 = FUN_143a8e4f0(param_1 + 0x1c78,local_14);
            uVar2 = (uint)uVar1;
            if (param_2 >> 0x18 <= uVar2) break;
            if (param_3 >> 0x18 <= uVar2) {
              return (ulonglong)(byte)(uVar1 >> 8) << 8;
            }
            local_14 = local_14 + 1;
          }
          uVar3 = (ulonglong)(param_3 >> 0x18 <= uVar2);
        }
        else {
          uVar3 = (ulonglong)(uint3)(*(uint *)(param_1 + 0x1c60) >> 8) << 8;
        }
      }
      else {
        uVar3 = (ulonglong)(*(uint *)(param_1 + 0x1c60) <= param_3);
      }
    }
    else {
      uVar3 = (ulonglong)(uint3)(*(uint *)(param_1 + 0x1c6c) >> 8) << 8;
    }
  }
  else {
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x1c6c) <= param_3);
  }
  return uVar3;
}



// FUNCTION 143c1c150 FUN_143c1c150 body=59 status=ok
// SIG undefined FUN_143c1c150(void)

undefined1 FUN_143c1c150(longlong param_1)

{
  undefined1 local_18;
  
  if (((int)((ulonglong)param_1 >> 0x20) == 1) && (param_1 != 0x101000100)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143c1c190 FUN_143c1c190 body=462 status=ok
// SIG undefined FUN_143c1c190(void)

ulonglong FUN_143c1c190(ulonglong param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_28;
  undefined2 local_20;
  ushort local_18;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    FUN_143a8e0c0(param_1 + 0x1c78,0);
    for (local_28 = 0; local_28 < *(int *)(param_2 + 0x70);
        local_28 = local_28 + 2 +
                   (uint)*(ushort *)(*(longlong *)(param_2 + 0x68) + (longlong)(local_28 + 1) * 2))
    {
      uVar4 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x68) + (longlong)local_28 * 2);
      sVar1 = *(short *)(*(longlong *)(param_2 + 0x68) + (longlong)(local_28 + 2) * 2);
      if (sVar1 == 0x1004) {
        *(uint *)(param_1 + 0x1c60) = (uVar4 & 0xff00) << 0x10;
        uVar3 = FUN_143a904f0(param_1 + 0x1c78);
        *(undefined4 *)(param_1 + 0x1ca0) = uVar3;
        local_18 = (ushort)*(undefined4 *)(param_1 + 0x1ca0) | 0x100;
        FUN_143a90bc0(param_1 + 0x1c78,0,local_18);
      }
      else {
        if (sVar1 == 0x19) {
          if (*(int *)(param_1 + 0x1c60) == 0) {
            *param_3 = 5;
            return (ulonglong)param_3 & 0xffffffffffffff00;
          }
          *(uint *)(param_1 + 0x1c64) = (uVar4 & 0xff00) << 0x10;
          uVar4 = uVar4 << 0x18 | 0xffffff;
          *(uint *)(param_1 + 0x1c68) = uVar4;
          return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
        }
        if (*(int *)(param_1 + 0x1c60) == 0) {
          if (0x7f < (uVar4 & 0xff)) {
            return param_1 & 0xffffffffffffff00;
          }
          local_20 = (undefined2)(uVar4 & 0xff);
          FUN_143acc590(param_1 + 0x1c78,local_20);
        }
      }
    }
    *param_3 = 5;
    uVar5 = (ulonglong)param_3 & 0xffffffffffffff00;
  }
  else {
    uVar5 = (ulonglong)(uint3)(cVar2 >> 7) << 8;
  }
  return uVar5;
}



// FUNCTION 143c1c360 FUN_143c1c360 body=94 status=ok
// SIG undefined FUN_143c1c360(void)

void FUN_143c1c360(longlong param_1)

{
  FUN_143e1d310(param_1 + 0x1c18);
  FUN_143e1d310(param_1 + 0x1c38);
  *(undefined1 *)(param_1 + 0x1c70) = 0;
  FUN_143a99400(param_1 + 0x1c78,*(undefined4 *)(param_1 + 0x1ca0));
  return;
}



// FUNCTION 143c1c3c0 FUN_143c1c3c0 body=92 status=ok
// SIG undefined FUN_143c1c3c0(void)

undefined8 *
FUN_143c1c3c0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_143c1c740(param_1,param_2,param_3,param_4,param_5,param_6);
  *param_1 = icu_53::AbsoluteValueSubstitution::vftable;
  return param_1;
}



// FUNCTION 143c1c420 FUN_143c1c420 body=266 status=ok
// SIG undefined FUN_143c1c420(void)

undefined8 *
FUN_143c1c420(undefined8 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_143c1c740(param_1,param_2,param_3,param_4,param_5,param_6,0xfffffffffffffffe);
  *param_1 = icu_53::FractionalPartSubstitution::vftable;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  cVar1 = FUN_143b0fc90(param_5,&DAT_145d207e0,2);
  if (((cVar1 == '\0') || (cVar1 = FUN_143b0fc90(param_5,&DAT_145d207d8,3), cVar1 == '\0')) ||
     (lVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(param_1), param_3 == lVar2)) {
    *(undefined1 *)(param_1 + 4) = 1;
    cVar1 = FUN_143b0fc90(param_5,&DAT_145d207d8,3);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x21) = 0;
    }
  }
  else {
    uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
            ::GetBoundProgramCounterForTimerManager(param_1);
    FUN_143c1ec50(uVar3);
  }
  return param_1;
}



// FUNCTION 143c1c530 FUN_143c1c530 body=92 status=ok
// SIG undefined FUN_143c1c530(void)

undefined8 *
FUN_143c1c530(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_143c1c740(param_1,param_2,param_3,param_4,param_5,param_6);
  *param_1 = icu_53::IntegralPartSubstitution::vftable;
  return param_1;
}



// FUNCTION 143c1c590 FUN_143c1c590 body=231 status=ok
// SIG undefined FUN_143c1c590(void)

undefined8 *
FUN_143c1c590(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_143c1c740(param_1,param_2,param_5,param_6,param_7,param_8,0xfffffffffffffffe);
  *param_1 = icu_53::ModulusSubstitution::vftable;
  param_1[4] = param_3;
  param_1[6] = 0;
  uVar2 = FUN_143beb9e0(param_3);
  param_1[5] = uVar2;
  if (param_1[5] == 0) {
    *param_8 = 9;
  }
  cVar1 = FUN_143b0fc90(param_7,&DAT_145d207d8,3);
  if (cVar1 == '\0') {
    param_1[6] = param_4;
  }
  return param_1;
}



// FUNCTION 143c1c680 FUN_143c1c680 body=182 status=ok
// SIG undefined FUN_143c1c680(void)

undefined8 *
FUN_143c1c680(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  
  FUN_143c1c740(param_1,param_2,param_4,param_5,param_6,param_7,0xfffffffffffffffe);
  *param_1 = icu_53::MultiplierSubstitution::vftable;
  param_1[4] = param_3;
  uVar1 = FUN_143beb9e0(param_1[4]);
  param_1[5] = uVar1;
  if ((double)param_1[4] == 0.0) {
    *param_7 = 9;
  }
  return param_1;
}



// FUNCTION 143c1c740 FUN_143c1c740 body=911 status=ok
// SIG undefined FUN_143c1c740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143c1c740(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::NFSubstitution::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143a8d3a0(local_40,param_5);
  iVar4 = FUN_143a904f0(param_5);
  if (1 < iVar4) {
    uVar2 = FUN_143a8e4f0(param_5,0);
    local_88 = (uint)uVar2;
    iVar4 = FUN_143a904f0(param_5);
    uVar2 = FUN_143a8e4f0(param_5,iVar4 + -1);
    if (local_88 == uVar2) {
      iVar4 = FUN_143a904f0(param_5);
      FUN_143ace4e0(local_40,iVar4 + -1,1);
      FUN_143ace4e0(local_40,0,1);
      goto LAB_143c1c88e;
    }
  }
  iVar4 = FUN_143a904f0(param_5);
  if (iVar4 != 0) {
    *param_6 = 9;
    FUN_143a8dc60(local_40);
    return param_1;
  }
LAB_143c1c88e:
  iVar4 = FUN_143a904f0(local_40);
  if (iVar4 == 0) {
    param_1[2] = param_3;
  }
  else {
    sVar3 = FUN_143a8e4f0(local_40,0);
    if (sVar3 == 0x25) {
      uVar5 = FUN_143b710a0(param_4,local_40,param_6);
      param_1[2] = uVar5;
    }
    else {
      sVar3 = FUN_143a8e4f0(local_40,0);
      if ((sVar3 == 0x23) || (sVar3 = FUN_143a8e4f0(local_40,0), sVar3 == 0x30)) {
        local_68 = FUN_143b71830(param_4);
        if (local_68 == 0) {
          *param_6 = 2;
          FUN_143a8dc60(local_40);
          return param_1;
        }
        local_70 = FUN_143a8d310(0x300);
        if (local_70 == 0) {
          local_78 = 0;
        }
        else {
          local_78 = FUN_143b3a550(local_70,local_40,local_68,param_6);
        }
        local_50 = local_78;
        param_1[3] = local_78;
        if (param_1[3] == 0) {
          *param_6 = 7;
          FUN_143a8dc60(local_40);
          return param_1;
        }
        cVar1 = FUN_143a8b0e0(*param_6);
        if (cVar1 != '\0') {
          local_80 = (undefined8 *)param_1[3];
          local_60 = local_80;
          if (local_80 == (undefined8 *)0x0) {
            local_58 = 0;
          }
          else {
            local_58 = (**(code **)*local_80)(local_80,1);
          }
          param_1[3] = 0;
          FUN_143a8dc60(local_40);
          return param_1;
        }
      }
      else {
        sVar3 = FUN_143a8e4f0(local_40,0);
        if (sVar3 == 0x3e) {
          param_1[2] = param_3;
          param_1[3] = 0;
        }
        else {
          *param_6 = 9;
        }
      }
    }
  }
  FUN_143a8dc60(local_40);
  return param_1;
}



// FUNCTION 143c1cad0 FUN_143c1cad0 body=92 status=ok
// SIG undefined FUN_143c1cad0(void)

undefined8 *
FUN_143c1cad0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_143c1c740(param_1,param_2,param_3,param_4,param_5,param_6);
  *param_1 = icu_53::NullSubstitution::vftable;
  return param_1;
}



// FUNCTION 143c1cb30 FUN_143c1cb30 body=290 status=ok
// SIG undefined FUN_143c1cb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143c1cb30(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = FUN_143c1e990(local_40,param_6);
  local_60 = param_7;
  local_58 = local_68;
  local_50 = local_68;
  FUN_143c1c740(param_1,param_2,param_4,param_5);
  FUN_143a8dc60(local_40);
  *param_1 = icu_53::NumeratorSubstitution::vftable;
  param_1[4] = param_3;
  uVar2 = FUN_143beb9e0(param_1[4]);
  param_1[5] = uVar2;
  uVar1 = FUN_143bea7b0(param_6,&DAT_145d207e8,2);
  *(undefined1 *)(param_1 + 6) = uVar1;
  return param_1;
}



// FUNCTION 143c1cc60 FUN_143c1cc60 body=143 status=ok
// SIG undefined FUN_143c1cc60(void)

undefined8 *
FUN_143c1cc60(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  
  FUN_143c1c740(param_1,param_2,param_3,param_4,param_5,param_6,0xfffffffffffffffe);
  *param_1 = icu_53::SameValueSubstitution::vftable;
  cVar1 = FUN_143b0fc90(param_5,&DAT_145d207d0,2);
  if (cVar1 == '\0') {
    *param_6 = 9;
  }
  return param_1;
}



// FUNCTION 143c1ccf0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::AbsoluteValueSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cd20 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::FractionalPartSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cd50 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::IntegralPartSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cd80 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ModulusSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cdb0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::MultiplierSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cde0 FUN_143c1cde0 body=131 status=ok
// SIG undefined FUN_143c1cde0(void)

void FUN_143c1cde0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143c1ce70 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::NullSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cea0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::NumeratorSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1ced0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::SameValueSubstitution::vftable;
  FUN_143c1cde0(param_1);
  return;
}



// FUNCTION 143c1cf00 FUN_143c1cf00 body=80 status=ok
// SIG undefined FUN_143c1cf00(void)

undefined1 FUN_143c1cf00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143c1d020(param_1,param_2);
  if ((cVar1 == '\0') || (*(char *)(param_2 + 0x20) != *(char *)(param_1 + 0x20))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143c1cf50 FUN_143c1cf50 body=102 status=ok
// SIG undefined FUN_143c1cf50(void)

undefined1 FUN_143c1cf50(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143c1d020(param_1,param_2);
  if (((cVar1 == '\0') || (*(double *)(param_1 + 0x20) != *(double *)(param_2 + 0x20))) ||
     (*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143c1cfc0 FUN_143c1cfc0 body=82 status=ok
// SIG undefined FUN_143c1cfc0(void)

undefined1 FUN_143c1cfc0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143c1d020(param_1,param_2);
  if ((cVar1 == '\0') || (*(double *)(param_1 + 0x20) != *(double *)(param_2 + 0x20))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143c1d020 FUN_143c1d020 body=279 status=ok
// SIG undefined FUN_143c1d020(void)

undefined1 FUN_143c1d020(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_1c;
  uint local_18;
  
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
  cVar1 = FUN_143ab1e10(uVar3,uVar2);
  if (((cVar1 != '\0') && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(longlong *)(param_1 + 0x10) == 0) == (*(longlong *)(param_2 + 0x10) == 0))) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_1c = (uint)(*(longlong *)(param_2 + 0x18) == 0);
      local_18 = local_1c;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                        (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      local_18 = (uint)cVar1;
    }
    if (local_18 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c1d140 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d180 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d1c0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d200 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d240 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d280 FUN_143c1d280 body=54 status=ok
// SIG undefined FUN_143c1d280(void)

undefined8 FUN_143c1d280(undefined8 param_1,uint param_2)

{
  FUN_143c1cde0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d2c0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d300 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d340 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143c1d380 FUN_143c1d380 body=20 status=ok
// SIG undefined FUN_143c1d380(void)

undefined8 FUN_143c1d380(void)

{
  return 0x7fefffffffffffff;
}



// FUNCTION 143c1d3a0 FUN_143c1d3a0 body=15 status=ok
// SIG undefined FUN_143c1d3a0(void)

undefined8 FUN_143c1d3a0(void)

{
  return 0;
}



// FUNCTION 143c1d3b0 FUN_143c1d3b0 body=22 status=ok
// SIG undefined FUN_143c1d3b0(void)

undefined8 FUN_143c1d3b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 143c1d3d0 FUN_143c1d3d0 body=18 status=ok
// SIG undefined FUN_143c1d3d0(void)

undefined8 FUN_143c1d3d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 143c1d3f0 FUN_143c1d3f0 body=31 status=ok
// SIG undefined FUN_143c1d3f0(void)

ulonglong FUN_143c1d3f0(undefined8 param_1,ulonglong param_2)

{
  return param_2 ^ 0x8000000000000000;
}



// FUNCTION 143c1d410 FUN_143c1d410 body=30 status=ok
// SIG undefined FUN_143c1d410(void)

double FUN_143c1d410(undefined8 param_1,double param_2,double param_3)

{
  return param_2 + param_3;
}



// FUNCTION 143c1d430 FUN_143c1d430 body=66 status=ok
// SIG undefined FUN_143c1d430(void)

double FUN_143c1d430(longlong param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_143a917d0(param_3,*(undefined8 *)(param_1 + 0x20));
  return (param_3 - dVar1) + param_2;
}



// FUNCTION 143c1d480 FUN_143c1d480 body=34 status=ok
// SIG undefined FUN_143c1d480(void)

double FUN_143c1d480(longlong param_1,double param_2)

{
  return param_2 * *(double *)(param_1 + 0x20);
}



// FUNCTION 143c1d4b0 FUN_143c1d4b0 body=21 status=ok
// SIG undefined FUN_143c1d4b0(void)

undefined8 FUN_143c1d4b0(void)

{
  return 0;
}



// FUNCTION 143c1d4d0 FUN_143c1d4d0 body=30 status=ok
// SIG undefined FUN_143c1d4d0(void)

double FUN_143c1d4d0(undefined8 param_1,double param_2,double param_3)

{
  return param_2 / param_3;
}



// FUNCTION 143c1d4f0 FUN_143c1d4f0 body=24 status=ok
// SIG undefined FUN_143c1d4f0(void)

undefined8 FUN_143c1d4f0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 143c1d510 FUN_143c1d510 body=1121 status=ok
// SIG undefined FUN_143c1d510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c1d510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,char param_6,undefined8 param_7)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_258 [32];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  *local_238;
  char local_230;
  undefined8 local_228;
  byte local_218;
  undefined4 local_214;
  longlong *local_210;
  int local_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  longlong *local_1e8;
  longlong *local_1e0;
  int local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [40];
  undefined1 local_178 [128];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if ((char)param_1[4] == '\0') {
    local_228 = param_7;
    local_230 = param_6;
    local_238 = (call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                 *)0x0;
    uVar5 = FUN_143c1daa0(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_143a8d3a0(local_1a0,param_2);
    FUN_143b16ce0(local_1f8,1);
    local_200 = 0;
    FUN_143b74e90(local_178);
    local_210 = (longlong *)0x0;
    while( true ) {
      iVar3 = FUN_143a904f0(local_1a0);
      if (iVar3 < 1) break;
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1f8);
      if (iVar3 == 0) break;
      FUN_143b0fce0(local_1f8,0);
      FUN_143b686d0(local_f8);
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(param_1);
      local_238 = local_f8;
      FUN_143beafc0(uVar6,local_1a0,local_1f8,0x4024000000000000);
      local_214 = 0;
      local_208 = FUN_143b69360(local_f8);
      if (param_6 != '\0') {
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1f8);
        if (iVar3 == 0) {
          if (local_210 == (longlong *)0x0) {
            local_214 = 0;
            local_210 = (longlong *)FUN_143b37260(&local_214);
            cVar1 = FUN_143a8b0e0(local_214);
            if (cVar1 != '\0') {
              local_1b8 = local_210;
              local_1e8 = local_210;
              if (local_210 == (longlong *)0x0) {
                local_1b0 = 0;
              }
              else {
                local_1b0 = (**(code **)*local_210)(local_210);
              }
              local_210 = (longlong *)0x0;
            }
          }
          if (local_210 != (longlong *)0x0) {
            (**(code **)(*local_210 + 0xa0))(local_210,local_1a0,local_f8,local_1f8);
            local_208 = FUN_143b69360(local_f8);
          }
        }
      }
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1f8);
      if (iVar3 != 0) {
        FUN_143b75150(local_178,local_208 + 0x30U & 0xff);
        local_1d8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(param_3);
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1f8);
        FUN_143b0fce0(param_3,local_1d8 + iVar3);
        uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_1f8);
        FUN_143c177a0(local_1a0,0,uVar4);
        while( true ) {
          iVar3 = FUN_143a904f0(local_1a0);
          if (iVar3 < 1) break;
          sVar2 = FUN_143a8e4f0(local_1a0);
          if (sVar2 != 0x20) break;
          FUN_143c177a0(local_1a0,0,1);
          TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
          FUN_143b0fce0(param_3);
        }
      }
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
    }
    local_1c8 = local_210;
    local_1e0 = local_210;
    if (local_210 == (longlong *)0x0) {
      local_1c0 = 0;
    }
    else {
      local_1c0 = (**(code **)*local_210)(local_210,1);
    }
    iVar3 = FUN_143b75b00(local_178);
    if (iVar3 == 0) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = FUN_143b75c80(local_178);
    }
    local_200 = local_1d0;
    local_200 = (**(code **)(*param_1 + 0x50))(param_1,local_1d0,param_4);
    FUN_143b698c0(param_7,local_200);
    local_218 = 1;
    Audio::FAudioCaptureSynth::IsStreamOpen(local_178);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1f8);
    FUN_143a8dc60(local_1a0);
    uVar5 = (ulonglong)local_218;
  }
  return uVar5;
}



// FUNCTION 143c1d980 FUN_143c1d980 body=269 status=ok
// SIG undefined FUN_143c1d980(void)

undefined8
FUN_143c1d980(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  if (param_1[6] == 0) {
    uVar2 = FUN_143c1daa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    FUN_143c157b0(param_1[6],param_2,param_3,0,param_5,param_7);
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_3);
    if (iVar1 != 0) {
      local_18[0] = 0;
      local_10 = FUN_143b69180(param_7,local_18);
      local_10 = (**(code **)(*param_1 + 0x50))(param_1,local_10,param_4);
      FUN_143b698c0(param_7,local_10);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c1daa0 FUN_143c1daa0 body=522 status=ok
// SIG undefined FUN_143c1daa0(void)

bool FUN_143c1daa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  uVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_5);
  if (param_1[2] == 0) {
    if (param_1[3] != 0) {
      (**(code **)(*(longlong *)param_1[3] + 0xa0))(param_1[3],param_2,param_7,param_3);
    }
  }
  else {
    FUN_143beafc0(param_1[2],param_2,param_3,uVar3,param_7);
    if (((param_6 != '\0') && (cVar1 = FUN_143beaf60(param_1[2]), cVar1 == '\0')) &&
       (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_3), iVar2 == 0)) {
      local_38 = 0;
      local_30 = (longlong *)FUN_143b37260(&local_38);
      cVar1 = FUN_143a8b110(local_38);
      if (cVar1 != '\0') {
        (**(code **)(*local_30 + 0xa0))(local_30,param_2,param_7,param_3);
      }
      local_18 = local_30;
      local_28 = local_30;
      if (local_30 == (longlong *)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = (**(code **)*local_30)(local_30,1);
      }
    }
  }
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
  if (iVar2 == 0) {
    FUN_143b69930(param_7,0);
  }
  else {
    local_34 = 0;
    local_20 = FUN_143b69180(param_7,&local_34);
    local_20 = (**(code **)(*param_1 + 0x50))(param_1,local_20,param_4);
    FUN_143b698c0(param_7,local_20);
  }
  return iVar2 != 0;
}



// FUNCTION 143c1dcb0 FUN_143c1dcb0 body=48 status=ok
// SIG undefined FUN_143c1dcb0(void)

undefined1 FUN_143c1dcb0(void)

{
  undefined8 in_XMM3_Qa;
  undefined8 in_stack_00000038;
  
  FUN_143b698c0(in_stack_00000038,in_XMM3_Qa);
  return 1;
}



// FUNCTION 143c1dce0 FUN_143c1dce0 body=872 status=ok
// SIG undefined FUN_143c1dce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143c1dce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1a8 [32];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  *local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 local_168;
  int local_164;
  longlong local_160;
  int local_158;
  undefined4 local_154;
  undefined1 local_150 [16];
  int local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [40];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_128 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_154 = 0;
  local_164 = 0;
  FUN_143a8d3a0(local_120,param_2);
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_143b16ce0(local_150,1);
    FUN_143b686d0(local_f8);
    while ((iVar2 = FUN_143a904f0(local_120), 0 < iVar2 &&
           (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_150), iVar2 != 0))) {
      FUN_143b0fce0(local_150,0);
      uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(param_1);
      local_188 = local_f8;
      FUN_143beafc0(uVar4,local_120,local_150,0x3ff0000000000000);
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_150);
      if (iVar2 == 0) break;
      local_164 = local_164 + 1;
      local_140 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_3);
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_150);
      FUN_143b0fce0(param_3,local_140 + iVar2);
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_150);
      FUN_143ace4e0(local_120,0,uVar3);
      while ((iVar2 = FUN_143a904f0(local_120), 0 < iVar2 &&
             (sVar1 = FUN_143a8e4f0(local_120), sVar1 == 0x20))) {
        FUN_143ace4e0(local_120,0,1);
        TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
        ::GetIndex(param_3);
        FUN_143b0fce0(param_3);
      }
    }
    FUN_143a8dcd0(local_120,param_2);
    uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_3);
    FUN_143ace4e0(local_120,0,uVar3);
    FUN_143b0fce0(param_3,0);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_150);
  }
  local_130 = param_4;
  if (*(char *)(param_1 + 0x30) != '\0') {
    local_130 = 0x3ff0000000000000;
  }
  local_178 = param_7;
  local_180 = 0;
  local_188 = (call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               *)param_5;
  FUN_143c1daa0(param_1,local_120,param_3,local_130);
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar2 = FUN_143b69360(param_7,&local_154);
    local_138 = (longlong)iVar2;
    local_158 = 0;
    for (local_160 = 1; local_160 <= local_138; local_160 = local_160 * 10) {
      local_158 = local_158 + 1;
    }
    for (; 0 < local_164; local_164 = local_164 + -1) {
      local_160 = local_160 * 10;
    }
    FUN_143b698c0(param_7,(double)local_138 / (double)local_160);
  }
  local_168 = 1;
  FUN_143a8dc60(local_120);
  return local_168;
}



// FUNCTION 143c1e050 FUN_143c1e050 body=533 status=ok
// SIG undefined FUN_143c1e050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c1e050(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  char local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_143c1e3b0(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_143b74e90(local_98);
    FUN_143b76670(local_98,param_2);
    FUN_143b76470(local_98,0x14);
    FUN_143b763d0(local_98);
    local_c8 = '\0';
    local_c4 = FUN_143b75b00(local_98);
    while( true ) {
      local_c4 = local_c4 + -1;
      iVar2 = FUN_143b75b70(local_98);
      if (local_c4 < iVar2) break;
      if ((local_c8 == '\0') || (*(char *)(param_1 + 0x21) == '\0')) {
        local_c8 = '\x01';
      }
      else {
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1);
        FUN_143bad030(param_3,param_4 + iVar2,0x20);
      }
      if (local_c4 < 0) {
        local_c0 = 0;
      }
      else {
        cVar1 = FUN_143b75bf0(local_98,local_c4);
        local_c0 = cVar1 + -0x30;
      }
      local_b0 = (longlong)local_c0;
      local_bc = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(param_1);
      local_bc = param_4 + local_bc;
      uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(param_1);
      FUN_143beae80(uVar3,local_b0,param_3,local_bc);
    }
    if (local_c8 == '\0') {
      local_b8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(param_1);
      local_b8 = param_4 + local_b8;
      uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(param_1);
      FUN_143beae80(uVar3,0,param_3,local_b8);
    }
    Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
  }
  return;
}



// FUNCTION 143c1e270 FUN_143c1e270 body=21 status=ok
// SIG undefined FUN_143c1e270(void)

void FUN_143c1e270(void)

{
  return;
}



// FUNCTION 143c1e290 FUN_143c1e290 body=144 status=ok
// SIG undefined FUN_143c1e290(void)

void FUN_143c1e290(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1[6] == 0) {
    FUN_143c1e3b0(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    FUN_143c15690(param_1[6],uVar2,param_3,param_4 + iVar1);
  }
  return;
}



// FUNCTION 143c1e320 FUN_143c1e320 body=139 status=ok
// SIG undefined FUN_143c1e320(void)

void FUN_143c1e320(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1[6] == 0) {
    FUN_143c1e550(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    FUN_143c15720(param_1[6],uVar2,param_3,param_4 + iVar1);
  }
  return;
}



// FUNCTION 143c1e3b0 FUN_143c1e3b0 body=401 status=ok
// SIG undefined FUN_143c1e3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c1e3b0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  double local_58;
  int local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = (double)(**(code **)(*param_1 + 0x38))(param_1,param_2);
  dVar2 = (double)FUN_143a917b0(local_58);
  if ((local_58 == dVar2) && (param_1[2] != 0)) {
    local_50 = param_4 + (int)param_1[1];
    uVar1 = FUN_143beb9e0(local_58);
    FUN_143beae80(param_1[2],uVar1,param_3,local_50);
  }
  else if (param_1[2] == 0) {
    if (param_1[3] != 0) {
      FUN_143a8ac30(local_40);
      FUN_143b37620(param_1[3],local_58,local_40);
      FUN_143b42ea0(param_3,param_4 + (int)param_1[1],local_40);
      FUN_143a8dc60(local_40);
    }
  }
  else {
    FUN_143beadd0(param_1[2],local_58,param_3,param_4 + (int)param_1[1]);
  }
  return;
}



// FUNCTION 143c1e550 FUN_143c1e550 body=378 status=ok
// SIG undefined FUN_143c1e550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c1e550(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_1[2] == 0) {
    if (param_1[3] != 0) {
      local_50 = (**(code **)(*param_1 + 0x38))(param_1,(double)param_2);
      iVar1 = FUN_143b382d0(param_1[3]);
      if (iVar1 == 0) {
        local_50 = FUN_143a917b0(local_50);
      }
      FUN_143a8ac30(local_38);
      FUN_143b37620(param_1[3],local_50,local_38);
      FUN_143b42ea0(param_3,param_4 + (int)param_1[1],local_38);
      FUN_143a8dc60(local_38);
    }
  }
  else {
    local_58 = param_4 + (int)param_1[1];
    local_48 = *param_1;
    uVar2 = (**(code **)(local_48 + 0x40))(param_1,param_2);
    FUN_143beae80(param_1[2],uVar2,param_3,local_58);
  }
  return;
}



// FUNCTION 143c1e6d0 FUN_143c1e6d0 body=22 status=ok
// SIG undefined FUN_143c1e6d0(void)

void FUN_143c1e6d0(void)

{
  return;
}



// FUNCTION 143c1e6f0 FUN_143c1e6f0 body=672 status=ok
// SIG undefined FUN_143c1e6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c1e6f0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_res20;
  undefined1 auStack_178 [32];
  longlong local_158;
  double local_150;
  longlong local_148;
  longlong local_140;
  int local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined1 local_128 [48];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_150 = (double)(**(code **)(*param_1 + 0x38))(param_1,param_2);
  local_140 = FUN_143beb9e0(local_150);
  local_158 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(param_1);
  local_res20 = param_4;
  if (((char)param_1[6] != '\0') && (local_158 != 0)) {
    local_148 = local_140;
    local_138 = FUN_143a904f0(param_3);
    while (local_148 = local_148 * 10, (double)local_148 < (double)param_1[4]) {
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1);
      FUN_143bad030(param_3,param_4 + iVar1,0x20);
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1);
      FUN_143beae80(local_158,0,param_3,param_4 + iVar1);
    }
    iVar1 = FUN_143a904f0(param_3);
    local_res20 = param_4 + (iVar1 - local_138);
  }
  if ((local_150 == (double)local_140) && (local_158 != 0)) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    FUN_143beae80(local_158,local_140,param_3,local_res20 + iVar1);
  }
  else if (local_158 == 0) {
    local_134 = 0;
    FUN_143a8ac30(local_128);
    FUN_143b68650(local_f8,local_150);
    uVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(param_1);
    FUN_143b69bc0(uVar2,local_f8,local_128,&local_134);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    FUN_143b42ea0(param_3,local_res20 + iVar1,local_128);
    FUN_143a8dc60(local_128);
  }
  else {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    FUN_143beadd0(local_158,local_150,param_3,local_res20 + iVar1);
  }
  return;
}



// FUNCTION 143c1e990 FUN_143c1e990 body=202 status=ok
// SIG undefined FUN_143c1e990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c1e990(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  cVar1 = FUN_143bea7b0(param_2,&DAT_145d207e8,2);
  if (cVar1 == '\0') {
    FUN_143a8d3a0(param_1,param_2);
  }
  else {
    iVar2 = FUN_143a904f0(param_2);
    FUN_143a8d470(local_38,param_2,0,iVar2 + -1);
    FUN_143a8d3a0(param_1,local_38);
    local_48 = local_48 | 1;
    FUN_143a8dc60(local_38);
  }
  return param_1;
}



// FUNCTION 143c1ea60 FUN_143c1ea60 body=57 status=ok
// SIG undefined FUN_143c1ea60(void)

void FUN_143c1ea60(longlong param_1)

{
  FUN_143a91bc0((double)*(int *)(param_1 + 8),(double)(int)*(short *)(param_1 + 0xc));
  return;
}



// FUNCTION 143c1eaa0 FUN_143c1eaa0 body=19 status=ok
// SIG undefined FUN_143c1eaa0(void)

void FUN_143c1eaa0(void)

{
  FUN_143c1ebc0();
  return;
}



// FUNCTION 143c1eac0 FUN_143c1eac0 body=19 status=ok
// SIG undefined FUN_143c1eac0(void)

void FUN_143c1eac0(void)

{
  FUN_143c1ebd0();
  return;
}



// FUNCTION 143c1eae0 FUN_143c1eae0 body=19 status=ok
// SIG undefined FUN_143c1eae0(void)

void FUN_143c1eae0(void)

{
  FUN_143c1ebe0();
  return;
}



// FUNCTION 143c1eb00 FUN_143c1eb00 body=19 status=ok
// SIG undefined FUN_143c1eb00(void)

void FUN_143c1eb00(void)

{
  FUN_143c1ebf0();
  return;
}



// FUNCTION 143c1eb20 FUN_143c1eb20 body=19 status=ok
// SIG undefined FUN_143c1eb20(void)

void FUN_143c1eb20(void)

{
  FUN_143c1ec00();
  return;
}



// FUNCTION 143c1eb40 FUN_143c1eb40 body=19 status=ok
// SIG undefined FUN_143c1eb40(void)

void FUN_143c1eb40(void)

{
  FUN_143c1ec10();
  return;
}



// FUNCTION 143c1eb60 FUN_143c1eb60 body=19 status=ok
// SIG undefined FUN_143c1eb60(void)

void FUN_143c1eb60(void)

{
  FUN_143c1ec20();
  return;
}



// FUNCTION 143c1eb80 FUN_143c1eb80 body=19 status=ok
// SIG undefined FUN_143c1eb80(void)

void FUN_143c1eb80(void)

{
  FUN_143c1ec30();
  return;
}



// FUNCTION 143c1eba0 FUN_143c1eba0 body=19 status=ok
// SIG undefined FUN_143c1eba0(void)

void FUN_143c1eba0(void)

{
  FUN_143c1ec40();
  return;
}



// FUNCTION 143c1ebc0 FUN_143c1ebc0 body=8 status=ok
// SIG undefined FUN_143c1ebc0(void)

undefined * FUN_143c1ebc0(void)

{
  return &DAT_146bc8666;
}



// FUNCTION 143c1ebd0 FUN_143c1ebd0 body=8 status=ok
// SIG undefined FUN_143c1ebd0(void)

undefined * FUN_143c1ebd0(void)

{
  return &DAT_146bc8665;
}



// FUNCTION 143c1ebe0 FUN_143c1ebe0 body=8 status=ok
// SIG undefined FUN_143c1ebe0(void)

undefined * FUN_143c1ebe0(void)

{
  return &DAT_146bc8664;
}



// FUNCTION 143c1ebf0 FUN_143c1ebf0 body=8 status=ok
// SIG undefined FUN_143c1ebf0(void)

undefined * FUN_143c1ebf0(void)

{
  return &DAT_146bc8663;
}



// FUNCTION 143c1ec00 FUN_143c1ec00 body=8 status=ok
// SIG undefined FUN_143c1ec00(void)

undefined * FUN_143c1ec00(void)

{
  return &DAT_146bc8662;
}



// FUNCTION 143c1ec10 FUN_143c1ec10 body=8 status=ok
// SIG undefined FUN_143c1ec10(void)

undefined * FUN_143c1ec10(void)

{
  return &DAT_146bc8660;
}



// FUNCTION 143c1ec20 FUN_143c1ec20 body=8 status=ok
// SIG undefined FUN_143c1ec20(void)

undefined * FUN_143c1ec20(void)

{
  return &DAT_146bc8668;
}



// FUNCTION 143c1ec30 FUN_143c1ec30 body=8 status=ok
// SIG undefined FUN_143c1ec30(void)

undefined * FUN_143c1ec30(void)

{
  return &DAT_146bc8667;
}



// FUNCTION 143c1ec40 FUN_143c1ec40 body=8 status=ok
// SIG undefined FUN_143c1ec40(void)

undefined * FUN_143c1ec40(void)

{
  return &DAT_146bc8661;
}



// FUNCTION 143c1ec50 FUN_143c1ec50 body=15 status=ok
// SIG undefined FUN_143c1ec50(void)

void FUN_143c1ec50(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



// FUNCTION 143c1ec60 FUN_143c1ec60 body=1564 status=ok
// SIG undefined FUN_143c1ec60(void)

undefined8
FUN_143c1ec60(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  
  iVar3 = FUN_143a904f0(param_6);
  if (iVar3 == 0) {
    lVar4 = FUN_143a8d310(0x20);
    if (lVar4 == 0) {
      local_d0 = 0;
      local_a0 = local_d0;
    }
    else {
      local_a0 = FUN_143c1cad0(lVar4,param_1,param_4,param_5,param_6,param_7);
    }
  }
  else {
    sVar2 = FUN_143a8e4f0(param_6,0);
    if (sVar2 == 0x3c) {
      lVar4 = FUN_143a8b510(param_2);
      if (lVar4 == -1) {
        *param_7 = 9;
        local_a0 = 0;
      }
      else {
        lVar4 = FUN_143a8b510(param_2);
        if (((lVar4 == -2) || (lVar4 = FUN_143a8b510(param_2), lVar4 == -3)) ||
           (lVar4 = FUN_143a8b510(param_2), lVar4 == -4)) {
          lVar4 = FUN_143a8d310(0x20);
          if (lVar4 == 0) {
            local_c0 = 0;
            local_a0 = local_c0;
          }
          else {
            local_a0 = FUN_143c1c530(lVar4,param_1,param_4,param_5,param_6,param_7);
          }
        }
        else {
          cVar1 = FUN_143beaf60(param_4);
          if (cVar1 == '\0') {
            lVar4 = FUN_143a8d310(0x30);
            if (lVar4 == 0) {
              local_a0 = 0;
            }
            else {
              uVar7 = FUN_143c1ea60(param_2);
              local_a0 = FUN_143c1c680(lVar4,param_1,uVar7,param_4,param_5,param_6,param_7);
            }
          }
          else {
            lVar4 = FUN_143a8d310(0x38);
            if (lVar4 == 0) {
              local_b0 = 0;
              local_a0 = local_b0;
            }
            else {
              uVar5 = FUN_143b71940(param_5);
              lVar6 = FUN_143a8b510(param_2);
              local_a0 = FUN_143c1cb30(lVar4,param_1,SUB84((double)lVar6,0),uVar5,param_5,param_6,
                                       param_7);
            }
          }
        }
      }
    }
    else if (sVar2 == 0x3d) {
      lVar4 = FUN_143a8d310(0x20);
      if (lVar4 == 0) {
        local_b8 = 0;
        local_a0 = local_b8;
      }
      else {
        local_a0 = FUN_143c1cc60(lVar4,param_1,param_4,param_5,param_6,param_7);
      }
    }
    else if (sVar2 == 0x3e) {
      lVar4 = FUN_143a8b510(param_2);
      if (lVar4 == -1) {
        lVar4 = FUN_143a8d310(0x20);
        if (lVar4 == 0) {
          local_90 = 0;
          local_a0 = local_90;
        }
        else {
          local_a0 = FUN_143c1c3c0(lVar4,param_1,param_4,param_5,param_6,param_7);
        }
      }
      else {
        lVar4 = FUN_143a8b510(param_2);
        if (((lVar4 == -2) || (lVar4 = FUN_143a8b510(param_2), lVar4 == -3)) ||
           (lVar4 = FUN_143a8b510(param_2), lVar4 == -4)) {
          lVar4 = FUN_143a8d310(0x28);
          if (lVar4 == 0) {
            local_a8 = 0;
            local_a0 = local_a8;
          }
          else {
            local_a0 = FUN_143c1c420(lVar4,param_1,param_4,param_5,param_6,param_7);
          }
        }
        else {
          cVar1 = FUN_143beaf60(param_4);
          if (cVar1 == '\0') {
            lVar4 = FUN_143a8d310(0x38);
            if (lVar4 == 0) {
              local_d8 = 0;
              local_a0 = local_d8;
            }
            else {
              uVar7 = FUN_143c1ea60(param_2);
              local_a0 = FUN_143c1c590(lVar4,param_1,uVar7,param_3,param_4,param_5,param_6,param_7);
            }
          }
          else {
            *param_7 = 9;
            local_a0 = 0;
          }
        }
      }
    }
    else {
      *param_7 = 9;
      local_a0 = 0;
    }
  }
  return local_a0;
}



// FUNCTION 143c1f2a0 FUN_143c1f2a0 body=127 status=ok
// SIG undefined FUN_143c1f2a0(void)

void FUN_143c1f2a0(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a91bc0((double)param_2,(double)param_3);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_143beb9e0(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (*(double *)(param_1 + 0x20) == 0.0) {
    *param_4 = 9;
  }
  return;
}



// FUNCTION 143c1f320 FUN_143c1f320 body=20 status=ok
// SIG undefined FUN_143c1f320(void)

void FUN_143c1f320(void)

{
  return;
}



// FUNCTION 143c1f340 FUN_143c1f340 body=145 status=ok
// SIG undefined FUN_143c1f340(void)

void FUN_143c1f340(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  if (param_1[6] == 0) {
    FUN_143c1f3e0(param_1,param_2);
  }
  else {
    FUN_143a90910(param_2);
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_143acc590(param_2,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_143acc590(param_2,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_143acc590(param_2,uVar1);
  }
  return;
}



// FUNCTION 143c1f3e0 FUN_143c1f3e0 body=238 status=ok
// SIG undefined FUN_143c1f3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c1f3e0(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_143a90910(param_2);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_143acc590(param_2,uVar1);
  FUN_143a8ac30(local_40);
  if (param_1[2] == 0) {
    if (param_1[3] != 0) {
      (**(code **)(*(longlong *)param_1[3] + 0x210))(param_1[3],local_40);
    }
  }
  else {
    FUN_143b71a40(param_1[2],local_40);
  }
  FUN_143a8e070(param_2,local_40);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_143acc590(param_2,uVar1);
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143c1f4d0 FUN_143c1f4d0 body=11 status=ok
// SIG undefined FUN_143c1f4d0(void)

undefined8 FUN_143c1f4d0(void)

{
  return 0x3e;
}



// FUNCTION 143c1f4e0 FUN_143c1f4e0 body=11 status=ok
// SIG undefined FUN_143c1f4e0(void)

undefined8 FUN_143c1f4e0(void)

{
  return 0x3c;
}



// FUNCTION 143c1f4f0 FUN_143c1f4f0 body=11 status=ok
// SIG undefined FUN_143c1f4f0(void)

undefined8 FUN_143c1f4f0(void)

{
  return 0x20;
}



// FUNCTION 143c1f500 FUN_143c1f500 body=11 status=ok
// SIG undefined FUN_143c1f500(void)

undefined8 FUN_143c1f500(void)

{
  return 0x3d;
}



// FUNCTION 143c1f510 FUN_143c1f510 body=31 status=ok
// SIG undefined FUN_143c1f510(void)

void FUN_143c1f510(undefined8 param_1,undefined8 param_2)

{
  FUN_143a91790(param_2);
  return;
}



// FUNCTION 143c1f530 FUN_143c1f530 body=54 status=ok
// SIG undefined FUN_143c1f530(void)

longlong FUN_143c1f530(undefined8 param_1,longlong param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  if (param_2 < 0) {
    local_18 = -param_2;
  }
  return local_18;
}


