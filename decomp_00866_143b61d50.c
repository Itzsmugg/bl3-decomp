// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b61d50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61d90 FUN_143b61d90 body=148 status=ok
// SIG undefined FUN_143b61d90(void)

void FUN_143b61d90(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  
  if ((int)param_1[3] < 1) {
    if ((*(int *)((longlong)param_1 + 0x14) < (int)param_1[2]) ||
       (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,1,*(undefined4 *)((longlong)param_1 + 0x14)),
       cVar1 != '\0')) {
      *(undefined1 *)(param_1[1] + (longlong)*(int *)((longlong)param_1 + 0x14)) = param_2;
    }
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    return;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return;
}



// FUNCTION 143b61e30 FUN_143b61e30 body=93 status=ok
// SIG undefined FUN_143b61e30(void)

void FUN_143b61e30(longlong *param_1,void *param_2,int param_3,int param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  if (cVar1 != '\0') {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_4 + param_1[1]),param_2,(longlong)param_3);
  }
  return;
}



// FUNCTION 143b61e90 FUN_143b61e90 body=86 status=ok
// SIG undefined FUN_143b61e90(void)

void FUN_143b61e90(longlong param_1,void *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) - param_4;
  if (0 < iVar1) {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_4 + *(longlong *)(param_1 + 8)),param_2,(longlong)iVar1);
  }
  return;
}



// FUNCTION 143b61ef0 FUN_143b61ef0 body=30 status=ok
// SIG undefined FUN_143b61ef0(void)

int FUN_143b61ef0(longlong param_1)

{
  return (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 0x14);
}



// FUNCTION 143b61f10 FUN_143b61f10 body=22 status=ok
// SIG undefined FUN_143b61f10(void)

void FUN_143b61f10(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 143b61f30 FUN_143b61f30 body=46 status=ok
// SIG undefined FUN_143b61f30(void)

bool FUN_143b61f30(longlong param_1)

{
  return *(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14);
}



// FUNCTION 143b61f60 FUN_143b61f60 body=185 status=ok
// SIG undefined FUN_143b61f60(void)

undefined8 FUN_143b61f60(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    local_18 = *(int *)(param_1 + 0x10) << 1;
    iVar1 = param_3 + param_2 * 2;
    if (local_18 < iVar1) {
      local_18 = iVar1;
    }
    if (local_18 < 200) {
      local_18 = 200;
    }
    lVar3 = FUN_143bd1f40(*(undefined8 *)(param_1 + 0x20),local_18,param_3);
    if (lVar3 == 0) {
      FUN_143b62040(param_1);
      uVar2 = 0;
    }
    else {
      *(longlong *)(param_1 + 8) = lVar3;
      *(int *)(param_1 + 0x10) = local_18;
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143b62020 FUN_143b62020 body=17 status=ok
// SIG undefined FUN_143b62020(void)

undefined1 FUN_143b62020(void)

{
  return 0;
}



// FUNCTION 143b62040 FUN_143b62040 body=31 status=ok
// SIG undefined FUN_143b62040(void)

void FUN_143b62040(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 143b62060 FUN_143b62060 body=103 status=ok
// SIG undefined FUN_143b62060(void)

void FUN_143b62060(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b64130(param_1,*(int *)(param_1 + 8) + 1,param_3);
  if (cVar1 != '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 8) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



// FUNCTION 143b620d0 FUN_143b620d0 body=131 status=ok
// SIG undefined FUN_143b620d0(void)

void FUN_143b620d0(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x18);
  FUN_143e1a120(*(undefined8 *)(param_1 + 0x10));
  FUN_143e1a120(param_2);
  *(longlong *)(param_1 + 0x18) = param_2;
  FUN_143a8adb0(param_1 + 0x20,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



// FUNCTION 143b62160 FUN_143b62160 body=134 status=ok
// SIG undefined FUN_143b62160(void)

void FUN_143b62160(undefined8 param_1,undefined1 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143ac4710(param_1);
    if (cVar1 == '\0') {
      FUN_143acfeb0(param_1,0x5f,param_4);
    }
    FUN_143acfeb0(param_1,param_2,param_4);
    FUN_143acfeb0(param_1,PTR_s_1234___________IXO__SN__LU_______146832950[param_3],param_4);
  }
  return;
}



// FUNCTION 143b621f0 FUN_143b621f0 body=179 status=ok
// SIG undefined FUN_143b621f0(void)

void FUN_143b621f0(undefined8 param_1,undefined1 param_2,longlong param_3,int param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if ((cVar1 == '\0') && (param_4 != 0)) {
    cVar1 = FUN_143ac4710(param_1);
    if (cVar1 == '\0') {
      FUN_143acfeb0(param_1,0x5f,param_5);
    }
    FUN_143acfeb0(param_1,param_2,param_5);
    for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
      uVar2 = FUN_143ab85d0(*(undefined1 *)(param_3 + local_18));
      FUN_143acfeb0(param_1,uVar2,param_5);
    }
  }
  return;
}



// FUNCTION 143b622b0 FUN_143b622b0 body=73 status=ok
// SIG undefined FUN_143b622b0(void)

bool FUN_143b622b0(longlong param_1,byte param_2)

{
  return (*(uint *)(param_1 + 0x198) & 1 << (param_2 & 0x1f)) != 0;
}



// FUNCTION 143b62300 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x1a0);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b60f60(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b62360 FUN_143b62360 body=1230 status=ok
// SIG undefined FUN_143b62360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b62360(longlong param_1,__ExceptionPtr *param_2,__ExceptionPtr *param_3,
                 undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_b68 [32];
  int local_b48;
  undefined1 local_b38;
  int local_b34;
  int local_b30;
  int local_b2c;
  int local_b28;
  int local_b24;
  int local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  _Ref_count<__ExceptionPtr> local_b08 [40];
  _Ref_count<__ExceptionPtr> local_ae0 [40];
  undefined1 local_ab8 [400];
  undefined1 local_928 [400];
  CMFCRibbonRichEditCtrl local_798 [464];
  undefined1 local_5c8 [496];
  CMFCRibbonRichEditCtrl local_3d8 [464];
  undefined1 local_208 [496];
  ulonglong local_18;
  
  local_b10 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b68;
  cVar1 = FUN_143a8b0e0(*param_4);
  if ((cVar1 == '\0') && (param_2 != param_3)) {
    local_b38 = FUN_143b65e00(*(undefined8 *)(param_1 + 0x10));
    local_b34 = 0;
    while( true ) {
      local_b30 = (**(code **)(param_2 + 0x48))(param_2);
      local_b2c = (**(code **)(param_3 + 0x48))(param_3);
      if (local_b30 != local_b2c) break;
      if (local_b30 < 0) {
        return 0;
      }
      local_b34 = local_b34 + 1;
    }
    if (-1 < local_b30) {
      (**(code **)(param_2 + 0x50))(param_2);
    }
    if (-1 < local_b2c) {
      (**(code **)(param_3 + 0x50))(param_3);
    }
    if (0 < local_b34) {
      if ((local_b30 < 0) ||
         (cVar1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),local_b30,local_b38), cVar1 == '\0')) {
        if (-1 < local_b2c) {
          cVar1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),local_b2c,local_b38);
          goto joined_r0x000143b624c3;
        }
      }
      else {
        do {
          local_b34 = local_b34 + -1;
          local_b30 = (**(code **)(param_2 + 0x50))(param_2);
          (**(code **)(param_3 + 0x50))(param_3);
          if (local_b34 < 1) break;
          cVar1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),local_b30,local_b38);
joined_r0x000143b624c3:
        } while (cVar1 != '\0');
      }
    }
    cVar1 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 == '\0') {
      local_b48 = local_b34;
      FUN_143b60840(local_798,*(undefined8 *)(param_1 + 8),local_b38,param_2);
      local_b48 = local_b34;
      FUN_143b60840(local_3d8,*(undefined8 *)(param_1 + 8),local_b38,param_3);
      local_b28 = FUN_143bd2740(local_798,local_3d8,*(undefined8 *)(param_1 + 0x10),param_4);
      CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_3d8);
      CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_798);
    }
    else {
      FUN_143b61120(local_ab8,*(undefined8 *)(param_1 + 8),local_b38,param_2);
      FUN_143b61120(local_928,*(undefined8 *)(param_1 + 8),local_b38,param_3);
      local_b28 = FUN_143bd2740(local_ab8,local_928,*(undefined8 *)(param_1 + 0x10),param_4);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_928);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_ab8);
    }
    local_b24 = local_b28;
    if (((local_b28 == 0) &&
        (iVar2 = FUN_143b64b30(*(undefined8 *)(param_1 + 0x10)), local_b24 = local_b28, 0xe < iVar2)
        ) && (cVar1 = FUN_143a8b0e0(*param_4), local_b24 = local_b28, cVar1 == '\0')) {
      (**(code **)(param_2 + 0x28))(param_2,local_b34,3);
      (**(code **)(param_3 + 0x28))(param_3,local_b34,3);
      local_b18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
      cVar1 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
      if (cVar1 == '\0') {
        FUN_143b608e0(local_208,*(undefined8 *)(param_1 + 8),param_2,local_b34);
        FUN_143b608e0(local_5c8,*(undefined8 *)(param_1 + 8),param_3,local_b34);
        local_b20 = FUN_143b62a90(local_b18,local_208,local_5c8);
        FUN_143b61400(local_5c8);
        FUN_143b61400(local_208);
        local_b24 = local_b20;
      }
      else {
        std::tr1::_Ref_count<__ExceptionPtr>::_Ref_count<__ExceptionPtr>(local_ae0,param_2);
        std::tr1::_Ref_count<__ExceptionPtr>::_Ref_count<__ExceptionPtr>(local_b08,param_3);
        local_b24 = FUN_143b62a90(local_b18,local_ae0,local_b08);
        operator_delete(local_b08);
        operator_delete(local_ae0);
      }
    }
  }
  else {
    local_b24 = 0;
  }
  return local_b24;
}



// FUNCTION 143b62840 FUN_143b62840 body=151 status=ok
// SIG undefined FUN_143b62840(void)

undefined8
FUN_143b62840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = FUN_143a904f0(param_3);
    uVar4 = FUN_143a8fe10(param_3);
    uVar3 = FUN_143a904f0(param_2);
    uVar5 = FUN_143a8fe10(param_2);
    uVar4 = FUN_143b63990(param_1,uVar5,uVar3,uVar4,uVar2,param_4);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143b628e0 FUN_143b628e0 body=220 status=ok
// SIG undefined FUN_143b628e0(void)

undefined8
FUN_143b628e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if ((cVar1 == '\0') && (param_4 != 0)) {
    if (param_4 < 0) {
      *param_5 = 1;
      uVar2 = 0;
    }
    else {
      local_14 = FUN_143a904f0(param_2);
      local_18 = FUN_143a904f0(param_3);
      if (param_4 < local_14) {
        local_14 = param_4;
      }
      if (param_4 < local_18) {
        local_18 = param_4;
      }
      uVar2 = FUN_143a8fe10(param_3);
      uVar3 = FUN_143a8fe10(param_2);
      uVar2 = FUN_143b63990(param_1,uVar3,local_14,uVar2,local_18,param_5);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b629c0 FUN_143b629c0 body=194 status=ok
// SIG undefined FUN_143b629c0(void)

undefined8
FUN_143b629c0(undefined8 param_1,longlong param_2,int param_3,longlong param_4,int param_5,
             undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  int local_res18;
  
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if (((param_2 == 0) && (param_3 != 0)) || ((param_4 == 0 && (param_5 != 0)))) {
      *param_6 = 1;
      uVar2 = 0;
    }
    else {
      local_res18 = param_3;
      if (param_3 < 0) {
        if (-1 < param_5) {
          local_res18 = FreeLib(param_2);
        }
      }
      else if (param_5 < 0) {
        param_5 = FreeLib(param_4);
      }
      uVar2 = FUN_143b63990(param_1,param_2,local_res18,param_4,param_5,param_6);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b62a90 FUN_143b62a90 body=239 status=ok
// SIG undefined FUN_143b62a90(void)

undefined8 FUN_143b62a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  while( true ) {
    while( true ) {
      iVar1 = FUN_143b66250(param_2);
      iVar2 = FUN_143b66250(param_3);
      if (iVar1 != iVar2) break;
      if (iVar1 < 0) {
        return 0;
      }
    }
    if (iVar1 < 0) {
      local_18 = -2;
    }
    else if (iVar1 == 0xfffe) {
      local_18 = -1;
    }
    else {
      local_18 = FUN_143b66320(param_2,param_1,iVar1);
    }
    if (iVar2 < 0) {
      local_14 = -2;
    }
    else if (iVar2 == 0xfffe) {
      local_14 = -1;
    }
    else {
      local_14 = FUN_143b66320(param_3,param_1,iVar2);
    }
    if (local_18 < local_14) break;
    if (local_14 < local_18) {
      return 1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143b62b80 FUN_143b62b80 body=215 status=ok
// SIG undefined FUN_143b62b80(void)

undefined8
FUN_143b62b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    lVar4 = FUN_143a8b510(param_2);
    lVar5 = FUN_143a8b510(param_3);
    if (((lVar4 == 0) && (cVar1 = FUN_143b14e10(param_2), cVar1 == '\0')) ||
       ((lVar5 == 0 && (cVar1 = FUN_143b14e10(param_3), cVar1 == '\0')))) {
      *param_4 = 1;
      uVar6 = 0;
    }
    else {
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_3);
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_2);
      uVar6 = FUN_143b62ea0(param_1,lVar4,uVar3,lVar5,uVar2,param_4);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 143b62c60 FUN_143b62c60 body=50 status=ok
// SIG undefined FUN_143b62c60(void)

void FUN_143b62c60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143bd1740(*(undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  return;
}



// FUNCTION 143b62ca0 FUN_143b62ca0 body=247 status=ok
// SIG undefined FUN_143b62ca0(void)

undefined8 * FUN_143b62ca0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_58[0] = 0;
  cVar1 = FUN_143b64f40(param_1,local_58);
  if (cVar1 == '\0') {
    local_48 = (undefined8 *)0x0;
  }
  else {
    local_38 = FUN_143a8d310(0x50);
    if (local_38 == 0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = (undefined8 *)FUN_143bd1320(local_38,param_2,param_1,local_58);
    }
    local_30 = local_40;
    local_48 = local_40;
    cVar1 = FUN_143a8b0e0(local_58[0]);
    if (cVar1 != '\0') {
      local_20 = local_48;
      local_50 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
      local_48 = (undefined8 *)0x0;
    }
  }
  return local_48;
}



// FUNCTION 143b62da0 FUN_143b62da0 body=247 status=ok
// SIG undefined FUN_143b62da0(void)

undefined8 * FUN_143b62da0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_58[0] = 0;
  cVar1 = FUN_143b64f40(param_1,local_58);
  if (cVar1 == '\0') {
    local_48 = (undefined8 *)0x0;
  }
  else {
    local_38 = FUN_143a8d310(0x50);
    if (local_38 == 0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = (undefined8 *)FUN_143bd13d0(local_38,param_2,param_1,local_58);
    }
    local_30 = local_40;
    local_48 = local_40;
    cVar1 = FUN_143a8b0e0(local_58[0]);
    if (cVar1 != '\0') {
      local_20 = local_48;
      local_50 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
      local_48 = (undefined8 *)0x0;
    }
  }
  return local_48;
}



// FUNCTION 143b62ea0 FUN_143b62ea0 body=2791 status=ok
// SIG undefined FUN_143b62ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b62ea0(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res18;
  undefined1 auStack_c08 [32];
  int local_be8;
  longlong local_be0;
  int local_bd8;
  int local_bc8;
  undefined1 local_bc4;
  byte local_bc3;
  byte local_bc2;
  char local_bc1;
  int local_bc0;
  int local_bbc;
  uint local_bb8;
  uint local_bb4;
  byte local_bb0;
  byte local_baf;
  char local_bae;
  int local_bac;
  uint local_ba8;
  int local_ba4;
  int local_ba0;
  int local_b9c;
  undefined8 local_b98;
  longlong local_b90;
  longlong local_b88;
  undefined8 local_b80;
  undefined1 local_b78 [48];
  undefined1 local_b48 [48];
  undefined1 local_b18 [416];
  undefined1 local_978 [416];
  CMFCRibbonRichEditCtrl local_7d8 [480];
  CMFCRibbonRichEditCtrl local_5f8 [480];
  undefined1 local_418 [512];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_b80 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c08;
  if ((param_2 == param_4) && (param_3 == param_5)) {
    local_ba0 = 0;
  }
  else {
    local_bc8 = 0;
    if (param_3 < 0) {
      for (; local_bae = *(char *)(param_2 + local_bc8), local_bae == *(char *)(param_4 + local_bc8)
          ; local_bc8 = local_bc8 + 1) {
        if (local_bae == '\0') {
          return 0;
        }
      }
    }
    else {
      for (; local_bc8 != param_3; local_bc8 = local_bc8 + 1) {
        if ((local_bc8 == param_5) ||
           (*(char *)(param_2 + local_bc8) != *(char *)(param_4 + local_bc8))) goto LAB_143b62fc7;
      }
      if (local_bc8 == param_5) {
        return 0;
      }
    }
LAB_143b62fc7:
    if (0 < local_bc8) {
      if ((local_bc8 != param_3) && ((*(byte *)(param_2 + local_bc8) & 0xc0) == 0x80))
      goto LAB_143b63026;
      if (local_bc8 != param_5) {
        bVar1 = *(byte *)(param_4 + local_bc8);
        while ((bVar1 & 0xc0) == 0x80) {
LAB_143b63026:
          local_bc8 = local_bc8 + -1;
          if (local_bc8 < 1) break;
          bVar1 = *(byte *)(param_2 + local_bc8);
        }
      }
    }
    local_bc4 = FUN_143b65e00(*(undefined8 *)(param_1 + 0x10));
    if (0 < local_bc8) {
      local_bc1 = '\0';
      if (local_bc8 != param_3) {
        local_bb4 = (uint)*(byte *)(param_2 + local_bc8);
        local_bc0 = local_bc8 + 1;
        if (0x7f < local_bb4) {
          if ((((local_bb4 < 0xe1) || (0xec < local_bb4)) ||
              ((param_3 <= local_bc8 + 2 && (-1 < param_3)))) ||
             ((local_bc3 = *(char *)(param_2 + local_bc0) + 0x80, 0x3f < local_bc3 ||
              (local_baf = *(char *)(param_2 + (local_bc8 + 2)) + 0x80, 0x3f < local_baf)))) {
            if ((local_bb4 < 0xe0) &&
               (((0xc1 < local_bb4 && (local_bc0 != param_3)) &&
                (local_bc3 = *(char *)(param_2 + local_bc0) + 0x80, local_bc3 < 0x40)))) {
              local_bb4 = (local_bb4 & 0x1f) << 6 | (uint)local_bc3;
              local_bc0 = local_bc8 + 2;
            }
            else {
              local_be8 = CONCAT31(local_be8._1_3_,0xfd);
              local_bb4 = FUN_143ab96e0(param_2,&local_bc0,param_3,local_bb4);
            }
          }
          else {
            local_bb4 = (local_bb4 & 0xf) << 0xc | (uint)local_bc3 << 6 | (uint)local_baf;
            local_bc0 = local_bc8 + 3;
          }
        }
        local_bc1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),local_bb4,local_bc4);
      }
      cVar2 = local_bc1;
      if ((local_bc1 == '\0') && (local_bc8 != param_5)) {
        local_bb8 = (uint)*(byte *)(param_4 + local_bc8);
        local_bbc = local_bc8 + 1;
        if (0x7f < local_bb8) {
          if ((((local_bb8 < 0xe1) || (0xec < local_bb8)) ||
              ((param_5 <= local_bc8 + 2 && (-1 < param_5)))) ||
             ((local_bc2 = *(char *)(param_4 + local_bbc) + 0x80, 0x3f < local_bc2 ||
              (local_bb0 = *(char *)(param_4 + (local_bc8 + 2)) + 0x80, 0x3f < local_bb0)))) {
            if ((local_bb8 < 0xe0) &&
               (((0xc1 < local_bb8 && (local_bbc != param_5)) &&
                (local_bc2 = *(char *)(param_4 + local_bbc) + 0x80, local_bc2 < 0x40)))) {
              local_bb8 = (local_bb8 & 0x1f) << 6 | (uint)local_bc2;
              local_bbc = local_bc8 + 2;
            }
            else {
              local_be8 = CONCAT31(local_be8._1_3_,0xfd);
              local_bb8 = FUN_143ab96e0(param_4,&local_bbc,param_5,local_bb8);
            }
          }
          else {
            local_bb8 = (local_bb8 & 0xf) << 0xc | (uint)local_bc2 << 6 | (uint)local_bb0;
            local_bbc = local_bc8 + 3;
          }
        }
        local_bc1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),local_bb8,local_bc4);
        cVar2 = local_bc1;
      }
      while (cVar2 != '\0') {
        local_bc8 = local_bc8 + -1;
        local_ba8 = (uint)*(byte *)(param_2 + local_bc8);
        if (0x7f < local_ba8) {
          local_be8._1_3_ = (undefined3)((uint)local_be8 >> 8);
          local_be8 = CONCAT31(local_be8._1_3_,0xfd);
          local_ba8 = FUN_143ab9a30(param_2,0,&local_bc8,local_ba8);
        }
        if (local_bc8 < 1) break;
        cVar2 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),local_ba8,local_bc4);
      }
    }
    local_ba4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x30);
    if (((local_ba4 < 0) || ((local_bc8 != param_3 && (0xc5 < *(byte *)(param_2 + local_bc8))))) ||
       ((local_bc8 != param_5 && (0xc5 < *(byte *)(param_4 + local_bc8))))) {
      local_bac = -2;
    }
    else if (param_3 < 0) {
      local_be0 = param_4 + local_bc8;
      local_b90 = *(longlong *)(param_1 + 8);
      local_bd8 = -1;
      local_be8 = -1;
      local_bac = FUN_143bd44e0(*(undefined8 *)(local_b90 + 0x58),
                                *(longlong *)(param_1 + 0x10) + 0x34,local_ba4,param_2 + local_bc8);
    }
    else {
      local_bd8 = param_5 - local_bc8;
      local_be0 = param_4 + local_bc8;
      local_be8 = param_3 - local_bc8;
      local_b88 = *(longlong *)(param_1 + 0x10) + 0x34;
      local_bac = FUN_143bd44e0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_b88,
                                local_ba4,param_2 + local_bc8);
    }
    if (local_bac == -2) {
      cVar2 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
      local_be0._0_4_ = param_3;
      if (cVar2 == '\0') {
        local_be8 = local_bc8;
        FUN_143b60c50(local_5f8,*(undefined8 *)(param_1 + 8),local_bc4,param_2);
        local_be0 = CONCAT44(local_be0._4_4_,param_5);
        local_be8 = local_bc8;
        FUN_143b60c50(local_7d8,*(undefined8 *)(param_1 + 8),local_bc4,param_4);
        local_bac = FUN_143bd2740(local_5f8,local_7d8,*(undefined8 *)(param_1 + 0x10),param_6);
        CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_7d8);
        CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_5f8);
      }
      else {
        local_be8 = local_bc8;
        FUN_143b612a0(local_978,*(undefined8 *)(param_1 + 8),local_bc4,param_2);
        local_be0 = CONCAT44(local_be0._4_4_,param_5);
        local_be8 = local_bc8;
        FUN_143b612a0(local_b18,*(undefined8 *)(param_1 + 8),local_bc4,param_4);
        local_bac = FUN_143bd2740(local_978,local_b18,*(undefined8 *)(param_1 + 0x10),param_6);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_b18);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_978);
      }
    }
    local_ba0 = local_bac;
    if (((local_bac == 0) &&
        (iVar3 = FUN_143b64b30(*(undefined8 *)(param_1 + 0x10)), local_ba0 = local_bac, 0xe < iVar3)
        ) && (cVar2 = FUN_143a8b0e0(*param_6), local_ba0 = local_bac, cVar2 == '\0')) {
      local_b98 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
      lVar4 = (longlong)local_bc8;
      lVar5 = (longlong)local_bc8;
      local_res18 = param_3;
      if (0 < param_3) {
        local_res18 = param_3 - local_bc8;
        param_5 = param_5 - local_bc8;
      }
      cVar2 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
      if (cVar2 == '\0') {
        FUN_143b60d00(local_218,*(undefined8 *)(param_1 + 8),param_2 + lVar4,local_res18);
        FUN_143b60d00(local_418,*(undefined8 *)(param_1 + 8),param_4 + lVar5,param_5);
        local_b9c = FUN_143b62a90(local_b98,local_218,local_418);
        FUN_143b61460(local_418);
        FUN_143b61460(local_218);
        local_ba0 = local_b9c;
      }
      else {
        FUN_143b61320(local_b48,param_2 + lVar4,local_res18);
        FUN_143b61320(local_b78,param_4 + lVar5,param_5);
        local_ba0 = FUN_143b62a90(local_b98,local_b48,local_b78);
        operator_delete(local_b78);
        operator_delete(local_b48);
      }
    }
  }
  return local_ba0;
}



