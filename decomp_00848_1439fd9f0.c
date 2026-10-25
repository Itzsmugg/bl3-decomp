// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1439fd9f0 exception_ptr body=33 status=ok
// SIG undefined exception_ptr(void)

void * std::exception_ptr::exception_ptr(void *param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_1,param_2);
  return param_1;
}



// FUNCTION 1439fda20 FUN_1439fda20 body=101 status=ok
// SIG undefined FUN_1439fda20(void)

void FUN_1439fda20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1439fda90(param_1 + 8);
  return;
}



// FUNCTION 1439fda90 FUN_1439fda90 body=95 status=ok
// SIG undefined FUN_1439fda90(void)

void FUN_1439fda90(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  plVar2 = (longlong *)*param_1;
  if (plVar3 != plVar2) {
    do {
      plVar1 = (longlong *)*plVar3;
      FMemory::operator_delete(plVar3,0x20);
      plVar2 = (longlong *)*param_1;
      plVar3 = plVar1;
    } while (plVar1 != plVar2);
  }
  FMemory::operator_delete(plVar2,0x20);
  return;
}



// FUNCTION 1439fdaf0 thunk_FUN_1439fda20 body=5 status=ok
// SIG undefined thunk_FUN_1439fda20(void)

void thunk_FUN_1439fda20(void)

{
  FUN_1439fda20();
  return;
}



// FUNCTION 1439fdb00 ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_> body=91 status=ok
// SIG undefined ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>(void)

void std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
     ::~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1439fdb60 ~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> body=219 status=ok
// SIG undefined ~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(void)

void std::
     vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
     ::
     ~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               (undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[1];
    if (plVar5 != plVar6) {
      do {
        uVar4 = plVar5[3];
        if (0xf < uVar4) {
          lVar1 = *plVar5;
          uVar3 = uVar4 + 1;
          lVar2 = lVar1;
          if (0xfff < uVar3) {
            lVar2 = *(longlong *)(lVar1 + -8);
            uVar3 = uVar4 + 0x28;
            if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1439fdc35;
          }
          FMemory::operator_delete(lVar2,uVar3);
        }
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        *(undefined1 *)plVar5 = 0;
        plVar5 = plVar5 + 4;
      } while (plVar5 != plVar6);
      plVar5 = (longlong *)*param_1;
    }
    uVar4 = param_1[2] - (longlong)plVar5 & 0xffffffffffffffe0;
    plVar6 = plVar5;
    if (0xfff < uVar4) {
      plVar6 = (longlong *)plVar5[-1];
      uVar4 = uVar4 + 0x27;
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)plVar5 + (-8 - (longlong)plVar6))) {
LAB_1439fdc35:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(plVar6,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1439fdc40 FUN_1439fdc40 body=134 status=ok
// SIG undefined FUN_1439fdc40(void)

void FUN_1439fdc40(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((*(int *)(param_1 + 1) == 9) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    uVar2 = plVar1[3];
    if (0xf < uVar2) {
      lVar3 = *plVar1;
      uVar5 = uVar2 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar5);
    }
    plVar1[2] = 0;
    plVar1[3] = 0xf;
    *(undefined1 *)plVar1 = 0;
    FMemory::operator_delete(plVar1,0x20);
    return;
  }
  return;
}



// FUNCTION 1439fdcd0 FUN_1439fdcd0 body=11 status=ok
// SIG undefined FUN_1439fdcd0(void)

void FUN_1439fdcd0(undefined8 *param_1)

{
  *param_1 = google::protobuf::MessageFactory::vftable;
  return;
}



// FUNCTION 1439fdce0 ~FImplicitObject body=11 status=ok
// SIG undefined ~FImplicitObject(void)

void Chaos::FImplicitObject::~FImplicitObject(undefined8 *param_1)

{
  *param_1 = google::protobuf::Reflection::vftable;
  return;
}



// FUNCTION 1439fdcf0 _guard_xfg_dispatch_icall_nop body=5 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
  _guard_xfg_dispatch_icall_nop();
  return;
}



// FUNCTION 1439fdd00 ~exception_ptr body=24 status=ok
// SIG undefined ~exception_ptr(void)

void std::exception_ptr::~exception_ptr(void *param_1)

{
  ::_guard_xfg_dispatch_icall_nop(param_1);
  return;
}



// FUNCTION 1439fdd20 FUN_1439fdd20 body=87 status=ok
// SIG undefined FUN_1439fdd20(void)

undefined8 * FUN_1439fdd20(undefined8 *param_1,ulonglong param_2)

{
  FUN_1439fda20(param_1 + 0x13);
  _guard_xfg_dispatch_icall_nop(param_1 + 9);
  FUN_1439fda20(param_1 + 1);
  *param_1 = google::protobuf::MessageFactory::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1439fdd80 FUN_1439fdd80 body=43 status=ok
// SIG undefined FUN_1439fdd80(void)

undefined8 * FUN_1439fdd80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::MapFieldAccessor::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1439fddb0 FUN_1439fddb0 body=43 status=ok
// SIG undefined FUN_1439fddb0(void)

undefined8 * FUN_1439fddb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::MessageFactory::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1439fdde0 FUN_1439fdde0 body=43 status=ok
// SIG undefined FUN_1439fdde0(void)

undefined8 * FUN_1439fdde0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::Reflection::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1439fde10 FUN_1439fde10 body=44 status=ok
// SIG undefined FUN_1439fde10(void)

void FUN_1439fde10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  FUN_1439f19c0(param_2,local_res8);
  return;
}



// FUNCTION 1439fde40 FUN_1439fde40 body=46 status=ok
// SIG undefined FUN_1439fde40(void)

void FUN_1439fde40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  FUN_1439f19c0(param_2,local_res8);
  return;
}



// FUNCTION 1439fde70 FUN_1439fde70 body=46 status=ok
// SIG undefined FUN_1439fde70(void)

void FUN_1439fde70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  FUN_1439f1a00(param_2,local_res8);
  return;
}



// FUNCTION 1439fdea0 FUN_1439fdea0 body=45 status=ok
// SIG undefined FUN_1439fdea0(void)

void FUN_1439fdea0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  FUN_1439f1a00(param_2,local_res8);
  return;
}



// FUNCTION 1439fded0 FUN_1439fded0 body=44 status=ok
// SIG undefined FUN_1439fded0(void)

void FUN_1439fded0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  FUN_1439f1a40(param_2,local_res8);
  return;
}



// FUNCTION 1439fdf00 FUN_1439fdf00 body=94 status=ok
// SIG undefined FUN_1439fdf00(void)

void FUN_1439fdf00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  (**(code **)(*param_1 + 0x88))(param_1,param_3,uVar1);
  FUN_1439f1b60(param_2,uVar1);
  return;
}



// FUNCTION 1439fdf60 FUN_1439fdf60 body=100 status=ok
// SIG undefined FUN_1439fdf60(void)

void FUN_1439fdf60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_res8;
  
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  (**(code **)(*param_1 + 0x88))(param_1,param_3,uVar1);
  FUN_1439fc8b0(param_2,uVar1,local_res8);
  return;
}



// FUNCTION 1439fdfd0 FUN_1439fdfd0 body=89 status=ok
// SIG undefined FUN_1439fdfd0(void)

void FUN_1439fdfd0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_res18;
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*plVar1 + 0x88))(plVar1,param_3);
  uVar2 = FUN_143a12320(param_2);
  FUN_1439fc8b0(uVar2,plVar1,local_res18);
  return;
}



// FUNCTION 1439fe030 FUN_1439fe030 body=5 status=ok
// SIG undefined FUN_1439fe030(void)

longlong FUN_1439fe030(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  return param_3 + 1;
}



// FUNCTION 1439fe040 FUN_1439fe040 body=50 status=ok
// SIG undefined FUN_1439fe040(void)

ulonglong FUN_1439fe040(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_143a19b30();
  (**(code **)(*param_1 + 0xa8))(param_1,uVar1 & 0xffffffff);
  return uVar1;
}



// FUNCTION 1439fe080 FUN_1439fe080 body=10 status=ok
// SIG undefined FUN_1439fe080(void)

void FUN_1439fe080(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001439fe083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 1439fe090 FUN_1439fe090 body=8 status=ok
// SIG undefined FUN_1439fe090(void)

void FUN_1439fe090(undefined8 param_1,undefined8 param_2)

{
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_2);
  return;
}



// FUNCTION 1439fe0a0 FUN_1439fe0a0 body=8 status=ok
// SIG undefined FUN_1439fe0a0(void)

void FUN_1439fe0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f1c30(param_2);
  return;
}



// FUNCTION 1439fe0b0 FUN_1439fe0b0 body=8 status=ok
// SIG undefined FUN_1439fe0b0(void)

void FUN_1439fe0b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439fca10(param_2);
  return;
}



// FUNCTION 1439fe0c0 FUN_1439fe0c0 body=24 status=ok
// SIG undefined FUN_1439fe0c0(void)

void FUN_1439fe0c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a12320(param_2);
  FUN_1439fca10(uVar1);
  return;
}



// FUNCTION 1439fe0e0 thunk_FUN_143a0b080 body=5 status=ok
// SIG undefined thunk_FUN_143a0b080(void)

void thunk_FUN_143a0b080(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  uVar6 = 0xfffffffffffffffe;
  plVar1 = (longlong *)FUN_143a0bbb0();
  lStack_20 = 0;
  lStack_18 = 0;
  uVar5 = 0;
  lStack_10 = 0;
  (**(code **)(*plVar1 + 0x78))(plVar1,param_1,&lStack_20,*plVar1,uVar6);
  uVar3 = uVar5;
  if (lStack_18 - lStack_20 >> 3 != 0) {
    do {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1,*(undefined8 *)(uVar3 + lStack_20));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lStack_18 - lStack_20 >> 3));
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  if (*plVar1 != plVar1[1]) {
    FUN_1439fbee0(plVar1);
  }
  if (lStack_20 != 0) {
    uVar3 = lStack_10 - lStack_20 & 0xfffffffffffffff8;
    lVar2 = lStack_20;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lStack_20 + -8);
      if (0x1f < (lStack_20 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
  }
  return;
}



// FUNCTION 1439fe0f0 FUN_1439fe0f0 body=13 status=ok
// SIG undefined FUN_1439fe0f0(void)

void FUN_1439fe0f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001439fe0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x88))(param_3);
  return;
}



// FUNCTION 1439fe100 FUN_1439fe100 body=3 status=ok
// SIG undefined FUN_1439fe100(void)

undefined4 FUN_1439fe100(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



// FUNCTION 1439fe110 FUN_1439fe110 body=5 status=ok
// SIG undefined FUN_1439fe110(void)

undefined4 FUN_1439fe110(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



// FUNCTION 1439fe120 FUN_1439fe120 body=5 status=ok
// SIG undefined FUN_1439fe120(void)

undefined8 FUN_1439fe120(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



// FUNCTION 1439fe130 FUN_1439fe130 body=4 status=ok
// SIG undefined FUN_1439fe130(void)

undefined8 FUN_1439fe130(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



// FUNCTION 1439fe140 FUN_1439fe140 body=4 status=ok
// SIG undefined FUN_1439fe140(void)

undefined1 FUN_1439fe140(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



// FUNCTION 1439fe150 FUN_1439fe150 body=37 status=ok
// SIG undefined FUN_1439fe150(void)

void FUN_1439fe150(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_3,puVar1,param_2[2]);
    return;
  }
  return;
}



// FUNCTION 1439fe180 FUN_1439fe180 body=317 status=ok
// SIG undefined FUN_1439fe180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fe180(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_90 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_94 = 0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_78);
  lVar1 = *plVar2;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_88);
  if (*plVar2 != lVar1) {
    uVar3 = FUN_1439eeb00(local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x5e);
    local_94 = 1;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_88);
    uVar5 = *(undefined8 *)(*plVar2 + 8);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (from.GetDescriptor()) == (descriptor): ");
    uVar3 = FUN_1439eef00(uVar3,": Tried to copy from a message with a different type. to: ");
    uVar4 = FUN_1439eecf0(uVar3,uVar4);
    uVar4 = FUN_1439eef00(uVar4,", from: ");
    uVar5 = FUN_1439eecf0(uVar4,uVar5);
    FUN_1439eec50(local_98,uVar5);
    DsDevice::~DsDevice(local_68);
  }
  FUN_143a0b1a0(param_2,param_1);
  return;
}



// FUNCTION 1439fe2c0 FUN_1439fe2c0 body=4 status=ok
// SIG undefined FUN_1439fe2c0(void)

undefined8 FUN_1439fe2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// FUNCTION 1439fe2d0 thunk_FUN_143a0b2e0 body=5 status=ok
// SIG undefined thunk_FUN_143a0b2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_143a0b2e0(undefined8 param_1)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [8];
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined1 auStack_d8 [8];
  longlong *plStack_d0;
  undefined1 auStack_c8 [16];
  longlong *aplStack_b8 [2];
  longlong *plStack_a8;
  undefined1 auStack_a0 [8];
  longlong *plStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined1 auStack_68 [56];
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_143a0bbb0();
  plStack_a8 = plVar5;
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,param_1);
  if (*plVar6 != plVar6[1]) {
    FUN_1439fbee0(plVar6);
  }
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  (**(code **)(*plVar5 + 0x78))(plVar5,param_1,&lStack_f0);
  iVar11 = 0;
  if (lStack_e8 - lStack_f0 >> 3 != 0) {
    lVar12 = 0;
    do {
      lVar1 = *(longlong *)(lStack_f0 + lVar12);
      iVar4 = FUN_143a009a0(lVar1);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10) {
        if (*(int *)(lVar1 + 0x3c) == 3) {
          iVar4 = FUN_143a009a0(lVar1);
          if ((iVar4 == 0xb) && (cVar3 = FUN_143a4f8d0(lVar1), cVar3 != '\0')) {
            lVar7 = FUN_143a4f9e0(lVar1);
            iVar4 = FUN_143a009a0(*(longlong *)(lVar7 + 0x28) + 0x98);
            if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10) {
              plVar6 = (longlong *)(**(code **)(*plVar5 + 0x2d0))(plVar5,param_1,lVar1);
              cVar3 = FUN_143a11340(plVar6);
              if (cVar3 == '\0') goto LAB_143a0b634;
              FUN_1439fd820(auStack_d8,param_1,lVar1);
              FUN_1439fd820(auStack_a0,param_1,lVar1);
              (**(code **)(*plVar6 + 0x28))(plVar6,auStack_d8);
              (**(code **)(*plVar6 + 0x30))(plVar6,auStack_a0);
              cVar3 = (**(code **)(*plStack_d0 + 0x20))(plStack_d0,auStack_d8,auStack_a0);
              while (cVar3 == '\0') {
                FUN_143a124c0(plStack_d0);
                iVar4 = FUN_143a0d230(aplStack_b8);
                if (iVar4 != 10) {
                  uVar8 = FUN_1439eeb00(auStack_68,3,
                                        "c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
                  iVar4 = FUN_143a0d230(aplStack_b8);
                  puVar2 = (&PTR_s_ERROR_145cbee00)[iVar4];
                  uVar8 = FUN_1439eef00(uVar8,"Protocol Buffer map usage error:\n");
                  uVar8 = FUN_1439eef00(uVar8,"MapValueRef::MutableMessageValue");
                  uVar8 = FUN_1439eef00(uVar8," type does not match\n");
                  uVar8 = FUN_1439eef00(uVar8,"  Expected : ");
                  uVar8 = FUN_1439eef00(uVar8,"message");
                  uVar8 = FUN_1439eef00(uVar8,&DAT_143fc48d8);
                  uVar8 = FUN_1439eef00(uVar8,"  Actual   : ");
                  uVar8 = FUN_1439eef00(uVar8,puVar2);
                  FUN_1439eec50(auStack_f8,uVar8);
                  DsDevice::~DsDevice(auStack_68);
                }
                (**(code **)(*aplStack_b8[0] + 0x98))();
                (**(code **)(*plStack_d0 + 0x88))(plStack_d0,auStack_d8);
                cVar3 = (**(code **)(*plStack_d0 + 0x20))(plStack_d0,auStack_d8,auStack_a0);
                plVar5 = plStack_a8;
              }
              (**(code **)(*plStack_98 + 0x78))(plStack_98,auStack_a0);
              FUN_1439fdc40(auStack_90);
              (**(code **)(*plStack_d0 + 0x78))(plStack_d0,auStack_d8);
              FUN_1439fdc40(auStack_c8);
            }
          }
          else {
LAB_143a0b634:
            iVar4 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1,lVar1);
            iVar10 = 0;
            if (0 < iVar4) {
              do {
                plVar6 = (longlong *)(**(code **)(*plVar5 + 0x1f8))(plVar5,param_1,lVar1);
                (**(code **)(*plVar6 + 0x98))(plVar6);
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar4);
            }
          }
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar5 + 0x130))(plVar5,param_1,lVar1,0);
          (**(code **)(*plVar6 + 0x98))(plVar6);
        }
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((ulonglong)(longlong)iVar11 < (ulonglong)(lStack_e8 - lStack_f0 >> 3));
  }
  if (lStack_f0 != 0) {
    uVar9 = lStack_e0 - lStack_f0 & 0xfffffffffffffff8;
    lVar12 = lStack_f0;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar12 = *(longlong *)(lStack_f0 + -8);
      if (0x1f < (lStack_f0 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar12,uVar9);
  }
  return;
}



// FUNCTION 1439fe2e0 FUN_1439fe2e0 body=17 status=ok
// SIG undefined FUN_1439fe2e0(void)

longlong FUN_1439fe2e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return (longlong)iVar1;
}



// FUNCTION 1439fe300 FUN_1439fe300 body=7 status=ok
// SIG undefined FUN_1439fe300(void)

bool FUN_1439fe300(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  return param_3 == param_4;
}



// FUNCTION 1439fe310 FUN_1439fe310 body=185 status=ok
// SIG undefined FUN_1439fe310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fe310(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_20 = 0;
  uStack_18 = 0xf;
  local_30 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_30,&DAT_143f3f584,0);
  FUN_143a0b6e0(param_1,&local_30,param_2);
  if (0xf < uStack_18) {
    uVar3 = uStack_18 + 1;
    lVar1 = CONCAT71(uStack_2f,local_30);
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      uVar3 = uStack_18 + 0x28;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
  }
  return;
}



// FUNCTION 1439fe3d0 FUN_1439fe3d0 body=72 status=ok
// SIG undefined FUN_1439fe3d0(void)

void FUN_1439fe3d0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = mu::FPhysicsBody::GetBodyBoneId(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001439fe415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x88))(param_1,uVar2,param_4);
  return;
}



// FUNCTION 1439fe420 FUN_1439fe420 body=72 status=ok
// SIG undefined FUN_1439fe420(void)

void FUN_1439fe420(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_1439f1d10(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001439fe465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x88))(param_1,uVar2,param_4);
  return;
}



// FUNCTION 1439fe470 FUN_1439fe470 body=72 status=ok
// SIG undefined FUN_1439fe470(void)

void FUN_1439fe470(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_1439f1d20(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001439fe4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x88))(param_1,uVar2,param_4);
  return;
}



// FUNCTION 1439fe4c0 FUN_1439fe4c0 body=72 status=ok
// SIG undefined FUN_1439fe4c0(void)

void FUN_1439fe4c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_1439f1d30(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001439fe505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x90))(param_1,uVar2,param_4);
  return;
}



// FUNCTION 1439fe510 FUN_1439fe510 body=33 status=ok
// SIG undefined FUN_1439fe510(void)

void FUN_1439fe510(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x90))
            (param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8 + (longlong)param_3 * 8),
             param_4);
  return;
}



// FUNCTION 1439fe540 FUN_1439fe540 body=32 status=ok
// SIG undefined FUN_1439fe540(void)

undefined8 FUN_1439fe540(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_143a10990(param_2);
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8 + (longlong)param_3 * 8);
}



// FUNCTION 1439fe560 FUN_1439fe560 body=7 status=ok
// SIG undefined FUN_1439fe560(void)

void FUN_1439fe560(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001439fe563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 1439fe570 FUN_1439fe570 body=7 status=ok
// SIG undefined FUN_1439fe570(void)

void FUN_1439fe570(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001439fe573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 1439fe580 FUN_1439fe580 body=116 status=ok
// SIG undefined FUN_1439fe580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439fe580(void)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x313);
  uVar1 = FUN_1439eef00(uVar1,"Not implemented.");
  FUN_1439eec50(local_58,uVar1);
  DsDevice::~DsDevice(local_48);
  return 0;
}



// FUNCTION 1439fe600 FUN_1439fe600 body=751 status=ok
// SIG undefined FUN_1439fe600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439fe600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong local_90 [3];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_90[1] = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x48;
  local_90[0] = param_2;
  iVar7 = _guard_xfg_dispatch_icall_nop(lVar1);
  if (iVar7 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar7);
  }
  lVar3 = param_1 + 0x98;
  lVar8 = FUN_1439fca70(lVar3,local_90);
  if (lVar8 != 0) {
    iVar7 = _guard_xfg_dispatch_icall_nop(lVar1);
    if (iVar7 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar7);
      return lVar8;
    }
    return lVar8;
  }
  iVar7 = _guard_xfg_dispatch_icall_nop();
  if (iVar7 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar7);
  }
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
  lVar9 = FUN_143a4f670();
  if (lVar8 != lVar9) {
    return 0;
  }
  pcVar17 = (char *)**(undefined8 **)(param_2 + 0x10);
  if (0xf < *(ulonglong *)(pcVar17 + 0x18)) {
    pcVar17 = *(char **)pcVar17;
  }
  uVar15 = 0;
  cVar4 = *pcVar17;
  pcVar2 = pcVar17;
  while (cVar4 != '\0') {
    uVar15 = uVar15 * 5 + (longlong)cVar4;
    pcVar2 = pcVar2 + 1;
    cVar4 = *pcVar2;
  }
  uVar15 = *(ulonglong *)(param_1 + 0x38) & uVar15;
  lVar8 = *(longlong *)(param_1 + 0x20);
  puVar16 = *(undefined8 **)(lVar8 + uVar15 * 0x10);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  do {
    puVar10 = puVar6;
    if (*(undefined8 **)(lVar8 + uVar15 * 0x10) != puVar6) {
      puVar10 = (undefined8 *)**(undefined8 **)(uVar15 * 0x10 + 8 + lVar8);
    }
    puVar12 = puVar6;
    if (puVar16 == puVar10) goto LAB_1439fe794;
    pcVar2 = (char *)puVar16[2];
    pcVar11 = pcVar2;
    do {
      cVar4 = *pcVar11;
      cVar5 = pcVar11[(longlong)pcVar17 - (longlong)pcVar2];
      if (cVar4 != cVar5) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar5 != '\0');
    if (cVar4 == cVar5) break;
    puVar16 = (undefined8 *)*puVar16;
  } while( true );
  lVar8 = (longlong)pcVar2 - (longlong)pcVar17;
  do {
    cVar4 = *pcVar17;
    cVar5 = pcVar17[lVar8];
    if (cVar4 != cVar5) break;
    pcVar17 = pcVar17 + 1;
  } while (cVar5 != '\0');
  if (cVar4 == cVar5) {
    puVar12 = puVar16;
  }
LAB_1439fe794:
  if ((puVar12 == puVar6) || (lVar8 = puVar12[3], lVar8 == 0)) {
    uVar13 = FUN_1439eeb00(local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x2e7);
    uVar14 = **(undefined8 **)(param_2 + 0x10);
    uVar13 = FUN_1439eef00(uVar13,"File appears to be in generated pool but wasn\'t registered: ");
    uVar14 = FUN_1439eecf0(uVar13,uVar14);
    FUN_1439eec50(local_98,uVar14);
    DsDevice::~DsDevice(local_78);
    return 0;
  }
  local_90[2] = lVar1;
  iVar7 = _guard_xfg_dispatch_icall_nop(lVar1);
  if (iVar7 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar7);
  }
  lVar9 = FUN_1439fca70(lVar3,local_90);
  if (lVar9 == 0) {
    FUN_143a06b00(lVar8);
    lVar9 = FUN_1439fca70(lVar3,local_90);
    if (lVar9 == 0) {
      uVar13 = FUN_1439eeb00(local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x2f9
                            );
      uVar14 = *(undefined8 *)(param_2 + 8);
      uVar13 = FUN_1439eef00(uVar13,"Type appears to be in generated pool but wasn\'t ");
      uVar13 = FUN_1439eef00(uVar13,"registered: ");
      uVar14 = FUN_1439eecf0(uVar13,uVar14);
      FUN_1439eec50(local_98,uVar14);
      DsDevice::~DsDevice(local_78);
    }
  }
  iVar7 = _guard_xfg_dispatch_icall_nop(lVar1);
  if (iVar7 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar7);
    return lVar9;
  }
  return lVar9;
}



