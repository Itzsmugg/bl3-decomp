// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1439efd10 FUN_1439efd10 body=127 status=ok
// SIG undefined FUN_1439efd10(void)

longlong FUN_1439efd10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar3 = (longlong *)(lVar2 + 0x28);
  if (*plVar3 == *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 == 0) || (*(longlong **)(lVar2 + 8) != plVar3)) {
      lVar2 = FUN_1439eff10(param_1,param_2);
      return lVar2;
    }
  }
  lVar1 = *(longlong *)(lVar2 + 0x28);
  if ((ulonglong)(*(longlong *)(lVar2 + 0x30) - lVar1) < param_2) {
    lVar2 = FUN_1439eff90(lVar2,param_2);
    return lVar2;
  }
  *(ulonglong *)(lVar2 + 0x28) = lVar1 + param_2;
  return lVar1;
}



// FUNCTION 1439efd90 FUN_1439efd90 body=35 status=ok
// SIG undefined FUN_1439efd90(void)

longlong FUN_1439efd90(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[5];
  if (param_2 <= (ulonglong)(param_1[6] - lVar1)) {
    param_1[5] = lVar1 + param_2;
    return lVar1;
  }
  *(longlong *)(param_1[2] + 8) = (*(longlong *)(param_1[2] + 0x10) - param_1[6]) + param_1[5];
  lVar1 = FUN_1439f00c0(*param_1,param_1[2],param_2);
  param_1[2] = lVar1;
  param_1[5] = *(longlong *)(lVar1 + 8) + lVar1;
  param_1[6] = lVar1 + *(longlong *)(lVar1 + 0x10);
  lVar1 = FUN_1439efd90(param_1,param_2);
  return lVar1;
}



// FUNCTION 1439efdc0 FUN_1439efdc0 body=74 status=ok
// SIG undefined FUN_1439efdc0(void)

longlong FUN_1439efdc0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar3 = (longlong *)(lVar1 + 0x28);
  if (*plVar3 == *(longlong *)(param_1 + 0x20)) {
    lVar1 = FUN_1439efe10(*(undefined8 *)(lVar1 + 0x30));
    return lVar1;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 8) == plVar3)) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    if ((ulonglong)(*(longlong *)(lVar1 + 0x30) - lVar2) < param_2) {
      lVar2 = FUN_1439eff90();
    }
    else {
      *(ulonglong *)(lVar1 + 0x28) = lVar2 + param_2;
    }
    if (*(longlong **)(lVar1 + 0x38) == *(longlong **)(lVar1 + 0x40)) {
      FUN_1439efc60(lVar1,lVar2,param_3);
      return lVar2;
    }
    **(longlong **)(lVar1 + 0x38) = lVar2;
    *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 8) = param_3;
    *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 0x10;
    return lVar2;
  }
  lVar1 = FUN_1439efea0(param_1);
  return lVar1;
}



// FUNCTION 1439efe10 FUN_1439efe10 body=133 status=ok
// SIG undefined FUN_1439efe10(void)

longlong FUN_1439efe10(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((ulonglong)(*(longlong *)(param_1 + 0x30) - lVar1) < param_2) {
    lVar1 = FUN_1439eff90();
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = lVar1 + param_2;
  }
  if (*(longlong **)(param_1 + 0x38) == *(longlong **)(param_1 + 0x40)) {
    FUN_1439efc60(param_1,lVar1,param_3);
    return lVar1;
  }
  **(longlong **)(param_1 + 0x38) = lVar1;
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = param_3;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 0x10;
  return lVar1;
}



// FUNCTION 1439efea0 FUN_1439efea0 body=103 status=ok
// SIG undefined FUN_1439efea0(void)

void FUN_1439efea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar2 = (longlong *)(lVar1 + 0x28);
  if (*plVar2 == *(longlong *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 == 0) || (*(longlong **)(lVar1 + 8) != plVar2)) {
      lVar1 = FUN_1439efff0();
    }
  }
  FUN_1439efe10(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1439eff10 FUN_1439eff10 body=127 status=ok
// SIG undefined FUN_1439eff10(void)

longlong FUN_1439eff10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar3 = (longlong *)(lVar2 + 0x28);
  if (*plVar3 == *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 == 0) || (*(longlong **)(lVar2 + 8) != plVar3)) {
      lVar2 = FUN_1439efff0(param_1);
    }
  }
  lVar1 = *(longlong *)(lVar2 + 0x28);
  if ((ulonglong)(*(longlong *)(lVar2 + 0x30) - lVar1) < param_2) {
    lVar2 = FUN_1439eff90(lVar2,param_2);
    return lVar2;
  }
  *(ulonglong *)(lVar2 + 0x28) = lVar1 + param_2;
  return lVar1;
}



// FUNCTION 1439eff90 FUN_1439eff90 body=95 status=ok
// SIG undefined FUN_1439eff90(void)

void FUN_1439eff90(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *(longlong *)(param_1[2] + 8) = (*(longlong *)(param_1[2] + 0x10) - param_1[6]) + param_1[5];
  lVar1 = FUN_1439f00c0(*param_1,param_1[2],param_2);
  param_1[2] = lVar1;
  param_1[5] = *(longlong *)(lVar1 + 8) + lVar1;
  param_1[6] = lVar1 + *(longlong *)(lVar1 + 0x10);
  FUN_1439efd90(param_1,param_2);
  return;
}



// FUNCTION 1439efff0 FUN_1439efff0 body=199 status=ok
// SIG undefined FUN_1439efff0(void)

longlong FUN_1439efff0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  for (puVar4 = (undefined8 *)*param_1; puVar4 != (undefined8 *)0x0;
      puVar4 = *(undefined8 **)((longlong)puVar4 + 0x20)) {
    if (*(longlong *)((longlong)puVar4 + 8) == param_2) goto LAB_1439f007b;
  }
  lVar1 = FUN_1439f00c0(param_1,0,0x48,param_4,0);
  *(undefined8 *)(lVar1 + 8) = 0x60;
  puVar4 = (undefined8 *)(lVar1 + 0x18);
  *puVar4 = param_1;
  *(longlong *)(lVar1 + 0x20) = param_2;
  *(longlong *)(lVar1 + 0x28) = lVar1;
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 8) + lVar1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x10) + lVar1;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  lVar2 = *param_1;
  do {
    *(longlong *)(lVar1 + 0x38) = lVar2;
    LOCK();
    lVar3 = *param_1;
    bVar5 = lVar2 == lVar3;
    if (bVar5) {
      *param_1 = (longlong)puVar4;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar5);
LAB_1439f007b:
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 **)(lVar2 + 0x30) = puVar4;
  *(longlong *)(lVar2 + 0x28) = param_1[4];
  param_1[1] = (longlong)puVar4;
  return (longlong)puVar4;
}



// FUNCTION 1439f00c0 FUN_1439f00c0 body=239 status=ok
// SIG undefined FUN_1439f00c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f00c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_84 = 0;
  if (param_2 == 0) {
    uVar4 = *(ulonglong *)(param_1 + 0x28);
  }
  else {
    uVar3 = *(longlong *)(param_2 + 0x10) * 2;
    uVar4 = *(ulonglong *)(param_1 + 0x30);
    if (uVar3 <= *(ulonglong *)(param_1 + 0x30)) {
      uVar4 = uVar3;
    }
  }
  if (0xffffffffffffffe7 < param_3) {
    uVar1 = FUN_1439eeb00(local_70,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\arena.cc");
    local_84 = 1;
    uVar1 = FUN_1439eef00(uVar1,
                          "CHECK failed: (min_bytes) <= (std::numeric_limits<size_t>::max() - kBlockHeaderSize): "
                         );
    FUN_1439eec50(local_88,uVar1);
    DsDevice::~DsDevice(local_70);
  }
  uVar3 = param_3 + 0x18;
  if (param_3 + 0x18 <= uVar4) {
    uVar3 = uVar4;
  }
  local_78 = uVar3;
  plVar2 = (longlong *)(**(code **)(param_1 + 0x48))(uVar3);
  *plVar2 = param_2;
  plVar2[1] = 0x18;
  plVar2[2] = uVar3;
  LOCK();
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar3;
  UNLOCK();
  return;
}



// FUNCTION 1439f01b0 FUN_1439f01b0 body=29 status=ok
// SIG undefined FUN_1439f01b0(void)

void FUN_1439f01b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439f01c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x58))(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 1439f01d0 FUN_1439f01d0 body=18 status=ok
// SIG undefined FUN_1439f01d0(void)

void FUN_1439f01d0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1439efb50(param_1,param_2,&LAB_1439f0370);
    return;
  }
  return;
}



// FUNCTION 1439f01f0 _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char> body=377 status=ok
// SIG undefined _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,char param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    _Xlen();
  }
  uVar1 = param_1[3];
  uVar3 = _Size + param_2 | 0xf;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
     (uVar4 = (uVar1 >> 1) + uVar1, uVar5 = uVar3, uVar3 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5 + 1;
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)operator_new(uVar3);
    }
  }
  else {
    uVar4 = uVar5 + 0x28;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar2 = operator_new(uVar4);
    if (lVar2 == 0) goto LAB_1439f031e;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  param_1[2] = _Size + param_2;
  pvVar6 = (void *)((longlong)_Dst + _Size);
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
    ::_guard_xfg_dispatch_icall_nop(pvVar6,(int)param_5,param_4);
    *(undefined1 *)((longlong)pvVar6 + param_4) = 0;
  }
  else {
    _Src = (void *)*param_1;
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    ::_guard_xfg_dispatch_icall_nop(pvVar6,(int)param_5,param_4);
    uVar5 = uVar1 + 1;
    *(undefined1 *)((longlong)pvVar6 + param_4) = 0;
    pvVar6 = _Src;
    if (0xfff < uVar5) {
      pvVar6 = *(void **)((longlong)_Src + -8);
      uVar5 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6))) {
LAB_1439f031e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pvVar6,uVar5);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 1439f0390 FUN_1439f0390 body=11 status=ok
// SIG undefined FUN_1439f0390(void)

void FUN_1439f0390(undefined8 *param_1)

{
  *param_1 = google::protobuf::io::ZeroCopyOutputStream::vftable;
  return;
}



// FUNCTION 1439f03a0 FUN_1439f03a0 body=43 status=ok
// SIG undefined FUN_1439f03a0(void)

undefined8 * FUN_1439f03a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::io::ZeroCopyOutputStream::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1439f03d0 FUN_1439f03d0 body=367 status=ok
// SIG undefined FUN_1439f03d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439f03d0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  longlong local_78 [3];
  ulonglong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_80 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar5 = param_2[2];
  uVar1 = (**(code **)(*param_1 + 0x58))();
  if (uVar1 < 0x80000000) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
              (param_2,uVar1 + lVar5,0);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    lVar5 = (longlong)param_2 + lVar5;
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
    uVar6 = lVar4 - lVar5;
    if (uVar6 != uVar1) {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1439f0560(uVar1,uVar2,uVar6,param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,local_78);
    uVar3 = FUN_1439eeb00(local_58,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc",
                          0x1bf);
    uVar2 = FUN_1439eecf0(uVar3,uVar2);
    uVar2 = FUN_1439eef00(uVar2," exceeded maximum protobuf size of 2GB: ");
    uVar2 = FUN_1439eef30(uVar2,uVar1);
    FUN_1439eec50(local_88,uVar2);
    DsDevice::~DsDevice(local_58);
    if (0xf < local_60) {
      uVar1 = local_60 + 1;
      lVar5 = local_78[0];
      if (0xfff < uVar1) {
        uVar1 = local_60 + 0x28;
        lVar5 = *(longlong *)(local_78[0] + -8);
        if (0x1f < (local_78[0] - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1439f0540 FUN_1439f0540 body=22 status=ok
// SIG undefined FUN_1439f0540(void)

void FUN_1439f0540(void)

{
  FUN_1439f03d0();
  return;
}



// FUNCTION 1439f0560 FUN_1439f0560 body=607 status=ok
// SIG undefined FUN_1439f0560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f0560(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  uint local_84;
  undefined8 local_80;
  longlong local_78 [3];
  ulonglong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_80 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar5 = 0;
  local_84 = 0;
  if (param_1 != param_2) {
    uVar1 = (**(code **)(*param_4 + 8))(param_4,local_78);
    local_84 = 1;
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc",
                          0x4b);
    uVar5 = 3;
    local_84 = 3;
    uVar2 = FUN_1439eef00(uVar2,
                          "CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): "
                         );
    uVar1 = FUN_1439eecf0(uVar2,uVar1);
    uVar1 = FUN_1439eef00(uVar1," was modified concurrently during serialization.");
    FUN_1439eec50(local_88,uVar1);
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    DsDevice::~DsDevice(local_58);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffe;
    if (0xf < local_60) {
      uVar4 = local_60 + 1;
      lVar3 = local_78[0];
      if (0xfff < uVar4) {
        uVar4 = local_60 + 0x28;
        lVar3 = *(longlong *)(local_78[0] + -8);
        if (0x1f < (local_78[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar4);
    }
  }
  if (param_3 != param_1) {
    uVar1 = (**(code **)(*param_4 + 8))(param_4,local_78);
    local_84 = uVar5 | 4;
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc");
    uVar5 = uVar5 | 0xc;
    local_84 = uVar5;
    uVar2 = FUN_1439eef00(uVar2,
                          "CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): "
                         );
    uVar2 = FUN_1439eef00(uVar2,
                          "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or it may be caused by concurrent modification of "
                         );
    uVar1 = FUN_1439eecf0(uVar2,uVar1);
    uVar1 = FUN_1439eef00(uVar1,&DAT_143f47cc0);
    FUN_1439eec50(local_88,uVar1);
  }
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    DsDevice::~DsDevice(local_58);
  }
  if (((uVar5 & 4) != 0) && (0xf < local_60)) {
    uVar4 = local_60 + 1;
    lVar3 = local_78[0];
    if (0xfff < uVar4) {
      uVar4 = local_60 + 0x28;
      lVar3 = *(longlong *)(local_78[0] + -8);
      if (0x1f < (local_78[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  uVar1 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc");
  uVar1 = FUN_1439eef00(uVar1,"This shouldn\'t be called if all the sizes are equal.");
  FUN_1439eec50(local_88,uVar1);
  DsDevice::~DsDevice(local_58);
  return;
}



// FUNCTION 1439f07d0 FUN_1439f07d0 body=658 status=ok
// SIG undefined FUN_1439f07d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1439f07d0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_50 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_58 = 1;
  local_48 = param_1;
  if ((ulonglong)param_1[3] < 6) {
    local_68 = 6;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (param_1,6,0,"Can\'t ");
  }
  else {
    param_1[2] = 6;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,"Can\'t ",6);
    *(undefined1 *)((longlong)puVar2 + 6) = 0;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(param_1,param_2);
  lVar4 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar4) < 0x12) {
    local_68 = 0x12;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (param_1,0x12,0," message of type \"");
  }
  else {
    param_1[2] = lVar4 + 0x12;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar2 + lVar4)," message of type \"",0x12);
    *(undefined1 *)((longlong)puVar2 + lVar4 + 0x12) = 0;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_3 + 8))(param_3,local_40);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,puVar2,puVar1[2]);
  if (0xf < local_28) {
    uVar3 = local_28 + 1;
    lVar4 = local_40[0];
    if (0xfff < uVar3) {
      uVar3 = local_28 + 0x28;
      lVar4 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar4,uVar3);
  }
  lVar4 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar4) < 0x29) {
    local_68 = 0x29;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (param_1,0x29,0,"\" because it is missing required fields: ");
  }
  else {
    param_1[2] = lVar4 + 0x29;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)puVar2 + lVar4),"\" because it is missing required fields: ",0x29)
    ;
    *(undefined1 *)((longlong)puVar2 + lVar4 + 0x29) = 0;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_3 + 0x40))(param_3,local_40);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,puVar2,puVar1[2]);
  if (0xf < local_28) {
    uVar3 = local_28 + 1;
    lVar4 = local_40[0];
    if (0xfff < uVar3) {
      uVar3 = local_28 + 0x28;
      lVar4 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar4,uVar3);
  }
  return param_1;
}



// FUNCTION 1439f0a70 FUN_1439f0a70 body=58 status=ok
// SIG undefined FUN_1439f0a70(void)

undefined1 * FUN_1439f0a70(undefined8 param_1,undefined1 *param_2)

{
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_2,"(cannot determine missing fields for lite message)",0x32);
  return param_2;
}



// FUNCTION 1439f0ab0 FUN_1439f0ab0 body=313 status=ok
// SIG undefined FUN_1439f0ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439f0ab0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined1 local_98 [24];
  char local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_a0 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a4 = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 0x78))();
  if (piVar2 == (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x70))();
    FUN_143a500d0(local_78,param_2,iVar1,0xffffffff);
    FUN_1439f8370(local_98,local_78);
    (**(code **)(*param_1 + 0x60))(param_1,local_98);
    if (local_80 != '\0') {
      uVar3 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc",
                            0x216);
      local_a4 = 1;
      uVar3 = FUN_1439eef00(uVar3,"CHECK failed: !coded_out.HadError(): ");
      FUN_1439eec50(local_a8,uVar3);
      DsDevice::~DsDevice(local_58);
    }
    param_2 = param_2 + iVar1;
    FUN_1439f8450(local_98);
  }
  else {
    local_b8 = param_2;
    param_2 = FUN_1439f60c0(param_1,*(longlong *)(piVar2 + 2) + 0x18,*piVar2 + -1,0);
  }
  return param_2;
}



// FUNCTION 1439f0bf0 FUN_1439f0bf0 body=233 status=ok
// SIG undefined FUN_1439f0bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439f0bf0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong local_68 [3];
  ulonglong local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_70 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 == '\0') {
    uVar2 = FUN_1439f07d0(local_68,"parse",param_1);
    uVar3 = FUN_1439eeb00(local_48,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc");
    uVar2 = FUN_1439eecf0(uVar3,uVar2);
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_48);
    if (0xf < local_50) {
      uVar5 = local_50 + 1;
      lVar4 = local_68[0];
      if (0xfff < uVar5) {
        uVar5 = local_50 + 0x28;
        lVar4 = *(longlong *)(local_68[0] + -8);
        if (0x1f < (local_68[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar5);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1439f0ce0 FUN_1439f0ce0 body=34 status=ok
// SIG undefined FUN_1439f0ce0(void)

void FUN_1439f0ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != param_1) {
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,puVar1,param_1[2]);
    return;
  }
  return;
}



// FUNCTION 1439f0d10 FUN_1439f0d10 body=52 status=ok
// SIG undefined FUN_1439f0d10(void)

undefined8 FUN_1439f0d10(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if (param_2 != 0) {
    FUN_1439f01d0(param_2,uVar1);
  }
  return uVar1;
}



// FUNCTION 1439f0d50 FUN_1439f0d50 body=200 status=ok
// SIG undefined FUN_1439f0d50(void)

undefined8 FUN_1439f0d50(longlong *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_3c;
  undefined2 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  (**(code **)(*param_1 + 0x30))();
  local_50 = param_2 + param_3;
  local_48 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0x7fffffff;
  local_24 = DAT_1468322e0;
  local_20 = DAT_1468322e0;
  local_18 = 0;
  uStack_10 = 0;
  local_58 = param_2;
  local_40 = param_3;
  local_30 = param_3;
  cVar2 = (**(code **)(*param_1 + 0x50))(param_1,&local_58);
  if ((cVar2 == '\0') || ((char)local_34 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_1439f83f0(&local_58);
  if ((bVar1) && (cVar2 = FUN_1439f0bf0(param_1), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1439f0e20 FUN_1439f0e20 body=229 status=ok
// SIG undefined FUN_1439f0e20(void)

undefined8
FUN_1439f0e20(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_3c;
  undefined2 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = 0xfffffffffffffffe;
  (**(code **)(*param_1 + 0x30))();
  local_58 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_58 = (undefined8 *)*param_2;
  }
  local_40 = (int)param_2[2];
  local_50 = (longlong)local_40 + (longlong)local_58;
  local_48 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0x7fffffff;
  local_24 = DAT_1468322e0;
  local_20 = DAT_1468322e0;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = local_40;
  cVar2 = (**(code **)(*param_1 + 0x50))(param_1,&local_58,param_3,param_4,uVar3);
  if ((cVar2 == '\0') || ((char)local_34 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_1439f83f0(&local_58);
  if (bVar1) {
    cVar2 = FUN_1439f0bf0(param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1439f0f10 FUN_1439f0f10 body=100 status=ok
// SIG undefined FUN_1439f0f10(void)

undefined8 * FUN_1439f0f10(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  cVar1 = FUN_1439f03d0();
  if (cVar1 == '\0') {
    param_2[2] = 0;
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  return param_2;
}



// FUNCTION 1439f0f80 FUN_1439f0f80 body=346 status=ok
// SIG undefined FUN_1439f0f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439f0f80(longlong *param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  longlong local_78 [3];
  ulonglong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_80 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = (**(code **)(*param_1 + 0x58))();
  if (uVar1 < 0x80000000) {
    if (uVar1 <= (ulonglong)(longlong)param_3) {
      lVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_2);
      if (lVar4 - param_2 != uVar1) {
        uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
        FUN_1439f0560(uVar1,uVar2,lVar4 - param_2,param_1);
      }
      return 1;
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,local_78);
    uVar3 = FUN_1439eeb00(local_58,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc",
                          0x1e0);
    uVar2 = FUN_1439eecf0(uVar3,uVar2);
    uVar2 = FUN_1439eef00(uVar2," exceeded maximum protobuf size of 2GB: ");
    uVar2 = FUN_1439eef30(uVar2,uVar1);
    FUN_1439eec50(local_88,uVar2);
    DsDevice::~DsDevice(local_58);
    if (0xf < local_60) {
      uVar1 = local_60 + 1;
      lVar4 = local_78[0];
      if (0xfff < uVar1) {
        uVar1 = local_60 + 0x28;
        lVar4 = *(longlong *)(local_78[0] + -8);
        if (0x1f < (local_78[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar1);
    }
  }
  return 0;
}



// FUNCTION 1439f10e0 FUN_1439f10e0 body=47 status=ok
// SIG undefined FUN_1439f10e0(void)

void FUN_1439f10e0(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)param_2 = 0;
  FUN_1439f03d0();
  return;
}



// FUNCTION 1439f1110 FUN_1439f1110 body=57 status=ok
// SIG undefined FUN_1439f1110(void)

void FUN_1439f1110(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x78))();
  FUN_1439f4800(param_1,*(longlong *)(piVar1 + 2) + 0x18,*piVar1 + -1,param_2);
  return;
}



// FUNCTION 1439f1150 FUN_1439f1150 body=360 status=ok
// SIG undefined FUN_1439f1150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439f1150(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_98 [4];
  uint local_94;
  undefined1 local_90 [24];
  char local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_70 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_94 = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 0x78))();
  if (piVar2 == (int *)0x0) {
    if (DAT_146ba2fd8 == '\0') {
      param_2 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x70))();
      FUN_143a500d0(local_68,param_2,iVar1,0xffffffff);
      FUN_1439f8370(local_90,local_68);
      local_76 = 1;
      (**(code **)(*param_1 + 0x60))(param_1,local_90);
      uVar4 = local_94;
      if (local_78 != '\0') {
        uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\message_lite.cc"
                              ,0x17b);
        local_94 = 1;
        uVar3 = FUN_1439eef00(uVar3,"CHECK failed: !coded_out.HadError(): ");
        FUN_1439eec50(local_98,uVar3);
        uVar4 = 1;
      }
      if ((uVar4 & 1) != 0) {
        DsDevice::~DsDevice(local_48);
      }
      param_2 = param_2 + iVar1;
      FUN_1439f8450(local_90);
    }
  }
  else {
    local_a8 = param_2;
    param_2 = FUN_1439f60c0(param_1,*(longlong *)(piVar2 + 2) + 0x18,*piVar2 + -1);
  }
  return param_2;
}



// FUNCTION 1439f12c0 resize body=147 status=ok
// SIG undefined resize(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
               (undefined8 *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong _Size;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return;
  }
  _Size = param_2 - uVar1;
  if (_Size <= param_1[3] - uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + uVar1),(int)param_3,_Size);
    *(undefined1 *)((longlong)((longlong)param_1 + uVar1) + _Size) = 0;
    return;
  }
  _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>
            (param_1,_Size,0,_Size,param_3);
  return;
}



// FUNCTION 1439f1360 FUN_1439f1360 body=222 status=ok
// SIG undefined FUN_1439f1360(void)

void FUN_1439f1360(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 0;
  piVar6 = (int *)param_1[2];
  if ((piVar6 != (int *)0x0) && (*param_1 == 0)) {
    iVar1 = *piVar6;
    if (0 < (longlong)iVar1) {
      do {
        plVar2 = *(longlong **)(piVar6 + lVar8 * 2 + 2);
        if (plVar2 != (longlong *)0x0) {
          uVar3 = plVar2[3];
          if (0xf < uVar3) {
            lVar4 = *plVar2;
            uVar7 = uVar3 + 1;
            lVar5 = lVar4;
            if (0xfff < uVar7) {
              lVar5 = *(longlong *)(lVar4 + -8);
              uVar7 = uVar3 + 0x28;
              if (0x1f < (lVar4 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar5,uVar7);
          }
          plVar2[2] = 0;
          plVar2[3] = 0xf;
          *(undefined1 *)plVar2 = 0;
          FMemory::operator_delete(plVar2,0x20);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar1);
      piVar6 = (int *)param_1[2];
    }
    FMemory::operator_delete(piVar6,(longlong)*(int *)((longlong)param_1 + 0xc) * 8 + 8);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 1439f1440 FUN_1439f1440 body=315 status=ok
// SIG undefined FUN_1439f1440(void)

void FUN_1439f1440(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_5;
  lVar8 = (longlong)param_4;
  if (0 < lVar9) {
    lVar5 = 0;
    plVar7 = param_2;
    do {
      if (lVar8 <= lVar5) break;
      plVar1 = *(longlong **)((param_3 - (longlong)param_2) + (longlong)plVar7);
      if ((longlong *)*plVar7 != plVar1) {
        plVar4 = plVar1;
        if (0xf < (ulonglong)plVar1[3]) {
          plVar4 = (longlong *)*plVar1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (*plVar7,plVar4,plVar1[2]);
      }
      lVar5 = lVar5 + 1;
      plVar7 = plVar7 + 1;
    } while (lVar5 < lVar9);
  }
  lVar5 = *param_1;
  if (lVar9 < lVar8) {
    plVar7 = param_2 + lVar9;
    lVar8 = lVar8 - lVar9;
    do {
      puVar2 = *(undefined8 **)((longlong)plVar7 + (param_3 - (longlong)param_2));
      if (lVar5 == 0) {
        puVar3 = (undefined8 *)operator_new(0x20);
        puVar6 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) goto LAB_1439f1520;
      }
      else {
        if (*(longlong *)(lVar5 + 0x70) != 0) {
          FUN_1439f01b0(lVar5,&std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                               ::RTTI_Type_Descriptor,0x20);
        }
        puVar3 = (undefined8 *)
                 FUN_1439efdc0(lVar5,0x20,
                               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                               ::_Tidy_deallocate);
LAB_1439f1520:
        puVar3[2] = 0;
        puVar3[3] = 0xf;
        *(undefined1 *)puVar3 = 0;
        puVar6 = puVar3;
      }
      if (puVar6 != puVar2) {
        puVar3 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar3 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar6,puVar3,puVar2[2]);
      }
      *plVar7 = (longlong)puVar6;
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1439f1580 FUN_1439f1580 body=18 status=ok
// SIG undefined FUN_1439f1580(void)

void FUN_1439f1580(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1439efb50(param_1,param_2,FUN_1439f17d0);
    return;
  }
  return;
}



// FUNCTION 1439f15a0 FUN_1439f15a0 body=394 status=ok
// SIG undefined FUN_1439f15a0(void)

void FUN_1439f15a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined8 local_58;
  undefined8 local_50;
  int *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = *param_2;
  piVar8 = (int *)0x0;
  iVar9 = 0;
  local_50 = 0;
  local_48 = (int *)0x0;
  iVar1 = *(int *)(param_1 + 8);
  piVar10 = piVar8;
  if (iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar5 = FUN_1439f1d40(&local_58,iVar1);
    piVar10 = local_48;
    iVar9 = (int)local_50;
    FUN_1439f1440(&local_58,uVar5,lVar4 + 8,iVar1,*local_48 - (int)local_50);
    iVar9 = iVar9 + iVar1;
    if (*piVar10 < iVar9) {
      *piVar10 = iVar9;
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    piVar7 = piVar8;
    do {
      puVar6 = *(undefined8 **)(lVar4 + 8 + (longlong)piVar7 * 8);
      puVar6[2] = 0;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      *(undefined1 *)puVar6 = 0;
      piVar7 = (int *)((longlong)piVar7 + 1);
    } while ((longlong)piVar7 < (longlong)iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    lVar4 = param_2[2];
    uVar5 = FUN_1439f1d40(param_1,iVar1);
    FUN_1439f1440(param_1,uVar5,lVar4 + 8,iVar1,**(int **)(param_1 + 0x10) - *(int *)(param_1 + 8));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
    if (**(int **)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
      **(int **)(param_1 + 0x10) = *(int *)(param_1 + 8);
    }
  }
  iVar1 = *(int *)(param_2 + 1);
  if (0 < iVar1) {
    lVar4 = param_2[2];
    do {
      puVar6 = *(undefined8 **)(lVar4 + 8 + (longlong)piVar8 * 8);
      puVar6[2] = 0;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      *(undefined1 *)puVar6 = 0;
      piVar8 = (int *)((longlong)piVar8 + 1);
    } while ((longlong)piVar8 < (longlong)iVar1);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  local_48 = (int *)param_2[2];
  param_2[2] = piVar10;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(int *)(param_2 + 1) = iVar9;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
  local_50 = CONCAT44(uVar3,uVar2);
  FUN_1439f1360(&local_58);
  return;
}



// FUNCTION 1439f1730 FUN_1439f1730 body=154 status=ok
// SIG undefined FUN_1439f1730(void)

void FUN_1439f1730(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 1);
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) {
      iVar1 = *piVar3;
      if (iVar1 == *(int *)((longlong)param_1 + 0xc)) {
        FUN_1439f1c80(*(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 2),*param_1);
      }
      else if (iVar2 < iVar1) {
        *(undefined8 *)(piVar3 + (longlong)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 2);
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
      }
      else {
        *piVar3 = iVar1 + 1;
      }
      goto LAB_1439f17aa;
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 1) < iVar2) {
    FUN_1439f1d40(param_1,iVar2 - *(int *)(param_1 + 1));
    piVar3 = (int *)param_1[2];
  }
  *piVar3 = *piVar3 + 1;
LAB_1439f17aa:
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = param_2;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return;
}



// FUNCTION 1439f17d0 FUN_1439f17d0 body=111 status=ok
// SIG undefined FUN_1439f17d0(void)

void FUN_1439f17d0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
      uVar4 = uVar1 + 1;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar4);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    FMemory::operator_delete(param_1,0x20);
  }
  return;
}



// FUNCTION 1439f1840 FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64> body=13 status=ok
// SIG undefined FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(void)

undefined8 *
FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 1439f1850 FUN_1439f1850 body=13 status=ok
// SIG undefined FUN_1439f1850(void)

undefined8 * FUN_1439f1850(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1439f1860 FUN_1439f1860 body=74 status=ok
// SIG undefined FUN_1439f1860(void)

int * FUN_1439f1860(int *param_1,int *param_2)

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*param_2 != 0) {
    FUN_1439f21e0();
    *param_1 = *param_1 + *param_2;
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)*param_2 << 3);
  }
  return param_1;
}