// FUNCTION 143b63990 FUN_143b63990 body=1886 status=ok
// SIG undefined FUN_143b63990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b63990(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_908 [32];
  longlong local_8e8;
  longlong local_8e0;
  int local_8d8;
  int local_8c8;
  undefined1 local_8c4;
  int local_8c0;
  short local_8bc;
  int local_8b8;
  longlong local_8b0;
  longlong local_8a8;
  undefined8 local_8a0;
  int local_898;
  int local_894;
  longlong local_890;
  longlong local_888;
  undefined8 local_880;
  undefined1 local_878 [48];
  undefined1 local_848 [48];
  undefined1 local_818 [96];
  undefined1 local_7b8 [96];
  undefined1 local_758 [416];
  undefined1 local_5b8 [416];
  CMFCRibbonRichEditCtrl local_418 [512];
  CMFCRibbonRichEditCtrl local_218 [512];
  ulonglong local_18;
  
  local_880 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_908;
  if ((param_2 == param_4) && (param_3 == param_5)) {
    local_898 = 0;
  }
  else {
    local_8c8 = 0;
    if (param_3 < 0) {
      local_8b0 = 0;
      local_8a8 = 0;
      while (local_8bc = *(short *)(param_2 + (longlong)local_8c8 * 2),
            local_8bc == *(short *)(param_4 + (longlong)local_8c8 * 2)) {
        if (local_8bc == 0) {
          return 0;
        }
        local_8c8 = local_8c8 + 1;
      }
    }
    else {
      local_8b0 = param_2 + (longlong)param_3 * 2;
      local_8a8 = param_4 + (longlong)param_5 * 2;
      for (; local_8c8 != param_3; local_8c8 = local_8c8 + 1) {
        if ((local_8c8 == param_5) ||
           (*(short *)(param_2 + (longlong)local_8c8 * 2) !=
            *(short *)(param_4 + (longlong)local_8c8 * 2))) goto LAB_143b63aff;
      }
      if (local_8c8 == param_5) {
        return 0;
      }
    }
LAB_143b63aff:
    local_8c4 = FUN_143b65e00(*(undefined8 *)(param_1 + 0x10));
    if (0 < local_8c8) {
      if ((local_8c8 != param_3) &&
         (cVar1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),
                                *(undefined2 *)(param_2 + (longlong)local_8c8 * 2),local_8c4),
         cVar1 != '\0')) goto LAB_143b63b9b;
      if (local_8c8 != param_5) {
        cVar1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),
                              *(undefined2 *)(param_4 + (longlong)local_8c8 * 2),local_8c4);
        while (cVar1 != '\0') {
LAB_143b63b9b:
          local_8c8 = local_8c8 + -1;
          if (local_8c8 < 1) break;
          cVar1 = FUN_143b65e90(*(undefined8 *)(param_1 + 8),
                                *(undefined2 *)(param_2 + (longlong)local_8c8 * 2),local_8c4);
        }
      }
    }
    local_8b8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x30);
    if (((local_8b8 < 0) ||
        ((local_8c8 != param_3 && (0x17f < *(ushort *)(param_2 + (longlong)local_8c8 * 2))))) ||
       ((local_8c8 != param_5 && (0x17f < *(ushort *)(param_4 + (longlong)local_8c8 * 2))))) {
      local_8c0 = -2;
    }
    else if (param_3 < 0) {
      local_8e0 = param_4 + (longlong)local_8c8 * 2;
      local_888 = *(longlong *)(param_1 + 8);
      local_8d8 = -1;
      local_8e8 = CONCAT44(local_8e8._4_4_,0xffffffff);
      local_8c0 = FUN_143bd33e0(*(undefined8 *)(local_888 + 0x58),
                                *(longlong *)(param_1 + 0x10) + 0x34,local_8b8,
                                param_2 + (longlong)local_8c8 * 2);
    }
    else {
      local_8d8 = param_5 - local_8c8;
      local_8e0 = param_4 + (longlong)local_8c8 * 2;
      local_890 = *(longlong *)(param_1 + 0x10) + 0x34;
      local_8e8 = CONCAT44(local_8e8._4_4_,param_3 - local_8c8);
      local_8c0 = FUN_143bd33e0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_890,
                                local_8b8,param_2 + (longlong)local_8c8 * 2);
    }
    if (local_8c0 == -2) {
      cVar1 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
      if (cVar1 == '\0') {
        local_8e8 = param_2 + (longlong)local_8c8 * 2;
        local_8e0 = local_8b0;
        FUN_143b60950(local_218,*(undefined8 *)(param_1 + 8),local_8c4,param_2);
        local_8e8 = param_4 + (longlong)local_8c8 * 2;
        local_8e0 = local_8a8;
        FUN_143b60950(local_418,*(undefined8 *)(param_1 + 8),local_8c4,param_4);
        local_8c0 = FUN_143bd2740(local_218,local_418,*(undefined8 *)(param_1 + 0x10),param_6);
        CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_418);
        CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_218);
      }
      else {
        local_8e8 = param_2 + (longlong)local_8c8 * 2;
        local_8e0 = local_8b0;
        FUN_143b611c0(local_758,*(undefined8 *)(param_1 + 8),local_8c4,param_2);
        local_8e8 = param_4 + (longlong)local_8c8 * 2;
        local_8e0 = local_8a8;
        FUN_143b611c0(local_5b8,*(undefined8 *)(param_1 + 8),local_8c4,param_4);
        local_8c0 = FUN_143bd2740(local_758,local_5b8,*(undefined8 *)(param_1 + 0x10),param_6);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_5b8);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_758);
      }
    }
    local_898 = local_8c0;
    if (((local_8c0 == 0) &&
        (iVar2 = FUN_143b64b30(*(undefined8 *)(param_1 + 0x10)), local_898 = local_8c0, 0xe < iVar2)
        ) && (cVar1 = FUN_143a8b0e0(*param_6), local_898 = local_8c0, cVar1 == '\0')) {
      local_8a0 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
      param_2 = param_2 + (longlong)local_8c8 * 2;
      param_4 = param_4 + (longlong)local_8c8 * 2;
      cVar1 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
      if (cVar1 == '\0') {
        FUN_143b60a30(local_7b8,local_8a0,param_2,local_8b0);
        FUN_143b60a30(local_818,local_8a0,param_4,local_8a8);
        local_894 = FUN_143b62a90(local_8a0,local_7b8,local_818);
        FUN_143b61430(local_818);
        FUN_143b61430(local_7b8);
        local_898 = local_894;
      }
      else {
        FUN_143b61240(local_848,param_2,local_8b0);
        FUN_143b61240(local_878,param_4,local_8a8);
        local_898 = FUN_143b62a90(local_8a0,local_848,local_878);
        operator_delete(local_878);
        operator_delete(local_848);
      }
    }
  }
  return local_898;
}



// FUNCTION 143b64100 FUN_143b64100 body=43 status=ok
// SIG undefined FUN_143b64100(void)

bool FUN_143b64100(longlong param_1)

{
  return (*(uint *)(param_1 + 0x10) & 1) == 0;
}



// FUNCTION 143b64130 FUN_143b64130 body=67 status=ok
// SIG undefined FUN_143b64130(void)

undefined8 FUN_143b64130(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0xc) < param_2)) {
    uVar1 = FUN_143e1d0d0(param_1,param_2,param_3);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143b64180 FUN_143b64180 body=43 status=ok
// SIG undefined FUN_143b64180(void)

undefined8 FUN_143b64180(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143b618b0(param_1 + 8,(longlong)param_2);
  return *puVar1;
}



// FUNCTION 143b641b0 FUN_143b641b0 body=48 status=ok
// SIG undefined FUN_143b641b0(void)

undefined4 FUN_143b641b0(longlong param_1)

{
  undefined4 local_18;
  
  if ((*(uint *)(param_1 + 0x10) & 0xc) == 0) {
    local_18 = 0x15;
  }
  else {
    local_18 = 0x14;
  }
  return local_18;
}



// FUNCTION 143b641e0 FUN_143b641e0 body=251 status=ok
// SIG undefined FUN_143b641e0(void)

ulonglong FUN_143b641e0(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint local_18;
  uint local_10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return 0xffffffff;
  }
  switch(param_2) {
  case 0:
    local_18 = 0x800;
    goto LAB_143b642aa;
  case 1:
    uVar2 = FUN_143b641b0(*(undefined8 *)(param_1 + 0x10));
    break;
  case 2:
    uVar2 = FUN_143b644c0(*(undefined8 *)(param_1 + 0x10));
    break;
  case 3:
    local_18 = 0x400;
    goto LAB_143b642aa;
  case 4:
    local_18 = 1;
    goto LAB_143b642aa;
  case 5:
    uVar2 = FUN_143b64b30(*(undefined8 *)(param_1 + 0x10));
    break;
  case 6:
    uVar2 = 0x10;
    break;
  case 7:
    local_18 = 2;
LAB_143b642aa:
    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) & local_18) == 0) {
      local_10 = 0x10;
    }
    else {
      local_10 = 0x11;
    }
    uVar2 = (ulonglong)local_10;
    break;
  default:
    *param_3 = 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143b64300 FUN_143b64300 body=57 status=ok
// SIG undefined FUN_143b64300(void)

longlong FUN_143b64300(longlong param_1)

{
  undefined8 local_18;
  
  if (*(int *)(param_1 + 8) < 0) {
    local_18 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_18 = param_1 + 0x10;
  }
  return local_18;
}



// FUNCTION 143b64340 FUN_143b64340 body=332 status=ok
// SIG undefined FUN_143b64340(void)

undefined4 FUN_143b64340(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_18 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)*param_1 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_28 = 0x140;
      }
      else {
        local_28 = 0;
      }
      local_1c = (param_2 & 0x1f) +
                 (uint)*(ushort *)(*(longlong *)*param_1 + (longlong)(int)(local_28 + uVar1) * 2) *
                 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(*param_1 + 0x2c)) {
          local_24 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)*param_1 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)*param_1 +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = *(int *)(*param_1 + 0x30);
        }
        local_20 = local_24;
      }
      else {
        local_20 = 0x80;
      }
      local_1c = local_20;
    }
    local_18 = local_1c;
  }
  return *(undefined4 *)(*(longlong *)(*param_1 + 0x10) + (longlong)local_18 * 4);
}



// FUNCTION 143b64490 FUN_143b64490 body=48 status=ok
// SIG undefined FUN_143b64490(void)

undefined4 FUN_143b64490(longlong param_1)

{
  undefined4 local_18;
  
  if (*(int *)(param_1 + 8) < 0) {
    local_18 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    local_18 = 0x20;
  }
  return local_18;
}



// FUNCTION 143b644c0 FUN_143b644c0 body=85 status=ok
// SIG undefined FUN_143b644c0(void)

undefined4 FUN_143b644c0(longlong param_1)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0x300;
  if (uVar1 == 0) {
    local_10 = 0x10;
  }
  else {
    if (uVar1 == 0x200) {
      local_14 = 0x18;
    }
    else {
      local_14 = 0x19;
    }
    local_10 = local_14;
  }
  return local_10;
}



// FUNCTION 143b64520 FUN_143b64520 body=104 status=ok
// SIG undefined FUN_143b64520(void)

void FUN_143b64520(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a8fe10(param_2);
  (**(code **)(*param_1 + 0x68))(param_1,uVar2,uVar1,param_3,param_4);
  return;
}



// FUNCTION 143b64590 FUN_143b64590 body=336 status=ok
// SIG undefined FUN_143b64590(void)

undefined8
FUN_143b64590(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,undefined4 *param_5
             )

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_38 [56];
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if ((param_2 == 0) && (param_3 != 0)) {
      *param_5 = 1;
      param_4 = FUN_143bd2060(param_4);
    }
    else {
      FUN_143bd2000(param_4);
      FUN_143b60700(local_38,param_4);
      FUN_143b67670(param_1,param_2,param_3,local_38,param_5);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        cVar1 = FUN_143b65d60(param_4);
        if (cVar1 == '\0') {
          uVar2 = FUN_143a93e50(local_38);
          FUN_143bd2030(param_4,uVar2);
        }
        else {
          *param_5 = 7;
        }
      }
      else {
        FUN_143bd2060(param_4);
      }
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_38);
    }
  }
  else {
    param_4 = FUN_143bd2060(param_4);
  }
  return param_4;
}



// FUNCTION 143b646e0 FUN_143b646e0 body=19 status=ok
// SIG undefined FUN_143b646e0(void)

undefined8 FUN_143b646e0(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
}



// FUNCTION 143b64700 FUN_143b64700 body=19 status=ok
// SIG undefined FUN_143b64700(void)

void FUN_143b64700(void)

{
  FUN_143b64b20();
  return;
}



// FUNCTION 143b64720 FUN_143b64720 body=311 status=ok
// SIG undefined FUN_143b64720(void)

undefined8 FUN_143b64720(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_20;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      if (*(char *)(param_1 + 0x19c) == '\0') {
        local_20 = *(longlong *)(param_1 + 0x18) + 0x48;
      }
      else {
        local_20 = param_1 + 0x20;
      }
      FUN_143a8a610(param_2,local_20);
    }
    else if ((param_3 < 1) || (2 < param_3)) {
      *param_4 = 1;
      uVar2 = FUN_143a8c210();
      FUN_143a8a610(param_2,uVar2);
    }
    else {
      FUN_143a8a610(param_2,param_1 + 0x20);
    }
  }
  else {
    uVar2 = FUN_143a8c210();
    FUN_143a8a610(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 143b64860 FUN_143b64860 body=20 status=ok
// SIG undefined FUN_143b64860(void)

int FUN_143b64860(longlong param_1)

{
  return (int)(*(uint *)(param_1 + 0x10) & 0x70) >> 4;
}



// FUNCTION 143b64880 FUN_143b64880 body=33 status=ok
// SIG undefined FUN_143b64880(void)

int FUN_143b64880(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143b64860(*(undefined8 *)(param_1 + 0x10));
  return iVar1 + 0x1000;
}



// FUNCTION 143b648b0 FUN_143b648b0 body=185 status=ok
// SIG undefined FUN_143b648b0(void)

int FUN_143b648b0(longlong param_1,void *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_3 < 0) || ((param_2 == (void *)0x0 && (0 < param_3)))) {
      *param_4 = 1;
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x28);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else if (param_3 < iVar2) {
        *param_4 = 0xf;
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (param_2,*(void **)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)(iVar2 << 2));
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 143b64970 FUN_143b64970 body=19 status=ok
// SIG undefined FUN_143b64970(void)

longlong FUN_143b64970(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) + 0x20;
}



// FUNCTION 143b64990 FUN_143b64990 body=105 status=ok
// SIG undefined FUN_143b64990(void)

void FUN_143b64990(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a8fe10(param_2);
  (**(code **)(*param_1 + 0x100))(param_1,uVar2,uVar1,param_3,param_4);
  return;
}



// FUNCTION 143b64a00 FUN_143b64a00 body=278 status=ok
// SIG undefined FUN_143b64a00(void)

undefined4
FUN_143b64a00(undefined8 param_1,longlong param_2,int param_3,undefined1 *param_4,int param_5)

{
  char cVar1;
  undefined1 *local_res20;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30 [48];
  
  local_38 = 0xfffffffffffffffe;
  if ((((param_2 == 0) && (param_3 != 0)) || (param_5 < 0)) ||
     ((param_4 == (undefined1 *)0x0 && (0 < param_5)))) {
    local_3c = 0;
  }
  else {
    local_48[0] = 0;
    local_res20 = param_4;
    if (param_4 == (undefined1 *)0x0) {
      local_res20 = local_48;
      param_5 = 0;
    }
    FUN_143b60d80(local_30,local_res20,param_5);
    local_44 = 0;
    FUN_143b67670(param_1,param_2,param_3,local_30,&local_44);
    cVar1 = FUN_143a8b110(local_44);
    if (cVar1 == '\0') {
      local_40 = 0;
    }
    else {
      local_40 = FUN_143a93e50(local_30);
    }
    local_3c = local_40;
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_30);
  }
  return local_3c;
}



// FUNCTION 143b64b20 FUN_143b64b20 body=8 status=ok
// SIG undefined FUN_143b64b20(void)

undefined * FUN_143b64b20(void)

{
  return &DAT_146bc7fa8;
}



// FUNCTION 143b64b30 FUN_143b64b30 body=27 status=ok
// SIG undefined FUN_143b64b30(void)

void FUN_143b64b30(longlong param_1)

{
  FUN_143b64b50(*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 143b64b50 FUN_143b64b50 body=12 status=ok
// SIG undefined FUN_143b64b50(void)

int FUN_143b64b50(int param_1)

{
  return param_1 >> 0xc;
}



// FUNCTION 143b64b60 FUN_143b64b60 body=384 status=ok
// SIG undefined FUN_143b64b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b64b60(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_a8 = FUN_143a8d310(0x58);
    if (local_a8 == 0) {
      local_a0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = (undefined8 *)FUN_143b11ea0(local_a8);
    }
    local_78 = local_a0;
    local_b8 = local_a0;
    if (local_a0 == (undefined8 *)0x0) {
      *param_2 = 7;
      local_b8 = (undefined8 *)0x0;
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) != 0) {
      local_98 = FUN_143b610b0(local_68,local_a0);
      local_80 = local_98;
      FUN_143bdc570(local_98,*(undefined8 *)(param_1 + 8),param_2);
      FMovieSceneSegment::~FMovieSceneSegment(local_68);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 != '\0') {
        local_90 = local_b8;
        local_b0 = local_b8;
        if (local_b8 != (undefined8 *)0x0) {
          (**(code **)*local_b8)(local_b8,1);
        }
        local_b8 = (undefined8 *)0x0;
      }
    }
  }
  else {
    local_b8 = (undefined8 *)0x0;
  }
  return local_b8;
}



// FUNCTION 143b64ce0 FUN_143b64ce0 body=23 status=ok
// SIG undefined FUN_143b64ce0(void)

undefined4 FUN_143b64ce0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14);
}



// FUNCTION 143b64d00 FUN_143b64d00 body=93 status=ok
// SIG undefined FUN_143b64d00(void)

void FUN_143b64d00(longlong param_1,char *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,(void *)(*(longlong *)(param_1 + 0x18) + 0x1c0),4);
  *param_2 = *param_2 + -0x80;
  return;
}



// FUNCTION 143b64d60 FUN_143b64d60 body=65 status=ok
// SIG undefined FUN_143b64d60(void)

undefined1 FUN_143b64d60(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143b65e30(param_1);
  if ((cVar1 != '\0') && (iVar2 = FUN_143b67480(param_1), iVar2 == param_2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b64db0 FUN_143b64db0 body=307 status=ok
// SIG undefined FUN_143b64db0(void)

uint FUN_143b64db0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  undefined1 local_68 [8];
  uint local_60;
  undefined8 local_58;
  undefined1 local_48 [72];
  
  local_58 = 0xfffffffffffffffe;
  local_78 = FUN_143bdda80(param_1[2]);
  local_60 = local_78;
  if (*(longlong *)(param_1[1] + 0x20) != 0) {
    local_74 = 0;
    uVar4 = (**(code **)(*param_1 + 0xf0))(param_1,&local_74);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_68,uVar4);
    cVar1 = FUN_143a8b0e0(local_74);
    if (cVar1 == '\0') {
      uVar4 = FUN_143a8b510(local_68);
      FUN_143e1d760(local_48,uVar4);
      while ((cVar1 = FUN_143e1d9e0(local_48), cVar1 != '\0' &&
             (cVar1 = FUN_143b65e60(local_48), cVar1 == '\0'))) {
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_48);
        uVar3 = FUN_143b64340(param_1[1],uVar2);
        local_78 = local_78 ^ uVar3;
      }
      local_70 = local_78;
      FUN_143e1d7c0(local_48);
      FUN_143b36bb0(local_68);
      local_60 = local_70;
    }
    else {
      local_60 = 0;
      FUN_143b36bb0(local_68);
    }
  }
  return local_60;
}



// FUNCTION 143b64ef0 FUN_143b64ef0 body=78 status=ok
// SIG undefined FUN_143b64ef0(void)

undefined8 FUN_143b64ef0(int *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  
  if ((0x27 < *param_1) && (cVar2 = FUN_143bd7ea0(param_1,1,param_2), cVar2 == '\0')) {
    return 0;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  return CONCAT71((uint7)(uint3)((uint)(iVar1 + 1) >> 8),1);
}



// FUNCTION 143b64f40 FUN_143b64f40 body=75 status=ok
// SIG undefined FUN_143b64f40(void)

void FUN_143b64f40(longlong param_1,undefined4 *param_2)

{
  FUN_143b1e530(*(longlong *)(param_1 + 0x18) + 0x200,FUN_143b62c60,*(undefined8 *)(param_1 + 0x18),
                param_2);
  FUN_143a8b110(*param_2);
  return;
}



// FUNCTION 143b64f90 FUN_143b64f90 body=194 status=ok
// SIG undefined FUN_143b64f90(void)

undefined8
FUN_143b64f90(undefined8 param_1,char *param_2,int param_3,char *param_4,int param_5,
             undefined4 *param_6)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  int local_res18;
  
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if (((param_2 == (char *)0x0) && (param_3 != 0)) || ((param_4 == (char *)0x0 && (param_5 != 0)))
       ) {
      *param_6 = 1;
      uVar3 = 0;
    }
    else {
      local_res18 = param_3;
      if (param_3 < 0) {
        if (-1 < param_5) {
          sVar2 = _guard_xfg_dispatch_icall_nop(param_2);
          local_res18 = (int)sVar2;
        }
      }
      else if (param_5 < 0) {
        sVar2 = _guard_xfg_dispatch_icall_nop(param_4);
        param_5 = (int)sVar2;
      }
      uVar3 = FUN_143b62ea0(param_1,param_2,local_res18,param_4,param_5,param_6);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b65060 FUN_143b65060 body=260 status=ok
// SIG undefined FUN_143b65060(void)

char * FUN_143b65060(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  longlong local_30;
  longlong local_28;
  char *local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x19c) == '\0') {
        local_28 = *(longlong *)(param_1 + 0x18) + 0x48;
      }
      else {
        local_28 = param_1 + 0x20;
      }
      local_30 = local_28;
    }
    else {
      if ((param_2 < 1) || (2 < param_2)) {
        *param_3 = 1;
        return (char *)0x0;
      }
      local_30 = param_1 + 0x20;
    }
    cVar1 = FUN_143b0bd90(local_30);
    if (cVar1 == '\0') {
      local_18 = (char *)FUN_143a8c200(local_30);
      if (*local_18 == '\0') {
        local_18 = "root";
      }
    }
    else {
      local_18 = (char *)0x0;
    }
  }
  else {
    local_18 = (char *)0x0;
  }
  return local_18;
}



// FUNCTION 143b65170 FUN_143b65170 body=1605 status=ok
// SIG undefined FUN_143b65170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143b65170(longlong *param_1,longlong param_2,void *param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  longlong local_res10;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 *local_1a0;
  int local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ulonglong local_180;
  size_t local_178;
  undefined8 local_170;
  undefined1 local_168 [64];
  undefined1 local_128 [112];
  char local_b8 [160];
  ulonglong local_18;
  
  local_170 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_3 == (void *)0x0) {
      local_194 = (uint)(param_4 != 0);
      local_18c = local_194;
    }
    else {
      local_190 = (uint)(param_4 < 0);
      local_18c = local_190;
    }
    if (local_18c == 0) {
      local_res10 = param_2;
      if (param_2 == 0) {
        local_res10 = FUN_143b65060(param_1,1,param_5);
      }
      local_1a0 = param_5;
      local_1a8 = (undefined4 *)0x0;
      local_198 = FUN_143b60490(local_b8,0x9d,"collation",local_res10);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        if (local_198 == 0) {
          _guard_xfg_dispatch_icall_nop(local_b8,"root");
        }
        else {
          local_180 = (ulonglong)local_198;
          if (0x9d < local_180) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_b8[local_180] = '\0';
        }
        FUN_143aa03f0(local_168);
        cVar1 = FUN_143b622b0(param_1,1);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,1,param_5);
          FUN_143b62160(local_168,0x41,uVar2,param_5);
        }
        cVar1 = FUN_143b622b0(param_1,2);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,2,param_5);
          FUN_143b62160(local_168,0x43,uVar2,param_5);
        }
        cVar1 = FUN_143b622b0(param_1,7);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,7,param_5);
          FUN_143b62160(local_168,0x44,uVar2,param_5);
        }
        cVar1 = FUN_143b622b0(param_1,3);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,3,param_5);
          FUN_143b62160(local_168,0x45,uVar2,param_5);
        }
        cVar1 = FUN_143b622b0(param_1,0);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,0,param_5);
          FUN_143b62160(local_168,0x46,uVar2,param_5);
        }
        local_1a8 = param_5;
        local_198 = FUN_143a96b00(local_b8,"collation",local_128,100);
        local_1a8 = param_5;
        FUN_143b621f0(local_168,0x4b,local_128,local_198);
        local_198 = FUN_143a971b0(local_b8,local_128,100,param_5);
        local_1a8 = param_5;
        FUN_143b621f0(local_168,0x4c,local_128,local_198);
        cVar1 = FUN_143b622b0(param_1,4);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,4,param_5);
          FUN_143b62160(local_168,0x4e,uVar2,param_5);
        }
        local_198 = FUN_143a96880(local_b8,local_128,100,param_5);
        local_1a8 = param_5;
        FUN_143b621f0(local_168,0x52,local_128,local_198);
        cVar1 = FUN_143b622b0(param_1,5);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,5,param_5);
          FUN_143b62160(local_168,0x53,uVar2,param_5);
        }
        local_198 = FUN_143a97450(local_b8,local_128,100,param_5);
        local_1a8 = param_5;
        FUN_143b621f0(local_168,0x56,local_128,local_198);
        local_198 = FUN_143a97390(local_b8,local_128,100,param_5);
        local_1a8 = param_5;
        FUN_143b621f0(local_168,0x5a,local_128,local_198);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 == '\0') {
          iVar3 = FUN_143ac4740(local_168);
          if (iVar3 <= param_4) {
            iVar3 = FUN_143ac4740(local_168);
            local_178 = (size_t)iVar3;
            _Src = (void *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                           ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_168);
            _guard_xfg_dispatch_icall_nop(param_3,_Src,local_178);
          }
          uVar2 = FUN_143ac4740(local_168);
          local_188 = FUN_143ab4930(param_3,param_4,uVar2,param_5);
          TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_168);
          local_184 = local_188;
        }
        else {
          local_184 = 0;
          TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_168);
        }
      }
      else {
        local_184 = 0;
      }
    }
    else {
      *param_5 = 1;
      local_184 = 0;
    }
  }
  else {
    local_184 = 0;
  }
  return local_184;
}