// FUNCTION 1439fe8f0 FUN_1439fe8f0 body=10 status=ok
// SIG undefined FUN_1439fe8f0(void)

void FUN_1439fe8f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001439fe8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))();
  return;
}



// FUNCTION 1439fe900 FUN_1439fe900 body=47 status=ok
// SIG undefined FUN_1439fe900(void)

undefined8 FUN_1439fe900(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_18);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_2,*(undefined8 *)(*plVar1 + 8));
  return param_2;
}



// FUNCTION 1439fe930 FUN_1439fe930 body=621 status=ok
// SIG undefined FUN_1439fe930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1439fe930(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  longlong *local_90;
  longlong *plStack_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_38;
  
  local_78 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_90 = (longlong *)0x0;
  plStack_88 = (longlong *)0x0;
  local_80 = 0;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffffffffff00);
  local_70 = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_68,&DAT_143f3f584,0);
  FUN_143a0b6e0(param_1,&local_68,&local_90);
  if (0xf < uStack_50) {
    uVar8 = uStack_50 + 1;
    plVar6 = local_68;
    if (0xfff < uVar8) {
      uVar8 = uStack_50 + 0x28;
      plVar6 = (longlong *)local_68[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_68 + (-8 - (longlong)plVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(plVar6,uVar8);
  }
  plVar4 = plStack_88;
  plVar3 = local_90;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_98 = 2;
  plVar2 = plStack_88;
  for (plVar6 = local_90; plStack_88 = plVar2, plVar6 != plVar4; plVar6 = plVar6 + 4) {
    if (plVar6 != plVar3) {
      lVar1 = param_2[2];
      if ((ulonglong)(param_2[3] - lVar1) < 2) {
        local_a8 = 2;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (param_2,2,0,&DAT_145cbbc74);
      }
      else {
        param_2[2] = lVar1 + 2;
        puVar5 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar5 = (undefined8 *)*param_2;
        }
        _guard_xfg_dispatch_icall_nop((undefined1 *)((longlong)puVar5 + lVar1),&DAT_145cbbc74,2);
        ((undefined1 *)((longlong)puVar5 + lVar1))[2] = 0;
      }
    }
    local_68 = plVar6;
    if (0xf < (ulonglong)plVar6[3]) {
      local_68 = (longlong *)*plVar6;
    }
    local_60 = plVar6[2];
    FBlake3::Update(param_2,&local_68);
    plVar2 = plStack_88;
  }
  plVar6 = local_90;
  if (local_90 != (longlong *)0x0) {
    for (; plVar6 != plVar2; plVar6 = plVar6 + 4) {
      uVar8 = plVar6[3];
      if (0xf < uVar8) {
        uVar9 = uVar8 + 1;
        lVar1 = *plVar6;
        lVar7 = lVar1;
        if (0xfff < uVar9) {
          uVar9 = uVar8 + 0x28;
          lVar7 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar9);
      }
      plVar6[2] = 0;
      plVar6[3] = 0xf;
      *(undefined1 *)plVar6 = 0;
    }
    uVar8 = local_80 - (longlong)local_90 & 0xffffffffffffffe0;
    plVar6 = local_90;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      plVar6 = (longlong *)local_90[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_90 + (-8 - (longlong)plVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(plVar6,uVar8);
  }
  return param_2;
}



// FUNCTION 1439feba0 FUN_1439feba0 body=209 status=ok
// SIG undefined FUN_1439feba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439feba0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  char local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_60 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = FUN_143a00840();
  local_70 = param_1;
  local_68 = param_2;
  FUN_1439fd260(lVar1 + 8,local_58,&local_70,local_78[0]);
  if (local_50 == '\0') {
    uVar2 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x2c4);
    uVar2 = FUN_1439eef00(uVar2,"File is already registered: ");
    uVar2 = FUN_1439eef00(uVar2,param_1);
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_48);
  }
  return;
}



// FUNCTION 1439fec80 FUN_1439fec80 body=216 status=ok
// SIG undefined FUN_1439fec80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fec80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  char local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_60 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = FUN_143a00840();
  local_70 = param_1;
  local_68 = param_2;
  FUN_1439fd440(lVar1 + 0x98,local_58,&local_70,local_78[0]);
  if (local_50 == '\0') {
    uVar2 = FUN_1439eeb00(local_48,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x2d3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_1439eef00(uVar2,"Type is already registered: ");
    uVar3 = FUN_1439eecf0(uVar2,uVar3);
    FUN_1439eec50(local_78,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return;
}



// FUNCTION 1439fed60 FUN_1439fed60 body=8 status=ok
// SIG undefined FUN_1439fed60(void)

void FUN_1439fed60(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f2a70(param_2);
  return;
}



// FUNCTION 1439fed70 FUN_1439fed70 body=8 status=ok
// SIG undefined FUN_1439fed70(void)

void FUN_1439fed70(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f2a80(param_2);
  return;
}



// FUNCTION 1439fed80 FUN_1439fed80 body=8 status=ok
// SIG undefined FUN_1439fed80(void)

bool FUN_1439fed80(undefined8 param_1,longlong param_2)

{
  return *(int *)(param_2 + 8) == 0;
}



// FUNCTION 1439fed90 FUN_1439fed90 body=24 status=ok
// SIG undefined FUN_1439fed90(void)

bool FUN_1439fed90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143a10990(param_2);
  return *(int *)(lVar1 + 8) == 0;
}



// FUNCTION 1439fedb0 thunk_FUN_143a0bdf0 body=5 status=ok
// SIG undefined thunk_FUN_143a0bdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong thunk_FUN_143a0bdf0(longlong *param_1)

{
  undefined *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  longlong *plStack_148;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  longlong *plStack_130;
  undefined4 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 auStack_108 [8];
  longlong *plStack_100;
  undefined1 auStack_f8 [8];
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined1 auStack_70 [56];
  ulonglong uStack_38;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,auStack_d0);
  lVar8 = *plVar4;
  plVar4 = (longlong *)FUN_143a0bbb0(param_1);
  iVar11 = 0;
  if (0 < *(int *)(lVar8 + 0x68)) {
    lVar13 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x28) + 0x3c + lVar13) == 2) &&
         (uVar5 = (**(code **)(*plVar4 + 0x20))
                            (plVar4,param_1,(longlong)iVar11 * 0x98 + *(longlong *)(lVar8 + 0x28)),
         (char)uVar5 == '\0')) {
        return uVar5 & 0xffffffffffffff00;
      }
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 0x98;
    } while (iVar11 < *(int *)(lVar8 + 0x68));
  }
  lStack_120 = 0;
  lStack_118 = 0;
  uVar10 = 0;
  lStack_110 = 0;
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1,&lStack_120);
  uVar5 = uVar10;
  if (lStack_118 - lStack_120 >> 3 != 0) {
    do {
      lVar8 = *(longlong *)(lStack_120 + uVar5);
      iVar11 = FUN_143a009a0(lVar8);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar11 * 4) == 10) {
        iVar11 = FUN_143a009a0(lVar8);
        if ((iVar11 == 0xb) && (cVar3 = FUN_143a4f8d0(lVar8), cVar3 != '\0')) {
          lVar13 = FUN_143a4f9e0(lVar8);
          iVar11 = FUN_143a009a0(*(longlong *)(lVar13 + 0x28) + 0x98);
          if (*(int *)(&DAT_145cbed10 + (longlong)iVar11 * 4) == 10) {
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0x2d8))(plVar4,param_1,lVar8);
            cVar3 = FUN_143a11340(plVar6);
            if (cVar3 == '\0') goto LAB_143a0c41c;
            uStack_138 = 0;
            plStack_130 = (longlong *)0x0;
            uStack_128 = 0;
            lVar13 = (**(code **)(*param_1 + 0xb8))(param_1,auStack_d0);
            plStack_148 = (longlong *)
                          (**(code **)(**(longlong **)(lVar13 + 8) + 0x2d0))
                                    (*(longlong **)(lVar13 + 8),param_1,lVar8);
            uStack_a0 = 0;
            uStack_98 = 0xf;
            uStack_b0 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&uStack_b0,&DAT_144044650,3);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&uStack_b0);
            iVar11 = FUN_143a009a0(uVar7);
            FUN_141514070(auStack_140,*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4));
            if (0xf < uStack_98) {
              uVar9 = uStack_98 + 1;
              lVar2 = CONCAT71(uStack_af,uStack_b0);
              lVar13 = lVar2;
              if (0xfff < uVar9) {
                uVar9 = uStack_98 + 0x28;
                lVar13 = *(longlong *)(lVar2 + -8);
                if (0x1f < (lVar2 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar13,uVar9);
            }
            uStack_a0 = 0;
            uStack_98 = 0xf;
            uStack_b0 = 0;
            uStack_80 = 0;
            uStack_78 = 0xf;
            uStack_90 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&uStack_90,"value",5);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&uStack_90);
            iVar11 = FUN_143a009a0(uVar7);
            uStack_128 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4);
            if (0xf < uStack_78) {
              uVar9 = uStack_78 + 1;
              lVar2 = CONCAT71(uStack_8f,uStack_90);
              lVar13 = lVar2;
              if (0xfff < uVar9) {
                uVar9 = uStack_78 + 0x28;
                lVar13 = *(longlong *)(lVar2 + -8);
                if (0x1f < (lVar2 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar13,uVar9);
            }
            uStack_80 = 0;
            uStack_78 = 0xf;
            uStack_90 = 0;
            (**(code **)(*plStack_148 + 0x70))(plStack_148,auStack_150);
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            lVar13 = (**(code **)(*param_1 + 0xb8))(param_1,auStack_c0);
            plStack_100 = (longlong *)
                          (**(code **)(**(longlong **)(lVar13 + 8) + 0x2d0))
                                    (*(longlong **)(lVar13 + 8),param_1,lVar8);
            uStack_80 = 0;
            uStack_78 = 0xf;
            uStack_90 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&uStack_90,&DAT_144044650,3);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&uStack_90);
            iVar11 = FUN_143a009a0(uVar7);
            FUN_141514070(auStack_f8,*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4));
            if (0xf < uStack_78) {
              uVar9 = uStack_78 + 1;
              lVar2 = CONCAT71(uStack_8f,uStack_90);
              lVar13 = lVar2;
              if (0xfff < uVar9) {
                uVar9 = uStack_78 + 0x28;
                lVar13 = *(longlong *)(lVar2 + -8);
                if (0x1f < (lVar2 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar13,uVar9);
            }
            uStack_80 = 0;
            uStack_78 = 0xf;
            uStack_90 = 0;
            uStack_a0 = 0;
            uStack_98 = 0xf;
            uStack_b0 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&uStack_b0,"value",5);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&uStack_b0);
            iVar11 = FUN_143a009a0(uVar7);
            uStack_e0 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4);
            if (0xf < uStack_98) {
              uVar9 = uStack_98 + 1;
              lVar13 = CONCAT71(uStack_af,uStack_b0);
              lVar8 = lVar13;
              if (0xfff < uVar9) {
                uVar9 = uStack_98 + 0x28;
                lVar8 = *(longlong *)(lVar13 + -8);
                if (0x1f < (lVar13 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar8,uVar9);
            }
            uStack_a0 = 0;
            uStack_98 = 0xf;
            uStack_b0 = 0;
            (**(code **)(*plStack_100 + 0x70))(plStack_100,auStack_108);
            (**(code **)(*plVar6 + 0x28))(plVar6,auStack_150);
            (**(code **)(*plVar6 + 0x30))(plVar6,auStack_108);
            cVar3 = (**(code **)(*plStack_148 + 0x20))(plStack_148,auStack_150,auStack_108);
            while (cVar3 == '\0') {
              iVar11 = FUN_143a0d230(&plStack_130);
              if (iVar11 != 10) {
                uVar7 = FUN_1439eeb00(auStack_70,3,
                                      "c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
                iVar11 = FUN_143a0d230(&plStack_130);
                puVar1 = (&PTR_s_ERROR_145cbee00)[iVar11];
                uVar7 = FUN_1439eef00(uVar7,"Protocol Buffer map usage error:\n");
                uVar7 = FUN_1439eef00(uVar7,"MapValueRef::GetMessageValue");
                uVar7 = FUN_1439eef00(uVar7," type does not match\n");
                uVar7 = FUN_1439eef00(uVar7,"  Expected : ");
                uVar7 = FUN_1439eef00(uVar7,"message");
                uVar7 = FUN_1439eef00(uVar7,&DAT_143fc48d8);
                uVar7 = FUN_1439eef00(uVar7,"  Actual   : ");
                uVar7 = FUN_1439eef00(uVar7,puVar1);
                FUN_1439eec50(auStack_158,uVar7);
                DsDevice::~DsDevice(auStack_70);
              }
              cVar3 = (**(code **)(*plStack_130 + 0x38))();
              if (cVar3 == '\0') {
                (**(code **)(*plStack_100 + 0x78))(plStack_100,auStack_108);
                FUN_1439fdc40(auStack_f8);
                (**(code **)(*plStack_148 + 0x78))(plStack_148,auStack_150);
                FUN_1439fdc40(auStack_140);
                goto LAB_143a0c4fd;
              }
              (**(code **)(*plStack_148 + 0x88))(plStack_148,auStack_150);
              cVar3 = (**(code **)(*plStack_148 + 0x20))(plStack_148,auStack_150,auStack_108);
            }
            (**(code **)(*plStack_100 + 0x78))(plStack_100,auStack_108);
            FUN_1439fdc40(auStack_f8);
            (**(code **)(*plStack_148 + 0x78))(plStack_148,auStack_150);
            FUN_1439fdc40(auStack_140);
          }
        }
        else {
LAB_143a0c41c:
          if (*(int *)(lVar8 + 0x3c) == 3) {
            iVar11 = (**(code **)(*plVar4 + 0x28))();
            iVar12 = 0;
            if (0 < iVar11) {
              do {
                plVar6 = (longlong *)(**(code **)(*plVar4 + 0x198))(plVar4,param_1,lVar8);
                cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
                if (cVar3 == '\0') goto LAB_143a0c4fd;
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar11);
            }
          }
          else {
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0xd0))(plVar4,param_1,lVar8,0);
            cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
            if (cVar3 == '\0') {
LAB_143a0c4fd:
              uVar5 = 0;
              goto LAB_143a0c508;
            }
          }
        }
      }
      uVar14 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar14;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar14 < (ulonglong)(lStack_118 - lStack_120 >> 3));
  }
  uVar5 = 1;
LAB_143a0c508:
  if (lStack_120 != 0) {
    uVar10 = lStack_110 - lStack_120 & 0xfffffffffffffff8;
    lVar8 = lStack_120;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar8 = *(longlong *)(lStack_120 + -8);
      if (0x1f < (lStack_120 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar8,uVar10);
  }
  return uVar5;
}



// FUNCTION 1439fedc0 FUN_1439fedc0 body=158 status=ok
// SIG undefined FUN_1439fedc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1439fedc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_70 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  uVar1 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x280);
  uVar1 = FUN_1439eef00(uVar1,"Unimplemented Map Reflection API.");
  FUN_1439eec50(local_78,uVar1);
  DsDevice::~DsDevice(local_60);
  FUN_1439fd820(param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1439fee60 FUN_1439fee60 body=158 status=ok
// SIG undefined FUN_1439fee60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1439fee60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_70 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  uVar1 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x287);
  uVar1 = FUN_1439eef00(uVar1,"Unimplemented Map Reflection API.");
  FUN_1439eec50(local_78,uVar1);
  DsDevice::~DsDevice(local_60);
  FUN_1439fd820(param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1439fef00 Connect body=19 status=ok
// SIG undefined Connect(void)

void Metasound::Frontend::FBaseOutputController::Connect(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001439fef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x90))(param_2,param_1);
  return;
}



// FUNCTION 1439fef20 FUN_1439fef20 body=317 status=ok
// SIG undefined FUN_1439fef20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fef20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_90 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_94 = 0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_78);
  lVar1 = *plVar2;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_88);
  if (*plVar2 != lVar1) {
    uVar3 = FUN_1439eeb00(local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x4e);
    local_94 = 1;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_88);
    uVar5 = *(undefined8 *)(*plVar2 + 8);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (from.GetDescriptor()) == (descriptor): ");
    uVar3 = FUN_1439eef00(uVar3,": Tried to merge from a message with a different type.  to: ");
    uVar4 = FUN_1439eecf0(uVar3,uVar4);
    uVar4 = FUN_1439eef00(uVar4,", from: ");
    uVar5 = FUN_1439eecf0(uVar4,uVar5);
    FUN_1439eec50(local_98,uVar5);
    DsDevice::~DsDevice(local_68);
  }
  FUN_143a0c580(param_2,param_1);
  return;
}



// FUNCTION 1439ff060 FUN_1439ff060 body=14 status=ok
// SIG undefined FUN_1439ff060(void)

void FUN_1439ff060(undefined8 param_1,undefined8 param_2)

{
  FUN_143a1bdc0(param_2,param_1);
  return;
}



// FUNCTION 1439ff070 FUN_1439ff070 body=10 status=ok
// SIG undefined FUN_1439ff070(void)

void FUN_1439ff070(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001439ff076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}



// FUNCTION 1439ff080 New body=48 status=ok
// SIG undefined New(void)

void TTypeFactoryTemplate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
     New(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)operator_new(0x20);
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



// FUNCTION 1439ff0b0 FUN_1439ff0b0 body=8 status=ok
// SIG undefined FUN_1439ff0b0(void)

void FUN_1439ff0b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f20a0(param_2);
  return;
}



// FUNCTION 1439ff0c0 FUN_1439ff0c0 body=8 status=ok
// SIG undefined FUN_1439ff0c0(void)

void FUN_1439ff0c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f20b0(param_2);
  return;
}



// FUNCTION 1439ff0d0 FUN_1439ff0d0 body=25 status=ok
// SIG undefined FUN_1439ff0d0(void)

void FUN_1439ff0d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x0001439ff0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x10) + (longlong)iVar1 * 8) + 0x30))();
  return;
}



// FUNCTION 1439ff0f0 FUN_1439ff0f0 body=41 status=ok
// SIG undefined FUN_1439ff0f0(void)

void FUN_1439ff0f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_143a12320(param_2);
  iVar1 = *(int *)(lVar2 + 8);
  *(int *)(lVar2 + 8) = iVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x0001439ff115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1 * 8) + 0x30))();
  return;
}



// FUNCTION 1439ff120 FUN_1439ff120 body=1337 status=ok
// SIG undefined FUN_1439ff120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1439ff120(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (*(int *)(param_2 + 0x3c) != 3) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x329);
    local_54 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: field->is_repeated(): ");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  iVar2 = FUN_143a009a0(param_2);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
  case 1:
  case 8:
    puVar4 = (undefined *)FUN_1439fcb50();
    break;
  case 2:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3028) &&
       (_Init_thread_header(&DAT_146ba3028), DAT_146ba3028 == -1)) {
      _DAT_146ba3020 = google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::vftable;
      _Init_thread_footer(&DAT_146ba3028);
      puVar4 = &DAT_146ba3020;
    }
    else {
      puVar4 = &DAT_146ba3020;
    }
    break;
  case 3:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3018) &&
       (_Init_thread_header(&DAT_146ba3018), DAT_146ba3018 == -1)) {
      _DAT_146ba3010 =
           google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned_int>::vftable;
      _Init_thread_footer(&DAT_146ba3018);
      puVar4 = &DAT_146ba3010;
    }
    else {
      puVar4 = &DAT_146ba3010;
    }
    break;
  case 4:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3038) &&
       (_Init_thread_header(&DAT_146ba3038), DAT_146ba3038 == -1)) {
      _DAT_146ba3030 =
           google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned___int64>::vftable;
      _Init_thread_footer(&DAT_146ba3038);
      puVar4 = &DAT_146ba3030;
    }
    else {
      puVar4 = &DAT_146ba3030;
    }
    break;
  case 5:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3058) &&
       (_Init_thread_header(&DAT_146ba3058), DAT_146ba3058 == -1)) {
      _DAT_146ba3050 = google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::vftable;
      _Init_thread_footer(&DAT_146ba3058);
      puVar4 = &DAT_146ba3050;
    }
    else {
      puVar4 = &DAT_146ba3050;
    }
    break;
  case 6:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3048) &&
       (_Init_thread_header(&DAT_146ba3048), DAT_146ba3048 == -1)) {
      _DAT_146ba3040 = google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::vftable;
      _Init_thread_footer(&DAT_146ba3048);
      puVar4 = &DAT_146ba3040;
    }
    else {
      puVar4 = &DAT_146ba3040;
    }
    break;
  case 7:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3068) &&
       (_Init_thread_header(&DAT_146ba3068), DAT_146ba3068 == -1)) {
      _DAT_146ba3060 = google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::vftable;
      _Init_thread_footer(&DAT_146ba3068);
      puVar4 = &DAT_146ba3060;
    }
    else {
      puVar4 = &DAT_146ba3060;
    }
    break;
  case 9:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ba3078) &&
       (_Init_thread_header(&DAT_146ba3078), DAT_146ba3078 == -1)) {
      _DAT_146ba3070 = google::protobuf::internal::RepeatedPtrFieldStringAccessor::vftable;
      _Init_thread_footer(&DAT_146ba3078);
      puVar4 = &DAT_146ba3070;
    }
    else {
      puVar4 = &DAT_146ba3070;
    }
    break;
  case 10:
    iVar2 = FUN_143a009a0(param_2);
    if ((iVar2 == 0xb) && (cVar1 = FUN_143a4f8d0(param_2), cVar1 != '\0')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146ba3088) &&
         (_Init_thread_header(&DAT_146ba3088), DAT_146ba3088 == -1)) {
        _DAT_146ba3080 = google::protobuf::internal::MapFieldAccessor::vftable;
        atexit((_func_5014 *)&LAB_143ec5e30);
        _Init_thread_footer(&DAT_146ba3088);
        puVar4 = &DAT_146ba3080;
      }
      else {
        puVar4 = &DAT_146ba3080;
      }
    }
    else if ((*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
              DAT_146ba3098) && (_Init_thread_header(&DAT_146ba3098), DAT_146ba3098 == -1)) {
      _DAT_146ba3090 = google::protobuf::internal::RepeatedPtrFieldMessageAccessor::vftable;
      _Init_thread_footer(&DAT_146ba3098);
      puVar4 = &DAT_146ba3090;
    }
    else {
      puVar4 = &DAT_146ba3090;
    }
    break;
  default:
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x345);
    uVar3 = FUN_1439eef00(uVar3,"Should not reach here.");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}



// FUNCTION 1439ff690 FUN_1439ff690 body=116 status=ok
// SIG undefined FUN_1439ff690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439ff690(void)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x31b);
  uVar1 = FUN_1439eef00(uVar1,"Not implemented.");
  FUN_1439eec50(local_58,uVar1);
  DsDevice::~DsDevice(local_48);
  return 0;
}



// FUNCTION 1439ff710 FUN_1439ff710 body=91 status=ok
// SIG undefined FUN_1439ff710(void)

void FUN_1439ff710(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x78))();
  if (piVar2 == (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x70))();
    FUN_143a1df60(param_1,uVar1,param_2);
    return;
  }
  FUN_1439f4800(param_1,*(longlong *)(piVar2 + 2) + 0x18,*piVar2 + -1,param_2);
  return;
}



// FUNCTION 1439ff770 FUN_1439ff770 body=58 status=ok
// SIG undefined FUN_1439ff770(void)

void FUN_1439ff770(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  FUN_1439f23e0(param_2,param_3,local_res8);
  return;
}



// FUNCTION 1439ff7b0 FUN_1439ff7b0 body=60 status=ok
// SIG undefined FUN_1439ff7b0(void)

void FUN_1439ff7b0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  FUN_1439f23e0(param_2,param_3,local_res8);
  return;
}



// FUNCTION 1439ff7f0 FUN_1439ff7f0 body=60 status=ok
// SIG undefined FUN_1439ff7f0(void)

void FUN_1439ff7f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  local_res8 = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  FUN_1439f23f0(param_2,param_3,&local_res8);
  return;
}



// FUNCTION 1439ff830 FUN_1439ff830 body=59 status=ok
// SIG undefined FUN_1439ff830(void)

void FUN_1439ff830(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  local_res8 = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  FUN_1439f23f0(param_2,param_3,&local_res8);
  return;
}



// FUNCTION 1439ff870 FUN_1439ff870 body=58 status=ok
// SIG undefined FUN_1439ff870(void)