// FUNCTION 1439f18b0 FUN_1439f18b0 body=17 status=ok
// SIG undefined FUN_1439f18b0(void)

undefined8 * FUN_1439f18b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1439f18d0 FTextSnapshot body=17 status=ok
// SIG undefined FTextSnapshot(void)

undefined8 * FTextSnapshot::FTextSnapshot(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1439f18f0 FUN_1439f18f0 body=56 status=ok
// SIG undefined FUN_1439f18f0(void)

void FUN_1439f18f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (((0 < *(int *)(param_1 + 4)) &&
      (plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + -8), plVar1 != (longlong *)0x0)) &&
     (*plVar1 == 0)) {
    FMemory::operator_delete
              (plVar1,(longlong)*(int *)(param_1 + 4) * 4 + 8,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1439f1930 FUN_1439f1930 body=56 status=ok
// SIG undefined FUN_1439f1930(void)

void FUN_1439f1930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (((0 < *(int *)(param_1 + 4)) &&
      (plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + -8), plVar1 != (longlong *)0x0)) &&
     (*plVar1 == 0)) {
    FMemory::operator_delete
              (plVar1,(longlong)*(int *)(param_1 + 4) * 8 + 8,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1439f1970 FUN_1439f1970 body=52 status=ok
// SIG undefined FUN_1439f1970(void)

void FUN_1439f1970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (((0 < *(int *)(param_1 + 4)) &&
      (plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + -8), plVar1 != (longlong *)0x0)) &&
     (*plVar1 == 0)) {
    FMemory::operator_delete
              (plVar1,(longlong)*(int *)(param_1 + 4) + 8,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1439f19b0 thunk_FUN_1439f1360 body=5 status=ok
// SIG undefined thunk_FUN_1439f1360(void)

void thunk_FUN_1439f1360(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 0;
  piVar6 = (int *)param_1[2];
  if ((piVar6 != (int *)0x0) && (*param_1 == 0)) {
    iVar1 = *piVar6;
    if (0 < (longlong)iVar1) {
      do {
        plVar2 = *(longlong **)(piVar6 + lVar8 * 2 + 2);
        if (plVar2 != (longlong *)0x0) {
          uVar3 = plVar2[3];
          if (0xf < uVar3) {
            lVar4 = *plVar2;
            uVar7 = uVar3 + 1;
            lVar5 = lVar4;
            if (0xfff < uVar7) {
              lVar5 = *(longlong *)(lVar4 + -8);
              uVar7 = uVar3 + 0x28;
              if (0x1f < (lVar4 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar5,uVar7);
          }
          plVar2[2] = 0;
          plVar2[3] = 0xf;
          *(undefined1 *)plVar2 = 0;
          FMemory::operator_delete(plVar2,0x20);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar1);
      piVar6 = (int *)param_1[2];
    }
    FMemory::operator_delete(piVar6,(longlong)*(int *)((longlong)param_1 + 0xc) * 8 + 8);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 1439f19c0 FUN_1439f19c0 body=59 status=ok
// SIG undefined FUN_1439f19c0(void)

void FUN_1439f19c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    FUN_1439f20e0(param_1,param_1[1] + 1);
    iVar1 = *param_1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 4) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1439f1a00 FUN_1439f1a00 body=61 status=ok
// SIG undefined FUN_1439f1a00(void)

void FUN_1439f1a00(int *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    FUN_1439f21e0(param_1,param_1[1] + 1);
    iVar1 = *param_1;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1439f1a40 FUN_1439f1a40 body=60 status=ok
// SIG undefined FUN_1439f1a40(void)

void FUN_1439f1a40(int *param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    FUN_1439f22e0(param_1,param_1[1] + 1);
    iVar1 = *param_1;
  }
  *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 2)) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1439f1a80 FUN_1439f1a80 body=215 status=ok
// SIG undefined FUN_1439f1a80(void)

undefined1 * FUN_1439f1a80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
LAB_1439f1aba:
    iVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
    if ((int)param_1[1] < iVar2) {
      FUN_1439f1d40(param_1,iVar2 - (int)param_1[1]);
      piVar4 = (int *)param_1[2];
    }
  }
  else {
    iVar2 = (int)param_1[1];
    if (iVar2 < *piVar4) {
      puVar3 = *(undefined1 **)(piVar4 + (longlong)iVar2 * 2 + 2);
      *(int *)(param_1 + 1) = iVar2 + 1;
      return puVar3;
    }
    if (*piVar4 == *(int *)((longlong)param_1 + 0xc)) goto LAB_1439f1aba;
  }
  *piVar4 = *piVar4 + 1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    puVar3 = (undefined1 *)operator_new(0x20);
    if (puVar3 == (undefined1 *)0x0) goto LAB_1439f1b37;
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,&std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                           RTTI_Type_Descriptor,0x20);
    }
    puVar3 = (undefined1 *)
             FUN_1439efdc0(lVar1,0x20,
                           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                           _Tidy_deallocate);
  }
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0xf;
  *puVar3 = 0;
LAB_1439f1b37:
  *(undefined1 **)(param_1[2] + 8 + (longlong)(int)param_1[1] * 8) = puVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return puVar3;
}



// FUNCTION 1439f1b60 FUN_1439f1b60 body=116 status=ok
// SIG undefined FUN_1439f1b60(void)

void FUN_1439f1b60(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (iVar1 < *(int *)((longlong)param_1 + 0xc)) {
        iVar3 = (int)param_1[1];
        if (iVar3 < iVar1) {
          *(undefined8 *)(piVar2 + (longlong)iVar1 * 2 + 2) =
               *(undefined8 *)(piVar2 + (longlong)iVar3 * 2 + 2);
          iVar3 = (int)param_1[1];
        }
        *(undefined8 *)(piVar2 + (longlong)iVar3 * 2 + 2) = param_2;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
        return;
      }
    }
  }
  else {
    FUN_1439f1580();
  }
  FUN_1439f1730(param_1,param_2);
  return;
}



// FUNCTION 1439f1be0 FUN_1439f1be0 body=16 status=ok
// SIG undefined FUN_1439f1be0(void)

void FUN_1439f1be0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 4) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1439f1bf0 FUN_1439f1bf0 body=17 status=ok
// SIG undefined FUN_1439f1bf0(void)

void FUN_1439f1bf0(int *param_1,undefined8 *param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1439f1c10 BinarySearchKey body=4 status=ok
// SIG undefined BinarySearchKey(void)

undefined4 FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 1439f1c20 clear body=7 status=ok
// SIG undefined clear(void)

void icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1439f1c30 FUN_1439f1c30 body=67 status=ok
// SIG undefined FUN_1439f1c30(void)

void FUN_1439f1c30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + 8 + lVar4 * 8);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      lVar4 = lVar4 + 1;
      *(undefined1 *)puVar3 = 0;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1439f1c80 FUN_1439f1c80 body=116 status=ok
// SIG undefined FUN_1439f1c80(void)

void FUN_1439f1c80(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) && (param_1 != (longlong *)0x0)) {
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
      uVar4 = uVar1 + 1;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar4);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    FMemory::operator_delete(param_1,0x20);
  }
  return;
}



// FUNCTION 1439f1d00 GetBodyBoneId body=12 status=ok
// SIG undefined GetBodyBoneId(void)

longlong mu::FPhysicsBody::GetBodyBoneId(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 8) + (longlong)param_2 * 4;
}



// FUNCTION 1439f1d10 FUN_1439f1d10 body=12 status=ok
// SIG undefined FUN_1439f1d10(void)

longlong FUN_1439f1d10(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 8) + (longlong)param_2 * 8;
}



// FUNCTION 1439f1d20 FUN_1439f1d20 body=8 status=ok
// SIG undefined FUN_1439f1d20(void)

longlong FUN_1439f1d20(longlong param_1,int param_2)

{
  return (longlong)param_2 + *(longlong *)(param_1 + 8);
}



// FUNCTION 1439f1d30 FUN_1439f1d30 body=13 status=ok
// SIG undefined FUN_1439f1d30(void)

undefined8 FUN_1439f1d30(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)param_2 * 8);
}



// FUNCTION 1439f1d40 FUN_1439f1d40 body=474 status=ok
// SIG undefined FUN_1439f1d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001439f1e40) */
/* WARNING: Removing unreachable block (ram,0x0001439f1e53) */

longlong FUN_1439f1d40(longlong *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_b0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b4 = 0;
  iVar6 = (int)param_1[1];
  param_2 = iVar6 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    piVar2 = (int *)param_1[2];
    lVar3 = *param_1;
    iVar6 = *(int *)((longlong)param_1 + 0xc) * 2;
    if (param_2 <= iVar6) {
      param_2 = iVar6;
    }
    iVar6 = 4;
    if (4 < param_2) {
      iVar6 = param_2;
    }
    if (0x1ffffffffffffffe < (ulonglong)(longlong)iVar6) {
      uVar4 = FUN_1439eeb00(local_a8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\repeated_field.cc"
                           );
      local_b4 = 1;
      uVar4 = FUN_1439eef00(uVar4,
                            "CHECK failed: (new_size) <= ((std::numeric_limits<size_t>::max() - kRepHeaderSize) / sizeof(old_rep->elements[0])): "
                           );
      uVar4 = FUN_1439eef00(uVar4,"Requested size is too large to fit into size_t.");
      FUN_1439eec50(local_b8,uVar4);
      DsDevice::~DsDevice(local_a8);
    }
    lVar5 = (longlong)iVar6 * 8;
    if (lVar3 == 0) {
      lVar5 = operator_new(lVar5 + 8);
    }
    else {
      lVar5 = lVar5 + 8;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        FUN_1439f01b0(lVar3,&.D::RTTI_Type_Descriptor,lVar5);
      }
      lVar5 = FUN_1439efd10(lVar3,lVar5);
    }
    param_1[2] = lVar5;
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    *(int *)((longlong)param_1 + 0xc) = iVar6;
    if ((piVar2 == (int *)0x0) || (*piVar2 < 1)) {
      *(undefined4 *)param_1[2] = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)(param_1[2] + 8),piVar2 + 2,(longlong)*piVar2 << 3);
      *(int *)param_1[2] = *piVar2;
    }
    if (lVar3 == 0) {
      FMemory::operator_delete(piVar2,(longlong)iVar1 * 8 + 8);
    }
    iVar6 = (int)param_1[1];
  }
  return param_1[2] + (longlong)iVar6 * 8 + 8;
}



// FUNCTION 1439f1f20 FUN_1439f1f20 body=82 status=ok
// SIG undefined FUN_1439f1f20(void)

void FUN_1439f1f20(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = *param_1;
    FUN_1439f20e0(param_1,*param_2 + iVar1);
    *param_1 = *param_1 + *param_2;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 4),*(void **)(param_2 + 2),
               (longlong)*param_2 << 2);
  }
  return;
}



// FUNCTION 1439f1f80 FUN_1439f1f80 body=82 status=ok
// SIG undefined FUN_1439f1f80(void)

void FUN_1439f1f80(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = *param_1;
    FUN_1439f21e0(param_1,*param_2 + iVar1);
    *param_1 = *param_1 + *param_2;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8),*(void **)(param_2 + 2),
               (longlong)*param_2 << 3);
  }
  return;
}



// FUNCTION 1439f1fe0 FUN_1439f1fe0 body=77 status=ok
// SIG undefined FUN_1439f1fe0(void)

void FUN_1439f1fe0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = *param_1;
    FUN_1439f22e0(param_1,*param_2 + iVar1);
    *param_1 = *param_1 + *param_2;
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 2)),*(void **)(param_2 + 2),
               (longlong)*param_2);
  }
  return;
}



// FUNCTION 1439f2030 FUN_1439f2030 body=99 status=ok
// SIG undefined FUN_1439f2030(void)

void FUN_1439f2030(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar3 = FUN_1439f1d40(param_1,iVar1);
    FUN_1439f1440(param_1,uVar3,lVar2 + 8,iVar1,**(int **)(param_1 + 0x10) - *(int *)(param_1 + 8));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
    if (**(int **)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
      **(int **)(param_1 + 0x10) = *(int *)(param_1 + 8);
    }
  }
  return;
}



// FUNCTION 1439f20a0 FUN_1439f20a0 body=3 status=ok
// SIG undefined FUN_1439f20a0(void)

void FUN_1439f20a0(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}



// FUNCTION 1439f20b0 FUN_1439f20b0 body=44 status=ok
// SIG undefined FUN_1439f20b0(void)

void FUN_1439f20b0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + -1;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8);
  puVar2[2] = 0;
  if (0xf < (ulonglong)puVar2[3]) {
    *(undefined1 *)*puVar2 = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  return;
}



// FUNCTION 1439f20e0 FUN_1439f20e0 body=250 status=ok
// SIG undefined FUN_1439f20e0(void)

void FUN_1439f20e0(int *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  if (iVar6 < param_2) {
    lVar3 = *(longlong *)(param_1 + 2);
    if (iVar6 < 1) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(lVar3 + -8);
    }
    if (iVar6 != 0) {
      lVar3 = *(longlong *)(lVar3 + -8);
    }
    if (param_2 <= iVar6 * 2) {
      param_2 = iVar6 * 2;
    }
    iVar6 = 4;
    if (4 < param_2) {
      iVar6 = param_2;
    }
    if (lVar3 == 0) {
      plVar2 = (longlong *)operator_new((longlong)iVar6 * 4 + 8);
    }
    else {
      uVar4 = (longlong)iVar6 * 4 + 0xfU & 0xfffffffffffffff8;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        FUN_1439f01b0(lVar3,&.D::RTTI_Type_Descriptor,uVar4);
      }
      plVar2 = (longlong *)FUN_1439efd10(lVar3,uVar4);
    }
    *plVar2 = lVar3;
    iVar1 = param_1[1];
    param_1[1] = iVar6;
    *(longlong **)(param_1 + 2) = plVar2 + 1;
    if (0 < *param_1) {
      _guard_xfg_dispatch_icall_nop(plVar2 + 1,plVar5 + 1,(longlong)*param_1 << 2);
    }
    if ((plVar5 != (longlong *)0x0) && (*plVar5 == 0)) {
      FMemory::operator_delete(plVar5,(longlong)iVar1 * 4 + 8);
    }
  }
  return;
}



// FUNCTION 1439f21e0 FUN_1439f21e0 body=242 status=ok
// SIG undefined FUN_1439f21e0(void)

void FUN_1439f21e0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  if (iVar6 < param_2) {
    lVar4 = *(longlong *)(param_1 + 2);
    if (iVar6 < 1) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(lVar4 + -8);
    }
    if (iVar6 != 0) {
      lVar4 = *(longlong *)(lVar4 + -8);
    }
    if (param_2 <= iVar6 * 2) {
      param_2 = iVar6 * 2;
    }
    iVar6 = 4;
    if (4 < param_2) {
      iVar6 = param_2;
    }
    lVar1 = (longlong)iVar6 * 8 + 8;
    if (lVar4 == 0) {
      plVar3 = (longlong *)operator_new(lVar1);
    }
    else {
      if (*(longlong *)(lVar4 + 0x70) != 0) {
        FUN_1439f01b0(lVar4,&.D::RTTI_Type_Descriptor,lVar1);
      }
      plVar3 = (longlong *)FUN_1439efd10(lVar4,lVar1);
    }
    *plVar3 = lVar4;
    iVar2 = param_1[1];
    param_1[1] = iVar6;
    *(longlong **)(param_1 + 2) = plVar3 + 1;
    if (0 < *param_1) {
      _guard_xfg_dispatch_icall_nop(plVar3 + 1,plVar5 + 1,(longlong)*param_1 << 3);
    }
    if ((plVar5 != (longlong *)0x0) && (*plVar5 == 0)) {
      FMemory::operator_delete(plVar5,(longlong)iVar2 * 8 + 8);
    }
  }
  return;
}



// FUNCTION 1439f22e0 FUN_1439f22e0 body=235 status=ok
// SIG undefined FUN_1439f22e0(void)

void FUN_1439f22e0(int *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  if (iVar6 < param_2) {
    lVar3 = *(longlong *)(param_1 + 2);
    if (iVar6 < 1) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(lVar3 + -8);
    }
    if (iVar6 != 0) {
      lVar3 = *(longlong *)(lVar3 + -8);
    }
    if (param_2 <= iVar6 * 2) {
      param_2 = iVar6 * 2;
    }
    iVar6 = 4;
    if (4 < param_2) {
      iVar6 = param_2;
    }
    if (lVar3 == 0) {
      plVar2 = (longlong *)operator_new((longlong)iVar6 + 8);
    }
    else {
      uVar4 = (longlong)iVar6 + 0xfU & 0xfffffffffffffff8;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        FUN_1439f01b0(lVar3,&.D::RTTI_Type_Descriptor,uVar4);
      }
      plVar2 = (longlong *)FUN_1439efd10(lVar3,uVar4);
    }
    *plVar2 = lVar3;
    iVar1 = param_1[1];
    param_1[1] = iVar6;
    *(longlong **)(param_1 + 2) = plVar2 + 1;
    if (0 < *param_1) {
      _guard_xfg_dispatch_icall_nop(plVar2 + 1,plVar5 + 1,(longlong)*param_1);
    }
    if ((plVar5 != (longlong *)0x0) && (*plVar5 == 0)) {
      FMemory::operator_delete(plVar5,(longlong)iVar1 + 8);
    }
  }
  return;
}



// FUNCTION 1439f23d0 FUN_1439f23d0 body=15 status=ok
// SIG undefined FUN_1439f23d0(void)

void FUN_1439f23d0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < param_2) {
    FUN_1439f1d40(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 1439f23e0 FUN_1439f23e0 body=14 status=ok
// SIG undefined FUN_1439f23e0(void)

void FUN_1439f23e0(longlong param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 4) = *param_3;
  return;
}



// FUNCTION 1439f23f0 FUN_1439f23f0 body=15 status=ok
// SIG undefined FUN_1439f23f0(void)

void FUN_1439f23f0(longlong param_1,int param_2,undefined8 *param_3)

{
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = *param_3;
  return;
}



// FUNCTION 1439f2400 FUN_1439f2400 body=15 status=ok
// SIG undefined FUN_1439f2400(void)

void FUN_1439f2400(longlong param_1,int param_2,undefined1 *param_3)

{
  *(undefined1 *)((longlong)param_2 + *(longlong *)(param_1 + 8)) = *param_3;
  return;
}



// FUNCTION 1439f2410 FUN_1439f2410 body=20 status=ok
// SIG undefined FUN_1439f2410(void)

longlong FUN_1439f2410(longlong param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    return (longlong)*(int *)(param_1 + 4) * 4 + 8;
  }
  return 0;
}



// FUNCTION 1439f2430 FUN_1439f2430 body=20 status=ok
// SIG undefined FUN_1439f2430(void)

longlong FUN_1439f2430(longlong param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    return (longlong)*(int *)(param_1 + 4) * 8 + 8;
  }
  return 0;
}



// FUNCTION 1439f2450 FUN_1439f2450 body=16 status=ok
// SIG undefined FUN_1439f2450(void)

longlong FUN_1439f2450(longlong param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    return (longlong)*(int *)(param_1 + 4) + 8;
  }
  return 0;
}



// FUNCTION 1439f2460 FUN_1439f2460 body=118 status=ok
// SIG undefined FUN_1439f2460(void)

longlong FUN_1439f2460(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  lVar3 = (longlong)*(int *)(param_1 + 0xc) << 3;
  if (piVar1 == (int *)0x0) {
    return lVar3;
  }
  iVar5 = 0;
  if (0 < *piVar1) {
    lVar4 = 0;
    do {
      lVar2 = google::protobuf::internal::StringSpaceUsedExcludingSelf
                        (*(undefined8 *)(lVar4 + 8 + (longlong)piVar1));
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + lVar2 + 0x20;
      iVar5 = iVar5 + 1;
      piVar1 = *(int **)(param_1 + 0x10);
    } while (iVar5 < *piVar1);
  }
  return lVar3 + 8;
}



// FUNCTION 1439f24e0 FUN_1439f24e0 body=353 status=ok
// SIG undefined FUN_1439f24e0(void)

void FUN_1439f24e0(int *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int local_48;
  int iStack_44;
  void *local_40;
  undefined8 local_38;
  
  if (param_1 != param_2) {
    local_38 = 0xfffffffffffffffe;
    if (param_1[1] == 0) {
      pvVar3 = *(void **)(param_1 + 2);
      pvVar4 = pvVar3;
    }
    else {
      pvVar4 = *(void **)(param_1 + 2);
      pvVar3 = *(void **)((longlong)pvVar4 + -8);
    }
    if (param_2[1] == 0) {
      pvVar5 = *(void **)(param_2 + 2);
      pvVar7 = pvVar5;
    }
    else {
      pvVar7 = *(void **)(param_2 + 2);
      pvVar5 = *(void **)((longlong)pvVar7 + -8);
    }
    if (pvVar3 == pvVar5) {
      *(void **)(param_1 + 2) = pvVar7;
      *(void **)(param_2 + 2) = pvVar4;
      iVar8 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar8;
      iVar8 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = iVar8;
    }
    else {
      if (param_2[1] != 0) {
        pvVar7 = *(void **)((longlong)pvVar7 + -8);
      }
      local_48 = 0;
      iStack_44 = 0;
      iVar8 = 0;
      local_40 = pvVar7;
      if (*param_1 != 0) {
        FUN_1439f20e0(&local_48);
        pvVar7 = local_40;
        iVar8 = local_48 + *param_1;
        local_48 = iVar8;
        _guard_xfg_dispatch_icall_nop(local_40,*(void **)(param_1 + 2),(longlong)*param_1 << 2);
      }
      iVar2 = iStack_44;
      *param_1 = 0;
      if (*param_2 != 0) {
        FUN_1439f20e0(param_1);
        *param_1 = *param_1 + *param_2;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)*param_2 << 2);
      }
      pvVar3 = pvVar7;
      iVar6 = iVar2;
      if (param_2 != &local_48) {
        pvVar3 = *(void **)(param_2 + 2);
        *(void **)(param_2 + 2) = pvVar7;
        *param_2 = iVar8;
        iVar6 = param_2[1];
        param_2[1] = iVar2;
      }
      if (((0 < iVar6) && (plVar1 = (longlong *)((longlong)pvVar3 + -8), plVar1 != (longlong *)0x0))
         && (*plVar1 == 0)) {
        FMemory::operator_delete(plVar1,(longlong)iVar6 * 4 + 8);
      }
    }
  }
  return;
}



// FUNCTION 1439f2650 FUN_1439f2650 body=353 status=ok
// SIG undefined FUN_1439f2650(void)

void FUN_1439f2650(int *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int local_48;
  int iStack_44;
  void *local_40;
  undefined8 local_38;
  
  if (param_1 != param_2) {
    local_38 = 0xfffffffffffffffe;
    if (param_1[1] == 0) {
      pvVar3 = *(void **)(param_1 + 2);
      pvVar4 = pvVar3;
    }
    else {
      pvVar4 = *(void **)(param_1 + 2);
      pvVar3 = *(void **)((longlong)pvVar4 + -8);
    }
    if (param_2[1] == 0) {
      pvVar5 = *(void **)(param_2 + 2);
      pvVar7 = pvVar5;
    }
    else {
      pvVar7 = *(void **)(param_2 + 2);
      pvVar5 = *(void **)((longlong)pvVar7 + -8);
    }
    if (pvVar3 == pvVar5) {
      *(void **)(param_1 + 2) = pvVar7;
      *(void **)(param_2 + 2) = pvVar4;
      iVar8 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar8;
      iVar8 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = iVar8;
    }
    else {
      if (param_2[1] != 0) {
        pvVar7 = *(void **)((longlong)pvVar7 + -8);
      }
      local_48 = 0;
      iStack_44 = 0;
      iVar8 = 0;
      local_40 = pvVar7;
      if (*param_1 != 0) {
        FUN_1439f21e0(&local_48);
        pvVar7 = local_40;
        iVar8 = local_48 + *param_1;
        local_48 = iVar8;
        _guard_xfg_dispatch_icall_nop(local_40,*(void **)(param_1 + 2),(longlong)*param_1 << 3);
      }
      iVar2 = iStack_44;
      *param_1 = 0;
      if (*param_2 != 0) {
        FUN_1439f21e0(param_1);
        *param_1 = *param_1 + *param_2;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)*param_2 << 3);
      }
      pvVar3 = pvVar7;
      iVar6 = iVar2;
      if (param_2 != &local_48) {
        pvVar3 = *(void **)(param_2 + 2);
        *(void **)(param_2 + 2) = pvVar7;
        *param_2 = iVar8;
        iVar6 = param_2[1];
        param_2[1] = iVar2;
      }
      if (((0 < iVar6) && (plVar1 = (longlong *)((longlong)pvVar3 + -8), plVar1 != (longlong *)0x0))
         && (*plVar1 == 0)) {
        FMemory::operator_delete(plVar1,(longlong)iVar6 * 8 + 8);
      }
    }
  }
  return;
}



// FUNCTION 1439f27c0 FUN_1439f27c0 body=341 status=ok
// SIG undefined FUN_1439f27c0(void)

void FUN_1439f27c0(int *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int local_48;
  int iStack_44;
  void *local_40;
  undefined8 local_38;
  
  if (param_1 != param_2) {
    local_38 = 0xfffffffffffffffe;
    if (param_1[1] == 0) {
      pvVar3 = *(void **)(param_1 + 2);
      pvVar4 = pvVar3;
    }
    else {
      pvVar4 = *(void **)(param_1 + 2);
      pvVar3 = *(void **)((longlong)pvVar4 + -8);
    }
    if (param_2[1] == 0) {
      pvVar5 = *(void **)(param_2 + 2);
      pvVar7 = pvVar5;
    }
    else {
      pvVar7 = *(void **)(param_2 + 2);
      pvVar5 = *(void **)((longlong)pvVar7 + -8);
    }
    if (pvVar3 == pvVar5) {
      *(void **)(param_1 + 2) = pvVar7;
      *(void **)(param_2 + 2) = pvVar4;
      iVar8 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar8;
      iVar8 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = iVar8;
    }
    else {
      if (param_2[1] != 0) {
        pvVar7 = *(void **)((longlong)pvVar7 + -8);
      }
      local_48 = 0;
      iStack_44 = 0;
      iVar8 = 0;
      local_40 = pvVar7;
      if (*param_1 != 0) {
        FUN_1439f22e0(&local_48);
        pvVar7 = local_40;
        iVar8 = local_48 + *param_1;
        local_48 = iVar8;
        _guard_xfg_dispatch_icall_nop(local_40,*(void **)(param_1 + 2),(longlong)*param_1);
      }
      iVar2 = iStack_44;
      *param_1 = 0;
      if (*param_2 != 0) {
        FUN_1439f22e0(param_1);
        *param_1 = *param_1 + *param_2;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)*param_2);
      }
      pvVar3 = pvVar7;
      iVar6 = iVar2;
      if (param_2 != &local_48) {
        pvVar3 = *(void **)(param_2 + 2);
        *(void **)(param_2 + 2) = pvVar7;
        *param_2 = iVar8;
        iVar6 = param_2[1];
        param_2[1] = iVar2;
      }
      if (((0 < iVar6) && (plVar1 = (longlong *)((longlong)pvVar3 + -8), plVar1 != (longlong *)0x0))
         && (*plVar1 == 0)) {
        FMemory::operator_delete(plVar1,(longlong)iVar6 + 8);
      }
    }
  }
  return;
}



// FUNCTION 1439f2920 FUN_1439f2920 body=67 status=ok
// SIG undefined FUN_1439f2920(void)

void FUN_1439f2920(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 == param_2) {
    return;
  }
  if (*param_2 == *param_1) {
    lVar2 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar2;
    lVar2 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar2;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
    return;
  }
  FUN_1439f15a0();
  return;
}



// FUNCTION 1439f2970 FUN_1439f2970 body=30 status=ok
// SIG undefined FUN_1439f2970(void)

