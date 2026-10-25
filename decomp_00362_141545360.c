// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141545360 FUN_141545360 body=100 status=ok
// SIG undefined FUN_141545360(void)

undefined8 * FUN_141545360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67910;
  param_1[1] = 0;
  FUN_1439f1850(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (DAT_1464a0d50 != 0) {
    FUN_1439f44f0(&DAT_1464a0d50);
  }
  param_1[8] = &DAT_146ba2f50;
  return param_1;
}



// FUNCTION 1415453d0 FUN_1415453d0 body=116 status=ok
// SIG undefined FUN_1415453d0(void)

undefined8 * FUN_1415453d0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144c68150;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*puVar3 & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *puVar3 & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 141545450 FUN_141545450 body=116 status=ok
// SIG undefined FUN_141545450(void)

undefined8 * FUN_141545450(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144c68090;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*puVar3 & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *puVar3 & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 1415454d0 FUN_1415454d0 body=256 status=ok
// SIG undefined FUN_1415454d0(void)

undefined8 * FUN_1415454d0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *param_1 = &PTR_FUN_144c68210;
  param_1[1] = 0;
  FUN_141544f20(param_1 + 2,param_2 + 0x10);
  FUN_141544f20(param_1 + 5,param_2 + 0x28);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x50);
    uVar4 = FUN_1439f1d40(param_1 + 8,iVar1);
    FUN_141544a50(param_1 + 8,uVar4,lVar2 + 8,iVar1,*(int *)param_1[10] - *(int *)(param_1 + 9));
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + iVar1;
    if (*(int *)param_1[10] < *(int *)(param_1 + 9)) {
      *(int *)param_1[10] = *(int *)(param_1 + 9);
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      uVar5 = FUN_141515d60(param_1 + 1);
    }
    else {
      uVar5 = param_1[1] & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar4;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 1415455d0 FUN_1415455d0 body=109 status=ok
// SIG undefined FUN_1415455d0(void)

undefined8 * FUN_1415455d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c68210;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (DAT_1464a0cd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0cd0);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 141545640 FUN_141545640 body=92 status=ok
// SIG undefined FUN_141545640(void)

undefined8 * FUN_141545640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67fd0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  if (DAT_1464a0e00 != 0) {
    FUN_1439f44f0(&DAT_1464a0e00);
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1415456a0 ~FComboBoxStyle body=44 status=ok
// SIG undefined ~FComboBoxStyle(void)

void FComboBoxStyle::~FComboBoxStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c67850;
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  return;
}



// FUNCTION 1415456d0 FUN_1415456d0 body=78 status=ok
// SIG undefined FUN_1415456d0(void)

void FUN_1415456d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67910;
  FUN_141505b50(param_1 + 8,&DAT_146ba2f50);
  FUN_1414ffbe0(param_1 + 5);
  FUN_1439f1930(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  return;
}



// FUNCTION 141545720 ~FComboBoxStyle body=44 status=ok
// SIG undefined ~FComboBoxStyle(void)

void FComboBoxStyle::~FComboBoxStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c68150;
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  return;
}



// FUNCTION 141545750 ~FComboBoxStyle body=44 status=ok
// SIG undefined ~FComboBoxStyle(void)

void FComboBoxStyle::~FComboBoxStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c68090;
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  return;
}



// FUNCTION 141545780 FUN_141545780 body=71 status=ok
// SIG undefined FUN_141545780(void)

void FUN_141545780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c68210;
  FUN_1414ffbe0(param_1 + 8);
  FUN_1414ffbe0(param_1 + 5);
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  return;
}



// FUNCTION 1415457d0 FUN_1415457d0 body=110 status=ok
// SIG undefined FUN_1415457d0(void)

undefined8 * FUN_1415457d0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67b50;
  FUN_141505b50(param_1 + 8,&DAT_146ba2f50);
  FUN_1414ffbe0(param_1 + 5);
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141545840 FUN_141545840 body=92 status=ok
// SIG undefined FUN_141545840(void)

undefined8 * FUN_141545840(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c679d0;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415458a0 FUN_1415458a0 body=92 status=ok
// SIG undefined FUN_1415458a0(void)

undefined8 * FUN_1415458a0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67e50;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141545900 FUN_141545900 body=92 status=ok
// SIG undefined FUN_141545900(void)

undefined8 * FUN_141545900(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67f10;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141545960 FUN_141545960 body=92 status=ok
// SIG undefined FUN_141545960(void)

undefined8 * FUN_141545960(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67610;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415459c0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c676d0;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545a10 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c67a90;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x18);
  }
  return this;
}



// FUNCTION 141545a60 FUN_141545a60 body=92 status=ok
// SIG undefined FUN_141545a60(void)

undefined8 * FUN_141545a60(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67cd0;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141545ac0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c67d90;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545b10 FUN_141545b10 body=172 status=ok
// SIG undefined FUN_141545b10(void)

undefined8 * FUN_141545b10(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67c10;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 4,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 5,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 6,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 7,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141545bc0 FUN_141545bc0 body=92 status=ok
// SIG undefined FUN_141545bc0(void)

undefined8 * FUN_141545bc0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67790;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141545c20 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c67850;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545c70 FUN_141545c70 body=110 status=ok
// SIG undefined FUN_141545c70(void)

undefined8 * FUN_141545c70(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c67910;
  FUN_141505b50(param_1 + 8,&DAT_146ba2f50);
  FUN_1414ffbe0(param_1 + 5);
  FUN_1439f1930(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141545ce0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c68150;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545d30 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c682d0;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545d80 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c68090;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545dd0 FUN_141545dd0 body=103 status=ok
// SIG undefined FUN_141545dd0(void)

undefined8 * FUN_141545dd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c68210;
  FUN_1414ffbe0(param_1 + 8);
  FUN_1414ffbe0(param_1 + 5);
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141545e40 FUN_141545e40 body=94 status=ok
// SIG undefined FUN_141545e40(void)

undefined8 * FUN_141545e40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c67fd0;
  FUN_1414ffbe0(param_1 + 5);
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141545ea0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c67550;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 141545ef0 FUN_141545ef0 body=612 status=ok
// SIG undefined FUN_141545ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141545ef0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar9 = 0;
  lVar3 = lVar3 + (ulonglong)uVar2;
  uVar10 = 10;
  if (uVar2 != 0) {
    do {
      lVar4 = 0;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        lVar4 = FUN_143a19d80(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe);
      }
      lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x10);
      if (lVar8 != 0) {
        uVar7 = (uint)lVar8 | 1;
        local_48 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> local_48 == 0; local_48 = local_48 + -1) {
          }
        }
        lVar4 = lVar4 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + 1 + lVar8;
      }
      uVar7 = *(uint *)(lVar5 + 0x18);
      if (uVar7 != 0) {
        uVar6 = uVar10;
        if (-1 < (int)uVar7) {
          local_44 = 0x1f;
          if ((uVar7 | 1) != 0) {
            for (; (uVar7 | 1) >> local_44 == 0; local_44 = local_44 + -1) {
            }
          }
          uVar6 = (ulonglong)(local_44 * 9 + 0x49U >> 6);
        }
        lVar4 = lVar4 + 1 + uVar6;
      }
      *(uint *)(lVar5 + 0x1c) = (uint)lVar4;
      uVar7 = (uint)lVar4 | 1;
      uVar9 = uVar9 + 1;
      local_40 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_40 == 0; local_40 = local_40 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar9 = 0;
  lVar3 = lVar3 + (ulonglong)uVar2;
  if (uVar2 != 0) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar9 * 8);
      lVar4 = 0;
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        lVar4 = FUN_143a19d80(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe);
      }
      lVar8 = lVar4 + 2;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        lVar8 = lVar4;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar5 + 0x14) = (uint)lVar8;
      uVar7 = (uint)lVar8 | 1;
      local_3c = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_3c == 0; local_3c = local_3c + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_3c * 9 + 0x49U >> 6) + lVar8;
    } while (uVar9 < uVar2);
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar5 != 0) {
    uVar2 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  if (uVar2 != 0) {
    uVar6 = uVar10;
    if (-1 < (int)uVar2) {
      iVar1 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar6;
  }
  lVar5 = lVar3 + 2;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    lVar5 = lVar3;
  }
  lVar3 = lVar5 + 2;
  if (*(char *)(param_1 + 0x4d) == '\0') {
    lVar3 = lVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 != 0) {
    uVar6 = uVar10;
    if (-1 < (int)uVar2) {
      iVar1 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar6;
  }
  uVar2 = *(uint *)(param_1 + 0x54);
  if (uVar2 != 0) {
    if (-1 < (int)uVar2) {
      iVar1 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar10 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar10;
  }
  *(int *)(param_1 + 0x58) = (int)lVar3;
  return lVar3;
}



// FUNCTION 141546160 FUN_141546160 body=142 status=ok
// SIG undefined FUN_141546160(void)

longlong FUN_141546160(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      *(int *)(param_1 + 0x18) = (int)(lVar3 + 0xb);
      return lVar3 + 0xb;
    }
    iVar1 = 0x1f;
    if ((uVar2 | 1) != 0) {
      for (; (uVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar3 = lVar3 + 1 + (ulonglong)(iVar1 * 9 + 0x49U >> 6);
  }
  *(int *)(param_1 + 0x18) = (int)lVar3;
  return lVar3;
}



// FUNCTION 1415461f0 FUN_1415461f0 body=54 status=ok
// SIG undefined FUN_1415461f0(void)

void FUN_1415461f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar1 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  iVar2 = iVar1 + 2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



// FUNCTION 141546230 FUN_141546230 body=91 status=ok
// SIG undefined FUN_141546230(void)

void FUN_141546230(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar1 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar3 = *(uint *)(param_1 + 0x10) | 1;
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar1 = iVar1 + (iVar2 * 9 + 0x49U >> 6) + 1;
  }
  iVar2 = iVar1 + 2;
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}



// FUNCTION 141546290 FUN_141546290 body=443 status=ok
// SIG undefined FUN_141546290(void)

longlong FUN_141546290(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar2 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  if (*(uint *)(param_1 + 0x40) != 0) {
    uVar4 = *(uint *)(param_1 + 0x40) | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  lVar5 = lVar2 + 2;
  if (*(char *)(param_1 + 0x44) == '\0') {
    lVar5 = lVar2;
  }
  if (*(ulonglong *)(param_1 + 0x48) != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x48) | 1;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
  }
  if (*(ulonglong *)(param_1 + 0x50) != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x50) | 1;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
  }
  *(int *)(param_1 + 0x58) = (int)lVar5;
  return lVar5;
}



// FUNCTION 141546450 FUN_141546450 body=144 status=ok
// SIG undefined FUN_141546450(void)

void FUN_141546450(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar1 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      iVar3 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      uVar2 = iVar3 * 9 + 0x49U >> 6;
    }
    iVar1 = iVar1 + 1 + uVar2;
  }
  if (*(uint *)(param_1 + 0x14) != 0) {
    uVar2 = *(uint *)(param_1 + 0x14) | 1;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar1 = iVar1 + (iVar3 * 9 + 0x49U >> 6) + 1;
  }
  iVar3 = iVar1 + 2;
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar3 = iVar1;
  }
  iVar1 = iVar3 + 2;
  if (*(char *)(param_1 + 0x19) == '\0') {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// FUNCTION 1415464e0 FUN_1415464e0 body=408 status=ok
// SIG undefined FUN_1415464e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1415464e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar4 = FUN_1439fa1a0(param_1 + 0x10);
  uVar2 = (uint)lVar4;
  if (lVar4 != 0) {
    if ((int)uVar2 < 0) {
      uVar5 = 10;
    }
    else {
      local_38 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> local_38 == 0; local_38 = local_38 + -1) {
        }
      }
      uVar5 = (ulonglong)(local_38 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar5;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  uVar9 = 0;
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar3 = lVar3 + lVar4 + (ulonglong)uVar2;
  if (uVar2 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar9 * 8);
      lVar6 = 0;
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe);
      }
      uVar7 = *(uint *)(lVar4 + 0x10);
      if (uVar7 != 0) {
        if ((int)uVar7 < 0) {
          uVar5 = 10;
        }
        else {
          local_34 = 0x1f;
          if ((uVar7 | 1) != 0) {
            for (; (uVar7 | 1) >> local_34 == 0; local_34 = local_34 + -1) {
            }
          }
          uVar5 = (ulonglong)(local_34 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar5;
      }
      if (*(uint *)(lVar4 + 0x14) != 0) {
        uVar7 = *(uint *)(lVar4 + 0x14) | 1;
        local_30 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> local_30 == 0; local_30 = local_30 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_30 * 9 + 0x49U >> 6) + 1;
      }
      lVar8 = lVar6 + 2;
      if (*(char *)(lVar4 + 0x18) == '\0') {
        lVar8 = lVar6;
      }
      lVar6 = lVar8 + 2;
      if (*(char *)(lVar4 + 0x19) == '\0') {
        lVar6 = lVar8;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar4 + 0x1c) = (uint)lVar6;
      uVar7 = (uint)lVar6 | 1;
      local_2c = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_2c == 0; local_2c = local_2c + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_2c * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar2);
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar4 != 0) {
    uVar2 = (uint)lVar4 | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar4;
  }
  *(int *)(param_1 + 0x48) = (int)lVar3;
  return lVar3;
}



// FUNCTION 141546680 FUN_141546680 body=123 status=ok
// SIG undefined FUN_141546680(void)

longlong FUN_141546680(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar4 = 10;
    }
    else {
      iVar1 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar4 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar4;
  }
  if (*(uint *)(param_1 + 0x14) != 0) {
    uVar2 = *(uint *)(param_1 + 0x14) | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar3;
  return lVar3;
}



// FUNCTION 141546700 FUN_141546700 body=860 status=ok
// SIG undefined FUN_141546700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141546700(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar5 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar5 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar4;
  uVar8 = 10;
  if (uVar4 != 0) {
    do {
      lVar6 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      uVar3 = *(uint *)(lVar1 + 0x10);
      if (uVar3 != 0) {
        uVar7 = uVar8;
        if (-1 < (int)uVar3) {
          local_58 = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> local_58 == 0; local_58 = local_58 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_58 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      uVar3 = *(uint *)(lVar1 + 0x14);
      if (uVar3 != 0) {
        uVar7 = uVar8;
        if (-1 < (int)uVar3) {
          local_54 = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> local_54 == 0; local_54 = local_54 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_54 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      *(uint *)(lVar1 + 0x18) = (uint)lVar6;
      uVar3 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_50 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_50 == 0; local_50 = local_50 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_50 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar4;
  if (uVar4 != 0) {
    do {
      lVar6 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      uVar3 = *(uint *)(lVar1 + 0x10);
      if (uVar3 != 0) {
        uVar7 = uVar8;
        if (-1 < (int)uVar3) {
          local_4c = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> local_4c == 0; local_4c = local_4c + -1) {
            }
          }
          uVar7 = (ulonglong)(local_4c * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      uVar3 = *(uint *)(lVar1 + 0x14);
      if (uVar3 != 0) {
        uVar7 = uVar8;
        if (-1 < (int)uVar3) {
          local_48 = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> local_48 == 0; local_48 = local_48 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_48 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      *(uint *)(lVar1 + 0x18) = (uint)lVar6;
      uVar3 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_44 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar4;
  if (uVar4 != 0) {
    do {
      lVar6 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      uVar3 = *(uint *)(lVar1 + 0x10);
      if (uVar3 != 0) {
        uVar7 = uVar8;
        if (-1 < (int)uVar3) {
          local_40 = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> local_40 == 0; local_40 = local_40 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_40 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      if (*(uint *)(lVar1 + 0x14) != 0) {
        uVar3 = *(uint *)(lVar1 + 0x14) | 1;
        local_3c = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> local_3c == 0; local_3c = local_3c + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_3c * 9 + 0x49U >> 6) + 1;
      }
      *(uint *)(lVar1 + 0x18) = (uint)lVar6;
      uVar3 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_38 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_38 == 0; local_38 = local_38 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_38 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar4);
  }
  if (*(ulonglong *)(param_1 + 0x58) != 0) {
    uVar7 = *(ulonglong *)(param_1 + 0x58) | 1;
    lVar1 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)((int)lVar1 * 9 + 0x49U >> 6) + 1;
  }
  if (*(uint *)(param_1 + 0x60) != 0) {
    uVar4 = *(uint *)(param_1 + 0x60) | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1;
  }
  uVar4 = *(uint *)(param_1 + 100);
  if (uVar4 != 0) {
    if (-1 < (int)uVar4) {
      iVar2 = 0x1f;
      if ((uVar4 | 1) != 0) {
        for (; (uVar4 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar8 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar8;
  }
  if (*(uint *)(param_1 + 0x68) != 0) {
    uVar4 = *(uint *)(param_1 + 0x68) | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1;
  }
  if (*(uint *)(param_1 + 0x6c) != 0) {
    uVar4 = *(uint *)(param_1 + 0x6c) | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1;
  }
  *(int *)(param_1 + 0x70) = (int)lVar5;
  return lVar5;
}



// FUNCTION 141546a60 FUN_141546a60 body=483 status=ok
// SIG undefined FUN_141546a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141546a60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar9 = 0;
  uVar4 = uVar9;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  lVar8 = uVar4 + uVar3;
  uVar10 = 10;
  uVar4 = uVar9;
  if (uVar3 != 0) {
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8);
      uVar5 = uVar9;
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        uVar5 = FUN_143a19d80(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe);
      }
      uVar2 = *(uint *)(lVar7 + 0x10);
      if (uVar2 != 0) {
        if ((int)uVar2 < 0) {
          uVar6 = 10;
        }
        else {
          local_58 = 0x1f;
          if ((uVar2 | 1) != 0) {
            for (; (uVar2 | 1) >> local_58 == 0; local_58 = local_58 + -1) {
            }
          }
          uVar6 = (ulonglong)(local_58 * 9 + 0x49U >> 6);
        }
        uVar5 = uVar5 + 1 + uVar6;
      }
      if (*(uint *)(lVar7 + 0x14) != 0) {
        uVar2 = *(uint *)(lVar7 + 0x14) | 1;
        local_54 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> local_54 == 0; local_54 = local_54 + -1) {
          }
        }
        uVar5 = uVar5 + (ulonglong)(local_54 * 9 + 0x49U >> 6) + 1;
      }
      *(uint *)(lVar7 + 0x18) = (uint)uVar5;
      uVar2 = (uint)uVar5 | 1;
      uVar11 = (int)uVar4 + 1;
      local_50 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> local_50 == 0; local_50 = local_50 + -1) {
        }
      }
      lVar8 = lVar8 + (local_50 * 9 + 0x49U >> 6) + uVar5;
      uVar4 = (ulonglong)uVar11;
    } while (uVar11 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  lVar8 = lVar8 + (ulonglong)uVar3;
  if (uVar3 != 0) {
    do {
      lVar7 = FUN_141546700(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar9 * 8));
      uVar11 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar11;
      uVar2 = (uint)lVar7 | 1;
      local_4c = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> local_4c == 0; local_4c = local_4c + -1) {
        }
      }
      lVar8 = lVar8 + (ulonglong)(local_4c * 9 + 0x49U >> 6) + lVar7;
    } while (uVar11 < uVar3);
  }
  if (*(uint *)(param_1 + 0x40) != 0) {
    uVar3 = *(uint *)(param_1 + 0x40) | 1;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar8 = lVar8 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar4 = 10;
    }
    else {
      iVar1 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar4 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar8 = lVar8 + 1 + uVar4;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 != 0) {
    if (-1 < (int)uVar3) {
      iVar1 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar10 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar8 = lVar8 + 1 + uVar10;
  }
  *(int *)(param_1 + 0x4c) = (int)lVar8;
  return lVar8;
}



// FUNCTION 141546c50 FUN_141546c50 body=72 status=ok
// SIG undefined FUN_141546c50(void)

void FUN_141546c50(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar1 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  if (*(float *)(param_1 + 0x10) != 0.0) {
    iVar1 = iVar1 + 5;
  }
  if (*(float *)(param_1 + 0x14) != 0.0) {
    iVar1 = iVar1 + 5;
  }
  if (*(float *)(param_1 + 0x18) != 0.0) {
    iVar1 = iVar1 + 5;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// FUNCTION 141546ca0 FUN_141546ca0 body=123 status=ok
// SIG undefined FUN_141546ca0(void)

void FUN_141546ca0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar5 * 8);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar4 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar4 != plVar4[1])) {
        FUN_1439fbee0();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 141546d20 FUN_141546d20 body=309 status=ok
// SIG undefined FUN_141546d20(void)

void FUN_141546d20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      lVar6 = *(longlong *)(lVar2 + 8 + lVar7 * 8);
      *(undefined1 *)(lVar6 + 0x10) = 0;
      if (((*(byte *)(lVar6 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar6 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141546e80 FUN_141546e80 body=36 status=ok
// SIG undefined FUN_141546e80(void)

void FUN_141546e80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar4 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar4 == plVar4[1])
     ) {
    return;
  }
  lVar10 = (longlong)(int)(plVar4[1] - *plVar4 >> 4);
  lVar9 = lVar10 << 4;
  do {
    lVar10 = lVar10 + -1;
    lVar9 = lVar9 + -0x10;
    lVar2 = *plVar4;
    iVar1 = *(int *)(lVar2 + 4 + lVar9);
    if (iVar1 == 3) {
      plVar8 = *(longlong **)(lVar2 + 8 + lVar9);
      if (plVar8 != (longlong *)0x0) {
        uVar3 = plVar8[3];
        if (0xf < uVar3) {
          uVar7 = uVar3 + 1;
          lVar2 = *plVar8;
          lVar5 = lVar2;
          if (0xfff < uVar7) {
            uVar7 = uVar3 + 0x28;
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar5,uVar7);
        }
        plVar8[2] = 0;
        plVar8[3] = 0xf;
        *(undefined1 *)plVar8 = 0;
        uVar6 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) && (plVar8 = *(longlong **)(lVar2 + 8 + lVar9), plVar8 != (longlong *)0x0)
            ) {
      FUN_1439fbdd0(plVar8);
      FUN_1439fc6f0(plVar8);
      uVar6 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar8,uVar6);
    }
    if (lVar10 < 1) {
      plVar4[1] = *plVar4;
      return;
    }
  } while( true );
}



// FUNCTION 141546eb0 FUN_141546eb0 body=208 status=ok
// SIG undefined FUN_141546eb0(void)

void FUN_141546eb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        uVar7 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) &&
            (plVar9 = *(longlong **)(lVar2 + 8 + lVar10), plVar9 != (longlong *)0x0)) {
      FUN_1439fbdd0(plVar9);
      FUN_1439fc6f0(plVar9);
      uVar7 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar9,uVar7);
    }
    if (lVar11 < 1) {
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141546fb0 FUN_141546fb0 body=213 status=ok
// SIG undefined FUN_141546fb0(void)

void FUN_141546fb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar6 = 0;
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined2 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141547090 FUN_141547090 body=186 status=ok
// SIG undefined FUN_141547090(void)

void FUN_141547090(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_141546ca0(param_1 + 0x10);
  FUN_141546ca0(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 0x50);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar5 * 8);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar4 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar4 != plVar4[1])) {
        FUN_1439fbee0();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar4 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar4 != plVar4[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141547150 FUN_141547150 body=217 status=ok
// SIG undefined FUN_141547150(void)

void FUN_141547150(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar5 * 8);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar4 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar4 != plVar4[1])) {
        FUN_1439fbee0();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      FUN_141547090(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar4 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar4 != plVar4[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141547230 FUN_141547230 body=166 status=ok
// SIG undefined FUN_141547230(void)

void FUN_141547230(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141546d20();
    if (DAT_1464a0d68 != 0) {
      FUN_1439f44f0(&DAT_1464a0d68);
    }
    lVar1 = (**(code **)(DAT_1468a5fc0 + 0xb8))(&DAT_1468a5fc0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141549900(param_1);
  }
  return;
}



// FUNCTION 1415472e0 FUN_1415472e0 body=223 status=ok
// SIG undefined FUN_1415472e0(void)

void FUN_1415472e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0c40 != 0) {
      FUN_1439f44f0(&DAT_1464a0c40);
    }
    lVar2 = (**(code **)(DAT_1468a6020 + 0xb8))(&DAT_1468a6020,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 1415473c0 FUN_1415473c0 body=224 status=ok
// SIG undefined FUN_1415473c0(void)

void FUN_1415473c0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0dd0 != 0) {
      FUN_1439f44f0(&DAT_1464a0dd0);
    }
    lVar2 = (**(code **)(DAT_1468a6040 + 0xb8))(&DAT_1468a6040,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 1415474a0 FUN_1415474a0 body=224 status=ok
// SIG undefined FUN_1415474a0(void)

void FUN_1415474a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0de8 != 0) {
      FUN_1439f44f0(&DAT_1464a0de8);
    }
    lVar2 = (**(code **)(DAT_1468a6060 + 0xb8))(&DAT_1468a6060,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 141547580 FUN_141547580 body=223 status=ok
// SIG undefined FUN_141547580(void)

void FUN_141547580(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0d08 != 0) {
      FUN_1439f44f0(&DAT_1464a0d08);
    }
    lVar2 = (**(code **)(DAT_1468a6080 + 0xb8))(&DAT_1468a6080,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141547660 FUN_141547660 body=195 status=ok
// SIG undefined FUN_141547660(void)

void FUN_141547660(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0d20 != 0) {
      FUN_1439f44f0(&DAT_1464a0d20);
    }
    lVar1 = (**(code **)(DAT_1468a60a0 + 0xb8))(&DAT_1468a60a0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415324d0(param_1);
  }
  return;
}



// FUNCTION 141547730 FUN_141547730 body=193 status=ok
// SIG undefined FUN_141547730(void)

void FUN_141547730(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    *(undefined1 *)(param_1 + 2) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0c58 != 0) {
      FUN_1439f44f0(&DAT_1464a0c58);
    }
    lVar1 = (**(code **)(DAT_1468a60c0 + 0xb8))(&DAT_1468a60c0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141549e50(param_1);
  }
  return;
}



// FUNCTION 141547800 FUN_141547800 body=224 status=ok
// SIG undefined FUN_141547800(void)

void FUN_141547800(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0da0 != 0) {
      FUN_1439f44f0(&DAT_1464a0da0);
    }
    lVar2 = (**(code **)(DAT_1468a60d8 + 0xb8))(&DAT_1468a60d8,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 1415478e0 FUN_1415478e0 body=197 status=ok
// SIG undefined FUN_1415478e0(void)

void FUN_1415478e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0db8 != 0) {
      FUN_1439f44f0(&DAT_1464a0db8);
    }
    lVar1 = (**(code **)(DAT_1468a60f8 + 0xb8))(&DAT_1468a60f8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154a000(param_1);
  }
  return;
}



// FUNCTION 1415479b0 FUN_1415479b0 body=166 status=ok
// SIG undefined FUN_1415479b0(void)

void FUN_1415479b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141546eb0();
    if (DAT_1464a0d88 != 0) {
      FUN_1439f44f0(&DAT_1464a0d88);
    }
    lVar1 = (**(code **)(DAT_1468a6120 + 0xb8))(&DAT_1468a6120,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154a110(param_1);
  }
  return;
}



// FUNCTION 141547a60 FUN_141547a60 body=223 status=ok
// SIG undefined FUN_141547a60(void)

void FUN_141547a60(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0d38 != 0) {
      FUN_1439f44f0(&DAT_1464a0d38);
    }
    lVar2 = (**(code **)(DAT_1468a6180 + 0xb8))(&DAT_1468a6180,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141547b40 FUN_141547b40 body=199 status=ok
// SIG undefined FUN_141547b40(void)

void FUN_141547b40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0c70 != 0) {
      FUN_1439f44f0(&DAT_1464a0c70);
    }
    lVar1 = (**(code **)(DAT_1468a61a0 + 0xb8))(&DAT_1468a61a0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154a440(param_1);
  }
  return;
}



// FUNCTION 141547c10 FUN_141547c10 body=166 status=ok
// SIG undefined FUN_141547c10(void)

void FUN_141547c10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141546fb0();
    if (DAT_1464a0d50 != 0) {
      FUN_1439f44f0(&DAT_1464a0d50);
    }
    lVar1 = (**(code **)(DAT_1468a61c0 + 0xb8))(&DAT_1468a61c0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154a560(param_1);
  }
  return;
}