// FUNCTION 143b657c0 FUN_143b657c0 body=1438 status=ok
// SIG undefined FUN_143b657c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b657c0(longlong param_1,longlong param_2,int *param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined1 *local_430;
  undefined1 local_428;
  undefined4 *local_420;
  undefined1 local_418;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  undefined1 local_3e8 [32];
  longlong local_3c8;
  undefined1 local_3c0 [24];
  undefined8 local_3a8;
  undefined1 local_3a0 [40];
  undefined1 local_378 [400];
  CMFCRibbonRichEditCtrl local_1e8 [464];
  ulonglong local_18;
  
  local_3a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((((param_2 == 0) || (param_3 == (int *)0x0)) || (param_5 < 0)) ||
       ((0 < param_5 && (param_4 == 0)))) {
      *param_6 = 1;
      local_3f4 = 0;
    }
    else if (param_5 == 0) {
      local_3f4 = 0;
    }
    else {
      FUN_143b60d80(local_3e8,param_4,param_5);
      FUN_143b61f10(local_3e8,param_3[1]);
      (**(code **)(param_2 + 0x28))(param_2,0,0);
      local_414 = *param_3;
      if (local_414 < 6) {
        local_418 = FUN_143b65e00(*(undefined8 *)(param_1 + 0x10));
        FUN_143b60e20(local_3c0,local_3e8);
        cVar1 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
        if (cVar1 == '\0') {
          local_438 = (undefined4 *)((ulonglong)local_438._4_4_ << 0x20);
          FUN_143b60840(local_1e8,*(undefined8 *)(param_1 + 8),local_418,param_2);
          local_420 = param_6;
          local_428 = 0;
          local_430 = local_3c0;
          local_438 = (undefined4 *)CONCAT44(local_438._4_4_,local_414);
          FUN_143bd9cf0(local_1e8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),
                        *(undefined8 *)(param_1 + 0x10),local_3e8);
          CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_1e8);
        }
        else {
          FUN_143b61120(local_378,*(undefined8 *)(param_1 + 8),local_418,param_2);
          local_420 = param_6;
          local_428 = 0;
          local_430 = local_3c0;
          local_438 = (undefined4 *)CONCAT44(local_438._4_4_,local_414);
          FUN_143bd9cf0(local_378,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),
                        *(undefined8 *)(param_1 + 0x10),local_3e8);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_378);
        }
        cVar1 = FUN_143a8b0e0(*param_6);
        if (cVar1 != '\0') {
          local_400 = 0;
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3c0);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3e8);
          return local_400;
        }
        iVar2 = FUN_143a93e50(local_3e8);
        if (param_5 < iVar2) {
          iVar2 = FUN_143a91e00(local_3c0);
          *param_3 = iVar2;
          iVar2 = FUN_143a93e50(local_3c0);
          param_3[1] = iVar2;
          local_3f0 = param_5;
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3c0);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3e8);
          return local_3f0;
        }
        iVar2 = FUN_143b64b30(*(undefined8 *)(param_1 + 0x10));
        if (iVar2 == 0xf) {
          local_414 = 6;
          (**(code **)(param_2 + 0x28))(param_2,0,0);
        }
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3c0);
      }
      if (local_414 == 6) {
        local_404 = FUN_143b61ef0(local_3e8);
        FUN_143a8ac30(local_3a0);
        while (local_40c = (**(code **)(param_2 + 0x48))(param_2), -1 < local_40c) {
          FUN_143acc590(local_3a0,(undefined2)local_40c);
        }
        local_3c8 = FUN_143a8fe10(local_3a0);
        iVar2 = FUN_143a904f0(local_3a0);
        local_438 = param_6;
        FUN_143b67490(param_1,local_3c8,local_3c8 + (longlong)iVar2 * 2,local_3e8);
        cVar1 = FUN_143a8b0e0(*param_6);
        if (cVar1 != '\0') {
          local_3f8 = 0;
          FUN_143a8dc60(local_3a0);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3e8);
          return local_3f8;
        }
        iVar2 = FUN_143a93e50(local_3e8);
        if (param_5 < iVar2) {
          *param_3 = local_414;
          param_3[1] = local_404;
          local_3fc = param_5;
          FUN_143a8dc60(local_3a0);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3e8);
          return local_3fc;
        }
        FUN_143a8dc60(local_3a0);
      }
      *param_3 = 7;
      param_3[1] = 0;
      local_408 = FUN_143a93e50(local_3e8);
      for (local_410 = local_408; local_410 < param_5; local_410 = local_410 + 1) {
        *(undefined1 *)(param_4 + local_410) = 0;
      }
      local_3f4 = local_408;
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3e8);
    }
  }
  else {
    local_3f4 = 0;
  }
  return local_3f4;
}



// FUNCTION 143b65d60 FUN_143b65d60 body=39 status=ok
// SIG undefined FUN_143b65d60(void)

bool FUN_143b65d60(longlong param_1)

{
  return *(int *)(param_1 + 0xc) == 2;
}



// FUNCTION 143b65d90 FUN_143b65d90 body=108 status=ok
// SIG undefined FUN_143b65d90(void)

undefined1 FUN_143b65d90(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x660) {
    if ((param_2 < 0x3a) && (0x2f < param_2)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar2 = FUN_143b64340(param_1,param_2);
    uVar1 = FUN_143b64d60(uVar2,10);
  }
  return uVar1;
}



// FUNCTION 143b65e00 FUN_143b65e00 body=43 status=ok
// SIG undefined FUN_143b65e00(void)

bool FUN_143b65e00(longlong param_1)

{
  return (*(uint *)(param_1 + 0x10) & 2) != 0;
}



// FUNCTION 143b65e30 FUN_143b65e30 body=43 status=ok
// SIG undefined FUN_143b65e30(void)

bool FUN_143b65e30(byte param_1)

{
  return 0xbf < param_1;
}



// FUNCTION 143b65e60 FUN_143b65e60 body=39 status=ok
// SIG undefined FUN_143b65e60(void)

bool FUN_143b65e60(longlong param_1)

{
  return *(int *)(param_1 + 8) == -1;
}



// FUNCTION 143b65e90 FUN_143b65e90 body=105 status=ok
// SIG undefined FUN_143b65e90(void)

undefined1 FUN_143b65e90(longlong param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))
                    (*(undefined8 *)(param_1 + 0x50),param_2);
  if (cVar1 == '\0') {
    if (param_3 != '\0') {
      cVar1 = FUN_143b65d90(param_1,param_2);
      if (cVar1 != '\0') goto LAB_143b65eea;
    }
    local_18 = 0;
  }
  else {
LAB_143b65eea:
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b65f00 FUN_143b65f00 body=79 status=ok
// SIG undefined FUN_143b65f00(void)

bool FUN_143b65f00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143b61f30(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    uVar2 = FUN_143b61ef0(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return cVar1 == '\0';
}



// FUNCTION 143b65f60 FUN_143b65f60 body=738 status=ok
// SIG undefined FUN_143b65f60(void)

undefined8 FUN_143b65f60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  if ((int)param_1[0x2e] < (int)param_1[3]) {
    local_24 = (undefined4)param_1[0x2e];
    *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
    uVar2 = FUN_143b64180(param_1 + 3,local_24);
  }
  else {
    cVar1 = FUN_143b64ef0(param_1 + 3,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0x101000100;
    }
    else {
      local_38 = (**(code **)(*param_1 + 0x38))(param_1,&local_30,param_2);
      local_34 = local_38 & 0xff;
      if (local_34 < 0xc0) {
        local_2c = (undefined4)param_1[0x2e];
        *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
        uVar2 = FUN_143b66780(param_1 + 3,local_2c,
                              CONCAT44(local_38,(local_38 & 0xff00) << 0x10) & 0xffff0000ffffffff |
                              (ulonglong)(local_34 << 8));
      }
      else {
        if (local_34 == 0xc0) {
          if (local_30 < 0) {
            local_1c = (undefined4)param_1[0x2e];
            *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
            uVar2 = FUN_143b66780(param_1 + 3,local_1c,0x101000100);
            return uVar2;
          }
          local_18 = *(longlong *)(param_1[2] + 0x20);
          local_38 = FUN_143b64340(local_18,local_30);
          local_34 = local_38 & 0xff;
          if (local_34 < 0xc0) {
            local_28 = (undefined4)param_1[0x2e];
            *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
            uVar2 = FUN_143b66780(param_1 + 3,local_28,
                                  CONCAT44(local_38,(local_38 & 0xff00) << 0x10) &
                                  0xffff0000ffffffff | (ulonglong)(local_34 << 8));
            return uVar2;
          }
        }
        else {
          local_18 = param_1[2];
        }
        if (local_34 == 0xc1) {
          local_20 = (undefined4)param_1[0x2e];
          *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
          uVar2 = FUN_143b66780(param_1 + 3,local_20,
                                (ulonglong)(local_38 - 0xc1) << 0x20 | 0x5000500);
        }
        else {
          uVar2 = FUN_143bd8e20(param_1,local_18,local_30,local_38,param_2);
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 143b66250 FUN_143b66250 body=201 status=ok
// SIG undefined FUN_143b66250(void)

ulonglong FUN_143b66250(longlong *param_1)

{
  ulonglong uVar1;
  uint local_18;
  
  if (-1 < (int)param_1[3]) {
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x1c)) {
      local_18 = (uint)*(ushort *)(param_1[1] + (longlong)(int)param_1[3] * 2);
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((local_18 & 0xfffffc00) == 0xd800) {
        local_18 = local_18 * 0x400 + -0x35fdc00 +
                   (uint)*(ushort *)(param_1[1] + (longlong)(int)param_1[3] * 2);
        *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      }
      return (ulonglong)local_18;
    }
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  return uVar1;
}



// FUNCTION 143b66320 FUN_143b66320 body=246 status=ok
// SIG undefined FUN_143b66320(void)

uint FUN_143b66320(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x18) < 0) {
    uVar1 = FUN_143b24190(param_2,param_3,param_1 + 0x10,param_1 + 0x1c);
    *(undefined8 *)(param_1 + 8) = uVar1;
    if (*(longlong *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_3 = (uint)*(ushort *)
                       (*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x18) * 2);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if ((param_3 & 0xfffffc00) == 0xd800) {
        param_3 = param_3 * 0x400 + -0x35fdc00 +
                  (uint)*(ushort *)
                         (*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x18) * 2);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
    }
  }
  return param_3;
}



// FUNCTION 143b66420 FUN_143b66420 body=61 status=ok
// SIG undefined FUN_143b66420(void)

void FUN_143b66420(longlong param_1)

{
  undefined4 local_18 [2];
  longlong local_10;
  
  local_18[0] = 0;
  local_10 = *(longlong *)(param_1 + 0x20);
  (**(code **)(local_10 + 0x28))(param_1 + 0x20,local_18);
  return;
}



// FUNCTION 143b66460 FUN_143b66460 body=28 status=ok
// SIG undefined FUN_143b66460(void)

void FUN_143b66460(longlong param_1)

{
  FUN_143a93e90(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143b66480 FUN_143b66480 body=237 status=ok
// SIG undefined FUN_143b66480(void)

uint FUN_143b66480(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x28)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)**(ushort **)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
    if ((*(longlong *)(param_1 + 0x28) == 0) && (uVar2 == 0)) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar2 = 0xffffffff;
    }
    else if (((uVar2 & 0xfffffc00) == 0xd800) &&
            ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28) &&
             (uVar1 = **(ushort **)(param_1 + 0x20), (uVar1 & 0xfc00) == 0xdc00)))) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
      uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
  }
  return uVar2;
}



// FUNCTION 143b66570 FUN_143b66570 body=513 status=ok
// SIG undefined FUN_143b66570(void)

uint FUN_143b66570(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x2c)) ||
     ((*(char *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28)) == '\0' &&
      (*(int *)(param_1 + 0x2c) < 0)))) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    if (0x7f < uVar3) {
      if ((((uVar3 < 0xe1) || (0xec < uVar3)) ||
          ((*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x28) + 1 &&
           (-1 < *(int *)(param_1 + 0x2c))))) ||
         ((bVar1 = *(char *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28)) +
                   0x80, 0x3f < bVar1 ||
          (bVar2 = *(char *)(*(longlong *)(param_1 + 0x20) +
                            (longlong)(*(int *)(param_1 + 0x28) + 1)) + 0x80, 0x3f < bVar2)))) {
        if ((uVar3 < 0xe0) &&
           (((0xc1 < uVar3 && (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c))) &&
            (bVar1 = *(char *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28)) +
                     0x80, bVar1 < 0x40)))) {
          uVar3 = (uVar3 & 0x1f) << 6 | (uint)bVar1;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        }
        else {
          uVar3 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,
                                *(undefined4 *)(param_1 + 0x2c),uVar3,0xfd);
        }
      }
      else {
        uVar3 = (uVar3 & 0xf) << 0xc | (uint)bVar1 << 6 | (uint)bVar2;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 2;
      }
    }
  }
  return uVar3;
}



// FUNCTION 143b66780 FUN_143b66780 body=58 status=ok
// SIG undefined FUN_143b66780(void)

undefined8 FUN_143b66780(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143b618b0(param_1 + 8,(longlong)param_2);
  *puVar1 = param_3;
  return param_3;
}



// FUNCTION 143b667c0 FUN_143b667c0 body=643 status=ok
// SIG undefined FUN_143b667c0(void)

void FUN_143b667c0(longlong *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_3 == iVar2) {
      FUN_143b66ac0(param_1,param_2);
    }
    else {
      lVar3 = FUN_143b646e0(param_1);
      if ((param_1[2] == lVar3) && (param_3 == -1)) {
        FUN_143b66a70(param_1,param_2);
      }
      else {
        lVar4 = FUN_143b60540(param_1 + 2);
        if (lVar4 == 0) {
          *param_4 = 7;
        }
        else {
          switch(param_2) {
          case 0:
            FUN_143bddcd0(lVar4,0x800,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          case 1:
            FUN_143bddb50(lVar4,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          case 2:
            FUN_143bddc00(lVar4,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          case 3:
            FUN_143bddcd0(lVar4,0x400,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          case 4:
            FUN_143bddcd0(lVar4,1,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          case 5:
            FUN_143bddf70(lVar4,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          case 6:
            if (((param_3 != 0x10) && (param_3 != 0x11)) && (param_3 != -1)) {
              *param_4 = 1;
            }
            break;
          case 7:
            FUN_143bddcd0(lVar4,2,param_3,*(undefined4 *)(lVar3 + 0x10),param_4);
            break;
          default:
            *param_4 = 1;
          }
          cVar1 = FUN_143a8b0e0(*param_4);
          if (cVar1 == '\0') {
            FUN_143b66b00(param_1,lVar4);
            if (param_3 == -1) {
              FUN_143b66a70(param_1,param_2);
            }
            else {
              FUN_143b66ac0(param_1,param_2);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143b66a70 FUN_143b66a70 body=66 status=ok
// SIG undefined FUN_143b66a70(void)

void FUN_143b66a70(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x198) = *(uint *)(param_1 + 0x198) & ~(1 << (param_2 & 0x1f));
  return;
}



// FUNCTION 143b66ac0 FUN_143b66ac0 body=64 status=ok
// SIG undefined FUN_143b66ac0(void)

void FUN_143b66ac0(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x198) = *(uint *)(param_1 + 0x198) | 1 << (param_2 & 0x1f);
  return;
}



// FUNCTION 143b66b00 FUN_143b66b00 body=64 status=ok
// SIG undefined FUN_143b66b00(void)

void FUN_143b66b00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143bd5890(*(undefined8 *)(param_1 + 8),param_2,param_2 + 0x34,0x180);
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  return;
}



// FUNCTION 143b66b40 FUN_143b66b40 body=110 status=ok
// SIG undefined FUN_143b66b40(void)

void FUN_143b66b40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8afa0(param_4,*(longlong *)(param_1 + 0x18) + 0x48);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x19c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x19c) = 0;
  }
  FUN_143a8adb0(param_1 + 0x20,param_3);
  return;
}



// FUNCTION 143b66bb0 FUN_143b66bb0 body=465 status=ok
// SIG undefined FUN_143b66bb0(void)

longlong FUN_143b66bb0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res10;
  int local_28;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == -1) {
      local_28 = -1;
    }
    else {
      if ((param_2 < 0x1000) || (0x1003 < param_2)) {
        *param_3 = 1;
        return param_1;
      }
      local_28 = param_2 + -0x1000;
    }
    iVar2 = FUN_143b64860(*(undefined8 *)(param_1 + 0x10));
    if (local_28 == iVar2) {
      FUN_143b66ac0(param_1,8);
    }
    else {
      lVar4 = FUN_143b646e0(param_1);
      if ((*(longlong *)(param_1 + 0x10) == lVar4) && (local_28 == -1)) {
        FUN_143b66a70(param_1,8);
      }
      else {
        lVar5 = FUN_143b60540(param_1 + 0x10);
        if (lVar5 == 0) {
          *param_3 = 7;
        }
        else {
          local_res10 = param_2;
          if (param_2 == -1) {
            local_res10 = FUN_143b64860(lVar4);
            local_res10 = local_res10 + 0x1000;
          }
          uVar3 = FUN_143b67b70(*(undefined8 *)(param_1 + 8),local_res10);
          FUN_143bddd90(lVar5,local_28,*(undefined4 *)(lVar4 + 0x10),param_3);
          cVar1 = FUN_143a8b0e0(*param_3);
          if (cVar1 == '\0') {
            *(undefined4 *)(lVar5 + 0x14) = uVar3;
            FUN_143b66b00(param_1,lVar5);
            if (local_28 == -1) {
              FUN_143b66a70(param_1,8);
            }
            else {
              FUN_143b66ac0(param_1,8);
            }
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 143b66d90 FUN_143b66d90 body=637 status=ok
// SIG undefined FUN_143b66d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b66d90(longlong param_1,int *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_3 < 0) || ((param_2 == (int *)0x0 && (0 < param_3)))) {
      *param_4 = 1;
    }
    else if ((param_3 != *(int *)(*(longlong *)(param_1 + 0x10) + 0x28)) ||
            (iVar2 = _guard_xfg_dispatch_icall_nop
                               (param_2,*(void **)(*(longlong *)(param_1 + 0x10) + 0x20),
                                (longlong)(param_3 << 2)), iVar2 != 0)) {
      local_130 = FUN_143b646e0(param_1);
      if ((param_3 == 1) && (*param_2 == -1)) {
        if (*(longlong *)(param_1 + 0x10) != local_130) {
          local_128 = FUN_143b60540(param_1 + 0x10);
          if (local_128 == 0) {
            *param_4 = 7;
          }
          else {
            FUN_143bdda00(local_128,*(undefined8 *)(local_130 + 0x20),
                          *(undefined4 *)(local_130 + 0x28),*(undefined8 *)(local_130 + 0x18));
            FUN_143b66b00(param_1,local_128);
          }
        }
      }
      else {
        local_138 = FUN_143b60540(param_1 + 0x10);
        if (local_138 == 0) {
          *param_4 = 7;
        }
        else {
          if (param_3 == 0) {
            FUN_143bddb30(local_138);
          }
          else {
            local_148 = param_4;
            FUN_143b67be0(*(undefined8 *)(param_1 + 8),param_2,param_3,local_118);
            cVar1 = FUN_143a8b0e0(*param_4);
            if (cVar1 != '\0') {
              return;
            }
            cVar1 = FUN_143bdde30(local_138,param_2,param_3,local_118);
            if (cVar1 == '\0') {
              *param_4 = 7;
              return;
            }
          }
          FUN_143b66b00(param_1,local_138);
        }
      }
    }
  }
  return;
}



// FUNCTION 143b67010 FUN_143b67010 body=92 status=ok
// SIG undefined FUN_143b67010(void)

void FUN_143b67010(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a8fe10(param_2);
  (**(code **)(*param_1 + 0xe0))(param_1,uVar2,uVar1,param_3);
  return;
}



// FUNCTION 143b67070 FUN_143b67070 body=659 status=ok
// SIG undefined FUN_143b67070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143b67070(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_res18;
  undefined1 auStack_418 [32];
  longlong local_3f8;
  longlong local_3f0;
  undefined1 local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8 [416];
  CMFCRibbonRichEditCtrl local_218 [512];
  ulonglong local_18;
  
  local_3c8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_2 == 0) && (param_3 != 0)) {
      *param_4 = 1;
      uVar2 = 0;
    }
    else {
      local_res18 = param_3;
      if (param_3 < 0) {
        local_res18 = FreeLib(param_2);
      }
      if (local_res18 == 0) {
        *param_4 = 1;
        uVar2 = 0;
      }
      else {
        local_3e8 = FUN_143b65e00(param_1[2]);
        cVar1 = FUN_143b64100(param_1[2]);
        local_3f8 = param_2;
        if (cVar1 == '\0') {
          local_3f0 = param_2 + (longlong)local_res18 * 2;
          FUN_143b60950(local_218,param_1[1],local_3e8,param_2);
          local_3e0 = FUN_143b65f60(local_218,param_4);
          local_3d8 = FUN_143b65f60(local_218,param_4);
          CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_218);
        }
        else {
          local_3f0 = param_2 + (longlong)local_res18 * 2;
          FUN_143b611c0(local_3b8,param_1[1],local_3e8,param_2);
          local_3e0 = FUN_143b65f60(local_3b8,param_4);
          local_3d8 = FUN_143b65f60(local_3b8,param_4);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3b8);
        }
        if ((local_3e0 == 0x101000100) || (local_3d8 != 0x101000100)) {
          *param_4 = 0x15;
          uVar2 = 0;
        }
        else {
          local_3d0 = *param_1;
          (**(code **)(local_3d0 + 0xd0))(param_1,local_3e0 >> 0x20 & 0xffffffff,param_4);
          uVar2 = *(undefined4 *)(param_1[2] + 0x14);
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b67310 FUN_143b67310 body=365 status=ok
// SIG undefined FUN_143b67310(void)

void FUN_143b67310(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return;
  }
  local_res10 = param_2;
  if (param_2 != *(int *)(*(longlong *)(param_1 + 0x10) + 0x14)) {
    iVar2 = FUN_143b67a50(*(undefined8 *)(param_1 + 8),param_2);
    if ((iVar2 < 0x1000) || (0x1003 < iVar2)) {
      *param_3 = 1;
      return;
    }
    local_res10 = FUN_143b67b70(*(undefined8 *)(param_1 + 8),iVar2);
    if (local_res10 != *(int *)(*(longlong *)(param_1 + 0x10) + 0x14)) {
      lVar3 = FUN_143b60540(param_1 + 0x10);
      if (lVar3 == 0) {
        *param_3 = 7;
        return;
      }
      lVar4 = FUN_143b646e0(param_1);
      FUN_143bddd90(lVar3,iVar2 + -0x1000,*(undefined4 *)(lVar4 + 0x10),param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        return;
      }
      *(int *)(lVar3 + 0x14) = local_res10;
      FUN_143b66b00(param_1,lVar3);
    }
  }
  lVar3 = FUN_143b646e0(param_1);
  if (local_res10 == *(int *)(lVar3 + 0x14)) {
    FUN_143b66a70(param_1,8);
  }
  else {
    FUN_143b66ac0(param_1,8);
  }
  return;
}



// FUNCTION 143b67480 FUN_143b67480 body=12 status=ok
// SIG undefined FUN_143b67480(void)

uint FUN_143b67480(uint param_1)

{
  return param_1 & 0xf;
}



// FUNCTION 143b67490 FUN_143b67490 body=469 status=ok
// SIG undefined FUN_143b67490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b67490(longlong param_1,short *param_2,short *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 local_58;
  short *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = param_5;
  local_50 = (short *)FUN_143b23430(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),param_2,
                                    param_3,0);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143b61d90(param_4,1);
    local_58 = 0;
    if (local_50 != param_2) {
      local_58 = FUN_143bd24d0(0,param_2,(longlong)local_50 - (longlong)param_2 >> 1 & 0xffffffff,
                               param_4);
    }
    if (param_3 == (short *)0x0) {
      if (*local_50 == 0) {
        return;
      }
      local_48 = 0xffffffff;
    }
    else {
      if (local_50 == param_3) {
        return;
      }
      local_48 = (undefined4)((longlong)param_3 - (longlong)local_50 >> 1);
    }
    FUN_143a8ac30(local_38);
    local_60 = param_5;
    local_68 = (undefined4 *)CONCAT44(local_68._4_4_,local_48);
    FUN_143b237f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),local_50,param_3,local_38);
    local_44 = FUN_143a904f0(local_38);
    uVar2 = FUN_143a8fe10(local_38);
    FUN_143bd24d0(local_58,uVar2,local_44,param_4);
    FUN_143a8dc60(local_38);
  }
  return;
}



// FUNCTION 143b67670 FUN_143b67670 body=656 status=ok
// SIG undefined FUN_143b67670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b67670(longlong param_1,longlong param_2,int param_3,longlong *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_428 [32];
  undefined4 *local_408;
  undefined1 *local_400;
  undefined1 local_3f8;
  undefined4 *local_3f0;
  undefined1 local_3e8;
  longlong local_3e0;
  undefined1 local_3d8 [8];
  longlong local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8 [416];
  CMFCRibbonRichEditCtrl local_218 [512];
  ulonglong local_18;
  
  local_3c8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_3 < 0) {
      local_3d0 = 0;
    }
    else {
      local_3d0 = param_2 + (longlong)param_3 * 2;
    }
    local_3e0 = local_3d0;
    local_3e8 = FUN_143b65e00(*(undefined8 *)(param_1 + 0x10));
    GetTestRenderTransformPivot(local_3d8);
    cVar1 = FUN_143b64100(*(undefined8 *)(param_1 + 0x10));
    local_408 = (undefined4 *)param_2;
    if (cVar1 == '\0') {
      local_400 = (undefined1 *)local_3e0;
      FUN_143b60950(local_218,*(undefined8 *)(param_1 + 8),local_3e8,param_2);
      local_3f0 = param_5;
      local_3f8 = 1;
      local_400 = local_3d8;
      local_408 = (undefined4 *)CONCAT44(local_408._4_4_,1);
      FUN_143bd9cf0(local_218,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),
                    *(undefined8 *)(param_1 + 0x10),param_4);
      CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(local_218);
    }
    else {
      local_400 = (undefined1 *)local_3e0;
      FUN_143b611c0(local_3b8,*(undefined8 *)(param_1 + 8),local_3e8,param_2);
      local_3f0 = param_5;
      local_3f8 = 1;
      local_400 = local_3d8;
      local_408 = (undefined4 *)CONCAT44(local_408._4_4_,1);
      FUN_143bd9cf0(local_3b8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),
                    *(undefined8 *)(param_1 + 0x10),param_4);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3b8);
    }
    iVar2 = FUN_143b64b30(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 0xf) {
      local_408 = param_5;
      FUN_143b67490(param_1,param_2,local_3e0,param_4);
    }
    (**(code **)(*param_4 + 8))(param_4,&PTR_145d10b68,1);
    RtAudioError::~RtAudioError(local_3d8);
  }
  return;
}



// FUNCTION 143b67900 FUN_143b67900 body=173 status=ok
// SIG undefined FUN_143b67900(void)

int FUN_143b67900(longlong param_1,uint param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  if ((-1 < (int)param_2) && ((int)param_2 < 0x10000)) {
    local_18 = 0;
    iVar1 = local_18;
    while (local_18 = iVar1, local_18 < *(int *)(param_1 + 0x70)) {
      iVar1 = local_18 + 2 +
              (uint)*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(local_18 + 1) * 2);
      for (local_14 = local_18 + 2; local_14 < iVar1; local_14 = local_14 + 1) {
        if (param_2 == *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)local_14 * 2)) {
          return local_18;
        }
      }
    }
  }
  return -1;
}



// FUNCTION 143b679b0 FUN_143b679b0 body=56 status=ok
// SIG undefined FUN_143b679b0(void)

undefined4 FUN_143b679b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_res10;
  
  cVar1 = FUN_143b65e30(param_2);
  local_res10 = param_2;
  if (cVar1 != '\0') {
    local_res10 = FUN_143b67af0(param_1,param_2);
  }
  return local_res10;
}