void FUN_1439f2970(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_3 * 4);
  uVar2 = *(undefined4 *)(lVar3 + (longlong)param_2 * 4);
  *(undefined4 *)(lVar3 + (longlong)param_2 * 4) = *puVar1;
  *puVar1 = uVar2;
  return;
}



// FUNCTION 1439f2990 FUN_1439f2990 body=31 status=ok
// SIG undefined FUN_1439f2990(void)

void FUN_1439f2990(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(undefined4 *)(lVar2 + (longlong)param_2 * 4);
  *(undefined4 *)(lVar2 + (longlong)param_2 * 4) = *(undefined4 *)(lVar2 + (longlong)param_3 * 4);
  *(undefined4 *)(lVar2 + (longlong)param_3 * 4) = uVar1;
  return;
}



// FUNCTION 1439f29b0 FUN_1439f29b0 body=31 status=ok
// SIG undefined FUN_1439f29b0(void)

void FUN_1439f29b0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(undefined8 *)(lVar2 + (longlong)param_2 * 8);
  *(undefined8 *)(lVar2 + (longlong)param_2 * 8) = *(undefined8 *)(lVar2 + (longlong)param_3 * 8);
  *(undefined8 *)(lVar2 + (longlong)param_3 * 8) = uVar1;
  return;
}



// FUNCTION 1439f29d0 FUN_1439f29d0 body=32 status=ok
// SIG undefined FUN_1439f29d0(void)

void FUN_1439f29d0(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar2 + (longlong)param_3 * 8);
  uVar3 = *(undefined8 *)(lVar2 + (longlong)param_2 * 8);
  *(undefined8 *)(lVar2 + (longlong)param_2 * 8) = *puVar1;
  *puVar1 = uVar3;
  return;
}



// FUNCTION 1439f29f0 FUN_1439f29f0 body=27 status=ok
// SIG undefined FUN_1439f29f0(void)

void FUN_1439f29f0(longlong param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)((longlong)param_3 + *(longlong *)(param_1 + 8));
  puVar2 = (undefined1 *)((longlong)param_2 + *(longlong *)(param_1 + 8));
  uVar1 = *puVar2;
  *puVar2 = *puVar3;
  *puVar3 = uVar1;
  return;
}



// FUNCTION 1439f2a10 FUN_1439f2a10 body=36 status=ok
// SIG undefined FUN_1439f2a10(void)

void FUN_1439f2a10(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar2 + (longlong)param_3 * 8;
  uVar3 = *(undefined8 *)(lVar2 + 8 + (longlong)param_2 * 8);
  *(undefined8 *)(lVar2 + (longlong)param_2 * 8 + 8) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 8) = uVar3;
  return;
}



// FUNCTION 1439f2a40 FUN_1439f2a40 body=14 status=ok
// SIG undefined FUN_1439f2a40(void)

undefined8 FUN_1439f2a40(longlong param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 1439f2a50 FUN_1439f2a50 body=25 status=ok
// SIG undefined FUN_1439f2a50(void)

longlong * FUN_1439f2a50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10) + 8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 1439f2a70 FUN_1439f2a70 body=7 status=ok
// SIG undefined FUN_1439f2a70(void)

bool FUN_1439f2a70(int *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 1439f2a80 FUN_1439f2a80 body=8 status=ok
// SIG undefined FUN_1439f2a80(void)

bool FUN_1439f2a80(longlong param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



// FUNCTION 1439f2a90 FUN_1439f2a90 body=21 status=ok
// SIG undefined FUN_1439f2a90(void)

longlong FUN_1439f2a90(int *param_1)

{
  if (0 < param_1[1]) {
    return *(longlong *)(param_1 + 2) + (longlong)*param_1 * 4;
  }
  return 0;
}



// FUNCTION 1439f2ab0 FUN_1439f2ab0 body=33 status=ok
// SIG undefined FUN_1439f2ab0(void)

longlong * FUN_1439f2ab0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10) + 8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  *param_2 = lVar1 + (longlong)*(int *)(param_1 + 8) * 8;
  return param_2;
}



// FUNCTION 1439f2ae0 FUN_1439f2ae0 body=3 status=ok
// SIG undefined FUN_1439f2ae0(void)

undefined4 FUN_1439f2ae0(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 1439f2af0 GetNumWantingResources body=4 status=ok
// SIG undefined GetNumWantingResources(void)

undefined4 IStreamingManager::GetNumWantingResources(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1439f2b00 FUN_1439f2b00 body=157 status=ok
// SIG undefined FUN_1439f2b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f2b00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1439eeb00(local_48,3,
                        "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_util.cc",0x20f)
  ;
  uVar1 = FUN_1439eef00(uVar1,"Not implemented field number ");
  uVar1 = FUN_1439eee10(uVar1,*(undefined4 *)(param_2 + 4));
  uVar1 = FUN_1439eef00(uVar1," with type ");
  uVar1 = FUN_1439eee10(uVar1,*(undefined4 *)(param_2 + 0xc));
  FUN_1439eec50(local_58,uVar1);
  DsDevice::~DsDevice(local_48);
  return;
}



// FUNCTION 1439f2ba0 FUN_1439f2ba0 body=157 status=ok
// SIG undefined FUN_1439f2ba0(void)

void FUN_1439f2ba0(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar5 = uVar7;
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      pbVar4 = (byte *)*param_3;
      for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
        *pbVar4 = (byte)uVar1 | 0x80;
        pbVar4 = pbVar4 + 1;
      }
      *pbVar4 = (byte)uVar1;
      *param_3 = (longlong)(pbVar4 + 1);
      uVar3 = *(longlong *)(param_1 + 0x10) + 8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        uVar3 = uVar7;
      }
      lVar2 = FUN_1439f9df0(*(undefined8 *)(uVar3 + uVar6));
      uVar1 = (int)uVar5 + 1;
      *param_3 = lVar2;
      uVar5 = (ulonglong)uVar1;
      uVar6 = uVar6 + 8;
    } while ((int)uVar1 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1439f2c40 FUN_1439f2c40 body=59 status=ok
// SIG undefined FUN_1439f2c40(void)

void FUN_1439f2c40(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  *param_3 = (longlong)(pbVar2 + 1);
  *(undefined8 *)(pbVar2 + 1) = *param_1;
  *param_3 = (longlong)(pbVar2 + 9);
  return;
}



// FUNCTION 1439f2c80 FUN_1439f2c80 body=58 status=ok
// SIG undefined FUN_1439f2c80(void)

void FUN_1439f2c80(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  *param_3 = (longlong)(pbVar2 + 1);
  *(undefined4 *)(pbVar2 + 1) = *param_1;
  *param_3 = (longlong)(pbVar2 + 5);
  return;
}



// FUNCTION 1439f2cc0 FUN_1439f2cc0 body=97 status=ok
// SIG undefined FUN_1439f2cc0(void)

void FUN_1439f2cc0(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_3;
  for (uVar2 = *(uint *)(param_2 + 4); 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar3 = (byte)uVar2 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar2;
  pbVar3 = pbVar3 + 1;
  *param_3 = (longlong)pbVar3;
  for (uVar1 = *param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar3 = (byte)uVar1 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar1;
  *param_3 = (longlong)(pbVar3 + 1);
  return;
}



// FUNCTION 1439f2d30 FUN_1439f2d30 body=97 status=ok
// SIG undefined FUN_1439f2d30(void)

void FUN_1439f2d30(int *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_3;
  for (uVar2 = *(uint *)(param_2 + 4); 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar3 = (byte)uVar2 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar2;
  pbVar3 = pbVar3 + 1;
  *param_3 = (longlong)pbVar3;
  for (uVar1 = (ulonglong)*param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar3 = (byte)uVar1 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar1;
  *param_3 = (longlong)(pbVar3 + 1);
  return;
}



// FUNCTION 1439f2da0 FUN_1439f2da0 body=62 status=ok
// SIG undefined FUN_1439f2da0(void)

void FUN_1439f2da0(char *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  *param_3 = (longlong)(pbVar2 + 1);
  pbVar2[1] = *param_1 != '\0';
  *param_3 = (longlong)(pbVar2 + 2);
  return;
}



// FUNCTION 1439f2de0 FUN_1439f2de0 body=81 status=ok
// SIG undefined FUN_1439f2de0(void)

void FUN_1439f2de0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar3 = (byte)uVar1 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar1;
  *param_3 = (longlong)(pbVar3 + 1);
  lVar2 = FUN_1439f9df0(*param_1);
  *param_3 = lVar2;
  return;
}



// FUNCTION 1439f2e40 FUN_1439f2e40 body=185 status=ok
// SIG undefined FUN_1439f2e40(void)

void FUN_1439f2e40(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar5 = (ulonglong)uVar2;
  pbVar6 = (byte *)*param_3;
  while (bVar4 = (byte)uVar5, 0x7f < uVar2) {
    uVar5 = uVar5 >> 7;
    *pbVar6 = bVar4 | 0x80;
    pbVar6 = pbVar6 + 1;
    uVar2 = (uint)uVar5;
  }
  *pbVar6 = bVar4;
  *param_3 = (longlong)(pbVar6 + 1);
  piVar1 = *(int **)(param_2 + 0x10);
  if (piVar1 == (int *)0x0) {
    FUN_1439f81a0(*param_1,param_3);
  }
  else {
    lVar3 = FUN_1439f60c0(*param_1,*(longlong *)(piVar1 + 2) + 0x18,*piVar1 + -1,(char)param_3[1],
                          pbVar6 + 1);
    *param_3 = lVar3;
  }
  pbVar6 = (byte *)*param_3;
  for (uVar2 = *(int *)(param_2 + 4) + 1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar6 = (byte)uVar2 | 0x80;
    pbVar6 = pbVar6 + 1;
  }
  *pbVar6 = (byte)uVar2;
  *param_3 = (longlong)(pbVar6 + 1);
  return;
}



// FUNCTION 1439f2f00 FUN_1439f2f00 body=111 status=ok
// SIG undefined FUN_1439f2f00(void)

void FUN_1439f2f00(int *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  pbVar2 = pbVar2 + 1;
  *param_3 = (longlong)pbVar2;
  for (uVar1 = *param_1 >> 0x1f ^ *param_1 * 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  *param_3 = (longlong)(pbVar2 + 1);
  return;
}



// FUNCTION 1439f2f70 FUN_1439f2f70 body=113 status=ok
// SIG undefined FUN_1439f2f70(void)

void FUN_1439f2f70(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_3;
  for (uVar2 = *(uint *)(param_2 + 4); 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar3 = (byte)uVar2 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar2;
  pbVar3 = pbVar3 + 1;
  *param_3 = (longlong)pbVar3;
  for (uVar1 = *param_1 >> 0x3f ^ *param_1 * 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar3 = (byte)uVar1 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar1;
  *param_3 = (longlong)(pbVar3 + 1);
  return;
}



// FUNCTION 1439f2ff0 FUN_1439f2ff0 body=78 status=ok
// SIG undefined FUN_1439f2ff0(void)

void FUN_1439f2ff0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar3 = (byte)uVar1 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar1;
  *param_3 = (longlong)(pbVar3 + 1);
  lVar2 = FUN_1439f9df0();
  *param_3 = lVar2;
  return;
}



// FUNCTION 1439f3040 FUN_1439f3040 body=62 status=ok
// SIG undefined FUN_1439f3040(void)

void FUN_1439f3040(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  *param_3 = (longlong)(pbVar2 + 1);
  FUN_1439f40a0(*param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}



// FUNCTION 1439f3080 FUN_1439f3080 body=95 status=ok
// SIG undefined FUN_1439f3080(void)

void FUN_1439f3080(uint *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_3;
  for (uVar1 = *(uint *)(param_2 + 4); 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  pbVar2 = pbVar2 + 1;
  *param_3 = (longlong)pbVar2;
  for (uVar1 = *param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  *param_3 = (longlong)(pbVar2 + 1);
  return;
}



// FUNCTION 1439f30e0 FUN_1439f30e0 body=336 status=ok
// SIG undefined FUN_1439f30e0(void)

void FUN_1439f30e0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  ulonglong *puVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  cVar2 = FUN_1439f2a70();
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(param_2 + 4);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    iVar9 = 0;
    iVar4 = FUN_1439f2ae0(param_1);
    if (0 < iVar4) {
      do {
        puVar3 = (ulonglong *)FUN_1439f1d10(param_1,iVar9);
        uVar8 = *puVar3;
        if (*(int *)(param_3 + 0x10) < 10) {
          FUN_1439f9ec0(param_3);
        }
        else {
          pbVar1 = *(byte **)(param_3 + 8);
          pbVar5 = pbVar1;
          for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *pbVar5 = (byte)uVar8 | 0x80;
            pbVar5 = pbVar5 + 1;
          }
          *pbVar5 = (byte)uVar8;
          iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_1439f2ae0(param_1);
      } while (iVar9 < iVar4);
    }
  }
  return;
}



// FUNCTION 1439f3230 FUN_1439f3230 body=336 status=ok
// SIG undefined FUN_1439f3230(void)

void FUN_1439f3230(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  cVar2 = FUN_1439f2a70();
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(param_2 + 4);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    iVar9 = 0;
    iVar4 = FUN_1439f2ae0(param_1);
    if (0 < iVar4) {
      do {
        piVar3 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1,iVar9);
        uVar8 = (ulonglong)*piVar3;
        if (*(int *)(param_3 + 0x10) < 10) {
          FUN_1439f9ec0(param_3);
        }
        else {
          pbVar1 = *(byte **)(param_3 + 8);
          pbVar5 = pbVar1;
          for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *pbVar5 = (byte)uVar8 | 0x80;
            pbVar5 = pbVar5 + 1;
          }
          *pbVar5 = (byte)uVar8;
          iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_1439f2ae0(param_1);
      } while (iVar9 < iVar4);
    }
  }
  return;
}



// FUNCTION 1439f3380 FUN_1439f3380 body=334 status=ok
// SIG undefined FUN_1439f3380(void)

void FUN_1439f3380(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  cVar2 = FUN_1439f2a70();
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(param_2 + 4);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    iVar9 = 0;
    iVar4 = FUN_1439f2ae0(param_1);
    if (0 < iVar4) {
      do {
        piVar3 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1,iVar9);
        uVar7 = *piVar3 >> 0x1f ^ *piVar3 * 2;
        uVar8 = (ulonglong)uVar7;
        if (*(int *)(param_3 + 0x10) < 5) {
          FUN_1439f9e60(param_3);
        }
        else {
          pbVar1 = *(byte **)(param_3 + 8);
          pbVar5 = pbVar1;
          while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
            uVar8 = uVar8 >> 7;
            *pbVar5 = bVar6 | 0x80;
            pbVar5 = pbVar5 + 1;
            uVar7 = (uint)uVar8;
          }
          *pbVar5 = bVar6;
          iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_1439f2ae0(param_1);
      } while (iVar9 < iVar4);
    }
  }
  return;
}



// FUNCTION 1439f34d0 FUN_1439f34d0 body=336 status=ok
// SIG undefined FUN_1439f34d0(void)

void FUN_1439f34d0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  cVar2 = FUN_1439f2a70();
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(param_2 + 4);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    iVar9 = 0;
    iVar4 = FUN_1439f2ae0(param_1);
    if (0 < iVar4) {
      do {
        plVar3 = (longlong *)FUN_1439f1d10(param_1,iVar9);
        uVar8 = *plVar3 >> 0x3f ^ *plVar3 * 2;
        if (*(int *)(param_3 + 0x10) < 10) {
          FUN_1439f9ec0(param_3);
        }
        else {
          pbVar1 = *(byte **)(param_3 + 8);
          pbVar5 = pbVar1;
          for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *pbVar5 = (byte)uVar8 | 0x80;
            pbVar5 = pbVar5 + 1;
          }
          *pbVar5 = (byte)uVar8;
          iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_1439f2ae0(param_1);
      } while (iVar9 < iVar4);
    }
  }
  return;
}



// FUNCTION 1439f3620 FUN_1439f3620 body=319 status=ok
// SIG undefined FUN_1439f3620(void)

void FUN_1439f3620(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  cVar2 = FUN_1439f2a70();
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(param_2 + 4);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar7;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar5 = pbVar1;
      while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)uVar8;
      }
      *pbVar5 = bVar6;
      iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
    }
    iVar9 = 0;
    iVar4 = FUN_1439f2ae0(param_1);
    if (0 < iVar4) {
      do {
        puVar3 = (uint *)mu::FPhysicsBody::GetBodyBoneId(param_1,iVar9);
        uVar7 = *puVar3;
        uVar8 = (ulonglong)uVar7;
        if (*(int *)(param_3 + 0x10) < 5) {
          FUN_1439f9e60(param_3);
        }
        else {
          pbVar1 = *(byte **)(param_3 + 8);
          pbVar5 = pbVar1;
          while (bVar6 = (byte)uVar8, 0x7f < uVar7) {
            uVar8 = uVar8 >> 7;
            *pbVar5 = bVar6 | 0x80;
            pbVar5 = pbVar5 + 1;
            uVar7 = (uint)uVar8;
          }
          *pbVar5 = bVar6;
          iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_1439f2ae0(param_1);
      } while (iVar9 < iVar4);
    }
  }
  return;
}



// FUNCTION 1439f3760 FUN_1439f3760 body=191 status=ok
// SIG undefined FUN_1439f3760(void)

void FUN_1439f3760(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  uVar6 = uVar9;
  uVar8 = uVar9;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar7 = *(uint *)(param_2 + 4);
      uVar4 = (ulonglong)uVar7;
      if (*(int *)(param_3 + 0x10) < 5) {
        FUN_1439f9e60(param_3);
      }
      else {
        pbVar1 = *(byte **)(param_3 + 8);
        pbVar3 = pbVar1;
        while (bVar5 = (byte)uVar4, 0x7f < uVar7) {
          uVar4 = uVar4 >> 7;
          *pbVar3 = bVar5 | 0x80;
          pbVar3 = pbVar3 + 1;
          uVar7 = (uint)uVar4;
        }
        *pbVar3 = bVar5;
        iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
        *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
      }
      uVar4 = *(longlong *)(param_1 + 0x10) + 8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        uVar4 = uVar9;
      }
      FUN_1439f4750(*(undefined8 *)(uVar4 + uVar6),param_3);
      uVar7 = (int)uVar8 + 1;
      uVar6 = uVar6 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1439f3820 FUN_1439f3820 body=121 status=ok
// SIG undefined FUN_1439f3820(void)

void FUN_1439f3820(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  FUN_1439f9cd0(param_3,*param_1);
  return;
}



// FUNCTION 1439f38a0 FUN_1439f38a0 body=120 status=ok
// SIG undefined FUN_1439f38a0(void)

void FUN_1439f38a0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  FUN_1439f9c90(param_3,*param_1);
  return;
}



// FUNCTION 1439f3920 FUN_1439f3920 body=197 status=ok
// SIG undefined FUN_1439f3920(void)

void FUN_1439f3920(ulonglong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  uVar4 = *param_1;
  if (*(int *)(param_3 + 0x10) < 10) {
    FUN_1439f9ec0(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar6 = pbVar1;
  for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *pbVar6 = (byte)uVar4 | 0x80;
    pbVar6 = pbVar6 + 1;
  }
  *pbVar6 = (byte)uVar4;
  iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  return;
}



// FUNCTION 1439f39f0 FUN_1439f39f0 body=197 status=ok
// SIG undefined FUN_1439f39f0(void)

void FUN_1439f39f0(int *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  uVar4 = (ulonglong)*param_1;
  if (*(int *)(param_3 + 0x10) < 10) {
    FUN_1439f9ec0(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar6 = pbVar1;
  for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *pbVar6 = (byte)uVar4 | 0x80;
    pbVar6 = pbVar6 + 1;
  }
  *pbVar6 = (byte)uVar4;
  iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  return;
}



// FUNCTION 1439f3ac0 FUN_1439f3ac0 body=165 status=ok
// SIG undefined FUN_1439f3ac0(void)

void FUN_1439f3ac0(char *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
    return;
  }
  *(bool *)*(undefined8 *)(param_3 + 8) = *param_1 != '\0';
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  return;
}



// FUNCTION 1439f3b70 FUN_1439f3b70 body=121 status=ok
// SIG undefined FUN_1439f3b70(void)

void FUN_1439f3b70(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  FUN_1439f4750(*param_1,param_3);
  return;
}



// FUNCTION 1439f3bf0 FUN_1439f3bf0 body=269 status=ok
// SIG undefined FUN_1439f3bf0(void)

void FUN_1439f3bf0(longlong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  
  uVar4 = *(uint *)(param_2 + 4);
  uVar5 = (ulonglong)uVar4;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar7 = pbVar1;
    while (bVar3 = (byte)uVar5, 0x7f < uVar4) {
      uVar5 = uVar5 >> 7;
      *pbVar7 = bVar3 | 0x80;
      pbVar7 = pbVar7 + 1;
      uVar4 = (uint)uVar5;
    }
    *pbVar7 = bVar3;
    iVar6 = ((int)pbVar7 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar6;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  param_1 = (longlong *)*param_1;
  if (piVar2 == (int *)0x0) {
    (**(code **)(*param_1 + 0x60))(param_1,param_3);
  }
  else {
    FUN_1439f8150(param_1,*(uint **)(piVar2 + 2) + 6,*piVar2 + -1,
                  *(undefined4 *)((ulonglong)**(uint **)(piVar2 + 2) + (longlong)param_1),param_3);
  }
  uVar4 = *(int *)(param_2 + 4) + 1;
  uVar5 = (ulonglong)uVar4;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar7 = pbVar1;
  while (bVar3 = (byte)uVar5, 0x7f < uVar4) {
    uVar5 = uVar5 >> 7;
    *pbVar7 = bVar3 | 0x80;
    pbVar7 = pbVar7 + 1;
    uVar4 = (uint)uVar5;
  }
  *pbVar7 = bVar3;
  iVar6 = ((int)pbVar7 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar6;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
  return;
}



// FUNCTION 1439f3d00 FUN_1439f3d00 body=211 status=ok
// SIG undefined FUN_1439f3d00(void)

void FUN_1439f3d00(int *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  uVar3 = *param_1 >> 0x1f ^ *param_1 * 2;
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar6 = pbVar1;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar6 = bVar2 | 0x80;
    pbVar6 = pbVar6 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar6 = bVar2;
  iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  return;
}



// FUNCTION 1439f3de0 FUN_1439f3de0 body=213 status=ok
// SIG undefined FUN_1439f3de0(void)

void FUN_1439f3de0(longlong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  uVar4 = *param_1 >> 0x3f ^ *param_1 * 2;
  if (*(int *)(param_3 + 0x10) < 10) {
    FUN_1439f9ec0(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar6 = pbVar1;
  for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *pbVar6 = (byte)uVar4 | 0x80;
    pbVar6 = pbVar6 + 1;
  }
  *pbVar6 = (byte)uVar4;
  iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  return;
}



// FUNCTION 1439f3ec0 FUN_1439f3ec0 body=121 status=ok
// SIG undefined FUN_1439f3ec0(void)

void FUN_1439f3ec0(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  FUN_1439f4750(param_1,param_3);
  return;
}



// FUNCTION 1439f3f40 FUN_1439f3f40 body=131 status=ok
// SIG undefined FUN_1439f3f40(void)

void FUN_1439f3f40(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  FUN_1439f4170(*param_1,*(undefined8 *)(param_2 + 0x10),param_3);
  return;
}



// FUNCTION 1439f3fd0 FUN_1439f3fd0 body=195 status=ok
// SIG undefined FUN_1439f3fd0(void)

void FUN_1439f3fd0(uint *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar6 = pbVar1;
    while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)uVar4;
    }
    *pbVar6 = bVar2;
    iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  }
  uVar3 = *param_1;
  uVar4 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar6 = pbVar1;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar6 = bVar2 | 0x80;
    pbVar6 = pbVar6 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar6 = bVar2;
  iVar5 = ((int)pbVar6 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
  return;
}



// FUNCTION 1439f40a0 FUN_1439f40a0 body=200 status=ok
// SIG undefined FUN_1439f40a0(void)

void FUN_1439f40a0(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_2 == (int *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x70))();
    pbVar6 = (byte *)*param_3;
    uVar5 = (uint)uVar3;
    while (bVar2 = (byte)uVar3, 0x7f < uVar5) {
      uVar3 = uVar3 >> 7 & 0x1ffffff;
      *pbVar6 = bVar2 | 0x80;
      pbVar6 = pbVar6 + 1;
      uVar5 = (uint)uVar3;
    }
    *pbVar6 = bVar2;
    *param_3 = (longlong)(pbVar6 + 1);
    FUN_1439f81a0(param_1,param_3);
    return;
  }
  puVar1 = *(uint **)(param_2 + 2);
  pbVar6 = (byte *)*param_3;
  for (uVar5 = *(uint *)((ulonglong)*puVar1 + (longlong)param_1); 0x7f < uVar5; uVar5 = uVar5 >> 7)
  {
    *pbVar6 = (byte)uVar5 | 0x80;
    pbVar6 = pbVar6 + 1;
  }
  *pbVar6 = (byte)uVar5;
  *param_3 = (longlong)(pbVar6 + 1);
  lVar4 = FUN_1439f60c0(param_1,puVar1 + 6,*param_2 + -1,(char)param_3[1],pbVar6 + 1);
  *param_3 = lVar4;
  return;
}



// FUNCTION 1439f4170 FUN_1439f4170 body=325 status=ok
// SIG undefined FUN_1439f4170(void)