// FUNCTION 141547cc0 FUN_141547cc0 body=195 status=ok
// SIG undefined FUN_141547cc0(void)

void FUN_141547cc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0c88 != 0) {
      FUN_1439f44f0(&DAT_1464a0c88);
    }
    lVar1 = (**(code **)(DAT_1468a6210 + 0xb8))(&DAT_1468a6210,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415324d0(param_1);
  }
  return;
}



// FUNCTION 141547d90 FUN_141547d90 body=195 status=ok
// SIG undefined FUN_141547d90(void)

void FUN_141547d90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0ca0 != 0) {
      FUN_1439f44f0(&DAT_1464a0ca0);
    }
    lVar1 = (**(code **)(DAT_1468a6230 + 0xb8))(&DAT_1468a6230,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415324d0(param_1);
  }
  return;
}



// FUNCTION 141547e60 FUN_141547e60 body=195 status=ok
// SIG undefined FUN_141547e60(void)

void FUN_141547e60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0cb8 != 0) {
      FUN_1439f44f0(&DAT_1464a0cb8);
    }
    lVar1 = (**(code **)(DAT_1468a6250 + 0xb8))(&DAT_1468a6250,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415324d0(param_1);
  }
  return;
}



// FUNCTION 141547f30 FUN_141547f30 body=166 status=ok
// SIG undefined FUN_141547f30(void)

void FUN_141547f30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141547090();
    if (DAT_1464a0cd0 != 0) {
      FUN_1439f44f0(&DAT_1464a0cd0);
    }
    lVar1 = (**(code **)(DAT_1468a6270 + 0xb8))(&DAT_1468a6270,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154a910(param_1);
  }
  return;
}



// FUNCTION 141547fe0 FUN_141547fe0 body=166 status=ok
// SIG undefined FUN_141547fe0(void)

void FUN_141547fe0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141547150();
    if (DAT_1464a0e00 != 0) {
      FUN_1439f44f0(&DAT_1464a0e00);
    }
    lVar1 = (**(code **)(DAT_1468a62f0 + 0xb8))(&DAT_1468a62f0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154ab30(param_1);
  }
  return;
}



// FUNCTION 141548090 FUN_141548090 body=198 status=ok
// SIG undefined FUN_141548090(void)

void FUN_141548090(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0cf0 != 0) {
      FUN_1439f44f0(&DAT_1464a0cf0);
    }
    lVar1 = (**(code **)(DAT_1468a6340 + 0xb8))(&DAT_1468a6340,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14154acf0(param_1);
  }
  return;
}



// FUNCTION 141548160 FUN_141548160 body=4 status=ok
// SIG undefined FUN_141548160(void)

undefined4 FUN_141548160(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 141548170 GetFoliageQuality body=4 status=ok
// SIG undefined GetFoliageQuality(void)

undefined4 UGameUserSettings::GetFoliageQuality(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// FUNCTION 141548180 FUN_141548180 body=40 status=ok
// SIG undefined FUN_141548180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548180(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a63e8;
  *param_2 = _DAT_1468a63e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415481b0 FUN_1415481b0 body=40 status=ok
// SIG undefined FUN_1415481b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415481b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a63c8;
  *param_2 = _DAT_1468a63c0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415481e0 FUN_1415481e0 body=40 status=ok
// SIG undefined FUN_1415481e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415481e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6428;
  *param_2 = _DAT_1468a6420;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548210 FUN_141548210 body=40 status=ok
// SIG undefined FUN_141548210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548210(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6438;
  *param_2 = _DAT_1468a6430;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548240 FUN_141548240 body=40 status=ok
// SIG undefined FUN_141548240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548240(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6378;
  *param_2 = _DAT_1468a6370;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548270 FUN_141548270 body=40 status=ok
// SIG undefined FUN_141548270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548270(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6388;
  *param_2 = _DAT_1468a6380;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415482a0 FUN_1415482a0 body=40 status=ok
// SIG undefined FUN_1415482a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415482a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a63d8;
  *param_2 = _DAT_1468a63d0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415482d0 FUN_1415482d0 body=40 status=ok
// SIG undefined FUN_1415482d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415482d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6408;
  *param_2 = _DAT_1468a6400;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548300 FUN_141548300 body=40 status=ok
// SIG undefined FUN_141548300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548300(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6418;
  *param_2 = _DAT_1468a6410;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548330 FUN_141548330 body=40 status=ok
// SIG undefined FUN_141548330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548330(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a63f8;
  *param_2 = _DAT_1468a63f0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548360 FUN_141548360 body=40 status=ok
// SIG undefined FUN_141548360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548360(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6398;
  *param_2 = _DAT_1468a6390;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548390 FUN_141548390 body=40 status=ok
// SIG undefined FUN_141548390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548390(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a63a8;
  *param_2 = _DAT_1468a63a0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415483c0 FUN_1415483c0 body=40 status=ok
// SIG undefined FUN_1415483c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415483c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a63b8;
  *param_2 = _DAT_1468a63b0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415483f0 FUN_1415483f0 body=40 status=ok
// SIG undefined FUN_1415483f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415483f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6468;
  *param_2 = _DAT_1468a6460;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548420 FUN_141548420 body=40 status=ok
// SIG undefined FUN_141548420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548420(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6488;
  *param_2 = _DAT_1468a6480;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548450 FUN_141548450 body=40 status=ok
// SIG undefined FUN_141548450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548450(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6458;
  *param_2 = _DAT_1468a6450;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548480 FUN_141548480 body=40 status=ok
// SIG undefined FUN_141548480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141548480(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6478;
  *param_2 = _DAT_1468a6470;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415484b0 FUN_1415484b0 body=40 status=ok
// SIG undefined FUN_1415484b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415484b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6448;
  *param_2 = _DAT_1468a6440;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415484e0 FUN_1415484e0 body=40 status=ok
// SIG undefined FUN_1415484e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415484e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0e20);
  uVar1 = uRam00000001468a6368;
  *param_2 = _DAT_1468a6360;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141548510 FUN_141548510 body=760 status=ok
// SIG undefined FUN_141548510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141548510(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar10 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar9 | 0x80;
      param_2 = pbVar10;
    }
    *pbVar10 = bVar9;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)(param_1 + 0x4c),param_2);
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    param_2 = (byte *)FUN_141514ca0(3,*(char *)(param_1 + 0x4d),param_2);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x50) != 0) {
    *param_2 = 0x20;
    while( true ) {
      param_2 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar9 | 0x80;
    }
    *param_2 = bVar9;
    param_2 = param_2 + 1;
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) != 0) {
    *param_2 = 0x28;
    while( true ) {
      param_2 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar9 | 0x80;
    }
    *param_2 = bVar9;
    param_2 = param_2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar12 * 8);
      *param_2 = 0x32;
      uVar7 = *(uint *)(lVar3 + 0x1c);
      pbVar10 = param_2;
      while( true ) {
        pbVar5 = pbVar10 + 1;
        bVar9 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar5 = bVar9 | 0x80;
        pbVar10 = pbVar5;
      }
      *pbVar5 = bVar9;
      param_2 = pbVar10 + 2;
      uVar6 = (ulonglong)*(int *)(lVar3 + 0x18);
      if (*(int *)(lVar3 + 0x18) != 0) {
        *param_2 = 8;
        pbVar10 = pbVar10 + 3;
        for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
          *pbVar10 = (byte)uVar6 | 0x80;
          pbVar10 = pbVar10 + 1;
        }
        *pbVar10 = (byte)uVar6;
        param_2 = pbVar10 + 1;
      }
      plVar8 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                      "OakSave.ChallengeStatSaveGameData.challenge_stat_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  plVar8 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.ChallengeSaveGameData.challenge_class_path"
                 );
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *param_2 = 0x3a;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x42;
      uVar12 = *(uint *)(lVar3 + 0x14);
      pbVar10 = param_2;
      while( true ) {
        pbVar5 = pbVar10 + 1;
        bVar9 = (byte)uVar12;
        if (uVar12 < 0x80) break;
        uVar12 = uVar12 >> 7;
        *pbVar5 = bVar9 | 0x80;
        pbVar10 = pbVar5;
      }
      *pbVar5 = bVar9;
      param_2 = pbVar10 + 2;
      if (*(char *)(lVar3 + 0x10) != '\0') {
        *param_2 = 8;
        pbVar10[3] = 1;
        param_2 = pbVar10 + 4;
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 141548810 FUN_141548810 body=185 status=ok
// SIG undefined FUN_141548810(void)

byte * FUN_141548810(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.ChallengeStatSaveGameData.challenge_stat_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 1415488d0 FUN_1415488d0 body=148 status=ok
// SIG undefined FUN_1415488d0(void)

undefined1 * FUN_1415488d0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersDecorationItemSaveGameData.decoration_item_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 141548970 FUN_141548970 body=148 status=ok
// SIG undefined FUN_141548970(void)

undefined1 * FUN_141548970(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersRoomItemSaveGameData.room_item_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 141548a10 FUN_141548a10 body=185 status=ok
// SIG undefined FUN_141548a10(void)

byte * FUN_141548a10(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.GameStatSaveGameData.stat_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 141548ad0 FUN_141548ad0 body=148 status=ok
// SIG undefined FUN_141548ad0(void)

byte * FUN_141548ad0(longlong param_1,byte *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar1 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar1;
      if (uVar4 < 0x80) break;
      uVar1 = uVar1 >> 7;
      *param_2 = bVar3 | 0x80;
      uVar4 = (uint)uVar1;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar1 = (ulonglong)*(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar1;
      if (uVar1 < 0x80) break;
      uVar1 = uVar1 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return pbVar2;
  }
  return param_2;
}



// FUNCTION 141548b70 FUN_141548b70 body=69 status=ok
// SIG undefined FUN_141548b70(void)

undefined8 FUN_141548b70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    param_2 = FUN_141514ca0(1,*(char *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar1 = FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return uVar1;
  }
  return param_2;
}



// FUNCTION 141548bc0 FUN_141548bc0 body=148 status=ok
// SIG undefined FUN_141548bc0(void)

undefined1 * FUN_141548bc0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCustomizationSaveGameData.customization_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 141548c60 FUN_141548c60 body=118 status=ok
// SIG undefined FUN_141548c60(void)

byte * FUN_141548c60(longlong param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar2 = param_2 + 1;
      bVar3 = (byte)uVar1;
      if (uVar1 < 0x80) break;
      uVar1 = uVar1 >> 7;
      *pbVar2 = bVar3 | 0x80;
      param_2 = pbVar2;
    }
    *pbVar2 = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)(param_1 + 0x14),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  return pbVar2;
}



// FUNCTION 141548ce0 FUN_141548ce0 body=640 status=ok
// SIG undefined FUN_141548ce0(void)

byte * FUN_141548ce0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x40);
  if (uVar7 != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.sender_display_name");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.subject");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.body");
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.gear_serial_number");
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x2a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.mail_guid");
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 0x32;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar5 = *(ulonglong *)(param_1 + 0x48);
  if (uVar5 != 0) {
    *param_2 = 0x38;
    while( true ) {
      pbVar3 = param_2 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar3 = bVar4 | 0x80;
      param_2 = pbVar3;
    }
    *pbVar3 = bVar4;
    param_2 = param_2 + 2;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x50);
  if (uVar5 != 0) {
    *param_2 = 0x40;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x38);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.from_player_id");
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *param_2 = 0x4a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    param_2 = (byte *)FUN_141514ca0(10,*(char *)(param_1 + 0x44),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar3 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return pbVar3;
}



// FUNCTION 141548f60 FUN_141548f60 body=185 status=ok
// SIG undefined FUN_141548f60(void)

byte * FUN_141548f60(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.OakSDUSaveGameData.sdu_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 141549020 FUN_141549020 body=225 status=ok
// SIG undefined FUN_141549020(void)

byte * FUN_141549020(longlong param_1,byte *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = (ulonglong)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar1;
      if (uVar1 < 0x80) break;
      uVar1 = uVar1 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (byte *)FUN_141514ca0(3,*(char *)(param_1 + 0x18),param_2);
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    param_2 = (byte *)FUN_141514ca0(4,*(char *)(param_1 + 0x19),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return pbVar2;
  }
  return param_2;
}



// FUNCTION 141549110 FUN_141549110 body=349 status=ok
// SIG undefined FUN_141549110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141549110(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar6 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.RegisteredDownloadableEntitlements.entitlement_source_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  iVar4 = FUN_1439f2ae0(param_1 + 0x10);
  uVar11 = 0;
  if (0 < iVar4) {
    *param_2 = 0x12;
    uVar8 = *(uint *)(param_1 + 0x20);
    uVar12 = (ulonglong)uVar8;
    while( true ) {
      pbVar3 = param_2 + 1;
      bVar7 = (byte)uVar12;
      if (uVar8 < 0x80) break;
      uVar12 = uVar12 >> 7;
      *pbVar3 = bVar7 | 0x80;
      uVar8 = (uint)uVar12;
      param_2 = pbVar3;
    }
    *pbVar3 = bVar7;
    param_2 = param_2 + 2;
    iVar4 = FUN_1439f2ae0(param_1 + 0x10);
    lVar5 = FUN_1405b74e0(param_1 + 0x10);
    uVar12 = uVar11;
    do {
      for (uVar9 = *(ulonglong *)(lVar5 + uVar12 * 8); 0x7f < uVar9; uVar9 = uVar9 >> 7) {
        *param_2 = (byte)uVar9 | 0x80;
        param_2 = param_2 + 1;
      }
      *param_2 = (byte)uVar9;
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)uVar12 < (longlong)iVar4);
  }
  uVar8 = *(uint *)(param_1 + 0x30);
  if (uVar8 != 0) {
    do {
      param_2 = (byte *)FUN_1415445a0(3,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x38) + 8 +
                                         (longlong)(int)uVar11 * 8),param_2);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < uVar8);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 141549310 FUN_141549310 body=686 status=ok
// SIG undefined FUN_141549310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141549310(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar8 = *(uint *)(param_1 + 0x60);
  if (uVar8 != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x58);
  if (uVar4 != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar7 = 0;
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      param_2 = (byte *)FUN_1415446d0(4,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x20) + 8 +
                                         (longlong)(int)uVar6 * 8),param_2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  uVar8 = *(uint *)(param_1 + 0x30);
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      param_2 = (byte *)FUN_1415446d0(5,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x38) + 8 +
                                         (longlong)(int)uVar6 * 8),param_2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) != 0) {
    *param_2 = 0x38;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar8 = *(uint *)(param_1 + 0x68);
  if (uVar8 != 0) {
    *param_2 = 0x40;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar3 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *pbVar5 = bVar3 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar3;
    param_2 = param_2 + 2;
  }
  uVar8 = *(uint *)(param_1 + 0x6c);
  if (uVar8 != 0) {
    *param_2 = 0x48;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar3 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *pbVar5 = bVar3 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar3;
    param_2 = param_2 + 2;
  }
  uVar8 = *(uint *)(param_1 + 0x48);
  if (uVar8 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)(int)uVar7 * 8);
      *param_2 = 0x52;
      uVar6 = *(uint *)(lVar1 + 0x18);
      pbVar5 = param_2;
      while( true ) {
        pbVar2 = pbVar5 + 1;
        bVar3 = (byte)uVar6;
        if (uVar6 < 0x80) break;
        uVar6 = uVar6 >> 7;
        *pbVar2 = bVar3 | 0x80;
        pbVar5 = pbVar2;
      }
      *pbVar2 = bVar3;
      param_2 = pbVar5 + 2;
      uVar4 = (ulonglong)*(int *)(lVar1 + 0x10);
      if (*(int *)(lVar1 + 0x10) != 0) {
        *param_2 = 8;
        pbVar5 = pbVar5 + 3;
        for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *pbVar5 = (byte)uVar4 | 0x80;
          pbVar5 = pbVar5 + 1;
        }
        *pbVar5 = (byte)uVar4;
        param_2 = pbVar5 + 1;
      }
      uVar6 = *(uint *)(lVar1 + 0x14);
      if (uVar6 != 0) {
        *param_2 = 0x10;
        while( true ) {
          pbVar5 = param_2 + 1;
          bVar3 = (byte)uVar6;
          if (uVar6 < 0x80) break;
          uVar6 = uVar6 >> 7;
          *pbVar5 = bVar3 | 0x80;
          param_2 = pbVar5;
        }
        *pbVar5 = bVar3;
        param_2 = param_2 + 2;
      }
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1415495c0 FUN_1415495c0 body=589 status=ok
// SIG undefined FUN_1415495c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_1415495c0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar9 = *(uint *)(param_1 + 0x40);
  if (uVar9 != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != 0) {
    *param_2 = 0x18;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) != 0) {
    *param_2 = 0x20;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar9 = *(uint *)(param_1 + 0x18);
  uVar8 = 0;
  uVar7 = 0;
  if (uVar9 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar7 * 8);
      *param_2 = 0x2a;
      uVar5 = *(uint *)(lVar1 + 0x18);
      pbVar6 = param_2;
      while( true ) {
        pbVar2 = pbVar6 + 1;
        bVar3 = (byte)uVar5;
        if (uVar5 < 0x80) break;
        uVar5 = uVar5 >> 7;
        *pbVar2 = bVar3 | 0x80;
        pbVar6 = pbVar2;
      }
      *pbVar2 = bVar3;
      param_2 = pbVar6 + 2;
      uVar4 = (ulonglong)*(int *)(lVar1 + 0x10);
      if (*(int *)(lVar1 + 0x10) != 0) {
        *param_2 = 8;
        pbVar6 = pbVar6 + 3;
        for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *pbVar6 = (byte)uVar4 | 0x80;
          pbVar6 = pbVar6 + 1;
        }
        *pbVar6 = (byte)uVar4;
        param_2 = pbVar6 + 1;
      }
      uVar5 = *(uint *)(lVar1 + 0x14);
      if (uVar5 != 0) {
        *param_2 = 0x10;
        while( true ) {
          pbVar6 = param_2 + 1;
          bVar3 = (byte)uVar5;
          if (uVar5 < 0x80) break;
          uVar5 = uVar5 >> 7;
          *pbVar6 = bVar3 | 0x80;
          param_2 = pbVar6;
        }
        *pbVar6 = bVar3;
        param_2 = param_2 + 2;
      }
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x30);
  if (uVar9 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar8 * 8);
      *param_2 = 0x32;
      uVar7 = *(uint *)(lVar1 + 0x70);
      while( true ) {
        pbVar6 = param_2 + 1;
        bVar3 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar6 = bVar3 | 0x80;
        param_2 = pbVar6;
      }
      *pbVar6 = bVar3;
      param_2 = (byte *)FUN_141549310(lVar1,param_2 + 2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 141549810 FUN_141549810 body=92 status=ok
// SIG undefined FUN_141549810(void)

undefined1 * FUN_141549810(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  undefined1 *puVar2;
  
  fVar1 = *(float *)(param_1 + 0x10);
  if (fVar1 != 0.0) {
    *param_2 = 0xd;
    *(float *)(param_2 + 1) = fVar1;
    param_2 = param_2 + 5;
  }
  fVar1 = *(float *)(param_1 + 0x14);
  if (fVar1 != 0.0) {
    *param_2 = 0x15;
    *(float *)(param_2 + 1) = fVar1;
    param_2 = param_2 + 5;
  }
  fVar1 = *(float *)(param_1 + 0x18);
  if (fVar1 != 0.0) {
    *param_2 = 0x1d;
    *(float *)(param_2 + 1) = fVar1;
    param_2 = param_2 + 5;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar2 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return puVar2;
  }
  return param_2;
}



// FUNCTION 141549870 FUN_141549870 body=97 status=ok
// SIG undefined FUN_141549870(void)

void FUN_141549870(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(char *)(param_2 + 0x10) = *(char *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1415498e0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14154a440(param_2,param_1);
  return;
}



// FUNCTION 1415498f0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14154a910(param_2,param_1);
  return;
}



// FUNCTION 141549900 FUN_141549900 body=386 status=ok
// SIG undefined FUN_141549900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141549900(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar6 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    local_38 = **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    FUN_1415447e0(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar6 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    local_38 = **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30);
    FUN_1415448b0(param_1 + 0x28,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x40);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x40), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x40);
    }
    else {
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_2 + 0x4c);
  }
  if (*(char *)(param_2 + 0x4d) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_2 + 0x4d);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  return;
}



// FUNCTION 141549a90 FUN_141549a90 body=156 status=ok
// SIG undefined FUN_141549a90(void)

void FUN_141549a90(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0d68 != 0) {
    FUN_1439f44f0(&DAT_1464a0d68);
  }
  lVar1 = (**(code **)(DAT_1468a5fc0 + 0xb8))(&DAT_1468a5fc0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141549900(param_1);
  return;
}



// FUNCTION 141549b30 FUN_141549b30 body=156 status=ok
// SIG undefined FUN_141549b30(void)

void FUN_141549b30(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0c40 != 0) {
    FUN_1439f44f0(&DAT_1464a0c40);
  }
  lVar1 = (**(code **)(DAT_1468a6020 + 0xb8))(&DAT_1468a6020,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 141549bd0 FUN_141549bd0 body=156 status=ok
// SIG undefined FUN_141549bd0(void)

void FUN_141549bd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0dd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0dd0);
  }
  lVar1 = (**(code **)(DAT_1468a6040 + 0xb8))(&DAT_1468a6040,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14152ff00(param_1);
  return;
}



// FUNCTION 141549c70 FUN_141549c70 body=156 status=ok
// SIG undefined FUN_141549c70(void)

void FUN_141549c70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0de8 != 0) {
    FUN_1439f44f0(&DAT_1464a0de8);
  }
  lVar1 = (**(code **)(DAT_1468a6060 + 0xb8))(&DAT_1468a6060,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14152ff00(param_1);
  return;
}



// FUNCTION 141549d10 FUN_141549d10 body=156 status=ok
// SIG undefined FUN_141549d10(void)

void FUN_141549d10(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0d08 != 0) {
    FUN_1439f44f0(&DAT_1464a0d08);
  }
  lVar1 = (**(code **)(DAT_1468a6080 + 0xb8))(&DAT_1468a6080,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 141549db0 FUN_141549db0 body=156 status=ok
// SIG undefined FUN_141549db0(void)

void FUN_141549db0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0d20 != 0) {
    FUN_1439f44f0(&DAT_1464a0d20);
  }
  lVar1 = (**(code **)(DAT_1468a60a0 + 0xb8))(&DAT_1468a60a0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_1415324d0(param_1);
  return;
}



// FUNCTION 141549e50 FUN_141549e50 body=97 status=ok
// SIG undefined FUN_141549e50(void)

void FUN_141549e50(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    *(char *)(param_1 + 0x10) = *(char *)(param_2 + 0x10);
  }
  return;
}



// FUNCTION 141549ec0 FUN_141549ec0 body=156 status=ok
// SIG undefined FUN_141549ec0(void)

void FUN_141549ec0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0c58 != 0) {
    FUN_1439f44f0(&DAT_1464a0c58);
  }
  lVar1 = (**(code **)(DAT_1468a60c0 + 0xb8))(&DAT_1468a60c0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141549e50(param_1);
  return;
}



// FUNCTION 141549f60 FUN_141549f60 body=156 status=ok
// SIG undefined FUN_141549f60(void)

void FUN_141549f60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0da0 != 0) {
    FUN_1439f44f0(&DAT_1464a0da0);
  }
  lVar1 = (**(code **)(DAT_1468a60d8 + 0xb8))(&DAT_1468a60d8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14152ff00(param_1);
  return;
}



// FUNCTION 14154a000 FUN_14154a000 body=107 status=ok
// SIG undefined FUN_14154a000(void)

void FUN_14154a000(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    *(char *)(param_1 + 0x14) = *(char *)(param_2 + 0x14);
  }
  return;
}



// FUNCTION 14154a070 FUN_14154a070 body=156 status=ok
// SIG undefined FUN_14154a070(void)

void FUN_14154a070(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0db8 != 0) {
    FUN_1439f44f0(&DAT_1464a0db8);
  }
  lVar1 = (**(code **)(DAT_1468a60f8 + 0xb8))(&DAT_1468a60f8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154a000(param_1);
  return;
}



// FUNCTION 14154a110 FUN_14154a110 body=485 status=ok
// SIG undefined FUN_14154a110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14154a110(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x18), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x18);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x20), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x20);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x30), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x30);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x38), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x38);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x44) != '\0') {
    *(char *)(param_1 + 0x44) = *(char *)(param_2 + 0x44);
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
  }
  return;
}