// FUNCTION 143b679f0 FUN_143b679f0 body=81 status=ok
// SIG undefined FUN_143b679f0(void)

int FUN_143b679f0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b67900(param_1,param_2);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 2) & 0xff00) << 0x10;
  }
  return iVar1;
}



// FUNCTION 143b67a50 FUN_143b67a50 body=147 status=ok
// SIG undefined FUN_143b67a50(void)

ulonglong FUN_143b67a50(longlong param_1,uint param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x70) <= local_18) {
      return 0xffffffff;
    }
    if (param_2 >> 0x18 <=
        (*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)local_18 * 2) & 0xff)) break;
    local_18 = local_18 + 2 +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(local_18 + 1) * 2);
  }
  return (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(local_18 + 2) * 2);
}



// FUNCTION 143b67af0 FUN_143b67af0 body=120 status=ok
// SIG undefined FUN_143b67af0(void)

undefined4 FUN_143b67af0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_res10;
  
  iVar1 = FUN_143b67480(param_2);
  if (iVar1 == 10) {
    iVar1 = FUN_143b67bd0(param_2);
    local_res10 = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4);
  }
  else if (iVar1 == 0xd) {
    local_res10 = 0xffffffff;
  }
  else {
    local_res10 = param_2;
    if (iVar1 == 0xb) {
      local_res10 = **(undefined4 **)(param_1 + 8);
    }
  }
  return local_res10;
}



// FUNCTION 143b67b70 FUN_143b67b70 body=93 status=ok
// SIG undefined FUN_143b67b70(void)

int FUN_143b67b70(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b67900(param_1,param_2);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 2) & 0xff) + 1) *
            0x1000000 + -1;
  }
  return iVar1;
}



// FUNCTION 143b67bd0 FUN_143b67bd0 body=12 status=ok
// SIG undefined FUN_143b67bd0(void)

uint FUN_143b67bd0(uint param_1)

{
  return param_1 >> 0xd;
}



// FUNCTION 143b67be0 FUN_143b67be0 body=1193 status=ok
// SIG undefined FUN_143b67be0(void)

void FUN_143b67be0(longlong param_1,longlong param_2,int param_3,longlong param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_res18;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_38;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 != '\0') {
    return;
  }
  for (local_68 = 0; local_68 < 3; local_68 = local_68 + 1) {
    *(undefined1 *)(param_4 + local_68) = (undefined1)local_68;
  }
  for (local_64 = 0xff; 0xfe < local_64; local_64 = local_64 + -1) {
    *(undefined1 *)(param_4 + local_64) = (undefined1)local_64;
  }
  for (local_4c = local_68; local_4c <= local_64; local_4c = local_4c + 1) {
    *(undefined1 *)(param_4 + local_4c) = 0;
  }
  local_38 = 0;
  for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
    iVar2 = *(int *)(param_2 + (longlong)local_44 * 4) + -0x1000;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      local_38 = local_38 | 1 << ((byte)iVar2 & 0x1f);
    }
  }
  local_58 = 0;
  while ((*(short *)(*(longlong *)(param_1 + 0x68) + (longlong)(local_58 + 1) * 2) == 1 &&
         (iVar2 = *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(local_58 + 2) * 2) - 0x1000
         , -1 < iVar2))) {
    if ((local_38 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
      uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)local_58 * 2);
      local_48 = (int)uVar3 >> 8;
      do {
        *(undefined1 *)(param_4 + local_48) = (undefined1)local_68;
        local_48 = local_48 + 1;
        local_68 = local_68 + 1;
      } while (local_48 <= (int)(uVar3 & 0xff));
    }
    local_58 = local_58 + 3;
  }
  local_54 = 0;
  while (local_54 < param_3) {
    iVar2 = *(int *)(param_2 + (longlong)local_54 * 4);
    local_54 = local_54 + 1;
    local_res18 = param_3;
    if (iVar2 == 0x67) goto LAB_143b67e54;
    if (iVar2 == -1) {
      *param_5 = 1;
      return;
    }
    iVar2 = FUN_143b67900(param_1,iVar2);
    if (-1 < iVar2) {
      uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 2);
      local_5c = (int)uVar3 >> 8;
      if (*(char *)(param_4 + local_5c) != '\0') {
        *param_5 = 1;
        return;
      }
      do {
        *(undefined1 *)(param_4 + local_5c) = (undefined1)local_68;
        local_5c = local_5c + 1;
        local_68 = local_68 + 1;
      } while (local_5c <= (int)(uVar3 & 0xff));
    }
  }
LAB_143b6802d:
  for (local_50 = 1; local_50 < 0x100; local_50 = local_50 + 1) {
    if (*(char *)(param_4 + local_50) == '\0') {
      *(undefined1 *)(param_4 + local_50) = (undefined1)local_68;
      local_68 = local_68 + 1;
    }
  }
  return;
LAB_143b67e54:
  while (local_54 < local_res18) {
    local_res18 = local_res18 + -1;
    iVar2 = *(int *)(param_2 + (longlong)local_res18 * 4);
    if ((iVar2 == 0x67) || (iVar2 == -1)) {
      *param_5 = 1;
      return;
    }
    iVar2 = FUN_143b67900(param_1,iVar2);
    if (-1 < iVar2) {
      local_40 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 2);
      iVar2 = (int)local_40 >> 8;
      local_40 = local_40 & 0xff;
      if (*(char *)(param_4 + iVar2) != '\0') {
        *param_5 = 1;
        return;
      }
      do {
        *(undefined1 *)(param_4 + (int)local_40) = (undefined1)local_64;
        local_40 = local_40 - 1;
        local_64 = local_64 + -1;
      } while (iVar2 <= (int)local_40);
    }
  }
  goto LAB_143b6802d;
}



// FUNCTION 143b68090 FUN_143b68090 body=68 status=ok
// SIG undefined FUN_143b68090(void)

undefined8 FUN_143b68090(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_143aa29a0(&DAT_146bc7fb8,FUN_143b680e0,param_1);
  cVar1 = FUN_143a8b0e0(*param_1);
  uVar2 = DAT_146bc7fb0;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b680e0 FUN_143b680e0 body=525 status=ok
// SIG undefined FUN_143b680e0(void)

void FUN_143b680e0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 == '\0') {
    local_40 = FUN_143a8d310(0x208);
    if (local_40 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143bd0ca0(local_40,0);
    }
    local_30 = local_38;
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
              (local_48,local_38);
    cVar1 = FUN_143b1fd90(local_48);
    if (cVar1 == '\0') {
      uVar3 = FUN_143a8b510(local_48);
      cVar1 = FUN_143b5f3a0(uVar3);
      if (cVar1 == '\0') {
        lVar4 = FUN_143a8b510(local_48);
        local_28 = FUN_143ac5410("icudt53l-coll",&DAT_145d10be0,"ucadata",FUN_143bcf8d0,
                                 lVar4 + 0x1c0,param_1);
        lVar4 = FUN_143a8b510(local_48);
        *(undefined8 *)(lVar4 + 0x1d8) = local_28;
        cVar1 = FUN_143a8b0e0(*param_1);
        if (cVar1 != '\0') {
          FUN_143b36bb0(local_48);
          return;
        }
        lVar4 = FUN_143a8b510(local_48);
        local_18 = FUN_143ac5780(*(undefined8 *)(lVar4 + 0x1d8));
        local_20 = FUN_143a8b510(local_48);
        lVar4 = FUN_143a8b510(local_48);
        uVar2 = FUN_143ac5720(*(undefined8 *)(lVar4 + 0x1d8));
        FUN_143bcf9e0(0,local_18,uVar2,local_20,param_1);
        cVar1 = FUN_143a8b0e0(*param_1);
        if (cVar1 != '\0') {
          FUN_143b36bb0(local_48);
          return;
        }
        FUN_143b68380(0x1a,FUN_143b682f0);
        uVar3 = FUN_143a8b510(local_48);
        FUN_143e1a120(uVar3);
        DAT_146bc7fb0 = FUN_143b20430(local_48);
        FUN_143b36bb0(local_48);
        return;
      }
    }
    *param_1 = 7;
    FUN_143b36bb0(local_48);
  }
  return;
}



// FUNCTION 143b682f0 FUN_143b682f0 body=35 status=ok
// SIG undefined FUN_143b682f0(void)

undefined1 FUN_143b682f0(void)

{
  FUN_143b60500(&DAT_146bc7fb0);
  FUN_143a9a9f0(&DAT_146bc7fb8);
  return 1;
}



// FUNCTION 143b68320 FUN_143b68320 body=92 status=ok
// SIG undefined FUN_143b68320(void)

undefined8 FUN_143b68320(void)

{
  int local_18;
  
  local_18 = -1;
  while (local_18 = local_18 + 1, local_18 < 0x1e) {
    if (*(longlong *)(&DAT_146bc7fc0 + (longlong)local_18 * 8) != 0) {
      (**(code **)(&DAT_146bc7fc0 + (longlong)local_18 * 8))();
      *(undefined8 *)(&DAT_146bc7fc0 + (longlong)local_18 * 8) = 0;
    }
  }
  return CONCAT71((uint7)(uint3)((uint)local_18 >> 8),1);
}



// FUNCTION 143b68380 FUN_143b68380 body=70 status=ok
// SIG undefined FUN_143b68380(void)

void FUN_143b68380(int param_1,undefined8 param_2)