void FUN_1439ff870(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  
  local_res8[0] = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  FUN_1439f2400(param_2,param_3,local_res8);
  return;
}



// FUNCTION 1439ff8b0 FUN_1439ff8b0 body=72 status=ok
// SIG undefined FUN_1439ff8b0(void)

void FUN_1439ff8b0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_1439f1d30(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001439ff8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x88))(param_1,param_4,uVar2);
  return;
}



// FUNCTION 1439ff900 FUN_1439ff900 body=37 status=ok
// SIG undefined FUN_1439ff900(void)

void FUN_1439ff900(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x88))
            (param_1,param_4,
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8 + (longlong)param_3 * 8));
  return;
}



// FUNCTION 1439ff930 FUN_1439ff930 body=56 status=ok
// SIG undefined FUN_1439ff930(void)

void FUN_1439ff930(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_143a12320(param_2);
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)param_3 * 8);
  (**(code **)(*plVar1 + 0x88))(plVar1,param_4);
  return;
}



// FUNCTION 1439ff970 FUN_1439ff970 body=195 status=ok
// SIG undefined FUN_1439ff970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ff970(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_60 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message.cc",0x231);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_58);
  uVar3 = *(undefined8 *)(*plVar2 + 8);
  uVar1 = FUN_1439eef00(uVar1,"Message class \"");
  uVar3 = FUN_1439eecf0(uVar1,uVar3);
  uVar3 = FUN_1439eef00(uVar3,
                        "\" implements neither SetCachedSize() nor ByteSize().  Must implement one or the other."
                       );
  FUN_1439eec50(local_68,uVar3);
  DsDevice::~DsDevice(local_48);
  return;
}



// FUNCTION 1439ffa40 FUN_1439ffa40 body=8 status=ok
// SIG undefined FUN_1439ffa40(void)

void FUN_1439ffa40(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f2ae0(param_2);
  return;
}



// FUNCTION 1439ffa50 FUN_1439ffa50 body=8 status=ok
// SIG undefined FUN_1439ffa50(void)

void FUN_1439ffa50(undefined8 param_1,undefined8 param_2)

{
  IStreamingManager::GetNumWantingResources(param_2);
  return;
}



// FUNCTION 1439ffa60 FUN_1439ffa60 body=4 status=ok
// SIG undefined FUN_1439ffa60(void)

undefined4 FUN_1439ffa60(undefined8 param_1,longlong param_2)

{
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 1439ffa70 FUN_1439ffa70 body=20 status=ok
// SIG undefined FUN_1439ffa70(void)

undefined4 FUN_1439ffa70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143a10990(param_2);
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 1439ffa90 FUN_1439ffa90 body=42 status=ok
// SIG undefined FUN_1439ffa90(void)

void FUN_1439ffa90(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_18 [16];
  
  lVar1 = (**(code **)(*param_1 + 0xb8))(param_1,local_18);
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))(*(longlong **)(lVar1 + 8),param_1);
  return;
}



// FUNCTION 1439ffac0 FUN_1439ffac0 body=177 status=ok
// SIG undefined FUN_1439ffac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ffac0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (param_1 != param_3) {
    uVar1 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_internal.h",0x117);
    local_54 = 1;
    uVar1 = FUN_1439eef00(uVar1,"CHECK failed: this == other_mutator: ");
    FUN_1439eec50(local_58,uVar1);
    DsDevice::~DsDevice(local_48);
  }
  FUN_1439f24e0(param_2,param_4);
  return;
}



// FUNCTION 1439ffb80 FUN_1439ffb80 body=177 status=ok
// SIG undefined FUN_1439ffb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ffb80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (param_1 != param_3) {
    uVar1 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_internal.h",0x117);
    local_54 = 1;
    uVar1 = FUN_1439eef00(uVar1,"CHECK failed: this == other_mutator: ");
    FUN_1439eec50(local_58,uVar1);
    DsDevice::~DsDevice(local_48);
  }
  FUN_1439f2650(param_2,param_4);
  return;
}



// FUNCTION 1439ffc40 FUN_1439ffc40 body=177 status=ok
// SIG undefined FUN_1439ffc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ffc40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (param_1 != param_3) {
    uVar1 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_internal.h",0x117);
    local_54 = 1;
    uVar1 = FUN_1439eef00(uVar1,"CHECK failed: this == other_mutator: ");
    FUN_1439eec50(local_58,uVar1);
    DsDevice::~DsDevice(local_48);
  }
  FUN_1439f27c0(param_2,param_4);
  return;
}



// FUNCTION 1439ffd00 FUN_1439ffd00 body=257 status=ok
// SIG undefined FUN_1439ffd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ffd00(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (param_1 != param_3) {
    uVar3 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_internal.h",0xeb);
    local_54 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: this == other_mutator: ");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  plVar4 = (longlong *)FUN_143a12320(param_4);
  plVar5 = (longlong *)FUN_143a12320(param_2);
  if (plVar5 != plVar4) {
    if (*plVar4 == *plVar5) {
      lVar2 = plVar5[2];
      plVar5[2] = plVar4[2];
      plVar4[2] = lVar2;
      lVar2 = plVar5[1];
      *(int *)(plVar5 + 1) = (int)plVar4[1];
      *(int *)(plVar4 + 1) = (int)lVar2;
      uVar1 = *(undefined4 *)((longlong)plVar5 + 0xc);
      *(undefined4 *)((longlong)plVar5 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      *(undefined4 *)((longlong)plVar4 + 0xc) = uVar1;
    }
    else {
      FUN_1439fcc90(plVar5,plVar4);
    }
  }
  return;
}



// FUNCTION 1439ffe10 FUN_1439ffe10 body=233 status=ok
// SIG undefined FUN_1439ffe10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ffe10(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (param_1 != param_3) {
    uVar3 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_internal.h",0x157);
    local_54 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: this == other_mutator: ");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  if (param_2 != param_4) {
    if (*param_4 == *param_2) {
      lVar2 = param_2[2];
      param_2[2] = param_4[2];
      param_4[2] = lVar2;
      lVar2 = param_2[1];
      *(int *)(param_2 + 1) = (int)param_4[1];
      *(int *)(param_4 + 1) = (int)lVar2;
      uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)((longlong)param_4 + 0xc) = uVar1;
    }
    else {
      FUN_1439fcc90(param_2,param_4);
    }
  }
  return;
}