// FUNCTION 14154a300 FUN_14154a300 body=156 status=ok
// SIG undefined FUN_14154a300(void)

void FUN_14154a300(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0d88 != 0) {
    FUN_1439f44f0(&DAT_1464a0d88);
  }
  lVar1 = (**(code **)(DAT_1468a6120 + 0xb8))(&DAT_1468a6120,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154a110(param_1);
  return;
}



// FUNCTION 14154a3a0 FUN_14154a3a0 body=156 status=ok
// SIG undefined FUN_14154a3a0(void)

void FUN_14154a3a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0d38 != 0) {
    FUN_1439f44f0(&DAT_1464a0d38);
  }
  lVar1 = (**(code **)(DAT_1468a6180 + 0xb8))(&DAT_1468a6180,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 14154a440 FUN_14154a440 body=128 status=ok
// SIG undefined FUN_14154a440(void)

void FUN_14154a440(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(char *)(param_2 + 0x18) != '\0') {
    *(char *)(param_1 + 0x18) = *(char *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x19) != '\0') {
    *(char *)(param_1 + 0x19) = *(char *)(param_2 + 0x19);
  }
  return;
}



// FUNCTION 14154a4c0 FUN_14154a4c0 body=156 status=ok
// SIG undefined FUN_14154a4c0(void)

void FUN_14154a4c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0c70 != 0) {
    FUN_1439f44f0(&DAT_1464a0c70);
  }
  lVar1 = (**(code **)(DAT_1468a61a0 + 0xb8))(&DAT_1468a61a0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154a440(param_1);
  return;
}



// FUNCTION 14154a560 FUN_14154a560 body=298 status=ok
// SIG undefined FUN_14154a560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14154a560(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  FUN_1439f1f80(param_1 + 0x10,param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar6 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    local_38 = **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30);
    FUN_141544980(param_1 + 0x28,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x40);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x40), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x40);
      return;
    }
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
  }
  return;
}



// FUNCTION 14154a690 FUN_14154a690 body=156 status=ok
// SIG undefined FUN_14154a690(void)

void FUN_14154a690(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0d50 != 0) {
    FUN_1439f44f0(&DAT_1464a0d50);
  }
  lVar1 = (**(code **)(DAT_1468a61c0 + 0xb8))(&DAT_1468a61c0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154a560(param_1);
  return;
}



// FUNCTION 14154a730 FUN_14154a730 body=156 status=ok
// SIG undefined FUN_14154a730(void)

void FUN_14154a730(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0c88 != 0) {
    FUN_1439f44f0(&DAT_1464a0c88);
  }
  lVar1 = (**(code **)(DAT_1468a6210 + 0xb8))(&DAT_1468a6210,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_1415324d0(param_1);
  return;
}



// FUNCTION 14154a7d0 FUN_14154a7d0 body=156 status=ok
// SIG undefined FUN_14154a7d0(void)

void FUN_14154a7d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0ca0 != 0) {
    FUN_1439f44f0(&DAT_1464a0ca0);
  }
  lVar1 = (**(code **)(DAT_1468a6230 + 0xb8))(&DAT_1468a6230,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_1415324d0(param_1);
  return;
}



// FUNCTION 14154a870 FUN_14154a870 body=156 status=ok
// SIG undefined FUN_14154a870(void)

void FUN_14154a870(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0cb8 != 0) {
    FUN_1439f44f0(&DAT_1464a0cb8);
  }
  lVar1 = (**(code **)(DAT_1468a6250 + 0xb8))(&DAT_1468a6250,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_1415324d0(param_1);
  return;
}



// FUNCTION 14154a910 FUN_14154a910 body=369 status=ok
// SIG undefined FUN_14154a910(void)

void FUN_14154a910(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_141544bf0(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar5 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    FUN_141544bf0(param_1 + 0x28,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x50);
    uVar5 = FUN_1439f1d40(param_1 + 0x40,iVar1);
    FUN_141544a50(param_1 + 0x40,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar1;
    if (**(int **)(param_1 + 0x50) < *(int *)(param_1 + 0x48)) {
      **(int **)(param_1 + 0x50) = *(int *)(param_1 + 0x48);
    }
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  return;
}



// FUNCTION 14154aa90 FUN_14154aa90 body=156 status=ok
// SIG undefined FUN_14154aa90(void)

void FUN_14154aa90(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0cd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0cd0);
  }
  lVar1 = (**(code **)(DAT_1468a6270 + 0xb8))(&DAT_1468a6270,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154a910(param_1);
  return;
}



// FUNCTION 14154ab30 FUN_14154ab30 body=276 status=ok
// SIG undefined FUN_14154ab30(void)

void FUN_14154ab30(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_141544b20(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar5 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    FUN_141544cc0(param_1 + 0x28,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  return;
}



// FUNCTION 14154ac50 FUN_14154ac50 body=156 status=ok
// SIG undefined FUN_14154ac50(void)

void FUN_14154ac50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0e00 != 0) {
    FUN_1439f44f0(&DAT_1464a0e00);
  }
  lVar1 = (**(code **)(DAT_1468a62f0 + 0xb8))(&DAT_1468a62f0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154ab30(param_1);
  return;
}



// FUNCTION 14154acf0 FUN_14154acf0 body=134 status=ok
// SIG undefined FUN_14154acf0(void)

void FUN_14154acf0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(float *)(param_2 + 0x10) != 0.0) {
    *(float *)(param_1 + 0x10) = *(float *)(param_2 + 0x10);
  }
  if (*(float *)(param_2 + 0x14) != 0.0) {
    *(float *)(param_1 + 0x14) = *(float *)(param_2 + 0x14);
  }
  if (*(float *)(param_2 + 0x18) != 0.0) {
    *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 14154ad80 FUN_14154ad80 body=156 status=ok
// SIG undefined FUN_14154ad80(void)

void FUN_14154ad80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0cf0 != 0) {
    FUN_1439f44f0(&DAT_1464a0cf0);
  }
  lVar1 = (**(code **)(DAT_1468a6340 + 0xb8))(&DAT_1468a6340,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14154acf0(param_1);
  return;
}



// FUNCTION 14154ae20 FUN_14154ae20 body=1032 status=ok
// SIG undefined FUN_14154ae20(void)

ulonglong FUN_14154ae20(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int *piVar12;
  undefined *puVar13;
  char cVar14;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  longlong local_38;
  char local_30;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar10 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar10 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      *param_2 = pbVar4 + 1;
LAB_14154ae76:
      uVar5 = (int)(uVar10 >> 3) - 1;
      uVar7 = (ulonglong)uVar5;
      if (7 < uVar5) goto LAB_14154b1d1;
      uVar7 = (ulonglong)(int)uVar5;
      cVar14 = (char)uVar10;
      switch(uVar5) {
      case 0:
        if (cVar14 != '\b') goto LAB_14154b1d1;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x48);
        break;
      case 1:
        if (cVar14 != '\x10') goto LAB_14154b1d1;
        uVar7 = FUN_1414ff1c0(param_2,param_1 + 0x4c);
        break;
      case 2:
        if (cVar14 != '\x18') goto LAB_14154b1d1;
        uVar7 = FUN_1414ff1c0(param_2,param_1 + 0x4d);
        break;
      case 3:
        if (cVar14 != ' ') goto LAB_14154b1d1;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x50);
        break;
      case 4:
        if (cVar14 != '(') goto LAB_14154b1d1;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x54);
        break;
      case 5:
        if (cVar14 != '2') goto LAB_14154b1d1;
        piVar12 = *(int **)(param_1 + 0x20);
        if (piVar12 == (int *)0x0) {
LAB_14154af4b:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar12 = *(int **)(param_1 + 0x20);
          iVar6 = *piVar12;
LAB_14154af5f:
          *piVar12 = iVar6 + 1;
          uVar8 = FUN_141543c30(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar8;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar6 = *piVar12;
          if (iVar6 <= iVar3) {
            if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_14154af4b;
            goto LAB_14154af5f;
          }
          uVar8 = *(undefined8 *)(piVar12 + (longlong)iVar3 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar3 + 1;
        }
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
          *param_2 = pbVar4 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          if ((int)uVar7 < 0) goto LAB_14154b202;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res10);
        if ((local_res14 < 0) || (uVar7 = FUN_14154b250(uVar8,param_2), (char)uVar7 == '\0'))
        goto LAB_14154b202;
        uVar7 = FUN_1439f84b0(param_2,local_res10);
        break;
      case 6:
        if (cVar14 != ':') goto LAB_14154b1d1;
        puVar13 = *(undefined **)(param_1 + 0x40);
        if (puVar13 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x40,&DAT_146ba2f50);
          puVar13 = *(undefined **)(param_1 + 0x40);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar13);
        if ((char)uVar7 == '\0') goto LAB_14154b202;
        plVar11 = *(longlong **)(param_1 + 0x40);
        puVar1 = (ulonglong *)(plVar11 + 2);
        if (0xf < (ulonglong)plVar11[3]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar7 = FUN_1439fa7f0(plVar11,*puVar1 & 0xffffffff,0,
                              "OakSave.ChallengeSaveGameData.challenge_class_path");
        break;
      case 7:
        if (cVar14 != 'B') goto LAB_14154b1d1;
        piVar12 = *(int **)(param_1 + 0x38);
        if (piVar12 == (int *)0x0) {
LAB_14154b076:
          FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
          piVar12 = *(int **)(param_1 + 0x38);
          iVar6 = *piVar12;
LAB_14154b08a:
          *piVar12 = iVar6 + 1;
          lVar9 = FUN_141543f60(*(undefined8 *)(param_1 + 0x28));
          *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8)
               = lVar9;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x30);
          iVar6 = *piVar12;
          if (iVar6 <= iVar3) {
            if (iVar6 == *(int *)(param_1 + 0x34)) goto LAB_14154b076;
            goto LAB_14154b08a;
          }
          lVar9 = *(longlong *)(piVar12 + (longlong)iVar3 * 2 + 2);
          *(int *)(param_1 + 0x30) = iVar3 + 1;
        }
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (uVar10 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
          *param_2 = pbVar4 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          uVar10 = uVar7 & 0xffffffff;
          if ((int)uVar7 < 0) goto LAB_14154b202;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res18,uVar10);
        if (local_res1c < 0) goto LAB_14154b202;
LAB_14154b0f3:
        while( true ) {
          pbVar4 = (byte *)*param_2;
          uVar10 = 0;
          if (((byte *)param_2[1] <= pbVar4) ||
             (uVar10 = (ulonglong)*pbVar4, (char)*pbVar4 < '\x01')) break;
          *param_2 = pbVar4 + 1;
LAB_14154b121:
          if (((int)(uVar10 >> 3) != 1) || ((char)uVar10 != '\b')) goto LAB_14154b181;
          pbVar4 = (byte *)*param_2;
          if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
            *param_2 = pbVar4 + 1;
            *(bool *)(lVar9 + 0x10) = bVar2 != 0;
          }
          else {
            uVar7 = FUN_1439f8f00(param_2,&local_38);
            if (local_30 == '\0') goto LAB_14154b202;
            *(bool *)(lVar9 + 0x10) = local_38 != 0;
          }
        }
        uVar5 = FUN_1439f8c60(param_2,uVar10);
        uVar10 = (ulonglong)uVar5;
        if (uVar5 - 1 < 0x7f) goto LAB_14154b121;
LAB_14154b181:
        if ((int)uVar10 != 0) {
          if ((*(byte *)(lVar9 + 8) & 1) == 0) {
            uVar7 = FUN_141515d60();
          }
          else {
            uVar7 = *(ulonglong *)(lVar9 + 8) & 0xfffffffffffffffe;
          }
          uVar10 = FUN_143a1e1e0(param_2,uVar10,uVar7);
          if ((char)uVar10 == '\0') {
            return uVar10;
          }
          goto LAB_14154b0f3;
        }
        uVar7 = FUN_1439f84b0(param_2,local_res18);
      }
    }
    else {
      uVar5 = FUN_1439f8c60(param_2,uVar10);
      uVar10 = (ulonglong)uVar5;
      uVar7 = (ulonglong)(uVar5 - 1);
      if (uVar5 - 1 < 0x7f) goto LAB_14154ae76;
LAB_14154b1d1:
      if ((int)uVar10 == 0) {
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar7 = FUN_143a1e1e0(param_2,uVar10);
    }
  } while ((char)uVar7 != '\0');
LAB_14154b202:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 14154b250 FUN_14154b250 body=331 status=ok
// SIG undefined FUN_14154b250(void)

ulonglong FUN_14154b250(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_14154b271:
  do {
    pbVar3 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_14154b2a2:
      iVar2 = (int)(uVar4 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar4 != '\b') goto LAB_14154b34f;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_14154b380;
          *(int *)(param_1 + 0x18) = (int)uVar4;
        }
        goto LAB_14154b271;
      }
      if ((iVar2 != 2) || ((char)uVar4 != '\x12')) goto LAB_14154b34f;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_14154b380;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar4 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.ChallengeStatSaveGameData.challenge_stat_path");
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar6;
      pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_14154b2a2;
LAB_14154b34f:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    }
    if ((char)uVar4 == '\0') {
LAB_14154b380:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154b3a0 FUN_14154b3a0 body=348 status=ok
// SIG undefined FUN_14154b3a0(void)

ulonglong FUN_14154b3a0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong local_18;
  char local_10;
  
LAB_14154b3c1:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14154b3f2:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 == 1) {
        if ((char)uVar6 != '\b') goto LAB_14154b4b0;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14154b4e1;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_14154b3c1;
      }
      if ((iVar3 != 2) || ((char)uVar6 != '\x12')) goto LAB_14154b4b0;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar6 == '\0') goto LAB_14154b4e1;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.CrewQuartersDecorationItemSaveGameData.decoration_item_asset_path"
                           );
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_14154b3f2;
LAB_14154b4b0:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
    if ((char)uVar6 == '\0') {
LAB_14154b4e1:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154b500 FUN_14154b500 body=348 status=ok
// SIG undefined FUN_14154b500(void)

ulonglong FUN_14154b500(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong local_18;
  char local_10;
  
LAB_14154b521:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14154b552:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 == 1) {
        if ((char)uVar6 != '\b') goto LAB_14154b610;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14154b641;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_14154b521;
      }
      if ((iVar3 != 2) || ((char)uVar6 != '\x12')) goto LAB_14154b610;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar6 == '\0') goto LAB_14154b641;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.CrewQuartersRoomItemSaveGameData.room_item_asset_path");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_14154b552;
LAB_14154b610:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
    if ((char)uVar6 == '\0') {
LAB_14154b641:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154b660 FUN_14154b660 body=331 status=ok
// SIG undefined FUN_14154b660(void)

ulonglong FUN_14154b660(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_14154b681:
  do {
    pbVar3 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_14154b6b2:
      iVar2 = (int)(uVar4 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar4 != '\b') goto LAB_14154b75f;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_14154b790;
          *(int *)(param_1 + 0x18) = (int)uVar4;
        }
        goto LAB_14154b681;
      }
      if ((iVar2 != 2) || ((char)uVar4 != '\x12')) goto LAB_14154b75f;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_14154b790;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar4 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,"OakSave.GameStatSaveGameData.stat_path");
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar6;
      pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_14154b6b2;
LAB_14154b75f:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    }
    if ((char)uVar4 == '\0') {
LAB_14154b790:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154b7b0 FUN_14154b7b0 body=325 status=ok
// SIG undefined FUN_14154b7b0(void)

ulonglong FUN_14154b7b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  
LAB_14154b7c5:
  do {
    while( true ) {
      pbVar3 = (byte *)*param_2;
      uVar4 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3))
      break;
      uVar2 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14154b7f7;
LAB_14154b8a0:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
      if ((char)uVar4 == '\0') {
LAB_14154b8d1:
        return uVar4 & 0xffffffffffffff00;
      }
    }
    pbVar3 = pbVar3 + 1;
    *param_2 = (longlong)pbVar3;
LAB_14154b7f7:
    iVar1 = (int)(uVar4 >> 3);
    if (iVar1 != 1) {
      if ((iVar1 != 2) || ((char)uVar4 != '\x10')) goto LAB_14154b8a0;
      pbVar3 = (byte *)*param_2;
      bVar6 = 0;
      if (pbVar3 < (byte *)param_2[1]) {
        bVar6 = *pbVar3;
        if (bVar6 < 0x80) {
          *param_2 = (longlong)(pbVar3 + 1);
          *(uint *)(param_1 + 0x14) = (uint)bVar6;
          goto LAB_14154b7c5;
        }
      }
      uVar4 = FUN_1439f8e20(param_2,bVar6);
      if ((longlong)uVar4 < 0) goto LAB_14154b8d1;
      *(int *)(param_1 + 0x14) = (int)uVar4;
      goto LAB_14154b7c5;
    }
    if ((char)uVar4 != '\b') goto LAB_14154b8a0;
    bVar6 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar6 = *(byte *)*param_2;
      if (bVar6 < 0x80) {
        *(uint *)(param_1 + 0x10) = (uint)bVar6;
        *param_2 = *param_2 + 1;
        goto LAB_14154b7c5;
      }
    }
    uVar4 = FUN_1439f8e20(param_2,bVar6);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if ((longlong)uVar4 < 0) {
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154b900 FUN_14154b900 body=244 status=ok
// SIG undefined FUN_14154b900(void)

ulonglong FUN_14154b900(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_18;
  char local_10;
  
LAB_14154b915:
  do {
    pbVar3 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_14154b943:
      if (((int)(uVar4 >> 3) == 1) && ((char)uVar4 == '\b')) {
        pbVar3 = (byte *)*param_2;
        if ((pbVar3 < (byte *)param_2[1]) && (bVar1 = *pbVar3, bVar1 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(bool *)(param_1 + 0x10) = bVar1 != 0;
        }
        else {
          uVar4 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14154b9d0;
          *(bool *)(param_1 + 0x10) = local_18 != 0;
        }
        goto LAB_14154b915;
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14154b943;
    }
    if ((int)uVar4 == 0) {
      return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    if ((char)uVar4 == '\0') {
LAB_14154b9d0:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154ba00 FUN_14154ba00 body=348 status=ok
// SIG undefined FUN_14154ba00(void)

ulonglong FUN_14154ba00(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong local_18;
  char local_10;
  
LAB_14154ba21:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14154ba52:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 == 1) {
        if ((char)uVar6 != '\b') goto LAB_14154bb10;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14154bb41;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_14154ba21;
      }
      if ((iVar3 != 2) || ((char)uVar6 != '\x12')) goto LAB_14154bb10;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar6 == '\0') goto LAB_14154bb41;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.OakCustomizationSaveGameData.customization_asset_path");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_14154ba52;
LAB_14154bb10:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
    if ((char)uVar6 == '\0') {
LAB_14154bb41:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154bb60 FUN_14154bb60 body=342 status=ok
// SIG undefined FUN_14154bb60(void)

ulonglong FUN_14154bb60(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong local_18;
  char local_10;
  
LAB_14154bb75:
  do {
    while( true ) {
      pbVar3 = (byte *)*param_2;
      uVar4 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3))
      break;
      uVar2 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14154bba7;
LAB_14154bc61:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
      if ((char)uVar4 == '\0') {
LAB_14154bc92:
        return uVar4 & 0xffffffffffffff00;
      }
    }
    pbVar3 = pbVar3 + 1;
    *param_2 = (longlong)pbVar3;
LAB_14154bba7:
    iVar1 = (int)(uVar4 >> 3);
    if (iVar1 != 1) {
      if ((iVar1 != 2) || ((char)uVar4 != '\x10')) goto LAB_14154bc61;
      pbVar3 = (byte *)*param_2;
      if ((pbVar3 < (byte *)param_2[1]) && (bVar6 = *pbVar3, bVar6 < 0x80)) {
        *param_2 = (longlong)(pbVar3 + 1);
        *(bool *)(param_1 + 0x14) = bVar6 != 0;
      }
      else {
        uVar4 = FUN_1439f8f00(param_2,&local_18);
        if (local_10 == '\0') goto LAB_14154bc92;
        *(bool *)(param_1 + 0x14) = local_18 != 0;
      }
      goto LAB_14154bb75;
    }
    if ((char)uVar4 != '\b') goto LAB_14154bc61;
    bVar6 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar6 = *(byte *)*param_2;
      if (bVar6 < 0x80) {
        *(uint *)(param_1 + 0x10) = (uint)bVar6;
        *param_2 = *param_2 + 1;
        goto LAB_14154bb75;
      }
    }
    uVar4 = FUN_1439f8e20(param_2,bVar6);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if ((longlong)uVar4 < 0) {
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154bcc0 FUN_14154bcc0 body=832 status=ok
// SIG undefined FUN_14154bcc0(void)

ulonglong FUN_14154bcc0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  
  do {
    pbVar2 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      *param_2 = pbVar2 + 1;
LAB_14154bd21:
      uVar3 = (int)(uVar5 >> 3) - 1;
      uVar4 = (ulonglong)uVar3;
      if (9 < uVar3) goto LAB_14154bfae;
      uVar4 = (ulonglong)(int)uVar3;
      cVar8 = (char)uVar5;
      switch(uVar3) {
      case 0:
        if (cVar8 != '\b') goto LAB_14154bfae;
        uVar5 = FUN_1414ff0e0(param_2,param_1 + 0x40);
        break;
      case 1:
        if (cVar8 != '\x12') goto LAB_14154bfae;
        puVar7 = *(undefined **)(param_1 + 0x10);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14154bfdf;
        plVar6 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakMailItem.sender_display_name");
        break;
      case 2:
        if (cVar8 != '\x1a') goto LAB_14154bfae;
        puVar7 = *(undefined **)(param_1 + 0x18);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14154bfdf;
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.OakMailItem.subject");
        break;
      case 3:
        if (cVar8 != '\"') goto LAB_14154bfae;
        puVar7 = *(undefined **)(param_1 + 0x20);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x20,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x20);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14154bfdf;
        plVar6 = *(longlong **)(param_1 + 0x20);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.OakMailItem.body");
        break;
      case 4:
        if (cVar8 != '*') goto LAB_14154bfae;
        puVar7 = *(undefined **)(param_1 + 0x28);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x28);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14154bfdf;
        plVar6 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.OakMailItem.gear_serial_number"
                             );
        break;
      case 5:
        if (cVar8 != '2') goto LAB_14154bfae;
        puVar7 = *(undefined **)(param_1 + 0x30);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x30,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x30);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14154bfdf;
        plVar6 = *(longlong **)(param_1 + 0x30);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.OakMailItem.mail_guid");
        break;
      case 6:
        if (cVar8 != '8') goto LAB_14154bfae;
        uVar5 = FUN_1414ff170(param_2,param_1 + 0x48);
        break;
      case 7:
        if (cVar8 != '@') goto LAB_14154bfae;
        uVar5 = FUN_1414ff170(param_2,param_1 + 0x50);
        break;
      case 8:
        if (cVar8 != 'J') goto LAB_14154bfae;
        puVar7 = *(undefined **)(param_1 + 0x38);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x38,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x38);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14154bfdf;
        plVar6 = *(longlong **)(param_1 + 0x38);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.OakMailItem.from_player_id");
        break;
      case 9:
        if (cVar8 != 'P') goto LAB_14154bfae;
        uVar5 = FUN_1414ff1c0(param_2,param_1 + 0x44);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      uVar4 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14154bd21;
LAB_14154bfae:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
  } while ((char)uVar5 != '\0');
LAB_14154bfdf:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14154c030 FUN_14154c030 body=331 status=ok
// SIG undefined FUN_14154c030(void)

ulonglong FUN_14154c030(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_14154c051:
  do {
    pbVar3 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_14154c082:
      iVar2 = (int)(uVar4 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar4 != '\b') goto LAB_14154c12f;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_14154c160;
          *(int *)(param_1 + 0x18) = (int)uVar4;
        }
        goto LAB_14154c051;
      }
      if ((iVar2 != 2) || ((char)uVar4 != '\x12')) goto LAB_14154c12f;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_14154c160;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar4 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,"OakSave.OakSDUSaveGameData.sdu_data_path"
                           );
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar6;
      pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_14154c082;
LAB_14154c12f:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    }
    if ((char)uVar4 == '\0') {
LAB_14154c160:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154c180 FUN_14154c180 body=528 status=ok
// SIG undefined FUN_14154c180(void)

ulonglong FUN_14154c180(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  longlong local_28;
  char local_20;
  longlong local_18;
  char local_10;
  
LAB_14154c195:
  pbVar2 = (byte *)*param_2;
  uVar3 = 0;
  if ((pbVar2 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
    pbVar2 = pbVar2 + 1;
    *param_2 = (longlong)pbVar2;
LAB_14154c1c7:
    iVar1 = (int)(uVar3 >> 3);
    cVar7 = (char)uVar3;
    if (iVar1 == 1) {
      if (cVar7 != '\b') goto LAB_14154c33b;
      pbVar2 = (byte *)*param_2;
      uVar5 = 0;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar2, uVar5 < 0x80)) {
        *param_2 = (longlong)(pbVar2 + 1);
        *(uint *)(param_1 + 0x10) = uVar5;
      }
      else {
        uVar3 = FUN_1439f8e20(param_2,uVar5);
        if ((longlong)uVar3 < 0) goto LAB_14154c36c;
        *(int *)(param_1 + 0x10) = (int)uVar3;
      }
      goto LAB_14154c195;
    }
    if (iVar1 == 2) {
      if (cVar7 != '\x10') goto LAB_14154c33b;
      bVar6 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar6 = *(byte *)*param_2;
        if (bVar6 < 0x80) {
          *(uint *)(param_1 + 0x14) = (uint)bVar6;
          *param_2 = *param_2 + 1;
          goto LAB_14154c195;
        }
      }
      uVar3 = FUN_1439f8e20(param_2,bVar6);
      *(int *)(param_1 + 0x14) = (int)uVar3;
      if ((longlong)uVar3 < 0) {
        return uVar3 & 0xffffffffffffff00;
      }
      goto LAB_14154c195;
    }
    if (iVar1 != 3) {
      if ((iVar1 != 4) || (cVar7 != ' ')) goto LAB_14154c33b;
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (bVar6 = *pbVar2, bVar6 < 0x80)) {
        *param_2 = (longlong)(pbVar2 + 1);
        *(bool *)(param_1 + 0x19) = bVar6 != 0;
      }
      else {
        uVar3 = FUN_1439f8f00(param_2,&local_28);
        if (local_20 == '\0') goto LAB_14154c36c;
        *(bool *)(param_1 + 0x19) = local_28 != 0;
      }
      goto LAB_14154c195;
    }
    if (cVar7 == '\x18') {
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (bVar6 = *pbVar2, bVar6 < 0x80)) {
        *param_2 = (longlong)(pbVar2 + 1);
        *(bool *)(param_1 + 0x18) = bVar6 != 0;
      }
      else {
        uVar3 = FUN_1439f8f00(param_2,&local_18);
        if (local_10 == '\0') goto LAB_14154c36c;
        *(bool *)(param_1 + 0x18) = local_18 != 0;
      }
      goto LAB_14154c195;
    }
  }
  else {
    uVar5 = FUN_1439f8c60(param_2,uVar3);
    uVar3 = (ulonglong)uVar5;
    pbVar2 = (byte *)(ulonglong)(uVar5 - 1);
    if (uVar5 - 1 < 0x7f) goto LAB_14154c1c7;
  }