{
  FUN_143aa7880(7,FUN_143b68320);
  if ((-1 < param_1) && (param_1 < 0x1e)) {
    *(undefined8 *)(&DAT_146bc7fc0 + (longlong)param_1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143b683d0 FUN_143b683d0 body=103 status=ok
// SIG undefined FUN_143b683d0(void)

longlong FUN_143b683d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143aa03b0(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,0);
  *puVar1 = 0;
  FUN_143ac3480(param_1,param_2,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 143b68440 FUN_143b68440 body=103 status=ok
// SIG undefined FUN_143b68440(void)

longlong FUN_143b68440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143aa03b0(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,0);
  *puVar1 = 0;
  FUN_143aa0460(param_1,param_2,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 143b684b0 FUN_143b684b0 body=110 status=ok
// SIG undefined FUN_143b684b0(void)

undefined8 *
FUN_143b684b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_1,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::Formattable::vftable;
  FUN_143a8ac30(param_1 + 0x16);
  FUN_143b695d0(param_1);
  FUN_143b687b0(param_1,param_2);
  return param_1;
}



// FUNCTION 143b68520 FUN_143b68520 body=182 status=ok
// SIG undefined FUN_143b68520(void)

undefined8 * FUN_143b68520(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Formattable::vftable;
  FUN_143a8ac30(param_1 + 0x16);
  FUN_143b695d0(param_1);
  *(undefined4 *)(param_1 + 0x15) = 3;
  lVar1 = FUN_143a8d310(0x28);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143a8d3a0(lVar1,param_2);
  }
  param_1[1] = local_20;
  return param_1;
}



// FUNCTION 143b685e0 FUN_143b685e0 body=102 status=ok
// SIG undefined FUN_143b685e0(void)

undefined8 * FUN_143b685e0(undefined8 *param_1,int param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Formattable::vftable;
  FUN_143a8ac30(param_1 + 0x16);
  FUN_143b695d0(param_1);
  param_1[1] = (longlong)param_2;
  return param_1;
}



// FUNCTION 143b68650 FUN_143b68650 body=121 status=ok
// SIG undefined FUN_143b68650(void)

undefined8 * FUN_143b68650(undefined8 *param_1,undefined8 param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Formattable::vftable;
  FUN_143a8ac30(param_1 + 0x16);
  FUN_143b695d0(param_1);
  *(undefined4 *)(param_1 + 0x15) = 1;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 143b686d0 FUN_143b686d0 body=85 status=ok
// SIG undefined FUN_143b686d0(void)

undefined8 * FUN_143b686d0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Formattable::vftable;
  FUN_143a8ac30(param_1 + 0x16);
  FUN_143b695d0(param_1);
  return param_1;
}



// FUNCTION 143b68730 ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_> body=80 status=ok
// SIG void ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>(call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_> * this)

/* Library Function - Single Match
    public: virtual __cdecl Concurrency::call<unsigned __int64,class std::tr1::function<void
   __cdecl(unsigned __int64 const & __ptr64)> >::~call<unsigned __int64,class
   std::tr1::function<void __cdecl(unsigned __int64 const & __ptr64)> >(void) __ptr64
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void __thiscall
Concurrency::
call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
          (call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
           *this)

{
  *(undefined ***)this = icu_53::Formattable::vftable;
  FUN_143b68ed0(this);
  FUN_143a8dc60(this + 0xb0);
  RtAudioError::~RtAudioError(this);
  return;
}



// FUNCTION 143b68780 FUN_143b68780 body=21 status=ok
// SIG undefined FUN_143b68780(void)

undefined8 FUN_143b68780(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 143b687a0 FUN_143b687a0 body=16 status=ok
// SIG undefined FUN_143b687a0(void)

void FUN_143b687a0(void)

{
  return;
}



// FUNCTION 143b687b0 FUN_143b687b0 body=756 status=ok
// SIG undefined FUN_143b687b0(void)

longlong FUN_143b687b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_74;
  undefined8 local_70;
  _TaskProcThunk *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  _TaskProcThunk *local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    FUN_143b68ed0(param_1);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 0:
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      break;
    case 1:
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      break;
    case 2:
    case 5:
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      break;
    case 3:
      local_50 = FUN_143a8d310(0x28);
      if (local_50 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_143a8d3a0(local_50,*(undefined8 *)(param_2 + 8));
      }
      local_38 = local_40;
      *(undefined8 *)(param_1 + 8) = local_40;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar2 = FUN_143b68d70(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
      *(undefined8 *)(param_1 + 8) = uVar2;
      break;
    case 6:
      uVar2 = FUN_143b696c0(*(undefined8 *)(param_2 + 8));
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
    local_74 = 0;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      local_58 = FUN_143a8d310(0x80);
      if (local_58 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_143b74e30(local_58,*(undefined8 *)(param_2 + 0x20));
      }
      local_28 = local_48;
      *(undefined8 *)(param_1 + 0x20) = local_48;
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      local_60 = FUN_143a8d310(0x40);
      if (local_60 == 0) {
        local_70 = 0;
      }
      else {
        local_70 = FUN_143b683d0(local_60,*(undefined8 *)(param_2 + 0x18),&local_74);
      }
      local_18 = local_70;
      *(undefined8 *)(param_1 + 0x18) = local_70;
      cVar1 = FUN_143a8b0e0(local_74);
      if (cVar1 != '\0') {
        local_68 = *(_TaskProcThunk **)(param_1 + 0x18);
        if (local_68 != (_TaskProcThunk *)0x0) {
          local_30 = local_68;
          Concurrency::details::_TaskProcThunk::_scalar_deleting_destructor_(local_68,1);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
  }
  return param_1;
}



// FUNCTION 143b68ac0 FUN_143b68ac0 body=148 status=ok
// SIG undefined FUN_143b68ac0(void)

call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_> *
FUN_143b68ac0(call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (param_1);
    if ((param_2 & 1) != 0) {
      FUN_143a8d330(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (param_1,0xd8,*(undefined8 *)(param_1 + -8),
               Concurrency::
               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               ::
               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               ,0xfffffffffffffffe);
    if ((param_2 & 1) != 0) {
      FUN_143a8d330(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}



// FUNCTION 143b68b60 `scalar_deleting_destructor' body=54 status=ok
// SIG void * `scalar_deleting_destructor'(_TaskProcThunk * this, uint param_1)

/* Library Function - Single Match
    public: void * __ptr64 __cdecl Concurrency::details::_TaskProcThunk::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall
Concurrency::details::_TaskProcThunk::_scalar_deleting_destructor_
          (_TaskProcThunk *this,uint param_1)

{
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(this);
  if ((param_1 & 1) != 0) {
    FUN_143a8d330(this);
  }
  return this;
}



// FUNCTION 143b68ba0 FUN_143b68ba0 body=75 status=ok
// SIG undefined FUN_143b68ba0(void)

void FUN_143b68ba0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 4;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 143b68bf0 FUN_143b68bf0 body=252 status=ok
// SIG undefined FUN_143b68bf0(void)

void FUN_143b68bf0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x20) == param_2) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_143b68ed0(param_1);
  *(longlong *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    cVar1 = FUN_143b75760(*(undefined8 *)(param_1 + 0x20),0);
    if (cVar1 == '\0') {
      cVar1 = FUN_143b75500(*(undefined8 *)(param_1 + 0x20),0);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0xa8) = 1;
        uVar3 = FUN_143b75c80(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 8) = uVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0xa8) = 5;
        uVar3 = FUN_143b75fa0(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 8) = uVar3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 2;
      iVar2 = FUN_143b76110(*(undefined8 *)(param_1 + 0x20));
      *(longlong *)(param_1 + 8) = (longlong)iVar2;
    }
  }
  return;
}



// FUNCTION 143b68cf0 FUN_143b68cf0 body=58 status=ok
// SIG undefined FUN_143b68cf0(void)

void FUN_143b68cf0(longlong param_1,undefined8 param_2)

{
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 6;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143b68d30 FUN_143b68d30 body=58 status=ok
// SIG undefined FUN_143b68d30(void)

void FUN_143b68d30(longlong param_1,undefined8 param_2)

{
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 3;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143b68d70 FUN_143b68d70 body=341 status=ok
// SIG undefined FUN_143b68d70(void)

ulonglong * FUN_143b68d70(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int local_48;
  ulonglong *local_28;
  ulonglong *local_20;
  
  uVar2 = (ulonglong)param_2;
  if (uVar2 == 0) {
    local_28 = (ulonglong *)operator_new(8);
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    uVar3 = SUB168(ZEXT816(0xd8) * auVar1,0);
    if (SUB168(ZEXT816(0xd8) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar4 = uVar3 + 8;
    if (0xfffffffffffffff7 < uVar3) {
      lVar4 = -1;
    }
    local_28 = (ulonglong *)FUN_143a8d310(lVar4);
  }
  if (local_28 == (ulonglong *)0x0) {
    local_20 = (ulonglong *)0x0;
  }
  else {
    *local_28 = uVar2;
    _eh_vector_constructor_iterator_
              (local_28 + 1,0xd8,uVar2,FUN_143b686d0,
               Concurrency::
               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
               ::
               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              );
    local_20 = local_28 + 1;
  }
  if (local_20 != (ulonglong *)0x0) {
    for (local_48 = 0; local_48 < param_2; local_48 = local_48 + 1) {
      FUN_143b687b0(local_20 + (longlong)local_48 * 0x1b,param_1 + (longlong)local_48 * 0xd8);
    }
  }
  return local_20;
}



// FUNCTION 143b68ed0 FUN_143b68ed0 body=645 status=ok
// SIG undefined FUN_143b68ed0(void)

void FUN_143b68ed0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 3) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else if (iVar1 == 4) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      if (puVar2[-1] == 0) {
        FMemory::operator_delete(puVar2 + -1);
      }
      else {
        (**(code **)*puVar2)(puVar2,3);
      }
    }
  }
  else if ((iVar1 == 6) && (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined4 *)(param_1 + 0xa8) = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(_TaskProcThunk **)(param_1 + 0x18) != (_TaskProcThunk *)0x0) {
    Concurrency::details::_TaskProcThunk::_scalar_deleting_destructor_
              (*(_TaskProcThunk **)(param_1 + 0x18),1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x20) == param_1 + 0x28) {
    FUN_143b3bab0(*(undefined8 *)(param_1 + 0x20),0);
  }
  else if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_143b3bab0(*(longlong *)(param_1 + 0x20),1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143b69160 FUN_143b69160 body=17 status=ok
// SIG undefined FUN_143b69160(void)

longlong FUN_143b69160(longlong param_1)

{
  return param_1 + 0xb0;
}



// FUNCTION 143b69180 FUN_143b69180 body=208 status=ok
// SIG undefined FUN_143b69180(void)

double FUN_143b69180(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0xa8);
    if (iVar1 == 1) {
      dVar4 = *(double *)(param_1 + 8);
    }
    else if ((iVar1 == 2) || (iVar1 == 5)) {
      dVar4 = (double)*(longlong *)(param_1 + 8);
    }
    else {
      if (iVar1 == 6) {
        if (*(longlong *)(param_1 + 8) == 0) {
          *param_2 = 7;
          return 0.0;
        }
        cVar2 = FUN_143b69630(*(undefined8 *)(param_1 + 8));
        if (cVar2 != '\0') {
          uVar3 = FUN_143accb70(*(undefined8 *)(param_1 + 8));
          dVar4 = (double)FUN_143b69180(uVar3,param_2);
          return dVar4;
        }
      }
      *param_2 = 3;
      dVar4 = 0.0;
    }
  }
  else {
    dVar4 = 0.0;
  }
  return dVar4;
}



// FUNCTION 143b69250 FUN_143b69250 body=19 status=ok
// SIG undefined FUN_143b69250(void)

void FUN_143b69250(void)

{
  FUN_143b69530();
  return;
}



// FUNCTION 143b69270 FUN_143b69270 body=229 status=ok
// SIG undefined FUN_143b69270(void)

undefined8 FUN_143b69270(longlong param_1)

{
  longlong lVar1;
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x20) == param_1 + 0x28) {
    FUN_143b752b0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_143b3bab0(*(longlong *)(param_1 + 0x20),1);
    }
    lVar1 = FUN_143b68780(0x80,param_1 + 0x28,0);
    if (lVar1 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143b74e90(lVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = local_30;
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 143b69360 FUN_143b69360 body=380 status=ok
// SIG undefined FUN_143b69360(void)

ulonglong FUN_143b69360(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0xa8);
    if (iVar1 == 1) {
      if (*(double *)(param_1 + 8) <= 2147483647.0) {
        if (-2147483648.0 < *(double *)(param_1 + 8) || *(double *)(param_1 + 8) == -2147483648.0) {
          uVar4 = (ulonglong)(uint)(int)*(double *)(param_1 + 8);
        }
        else {
          *param_2 = 3;
          uVar4 = 0x80000000;
        }
      }
      else {
        *param_2 = 3;
        uVar4 = 0x7fffffff;
      }
    }
    else if (iVar1 == 2) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 8);
    }
    else if (iVar1 == 5) {
      if (*(longlong *)(param_1 + 8) < 0x80000000) {
        if (*(longlong *)(param_1 + 8) < -0x80000000) {
          *param_2 = 3;
          uVar4 = 0x80000000;
        }
        else {
          uVar4 = (ulonglong)*(uint *)(param_1 + 8);
        }
      }
      else {
        *param_2 = 3;
        uVar4 = 0x7fffffff;
      }
    }
    else {
      if (iVar1 == 6) {
        if (*(longlong *)(param_1 + 8) == 0) {
          *param_2 = 7;
          return 0;
        }
        cVar2 = FUN_143b69630(*(undefined8 *)(param_1 + 8));
        if (cVar2 != '\0') {
          uVar3 = FUN_143accb70(*(undefined8 *)(param_1 + 8));
          uVar4 = FUN_143b69360(uVar3,param_2);
          return uVar4;
        }
      }
      *param_2 = 3;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143b694f0 FUN_143b694f0 body=55 status=ok
// SIG undefined FUN_143b694f0(void)

undefined8 FUN_143b694f0(longlong param_1)

{
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0xa8) == 6) {
    local_18 = *(undefined8 *)(param_1 + 8);
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b69530 FUN_143b69530 body=8 status=ok
// SIG undefined FUN_143b69530(void)

undefined * FUN_143b69530(void)

{
  return &DAT_146bc80b0;
}



// FUNCTION 143b69540 FUN_143b69540 body=108 status=ok
// SIG undefined FUN_143b69540(void)

undefined8 FUN_143b69540(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 3) {
    if (*(longlong *)(param_1 + 8) == 0) {
      FUN_143b69900(param_2,7);
      uVar1 = FUN_143b69160(param_1);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    FUN_143b69900(param_2,3);
    uVar1 = FUN_143b69160(param_1);
  }
  return uVar1;
}



// FUNCTION 143b695b0 FUN_143b695b0 body=17 status=ok
// SIG undefined FUN_143b695b0(void)

undefined4 FUN_143b695b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



// FUNCTION 143b695d0 FUN_143b695d0 body=87 status=ok
// SIG undefined FUN_143b695d0(void)

void FUN_143b695d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_143a90e90(param_1 + 0xb0);
  return;
}



// FUNCTION 143b69630 FUN_143b69630 body=70 status=ok
// SIG undefined FUN_143b69630(void)

bool FUN_143b69630(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&icu_53::UObject::RTTI_Type_Descriptor,
                     &icu_53::Measure::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}



// FUNCTION 143b69680 FUN_143b69680 body=54 status=ok
// SIG undefined FUN_143b69680(void)

longlong FUN_143b69680(longlong param_1)

{
  int iVar1;
  uint7 uVar3;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  uVar3 = (uint7)(uint3)((uint)iVar1 >> 8);
  if ((iVar1 < 1) || ((2 < iVar1 && (iVar1 != 5)))) {
    lVar2 = (ulonglong)uVar3 << 8;
  }
  else {
    lVar2 = CONCAT71(uVar3,1);
  }
  return lVar2;
}



// FUNCTION 143b696c0 FUN_143b696c0 body=30 status=ok
// SIG undefined FUN_143b696c0(void)

void FUN_143b696c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 143b696e0 FUN_143b696e0 body=61 status=ok
// SIG undefined FUN_143b696e0(void)

void FUN_143b696e0(longlong param_1,undefined8 param_2)

{
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143b69720 FUN_143b69720 body=407 status=ok
// SIG undefined FUN_143b69720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b69720(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143b68ed0(param_1);
    local_b0 = FUN_143a8d310(0x80);
    if (local_b0 == 0) {
      local_a8 = 0;
    }
    else {
      local_a8 = FUN_143b74e90(local_b0);
    }
    local_88 = local_a8;
    local_b8 = local_a8;
    if (local_a8 == 0) {
      *param_3 = 7;
    }
    else {
      local_98 = FUN_143b68440(local_58,param_2,param_3);
      local_78 = local_98;
      uVar2 = FUN_143b49c10(local_98,local_68);
      FUN_143b76520(local_b8,uVar2,param_3,0);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        FUN_143b68bf0(param_1,local_b8);
      }
      else {
        local_80 = local_b8;
        local_a0 = local_b8;
        if (local_b8 != 0) {
          FUN_143b3bab0(local_b8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143b698c0 FUN_143b698c0 body=61 status=ok
// SIG undefined FUN_143b698c0(void)

void FUN_143b698c0(longlong param_1,undefined8 param_2)

{
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143b69900 FUN_143b69900 body=48 status=ok
// SIG undefined FUN_143b69900(void)

void FUN_143b69900(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_1);
  if (cVar1 != '\0') {
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 143b69930 FUN_143b69930 body=57 status=ok
// SIG undefined FUN_143b69930(void)

void FUN_143b69930(longlong param_1,int param_2)

{
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 2;
  *(longlong *)(param_1 + 8) = (longlong)param_2;
  return;
}



// FUNCTION 143b69970 FUN_143b69970 body=131 status=ok
// SIG undefined FUN_143b69970(void)

void FUN_143b69970(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  FUN_143b68ed0(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 3;
  lVar1 = FUN_143a8d310(0x28);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143a8d3a0(lVar1,param_2);
  }
  *(undefined8 *)(param_1 + 8) = local_20;
  return;
}



// FUNCTION 143b69a00 FUN_143b69a00 body=80 status=ok
// SIG undefined FUN_143b69a00(void)

undefined8 *
FUN_143b69a00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::Format::vftable;
  FUN_143b69b20(param_1,param_2);
  return param_1;
}



// FUNCTION 143b69a50 FUN_143b69a50 body=101 status=ok
// SIG undefined FUN_143b69a50(void)

undefined8 * FUN_143b69a50(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Format::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  return param_1;
}



// FUNCTION 143b69ac0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::FieldPosition::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b69af0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::Format::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b69b20 FUN_143b69b20 body=93 status=ok
// SIG undefined FUN_143b69b20(void)

longlong FUN_143b69b20(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0xa5),(char *)(param_2 + 0xa5));
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 8),(char *)(param_2 + 8));
  }
  return param_1;
}



// FUNCTION 143b69b80 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b69bc0 FUN_143b69bc0 body=153 status=ok
// SIG undefined FUN_143b69bc0(void)

undefined8
FUN_143b69bc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 local_28 [40];
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143b36810(local_28,0xffffffff);
    param_3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,local_28,param_4);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
  }
  return param_3;
}



// FUNCTION 143b69c60 FUN_143b69c60 body=19 status=ok
// SIG undefined FUN_143b69c60(void)

void FUN_143b69c60(void)

{
  FUN_143b69cd0();
  return;
}



// FUNCTION 143b69c80 FUN_143b69c80 body=79 status=ok
// SIG undefined FUN_143b69c80(void)

void FUN_143b69c80(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_18 [24];
  
  FUN_143a9f4f0(local_18,param_1 + 0xa5,param_1 + 8);
  FUN_143acfd10(local_18,param_2,param_3);
  return;
}



// FUNCTION 143b69cd0 FUN_143b69cd0 body=8 status=ok
// SIG undefined FUN_143b69cd0(void)

undefined * FUN_143b69cd0(void)

{
  return &DAT_146bc80b1;
}



// FUNCTION 143b69ce0 FUN_143b69ce0 body=81 status=ok
// SIG undefined FUN_143b69ce0(void)

void FUN_143b69ce0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_18 [24];
  
  FUN_143a9f4f0(local_18,param_1 + 0xa5,param_1 + 8);
  FUN_143acfd80(local_18,param_2,param_3);
  return;
}



// FUNCTION 143b69d40 FUN_143b69d40 body=54 status=ok
// SIG undefined FUN_143b69d40(void)

undefined8 * FUN_143b69d40(undefined8 *param_1,undefined8 param_2)

{
  FUN_143be3d50(param_1,param_2);
  *param_1 = icu_53::CurrencyAmount::vftable;
  return param_1;
}



// FUNCTION 143b69d80 FUN_143b69d80 body=152 status=ok
// SIG undefined FUN_143b69d80(void)

undefined8 *
FUN_143b69d80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x20);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143be40f0(lVar1,param_3,param_4);
  }
  FUN_143be3dd0(param_1,param_2,local_20,param_4);
  *param_1 = icu_53::CurrencyAmount::vftable;
  return param_1;
}



// FUNCTION 143b69e20 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CurrencyAmount::vftable;
  FUN_143be3e80(param_1);
  return;
}



// FUNCTION 143b69e50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b69e90 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0xe8);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b69d40(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b69ef0 FUN_143b69ef0 body=19 status=ok
// SIG undefined FUN_143b69ef0(void)

void FUN_143b69ef0(void)

{
  FUN_143b69f10();
  return;
}



// FUNCTION 143b69f10 FUN_143b69f10 body=8 status=ok
// SIG undefined FUN_143b69f10(void)

undefined * FUN_143b69f10(void)

{
  return &DAT_146bc80b2;
}



// FUNCTION 143b69f20 FUN_143b69f20 body=296 status=ok
// SIG undefined FUN_143b69f20(void)

undefined8 * FUN_143b69f20(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DecimalFormatSymbols::vftable;
  _eh_vector_constructor_iterator_(param_1 + 1,0x28,0x1b,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143a8ac30(param_1 + 0x88);
  FUN_143a8aad0(param_1 + 0x8d);
  _eh_vector_constructor_iterator_(param_1 + 0xe5,0x28,3,FUN_143a8ac30,FUN_143a8dc60);
  _eh_vector_constructor_iterator_(param_1 + 0xf4,0x28,3,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143b6a740(param_1,param_1 + 0x8d,param_2,1);
  return param_1;
}



// FUNCTION 143b6a050 FUN_143b6a050 body=268 status=ok
// SIG undefined FUN_143b6a050(void)

undefined8 * FUN_143b6a050(undefined8 *param_1,undefined8 param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::DecimalFormatSymbols::vftable;
  _eh_vector_constructor_iterator_(param_1 + 1,0x28,0x1b,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143a8ac30(param_1 + 0x88);
  FUN_143a8aad0(param_1 + 0x8d);
  _eh_vector_constructor_iterator_(param_1 + 0xe5,0x28,3,FUN_143a8ac30,FUN_143a8dc60);
  _eh_vector_constructor_iterator_(param_1 + 0xf4,0x28,3,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143b6a370(param_1,param_2);
  return param_1;
}



// FUNCTION 143b6a160 FUN_143b6a160 body=306 status=ok
// SIG undefined FUN_143b6a160(void)

undefined8 * FUN_143b6a160(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DecimalFormatSymbols::vftable;
  _eh_vector_constructor_iterator_(param_1 + 1,0x28,0x1b,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143a8ac30(param_1 + 0x88);
  FUN_143a8a610(param_1 + 0x8d,param_2);
  _eh_vector_constructor_iterator_(param_1 + 0xe5,0x28,3,FUN_143a8ac30,FUN_143a8dc60);
  _eh_vector_constructor_iterator_(param_1 + 0xf4,0x28,3,FUN_143a8ac30,FUN_143a8dc60);
  FUN_143b6a740(param_1,param_1 + 0x8d,param_3,0);
  return param_1;
}



// FUNCTION 143b6a2a0 FUN_143b6a2a0 body=201 status=ok
// SIG undefined FUN_143b6a2a0(void)

void FUN_143b6a2a0(undefined8 *param_1)

{
  *param_1 = icu_53::DecimalFormatSymbols::vftable;
  _eh_vector_destructor_iterator_(param_1 + 0xf4,0x28,3,FUN_143a8dc60,0xfffffffffffffffe);
  _eh_vector_destructor_iterator_(param_1 + 0xe5,0x28,3,FUN_143a8dc60);
  FUN_143a8acf0(param_1 + 0x8d);
  FUN_143a8dc60(param_1 + 0x88);
  _eh_vector_destructor_iterator_(param_1 + 1,0x28,0x1b,FUN_143a8dc60);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b6a370 FUN_143b6a370 body=341 status=ok
// SIG undefined FUN_143b6a370(void)

longlong FUN_143b6a370(longlong param_1,longlong param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 != param_2) {
    for (local_14 = 0; local_14 < 0x1b; local_14 = local_14 + 1) {
      UDarwinGameplayFunctionLibrary::GetInSameTeam
                (param_1 + 8 + (longlong)local_14 * 0x28,param_2 + 8 + (longlong)local_14 * 0x28);
    }
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      UDarwinGameplayFunctionLibrary::GetInSameTeam
                (param_1 + 0x728 + (longlong)local_18 * 0x28,
                 param_2 + 0x728 + (longlong)local_18 * 0x28);
      UDarwinGameplayFunctionLibrary::GetInSameTeam
                (param_1 + 0x7a0 + (longlong)local_18 * 0x28,
                 param_2 + 0x7a0 + (longlong)local_18 * 0x28);
    }
    FUN_143a8adb0(param_1 + 0x468,param_2 + 0x468);
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x67d),(char *)(param_2 + 0x67d));
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x5e0),(char *)(param_2 + 0x5e0));
  }
  return param_1;
}



// FUNCTION 143b6a4d0 FUN_143b6a4d0 body=65 status=ok
// SIG undefined FUN_143b6a4d0(void)

void FUN_143b6a4d0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f0d0(param_1,0,uVar1,local_res10,0,1);
  return;
}



// FUNCTION 143b6a520 FUN_143b6a520 body=420 status=ok
// SIG undefined FUN_143b6a520(void)

undefined1 FUN_143b6a520(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_18;
  int local_14;
  int local_10;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else {
    for (local_10 = 0; local_10 < 0x1b; local_10 = local_10 + 1) {
      cVar1 = FUN_143b0c130(param_1 + 8 + (longlong)local_10 * 0x28,
                            param_2 + 8 + (longlong)local_10 * 0x28);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      cVar1 = FUN_143b0c130(param_1 + 0x728 + (longlong)local_14 * 0x28,
                            param_2 + 0x728 + (longlong)local_14 * 0x28);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = FUN_143b0c130(param_1 + 0x7a0 + (longlong)local_14 * 0x28,
                            param_2 + 0x7a0 + (longlong)local_14 * 0x28);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    cVar1 = FUN_143a8afa0(param_1 + 0x468,param_2 + 0x468);
    if (((cVar1 == '\0') ||
        (iVar2 = _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x67d),(char *)(param_2 + 0x67d)),
        iVar2 != 0)) ||
       (iVar2 = _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x5e0),(char *)(param_2 + 0x5e0)),
       iVar2 != 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
  }
  return local_18;
}



// FUNCTION 143b6a6d0 FUN_143b6a6d0 body=54 status=ok
// SIG undefined FUN_143b6a6d0(void)

undefined8 FUN_143b6a6d0(undefined8 param_1,uint param_2)

{
  FUN_143b6a2a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b6a710 FUN_143b6a710 body=19 status=ok
// SIG undefined FUN_143b6a710(void)

void FUN_143b6a710(void)

{
  FUN_143b6a730();
  return;
}



// FUNCTION 143b6a730 FUN_143b6a730 body=8 status=ok
// SIG undefined FUN_143b6a730(void)

undefined * FUN_143b6a730(void)

{
  return &DAT_146bc80b3;
}



// FUNCTION 143b6a740 FUN_143b6a740 body=3641 status=ok
// SIG undefined FUN_143b6a740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b6a740(longlong param_1,undefined8 param_2,int *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_2e8 [32];
  int local_2c8;
  char local_2c4;
  char local_2c3;
  char local_2c2;
  undefined1 local_2c1;
  int local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  int local_2b4;
  uint local_2b0;
  uint local_2ac;
  int local_2a8;
  int local_2a4;
  undefined1 local_2a0 [8];
  undefined4 local_298;
  int local_294;
  undefined1 local_290;
  undefined1 local_28f [7];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  int local_270;
  CHeapPtrBase<wchar_t,ATL::CComAllocator> local_268 [8];
  undefined8 local_260;
  undefined4 local_258 [2];
  undefined8 local_250;
  CHeapPtrBase<wchar_t,ATL::CComAllocator> local_248 [8];
  char *local_240;
  undefined1 local_238 [8];
  undefined4 local_230 [2];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined **local_1d0;
  longlong local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [40];
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  char *local_38 [3];
  undefined2 local_20;
  undefined1 local_1e [6];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_168 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_250 = 0;
  local_2ac = 0;
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  *(undefined1 *)(param_1 + 0x67d) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return;
  }
  local_260 = FUN_143a8c200(param_2);
  uVar3 = FUN_143aa5b10(0,local_260,param_3);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_228,uVar3);
  uVar3 = FUN_143a8b510(local_228);
  uVar3 = FUN_143aa3350(uVar3,"NumberElements",0,param_3);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_288,uVar3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    if (param_4 != '\0') {
      *param_3 = -0x7f;
      FUN_143b6b580(param_1);
    }
    FUN_143b36c80(local_288);
    FUN_143b36c80(local_228);
    return;
  }
  FUN_143b6b580(param_1);
  uVar3 = FUN_143b6f670(param_2,param_3);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_278,uVar3);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    uVar3 = FUN_143a8b510(local_278);
    iVar2 = FUN_143ab3100(uVar3);
    if (iVar2 == 10) {
      uVar3 = FUN_143a8b510(local_278);
      cVar1 = FUN_143b6fde0(uVar3);
      if (cVar1 == '\0') {
        uVar3 = FUN_143a8b510(local_278);
        local_240 = (char *)FUN_143b6fdc0(uVar3);
        local_220 = (longlong *)FUN_143a8b510(local_278);
        (**(code **)(*local_220 + 0x10))(local_220,local_150);
        local_294 = 0;
        local_2b0 = FUN_143a8e3e0(local_150,0);
        FUN_143b10c50(param_1 + 0xa8,local_2b0);
        for (local_2a4 = 0x12; local_2a4 < 0x1b; local_2a4 = local_2a4 + 1) {
          if (local_2b0 < 0x10000) {
            local_270 = 1;
          }
          else {
            local_270 = 2;
          }
          local_294 = local_294 + local_270;
          local_2b0 = FUN_143a8e3e0(local_150,local_294);
          FUN_143b10c50(param_1 + 8 + (longlong)local_2a4 * 0x28,local_2b0);
        }
        FUN_143a8dc60(local_150);
        goto LAB_143b6aa63;
      }
    }
  }
  local_240 = PTR_DAT_146832a38;
LAB_143b6aa63:
  iVar2 = _guard_xfg_dispatch_icall_nop(local_240,PTR_DAT_146832a38);
  local_2c2 = iVar2 == 0;
  local_258[0] = 0;
  local_2c1 = local_2c2;
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_268,0);
  if (local_2c2 == '\0') {
    uVar3 = FUN_143a8b510(local_288);
    pwVar4 = (wchar_t *)FUN_143aa3350(uVar3,local_240,0,local_258);
    ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach(local_268,pwVar4);
    local_1f0 = FUN_143a8b510(local_268);
    uVar3 = FUN_143a8b510(local_268);
    FUN_143aa3350(uVar3,PTR_s_symbols_146832a40,local_1f0,local_258);
  }
  uVar3 = FUN_143a8b510(local_288);
  uVar3 = FUN_143aa3350(uVar3,PTR_DAT_146832a38,0,param_3);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_280,uVar3);
  local_188 = FUN_143a8b510(local_280);
  uVar3 = FUN_143a8b510(local_280);
  FUN_143aa3350(uVar3,PTR_s_symbols_146832a40,local_188,param_3);
  local_2c4 = '\0';
  local_2c3 = '\0';
  for (local_2c0 = 0; local_2c0 < 0x1b; local_2c0 = local_2c0 + 1) {
    if ((&PTR_s_decimal_146832960)[local_2c0] != (undefined *)0x0) {
      local_2bc = 0;
      if (local_2c2 == '\0') {
        local_198 = (longlong)local_2c0;
        local_1e0 = &PTR_s_decimal_146832960;
        uVar3 = FUN_143a8b510(local_268);
        local_250 = FUN_143aa4fe0(uVar3,local_1e0[local_198],&local_2ac,&local_2bc);
        cVar1 = FUN_143a8b0e0(local_2bc);
        if (cVar1 != '\0') {
          local_2bc = 0;
          local_190 = (longlong)local_2c0;
          local_1d0 = &PTR_s_decimal_146832960;
          uVar3 = FUN_143a8b510(local_280);
          local_250 = FUN_143aa4fe0(uVar3,local_1d0[local_190],&local_2ac,&local_2bc);
        }
      }
      else {
        local_180 = (longlong)local_2c0;
        local_1c0 = &PTR_s_decimal_146832960;
        uVar3 = FUN_143a8b510(local_280);
        local_250 = FUN_143aa4fe0(uVar3,local_1c0[local_180],&local_2ac,&local_2bc);
      }
      cVar1 = FUN_143a8b110(local_2bc);
      if (cVar1 != '\0') {
        local_1b0 = FUN_143a8d4f0(local_60,1,local_250,local_2ac);
        local_170 = local_1b0;
        FUN_143b6b8e0(param_1,local_2c0,local_1b0,1);
        FUN_143a8dc60(local_60);
        if (local_2c0 == 10) {
          local_2c4 = '\x01';
        }
        else if (local_2c0 == 0x11) {
          local_2c3 = '\x01';
        }
      }
    }
  }
  if (local_2c4 == '\0') {
    FUN_143b6b8e0(param_1,10,param_1 + 8,1);
  }
  if (local_2c3 == '\0') {
    FUN_143b6b8e0(param_1,0x11,param_1 + 0x30,1);
  }
  local_298 = 0;
  FUN_143a8ac30(local_128);
  FUN_143b6e350(local_260,local_18,4,&local_298);
  FUN_143b6ed70(local_18,local_260,local_128,&local_298);
  cVar1 = FUN_143a8b110(local_298);
  if (cVar1 != '\0') {
    FUN_143ab21b0(param_1 + 0x170,local_18,0xffffffff);
    FUN_143a8dcd0(param_1 + 0x148,local_128);
  }
  FUN_143a9f4f0(local_160,param_1 + 0x67d,param_1 + 0x5e0);
  uVar3 = FUN_143a8b510(local_288);
  local_1a0 = FUN_143aa4780(uVar3,0,param_3);
  uVar3 = FUN_143a8b510(local_288);
  uVar3 = FUN_143aa4780(uVar3,1,param_3);
  FUN_143acfd80(local_160,uVar3,local_1a0);
  local_20 = 0;
  puVar6 = local_1e;
  for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_2a8 = 4;
  local_178 = FUN_143a8c200(param_2);
  local_2c8 = 0;
  local_2a8 = FUN_143b6e350(local_178,&local_20,local_2a8,&local_2c8);
  cVar1 = FUN_143a8b110(local_2c8);
  if ((cVar1 != '\0') && (0 < local_2a8)) {
    local_290 = 0;
    puVar6 = local_28f;
    for (lVar5 = 3; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_143ab5770(&local_20,&local_290,local_2a8);
    uVar3 = FUN_143aa5b10("icudt53l-curr",local_260,&local_2c8);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_210,uVar3)
    ;
    uVar3 = FUN_143a8b510(local_210);
    uVar3 = FUN_143aa3350(uVar3,"Currencies",0,&local_2c8);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_2a0,uVar3)
    ;
    local_208 = FUN_143a8b510(local_2a0);
    uVar3 = FUN_143a8b510(local_2a0);
    FUN_143aa3350(uVar3,&local_290,local_208,&local_2c8);
    cVar1 = FUN_143a8b110(local_2c8);
    if (cVar1 != '\0') {
      uVar3 = FUN_143a8b510(local_2a0);
      iVar2 = FUN_143aa4d80(uVar3);
      if (2 < iVar2) {
        local_200 = FUN_143a8b510(local_2a0);
        uVar3 = FUN_143a8b510(local_2a0);
        FUN_143aa30d0(uVar3,2,local_200,&local_2c8);
        local_230[0] = 0;
        uVar3 = FUN_143a8b510(local_2a0);
        uVar3 = FUN_143aa4da0(uVar3,0,local_230,&local_2c8);
        *(undefined8 *)(param_1 + 0x720) = uVar3;
        uVar3 = FUN_143a8b510(local_2a0);
        FUN_143b4d580(local_d8,uVar3,1,&local_2c8);
        uVar3 = FUN_143a8b510(local_2a0);
        FUN_143b4d580(local_100,uVar3,2,&local_2c8);
        cVar1 = FUN_143a8b110(local_2c8);
        if (cVar1 != '\0') {
          FUN_143a8dcd0(param_1 + 0x2b0,local_100);
          FUN_143a8dcd0(param_1 + 0x198,local_d8);
          *param_3 = local_2c8;
        }
        FUN_143a8dc60(local_100);
        FUN_143a8dc60(local_d8);
      }
    }
    FUN_143b36c80(local_2a0);
    FUN_143b36c80(local_210);
  }
  local_2c8 = 0;
  uVar3 = FUN_143aa5b10("icudt53l-curr",local_260,&local_2c8);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_218,uVar3);
  uVar3 = FUN_143a8b510(local_218);
  uVar3 = FUN_143aa3350(uVar3,"currencySpacing",0,&local_2c8);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_238,uVar3);
  if ((local_2c8 == -0x80) || (cVar1 = FUN_143a8b110(local_2c8), cVar1 != '\0')) {
    local_38[0] = "currencyMatch";
    local_38[1] = "surroundingMatch";
    local_38[2] = "insertBetween";
    local_2c8 = 0;
    uVar3 = FUN_143a8b510(local_238);
    uVar3 = FUN_143aa3350(uVar3,"beforeCurrency",0,&local_2c8);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_248,uVar3)
    ;
    if ((local_2c8 == -0x80) || (cVar1 = FUN_143a8b110(local_2c8), cVar1 != '\0')) {
      local_2c8 = 0;
      for (local_2b8 = 0; local_2b8 < 3; local_2b8 = local_2b8 + 1) {
        local_1f8 = (longlong)local_2b8;
        uVar3 = FUN_143a8b510(local_248);
        local_1e8 = FUN_143b6ba30(local_88,uVar3,local_38[local_1f8],&local_2c8);
        local_1d8 = local_1e8;
        FUN_143a8dcd0(param_1 + 0x728 + (longlong)local_2b8 * 0x28,local_1e8);
        FUN_143a8dc60(local_88);
      }
    }
    uVar3 = FUN_143a8b510(local_238);
    pwVar4 = (wchar_t *)FUN_143aa3350(uVar3,"afterCurrency",0,&local_2c8);
    ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach(local_248,pwVar4);
    if ((local_2c8 == -0x80) || (cVar1 = FUN_143a8b110(local_2c8), cVar1 != '\0')) {
      local_2c8 = 0;
      for (local_2b4 = 0; local_2b4 < 3; local_2b4 = local_2b4 + 1) {
        local_1c8 = (longlong)local_2b4;
        uVar3 = FUN_143a8b510(local_248);
        local_1b8 = FUN_143b6ba30(local_b0,uVar3,local_38[local_1c8],&local_2c8);
        local_1a8 = local_1b8;
        FUN_143a8dcd0(param_1 + 0x7a0 + (longlong)local_2b4 * 0x28,local_1b8);
        FUN_143a8dc60(local_b0);
      }
    }
    FUN_143b36c80(local_248);
  }
  FUN_143b36c80(local_238);
  FUN_143b36c80(local_218);
  FUN_143a8dc60(local_128);
  FUN_143b36c80(local_280);
  FUN_143b36c80(local_268);
  FUN_143b36bb0(local_278);
  FUN_143b36c80(local_288);
  FUN_143b36c80(local_228);
  return;
}



// FUNCTION 143b6b580 FUN_143b6b580 body=854 status=ok
// SIG undefined FUN_143b6b580(void)

void FUN_143b6b580(longlong param_1)

{
  undefined1 uVar1;
  
  FUN_143b6a4d0(param_1 + 8,0x2e);
  FUN_143a90910(param_1 + 0x30);
  FUN_143b6a4d0(param_1 + 0x58,0x3b);
  FUN_143b6a4d0(param_1 + 0x80,0x25);
  FUN_143b6a4d0(param_1 + 0xa8,0x30);
  FUN_143b6a4d0(param_1 + 0x2d8,0x31);
  FUN_143b6a4d0(param_1 + 0x300,0x32);
  FUN_143b6a4d0(param_1 + 0x328,0x33);
  FUN_143b6a4d0(param_1 + 0x350,0x34);
  FUN_143b6a4d0(param_1 + 0x378,0x35);
  FUN_143b6a4d0(param_1 + 0x3a0,0x36);
  FUN_143b6a4d0(param_1 + 0x3c8,0x37);
  FUN_143b6a4d0(param_1 + 0x3f0,0x38);
  FUN_143b6a4d0(param_1 + 0x418,0x39);
  FUN_143b6a4d0(param_1 + 0xd0,0x23);
  FUN_143b6a4d0(param_1 + 0x120,0x2b);
  FUN_143b6a4d0(param_1 + 0xf8,0x2d);
  uVar1 = 0;
  FUN_143b6a4d0(param_1 + 0x148,0xa4);
  FUN_143a90d80(param_1 + 0x170,CONCAT11(uVar1,1),&DAT_145d11004,2);
  FUN_143b6a4d0(param_1 + 0x198,0x2e);
  FUN_143b6a4d0(param_1 + 0x1c0,0x45);
  FUN_143b6a4d0(param_1 + 0x1e8,0x2030);
  FUN_143b6a4d0(param_1 + 0x210,0x2a);
  FUN_143b6a4d0(param_1 + 0x238,0x221e);
  FUN_143b6a4d0(param_1 + 0x260,0xfffd);
  FUN_143b6a4d0(param_1 + 0x288,0x40);
  FUN_143a90910(param_1 + 0x2b0);
  return;
}



// FUNCTION 143b6b8e0 FUN_143b6b8e0 body=328 status=ok
// SIG undefined FUN_143b6b8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b6b8e0(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  char local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_2 < 0x1b) {
    FUN_143a8dcd0(param_1 + 8 + (longlong)param_2 * 0x28,param_3);
  }
  if ((param_4 != '\0') && (param_2 == 4)) {
    iVar1 = FUN_143a8eb50(param_3,0,0x7fffffff);
    if (iVar1 == 1) {
      local_54 = FUN_143a8e3e0(param_3,0);
      iVar1 = FUN_143a9da10(local_54);
      if (iVar1 == 0) {
        for (local_58 = '\x01'; local_58 < '\n'; local_58 = local_58 + '\x01') {
          local_54 = local_54 + 1;
          local_50 = FUN_143a8d5f0(local_38,local_54);
          local_48 = local_50;
          FUN_143a8dcd0(param_1 + 8 + (longlong)(local_58 + 0x11) * 0x28,local_50);
          FUN_143a8dc60(local_38);
        }
      }
    }
  }
  return;
}



// FUNCTION 143b6ba30 FUN_143b6ba30 body=113 status=ok
// SIG undefined FUN_143b6ba30(void)

undefined8
FUN_143b6ba30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = FUN_143aa5130(param_2,param_3,&local_18,param_4);
  FUN_143a8d4f0(param_1,1,local_10,local_18);
  return param_1;
}



// FUNCTION 143b6bab0 FUN_143b6bab0 body=148 status=ok
// SIG undefined FUN_143b6bab0(void)

int FUN_143b6bab0(longlong param_1)

{
  uint uVar1;
  int local_28;
  int local_20;
  
  uVar1 = **(uint **)(param_1 + 8);
  local_20 = 0;
  local_28 = 0;
  while ((&PTR_DAT_145d11540)[(longlong)local_28 * 2] != (undefined *)0x0) {
    if ((uVar1 == 0x7fffffff) ||
       ((*(uint *)(&DAT_145d11548 + (longlong)local_28 * 0x10) & uVar1) == uVar1)) {
      local_20 = local_20 + 1;
    }
    local_28 = local_28 + 1;
  }
  return local_20;
}



// FUNCTION 143b6bb50 FUN_143b6bb50 body=185 status=ok
// SIG undefined FUN_143b6bb50(void)

undefined * FUN_143b6bb50(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  do {
    if (0x12a < puVar2[1]) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      return (undefined *)0x0;
    }
    uVar1 = puVar2[1];
    puVar2[1] = puVar2[1] + 1;
  } while ((*puVar2 != 0x7fffffff) &&
          ((*(uint *)(&DAT_145d11548 + (ulonglong)uVar1 * 0x10) & *puVar2) != *puVar2));
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 3;
  }
  return (&PTR_DAT_145d11540)[(ulonglong)uVar1 * 2];
}



// FUNCTION 143b6bc10 FUN_143b6bc10 body=62 status=ok
// SIG undefined FUN_143b6bc10(void)

undefined8 * FUN_143b6bc10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 143b6bc50 FUN_143b6bc50 body=474 status=ok
// SIG undefined FUN_143b6bc50(void)

undefined * FUN_143b6bc50(short *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined *local_10;
  
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    cVar1 = FUN_143a8b110(*param_2);
    if (cVar1 != '\0') {
      *param_2 = 1;
    }
    local_10 = &DAT_145d11420;
  }
  else {
    local_18 = FUN_143aa56e0("icudt53l-curr","supplementalData",param_2);
    local_28 = FUN_143aa37c0(local_18,"CurrencyMeta",local_18,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      local_38 = 0;
      uVar2 = FUN_143b6dea0(local_30,param_1);
      local_20 = FUN_143aa37c0(local_28,uVar2,0,&local_38);
      cVar1 = FUN_143a8b0e0(local_38);
      if (cVar1 != '\0') {
        FUN_143aa2ef0(local_20);
        local_20 = FUN_143aa37c0(local_28,"DEFAULT",0,param_2);
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') {
          FUN_143aa2ef0(local_28);
          FUN_143aa2ef0(local_20);
          return &DAT_145d11420;
        }
      }
      local_10 = (undefined *)FUN_143aa4640(local_20,&local_34,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if ((cVar1 == '\0') && (local_34 == 4)) {
        FUN_143aa2ef0(local_28);
        FUN_143aa2ef0(local_20);
      }
      else {
        cVar1 = FUN_143a8b110(*param_2);
        if (cVar1 != '\0') {
          *param_2 = 3;
        }
        FUN_143aa2ef0(local_28);
        FUN_143aa2ef0(local_20);
        local_10 = &DAT_145d11420;
      }
    }
    else {
      FUN_143aa2ef0(local_28);
      local_10 = &DAT_145d11420;
    }
  }
  return local_10;
}



// FUNCTION 143b6be30 FUN_143b6be30 body=659 status=ok
// SIG undefined FUN_143b6be30(void)

int FUN_143b6be30(longlong param_1,int param_2,ushort param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  
  local_14 = *param_4;
  local_10 = *param_5;
  while( true ) {
    while( true ) {
      while( true ) {
        if (local_10 < local_14) {
          *param_4 = -1;
          *param_5 = -1;
          return -1;
        }
        iVar1 = (local_14 + local_10) / 2;
        if (param_2 < *(int *)(param_1 + 0x10 + (longlong)iVar1 * 0x18)) break;
        local_14 = iVar1 + 1;
      }
      if (param_3 <=
          *(ushort *)(*(longlong *)(param_1 + 8 + (longlong)iVar1 * 0x18) + (longlong)param_2 * 2))
      break;
      local_14 = iVar1 + 1;
    }
    if (*(ushort *)(*(longlong *)(param_1 + 8 + (longlong)iVar1 * 0x18) + (longlong)param_2 * 2) <=
        param_3) break;
    local_10 = iVar1 + -1;
  }
  local_28 = *param_4;
  iVar2 = iVar1;
  while (local_24 = iVar2, local_28 < local_24) {
    iVar2 = (local_28 + local_24) / 2;
    if (param_2 < *(int *)(param_1 + 0x10 + (longlong)iVar2 * 0x18)) {
      if (*(ushort *)(*(longlong *)(param_1 + 8 + (longlong)iVar2 * 0x18) + (longlong)param_2 * 2) <
          param_3) {
        local_28 = iVar2 + 1;
        iVar2 = local_24;
      }
    }
    else {
      local_28 = iVar2 + 1;
      iVar2 = local_24;
    }
  }
  *param_4 = local_28;
  local_28 = iVar1;
  iVar1 = *param_5;
  while (local_24 = iVar1, local_28 < local_24) {
    iVar1 = (local_28 + local_24) / 2;
    if (*(int *)(param_1 + 0x10 + (longlong)iVar1 * 0x18) < param_2) {
      local_28 = iVar1 + 1;
      iVar1 = local_24;
    }
    else if (*(ushort *)
              (*(longlong *)(param_1 + 8 + (longlong)iVar1 * 0x18) + (longlong)param_2 * 2) <=
             param_3) {
      local_28 = iVar1 + 1;
      iVar1 = local_24;
    }
  }
  if (param_3 < *(ushort *)
                 (*(longlong *)(param_1 + 8 + (longlong)local_24 * 0x18) + (longlong)param_2 * 2)) {
    *param_5 = local_24 + -1;
  }
  else {
    *param_5 = local_24;
  }
  if (*(int *)(param_1 + 0x10 + (longlong)*param_4 * 0x18) == param_2 + 1) {
    return *param_4;
  }
  return -1;
}



// FUNCTION 143b6c0d0 FUN_143b6c0d0 body=70 status=ok
// SIG undefined FUN_143b6c0d0(void)

void FUN_143b6c0d0(void)

{
  undefined8 *puVar1;
  
  while (puVar1 = DAT_146bc8110, DAT_146bc8110 != (undefined8 *)0x0) {
    DAT_146bc8110 = (undefined8 *)*DAT_146bc8110;
    FUN_143a8d330(puVar1);
  }
  return;
}



// FUNCTION 143b6c120 FUN_143b6c120 body=2993 status=ok
// SIG undefined FUN_143b6c120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b6c120(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4,int *param_5,
                  undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  char local_3e8;
  int local_3e4;
  int local_3e0 [2];
  undefined8 local_3d8;
  short *local_3d0;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  undefined4 local_3b4;
  int local_3b0;
  undefined4 local_3ac;
  int local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0 [2];
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong local_360;
  int local_358;
  int local_354;
  longlong local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [24];
  undefined1 local_2e8 [40];
  undefined1 local_2c0 [40];
  COleUpdateDialog local_298 [480];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_308 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  local_340 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
              _dynamic_atexit_destructor_for__Singleton__();
  local_3e0[0] = 0;
  FUN_143a97280(param_1,local_b8,0x9d,local_3e0);
  cVar1 = FUN_143a8b0e0(local_3e0[0]);
  if ((cVar1 != '\0') || (local_3e0[0] == -0x7c)) {
    *param_6 = 1;
  }
  FUN_143b6d170(local_b8,param_3,param_5);
  lVar3 = FUN_143aa7a40((longlong)*param_3 * 0x18);
  *param_2 = lVar3;
  lVar3 = FUN_143aa7a40((longlong)*param_5 * 0x18);
  *param_4 = lVar3;
  local_3d0 = (short *)0x0;
  local_3d8 = 0;
  *param_3 = 0;
  *param_5 = 0;
  local_3b4 = 0;
  local_3ac = 0;
  local_388 = FUN_143ab3680(FUN_143ab3350,FUN_143ab2f70,0,&local_3b4);
  local_380 = FUN_143ab3680(FUN_143ab3350,FUN_143ab2f70,0,&local_3ac);
  local_3b8 = 0;
  do {
    local_3e0[0] = 0;
    local_368 = FUN_143aa5b10("icudt53l-curr",local_b8,local_3e0);
    local_370 = FUN_143aa37c0(local_368,"Currencies",0,local_3e0);
    local_3a8 = FUN_143aa4d80(local_370);
    for (local_3c4 = 0; local_3c4 < local_3a8; local_3c4 = local_3c4 + 1) {
      local_398 = FUN_143aa30d0(local_370,local_3c4,0,local_3e0);
      local_3d0 = (short *)FUN_143aa4da0(local_398,0,&local_3e4,local_3e0);
      local_3d8 = FUN_143aa4760(local_398);
      if (local_3b8 == 0) {
        FUN_143ab36d0(local_388,local_3d8,local_3d8,&local_3b4);
LAB_143b6c3e9:
        local_3e8 = '\0';
        if ((0 < local_3e4) && (*local_3d0 == 0x3d)) {
          local_3d0 = local_3d0 + 1;
          local_3e4 = local_3e4 + -1;
          if ((0 < local_3e4) && (*local_3d0 != 0x3d)) {
            local_3e8 = '\x01';
          }
        }
        if (local_3e8 == '\0') {
          *(undefined8 *)(*param_4 + (longlong)*param_5 * 0x18) = local_3d8;
          *(short **)(*param_4 + 8 + (longlong)*param_5 * 0x18) = local_3d0;
          *(undefined4 *)(*param_4 + 0x14 + (longlong)*param_5 * 0x18) = 0;
          *(int *)(*param_4 + 0x10 + (longlong)*param_5 * 0x18) = local_3e4;
          *param_5 = *param_5 + 1;
          if (local_340 != 0) {
            local_330 = FUN_143a8d4f0(local_2e8,CONCAT71((uint7)(uint3)((uint)local_3e4 >> 8),1),
                                      local_3d0,local_3e4);
            local_318 = local_330;
            FUN_143b6bc10(local_300,local_340,local_330);
            FUN_143a8dc60(local_2e8);
            while( true ) {
              local_360 = FUN_143b6dee0(local_300);
              if (local_360 == 0) break;
              *(undefined8 *)(*param_4 + (longlong)*param_5 * 0x18) = local_3d8;
              uVar4 = FUN_143a8fe10(local_360);
              *(undefined8 *)(*param_4 + 8 + (longlong)*param_5 * 0x18) = uVar4;
              *(undefined4 *)(*param_4 + 0x14 + (longlong)*param_5 * 0x18) = 0;
              uVar2 = FUN_143a904f0(local_360);
              *(undefined4 *)(*param_4 + 0x10 + (longlong)*param_5 * 0x18) = uVar2;
              *param_5 = *param_5 + 1;
            }
            FUN_143b1b790(local_300);
          }
        }
        else {
          local_338 = FUN_143a8d4f0(local_2c0,1,local_3d0,local_3e4);
          local_328 = local_338;
          FUN_143b77020(local_298,local_338,local_3e0);
          FUN_143a8dc60(local_2c0);
          local_350 = MUTKSQLiteDBInner::ue4sCheckReservedLock(local_298,&local_358);
          for (local_3c8 = 0; local_3c8 < local_358; local_3c8 = local_3c8 + 1) {
            local_3b0 = FUN_143a904f0(local_350 + (longlong)local_3c8 * 0x28);
            local_348 = FUN_143aa7a40((longlong)local_3b0 << 1);
            local_3f8 = 0;
            FUN_143b06f40(local_350 + (longlong)local_3c8 * 0x28,0,local_3b0,local_348);
            *(undefined8 *)(*param_4 + (longlong)*param_5 * 0x18) = local_3d8;
            *(undefined8 *)(*param_4 + 8 + (longlong)*param_5 * 0x18) = local_348;
            *(undefined4 *)(*param_4 + 0x14 + (longlong)*param_5 * 0x18) = 1;
            *(int *)(*param_4 + 0x10 + (longlong)*param_5 * 0x18) = local_3b0;
            *param_5 = *param_5 + 1;
          }
          COleUpdateDialog::~COleUpdateDialog(local_298);
        }
        local_3d0 = (short *)FUN_143aa4da0(local_398,1,&local_3e4,local_3e0);
        *(undefined8 *)(*param_2 + (longlong)*param_3 * 0x18) = local_3d8;
        local_320 = FUN_143b6e240(local_3d0,local_3e4,param_1);
        *(undefined8 *)(*param_2 + 8 + (longlong)*param_3 * 0x18) = local_320;
        *(undefined4 *)(*param_2 + 0x14 + (longlong)*param_3 * 0x18) = 1;
        *(int *)(*param_2 + 0x10 + (longlong)*param_3 * 0x18) = local_3e4;
        *param_3 = *param_3 + 1;
        *(undefined8 *)(*param_4 + (longlong)*param_5 * 0x18) = local_3d8;
        uVar4 = FUN_143aa7a40(6);
        *(undefined8 *)(*param_4 + 8 + (longlong)*param_5 * 0x18) = uVar4;
        FUN_143ab5820(local_3d8,*(undefined8 *)(*param_4 + 8 + (longlong)*param_5 * 0x18));
        *(undefined4 *)(*param_4 + 0x14 + (longlong)*param_5 * 0x18) = 1;
        *(undefined4 *)(*param_4 + 0x10 + (longlong)*param_5 * 0x18) = 3;
        *param_5 = *param_5 + 1;
        FUN_143aa2ef0(local_398);
      }
      else {
        lVar3 = FUN_143ab32d0(local_388,local_3d8);
        if (lVar3 == 0) {
          FUN_143ab36d0(local_388,local_3d8,local_3d8,&local_3b4);
          goto LAB_143b6c3e9;
        }
        FUN_143aa2ef0(local_398);
      }
    }
    local_3a4 = 0;
    local_378 = FUN_143aa37c0(local_368,"CurrencyPlurals",0,&local_3a4);
    local_3a8 = FUN_143aa4d80(local_378);
    for (local_3c0 = 0; local_3c0 < local_3a8; local_3c0 = local_3c0 + 1) {
      local_390 = FUN_143aa30d0(local_378,local_3c0,0,&local_3a4);
      local_3d8 = FUN_143aa4760(local_390);
      if (local_3b8 == 0) {
        FUN_143ab36d0(local_380,local_3d8,local_3d8,&local_3ac);
LAB_143b6cad7:
        local_354 = FUN_143aa4d80(local_390);
        for (local_3bc = 0; local_3bc < local_354; local_3bc = local_3bc + 1) {
          local_3d0 = (short *)FUN_143aa4da0(local_390,local_3bc,local_3a0,&local_3a4);
          *(undefined8 *)(*param_2 + (longlong)*param_3 * 0x18) = local_3d8;
          local_310 = FUN_143b6e240(local_3d0,local_3a0[0]);
          *(undefined8 *)(*param_2 + 8 + (longlong)*param_3 * 0x18) = local_310;
          *(undefined4 *)(*param_2 + 0x14 + (longlong)*param_3 * 0x18) = 1;
          *(undefined4 *)(*param_2 + 0x10 + (longlong)*param_3 * 0x18) = local_3a0[0];
          *param_3 = *param_3 + 1;
        }
        FUN_143aa2ef0(local_390);
      }
      else {
        lVar3 = FUN_143ab32d0(local_380,local_3d8);
        if (lVar3 == 0) {
          FUN_143ab36d0(local_380,local_3d8,local_3d8,&local_3ac);
          goto LAB_143b6cad7;
        }
        FUN_143aa2ef0(local_390);
      }
    }
    FUN_143aa2ef0(local_378);
    FUN_143aa2ef0(local_370);
    FUN_143aa2ef0(local_368);
    cVar1 = FUN_143b6d050(local_b8);
    if (cVar1 == '\0') {
      FUN_143ab2e80(local_388);
      FUN_143ab2e80(local_380);
      qsort((void *)*param_2,(longlong)*param_3,0x18,FUN_143b6cdb0);
      qsort((void *)*param_4,(longlong)*param_5,0x18,FUN_143b6cdb0);
      return;
    }
    local_3b8 = local_3b8 + 1;
  } while( true );
}



// FUNCTION 143b6cce0 FUN_143b6cce0 body=106 status=ok
// SIG undefined FUN_143b6cce0(void)

int FUN_143b6cce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_28 [40];
  
  iVar2 = 0;
  FUN_143b6bc10(local_28,param_1,param_2,param_4,0,0xfffffffffffffffe);
  while( true ) {
    lVar1 = FUN_143b6dee0(local_28);
    if (lVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  FUN_143b1b790(local_28);
  return iVar2;
}



// FUNCTION 143b6cd50 FUN_143b6cd50 body=95 status=ok
// SIG undefined FUN_143b6cd50(void)

undefined8 FUN_143b6cd50(void)

{
  if (DAT_146bc80d0 != 0) {
    FID_conflict__scalar_deleting_destructor_(DAT_146bc80d0,1);
  }
  DAT_146bc80d0 = 0;
  FUN_143a9a9f0(&DAT_146bc80d8);
  return 1;
}



// FUNCTION 143b6cdb0 FUN_143b6cdb0 body=256 status=ok
// SIG undefined FUN_143b6cdb0(void)

undefined8 FUN_143b6cdb0(longlong param_1,longlong param_2)

{
  int local_28;
  int local_24;
  
  local_28 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
      local_24 = *(int *)(param_1 + 0x10);
    }
    else {
      local_24 = *(int *)(param_2 + 0x10);
    }
    if (local_24 <= local_28) {
      if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
        return 0xffffffff;
      }
      if (*(int *)(param_2 + 0x10) < *(int *)(param_1 + 0x10)) {
        return 1;
      }
      return 0;
    }
    if (*(ushort *)(*(longlong *)(param_1 + 8) + (longlong)local_28 * 2) <
        *(ushort *)(*(longlong *)(param_2 + 8) + (longlong)local_28 * 2)) {
      return 0xffffffff;
    }
    if (*(ushort *)(*(longlong *)(param_2 + 8) + (longlong)local_28 * 2) <
        *(ushort *)(*(longlong *)(param_1 + 8) + (longlong)local_28 * 2)) break;
    local_28 = local_28 + 1;
  }
  return 1;
}



// FUNCTION 143b6cec0 FUN_143b6cec0 body=100 status=ok
// SIG undefined FUN_143b6cec0(void)

undefined8 FUN_143b6cec0(void)

{
  int local_18;
  
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    if (*(longlong *)(&DAT_146bc8120 + (longlong)local_18 * 8) != 0) {
      FUN_143b6cf30(*(undefined8 *)(&DAT_146bc8120 + (longlong)local_18 * 8));
      *(undefined8 *)(&DAT_146bc8120 + (longlong)local_18 * 8) = 0;
    }
  }
  return 1;
}



// FUNCTION 143b6cf30 FUN_143b6cf30 body=80 status=ok
// SIG undefined FUN_143b6cf30(void)

void FUN_143b6cf30(longlong param_1)

{
  FUN_143b6cf80(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  FUN_143b6cf80(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143b6cf80 FUN_143b6cf80 body=109 status=ok
// SIG undefined FUN_143b6cf80(void)

void FUN_143b6cf80(longlong param_1,int param_2)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    if ((*(uint *)(param_1 + 0x14 + (longlong)local_18 * 0x18) & 1) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 8 + (longlong)local_18 * 0x18));
    }
  }
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143b6cff0 DeleteThis body=88 status=ok
// SIG undefined DeleteThis(void)

void TThreadSingleton<FMemStack>::DeleteThis(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



// FUNCTION 143b6d050 FUN_143b6d050 body=73 status=ok
// SIG undefined FUN_143b6d050(void)

bool FUN_143b6d050(char *param_1)

{
  char cVar1;
  size_t sVar2;
  undefined4 local_18 [6];
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    local_18[0] = 0;
    sVar2 = _guard_xfg_dispatch_icall_nop(param_1);
    FUN_143a972c0(param_1,param_1,sVar2 & 0xffffffff,local_18);
  }
  return cVar1 != '\0';
}



// FUNCTION 143b6d0a0 FUN_143b6d0a0 body=146 status=ok
// SIG undefined FUN_143b6d0a0(void)

undefined8 * FUN_143b6d0a0(char *param_1)

{
  int iVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  FUN_143ab2410(&DAT_146bc80e0);
  local_18 = DAT_146bc8110;
  FUN_143b68380(0x10,FUN_143b6e330);
  do {
    if (local_18 == (undefined8 *)0x0) {
LAB_143b6d11c:
      FUN_143ab2470(&DAT_146bc80e0);
      return local_10;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,(char *)(local_18 + 2));
    if (iVar1 == 0) {
      local_10 = local_18 + 1;
      goto LAB_143b6d11c;
    }
    local_18 = (undefined8 *)*local_18;
  } while( true );
}



// FUNCTION 143b6d140 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc80d8,FUN_143b6d680);
  return DAT_146bc80d0;
}



// FUNCTION 143b6d170 FUN_143b6d170 body=967 status=ok
// SIG undefined FUN_143b6d170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_143b6d170(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_398 [32];
  char local_378;
  int local_374 [5];
  short *local_360;
  undefined4 local_358 [2];
  undefined8 local_350;
  int local_348 [2];
  undefined8 local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0 [40];
  undefined1 local_2c8 [48];
  COleUpdateDialog local_298 [480];
  char local_b8 [160];
  ulonglong local_18;
  
  local_2f8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  *param_2 = 0;
  *param_3 = 0;
  local_360 = (short *)0x0;
  _guard_xfg_dispatch_icall_nop(local_b8,param_1);
  local_330 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
              _dynamic_atexit_destructor_for__Singleton__();
  do {
    local_374[1] = 0;
    local_350 = FUN_143aa5b10("icudt53l-curr",local_b8,local_374 + 1);
    local_340 = FUN_143aa37c0(local_350,"Currencies",0,local_374 + 1);
    local_374[4] = FUN_143aa4d80(local_340);
    for (local_374[2] = 0; local_374[2] < local_374[4]; local_374[2] = local_374[2] + 1) {
      local_328 = FUN_143aa30d0(local_340,local_374[2],0,local_374 + 1);
      local_360 = (short *)FUN_143aa4da0(local_328,0,local_374,local_374 + 1);
      local_378 = '\0';
      if ((0 < local_374[0]) && (*local_360 == 0x3d)) {
        local_360 = local_360 + 1;
        local_374[0] = local_374[0] + -1;
        if ((0 < local_374[0]) && (*local_360 != 0x3d)) {
          local_378 = '\x01';
        }
      }
      if (local_378 == '\0') {
        *param_3 = *param_3 + 1;
        if (local_330 != 0) {
          local_310 = FUN_143a8d4f0(local_2f0,1,local_360,local_374[0]);
          local_300 = local_310;
          iVar2 = FUN_143b6cce0(local_330,local_310);
          *param_3 = iVar2 + *param_3;
          FUN_143a8dc60(local_2f0);
        }
      }
      else {
        local_318 = FUN_143a8d4f0(local_2c8,1,local_360,local_374[0]);
        local_308 = local_318;
        FUN_143b77020(local_298,local_318);
        FUN_143a8dc60(local_2c8);
        MUTKSQLiteDBInner::ue4sCheckReservedLock(local_298,local_348);
        *param_3 = *param_3 + local_348[0];
        COleUpdateDialog::~COleUpdateDialog(local_298);
      }
      *param_3 = *param_3 + 1;
      *param_2 = *param_2 + 1;
      FUN_143aa2ef0(local_328);
    }
    local_358[0] = 0;
    local_338 = FUN_143aa37c0(local_350,"CurrencyPlurals",0,local_358);
    local_374[4] = FUN_143aa4d80(local_338);
    for (local_374[3] = 0; local_374[3] < local_374[4]; local_374[3] = local_374[3] + 1) {
      local_320 = FUN_143aa30d0(local_338,local_374[3],0,local_358);
      iVar2 = FUN_143aa4d80(local_320);
      *param_2 = iVar2 + *param_2;
      FUN_143aa2ef0(local_320);
    }
    FUN_143aa2ef0(local_338);
    FUN_143aa2ef0(local_340);
    FUN_143aa2ef0(local_350);
    cVar1 = FUN_143b6d050(local_b8);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 143b6d540 FUN_143b6d540 body=313 status=ok
// SIG undefined FUN_143b6d540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143b6d540(undefined8 param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  FUN_143a96880(param_1,param_2,param_3,param_4);
  FUN_143a97450(param_1,local_b8,0x9d,param_4);
  if (local_b8[0] != '\0') {
    iVar1 = _guard_xfg_dispatch_icall_nop(local_b8,"EURO");
    local_c0 = (uint)(iVar1 == 0);
    iVar1 = _guard_xfg_dispatch_icall_nop(local_b8,"PREEURO");
    local_c4 = (uint)(iVar1 == 0);
    local_c8 = local_c0 | local_c4 << 1;
    if (local_c8 != 0) {
      _guard_xfg_dispatch_icall_nop(param_2,"_");
      _guard_xfg_dispatch_icall_nop(param_2,local_b8);
    }
  }
  return local_c8;
}



// FUNCTION 143b6d680 FUN_143b6d680 body=334 status=ok
// SIG undefined FUN_143b6d680(void)

void FUN_143b6d680(void)

{
  char cVar1;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_68[0] = 0;
  FUN_143b68380(0x10,FUN_143b6e330);
  local_40 = FUN_143a8d310(0x58);
  if (local_40 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_143acbcf0(local_40,local_68);
  }
  local_28 = local_48;
  local_60 = local_48;
  if (local_48 != 0) {
    cVar1 = FUN_143a8b0e0(local_68[0]);
    if (cVar1 == '\0') {
      <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                (local_60,TThreadSingleton<FMemStack>::DeleteThis);
      FUN_143b6df50(local_60,local_68);
      cVar1 = FUN_143a8b0e0(local_68[0]);
      if (cVar1 == '\0') {
        DAT_146bc80d0 = local_60;
      }
      else {
        local_30 = local_60;
        local_58 = local_60;
        if (local_60 != 0) {
          FID_conflict__scalar_deleting_destructor_(local_60,1);
        }
      }
    }
    else {
      local_38 = local_60;
      local_50 = local_60;
      if (local_60 != 0) {
        FID_conflict__scalar_deleting_destructor_(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 143b6d7d0 FUN_143b6d7d0 body=56 status=ok
// SIG undefined FUN_143b6d7d0(void)

undefined1 FUN_143b6d7d0(void)

{
  if (DAT_146bc80c0 != 0) {
    FUN_143ab2e80(DAT_146bc80c0);
    DAT_146bc80c0 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc80c8);
  return 1;
}



// FUNCTION 143b6d810 FUN_143b6d810 body=174 status=ok
// SIG undefined FUN_143b6d810(void)

void FUN_143b6d810(longlong param_1,int param_2,int param_3,void *param_4,int param_5,int *param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  for (local_18 = param_2; local_18 <= param_3; local_18 = local_18 + 1) {
    iVar1 = *(int *)(param_1 + 0x10 + (longlong)local_18 * 0x18);
    if ((*param_6 < iVar1) && (iVar1 <= param_5)) {
      iVar2 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + 8 + (longlong)local_18 * 0x18),param_4,
                         (longlong)iVar1 << 1);
      if (iVar2 == 0) {
        *param_7 = local_18;
        *param_6 = iVar1;
      }
    }
  }
  return;
}



// FUNCTION 143b6d8c0 FUN_143b6d8c0 body=1500 status=ok
// SIG undefined FUN_143b6d8c0(void)

void FUN_143b6d8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *local_168;
  undefined8 *local_160;
  longlong local_148;
  longlong local_138;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_f8;
  undefined8 *local_e8;
  undefined8 *local_d0;
  undefined8 *local_b0;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_4);
  if ((cVar1 == '\0') && (cVar1 = FUN_143a8dd00(param_1,param_2), cVar1 == '\0')) {
    FUN_143b6bc10(local_48,param_3,param_1);
    FUN_143b6bc10(local_30,param_3,param_2);
    lVar2 = FUN_143b6dee0(local_48);
    lVar3 = FUN_143b6dee0(local_30);
    local_148 = lVar3;
    local_138 = lVar2;
    while ((local_138 != 0 && (local_148 != 0))) {
      cVar1 = FUN_143a8dd00(local_138,param_2);
      if ((cVar1 != '\0') || (cVar1 = FUN_143a8dd00(local_148,param_1), cVar1 != '\0')) {
        FUN_143b1b790(local_30);
        FUN_143b1b790(local_48);
        return;
      }
      local_138 = FUN_143b6dee0(local_48);
      local_148 = FUN_143b6dee0(local_30);
    }
    if ((lVar3 == 0) && (lVar2 == 0)) {
      lVar2 = FUN_143a8d310(0x28);
      if (lVar2 == 0) {
        local_b0 = (undefined8 *)0x0;
      }
      else {
        local_b0 = (undefined8 *)FUN_143a8d3a0(lVar2,param_2);
      }
      local_168 = local_b0;
      lVar2 = FUN_143a8d310(0x28);
      if (lVar2 == 0) {
        local_108 = (undefined8 *)0x0;
      }
      else {
        local_108 = (undefined8 *)FUN_143a8d3a0(lVar2,param_1);
      }
      local_160 = local_108;
    }
    else if (lVar3 == 0) {
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_f8 = (undefined8 *)0x0;
      }
      else {
        local_f8 = (undefined8 *)FUN_143a8d3a0(lVar3,param_2);
      }
      local_168 = local_f8;
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_e8 = (undefined8 *)0x0;
      }
      else {
        local_e8 = (undefined8 *)FUN_143a8d3a0(lVar3,lVar2);
      }
      local_160 = local_e8;
    }
    else if (lVar2 == 0) {
      lVar2 = FUN_143a8d310(0x28);
      if (lVar2 == 0) {
        local_110 = (undefined8 *)0x0;
      }
      else {
        local_110 = (undefined8 *)FUN_143a8d3a0(lVar2,lVar3);
      }
      local_168 = local_110;
      lVar2 = FUN_143a8d310(0x28);
      if (lVar2 == 0) {
        local_128 = (undefined8 *)0x0;
      }
      else {
        local_128 = (undefined8 *)FUN_143a8d3a0(lVar2,param_1);
      }
      local_160 = local_128;
    }
    else {
      lVar4 = FUN_143a8d310(0x28);
      if (lVar4 == 0) {
        local_d0 = (undefined8 *)0x0;
      }
      else {
        local_d0 = (undefined8 *)FUN_143a8d3a0(lVar4,lVar3);
      }
      local_168 = local_d0;
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_120 = (undefined8 *)0x0;
      }
      else {
        local_120 = (undefined8 *)FUN_143a8d3a0(lVar3,lVar2);
      }
      local_160 = local_120;
    }
    if ((local_168 == (undefined8 *)0x0) || (local_160 == (undefined8 *)0x0)) {
      if (local_168 != (undefined8 *)0x0) {
        (**(code **)*local_168)(local_168,1);
      }
      if (local_160 != (undefined8 *)0x0) {
        (**(code **)*local_160)(local_160,1);
      }
      *param_4 = 7;
      FUN_143b1b790(local_30);
      FUN_143b1b790(local_48);
    }
    else {
      FUN_143acdfd0(param_3,param_1,local_168,param_4);
      FUN_143acdfd0(param_3,param_2,local_160,param_4);
      FUN_143b1b790(local_30);
      FUN_143b1b790(local_48);
    }
  }
  return;
}



// FUNCTION 143b6dea0 FUN_143b6dea0 body=63 status=ok
// SIG undefined FUN_143b6dea0(void)

longlong FUN_143b6dea0(longlong param_1,undefined8 param_2)

{
  FUN_143ab5770(param_2,param_1,3);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 143b6dee0 FUN_143b6dee0 body=102 status=ok
// SIG undefined FUN_143b6dee0(void)

longlong FUN_143b6dee0(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(*param_1,param_1[2]);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_143a8dd00(lVar2,param_1[1]);
    if (cVar1 == '\0') {
      param_1[2] = lVar2;
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}



// FUNCTION 143b6df50 FUN_143b6df50 body=443 status=ok
// SIG undefined FUN_143b6df50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b6df50(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  undefined8 local_e0;
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
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_e4 = 5;
    for (local_e8 = 0; local_e8 < local_e4; local_e8 = local_e8 + 1) {
      FUN_143a8d9f0(local_b8,(&PTR_s__u00a5_146832a50)[(longlong)local_e8 * 2],0xffffffff,0);
      FUN_143a8d9f0(local_90,(&PTR_s__uffe5_146832a58)[(longlong)local_e8 * 2],0xffffffff,0);
      local_d8 = FUN_143a91130(local_90,local_40);
      local_c8 = local_d8;
      local_e0 = FUN_143a91130(local_b8,local_68);
      local_d0 = local_e0;
      FUN_143b6d8c0(local_e0,local_d8,param_1);
      FUN_143a8dc60(local_68);
      FUN_143a8dc60(local_40);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 != '\0') {
        FUN_143a8dc60(local_90);
        FUN_143a8dc60(local_b8);
        return;
      }
      FUN_143a8dc60(local_90);
      FUN_143a8dc60(local_b8);
    }
  }
  return;
}



// FUNCTION 143b6e110 FUN_143b6e110 body=292 status=ok
// SIG undefined FUN_143b6e110(void)

void FUN_143b6e110(undefined8 param_1,int param_2,longlong param_3,int param_4,int *param_5,
                  int *param_6)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c [3];
  
  *param_6 = -1;
  *param_5 = 0;
  local_10 = -1;
  local_14 = 0;
  local_c[0] = param_2 + -1;
  local_18 = 0;
  while( true ) {
    if (param_4 <= local_18) {
      return;
    }
    local_10 = FUN_143b6be30(param_1,local_18,*(undefined2 *)(param_3 + (longlong)local_18 * 2),
                             &local_14,local_c);
    if (local_14 == -1) break;
    if (local_10 != -1) {
      *param_5 = local_18 + 1;
      *param_6 = local_10;
    }
    if (local_c[0] - local_14 < 10) {
      FUN_143b6d810(param_1,local_14,local_c[0],param_3,param_4,param_5,param_6);
      return;
    }
    local_18 = local_18 + 1;
  }
  return;
}



// FUNCTION 143b6e240 FUN_143b6e240 body=234 status=ok
// SIG undefined FUN_143b6e240(void)

void * FUN_143b6e240(void *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_28;
  int local_24;
  int local_20;
  void *local_18;
  
  local_18 = (void *)0x0;
  local_28 = 0;
  local_24 = FUN_143aba3a0(0,0,param_1,param_2,param_3,&local_28);
  local_28 = 0;
  local_20 = local_24;
  if (local_24 < param_2) {
    local_20 = param_2;
  }
  local_18 = (void *)FUN_143aa7a40((longlong)local_20 << 1);
  FUN_143aba3a0(local_18,local_24,param_1,param_2,param_3,&local_28);
  cVar1 = FUN_143a8b0e0(local_28);
  if (cVar1 != '\0') {
    _guard_xfg_dispatch_icall_nop(local_18,param_1,(longlong)param_2 << 1);
  }
  return local_18;
}



// FUNCTION 143b6e330 FUN_143b6e330 body=31 status=ok
// SIG undefined FUN_143b6e330(void)

undefined1 FUN_143b6e330(void)

{
  FUN_143b6c0d0();
  FUN_143b6cec0();
  FUN_143b6d7d0();
  FUN_143b6cd50();
  return 1;
}



// FUNCTION 143b6e350 FUN_143b6e350 body=1053 status=ok
// SIG undefined FUN_143b6e350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b6e350(undefined8 param_1,wchar_t *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_138 [32];
  int *local_118;
  int local_108;
  uint local_104;
  uint local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_104 = 0;
  local_f0 = (wchar_t *)0x0;
  if ((param_4 != (int *)0x0) && (cVar1 = FUN_143a8b110(*param_4), cVar1 != '\0')) {
    if (((param_2 != (wchar_t *)0x0) && (param_3 != 0)) || (param_3 == 0)) {
      local_108 = 0;
      local_118 = &local_108;
      local_104 = FUN_143a96b00(param_1,"currency",local_b8,0x9d);
      if (local_104 == 0) {
        local_100 = FUN_143b6d540(param_1,local_b8,0x9d,param_4);
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 != '\0') {
          return 0;
        }
        local_e8 = (wchar_t *)FUN_143b6d0a0(local_b8);
        if (local_e8 != (wchar_t *)0x0) {
          iVar2 = FreeLib(local_e8);
          if (iVar2 < param_3) {
            wcscpy(param_2,local_e8);
          }
          uVar4 = FreeLib(local_e8);
          return uVar4;
        }
        local_d0 = (undefined1 *)FUN_143a8d150(local_b8,0x5f);
        if (local_d0 != (undefined1 *)0x0) {
          *local_d0 = 0;
        }
        local_e0 = FUN_143aa56e0("icudt53l-curr","supplementalData",&local_108);
        local_c8 = FUN_143aa37c0(local_e0,"CurrencyMap",local_e0,&local_108);
        local_d8 = FUN_143aa37c0(local_e0,local_b8,local_c8,&local_108);
        local_f8 = FUN_143aa30d0(local_d8,0,0,&local_108);
        local_f0 = (wchar_t *)FUN_143aa5130(local_f8,&DAT_145af4d5c,&local_104,&local_108);
        cVar1 = FUN_143a8b110(local_108);
        if (cVar1 != '\0') {
          if (((local_100 & 2) == 0) || (iVar2 = FUN_143ab4670(local_f0,&DAT_145d114c8), iVar2 != 0)
             ) {
            if ((local_100 & 1) != 0) {
              local_f0 = L"EUR";
            }
          }
          else {
            local_f8 = FUN_143aa30d0(local_d8,1,local_f8,&local_108);
            local_f0 = (wchar_t *)FUN_143aa5130(local_f8,&DAT_145af4d5c,&local_104,&local_108);
          }
        }
        FUN_143aa2ef0(local_d8);
        FUN_143aa2ef0(local_f8);
        cVar1 = FUN_143a8b0e0(local_108);
        if ((cVar1 != '\0') && (lVar3 = FUN_143a8d150(local_b8,0x5f), lVar3 != 0)) {
          FUN_143a972c0(param_1,local_b8,0x9d,param_4);
          *param_4 = -0x80;
          uVar4 = FUN_143b6e350(local_b8,param_2,param_3,param_4);
          return uVar4;
        }
        if ((*param_4 == 0) || (local_108 != 0)) {
          *param_4 = local_108;
        }
        cVar1 = FUN_143a8b110(*param_4);
        if ((cVar1 != '\0') && ((int)local_104 < param_3)) {
          wcscpy(param_2,local_f0);
        }
      }
      else if ((int)local_104 < param_3) {
        FUN_143ab8280(local_b8);
        FUN_143ab5820(local_b8,param_2,local_104);
      }
      uVar4 = FUN_143ab4a70(param_2,param_3,local_104,param_4);
      return uVar4;
    }
    *param_4 = 1;
  }
  return (ulonglong)local_104;
}



// FUNCTION 143b6e780 FUN_143b6e780 body=46 status=ok
// SIG undefined FUN_143b6e780(void)

undefined4 FUN_143b6e780(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_143b6bc50(param_1,param_2);
  return *puVar1;
}



// FUNCTION 143b6e7b0 FUN_143b6e7b0 body=654 status=ok
// SIG undefined FUN_143b6e7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b6e7b0(longlong param_1,undefined8 param_2,int param_3,undefined1 *param_4,
                      int *param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  int local_e0;
  undefined8 local_d8;
  int local_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((param_3 < 0) || (1 < param_3)) {
      *param_6 = 1;
      param_1 = 0;
    }
    else {
      local_e8[0] = 0;
      local_d0 = param_3;
      FUN_143a97280(param_2,local_b8,0x9d,local_e8);
      cVar1 = FUN_143a8b0e0(local_e8[0]);
      if ((cVar1 == '\0') && (local_e8[0] != -0x7c)) {
        FUN_143b6dea0(local_c0,param_1);
        FUN_143ab8280(local_c0);
        local_c8 = 0;
        local_e8[0] = 0;
        local_d8 = FUN_143aa5b10("icudt53l-curr",local_b8,local_e8);
        local_d8 = FUN_143aa37c0(local_d8,"Currencies",local_d8,local_e8);
        local_d8 = FUN_143aa3350(local_d8,local_c0,local_d8,local_e8);
        local_c8 = FUN_143aa4da0(local_d8,local_d0,param_5,local_e8);
        FUN_143aa2ef0(local_d8);
        cVar1 = FUN_143a8b110(local_e8[0]);
        if ((cVar1 != '\0') &&
           ((local_e8[0] == -0x7f || ((local_e8[0] == -0x80 && (*param_6 != -0x7f)))))) {
          *param_6 = local_e8[0];
        }
        *param_4 = 0;
        cVar1 = FUN_143a8b110(local_e8[0]);
        if (cVar1 == '\0') {
          iVar2 = FreeLib(param_1);
          *param_5 = iVar2;
          *param_6 = -0x7f;
        }
        else {
          for (local_e0 = 0;
              ((local_e0 < *param_5 && (*(short *)(local_c8 + (longlong)local_e0 * 2) == 0x3d)) &&
              (local_e0 < 2)); local_e0 = local_e0 + 1) {
          }
          *param_4 = local_e0 == 1;
          param_1 = local_c8;
          if (local_e0 != 0) {
            param_1 = local_c8 + 2;
          }
        }
      }
      else {
        *param_6 = 1;
        param_1 = 0;
      }
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 143b6ea40 FUN_143b6ea40 body=610 status=ok
// SIG undefined FUN_143b6ea40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b6ea40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,int *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  int *local_e0;
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    local_d8[0] = 0;
    FUN_143a97280(param_2,local_b8,0x9d,local_d8);
    cVar1 = FUN_143a8b0e0(local_d8[0]);
    if ((cVar1 == '\0') && (local_d8[0] != -0x7c)) {
      FUN_143b6dea0(local_c0,param_1);
      local_c8 = 0;
      local_d8[0] = 0;
      local_d0 = FUN_143aa5b10("icudt53l-curr",local_b8,local_d8);
      local_d0 = FUN_143aa37c0(local_d0,"CurrencyPlurals",local_d0,local_d8);
      local_d0 = FUN_143aa3350(local_d0,local_c0,local_d0,local_d8);
      local_c8 = FUN_143aa4fe0(local_d0,param_4,param_5,local_d8);
      cVar1 = FUN_143a8b0e0(local_d8[0]);
      if (cVar1 != '\0') {
        local_d8[0] = 0;
        local_c8 = FUN_143aa4fe0(local_d0,"other",param_5,local_d8);
        cVar1 = FUN_143a8b0e0(local_d8[0]);
        if (cVar1 != '\0') {
          FUN_143aa2ef0(local_d0);
          local_e0 = param_6;
          local_e8 = param_5;
          uVar3 = FUN_143b6e7b0(param_1,param_2,1,param_3);
          return uVar3;
        }
      }
      FUN_143aa2ef0(local_d0);
      cVar1 = FUN_143a8b110(local_d8[0]);
      if (cVar1 == '\0') {
        uVar2 = FreeLib(param_1);
        *param_5 = uVar2;
        *param_6 = -0x7f;
      }
      else {
        param_1 = local_c8;
        if ((local_d8[0] == -0x7f) || ((local_d8[0] == -0x80 && (*param_6 != -0x7f)))) {
          *param_6 = local_d8[0];
        }
      }
    }
    else {
      *param_6 = 1;
      param_1 = 0;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 143b6ecb0 FUN_143b6ecb0 body=192 status=ok
// SIG undefined FUN_143b6ecb0(void)

double FUN_143b6ecb0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  double dVar3;
  
  piVar2 = (int *)FUN_143b6bc50(param_1,param_2);
  if ((*piVar2 < 0) || (9 < *piVar2)) {
    cVar1 = FUN_143a8b110(*param_2);
    if (cVar1 != '\0') {
      *param_2 = 3;
    }
    dVar3 = 0.0;
  }
  else if (piVar2[1] < 2) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (double)piVar2[1] / (double)*(int *)(&DAT_145d11430 + (longlong)*piVar2 * 4);
  }
  return dVar3;
}



// FUNCTION 143b6ed70 FUN_143b6ed70 body=346 status=ok
// SIG undefined FUN_143b6ed70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b6ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_268 [32];
  undefined4 *local_248;
  undefined4 *local_240;
  char local_238 [4];
  undefined4 local_234;
  undefined8 local_230;
  undefined1 local_228 [48];
  COleUpdateDialog local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_248 = &local_234;
  local_240 = param_4;
  local_230 = FUN_143b6e7b0(param_1,param_2,0,local_238);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    FUN_143a99400(param_3,0);
    if (local_238[0] == '\0') {
      FUN_143ab21b0(param_3,local_230,0xffffffff);
    }
    else {
      uVar2 = FUN_143a8d4f0(local_228,1,local_230,local_234);
      FUN_143b77020(local_1f8,uVar2,param_4);
      FUN_143a8dc60(local_228);
      cVar1 = FUN_143a8b110(*param_4);
      if (cVar1 == '\0') {
        FUN_143ab21b0(param_3,param_1,0xffffffff);
      }
      else {
        FUN_143b37620(local_1f8,0x4000000000000000,param_3);
      }
      COleUpdateDialog::~COleUpdateDialog(local_1f8);
    }
  }
  return;
}



// FUNCTION 143b6eed0 FUN_143b6eed0 body=1580 status=ok
// SIG undefined FUN_143b6eed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b6eed0(char *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_238 [32];
  int *local_218;
  int *local_210;
  char local_208;
  char local_207;
  char local_206;
  char *local_200;
  char local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  undefined4 local_1c0 [2];
  undefined1 local_1b8 [208];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    local_1f4 = 0;
    local_1d8 = 0;
    local_1f0 = 0;
    local_1d0 = 0;
    local_200 = (char *)0x0;
    FUN_143ab2410(&DAT_146bc8170);
    local_206 = -1;
    for (local_208 = '\0'; local_208 < '\n'; local_208 = local_208 + '\x01') {
      if ((*(longlong *)(&DAT_146bc8120 + (longlong)local_208 * 8) != 0) &&
         (iVar2 = _guard_xfg_dispatch_icall_nop
                            (param_1,*(char **)(&DAT_146bc8120 + (longlong)local_208 * 8)),
         iVar2 == 0)) {
        local_206 = local_208;
        break;
      }
    }
    if (local_206 != -1) {
      local_200 = *(char **)(&DAT_146bc8120 + (longlong)local_206 * 8);
      local_1d8 = *(longlong *)(local_200 + 0xa0);
      local_1f4 = *(undefined4 *)(local_200 + 0xa8);
      local_1d0 = *(longlong *)(local_200 + 0xb0);
      local_1f0 = *(undefined4 *)(local_200 + 0xb8);
      *(int *)(local_200 + 0xbc) = *(int *)(local_200 + 0xbc) + 1;
    }
    FUN_143ab2470(&DAT_146bc8170);
    if (local_206 == -1) {
      local_210 = param_6;
      local_218 = &local_1f0;
      FUN_143b6c120(param_1,&local_1d8,&local_1f4,&local_1d0);
      cVar1 = FUN_143a8b0e0(*param_6);
      if (cVar1 != '\0') {
        return;
      }
      FUN_143ab2410(&DAT_146bc8170);
      local_1f8 = -1;
      for (local_207 = '\0'; local_207 < '\n'; local_207 = local_207 + '\x01') {
        if ((*(longlong *)(&DAT_146bc8120 + (longlong)local_207 * 8) != 0) &&
           (iVar2 = _guard_xfg_dispatch_icall_nop
                              (param_1,*(char **)(&DAT_146bc8120 + (longlong)local_207 * 8)),
           iVar2 == 0)) {
          local_1f8 = local_207;
          break;
        }
      }
      if (local_1f8 == -1) {
        local_200 = *(char **)(&DAT_146bc8120 + (longlong)(char)DAT_146bc8118 * 8);
        if ((local_200 != (char *)0x0) &&
           (*(int *)((longlong)local_200 + 0xbc) = *(int *)((longlong)local_200 + 0xbc) + -1,
           *(int *)((longlong)local_200 + 0xbc) == 0)) {
          FUN_143b6cf30(local_200);
        }
        local_200 = (char *)FUN_143aa7a40(0xc0);
        *(char **)(&DAT_146bc8120 + (longlong)(char)DAT_146bc8118 * 8) = local_200;
        _guard_xfg_dispatch_icall_nop(local_200,param_1);
        *(longlong *)(local_200 + 0xa0) = local_1d8;
        *(undefined4 *)(local_200 + 0xa8) = local_1f4;
        *(longlong *)(local_200 + 0xb0) = local_1d0;
        *(undefined4 *)(local_200 + 0xb8) = local_1f0;
        local_200[0xbc] = '\x02';
        local_200[0xbd] = '\0';
        local_200[0xbe] = '\0';
        local_200[0xbf] = '\0';
        DAT_146bc8118._0_1_ = (char)((longlong)((char)DAT_146bc8118 + 1) % 10);
        FUN_143b68380(0x10,FUN_143b6cec0);
      }
      else {
        FUN_143b6cf80(local_1d8,local_1f4);
        FUN_143b6cf80(local_1d0,local_1f0);
        local_200 = *(char **)(&DAT_146bc8120 + (longlong)local_1f8 * 8);
        local_1d8 = *(longlong *)(local_200 + 0xa0);
        local_1f4 = *(undefined4 *)(local_200 + 0xa8);
        local_1d0 = *(longlong *)(local_200 + 0xb0);
        local_1f0 = *(undefined4 *)(local_200 + 0xb8);
        *(int *)(local_200 + 0xbc) = *(int *)(local_200 + 0xbc) + 1;
      }
      FUN_143ab2470(&DAT_146bc8170);
    }
    local_1ec = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_3);
    iVar2 = FUN_143a904f0(param_2);
    if (iVar2 - local_1ec < 0x65) {
      local_1c4 = FUN_143a904f0(param_2);
      local_1c4 = local_1c4 - local_1ec;
    }
    else {
      local_1c4 = 100;
    }
    local_1e8 = local_1c4;
    local_218 = (int *)((ulonglong)local_218 & 0xffffffff00000000);
    FUN_143b06f40(param_2,local_1ec,local_1c4,local_1b8);
    local_1c0[0] = 0;
    local_210 = local_1c0;
    local_218 = (int *)param_1;
    local_1e8 = FUN_143aba3a0(local_e8,100,local_1b8,local_1e8);
    local_1e0 = 0;
    local_1dc = -1;
    local_210 = &local_1dc;
    local_218 = &local_1e0;
    FUN_143b6e110(local_1d8,local_1f4,local_e8,local_1e8);
    local_1e4 = 0;
    local_1c8 = -1;
    if (param_4 != '\x01') {
      local_210 = &local_1c8;
      local_218 = &local_1e4;
      FUN_143b6e110(local_1d0,local_1f0,local_1b8,local_1e8);
    }
    if ((local_1e0 < local_1e4) || (local_1dc == -1)) {
      if ((local_1e0 <= local_1e4) && (local_1c8 != -1)) {
        FUN_143ab5820(*(undefined8 *)(local_1d0 + (longlong)local_1c8 * 0x18),param_5,4);
        FUN_143b0fce0(param_3,local_1ec + local_1e4);
      }
    }
    else {
      FUN_143ab5820(*(undefined8 *)(local_1d8 + (longlong)local_1dc * 0x18),param_5,4);
      FUN_143b0fce0(param_3,local_1ec + local_1e0);
    }
    FUN_143ab2410(&DAT_146bc8170);
    *(int *)(local_200 + 0xbc) = *(int *)(local_200 + 0xbc) + -1;
    if (*(int *)(local_200 + 0xbc) == 0) {
      FUN_143b6cf30(local_200);
    }
    FUN_143ab2470(&DAT_146bc8170);
  }
  return;
}



// FUNCTION 143b6f500 FUN_143b6f500 body=205 status=ok
// SIG undefined FUN_143b6f500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b6f500(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::NumberingSystem::vftable;
  FUN_143a8ac30(param_1 + 1);
  *(undefined4 *)(param_1 + 6) = 10;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  FUN_143a8d4f0(local_40,1,L"0123456789",0xffffffff);
  FUN_143a8dcd0(param_1 + 1,local_40);
  _guard_xfg_dispatch_icall_nop((char *)((longlong)param_1 + 0x35),"latn");
  FUN_143a8dc60(local_40);
  return param_1;
}



// FUNCTION 143b6f5d0 FUN_143b6f5d0 body=56 status=ok
// SIG undefined FUN_143b6f5d0(void)

void FUN_143b6f5d0(undefined8 *param_1)

{
  *param_1 = icu_53::NumberingSystem::vftable;
  FUN_143a8dc60(param_1 + 1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b6f610 FUN_143b6f610 body=54 status=ok
// SIG undefined FUN_143b6f610(void)

undefined8 FUN_143b6f610(undefined8 param_1,uint param_2)

{
  FUN_143b6f5d0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b6f650 FUN_143b6f650 body=32 status=ok
// SIG undefined FUN_143b6f650(void)

void FUN_143b6f650(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8b650();
  FUN_143b6f670(uVar1,param_1);
  return;
}



// FUNCTION 143b6f670 FUN_143b6f670 body=850 status=ok
// SIG undefined FUN_143b6f670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143b6f670(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  char local_a8;
  char local_a7;
  int local_a4 [3];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_50;
  char local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_a8 = '\x01';
    local_a7 = '\0';
    local_b8 = param_2;
    local_a4[0] = FUN_143a8b730(param_1,"numbers",local_48,0x32);
    if (local_a4[0] < 1) {
      _guard_xfg_dispatch_icall_nop(local_48,"default");
      local_a8 = '\0';
    }
    else {
      local_88 = (ulonglong)local_a4[0];
      if (0x31 < local_88) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_48[local_88] = '\0';
      iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"default");
      if ((((iVar2 == 0) || (iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"native"), iVar2 == 0))
          || (iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"traditional"), iVar2 == 0)) ||
         (iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"finance"), iVar2 == 0)) {
        local_a8 = '\0';
      }
    }
    if (local_a8 == '\0') {
      local_a4[1] = 0;
      uVar3 = FUN_143a8c200(param_1);
      local_98 = FUN_143aa5b10(0,uVar3,local_a4 + 1);
      local_78 = FUN_143aa37c0(local_98,"NumberElements",0,local_a4 + 1);
      while (local_a8 == '\0') {
        local_a4[1] = 0;
        local_a4[0] = 0;
        local_68 = FUN_143aa4fe0(local_78,local_48,local_a4,local_a4 + 1);
        if ((0 < local_a4[0]) && (local_a4[0] < 0x32)) {
          FUN_143ab5770(local_68,local_48,local_a4[0]);
          local_70 = (ulonglong)local_a4[0];
          if (0x31 < local_70) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_48[local_70] = '\0';
          local_a8 = '\x01';
        }
        if (local_a8 == '\0') {
          iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"native");
          if ((iVar2 == 0) ||
             (iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"finance"), iVar2 == 0)) {
            _guard_xfg_dispatch_icall_nop(local_48,"default");
          }
          else {
            iVar2 = _guard_xfg_dispatch_icall_nop(local_48,"traditional");
            if (iVar2 == 0) {
              _guard_xfg_dispatch_icall_nop(local_48,"native");
            }
            else {
              local_a7 = '\x01';
              local_a8 = '\x01';
            }
          }
        }
      }
      FUN_143aa2ef0(local_78);
      FUN_143aa2ef0(local_98);
    }
    if (local_a7 == '\0') {
      local_90 = FUN_143b6fb40(local_48,param_2);
    }
    else {
      *param_2 = 0xffffff80;
      local_80 = FUN_143a8d310(0x40);
      if (local_80 == 0) {
        local_90 = 0;
      }
      else {
        local_90 = FUN_143b6f500(local_80);
      }
    }
  }
  else {
    local_90 = 0;
  }
  return local_90;
}



// FUNCTION 143b6f9d0 FUN_143b6f9d0 body=354 status=ok
// SIG undefined FUN_143b6f9d0(void)

undefined8 FUN_143b6f9d0(int param_1,char param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined1 local_30 [48];
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return 0;
  }
  if (1 < param_1) {
    if ((param_2 == '\0') &&
       ((iVar2 = FUN_143a8eb50(param_3,0,0x7fffffff), iVar2 != param_1 ||
        (cVar1 = FUN_143b6fdf0(param_3), cVar1 == '\0')))) {
      *param_4 = 1;
      local_58 = 0;
    }
    else {
      lVar3 = FUN_143a8d310(0x40);
      if (lVar3 == 0) {
        local_58 = 0;
      }
      else {
        local_58 = FUN_143b6f500(lVar3);
      }
      FUN_143b6ff80(local_58,param_1);
      uVar4 = FUN_143a8d3a0(local_30,param_3);
      FUN_143b6fee0(local_58,uVar4);
      FUN_143b6fec0(local_58,param_2);
      FUN_143b6ff20(local_58,0);
    }
    return local_58;
  }
  *param_4 = 1;
  return 0;
}



// FUNCTION 143b6fb40 FUN_143b6fb40 body=517 status=ok
// SIG undefined FUN_143b6fb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b6fb40(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  local_74 = 10;
  local_78 = 0;
  local_68 = FUN_143aa56e0(0,"numberingSystems",param_2);
  local_80 = FUN_143aa37c0(local_68,"numberingSystems",0,param_2);
  local_70 = FUN_143aa37c0(local_80,param_1,0,param_2);
  FUN_143b6ba30(local_40,local_70,&DAT_145d12b68,param_2);
  FUN_143aa37c0(local_70,"radix",local_80,param_2);
  local_74 = FUN_143aa46d0(local_80,param_2);
  FUN_143aa37c0(local_70,"algorithmic",local_80,param_2);
  local_78 = FUN_143aa46d0(local_80,param_2);
  local_88 = local_78 == 1;
  local_87 = local_88;
  FUN_143aa2ef0(local_80);
  FUN_143aa2ef0(local_70);
  FUN_143aa2ef0(local_68);
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_60 = FUN_143b6f9d0(local_74,local_87,local_40,param_2);
    FUN_143b6ff20(local_60,param_1);
    local_50 = local_60;
    FUN_143a8dc60(local_40);
    local_58 = local_50;
  }
  else {
    *param_2 = 0x10;
    local_58 = 0;
    FUN_143a8dc60(local_40);
  }
  return local_58;
}



// FUNCTION 143b6fd50 FUN_143b6fd50 body=65 status=ok
// SIG undefined FUN_143b6fd50(void)

undefined8 FUN_143b6fd50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8d3a0(param_2,param_1 + 8,param_3,param_4,0);
  return param_2;
}



// FUNCTION 143b6fda0 FUN_143b6fda0 body=19 status=ok
// SIG undefined FUN_143b6fda0(void)

void FUN_143b6fda0(void)

{
  FUN_143b6fdd0();
  return;
}



// FUNCTION 143b6fdc0 FUN_143b6fdc0 body=15 status=ok
// SIG undefined FUN_143b6fdc0(void)

longlong FUN_143b6fdc0(longlong param_1)

{
  return param_1 + 0x35;
}



// FUNCTION 143b6fdd0 FUN_143b6fdd0 body=8 status=ok
// SIG undefined FUN_143b6fdd0(void)

undefined * FUN_143b6fdd0(void)

{
  return &DAT_146bc81a0;
}



// FUNCTION 143b6fde0 FUN_143b6fde0 body=15 status=ok
// SIG undefined FUN_143b6fde0(void)

undefined1 FUN_143b6fde0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}



// FUNCTION 143b6fdf0 FUN_143b6fdf0 body=195 status=ok
// SIG undefined FUN_143b6fdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b6fdf0(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_87;
  int local_84;
  int local_80;
  undefined8 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_78 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_143aa73a0(local_68,param_1);
  local_84 = 0;
  FUN_143ad1ce0(local_68);
  while( true ) {
    cVar1 = FUN_143aa65a0(local_68);
    if (cVar1 == '\0') {
      local_87 = 1;
      FUN_143aa7430(local_68);
      return local_87;
    }
    local_80 = FUN_143aa6dc0(local_68);
    if (0xffff < local_80) break;
    local_84 = local_84 + 1;
  }
  local_88 = 0;
  FUN_143aa7430(local_68);
  return local_88;
}



// FUNCTION 143b6fec0 FUN_143b6fec0 body=23 status=ok
// SIG undefined FUN_143b6fec0(void)

void FUN_143b6fec0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}



// FUNCTION 143b6fee0 FUN_143b6fee0 body=61 status=ok
// SIG undefined FUN_143b6fee0(void)

void FUN_143b6fee0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8dcd0(param_1 + 8,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143a8dc60(param_2);
  return;
}



// FUNCTION 143b6ff20 FUN_143b6ff20 body=96 status=ok
// SIG undefined FUN_143b6ff20(void)

void FUN_143b6ff20(longlong param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  else {
    strncpy((char *)(param_1 + 0x35),param_2,8);
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}



// FUNCTION 143b6ff80 FUN_143b6ff80 body=22 status=ok
// SIG undefined FUN_143b6ff80(void)

void FUN_143b6ff80(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 143b6ffa0 FUN_143b6ffa0 body=323 status=ok
// SIG undefined FUN_143b6ffa0(void)

undefined8 *
FUN_143b6ffa0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b369c0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::RuleBasedNumberFormat::vftable;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  FUN_143a8a610(param_1 + 0x32,param_2 + 400);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  FUN_143a8ac30(param_1 + 0x66);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x359) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35a) = 0;
  param_1[0x6c] = 0;
  FUN_143b705c0(param_1,param_2);
  return param_1;
}



// FUNCTION 143b700f0 FUN_143b700f0 body=1070 status=ok
// SIG undefined FUN_143b700f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b700f0(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  int local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [40];
  undefined1 local_98 [48];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_c8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_143b36a10(param_1);
  *param_1 = icu_53::RuleBasedNumberFormat::vftable;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  FUN_143a8a610(param_1 + 0x32,param_3);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  FUN_143a8ac30(param_1 + 0x66);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x359) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35a) = 0;
  param_1[0x6c] = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_f0 = "RBNFRules";
    if (param_2 == 0) {
      local_108 = "SpelloutRules";
    }
    else if (param_2 == 1) {
      local_108 = "OrdinalRules";
    }
    else if (param_2 == 2) {
      local_108 = "DurationRules";
    }
    else {
      if (param_2 != 3) {
        *param_4 = 1;
        return param_1;
      }
      local_108 = "NumberingSystemRules";
    }
    local_e8 = 0;
    local_118 = param_2;
    uVar2 = FUN_143a8c200(param_1 + 0x32);
    local_110 = FUN_143aa5b10("icudt53l-rbnf",uVar2,param_4);
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      local_d0 = FUN_143aa4780(local_110,0,param_4);
      uVar2 = FUN_143aa4780(local_110,1,param_4);
      FUN_143b69ce0(param_1,uVar2,local_d0);
      local_f8 = FUN_143aa3350(local_110,local_f0,0,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        FUN_143aa2ef0(local_110);
      }
      local_100 = FUN_143aa3350(local_f8,local_108,0,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        FUN_143aa2ef0(local_f8);
        FUN_143aa2ef0(local_110);
        return param_1;
      }
      FUN_143a8ac30(local_c0);
      while (cVar1 = FUN_143aa54f0(local_100), cVar1 != '\0') {
        local_e0 = FUN_143b5c050(local_98,local_100,0,param_4);
        local_d8 = local_e0;
        FUN_143a8e070(local_c0,local_e0);
        FUN_143a8dc60(local_98);
      }
      local_128 = param_4;
      FUN_143b72570(param_1,local_c0,local_e8,local_68);
      FUN_143aa2ef0(local_100);
      FUN_143aa2ef0(local_f8);
      FUN_143a8dc60(local_c0);
    }
    FUN_143aa2ef0(local_110);
  }
  return param_1;
}



// FUNCTION 143b70520 FUN_143b70520 body=100 status=ok
// SIG undefined FUN_143b70520(void)

void FUN_143b70520(undefined8 *param_1)

{
  *param_1 = icu_53::RuleBasedNumberFormat::vftable;
  FUN_143b70d60(param_1);
  FUN_143a8dc60(param_1 + 0x66);
  FUN_143a8acf0(param_1 + 0x32);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b70590 FUN_143b70590 body=48 status=ok
// SIG undefined FUN_143b70590(void)

longlong FUN_143b70590(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 143b705c0 FUN_143b705c0 body=641 status=ok
// SIG undefined FUN_143b705c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143b705c0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_1 != param_2) {
    FUN_143b36d60(param_1,param_2);
    local_c8[0] = 0;
    FUN_143b70d60(param_1);
    FUN_143a8adb0(param_1 + 0x32,param_2 + 0x32);
    *(char *)(param_1 + 99) = (char)param_2[99];
    if (param_2[0x65] == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = FUN_143b73700(param_2[0x65]);
    }
    local_d8 = local_c8;
    FUN_143b72570(param_1,param_2 + 0x66,local_c0,local_68);
    uVar1 = FUN_143b71830(param_2);
    local_a8 = *param_1;
    (**(code **)(local_a8 + 0x178))(param_1,uVar1);
    local_b0 = (**(code **)(*param_2 + 0x168))(param_2,local_90);
    local_a0 = local_b0;
    (**(code **)(*param_1 + 0x160))(param_1,local_b0,local_c8);
    FUN_143a8dc60(local_90);
    *(char *)(param_1 + 0x6b) = (char)param_2[0x6b];
    *(undefined1 *)((longlong)param_1 + 0x359) = *(undefined1 *)((longlong)param_2 + 0x359);
    *(undefined1 *)((longlong)param_1 + 0x35a) = *(undefined1 *)((longlong)param_2 + 0x35a);
    if (param_2[0x6c] == 0) {
      local_b8 = 0;
    }
    else {
      local_b8 = (**(code **)(*(longlong *)param_2[0x6c] + 0x18))(param_2[0x6c]);
    }
    param_1[0x6c] = local_b8;
  }
  return param_1;
}



// FUNCTION 143b70850 FUN_143b70850 body=532 status=ok
// SIG undefined FUN_143b70850(void)

bool FUN_143b70850(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *local_40;
  longlong *local_38;
  uint local_24;
  uint local_20;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    uVar3 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar4 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar4,uVar3);
    if (((cVar1 != '\0') && (cVar1 = FUN_143a8afa0(param_1 + 400,param_2 + 400), cVar1 != '\0')) &&
       (*(char *)(param_1 + 0x318) == *(char *)(param_2 + 0x318))) {
      if (*(longlong *)(param_1 + 0x328) == 0) {
        local_20 = (uint)(*(longlong *)(param_2 + 0x328) == 0);
      }
      else if (*(longlong *)(param_2 + 0x328) == 0) {
        local_24 = 0;
        local_20 = local_24;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 8))
                          (*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_2 + 0x328));
        local_20 = (uint)cVar1;
      }
      if (local_20 != 0) {
        local_38 = *(longlong **)(param_1 + 0x170);
        local_40 = *(longlong **)(param_2 + 0x170);
        if (local_38 == (longlong *)0x0) {
          return local_40 == (longlong *)0x0;
        }
        if (local_40 == (longlong *)0x0) {
          return false;
        }
        while (((*local_38 != 0 && (*local_40 != 0)) &&
               (cVar1 = FUN_143bea250(*local_38,*local_40), cVar1 != '\0'))) {
          local_38 = local_38 + 1;
          local_40 = local_40 + 1;
        }
        if ((*local_40 == 0) && (*local_38 == 0)) {
          return true;
        }
        return false;
      }
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 143b70a70 FUN_143b70a70 body=54 status=ok
// SIG undefined FUN_143b70a70(void)

undefined8 FUN_143b70a70(undefined8 param_1,uint param_2)

{
  FUN_143bea0f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b70ab0 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
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
  FUN_143b70520(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b70af0 FUN_143b70af0 body=269 status=ok
// SIG undefined FUN_143b70af0(void)

undefined8 FUN_143b70af0(longlong *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    iVar2 = FUN_143a904f0(param_3);
    if (0 < iVar2) {
      local_10 = FUN_143a8e3e0(param_3,0);
      local_14 = 0;
      iVar2 = (**(code **)(*param_1 + 0x100))(param_1,1,&local_14);
      cVar1 = FUN_143a9e940(local_10);
      if (cVar1 != '\0') {
        cVar1 = FUN_143a8b110(local_14);
        if (((cVar1 != '\0') && (param_1[0x6c] != 0)) &&
           (((iVar2 == 0x102 || ((iVar2 == 0x103 && (*(char *)((longlong)param_1 + 0x359) != '\0')))
             ) || ((iVar2 == 0x104 && (*(char *)((longlong)param_1 + 0x35a) != '\0')))))) {
          FUN_143e1dc70(param_3,param_1[0x6c],param_1 + 0x32,0x300);
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 143b70c00 FUN_143b70c00 body=252 status=ok
// SIG undefined FUN_143b70c00(void)

void FUN_143b70c00(longlong param_1,longlong param_2)

{
  int local_38;
  undefined4 local_34;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x310) != 0) {
      local_30 = *(undefined8 **)(param_1 + 0x310);
      local_28 = local_30;
      if (local_30 == (undefined8 *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = (**(code **)*local_30)(local_30,1);
      }
    }
    *(longlong *)(param_1 + 0x310) = param_2;
    local_34 = 0;
    for (local_38 = 0; local_38 < *(int *)(param_1 + 0x180); local_38 = local_38 + 1) {
      local_18 = *(longlong *)(param_1 + 0x170);
      FUN_143beb3d0(*(undefined8 *)(local_18 + (longlong)local_38 * 8),
                    (longlong)local_38 * 0x28 + *(longlong *)(param_1 + 0x178),param_1,&local_34);
    }
  }
  return;
}



// FUNCTION 143b70d00 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x368);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b6ffa0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b70d60 FUN_143b70d60 body=827 status=ok
// SIG undefined FUN_143b70d60(void)

void FUN_143b70d60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *local_b8;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    for (local_b8 = *(longlong **)(param_1 + 0x170); *local_b8 != 0; local_b8 = local_b8 + 1) {
      if (*local_b8 != 0) {
        FUN_143b70a70(*local_b8,1);
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x170) = 0;
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
  puVar1 = *(undefined8 **)(param_1 + 0x308);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x310);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x310) = 0;
  puVar1 = *(undefined8 **)(param_1 + 800);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 800) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x360);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    uVar2 = FUN_143b73d40(*(undefined8 *)(param_1 + 0x328));
    *(undefined8 *)(param_1 + 0x328) = uVar2;
  }
  return;
}



// FUNCTION 143b710a0 FUN_143b710a0 body=159 status=ok
// SIG undefined FUN_143b710a0(void)

longlong FUN_143b710a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *local_18;
  
  cVar2 = FUN_143a8b110(*param_3);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x170) != 0)) {
    for (local_18 = *(longlong **)(param_1 + 0x170); *local_18 != 0; local_18 = local_18 + 1) {
      lVar1 = *local_18;
      cVar2 = FUN_143b73340(lVar1,param_2);
      if (cVar2 != '\0') {
        return lVar1;
      }
    }
    *param_3 = 1;
  }
  return 0;
}



// FUNCTION 143b71140 FUN_143b71140 body=124 status=ok
// SIG undefined FUN_143b71140(void)

undefined8 FUN_143b71140(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    uVar1 = FUN_143a904f0(param_3);
    uVar2 = FUN_143a904f0(param_3);
    FUN_143beae80(*(undefined8 *)(param_1 + 0x188),(longlong)param_2,param_3,uVar2);
    FUN_143b70af0(param_1,uVar1,param_3);
  }
  return param_3;
}



// FUNCTION 143b711c0 FUN_143b711c0 body=201 status=ok
// SIG undefined FUN_143b711c0(void)

undefined8
FUN_143b711c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  cVar1 = FUN_143a8b110(*param_6);
  if (cVar1 != '\0') {
    iVar2 = FUN_143b19dc0(param_3,&DAT_145d12cd8,2,0);
    if (iVar2 == 0) {
      *param_6 = 1;
    }
    else {
      lVar5 = FUN_143b710a0(param_1,param_3,param_6);
      if (lVar5 != 0) {
        uVar3 = FUN_143a904f0(param_4);
        uVar4 = FUN_143a904f0(param_4);
        FUN_143beae80(lVar5,(longlong)param_2,param_4,uVar4);
        FUN_143b70af0(param_1,uVar3,param_4);
      }
    }
  }
  return param_4;
}



// FUNCTION 143b71290 FUN_143b71290 body=190 status=ok
// SIG undefined FUN_143b71290(void)

void FUN_143b71290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_143a904f0(param_3);
  cVar1 = FUN_143a919d0(param_2);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x188) != 0) {
      uVar3 = FUN_143a904f0(param_3);
      FUN_143beadd0(*(undefined8 *)(param_1 + 0x188),param_2,param_3,uVar3);
    }
  }
  else {
    lVar4 = FUN_143b71830(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_143b41cc0(lVar4,0xf);
      FUN_143a8e070(param_3,uVar5);
    }
  }
  FUN_143b70af0(param_1,uVar2,param_3);
  return;
}



// FUNCTION 143b71350 FUN_143b71350 body=201 status=ok
// SIG undefined FUN_143b71350(void)

undefined8
FUN_143b71350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  cVar1 = FUN_143a8b110(*param_6);
  if (cVar1 != '\0') {
    iVar2 = FUN_143b19dc0(param_3,&DAT_145d12cd8,2,0);
    if (iVar2 == 0) {
      *param_6 = 1;
    }
    else {
      lVar5 = FUN_143b710a0(param_1,param_3,param_6);
      if (lVar5 != 0) {
        uVar3 = FUN_143a904f0(param_4);
        uVar4 = FUN_143a904f0(param_4);
        FUN_143beadd0(lVar5,param_2,param_4,uVar4);
        FUN_143b70af0(param_1,uVar3,param_4);
      }
    }
  }
  return param_4;
}



// FUNCTION 143b71420 FUN_143b71420 body=122 status=ok
// SIG undefined FUN_143b71420(void)

undefined8 FUN_143b71420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    uVar1 = FUN_143a904f0(param_3);
    uVar2 = FUN_143a904f0(param_3);
    FUN_143beae80(*(undefined8 *)(param_1 + 0x188),param_2,param_3,uVar2);
    FUN_143b70af0(param_1,uVar1,param_3);
  }
  return param_3;
}



// FUNCTION 143b714a0 FUN_143b714a0 body=199 status=ok
// SIG undefined FUN_143b714a0(void)

undefined8
FUN_143b714a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  cVar1 = FUN_143a8b110(*param_6);
  if (cVar1 != '\0') {
    iVar2 = FUN_143b19dc0(param_3,&DAT_145d12cd8,2,0);
    if (iVar2 == 0) {
      *param_6 = 1;
    }
    else {
      lVar5 = FUN_143b710a0(param_1,param_3,param_6);
      if (lVar5 != 0) {
        uVar3 = FUN_143a904f0(param_4);
        uVar4 = FUN_143a904f0(param_4);
        FUN_143beae80(lVar5,param_2,param_4,uVar4);
        FUN_143b70af0(param_1,uVar3,param_4);
      }
    }
  }
  return param_4;
}



// FUNCTION 143b71570 FUN_143b71570 body=704 status=ok
// SIG undefined FUN_143b71570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b71570(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8 [2];
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(longlong *)(param_1 + 0x308) == 0) && (*(char *)(param_1 + 0x318) != '\0')) {
      local_a8[0] = 0;
      local_98 = (undefined8 *)FUN_143b35ce0(param_1 + 400,local_a8);
      cVar1 = FUN_143a8b110(local_a8[0]);
      if (cVar1 != '\0') {
        local_b8 = 0;
        local_a0 = (longlong *)
                   _guard_xfg_dispatch_icall_nop
                             (local_98,0,&icu_53::Collator::RTTI_Type_Descriptor,
                              &icu_53::RuleBasedCollator::RTTI_Type_Descriptor);
        if (local_a0 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 800) == 0) {
            local_98 = (undefined8 *)0x0;
          }
          else {
            uVar2 = FUN_143b64970(local_a0);
            FUN_143a8d3a0(local_38,uVar2);
            FUN_143a8e070(local_38,*(undefined8 *)(param_1 + 800));
            local_80 = FUN_143a8d310(0x1a0);
            if (local_80 == 0) {
              local_78 = (longlong *)0x0;
            }
            else {
              local_78 = (longlong *)FUN_143be4630(local_80,local_38,local_a8);
            }
            local_70 = local_78;
            local_a0 = local_78;
            if (local_78 == (longlong *)0x0) {
              local_60 = 0;
              FUN_143a8dc60(local_38);
              return local_60;
            }
            FUN_143a8dc60(local_38);
          }
          cVar1 = FUN_143a8b110(local_a8[0]);
          if (cVar1 == '\0') {
            local_48 = local_a0;
            local_88 = local_a0;
            if (local_a0 == (longlong *)0x0) {
              local_50 = 0;
            }
            else {
              local_50 = (**(code **)*local_a0)(local_a0,1);
            }
          }
          else {
            (**(code **)(*local_a0 + 0xb0))(local_a0,4,0x11,local_a8);
            *(longlong **)(param_1 + 0x308) = local_a0;
          }
        }
      }
      local_68 = local_98;
      local_90 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        (**(code **)*local_98)(local_98,1);
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x308);
  }
  return uVar2;
}



// FUNCTION 143b71830 FUN_143b71830 body=261 status=ok
// SIG undefined FUN_143b71830(void)

undefined8 FUN_143b71830(longlong param_1)

{
  char cVar1;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x310) == 0) {
    local_58[0] = 0;
    local_38 = FUN_143a8d310(0x818);
    if (local_38 == 0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = (undefined8 *)FUN_143b6a160(local_38,param_1 + 400,local_58);
    }
    local_30 = local_40;
    local_48 = local_40;
    cVar1 = FUN_143a8b110(local_58[0]);
    if (cVar1 == '\0') {
      local_20 = local_48;
      local_50 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    else {
      *(undefined8 **)(param_1 + 0x310) = local_48;
    }
  }
  return *(undefined8 *)(param_1 + 0x310);
}



// FUNCTION 143b71940 FUN_143b71940 body=18 status=ok
// SIG undefined FUN_143b71940(void)

undefined8 FUN_143b71940(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



// FUNCTION 143b71960 FUN_143b71960 body=189 status=ok
// SIG undefined FUN_143b71960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b71960(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_143a8ac30(local_38);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    cVar1 = FUN_143b73380(*(undefined8 *)(param_1 + 0x188));
    if (cVar1 != '\0') {
      FUN_143b71a40(*(undefined8 *)(param_1 + 0x188),local_38);
      goto LAB_143b719e2;
    }
  }
  FUN_143a90e90(local_38);
LAB_143b719e2:
  FUN_143a8d3a0(param_2,local_38);
  local_48 = local_48 | 1;
  FUN_143a8dc60(local_38);
  return param_2;
}



// FUNCTION 143b71a20 FUN_143b71a20 body=19 status=ok
// SIG undefined FUN_143b71a20(void)

void FUN_143b71a20(void)

{
  FUN_143b72560();
  return;
}



// FUNCTION 143b71a40 FUN_143b71a40 body=37 status=ok
// SIG undefined FUN_143b71a40(void)

void FUN_143b71a40(undefined8 param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1);
  return;
}