// FUNCTION 1439fff00 FUN_1439fff00 body=631 status=ok
// SIG undefined FUN_1439fff00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fff00(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98 [3];
  ulonglong local_80;
  longlong local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_c0 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_1 == param_3) {
    FUN_1439f2920(param_2,param_4);
  }
  else {
    FTextSnapshot::FTextSnapshot(local_d8);
    FUN_1439f2920(local_d8,param_2);
    iVar2 = (**(code **)(*param_3 + 8))(param_3,param_4);
    iVar6 = 0;
    iVar7 = iVar6;
    if (0 < iVar2) {
      do {
        local_a8 = 0;
        local_a0 = 0xf;
        local_b8 = 0;
        uVar3 = (**(code **)(*param_3 + 0x10))(param_3,param_4,iVar7,&local_b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98,uVar3);
        if (0xf < local_a0) {
          uVar5 = local_a0 + 1;
          lVar1 = CONCAT71(uStack_b7,local_b8);
          lVar4 = lVar1;
          if (0xfff < uVar5) {
            uVar5 = local_a0 + 0x28;
            lVar4 = *(longlong *)(lVar1 + -8);
            if (0x1f < (lVar1 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar5);
        }
        local_a8 = 0;
        local_a0 = 0xf;
        local_b8 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78,local_98);
        (**(code **)(*param_1 + 0x28))(param_1,param_2,local_78);
        if (0xf < local_60) {
          uVar5 = local_60 + 1;
          lVar4 = local_78[0];
          if (0xfff < uVar5) {
            uVar5 = local_60 + 0x28;
            lVar4 = *(longlong *)(local_78[0] + -8);
            if (0x1f < (local_78[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar5);
        }
        if (0xf < local_80) {
          uVar5 = local_80 + 1;
          lVar4 = local_98[0];
          if (0xfff < uVar5) {
            uVar5 = local_80 + 0x28;
            lVar4 = *(longlong *)(local_98[0] + -8);
            if (0x1f < (local_98[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    iVar7 = IStreamingManager::GetNumWantingResources(param_2);
    (**(code **)(*param_3 + 0x18))(param_3,param_4);
    if (0 < iVar7) {
      do {
        uVar3 = FUN_1439f1d30(local_d8,iVar6);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98,uVar3);
        (**(code **)(*param_3 + 0x28))(param_3,param_4,local_98);
        if (0xf < local_80) {
          uVar5 = local_80 + 1;
          lVar4 = local_98[0];
          if (0xfff < uVar5) {
            uVar5 = local_80 + 0x28;
            lVar4 = *(longlong *)(local_98[0] + -8);
            if (0x1f < (local_98[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
    thunk_FUN_1439f1360(local_d8);
  }
  return;
}



// FUNCTION 143a00180 FUN_143a00180 body=16 status=ok
// SIG undefined FUN_143a00180(void)

void FUN_143a00180(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1439f2970(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a00190 FUN_143a00190 body=16 status=ok
// SIG undefined FUN_143a00190(void)

void FUN_143a00190(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1439f2990(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a001a0 FUN_143a001a0 body=16 status=ok
// SIG undefined FUN_143a001a0(void)

void FUN_143a001a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1439f29b0(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a001b0 FUN_143a001b0 body=16 status=ok
// SIG undefined FUN_143a001b0(void)

void FUN_143a001b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1439f29d0(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a001c0 FUN_143a001c0 body=16 status=ok
// SIG undefined FUN_143a001c0(void)

void FUN_143a001c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1439f29f0(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a001d0 FUN_143a001d0 body=16 status=ok
// SIG undefined FUN_143a001d0(void)

void FUN_143a001d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1439f2a10(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a001e0 FUN_143a001e0 body=36 status=ok
// SIG undefined FUN_143a001e0(void)

void FUN_143a001e0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar1 = lVar2 + (longlong)param_4 * 8;
  uVar3 = *(undefined8 *)(lVar2 + 8 + (longlong)param_3 * 8);
  *(undefined8 *)(lVar2 + (longlong)param_3 * 8 + 8) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 8) = uVar3;
  return;
}



// FUNCTION 143a00210 FUN_143a00210 body=66 status=ok
// SIG undefined FUN_143a00210(void)

void FUN_143a00210(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_143a12320(param_2);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + 8 + (longlong)param_3 * 8);
  *(undefined8 *)(lVar2 + 8 + (longlong)param_3 * 8) =
       *(undefined8 *)(lVar2 + 8 + (longlong)param_4 * 8);
  *(undefined8 *)(lVar2 + (longlong)param_4 * 8 + 8) = uVar1;
  return;
}



// FUNCTION 143a00260 _Buynode0 body=74 status=ok
// SIG undefined _Buynode0(void)

void std::
     _List_alloc<std::_List_base_types<std::pair<hx::Object_*_const,int>,std::allocator<std::pair<hx::Object_*_const,int>_>_>_>
     ::_Buynode0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x20);
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (longlong)param_2;
  plVar1[1] = (longlong)param_3;
  return;
}



// FUNCTION 143a002b0 _Check_size body=192 status=ok
// SIG undefined _Check_size(void)

void std::
     _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
     ::_Check_size(float *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_18 [16];
  
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = (float)*(longlong *)(param_1 + 4);
  if (*(longlong *)(param_1 + 4) < 0) {
    fVar5 = fVar5 + 1.8446744e+19;
  }
  fVar6 = (float)(longlong)uVar4;
  if ((longlong)uVar4 < 0) {
    fVar6 = fVar6 + 1.8446744e+19;
  }
  fVar5 = fVar5 / fVar6;
  if (*param_1 <= fVar5 && fVar5 != *param_1) {
    if (uVar4 < 0x200) {
      uVar4 = uVar4 * 8;
    }
    else if (uVar4 < 0xfffffffffffffff) {
      uVar4 = uVar4 * 2;
    }
    _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
    ::_Init(fVar5,uVar4);
    plVar1 = *(longlong **)(param_1 + 2);
    if ((longlong *)*plVar1 != plVar1) {
      lVar2 = plVar1[1];
      do {
        lVar3 = **(longlong **)(param_1 + 2);
        FUN_1439fcf10(param_1,local_18,lVar3 + 0x10,lVar3);
      } while (lVar3 != lVar2);
    }
  }
  return;
}



// FUNCTION 143a00370 _Check_size body=192 status=ok
// SIG undefined _Check_size(void)

void std::
     _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
     ::_Check_size(float *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_18 [16];
  
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = (float)*(longlong *)(param_1 + 4);
  if (*(longlong *)(param_1 + 4) < 0) {
    fVar5 = fVar5 + 1.8446744e+19;
  }
  fVar6 = (float)(longlong)uVar4;
  if ((longlong)uVar4 < 0) {
    fVar6 = fVar6 + 1.8446744e+19;
  }
  fVar5 = fVar5 / fVar6;
  if (*param_1 <= fVar5 && fVar5 != *param_1) {
    if (uVar4 < 0x200) {
      uVar4 = uVar4 * 8;
    }
    else if (uVar4 < 0xfffffffffffffff) {
      uVar4 = uVar4 * 2;
    }
    _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
    ::_Init(fVar5,uVar4);
    plVar1 = *(longlong **)(param_1 + 2);
    if ((longlong *)*plVar1 != plVar1) {
      lVar2 = plVar1[1];
      do {
        lVar3 = **(longlong **)(param_1 + 2);
        FUN_1439fd0a0(param_1,local_18,lVar3 + 0x10,lVar3);
      } while (lVar3 != lVar2);
    }
  }
  return;
}



// FUNCTION 143a00430 FUN_143a00430 body=41 status=ok
// SIG undefined FUN_143a00430(void)

void FUN_143a00430(longlong param_1,longlong *param_2)

{
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_2,0x20);
  return;
}



// FUNCTION 143a00460 _Init body=375 status=ok
// SIG undefined _Init(void)

void std::
     _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
     ::_Init(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  uVar6 = param_2 * 2;
  if ((ulonglong)(lVar7 - *(longlong *)(param_1 + 0x18) >> 3) < uVar6) {
    if (0x1fffffffffffffff < uVar6) goto LAB_143a005d2;
    vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>,std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>_>
    ::_Reallocate_exactly(param_1 + 0x18,uVar6);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar8 = lVar7 - lVar1 >> 3;
  uVar4 = *(longlong *)(param_1 + 0x20) - lVar1 >> 3;
  local_res8 = uVar2;
  if (uVar8 < uVar6) {
    if (0x1fffffffffffffff < uVar6) {
LAB_143a005d2:
                    /* WARNING: Subroutine does not return */
      vector<int,std::allocator<int>_>::_Xlength();
    }
    uVar4 = uVar6;
    if ((uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) &&
       (uVar4 = (uVar8 >> 1) + uVar8, uVar4 < uVar6)) {
      uVar4 = uVar6;
    }
    if (lVar1 != 0) {
      allocator<double>::deallocate(param_1 + 0x18,lVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (uVar4 != 0) {
      if (0x1fffffffffffffff < uVar4) goto LAB_143a005d2;
      uVar3 = allocator<userCommands::BaseCommand_*>::allocate(param_1 + 0x18,uVar4);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x18) + uVar4 * 8;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  else if (uVar4 < uVar6) {
    _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>
              (lVar1,*(longlong *)(param_1 + 0x20),&local_res8);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    for (lVar7 = uVar6 - uVar4; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar1 + param_2 * 0x10);
    _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>
              (lVar1,puVar5,&local_res8);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  *(longlong *)(param_1 + 0x30) = param_2 + -1;
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 143a005e0 OverrideGameModeClass body=7 status=ok
// SIG undefined OverrideGameModeClass(void)

undefined8 *
UGameInstance::OverrideGameModeClass(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 143a005f0 _Reallocate_exactly body=227 status=ok
// SIG undefined _Reallocate_exactly(void)

void std::
     vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>,std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>_>
     ::_Reallocate_exactly(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = allocator<userCommands::BaseCommand_*>::allocate();
  puVar7 = (undefined8 *)*param_1;
  uVar9 = 0;
  uVar10 = (param_1[1] - (longlong)puVar7) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar7) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    lVar5 = uVar4 - (longlong)puVar7;
    do {
      *(undefined8 *)(lVar5 + (longlong)puVar7) = *puVar7;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar8 = param_1[2] - uVar3 & 0xfffffffffffffff8;
    uVar6 = uVar3;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      uVar6 = *(ulonglong *)(uVar3 - 8);
      uVar9 = uVar6;
      if (0x1f < (uVar3 - uVar6) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar6,uVar8,uVar9,uVar10,uVar11);
  }
  *param_1 = uVar4;
  param_1[1] = uVar4 + ((longlong)(uVar1 - uVar2) >> 3) * 8;
  param_1[2] = uVar4 + param_2 * 8;
  return;
}



// FUNCTION 143a006e0 FUN_143a006e0 body=10 status=ok
// SIG undefined FUN_143a006e0(void)

void FUN_143a006e0(void *param_1)

{
  code *pcVar1;
  
  _guard_xfg_dispatch_icall_nop(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 143a006f0 allocate body=116 status=ok
// SIG undefined allocate(void)

void std::allocator<userCommands::BaseCommand_*>::allocate(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 8;
  if (param_2 < 0x2000000000000000) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        operator_new(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar2 = operator_new(uVar3);
  if (lVar2 != 0) {
    *(longlong *)((lVar2 + 0x27U & 0xffffffffffffffe0) - 8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 143a00770 deallocate body=65 status=ok
// SIG undefined deallocate(void)

void std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
     deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x20;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a007c0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

void std::allocator<double>::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a00810 thunk_FUN_143a00840 body=5 status=ok
// SIG undefined thunk_FUN_143a00840(void)

undefined8 * thunk_FUN_143a00840(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 in_R9;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ba2ff8) {
    _Init_thread_header(&DAT_146ba2ff8);
    if (DAT_146ba2ff8 == -1) {
      puVar3 = (undefined8 *)operator_new(0xd8);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        *puVar3 = google::protobuf::_anon_316021D9::GeneratedMessageFactory::vftable;
        puVar1 = puVar3 + 1;
        *(undefined4 *)puVar1 = 0;
        puVar2 = puVar3 + 2;
        *puVar2 = 0;
        puVar3[3] = 0;
        uVar4 = std::
                _List_alloc<std::_List_base_types<std::pair<hx::Object_*_const,int>,std::allocator<std::pair<hx::Object_*_const,int>_>_>_>
                ::_Buynode0(puVar2,0,0,in_R9,uVar4);
        *puVar2 = uVar4;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *(undefined4 *)puVar1 = 0x3f800000;
        std::
        _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
        ::_Init(puVar1,8);
        _guard_xfg_dispatch_icall_nop(puVar3 + 9,2);
        puVar2 = puVar3 + 0x13;
        *(undefined4 *)puVar2 = 0;
        puVar1 = puVar3 + 0x14;
        *puVar1 = 0;
        puVar3[0x15] = 0;
        uVar4 = std::
                _List_alloc<std::_List_base_types<std::pair<hx::Object_*_const,int>,std::allocator<std::pair<hx::Object_*_const,int>_>_>_>
                ::_Buynode0(puVar1,0,0);
        *puVar1 = uVar4;
        puVar3[0x16] = 0;
        puVar3[0x17] = 0;
        puVar3[0x18] = 0;
        *(undefined4 *)puVar2 = 0x3f800000;
        std::
        _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
        ::_Init(puVar2,8);
      }
      FUN_1439ef0c0(&LAB_1439f0370,puVar3);
      DAT_146ba2ff0 = puVar3;
      _Init_thread_footer(&DAT_146ba2ff8);
    }
  }
  return DAT_146ba2ff0;
}



// FUNCTION 143a00820 FUN_143a00820 body=24 status=ok
// SIG undefined FUN_143a00820(void)

void FUN_143a00820(void)

{
  code *pcVar1;
  
  FUN_143a006e0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 143a00840 FUN_143a00840 body=349 status=ok
// SIG undefined FUN_143a00840(void)

undefined8 * FUN_143a00840(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 in_R9;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ba2ff8) {
    _Init_thread_header(&DAT_146ba2ff8);
    if (DAT_146ba2ff8 == -1) {
      puVar3 = (undefined8 *)operator_new(0xd8);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        *puVar3 = google::protobuf::_anon_316021D9::GeneratedMessageFactory::vftable;
        puVar1 = puVar3 + 1;
        *(undefined4 *)puVar1 = 0;
        puVar2 = puVar3 + 2;
        *puVar2 = 0;
        puVar3[3] = 0;
        uVar4 = std::
                _List_alloc<std::_List_base_types<std::pair<hx::Object_*_const,int>,std::allocator<std::pair<hx::Object_*_const,int>_>_>_>
                ::_Buynode0(puVar2,0,0,in_R9,uVar4);
        *puVar2 = uVar4;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *(undefined4 *)puVar1 = 0x3f800000;
        std::
        _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
        ::_Init(puVar1,8);
        _guard_xfg_dispatch_icall_nop(puVar3 + 9,2);
        puVar2 = puVar3 + 0x13;
        *(undefined4 *)puVar2 = 0;
        puVar1 = puVar3 + 0x14;
        *puVar1 = 0;
        puVar3[0x15] = 0;
        uVar4 = std::
                _List_alloc<std::_List_base_types<std::pair<hx::Object_*_const,int>,std::allocator<std::pair<hx::Object_*_const,int>_>_>_>
                ::_Buynode0(puVar1,0,0);
        *puVar1 = uVar4;
        puVar3[0x16] = 0;
        puVar3[0x17] = 0;
        puVar3[0x18] = 0;
        *(undefined4 *)puVar2 = 0x3f800000;
        std::
        _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
        ::_Init(puVar2,8);
      }
      FUN_1439ef0c0(&LAB_1439f0370,puVar3);
      DAT_146ba2ff0 = puVar3;
      _Init_thread_footer(&DAT_146ba2ff8);
    }
  }
  return DAT_146ba2ff0;
}



// FUNCTION 143a009a0 FUN_143a009a0 body=182 status=ok
// SIG undefined FUN_143a009a0(void)

undefined4 FUN_143a009a0(longlong param_1)

{
  once_flag *poVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 *local_res10 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  longlong *local_18;
  undefined1 **local_10;
  
  poVar1 = *(once_flag **)(param_1 + 0x30);
  if (poVar1 != (once_flag *)0x0) {
    local_res10[0] = &LAB_143a48e80;
    local_res8 = param_1;
    _guard_xfg_dispatch_icall_nop(local_40);
    local_20 = local_40;
    local_18 = &local_res8;
    local_10 = local_res10;
    iVar3 = std::_guard_xfg_dispatch_icall_nop(poVar1,FUN_1439fce30,&local_20);
    if (iVar3 == 0) {
      bVar2 = _guard_xfg_dispatch_icall_nop(local_40);
      if (bVar2) {
        uVar4 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
        FUN_143a00820(uVar4);
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    _guard_xfg_dispatch_icall_nop(local_40);
  }
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 143a00a70 FUN_143a00a70 body=103 status=ok
// SIG undefined FUN_143a00a70(void)

void FUN_143a00a70(longlong param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined1 *)operator_new(0x20);
    if (puVar1 == (undefined1 *)0x0) {
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,&std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                             RTTI_Type_Descriptor,0x20);
    }
    puVar1 = (undefined1 *)
             FUN_1439efdc0(param_1,0x20,
                           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                           _Tidy_deallocate);
  }
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0xf;
  *puVar1 = 0;
  return;
}



// FUNCTION 143a00ae0 FUN_143a00ae0 body=112 status=ok
// SIG undefined FUN_143a00ae0(void)

longlong FUN_143a00ae0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_3 + 0x58);
  if ((lVar2 != 0) &&
     (*(int *)((ulonglong)
               (uint)(*(int *)(param_1 + 0x34) +
                     (int)((lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30)) / 0x30) * 4)
              + param_2) != *(int *)(param_3 + 0x44))) {
    lVar2 = FUN_143a04610(param_1 + 0x10,param_3);
    return lVar2;
  }
  uVar1 = FUN_143a046b0(param_1 + 0x10,param_3);
  return (ulonglong)uVar1 + param_2;
}



// FUNCTION 143a00b50 FUN_143a00b50 body=196 status=ok
// SIG undefined FUN_143a00b50(void)

void FUN_143a00b50(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      FUN_1439f0ce0(*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a00a70(uVar1);
      FUN_1439f0ce0(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a00c20 FUN_143a00c20 body=124 status=ok
// SIG undefined FUN_143a00c20(void)

longlong FUN_143a00c20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x58);
  if (lVar1 == 0) {
    FUN_143a076c0(param_1);
  }
  else {
    *(undefined4 *)
     ((ulonglong)
      (uint)(*(int *)(param_1 + 0x34) +
            (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4) + param_2
     ) = *(undefined4 *)(param_3 + 0x44);
  }
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  return (ulonglong)uVar2 + param_2;
}



// FUNCTION 143a00ca0 FUN_143a00ca0 body=113 status=ok
// SIG undefined FUN_143a00ca0(void)

undefined8 FUN_143a00ca0(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1[1];
  piVar1 = (int *)param_1[2];
  *(int *)(param_1 + 1) = (int)lVar3 + -1;
  uVar2 = *(undefined8 *)(piVar1 + (longlong)(int)lVar3 * 2);
  *piVar1 = *piVar1 + -1;
  piVar1 = (int *)param_1[2];
  if ((int)param_1[1] < *piVar1) {
    *(undefined8 *)(piVar1 + (longlong)(int)param_1[1] * 2 + 2) =
         *(undefined8 *)(piVar1 + (longlong)*piVar1 * 2 + 2);
  }
  if (*param_1 == 0) {
    return uVar2;
  }
  uVar4 = FOutputDevice::Serialize(uVar2,0);
  Metasound::Frontend::FBaseOutputController::Connect(uVar2,uVar4);
  return uVar4;
}



// FUNCTION 143a00d20 FUN_143a00d20 body=225 status=ok
// SIG undefined FUN_143a00d20(void)

void FUN_143a00d20(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x58);
  if ((lVar1 != 0) &&
     (*(int *)((ulonglong)
               (uint)(*(int *)(param_1 + 0x34) +
                     (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4)
              + param_2) != *(int *)(param_3 + 0x44))) {
    FUN_143a03d30(param_1,param_2);
  }
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  *(undefined4 *)((ulonglong)uVar2 + param_2) = *param_4;
  lVar1 = *(longlong *)(param_3 + 0x58);
  if (lVar1 == 0) {
    FUN_143a076c0(param_1,param_2,param_3);
  }
  else {
    *(undefined4 *)
     ((ulonglong)
      (uint)(*(int *)(param_1 + 0x34) +
            (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4) + param_2
     ) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 143a00e10 FUN_143a00e10 body=226 status=ok
// SIG undefined FUN_143a00e10(void)

void FUN_143a00e10(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x58);
  if ((lVar1 != 0) &&
     (*(int *)((ulonglong)
               (uint)(*(int *)(param_1 + 0x34) +
                     (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4)
              + param_2) != *(int *)(param_3 + 0x44))) {
    FUN_143a03d30(param_1,param_2);
  }
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  *(undefined8 *)((ulonglong)uVar2 + param_2) = *param_4;
  lVar1 = *(longlong *)(param_3 + 0x58);
  if (lVar1 == 0) {
    FUN_143a076c0(param_1,param_2,param_3);
  }
  else {
    *(undefined4 *)
     ((ulonglong)
      (uint)(*(int *)(param_1 + 0x34) +
            (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4) + param_2
     ) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 143a00f00 FUN_143a00f00 body=226 status=ok
// SIG undefined FUN_143a00f00(void)

void FUN_143a00f00(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x58);
  if ((lVar1 != 0) &&
     (*(int *)((ulonglong)
               (uint)(*(int *)(param_1 + 0x34) +
                     (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4)
              + param_2) != *(int *)(param_3 + 0x44))) {
    FUN_143a03d30(param_1,param_2);
  }
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  *(undefined1 *)((ulonglong)uVar2 + param_2) = *param_4;
  lVar1 = *(longlong *)(param_3 + 0x58);
  if (lVar1 == 0) {
    FUN_143a076c0(param_1,param_2,param_3);
  }
  else {
    *(undefined4 *)
     ((ulonglong)
      (uint)(*(int *)(param_1 + 0x34) +
            (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4) + param_2
     ) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 143a00ff0 FUN_143a00ff0 body=556 status=ok
// SIG undefined FUN_143a00ff0(void)

void FUN_143a00ff0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_48;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = *param_2;
  lVar12 = 0;
  local_40 = 0;
  local_38 = (int *)0x0;
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar6 = FUN_1439f1d40(&local_48,iVar8);
    FUN_143a00b50(&local_48,uVar6,lVar2 + 8,iVar8,*local_38 - (int)local_40);
    iVar8 = (int)local_40 + iVar8;
    local_40 = CONCAT44(local_40._4_4_,iVar8);
    if (*local_38 < iVar8) {
      *local_38 = iVar8;
    }
  }
  iVar8 = *(int *)(param_1 + 8);
  if (0 < iVar8) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar9 = lVar12;
    do {
      puVar7 = *(undefined8 **)(lVar2 + 8 + lVar9 * 8);
      puVar7[2] = 0;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined1 *)puVar7 = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar8 = (int)param_2[1];
  if (iVar8 != 0) {
    lVar2 = param_2[2];
    uVar6 = FUN_1439f1d40(param_1,iVar8);
    FUN_143a00b50(param_1,uVar6,lVar2 + 8,iVar8,**(int **)(param_1 + 0x10) - *(int *)(param_1 + 8));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar8;
    if (**(int **)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
      **(int **)(param_1 + 0x10) = *(int *)(param_1 + 8);
    }
  }
  lVar2 = param_2[1];
  if (0 < (int)lVar2) {
    lVar9 = param_2[2];
    lVar10 = lVar12;
    do {
      puVar7 = *(undefined8 **)(lVar9 + 8 + lVar10 * 8);
      puVar7[2] = 0;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined1 *)puVar7 = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)lVar2);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  piVar3 = (int *)param_2[2];
  param_2[2] = (longlong)local_38;
  lVar2 = param_2[1];
  *(int *)(param_2 + 1) = (int)local_40;
  iVar8 = *(int *)((longlong)param_2 + 0xc);
  *(int *)((longlong)param_2 + 0xc) = local_40._4_4_;
  local_40 = CONCAT44(iVar8,(int)lVar2);
  if ((piVar3 != (int *)0x0) && (local_48 == 0)) {
    iVar1 = *piVar3;
    local_38 = piVar3;
    if (0 < (longlong)iVar1) {
      do {
        plVar4 = *(longlong **)(piVar3 + lVar12 * 2 + 2);
        if (plVar4 != (longlong *)0x0) {
          uVar5 = plVar4[3];
          if (0xf < uVar5) {
            uVar11 = uVar5 + 1;
            lVar2 = *plVar4;
            lVar9 = lVar2;
            if (0xfff < uVar11) {
              uVar11 = uVar5 + 0x28;
              lVar9 = *(longlong *)(lVar2 + -8);
              if (0x1f < (lVar2 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar9,uVar11);
          }
          plVar4[2] = 0;
          plVar4[3] = 0xf;
          *(undefined1 *)plVar4 = 0;
          FMemory::operator_delete(plVar4,0x20);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar1);
      iVar8 = local_40._4_4_;
    }
    FMemory::operator_delete(local_38,(longlong)iVar8 * 8 + 8);
  }
  return;
}



// FUNCTION 143a01220 FUN_143a01220 body=141 status=ok
// SIG undefined FUN_143a01220(void)

void FUN_143a01220(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
LAB_143a01282:
    FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  }
  else {
    iVar1 = (int)param_1[1];
    if (iVar1 == *(int *)((longlong)param_1 + 0xc)) goto LAB_143a01282;
    iVar2 = *piVar3;
    if (iVar2 == *(int *)((longlong)param_1 + 0xc)) {
      if ((*param_1 == 0) &&
         (puVar4 = *(undefined8 **)(piVar3 + (longlong)iVar1 * 2 + 2), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)(puVar4,1);
      }
      goto LAB_143a01292;
    }
    if (iVar2 <= iVar1) {
      *piVar3 = iVar2 + 1;
      goto LAB_143a01292;
    }
    *(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 2) =
         *(undefined8 *)(piVar3 + (longlong)iVar1 * 2 + 2);
  }
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
LAB_143a01292:
  *(undefined8 *)(param_1[2] + 8 + (longlong)(int)param_1[1] * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 143a012b0 FUN_143a012b0 body=49 status=ok
// SIG undefined FUN_143a012b0(void)

void FUN_143a012b0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143a0abb0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = *param_2;
  return;
}



// FUNCTION 143a012f0 FUN_143a012f0 body=42 status=ok
// SIG undefined FUN_143a012f0(void)

undefined8 FUN_143a012f0(undefined8 param_1,longlong param_2)

{
  (**(code **)(param_2 + 0x10))(**(undefined8 **)(param_2 + 8));
  return 1;
}



// FUNCTION 143a01330 _Emplace_reallocate<userCommands::BaseCommand_*_const_&> body=261 status=ok
// SIG undefined _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(void)

longlong std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
         _Emplace_reallocate<userCommands::BaseCommand_*_const_&>
                   (longlong *param_1,void *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar5;
  size_t _Size;
  longlong lVar6;
  
  lVar2 = *param_1;
  lVar6 = (longlong)param_2 - lVar2 >> 3;
  lVar3 = param_1[1] - lVar2 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar1 = lVar3 + 1;
  uVar4 = param_1[2] - lVar2 >> 3;
  uVar5 = uVar1;
  if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) && (uVar5 = (uVar4 >> 1) + uVar4, uVar5 < uVar1))
  {
    uVar5 = uVar1;
  }
  _Dst = (void *)allocator<userCommands::BaseCommand_*>::allocate
                           (param_1,uVar5,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)((longlong)_Dst + lVar6 * 8) = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = (void *)((longlong)_Dst + (lVar6 + 1) * 8);
    _Size = param_1[1] - (longlong)param_2;
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst_00,param_2,_Size);
  _Change_array(param_1,_Dst,uVar1,uVar5);
  return *param_1 + lVar6 * 8;
}



// FUNCTION 143a01440 FUN_143a01440 body=413 status=ok
// SIG undefined FUN_143a01440(void)

void FUN_143a01440(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *param_1;
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar2 < 0x29) {
    lVar2 = *param_2;
    if (*(int *)(lVar2 + 0x44) < *(int *)(lVar5 + 0x44)) {
      *param_2 = lVar5;
      *param_1 = lVar2;
      lVar2 = *param_2;
    }
    lVar5 = *param_3;
    if (*(int *)(lVar5 + 0x44) < *(int *)(lVar2 + 0x44)) {
      *param_3 = lVar2;
      *param_2 = lVar5;
      if (*(int *)(lVar5 + 0x44) < *(int *)(*param_1 + 0x44)) {
        *param_2 = *param_1;
        *param_1 = lVar5;
      }
    }
  }
  else {
    lVar3 = lVar2 + 1 >> 3;
    lVar2 = param_1[lVar3];
    plVar1 = param_1 + lVar3;
    if (*(int *)(lVar2 + 0x44) < *(int *)(lVar5 + 0x44)) {
      *plVar1 = lVar5;
      *param_1 = lVar2;
      lVar2 = *plVar1;
    }
    lVar5 = param_1[lVar3 * 2];
    if (*(int *)(lVar5 + 0x44) < *(int *)(lVar2 + 0x44)) {
      param_1[lVar3 * 2] = lVar2;
      *plVar1 = lVar5;
      if (*(int *)(lVar5 + 0x44) < *(int *)(*param_1 + 0x44)) {
        *plVar1 = *param_1;
        *param_1 = lVar5;
      }
    }
    lVar5 = *param_2;
    plVar4 = param_2 + -lVar3;
    if (*(int *)(lVar5 + 0x44) < *(int *)(*plVar4 + 0x44)) {
      *param_2 = *plVar4;
      *plVar4 = lVar5;
      lVar5 = *param_2;
    }
    lVar2 = param_2[lVar3];
    if (*(int *)(lVar2 + 0x44) < *(int *)(lVar5 + 0x44)) {
      param_2[lVar3] = lVar5;
      *param_2 = lVar2;
      if (*(int *)(lVar2 + 0x44) < *(int *)(*plVar4 + 0x44)) {
        *param_2 = *plVar4;
        *plVar4 = lVar2;
      }
    }
    plVar6 = param_3 + lVar3 * -2;
    plVar4 = param_3 + -lVar3;
    lVar5 = *plVar4;
    if (*(int *)(lVar5 + 0x44) < *(int *)(*plVar6 + 0x44)) {
      *plVar4 = *plVar6;
      *plVar6 = lVar5;
      lVar5 = *plVar4;
    }
    lVar2 = *param_3;
    if (*(int *)(lVar2 + 0x44) < *(int *)(lVar5 + 0x44)) {
      *param_3 = lVar5;
      *plVar4 = lVar2;
      if (*(int *)(lVar2 + 0x44) < *(int *)(*plVar6 + 0x44)) {
        *plVar4 = *plVar6;
        *plVar6 = lVar2;
      }
    }
    lVar5 = *param_2;
    if (*(int *)(lVar5 + 0x44) < *(int *)(*plVar1 + 0x44)) {
      *param_2 = *plVar1;
      *plVar1 = lVar5;
      lVar5 = *param_2;
    }
    lVar2 = *plVar4;
    if (*(int *)(lVar2 + 0x44) < *(int *)(lVar5 + 0x44)) {
      *plVar4 = lVar5;
      *param_2 = lVar2;
      if (*(int *)(lVar2 + 0x44) < *(int *)(*plVar1 + 0x44)) {
        *param_2 = *plVar1;
        *plVar1 = lVar2;
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a015e0 FUN_143a015e0 body=655 status=ok
// SIG undefined FUN_143a015e0(void)

undefined8 *
FUN_143a015e0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x7fffffffffffffd < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  plVar5 = (longlong *)FUN_143a012b0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar10 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar7 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar10[1];
    plVar8 = plVar10 + 1;
    plVar9 = plVar2 + 1;
    lVar7 = *(longlong *)plVar2[1];
    if (plVar2 == (longlong *)lVar7) {
      lVar7 = ((longlong *)plVar2[1])[2];
      if (*(char *)(lVar7 + 0x18) != '\0') {
        plVar3 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar10 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(longlong **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar9;
          plVar6 = plVar3;
          plVar8 = plVar9;
          if (plVar2 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar3;
            *plVar3 = (longlong)plVar2;
            *plVar9 = (longlong)plVar3;
            plVar10 = plVar2;
          }
          else {
            plVar10 = (longlong *)*plVar9;
            if (plVar2 == (longlong *)*plVar10) {
              *plVar10 = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar9 = (longlong)plVar3;
              plVar10 = plVar2;
            }
            else {
              plVar10[2] = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar9 = (longlong)plVar3;
              plVar10 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar9 = (longlong *)*plVar8;
        *plVar8 = plVar9[2];
        if (*(char *)(plVar9[2] + 0x19) == '\0') {
          *(longlong **)(plVar9[2] + 8) = plVar8;
        }
        plVar9[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar9;
          plVar9[2] = (longlong)plVar8;
        }
        else {
          plVar2 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
          else {
            *plVar2 = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
        }
        goto LAB_143a01825;
      }
LAB_143a01796:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_143a01796;
      if (plVar10 == (longlong *)*plVar2) {
        std::
        _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
        ::_Rrotate(param_1,plVar2);
        plVar10 = plVar2;
      }
      *(undefined1 *)(plVar10[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar10[1] + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(plVar10[1] + 8);
      plVar9 = (longlong *)plVar8[2];
      plVar8[2] = *plVar9;
      if (*(char *)(*plVar9 + 0x19) == '\0') {
        *(longlong **)(*plVar9 + 8) = plVar8;
      }
      plVar9[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar9;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar9;
        }
        else {
          puVar4[2] = plVar9;
        }
      }
      *plVar9 = (longlong)plVar8;
LAB_143a01825:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}



// FUNCTION 143a01870 FUN_143a01870 body=344 status=ok
// SIG undefined FUN_143a01870(void)

undefined8 *
FUN_143a01870(longlong *param_1,undefined8 *param_2,char param_3,int *param_4,undefined1 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar3 = (undefined8 *)*param_1;
  bVar5 = true;
  puVar6 = puVar3;
  if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
    puVar4 = (undefined8 *)puVar3[1];
    do {
      puVar6 = puVar4;
      if (param_3 == '\0') {
        bVar5 = *param_4 < *(int *)((longlong)puVar6 + 0x1c);
      }
      else {
        bVar5 = *param_4 <= *(int *)((longlong)puVar6 + 0x1c);
      }
      if (bVar5 == false) {
        puVar4 = (undefined8 *)puVar6[2];
      }
      else {
        puVar4 = (undefined8 *)*puVar6;
      }
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
  }
  puVar4 = puVar6;
  if (bVar5 != false) {
    if (puVar6 == (undefined8 *)*puVar3) {
      puVar3 = (undefined8 *)
               FUN_143a015e0(param_1,local_res8,1,puVar6,param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar4 = (undefined8 *)*puVar6;
      if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
        puVar3 = (undefined8 *)puVar4[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
          puVar4 = puVar3;
          puVar3 = (undefined8 *)puVar3[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar3 = (undefined8 *)puVar6[1];
        puVar4 = puVar6;
        while ((puVar2 = puVar3, cVar1 == '\0' && (puVar4 == (undefined8 *)*puVar2))) {
          cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
          puVar3 = (undefined8 *)puVar2[1];
          puVar4 = puVar2;
        }
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          puVar4 = puVar2;
        }
      }
    }
    else {
      puVar4 = (undefined8 *)puVar6[2];
    }
  }
  if (*(int *)((longlong)puVar4 + 0x1c) < *param_4) {
    puVar3 = (undefined8 *)
             FUN_143a015e0(param_1,local_res8,bVar5,puVar6,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a019d0 FUN_143a019d0 body=197 status=ok
// SIG undefined FUN_143a019d0(void)

void FUN_143a019d0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar3) {
    lVar2 = (ulonglong)
            (*(int *)(*(longlong *)(param_1 + 8 + lVar1 * 0x10) + 0x44) <=
            *(int *)(*(longlong *)(param_1 + 0x10 + lVar1 * 0x10) + 0x44)) + 1 + lVar1 * 2;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
    lVar1 = lVar2;
  }
  if ((lVar1 == lVar3) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar1 = param_3 - 1;
  }
  while( true ) {
    if (lVar1 <= param_2) {
      *(longlong *)(param_1 + lVar1 * 8) = *param_4;
      return;
    }
    lVar2 = lVar1 + -1 >> 1;
    lVar3 = *(longlong *)(param_1 + lVar2 * 8);
    if (*(int *)(*param_4 + 0x44) <= *(int *)(lVar3 + 0x44)) break;
    *(longlong *)(param_1 + lVar1 * 8) = lVar3;
    lVar1 = lVar2;
  }
  *(longlong *)(param_1 + lVar1 * 8) = *param_4;
  return;
}



// FUNCTION 143a01aa0 FUN_143a01aa0 body=1007 status=ok
// SIG undefined FUN_143a01aa0(void)

void FUN_143a01aa0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong local_res8;
  
  lVar4 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar10 = lVar4 >> 3;
    if (lVar10 < 0x21) {
LAB_143a01cb4:
      if (((1 < lVar10) && (param_1 != param_2)) && (plVar8 = param_1 + 1, plVar8 != param_2)) {
        plVar6 = plVar8;
        do {
          lVar4 = *plVar6;
          if (*(int *)(lVar4 + 0x44) < *(int *)(*param_1 + 0x44)) {
            _guard_xfg_dispatch_icall_nop(plVar8,param_1,(longlong)plVar6 - (longlong)param_1);
            *param_1 = lVar4;
          }
          else {
            lVar10 = plVar6[-1];
            plVar9 = plVar6;
            plVar7 = plVar6;
            if (*(int *)(lVar4 + 0x44) < *(int *)(lVar10 + 0x44)) {
              do {
                plVar7 = plVar9 + -1;
                *plVar9 = lVar10;
                lVar10 = plVar9[-2];
                plVar9 = plVar7;
              } while (*(int *)(lVar4 + 0x44) < *(int *)(lVar10 + 0x44));
            }
            *plVar7 = lVar4;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar10) {
        uVar12 = (longlong)param_2 - (longlong)param_1 >> 3;
        lVar4 = (longlong)param_2 - (longlong)param_1 >> 4;
        if (0 < lVar4) {
          lVar10 = (longlong)(uVar12 - 1) >> 1;
          do {
            lVar3 = param_1[lVar4 + -1];
            lVar4 = lVar4 + -1;
            lVar1 = lVar4;
            while (lVar1 < lVar10) {
              lVar11 = (ulonglong)
                       (*(int *)(param_1[lVar1 * 2 + 1] + 0x44) <=
                       *(int *)(param_1[lVar1 * 2 + 2] + 0x44)) + 1 + lVar1 * 2;
              param_1[lVar1] = param_1[lVar11];
              lVar1 = lVar11;
            }
            if ((lVar1 == lVar10) && ((uVar12 & 1) == 0)) {
              param_1[lVar1] = param_1[uVar12 - 1];
              lVar1 = uVar12 - 1;
            }
            while (lVar4 < lVar1) {
              lVar11 = lVar1 + -1 >> 1;
              if (*(int *)(lVar3 + 0x44) <= *(int *)(param_1[lVar11] + 0x44)) break;
              param_1[lVar1] = param_1[lVar11];
              lVar1 = lVar11;
            }
            param_1[lVar1] = lVar3;
          } while (0 < lVar4);
        }
        if ((longlong)uVar12 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (longlong)uVar12) {
            local_res8 = *param_2;
            *param_2 = *param_1;
            FUN_143a019d0(param_1,0,(longlong)param_2 - (longlong)param_1 >> 3,&local_res8,param_4);
          }
          param_2 = param_2 + -1;
          uVar12 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < (longlong)uVar12);
        return;
      }
      goto LAB_143a01cb4;
    }
    plVar6 = param_1 + (lVar4 >> 4);
    FUN_143a01440(param_1,plVar6,param_2 + -1,param_4);
    plVar8 = plVar6 + 1;
    for (; param_1 < plVar6; plVar6 = plVar6 + -1) {
      if ((*(int *)(plVar6[-1] + 0x44) < *(int *)(*plVar6 + 0x44)) ||
         (*(int *)(*plVar6 + 0x44) < *(int *)(plVar6[-1] + 0x44))) break;
    }
    plVar9 = plVar8;
    plVar7 = plVar6;
    if (plVar8 < param_2) {
      do {
        plVar9 = plVar8;
        if ((*(int *)(*plVar8 + 0x44) < *(int *)(*plVar6 + 0x44)) ||
           (*(int *)(*plVar6 + 0x44) < *(int *)(*plVar8 + 0x44))) break;
        plVar8 = plVar8 + 1;
        plVar9 = plVar8;
      } while (plVar8 < param_2);
    }
joined_r0x000143a01b54:
    plVar5 = plVar6;
    if (plVar8 < param_2) {
      iVar2 = *(int *)(*plVar8 + 0x44);
      if (iVar2 <= *(int *)(*plVar7 + 0x44)) {
        if (iVar2 < *(int *)(*plVar7 + 0x44)) goto joined_r0x000143a01b8f;
        if (plVar9 != plVar8) {
          lVar4 = *plVar9;
          *plVar9 = *plVar8;
          *plVar8 = lVar4;
        }
        plVar9 = plVar9 + 1;
      }
      plVar8 = plVar8 + 1;
      goto joined_r0x000143a01b54;
    }
joined_r0x000143a01b8f:
    for (; param_1 < plVar6; plVar6 = plVar6 + -1) {
      plVar5 = plVar5 + -1;
      iVar2 = *(int *)(*plVar5 + 0x44);
      if (*(int *)(*plVar7 + 0x44) <= iVar2) {
        if (*(int *)(*plVar7 + 0x44) < iVar2) break;
        plVar7 = plVar7 + -1;
        if (plVar7 != plVar5) {
          lVar4 = *plVar7;
          *plVar7 = *plVar5;
          *plVar5 = lVar4;
        }
      }
    }
    if (plVar6 != param_1) {
      plVar6 = plVar6 + -1;
      if (plVar8 == param_2) {
        plVar7 = plVar7 + -1;
        if (plVar6 != plVar7) {
          lVar4 = *plVar6;
          *plVar6 = *plVar7;
          *plVar7 = lVar4;
        }
        lVar4 = *plVar7;
        *plVar7 = plVar9[-1];
        plVar9[-1] = lVar4;
        plVar9 = plVar9 + -1;
      }
      else {
        lVar4 = *plVar8;
        *plVar8 = *plVar6;
        plVar8 = plVar8 + 1;
        *plVar6 = lVar4;
      }
      goto joined_r0x000143a01b54;
    }
    if (plVar8 != param_2) {
      if (plVar9 != plVar8) {
        lVar4 = *plVar7;
        *plVar7 = *plVar9;
        *plVar9 = lVar4;
      }
      lVar4 = *plVar7;
      *plVar7 = *plVar8;
      *plVar8 = lVar4;
      plVar8 = plVar8 + 1;
      plVar9 = plVar9 + 1;
      plVar7 = plVar7 + 1;
      goto joined_r0x000143a01b54;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)plVar7 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)plVar9 & 0xfffffffffffffff8U)) {
      FUN_143a01aa0(param_1,plVar7,param_3,param_4);
      plVar7 = param_2;
      param_1 = plVar9;
    }
    else {
      FUN_143a01aa0(plVar9,param_2,param_3,param_4);
    }
    lVar4 = (longlong)plVar7 - (longlong)param_1;
    param_2 = plVar7;
  } while( true );
}



// FUNCTION 143a01e90 FUN_143a01e90 body=116 status=ok
// SIG undefined FUN_143a01e90(void)

undefined8 *
FUN_143a01e90(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = google::protobuf::internal::GeneratedMessageReflection::vftable;
  param_1[1] = param_2;
  uVar4 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 3);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar2 = *(undefined4 *)(param_3 + 5);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  if (param_4 == 0) {
    param_4 = FUN_143a4f670();
    param_2 = param_1[1];
  }
  param_1[8] = param_4;
  param_1[9] = param_5;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(int *)(param_1 + 10) = *(int *)(param_2 + 0x68) + -1;
  return param_1;
}



// FUNCTION 143a01f10 FUN_143a01f10 body=152 status=ok
// SIG undefined FUN_143a01f10(void)

void FUN_143a01f10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>_>::_Erase
                (param_1,plVar4[2],param_3,param_4,uVar5);
      plVar2 = (longlong *)*plVar4;
      FMemory::operator_delete(plVar4,0x20);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  FMemory::operator_delete(*param_1,0x20);
  return;
}



// FUNCTION 143a01fb0 thunk_FUN_143a01f10 body=5 status=ok
// SIG undefined thunk_FUN_143a01f10(void)

void thunk_FUN_143a01f10(void)

{
  FUN_143a01f10();
  return;
}



// FUNCTION 143a01fc0 FUN_143a01fc0 body=15 status=ok
// SIG undefined FUN_143a01fc0(void)

void FUN_143a01fc0(undefined8 *param_1)

{
  *param_1 = google::protobuf::internal::GeneratedMessageReflection::vftable;
  Chaos::FImplicitObject::~FImplicitObject();
  return;
}



// FUNCTION 143a01fd0 FUN_143a01fd0 body=46 status=ok
// SIG undefined FUN_143a01fd0(void)

void FUN_143a01fd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
            (*(longlong **)(param_1 + 8),param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1439fdc40(param_1 + 0x10);
  return;
}



// FUNCTION 143a02000 FUN_143a02000 body=242 status=ok
// SIG undefined FUN_143a02000(void)

void FUN_143a02000(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  if (param_2 != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x58);
    for (puVar7 = *(ulonglong **)(param_2 + 0x50); puVar7 != puVar1; puVar7 = puVar7 + 2) {
      uVar4 = puVar7[1];
      for (uVar6 = *puVar7; uVar6 < uVar4; uVar6 = uVar6 + 0x10) {
        puVar2 = *(undefined8 **)(uVar6 + 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    lVar3 = *(longlong *)(param_2 + 0x50);
    if (lVar3 != 0) {
      uVar6 = *(longlong *)(param_2 + 0x60) - lVar3 & 0xfffffffffffffff0;
      lVar5 = lVar3;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar3 + -8);
        uVar6 = uVar6 + 0x27;
        if (0x1f < (lVar3 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar6);
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
    }
    _guard_xfg_dispatch_icall_nop(param_2);
    FMemory::operator_delete(param_2,0x68);
  }
  return;
}



// FUNCTION 143a02100 FUN_143a02100 body=62 status=ok
// SIG undefined FUN_143a02100(void)

undefined8 * FUN_143a02100(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::GeneratedMessageReflection::vftable;
  Chaos::FImplicitObject::~FImplicitObject();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143a02140 FUN_143a02140 body=439 status=ok
// SIG undefined FUN_143a02140(void)

void FUN_143a02140(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddAllocatedMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddAllocatedMessage",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar5 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar5 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddAllocatedMessage",10);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    iVar5 = FUN_143a009a0(param_3);
    if ((iVar5 == 0xb) && (cVar4 = FUN_143a4f8d0(param_3), cVar4 != '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
    plVar10 = (longlong *)((ulonglong)uVar6 + param_2);
    if (bVar3) {
      plVar10 = (longlong *)FUN_143a12320(plVar10);
    }
    lVar8 = FUN_1439fe570(param_4);
    lVar1 = *plVar10;
    if ((lVar1 == lVar8) && (piVar2 = (int *)plVar10[2], piVar2 != (int *)0x0)) {
      iVar5 = *piVar2;
      if (iVar5 < *(int *)((longlong)plVar10 + 0xc)) {
        iVar7 = (int)plVar10[1];
        if (iVar7 < iVar5) {
          *(undefined8 *)(piVar2 + (longlong)iVar5 * 2 + 2) =
               *(undefined8 *)(piVar2 + (longlong)iVar7 * 2 + 2);
          iVar7 = (int)plVar10[1];
        }
        *(undefined8 **)(piVar2 + (longlong)iVar7 * 2 + 2) = param_4;
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        *(int *)plVar10[2] = *(int *)plVar10[2] + 1;
        return;
      }
    }
    lVar8 = FUN_1439fe560(param_4);
    puVar9 = param_4;
    if ((lVar1 == 0) || (lVar8 != 0)) {
      if (lVar1 != lVar8) {
        puVar9 = (undefined8 *)FOutputDevice::Serialize(param_4,lVar1);
        Metasound::Frontend::FBaseOutputController::Connect(param_4,puVar9);
        if ((lVar8 == 0) && (param_4 != (undefined8 *)0x0)) {
          (**(code **)*param_4)(param_4,1);
        }
      }
    }
    else {
      FUN_1414fee00(lVar1,param_4);
    }
    FUN_143a01220(plVar10,puVar9);
    return;
  }
  FUN_143a5acf0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,param_3,param_4);
  return;
}



// FUNCTION 143a02300 FUN_143a02300 body=261 status=ok
// SIG undefined FUN_143a02300(void)

void FUN_143a02300(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_38 [16];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddBool","Field does not match message type.")
    ;
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddBool",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 7) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddBool",7);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51960(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f1a40((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a02410 FUN_143a02410 body=100 status=ok
// SIG undefined FUN_143a02410(void)

void FUN_143a02410(char *param_1,undefined8 *param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    (**(code **)(param_1 + 8))();
    if (0 < (int)param_3) {
      do {
        if ((code *)*param_2 != (code *)0x0) {
          (*(code *)*param_2)();
        }
        param_2 = param_2 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    FUN_143a40cf0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x28));
    FUN_1439feba0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 143a02480 FUN_143a02480 body=265 status=ok
// SIG undefined FUN_143a02480(void)

void FUN_143a02480(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_38 [2];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddDouble",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddDouble",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 5) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddDouble",5);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51a00(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f1a00((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a02590 FUN_143a02590 body=121 status=ok
// SIG undefined FUN_143a02590(void)

void FUN_143a02590(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x18);
  lVar2 = FUN_143a4dfa0(param_3);
  if (lVar1 != lVar2) {
    FUN_143a072a0(*(undefined8 *)(param_1 + 8),param_3,"AddEnum",param_4);
  }
  FUN_143a02730(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x10));
  return;
}



// FUNCTION 143a02610 FUN_143a02610 body=276 status=ok
// SIG undefined FUN_143a02610(void)

void FUN_143a02610(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddEnum","Field does not match message type.")
    ;
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddEnum",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddEnum",8);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x3c) != 3) {
    uVar3 = FUN_143a4dfa0(param_3);
    lVar4 = FUN_143a3fad0(uVar3,param_4);
    if (lVar4 == 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x44);
      puVar5 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2);
      if ((*puVar5 & 1) != 0) {
        FUN_1439fbd90(*puVar5 & 0xfffffffffffffffe,uVar1,(longlong)param_4);
        return;
      }
      uVar3 = FUN_141515d60();
      FUN_1439fbd90(uVar3,uVar1,(longlong)param_4);
      return;
    }
  }
  FUN_143a02730(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a02730 FUN_143a02730 body=153 status=ok
// SIG undefined FUN_143a02730(void)

void FUN_143a02730(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_38 [4];
  
  local_38[0] = param_4;
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar3 = FUN_143a009a0(param_3);
    FUN_143a51aa0(param_2 + (ulonglong)uVar4,uVar2,uVar3,uVar1,local_38[0],param_3);
    return;
  }
  uVar4 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f19c0((ulonglong)uVar4 + param_2,local_38);
  return;
}



// FUNCTION 143a027d0 FUN_143a027d0 body=265 status=ok
// SIG undefined FUN_143a027d0(void)

void FUN_143a027d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_38 [4];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddFloat","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddFloat",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 6) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddFloat",6);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51b40(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f19c0((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a028e0 FUN_143a028e0 body=260 status=ok
// SIG undefined FUN_143a028e0(void)

void FUN_143a028e0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_38 [4];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddInt32","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddInt32",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 1) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddInt32",1);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51aa0(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f19c0((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a029f0 FUN_143a029f0 body=262 status=ok
// SIG undefined FUN_143a029f0(void)

void FUN_143a029f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_38 [2];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddInt64","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddInt64",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 2) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddInt64",2);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51be0(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f1a00((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a02b00 FUN_143a02b00 body=493 status=ok
// SIG undefined FUN_143a02b00(void)

longlong FUN_143a02b00(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddMessage",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar6 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar6 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddMessage",10);
  }
  if (param_4 == (longlong *)0x0) {
    param_4 = *(longlong **)(param_1 + 0x48);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    lVar8 = FUN_143a5ad10((ulonglong)*(uint *)(param_1 + 0x30) + (longlong)param_2,param_3,param_4);
    return lVar8;
  }
  iVar6 = FUN_143a009a0(param_3);
  if ((iVar6 == 0xb) && (cVar5 = FUN_143a4f8d0(param_3), cVar5 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
  plVar11 = (longlong *)((ulonglong)uVar7 + (longlong)param_2);
  if (bVar4) {
    plVar11 = (longlong *)FUN_143a12320(plVar11);
  }
  piVar2 = (int *)plVar11[2];
  if (piVar2 == (int *)0x0) {
LAB_143a02c2b:
    iVar6 = (int)plVar11[1];
  }
  else {
    iVar6 = (int)plVar11[1];
    if (*piVar2 <= iVar6) goto LAB_143a02c2b;
    lVar8 = *(longlong *)(piVar2 + (longlong)iVar6 * 2 + 2);
    iVar6 = iVar6 + 1;
    *(int *)(plVar11 + 1) = iVar6;
    if (lVar8 != 0) {
      return lVar8;
    }
  }
  if (iVar6 == 0) {
    lVar8 = *param_4;
    uVar9 = FUN_143a4f9e0(param_3);
    plVar10 = (longlong *)(**(code **)(lVar8 + 8))(param_4,uVar9);
  }
  else {
    plVar10 = *(longlong **)(piVar2 + 2);
  }
  lVar8 = *plVar10;
  uVar9 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar8 = (**(code **)(lVar8 + 0x10))(plVar10,uVar9);
  piVar2 = (int *)plVar11[2];
  if (piVar2 == (int *)0x0) {
LAB_143a02cb7:
    FUN_1439f23d0(plVar11,*(int *)((longlong)plVar11 + 0xc) + 1);
  }
  else {
    iVar6 = (int)plVar11[1];
    if (iVar6 == *(int *)((longlong)plVar11 + 0xc)) goto LAB_143a02cb7;
    iVar1 = *piVar2;
    if (iVar1 == *(int *)((longlong)plVar11 + 0xc)) {
      if ((*plVar11 == 0) &&
         (puVar3 = *(undefined8 **)(piVar2 + (longlong)iVar6 * 2 + 2), puVar3 != (undefined8 *)0x0))
      {
        (**(code **)*puVar3)(puVar3,1);
      }
      goto LAB_143a02cca;
    }
    if (iVar1 <= iVar6) {
      *piVar2 = iVar1 + 1;
      goto LAB_143a02cca;
    }
    *(undefined8 *)(piVar2 + (longlong)iVar1 * 2 + 2) =
         *(undefined8 *)(piVar2 + (longlong)iVar6 * 2 + 2);
  }
  *(int *)plVar11[2] = *(int *)plVar11[2] + 1;
LAB_143a02cca:
  *(longlong *)(plVar11[2] + 8 + (longlong)(int)plVar11[1] * 8) = lVar8;
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  return lVar8;
}



// FUNCTION 143a02cf0 FUN_143a02cf0 body=247 status=ok
// SIG undefined FUN_143a02cf0(void)

void FUN_143a02cf0(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddString",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddString",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddString",9);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    uVar4 = FUN_143a046b0(param_1 + 0x10,param_3);
    puVar5 = (undefined8 *)FUN_1439f1a80((ulonglong)uVar4 + param_2);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar2 = FUN_143a009a0(param_3);
    puVar5 = (undefined8 *)FUN_143a51d40(param_2 + (ulonglong)uVar4,uVar1,uVar2,param_3);
  }
  if (puVar5 != param_4) {
    puVar6 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar6 = (undefined8 *)*param_4;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar5,puVar6,param_4[2]);
  }
  return;
}



// FUNCTION 143a02df0 FUN_143a02df0 body=260 status=ok
// SIG undefined FUN_143a02df0(void)

void FUN_143a02df0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_38 [4];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddUInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddUInt32",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 3) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddUInt32",3);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51dd0(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f19c0((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a02f00 FUN_143a02f00 body=262 status=ok
// SIG undefined FUN_143a02f00(void)

void FUN_143a02f00(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_38 [2];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"AddUInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"AddUInt64",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"AddUInt64",4);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar1 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x4c);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a51e70(param_2 + (ulonglong)uVar5,uVar2,uVar4,uVar1,local_38[0],param_3);
    return;
  }
  uVar5 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f1a00((ulonglong)uVar5 + param_2,local_38);
  return;
}



// FUNCTION 143a03010 FUN_143a03010 body=149 status=ok
// SIG undefined FUN_143a03010(void)

void FUN_143a03010(once_flag *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  once_flag *local_res8 [4];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  once_flag **local_18;
  code *local_10;
  
  local_res8[0] = param_1;
  _guard_xfg_dispatch_icall_nop(local_40);
  local_20 = local_40;
  local_18 = local_res8;
  local_10 = FUN_143a030b0;
  iVar2 = std::_guard_xfg_dispatch_icall_nop(param_1,FUN_143a012f0,&local_20);
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop(local_40);
    return;
  }
  bVar1 = _guard_xfg_dispatch_icall_nop(local_40);
  if (bVar1) {
    uVar3 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
    FUN_143a00820(uVar3);
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 143a030b0 FUN_143a030b0 body=1388 status=ok
// SIG undefined FUN_143a030b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a030b0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 *local_a8;
  longlong local_a0;
  int *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_90 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_a0 = param_1;
  local_98 = piVar11;
  if ((*piVar11 < DAT_146ba3100) && (_Init_thread_header(&DAT_146ba3100), DAT_146ba3100 == -1)) {
    _guard_xfg_dispatch_icall_nop(&DAT_146ba30b0,0,0x50);
    _guard_xfg_dispatch_icall_nop(&DAT_146ba30b0,2);
    atexit(FUN_143ec5e40);
    _Init_thread_footer(&DAT_146ba3100);
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(&DAT_146ba30b0);
  if (iVar3 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar3);
  }
  (**(code **)(param_1 + 8))();
  iVar3 = _guard_xfg_dispatch_icall_nop(&DAT_146ba30b0);
  if (iVar3 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar3);
  }
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = 0;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0x10) + lVar12) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_88);
  uVar4 = FUN_143a4f670();
  lVar12 = FUN_143a3f380(uVar4,&local_88);
  if (0xf < uStack_70) {
    uVar8 = uStack_70 + 1;
    lVar9 = CONCAT71(uStack_87,local_88);
    lVar13 = lVar9;
    if (0xfff < uVar8) {
      uVar8 = uStack_70 + 0x28;
      lVar13 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar13,uVar8);
  }
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = 0;
  if (lVar12 == 0) {
    uVar4 = FUN_1439eeb00(&local_68,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                          ,0x933);
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,1);
    uVar4 = FUN_1439eef00(uVar4,"CHECK failed: file != NULL: ");
    FUN_1439eec50(local_f8,uVar4);
    DsDevice::~DsDevice(&local_68);
  }
  local_f0 = thunk_FUN_143a00840();
  local_c8 = *(longlong *)(param_1 + 0x28);
  local_d0 = *(undefined8 **)(param_1 + 0x20);
  local_d8 = *(undefined8 **)(param_1 + 0x18);
  local_e0 = *(longlong **)(param_1 + 0x40);
  local_e8 = *(longlong **)(param_1 + 0x30);
  iVar3 = 0;
  if (0 < *(int *)(lVar12 + 0x2c)) {
    lVar13 = 0;
    do {
      lVar9 = *(longlong *)(lVar12 + 0x68) + lVar13;
      iVar10 = 0;
      if (0 < *(int *)(lVar9 + 0x70)) {
        do {
          FUN_143a03620(&local_f0);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar9 + 0x70));
      }
      *local_e8 = lVar9;
      puVar5 = (undefined8 *)operator_new(0x58);
      uVar4 = local_f0;
      local_a8 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        local_b8 = *local_d8;
        uStack_40 = *(undefined4 *)(local_d8 + 1);
        local_68 = *local_d0;
        puVar1 = (undefined4 *)(local_c8 + (longlong)(int)local_b8 * 4);
        puStack_60 = puVar1 + 5;
        local_58 = local_c8 + (longlong)(int)((ulonglong)local_b8 >> 0x20) * 4;
        uStack_50 = *puVar1;
        uStack_4c = *(undefined4 *)(local_c8 + (longlong)((int)local_b8 + 1) * 4);
        local_48 = *(undefined4 *)(local_c8 + (longlong)((int)local_b8 + 2) * 4);
        uStack_44 = *(undefined4 *)(local_c8 + (longlong)((int)local_b8 + 3) * 4);
        uStack_3c = *(undefined4 *)(local_c8 + (longlong)((int)local_b8 + 4) * 4);
        lVar6 = FUN_143a4f670();
        *puVar5 = google::protobuf::internal::GeneratedMessageReflection::vftable;
        puVar5[1] = lVar9;
        puVar5[2] = local_68;
        puVar5[3] = puStack_60;
        *(undefined4 *)(puVar5 + 4) = (undefined4)local_58;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_58._4_4_;
        *(undefined4 *)(puVar5 + 5) = uStack_50;
        *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_4c;
        puVar5[6] = CONCAT44(uStack_44,local_48);
        puVar5[7] = CONCAT44(uStack_3c,uStack_40);
        lVar7 = lVar9;
        if (lVar6 == 0) {
          lVar6 = FUN_143a4f670();
          lVar7 = puVar5[1];
        }
        puVar5[8] = lVar6;
        puVar5[9] = uVar4;
        *(undefined4 *)(puVar5 + 10) = 0xffffffff;
        *(int *)(puVar5 + 10) = *(int *)(lVar7 + 0x68) + -1;
      }
      local_e8[1] = (longlong)puVar5;
      iVar10 = 0;
      if (0 < *(int *)(lVar9 + 0x74)) {
        do {
          *local_e0 = (longlong)iVar10 * 0x50 + *(longlong *)(lVar9 + 0x40);
          local_e0 = local_e0 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar9 + 0x74));
      }
      local_d8 = (undefined8 *)((longlong)local_d8 + 0xc);
      local_d0 = local_d0 + 1;
      local_e8 = local_e8 + 2;
      iVar3 = iVar3 + 1;
      lVar13 = lVar13 + 0x90;
      piVar11 = local_98;
      param_1 = local_a0;
    } while (iVar3 < *(int *)(lVar12 + 0x2c));
  }
  plVar2 = local_e8;
  iVar3 = 0;
  if (0 < *(int *)(lVar12 + 0x30)) {
    do {
      *local_e0 = (longlong)iVar3 * 0x50 + *(longlong *)(lVar12 + 0x70);
      local_e0 = local_e0 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar12 + 0x30));
  }
  if ((*(char *)(*(longlong *)(lVar12 + 0x88) + 0x9b) != '\0') &&
     (iVar3 = 0, 0 < *(int *)(lVar12 + 0x34))) {
    lVar13 = 0;
    do {
      *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x48)) =
           (longlong)iVar3 * 0x30 + *(longlong *)(lVar12 + 0x78);
      iVar3 = iVar3 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar3 < *(int *)(lVar12 + 0x34));
  }
  if ((*piVar11 < DAT_146ba30a8) && (_Init_thread_header(&DAT_146ba30a8), DAT_146ba30a8 == -1)) {
    lVar12 = operator_new(0x68);
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(lVar12,2);
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x58) = 0;
      *(undefined8 *)(lVar12 + 0x60) = 0;
    }
    FUN_1439ef0c0(&LAB_143a00a60,lVar12);
    DAT_146ba30a0 = lVar12;
    _Init_thread_footer(&DAT_146ba30a8);
  }
  lVar12 = DAT_146ba30a0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  iVar3 = _guard_xfg_dispatch_icall_nop(DAT_146ba30a0);
  if (iVar3 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar3);
  }
  plStack_b0 = plVar2;
  puVar5 = *(undefined8 **)(lVar12 + 0x58);
  local_b8 = uVar4;
  if (*(undefined8 **)(lVar12 + 0x60) == puVar5) {
    FUN_1439ee830(lVar12 + 0x50,puVar5,&local_b8);
  }
  else {
    *puVar5 = uVar4;
    puVar5[1] = plVar2;
    *(longlong *)(lVar12 + 0x58) = *(longlong *)(lVar12 + 0x58) + 0x10;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(lVar12);
  if (iVar3 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar3);
  }
  return;
}



// FUNCTION 143a03620 FUN_143a03620 body=454 status=ok
// SIG undefined FUN_143a03620(void)

void FUN_143a03620(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int local_58;
  
  uVar17 = 0xfffffffffffffffe;
  puVar16 = (undefined8 *)0x0;
  puVar15 = puVar16;
  if (0 < *(int *)(param_2 + 0x70)) {
    do {
      FUN_143a03620(param_1,(longlong)(int)puVar15 * 0x90 + *(longlong *)(param_2 + 0x38));
      uVar14 = (int)puVar15 + 1;
      puVar15 = (undefined8 *)(ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_2 + 0x70));
  }
  *(longlong *)param_1[1] = param_2;
  puVar11 = (undefined8 *)operator_new(0x58);
  puVar15 = puVar16;
  if (puVar11 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_1[3];
    uVar3 = *(undefined4 *)((undefined8 *)param_1[3] + 1);
    lVar13 = param_1[5];
    uVar9 = *(undefined8 *)param_1[4];
    local_58 = (int)uVar2;
    puVar1 = (undefined4 *)(lVar13 + (longlong)local_58 * 4);
    uVar4 = *puVar1;
    uVar5 = *(undefined4 *)(lVar13 + (longlong)(local_58 + 1) * 4);
    uVar6 = *(undefined4 *)(lVar13 + (longlong)(local_58 + 2) * 4);
    uVar7 = *(undefined4 *)(lVar13 + (longlong)(local_58 + 3) * 4);
    uVar8 = *(undefined4 *)(lVar13 + (longlong)(local_58 + 4) * 4);
    uVar10 = *param_1;
    lVar12 = FUN_143a4f670((longlong)(local_58 + 4),puVar1,(longlong)local_58,uVar3,uVar17);
    *puVar11 = google::protobuf::internal::GeneratedMessageReflection::vftable;
    puVar11[1] = param_2;
    puVar11[2] = uVar9;
    puVar11[3] = puVar1 + 5;
    puVar11[4] = lVar13 + (longlong)(int)((ulonglong)uVar2 >> 0x20) * 4;
    *(undefined4 *)(puVar11 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar5;
    *(undefined4 *)(puVar11 + 6) = uVar6;
    *(undefined4 *)((longlong)puVar11 + 0x34) = uVar7;
    *(undefined4 *)(puVar11 + 7) = uVar3;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = uVar8;
    lVar13 = param_2;
    if (lVar12 == 0) {
      lVar12 = FUN_143a4f670();
      lVar13 = puVar11[1];
    }
    puVar11[8] = lVar12;
    puVar11[9] = uVar10;
    *(undefined4 *)(puVar11 + 10) = 0xffffffff;
    *(int *)(puVar11 + 10) = *(int *)(lVar13 + 0x68) + -1;
    puVar15 = puVar11;
  }
  *(undefined8 **)(param_1[1] + 8) = puVar15;
  if (0 < *(int *)(param_2 + 0x74)) {
    do {
      *(longlong *)param_1[2] = (longlong)(int)puVar16 * 0x50 + *(longlong *)(param_2 + 0x40);
      param_1[2] = param_1[2] + 8;
      uVar14 = (int)puVar16 + 1;
      puVar16 = (undefined8 *)(ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_2 + 0x74));
  }
  param_1[3] = param_1[3] + 0xc;
  param_1[4] = param_1[4] + 8;
  param_1[1] = param_1[1] + 0x10;
  return;
}



// FUNCTION 143a037f0 FUN_143a037f0 body=123 status=ok
// SIG undefined FUN_143a037f0(void)

void FUN_143a037f0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    if (*(char *)(param_3 + 0x42) == '\0') {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x50) + 0x28);
    }
    else if (*(longlong *)(param_3 + 0x60) == 0) {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x80);
    }
    else {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x60) + 0x50);
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)(param_3 / 0x98) * 4);
    param_2 = param_2 + (ulonglong)*(uint *)(param_1 + 0x28);
    uVar2 = (ulonglong)(uVar1 >> 5);
    *(uint *)(param_2 + uVar2 * 4) = *(uint *)(param_2 + uVar2 * 4) & ~(1 << (uVar1 & 0x1f));
  }
  return;
}



// FUNCTION 143a03870 FUN_143a03870 body=1131 status=ok
// SIG undefined FUN_143a03870(void)

void FUN_143a03870(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"ClearField",
                  "Field does not match message type.");
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a52d50((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44));
    return;
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    iVar6 = FUN_143a009a0(param_3);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
    case 1:
    case 8:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 2:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 3:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 4:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 5:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 6:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 7:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear((ulonglong)uVar7 + param_2);
      return;
    case 9:
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f1c30((ulonglong)uVar7 + param_2);
      return;
    case 10:
      goto switchD_143a03b85_caseD_a;
    default:
      return;
    }
  }
  lVar8 = *(longlong *)(param_3 + 0x58);
  if (lVar8 != 0) {
    if (*(int *)((ulonglong)
                 (uint)(*(int *)(param_1 + 0x34) +
                       (int)((lVar8 - *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30)) / 0x30) * 4
                       ) + param_2) != *(int *)(param_3 + 0x44)) {
      return;
    }
    FUN_143a03d30(param_1,param_2);
    return;
  }
  cVar5 = FUN_143a05bd0(param_1,param_2,param_3);
  if (cVar5 == '\0') {
    return;
  }
  FUN_143a037f0(param_1,param_2,param_3);
  iVar6 = FUN_143a009a0(param_3);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
  case 1:
  case 3:
    uVar12 = *(undefined4 *)(param_3 + 0x90);
    goto LAB_143a03a0f;
  case 2:
  case 4:
    uVar1 = *(undefined8 *)(param_3 + 0x90);
    uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
    *(undefined8 *)((ulonglong)uVar7 + param_2) = uVar1;
    break;
  case 5:
    uVar1 = *(undefined8 *)(param_3 + 0x90);
    uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
    *(undefined8 *)((ulonglong)uVar7 + param_2) = uVar1;
    break;
  case 6:
    uVar12 = *(undefined4 *)(param_3 + 0x90);
    uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
    *(undefined4 *)((ulonglong)uVar7 + param_2) = uVar12;
    break;
  case 7:
    uVar2 = *(undefined1 *)(param_3 + 0x90);
    uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
    *(undefined1 *)((ulonglong)uVar7 + param_2) = uVar2;
    break;
  case 8:
    lVar8 = FUN_143a4de20(param_3);
    uVar12 = *(undefined4 *)(lVar8 + 0x10);
LAB_143a03a0f:
    uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
    *(undefined4 *)((ulonglong)uVar7 + param_2) = uVar12;
    break;
  case 9:
    cVar5 = FUN_143a060e0(param_1,param_3);
    plVar9 = (longlong *)FUN_143a04610(param_1 + 0x10,param_3);
    if (cVar5 == '\0') {
      lVar8 = *plVar9;
      uVar10 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
      if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
        uVar10 = *(ulonglong *)(uVar10 + 0x18);
      }
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      if (((uVar10 == 0) && (lVar3 = *(longlong *)((ulonglong)uVar7 + param_2), lVar3 != lVar8)) &&
         (lVar3 != 0)) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_(lVar3,1);
      }
      *(longlong *)((ulonglong)uVar7 + param_2) = lVar8;
    }
    else {
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      if ((longlong *)((ulonglong)uVar7 + param_2) != plVar9) {
        plVar11 = plVar9;
        if (0xf < (ulonglong)plVar9[3]) {
          plVar11 = (longlong *)*plVar9;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((longlong *)((ulonglong)uVar7 + param_2),plVar11,plVar9[2]);
      }
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x28) == -1) {
      uVar10 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
      if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
        uVar10 = *(ulonglong *)(uVar10 + 0x18);
      }
      if (uVar10 == 0) {
        uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
        puVar4 = *(undefined8 **)((ulonglong)uVar7 + param_2);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      *(undefined8 *)((ulonglong)uVar7 + param_2) = 0;
    }
    else {
      uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
      (**(code **)(**(longlong **)((ulonglong)uVar7 + param_2) + 0x30))();
    }
  }
  return;
switchD_143a03b85_caseD_a:
  cVar5 = FUN_143a061d0(param_3);
  uVar7 = FUN_143a046b0(param_1 + 0x10,param_3);
  if (cVar5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a03cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)((ulonglong)uVar7 + param_2) + 0x50))();
    return;
  }
  FUN_1439fca10();
  return;
}



// FUNCTION 143a03d30 FUN_143a03d30 body=357 status=ok
// SIG undefined FUN_143a03d30(void)

void FUN_143a03d30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (*(int *)((ulonglong)
               (uint)(*(int *)(param_1 + 0x34) +
                     (int)((param_3 - *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30)) / 0x30) *
                     4) + param_2) != 0) {
    uVar6 = FUN_143a3f1b0(*(undefined8 *)(param_1 + 8));
    uVar8 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
    if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
      uVar8 = *(ulonglong *)(uVar8 + 0x18);
    }
    if (uVar8 == 0) {
      iVar4 = FUN_143a009a0(uVar6);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 9) {
        plVar7 = (longlong *)FUN_143a04610(param_1 + 0x10,uVar6);
        lVar2 = *plVar7;
        uVar8 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
        if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 0x18);
        }
        plVar7 = (longlong *)FUN_143a00c20(param_1,param_2,uVar6);
        if (((uVar8 == 0) && (lVar3 = *plVar7, lVar3 != lVar2)) && (lVar3 != 0)) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _scalar_deleting_destructor_(lVar3,1);
        }
      }
      else if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10) {
        uVar5 = FUN_143a046b0(param_1 + 0x10,uVar6);
        puVar1 = *(undefined8 **)((ulonglong)uVar5 + param_2);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
    *(undefined4 *)
     ((ulonglong)
      (uint)(*(int *)(param_1 + 0x34) +
            (int)((param_3 - *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30)) / 0x30) * 4) +
     param_2) = 0;
  }
  return;
}



// FUNCTION 143a03ea0 FUN_143a03ea0 body=130 status=ok
// SIG undefined FUN_143a03ea0(void)

void FUN_143a03ea0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = FUN_143a009a0(param_3);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_3);
    if (cVar1 != '\0') goto LAB_143a03ef3;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"LookupMapValue\"",
                "Field is not a map field.");
LAB_143a03ef3:
  plVar3 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000143a03f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3,param_4);
  return;
}