LAB_14154c33b:
  if ((int)uVar3 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = FUN_141515d60();
  }
  else {
    uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  uVar3 = FUN_143a1e1e0(param_2,uVar3,uVar4);
  if ((char)uVar3 == '\0') {
LAB_14154c36c:
    return uVar3 & 0xffffffffffffff00;
  }
  goto LAB_14154c195;
}



// FUNCTION 14154c390 FUN_14154c390 body=931 status=ok
// SIG undefined FUN_14154c390(void)

ulonglong FUN_14154c390(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  int *piVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined *puVar14;
  char cVar15;
  ulonglong local_res10;
  undefined4 local_res18;
  int local_res1c;
  ulonglong local_res20;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  char local_40;
  ulonglong local_38;
  char local_30;
  
LAB_14154c3b0:
  do {
    pbVar7 = (byte *)*param_2;
    uVar9 = 0;
    if (((byte *)param_2[1] <= pbVar7) || (uVar9 = (ulonglong)*pbVar7, (char)*pbVar7 < '\x01')) {
      uVar3 = FUN_1439f8c60(param_2,uVar9);
      uVar9 = (ulonglong)uVar3;
      pbVar7 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14154c3e2;
      goto LAB_14154c6e8;
    }
    pbVar7 = pbVar7 + 1;
    *param_2 = pbVar7;
LAB_14154c3e2:
    iVar5 = (int)(uVar9 >> 3);
    cVar15 = (char)uVar9;
    if (iVar5 == 1) {
      if (cVar15 != '\n') goto LAB_14154c6e8;
      puVar14 = *(undefined **)(param_1 + 0x40);
      if (puVar14 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x40,&DAT_146ba2f50);
        puVar14 = *(undefined **)(param_1 + 0x40);
      }
      uVar9 = thunk_FUN_1439fa490(param_2,puVar14);
      if ((char)uVar9 == '\0') goto LAB_14154c719;
      plVar12 = *(longlong **)(param_1 + 0x40);
      puVar1 = (ulonglong *)(plVar12 + 2);
      if (0xf < (ulonglong)plVar12[3]) {
        plVar12 = (longlong *)*plVar12;
      }
      uVar9 = FUN_1439fa7f0(plVar12,*puVar1 & 0xffffffff,0,
                            "OakSave.RegisteredDownloadableEntitlements.entitlement_source_asset_path"
                           );
    }
    else {
      if (iVar5 == 2) {
        if (cVar15 == '\x12') {
          pbVar7 = (byte *)*param_2;
          if ((pbVar7 < (byte *)param_2[1]) && (uVar13 = (ulonglong)*pbVar7, *pbVar7 < 0x80)) {
            *param_2 = pbVar7 + 1;
          }
          else {
            uVar9 = FUN_1439f98b0(param_2);
            uVar13 = uVar9 & 0xffffffff;
            if ((int)uVar9 < 0) goto LAB_14154c719;
          }
          uVar4 = FUN_1439f89d0(param_2,uVar13);
          iVar5 = FUN_1439f8490(param_2);
          while (0 < iVar5) {
            pbVar7 = (byte *)*param_2;
            if ((pbVar7 < (byte *)param_2[1]) && (bVar2 = *pbVar7, bVar2 < 0x80)) {
              *param_2 = pbVar7 + 1;
              local_res20 = (ulonglong)bVar2;
            }
            else {
              uVar9 = FUN_1439f8f00(param_2,&local_58);
              local_res20 = local_58;
              if (local_50 == '\0') goto LAB_14154c719;
            }
            FUN_1439f1a00(param_1 + 0x10,&local_res20);
            iVar5 = FUN_1439f8490(param_2);
          }
          FUN_1439f8990(param_2,uVar4);
          goto LAB_14154c3b0;
        }
        if (cVar15 == '\x10') {
          pbVar7 = (byte *)*param_2;
          if ((pbVar7 < (byte *)param_2[1]) && (bVar2 = *pbVar7, bVar2 < 0x80)) {
            *param_2 = pbVar7 + 1;
            local_res10 = (ulonglong)bVar2;
          }
          else {
            uVar9 = FUN_1439f8f00(param_2,&local_48);
            local_res10 = local_48;
            if (local_40 == '\0') goto LAB_14154c719;
          }
          FUN_1439f1a00(param_1 + 0x10,&local_res10);
          iVar5 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(param_1 + 0x10);
          iVar6 = FUN_1439f2ae0(param_1 + 0x10);
          for (iVar5 = iVar5 - iVar6; 0 < iVar5; iVar5 = iVar5 + -1) {
            pbVar7 = (byte *)*param_2;
            if (((byte *)param_2[1] <= pbVar7) || (*pbVar7 != 0x12)) break;
            pbVar10 = pbVar7 + 1;
            *param_2 = pbVar10;
            if ((pbVar10 < (byte *)param_2[1]) && (bVar2 = *pbVar10, bVar2 < 0x80)) {
              *param_2 = pbVar7 + 2;
              local_res10 = (ulonglong)bVar2;
            }
            else {
              uVar9 = FUN_1439f8f00(param_2,&local_38);
              local_res10 = local_38;
              if (local_30 == '\0') goto LAB_14154c719;
            }
            FUN_1439f1bf0(param_1 + 0x10,&local_res10);
          }
          goto LAB_14154c3b0;
        }
      }
      else if ((iVar5 == 3) && (cVar15 == '\x1a')) {
        piVar11 = *(int **)(param_1 + 0x38);
        if (piVar11 == (int *)0x0) {
LAB_14154c431:
          FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
          piVar11 = *(int **)(param_1 + 0x38);
          iVar6 = *piVar11;
LAB_14154c445:
          *piVar11 = iVar6 + 1;
          uVar8 = FUN_141544200(*(undefined8 *)(param_1 + 0x28));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) = uVar8;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x30);
          iVar6 = *piVar11;
          if (iVar6 <= iVar5) {
            if (iVar6 == *(int *)(param_1 + 0x34)) goto LAB_14154c431;
            goto LAB_14154c445;
          }
          uVar8 = *(undefined8 *)(piVar11 + (longlong)iVar5 * 2 + 2);
          *(int *)(param_1 + 0x30) = iVar5 + 1;
        }
        pbVar7 = (byte *)*param_2;
        if ((pbVar7 < (byte *)param_2[1]) && (*pbVar7 < 0x80)) {
          *param_2 = pbVar7 + 1;
        }
        else {
          uVar9 = FUN_1439f98b0(param_2);
          if ((int)uVar9 < 0) goto LAB_14154c719;
        }
        uVar9 = FUN_1439f8500(param_2,&local_res18);
        if ((-1 < local_res1c) && (uVar9 = FUN_14154c180(uVar8,param_2), (char)uVar9 != '\0')) {
          uVar9 = FUN_1439f84b0(param_2,local_res18);
          goto LAB_14154c711;
        }
        goto LAB_14154c719;
      }
LAB_14154c6e8:
      if ((int)uVar9 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar9 = FUN_143a1e1e0(param_2,uVar9);
    }
LAB_14154c711:
    if ((char)uVar9 == '\0') {
LAB_14154c719:
      return uVar9 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154c740 FUN_14154c740 body=317 status=ok
// SIG undefined FUN_14154c740(void)

ulonglong FUN_14154c740(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  
LAB_14154c755:
  do {
    pbVar2 = (byte *)*param_2;
    uVar3 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      pbVar2 = pbVar2 + 1;
      *param_2 = (longlong)pbVar2;
LAB_14154c787:
      iVar1 = (int)(uVar3 >> 3);
      if (iVar1 == 1) {
        if ((char)uVar3 == '\b') {
          pbVar2 = (byte *)*param_2;
          uVar5 = 0;
          if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar2, uVar5 < 0x80)) {
            *param_2 = (longlong)(pbVar2 + 1);
            *(uint *)(param_1 + 0x10) = uVar5;
          }
          else {
            uVar3 = FUN_1439f8e20(param_2,uVar5);
            if ((longlong)uVar3 < 0) goto LAB_14154c859;
            *(int *)(param_1 + 0x10) = (int)uVar3;
          }
          goto LAB_14154c755;
        }
      }
      else if ((iVar1 == 2) && ((char)uVar3 == '\x10')) {
        bVar6 = 0;
        if ((byte *)*param_2 < (byte *)param_2[1]) {
          bVar6 = *(byte *)*param_2;
          if (bVar6 < 0x80) {
            *(uint *)(param_1 + 0x14) = (uint)bVar6;
            *param_2 = *param_2 + 1;
            goto LAB_14154c755;
          }
        }
        uVar3 = FUN_1439f8e20(param_2,bVar6);
        *(int *)(param_1 + 0x14) = (int)uVar3;
        if ((longlong)uVar3 < 0) {
          return uVar3 & 0xffffffffffffff00;
        }
        goto LAB_14154c755;
      }
    }
    else {
      uVar5 = FUN_1439f8c60(param_2,uVar3);
      uVar3 = (ulonglong)uVar5;
      pbVar2 = (byte *)(ulonglong)(uVar5 - 1);
      if (uVar5 - 1 < 0x7f) goto LAB_14154c787;
    }
    if ((int)uVar3 == 0) {
      return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar3 = FUN_143a1e1e0(param_2,uVar3,uVar4);
    if ((char)uVar3 == '\0') {
LAB_14154c859:
      return uVar3 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154c880 FUN_14154c880 body=609 status=ok
// SIG undefined FUN_14154c880(void)

ulonglong FUN_14154c880(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  byte bVar10;
  char cVar11;
  
LAB_14154c8a1:
  pbVar2 = (byte *)*param_2;
  uVar7 = 0;
  if (((byte *)param_2[1] <= pbVar2) || (uVar7 = (ulonglong)*pbVar2, (char)*pbVar2 < '\x01')) {
    uVar3 = FUN_1439f8c60(param_2,uVar7);
    uVar7 = (ulonglong)uVar3;
    uVar5 = (ulonglong)(uVar3 - 1);
    if (uVar3 - 1 < 0x7f) goto LAB_14154c8d2;
    goto switchD_14154c8ee_caseD_2;
  }
  *param_2 = (longlong)(pbVar2 + 1);
LAB_14154c8d2:
  uVar3 = (int)(uVar7 >> 3) - 1;
  uVar5 = (ulonglong)uVar3;
  if (9 < uVar3) goto switchD_14154c8ee_caseD_2;
  uVar5 = (ulonglong)(int)uVar3;
  cVar11 = (char)uVar7;
  switch(uVar3) {
  case 0:
    if (cVar11 == '\b') {
      bVar10 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar10 = *(byte *)*param_2;
        if (bVar10 < 0x80) {
          *(uint *)(param_1 + 0x60) = (uint)bVar10;
          *param_2 = *param_2 + 1;
          goto LAB_14154c8a1;
        }
      }
      uVar7 = FUN_1439f8e20(param_2,bVar10);
      *(int *)(param_1 + 0x60) = (int)uVar7;
      if ((longlong)uVar7 < 0) {
        return uVar7 & 0xffffffffffffff00;
      }
      goto LAB_14154c8a1;
    }
    break;
  case 1:
    if (cVar11 != '\x10') break;
    uVar7 = FUN_1414ff170(param_2);
    goto LAB_14154cac0;
  case 3:
    if (cVar11 == '\"') {
      lVar8 = param_1 + 0x10;
LAB_14154c959:
      FUN_140d26d80(lVar8);
      uVar7 = FUN_14151c390(param_2);
      goto LAB_14154cac0;
    }
    break;
  case 4:
    if (cVar11 == '*') {
      lVar8 = param_1 + 0x28;
      goto LAB_14154c959;
    }
    break;
  case 6:
    if (cVar11 == '8') {
      uVar7 = FUN_1414ff090(param_2);
      goto LAB_14154cac0;
    }
    break;
  case 7:
    if (cVar11 == '@') {
      bVar10 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar10 = *(byte *)*param_2;
        if (bVar10 < 0x80) {
          *(uint *)(param_1 + 0x68) = (uint)bVar10;
          *param_2 = *param_2 + 1;
          goto LAB_14154c8a1;
        }
      }
      uVar7 = FUN_1439f8e20(param_2,bVar10);
      *(int *)(param_1 + 0x68) = (int)uVar7;
      if ((longlong)uVar7 < 0) {
        return uVar7 & 0xffffffffffffff00;
      }
      goto LAB_14154c8a1;
    }
    break;
  case 8:
    if (cVar11 != 'H') break;
    bVar10 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar10 = *(byte *)*param_2;
      if (0x7f < bVar10) goto LAB_14154ca06;
      *(uint *)(param_1 + 0x6c) = (uint)bVar10;
      *param_2 = *param_2 + 1;
    }
    else {
LAB_14154ca06:
      uVar7 = FUN_1439f8e20(param_2,bVar10);
      *(int *)(param_1 + 0x6c) = (int)uVar7;
      if ((longlong)uVar7 < 0) {
        return uVar7 & 0xffffffffffffff00;
      }
    }
    goto LAB_14154c8a1;
  case 9:
    if (cVar11 == 'R') {
      piVar9 = *(int **)(param_1 + 0x50);
      if (piVar9 == (int *)0x0) {
LAB_14154ca56:
        FUN_1439f23d0(param_1 + 0x40,*(int *)(param_1 + 0x4c) + 1);
        piVar9 = *(int **)(param_1 + 0x50);
        iVar4 = *piVar9;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x48);
        iVar4 = *piVar9;
        if (iVar1 < iVar4) {
          uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar1 * 2 + 2);
          *(int *)(param_1 + 0x48) = iVar1 + 1;
          uVar7 = FUN_141544d90(param_2,uVar6);
          goto LAB_14154cac0;
        }
        if (iVar4 == *(int *)(param_1 + 0x4c)) goto LAB_14154ca56;
      }
      *piVar9 = iVar4 + 1;
      uVar6 = FUN_1415442d0(*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)*(int *)(param_1 + 0x48) * 8) =
           uVar6;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      uVar7 = FUN_141544d90(param_2,uVar6);
      goto LAB_14154cac0;
    }
  }
switchD_14154c8ee_caseD_2:
  if ((int)uVar7 == 0) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar5 = FUN_141515d60();
  }
  else {
    uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  uVar7 = FUN_143a1e1e0(param_2,uVar7,uVar5);
LAB_14154cac0:
  if ((char)uVar7 == '\0') {
    return uVar7;
  }
  goto LAB_14154c8a1;
}



// FUNCTION 14154cb10 FUN_14154cb10 body=752 status=ok
// SIG undefined FUN_14154cb10(void)