void FUN_1439f4170(longlong *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (param_2 != (int *)0x0) {
    puVar2 = *(uint **)(param_2 + 2);
    uVar4 = *(uint *)((ulonglong)*puVar2 + (longlong)param_1);
    uVar5 = (ulonglong)uVar4;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar8 = pbVar1;
      uVar7 = uVar4;
      while (bVar3 = (byte)uVar5, 0x7f < uVar7) {
        uVar5 = uVar5 >> 7;
        *pbVar8 = bVar3 | 0x80;
        pbVar8 = pbVar8 + 1;
        uVar7 = (uint)uVar5;
      }
      *pbVar8 = bVar3;
      iVar6 = ((int)pbVar8 - (int)pbVar1) + 1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar6;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
    }
    FUN_1439f8150(param_1,puVar2 + 6,*param_2 + -1,uVar4,param_3);
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x70))();
  uVar4 = (uint)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar5 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001439f4216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar8 = pbVar1;
  while (bVar3 = (byte)uVar5, 0x7f < uVar4) {
    uVar5 = uVar5 >> 7 & 0x1ffffff;
    *pbVar8 = bVar3 | 0x80;
    pbVar8 = pbVar8 + 1;
    uVar4 = (uint)uVar5;
  }
  *pbVar8 = bVar3;
  iVar6 = ((int)pbVar8 - (int)pbVar1) + 1;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar6;
                    /* WARNING: Could not recover jumptable at 0x0001439f41ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,param_3);
  return;
}



// FUNCTION 1439f42c0 FUN_1439f42c0 body=96 status=ok
// SIG undefined FUN_1439f42c0(void)

void FUN_1439f42c0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *param_1 >> 0x1f ^ *param_1 * 2;
  uVar6 = (ulonglong)uVar5;
  if (4 < *(int *)(param_2 + 0x10)) {
    pbVar1 = *(byte **)(param_2 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
    return;
  }
  FUN_1439f9e60(param_2);
  return;
}



// FUNCTION 1439f4320 FUN_1439f4320 body=98 status=ok
// SIG undefined FUN_1439f4320(void)

void FUN_1439f4320(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  uVar4 = *param_1 >> 0x3f ^ *param_1 * 2;
  if (9 < *(int *)(param_2 + 0x10)) {
    pbVar1 = *(byte **)(param_2 + 8);
    pbVar3 = pbVar1;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      *pbVar3 = (byte)uVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    *pbVar3 = (byte)uVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
    return;
  }
  FUN_1439f9ec0(param_2);
  return;
}



// FUNCTION 1439f4390 FUN_1439f4390 body=85 status=ok
// SIG undefined FUN_1439f4390(void)

void FUN_1439f4390(uint param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  if (4 < *(int *)(param_2 + 0x10)) {
    pbVar1 = *(byte **)(param_2 + 8);
    pbVar3 = pbVar1;
    for (; 0x7f < param_1; param_1 = param_1 >> 7) {
      *pbVar3 = (byte)param_1 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    *pbVar3 = (byte)param_1;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
    return;
  }
  FUN_1439f9e60(param_2,param_1);
  return;
}



// FUNCTION 1439f4400 ~basic_string<char,std::char_traits<char>,std::allocator<char>_> body=94 status=ok
// SIG undefined ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
     ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 1439f4460 FUN_1439f4460 body=140 status=ok
// SIG undefined FUN_1439f4460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f4460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ba2f74) {
    _Init_thread_header(&DAT_146ba2f74);
    if (DAT_146ba2f74 == -1) {
      _DAT_146ba2f60 = 0;
      uRam0000000146ba2f68 = 0xf;
      DAT_146ba2f50 = 0;
      FUN_1439ef0c0(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>,&DAT_146ba2f50,
                    param_3,param_4,uVar1);
      DAT_146ba2f70 = 1;
      _Init_thread_footer(&DAT_146ba2f74);
      return;
    }
  }
  return;
}



// FUNCTION 1439f44f0 FUN_1439f44f0 body=392 status=ok
// SIG undefined FUN_1439f44f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f44f0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ba2fd0) && (_Init_thread_header(&DAT_146ba2fd0), DAT_146ba2fd0 == -1))
  {
    _guard_xfg_dispatch_icall_nop(&DAT_146ba2f80,0,0x50);
    _guard_xfg_dispatch_icall_nop(&DAT_146ba2f80,2);
    atexit((_func_5014 *)&LAB_143ec5e20);
    _Init_thread_footer(&DAT_146ba2fd0);
  }
  iVar1 = _guard_xfg_dispatch_icall_nop();
  if (DAT_146ba2fd4 == iVar1) {
    uVar4 = local_54;
    if (*param_1 != 1) {
      uVar3 = FUN_1439eeb00(local_48,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_util.cc",
                            0x31a);
      local_54 = 1;
      uVar3 = FUN_1439eef00(uVar3,
                            "CHECK failed: (scc->visit_status.load(std::memory_order_relaxed)) == (SCCInfoBase::kRunning): "
                           );
      FUN_1439eec50(local_58,uVar3);
      uVar4 = 1;
    }
    if ((uVar4 & 1) != 0) {
      DsDevice::~DsDevice(local_48);
    }
  }
  else {
    FUN_1439f4460();
    iVar2 = _guard_xfg_dispatch_icall_nop(&DAT_146ba2f80);
    if (iVar2 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar2);
    }
    DAT_146ba2fd4 = iVar1;
    FUN_1439f4680(param_1);
    DAT_146ba2fd4 = 0;
    iVar1 = _guard_xfg_dispatch_icall_nop(&DAT_146ba2f80);
    if (iVar1 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar1);
    }
  }
  return;
}



// FUNCTION 1439f4680 FUN_1439f4680 body=97 status=ok
// SIG undefined FUN_1439f4680(void)

void FUN_1439f4680(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*param_1 == -1) {
    iVar1 = 0;
    *param_1 = 1;
    plVar2 = (longlong *)(param_1 + 4);
    if (0 < param_1[1]) {
      do {
        if (*plVar2 != 0) {
          FUN_1439f4680();
        }
        iVar1 = iVar1 + 1;
        plVar2 = plVar2 + 1;
      } while (iVar1 < param_1[1]);
    }
    (**(code **)(param_1 + 2))();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1439f46f0 FUN_1439f46f0 body=82 status=ok
// SIG undefined FUN_1439f46f0(void)

void FUN_1439f46f0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*param_1;
  if (*(int *)(param_2 + 0x10) < 10) {
    FUN_1439f9ec0(param_2);
    return;
  }
  pbVar1 = *(byte **)(param_2 + 8);
  pbVar3 = pbVar1;
  for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *pbVar3 = (byte)uVar4 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar4;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
  return;
}



// FUNCTION 1439f4750 FUN_1439f4750 body=161 status=ok
// SIG undefined FUN_1439f4750(void)

void FUN_1439f4750(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  
  uVar5 = param_1[2];
  uVar4 = (uint)uVar5;
  if (*(int *)(param_2 + 0x10) < 5) {
    FUN_1439f9e60(param_2,uVar5 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_2 + 8);
    pbVar7 = pbVar2;
    while (bVar3 = (byte)uVar5, 0x7f < uVar4) {
      uVar5 = uVar5 >> 7 & 0x1ffffff;
      *pbVar7 = bVar3 | 0x80;
      pbVar7 = pbVar7 + 1;
      uVar4 = (uint)uVar5;
    }
    *pbVar7 = bVar3;
    iVar6 = ((int)pbVar7 - (int)pbVar2) + 1;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar6;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar6;
  }
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*(char *)(param_2 + 0x19) == '\0') {
    FUN_1439f9d40(param_2,param_1,*puVar1 & 0xffffffff);
    return;
  }
  FUN_1439f9c00();
  return;
}



// FUNCTION 1439f4800 FUN_1439f4800 body=5908 status=ok
// SIG undefined FUN_1439f4800(void)

void FUN_1439f4800(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  double *pdVar2;
  undefined4 uVar3;
  byte *pbVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  ulonglong *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte *pbVar14;
  longlong lVar15;
  byte bVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  
  if (0 < param_3) {
    lVar21 = 0;
    do {
      uVar19 = 0;
      uVar18 = (ulonglong)*(uint *)(param_2 + lVar21 * 0x18);
      lVar1 = param_2 + lVar21 * 0x18;
      uVar3 = *(undefined4 *)(param_2 + 0xc + lVar21 * 0x18);
      pdVar2 = (double *)(param_1 + uVar18);
      switch(uVar3) {
      case 0:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 1:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 2:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3920(pdVar2,lVar1,param_4);
        }
        break;
      case 3:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3920(pdVar2,lVar1,param_4);
        }
        break;
      case 4:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f39f0(pdVar2,lVar1,param_4);
        }
        break;
      case 5:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 6:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 7:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3ac0(pdVar2,lVar1,param_4);
        }
        break;
      case 8:
      case 0xb:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3b70(pdVar2,lVar1,param_4);
        }
        break;
      case 9:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3bf0(pdVar2,lVar1,param_4);
        }
        break;
      case 10:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3f40(pdVar2,lVar1,param_4);
        }
        break;
      case 0xc:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3fd0(pdVar2,lVar1,param_4);
        }
        break;
      case 0xd:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f39f0(pdVar2,lVar1,param_4);
        }
        break;
      case 0xe:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 0xf:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 0x10:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3d00(pdVar2,lVar1,param_4);
        }
        break;
      case 0x11:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3de0(pdVar2,lVar1,param_4);
        }
        break;
      default:
        FUN_1439f8240(uVar3);
        break;
      case 0x14:
        if ((*(uint *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 8) >> 5) * 4) >>
             (*(uint *)(lVar1 + 8) & 0x1f) & 1) != 0) {
          FUN_1439f3ec0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x15:
        if (*pdVar2 != 0.0) {
LAB_1439f4a4f:
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 0x16:
        if (*(float *)pdVar2 != 0.0) {
LAB_1439f4c2e:
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x17:
        if (*pdVar2 != 0.0) {
          FUN_1439f3920(pdVar2,lVar1,param_4);
        }
        break;
      case 0x18:
        if (*pdVar2 != 0.0) {
          FUN_1439f3920(pdVar2,lVar1,param_4);
        }
        break;
      case 0x19:
        if (*(float *)pdVar2 != 0.0) {
          FUN_1439f39f0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x1a:
        if (*pdVar2 != 0.0) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 0x1b:
        if (*(float *)pdVar2 != 0.0) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x1c:
        if (*(char *)pdVar2 != '\0') {
          FUN_1439f3ac0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x1d:
      case 0x20:
        if (*(longlong *)((longlong)*pdVar2 + 0x10) != 0) {
          FUN_1439f3b70(pdVar2,lVar1,param_4);
        }
        break;
      case 0x1e:
        if (*pdVar2 != 0.0) {
          FUN_1439f3bf0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x1f:
        if (*pdVar2 != 0.0) {
          FUN_1439f3f40(pdVar2,lVar1,param_4);
        }
        break;
      case 0x21:
        if (*(float *)pdVar2 != 0.0) {
          FUN_1439f3fd0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x22:
        if (*(float *)pdVar2 != 0.0) {
          FUN_1439f39f0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x23:
        if (*(float *)pdVar2 != 0.0) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x24:
        if (*pdVar2 != 0.0) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 0x25:
        if (*(float *)pdVar2 != 0.0) {
          FUN_1439f3d00(pdVar2,lVar1,param_4);
        }
        break;
      case 0x26:
        if (*pdVar2 != 0.0) {
          FUN_1439f3de0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x29:
        if (pdVar2[2] != 0.0) {
          FUN_1439f3ec0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x2a:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            puVar12 = (undefined8 *)FUN_1439f1d10(pdVar2,uVar19);
            FUN_1439f9cd0(param_4,*puVar12);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x2b:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            FUN_1439f9c90(param_4,*puVar11);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x2c:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            puVar8 = (ulonglong *)FUN_1439f1d10(pdVar2,uVar19);
            uVar18 = *puVar8;
            if (*(int *)(param_4 + 0x10) < 10) {
              FUN_1439f9ec0(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              for (; 0x7f < uVar18; uVar18 = uVar18 >> 7) {
                *pbVar14 = (byte)uVar18 | 0x80;
                pbVar14 = pbVar14 + 1;
              }
              *pbVar14 = (byte)uVar18;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x2d:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            puVar8 = (ulonglong *)FUN_1439f1d10(pdVar2,uVar19);
            uVar18 = *puVar8;
            if (*(int *)(param_4 + 0x10) < 10) {
              FUN_1439f9ec0(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              for (; 0x7f < uVar18; uVar18 = uVar18 >> 7) {
                *pbVar14 = (byte)uVar18 | 0x80;
                pbVar14 = pbVar14 + 1;
              }
              *pbVar14 = (byte)uVar18;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x2e:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            uVar18 = (ulonglong)*piVar9;
            if (*(int *)(param_4 + 0x10) < 10) {
              FUN_1439f9ec0(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              for (; 0x7f < uVar18; uVar18 = uVar18 >> 7) {
                *pbVar14 = (byte)uVar18 | 0x80;
                pbVar14 = pbVar14 + 1;
              }
              *pbVar14 = (byte)uVar18;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x2f:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            puVar12 = (undefined8 *)FUN_1439f1d10(pdVar2,uVar19);
            FUN_1439f9cd0(param_4,*puVar12);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x30:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            FUN_1439f9c90(param_4,*puVar11);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x31:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            uVar20 = *(uint *)(lVar1 + 4);
            uVar18 = (ulonglong)uVar20;
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              pbVar4 = *(byte **)(param_4 + 8);
              pbVar14 = pbVar4;
              while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
                uVar18 = uVar18 >> 7;
                *pbVar14 = bVar16 | 0x80;
                pbVar14 = pbVar14 + 1;
                uVar20 = (uint)uVar18;
              }
              *pbVar14 = bVar16;
              iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
            }
            pcVar10 = (char *)FUN_1439f1d20(pdVar2,uVar19);
            if (*(int *)(param_4 + 0x10) < 5) {
              FUN_1439f9e60(param_4);
            }
            else {
              *(bool *)*(undefined8 *)(param_4 + 8) = *pcVar10 != '\0';
              *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 1;
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + -1;
            }
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x32:
      case 0x35:
      case 0x3e:
        FUN_1439f3760(pdVar2,lVar1,param_4);
        break;
      case 0x33:
        if (0 < (int)*(float *)(pdVar2 + 1)) {
          uVar18 = uVar19;
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            piVar9 = *(int **)(lVar1 + 0x10);
            lVar15 = (longlong)pdVar2[2] + 8;
            if (pdVar2[2] == 0.0) {
              lVar15 = 0;
            }
            plVar5 = *(longlong **)(lVar15 + uVar19);
            if (piVar9 == (int *)0x0) {
              (**(code **)(*plVar5 + 0x60))(plVar5,param_4);
            }
            else {
              FUN_1439f8150(plVar5,*(uint **)(piVar9 + 2) + 6,*piVar9 + -1,
                            *(undefined4 *)((ulonglong)**(uint **)(piVar9 + 2) + (longlong)plVar5),
                            param_4);
            }
            FUN_141514f80(param_4,*(int *)(lVar1 + 4) + 1);
            uVar20 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar20;
            uVar19 = uVar19 + 8;
          } while ((int)uVar20 < (int)*(float *)(pdVar2 + 1));
        }
        break;
      case 0x34:
        if (0 < (int)*(float *)(pdVar2 + 1)) {
          uVar18 = uVar19;
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            lVar15 = (longlong)pdVar2[2] + 8;
            if (pdVar2[2] == 0.0) {
              lVar15 = 0;
            }
            FUN_1439f4170(*(undefined8 *)(lVar15 + uVar19),*(undefined8 *)(lVar1 + 0x10),param_4);
            uVar20 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar20;
            uVar19 = uVar19 + 8;
          } while ((int)uVar20 < (int)*(float *)(pdVar2 + 1));
        }
        break;
      case 0x36:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            FUN_141514f80(param_4,*puVar11);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x37:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            uVar13 = mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            FUN_1439f46f0(uVar13,param_4);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x38:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            FUN_1439f9c90(param_4,*puVar11);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x39:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            puVar12 = (undefined8 *)FUN_1439f1d10(pdVar2,uVar19);
            FUN_1439f9cd0(param_4,*puVar12);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x3a:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            uVar13 = mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
            FUN_1439f42c0(uVar13,param_4);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x3b:
        iVar7 = FUN_1439f2ae0(pdVar2);
        if (0 < iVar7) {
          do {
            FUN_141514f80(param_4,*(undefined4 *)(lVar1 + 4));
            uVar13 = FUN_1439f1d10(pdVar2,uVar19);
            FUN_1439f4320(uVar13,param_4);
            uVar20 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar20;
            iVar7 = FUN_1439f2ae0(pdVar2);
          } while ((int)uVar20 < iVar7);
        }
        break;
      case 0x3f:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          uVar20 = *(uint *)(lVar1 + 4);
          uVar18 = (ulonglong)uVar20;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              uVar20 = (uint)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          fVar17 = *(float *)(pdVar2 + 2);
          uVar18 = (ulonglong)(uint)fVar17;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < (uint)fVar17) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              fVar17 = (float)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              puVar12 = (undefined8 *)FUN_1439f1d10(pdVar2,uVar19);
              FUN_1439f9cd0(param_4,*puVar12);
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x40:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          uVar20 = *(uint *)(lVar1 + 4);
          uVar18 = (ulonglong)uVar20;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              uVar20 = (uint)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          fVar17 = *(float *)(pdVar2 + 2);
          uVar18 = (ulonglong)(uint)fVar17;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < (uint)fVar17) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              fVar17 = (float)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
              FUN_1439f9c90(param_4,*puVar11);
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x41:
        FUN_1439f30e0(pdVar2,lVar1,param_4);
        break;
      case 0x42:
        FUN_1439f30e0(pdVar2,lVar1,param_4);
        break;
      case 0x43:
        FUN_1439f3230(pdVar2,lVar1,param_4);
        break;
      case 0x44:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          uVar20 = *(uint *)(lVar1 + 4);
          uVar18 = (ulonglong)uVar20;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              uVar20 = (uint)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          fVar17 = *(float *)(pdVar2 + 2);
          uVar18 = (ulonglong)(uint)fVar17;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < (uint)fVar17) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              fVar17 = (float)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              puVar12 = (undefined8 *)FUN_1439f1d10(pdVar2,uVar19);
              FUN_1439f9cd0(param_4,*puVar12);
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x45:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          uVar20 = *(uint *)(lVar1 + 4);
          uVar18 = (ulonglong)uVar20;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              uVar20 = (uint)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          fVar17 = *(float *)(pdVar2 + 2);
          uVar18 = (ulonglong)(uint)fVar17;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < (uint)fVar17) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              fVar17 = (float)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
              FUN_1439f9c90(param_4,*puVar11);
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x46:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          uVar20 = *(uint *)(lVar1 + 4);
          uVar18 = (ulonglong)uVar20;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < uVar20) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              uVar20 = (uint)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          fVar17 = *(float *)(pdVar2 + 2);
          uVar18 = (ulonglong)(uint)fVar17;
          if (*(int *)(param_4 + 0x10) < 5) {
            FUN_1439f9e60(param_4);
          }
          else {
            pbVar4 = *(byte **)(param_4 + 8);
            pbVar14 = pbVar4;
            while (bVar16 = (byte)uVar18, 0x7f < (uint)fVar17) {
              uVar18 = uVar18 >> 7;
              *pbVar14 = bVar16 | 0x80;
              pbVar14 = pbVar14 + 1;
              fVar17 = (float)uVar18;
            }
            *pbVar14 = bVar16;
            iVar7 = ((int)pbVar14 - (int)pbVar4) + 1;
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar7;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar7;
          }
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              pcVar10 = (char *)FUN_1439f1d20(pdVar2,uVar19);
              if (*(int *)(param_4 + 0x10) < 5) {
                FUN_1439f9e60(param_4);
              }
              else {
                *(bool *)*(undefined8 *)(param_4 + 8) = *pcVar10 != '\0';
                *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 1;
                *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + -1;
              }
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x53:
        FUN_1439f2b00(pdVar2,lVar1,param_4);
        break;
      case 0x4b:
        FUN_1439f3620(pdVar2,lVar1,param_4);
        break;
      case 0x4c:
        FUN_1439f3230(pdVar2,lVar1,param_4);
        break;
      case 0x4d:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          FUN_1439f4390(*(undefined4 *)(lVar1 + 4),param_4);
          FUN_1439f4390(*(float *)(pdVar2 + 2),param_4);
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              puVar11 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar2,uVar19);
              FUN_1439f9c90(param_4,*puVar11);
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x4e:
        cVar6 = FUN_1439f2a70(pdVar2);
        if (cVar6 == '\0') {
          FUN_1439f4390(*(undefined4 *)(lVar1 + 4),param_4);
          FUN_1439f4390(*(float *)(pdVar2 + 2),param_4);
          iVar7 = FUN_1439f2ae0(pdVar2);
          if (0 < iVar7) {
            do {
              puVar12 = (undefined8 *)FUN_1439f1d10(pdVar2,uVar19);
              FUN_1439f9cd0(param_4,*puVar12);
              uVar20 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar20;
              iVar7 = FUN_1439f2ae0(pdVar2);
            } while ((int)uVar20 < iVar7);
          }
        }
        break;
      case 0x4f:
        FUN_1439f3380(pdVar2,lVar1,param_4);
        break;
      case 0x50:
        FUN_1439f34d0(pdVar2,lVar1,param_4);
        break;
      case 0x54:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3)
        goto LAB_1439f4a4f;
        break;
      case 0x55:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3)
        goto LAB_1439f4c2e;
        break;
      case 0x56:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3920(pdVar2,lVar1,param_4);
        }
        break;
      case 0x57:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3920(pdVar2,lVar1,param_4);
        }
        break;
      case 0x58:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f39f0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x59:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 0x5a:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x5b:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3ac0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x5c:
      case 0x5f:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3b70(pdVar2,lVar1,param_4);
        }
        break;
      case 0x5d:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3bf0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x5e:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3f40(pdVar2,lVar1,param_4);
        }
        break;
      case 0x60:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3fd0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x61:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f39f0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x62:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f38a0(pdVar2,lVar1,param_4);
        }
        break;
      case 99:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3820(pdVar2,lVar1,param_4);
        }
        break;
      case 100:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3d00(pdVar2,lVar1,param_4);
        }
        break;
      case 0x65:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3de0(pdVar2,lVar1,param_4);
        }
        break;
      case 0x68:
        if (*(uint *)((ulonglong)*(uint *)(lVar1 + 8) + param_1) == *(uint *)(lVar1 + 4) >> 3) {
          FUN_1439f3ec0(*pdVar2,lVar1,param_4);
        }
        break;
      case 0x69:
        (**(code **)(lVar1 + 0x10))
                  (param_1,uVar18,*(undefined4 *)(lVar1 + 4),*(undefined4 *)(lVar1 + 8),param_4);
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < param_3);
  }
  return;
}



// FUNCTION 1439f60c0 FUN_1439f60c0 body=7897 status=ok
// SIG undefined FUN_1439f60c0(void)

byte * FUN_1439f60c0(longlong param_1,longlong param_2,int param_3,undefined1 param_4,byte *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  float fVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  byte *local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [16];
  int local_90;
  int local_8c;
  undefined1 local_86;
  undefined1 local_80 [72];
  
  local_b0 = param_5;
  if (0 < param_3) {
    lVar18 = 0;
    local_a8 = param_4;
    do {
      iVar3 = 0;
      puVar7 = (uint *)(param_2 + lVar18 * 0x18);
      pdVar17 = (double *)((ulonglong)*puVar7 + param_1);
      pbVar16 = local_b0;
      switch(puVar7[3]) {
      case 0:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
LAB_1439f6180:
          FUN_1439f2c40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 1:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2c80(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 2:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2cc0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 3:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2cc0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 4:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2d30(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 5:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2c40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 6:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2c80(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 7:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2da0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 8:
      case 0xb:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2de0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 9:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2e40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 10:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f3040(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0xc:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f3080(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0xd:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2d30(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0xe:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2c80(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0xf:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2c40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x10:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2f00(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x11:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2f70(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      default:
        FUN_1439f8240(puVar7[3]);
        pbVar16 = local_b0;
        break;
      case 0x14:
        if ((*(uint *)(param_1 + (ulonglong)(puVar7[2] >> 5) * 4) >> (puVar7[2] & 0x1f) & 1) != 0) {
          FUN_1439f2ff0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x15:
        if (*pdVar17 != 0.0) goto LAB_1439f6180;
        break;
      case 0x16:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f2c80(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x17:
        if (*pdVar17 != 0.0) {
          FUN_1439f2cc0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x18:
        if (*pdVar17 != 0.0) {
          FUN_1439f2cc0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x19:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f2d30(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x1a:
        if (*pdVar17 != 0.0) {
          FUN_1439f2c40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x1b:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f2c80(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x1c:
        if (*(char *)pdVar17 != '\0') {
          FUN_1439f2da0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x1d:
      case 0x20:
        if (*(longlong *)((longlong)*pdVar17 + 0x10) != 0) {
          FUN_1439f2de0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x1e:
        if (*pdVar17 != 0.0) {
          FUN_1439f2e40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x1f:
        if (*pdVar17 != 0.0) {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
LAB_1439f7319:
          local_b0 = param_5 + 1;
          FUN_1439f40a0(*pdVar17,*(undefined8 *)(puVar7 + 4),&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x21:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f3080(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x22:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f2d30(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x23:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f2c80(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x24:
        if (*pdVar17 != 0.0) {
          FUN_1439f2c40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x25:
        if (*(float *)pdVar17 != 0.0) {
          FUN_1439f2f00(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x26:
        if (*pdVar17 != 0.0) {
          FUN_1439f2f70(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x29:
        if (pdVar17[2] != 0.0) {
          FUN_1439f2ff0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x2a:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
            *(undefined8 *)(param_5 + 1) = *puVar10;
            param_5 = param_5 + 9;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x2b:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar8 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            *(undefined4 *)(param_5 + 1) = *puVar8;
            param_5 = param_5 + 5;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x2c:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar4 = (ulonglong *)FUN_1439f1d10(pdVar17,iVar3);
            uVar14 = *puVar4;
            while( true ) {
              pbVar16 = param_5 + 1;
              if (uVar14 < 0x80) break;
              *pbVar16 = (byte)uVar14 | 0x80;
              uVar14 = uVar14 >> 7;
              param_5 = pbVar16;
            }
            *pbVar16 = (byte)uVar14;
            param_5 = param_5 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x2d:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar4 = (ulonglong *)FUN_1439f1d10(pdVar17,iVar3);
            uVar14 = *puVar4;
            while( true ) {
              pbVar16 = param_5 + 1;
              if (uVar14 < 0x80) break;
              *pbVar16 = (byte)uVar14 | 0x80;
              uVar14 = uVar14 >> 7;
              param_5 = pbVar16;
            }
            *pbVar16 = (byte)uVar14;
            param_5 = param_5 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x2e:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            uVar14 = (ulonglong)*piVar9;
            while( true ) {
              pbVar16 = param_5 + 1;
              if (uVar14 < 0x80) break;
              *pbVar16 = (byte)uVar14 | 0x80;
              uVar14 = uVar14 >> 7;
              param_5 = pbVar16;
            }
            *pbVar16 = (byte)uVar14;
            param_5 = param_5 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x2f:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
            *(undefined8 *)(param_5 + 1) = *puVar10;
            param_5 = param_5 + 9;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x30:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar8 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            *(undefined4 *)(param_5 + 1) = *puVar8;
            param_5 = param_5 + 5;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x31:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            pcVar5 = (char *)FUN_1439f1d20(pdVar17,iVar3);
            param_5[1] = *pcVar5 != '\0';
            param_5 = param_5 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x32:
      case 0x35:
      case 0x3e:
        FUN_1439f2ba0(pdVar17,puVar7,&local_b0);
        param_5 = local_b0;
        pbVar16 = local_b0;
        break;
      case 0x33:
        if (0 < (int)*(float *)(pdVar17 + 1)) {
          lVar19 = 0;
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            local_b0 = param_5 + 1;
            lVar13 = (longlong)pdVar17[2] + 8;
            if (pdVar17[2] == 0.0) {
              lVar13 = 0;
            }
            piVar9 = *(int **)(puVar7 + 4);
            if (piVar9 == (int *)0x0) {
              FUN_1439f81a0(*(undefined8 *)(lVar13 + lVar19),&local_b0);
            }
            else {
              local_b0 = (byte *)FUN_1439f60c0(*(undefined8 *)(lVar13 + lVar19),
                                               *(longlong *)(piVar9 + 2) + 0x18,*piVar9 + -1,
                                               local_a8,local_b0);
            }
            for (uVar15 = puVar7[1] + 1; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *local_b0 = (byte)uVar15 | 0x80;
              local_b0 = local_b0 + 1;
            }
            *local_b0 = (byte)uVar15;
            param_5 = local_b0 + 1;
            iVar3 = iVar3 + 1;
            lVar19 = lVar19 + 8;
            pbVar16 = param_5;
          } while (iVar3 < (int)*(float *)(pdVar17 + 1));
        }
        break;
      case 0x34:
        if (0 < (int)*(float *)(pdVar17 + 1)) {
          local_b0 = param_5;
          lVar19 = 0;
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *local_b0 = (byte)uVar15 | 0x80;
              local_b0 = local_b0 + 1;
            }
            *local_b0 = (byte)uVar15;
            local_b0 = local_b0 + 1;
            lVar13 = (longlong)pdVar17[2] + 8;
            if (pdVar17[2] == 0.0) {
              lVar13 = 0;
            }
            FUN_1439f40a0(*(undefined8 *)(lVar13 + lVar19),*(undefined8 *)(puVar7 + 4),&local_b0);
            iVar3 = iVar3 + 1;
            lVar19 = lVar19 + 8;
            param_5 = local_b0;
            pbVar16 = local_b0;
          } while (iVar3 < (int)*(float *)(pdVar17 + 1));
        }
        break;
      case 0x36:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar6 = (uint *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            uVar15 = *puVar6;
            while( true ) {
              pbVar16 = param_5 + 1;
              if (uVar15 < 0x80) break;
              *pbVar16 = (byte)uVar15 | 0x80;
              uVar15 = uVar15 >> 7;
              param_5 = pbVar16;
            }
            *pbVar16 = (byte)uVar15;
            param_5 = param_5 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x37:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            uVar14 = (ulonglong)*piVar9;
            while( true ) {
              pbVar16 = param_5 + 1;
              if (uVar14 < 0x80) break;
              *pbVar16 = (byte)uVar14 | 0x80;
              uVar14 = uVar14 >> 7;
              param_5 = pbVar16;
            }
            *pbVar16 = (byte)uVar14;
            param_5 = param_5 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x38:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar8 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            *(undefined4 *)(param_5 + 1) = *puVar8;
            param_5 = param_5 + 5;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x39:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
            *(undefined8 *)(param_5 + 1) = *puVar10;
            param_5 = param_5 + 9;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x3a:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
            uVar15 = *piVar9 >> 0x1f ^ *piVar9 * 2;
            while( true ) {
              param_5 = param_5 + 1;
              if (uVar15 < 0x80) break;
              *param_5 = (byte)uVar15 | 0x80;
              uVar15 = uVar15 >> 7;
            }
            *param_5 = (byte)uVar15;
            param_5 = param_5 + 1;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x3b:
        iVar2 = FUN_1439f2ae0(pdVar17);
        pbVar16 = local_b0;
        if (0 < iVar2) {
          do {
            for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *param_5 = (byte)uVar15 | 0x80;
              param_5 = param_5 + 1;
            }
            *param_5 = (byte)uVar15;
            puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
            param_5 = (byte *)FUN_1439f8300(*puVar10,param_5 + 1);
            iVar3 = iVar3 + 1;
            iVar2 = FUN_1439f2ae0(pdVar17);
            pbVar16 = param_5;
          } while (iVar3 < iVar2);
        }
        break;
      case 0x3f:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
              *(undefined8 *)param_5 = *puVar10;
              param_5 = param_5 + 8;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x40:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar8 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              *(undefined4 *)param_5 = *puVar8;
              param_5 = param_5 + 4;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x41:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar4 = (ulonglong *)FUN_1439f1d10(pdVar17,iVar3);
              for (uVar14 = *puVar4; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
                *param_5 = (byte)uVar14 | 0x80;
                param_5 = param_5 + 1;
              }
              *param_5 = (byte)uVar14;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x42:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar4 = (ulonglong *)FUN_1439f1d10(pdVar17,iVar3);
              for (uVar14 = *puVar4; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
                *param_5 = (byte)uVar14 | 0x80;
                param_5 = param_5 + 1;
              }
              *param_5 = (byte)uVar14;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x43:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              for (uVar14 = (ulonglong)*piVar9; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
                *param_5 = (byte)uVar14 | 0x80;
                param_5 = param_5 + 1;
              }
              *param_5 = (byte)uVar14;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x44:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
              *(undefined8 *)param_5 = *puVar10;
              param_5 = param_5 + 8;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x45:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar8 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              *(undefined4 *)param_5 = *puVar8;
              param_5 = param_5 + 4;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x46:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              pcVar5 = (char *)FUN_1439f1d20(pdVar17,iVar3);
              *param_5 = *pcVar5 != '\0';
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x53:
        FUN_1439f2b00(pdVar17,puVar7,&local_b0);
        pbVar16 = local_b0;
        break;
      case 0x4b:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              for (uVar15 = *puVar7; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
                *param_5 = (byte)uVar15 | 0x80;
                param_5 = param_5 + 1;
              }
              *param_5 = (byte)uVar15;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x4c:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              for (uVar14 = (ulonglong)*piVar9; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
                *param_5 = (byte)uVar14 | 0x80;
                param_5 = param_5 + 1;
              }
              *param_5 = (byte)uVar14;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x4d:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar8 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              *(undefined4 *)param_5 = *puVar8;
              param_5 = param_5 + 4;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x4e:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
              *(undefined8 *)param_5 = *puVar10;
              param_5 = param_5 + 8;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x4f:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              piVar9 = (int *)mu::FPhysicsBody::GetBodyBoneId(pdVar17,iVar3);
              for (uVar15 = *piVar9 >> 0x1f ^ *piVar9 * 2; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
                *param_5 = (byte)uVar15 | 0x80;
                param_5 = param_5 + 1;
              }
              *param_5 = (byte)uVar15;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x50:
        cVar1 = FUN_1439f2a70(pdVar17);
        pbVar16 = local_b0;
        if (cVar1 == '\0') {
          for (uVar15 = puVar7[1]; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          fVar11 = *(float *)(pdVar17 + 2);
          while( true ) {
            param_5 = param_5 + 1;
            if ((uint)fVar11 < 0x80) break;
            *param_5 = SUB41(fVar11,0) | 0x80;
            fVar11 = (float)((uint)fVar11 >> 7);
          }
          *param_5 = SUB41(fVar11,0);
          param_5 = param_5 + 1;
          local_b0 = param_5;
          iVar2 = FUN_1439f2ae0(pdVar17);
          pbVar16 = local_b0;
          if (0 < iVar2) {
            do {
              puVar10 = (undefined8 *)FUN_1439f1d10(pdVar17,iVar3);
              param_5 = (byte *)FUN_1439f8300(*puVar10,param_5);
              iVar3 = iVar3 + 1;
              iVar2 = FUN_1439f2ae0(pdVar17);
              pbVar16 = param_5;
            } while (iVar3 < iVar2);
          }
        }
        break;
      case 0x54:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
LAB_1439f6318:
          *param_5 = (byte)uVar15;
          *(double *)(param_5 + 1) = *pdVar17;
          param_5 = param_5 + 9;
          pbVar16 = param_5;
        }
        break;
      case 0x55:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          *(float *)(param_5 + 1) = *(float *)pdVar17;
          param_5 = param_5 + 5;
          pbVar16 = param_5;
        }
        break;
      case 0x56:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          for (dVar12 = *pdVar17; param_5 = param_5 + 1, 0x7f < (ulonglong)dVar12;
              dVar12 = (double)((ulonglong)dVar12 >> 7)) {
            *param_5 = SUB81(dVar12,0) | 0x80;
          }
LAB_1439f6707:
          *param_5 = SUB81(dVar12,0);
          param_5 = param_5 + 1;
          pbVar16 = param_5;
        }
        break;
      case 0x57:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          param_5 = param_5 + 1;
          dVar12 = *pdVar17;
          if ((ulonglong)dVar12 < 0x80) goto LAB_1439f6707;
          do {
            pbVar16 = param_5;
            *pbVar16 = SUB81(dVar12,0) | 0x80;
            dVar12 = (double)((ulonglong)dVar12 >> 7);
            param_5 = pbVar16 + 1;
          } while (0x7f < (ulonglong)dVar12);
          pbVar16[1] = SUB81(dVar12,0);
          param_5 = pbVar16 + 2;
          pbVar16 = pbVar16 + 2;
        }
        break;
      case 0x58:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          param_5 = param_5 + 1;
          dVar12 = (double)(longlong)(int)*(float *)pdVar17;
          if ((ulonglong)dVar12 < 0x80) goto LAB_1439f6707;
          do {
            pbVar16 = param_5;
            *pbVar16 = SUB81(dVar12,0) | 0x80;
            dVar12 = (double)((ulonglong)dVar12 >> 7);
            param_5 = pbVar16 + 1;
          } while (0x7f < (ulonglong)dVar12);
          pbVar16[1] = SUB81(dVar12,0);
          param_5 = pbVar16 + 2;
          pbVar16 = pbVar16 + 2;
        }
        break;
      case 0x59:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          goto LAB_1439f6318;
        }
        break;
      case 0x5a:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
LAB_1439f6e95:
          *param_5 = (byte)uVar15;
          *(float *)(param_5 + 1) = *(float *)pdVar17;
          param_5 = param_5 + 5;
          pbVar16 = param_5;
        }
        break;
      case 0x5b:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          param_5[1] = *(char *)pdVar17 != '\0';
          param_5 = param_5 + 2;
          pbVar16 = param_5;
        }
        break;
      case 0x5c:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          param_5 = (byte *)FUN_1439f9df0(*pdVar17,param_5 + 1);
          pbVar16 = param_5;
        }
        break;
      case 0x5d:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f2e40(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x5e:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          *param_5 = (byte)uVar15;
          goto LAB_1439f7319;
        }
        break;
      case 0x5f:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f2de0(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x60:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f3080(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x61:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f2d30(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x62:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          if (uVar15 < 0x80) goto LAB_1439f6e95;
          do {
            pbVar16 = param_5;
            *pbVar16 = (byte)uVar15 | 0x80;
            uVar15 = uVar15 >> 7;
            param_5 = pbVar16 + 1;
          } while (0x7f < uVar15);
          pbVar16[1] = (byte)uVar15;
          *(float *)(pbVar16 + 2) = *(float *)pdVar17;
          param_5 = pbVar16 + 6;
          pbVar16 = pbVar16 + 6;
        }
        break;
      case 99:
        uVar15 = puVar7[1];
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == uVar15 >> 3) {
          for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
            *param_5 = (byte)uVar15 | 0x80;
            param_5 = param_5 + 1;
          }
          goto LAB_1439f6318;
        }
        break;
      case 100:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f2f00(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x65:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f2f70(pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x68:
        if (*(uint *)((ulonglong)puVar7[2] + param_1) == puVar7[1] >> 3) {
          FUN_1439f2ff0(*pdVar17,puVar7,&local_b0);
          param_5 = local_b0;
          pbVar16 = local_b0;
        }
        break;
      case 0x69:
        FUN_143a500d0(local_80,param_5,0x7fffffff,0xffffffff);
        FUN_1439f8370(local_a0,local_80);
        local_86 = param_4;
        (**(code **)(puVar7 + 4))(param_1,*puVar7,puVar7[1],puVar7[2],local_a0);
        iVar3 = local_8c - local_90;
        local_b0 = param_5 + iVar3;
        FUN_1439f8450(local_a0);
        param_5 = param_5 + iVar3;
        pbVar16 = local_b0;
      }
      local_b0 = pbVar16;
      lVar18 = lVar18 + 1;
    } while (lVar18 < param_3);
  }
  return param_5;
}



// FUNCTION 1439f8150 FUN_1439f8150 body=73 status=ok
// SIG undefined FUN_1439f8150(void)

void FUN_1439f8150(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  if ((*(char *)(param_5 + 0x1a) == '\0') && (param_4 <= *(int *)(param_5 + 0x10))) {
    lVar1 = *(longlong *)(param_5 + 8);
    *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) - param_4;
    *(longlong *)(param_5 + 8) = lVar1 + param_4;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001439f8189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    }
  }
  FUN_1439f4800(param_1,param_2);
  return;
}



// FUNCTION 1439f81a0 FUN_1439f81a0 body=160 status=ok
// SIG undefined FUN_1439f81a0(void)

void FUN_1439f81a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_50 [16];
  int local_40;
  int local_3c;
  undefined1 local_36;
  undefined1 local_30 [40];
  
  if ((char)param_2[1] != '\0') {
    FUN_143a500d0(local_30,*param_2,0x7fffffff,0xffffffff);
    FUN_1439f8370(local_50,local_30);
    local_36 = 1;
    (**(code **)(*param_1 + 0x60))(param_1,local_50);
    *param_2 = *param_2 + (longlong)(local_3c - local_40);
    FUN_1439f8450(local_50);
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x80))(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  *param_2 = lVar1;
  return;
}



// FUNCTION 1439f8240 FUN_1439f8240 body=129 status=ok
// SIG undefined FUN_1439f8240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f8240(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1439eeb00(local_48,3,
                        "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_util.cc",0x234)
  ;
  uVar1 = FUN_1439eef00(uVar1,"Not implemented field number ");
  uVar1 = FUN_1439eed20(uVar1,param_1);
  FUN_1439eec50(local_58,uVar1);
  DsDevice::~DsDevice(local_48);
  return;
}



// FUNCTION 1439f82d0 StringSpaceUsedExcludingSelf body=36 status=ok
// SIG undefined StringSpaceUsedExcludingSelf(void)

ulonglong google::protobuf::internal::StringSpaceUsedExcludingSelf(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[3];
  puVar1 = param_1 + 4;
  if (0xf < uVar2) {
    if ((ulonglong *)*param_1 < param_1) {
      return uVar2;
    }
    if (0xf < uVar2) {
      param_1 = (ulonglong *)*param_1;
    }
  }
  if (param_1 < puVar1) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1439f8300 FUN_1439f8300 body=62 status=ok
// SIG undefined FUN_1439f8300(void)

byte * FUN_1439f8300(longlong param_1,byte *param_2)

{
  ulonglong uVar1;
  
  for (uVar1 = param_1 >> 0x3f ^ param_1 * 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return param_2 + 1;
}



// FUNCTION 1439f8340 FUN_1439f8340 body=46 status=ok
// SIG undefined FUN_1439f8340(void)

byte * FUN_1439f8340(ulonglong param_1,byte *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}



// FUNCTION 1439f8370 FUN_1439f8370 body=128 status=ok
// SIG undefined FUN_1439f8370(void)

undefined8 * FUN_1439f8370(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *local_res8;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(bool *)((longlong)param_1 + 0x1a) = DAT_146ba2fd8 != '\0';
  local_res8 = param_1;
  cVar1 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_res8,param_1 + 2);
  if (cVar1 == '\0') {
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    param_1[1] = local_res8;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + *(int *)(param_1 + 2);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1439f83f0 FUN_1439f83f0 body=81 status=ok
// SIG undefined FUN_1439f83f0(void)

void FUN_1439f83f0(int *param_1)

{
  if ((*(longlong **)(param_1 + 4) != (longlong *)0x0) &&
     (0 < (param_1[2] - *param_1) + param_1[7] + param_1[0xb])) {
    (**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    param_1[6] = param_1[6] + ((*param_1 - param_1[2]) - param_1[0xb]);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
    param_1[7] = 0;
  }
  return;
}



// FUNCTION 1439f8450 FUN_1439f8450 body=56 status=ok
// SIG undefined FUN_1439f8450(void)

void FUN_1439f8450(undefined8 *param_1)

{
  if (0 < *(int *)(param_1 + 2)) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) - *(int *)(param_1 + 2);
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1439f8490 FUN_1439f8490 body=31 status=ok
// SIG undefined FUN_1439f8490(void)

int FUN_1439f8490(int *param_1)

{
  if (param_1[10] == 0x7fffffff) {
    return -1;
  }
  return (((param_1[0xb] - param_1[6]) + param_1[2]) - *param_1) + param_1[10];
}



// FUNCTION 1439f84b0 FUN_1439f84b0 body=78 status=ok
// SIG undefined FUN_1439f84b0(void)

undefined1 FUN_1439f84b0(longlong param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x2c) + *(longlong *)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  *(int *)(param_1 + 0x28) = param_2;
  *(longlong *)(param_1 + 8) = lVar3;
  iVar2 = *(int *)(param_1 + 0x30);
  if (param_2 <= *(int *)(param_1 + 0x30)) {
    iVar2 = param_2;
  }
  if (iVar2 < *(int *)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0x18) - iVar2;
    *(longlong *)(param_1 + 8) = lVar3 - iVar2;
    *(int *)(param_1 + 0x2c) = iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined1 *)(param_1 + 0x24) = 0;
    return uVar1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return uVar1;
}



// FUNCTION 1439f8500 FUN_1439f8500 body=117 status=ok
// SIG undefined FUN_1439f8500(void)

int * FUN_1439f8500(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[10];
  iVar3 = param_1[0xd] + -1;
  param_1[0xd] = iVar3;
  if (((-1 < param_3) &&
      (iVar2 = ((param_1[6] - param_1[0xb]) - param_1[2]) + *param_1, param_3 <= 0x7fffffff - iVar2)
      ) && (param_3 < iVar1 - iVar2)) {
    param_1[10] = iVar2 + param_3;
    FUN_1439f9940(param_1);
    iVar3 = param_1[0xd];
  }
  *param_2 = iVar1;
  param_2[1] = iVar3;
  return param_2;
}



// FUNCTION 1439f8580 FUN_1439f8580 body=603 status=ok
// SIG undefined FUN_1439f8580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439f8580(longlong *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  size_t _Size;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7 [3];
  int local_d4 [3];
  longlong local_c8 [2];
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_c8[1] = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  bVar2 = false;
  local_d4[1] = 0;
  iVar6 = (int)param_1[1] - (int)*param_1;
  bVar9 = SBORROW4(iVar6,param_3);
  bVar8 = iVar6 - param_3 < 0;
  while( true ) {
    if (bVar9 == bVar8) {
      _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,(longlong)param_3);
      *param_1 = *param_1 + (longlong)param_3;
      return 1;
    }
    _Size = (size_t)iVar6;
    _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,_Size);
    param_2 = (void *)((longlong)param_2 + _Size);
    param_3 = param_3 - iVar6;
    *param_1 = *param_1 + _Size;
    if (((0 < *(int *)((longlong)param_1 + 0x2c)) || (0 < *(int *)((longlong)param_1 + 0x1c))) ||
       ((int)param_1[3] == (int)param_1[5])) break;
    plVar1 = (longlong *)param_1[2];
    do {
      cVar3 = (**(code **)(*plVar1 + 8))(plVar1,local_c8,local_d4);
      if (cVar3 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    } while (local_d4[0] == 0);
    *param_1 = local_c8[0];
    lVar7 = local_c8[0] + local_d4[0];
    param_1[1] = lVar7;
    if (local_d4[0] < 0) {
      uVar4 = FUN_1439eeb00(local_b8,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",599);
      bVar2 = true;
      local_d4[1] = 2;
      uVar4 = FUN_1439eef00(uVar4,"CHECK failed: (buffer_size) >= (0): ");
      FUN_1439eec50(&local_d8,uVar4);
      lVar7 = param_1[1];
    }
    if (bVar2) {
      bVar2 = false;
      DsDevice::~DsDevice(local_b8);
      lVar7 = param_1[1];
    }
    iVar6 = (int)param_1[3];
    if (0x7fffffff - local_d4[0] < iVar6) {
      iVar6 = iVar6 + -0x7fffffff + local_d4[0];
      *(int *)((longlong)param_1 + 0x1c) = iVar6;
      *(undefined4 *)(param_1 + 3) = 0x7fffffff;
      lVar7 = lVar7 - iVar6;
      iVar6 = 0x7fffffff;
    }
    else {
      iVar6 = iVar6 + local_d4[0];
      *(int *)(param_1 + 3) = iVar6;
    }
    lVar7 = *(int *)((longlong)param_1 + 0x2c) + lVar7;
    param_1[1] = lVar7;
    iVar5 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar5 = (int)param_1[5];
    }
    if (iVar5 < iVar6) {
      *(int *)((longlong)param_1 + 0x2c) = iVar6 - iVar5;
      lVar7 = lVar7 - (iVar6 - iVar5);
      param_1[1] = lVar7;
      iVar6 = (int)lVar7 - (int)*param_1;
      bVar9 = SBORROW4(iVar6,param_3);
      bVar8 = iVar6 - param_3 < 0;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      iVar6 = (int)lVar7 - (int)*param_1;
      bVar9 = SBORROW4(iVar6,param_3);
      bVar8 = iVar6 - param_3 < 0;
    }
  }
  if (((int)param_1[6] <= (int)param_1[3] - *(int *)((longlong)param_1 + 0x2c)) &&
     ((int)param_1[6] != (int)param_1[5])) {
    uVar4 = FUN_1439eeb00(local_80,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc"
                          ,0xc0);
    uVar4 = FUN_1439eef00(uVar4,"A protocol message was rejected because it was too big (more than "
                         );
    uVar4 = FUN_1439eed20(uVar4,(int)param_1[6]);
    uVar4 = FUN_1439eef00(uVar4,
                          " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in net/proto2/io/public/coded_stream.h."
                         );
    FUN_1439eec50(local_d7,uVar4);
    DsDevice::~DsDevice(local_80);
  }
  return 0;
}



// FUNCTION 1439f87e0 FUN_1439f87e0 body=417 status=ok
// SIG undefined FUN_1439f87e0(void)

undefined8 FUN_1439f87e0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong _Size;
  int iVar6;
  size_t _Size_00;
  
  _Size_00 = (size_t)(int)param_3;
  if ((int)param_3 < 0) {
    return 0;
  }
  iVar5 = (int)param_1[1];
  iVar4 = (int)*param_1;
  if (iVar5 - iVar4 < (int)param_3) {
    if (param_2[2] != 0) {
      param_2[2] = 0;
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      *(undefined1 *)puVar3 = 0;
      iVar5 = (int)param_1[1];
      iVar4 = (int)*param_1;
    }
    iVar6 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar6 = (int)param_1[5];
    }
    if ((((iVar6 != 0x7fffffff) &&
         (iVar6 = ((*(int *)((longlong)param_1 + 0x2c) - (int)param_1[3]) - iVar4) + iVar5 + iVar6,
         0 < iVar6)) && (0 < (int)param_3)) && ((int)param_3 <= iVar6)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (param_2,_Size_00);
      iVar4 = (int)*param_1;
      iVar5 = (int)param_1[1];
    }
    iVar5 = iVar5 - iVar4;
    if (iVar5 < (int)param_3) {
      do {
        if (iVar5 != 0) {
          lVar1 = param_2[2];
          _Src = (void *)*param_1;
          _Size = (ulonglong)iVar5;
          if ((ulonglong)(param_2[3] - lVar1) < _Size) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                      (param_2,_Size,0,_Src,_Size);
          }
          else {
            param_2[2] = lVar1 + _Size;
            puVar3 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar3 = (undefined8 *)*param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + lVar1),_Src,_Size);
            *(undefined1 *)((longlong)puVar3 + lVar1 + _Size) = 0;
          }
        }
        *param_1 = *param_1 + (longlong)iVar5;
        param_3 = (int)_Size_00 - iVar5;
        _Size_00 = (size_t)param_3;
        cVar2 = FUN_1439f9980(param_1);
        if (cVar2 == '\0') {
          return 0;
        }
        iVar5 = (int)param_1[1] - (int)*param_1;
      } while (iVar5 < (int)param_3);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_2,*param_1,(longlong)(int)param_3);
    *param_1 = *param_1 + (longlong)(int)param_3;
    return 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_2,_Size_00,0);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,_Size_00);
  *param_1 = *param_1 + _Size_00;
  return 1;
}



// FUNCTION 1439f8990 FUN_1439f8990 body=62 status=ok
// SIG undefined FUN_1439f8990(void)

void FUN_1439f8990(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x2c) + *(longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x28) = param_2;
  *(longlong *)(param_1 + 8) = lVar2;
  iVar1 = *(int *)(param_1 + 0x30);
  if (param_2 <= *(int *)(param_1 + 0x30)) {
    iVar1 = param_2;
  }
  if (iVar1 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x18) - iVar1;
    *(longlong *)(param_1 + 8) = lVar2 - iVar1;
    *(int *)(param_1 + 0x2c) = iVar1;
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 1439f89d0 FUN_1439f89d0 body=69 status=ok
// SIG undefined FUN_1439f89d0(void)

int FUN_1439f89d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[10];
  if (((-1 < param_2) &&
      (iVar2 = ((param_1[6] - param_1[0xb]) - param_1[2]) + *param_1, param_2 <= 0x7fffffff - iVar2)
      ) && (param_2 < iVar1 - iVar2)) {
    param_1[10] = iVar2 + param_2;
    FUN_1439f9940(param_1);
  }
  return iVar1;
}



// FUNCTION 1439f8a20 FUN_1439f8a20 body=86 status=ok
// SIG undefined FUN_1439f8a20(void)

undefined8 FUN_1439f8a20(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [8];
  
  if (3 < (uint)((int)param_1[1] - (int)*param_1)) {
    puVar2 = (undefined4 *)*param_1;
    *param_1 = (longlong)(puVar2 + 1);
    uVar1 = *puVar2;
    *param_2 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  uVar3 = FUN_1439f8580(param_1,local_res8,4);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  *param_2 = local_res8[0];
  return CONCAT71((uint7)(uint3)((uint)local_res8[0] >> 8),1);
}



// FUNCTION 1439f8a80 FUN_1439f8a80 body=120 status=ok
// SIG undefined FUN_1439f8a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439f8a80(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((uint)((int)param_1[1] - (int)*param_1) < 8) {
    uVar1 = FUN_1439f8580(param_1,&local_18,8);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    puVar2 = &local_18;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = (longlong)(puVar2 + 1);
  }
  uVar1 = *puVar2;
  *param_2 = uVar1;
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



// FUNCTION 1439f8b00 thunk_FUN_1439f8580 body=5 status=ok
// SIG undefined thunk_FUN_1439f8580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 thunk_FUN_1439f8580(longlong *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  size_t _Size;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined1 uStack_d8;
  undefined1 auStack_d7 [3];
  int aiStack_d4 [3];
  longlong alStack_c8 [2];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  ulonglong uStack_48;
  
  alStack_c8[1] = 0xfffffffffffffffe;
  uStack_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  bVar2 = false;
  aiStack_d4[1] = 0;
  iVar6 = (int)param_1[1] - (int)*param_1;
  bVar9 = SBORROW4(iVar6,param_3);
  bVar8 = iVar6 - param_3 < 0;
  while( true ) {
    if (bVar9 == bVar8) {
      _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,(longlong)param_3);
      *param_1 = *param_1 + (longlong)param_3;
      return 1;
    }
    _Size = (size_t)iVar6;
    _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,_Size);
    param_2 = (void *)((longlong)param_2 + _Size);
    param_3 = param_3 - iVar6;
    *param_1 = *param_1 + _Size;
    if (((0 < *(int *)((longlong)param_1 + 0x2c)) || (0 < *(int *)((longlong)param_1 + 0x1c))) ||
       ((int)param_1[3] == (int)param_1[5])) break;
    plVar1 = (longlong *)param_1[2];
    do {
      cVar3 = (**(code **)(*plVar1 + 8))(plVar1,alStack_c8,aiStack_d4);
      if (cVar3 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    } while (aiStack_d4[0] == 0);
    *param_1 = alStack_c8[0];
    lVar7 = alStack_c8[0] + aiStack_d4[0];
    param_1[1] = lVar7;
    if (aiStack_d4[0] < 0) {
      uVar4 = FUN_1439eeb00(auStack_b8,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",599);
      bVar2 = true;
      aiStack_d4[1] = 2;
      uVar4 = FUN_1439eef00(uVar4,"CHECK failed: (buffer_size) >= (0): ");
      FUN_1439eec50(&uStack_d8,uVar4);
      lVar7 = param_1[1];
    }
    if (bVar2) {
      bVar2 = false;
      DsDevice::~DsDevice(auStack_b8);
      lVar7 = param_1[1];
    }
    iVar6 = (int)param_1[3];
    if (0x7fffffff - aiStack_d4[0] < iVar6) {
      iVar6 = iVar6 + -0x7fffffff + aiStack_d4[0];
      *(int *)((longlong)param_1 + 0x1c) = iVar6;
      *(undefined4 *)(param_1 + 3) = 0x7fffffff;
      lVar7 = lVar7 - iVar6;
      iVar6 = 0x7fffffff;
    }
    else {
      iVar6 = iVar6 + aiStack_d4[0];
      *(int *)(param_1 + 3) = iVar6;
    }
    lVar7 = *(int *)((longlong)param_1 + 0x2c) + lVar7;
    param_1[1] = lVar7;
    iVar5 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar5 = (int)param_1[5];
    }
    if (iVar5 < iVar6) {
      *(int *)((longlong)param_1 + 0x2c) = iVar6 - iVar5;
      lVar7 = lVar7 - (iVar6 - iVar5);
      param_1[1] = lVar7;
      iVar6 = (int)lVar7 - (int)*param_1;
      bVar9 = SBORROW4(iVar6,param_3);
      bVar8 = iVar6 - param_3 < 0;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      iVar6 = (int)lVar7 - (int)*param_1;
      bVar9 = SBORROW4(iVar6,param_3);
      bVar8 = iVar6 - param_3 < 0;
    }
  }
  if (((int)param_1[6] <= (int)param_1[3] - *(int *)((longlong)param_1 + 0x2c)) &&
     ((int)param_1[6] != (int)param_1[5])) {
    uVar4 = FUN_1439eeb00(auStack_80,2,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",0xc0);
    uVar4 = FUN_1439eef00(uVar4,"A protocol message was rejected because it was too big (more than "
                         );
    uVar4 = FUN_1439eed20(uVar4,(int)param_1[6]);
    uVar4 = FUN_1439eef00(uVar4,
                          " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in net/proto2/io/public/coded_stream.h."
                         );
    FUN_1439eec50(auStack_d7,uVar4);
    DsDevice::~DsDevice(auStack_80);
  }
  return 0;
}



// FUNCTION 1439f8b10 ReadString body=13 status=ok
// SIG undefined ReadString(void)

undefined1
google::protobuf::io::CodedInputStream::ReadString
          (undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_3 < 0) {
    return 0;
  }
  uVar1 = FUN_1439f87e0();
  return uVar1;
}



// FUNCTION 1439f8b20 FUN_1439f8b20 body=305 status=ok
// SIG undefined FUN_1439f8b20(void)

undefined8 FUN_1439f8b20(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong _Size;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(int)param_3;
  if (param_2[2] != 0) {
    param_2[2] = 0;
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar4 = 0;
  }
  iVar3 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar3 = (int)param_1[5];
  }
  if ((((iVar3 != 0x7fffffff) &&
       (iVar3 = (((*(int *)((longlong)param_1 + 0x2c) - (int)param_1[3]) + (int)param_1[1]) -
                (int)*param_1) + iVar3, 0 < iVar3)) && (0 < (int)param_3)) &&
     ((int)param_3 <= iVar3)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(param_2,uVar5);
  }
  iVar3 = (int)param_1[1] - (int)*param_1;
  if (iVar3 < (int)param_3) {
    do {
      if (iVar3 != 0) {
        lVar1 = param_2[2];
        _Src = (void *)*param_1;
        _Size = (ulonglong)iVar3;
        if ((ulonglong)(param_2[3] - lVar1) < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (param_2,_Size,0,_Src,_Size);
        }
        else {
          param_2[2] = lVar1 + _Size;
          puVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar4 = (undefined8 *)*param_2;
          }
          _guard_xfg_dispatch_icall_nop((undefined1 *)((longlong)puVar4 + lVar1),_Src,_Size);
          ((undefined1 *)((longlong)puVar4 + lVar1))[_Size] = 0;
        }
      }
      *param_1 = *param_1 + (longlong)iVar3;
      param_3 = (int)uVar5 - iVar3;
      uVar5 = (ulonglong)param_3;
      cVar2 = FUN_1439f9980(param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = (int)param_1[1] - (int)*param_1;
    } while (iVar3 < (int)param_3);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_2,*param_1,(longlong)(int)param_3);
  *param_1 = *param_1 + (longlong)(int)param_3;
  return 1;
}



// FUNCTION 1439f8c60 FUN_1439f8c60 body=442 status=ok
// SIG undefined FUN_1439f8c60(void)

ulonglong FUN_1439f8c60(longlong *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong local_28;
  char local_20 [8];
  longlong local_18;
  
  iVar5 = (int)param_1[1] - (int)*param_1;
  if ((9 < iVar5) || ((0 < iVar5 && (-1 < *(char *)(param_1[1] + -1))))) {
    lVar3 = *param_1;
    if (param_2 == 0) {
      *param_1 = lVar3 + 1;
      return 0;
    }
    bVar1 = *(byte *)(lVar3 + 1);
    pbVar6 = (byte *)(lVar3 + 2);
    uVar7 = param_2 + -0x80 + (uint)bVar1 * 0x80;
    if ((char)bVar1 < '\0') {
      bVar1 = *pbVar6;
      pbVar6 = (byte *)(lVar3 + 3);
      uVar7 = (uVar7 - 0x4000) + (uint)bVar1 * 0x4000;
      if ((char)bVar1 < '\0') {
        bVar1 = *pbVar6;
        pbVar6 = (byte *)(lVar3 + 4);
        uVar7 = (bVar1 + 0x7ff) * 0x200000 + uVar7;
        if ((char)bVar1 < '\0') {
          bVar1 = *pbVar6;
          pbVar6 = (byte *)(lVar3 + 5);
          uVar7 = uVar7 + (bVar1 + 0xf) * 0x10000000;
          if ((char)bVar1 < '\0') {
            iVar5 = 0;
            while (bVar1 = *pbVar6, pbVar6 = pbVar6 + 1, (char)bVar1 < '\0') {
              iVar5 = iVar5 + 1;
              if (4 < iVar5) {
                return 0;
              }
            }
          }
        }
      }
    }
    *param_1 = (longlong)pbVar6;
    return (ulonglong)uVar7;
  }
  if (((int)param_1[1] == (int)*param_1) &&
     (((0 < *(int *)((longlong)param_1 + 0x2c) || ((int)param_1[3] == (int)param_1[5])) &&
      ((int)param_1[3] - *(int *)((longlong)param_1 + 0x2c) < (int)param_1[6])))) {
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    return 0;
  }
  if ((*param_1 == param_1[1]) && (cVar4 = FUN_1439f9980(param_1), cVar4 == '\0')) {
    if ((int)param_1[3] - *(int *)((longlong)param_1 + 0x2c) < (int)param_1[6]) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 1;
      return 0;
    }
    *(bool *)((longlong)param_1 + 0x24) = (int)param_1[5] == (int)param_1[6];
    return 0;
  }
  pbVar6 = (byte *)param_1[1];
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 < pbVar6) && (bVar1 = *pbVar2, bVar1 < 0x80)) {
    *param_1 = (longlong)(pbVar2 + 1);
    return (ulonglong)bVar1;
  }
  if (((int)pbVar6 - (int)pbVar2 < 10) && ((pbVar6 <= pbVar2 || ((char)pbVar6[-1] < '\0')))) {
    cVar4 = FUN_1439f9620(param_1,&local_28);
LAB_1439f8d65:
    if (cVar4 != '\0') goto LAB_1439f8d70;
  }
  else {
    FUN_1439f8fa0(local_20,pbVar2,&local_28);
    if (local_20[0] != '\0') {
      *param_1 = local_18;
      cVar4 = '\x01';
      goto LAB_1439f8d65;
    }
  }
  local_28 = 0;
LAB_1439f8d70:
  return local_28 & 0xffffffff;
}



// FUNCTION 1439f8e20 FUN_1439f8e20 body=221 status=ok
// SIG undefined FUN_1439f8e20(void)

ulonglong FUN_1439f8e20(ulonglong *param_1,int param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint local_18 [6];
  
  if (((int)param_1[1] - (int)*param_1 < 10) &&
     ((param_1[1] <= *param_1 || (*(char *)(param_1[1] - 1) < '\0')))) {
    cVar3 = FUN_1439f9620(param_1,local_18);
    if (cVar3 == '\0') {
      return 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = *param_1;
    pbVar5 = (byte *)(uVar2 + 2);
    local_18[0] = param_2 + -0x80 + (uint)*(byte *)(uVar2 + 1) * 0x80;
    if ((char)*(byte *)(uVar2 + 1) < '\0') {
      bVar1 = *pbVar5;
      pbVar5 = (byte *)(uVar2 + 3);
      local_18[0] = (local_18[0] - 0x4000) + (uint)bVar1 * 0x4000;
      if ((char)bVar1 < '\0') {
        bVar1 = *pbVar5;
        pbVar5 = (byte *)(uVar2 + 4);
        local_18[0] = (bVar1 + 0x7ff) * 0x200000 + local_18[0];
        if ((char)bVar1 < '\0') {
          bVar1 = *pbVar5;
          pbVar5 = (byte *)(uVar2 + 5);
          local_18[0] = local_18[0] + (bVar1 + 0xf) * 0x10000000;
          if ((char)bVar1 < '\0') {
            iVar4 = 0;
            while (bVar1 = *pbVar5, pbVar5 = pbVar5 + 1, (char)bVar1 < '\0') {
              iVar4 = iVar4 + 1;
              if (4 < iVar4) {
                return 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
    *param_1 = (ulonglong)pbVar5;
  }
  return (ulonglong)local_18[0];
}



// FUNCTION 1439f8f00 FUN_1439f8f00 body=160 status=ok
// SIG undefined FUN_1439f8f00(void)

undefined8 * FUN_1439f8f00(ulonglong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 local_res8;
  char local_18 [8];
  ulonglong local_10;
  
  if (((int)param_1[1] - (int)*param_1 < 10) &&
     ((param_1[1] <= *param_1 || (*(char *)(param_1[1] - 1) < '\0')))) {
    uVar1 = FUN_1439f9620(param_1,&local_res8);
    *(undefined1 *)(param_2 + 1) = uVar1;
    *param_2 = local_res8;
    return param_2;
  }
  FUN_1439f8fa0(local_18,*param_1,&local_res8);
  if (local_18[0] == '\0') {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  *param_1 = local_10;
  *param_2 = local_res8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 1439f8fa0 FUN_1439f8fa0 body=1663 status=ok
// SIG undefined FUN_1439f8fa0(void)

undefined1 * FUN_1439f8fa0(undefined1 *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  longlong lVar12;
  
  pbVar10 = param_2 + 1;
  if (param_2[1] < 0x80) {
    *param_3 = (ulonglong)param_2[1] * 0x80 + ((ulonglong)*param_2 - 0x80);
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 2;
    return param_1;
  }
  if (param_2[2] < 0x80) {
    lVar12 = (ulonglong)param_2[2] << 0xe;
    bVar2 = 0;
    uVar11 = 0;
    do {
      bVar1 = bVar2 & 0x3f;
      uVar11 = uVar11 + 2;
      bVar3 = bVar2 + 7;
      bVar2 = bVar2 + 0xe;
      lVar12 = lVar12 + ((ulonglong)pbVar10[-1] - 0x80 << bVar1) +
               ((ulonglong)*pbVar10 - 0x80 << (bVar3 & 0x3f));
      pbVar10 = pbVar10 + 2;
    } while (uVar11 < 2);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 3;
    return param_1;
  }
  if (param_2[3] < 0x80) {
    lVar12 = (ulonglong)param_2[3] << 0x15;
    uVar11 = 0;
    bVar2 = 7;
    do {
      uVar11 = uVar11 + 3;
      lVar12 = lVar12 + ((ulonglong)*pbVar10 - 0x80 << (bVar2 & 0x3f)) +
               ((ulonglong)pbVar10[-1] - 0x80 << (bVar2 - 7 & 0x3f)) +
               ((ulonglong)pbVar10[1] - 0x80 << (bVar2 + 7 & 0x3f));
      pbVar10 = pbVar10 + 3;
      bVar2 = bVar2 + 0x15;
    } while (uVar11 < 3);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 4;
    return param_1;
  }
  if (param_2[4] < 0x80) {
    lVar12 = (ulonglong)param_2[4] << 0x1c;
    bVar2 = 0;
    uVar11 = 0;
    do {
      bVar1 = bVar2 & 0x3f;
      uVar11 = uVar11 + 4;
      bVar3 = bVar2 + 7;
      bVar4 = bVar2 + 0xe;
      bVar5 = bVar2 + 0x15;
      bVar2 = bVar2 + 0x1c;
      lVar12 = lVar12 + ((ulonglong)pbVar10[-1] - 0x80 << bVar1) +
               ((ulonglong)*pbVar10 - 0x80 << (bVar3 & 0x3f)) +
               ((ulonglong)pbVar10[1] - 0x80 << (bVar4 & 0x3f)) +
               ((ulonglong)pbVar10[2] - 0x80 << (bVar5 & 0x3f));
      pbVar10 = pbVar10 + 4;
    } while (uVar11 < 4);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 5;
    return param_1;
  }
  if (param_2[5] < 0x80) {
    lVar12 = (ulonglong)param_2[5] << 0x23;
    uVar11 = 0;
    pbVar10 = param_2 + 3;
    bVar2 = 0x15;
    do {
      uVar11 = uVar11 + 5;
      lVar12 = lVar12 + ((ulonglong)*pbVar10 - 0x80 << (bVar2 & 0x3f)) +
               ((ulonglong)pbVar10[-3] - 0x80 << (bVar2 - 0x15 & 0x3f)) +
               ((ulonglong)pbVar10[-2] - 0x80 << (bVar2 - 0xe & 0x3f)) +
               ((ulonglong)pbVar10[-1] - 0x80 << (bVar2 - 7 & 0x3f)) +
               ((ulonglong)pbVar10[1] - 0x80 << (bVar2 + 7 & 0x3f));
      pbVar10 = pbVar10 + 5;
      bVar2 = bVar2 + 0x23;
    } while (uVar11 < 5);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 6;
    return param_1;
  }
  if (param_2[6] < 0x80) {
    lVar12 = (ulonglong)param_2[6] << 0x2a;
    bVar2 = 0;
    uVar11 = 0;
    do {
      bVar1 = bVar2 & 0x3f;
      uVar11 = uVar11 + 6;
      bVar4 = bVar2 + 7;
      bVar3 = bVar2 + 0xe;
      bVar5 = bVar2 + 0x15;
      bVar6 = bVar2 + 0x1c;
      bVar7 = bVar2 + 0x23;
      bVar2 = bVar2 + 0x2a;
      lVar12 = lVar12 + ((ulonglong)pbVar10[-1] - 0x80 << bVar1) +
               ((ulonglong)*pbVar10 - 0x80 << (bVar4 & 0x3f)) +
               ((ulonglong)pbVar10[1] - 0x80 << (bVar3 & 0x3f)) +
               ((ulonglong)pbVar10[2] - 0x80 << (bVar5 & 0x3f)) +
               ((ulonglong)pbVar10[3] - 0x80 << (bVar6 & 0x3f)) +
               ((ulonglong)pbVar10[4] - 0x80 << (bVar7 & 0x3f));
      pbVar10 = pbVar10 + 6;
    } while (uVar11 < 6);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 7;
    return param_1;
  }
  if (param_2[7] < 0x80) {
    lVar12 = (ulonglong)param_2[7] << 0x31;
    uVar11 = 0;
    pbVar10 = param_2 + 5;
    bVar2 = 0x23;
    do {
      uVar11 = uVar11 + 7;
      lVar12 = lVar12 + ((ulonglong)*pbVar10 - 0x80 << (bVar2 & 0x3f)) +
               ((ulonglong)pbVar10[-5] - 0x80 << (bVar2 - 0x23 & 0x3f)) +
               ((ulonglong)pbVar10[-4] - 0x80 << (bVar2 - 0x1c & 0x3f)) +
               ((ulonglong)pbVar10[-3] - 0x80 << (bVar2 - 0x15 & 0x3f)) +
               ((ulonglong)pbVar10[-2] - 0x80 << (bVar2 - 0xe & 0x3f)) +
               ((ulonglong)pbVar10[-1] - 0x80 << (bVar2 - 7 & 0x3f)) +
               ((ulonglong)pbVar10[1] - 0x80 << (bVar2 + 7 & 0x3f));
      pbVar10 = pbVar10 + 7;
      bVar2 = bVar2 + 0x31;
    } while (uVar11 < 7);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 8;
    return param_1;
  }
  if (0x7f < param_2[8]) {
    if (0x7f < param_2[9]) {
      *(byte **)(param_1 + 8) = param_2 + 0xb;
      *param_1 = 0;
      return param_1;
    }
    lVar12 = (ulonglong)param_2[9] << 0x3f;
    uVar11 = 0;
    pbVar10 = param_2 + 7;
    bVar2 = 0x31;
    do {
      uVar11 = uVar11 + 9;
      lVar12 = lVar12 + ((ulonglong)*pbVar10 - 0x80 << (bVar2 & 0x3f)) +
               ((ulonglong)pbVar10[-7] - 0x80 << (bVar2 - 0x31 & 0x3f)) +
               ((ulonglong)pbVar10[-6] - 0x80 << (bVar2 - 0x2a & 0x3f)) +
               ((ulonglong)pbVar10[-5] - 0x80 << (bVar2 - 0x23 & 0x3f)) +
               ((ulonglong)pbVar10[-4] - 0x80 << (bVar2 - 0x1c & 0x3f)) +
               ((ulonglong)pbVar10[-3] - 0x80 << (bVar2 - 0x15 & 0x3f)) +
               ((ulonglong)pbVar10[-2] - 0x80 << (bVar2 - 0xe & 0x3f)) +
               ((ulonglong)pbVar10[-1] - 0x80 << (bVar2 - 7 & 0x3f)) +
               ((ulonglong)pbVar10[1] - 0x80 << (bVar2 + 7 & 0x3f));
      pbVar10 = pbVar10 + 9;
      bVar2 = bVar2 + 0x3f;
    } while (uVar11 < 9);
    *param_3 = lVar12;
    *param_1 = 1;
    *(byte **)(param_1 + 8) = param_2 + 10;
    return param_1;
  }
  lVar12 = (ulonglong)param_2[8] << 0x38;
  bVar2 = 0;
  uVar11 = 0;
  do {
    bVar1 = bVar2 & 0x3f;
    uVar11 = uVar11 + 8;
    bVar5 = bVar2 + 7;
    bVar3 = bVar2 + 0xe;
    bVar6 = bVar2 + 0x15;
    bVar4 = bVar2 + 0x1c;
    bVar7 = bVar2 + 0x23;
    bVar8 = bVar2 + 0x2a;
    bVar9 = bVar2 + 0x31;
    bVar2 = bVar2 + 0x38;
    lVar12 = lVar12 + ((ulonglong)pbVar10[-1] - 0x80 << bVar1) +
             ((ulonglong)*pbVar10 - 0x80 << (bVar5 & 0x3f)) +
             ((ulonglong)pbVar10[1] - 0x80 << (bVar3 & 0x3f)) +
             ((ulonglong)pbVar10[2] - 0x80 << (bVar6 & 0x3f)) +
             ((ulonglong)pbVar10[3] - 0x80 << (bVar4 & 0x3f)) +
             ((ulonglong)pbVar10[4] - 0x80 << (bVar7 & 0x3f)) +
             ((ulonglong)pbVar10[5] - 0x80 << (bVar8 & 0x3f)) +
             ((ulonglong)pbVar10[6] - 0x80 << (bVar9 & 0x3f));
    pbVar10 = pbVar10 + 8;
  } while (uVar11 < 8);
  *param_3 = lVar12;
  *param_1 = 1;
  *(byte **)(param_1 + 8) = param_2 + 9;
  return param_1;
}



// FUNCTION 1439f9620 FUN_1439f9620 body=654 status=ok
// SIG undefined FUN_1439f9620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1439f9620(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c7 [3];
  int local_c4 [3];
  longlong local_b8 [2];
  undefined1 local_a8 [56];
  undefined1 local_70 [56];
  byte *local_38;
  
  local_b8[1] = 0xfffffffffffffffe;
  pbVar4 = (byte *)(DAT_1468387a8 ^ (ulonglong)auStack_e8);
  uVar8 = 0;
  local_c4[1] = 0;
  uVar9 = uVar8;
  uVar12 = uVar8;
  local_38 = pbVar4;
  do {
    if ((int)uVar8 == 0x46) {
LAB_1439f9809:
      *param_2 = 0;
      return (ulonglong)pbVar4 & 0xffffffffffffff00;
    }
    pbVar4 = (byte *)*param_1;
    if (pbVar4 == (byte *)param_1[1]) {
      iVar6 = *(int *)((longlong)param_1 + 0x2c);
      do {
        if (((0 < iVar6) || (0 < *(int *)((longlong)param_1 + 0x1c))) ||
           ((int)param_1[3] == (int)param_1[5])) {
          uVar3 = (int)param_1[3] - iVar6;
          pbVar4 = (byte *)(ulonglong)uVar3;
          if (((int)param_1[6] <= (int)uVar3) && ((int)param_1[6] != (int)param_1[5])) {
            uVar5 = FUN_1439eeb00(local_70,2,
                                  "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",
                                  0xc0);
            uVar5 = FUN_1439eef00(uVar5,
                                  "A protocol message was rejected because it was too big (more than "
                                 );
            uVar5 = FUN_1439eed20(uVar5,(int)param_1[6]);
            uVar5 = FUN_1439eef00(uVar5,
                                  " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in net/proto2/io/public/coded_stream.h."
                                 );
            FUN_1439eec50(local_c7,uVar5);
            pbVar4 = (byte *)DsDevice::~DsDevice(local_70);
          }
          goto LAB_1439f9809;
        }
        plVar2 = (longlong *)param_1[2];
        do {
          pbVar4 = (byte *)(**(code **)(*plVar2 + 8))(plVar2,local_b8,local_c4);
          if ((char)pbVar4 == '\0') {
            *param_1 = 0;
            param_1[1] = 0;
            goto LAB_1439f9809;
          }
        } while (local_c4[0] == 0);
        *param_1 = local_b8[0];
        lVar11 = local_b8[0] + local_c4[0];
        param_1[1] = lVar11;
        if (local_c4[0] < 0) {
          uVar5 = FUN_1439eeb00(local_a8,3,
                                "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",599)
          ;
          uVar9 = 2;
          local_c4[1] = 2;
          uVar5 = FUN_1439eef00(uVar5,"CHECK failed: (buffer_size) >= (0): ");
          FUN_1439eec50(&local_c8,uVar5);
          lVar11 = param_1[1];
        }
        if (uVar9 != 0) {
          uVar9 = 0;
          DsDevice::~DsDevice(local_a8);
          lVar11 = param_1[1];
        }
        iVar6 = (int)param_1[3];
        if (0x7fffffff - local_c4[0] < iVar6) {
          iVar6 = iVar6 + -0x7fffffff + local_c4[0];
          *(int *)((longlong)param_1 + 0x1c) = iVar6;
          *(undefined4 *)(param_1 + 3) = 0x7fffffff;
          lVar11 = lVar11 - iVar6;
          iVar6 = 0x7fffffff;
        }
        else {
          iVar6 = iVar6 + local_c4[0];
          *(int *)(param_1 + 3) = iVar6;
        }
        pbVar7 = (byte *)(*(int *)((longlong)param_1 + 0x2c) + lVar11);
        param_1[1] = (longlong)pbVar7;
        iVar10 = (int)param_1[6];
        if ((int)param_1[5] <= (int)param_1[6]) {
          iVar10 = (int)param_1[5];
        }
        if (iVar10 < iVar6) {
          iVar6 = iVar6 - iVar10;
          *(int *)((longlong)param_1 + 0x2c) = iVar6;
          pbVar7 = pbVar7 + -(longlong)iVar6;
          param_1[1] = (longlong)pbVar7;
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
          iVar6 = 0;
        }
        pbVar4 = (byte *)*param_1;
      } while (pbVar4 == pbVar7);
    }
    bVar1 = *pbVar4;
    uVar12 = uVar12 | (ulonglong)(bVar1 & 0x7f) << ((byte)uVar8 & 0x3f);
    pbVar4 = pbVar4 + 1;
    *param_1 = (longlong)pbVar4;
    uVar8 = (ulonglong)((int)uVar8 + 7);
    if (-1 < (char)bVar1) {
      *param_2 = uVar12;
      return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
    }
  } while( true );
}



// FUNCTION 1439f98b0 FUN_1439f98b0 body=138 status=ok
// SIG undefined FUN_1439f98b0(void)

ulonglong FUN_1439f98b0(ulonglong *param_1)

{
  char cVar1;
  ulonglong local_res8 [4];
  char local_18 [8];
  ulonglong local_10;
  
  if (((int)param_1[1] - (int)*param_1 < 10) &&
     ((param_1[1] <= *param_1 || (*(char *)(param_1[1] - 1) < '\0')))) {
    cVar1 = FUN_1439f9620(param_1,local_res8);
    if ((cVar1 == '\0') || (0x7fffffff < local_res8[0])) {
      local_res8[0] = 0xffffffff;
    }
    return local_res8[0] & 0xffffffff;
  }
  FUN_1439f8fa0(local_18,*param_1,local_res8);
  if ((local_18[0] != '\0') && (local_res8[0] < 0x80000000)) {
    *param_1 = local_10;
    return local_res8[0];
  }
  return 0xffffffff;
}



// FUNCTION 1439f9940 FUN_1439f9940 body=58 status=ok
// SIG undefined FUN_1439f9940(void)

void FUN_1439f9940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x2c) + *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x30)) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (iVar1 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x18) - iVar1;
    *(longlong *)(param_1 + 8) = lVar2 - iVar1;
    *(int *)(param_1 + 0x2c) = iVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 1439f9980 FUN_1439f9980 body=467 status=ok
// SIG undefined FUN_1439f9980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439f9980(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  int local_64 [3];
  longlong local_58 [2];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_58[1] = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64[1] = 0;
  if (((*(int *)((longlong)param_1 + 0x2c) < 1) && (*(int *)((longlong)param_1 + 0x1c) < 1)) &&
     ((int)param_1[3] != (int)param_1[5])) {
    plVar2 = (longlong *)param_1[2];
    do {
      cVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_58,local_64);
      if (cVar3 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        goto LAB_1439f9b2f;
      }
    } while (local_64[0] == 0);
    *param_1 = local_58[0];
    param_1[1] = local_58[0] + local_64[0];
    if (local_64[0] < 0) {
      uVar4 = FUN_1439eeb00(local_48,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",599);
      local_64[1] = 2;
      uVar4 = FUN_1439eef00(uVar4,"CHECK failed: (buffer_size) >= (0): ");
      FUN_1439eec50(local_68,uVar4);
      DsDevice::~DsDevice(local_48);
    }
    iVar1 = (int)param_1[3];
    if (0x7fffffff - local_64[0] < iVar1) {
      local_64[0] = iVar1 + -0x7fffffff + local_64[0];
      *(int *)((longlong)param_1 + 0x1c) = local_64[0];
      param_1[1] = param_1[1] - (longlong)local_64[0];
      *(undefined4 *)(param_1 + 3) = 0x7fffffff;
      FUN_1439f9940(param_1);
      uVar4 = 1;
    }
    else {
      *(int *)(param_1 + 3) = iVar1 + local_64[0];
      FUN_1439f9940(param_1);
      uVar4 = 1;
    }
  }
  else {
    if (((int)param_1[6] <= (int)param_1[3] - *(int *)((longlong)param_1 + 0x2c)) &&
       ((int)param_1[6] != (int)param_1[5])) {
      uVar4 = FUN_1439eeb00(local_48,2,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\coded_stream.cc",0xc0);
      uVar4 = FUN_1439eef00(uVar4,
                            "A protocol message was rejected because it was too big (more than ");
      uVar4 = FUN_1439eed20(uVar4,(int)param_1[6]);
      uVar4 = FUN_1439eef00(uVar4,
                            " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in net/proto2/io/public/coded_stream.h."
                           );
      FUN_1439eec50(local_68,uVar4);
      DsDevice::~DsDevice(local_48);
    }
LAB_1439f9b2f:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1439f9b60 FUN_1439f9b60 body=160 status=ok
// SIG undefined FUN_1439f9b60(void)

undefined8 FUN_1439f9b60(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (0 < *(int *)((longlong)param_1 + 0x2c)) {
    *param_1 = *param_1 + (longlong)param_3;
    return 0;
  }
  param_2 = param_2 - param_3;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar3 = (int)param_1[5];
  }
  iVar4 = iVar3 - (int)param_1[3];
  if (iVar4 < param_2) {
    if (0 < iVar4) {
      *(int *)(param_1 + 3) = iVar3;
      (**(code **)(*(longlong *)param_1[2] + 0x18))();
    }
    return 0;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],param_2);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x20))();
    *(undefined4 *)(param_1 + 3) = uVar2;
    return 0;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + param_2;
  return 1;
}



// FUNCTION 1439f9c00 FUN_1439f9c00 body=135 status=ok
// SIG undefined FUN_1439f9c00(void)

void FUN_1439f9c00(undefined8 *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (param_3 < *(int *)(param_1 + 2)) {
    FUN_1439f9d40(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 2) < 1) {
    iVar2 = *(int *)((longlong)param_1 + 0x14);
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    iVar2 = *(int *)(param_1 + 2);
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    iVar2 = *(int *)((longlong)param_1 + 0x14) - iVar2;
  }
  *(int *)((longlong)param_1 + 0x14) = iVar2 + param_3;
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_2,param_3);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | cVar1 == '\0';
  return;
}



// FUNCTION 1439f9c90 FUN_1439f9c90 body=60 status=ok
// SIG undefined FUN_1439f9c90(void)

void FUN_1439f9c90(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 local_res10 [6];
  
  bVar2 = *(uint *)(param_1 + 0x10) < 4;
  if (bVar2) {
    puVar1 = local_res10;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  *puVar1 = param_2;
  if (!bVar2) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -4;
    return;
  }
  FUN_1439f9d40(param_1,local_res10,4);
  return;
}



// FUNCTION 1439f9cd0 FUN_1439f9cd0 body=102 status=ok
// SIG undefined FUN_1439f9cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f9cd0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  bVar2 = *(uint *)(param_1 + 0x10) < 8;
  if (bVar2) {
    puVar1 = &local_18;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  *puVar1 = param_2;
  if (!bVar2) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -8;
    return;
  }
  FUN_1439f9d40(param_1,&local_18,8);
  return;
}



// FUNCTION 1439f9d40 FUN_1439f9d40 body=173 status=ok
// SIG undefined FUN_1439f9d40(void)

void FUN_1439f9d40(undefined8 *param_1,void *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8;
  
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 < param_3) {
    do {
      _guard_xfg_dispatch_icall_nop((void *)param_1[1],param_2,(longlong)iVar2);
      param_3 = param_3 - *(int *)(param_1 + 2);
      param_2 = (void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 2));
      cVar1 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_res8,param_1 + 2)
      ;
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 3) = 1;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        return;
      }
      param_1[1] = local_res8;
      iVar2 = *(int *)(param_1 + 2);
      *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + iVar2;
    } while (iVar2 < param_3);
  }
  _guard_xfg_dispatch_icall_nop((void *)param_1[1],param_2,(longlong)param_3);
  param_1[1] = param_1[1] + (longlong)param_3;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - param_3;
  return;
}



// FUNCTION 1439f9df0 FUN_1439f9df0 body=105 status=ok
// SIG undefined FUN_1439f9df0(void)

byte * FUN_1439f9df0(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  for (uVar2 = *(uint *)(param_1 + 2); 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_2 = (byte)uVar2 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar2;
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _guard_xfg_dispatch_icall_nop(param_2 + 1,param_1,(longlong)(int)uVar1);
  return param_2 + 1 + (int)uVar1;
}



// FUNCTION 1439f9e60 FUN_1439f9e60 body=96 status=ok
// SIG undefined FUN_1439f9e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f9e60(undefined8 param_1,uint param_2)

{
  byte *pbVar1;
  undefined1 auStack_38 [32];
  byte local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  pbVar1 = local_18;
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pbVar1 = (byte)param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_2;
  FUN_1439f9d40(param_1,local_18,((int)pbVar1 - (int)local_18) + 1);
  return;
}



// FUNCTION 1439f9ec0 FUN_1439f9ec0 body=99 status=ok
// SIG undefined FUN_1439f9ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439f9ec0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined1 auStack_48 [32];
  byte local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  pbVar1 = local_28;
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pbVar1 = (byte)param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_2;
  FUN_1439f9d40(param_1,local_28,((int)pbVar1 - (int)local_28) + 1);
  return;
}



// FUNCTION 1439f9f30 _Become_small body=104 status=ok
// SIG undefined _Become_small(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Become_small
               (undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  void *pvVar2;
  
  _Src = (void *)*param_1;
  ::_guard_xfg_dispatch_icall_nop(param_1,_Src,param_1[2] + 1);
  uVar1 = param_1[3] + 1;
  pvVar2 = _Src;
  if (0xfff < uVar1) {
    pvVar2 = *(void **)((longlong)_Src + -8);
    uVar1 = param_1[3] + 0x28;
    if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(pvVar2,uVar1);
  param_1[3] = 0xf;
  return;
}



// FUNCTION 1439f9fa0 reserve body=370 status=ok
// SIG undefined reserve(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
               (undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Dst;
  
  uVar1 = param_1[2];
  if (uVar1 <= param_2) {
    uVar2 = param_1[3];
    if (uVar2 == param_2) {
      return;
    }
    if (param_2 <= uVar2) {
      if (0xf < param_2) {
        return;
      }
      if (uVar2 < 0x10) {
        return;
      }
      _Become_small();
      return;
    }
    if (0x7fffffffffffffff - uVar1 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _Xlen();
    }
    uVar4 = param_2 | 0xf;
    uVar6 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar5 = (uVar2 >> 1) + uVar2, uVar6 = uVar4, uVar4 < uVar5)) {
      uVar6 = uVar5;
    }
    uVar4 = uVar6 + 1;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)operator_new(uVar4);
      }
    }
    else {
      uVar5 = uVar6 + 0x28;
      if (uVar5 <= uVar4) {
        uVar5 = 0xffffffffffffffff;
      }
      lVar3 = operator_new(uVar5);
      if (lVar3 == 0) goto LAB_1439fa0c2;
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
    }
    param_1[2] = param_2;
    param_1[3] = uVar6;
    if (uVar2 < 0x10) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,uVar1 + 1);
    }
    else {
      _Src = (void *)*param_1;
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,uVar1 + 1);
      uVar6 = uVar2 + 1;
      pvVar7 = _Src;
      if (0xfff < uVar6) {
        pvVar7 = *(void **)((longlong)_Src + -8);
        uVar6 = uVar2 + 0x28;
        if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar7))) {
LAB_1439fa0c2:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pvVar7,uVar6);
    }
    *param_1 = _Dst;
    param_1[2] = uVar1;
  }
  return;
}



// FUNCTION 1439fa120 FUN_1439fa120 body=113 status=ok
// SIG undefined FUN_1439fa120(void)

ulonglong FUN_1439fa120(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  uVar6 = 0;
  iVar2 = FUN_1439f2ae0();
  uVar7 = uVar6;
  if (0 < iVar2) {
    do {
      puVar3 = (uint *)mu::FPhysicsBody::GetBodyBoneId(param_1,uVar6);
      if ((int)*puVar3 < 0) {
        uVar4 = 10;
      }
      else {
        uVar5 = *puVar3 | 1;
        iVar1 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar4 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      uVar7 = uVar7 + uVar4;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  return uVar7;
}



// FUNCTION 1439fa1a0 FUN_1439fa1a0 body=102 status=ok
// SIG undefined FUN_1439fa1a0(void)

ulonglong FUN_1439fa1a0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  iVar2 = FUN_1439f2ae0();
  uVar6 = uVar4;
  if (0 < iVar2) {
    do {
      puVar3 = (ulonglong *)FUN_1439f1d10(param_1,uVar6);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar1 = 0x3f;
      if ((*puVar3 | 1) != 0) {
        for (; (*puVar3 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar4 = uVar4 + ((int)lVar1 * 9 + 0x49U >> 6);
    } while ((int)uVar5 < iVar2);
  }
  return uVar4;
}



// FUNCTION 1439fa210 FUN_1439fa210 body=614 status=ok
// SIG undefined FUN_1439fa210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fa210(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = local_88 & 0xffffffffffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_88,&DAT_143f3f584,0);
  if (param_1 != 0) {
    puVar1 = (ulonglong *)FUN_143a58770(local_48," \'%s\'",param_1);
    if (&local_88 != puVar1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_88);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      local_78 = puVar1[2];
      uStack_70 = puVar1[3];
      puVar1[2] = 0;
      puVar1[3] = 0xf;
      *(undefined1 *)puVar1 = 0;
    }
    if (0xf < local_30) {
      uVar4 = local_30 + 1;
      lVar3 = local_48[0];
      if (0xfff < uVar4) {
        uVar4 = local_30 + 0x28;
        lVar3 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar4);
    }
  }
  uVar2 = FUN_1439eeb00(local_48,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format_lite.cc",
                        0x263);
  uVar2 = FUN_1439eef00(uVar2,"String field");
  uVar2 = FUN_1439eecf0(uVar2,&local_88);
  uVar2 = FUN_1439eef00(uVar2," contains invalid ");
  uVar2 = FUN_1439eef00(uVar2,"UTF-8 data when ");
  uVar2 = FUN_1439eef00(uVar2,param_2);
  uVar2 = FUN_1439eef00(uVar2," a protocol ");
  uVar2 = FUN_1439eef00(uVar2,"buffer. Use the \'bytes\' type if you intend to send raw ");
  uVar2 = FUN_1439eef00(uVar2,"bytes. ");
  uVar2 = FUN_1439eecf0(uVar2,&local_68);
  FUN_1439eec50(local_98,uVar2);
  DsDevice::~DsDevice(local_48);
  if (0xf < uStack_70) {
    uVar5 = uStack_70 + 1;
    uVar4 = local_88;
    if (0xfff < uVar5) {
      uVar5 = uStack_70 + 0x28;
      uVar4 = *(ulonglong *)(local_88 - 8);
      if (0x1f < (local_88 - uVar4) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4,uVar5);
  }
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = local_88 & 0xffffffffffffff00;
  if (0xf < uStack_50) {
    uVar4 = uStack_50 + 1;
    if (0xfff < uVar4) {
      uVar4 = uStack_50 + 0x28;
      if (0x1f < (CONCAT71(uStack_67,local_68) - *(longlong *)(CONCAT71(uStack_67,local_68) + -8)) -
                 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(0,uVar4);
  }
  return;
}



// FUNCTION 1439fa480 thunk_FUN_1439fa490 body=5 status=ok
// SIG undefined thunk_FUN_1439fa490(void)

undefined8 thunk_FUN_1439fa490(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  size_t _Size;
  
  uVar4 = 0;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar4 = (uint)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = (longlong)(pbVar1 + 1);
  }
  else {
    lVar3 = FUN_1439f8e20(param_1,uVar4);
    uVar4 = (uint)lVar3;
    if (lVar3 < 0) {
      return 0;
    }
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 <= (int)param_1[1] - (int)*param_1) {
      _Size = (size_t)(int)uVar4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_2,_Size,0);
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,_Size);
      *param_1 = *param_1 + _Size;
      return 1;
    }
    cVar2 = FUN_1439f8b20(param_1,param_2,uVar4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1439fa490 FUN_1439fa490 body=188 status=ok
// SIG undefined FUN_1439fa490(void)

undefined8 FUN_1439fa490(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  size_t _Size;
  
  uVar4 = 0;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar4 = (uint)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = (longlong)(pbVar1 + 1);
  }
  else {
    lVar3 = FUN_1439f8e20(param_1,uVar4);
    uVar4 = (uint)lVar3;
    if (lVar3 < 0) {
      return 0;
    }
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 <= (int)param_1[1] - (int)*param_1) {
      _Size = (size_t)(int)uVar4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_2,_Size,0);
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,_Size);
      *param_1 = *param_1 + _Size;
      return 1;
    }
    cVar2 = FUN_1439f8b20(param_1,param_2,uVar4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1439fa550 FUN_1439fa550 body=11 status=ok
// SIG undefined FUN_1439fa550(void)

void FUN_1439fa550(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1439fa560(param_2,param_3);
  return;
}



// FUNCTION 1439fa560 FUN_1439fa560 body=382 status=ok
// SIG undefined FUN_1439fa560(void)

undefined8 FUN_1439fa560(longlong *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_18 [8];
  char local_10;
  
  if (7 < param_2) {
    switch(param_2 & 7) {
    case 0:
      pbVar2 = (byte *)*param_1;
      if ((pbVar2 < (byte *)param_1[1]) && (*pbVar2 < 0x80)) {
        *param_1 = (longlong)(pbVar2 + 1);
        return 1;
      }
      FUN_1439f8f00(param_1,local_18);
      break;
    case 1:
      if (7 < (int)param_1[1] - (int)*param_1) {
        *param_1 = *param_1 + 8;
        return 1;
      }
      local_10 = FUN_1439f8a80(param_1,local_res18);
      break;
    case 2:
      pbVar2 = (byte *)*param_1;
      uVar5 = 0;
      if ((pbVar2 < (byte *)param_1[1]) && (uVar5 = (uint)*pbVar2, *pbVar2 < 0x80)) {
        *param_1 = (longlong)(pbVar2 + 1);
      }
      else {
        lVar4 = FUN_1439f8e20(param_1,uVar5);
        uVar5 = (uint)lVar4;
        if (lVar4 < 0) {
          return 0;
        }
      }
      if ((int)uVar5 < 0) {
        return 0;
      }
      if ((int)uVar5 <= (int)param_1[1] - (int)*param_1) {
        *param_1 = *param_1 + (longlong)(int)uVar5;
        return 1;
      }
      local_10 = FUN_1439f9b60(param_1,uVar5);
      break;
    case 3:
      piVar1 = (int *)((longlong)param_1 + 0x34);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        return 0;
      }
      cVar3 = FUN_1439fa710(param_1);
      if (cVar3 != '\0') {
        if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[7]) {
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        }
        if (*(uint *)(param_1 + 4) == (param_2 & 0xfffffffc | 4)) {
          return 1;
        }
        return 0;
      }
      return 0;
    default:
      goto switchD_1439fa596_caseD_4;
    case 5:
      if (3 < (int)param_1[1] - (int)*param_1) {
        *param_1 = *param_1 + 4;
        return 1;
      }
      local_10 = FUN_1439f8a20(param_1,local_res10);
    }
    if (local_10 != '\0') {
      return 1;
    }
  }
switchD_1439fa596_caseD_4:
  return 0;
}



// FUNCTION 1439fa700 FUN_1439fa700 body=8 status=ok
// SIG undefined FUN_1439fa700(void)

void FUN_1439fa700(undefined8 param_1,undefined8 param_2)

{
  FUN_1439fa710(param_2);
  return;
}



// FUNCTION 1439fa710 FUN_1439fa710 body=100 status=ok
// SIG undefined FUN_1439fa710(void)

undefined1 FUN_1439fa710(undefined8 *param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  
  while( true ) {
    pbVar1 = (byte *)*param_1;
    uVar3 = 0;
    if ((pbVar1 < (byte *)param_1[1]) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
      *param_1 = pbVar1 + 1;
    }
    else {
      uVar3 = FUN_1439f8c60(param_1,uVar3);
    }
    *(uint *)(param_1 + 4) = uVar3;
    if ((uVar3 == 0) || (((byte)uVar3 & 7) == 4)) break;
    cVar2 = FUN_1439fa560(param_1,uVar3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1439fa780 FUN_1439fa780 body=99 status=ok
// SIG undefined FUN_1439fa780(void)

ulonglong FUN_1439fa780(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  iVar2 = FUN_1439f2ae0();
  uVar6 = uVar4;
  if (0 < iVar2) {
    do {
      puVar3 = (uint *)mu::FPhysicsBody::GetBodyBoneId(param_1,uVar6);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      iVar1 = 0x1f;
      if ((*puVar3 | 1) != 0) {
        for (; (*puVar3 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar4 = uVar4 + (iVar1 * 9 + 0x49U >> 6);
    } while ((int)uVar5 < iVar2);
  }
  return uVar4;
}



// FUNCTION 1439fa7f0 FUN_1439fa7f0 body=111 status=ok
// SIG undefined FUN_1439fa7f0(void)

undefined1 FUN_1439fa7f0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_143a58290();
  if (cVar1 != '\0') {
    return 1;
  }
  pcVar2 = (char *)0x0;
  if (param_3 == 0) {
    pcVar2 = "parsing";
  }
  else if (param_3 == 1) {
    FUN_1439fa210(param_4,"serializing",0);
    return 0;
  }
  FUN_1439fa210(param_4,pcVar2,0);
  return 0;
}



// FUNCTION 1439fa860 FUN_1439fa860 body=195 status=ok
// SIG undefined FUN_1439fa860(void)

void FUN_1439fa860(int param_1,byte param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  uVar6 = (ulonglong)param_2;
  if (4 < *(int *)(param_3 + 0x10)) {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    if (0x7f < param_2) {
      do {
        bVar4 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        *pbVar3 = bVar4 | 0x80;
        pbVar3 = pbVar3 + 1;
      } while (0x7f < (uint)uVar6);
    }
    *pbVar3 = (byte)uVar6;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
    return;
  }
  FUN_1439f9e60(param_3);
  return;
}



// FUNCTION 1439fa930 FUN_1439fa930 body=355 status=ok
// SIG undefined FUN_1439fa930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fa930(int param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar7 = param_1 * 8 | 2;
  uVar6 = (ulonglong)uVar7;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 + 1) - (int)pbVar2;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  if (0x7fffffff < (ulonglong)param_2[2]) {
    uVar3 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format_lite.cc"
                          ,0x20a);
    local_64 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (value.size()) <= (kint32max): ");
    FUN_1439eec50(local_68,uVar3);
    DsDevice::~DsDevice(local_58);
  }
  uVar6 = param_2[2];
  uVar7 = (uint)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar6 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7 & 0x1ffffff;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 - (int)pbVar2) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1439f9d40(param_3,param_2,*puVar1 & 0xffffffff);
  return;
}



// FUNCTION 1439faaa0 FUN_1439faaa0 body=368 status=ok
// SIG undefined FUN_1439faaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439faaa0(int param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar7 = param_1 * 8 | 2;
  uVar6 = (ulonglong)uVar7;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 + 1) - (int)pbVar2;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  if (0x7fffffff < (ulonglong)param_2[2]) {
    uVar3 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format_lite.cc"
                          ,0x212);
    local_64 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (value.size()) <= (kint32max): ");
    FUN_1439eec50(local_68,uVar3);
    DsDevice::~DsDevice(local_58);
  }
  uVar6 = param_2[2];
  uVar7 = (uint)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar6 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7 & 0x1ffffff;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 - (int)pbVar2) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (*(char *)(param_3 + 0x19) == '\0') {
    FUN_1439f9d40(param_3,param_2,*puVar1 & 0xffffffff);
  }
  else {
    FUN_1439f9c00();
  }
  return;
}



// FUNCTION 1439fac10 FUN_1439fac10 body=126 status=ok
// SIG undefined FUN_1439fac10(void)

void FUN_1439fac10(int param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8 | 1;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  FUN_1439f9cd0(param_3,param_2);
  return;
}



// FUNCTION 1439fac90 FUN_1439fac90 body=197 status=ok
// SIG undefined FUN_1439fac90(void)

void FUN_1439fac90(int param_1,int param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  uVar7 = (ulonglong)param_2;
  uVar5 = param_1 * 8;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  if (*(int *)(param_3 + 0x10) < 10) {
    FUN_1439f9ec0(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar3 = pbVar1;
  for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
    *pbVar3 = (byte)uVar7 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar7;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}



// FUNCTION 1439fad60 FUN_1439fad60 body=116 status=ok
// SIG undefined FUN_1439fad60(void)

void FUN_1439fad60(int param_1,undefined4 param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8 | 5;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  FUN_1439f9c90(param_3,param_2);
  return;
}



// FUNCTION 1439fade0 FUN_1439fade0 body=117 status=ok
// SIG undefined FUN_1439fade0(void)

void FUN_1439fade0(int param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8 | 1;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  FUN_1439f9cd0(param_3,param_2);
  return;
}



// FUNCTION 1439fae60 FUN_1439fae60 body=125 status=ok
// SIG undefined FUN_1439fae60(void)

void FUN_1439fae60(int param_1,undefined4 param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8 | 5;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  FUN_1439f9c90(param_3,param_2);
  return;
}



// FUNCTION 1439faee0 FUN_1439faee0 body=238 status=ok
// SIG undefined FUN_1439faee0(void)

void FUN_1439faee0(int param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8 | 3;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  (**(code **)(*param_2 + 0x60))(param_2,param_3);
  uVar5 = param_1 * 8 | 4;
  if (4 < *(int *)(param_3 + 0x10)) {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *pbVar3 = (byte)uVar5 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    *pbVar3 = (byte)uVar5;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
    return;
  }
  FUN_1439f9e60(param_3,uVar5);
  return;
}



// FUNCTION 1439fafd0 FUN_1439fafd0 body=199 status=ok
// SIG undefined FUN_1439fafd0(void)

void FUN_1439fafd0(int param_1,ulonglong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  if (*(int *)(param_3 + 0x10) < 10) {
    FUN_1439f9ec0(param_3,param_2);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar3 = pbVar1;
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pbVar3 = (byte)param_2 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)param_2;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}



// FUNCTION 1439fb0a0 FUN_1439fb0a0 body=201 status=ok
// SIG undefined FUN_1439fb0a0(void)

void FUN_1439fb0a0(int param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  
  uVar6 = param_1 * 8 | 2;
  uVar2 = (ulonglong)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar4 = pbVar1;
    while (bVar5 = (byte)uVar2, 0x7f < uVar6) {
      uVar2 = uVar2 >> 7;
      *pbVar4 = bVar5 | 0x80;
      pbVar4 = pbVar4 + 1;
      uVar6 = (uint)uVar2;
    }
    *pbVar4 = bVar5;
    iVar3 = ((int)pbVar4 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar3;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar3;
  }
  uVar2 = (**(code **)(*param_2 + 0x70))(param_2);
  uVar6 = (uint)uVar2;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar2 & 0xffffffff);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar4 = pbVar1;
    while (bVar5 = (byte)uVar2, 0x7f < uVar6) {
      uVar2 = uVar2 >> 7 & 0x1ffffff;
      *pbVar4 = bVar5 | 0x80;
      pbVar4 = pbVar4 + 1;
      uVar6 = (uint)uVar2;
    }
    *pbVar4 = bVar5;
    iVar3 = ((int)pbVar4 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar3;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001439fb165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(param_2,param_3);
  return;
}



// FUNCTION 1439fb170 FUN_1439fb170 body=273 status=ok
// SIG undefined FUN_1439fb170(void)

void FUN_1439fb170(int param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar7;
  
  uVar6 = param_1 * 8 | 2;
  uVar7 = (ulonglong)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar4 = pbVar1;
    while (bVar5 = (byte)uVar7, 0x7f < uVar6) {
      uVar7 = uVar7 >> 7;
      *pbVar4 = bVar5 | 0x80;
      pbVar4 = pbVar4 + 1;
      uVar6 = (uint)uVar7;
    }
    *pbVar4 = bVar5;
    iVar3 = ((int)pbVar4 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar3;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar3;
  }
  uVar6 = (**(code **)(*param_2 + 0x70))(param_2);
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar6);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    uVar7 = (ulonglong)uVar6;
    pbVar4 = pbVar1;
    uVar8 = uVar6;
    while (bVar5 = (byte)uVar7, 0x7f < uVar8) {
      uVar7 = uVar7 >> 7;
      *pbVar4 = bVar5 | 0x80;
      pbVar4 = pbVar4 + 1;
      uVar8 = (uint)uVar7;
    }
    *pbVar4 = bVar5;
    iVar3 = ((int)pbVar4 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar3;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar3;
  }
  if ((*(char *)(param_3 + 0x1a) == '\0') && ((int)uVar6 <= *(int *)(param_3 + 0x10))) {
    lVar2 = *(longlong *)(param_3 + 8);
    *(uint *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - uVar6;
    *(longlong *)(param_3 + 8) = lVar2 + (int)uVar6;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001439fb266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x80))(param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001439fb27d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(param_2,param_3);
  return;
}



// FUNCTION 1439fb290 FUN_1439fb290 body=196 status=ok
// SIG undefined FUN_1439fb290(void)

void FUN_1439fb290(int param_1,int param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  uVar5 = param_2 >> 0x1f ^ param_2 * 2;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar3 = pbVar1;
  while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
    uVar6 = uVar6 >> 7;
    *pbVar3 = bVar4 | 0x80;
    pbVar3 = pbVar3 + 1;
    uVar5 = (uint)uVar6;
  }
  *pbVar3 = bVar4;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}



// FUNCTION 1439fb360 FUN_1439fb360 body=213 status=ok
// SIG undefined FUN_1439fb360(void)

void FUN_1439fb360(int param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1 * 8;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  uVar6 = param_2 >> 0x3f ^ param_2 * 2;
  if (*(int *)(param_3 + 0x10) < 10) {
    FUN_1439f9ec0(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar3 = pbVar1;
  for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar3 = (byte)uVar6 | 0x80;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = (byte)uVar6;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}



// FUNCTION 1439fb440 FUN_1439fb440 body=355 status=ok
// SIG undefined FUN_1439fb440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fb440(int param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar7 = param_1 * 8 | 2;
  uVar6 = (ulonglong)uVar7;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 + 1) - (int)pbVar2;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  if (0x7fffffff < (ulonglong)param_2[2]) {
    uVar3 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format_lite.cc"
                          ,0x1fa);
    local_64 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (value.size()) <= (kint32max): ");
    FUN_1439eec50(local_68,uVar3);
    DsDevice::~DsDevice(local_58);
  }
  uVar6 = param_2[2];
  uVar7 = (uint)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar6 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7 & 0x1ffffff;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 - (int)pbVar2) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1439f9d40(param_3,param_2,*puVar1 & 0xffffffff);
  return;
}



// FUNCTION 1439fb5b0 FUN_1439fb5b0 body=368 status=ok
// SIG undefined FUN_1439fb5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439fb5b0(int param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar7 = param_1 * 8 | 2;
  uVar6 = (ulonglong)uVar7;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 + 1) - (int)pbVar2;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  if (0x7fffffff < (ulonglong)param_2[2]) {
    uVar3 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format_lite.cc"
                          ,0x203);
    local_64 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (value.size()) <= (kint32max): ");
    FUN_1439eec50(local_68,uVar3);
    DsDevice::~DsDevice(local_58);
  }
  uVar6 = param_2[2];
  uVar7 = (uint)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar6 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_3 + 8);
    pbVar5 = pbVar2;
    while (0x7f < uVar7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7 & 0x1ffffff;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = (byte)uVar6;
    iVar4 = ((int)pbVar5 - (int)pbVar2) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (*(char *)(param_3 + 0x19) == '\0') {
    FUN_1439f9d40(param_3,param_2,*puVar1 & 0xffffffff);
  }
  else {
    FUN_1439f9c00();
  }
  return;
}



// FUNCTION 1439fb720 FUN_1439fb720 body=196 status=ok
// SIG undefined FUN_1439fb720(void)

void FUN_1439fb720(int param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  uVar7 = (ulonglong)param_2;
  uVar5 = param_1 * 8;
  uVar6 = (ulonglong)uVar5;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar3 = pbVar1;
    while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
      uVar5 = (uint)uVar6;
    }
    *pbVar3 = bVar4;
    iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar7);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar3 = pbVar1;
  while (bVar4 = (byte)uVar7, 0x7f < param_2) {
    uVar7 = uVar7 >> 7;
    *pbVar3 = bVar4 | 0x80;
    pbVar3 = pbVar3 + 1;
    param_2 = (uint)uVar7;
  }
  *pbVar3 = bVar4;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}



// FUNCTION 1439fb7f0 DestroyImportModuleDB body=37 status=ok
// SIG undefined DestroyImportModuleDB(void)

void executable::DestroyImportModuleDB(longlong param_1)

{
  if (param_1 != 0) {
    FUN_141500bf0();
    FMemory::operator_delete(param_1,0x18);
  }
  return;
}



// FUNCTION 1439fb820 FUN_1439fb820 body=260 status=ok
// SIG undefined FUN_1439fb820(void)

longlong FUN_1439fb820(longlong *param_1,void *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar2 = *param_1;
  lVar4 = param_1[1] - lVar2 >> 4;
  if (lVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar5 = param_1[2] - lVar2 >> 4;
  uVar6 = uVar1;
  if ((uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) && (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  _Dst = (void *)FUN_1439fc780(param_1,uVar6,param_3,param_4,0xfffffffffffffffe);
  uVar5 = (longlong)param_2 - lVar2 & 0xfffffffffffffff0;
  uVar3 = param_3[1];
  *(undefined8 *)(uVar5 + (longlong)_Dst) = *param_3;
  ((undefined8 *)(uVar5 + (longlong)_Dst))[1] = uVar3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = (void *)(uVar5 + 0x10 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  _guard_xfg_dispatch_icall_nop(_Dst_00,param_2,_Size);
  FUN_1439fc5f0(param_1,_Dst,uVar1,uVar6);
  return *param_1 + uVar5;
}



// FUNCTION 1439fb930 FUN_1439fb930 body=613 status=ok
// SIG undefined FUN_1439fb930(void)

void FUN_1439fb930(longlong *param_1,void *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong lVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *pvVar14;
  undefined8 uVar15;
  
  uVar15 = 0xfffffffffffffffe;
  uVar12 = (longlong)param_4 - (longlong)param_3 >> 4;
  lVar7 = *param_1;
  lVar4 = (longlong)param_2 - lVar7 >> 4;
  if ((uVar12 == 1) && (param_2 == (void *)param_1[1])) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (uVar12 == 0) {
      return;
    }
  }
  pvVar5 = (void *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)pvVar5 >> 4) < uVar12) {
    lVar9 = (longlong)pvVar5 - lVar7 >> 4;
    if (uVar12 <= 0xfffffffffffffffU - lVar9) {
      uVar13 = lVar9 + uVar12;
      uVar6 = param_1[2] - lVar7 >> 4;
      uVar10 = uVar13;
      if ((uVar6 <= 0xfffffffffffffff - (uVar6 >> 1)) &&
         (uVar10 = (uVar6 >> 1) + uVar6, uVar10 < uVar13)) {
        uVar10 = uVar13;
      }
      pvVar5 = (void *)FUN_1439fc780(param_1,uVar10);
      if (param_3 != param_4) {
        lVar7 = lVar4 * 0x10 - (longlong)param_3;
        do {
          uVar2 = param_3[1];
          puVar1 = (undefined8 *)((longlong)pvVar5 + lVar7 + (longlong)param_3);
          *puVar1 = *param_3;
          puVar1[1] = uVar2;
          param_3 = param_3 + 2;
        } while (param_3 != param_4);
      }
      pvVar11 = (void *)*param_1;
      pvVar14 = pvVar5;
      if (bVar3) {
        sVar8 = param_1[1] - (longlong)pvVar11;
        _Dst = pvVar5;
        param_2 = pvVar11;
      }
      else {
        _guard_xfg_dispatch_icall_nop(pvVar5,pvVar11,(longlong)param_2 - (longlong)pvVar11);
        _Dst = (void *)((lVar4 + uVar12) * 0x10 + (longlong)pvVar5);
        sVar8 = param_1[1] - (longlong)param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,sVar8);
      FUN_1439fc5f0(param_1,pvVar5,uVar13,uVar10,uVar13,pvVar14,uVar15);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  sVar8 = (longlong)pvVar5 - (longlong)param_2;
  if (uVar12 < (ulonglong)((longlong)sVar8 >> 4)) {
    pvVar11 = (void *)((longlong)pvVar5 + uVar12 * -0x10);
    _guard_xfg_dispatch_icall_nop(pvVar5,pvVar11,uVar12 * 0x10);
    param_1[1] = (longlong)(uVar12 * 0x10 + (longlong)pvVar5);
    sVar8 = (longlong)pvVar11 - (longlong)param_2;
    _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar5 - sVar8),param_2,sVar8);
    if (param_3 != param_4) {
      lVar7 = (longlong)param_2 - (longlong)param_3;
      do {
        uVar15 = param_3[1];
        puVar1 = (undefined8 *)(lVar7 + (longlong)param_3);
        *puVar1 = *param_3;
        puVar1[1] = uVar15;
        param_3 = param_3 + 2;
      } while (param_3 != param_4);
    }
  }
  else {
    pvVar5 = (void *)(uVar12 * 0x10 + (longlong)param_2);
    _guard_xfg_dispatch_icall_nop(pvVar5,param_2,sVar8);
    param_1[1] = sVar8 + (longlong)pvVar5;
    if (param_3 != param_4) {
      lVar7 = (longlong)param_2 - (longlong)param_3;
      do {
        uVar15 = param_3[1];
        puVar1 = (undefined8 *)(lVar7 + (longlong)param_3);
        *puVar1 = *param_3;
        puVar1[1] = uVar15;
        param_3 = param_3 + 2;
      } while (param_3 != param_4);
    }
  }
  return;
}



// FUNCTION 1439fbba0 FUN_1439fbba0 body=48 status=ok
// SIG undefined FUN_1439fbba0(void)

longlong FUN_1439fbba0(void *param_1,longlong param_2,void *param_3)

{
  _guard_xfg_dispatch_icall_nop(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



// FUNCTION 1439fbbd0 FUN_1439fbbd0 body=11 status=ok
// SIG undefined FUN_1439fbbd0(void)

void FUN_1439fbbd0(undefined8 *param_1)

{
  *param_1 = google::protobuf::io::ZeroCopyInputStream::vftable;
  return;
}



// FUNCTION 1439fbbe0 FUN_1439fbbe0 body=43 status=ok
// SIG undefined FUN_1439fbbe0(void)

undefined8 * FUN_1439fbbe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::io::ZeroCopyInputStream::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1439fbc10 FUN_1439fbc10 body=64 status=ok
// SIG undefined FUN_1439fbc10(void)

void FUN_1439fbc10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uStack_14 = 1;
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    *puVar1 = CONCAT44(1,param_2);
    puVar1[1] = CONCAT44(uStack_c,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  local_18 = param_2;
  uStack_10 = param_3;
  FUN_1439fb820(param_1,puVar1,&local_18);
  return;
}



// FUNCTION 1439fbc50 FUN_1439fbc50 body=64 status=ok
// SIG undefined FUN_1439fbc50(void)

void FUN_1439fbc50(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uStack_14 = 2;
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    *puVar1 = CONCAT44(2,param_2);
    puVar1[1] = param_3;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  local_18 = param_2;
  uStack_10 = param_3;
  FUN_1439fb820(param_1,puVar1,&local_18);
  return;
}



// FUNCTION 1439fbc90 FUN_1439fbc90 body=117 status=ok
// SIG undefined FUN_1439fbc90(void)

undefined8 * FUN_1439fbc90(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 *puStack_10;
  
  uStack_14 = 4;
  local_18 = param_2;
  puVar1 = (undefined8 *)operator_new(0x18);
  puStack_10 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puStack_10 = puVar1;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) == puVar1) {
    FUN_1439fb820(param_1,puVar1,&local_18);
    return puStack_10;
  }
  *puVar1 = CONCAT44(uStack_14,local_18);
  puVar1[1] = puStack_10;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
  return puStack_10;
}



// FUNCTION 1439fbd10 FUN_1439fbd10 body=113 status=ok
// SIG undefined FUN_1439fbd10(void)

undefined1 * FUN_1439fbd10(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  
  uStack_14 = 3;
  local_18 = param_2;
  puStack_10 = (undefined1 *)operator_new(0x20);
  if (puStack_10 != (undefined1 *)0x0) {
    *(undefined8 *)(puStack_10 + 0x10) = 0;
    *(undefined8 *)(puStack_10 + 0x18) = 0xf;
    *puStack_10 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    *puVar1 = CONCAT44(uStack_14,local_18);
    puVar1[1] = puStack_10;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return puStack_10;
  }
  FUN_1439fb820(param_1,puVar1,&local_18);
  return puStack_10;
}



// FUNCTION 1439fbd90 FUN_1439fbd90 body=64 status=ok
// SIG undefined FUN_1439fbd90(void)

void FUN_1439fbd90(longlong param_1,uint param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint local_18 [2];
  ulonglong uStack_10;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  local_18[1] = 0;
  if (*(ulonglong **)(param_1 + 0x10) != puVar1) {
    *puVar1 = (ulonglong)param_2;
    puVar1[1] = param_3;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  local_18[0] = param_2;
  uStack_10 = param_3;
  FUN_1439fb820(param_1,puVar1,local_18);
  return;
}



// FUNCTION 1439fbdd0 FUN_1439fbdd0 body=262 status=ok
// SIG undefined FUN_1439fbdd0(void)

void FUN_1439fbdd0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*param_1 != param_1[1]) {
    lVar9 = (longlong)(int)(param_1[1] - *param_1 >> 4);
    lVar8 = lVar9 << 4;
    do {
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + -0x10;
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 4 + lVar8);
      if (iVar1 == 3) {
        plVar7 = *(longlong **)(lVar2 + 8 + lVar8);
        if (plVar7 != (longlong *)0x0) {
          uVar3 = plVar7[3];
          if (0xf < uVar3) {
            uVar6 = uVar3 + 1;
            lVar2 = *plVar7;
            lVar4 = lVar2;
            if (0xfff < uVar6) {
              uVar6 = uVar3 + 0x28;
              lVar4 = *(longlong *)(lVar2 + -8);
              if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar4,uVar6);
          }
          plVar7[2] = 0;
          plVar7[3] = 0xf;
          *(undefined1 *)plVar7 = 0;
          uVar5 = 0x20;
          goto LAB_1439fbea5;
        }
      }
      else if ((iVar1 == 4) &&
              (plVar7 = *(longlong **)(lVar2 + 8 + lVar8), plVar7 != (longlong *)0x0)) {
        FUN_1439fbdd0(plVar7);
        FUN_1439fc6f0(plVar7);
        uVar5 = 0x18;
LAB_1439fbea5:
        FMemory::operator_delete(plVar7,uVar5);
      }
    } while (0 < lVar9);
    param_1[1] = *param_1;
  }
  return;
}



// FUNCTION 1439fbee0 FUN_1439fbee0 body=256 status=ok
// SIG undefined FUN_1439fbee0(void)

void FUN_1439fbee0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)(param_1[1] - *param_1 >> 4);
  lVar8 = lVar9 << 4;
  do {
    lVar9 = lVar9 + -1;
    lVar8 = lVar8 + -0x10;
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 4 + lVar8);
    if (iVar1 == 3) {
      plVar7 = *(longlong **)(lVar2 + 8 + lVar8);
      if (plVar7 != (longlong *)0x0) {
        uVar3 = plVar7[3];
        if (0xf < uVar3) {
          uVar6 = uVar3 + 1;
          lVar2 = *plVar7;
          lVar4 = lVar2;
          if (0xfff < uVar6) {
            uVar6 = uVar3 + 0x28;
            lVar4 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar6);
        }
        plVar7[2] = 0;
        plVar7[3] = 0xf;
        *(undefined1 *)plVar7 = 0;
        uVar5 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) && (plVar7 = *(longlong **)(lVar2 + 8 + lVar8), plVar7 != (longlong *)0x0)
            ) {
      FUN_1439fbdd0(plVar7);
      FUN_1439fc6f0(plVar7);
      uVar5 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar7,uVar5);
    }
    if (lVar9 < 1) {
      param_1[1] = *param_1;
      return;
    }
  } while( true );
}



// FUNCTION 1439fbff0 FUN_1439fbff0 body=344 status=ok
// SIG undefined FUN_1439fbff0(void)

void FUN_1439fbff0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong lVar13;
  
  if (*(int *)(param_1 + 4) == 3) {
    lVar13 = operator_new(0x20);
    if (lVar13 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        (lVar13,*(undefined8 *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 8) = uVar7;
  }
  else if (*(int *)(param_1 + 4) == 4) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar10 = (longlong *)0x0;
    plVar9 = plVar10;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar9 = plVar6;
    }
    plVar6 = *(longlong **)(param_1 + 8);
    iVar5 = (int)(plVar6[1] - *plVar6 >> 4);
    if (0 < iVar5) {
      lVar13 = (longlong)iVar5;
      uVar8 = (plVar9[1] - *plVar9 >> 4) + lVar13;
      if ((ulonglong)(plVar9[2] - *plVar9 >> 4) < uVar8) {
        if (0xfffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::vector<int,std::allocator<int>_>::_Xlength();
        }
        FUN_1439fc680(plVar9);
      }
      plVar11 = plVar10;
      if (0 < lVar13) {
        do {
          puVar12 = (undefined4 *)(*plVar6 + (longlong)plVar10);
          puVar1 = (undefined4 *)plVar9[1];
          if ((undefined4 *)plVar9[2] == puVar1) {
            FUN_1439fb820(plVar9);
          }
          else {
            uVar2 = puVar12[1];
            uVar3 = puVar12[2];
            uVar4 = puVar12[3];
            *puVar1 = *puVar12;
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
            plVar9[1] = plVar9[1] + 0x10;
          }
          FUN_1439fbff0(plVar9[1] + -0x10,(longlong)(int)plVar11 * 0x10 + *plVar6);
          plVar10 = plVar10 + 2;
          lVar13 = lVar13 + -1;
          plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
        } while (lVar13 != 0);
      }
    }
    *(longlong **)(param_1 + 8) = plVar9;
  }
  return;
}



// FUNCTION 1439fc150 FUN_1439fc150 body=233 status=ok
// SIG undefined FUN_1439fc150(void)

void FUN_1439fc150(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  iVar7 = (int)(param_2[1] - *param_2 >> 4);
  if (0 < iVar7) {
    lVar6 = (longlong)iVar7;
    uVar5 = (param_1[1] - *param_1 >> 4) + lVar6;
    if ((ulonglong)(param_1[2] - *param_1 >> 4) < uVar5) {
      if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::vector<int,std::allocator<int>_>::_Xlength();
      }
      FUN_1439fc680();
    }
    iVar7 = 0;
    if (0 < lVar6) {
      lVar8 = 0;
      do {
        puVar1 = (undefined4 *)param_1[1];
        puVar9 = (undefined4 *)(*param_2 + lVar8);
        if ((undefined4 *)param_1[2] == puVar1) {
          FUN_1439fb820(param_1);
        }
        else {
          uVar2 = puVar9[1];
          uVar3 = puVar9[2];
          uVar4 = puVar9[3];
          *puVar1 = *puVar9;
          puVar1[1] = uVar2;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
          param_1[1] = param_1[1] + 0x10;
        }
        FUN_1439fbff0(param_1[1] + -0x10,(longlong)iVar7 * 0x10 + *param_2);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 1439fc240 FUN_1439fc240 body=186 status=ok
// SIG undefined FUN_1439fc240(void)

undefined8 FUN_1439fc240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_143a500a0(local_80,param_2,param_3,0xffffffff,0xfffffffffffffffe);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = local_80;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x7fffffff;
  local_28 = 0x7fffffff;
  local_24 = DAT_1468322e0;
  local_20 = DAT_1468322e0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1439f9980(&local_58);
  cVar1 = FUN_1439fc300(param_1,&local_58);
  if ((cVar1 == '\0') || ((char)local_34 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1439f83f0(&local_58);
  return uVar2;
}



// FUNCTION 1439fc300 FUN_1439fc300 body=370 status=ok
// SIG undefined FUN_1439fc300(void)

undefined8 FUN_1439fc300(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res18;
  longlong local_20;
  longlong lStack_18;
  longlong local_10;
  
  FUN_1439fbdd0();
  local_20 = 0;
  lStack_18 = 0;
  local_10 = 0;
  cVar1 = FUN_143a1e420(param_2,&local_20);
  if ((cVar1 != '\0') && (*(char *)(param_2 + 0x24) != '\0')) {
    if (*param_1 == param_1[1]) {
      if (param_1 != &local_20) {
        FUN_1439fc6f0(param_1);
        *param_1 = local_20;
        param_1[1] = lStack_18;
        param_1[2] = local_10;
        local_20 = 0;
        local_10 = 0;
      }
    }
    else {
      FUN_1439fb930(param_1,param_1[1],local_20,lStack_18,local_res18);
    }
    lStack_18 = local_20;
    FUN_1439fbdd0(&local_20);
    if (local_20 != 0) {
      uVar3 = local_10 - local_20 & 0xfffffffffffffff0;
      lVar2 = local_20;
      if (0xfff < uVar3) {
        uVar3 = uVar3 + 0x27;
        lVar2 = *(longlong *)(local_20 + -8);
        if (0x1f < (local_20 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar2,uVar3);
    }
    return 1;
  }
  FUN_1439fbdd0(&local_20);
  if (local_20 != 0) {
    uVar3 = local_10 - local_20 & 0xfffffffffffffff0;
    lVar2 = local_20;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(local_20 + -8);
      if (0x1f < (local_20 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
  }
  return 0;
}



// FUNCTION 1439fc480 FUN_1439fc480 body=157 status=ok
// SIG undefined FUN_1439fc480(void)

void FUN_1439fc480(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 8);
  uVar5 = plVar8[2];
  uVar4 = (uint)uVar5;
  if (*(int *)(param_2 + 0x10) < 5) {
    FUN_1439f9e60(param_2,uVar5 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_2 + 8);
    pbVar7 = pbVar2;
    while (bVar3 = (byte)uVar5, 0x7f < uVar4) {
      uVar5 = uVar5 >> 7 & 0x1ffffff;
      *pbVar7 = bVar3 | 0x80;
      pbVar7 = pbVar7 + 1;
      uVar4 = (uint)uVar5;
    }
    *pbVar7 = bVar3;
    iVar6 = ((int)pbVar7 - (int)pbVar2) + 1;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar6;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar6;
  }
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (0xf < (ulonglong)plVar8[3]) {
    plVar8 = (longlong *)*plVar8;
  }
  if (*(char *)(param_2 + 0x19) != '\0') {
    FUN_1439f9c00();
    return;
  }
  FUN_1439f9d40(param_2,plVar8,*puVar1 & 0xffffffff);
  return;
}



// FUNCTION 1439fc520 FUN_1439fc520 body=195 status=ok
// SIG undefined FUN_1439fc520(void)

longlong FUN_1439fc520(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = *param_1;
  if (lVar4 != param_1[1]) {
    lVar2 = param_1[1] - lVar4 >> 4;
    iVar6 = 0;
    lVar5 = lVar2 * 0x10 + 0x18;
    if (lVar2 != 0) {
      lVar2 = 0;
      do {
        iVar1 = *(int *)(lVar2 + 4 + lVar4);
        if (iVar1 == 3) {
          lVar4 = google::protobuf::internal::StringSpaceUsedExcludingSelf
                            (*(undefined8 *)(lVar2 + 8 + lVar4));
          lVar5 = lVar5 + 0x20 + lVar4;
        }
        else if (iVar1 == 4) {
          uVar3 = FUN_1439fc520(*(undefined8 *)(lVar2 + 8 + lVar4));
          iVar1 = FUN_1436a85f0(uVar3);
          lVar5 = lVar5 + 0x18 + (longlong)iVar1;
        }
        lVar4 = *param_1;
        iVar6 = iVar6 + 1;
        lVar2 = lVar2 + 0x10;
      } while ((ulonglong)(longlong)iVar6 < (ulonglong)(param_1[1] - lVar4 >> 4));
    }
    return lVar5;
  }
  return 0;
}



// FUNCTION 1439fc5f0 FUN_1439fc5f0 body=141 status=ok
// SIG undefined FUN_1439fc5f0(void)

void FUN_1439fc5f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
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
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 1439fc680 FUN_1439fc680 body=111 status=ok
// SIG undefined FUN_1439fc680(void)

void FUN_1439fc680(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  _Dst = (void *)FUN_1439fc780();
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_1439fc5f0(param_1,_Dst,lVar1 - lVar2 >> 4,param_2);
  return;
}



// FUNCTION 1439fc6f0 FUN_1439fc6f0 body=91 status=ok
// SIG undefined FUN_1439fc6f0(void)

void FUN_1439fc6f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
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



// FUNCTION 1439fc750 _Umove body=45 status=ok
// SIG undefined _Umove(void)

longlong std::vector<char,std::allocator<char>_>::_Umove
                   (undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  ::_guard_xfg_dispatch_icall_nop(param_4,param_2,param_3 - (longlong)param_2);
  return (param_3 - (longlong)param_2) + (longlong)param_4;
}



// FUNCTION 1439fc780 FUN_1439fc780 body=115 status=ok
// SIG undefined FUN_1439fc780(void)

void FUN_1439fc780(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 << 4;
  if (param_2 < 0x1000000000000000) {
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



// FUNCTION 1439fc800 FUN_1439fc800 body=174 status=ok
// SIG undefined FUN_1439fc800(void)

undefined8 *
FUN_1439fc800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ba2fe8) && (_Init_thread_header(&DAT_146ba2fe8), DAT_146ba2fe8 == -1))
  {
    puVar1 = (undefined8 *)operator_new(0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_1439ef0c0(executable::DestroyImportModuleDB,puVar1,param_3,param_4,uVar2);
    DAT_146ba2fe0 = puVar1;
    _Init_thread_footer(&DAT_146ba2fe8);
    return DAT_146ba2fe0;
  }
  return DAT_146ba2fe0;
}



// FUNCTION 1439fc8b0 FUN_1439fc8b0 body=340 status=ok
// SIG undefined FUN_1439fc8b0(void)

void FUN_1439fc8b0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_1439fe570(param_2);
  lVar2 = *param_1;
  if ((lVar2 == lVar6) && (piVar3 = (int *)param_1[2], piVar3 != (int *)0x0)) {
    iVar1 = *piVar3;
    if (iVar1 < *(int *)((longlong)param_1 + 0xc)) {
      iVar5 = (int)param_1[1];
      if (iVar5 < iVar1) {
        *(undefined8 *)(piVar3 + (longlong)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar3 + (longlong)iVar5 * 2 + 2);
        iVar5 = (int)param_1[1];
      }
      *(undefined8 **)(piVar3 + (longlong)iVar5 * 2 + 2) = param_2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
      return;
    }
  }
  lVar6 = FUN_1439fe560(param_2);
  puVar7 = param_2;
  if ((lVar2 == 0) || (lVar6 != 0)) {
    if (lVar2 != lVar6) {
      puVar7 = (undefined8 *)FOutputDevice::Serialize(param_2,lVar2);
      Metasound::Frontend::FBaseOutputController::Connect(param_2,puVar7);
      if ((lVar6 == 0) && (param_2 != (undefined8 *)0x0)) {
        (**(code **)*param_2)(param_2,1);
      }
    }
  }
  else {
    FUN_1414fee00(lVar2,param_2);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
LAB_1439fc9d1:
    FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  }
  else {
    iVar1 = (int)param_1[1];
    if (iVar1 == *(int *)((longlong)param_1 + 0xc)) goto LAB_1439fc9d1;
    iVar5 = *piVar3;
    if (iVar5 == *(int *)((longlong)param_1 + 0xc)) {
      if ((*param_1 == 0) &&
         (puVar4 = *(undefined8 **)(piVar3 + (longlong)iVar1 * 2 + 2), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)(puVar4,1);
      }
      goto LAB_1439fc9e4;
    }
    if (iVar5 <= iVar1) {
      *piVar3 = iVar5 + 1;
      goto LAB_1439fc9e4;
    }
    *(undefined8 *)(piVar3 + (longlong)iVar5 * 2 + 2) =
         *(undefined8 *)(piVar3 + (longlong)iVar1 * 2 + 2);
  }
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
LAB_1439fc9e4:
  *(undefined8 **)(param_1[2] + 8 + (longlong)(int)param_1[1] * 8) = puVar7;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 1439fca10 FUN_1439fca10 body=95 status=ok
// SIG undefined FUN_1439fca10(void)

void FUN_1439fca10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    do {
      (**(code **)(**(longlong **)(lVar2 + 8 + lVar3 * 8) + 0x30))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1439fca70 FUN_1439fca70 body=209 status=ok
// SIG undefined FUN_1439fca70(void)

undefined8 FUN_1439fca70(longlong param_1,byte *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1])
                * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
              0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^ (ulonglong)param_2[5]) *
            0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^ (ulonglong)param_2[7]) *
          0x100000001b3;
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = *(undefined8 **)(lVar1 + uVar4 * 0x10);
  while( true ) {
    puVar5 = puVar2;
    if (*(undefined8 **)(lVar1 + uVar4 * 0x10) != puVar2) {
      puVar5 = (undefined8 *)**(undefined8 **)(lVar1 + uVar4 * 0x10 + 8);
    }
    if (puVar3 == puVar5) break;
    if (puVar3[2] == *(longlong *)param_2) {
      if (puVar3 == puVar2) {
        return 0;
      }
      return puVar3[3];
    }
    puVar3 = (undefined8 *)*puVar3;
  }
  return 0;
}



// FUNCTION 1439fcb50 FUN_1439fcb50 body=110 status=ok
// SIG undefined FUN_1439fcb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1439fcb50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ba3008) {
    _Init_thread_header(&DAT_146ba3008);
    if (DAT_146ba3008 == -1) {
      _DAT_146ba3000 = google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::vftable;
      _Init_thread_footer(&DAT_146ba3008);
      return &DAT_146ba3000;
    }
  }
  return &DAT_146ba3000;
}



// FUNCTION 1439fcbc0 FUN_1439fcbc0 body=199 status=ok
// SIG undefined FUN_1439fcbc0(void)

void FUN_1439fcbc0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

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
      Metasound::Frontend::FBaseOutputController::Connect
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
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
      uVar3 = FOutputDevice::Serialize(uVar2,uVar1);
      Metasound::Frontend::FBaseOutputController::Connect(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1439fcc90 FUN_1439fcc90 body=366 status=ok
// SIG undefined FUN_1439fcc90(void)

void FUN_1439fcc90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong local_38;
  undefined8 local_30;
  int *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = *param_2;
  lVar7 = 0;
  local_30 = 0;
  local_28 = (int *)0x0;
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar5 = FUN_1439f1d40(&local_38,iVar6);
    FUN_1439fcbc0(&local_38,uVar5,lVar2 + 8,iVar6,*local_28 - (int)local_30);
    iVar6 = (int)local_30 + iVar6;
    local_30 = CONCAT44(local_30._4_4_,iVar6);
    if (*local_28 < iVar6) {
      *local_28 = iVar6;
    }
  }
  FUN_1439fca10(param_1);
  iVar6 = (int)param_2[1];
  if (iVar6 != 0) {
    lVar2 = param_2[2];
    uVar5 = FUN_1439f1d40(param_1,iVar6);
    FUN_1439fcbc0(param_1,uVar5,lVar2 + 8,iVar6,**(int **)(param_1 + 0x10) - *(int *)(param_1 + 8));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar6;
    if (**(int **)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
      **(int **)(param_1 + 0x10) = *(int *)(param_1 + 8);
    }
  }
  FUN_1439fca10(param_2);
  piVar3 = (int *)param_2[2];
  param_2[2] = (longlong)local_28;
  lVar2 = param_2[1];
  *(int *)(param_2 + 1) = (int)local_30;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  *(int *)((longlong)param_2 + 0xc) = local_30._4_4_;
  local_30 = CONCAT44(iVar6,(int)lVar2);
  if ((piVar3 != (int *)0x0) && (local_38 == 0)) {
    iVar1 = *piVar3;
    local_28 = piVar3;
    if (0 < (longlong)iVar1) {
      do {
        puVar4 = *(undefined8 **)(piVar3 + lVar7 * 2 + 2);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar1);
      iVar6 = local_30._4_4_;
    }
    FMemory::operator_delete(local_28,(longlong)iVar6 * 8 + 8);
  }
  return;
}



// FUNCTION 1439fce00 FUN_1439fce00 body=45 status=ok
// SIG undefined FUN_1439fce00(void)

void FUN_1439fce00(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *in_R9;
  
  lVar2 = std::
          _List_alloc<std::_List_base_types<std::pair<hx::Object_*_const,int>,std::allocator<std::pair<hx::Object_*_const,int>_>_>_>
          ::_Buynode0();
  uVar1 = in_R9[1];
  *(undefined8 *)(lVar2 + 0x10) = *in_R9;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  return;
}



// FUNCTION 1439fce30 FUN_1439fce30 body=42 status=ok
// SIG undefined FUN_1439fce30(void)

undefined8 FUN_1439fce30(undefined8 param_1,longlong param_2)

{
  (*(code *)**(undefined8 **)(param_2 + 0x10))(**(undefined8 **)(param_2 + 8));
  return 1;
}



// FUNCTION 1439fce70 _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_> body=151 status=ok
// SIG undefined _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>(void)

void std::
     _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    if (1 < uVar5) {
      uVar1 = *param_3;
      if ((param_3 < param_1) || (param_1 + (uVar5 - 1) < param_3)) {
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 != (uVar5 & 0xfffffffffffffffe));
        puVar3 = param_1;
        for (uVar2 = uVar5 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + (uVar5 & 0xfffffffffffffffe);
      }
    }
    for (; uVar4 != uVar5; uVar4 = uVar4 + 1) {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 1439fcf10 FUN_1439fcf10 body=398 status=ok
// SIG undefined FUN_1439fcf10(void)

longlong * FUN_1439fcf10(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  pcVar3 = (char *)*param_3;
  uVar9 = 0;
  cVar1 = *pcVar3;
  pcVar6 = pcVar3;
  while (cVar1 != '\0') {
    uVar9 = uVar9 * 5 + (longlong)cVar1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  lVar8 = *(longlong *)(param_1 + 8);
  lVar11 = (*(ulonglong *)(param_1 + 0x30) & uVar9) * 0x10;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
  if (lVar8 == lVar4) {
LAB_1439fcffe:
    lVar4 = *param_4;
    if (lVar8 != lVar4) {
      *(longlong *)param_4[1] = lVar4;
      **(longlong **)(lVar4 + 8) = lVar8;
      **(undefined8 **)(lVar8 + 8) = param_4;
      lVar10 = *(longlong *)(lVar8 + 8);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar4 + 8);
      *(longlong *)(lVar4 + 8) = param_4[1];
      param_4[1] = lVar10;
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
    if (*plVar7 == *(longlong *)(param_1 + 8)) {
      *plVar7 = (longlong)param_4;
      *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) = param_4;
    }
    else if (*plVar7 == lVar8) {
      *plVar7 = (longlong)param_4;
    }
    else {
      plVar5 = *(longlong **)plVar7[1];
      plVar7[1] = (longlong)plVar5;
      if (plVar5 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) + 8);
      }
    }
    std::
    _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar8 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11);
    do {
      if (lVar8 == lVar4) goto LAB_1439fcffe;
      lVar8 = *(longlong *)(lVar8 + 8);
      lVar10 = *(longlong *)(lVar8 + 0x10) - (longlong)pcVar3;
      pcVar6 = pcVar3;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar10];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x20,0,lVar10,0xfffffffffffffffe);
    *param_2 = lVar8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 1439fd0a0 FUN_1439fd0a0 body=433 status=ok
// SIG undefined FUN_1439fd0a0(void)

longlong * FUN_1439fd0a0(longlong param_1,longlong *param_2,byte *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  uVar6 = *(ulonglong *)(param_1 + 0x30) & uVar5;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar6 * 0x10);
  if (lVar4 == lVar7) {
LAB_1439fd1ab:
    lVar7 = *param_4;
    if (lVar4 != lVar7) {
      *(longlong *)param_4[1] = lVar7;
      **(longlong **)(lVar7 + 8) = lVar4;
      **(undefined8 **)(lVar4 + 8) = param_4;
      lVar1 = *(longlong *)(lVar4 + 8);
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
      *(longlong *)(lVar7 + 8) = param_4[1];
      param_4[1] = lVar1;
    }
    lVar7 = uVar6 * 0x10;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar7);
    if (*plVar3 == *(longlong *)(param_1 + 8)) {
      *plVar3 = (longlong)param_4;
      *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar7) = param_4;
    }
    else if (*plVar3 == lVar4) {
      *plVar3 = (longlong)param_4;
    }
    else {
      plVar2 = *(longlong **)plVar3[1];
      plVar3[1] = (longlong)plVar2;
      if (plVar2 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar7) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar7) + 8);
      }
    }
    std::
    _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + uVar6 * 0x10);
    do {
      if (lVar4 == lVar7) goto LAB_1439fd1ab;
      lVar4 = *(longlong *)(lVar4 + 8);
    } while (*(longlong *)param_3 != *(longlong *)(lVar4 + 0x10));
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x20,param_3,uVar5,0xfffffffffffffffe);
    *param_2 = lVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 1439fd260 FUN_1439fd260 body=474 status=ok
// SIG undefined FUN_1439fd260(void)

longlong * FUN_1439fd260(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  pcVar3 = (char *)*param_3;
  uVar11 = 0;
  cVar1 = *pcVar3;
  pcVar7 = pcVar3;
  while (cVar1 != '\0') {
    uVar11 = uVar11 * 5 + (longlong)cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  plVar10 = *(longlong **)(param_1 + 8);
  lVar12 = (*(ulonglong *)(param_1 + 0x30) & uVar11) * 0x10;
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar12);
  if (plVar10 == plVar8) {
LAB_1439fd329:
    lVar4 = **(longlong **)(param_1 + 8);
    puVar5 = *(undefined8 **)(lVar4 + 8);
    uVar6 = FUN_1439fce00(param_1 + 8,lVar4,puVar5,param_3,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 0x10) == 0x7fffffffffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(undefined8 *)(lVar4 + 8) = uVar6;
    *puVar5 = uVar6;
    plVar8 = *(longlong **)(param_1 + 8);
    puVar5 = (undefined8 *)*plVar8;
    plVar9 = (longlong *)*puVar5;
    if (plVar10 != plVar9) {
      *(longlong **)puVar5[1] = plVar9;
      *(longlong **)plVar9[1] = plVar10;
      *(undefined8 **)plVar10[1] = puVar5;
      lVar4 = plVar10[1];
      plVar10[1] = plVar9[1];
      plVar9[1] = puVar5[1];
      puVar5[1] = lVar4;
      plVar8 = *(longlong **)(param_1 + 8);
    }
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar12);
    if ((longlong *)*plVar9 == plVar8) {
      *plVar9 = (longlong)puVar5;
      *(undefined8 **)(lVar12 + 8 + *(longlong *)(param_1 + 0x18)) = puVar5;
    }
    else if ((longlong *)*plVar9 == plVar10) {
      *plVar9 = (longlong)puVar5;
    }
    else {
      lVar4 = *(longlong *)plVar9[1];
      plVar9[1] = lVar4;
      if ((undefined8 *)lVar4 != puVar5) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12) + 8);
      }
    }
    std::
    _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar10 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + lVar12);
    do {
      if (plVar10 == plVar8) goto LAB_1439fd329;
      plVar10 = (longlong *)plVar10[1];
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[plVar10[2] - (longlong)pcVar3];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *param_2 = (longlong)plVar10;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 1439fd440 FUN_1439fd440 body=512 status=ok
// SIG undefined FUN_1439fd440(void)

longlong * FUN_1439fd440(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = *(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  plVar5 = *(longlong **)(param_1 + 8);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10);
  plVar7 = plVar5;
  if (plVar1 != plVar5) {
    plVar7 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + uVar8 * 0x10);
  }
  do {
    if (plVar7 == plVar1) {
      lVar9 = *plVar5;
      puVar2 = *(undefined8 **)(lVar9 + 8);
      uVar4 = FUN_1439fce00(param_1 + 8,lVar9,puVar2,param_3);
      if (*(longlong *)(param_1 + 0x10) != 0x7fffffffffffffe) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *(undefined8 *)(lVar9 + 8) = uVar4;
        *puVar2 = uVar4;
        plVar5 = *(longlong **)(param_1 + 8);
        puVar2 = (undefined8 *)*plVar5;
        plVar1 = (longlong *)*puVar2;
        if (plVar7 != plVar1) {
          *(longlong **)puVar2[1] = plVar1;
          *(longlong **)plVar1[1] = plVar7;
          *(undefined8 **)plVar7[1] = puVar2;
          lVar9 = plVar7[1];
          plVar7[1] = plVar1[1];
          plVar1[1] = puVar2[1];
          puVar2[1] = lVar9;
          plVar5 = *(longlong **)(param_1 + 8);
        }
        lVar9 = uVar8 * 0x10;
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar9);
        if ((longlong *)*puVar6 == plVar5) {
          *puVar6 = puVar2;
          *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + lVar9) = puVar2;
        }
        else if ((longlong *)*puVar6 == plVar7) {
          *puVar6 = puVar2;
        }
        else {
          puVar3 = *(undefined8 **)puVar6[1];
          puVar6[1] = puVar3;
          if (puVar3 != puVar2) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar9) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar9) + 8);
          }
        }
        std::
        _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
        ::_Check_size(param_1);
        *param_2 = (longlong)puVar2;
        *(undefined1 *)(param_2 + 1) = 1;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    plVar7 = (longlong *)plVar7[1];
  } while (*(longlong *)param_3 != plVar7[2]);
  *param_2 = (longlong)plVar7;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1439fd650 FUN_1439fd650 body=185 status=ok
// SIG undefined FUN_1439fd650(void)

longlong * FUN_1439fd650(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  pcVar2 = (char *)param_3[2];
  uVar5 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar5 = uVar5 * 5 + (longlong)cVar1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  lVar4 = (*(ulonglong *)(param_1 + 0x30) & uVar5) * 0x10;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar4);
  if ((longlong *)plVar3[1] == param_3) {
    if ((longlong *)*plVar3 == param_3) {
      *plVar3 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar4) = *(undefined8 *)(param_1 + 8);
    }
    else {
      plVar3[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar3 == param_3) {
    *plVar3 = *param_3;
  }
  lVar4 = *param_3;
  *(longlong *)param_3[1] = lVar4;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_3,0x20);
  *param_2 = lVar4;
  return param_2;
}



// FUNCTION 1439fd710 FUN_1439fd710 body=262 status=ok
// SIG undefined FUN_1439fd710(void)

longlong * FUN_1439fd710(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3) * 0x10;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar2);
  if ((longlong *)plVar1[1] == param_3) {
    if ((longlong *)*plVar1 == param_3) {
      *plVar1 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) = *(undefined8 *)(param_1 + 8);
    }
    else {
      plVar1[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar1 == param_3) {
    *plVar1 = *param_3;
  }
  lVar2 = *param_3;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_3,0x20);
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 1439fd820 FUN_1439fd820 body=450 status=ok
// SIG undefined FUN_1439fd820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439fd820(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_58 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_50 = param_1;
  lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,&local_48);
  uVar4 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x2d0))
                    (*(longlong **)(lVar3 + 8),param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar4;
  local_38 = 0;
  uStack_30 = 0xf;
  local_48 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_48,&DAT_144044650,3);
  uVar4 = FUN_143a4f9e0(param_3);
  uVar4 = FUN_143a3f170(uVar4,&local_48);
  iVar2 = FUN_143a009a0(uVar4);
  FUN_141514070(param_1 + 0x10,*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4));
  if (0xf < uStack_30) {
    uVar5 = uStack_30 + 1;
    lVar1 = CONCAT71(uStack_47,local_48);
    lVar3 = lVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar5);
  }
  local_38 = 0;
  uStack_30 = 0xf;
  local_48 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_48,"value",5);
  uVar4 = FUN_143a4f9e0(param_3);
  uVar4 = FUN_143a3f170(uVar4,&local_48);
  iVar2 = FUN_143a009a0(uVar4);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4);
  if (0xf < uStack_30) {
    uVar5 = uStack_30 + 1;
    lVar1 = CONCAT71(uStack_47,local_48);
    lVar3 = lVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar5);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_1);
  return param_1;
}