// FUNCTION 143a03f30 FUN_143a03f30 body=130 status=ok
// SIG undefined FUN_143a03f30(void)

void FUN_143a03f30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_143a009a0(param_3);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_3);
    if (cVar1 != '\0') goto LAB_143a03f83;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"DeleteMapValue\"",
                "Field is not a map field.");
LAB_143a03f83:
  uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
                    /* WARNING: Could not recover jumptable at 0x000143a03fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)((ulonglong)uVar3 + param_2) + 0x18))
            ((longlong *)((ulonglong)uVar3 + param_2),param_4);
  return;
}



// FUNCTION 143a03fc0 FUN_143a03fc0 body=535 status=ok
// SIG undefined FUN_143a03fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a03fc0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"FieldSize",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"FieldSize",
                  "Field is singular; the method requires a repeated field.");
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    iVar2 = FUN_143a009a0(param_3);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
    case 1:
    case 8:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 2:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 3:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 4:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 5:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 6:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 7:
      uVar6 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = FUN_1439f2ae0(uVar6);
      break;
    case 9:
    case 10:
      cVar1 = FUN_143a061d0(param_3);
      if (cVar1 == '\0') {
        lVar5 = FUN_143a00ae0(param_1,param_2,param_3);
        uVar3 = (ulonglong)*(uint *)(lVar5 + 8);
      }
      else {
        plVar4 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
        cVar1 = FUN_143a11350(plVar4);
        if (cVar1 == '\0') {
          uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        }
        else {
          lVar5 = FUN_143a10990();
          uVar3 = (ulonglong)*(uint *)(lVar5 + 8);
        }
      }
      break;
    default:
      uVar6 = FUN_1439eeb00(local_58,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x2fc);
      uVar6 = FUN_1439eef00(uVar6,"Can\'t get here.");
      FUN_1439eec50(local_68,uVar6);
      DsDevice::~DsDevice(local_58);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_143a52e80((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44));
  }
  return uVar3;
}



// FUNCTION 143a04200 FUN_143a04200 body=208 status=ok
// SIG undefined FUN_143a04200(void)

longlong FUN_143a04200(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x30) != -1) {
    lVar3 = FUN_143a3edd0(*(undefined8 *)(param_1 + 0x40));
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x50) == *(longlong *)(param_1 + 8))) {
      return lVar3;
    }
    if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) + 0x48) != '\0') &&
        (lVar3 = FUN_143a3f490(*(undefined8 *)(param_1 + 0x40),param_2), lVar3 != 0)) &&
       (iVar1 = *(int *)(lVar3 + 0x7c), 0 < (longlong)iVar1)) {
      lVar6 = 0;
      lVar7 = lVar6;
      do {
        lVar5 = *(longlong *)(lVar3 + 0x50) + lVar6;
        if (((*(longlong *)(lVar5 + 0x50) == *(longlong *)(param_1 + 8)) &&
            (iVar2 = FUN_143a009a0(lVar5), iVar2 == 0xb)) &&
           ((*(int *)(lVar5 + 0x3c) == 1 && (lVar4 = FUN_143a4f9e0(lVar5), lVar4 == lVar3)))) {
          return lVar5;
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x98;
      } while (lVar7 < iVar1);
    }
  }
  return 0;
}



// FUNCTION 143a042d0 FUN_143a042d0 body=25 status=ok
// SIG undefined FUN_143a042d0(void)

undefined8 FUN_143a042d0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    return 0;
  }
  uVar1 = FUN_143a3ee10(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 8),param_2);
  return uVar1;
}



// FUNCTION 143a042f0 FUN_143a042f0 body=191 status=ok
// SIG undefined FUN_143a042f0(void)

ulonglong FUN_143a042f0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetBool","Field does not match message type.")
    ;
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetBool",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 7) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetBool",7);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53460((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined1 *)(param_3 + 0x90));
    return uVar2;
  }
  pbVar3 = (byte *)FUN_143a00ae0(param_1,param_2,param_3);
  return (ulonglong)*pbVar3;
}



// FUNCTION 143a043b0 FUN_143a043b0 body=192 status=ok
// SIG undefined FUN_143a043b0(void)

undefined8 FUN_143a043b0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetDouble",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetDouble",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 5) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetDouble",5);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar3 = FUN_143a53490((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined8 *)(param_3 + 0x90));
    return uVar3;
  }
  puVar2 = (undefined8 *)FUN_143a00ae0(param_1,param_2,param_3);
  return *puVar2;
}



// FUNCTION 143a04470 FUN_143a04470 body=207 status=ok
// SIG undefined FUN_143a04470(void)

void FUN_143a04470(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetEnumValue",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetEnumValue",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetEnumValue",8);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    puVar4 = (undefined4 *)FUN_143a00ae0(param_1,param_2,param_3);
    uVar2 = *puVar4;
  }
  else {
    lVar3 = FUN_143a4de20(param_3);
    uVar2 = FUN_143a534d0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(lVar3 + 0x10));
  }
  uVar5 = FUN_143a4dfa0(param_3);
  FUN_143a3fb70(uVar5,uVar2);
  return;
}



// FUNCTION 143a04540 FUN_143a04540 body=194 status=ok
// SIG undefined FUN_143a04540(void)

ulonglong FUN_143a04540(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetEnumValue",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetEnumValue",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetEnumValue",8);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    lVar2 = FUN_143a4de20(param_3);
    uVar3 = FUN_143a534d0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(lVar2 + 0x10));
    return uVar3;
  }
  puVar4 = (uint *)FUN_143a00ae0(param_1,param_2,param_3);
  return (ulonglong)*puVar4;
}



// FUNCTION 143a04610 FUN_143a04610 body=157 status=ok
// SIG undefined FUN_143a04610(void)

longlong FUN_143a04610(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x42) == '\0') {
    lVar3 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x28);
    lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  }
  else {
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x80);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x50);
    }
    lVar3 = (param_2 - lVar3) / 0x26 + (param_2 - lVar3 >> 0x3f);
  }
  iVar1 = FUN_143a009a0(param_2);
  uVar2 = *(uint *)(param_1[1] + (longlong)((int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f)) * 4);
  if ((iVar1 == 9) || (iVar1 == 0xc)) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return (ulonglong)uVar2 + *param_1;
}



// FUNCTION 143a046b0 FUN_143a046b0 body=217 status=ok
// SIG undefined FUN_143a046b0(void)

uint FUN_143a046b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 0x58);
  if (lVar5 == 0) {
    if (*(char *)(param_2 + 0x42) == '\0') {
      lVar5 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x28);
    }
    else if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar5 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x80);
    }
    else {
      lVar5 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x50);
    }
    lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
    iVar3 = FUN_143a009a0(param_2);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 8) +
                     (longlong)((int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f)) * 4);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30);
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x50) + 0x68);
    iVar3 = FUN_143a009a0();
    uVar4 = *(uint *)(*(longlong *)(param_1 + 8) +
                     (longlong)((int)((lVar5 - lVar2) / 0x30) + iVar1) * 4);
  }
  if ((iVar3 == 9) || (iVar3 == 0xc)) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4;
}



// FUNCTION 143a04790 FUN_143a04790 body=151 status=ok
// SIG undefined FUN_143a04790(void)

uint FUN_143a04790(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x42) == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x28);
  }
  else {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      lVar3 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x50);
      lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
      goto LAB_143a047e7;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x80);
  }
  lVar3 = (param_2 - lVar3) / 0x26 + (param_2 - lVar3 >> 0x3f);
LAB_143a047e7:
  iVar1 = FUN_143a009a0(param_2);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 8) +
                   (longlong)((int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f)) * 4);
  if ((iVar1 == 9) || (iVar1 == 0xc)) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



// FUNCTION 143a04830 FUN_143a04830 body=192 status=ok
// SIG undefined FUN_143a04830(void)

ulonglong FUN_143a04830(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetFloat","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetFloat",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 6) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetFloat",6);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar3 = FUN_143a53500((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(param_3 + 0x90));
    return uVar3;
  }
  puVar2 = (uint *)FUN_143a00ae0(param_1,param_2,param_3);
  return (ulonglong)*puVar2;
}



// FUNCTION 143a048f0 FUN_143a048f0 body=189 status=ok
// SIG undefined FUN_143a048f0(void)

ulonglong FUN_143a048f0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetInt32","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetInt32",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 1) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetInt32",1);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a534d0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(param_3 + 0x90));
    return uVar2;
  }
  puVar3 = (uint *)FUN_143a00ae0(param_1,param_2,param_3);
  return (ulonglong)*puVar3;
}



// FUNCTION 143a049b0 FUN_143a049b0 body=190 status=ok
// SIG undefined FUN_143a049b0(void)

undefined8 FUN_143a049b0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetInt64","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetInt64",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 2) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetInt64",2);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53540((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined8 *)(param_3 + 0x90));
    return uVar2;
  }
  puVar3 = (undefined8 *)FUN_143a00ae0(param_1,param_2,param_3);
  return *puVar3;
}



// FUNCTION 143a04a70 FUN_143a04a70 body=104 status=ok
// SIG undefined FUN_143a04a70(void)

void FUN_143a04a70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143a009a0(param_3);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_3);
    if (cVar1 != '\0') goto LAB_143a04abb;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"GetMapData\"","Field is not a map field.");
LAB_143a04abb:
  FUN_143a00ae0(param_1,param_2,param_3);
  return;
}



// FUNCTION 143a04ae0 FUN_143a04ae0 body=248 status=ok
// SIG undefined FUN_143a04ae0(void)

longlong FUN_143a04ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetMessage",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetMessage",10);
  }
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0x48);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a4f9e0(param_3);
    lVar5 = FUN_143a5aff0(param_2 + (ulonglong)uVar1,uVar2,uVar4,param_4);
    return lVar5;
  }
  plVar6 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    plVar6 = (longlong *)FUN_143a04610(param_1 + 0x10,param_3);
    lVar5 = *plVar6;
  }
  return lVar5;
}



// FUNCTION 143a04be0 FUN_143a04be0 body=67 status=ok
// SIG undefined FUN_143a04be0(void)

undefined8 FUN_143a04be0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (*(int *)((ulonglong)
               (uint)(*(int *)(param_1 + 0x34) +
                     (int)((param_3 - *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30)) / 0x30) *
                     4) + param_2) == 0) {
    return 0;
  }
  uVar1 = FUN_143a3f1b0(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



// FUNCTION 143a04c30 FUN_143a04c30 body=521 status=ok
// SIG undefined FUN_143a04c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a04c30(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                      longlong param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [4];
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar8 = 0;
  local_74 = 0;
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"GetRawRepeatedField\"",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar4 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) != param_4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRawRepeatedField",param_4);
  }
  if (-1 < param_5) {
    bVar9 = *(int *)(*(longlong *)(param_3 + 0x78) + 0x48) != param_5;
    if (bVar9) {
      uVar6 = FUN_1439eeb00(local_68,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x6c3);
      local_74 = 1;
      uVar6 = FUN_1439eef00(uVar6,"CHECK failed: (field->options().ctype()) == (ctype): ");
      uVar6 = FUN_1439eef00(uVar6,"subtype mismatch");
      FUN_1439eec50(local_78,uVar6);
    }
    uVar8 = (uint)bVar9;
    if (bVar9) {
      uVar8 = 0;
      DsDevice::~DsDevice(local_68);
    }
  }
  if (param_6 != 0) {
    lVar7 = FUN_143a4f9e0(param_3);
    if (lVar7 != param_6) {
      uVar6 = FUN_1439eeb00(local_68,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x6c5);
      uVar8 = uVar8 | 2;
      local_74 = uVar8;
      uVar6 = FUN_1439eef00(uVar6,"CHECK failed: (field->message_type()) == (desc): ");
      uVar6 = FUN_1439eef00(uVar6,"wrong submessage type");
      FUN_1439eec50(local_78,uVar6);
    }
    if ((uVar8 & 2) != 0) {
      DsDevice::~DsDevice(local_68);
    }
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    iVar4 = FUN_143a009a0(param_3);
    if ((iVar4 == 0xb) && (cVar3 = FUN_143a4f8d0(param_3), cVar3 != '\0')) {
      uVar8 = FUN_143a04790(param_1 + 0x10,param_3);
      lVar7 = FUN_143a10990((ulonglong)uVar8 + param_2);
      return lVar7;
    }
    uVar8 = FUN_143a04790(param_1 + 0x10,param_3);
    param_2 = (ulonglong)uVar8 + param_2;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar8 = *(uint *)(param_1 + 0x30);
    uVar2 = FUN_143a4f8e0();
    uVar5 = FUN_143a009a0(param_3);
    local_88 = param_3;
    param_2 = FUN_143a54cf0(param_2 + (ulonglong)uVar8,uVar1,uVar5,uVar2);
  }
  return param_2;
}



// FUNCTION 143a04e40 FUN_143a04e40 body=202 status=ok
// SIG undefined FUN_143a04e40(void)

ulonglong FUN_143a04e40(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedBool",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedBool",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 7) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedBool",7);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53570((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar2;
  }
  uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
  pbVar4 = (byte *)FUN_1439f1d20(uVar3,param_4);
  return (ulonglong)*pbVar4;
}



// FUNCTION 143a04f10 FUN_143a04f10 body=203 status=ok
// SIG undefined FUN_143a04f10(void)

undefined8 FUN_143a04f10(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedDouble",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedDouble",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 5) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedDouble",5);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar3 = FUN_143a53630((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar3;
  }
  uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar2 = (undefined8 *)FUN_1439f1d10(uVar3,param_4);
  return *puVar2;
}



// FUNCTION 143a04fe0 FUN_143a04fe0 body=213 status=ok
// SIG undefined FUN_143a04fe0(void)

void FUN_143a04fe0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedEnumValue",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedEnumValue",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedEnumValue",8);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    uVar4 = FUN_143a00ae0(param_1,param_2,param_3);
    puVar3 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(uVar4,param_4);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = FUN_143a536f0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
  }
  uVar4 = FUN_143a4dfa0(param_3);
  FUN_143a3fb70(uVar4,uVar2);
  return;
}



// FUNCTION 143a050c0 FUN_143a050c0 body=201 status=ok
// SIG undefined FUN_143a050c0(void)

ulonglong FUN_143a050c0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedEnumValue",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedEnumValue",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedEnumValue",8);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a536f0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar2;
  }
  uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar4 = (uint *)mu::FPhysicsBody::GetBodyBoneId(uVar3,param_4);
  return (ulonglong)*puVar4;
}



// FUNCTION 143a05190 FUN_143a05190 body=203 status=ok
// SIG undefined FUN_143a05190(void)

ulonglong FUN_143a05190(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedFloat",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedFloat",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 6) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedFloat",6);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar4 = FUN_143a537b0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar4;
  }
  uVar2 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar3 = (uint *)mu::FPhysicsBody::GetBodyBoneId(uVar2,param_4);
  return (ulonglong)*puVar3;
}



// FUNCTION 143a05260 FUN_143a05260 body=201 status=ok
// SIG undefined FUN_143a05260(void)

ulonglong FUN_143a05260(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedInt32",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 1) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedInt32",1);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53870((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar2;
  }
  uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar4 = (uint *)mu::FPhysicsBody::GetBodyBoneId(uVar3,param_4);
  return (ulonglong)*puVar4;
}



// FUNCTION 143a05330 FUN_143a05330 body=202 status=ok
// SIG undefined FUN_143a05330(void)

undefined8 FUN_143a05330(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedInt64",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 2) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedInt64",2);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53930((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar2;
  }
  uVar2 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar3 = (undefined8 *)FUN_1439f1d10(uVar2,param_4);
  return *puVar3;
}



// FUNCTION 143a05400 FUN_143a05400 body=263 status=ok
// SIG undefined FUN_143a05400(void)

undefined8 FUN_143a05400(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedMessage",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedMessage",10);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar3 = FUN_143a539f0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar3;
  }
  iVar2 = FUN_143a009a0(param_3);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_3);
    if (cVar1 != '\0') {
      uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
      lVar4 = FUN_143a10990(uVar3);
      goto LAB_143a054f5;
    }
  }
  lVar4 = FUN_143a00ae0(param_1,param_2,param_3);
LAB_143a054f5:
  return *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 8 + (longlong)param_4 * 8);
}



// FUNCTION 143a05510 FUN_143a05510 body=224 status=ok
// SIG undefined FUN_143a05510(void)

undefined8
FUN_143a05510(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  if (*(longlong *)(param_4 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_4,"GetRepeatedString",
                  "Field does not match message type.",param_2);
  }
  if (*(int *)(param_4 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_4,"GetRepeatedString",
                  "Field is singular; the method requires a repeated field.",uVar2);
  }
  iVar1 = FUN_143a009a0(param_4);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_4,"GetRepeatedString",9);
  }
  if (*(char *)(param_4 + 0x42) == '\0') {
    uVar2 = FUN_143a00ae0(param_1,param_3,param_4);
    uVar2 = FUN_1439f1d30(uVar2,param_5);
  }
  else {
    uVar2 = FUN_143a53ac0((ulonglong)*(uint *)(param_1 + 0x30) + param_3,
                          *(undefined4 *)(param_4 + 0x44),param_5);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_2,uVar2);
  return param_2;
}



// FUNCTION 143a055f0 FUN_143a055f0 body=198 status=ok
// SIG undefined FUN_143a055f0(void)

void FUN_143a055f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedStringReference",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedStringReference",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedStringReference",9);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a53ac0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4);
    return;
  }
  uVar2 = FUN_143a00ae0(param_1,param_2,param_3);
  FUN_1439f1d30(uVar2,param_4);
  return;
}



// FUNCTION 143a056c0 FUN_143a056c0 body=201 status=ok
// SIG undefined FUN_143a056c0(void)

ulonglong FUN_143a056c0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedUInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedUInt32",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 3) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedUInt32",3);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53b80((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar2;
  }
  uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar4 = (uint *)mu::FPhysicsBody::GetBodyBoneId(uVar3,param_4);
  return (ulonglong)*puVar4;
}



// FUNCTION 143a05790 FUN_143a05790 body=202 status=ok
// SIG undefined FUN_143a05790(void)

undefined8 FUN_143a05790(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetRepeatedUInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedUInt64",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedUInt64",4);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53c40((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar2;
  }
  uVar2 = FUN_143a00ae0(param_1,param_2,param_3);
  puVar3 = (undefined8 *)FUN_1439f1d10(uVar2,param_4);
  return *puVar3;
}



// FUNCTION 143a05860 FUN_143a05860 body=233 status=ok
// SIG undefined FUN_143a05860(void)

undefined8 FUN_143a05860(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = param_2;
  if (*(longlong *)(param_4 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_4,"GetString",
                  "Field does not match message type.",param_2);
  }
  if (*(int *)(param_4 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_4,"GetString",
                  "Field is repeated; the method requires a singular field.",uVar3);
  }
  iVar2 = FUN_143a009a0(param_4);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_4,"GetString",9);
  }
  if (*(char *)(param_4 + 0x42) == '\0') {
    cVar1 = FUN_143a060e0(param_1,param_4);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)FUN_143a00ae0(param_1,param_3,param_4);
      uVar3 = *puVar4;
    }
    else {
      uVar3 = FUN_143a00ae0(param_1,param_3,param_4);
    }
  }
  else {
    uVar3 = FUN_143a53540((ulonglong)*(uint *)(param_1 + 0x30) + param_3,
                          *(undefined4 *)(param_4 + 0x44),*(undefined8 *)(param_4 + 0x90));
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_2,uVar3);
  return param_2;
}



// FUNCTION 143a05950 FUN_143a05950 body=217 status=ok
// SIG undefined FUN_143a05950(void)

undefined8 FUN_143a05950(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetStringReference",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetStringReference",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetStringReference",9);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar3 = FUN_143a53540((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined8 *)(param_3 + 0x90));
    return uVar3;
  }
  cVar1 = FUN_143a060e0(param_1,param_3);
  if (cVar1 != '\0') {
    uVar3 = FUN_143a00ae0(param_1,param_2,param_3);
    return uVar3;
  }
  puVar4 = (undefined8 *)FUN_143a00ae0(param_1,param_2,param_3);
  return *puVar4;
}



// FUNCTION 143a05a30 FUN_143a05a30 body=189 status=ok
// SIG undefined FUN_143a05a30(void)

ulonglong FUN_143a05a30(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetUInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetUInt32",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 3) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetUInt32",3);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a534d0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(param_3 + 0x90));
    return uVar2;
  }
  puVar3 = (uint *)FUN_143a00ae0(param_1,param_2,param_3);
  return (ulonglong)*puVar3;
}



// FUNCTION 143a05af0 FUN_143a05af0 body=190 status=ok
// SIG undefined FUN_143a05af0(void)

undefined8 FUN_143a05af0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"GetUInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"GetUInt64",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"GetUInt64",4);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a53540((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),*(undefined8 *)(param_3 + 0x90));
    return uVar2;
  }
  puVar3 = (undefined8 *)FUN_143a00ae0(param_1,param_2,param_3);
  return *puVar3;
}



// FUNCTION 143a05bb0 FUN_143a05bb0 body=23 status=ok
// SIG undefined FUN_143a05bb0(void)

ulonglong FUN_143a05bb0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
    return *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
  }
  uVar1 = FUN_1439fc800();
  return uVar1;
}



// FUNCTION 143a05bd0 FUN_143a05bd0 body=654 status=ok
// SIG undefined FUN_143a05bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143a05bd0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  float *pfVar8;
  double *pdVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    if (*(char *)(param_3 + 0x42) == '\0') {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x50) + 0x28);
    }
    else if (*(longlong *)(param_3 + 0x60) == 0) {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x80);
    }
    else {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x60) + 0x50);
    }
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)(param_3 / 0x98) * 4);
    return *(uint *)(param_2 + (ulonglong)*(uint *)(param_1 + 0x28) + (ulonglong)(uVar3 >> 5) * 4)
           >> ((byte)uVar3 & 0x1f) & 0xffffff01;
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) == 10) {
    if ((param_2 != *(longlong *)(param_1 + 0x10)) &&
       (plVar4 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3), *plVar4 != 0)) {
      return 1;
    }
    goto LAB_143a05e3e;
  }
  iVar2 = FUN_143a009a0(param_3);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
  case 1:
  case 8:
    piVar7 = (int *)FUN_143a00ae0(param_1,param_2,param_3);
    uVar3 = (uint)(*piVar7 != 0);
    break;
  case 2:
    plVar4 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
    uVar3 = (uint)(*plVar4 != 0);
    break;
  case 3:
    piVar7 = (int *)FUN_143a00ae0(param_1,param_2,param_3);
    uVar3 = (uint)(*piVar7 != 0);
    break;
  case 4:
    plVar4 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
    uVar3 = (uint)(*plVar4 != 0);
    break;
  case 5:
    pdVar9 = (double *)FUN_143a00ae0(param_1,param_2,param_3);
    if (*pdVar9 != 0.0) {
      return 1;
    }
    goto LAB_143a05e3e;
  case 6:
    pfVar8 = (float *)FUN_143a00ae0(param_1,param_2,param_3);
    if (*pfVar8 != 0.0) {
      return 1;
    }
    goto LAB_143a05e3e;
  case 7:
    pcVar6 = (char *)FUN_143a00ae0(param_1,param_2,param_3);
    uVar3 = (uint)(*pcVar6 != '\0');
    break;
  case 9:
    cVar1 = FUN_143a060e0(param_1,param_3);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = (uint)(*(longlong *)(*plVar4 + 0x10) != 0);
    }
    else {
      lVar5 = FUN_143a00ae0(param_1,param_2,param_3);
      uVar3 = (uint)(*(longlong *)(lVar5 + 0x10) != 0);
    }
    break;
  default:
    uVar10 = FUN_1439eeb00(local_58,3,
                           "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                           ,0x7e8);
    uVar10 = FUN_1439eef00(uVar10,"Reached impossible case in HasBit().");
    FUN_1439eec50(local_68,uVar10);
    DsDevice::~DsDevice(local_58);
LAB_143a05e3e:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143a05e90 FUN_143a05e90 body=197 status=ok
// SIG undefined FUN_143a05e90(void)

ulonglong FUN_143a05e90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"HasField","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"HasField",
                  "Field is repeated; the method requires a singular field.");
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar2 = FUN_143a54080((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44));
    return uVar2;
  }
  lVar1 = *(longlong *)(param_3 + 0x58);
  if (lVar1 != 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)*(int *)(param_3 + 0x44) >> 8),
                    *(int *)((ulonglong)
                             (uint)(*(int *)(param_1 + 0x34) +
                                   (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30))
                                        / 0x30) * 4) + param_2) == *(int *)(param_3 + 0x44));
  }
  uVar2 = FUN_143a05bd0(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 143a05f60 FUN_143a05f60 body=53 status=ok
// SIG undefined FUN_143a05f60(void)

undefined4 FUN_143a05f60(longlong param_1,longlong param_2,longlong param_3)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x34) >> 8),
                  *(int *)((ulonglong)
                           (uint)(*(int *)(param_1 + 0x34) +
                                 (int)((param_3 -
                                       *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30)) / 0x30)
                                 * 4) + param_2) != 0);
}



// FUNCTION 143a05fa0 FUN_143a05fa0 body=310 status=ok
// SIG undefined FUN_143a05fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a05fa0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar3 = FUN_143a009a0(param_3);
  if (iVar3 == 0xb) {
    cVar2 = FUN_143a4f8d0(param_3);
    if (cVar2 != '\0') goto LAB_143a0600a;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"InsertOrLookupMapValue\"",
                "Field is not a map field.");
LAB_143a0600a:
  local_40 = 0;
  uStack_38 = 0xf;
  local_50 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_50,"value",5);
  uVar5 = FUN_143a4f9e0(param_3);
  uVar5 = FUN_143a3f170(uVar5,&local_50);
  iVar3 = FUN_143a009a0(uVar5);
  *(undefined4 *)(param_5 + 8) = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4);
  if (0xf < uStack_38) {
    uVar7 = uStack_38 + 1;
    lVar1 = CONCAT71(uStack_4f,local_50);
    lVar6 = lVar1;
    if (0xfff < uVar7) {
      uVar7 = uStack_38 + 0x28;
      lVar6 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar6,uVar7);
  }
  uVar4 = FUN_143a046b0(param_1 + 0x10,param_3);
  (**(code **)(*(longlong *)((ulonglong)uVar4 + param_2) + 0x10))
            ((longlong *)((ulonglong)uVar4 + param_2),param_4,param_5);
  return;
}



// FUNCTION 143a060e0 FUN_143a060e0 body=237 status=ok
// SIG undefined FUN_143a060e0(void)

ulonglong FUN_143a060e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x58);
  if (lVar4 == 0) {
    if (*(char *)(param_2 + 0x42) == '\0') {
      lVar4 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x28);
    }
    else if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar4 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x80);
    }
    else {
      lVar4 = param_2 - *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x50);
    }
    lVar4 = lVar4 / 0x26 + (lVar4 >> 0x3f);
    uVar3 = FUN_143a009a0(param_2);
    if (((int)uVar3 == 9) || ((int)uVar3 == 0xc)) {
      return (ulonglong)
             (*(byte *)(*(longlong *)(param_1 + 0x18) +
                       (longlong)((int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f)) * 4) & 1);
    }
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30);
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x50) + 0x68);
    uVar3 = FUN_143a009a0();
    if (((int)uVar3 == 9) || ((int)uVar3 == 0xc)) {
      return (ulonglong)
             (*(byte *)(*(longlong *)(param_1 + 0x18) +
                       (longlong)((int)((lVar4 - lVar2) / 0x30) + iVar1) * 4) & 1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143a061d0 FUN_143a061d0 body=47 status=ok
// SIG undefined FUN_143a061d0(void)

undefined4 FUN_143a061d0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143a009a0();
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143a06200 FUN_143a06200 body=461 status=ok
// SIG undefined FUN_143a06200(void)

void FUN_143a06200(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  bool bVar11;
  undefined1 local_48;
  longlong local_40;
  
  param_3[1] = *param_3;
  if (param_2 != *(longlong *)(param_1 + 0x10)) {
    uVar7 = 0;
    uVar9 = param_2 + (ulonglong)*(uint *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
      uVar9 = uVar7;
    }
    puVar10 = *(uint **)(param_1 + 0x20);
    uVar5 = (ulonglong)*(int *)(*(longlong *)(param_1 + 8) + 0x68);
    if ((ulonglong)(param_3[2] - *param_3 >> 3) < uVar5) {
      if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::vector<int,std::allocator<int>_>::_Xlength();
      }
      std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
      _Reallocate_exactly(param_3);
    }
    if (-1 < *(int *)(param_1 + 0x50)) {
      do {
        lVar8 = (longlong)(int)uVar7 * 0x98 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
        local_40 = lVar8;
        if (*(int *)(lVar8 + 0x3c) == 3) {
          iVar4 = FUN_143a03fc0(param_1,param_2,lVar8);
          if (0 < iVar4) goto LAB_143a0633b;
        }
        else {
          lVar1 = *(longlong *)(lVar8 + 0x58);
          if (lVar1 == 0) {
            if (uVar9 == 0) {
              cVar3 = FUN_143a05bd0(param_1,param_2,lVar8);
              bVar11 = cVar3 == '\0';
            }
            else {
              bVar11 = (*(uint *)(uVar9 + (ulonglong)(*puVar10 >> 5) * 4) >> ((byte)*puVar10 & 0x1f)
                       & 1) == 0;
            }
            if (!bVar11) goto LAB_143a0633b;
          }
          else if (*(int *)((ulonglong)*(uint *)(param_1 + 0x34) + param_2 +
                           (longlong)
                           (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30)
                           * 4) == *(int *)(lVar8 + 0x44)) {
LAB_143a0633b:
            plVar2 = (longlong *)param_3[1];
            if ((longlong *)param_3[2] == plVar2) {
              std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>
              ::_Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_3,plVar2,&local_40);
            }
            else {
              *plVar2 = lVar8;
              param_3[1] = param_3[1] + 8;
            }
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        puVar10 = puVar10 + 1;
      } while ((int)uVar6 <= *(int *)(param_1 + 0x50));
    }
    if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
      FUN_143a5ae40(param_2 + (ulonglong)*(uint *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x40),param_3);
    }
    FUN_143a01aa0(*param_3,param_3[1],param_3[1] - *param_3 >> 3,local_48);
  }
  return;
}



// FUNCTION 143a063d0 FUN_143a063d0 body=178 status=ok
// SIG undefined FUN_143a063d0(void)

undefined8 FUN_143a063d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = FUN_143a009a0(param_4);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_4);
    if (cVar1 != '\0') goto LAB_143a06439;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_4,"\"MapBegin\"","Field is not a map field.",
                uVar4,uVar5);
LAB_143a06439:
  FUN_1439fd820(param_2,param_3,param_4);
  plVar3 = (longlong *)FUN_143a00ae0(param_1,param_3,param_4);
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return param_2;
}



// FUNCTION 143a06490 FUN_143a06490 body=178 status=ok
// SIG undefined FUN_143a06490(void)

undefined8 FUN_143a06490(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = FUN_143a009a0(param_4);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_4);
    if (cVar1 != '\0') goto LAB_143a064f9;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_4,"\"MapEnd\"","Field is not a map field.",uVar4,
                uVar5);
LAB_143a064f9:
  FUN_1439fd820(param_2,param_3,param_4);
  plVar3 = (longlong *)FUN_143a00ae0(param_1,param_3,param_4);
  (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  return param_2;
}



// FUNCTION 143a06550 FUN_143a06550 body=114 status=ok
// SIG undefined FUN_143a06550(void)

void FUN_143a06550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = FUN_143a009a0(param_3);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_3);
    if (cVar1 != '\0') goto LAB_143a0659b;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"MapSize\"","Field is not a map field.");
LAB_143a0659b:
  plVar3 = (longlong *)FUN_143a00ae0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000143a065be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x48))(plVar3);
  return;
}



// FUNCTION 143a065d0 FUN_143a065d0 body=108 status=ok
// SIG undefined FUN_143a065d0(void)

longlong FUN_143a065d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_143a009a0(param_3);
  if (iVar2 == 0xb) {
    cVar1 = FUN_143a4f8d0(param_3);
    if (cVar1 != '\0') goto LAB_143a0661b;
  }
  FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"GetMapData\"","Field is not a map field.");
LAB_143a0661b:
  uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
  return (ulonglong)uVar3 + param_2;
}



// FUNCTION 143a06640 FUN_143a06640 body=492 status=ok
// SIG undefined FUN_143a06640(void)

void FUN_143a06640(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"MutableMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"MutableMessage",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"MutableMessage",10);
  }
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0x48);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a5be50((ulonglong)*(uint *)(param_1 + 0x30) + (longlong)param_2,param_3,param_4);
    return;
  }
  lVar7 = param_1 + 0x10;
  uVar3 = FUN_143a046b0(lVar7,param_3);
  lVar6 = *(longlong *)(param_3 + 0x58);
  plVar8 = (longlong *)((ulonglong)uVar3 + (longlong)param_2);
  if (lVar6 == 0) {
    FUN_143a076c0(param_1,param_2,param_3);
  }
  else if (*(int *)((ulonglong)
                    (uint)(*(int *)(param_1 + 0x34) +
                          (int)((lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30)) / 0x30)
                          * 4) + (longlong)param_2) != *(int *)(param_3 + 0x44)) {
    FUN_143a03d30(param_1,param_2);
    lVar6 = *(longlong *)(param_3 + 0x58);
    if (lVar6 == 0) {
      FUN_143a076c0(param_1,param_2,param_3);
    }
    else {
      *(undefined4 *)
       ((ulonglong)
        (uint)(*(int *)(param_1 + 0x34) +
              (int)((lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30)) / 0x30) * 4) +
       (longlong)param_2) = *(undefined4 *)(param_3 + 0x44);
    }
    uVar3 = FUN_143a046b0(lVar7,param_3);
    plVar8 = (longlong *)((ulonglong)uVar3 + (longlong)param_2);
    puVar4 = (undefined8 *)FUN_143a04610(lVar7,param_3);
    plVar1 = (longlong *)*puVar4;
    lVar6 = *plVar1;
    uVar5 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar6 = (**(code **)(lVar6 + 0x10))(plVar1,uVar5);
    *plVar8 = lVar6;
  }
  if (*plVar8 == 0) {
    puVar4 = (undefined8 *)FUN_143a04610(lVar7,param_3);
    plVar1 = (longlong *)*puVar4;
    lVar7 = *plVar1;
    uVar5 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar7 = (**(code **)(lVar7 + 0x10))(plVar1,uVar5);
    *plVar8 = lVar7;
  }
  return;
}



// FUNCTION 143a06830 FUN_143a06830 body=404 status=ok
// SIG undefined FUN_143a06830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a06830(longlong param_1,longlong param_2,longlong param_3,int param_4,
                      undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_74 = 0;
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"\"MutableRawRepeatedField\"",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar4 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) != param_4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"MutableRawRepeatedField",param_4);
  }
  if ((param_6 != 0) && (lVar7 = FUN_143a4f9e0(param_3), lVar7 != param_6)) {
    uVar8 = FUN_1439eeb00(local_68,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                          ,0x6ac);
    local_74 = 1;
    uVar8 = FUN_1439eef00(uVar8,"CHECK failed: (field->message_type()) == (desc): ");
    uVar8 = FUN_1439eef00(uVar8,"wrong submessage type");
    FUN_1439eec50(local_78,uVar8);
    DsDevice::~DsDevice(local_68);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    iVar4 = FUN_143a009a0(param_3);
    if ((iVar4 == 0xb) && (cVar3 = FUN_143a4f8d0(param_3), cVar3 != '\0')) {
      uVar6 = FUN_143a04790(param_1 + 0x10,param_3);
      param_2 = FUN_143a12320((ulonglong)uVar6 + param_2);
    }
    else {
      uVar6 = FUN_143a04790(param_1 + 0x10,param_3);
      param_2 = (ulonglong)uVar6 + param_2;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar2 = FUN_143a4f8e0();
    uVar5 = FUN_143a009a0(param_3);
    local_88 = param_3;
    param_2 = FUN_143a54cf0(param_2 + (ulonglong)uVar6,uVar1,uVar5,uVar2);
  }
  return param_2;
}



// FUNCTION 143a069d0 FUN_143a069d0 body=268 status=ok
// SIG undefined FUN_143a069d0(void)

undefined8 FUN_143a069d0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"MutableRepeatedMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"MutableRepeatedMessage",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"MutableRepeatedMessage",10);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar5 = FUN_143a54e30((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                          *(undefined4 *)(param_3 + 0x44),param_4);
    return uVar5;
  }
  iVar3 = FUN_143a009a0(param_3);
  if (iVar3 == 0xb) {
    cVar2 = FUN_143a4f8d0(param_3);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_143a06a9e;
    }
  }
  bVar1 = false;
LAB_143a06a9e:
  uVar4 = FUN_143a046b0(param_1 + 0x10,param_3);
  param_2 = (ulonglong)uVar4 + param_2;
  if (bVar1) {
    param_2 = FUN_143a12320(param_2);
  }
  return *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8 + (longlong)param_4 * 8);
}



// FUNCTION 143a06ae0 FUN_143a06ae0 body=24 status=ok
// SIG undefined FUN_143a06ae0(void)

ulonglong FUN_143a06ae0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2);
  if ((*puVar2 & 1) != 0) {
    return *puVar2 & 0xfffffffffffffffe;
  }
  uVar1 = FUN_141515d60();
  return uVar1;
}



// FUNCTION 143a06b00 FUN_143a06b00 body=205 status=ok
// SIG undefined FUN_143a06b00(void)

void FUN_143a06b00(once_flag *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  once_flag *local_res8 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  once_flag **local_18;
  code *local_10;
  
  local_res8[0] = param_1;
  _guard_xfg_dispatch_icall_nop(local_40);
  local_20 = local_40;
  local_18 = local_res8;
  local_10 = FUN_143a030b0;
  iVar2 = std::_guard_xfg_dispatch_icall_nop(param_1,FUN_143a012f0,&local_20);
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop(local_40);
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    lVar5 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < lVar5) {
      do {
        if (puVar4[1] != 0) {
          FUN_1439fec80(*puVar4,*(undefined8 *)(puVar4[1] + 0x10));
        }
        puVar4 = puVar4 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    return;
  }
  bVar1 = _guard_xfg_dispatch_icall_nop(local_40);
  if (bVar1) {
    uVar3 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
    FUN_143a00820(uVar3);
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 143a06bd0 FUN_143a06bd0 body=243 status=ok
// SIG undefined FUN_143a06bd0(void)

void FUN_143a06bd0(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"ReleaseLast",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"ReleaseLast",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"ReleaseLast",10);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a56160((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44));
    return;
  }
  iVar3 = FUN_143a009a0(param_3);
  if (iVar3 == 0xb) {
    cVar2 = FUN_143a4f8d0(param_3);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_143a06c94;
    }
  }
  bVar1 = false;
LAB_143a06c94:
  uVar4 = FUN_143a046b0(param_1 + 0x10,param_3);
  param_2 = (ulonglong)uVar4 + param_2;
  if (bVar1) {
    param_2 = FUN_143a12320(param_2);
  }
  FUN_143a00ca0(param_2);
  return;
}



// FUNCTION 143a06cd0 FUN_143a06cd0 body=366 status=ok
// SIG undefined FUN_143a06cd0(void)

longlong * FUN_143a06cd0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"ReleaseMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"ReleaseMessage",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"ReleaseMessage",10);
  }
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0x48);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    if ((*(int *)(param_3 + 0x3c) != 3) && (*(longlong *)(param_3 + 0x58) == 0)) {
      FUN_143a037f0(param_1,param_2,param_3);
    }
    lVar1 = *(longlong *)(param_3 + 0x58);
    plVar4 = (longlong *)0x0;
    if (lVar1 != 0) {
      uVar6 = (ulonglong)
              (uint)(*(int *)(param_1 + 0x34) +
                    (int)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30)) / 0x30) * 4);
      if (*(int *)(uVar6 + param_2) != *(int *)(param_3 + 0x44)) goto LAB_143a06deb;
      *(undefined4 *)(uVar6 + param_2) = 0;
    }
    uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
    plVar4 = *(longlong **)((ulonglong)uVar3 + param_2);
    *(undefined8 *)((ulonglong)uVar3 + param_2) = 0;
  }
  else {
    plVar4 = (longlong *)
             FUN_143a5c350((ulonglong)*(uint *)(param_1 + 0x30) + param_2,param_3,param_4);
  }
LAB_143a06deb:
  uVar6 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
  if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
    uVar6 = *(ulonglong *)(uVar6 + 0x18);
  }
  if ((uVar6 != 0) && (plVar4 != (longlong *)0x0)) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar5 + 0x88))(plVar5,plVar4);
    return plVar5;
  }
  return plVar4;
}



// FUNCTION 143a06e40 FUN_143a06e40 body=513 status=ok
// SIG undefined FUN_143a06e40(void)

void FUN_143a06e40(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"RemoveLast",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"RemoveLast",
                  "Field is singular; the method requires a repeated field.");
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    iVar2 = FUN_143a009a0(param_3);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
    case 1:
    case 8:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 2:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 3:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 4:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 5:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 6:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 7:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20a0((ulonglong)uVar3 + param_2);
      return;
    case 9:
      uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f20b0((ulonglong)uVar3 + param_2);
      return;
    case 10:
      goto switchD_143a06edd_caseD_a;
    default:
      return;
    }
  }
  FUN_143a56250((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44));
  return;
switchD_143a06edd_caseD_a:
  cVar1 = FUN_143a061d0(param_3);
  uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
  param_2 = (ulonglong)uVar3 + param_2;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_2 + 8);
    *(int *)(param_2 + 8) = iVar2 + -1;
                    /* WARNING: Could not recover jumptable at 0x000143a07035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x10) + (longlong)iVar2 * 8) + 0x30))();
    return;
  }
  lVar4 = FUN_143a12320(param_2);
  iVar2 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar2 + -1;
                    /* WARNING: Could not recover jumptable at 0x000143a07015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar2 * 8) + 0x30))();
  return;
}



// FUNCTION 143a07070 FUN_143a07070 body=548 status=ok
// SIG undefined FUN_143a07070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a07070(longlong param_1,longlong param_2,longlong param_3,int param_4,
                      longlong param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [4];
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_74 = 0;
  bVar8 = *(int *)(param_3 + 0x3c) != 3;
  if (bVar8) {
    uVar5 = FUN_1439eeb00(local_68,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                          ,0x89d);
    local_74 = 1;
    uVar5 = FUN_1439eef00(uVar5,"CHECK failed: field->is_repeated(): ");
    FUN_1439eec50(local_78,uVar5);
  }
  uVar7 = (uint)bVar8;
  if (bVar8) {
    uVar7 = 0;
    DsDevice::~DsDevice(local_68);
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != param_4) {
    iVar3 = FUN_143a009a0(param_3);
    if ((*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 8) || (param_4 != 1)) {
      uVar5 = FUN_1439eeb00(local_68,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x8a0);
      uVar7 = uVar7 | 2;
      local_74 = uVar7;
      uVar5 = FUN_1439eef00(uVar5,
                            "CHECK failed: field->cpp_type() == cpp_type || (field->cpp_type() == FieldDescriptor::CPPTYPE_ENUM && cpp_type == FieldDescriptor::CPPTYPE_INT32): "
                           );
      uVar5 = FUN_1439eef00(uVar5,"The type parameter T in RepeatedFieldRef<T> API doesn\'t match ")
      ;
      uVar5 = FUN_1439eef00(uVar5,"the actual field type (for enums T should be the generated enum "
                           );
      uVar5 = FUN_1439eef00(uVar5,"type or int32).");
      FUN_1439eec50(local_78,uVar5);
    }
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    DsDevice::~DsDevice(local_68);
  }
  if (param_5 != 0) {
    lVar6 = FUN_143a4f9e0(param_3);
    if (param_5 != lVar6) {
      uVar5 = FUN_1439eeb00(local_68,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x8a5);
      uVar7 = uVar7 | 4;
      local_74 = uVar7;
      uVar5 = FUN_1439eef00(uVar5,"CHECK failed: (message_type) == (field->message_type()): ");
      FUN_1439eec50(local_78,uVar5);
    }
    if ((uVar7 & 4) != 0) {
      DsDevice::~DsDevice(local_68);
    }
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    uVar7 = FUN_143a04790(param_1 + 0x10,param_3);
    param_2 = (ulonglong)uVar7 + param_2;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar7 = *(uint *)(param_1 + 0x30);
    uVar2 = FUN_143a4f8e0(param_3);
    uVar4 = FUN_143a009a0(param_3);
    local_88 = param_3;
    param_2 = FUN_143a54cf0(param_2 + (ulonglong)uVar7,uVar1,uVar4,uVar2);
  }
  return param_2;
}



// FUNCTION 143a072a0 FUN_143a072a0 body=288 status=ok
// SIG undefined FUN_143a072a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a072a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_80 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_1439eeb00(local_78,3,
                        "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc",
                        0x8f);
  uVar6 = *(undefined8 *)(param_4 + 8);
  lVar2 = FUN_143a4dfa0(param_2);
  uVar5 = *(undefined8 *)(lVar2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_1439eef00(uVar1,
                        "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                       );
  uVar1 = FUN_1439eef00(uVar1,param_3);
  uVar1 = FUN_1439eef00(uVar1,"\n  Message type: ");
  uVar3 = FUN_1439eecf0(uVar1,uVar3);
  uVar3 = FUN_1439eef00(uVar3,"\n  Field       : ");
  uVar4 = FUN_1439eecf0(uVar3,uVar4);
  uVar4 = FUN_1439eef00(uVar4,
                        "\n  Problem     : Enum value did not match field type:\n    Expected  : ");
  uVar5 = FUN_1439eecf0(uVar4,uVar5);
  uVar5 = FUN_1439eef00(uVar5,"\n    Actual    : ");
  uVar6 = FUN_1439eecf0(uVar5,uVar6);
  FUN_1439eec50(local_88,uVar6);
  DsDevice::~DsDevice(local_78);
  return;
}



// FUNCTION 143a073c0 FUN_143a073c0 body=231 status=ok
// SIG undefined FUN_143a073c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a073c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar1 = FUN_1439eeb00(local_68,3,
                        "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc")
  ;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_1439eef00(uVar1,
                        "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                       );
  uVar1 = FUN_1439eef00(uVar1,param_3);
  uVar1 = FUN_1439eef00(uVar1,"\n  Message type: ");
  uVar2 = FUN_1439eecf0(uVar1,uVar2);
  uVar2 = FUN_1439eef00(uVar2,"\n  Field       : ");
  uVar3 = FUN_1439eecf0(uVar2,uVar3);
  uVar3 = FUN_1439eef00(uVar3,"\n  Problem     : ");
  uVar3 = FUN_1439eef00(uVar3,param_4);
  FUN_1439eec50(local_78,uVar3);
  DsDevice::~DsDevice(local_68);
  return;
}



// FUNCTION 143a074b0 FUN_143a074b0 body=307 status=ok
// SIG undefined FUN_143a074b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a074b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_80 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_1439eeb00(local_78,3,
                        "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc")
  ;
  iVar1 = FUN_143a009a0(param_2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar1 = *(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4);
  uVar2 = FUN_1439eef00(uVar2,
                        "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                       );
  uVar2 = FUN_1439eef00(uVar2,param_3);
  uVar2 = FUN_1439eef00(uVar2,"\n  Message type: ");
  uVar3 = FUN_1439eecf0(uVar2,uVar3);
  uVar3 = FUN_1439eef00(uVar3,"\n  Field       : ");
  uVar4 = FUN_1439eecf0(uVar3,uVar4);
  uVar4 = FUN_1439eef00(uVar4,
                        "\n  Problem     : Field is not the right type for this message:\n    Expected  : "
                       );
  uVar4 = FUN_1439eef00(uVar4,(&PTR_s_INVALID_CPPTYPE_1468322f0)[param_4]);
  uVar4 = FUN_1439eef00(uVar4,"\n    Field type: ");
  uVar4 = FUN_1439eef00(uVar4,(&PTR_s_INVALID_CPPTYPE_1468322f0)[iVar1]);
  FUN_1439eec50(local_88,uVar4);
  DsDevice::~DsDevice(local_78);
  return;
}



// FUNCTION 143a075f0 FUN_143a075f0 body=197 status=ok
// SIG undefined FUN_143a075f0(void)

void FUN_143a075f0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_3 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != lVar1) {
      lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
      if ((lVar1 != 0) || (lVar1 = (**(code **)(*param_2 + 0x20))(param_2), lVar1 == 0)) {
        plVar4 = (longlong *)FUN_143a06640(param_1,param_2,param_4,0);
        (**(code **)(*plVar4 + 0x88))(plVar4,param_3);
        return;
      }
      uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
      FUN_1414fee00(uVar3,param_3);
    }
  }
  FUN_143a0a9d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a076c0 FUN_143a076c0 body=123 status=ok
// SIG undefined FUN_143a076c0(void)

void FUN_143a076c0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    if (*(char *)(param_3 + 0x42) == '\0') {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x50) + 0x28);
    }
    else if (*(longlong *)(param_3 + 0x60) == 0) {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x80);
    }
    else {
      param_3 = param_3 - *(longlong *)(*(longlong *)(param_3 + 0x60) + 0x50);
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)(param_3 / 0x98) * 4);
    param_2 = param_2 + (ulonglong)*(uint *)(param_1 + 0x28);
    uVar2 = (ulonglong)(uVar1 >> 5);
    *(uint *)(param_2 + uVar2 * 4) = *(uint *)(param_2 + uVar2 * 4) | 1 << (uVar1 & 0x1f);
  }
  return;
}



// FUNCTION 143a07740 FUN_143a07740 body=233 status=ok
// SIG undefined FUN_143a07740(void)

void FUN_143a07740(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_38 [16];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetBool","Field does not match message type.")
    ;
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetBool",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 7) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetBool",7);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a572b0((ulonglong)uVar1 + param_2,uVar2,uVar4,param_4,param_3);
    return;
  }
  FUN_143a00f00(param_1,param_2,param_3,local_38);
  return;
}



// FUNCTION 143a07830 FUN_143a07830 body=241 status=ok
// SIG undefined FUN_143a07830(void)

void FUN_143a07830(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_48 [5];
  
  local_48[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetDouble",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetDouble",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 5) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetDouble",5);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a57330((ulonglong)uVar1 + param_2,uVar2,uVar4,(int)param_4,param_3);
    return;
  }
  FUN_143a00e10(param_1,param_2,param_3,local_48);
  return;
}



// FUNCTION 143a07930 FUN_143a07930 body=121 status=ok
// SIG undefined FUN_143a07930(void)

void FUN_143a07930(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x18);
  lVar2 = FUN_143a4dfa0(param_3);
  if (lVar1 != lVar2) {
    FUN_143a072a0(*(undefined8 *)(param_1 + 8),param_3,"SetEnum",param_4);
  }
  FUN_143a07ad0(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x10));
  return;
}



// FUNCTION 143a079b0 FUN_143a079b0 body=276 status=ok
// SIG undefined FUN_143a079b0(void)

void FUN_143a079b0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetEnumValue",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetEnumValue",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetEnumValue",8);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x3c) != 3) {
    uVar3 = FUN_143a4dfa0(param_3);
    lVar4 = FUN_143a3fad0(uVar3,param_4);
    if (lVar4 == 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x44);
      puVar5 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2);
      if ((*puVar5 & 1) != 0) {
        FUN_1439fbd90(*puVar5 & 0xfffffffffffffffe,uVar1,(longlong)param_4);
        return;
      }
      uVar3 = FUN_141515d60();
      FUN_1439fbd90(uVar3,uVar1,(longlong)param_4);
      return;
    }
  }
  FUN_143a07ad0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a07ad0 FUN_143a07ad0 body=115 status=ok
// SIG undefined FUN_143a07ad0(void)

void FUN_143a07ad0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar3 = FUN_143a009a0(param_3);
    FUN_143a573b0((ulonglong)uVar1 + param_2,uVar2,uVar3,param_4,param_3);
    return;
  }
  FUN_143a00d20();
  return;
}



// FUNCTION 143a07b50 FUN_143a07b50 body=241 status=ok
// SIG undefined FUN_143a07b50(void)

void FUN_143a07b50(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_48 [10];
  
  local_48[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetFloat","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetFloat",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 6) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetFloat",6);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a57420((ulonglong)uVar1 + param_2,uVar2,uVar4,param_4,param_3);
    return;
  }
  FUN_143a00d20(param_1,param_2,param_3,local_48);
  return;
}



// FUNCTION 143a07c50 FUN_143a07c50 body=231 status=ok
// SIG undefined FUN_143a07c50(void)

void FUN_143a07c50(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_38 [4];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetInt32","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetInt32",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 1) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetInt32",1);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a573b0((ulonglong)uVar1 + param_2,uVar2,uVar4,param_4,param_3);
    return;
  }
  FUN_143a00d20(param_1,param_2,param_3,local_38);
  return;
}



// FUNCTION 143a07d40 FUN_143a07d40 body=231 status=ok
// SIG undefined FUN_143a07d40(void)

void FUN_143a07d40(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_38 [2];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetInt64","Field does not match message type."
                 );
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetInt64",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 2) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetInt64",2);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a574a0((ulonglong)uVar1 + param_2,uVar2,uVar4,param_4,param_3);
    return;
  }
  FUN_143a00e10(param_1,param_2,param_3,local_38);
  return;
}



// FUNCTION 143a07e30 FUN_143a07e30 body=225 status=ok
// SIG undefined FUN_143a07e30(void)

void FUN_143a07e30(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 local_38 [24];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedBool",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedBool",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 7) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedBool",7);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a57510((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f2400((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a07f20 FUN_143a07f20 body=228 status=ok
// SIG undefined FUN_143a07f20(void)

void FUN_143a07f20(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 local_38 [3];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedDouble",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedDouble",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 5) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedDouble",5);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a575e0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23f0((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a08010 FUN_143a08010 body=161 status=ok
// SIG undefined FUN_143a08010(void)

void FUN_143a08010(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 local_48 [6];
  
  lVar1 = *(longlong *)(param_5 + 0x18);
  lVar3 = FUN_143a4dfa0(param_3);
  if (lVar1 != lVar3) {
    FUN_143a072a0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedEnum",param_5);
  }
  local_48[0] = *(undefined4 *)(param_5 + 0x10);
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a576b0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,local_48[0]);
    return;
  }
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23e0((ulonglong)uVar2 + param_2,param_4,local_48);
  return;
}



// FUNCTION 143a080c0 FUN_143a080c0 body=335 status=ok
// SIG undefined FUN_143a080c0(void)

void FUN_143a080c0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,int param_5
                  )

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int local_38 [4];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedEnum",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedEnum",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar2 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) != 8) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedEnum",8);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x3c) != 3) {
    uVar4 = FUN_143a4dfa0(param_3);
    lVar5 = FUN_143a3fad0(uVar4,param_5);
    if (lVar5 == 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x44);
      puVar6 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2);
      if ((*puVar6 & 1) != 0) {
        FUN_1439fbd90(*puVar6 & 0xfffffffffffffffe,uVar1,(longlong)param_5);
        return;
      }
      uVar4 = FUN_141515d60();
      FUN_1439fbd90(uVar4,uVar1,(longlong)param_5);
      return;
    }
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a576b0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar3 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23e0((ulonglong)uVar3 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a08210 FUN_143a08210 body=228 status=ok
// SIG undefined FUN_143a08210(void)

void FUN_143a08210(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38 [6];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedFloat",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedFloat",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 6) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedFloat",6);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a57780((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23e0((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a08300 FUN_143a08300 body=223 status=ok
// SIG undefined FUN_143a08300(void)

void FUN_143a08300(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38 [6];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedInt32",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 1) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedInt32",1);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a57850((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23e0((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a083e0 FUN_143a083e0 body=225 status=ok
// SIG undefined FUN_143a083e0(void)

void FUN_143a083e0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 local_38 [3];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedInt64",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 2) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedInt64",2);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a57920((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23f0((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a084d0 FUN_143a084d0 body=232 status=ok
// SIG undefined FUN_143a084d0(void)

void FUN_143a084d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedString",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedString",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedString",9);
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
    puVar3 = (undefined8 *)FUN_1439f1d30((ulonglong)uVar2 + param_2,param_4);
  }
  else {
    puVar3 = (undefined8 *)
             FUN_143a54f00((ulonglong)*(uint *)(param_1 + 0x30) + param_2,
                           *(undefined4 *)(param_3 + 0x44),param_4);
  }
  if (puVar3 != param_5) {
    puVar4 = param_5;
    if (0xf < (ulonglong)param_5[3]) {
      puVar4 = (undefined8 *)*param_5;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar3,puVar4,param_5[2]);
  }
  return;
}



// FUNCTION 143a085c0 FUN_143a085c0 body=223 status=ok
// SIG undefined FUN_143a085c0(void)

void FUN_143a085c0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38 [6];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedUInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedUInt32",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 3) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedUInt32",3);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a579f0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23e0((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a086a0 FUN_143a086a0 body=225 status=ok
// SIG undefined FUN_143a086a0(void)

void FUN_143a086a0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 local_38 [3];
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetRepeatedUInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedUInt64",
                  "Field is singular; the method requires a repeated field.");
  }
  iVar1 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar1 * 4) != 4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetRepeatedUInt64",4);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    FUN_143a57ac0((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                  param_4,param_5);
    return;
  }
  local_38[0] = param_5;
  uVar2 = FUN_143a046b0(param_1 + 0x10,param_3);
  FUN_1439f23f0((ulonglong)uVar2 + param_2,param_4,local_38);
  return;
}



// FUNCTION 143a08790 FUN_143a08790 body=539 status=ok
// SIG undefined FUN_143a08790(void)

void FUN_143a08790(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetString",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetString",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar5 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar5 * 4) != 9) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetString",9);
  }
  puVar10 = param_4;
  if (*(char *)(param_3 + 0x42) == '\0') {
    cVar4 = FUN_143a060e0(param_1,param_3);
    if (cVar4 == '\0') {
      puVar8 = (undefined8 *)FUN_143a04610(param_1 + 0x10,param_3);
      lVar2 = *(longlong *)(param_3 + 0x58);
      puVar8 = (undefined8 *)*puVar8;
      if ((lVar2 != 0) &&
         (*(int *)((ulonglong)
                   (uint)(*(int *)(param_1 + 0x34) +
                         (int)((lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30)) / 0x30) *
                         4) + param_2) != *(int *)(param_3 + 0x44))) {
        FUN_143a03d30(param_1,param_2);
        puVar7 = (undefined8 *)FUN_143a00c20(param_1,param_2,param_3);
        *puVar7 = puVar8;
      }
      uVar11 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
      if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
        uVar11 = *(ulonglong *)(uVar11 + 0x18);
      }
      puVar9 = (undefined8 *)FUN_143a00c20(param_1,param_2,param_3);
      puVar7 = (undefined8 *)*puVar9;
      if (puVar7 == puVar8) {
        FUN_141505a20(puVar9,uVar11,puVar8);
        puVar7 = (undefined8 *)*puVar9;
      }
    }
    else {
      lVar2 = *(longlong *)(param_3 + 0x58);
      if (lVar2 == 0) {
        FUN_143a076c0(param_1,param_2,param_3);
      }
      else {
        *(undefined4 *)
         ((ulonglong)
          (uint)(*(int *)(param_1 + 0x34) +
                (int)((lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30)) / 0x30) * 4) +
         param_2) = *(undefined4 *)(param_3 + 0x44);
      }
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      puVar7 = (undefined8 *)((ulonglong)uVar6 + param_2);
    }
    if (puVar7 == param_4) {
      return;
    }
    if (0xf < (ulonglong)param_4[3]) {
      puVar10 = (undefined8 *)*param_4;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar3 = FUN_143a009a0(param_3);
    puVar7 = (undefined8 *)FUN_143a54fc0(param_2 + (ulonglong)uVar6,uVar1,uVar3,param_3);
    if (puVar7 == param_4) {
      return;
    }
    if (0xf < (ulonglong)param_4[3]) {
      puVar10 = (undefined8 *)*param_4;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (puVar7,puVar10,param_4[2]);
  return;
}



// FUNCTION 143a089b0 FUN_143a089b0 body=231 status=ok
// SIG undefined FUN_143a089b0(void)

void FUN_143a089b0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_38 [4];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetUInt32",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetUInt32",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 3) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetUInt32",3);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a573b0((ulonglong)uVar1 + param_2,uVar2,uVar4,param_4,param_3);
    return;
  }
  FUN_143a00d20(param_1,param_2,param_3,local_38);
  return;
}



// FUNCTION 143a08aa0 FUN_143a08aa0 body=231 status=ok
// SIG undefined FUN_143a08aa0(void)

void FUN_143a08aa0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_38 [2];
  
  local_38[0] = param_4;
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,"SetUInt64",
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,"SetUInt64",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_3);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 4) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_3,"SetUInt64",4);
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_143a009a0(param_3);
    FUN_143a574a0((ulonglong)uVar1 + param_2,uVar2,uVar4,param_4,param_3);
    return;
  }
  FUN_143a00e10(param_1,param_2,param_3,local_38);
  return;
}



// FUNCTION 143a08b90 FUN_143a08b90 body=866 status=ok
// SIG undefined FUN_143a08b90(void)

longlong FUN_143a08b90(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong local_48;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) == 0) {
    uVar4 = FUN_1439fc800();
  }
  else {
    uVar4 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
  }
  lVar5 = FUN_1439fc520(uVar4);
  lVar5 = (ulonglong)uVar1 + lVar5;
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    lVar6 = FUN_143a5c210(param_2 + (ulonglong)*(uint *)(param_1 + 0x30));
    lVar5 = lVar5 + lVar6;
  }
  iVar12 = 0;
  if (-1 < *(int *)(param_1 + 0x50)) {
    local_48 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + local_48;
      if (*(int *)(lVar6 + 0x3c) != 3) {
        lVar13 = *(longlong *)(lVar6 + 0x58);
        if ((lVar13 == 0) ||
           (*(int *)((ulonglong)
                     (uint)(*(int *)(param_1 + 0x34) +
                           (int)((lVar13 - *(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30)) /
                                0x30) * 4) + param_2) == *(int *)(lVar6 + 0x44))) {
          iVar3 = FUN_143a009a0(lVar6);
          if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) == 9) {
            cVar2 = FUN_143a060e0(param_1,lVar6);
            if (cVar2 == '\0') {
              plVar9 = (longlong *)FUN_143a04610(param_1 + 0x10,lVar6);
              lVar13 = *plVar9;
              plVar9 = (longlong *)FUN_143a00ae0(param_1,param_2,lVar6);
              if (*plVar9 == lVar13) goto switchD_143a08c5e_default;
              lVar6 = google::protobuf::internal::StringSpaceUsedExcludingSelf();
              lVar6 = lVar6 + 0x20;
            }
            else {
              uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
              lVar6 = google::protobuf::internal::StringSpaceUsedExcludingSelf(uVar10);
            }
            goto LAB_143a08e9b;
          }
          if ((*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) == 10) &&
             (param_2 != *(longlong *)(param_1 + 0x10))) {
            plVar9 = (longlong *)FUN_143a00ae0(param_1,param_2,lVar6);
            if ((longlong *)*plVar9 != (longlong *)0x0) {
              lVar6 = (**(code **)(*(longlong *)*plVar9 + 0xa0))();
              goto LAB_143a08e9b;
            }
          }
        }
        goto switchD_143a08c5e_default;
      }
      iVar3 = FUN_143a009a0(lVar6);
      switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4)) {
      case 1:
      case 8:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2410(uVar10);
        break;
      case 2:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2430(uVar10);
        break;
      case 3:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2410(uVar10);
        break;
      case 4:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2430(uVar10);
        break;
      case 5:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2430(uVar10);
        break;
      case 6:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2410(uVar10);
        break;
      case 7:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2450(uVar10);
        break;
      case 9:
        uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
        lVar6 = FUN_1439f2460(uVar10);
        break;
      case 10:
        iVar3 = FUN_143a009a0(lVar6);
        if ((iVar3 == 0xb) && (cVar2 = FUN_143a4f8d0(lVar6), cVar2 != '\0')) {
          uVar10 = FUN_143a00ae0(param_1,param_2,lVar6);
          lVar6 = FUN_143a12520(uVar10);
          break;
        }
        lVar6 = FUN_143a00ae0(param_1,param_2,lVar6);
        piVar7 = *(int **)(lVar6 + 0x10);
        lVar13 = (longlong)*(int *)(lVar6 + 0xc) << 3;
        if (piVar7 != (int *)0x0) {
          iVar3 = 0;
          if (0 < *piVar7) {
            lVar11 = 0;
            do {
              lVar8 = (**(code **)(**(longlong **)(lVar11 + 8 + (longlong)piVar7) + 0xa0))();
              iVar3 = iVar3 + 1;
              lVar11 = lVar11 + 8;
              lVar13 = lVar13 + lVar8;
              piVar7 = *(int **)(lVar6 + 0x10);
            } while (iVar3 < *piVar7);
          }
          lVar13 = lVar13 + 8;
        }
        lVar5 = lVar5 + lVar13;
      default:
        goto switchD_143a08c5e_default;
      }
LAB_143a08e9b:
      lVar5 = lVar5 + lVar6;
switchD_143a08c5e_default:
      local_48 = local_48 + 0x98;
      iVar12 = iVar12 + 1;
    } while (iVar12 <= *(int *)(param_1 + 0x50));
  }
  return lVar5;
}



// FUNCTION 143a08f20 FUN_143a08f20 body=16 status=ok
// SIG undefined FUN_143a08f20(void)

undefined8 FUN_143a08f20(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x3c) == 3);
}