ulonglong FUN_14154cb10(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  byte bVar9;
  char cVar10;
  undefined1 local_res10 [4];
  int local_res14;
  
LAB_14154cb30:
  do {
    pbVar3 = (byte *)*param_2;
    uVar5 = 0;
    if (((byte *)param_2[1] <= pbVar3) || (uVar5 = (ulonglong)*pbVar3, (char)*pbVar3 < '\x01')) {
      uVar7 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar7;
      pbVar3 = (byte *)(ulonglong)(uVar7 - 1);
      if (uVar7 - 1 < 0x7f) goto LAB_14154cb62;
      goto LAB_14154cdb4;
    }
    pbVar3 = pbVar3 + 1;
    *param_2 = (longlong)pbVar3;
LAB_14154cb62:
    iVar2 = (int)(uVar5 >> 3);
    cVar10 = (char)uVar5;
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        if (cVar10 == '\x18') {
          pbVar3 = (byte *)*param_2;
          uVar7 = 0;
          if ((pbVar3 < (byte *)param_2[1]) && (uVar7 = (uint)*pbVar3, uVar7 < 0x80)) {
            *param_2 = (longlong)(pbVar3 + 1);
            *(uint *)(param_1 + 0x44) = uVar7;
          }
          else {
            uVar5 = FUN_1439f8e20(param_2,uVar7);
            if ((longlong)uVar5 < 0) goto LAB_14154cde5;
            *(int *)(param_1 + 0x44) = (int)uVar5;
          }
          goto LAB_14154cb30;
        }
LAB_14154cdb4:
        if ((int)uVar5 == 0) {
          return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
        }
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar6 = FUN_141515d60();
        }
        else {
          uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar6);
      }
      else {
        if (iVar2 == 4) {
          if (cVar10 != ' ') goto LAB_14154cdb4;
          pbVar3 = (byte *)*param_2;
          uVar7 = 0;
          if ((pbVar3 < (byte *)param_2[1]) && (uVar7 = (uint)*pbVar3, uVar7 < 0x80)) {
            *param_2 = (longlong)(pbVar3 + 1);
            *(uint *)(param_1 + 0x48) = uVar7;
          }
          else {
            uVar5 = FUN_1439f8e20(param_2,uVar7);
            if ((longlong)uVar5 < 0) goto LAB_14154cde5;
            *(int *)(param_1 + 0x48) = (int)uVar5;
          }
          goto LAB_14154cb30;
        }
        if (iVar2 == 5) {
          if (cVar10 != '*') goto LAB_14154cdb4;
          piVar8 = *(int **)(param_1 + 0x20);
          if (piVar8 == (int *)0x0) {
LAB_14154cca1:
            FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
            piVar8 = *(int **)(param_1 + 0x20);
            iVar2 = *piVar8;
LAB_14154ccb5:
            *piVar8 = iVar2 + 1;
            uVar4 = FUN_141544340(*(undefined8 *)(param_1 + 0x10));
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar4;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar5 = FUN_141544d90(param_2);
          }
          else {
            iVar2 = *piVar8;
            if (iVar2 <= *(int *)(param_1 + 0x18)) {
              if (iVar2 == *(int *)(param_1 + 0x1c)) goto LAB_14154cca1;
              goto LAB_14154ccb5;
            }
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar5 = FUN_141544d90(param_2);
          }
        }
        else {
          if ((iVar2 != 6) || (cVar10 != '2')) goto LAB_14154cdb4;
          piVar8 = *(int **)(param_1 + 0x38);
          if (piVar8 == (int *)0x0) {
LAB_14154cbc3:
            FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
            piVar8 = *(int **)(param_1 + 0x38);
            iVar1 = *piVar8;
LAB_14154cbd7:
            *piVar8 = iVar1 + 1;
            uVar4 = FUN_141544420(*(undefined8 *)(param_1 + 0x28));
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) = uVar4;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x30);
            iVar1 = *piVar8;
            if (iVar1 <= iVar2) {
              if (iVar1 == *(int *)(param_1 + 0x34)) goto LAB_14154cbc3;
              goto LAB_14154cbd7;
            }
            uVar4 = *(undefined8 *)(piVar8 + (longlong)iVar2 * 2 + 2);
            *(int *)(param_1 + 0x30) = iVar2 + 1;
          }
          pbVar3 = (byte *)*param_2;
          if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar3, *pbVar3 < 0x80)) {
            *param_2 = (longlong)(pbVar3 + 1);
          }
          else {
            uVar5 = FUN_1439f98b0(param_2);
            uVar6 = uVar5 & 0xffffffff;
            if ((int)uVar5 < 0) goto LAB_14154cde5;
          }
          uVar5 = FUN_1439f8500(param_2,local_res10,uVar6);
          if ((local_res14 < 0) || (uVar5 = FUN_14154c880(uVar4,param_2), (char)uVar5 == '\0'))
          goto LAB_14154cde5;
          uVar5 = FUN_1439f84b0(param_2);
        }
      }
      if ((char)uVar5 == '\0') {
LAB_14154cde5:
        return uVar5 & 0xffffffffffffff00;
      }
      goto LAB_14154cb30;
    }
    if (cVar10 != '\x10') goto LAB_14154cdb4;
    bVar9 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar9 = *(byte *)*param_2;
      if (bVar9 < 0x80) {
        *(uint *)(param_1 + 0x40) = (uint)bVar9;
        *param_2 = *param_2 + 1;
        goto LAB_14154cb30;
      }
    }
    uVar5 = FUN_1439f8e20(param_2,bVar9);
    *(int *)(param_1 + 0x40) = (int)uVar5;
    if ((longlong)uVar5 < 0) {
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154ce00 FUN_14154ce00 body=458 status=ok
// SIG undefined FUN_14154ce00(void)

ulonglong FUN_14154ce00(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
LAB_14154ce10:
  do {
    pbVar3 = *(byte **)param_2;
    uVar4 = 0;
    if ((pbVar3 < *(byte **)(param_2 + 2)) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *(byte **)param_2 = pbVar3;
LAB_14154ce42:
      iVar1 = (int)(uVar4 >> 3);
      cVar6 = (char)uVar4;
      if (iVar1 == 1) {
        if (cVar6 == '\r') {
          if (param_2[2] - *param_2 < 4) {
            uVar4 = FUN_1439f8a20(param_2,local_res20);
            if ((char)uVar4 == '\0') goto LAB_14154cfb6;
            *(undefined4 *)(param_1 + 0x10) = local_res20[0];
          }
          else {
            local_res20[0] = **(undefined4 **)param_2;
            *(undefined4 **)param_2 = *(undefined4 **)param_2 + 1;
            *(undefined4 *)(param_1 + 0x10) = local_res20[0];
          }
          goto LAB_14154ce10;
        }
      }
      else if (iVar1 == 2) {
        if (cVar6 == '\x15') {
          if (param_2[2] - *param_2 < 4) {
            uVar4 = FUN_1439f8a20(param_2,local_res18);
            if ((char)uVar4 == '\0') goto LAB_14154cfb6;
            *(undefined4 *)(param_1 + 0x14) = local_res18[0];
          }
          else {
            local_res18[0] = **(undefined4 **)param_2;
            *(undefined4 **)param_2 = *(undefined4 **)param_2 + 1;
            *(undefined4 *)(param_1 + 0x14) = local_res18[0];
          }
          goto LAB_14154ce10;
        }
      }
      else if ((iVar1 == 3) && (cVar6 == '\x1d')) {
        if (param_2[2] - *param_2 < 4) {
          uVar4 = FUN_1439f8a20(param_2,local_res10);
          if ((char)uVar4 == '\0') goto LAB_14154cfb6;
          *(undefined4 *)(param_1 + 0x18) = local_res10[0];
        }
        else {
          local_res10[0] = **(undefined4 **)param_2;
          *(undefined4 **)param_2 = *(undefined4 **)param_2 + 1;
          *(undefined4 *)(param_1 + 0x18) = local_res10[0];
        }
        goto LAB_14154ce10;
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14154ce42;
    }
    if ((int)uVar4 == 0) {
      return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    if ((char)uVar4 == '\0') {
LAB_14154cfb6:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14154d230 FUN_14154d230 body=357 status=ok
// SIG undefined FUN_14154d230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14154d230(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x48),param_2);
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x4c),param_2);
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    FUN_1439fa860(3,*(char *)(param_1 + 0x4d),param_2);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1439fac90(4,*(int *)(param_1 + 0x50),param_2);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1439fac90(5,*(int *)(param_1 + 0x54),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(6,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,"OakSave.ChallengeSaveGameData.challenge_class_path"
                 );
    FUN_1439fb5b0(7,*(undefined8 *)(param_1 + 0x40),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(8,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar5 * 8),
                    param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d3a0 FUN_14154d3a0 body=129 status=ok
// SIG undefined FUN_14154d3a0(void)

void FUN_14154d3a0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.ChallengeStatSaveGameData.challenge_stat_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d430 FUN_14154d430 body=130 status=ok
// SIG undefined FUN_14154d430(void)

void FUN_14154d430(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersDecorationItemSaveGameData.decoration_item_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d4c0 FUN_14154d4c0 body=130 status=ok
// SIG undefined FUN_14154d4c0(void)

void FUN_14154d4c0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersRoomItemSaveGameData.room_item_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d550 FUN_14154d550 body=129 status=ok
// SIG undefined FUN_14154d550(void)

void FUN_14154d550(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.GameStatSaveGameData.stat_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d5e0 FUN_14154d5e0 body=89 status=ok
// SIG undefined FUN_14154d5e0(void)

void FUN_14154d5e0(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x14),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d640 FUN_14154d640 body=70 status=ok
// SIG undefined FUN_14154d640(void)

void FUN_14154d640(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d690 FUN_14154d690 body=130 status=ok
// SIG undefined FUN_14154d690(void)

void FUN_14154d690(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCustomizationSaveGameData.customization_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d720 FUN_14154d720 body=90 status=ok
// SIG undefined FUN_14154d720(void)

void FUN_14154d720(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x14),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d780 FUN_14154d780 body=494 status=ok
// SIG undefined FUN_14154d780(void)

void FUN_14154d780(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x40),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.sender_display_name");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.subject");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.body");
    FUN_1439fb5b0(4,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.gear_serial_number");
    FUN_1439fb5b0(5,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.mail_guid");
    FUN_1439fb5b0(6,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1439fafd0(7,*(longlong *)(param_1 + 0x48),param_2);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1439fafd0(8,*(longlong *)(param_1 + 0x50),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakMailItem.from_player_id");
    FUN_1439fb5b0(9,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_1439fa860(10,*(char *)(param_1 + 0x44),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154d970 FUN_14154d970 body=129 status=ok
// SIG undefined FUN_14154d970(void)

void FUN_14154d970(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakSDUSaveGameData.sdu_data_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154da00 FUN_14154da00 body=131 status=ok
// SIG undefined FUN_14154da00(void)

void FUN_14154da00(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x14),param_2);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(3,*(char *)(param_1 + 0x18),param_2);
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_1439fa860(4,*(char *)(param_1 + 0x19),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154da90 FUN_14154da90 body=435 status=ok
// SIG undefined FUN_14154da90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14154da90(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong *plVar6;
  byte *pbVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar6 = *(longlong **)(param_1 + 0x40);
  puVar4 = (ulonglong *)(plVar6 + 2);
  if (*puVar4 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar4 & 0xffffffff,1,
                  "OakSave.RegisteredDownloadableEntitlements.entitlement_source_asset_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x40),param_2);
  }
  iVar3 = FUN_1439f2ae0(param_1 + 0x10);
  if (0 < iVar3) {
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2,0x12);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0x12;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    }
    uVar10 = *(uint *)(param_1 + 0x20);
    uVar9 = (ulonglong)uVar10;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar2 = *(byte **)(param_2 + 8);
      pbVar7 = pbVar2;
      while (bVar8 = (byte)uVar9, 0x7f < uVar10) {
        uVar9 = uVar9 >> 7;
        *pbVar7 = bVar8 | 0x80;
        pbVar7 = pbVar7 + 1;
        uVar10 = (uint)uVar9;
      }
      *pbVar7 = bVar8;
      iVar3 = ((int)pbVar7 - (int)pbVar2) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar3;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar3;
    }
  }
  iVar3 = FUN_1439f2ae0(param_1 + 0x10);
  uVar10 = 0;
  iVar11 = 0;
  if (0 < iVar3) {
    do {
      puVar4 = (ulonglong *)FUN_1439f1d10(param_1 + 0x10,iVar11);
      uVar9 = *puVar4;
      if (*(int *)(param_2 + 0x10) < 10) {
        FUN_1439f9ec0(param_2);
      }
      else {
        pbVar2 = *(byte **)(param_2 + 8);
        pbVar7 = pbVar2;
        for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
          *pbVar7 = (byte)uVar9 | 0x80;
          pbVar7 = pbVar7 + 1;
        }
        *pbVar7 = (byte)uVar9;
        iVar5 = ((int)pbVar7 - (int)pbVar2) + 1;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar5;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar5;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(3,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar10 * 8)
                    ,param_2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154dc50 FUN_14154dc50 body=89 status=ok
// SIG undefined FUN_14154dc50(void)

void FUN_14154dc50(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x14),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154dcb0 FUN_14154dcb0 body=341 status=ok
// SIG undefined FUN_14154dcb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14154dcb0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x60),param_2);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1439fafd0(2,*(longlong *)(param_1 + 0x58),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(4,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(5,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1439fac90(7,*(int *)(param_1 + 100),param_2);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1439fb720(8,*(int *)(param_1 + 0x68),param_2);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1439fb720(9,*(int *)(param_1 + 0x6c),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(10,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)(int)uVar3 * 8)
                    ,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154de10 FUN_14154de10 body=245 status=ok
// SIG undefined FUN_14154de10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14154de10(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x40),param_2);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1439fac90(3,*(int *)(param_1 + 0x44),param_2);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1439fac90(4,*(int *)(param_1 + 0x48),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(5,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(6,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar3 * 8),
                    param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154df10 FUN_14154df10 body=131 status=ok
// SIG undefined FUN_14154df10(void)

void FUN_14154df10(longlong param_1,undefined8 param_2)

{
  if (*(float *)(param_1 + 0x10) != 0.0) {
    FUN_1439fae60(1,*(float *)(param_1 + 0x10),param_2);
  }
  if (*(float *)(param_1 + 0x14) != 0.0) {
    FUN_1439fae60(2,*(float *)(param_1 + 0x14),param_2);
  }
  if (*(float *)(param_1 + 0x18) != 0.0) {
    FUN_1439fae60(3,*(float *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14154dfa0 SetGameNetVer body=4 status=ok
// SIG undefined SetGameNetVer(void)

void FArchiveState::SetGameNetVer(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 14154dfe0 FUN_14154dfe0 body=385 status=ok
// SIG undefined FUN_14154dfe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined *** FUN_14154dfe0(undefined ***param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  undefined ***local_60;
  undefined **local_58 [7];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_60 = (undefined ***)0x0;
  if (param_2 == 0) {
    if ((undefined ***)param_1[7] != param_1) {
      local_60 = (undefined ***)param_1[7];
      param_1[7] = (undefined **)0x0;
      goto LAB_14154e12b;
    }
  }
  else {
    local_90 = param_2;
    local_98 = &PTR_FUN_144c7e550;
    local_60 = &local_98;
  }
  local_20 = (undefined ***)0x0;
  if (local_60 != (undefined ***)0x0) {
    if (local_60 == &local_98) {
      local_20 = (undefined ***)(*(code *)(*local_60)[1])(local_60,local_58);
      if (local_60 == (undefined ***)0x0) goto LAB_14154e094;
      (*(code *)(*local_60)[4])
                (local_60,CONCAT71((int7)((ulonglong)&local_98 >> 8),local_60 != &local_98));
    }
    else {
      local_20 = local_60;
    }
    local_60 = (undefined ***)0x0;
  }
LAB_14154e094:
  pppuVar1 = (undefined ***)param_1[7];
  if (pppuVar1 != (undefined ***)0x0) {
    if (pppuVar1 == param_1) {
      local_60 = (undefined ***)(*(code *)(*pppuVar1)[1])(pppuVar1,&local_98);
      pppuVar1 = (undefined ***)param_1[7];
      if (pppuVar1 == (undefined ***)0x0) goto LAB_14154e0ea;
      (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != param_1);
    }
    else {
      local_60 = pppuVar1;
    }
    param_1[7] = (undefined **)0x0;
  }
LAB_14154e0ea:
  if (local_20 != (undefined ***)0x0) {
    if (local_20 == local_58) {
      ppuVar2 = (undefined **)(*(code *)(*local_20)[1])(local_20,param_1);
      param_1[7] = ppuVar2;
      if (local_20 != (undefined ***)0x0) {
        (*(code *)(*local_20)[4])
                  (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
      }
    }
    else {
      param_1[7] = (undefined **)local_20;
    }
  }
LAB_14154e12b:
  if (local_60 != (undefined ***)0x0) {
    (*(code *)(*local_60)[4])(local_60,local_60 != &local_98);
  }
  return param_1;
}



// FUNCTION 14154e170 FUN_14154e170 body=322 status=ok
// SIG undefined FUN_14154e170(void)

void FUN_14154e170(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = &PTR_FUN_144c7de28;
      param_1[1] = 0;
      iVar3 = *(int *)(puVar5 + 1);
      puVar4 = (undefined8 *)*puVar5;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar3,0);
        puVar2 = (undefined8 *)param_1[1];
        do {
          *puVar2 = 0;
          iVar1 = *(int *)(puVar4 + 1);
          _Src = (void *)*puVar4;
          *(int *)(puVar2 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
          }
          puVar2 = puVar2 + 2;
          puVar4 = puVar4 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_1 = param_1 + 3;
      puVar5 = puVar5 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14154e2c0 FUN_14154e2c0 body=478 status=ok
// SIG undefined FUN_14154e2c0(void)

/* WARNING: Removing unreachable block (ram,0x00014154e495) */
/* WARNING: Removing unreachable block (ram,0x00014154e41e) */

longlong FUN_14154e2c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = FUN_141583770();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = FUN_141583770();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = FUN_141583770();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = FUN_141583770();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 14154e4a0 FUN_14154e4a0 body=478 status=ok
// SIG undefined FUN_14154e4a0(void)

/* WARNING: Removing unreachable block (ram,0x00014154e675) */
/* WARNING: Removing unreachable block (ram,0x00014154e5fe) */

longlong FUN_14154e4a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = AUGWeapon_Hook::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = AUGWeapon_Hook::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 14154e680 FUN_14154e680 body=666 status=ok
// SIG undefined FUN_14154e680(void)

longlong FUN_14154e680(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_14154e7e6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_14154e7e6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14154e859;
  }
  lVar7 = 0;
LAB_14154e859:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 14154e920 FUN_14154e920 body=666 status=ok
// SIG undefined FUN_14154e920(void)

longlong FUN_14154e920(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_14154ea86;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_14154ea86:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14154eaf9;
  }
  lVar7 = 0;
LAB_14154eaf9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 14154ebc0 FUN_14154ebc0 body=666 status=ok
// SIG undefined FUN_14154ebc0(void)

longlong FUN_14154ebc0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_14154ed26;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14154ed26:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14154ed99;
  }
  lVar7 = 0;
LAB_14154ed99:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 14154ee60 FUN_14154ee60 body=917 status=ok
// SIG undefined FUN_14154ee60(void)

longlong FUN_14154ee60(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14154ef0f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_14154ef0f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_14154ef24;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_14154ef24:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_14154f0ad;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14154f0ad:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14154f12a;
  }
  lVar12 = 0;
LAB_14154f12a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 14154f200 FUN_14154f200 body=666 status=ok
// SIG undefined FUN_14154f200(void)

longlong FUN_14154f200(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_14154f366;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141582d50();
LAB_14154f366:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141582d50();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14154f3d9;
  }
  lVar7 = 0;
LAB_14154f3d9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 14154f4a0 FUN_14154f4a0 body=917 status=ok
// SIG undefined FUN_14154f4a0(void)

longlong FUN_14154f4a0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14154f54f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_14154f54f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_14154f564;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_14154f564:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_14154f6ed;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1415830c0();
LAB_14154f6ed:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1415830c0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14154f76a;
  }
  lVar12 = 0;
LAB_14154f76a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 14154f840 FUN_14154f840 body=917 status=ok
// SIG undefined FUN_14154f840(void)

longlong FUN_14154f840(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14154f8ef:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_14154f8ef;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_14154f904;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_14154f904:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_14154fa8d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14154fa8d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14154fb0a;
  }
  lVar12 = 0;
LAB_14154fb0a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 14154fbe0 FUN_14154fbe0 body=917 status=ok
// SIG undefined FUN_14154fbe0(void)

longlong FUN_14154fbe0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14154fc8f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_14154fc8f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_14154fca4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_14154fca4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_14154fe2d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14154fe2d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14154feaa;
  }
  lVar12 = 0;
LAB_14154feaa:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 14154ff80 FUN_14154ff80 body=917 status=ok
// SIG undefined FUN_14154ff80(void)

longlong FUN_14154ff80(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14155002f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_14155002f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_141550044;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_141550044:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_1415501cd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141582f10();
LAB_1415501cd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141582f10();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14155024a;
  }
  lVar12 = 0;
LAB_14155024a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 141550320 FUN_141550320 body=917 status=ok
// SIG undefined FUN_141550320(void)

longlong FUN_141550320(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1415503cf:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_1415503cf;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_1415503e4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_1415503e4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_14155056d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141583170();
LAB_14155056d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141583170();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1415505ea;
  }
  lVar12 = 0;
LAB_1415505ea:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 1415506c0 FUN_1415506c0 body=666 status=ok
// SIG undefined FUN_1415506c0(void)

longlong FUN_1415506c0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_141550826;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UXAnimInstanceBase::GetPrivateStaticClass();
LAB_141550826:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UXAnimInstanceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141550899;
  }
  lVar7 = 0;
LAB_141550899:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 141550960 FUN_141550960 body=69 status=ok
// SIG undefined FUN_141550960(void)

ulonglong FUN_141550960(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1415825a0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1415509b0 FUN_1415509b0 body=69 status=ok
// SIG undefined FUN_1415509b0(void)

ulonglong FUN_1415509b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UGameInstanceGameParameters::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141550a00 IsA<UActorChannel> body=69 status=ok
// SIG undefined IsA<UActorChannel>(void)

ulonglong UObjectBaseUtility::IsA<UActorChannel>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_141582720();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141550a50 NewObject<UMaterialParameterCollectionInstance> body=89 status=ok
// SIG undefined NewObject<UMaterialParameterCollectionInstance>(void)

void NewObject<UMaterialParameterCollectionInstance>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 141550ab0 FUN_141550ab0 body=368 status=ok
// SIG undefined FUN_141550ab0(void)

void FUN_141550ab0(PSRWLOCK param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  PSRWLOCK pRVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  PVOID pvVar5;
  longlong *plVar6;
  longlong lVar7;
  RTL_SRWLOCK local_38 [6];
  
  AcquireSRWLockExclusive(param_1);
  pRVar1 = param_1 + 1;
  if ((*(int *)&param_1[2].Ptr != 0) && (pRVar1->Ptr != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)pRVar1->Ptr + 0x18))();
    if ((cVar4 != '\0') &&
       ((*(int *)&param_1[2].Ptr != 0 && (plVar6 = pRVar1->Ptr, plVar6 != (longlong *)0x0)))) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      if (pRVar1->Ptr != (PVOID)0x0) {
        pvVar5 = (PVOID)FMemory::Realloc(pRVar1->Ptr,0,0);
        pRVar1->Ptr = pvVar5;
      }
      *(undefined4 *)&param_1[2].Ptr = 0;
    }
  }
  lVar7 = *param_3;
  lVar3 = param_3[1];
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar6 + 1,param_2);
    plVar6[2] = lVar7;
    plVar6[3] = lVar3;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (local_38 != pRVar1) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)&param_1[2].Ptr != 0) && (plVar2 = pRVar1->Ptr, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (pRVar1->Ptr != (PVOID)0x0) {
          pvVar5 = (PVOID)FMemory::Realloc(pRVar1->Ptr,0,0);
          pRVar1->Ptr = pvVar5;
        }
        *(undefined4 *)&param_1[2].Ptr = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,pRVar1);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar7 = FMemory::Realloc(plVar6,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  *(undefined4 *)&param_1[3].Ptr = param_4;
  *(undefined2 *)((longlong)&param_1[3].Ptr + 4) = 0x100;
                    /* WARNING: Could not recover jumptable at 0x000141550c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 141550c20 _Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_> body=113 status=ok
// SIG undefined _Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(void)

void std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>
               (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
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
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 141550ca0 _Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&> body=376 status=ok
// SIG undefined _Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>(void)

undefined8 *
std::
vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
::_Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>
          (longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  lVar2 = *param_1;
  lVar5 = param_1[1] - lVar2 >> 4;
  if (lVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar6 = lVar5 + 1;
  uVar3 = param_1[2] - lVar2 >> 4;
  uVar7 = uVar6;
  if ((uVar3 <= 0xfffffffffffffff - (uVar3 >> 1)) && (uVar7 = (uVar3 >> 1) + uVar3, uVar7 < uVar6))
  {
    uVar7 = uVar6;
  }
  lVar5 = allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(param_1,uVar7);
  puVar8 = (undefined8 *)((param_2 - lVar2 & 0xfffffffffffffff0U) + lVar5);
  *puVar8 = 0;
  puVar8[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar8 = *param_3;
  puVar8[1] = param_3[1];
  if (param_2 == param_1[1]) {
    _Umove_if_noexcept();
  }
  else {
    _Umove(param_1,*param_1,param_2,lVar5);
    _Umove(param_1,param_2,param_1[1],puVar8 + 2);
  }
  if (*param_1 != 0) {
    _Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(*param_1,param_1[1],param_1);
    lVar2 = *param_1;
    uVar3 = param_1[2] - lVar2 & 0xfffffffffffffff0;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar4,uVar3);
  }
  *param_1 = lVar5;
  param_1[2] = uVar7 * 0x10 + lVar5;
  param_1[1] = uVar6 * 0x10 + lVar5;
  return puVar8;
}



// FUNCTION 141550e20 FUN_141550e20 body=510 status=ok
// SIG undefined FUN_141550e20(void)

undefined8 * FUN_141550e20(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  lVar1 = *param_1;
  lVar7 = param_1[1] - lVar1 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar8 = lVar7 + 1;
  uVar5 = param_1[2] - lVar1 >> 4;
  uVar4 = uVar8;
  if ((uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar8))
  {
    uVar4 = uVar8;
  }
  puVar9 = (undefined8 *)0x0;
  uVar11 = uVar4 * 0x10;
  uVar5 = 0xffffffffffffffff;
  if ((uVar4 < 0x1000000000000000) && (uVar5 = uVar11, uVar11 < 0x1000)) {
    if (uVar11 != 0) {
      puVar9 = (undefined8 *)operator_new(uVar11);
    }
  }
  else {
    uVar11 = uVar5 + 0x27;
    if (uVar5 + 0x27 <= uVar5) {
      uVar11 = 0xffffffffffffffff;
    }
    lVar7 = operator_new(uVar11);
    if (lVar7 == 0) goto LAB_141551013;
    puVar9 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    puVar9[-1] = lVar7;
  }
  puVar10 = (undefined8 *)(((longlong)param_2 - lVar1 & 0xfffffffffffffff0U) + (longlong)puVar9);
  *puVar10 = 0;
  puVar10[1] = 0;
  *puVar10 = *param_3;
  puVar10[1] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puVar2 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)*param_1;
  puVar3 = puVar9;
  if (param_2 == puVar2) {
    for (; puVar6 != puVar2; puVar6 = puVar6 + 2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar3 = puVar3 + 2;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(puVar3,puVar3,param_1);
  }
  else {
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove(param_1,puVar6,param_2,puVar9);
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove(param_1,param_2,param_1[1],puVar10 + 2);
  }
  if (*param_1 != 0) {
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>
              (*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar5 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar7 = lVar1;
    if (0xfff < uVar5) {
      lVar7 = *(longlong *)(lVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar1 - lVar7) - 8U) {
LAB_141551013:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar7,uVar5);
  }
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar8 * 2);
  param_1[2] = (longlong)(puVar9 + uVar4 * 2);
  return puVar10;
}



// FUNCTION 141551020 FUN_141551020 body=437 status=ok
// SIG undefined FUN_141551020(void)

undefined8 * FUN_141551020(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  lVar1 = *param_1;
  lVar7 = param_1[1] - lVar1 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar8 = lVar7 + 1;
  uVar4 = param_1[2] - lVar1 >> 4;
  uVar9 = uVar8;
  if ((uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) && (uVar9 = (uVar4 >> 1) + uVar4, uVar9 < uVar8))
  {
    uVar9 = uVar8;
  }
  puVar5 = (undefined8 *)
           std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(param_1,uVar9);
  puVar10 = (undefined8 *)(((longlong)param_2 - lVar1 & 0xfffffffffffffff0U) + (longlong)puVar5);
  *puVar10 = 0;
  puVar10[1] = 0;
  *puVar10 = *param_3;
  puVar10[1] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puVar2 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)*param_1;
  puVar3 = puVar5;
  if (param_2 == puVar2) {
    for (; puVar6 != puVar2; puVar6 = puVar6 + 2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar3 = puVar3 + 2;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(puVar3,puVar3,param_1);
  }
  else {
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove(param_1,puVar6,param_2,puVar5);
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove(param_1,param_2,param_1[1],puVar10 + 2);
  }
  if (*param_1 != 0) {
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>
              (*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar4 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar7 = lVar1;
    if (0xfff < uVar4) {
      lVar7 = *(longlong *)(lVar1 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (lVar1 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar7,uVar4);
  }
  *param_1 = (longlong)puVar5;
  param_1[2] = (longlong)(puVar5 + uVar9 * 2);
  param_1[1] = (longlong)(puVar5 + uVar8 * 2);
  return puVar10;
}



// FUNCTION 1415511e0 FUN_1415511e0 body=371 status=ok
// SIG undefined FUN_1415511e0(void)

undefined8 * FUN_1415511e0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1] - lVar1 >> 4;
  if (lVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar5 = lVar4 + 1;
  uVar2 = param_1[2] - lVar1 >> 4;
  uVar6 = uVar5;
  if ((uVar2 <= 0xfffffffffffffff - (uVar2 >> 1)) && (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < uVar5))
  {
    uVar6 = uVar5;
  }
  lVar4 = std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(param_1,uVar6);
  puVar7 = (undefined8 *)((param_2 - lVar1 & 0xfffffffffffffff0U) + lVar4);
  *puVar7 = 0;
  puVar7[1] = 0;
  *puVar7 = *param_3;
  puVar7[1] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  if (param_2 == param_1[1]) {
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove_if_noexcept();
  }
  else {
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove(param_1,*param_1,param_2,lVar4);
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Umove(param_1,param_2,param_1[1],puVar7 + 2);
  }
  if (*param_1 != 0) {
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>
              (*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar2 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uVar2 + 0x27;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  *param_1 = lVar4;
  param_1[2] = uVar6 * 0x10 + lVar4;
  param_1[1] = uVar5 * 0x10 + lVar4;
  return puVar7;
}



// FUNCTION 141551360 FUN_141551360 body=374 status=ok
// SIG undefined FUN_141551360(void)

undefined8 FUN_141551360(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  longlong *local_30;
  
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_StartProfileThreadUsage_144c7e388;
    *(undefined4 *)(plVar7 + 2) = param_3;
  }
  plVar1 = plVar7 + 2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_1;
  plVar6 = *(longlong **)(lVar5 + 0xa0);
  local_38 = plVar1;
  local_30 = plVar7;
  if (*(longlong **)(lVar5 + 0xa8) == plVar6) {
    FUN_141551020(lVar5 + 0x98,plVar6,&local_38);
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))();
        }
      }
    }
  }
  else {
    *plVar6 = (longlong)plVar1;
    plVar6[1] = (longlong)plVar7;
    *(longlong *)(lVar5 + 0xa0) = *(longlong *)(lVar5 + 0xa0) + 0x10;
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
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_141551680(param_1,param_2,plVar1,param_4,1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  return param_2;
}



// FUNCTION 1415514e0 FUN_1415514e0 body=406 status=ok
// SIG undefined FUN_1415514e0(void)

undefined8 FUN_1415514e0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *local_40;
  
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_StartProfileThreadUsage_144c7e388;
    *(undefined4 *)(plVar7 + 2) = param_3;
  }
  plVar1 = plVar7 + 2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_1;
  plVar6 = *(longlong **)(lVar5 + 0xa0);
  local_48 = plVar1;
  local_40 = plVar7;
  if (*(longlong **)(lVar5 + 0xa8) == plVar6) {
    FUN_141551020(lVar5 + 0x98,plVar6,&local_48);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))();
        }
      }
    }
  }
  else {
    *plVar6 = (longlong)plVar1;
    plVar6[1] = (longlong)plVar7;
    *(longlong *)(lVar5 + 0xa0) = *(longlong *)(lVar5 + 0xa0) + 0x10;
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
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_141551a10(param_1,param_2,plVar1,param_4,1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  return param_2;
}



// FUNCTION 141551680 FUN_141551680 body=900 status=ok
// SIG undefined FUN_141551680(void)

undefined8 *
FUN_141551680(longlong *param_1,undefined8 *param_2,int *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  iVar8 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  plVar9 = DAT_1468a6a38;
  plVar12 = DAT_1468a6a40;
  if (iVar8 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar8);
    plVar9 = DAT_1468a6a38;
    plVar12 = DAT_1468a6a40;
  }
  for (; plVar13 = DAT_1468a6a40, plVar9 != DAT_1468a6a40; plVar9 = plVar9 + 2) {
    puVar10 = *(undefined8 **)(*plVar9 + 0x20);
    DAT_1468a6a40 = plVar12;
    if (puVar10 != *(undefined8 **)(*plVar9 + 0x28)) {
      puVar14 = puVar10 + 2;
      do {
        cVar7 = (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,param_3);
        if (cVar7 == '\0') {
          puVar10 = puVar10 + 2;
          puVar14 = puVar14 + 2;
        }
        else {
          lVar3 = *plVar9;
          puVar15 = *(undefined8 **)(lVar3 + 0x28);
          puVar11 = puVar14;
          if (puVar14 != puVar15) {
            do {
              uVar4 = *puVar11;
              uVar5 = puVar11[1];
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[-2] = uVar4;
              plVar12 = (longlong *)puVar11[-1];
              puVar11[-1] = uVar5;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar12 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12);
                  }
                }
              }
              puVar11 = puVar11 + 2;
            } while (puVar11 != puVar15);
            puVar15 = *(undefined8 **)(lVar3 + 0x28);
          }
          plVar12 = (longlong *)puVar15[-1];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12);
              }
            }
          }
          *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + -0x10;
        }
      } while (puVar10 != *(undefined8 **)(*plVar9 + 0x28));
    }
    plVar12 = DAT_1468a6a40;
    DAT_1468a6a40 = plVar13;
  }
  DAT_1468a6a40 = plVar12;
  plVar9 = (longlong *)operator_new(0x58);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144c7e490;
    plVar9[2] = (longlong)&PTR_FUN_144c7e250;
    plVar9[3] = 0;
    *(int *)(plVar9 + 4) = *param_3;
    iVar8 = *param_3;
    *(int *)((longlong)plVar9 + 0x24) = param_4 - iVar8;
    *(undefined4 *)(plVar9 + 5) = 0x7fffffff;
    plVar9[6] = (longlong)param_3;
    plVar9[7] = (longlong)&PTR__scalar_deleting_destructor__144c7db60;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    if (param_5 != 1) {
      iVar8 = (param_4 - iVar8) + 1;
      *(int *)(plVar9 + 5) = iVar8;
      *(int *)((longlong)plVar9 + 0x24) = iVar8 * param_5 + -1;
    }
  }
  lVar3 = *param_1;
  local_70 = plVar9 + 2;
  plVar12 = *(longlong **)(lVar3 + 0x28);
  local_68 = plVar9;
  if (*(longlong **)(lVar3 + 0x30) == plVar12) {
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>
              (lVar3 + 0x20,plVar12,&local_70);
  }
  else {
    *plVar12 = 0;
    plVar12[1] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar12 = (longlong)local_70;
    plVar12[1] = (longlong)plVar9;
    *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + 0x10;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar13 = plVar9 + 1;
  plVar12 = (longlong *)0x0;
  if (param_1[1] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[1] + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    plVar12 = (longlong *)param_1[1];
  }
  local_60 = *param_1;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_58 = plVar12;
  Stormancer::Party::PartyInvitation::PartyInvitation(param_2 + 1,&local_60);
  *param_2 = &PTR_FUN_144c7dde0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar13 = (int)*plVar13 + 1;
    UNLOCK();
  }
  param_2[3] = local_70;
  param_2[4] = plVar9;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
    LOCK();
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  iVar8 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  if (iVar8 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar8);
  }
  return param_2;
}



// FUNCTION 141551a10 FUN_141551a10 body=939 status=ok
// SIG undefined FUN_141551a10(void)

undefined8 *
FUN_141551a10(longlong *param_1,undefined8 *param_2,float *param_3,float param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  iVar8 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  plVar9 = DAT_1468a6a38;
  plVar12 = DAT_1468a6a40;
  if (iVar8 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar8);
    plVar9 = DAT_1468a6a38;
    plVar12 = DAT_1468a6a40;
  }
  for (; plVar13 = DAT_1468a6a40, plVar9 != DAT_1468a6a40; plVar9 = plVar9 + 2) {
    puVar10 = *(undefined8 **)(*plVar9 + 0x20);
    DAT_1468a6a40 = plVar12;
    if (puVar10 != *(undefined8 **)(*plVar9 + 0x28)) {
      puVar14 = puVar10 + 2;
      do {
        cVar7 = (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,param_3);
        if (cVar7 == '\0') {
          puVar10 = puVar10 + 2;
          puVar14 = puVar14 + 2;
        }
        else {
          lVar3 = *plVar9;
          puVar15 = *(undefined8 **)(lVar3 + 0x28);
          puVar11 = puVar14;
          if (puVar14 != puVar15) {
            do {
              uVar4 = *puVar11;
              uVar5 = puVar11[1];
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[-2] = uVar4;
              plVar12 = (longlong *)puVar11[-1];
              puVar11[-1] = uVar5;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar12 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12);
                  }
                }
              }
              puVar11 = puVar11 + 2;
            } while (puVar11 != puVar15);
            puVar15 = *(undefined8 **)(lVar3 + 0x28);
          }
          plVar12 = (longlong *)puVar15[-1];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12);
              }
            }
          }
          *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + -0x10;
        }
      } while (puVar10 != *(undefined8 **)(*plVar9 + 0x28));
    }
    plVar12 = DAT_1468a6a40;
    DAT_1468a6a40 = plVar13;
  }
  DAT_1468a6a40 = plVar12;
  plVar9 = (longlong *)operator_new(0x58);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144c7e490;
    plVar9[2] = (longlong)&PTR_FUN_144c7e068;
    plVar9[3] = 0;
    *(float *)(plVar9 + 4) = *param_3;
    fVar16 = *param_3;
    *(undefined4 *)(plVar9 + 5) = 0x7f7fffff;
    plVar9[6] = (longlong)param_3;
    *(float *)((longlong)plVar9 + 0x24) = param_4 - fVar16;
    plVar9[7] = (longlong)&PTR__scalar_deleting_destructor__144c7db60;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    if (param_5 != 1) {
      fVar16 = (param_4 - fVar16) + 1.0;
      *(float *)(plVar9 + 5) = fVar16;
      *(float *)((longlong)plVar9 + 0x24) = (float)param_5 * fVar16 - 1.0;
    }
  }
  lVar3 = *param_1;
  local_70 = plVar9 + 2;
  plVar12 = *(longlong **)(lVar3 + 0x28);
  local_68 = plVar9;
  if (*(longlong **)(lVar3 + 0x30) == plVar12) {
    std::
    vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
    ::_Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>
              (lVar3 + 0x20,plVar12,&local_70);
  }
  else {
    *plVar12 = 0;
    plVar12[1] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar12 = (longlong)local_70;
    plVar12[1] = (longlong)plVar9;
    *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + 0x10;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar13 = plVar9 + 1;
  plVar12 = (longlong *)0x0;
  if (param_1[1] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[1] + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    plVar12 = (longlong *)param_1[1];
  }
  local_60 = *param_1;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_58 = plVar12;
  Stormancer::Party::PartyInvitation::PartyInvitation(param_2 + 1,&local_60);
  *param_2 = &PTR_FUN_144c7dde0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar13 = (int)*plVar13 + 1;
    UNLOCK();
  }
  param_2[3] = local_70;
  param_2[4] = plVar9;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
    LOCK();
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  iVar8 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  if (iVar8 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar8);
  }
  return param_2;
}



// FUNCTION 141551dc0 FUN_141551dc0 body=37 status=ok
// SIG undefined FUN_141551dc0(void)

PSRWLOCK FUN_141551dc0(PSRWLOCK param_1)

{
  InitializeSRWLock(param_1);
  param_1[1].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[2].Ptr = 0;
  *(undefined2 *)((longlong)&param_1[3].Ptr + 4) = 0;
  return param_1;
}



// FUNCTION 141551df0 FUN_141551df0 body=765 status=ok
// SIG undefined FUN_141551df0(void)

undefined8 * FUN_141551df0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_144c7e048;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = 0;
  iVar7 = *(int *)(param_2 + 0x18);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar7,0);
    puVar6 = (undefined8 *)param_1[2];
    do {
      *puVar6 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      pvVar3 = (void *)*puVar4;
      *(int *)(puVar6 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar3,(longlong)iVar1 * 2);
      }
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  param_1[4] = &PTR_FUN_144c7de68;
  param_1[5] = &PTR_FUN_144c7de08;
  FString::FString(param_1 + 6,param_2 + 0x30);
  FString::FString(param_1 + 8,param_2 + 0x40);
  FString::FString(param_1 + 10,param_2 + 0x50);
  FString::FString(param_1 + 0xc,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  param_1[0xf] = 0;
  FUN_14154e170(param_1 + 0xf,*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80),0,0);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  param_1[0x12] = 0;
  iVar7 = *(int *)(param_2 + 0x98);
  lVar2 = *(longlong *)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12,iVar7,0);
    puVar4 = (undefined8 *)param_1[0x12];
    puVar5 = (undefined4 *)(lVar2 + 0xc);
    do {
      *puVar4 = &PTR_FUN_144c7de48;
      *(undefined4 *)(puVar4 + 1) = puVar5[-1];
      *(undefined4 *)((longlong)puVar4 + 0xc) = *puVar5;
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 4;
    } while (iVar7 != 0);
  }
  param_1[0x14] = 0;
  iVar7 = *(int *)(param_2 + 0xa8);
  puVar4 = *(undefined8 **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x14,iVar7,0);
    puVar6 = (undefined8 *)param_1[0x14];
    do {
      *puVar6 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      pvVar3 = (void *)*puVar4;
      *(int *)(puVar6 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar3,(longlong)iVar1 * 2);
      }
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  param_1[0x16] = 0;
  iVar7 = *(int *)(param_2 + 0xb8);
  puVar4 = *(undefined8 **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x16,iVar7,0);
    puVar6 = (undefined8 *)param_1[0x16];
    do {
      *puVar6 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      pvVar3 = (void *)*puVar4;
      *(int *)(puVar6 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar3,(longlong)iVar1 * 2);
      }
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 1415520f0 PartyInvitation body=140 status=ok
// SIG undefined PartyInvitation(void)

undefined8 *
Stormancer::Party::PartyInvitation::PartyInvitation(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 141552180 FUN_141552180 body=143 status=ok
// SIG undefined FUN_141552180(void)

longlong * FUN_141552180(longlong *param_1)

{
  undefined8 *puVar1;
  undefined **local_48;
  undefined1 *local_40;
  undefined ***local_10;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144c7e080;
    local_48 = &PTR_FUN_144c7e550;
    local_40 = &LAB_141580f90;
    local_10 = &local_48;
    FUN_1415524d0(puVar1 + 2,DAT_1468a64b0,&local_48,1);
  }
  param_1[1] = (longlong)puVar1;
  *param_1 = (longlong)(puVar1 + 2);
  return param_1;
}



// FUNCTION 141552210 FUN_141552210 body=689 status=ok
// SIG undefined FUN_141552210(void)

undefined8 * FUN_141552210(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar7 = (longlong)(param_2[5] - param_2[4]) >> 4;
  if (uVar7 != 0) {
    if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    puVar3 = (undefined8 *)
             std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(param_1 + 4,uVar7);
    param_1[4] = puVar3;
    param_1[6] = puVar3 + uVar7 * 2;
    param_1[5] = puVar3;
    puVar2 = (undefined8 *)param_2[5];
    for (puVar6 = (undefined8 *)param_2[4]; puVar6 != puVar2; puVar6 = puVar6 + 2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      if (puVar6[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar6[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3 = puVar3 + 2;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(puVar3,puVar3,param_1 + 4);
    param_1[5] = puVar3;
  }
  param_1[0xe] = 0;
  puVar2 = (undefined8 *)param_2[0xe];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,param_1 + 7);
    param_1[0xe] = uVar4;
  }
  puVar2 = param_1 + 0x10;
  param_1[0xf] = &PTR__scalar_deleting_destructor__144c7db60;
  *puVar2 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar7 = (longlong)(param_2[0x11] - param_2[0x10]) >> 4;
  if (uVar7 != 0) {
    if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    puVar5 = (undefined8 *)
             std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(puVar2,uVar7);
    *puVar2 = puVar5;
    param_1[0x12] = puVar5 + uVar7 * 2;
    param_1[0x11] = puVar5;
    puVar6 = (undefined8 *)param_2[0x11];
    for (puVar3 = (undefined8 *)param_2[0x10]; puVar3 != puVar6; puVar3 = puVar3 + 2) {
      *puVar5 = 0;
      puVar5[1] = 0;
      if (puVar3[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar3[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5 = puVar5 + 2;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(puVar5,puVar5,puVar2);
    param_1[0x11] = puVar5;
  }
  puVar2 = param_1 + 0x13;
  *puVar2 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar7 = (longlong)(param_2[0x14] - param_2[0x13]) >> 4;
  if (uVar7 != 0) {
    if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    puVar5 = (undefined8 *)
             std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(puVar2,uVar7);
    *puVar2 = puVar5;
    param_1[0x15] = puVar5 + uVar7 * 2;
    param_1[0x14] = puVar5;
    puVar6 = (undefined8 *)param_2[0x14];
    for (puVar3 = (undefined8 *)param_2[0x13]; puVar3 != puVar6; puVar3 = puVar3 + 2) {
      *puVar5 = 0;
      puVar5[1] = 0;
      if (puVar3[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar3[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5 = puVar5 + 2;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(puVar5,puVar5,puVar2);
    param_1[0x14] = puVar5;
  }
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 1415524d0 FUN_1415524d0 body=202 status=ok
// SIG undefined FUN_1415524d0(void)

undefined8 *
FUN_1415524d0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xe] = 0;
  puVar1 = (undefined8 *)param_3[7];
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,param_1 + 7);
    param_1[0xe] = uVar3;
  }
  param_1[0xf] = &PTR__scalar_deleting_destructor__144c7db60;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = param_4;
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  return param_1;
}



// FUNCTION 1415525a0 FUN_1415525a0 body=286 status=ok
// SIG undefined FUN_1415525a0(void)

undefined8 * FUN_1415525a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__144c7d8e0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FText::FText(param_1 + 0x12);
  FText::FText(param_1 + 0x15);
  FText::FText(param_1 + 0x18);
  FText::FText(param_1 + 0x1b);
  FText::FText(param_1 + 0x1e);
  FText::FText(param_1 + 0x21);
  FText::FText(param_1 + 0x24);
  FText::FText(param_1 + 0x27);
  FText::FText(param_1 + 0x2a);
  FText::FText(param_1 + 0x2d);
  FText::FText(param_1 + 0x30);
  FText::FText(param_1 + 0x33);
  FText::FText(param_1 + 0x36);
  FText::FText(param_1 + 0x39);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  return param_1;
}



// FUNCTION 1415526c0 FUN_1415526c0 body=194 status=ok
// SIG undefined FUN_1415526c0(void)

undefined8 * FUN_1415526c0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_144c7db68;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  FWeakObjectPtr::operator=(param_1 + 0xd,0);
  *(undefined4 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 2;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 141552790 FUN_141552790 body=147 status=ok
// SIG undefined FUN_141552790(void)

void FUN_141552790(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144c7dde0;
  plVar4 = (longlong *)param_1[4];
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[2];
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 141552830 _Tidy body=106 status=ok
// SIG undefined _Tidy(void)

void std::
     vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
     ::_Tidy(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    _Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
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



// FUNCTION 1415528a0 FUN_1415528a0 body=914 status=ok
// SIG undefined FUN_1415528a0(void)

void FUN_1415528a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x1e0);
  plVar4 = *(longlong **)(param_1 + 0x1d0);
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
  plVar4 = *(longlong **)(param_1 + 0x1b8);
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
  plVar4 = *(longlong **)(param_1 + 0x1a0);
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
  plVar4 = *(longlong **)(param_1 + 0x188);
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
  plVar4 = *(longlong **)(param_1 + 0x170);
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
  plVar4 = *(longlong **)(param_1 + 0x158);
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
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  plVar4 = *(longlong **)(param_1 + 0xf8);
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
  plVar4 = *(longlong **)(param_1 + 0xe0);
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
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb0);
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
  plVar4 = *(longlong **)(param_1 + 0x98);
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
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TArray<FPoseSnapshot,FDefaultAllocator>::~TArray<FPoseSnapshot,FDefaultAllocator>(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141552c40 FUN_141552c40 body=323 status=ok
// SIG undefined FUN_141552c40(void)

longlong FUN_141552c40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  FString::operator=(param_1 + 0x20,param_2 + 0x20);
  FString::operator=(param_1 + 0x30,param_2 + 0x30);
  FString::operator=(param_1 + 0x40,param_2 + 0x40);
  plVar1 = (longlong *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (plVar1 != (longlong *)(param_2 + 0x58)) {
    lVar4 = *plVar1;
    for (iVar5 = *(int *)(param_1 + 0x60); iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_142b22800(lVar4);
      lVar4 = lVar4 + 0x18;
    }
    FUN_14154e170(plVar1,*(longlong *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x60),
                  *(undefined4 *)(param_1 + 100),0);
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  if (plVar1 != (longlong *)(param_2 + 0x70)) {
    lVar4 = *plVar1;
    for (iVar5 = *(int *)(param_1 + 0x78); iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_142b229d0(lVar4);
      lVar4 = lVar4 + 0x10;
    }
    iVar5 = *(int *)(param_2 + 0x78);
    lVar4 = *(longlong *)(param_2 + 0x70);
    *(int *)(param_1 + 0x78) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
      if (iVar5 != 0) {
        puVar2 = (undefined8 *)*plVar1;
        puVar3 = (undefined4 *)(lVar4 + 0xc);
        do {
          *puVar2 = &PTR_FUN_144c7de48;
          *(undefined4 *)(puVar2 + 1) = puVar3[-1];
          *(undefined4 *)((longlong)puVar2 + 0xc) = *puVar3;
          iVar5 = iVar5 + -1;
          puVar2 = puVar2 + 2;
          puVar3 = puVar3 + 4;
        } while (iVar5 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 141552d90 operator= body=131 status=ok
// SIG undefined operator=(void)

undefined8 *
std::shared_ptr<gte::ETManifoldMesh::Triangle>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar6 = param_2[1];
  }
  *param_1 = *param_2;
  plVar4 = (longlong *)param_1[1];
  param_1[1] = uVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 141552e20 FUN_141552e20 body=337 status=ok
// SIG undefined FUN_141552e20(void)

void FUN_141552e20(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_141552ea9;
    }
  }
  bVar2 = false;
LAB_141552ea9:
  if ((bVar2) && (lVar5 = FWeakObjectPtr::Get(*param_1 + 0x680), lVar5 != 0)) {
    lVar6 = FUN_1415833c0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((char)param_1[3] != '\0') {
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*(longlong *)*param_1 + 0x4e8))((longlong *)*param_1,DAT_1468a6868,&local_18);
      }
      if (*(char *)((longlong)param_1 + 0x19) != '\0') {
        puVar7 = (undefined8 *)FName::FName(local_res8,&DAT_144c6997b,1);
        *(undefined8 *)(lVar5 + 0x688) = *puVar7;
      }
      thunk_FUN_142eda790(lVar5,param_1 + 2);
    }
  }
  return;
}



// FUNCTION 141552f80 FUN_141552f80 body=271 status=ok
// SIG undefined FUN_141552f80(void)

void FUN_141552f80(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x188);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(*param_1 + 0x188);
    if ((*(int *)(lVar3 + 0xc40) != 0) &&
       (plVar1 = *(longlong **)(lVar3 + 0xc38), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar3 + 0xc38) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(lVar3 + 0xc38),0,0);
        *(undefined8 *)(lVar3 + 0xc38) = uVar4;
      }
      *(undefined4 *)(lVar3 + 0xc40) = 0;
    }
  }
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    FUN_140483870(DAT_1468536c8 + 0x238,*param_1);
  }
  lVar3 = FUN_140eccb70(*param_1);
  if (lVar3 != 0) {
    FUN_140483870(lVar3 + 0xd0,*param_1);
    FUN_140483870(lVar3 + 0x9d8,*param_1);
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    lVar3 = FUN_140c12480(uVar4);
    if (lVar3 != 0) {
      lVar3 = FHdrImageWrapper::GetHeight(lVar3);
      if (lVar3 != 0) {
        FUN_140483870(lVar3 + 0x38,*param_1);
      }
    }
  }
  return;
}



// FUNCTION 141553090 FUN_141553090 body=4573 status=ok
// SIG undefined FUN_141553090(void)

void FUN_141553090(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  wchar_t **ppwVar9;
  undefined8 uVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined2 *puVar21;
  wchar_t *pwVar22;
  int iVar23;
  wchar_t *pwVar24;
  int iVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  wchar_t *pwVar28;
  bool bVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_res10;
  wchar_t *local_res18;
  int local_res20;
  wchar_t *local_2a8;
  int local_2a0;
  int local_29c;
  wchar_t *local_298;
  int local_290;
  int local_28c;
  longlong *local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined8 local_270;
  longlong local_268;
  ulonglong local_260;
  undefined8 local_258;
  longlong local_248;
  longlong local_240;
  wchar_t *local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  ulonglong local_218;
  wchar_t *local_210;
  int local_208;
  undefined4 local_204;
  longlong local_200;
  ulonglong local_1f8;
  wchar_t *local_1f0;
  int local_1e8;
  int local_1e4;
  longlong local_1e0;
  wchar_t *local_1d8;
  size_t *local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  float local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [8];
  longlong *local_198;
  float local_188;
  undefined1 local_184;
  undefined1 local_180 [8];
  longlong *local_178;
  float local_168;
  undefined1 local_164;
  longlong local_160 [2];
  longlong local_150 [2];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  
  lVar16 = *param_1;
  if (*(longlong *)(lVar16 + 0x1a0) == 0) {
    return;
  }
  if (*(longlong *)(lVar16 + 0x1a8) == 0) {
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x34) == '\0') &&
     ((*(char *)(lVar16 + 0x1b0) - 1U & 0xfd) != 0)) {
    return;
  }
  *(undefined1 *)(lVar16 + 0x1f0) = 0;
  fVar32 = *(float *)(param_1 + 7);
  puVar8 = (undefined8 *)FText::ToString(param_1 + 1);
  pwVar17 = (wchar_t *)0x0;
  iVar20 = 0;
  local_2a8 = (wchar_t *)0x0;
  local_2a0 = *(int *)(puVar8 + 1);
  lVar16 = (longlong)local_2a0;
  pvVar3 = (void *)*puVar8;
  if (local_2a0 == 0) {
    local_29c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2a8,local_2a0,0);
    _guard_xfg_dispatch_icall_nop(local_2a8,pvVar3,lVar16 * 2);
  }
  fVar34 = *(float *)(param_1 + 6);
  local_288 = (longlong *)0x0;
  local_280 = 0;
  local_1d8 = L"";
  iVar23 = 0;
  if (*(int *)(*param_1 + 0x1d8) == 0) {
    puVar21 = &DAT_143f3eda8;
    if (DAT_1464a14d8 != 0) {
      puVar21 = DAT_1464a14d0;
    }
    iVar4 = FUN_141594550(&local_2a8,&local_288,puVar21,0);
    if (0 < iVar4) {
      pwVar22 = pwVar17;
      if (0 < (int)local_280) {
        do {
          FString::TrimStartAndEndInline(local_288 + (longlong)(int)pwVar22 * 2);
          uVar18 = (int)pwVar22 + 2;
          pwVar22 = (wchar_t *)(ulonglong)uVar18;
        } while ((int)uVar18 < (int)local_280);
      }
      local_268 = 0;
      local_260 = 0;
      local_258 = 0xffffffff;
      pwVar28 = pwVar17;
      pwVar24 = pwVar17;
      pwVar22 = pwVar17;
      pwVar26 = pwVar17;
      pwVar12 = pwVar17;
      iVar4 = (int)local_280;
      iVar5 = iVar20;
      iVar25 = iVar20;
      iVar6 = iVar20;
      if ((int)local_280 < 1) {
LAB_141553320:
        local_260 = CONCAT44(local_260._4_4_,iVar5 + 1);
        local_258 = CONCAT44((int)param_1[6],iVar4 + -1);
        if (iVar25 < iVar5 + 1) {
          TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
          ::ResizeGrow(&local_268,iVar5);
        }
        *(longlong *)(local_268 + (longlong)iVar5 * 0xc) = local_258;
        *(int *)(local_268 + 8 + (longlong)iVar5 * 0xc) = iVar6;
        iVar4 = (int)local_280;
      }
      else {
        do {
          iVar5 = *(int *)((longlong)(pwVar26 + 4) + (longlong)local_288) + -1;
          if (*(int *)((longlong)(pwVar26 + 4) + (longlong)local_288) == 0) {
            iVar5 = iVar20;
          }
          uVar18 = (int)pwVar24 + iVar5;
          pwVar24 = (wchar_t *)(ulonglong)uVar18;
          iVar7 = (int)pwVar12;
          if (iVar7 < iVar4 + -1) {
            if (*(int *)((longlong)(pwVar26 + 0xc) + (longlong)local_288) == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = *(wchar_t **)((longlong)(pwVar26 + 8) + (longlong)local_288);
            }
            dVar30 = _wtof(pwVar12);
            if (0.0 < (float)dVar30) {
              iVar4 = (int)pwVar28;
              local_258 = CONCAT44((float)dVar30,iVar7);
              uVar19 = iVar4 + 1;
              local_260 = CONCAT44(local_260._4_4_,uVar19);
              if ((int)pwVar22 < (int)uVar19) {
                TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
                ::ResizeGrow(&local_268,pwVar28);
                pwVar22 = (wchar_t *)(local_260 >> 0x20);
                uVar19 = (uint)local_260;
              }
              pwVar28 = (wchar_t *)(ulonglong)uVar19;
              *(longlong *)(local_268 + (longlong)iVar4 * 0xc) = local_258;
              *(uint *)(local_268 + 8 + (longlong)iVar4 * 0xc) = uVar18;
              pwVar24 = pwVar17;
            }
            iVar4 = (int)local_280;
          }
          iVar6 = (int)pwVar24;
          iVar25 = (int)pwVar22;
          iVar5 = (int)pwVar28;
          pwVar26 = pwVar26 + 0x10;
          pwVar12 = (wchar_t *)(ulonglong)(iVar7 + 2U);
        } while ((int)(iVar7 + 2U) < iVar4);
        if ((iVar5 == 0) || (*(int *)(local_268 + (longlong)(iVar5 + -1) * 0xc) < iVar4 + -2))
        goto LAB_141553320;
      }
      iVar25 = (int)param_1[5];
      fVar34 = 0.0;
      local_res10 = 0;
      iVar5 = iVar25 + -1;
      if (iVar25 == 0) {
        iVar5 = -1;
      }
      pwVar22 = (wchar_t *)(ulonglong)(iVar25 - 1);
      if (iVar25 == 0) {
        pwVar22 = (wchar_t *)0xffffffff;
        iVar5 = iVar20;
      }
      bVar29 = iVar5 != 0;
      local_res18 = pwVar17;
      if ((iVar5 != 0) && (local_res18 = pwVar22, iVar25 == 0)) {
        local_res18 = (wchar_t *)0x0;
      }
      local_res20 = 0;
      if (0 < iVar4) {
        local_228 = 0;
        pwVar22 = pwVar17;
        do {
          lVar16 = (longlong)(int)pwVar22;
          local_258 = local_268;
          local_1e0 = lVar16 * 3;
          fVar31 = *(float *)(local_268 + 4 + lVar16 * 0xc) - fVar34;
          if (fVar31 <= fVar32) {
            fVar32 = fVar32 - fVar31;
          }
          else {
            iVar5 = *(int *)(local_228 + 8 + (longlong)local_288);
            iVar25 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar25 = iVar20;
            }
            iVar6 = iVar20;
            if (bVar29) {
              iVar6 = (int)local_res18;
            }
            fVar31 = ((float)(iVar25 + iVar6) /
                     (float)(*(int *)(local_268 + 8 + lVar16 * 0xc) + (int)local_res18)) * fVar31;
            if ((fVar32 <= 0.0) || (0.5 < fVar31 - fVar32)) {
              local_298 = (wchar_t *)0x0;
              pvVar3 = *(void **)(local_228 + (longlong)local_288);
              local_290 = iVar5;
              if (iVar5 == 0) {
                local_28c = 0;
                iVar4 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_298,iVar5,0);
                _guard_xfg_dispatch_icall_nop(local_298,pvVar3,(longlong)iVar5 * 2);
                iVar4 = local_290;
              }
              fVar33 = fVar31;
              if (2.0 < fVar32) {
                fVar33 = fVar31 - fVar32;
                fVar32 = fVar33;
                if (fVar33 <= 1.0) {
                  fVar32 = 1.0;
                }
                iVar5 = iVar20;
                if (iVar4 != 0) {
                  iVar5 = iVar4 + -1;
                }
                iVar4 = FUN_14155c160(&local_298,(int)(((fVar31 - fVar32) / fVar31) * (float)iVar5))
                ;
                if (local_290 == 0) {
                  pwVar22 = L"";
                  iVar5 = iVar20;
                }
                else {
                  pwVar22 = local_298;
                  iVar5 = local_290 + -1;
                }
                iVar4 = iVar5 - iVar4;
                iVar25 = iVar23;
                if ((-1 < iVar4) && (iVar25 = iVar5, iVar4 < iVar5)) {
                  iVar25 = iVar4;
                }
                local_218 = 0;
                pwVar22 = pwVar22 + ((longlong)iVar5 - (longlong)iVar25);
                local_220 = 0;
                if ((pwVar22 != (wchar_t *)0x0) && (*pwVar22 != L'\0')) {
                  lVar16 = -1;
                  do {
                    lVar13 = lVar16 + 1;
                    lVar16 = lVar16 + 1;
                  } while (pwVar22[lVar13] != L'\0');
                  uVar18 = (int)lVar16 + 1;
                  local_218 = (ulonglong)uVar18;
                  if (0 < (int)uVar18) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
                  }
                  FGenericPlatformString::Memcpy(local_220,pwVar22,(longlong)(int)uVar18 * 2);
                }
                ppwVar9 = (wchar_t **)FString::TrimStart(&local_220,local_160);
                if (&local_298 != ppwVar9) {
                  if (local_298 != (wchar_t *)0x0) {
                    FMemory::Free();
                  }
                  local_298 = *ppwVar9;
                  *ppwVar9 = (wchar_t *)0x0;
                  local_290 = *(int *)(ppwVar9 + 1);
                  local_28c = *(int *)((longlong)ppwVar9 + 0xc);
                  ppwVar9[1] = (wchar_t *)0x0;
                }
                if (local_160[0] != 0) {
                  FMemory::Free();
                }
                if (local_220 != 0) {
                  FMemory::Free();
                }
                fVar32 = 0.0;
                iVar4 = local_290;
              }
              pwVar22 = local_298;
              if (bVar29) {
                iVar5 = (int)param_1[5];
                pwVar28 = pwVar17;
                if (iVar5 < 2) {
                  local_238 = (wchar_t *)0x0;
                  local_230 = CONCAT44(local_230._4_4_,iVar4);
                  if (iVar4 == 0) {
                    iVar4 = iVar23;
                    iVar5 = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_238,iVar4,0);
                    pwVar28 = local_238;
                    _guard_xfg_dispatch_icall_nop(local_238,pwVar22,(longlong)iVar4 * 2);
                    iVar4 = local_230._4_4_;
                    iVar5 = (int)local_230;
                  }
                }
                else {
                  iVar25 = iVar4 + -1;
                  if (iVar4 == 0) {
                    iVar25 = iVar20;
                  }
                  if ((iVar5 != 0) || (iVar4 = 1, iVar25 == 0)) {
                    iVar4 = iVar20;
                  }
                  local_278 = (wchar_t *)0x0;
                  local_270 = CONCAT44(local_270._4_4_,iVar5);
                  pvVar3 = (void *)param_1[4];
                  if ((iVar5 == 0) && (iVar25 + iVar4 == 0)) {
                    local_270 = 0;
                    uVar27 = 0;
                    iVar4 = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                              (&local_278,iVar25 + iVar4 + iVar5,0);
                    pwVar28 = local_278;
                    _guard_xfg_dispatch_icall_nop(local_278,pvVar3,(longlong)iVar5 * 2);
                    uVar27 = local_270 & 0xffffffff;
                    iVar4 = local_270._4_4_;
                  }
                  pwVar22 = local_298;
                  iVar6 = (int)uVar27;
                  iVar5 = iVar6;
                  if (iVar25 != 0) {
                    iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar25;
                    local_270._0_4_ = iVar5;
                    if (iVar4 < iVar5) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,uVar27);
                      pwVar28 = local_278;
                      iVar4 = local_270._4_4_;
                    }
                    iVar5 = (int)local_270;
                    _guard_xfg_dispatch_icall_nop
                              (pwVar28 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),pwVar22,
                               (longlong)iVar25 * 2);
                    (pwVar28 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar25] = L'\0';
                  }
                  local_278 = (wchar_t *)0x0;
                  local_270 = 0;
                }
                if (local_298 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                bVar29 = false;
                local_238 = (wchar_t *)0x0;
                local_230 = 0;
                local_298 = pwVar28;
                local_290 = iVar5;
                local_28c = iVar4;
              }
              uVar10 = FUN_1404b03b0();
              FText::FText(local_1c0,uVar10);
              local_1a8 = 0.0;
              uVar10 = FText::FromString(local_140,&local_298);
              FText::operator=(local_1c0,uVar10);
              plVar11 = local_138;
              if (local_138 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_138 + 1;
                lVar16 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar16 == 1) {
                  (**(code **)*local_138)(local_138);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              local_1a4 = *(undefined1 *)((longlong)param_1 + 0x34);
              local_1a8 = fVar33;
              AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
              lVar16 = *param_1;
              iVar4 = *(int *)(lVar16 + 0x1d8);
              *(int *)(lVar16 + 0x1d8) = iVar4 + 1;
              if (*(int *)(lVar16 + 0x1dc) < iVar4 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow((longlong *)(lVar16 + 0x1d0),iVar4);
              }
              lVar16 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar16 + 0x1d0);
              FText::FText(lVar16,local_1c0);
              *(float *)(lVar16 + 0x18) = local_1a8;
              *(undefined1 *)(lVar16 + 0x1c) = local_1a4;
              ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
              plVar11 = local_1b8;
              if (local_1b8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_1b8 + 1;
                lVar16 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar16 == 1) {
                  (**(code **)*local_1b8)(local_1b8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              if (local_298 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              pwVar22 = (wchar_t *)(ulonglong)local_res10;
              iVar4 = (int)local_280;
            }
            else {
              pwVar22 = (wchar_t *)(ulonglong)local_res10;
              fVar32 = fVar32 - fVar31;
            }
          }
          if (local_res20 == *(int *)(local_258 + local_1e0 * 4)) {
            fVar34 = *(float *)(local_258 + 4 + local_1e0 * 4);
            local_res10 = (int)pwVar22 + 1;
            pwVar22 = (wchar_t *)(ulonglong)local_res10;
            if (!bVar29) {
              local_res18 = pwVar17;
            }
          }
          local_res20 = local_res20 + 2;
          local_228 = local_228 + 0x20;
        } while (local_res20 < iVar4);
      }
      if (*(int *)(*param_1 + 0x1d8) == 0) {
        plVar11 = local_288;
        if (local_268 != 0) {
          FMemory::Free();
          iVar4 = (int)local_280;
          plVar11 = local_288;
        }
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        goto joined_r0x0001415541ee;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
      lVar16 = *(longlong *)(*param_1 + 0x1d0);
      FText::FText(local_180,lVar16);
      local_168 = *(float *)(lVar16 + 0x18);
      local_164 = *(undefined1 *)(lVar16 + 0x1c);
      TArray<FStreamInteractionDelayedMessage,FDefaultAllocator>::RemoveAtImpl
                (*param_1 + 0x1d0,0,1,1);
      ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
      ppwVar9 = (wchar_t **)FText::ToString(local_180);
      if (&local_2a8 != ppwVar9) {
        local_2a0 = *(int *)(ppwVar9 + 1);
        lVar16 = (longlong)local_2a0;
        pwVar22 = *ppwVar9;
        if ((local_2a0 == 0) && (local_29c == 0)) {
          local_29c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2a8,local_2a0);
          _guard_xfg_dispatch_icall_nop(local_2a8,pwVar22,lVar16 * 2);
        }
      }
      fVar34 = local_168;
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_178 + 1;
        lVar16 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if (local_268 != 0) {
        FMemory::Free();
      }
    }
  }
  (**(code **)(**(longlong **)(*param_1 + 0x1a0) + 0x278))(*(longlong **)(*param_1 + 0x1a0),1);
  lVar16 = **(longlong **)(*param_1 + 0x1a0);
  uVar10 = FText::FromString(local_128,&local_2a8);
  (**(code **)(lVar16 + 0x2b0))(*(undefined8 *)(*param_1 + 0x1a0),uVar10,1,0);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_120 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  (**(code **)(**(longlong **)(*param_1 + 0x1a8) + 0x278))(*(longlong **)(*param_1 + 0x1a8),1);
  fVar32 = (float)FUN_142eee7f0(*(undefined8 *)(*param_1 + 0x1a0));
  lVar16 = *param_1;
  bVar29 = *(float *)(lVar16 + 0x174) < *(float *)(lVar16 + 0x1f8);
  if (bVar29) {
    iVar4 = *(int *)(lVar16 + 0x180) + -2;
    iVar5 = FUN_142eed950(*(undefined8 *)(lVar16 + 0x1a0));
    if (iVar5 == 1) {
      lVar16 = *param_1;
      goto LAB_141553b7e;
    }
  }
  else {
    iVar4 = *(int *)(lVar16 + 0x180) + -1;
LAB_141553b7e:
    if (-1 < iVar4) {
      lVar13 = (longlong)iVar4;
      pfVar14 = (float *)(*(longlong *)(lVar16 + 0x178) + lVar13 * 4);
      do {
        if (fVar32 < *pfVar14) break;
        iVar4 = iVar4 + -1;
        pfVar14 = pfVar14 + -1;
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
  }
  iVar5 = FUN_142eed950(*(undefined8 *)(*param_1 + 0x1a0));
  if ((1 < iVar5) ||
     ((bVar29 &&
      (pfVar14 = (float *)(*(longlong *)(*param_1 + 0x178) + (longlong)iVar4 * 4),
      *pfVar14 <= fVar32 && fVar32 != *pfVar14)))) {
    FUN_142088ee0(*(undefined8 *)(*param_1 + 0x1a8),bVar29);
    local_248 = 0;
    local_240 = 0;
    iVar5 = iVar20;
    if (local_2a0 != 0) {
      iVar5 = local_2a0 + -1;
    }
    FUN_1415d4630(&local_1d0);
    (**(code **)(*local_1d0 + 0x10))(local_1d0,&local_2a8);
    pwVar22 = pwVar17;
    if ((local_2a0 != 0) && (iVar25 = local_2a0 + -1, pwVar22 = (wchar_t *)0x0, 0 < iVar25)) {
      pwVar22 = pwVar17;
      while (iVar25 != -1) {
        uVar18 = ((int)pwVar22 + 1 + iVar25) / 2;
        iVar6 = (**(code **)(*local_1d0 + 0x58))(local_1d0,uVar18 - 1);
        if ((iVar6 == -1) || (iVar25 < iVar6)) break;
        if (local_2a0 == 0) {
          pwVar28 = L"";
          iVar7 = iVar20;
        }
        else {
          pwVar28 = local_2a8;
          iVar7 = local_2a0 + -1;
        }
        iVar15 = iVar23;
        if ((-1 < iVar6) && (iVar15 = iVar7, iVar6 < iVar7)) {
          iVar15 = iVar6;
        }
        local_210 = (wchar_t *)0x0;
        local_204 = 0;
        local_208 = iVar15 + 1;
        if (iVar15 == 0) {
          local_208 = iVar20;
        }
        if ((0 < local_208) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0), pwVar24 = local_210,
           0 < local_208)) {
          wcsncpy(local_210,pwVar28,(longlong)iVar15);
          pwVar24[iVar15] = L'\0';
        }
        lVar16 = **(longlong **)(*param_1 + 0x1a0);
        uVar10 = FText::FromString(local_110,&local_210);
        (**(code **)(lVar16 + 0x2b0))(*(undefined8 *)(*param_1 + 0x1a0),uVar10,1,0);
        plVar11 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        if (local_210 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar6 = FUN_142eed950(*(undefined8 *)(*param_1 + 0x1a0));
        if ((iVar6 < 2) ||
           ((bVar29 &&
            (lVar16 = *(longlong *)(*param_1 + 0x178),
            fVar32 = (float)FUN_142eee7f0(*(undefined8 *)(*param_1 + 0x1a0)),
            pfVar14 = (float *)(lVar16 + (longlong)iVar4 * 4),
            fVar32 < *pfVar14 || fVar32 == *pfVar14)))) {
          pwVar22 = (wchar_t *)(ulonglong)uVar18;
        }
        else {
          iVar25 = (**(code **)(*local_1d0 + 0x50))(local_1d0,uVar18);
        }
        if (iVar25 <= (int)pwVar22) break;
      }
    }
    iVar4 = FUN_14155c160(&local_2a8,pwVar22);
    if (local_2a0 == 0) {
      pwVar22 = L"";
      iVar25 = iVar20;
    }
    else {
      pwVar22 = local_2a8;
      iVar25 = local_2a0 + -1;
    }
    iVar7 = iVar25 - iVar4;
    iVar6 = iVar23;
    if ((-1 < iVar7) && (iVar6 = iVar25, iVar7 < iVar25)) {
      iVar6 = iVar7;
    }
    local_1f8 = 0;
    pwVar22 = pwVar22 + ((longlong)iVar25 - (longlong)iVar6);
    local_200 = 0;
    if ((pwVar22 != (wchar_t *)0x0) && (*pwVar22 != L'\0')) {
      lVar16 = -1;
      do {
        lVar16 = lVar16 + 1;
      } while (pwVar22[lVar16] != L'\0');
      uVar18 = (int)lVar16 + 1;
      local_1f8 = (ulonglong)uVar18;
      if (0 < (int)uVar18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
      }
      FGenericPlatformString::Memcpy(local_200,pwVar22,(longlong)(int)uVar18 * 2);
    }
    plVar11 = (longlong *)FString::TrimStart(&local_200,local_150);
    if (&local_248 != plVar11) {
      if (local_248 != 0) {
        FMemory::Free();
      }
      local_248 = *plVar11;
      *plVar11 = 0;
      local_240 = plVar11[1];
      plVar11[1] = 0;
    }
    if (local_150[0] != 0) {
      FMemory::Free();
    }
    if (local_200 != 0) {
      FMemory::Free();
    }
    iVar25 = local_2a0 + -1;
    if (local_2a0 == 0) {
      iVar25 = iVar23;
    }
    iVar6 = iVar20;
    if ((int)local_240 != 0) {
      iVar6 = (int)local_240 + -1;
    }
    iVar7 = iVar20;
    if (local_2a0 != 0) {
      local_1d8 = local_2a8;
      iVar7 = local_2a0 + -1;
    }
    iVar15 = iVar23;
    if ((-1 < iVar4) && (iVar15 = iVar7, iVar4 < iVar7)) {
      iVar15 = iVar4;
    }
    local_1f0 = (wchar_t *)0x0;
    local_1e4 = 0;
    iVar7 = iVar15 + 1;
    if (iVar15 == 0) {
      iVar7 = 0;
    }
    local_1e8 = iVar7;
    if ((0 < iVar7) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0), iVar23 = local_1e4,
       iVar7 = local_1e8, pwVar17 = local_1f0, 0 < local_1e8)) {
      wcsncpy(local_1f0,local_1d8,(longlong)iVar15);
      pwVar17[iVar15] = L'\0';
    }
    if (local_2a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    lVar16 = **(longlong **)(*param_1 + 0x1a0);
    local_2a8 = pwVar17;
    local_2a0 = iVar7;
    local_29c = iVar23;
    uVar10 = FText::FromString(local_f8,&local_2a8);
    (**(code **)(lVar16 + 0x2b0))(*(undefined8 *)(*param_1 + 0x1a0),uVar10,1,0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_f0 + 1;
      lVar16 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    uVar10 = FUN_1404b03b0();
    FText::FText(local_1a0,uVar10);
    local_188 = 0.0;
    uVar10 = FText::FromString(local_e0,&local_248);
    FText::operator=(local_1a0,uVar10);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_d8 + 1;
      lVar16 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    iVar23 = iVar20;
    if ((int)local_240 != 0) {
      iVar23 = (int)local_240 + -1;
    }
    local_184 = *(undefined1 *)((longlong)param_1 + 0x34);
    local_188 = (float)iVar23 * fVar34 * (1.0 / (float)iVar5);
    AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
    lVar16 = *param_1;
    plVar11 = (longlong *)(lVar16 + 0x1d0);
    iVar23 = *(int *)(lVar16 + 0x1d8);
    *(int *)(lVar16 + 0x1d8) = iVar23 + 1;
    if (*(int *)(lVar16 + 0x1dc) < iVar23 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar11,iVar23);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar11 + 0x20),(void *)*plVar11,(longlong)iVar23 << 5);
    lVar16 = *plVar11;
    FText::FText(lVar16,local_1a0);
    *(float *)(lVar16 + 0x18) = local_188;
    *(undefined1 *)(lVar16 + 0x1c) = local_184;
    ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
    if (local_2a0 != 0) {
      iVar20 = local_2a0 + -1;
    }
    fVar34 = fVar34 * (float)(iVar20 + ((iVar25 - iVar4) - iVar6)) * (1.0 / (float)iVar5);
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_198 + 1;
      lVar16 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar2 = (int *)((longlong)local_198 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1c8 + 1;
      lVar16 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar2 = (int *)((longlong)local_1c8 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    if (local_248 != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_142088ee0(*(undefined8 *)(*param_1 + 0x1a8),iVar4 + 1);
  }
  *(float *)(*param_1 + 500) = fVar34;
  plVar11 = local_288;
  for (iVar20 = (int)local_280; iVar20 != 0; iVar20 = iVar20 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
joined_r0x0001415541ee:
  if (local_288 != (longlong *)0x0) {
    FMemory::Free(local_288);
  }
  if (local_2a8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141554270 FUN_141554270 body=311 status=ok
// SIG undefined FUN_141554270(void)

void FUN_141554270(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar6 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       (cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x808), cVar3 != '\0')) {
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      lVar6 = param_1[1];
      local_28 = 0;
      local_20 = 0;
      puVar7 = (undefined8 *)operator_new(0x20,&local_28);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_GetPoolName_144c7e1c0;
        *(int *)(puVar7 + 1) = (int)lVar6;
        *(undefined4 *)((longlong)puVar7 + 0xc) = uVar2;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[3] = uVar8;
        *puVar7 = &PTR_GetPoolName_144c7e208;
      }
      uVar8 = FWeakObjectPtr::Get(*param_1 + 0x808);
      FUN_14157d130(uVar8,&local_28,5,1);
    }
  }
  return;
}



// FUNCTION 1415543b0 FUN_1415543b0 body=255 status=ok
// SIG undefined FUN_1415543b0(void)

void FUN_1415543b0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if ((*(uint *)(lVar4 + 0x378) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x370) + 0x10))
                  (*(longlong **)(lVar4 + 0x370),lVar4 + 0x360,*(undefined8 *)(lVar4 + 0x380));
        *(undefined8 *)(lVar4 + 0x370) = 0;
      }
      *(undefined4 *)(lVar4 + 0x378) = 1;
      lVar4 = *param_1;
      if ((*(uint *)(lVar4 + 0x3a8) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x3a0) + 0x10))
                  (*(longlong **)(lVar4 + 0x3a0),lVar4 + 0x390,*(undefined8 *)(lVar4 + 0x3b0));
        *(undefined8 *)(lVar4 + 0x3a0) = 0;
      }
      *(undefined4 *)(lVar4 + 0x3a8) = 1;
    }
  }
  return;
}



// FUNCTION 1415544b0 FUN_1415544b0 body=233 status=ok
// SIG undefined FUN_1415544b0(void)

void FUN_1415544b0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 2), cVar2 != '\0')) {
      uVar5 = FWeakObjectPtr::Get(param_1 + 2);
      lVar4 = FUN_140cff230(uVar5);
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x22c) = *(int *)(lVar4 + 0x22c) + (int)param_1[3];
        *(undefined1 *)(lVar4 + 0x28) = 1;
        FUN_14172cc40(lVar4,1);
        TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
                  (*param_1 + 0xd8,*(undefined4 *)(lVar4 + 0x22c));
      }
    }
  }
  return;
}



// FUNCTION 1415545a0 FUN_1415545a0 body=189 status=ok
// SIG undefined FUN_1415545a0(void)

void FUN_1415545a0(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (param_3 == 0xc9) {
    cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x68);
    lVar4 = *param_1;
    if (cVar2 != '\0') {
      if (*(char *)(lVar4 + 200) == '\0') {
        FUN_14155dac0();
        cVar2 = FUN_141557680(*param_1);
        if (cVar2 != '\0') {
          uVar3 = FWeakObjectPtr::Get(*param_1 + 0x68);
          FUN_14155db20(*param_1,uVar3,*(undefined4 *)(*param_1 + 0x70));
        }
      }
      lVar4 = *param_1;
      uVar3 = 1;
      goto LAB_141554616;
    }
  }
  else if (0 < *(int *)(lVar4 + 0xc4)) {
    FUN_1415784a0();
    return;
  }
  uVar3 = 0;
LAB_141554616:
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(lVar4 + 0x38,uVar3);
  lVar4 = *param_1;
  if ((*(int *)(lVar4 + 0x40) != 0) &&
     (plVar1 = *(longlong **)(lVar4 + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(lVar4 + 0x38),0,0);
      *(undefined8 *)(lVar4 + 0x38) = uVar3;
    }
    *(undefined4 *)(lVar4 + 0x40) = 0;
  }
  return;
}



// FUNCTION 141554660 FUN_141554660 body=184 status=ok
// SIG undefined FUN_141554660(void)

void FUN_141554660(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x818);
      if (cVar2 != '\0') {
        uVar5 = FWeakObjectPtr::Get(*param_1 + 0x818);
        FUN_141587b70(uVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141554720 FUN_141554720 body=531 status=ok
// SIG undefined FUN_141554720(void)

void FUN_141554720(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar5 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
      plVar9 = (longlong *)*plVar5;
      plVar5 = plVar9 + (int)plVar5[1];
      for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          uVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))();
          lVar3 = UPlayer::GetPlayerController(lVar3,uVar6);
          if (lVar3 != 0) {
            lVar4 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              if ((((char)param_1[2] == '\0') && (*(longlong *)(*param_1 + 0x6d8) != 0)) &&
                 (iVar8 = 0, 0 < *(int *)(*(longlong *)(*param_1 + 0x6d8) + 0x38))) {
                do {
                  FUN_141460860(lVar3,iVar8);
                  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x6f0);
                  if (cVar2 != '\0') {
                    FWeakObjectPtr::Get(*param_1 + 0x6f0);
                    lVar4 = UWidgetComponent::GetRenderTarget(lVar3);
                    if (lVar4 != 0) {
                      lVar7 = FUN_14142a560();
                      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if (bVar1) {
                        local_res8 = *(undefined4 *)(lVar4 + 0x720);
                        local_resc = *(undefined4 *)(lVar4 + 0x724);
                        cVar2 = FWeakObjectPtr::IsValid(&local_res8);
                        if (cVar2 != '\0') {
                          uVar6 = FWeakObjectPtr::Get(&local_res8);
                          FUN_140eeb300(uVar6);
                        }
                      }
                    }
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(*(longlong *)(*param_1 + 0x6d8) + 0x38));
              }
              FUN_14145fe70(lVar3,(int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc));
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141554940 FUN_141554940 body=436 status=ok
// SIG undefined FUN_141554940(void)

void FUN_141554940(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_18 [2];
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 4);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 4);
    lVar6 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
        (cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 2) + 0x6c), cVar2 != '\0')) &&
       (cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 2) + 0x74), cVar2 != '\0')) {
      uVar5 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 2) + 0x6c);
      FUN_14157ae40(uVar5,*param_1);
      lVar6 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 2) + 0x6c);
      if (ABS(*(float *)(lVar6 + 0x184) - 1.0) <= 1e-08) {
        local_18[0] = 0;
        local_18[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"highlightFull",0x1c);
        uVar5 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 2) + 0x74);
        FUN_142088910(uVar5,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        lVar6 = *(longlong *)(param_1 + 2);
        cVar2 = FWeakObjectPtr::IsValid(lVar6 + 0x84);
        if (cVar2 != '\0') {
          local_18[0] = 0;
          local_18[1] = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Memcpy(local_18[0],L"Play",10);
          uVar5 = FWeakObjectPtr::Get(lVar6 + 0x84);
          FUN_142088910(uVar5,local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141554b00 FUN_141554b00 body=246 status=ok
// SIG undefined FUN_141554b00(void)

void FUN_141554b00(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x818);
      if (cVar3 != '\0') {
        cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x808);
        if (cVar3 != '\0') {
          lVar6 = FWeakObjectPtr::Get(*param_1 + 0x808);
          uVar1 = *(undefined4 *)(lVar6 + 0x70);
          uVar7 = FWeakObjectPtr::Get(*param_1 + 0x808);
          iVar4 = FUN_14155d2b0(uVar7,lVar5,uVar1);
          *(bool *)(*param_1 + 0x82d) = iVar4 == 0;
          if (*(char *)(*param_1 + 0x82d) != '\0') {
            uVar7 = FWeakObjectPtr::Get(*param_1 + 0x818);
            FUN_1415879b0(uVar7);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141554c00 FUN_141554c00 body=184 status=ok
// SIG undefined FUN_141554c00(void)

void FUN_141554c00(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x818);
      if (cVar2 != '\0') {
        uVar5 = FWeakObjectPtr::Get(*param_1 + 0x818);
        FUN_141587a30(uVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141554cc0 FUN_141554cc0 body=863 status=ok
// SIG undefined FUN_141554cc0(void)

void FUN_141554cc0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  longlong *local_88;
  int local_80;
  code *local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x58c);
  if (cVar4 == '\0') {
    return;
  }
  uVar5 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  FUN_142dcf3a0(uVar5,&local_68);
  uVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  plVar6 = (longlong *)FUN_140d3a420(uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_141554fcb;
  lVar11 = *param_1;
  lVar7 = FWeakObjectPtr::Get(lVar11 + 0x58c);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Please wait while you are connected...",L"OakGameInstance",
                         L"JoiningGameDescription");
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"SHiFT",L"MultiplayerMenu",L"ShiftText");
      uVar5 = FUN_1410f2b30(lVar7,uVar9,uVar5,0,0,1);
      *(undefined8 *)(lVar11 + 0x6d8) = uVar5;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_38 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
  }
  lVar11 = *param_1;
  local_78 = FUN_14156d290;
  uStack_70 = (longlong *)((ulonglong)uStack_70._4_4_ << 0x20);
  local_88 = (longlong *)0x0;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_80 = 3;
  local_88 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar10 + 1,lVar11);
    plVar10[2] = (longlong)local_78;
    plVar10[3] = (longlong)uStack_70;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar11;
    *plVar10 = (longlong)&PTR_FUN_143fcff08;
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar6 + 0x80))(plVar6,local_res8,&local_88);
  *(undefined8 *)(*param_1 + 0x6e0) = *puVar12;
  if (local_80 == 0) {
LAB_141554f54:
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x28))(local_88,0);
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
    }
    local_80 = 0;
    goto LAB_141554f54;
  }
  local_78 = local_68;
  uStack_70 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  FUN_140d2abc0(plVar6,&local_78,0);
  plVar6 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_70 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*uStack_70)(uStack_70);
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
LAB_141554fcb:
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_60 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plStack_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 141555020 FUN_141555020 body=588 status=ok
// SIG undefined FUN_141555020(void)

void FUN_141555020(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_res8 = 0;
  if (*(longlong *)(*param_1 + 0x348) != 0) {
    FTimespan::Assign(&local_res8,0,0,0,param_2,0);
    lVar2 = CONCAT44(uStackX_c,local_res8);
    uVar7 = (lVar2 / 36000000000) % 0x18;
    lVar4 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8);
    bVar1 = (int)uVar7 < 1;
    if (bVar1) {
      lVar4 = lVar2 + lVar4;
      lVar6 = (lVar4 >> 0x17) - (lVar4 >> 0x3f);
      lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
      lVar2 = lVar2 / 600000000;
      lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
      FString::PrintfImpl(local_28,L"%02d:%02d",
                          (int)lVar2 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c,
                          (int)lVar6 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c);
      plVar3 = local_28;
    }
    else {
      lVar4 = lVar2 + lVar4;
      lVar6 = (lVar4 >> 0x17) - (lVar4 >> 0x3f);
      lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
      lVar2 = lVar2 / 600000000;
      lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
      FString::PrintfImpl(local_18,L"%d:%02d:%02d",uVar7 & 0xffffffff,
                          (int)lVar2 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c,
                          (int)lVar6 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c);
      plVar3 = local_18;
    }
    local_38 = *plVar3;
    *plVar3 = 0;
    local_30 = (undefined4)plVar3[1];
    local_2c = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
    if (bVar1) {
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    if ((!bVar1) && (local_18[0] != 0)) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(*param_1 + 0x348) + 0x2a8))
              (*(longlong **)(*param_1 + 0x348),&local_38,1,0);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141555270 FUN_141555270 body=150 status=ok
// SIG undefined FUN_141555270(void)

void FUN_141555270(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_141554cc0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141555310 FUN_141555310 body=341 status=ok
// SIG undefined FUN_141555310(void)

void FUN_141555310(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar9 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*(longlong *)*param_1 + 0x4e8))((longlong *)*param_1,DAT_1468a68a8,&local_18);
      lVar5 = DAT_1468a64a8;
      if ((DAT_1468a64a8 != 0) && (cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x6b8), cVar3 != '\0')
         ) {
        lVar2 = *(longlong *)(lVar5 + 0xb0);
        iVar1 = *(int *)(lVar5 + 0x70);
        if (((lVar2 == 0) ||
            (((lVar5 = *(longlong *)(lVar2 + 0x80), lVar5 == 0 || (iVar1 < 0)) ||
             (*(int *)(lVar5 + 0x38) <= iVar1)))) ||
           (plVar8 = (longlong *)((longlong)iVar1 * 0xe8 + *(longlong *)(lVar5 + 0x30)),
           plVar8 == (longlong *)0x0)) {
          local_res8 = 0;
        }
        else {
          lVar9 = *plVar8;
        }
        lVar5 = FWeakObjectPtr::Get(*param_1 + 0x6b8);
        *(longlong *)(lVar5 + 0x4e8) = lVar9;
        uVar6 = FWeakObjectPtr::Get(*param_1 + 0x6b8);
        FUN_141587970(uVar6);
      }
    }
  }
  return;
}



// FUNCTION 141555470 FUN_141555470 body=150 status=ok
// SIG undefined FUN_141555470(void)

void FUN_141555470(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x18);
  local_res14 = *(undefined4 *)(param_1 + 0x1c);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_141554720(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141555510 FUN_141555510 body=184 status=ok
// SIG undefined FUN_141555510(void)

void FUN_141555510(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x818);
      if (cVar2 != '\0') {
        uVar5 = FWeakObjectPtr::Get(*param_1 + 0x818);
        FUN_1415879f0(uVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415555d0 FUN_1415555d0 body=189 status=ok
// SIG undefined FUN_1415555d0(void)

void FUN_1415555d0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if ((*(uint *)(lVar4 + 0x368) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x360) + 0x10))
                  (*(longlong **)(lVar4 + 0x360),lVar4 + 0x350,*(undefined8 *)(lVar4 + 0x370));
        *(undefined8 *)(lVar4 + 0x360) = 0;
      }
      *(undefined4 *)(lVar4 + 0x368) = 1;
    }
  }
  return;
}



// FUNCTION 141555690 FUN_141555690 body=451 status=ok
// SIG undefined FUN_141555690(void)

void FUN_141555690(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 local_res8;
  longlong local_18 [2];
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1);
    lVar5 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 8), cVar2 != '\0')) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 8);
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar7;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
      }
      if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 8);
        if (*(longlong *)(lVar5 + 0x1b0) != 0) {
          local_18[0] = 0;
          local_18[1] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Memcpy(local_18[0],L"AnimPerfect",0x18);
          FUN_142088910(*(undefined8 *)(lVar5 + 0x1b0),local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        local_res8 = FWeakObjectPtr::Get(param_1 + 8);
        lVar5 = FWeakObjectPtr::Get(param_1);
        TArray<FName,FDefaultAllocator>::Remove(lVar5 + 0xf8,&local_res8);
        if (*(int *)(lVar5 + 0x100) == 0) {
          cVar2 = FWeakObjectPtr::IsValid(lVar5 + 0xec);
          if (cVar2 != '\0') {
            plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0xec);
            local_18[0] = 0;
            local_18[1] = 0;
            (**(code **)(*plVar6 + 0x4e8))(plVar6,DAT_1468a68c8,local_18);
          }
          *(undefined1 *)(lVar5 + 0x38) = 0xf;
        }
      }
    }
  }
  return;
}



// FUNCTION 141555860 FUN_141555860 body=880 status=ok
// SIG undefined FUN_141555860(void)

void FUN_141555860(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x188);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(*param_1 + 0x188);
    lVar6 = *param_1;
    plVar7 = (longlong *)(lVar4 + 0xc38);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar5 + 1,lVar6);
      plVar5[2] = (longlong)FUN_14156d0e0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
    }
    if (local_28 != plVar7) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(lVar4 + 0xc40) != 0) &&
           (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar7 != 0) {
            lVar6 = FMemory::Realloc(*plVar7,0,0);
            *plVar7 = lVar6;
          }
          *(undefined4 *)(lVar4 + 0xc40) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,plVar7);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar6 = FMemory::Realloc(plVar5,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  lVar6 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    lVar4 = *param_1;
    plVar5 = (longlong *)(DAT_1468536c8 + 0x238);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_14468e698;
      FWeakObjectPtr::operator=(plVar7 + 1,lVar4);
      plVar7[2] = (longlong)FUN_141565b90;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar4;
      *plVar7 = (longlong)&PTR_FUN_14468e6e0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      iVar1 = *(int *)(lVar6 + 0x240);
      *(int *)(lVar6 + 0x240) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x244) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
      *puVar8 = plVar7;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
  }
  lVar6 = FUN_140eccb70(*param_1);
  if (lVar6 != 0) {
    lVar4 = *param_1;
    plVar7 = (longlong *)(lVar6 + 0x9d8);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
      plVar5[2] = (longlong)FUN_14157c030;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar1 = *(int *)(lVar6 + 0x9e0);
      *(int *)(lVar6 + 0x9e0) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x9e4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar8 = plVar5;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    uVar9 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    lVar6 = FUN_140c12480(uVar9);
    if ((lVar6 != 0) && (lVar6 = FHdrImageWrapper::GetHeight(lVar6), lVar6 != 0)) {
      lVar4 = *param_1;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f4d290;
        FWeakObjectPtr::operator=(plVar7 + 1,lVar4);
        plVar7[2] = (longlong)FUN_141575160;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar4;
        *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x38,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar1 = *(int *)(lVar6 + 0x40);
        *(int *)(lVar6 + 0x40) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x44) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x38,iVar1);
        }
        puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar6 + 0x38));
        *puVar8 = plVar7;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      uVar9 = FUN_140611130(lVar6);
      FUN_141575160(*param_1,uVar9);
    }
  }
  return;
}



// FUNCTION 141555bd0 FUN_141555bd0 body=1154 status=ok
// SIG undefined FUN_141555bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141555bd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined4 local_250;
  longlong local_248;
  longlong *local_240;
  longlong local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong *local_218;
  uint local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  uint local_180;
  undefined1 local_178;
  undefined7 uStack_177;
  undefined1 local_168 [128];
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_254 = (undefined4)param_1[1];
  local_250 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_258);
  FUN_14172a400(local_258);
  cVar5 = FWeakObjectPtr::IsValid(&local_254);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_254);
    lVar8 = 0;
    iVar3 = *(int *)(lVar7 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar9 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      lVar8 = *(longlong *)(*param_1 + 0x818);
      if (lVar8 != 0) {
        lVar7 = *(longlong *)(*param_1 + 0x780);
        puVar11 = &DAT_143f3eda8;
        if ((lVar7 != 0) && (1 < *(int *)(lVar8 + 0x20))) {
          local_218 = (longlong *)0x0;
          local_228 = 0xffffffffffffffff;
          uStack_220 = 0xffffffffffffffff;
          local_210 = 0;
          cVar5 = FUN_142eeb620(lVar7,0,&local_228);
          if (cVar5 != '\0') {
            FUN_140ad4c90(*param_1,&local_248);
            if (local_248 != 0) {
              if (*(int *)(*(longlong *)(*param_1 + 0x818) + 0x20) == 0) {
                puVar10 = &DAT_143f3eda8;
              }
              else {
                puVar10 = *(undefined2 **)(*(longlong *)(*param_1 + 0x818) + 0x18);
              }
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_168,puVar10);
              local_268 = 0;
              FUN_142031710(local_248,*param_1 + 0x7b8,local_e0,0);
              if (local_e8 != 0) {
                FMemory::Free();
              }
              local_268._0_1_ = ((byte)local_210 & 0x8f) == 10;
              (**(code **)(*local_218 + 0x28))(local_218,local_208,"bitmapData",*param_1 + 0x7b8);
              local_1c8 = 0xffffffffffffffff;
              uStack_1c0 = 0xffffffffffffffff;
              local_1b8 = (longlong *)0x0;
              local_1b0 = 2;
              local_1a8 = 0;
              local_268 = CONCAT31(local_268._1_3_,((byte)local_210 & 0x8f) == 10);
              (**(code **)(*local_218 + 0x28))(local_218,local_208,"smoothing",&local_1c8);
              if ((local_1b0 >> 6 & 1) != 0) {
                (**(code **)(*local_1b8 + 0x10))
                          (local_1b8,&local_1c8,CONCAT71(uStack_1a7,local_1a8));
              }
            }
            plVar4 = local_240;
            if (local_240 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_240 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_240)(local_240);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_240 + 8))(local_240,1);
                }
              }
            }
          }
          if ((local_210 >> 6 & 1) != 0) {
            (**(code **)(*local_218 + 0x10))(local_218,&local_228,local_208);
          }
        }
        lVar8 = *param_1;
        if (((*(char *)(lVar8 + 0x88b) != '\0') && (*(longlong *)(lVar8 + 0x788) != 0)) &&
           (1 < *(int *)(*(longlong *)(lVar8 + 0x818) + 0x30))) {
          local_1e8 = (longlong *)0x0;
          local_1f8 = 0xffffffffffffffff;
          uStack_1f0 = 0xffffffffffffffff;
          local_1e0 = 0;
          cVar5 = FUN_142eeb620(*(longlong *)(lVar8 + 0x788),0,&local_1f8);
          if (cVar5 != '\0') {
            FUN_140ad4c90(*param_1,&local_238);
            if (local_238 != 0) {
              if (*(int *)(*(longlong *)(*param_1 + 0x818) + 0x30) != 0) {
                puVar11 = *(undefined2 **)(*(longlong *)(*param_1 + 0x818) + 0x28);
              }
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar11);
              local_268 = 0;
              FUN_142031710(local_238,*param_1 + 0x7e8,local_40,0);
              if (local_48 != 0) {
                FMemory::Free();
              }
              local_268._0_1_ = ((byte)local_1e0 & 0x8f) == 10;
              (**(code **)(*local_1e8 + 0x28))(local_1e8,local_1d8,"bitmapData",*param_1 + 0x7e8);
              local_198 = 0xffffffffffffffff;
              uStack_190 = 0xffffffffffffffff;
              local_188 = (longlong *)0x0;
              local_180 = 2;
              local_178 = 0;
              local_268 = CONCAT31(local_268._1_3_,((byte)local_1e0 & 0x8f) == 10);
              (**(code **)(*local_1e8 + 0x28))(local_1e8,local_1d8,"smoothing",&local_198);
              if ((local_180 >> 6 & 1) != 0) {
                (**(code **)(*local_188 + 0x10))
                          (local_188,&local_198,CONCAT71(uStack_177,local_178));
              }
            }
            plVar4 = local_230;
            if (local_230 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_230 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_230)(local_230);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_230 + 8))(local_230,1);
                }
              }
            }
          }
          if ((local_1e0 >> 6 & 1) != 0) {
            (**(code **)(*local_1e8 + 0x10))(local_1e8,&local_1f8,local_1d8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141556060 FUN_141556060 body=1053 status=ok
// SIG undefined FUN_141556060(void)

void FUN_141556060(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [96];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar8 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar8 != '\0') {
    lVar10 = FWeakObjectPtr::Get(&local_res10);
    plVar14 = (longlong *)0x0;
    iVar5 = *(int *)(lVar10 + 0xc);
    plVar11 = plVar14;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar13 = iVar5 >> 0x1f & 0xffff;
      uVar9 = iVar5 + uVar13;
      plVar11 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                (longlong)(int)((uVar9 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(plVar11 + 1) & 0x30000000) == 0) {
      plVar11 = (longlong *)*param_1;
      if ((plVar11[0xed] != 0) && (plVar11[0x103] != 0)) {
        iVar5 = *(int *)(plVar11[0x103] + 0x78);
        if (iVar5 < 1) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = (float)((int)plVar11[0x104] + 1) / (float)iVar5;
        }
        uVar3 = *(undefined4 *)(plVar11[0xed] + 0x184);
        local_b8 = 0;
        local_b0 = 0;
        (**(code **)(*plVar11 + 0x4e8))(plVar11,DAT_1468a6908,&local_b8);
        lVar7 = param_1[1];
        uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
        fVar4 = *(float *)(*param_1 + 0x6a4);
        plVar11 = (longlong *)FUN_141580d60(local_a8);
        *(double *)(*plVar11 + 8) = (double)fVar4;
        lVar12 = FUN_1415514e0(plVar11,local_98,uVar3,fVar15,1);
        lVar10 = *(longlong *)(lVar12 + 0x18);
        plVar11 = (longlong *)operator_new(0x20);
        if (plVar11 != (longlong *)0x0) {
          *(undefined4 *)(plVar11 + 1) = 1;
          *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_FUN_144c7e5e0;
          plVar11[2] = (longlong)&PTR_FUN_144c7e4f0;
          *(int *)(plVar11 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar6;
          plVar14 = plVar11;
        }
        local_d8 = plVar14 + 2;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        plVar11 = *(longlong **)(lVar10 + 0x38);
        local_d0 = plVar14;
        if (*(longlong **)(lVar10 + 0x40) == plVar11) {
          FUN_141550e20(lVar10 + 0x30,plVar11,&local_d8);
          plVar11 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_d0 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_d0 + 8))();
              }
            }
          }
        }
        else {
          *plVar11 = (longlong)local_d8;
          plVar11[1] = (longlong)plVar14;
          *(longlong *)(lVar10 + 0x38) = *(longlong *)(lVar10 + 0x38) + 0x10;
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar14 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
        }
        lVar10 = *(longlong *)(lVar12 + 8);
        plVar11 = (longlong *)operator_new(0x28);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar11 + 1) = 1;
          *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_FUN_144c7e5a0;
          plVar11[2] = (longlong)&PTR_FUN_144c7e500;
          *(int *)(plVar11 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar6;
          *(float *)(plVar11 + 4) = fVar15;
        }
        local_c8 = plVar11 + 2;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        plVar14 = *(longlong **)(lVar10 + 0x88);
        local_c0 = plVar11;
        if (*(longlong **)(lVar10 + 0x90) == plVar14) {
          FUN_141551020(lVar10 + 0x80,plVar14,&local_c8);
          plVar14 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c0 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_c0 + 8))();
              }
            }
          }
        }
        else {
          *plVar14 = (longlong)local_c8;
          plVar14[1] = (longlong)plVar11;
          *(longlong *)(lVar10 + 0x88) = *(longlong *)(lVar10 + 0x88) + 0x10;
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar11 + 1;
          lVar10 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        std::shared_ptr<gte::ETManifoldMesh::Triangle>::operator=(*param_1 + 0x838,lVar12 + 8);
        FUN_141552790(local_98);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_a0 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0);
            }
          }
        }
        FUN_141580fb0(*param_1 + 0x838);
      }
    }
  }
  return;
}



// FUNCTION 141556480 FUN_141556480 body=309 status=ok
// SIG undefined FUN_141556480(void)

void FUN_141556480(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar6 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       (cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x808), cVar3 != '\0')) {
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      lVar6 = param_1[1];
      local_28 = 0;
      local_20 = 0;
      puVar7 = (undefined8 *)operator_new(0x20,&local_28);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_GetPoolName_144c7e130;
        *(int *)(puVar7 + 1) = (int)lVar6;
        *(undefined4 *)((longlong)puVar7 + 0xc) = uVar2;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[3] = uVar8;
        *puVar7 = &PTR_GetPoolName_144c7e178;
      }
      uVar8 = FWeakObjectPtr::Get(*param_1 + 0x808);
      FUN_14157d130(uVar8,&local_28,5);
    }
  }
  return;
}



// FUNCTION 1415565c0 FUN_1415565c0 body=1331 status=ok
// SIG undefined FUN_1415565c0(void)

void FUN_1415565c0(undefined4 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int local_res18;
  longlong *local_100;
  longlong *plStack_f8;
  longlong *local_f0;
  longlong *plStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined **local_98;
  undefined1 *local_90;
  undefined ***local_60;
  
  local_res18 = 0;
  if (0 < (int)param_2[1]) {
    lVar12 = *(longlong *)(param_1 + 2);
    local_d8 = 0;
    do {
      lVar6 = *(longlong *)(local_d8 + *param_2);
      if (lVar6 != 0) {
        iVar3 = *(int *)(lVar12 + 0x100);
        *(int *)(lVar12 + 0x100) = iVar3 + 1;
        if (*(int *)(lVar12 + 0x104) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(lVar12 + 0xf8),iVar3);
        }
        *(longlong *)(*(longlong *)(lVar12 + 0xf8) + (longlong)iVar3 * 8) = lVar6;
        FWeakObjectPtr::operator=(&local_e0,lVar6);
        uVar9 = local_dc;
        uVar8 = local_e0;
        uVar4 = *param_1;
        uVar5 = param_1[1];
        plVar10 = (longlong *)operator_new(200);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_144c7e080;
          local_98 = &PTR_FUN_144c7e550;
          local_90 = &LAB_141580f90;
          local_60 = &local_98;
          FUN_1415524d0(plVar10 + 2,DAT_1468a64b0,&local_98,0);
        }
        local_d0 = plVar10 + 2;
        local_c8 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar11 = plVar10 + 1;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        plVar10[3] = 0x3e45798ee0000000;
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar11 + 1) = 1;
          *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_StartProfileThreadUsage_144c7e388;
          *(undefined4 *)(plVar11 + 2) = 0x3f800000;
        }
        plVar2 = plVar11 + 2;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        plVar7 = (longlong *)plVar10[0x16];
        if ((longlong *)plVar10[0x17] == plVar7) {
          local_100 = plVar2;
          plStack_f8 = plVar11;
          FUN_141551020(plVar10 + 0x15,plVar7,&local_100);
          plVar10 = plStack_f8;
          if (plStack_f8 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_f8 + 1;
            lVar12 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_f8)(plStack_f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_f8 + 8))();
              }
            }
          }
        }
        else {
          *plVar7 = (longlong)plVar2;
          plVar7[1] = (longlong)plVar11;
          plVar10[0x16] = plVar10[0x16] + 0x10;
          local_100 = (longlong *)0x0;
          plStack_f8 = (longlong *)0x0;
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar11 + 1;
          lVar12 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        FUN_141551a10(&local_d0,local_c0,plVar2,0x41200000,1);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar11 + 1;
          lVar12 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        *(double *)(local_a8 + 8) = (double)**(float **)(param_1 + 4);
        plVar10 = (longlong *)operator_new(0x28);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_144c7e5a0;
          plVar10[2] = (longlong)&PTR_FUN_144c7e3b8;
          *(undefined4 *)(plVar10 + 3) = uVar4;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar5;
          *(undefined4 *)(plVar10 + 4) = uVar8;
          *(undefined4 *)((longlong)plVar10 + 0x24) = uVar9;
        }
        local_f0 = plVar10 + 2;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        plVar11 = *(longlong **)(local_b8 + 0x88);
        if (*(longlong **)(local_b8 + 0x90) == plVar11) {
          plStack_e8 = plVar10;
          FUN_141551020(local_b8 + 0x80,plVar11,&local_f0);
          plVar11 = plStack_e8;
          if (plStack_e8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_e8 + 1;
            lVar12 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_e8)(plStack_e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_e8 + 8))();
              }
            }
          }
        }
        else {
          *plVar11 = (longlong)local_f0;
          plVar11[1] = (longlong)plVar10;
          *(longlong *)(local_b8 + 0x88) = *(longlong *)(local_b8 + 0x88) + 0x10;
          local_f0 = (longlong *)0x0;
          plStack_e8 = (longlong *)0x0;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar10 + 1;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        plVar10 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_a0 + 1;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_a0 + 8))();
            }
          }
        }
        plVar10 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_b0 + 1;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_b0 + 8))();
            }
          }
        }
        plVar10 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_c8 + 1;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_c8 + 8))();
            }
          }
        }
      }
      local_d8 = local_d8 + 8;
      lVar12 = *(longlong *)(param_1 + 2);
      **(float **)(param_1 + 4) = *(float *)(lVar12 + 0x58) + **(float **)(param_1 + 4);
      local_res18 = local_res18 + 1;
    } while (local_res18 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141556b00 FUN_141556b00 body=255 status=ok
// SIG undefined FUN_141556b00(void)

void FUN_141556b00(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if ((*(uint *)(lVar4 + 2000) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x7c8) + 0x10))
                  (*(longlong **)(lVar4 + 0x7c8),lVar4 + 0x7b8,*(undefined8 *)(lVar4 + 0x7d8));
        *(undefined8 *)(lVar4 + 0x7c8) = 0;
      }
      *(undefined4 *)(lVar4 + 2000) = 1;
      lVar4 = *param_1;
      if ((*(uint *)(lVar4 + 0x800) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x7f8) + 0x10))
                  (*(longlong **)(lVar4 + 0x7f8),lVar4 + 0x7e8,*(undefined8 *)(lVar4 + 0x808));
        *(undefined8 *)(lVar4 + 0x7f8) = 0;
      }
      *(undefined4 *)(lVar4 + 0x800) = 1;
    }
  }
  return;
}



// FUNCTION 141556c00 FUN_141556c00 body=569 status=ok
// SIG undefined FUN_141556c00(void)

void FUN_141556c00(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 400);
  if (cVar2 == '\0') {
    FUN_14155e800();
  }
  else {
    lVar3 = FWeakObjectPtr::Get(*param_1 + 400);
    cVar2 = *(char *)(lVar3 + 0x2ea);
    lVar3 = FWeakObjectPtr::Get(*param_1 + 400);
    if (*(char *)(lVar3 + 0x2e9) == '\0') {
      bVar5 = -(cVar2 != '\0') & 2;
    }
    else {
      bVar5 = 1;
      if (cVar2 != '\0') {
        bVar5 = 3;
      }
    }
    *(byte *)(*param_1 + 0x1b0) = bVar5;
    cVar2 = *(char *)(*param_1 + 0x1b0);
    if (cVar2 == '\0') {
      FUN_14155e800();
      lVar3 = *param_1;
      plVar1 = *(longlong **)(lVar3 + 0x1a0);
      if ((plVar1 != (longlong *)0x0) && (*(longlong *)(lVar3 + 0x1a8) != 0)) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
        (**(code **)(**(longlong **)(*param_1 + 0x1a8) + 0x278))(*(longlong **)(*param_1 + 0x1a8),0)
        ;
        lVar3 = *param_1;
      }
      plVar1 = *(longlong **)(lVar3 + 0x1b8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
      }
    }
    else if (cVar2 == '\x01') {
      FUN_14157bef0();
      plVar1 = *(longlong **)(*param_1 + 0x1b8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
      }
    }
    else if (cVar2 == '\x02') {
      FUN_14157bef0();
      lVar3 = *param_1;
      plVar1 = *(longlong **)(lVar3 + 0x1a0);
      if ((plVar1 != (longlong *)0x0) && (*(longlong *)(lVar3 + 0x1a8) != 0)) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
        (**(code **)(**(longlong **)(*param_1 + 0x1a8) + 0x278))(*(longlong **)(*param_1 + 0x1a8),0)
        ;
        lVar3 = *param_1;
      }
      plVar1 = *(longlong **)(lVar3 + 0x1b8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,1);
      }
    }
    else if (cVar2 == '\x03') {
      FUN_14157bef0();
      plVar1 = *(longlong **)(*param_1 + 0x1b8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,1);
      }
    }
  }
  if (*(char *)(*param_1 + 0x1f1) != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
    FUN_14107fa40(*param_1 + 0x1d0,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 0x1e0));
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    lVar3 = FUN_140c12480(uVar4);
    if ((lVar3 != 0) && (lVar3 = FHdrImageWrapper::GetHeight(lVar3), lVar3 != 0)) {
      uVar4 = FUN_140611130(lVar3);
      FUN_141575160(*param_1,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 141556e40 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateCanvasRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c7db60;
  std::
  vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
  ::_Tidy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141556e90 FUN_141556e90 body=43 status=ok
// SIG undefined FUN_141556e90(void)

undefined8 * FUN_141556e90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141556ec0 FUN_141556ec0 body=43 status=ok
// SIG undefined FUN_141556ec0(void)

undefined8 * FUN_141556ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141556ef0 FUN_141556ef0 body=43 status=ok
// SIG undefined FUN_141556ef0(void)

undefined8 * FUN_141556ef0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141556f20 FUN_141556f20 body=77 status=ok
// SIG undefined FUN_141556f20(void)

undefined8 * FUN_141556f20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c7e250;
  param_1[5] = &PTR__scalar_deleting_destructor__144c7db60;
  std::
  vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
  ::_Tidy(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141556f70 FUN_141556f70 body=77 status=ok
// SIG undefined FUN_141556f70(void)

undefined8 * FUN_141556f70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c7e068;
  param_1[5] = &PTR__scalar_deleting_destructor__144c7db60;
  std::
  vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
  ::_Tidy(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141556fc0 FUN_141556fc0 body=52 status=ok
// SIG undefined FUN_141556fc0(void)

undefined8 FUN_141556fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_141552790();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141557000 FUN_141557000 body=33 status=ok
// SIG undefined FUN_141557000(void)

undefined8 FUN_141557000(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141557030 `scalar_deleting_destructor' body=33 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141557060 FUN_141557060 body=33 status=ok
// SIG undefined FUN_141557060(void)

undefined8 FUN_141557060(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141557090 FUN_141557090 body=33 status=ok
// SIG undefined FUN_141557090(void)

undefined8 FUN_141557090(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}


