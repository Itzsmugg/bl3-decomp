// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432b5190 FUN_1432b5190 body=383 status=ok
// SIG undefined FUN_1432b5190(void)

undefined8
FUN_1432b5190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_28 [32];
  
  lVar1 = FUN_143303520(DAT_146b63a70);
  lVar3 = DAT_146b63a70;
  if (lVar1 == 0) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    lVar1 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
    uVar4 = *(ulonglong *)(lVar1 + 0x18) & 0xfffffffffffffffc;
    Scaleform::Lock::DoLock(lVar3 + 8);
    lVar3 = DAT_146b63a70;
    if (*(char *)(uVar4 + 200) == '\0') {
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      uVar2 = FUN_143303900(*(undefined8 *)(uVar4 + 0xd0),param_3,param_4,local_28,1);
      lVar3 = lVar3 + 8;
    }
    else {
      lVar3 = uVar4 + 0x98;
      Scaleform::Lock::DoLock(lVar3);
      lVar1 = DAT_146b63a70;
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      uVar2 = FUN_143303900(*(undefined8 *)(uVar4 + 0xd0),param_3,param_4,local_28,1);
      Scaleform::Lock::DoLock(lVar1 + 8);
    }
    Scaleform::Lock::DoLock(lVar3);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(char *)(lVar3 + 200) == '\0') {
      uVar2 = FUN_143303900(*(undefined8 *)(lVar3 + 0xd0),param_3,param_4,local_28,0);
    }
    else {
      Scaleform::Lock::DoLock(lVar3 + 0x98);
      uVar2 = FUN_143303900(*(undefined8 *)(lVar3 + 0xd0),param_3,param_4,local_28,0);
      Scaleform::Lock::DoLock(lVar3 + 0x98);
    }
  }
  return uVar2;
}



// FUNCTION 1432b5320 GetAllocHeapOrNULL body=116 status=ok
// SIG undefined GetAllocHeapOrNULL(void)

ulonglong Scaleform::MemoryHeapMH::GetAllocHeapOrNULL(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_143303520(DAT_146b63a70);
  lVar1 = DAT_146b63a70;
  if (lVar2 != 0) {
    return *(ulonglong *)(lVar2 + 0x10);
  }
  Lock::DoLock(DAT_146b63a70 + 8);
  lVar2 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulonglong *)(lVar2 + 0x18) & 0xfffffffffffffffc;
  }
  Lock::DoLock(lVar1 + 8);
  return uVar3;
}



// FUNCTION 1432b53a0 FUN_1432b53a0 body=163 status=ok
// SIG undefined FUN_1432b53a0(void)

undefined8 FUN_1432b53a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  lVar2 = FUN_143303520(DAT_146b63a70);
  lVar1 = DAT_146b63a70;
  if (lVar2 != 0) {
    FUN_143303fc0(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0xd0),lVar2,param_2,local_28);
    return local_18;
  }
  Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
  lVar2 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
  FUN_143304000(*(undefined8 *)((*(ulonglong *)(lVar2 + 0x18) & 0xfffffffffffffffc) + 0xd0),lVar2,
                param_2,local_28);
  Scaleform::Lock::DoLock(lVar1 + 8);
  return local_18;
}



// FUNCTION 1432b5450 FUN_1432b5450 body=80 status=ok
// SIG undefined FUN_1432b5450(void)

undefined8 FUN_1432b5450(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = DAT_146b63a70;
  Scaleform::Lock::DoLock(DAT_146b63a70 + 1);
  uVar2 = (**(code **)(*(longlong *)*DAT_146b63a70 + 0x18))((longlong *)*DAT_146b63a70,param_2,8);
  Scaleform::Lock::DoLock(puVar1 + 1);
  return uVar2;
}



// FUNCTION 1432b54b0 FUN_1432b54b0 body=89 status=ok
// SIG undefined FUN_1432b54b0(void)

void FUN_1432b54b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_146b63a70;
  Scaleform::Lock::DoLock(DAT_146b63a70 + 1);
  (**(code **)(*(longlong *)*DAT_146b63a70 + 0x20))((longlong *)*DAT_146b63a70,param_2,param_3,8);
  Scaleform::Lock::DoLock(puVar1 + 1);
  return;
}



// FUNCTION 1432b5510 FUN_1432b5510 body=122 status=ok
// SIG undefined FUN_1432b5510(void)

undefined8 FUN_1432b5510(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  Scaleform::Lock::DoLock();
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar1 = (longlong *)0x0;
  }
  for (; plVar2 != plVar1; plVar2 = (longlong *)plVar2[2]) {
    if ((*(uint *)(plVar2 + 7) & 0x1000) == 0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return 1;
}



// FUNCTION 1432b5590 GetFootprint body=64 status=ok
// SIG undefined GetFootprint(void)

undefined8 Scaleform::MemoryHeapMH::GetFootprint(longlong param_1)

{
  undefined8 uVar1;
  
  Lock::DoLock(param_1 + 0x98);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x230);
  Lock::DoLock(param_1 + 0x98);
  return uVar1;
}



// FUNCTION 1432b55e0 FUN_1432b55e0 body=154 status=ok
// SIG undefined FUN_1432b55e0(void)

longlong * FUN_1432b55e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  Scaleform::Lock::DoLock();
  plVar3 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 0x38) & 0x1000) == 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x230);
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar2 = (longlong *)0x0;
  }
  for (; plVar4 != plVar2; plVar4 = (longlong *)plVar4[2]) {
    lVar1 = (**(code **)(*plVar4 + 0xa8))(plVar4);
    plVar3 = (longlong *)((longlong)plVar3 + lVar1);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return plVar3;
}



// FUNCTION 1432b5680 GetUsedSpace body=64 status=ok
// SIG undefined GetUsedSpace(void)

undefined8 Scaleform::MemoryHeapMH::GetUsedSpace(longlong param_1)

{
  undefined8 uVar1;
  
  Lock::DoLock(param_1 + 0x98);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x238);
  Lock::DoLock(param_1 + 0x98);
  return uVar1;
}



// FUNCTION 1432b56d0 FUN_1432b56d0 body=154 status=ok
// SIG undefined FUN_1432b56d0(void)

longlong * FUN_1432b56d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  Scaleform::Lock::DoLock();
  plVar3 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 0x38) & 0x1000) == 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x238);
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar2 = (longlong *)0x0;
  }
  for (; plVar4 != plVar2; plVar4 = (longlong *)plVar4[2]) {
    lVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4);
    plVar3 = (longlong *)((longlong)plVar3 + lVar1);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return plVar3;
}



// FUNCTION 1432b5770 FUN_1432b5770 body=133 status=ok
// SIG undefined FUN_1432b5770(void)

void FUN_1432b5770(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  (**(code **)(*param_1 + 0x110))();
  param_2[6] = 0;
  param_2[7] = 0;
  lVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  *param_2 = param_2[8] + lVar1 + param_2[6];
  lVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = param_2[8] + lVar1 + param_2[6];
  return;
}



// FUNCTION 1432b5840 FUN_1432b5840 body=101 status=ok
// SIG undefined FUN_1432b5840(void)

void FUN_1432b5840(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar3 = (longlong *)0x0;
  }
  while (plVar2 != plVar3) {
    lVar1 = *plVar2;
    plVar2 = (longlong *)plVar2[2];
    (**(code **)(lVar1 + 0xe8))();
  }
  FUN_1433032d0(DAT_146b63a70,param_1);
  return;
}



// FUNCTION 1432b58f0 FUN_1432b58f0 body=167 status=ok
// SIG undefined FUN_1432b58f0(void)

void FUN_1432b58f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  Scaleform::Lock::DoLock();
  if ((*(uint *)(param_1 + 0x38) & 0x1000) != 0) {
    *(longlong *)(param_2 + 0x40) =
         *(longlong *)(param_2 + 0x40) + *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x230);
    *(longlong *)(param_2 + 0x48) =
         *(longlong *)(param_2 + 0x48) + *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x238);
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar1 = (longlong *)0x0;
  }
  for (; plVar2 != plVar1; plVar2 = (longlong *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x110))(plVar2,param_2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432b59a0 FUN_1432b59a0 body=213 status=ok
// SIG undefined FUN_1432b59a0(void)

longlong FUN_1432b59a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      char param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  lVar2 = FUN_143303a20(*(undefined8 *)(param_1 + 0xd0));
  lVar1 = DAT_146b63a70;
  if (lVar2 == 0) {
    if (param_5 == '\0') {
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      lVar2 = Scaleform::HeapMH::AllocEngineMH::ReallocGeneral
                        (*(undefined8 *)(param_1 + 0xd0),param_2,param_3,param_4,local_28,1);
      Scaleform::Lock::DoLock(lVar1 + 8);
    }
    else {
      lVar2 = Scaleform::HeapMH::AllocEngineMH::ReallocGeneral
                        (*(undefined8 *)(param_1 + 0xd0),param_2,param_3,param_4,local_28,1);
    }
  }
  return lVar2;
}



// FUNCTION 1432b5a80 FUN_1432b5a80 body=43 status=ok
// SIG undefined FUN_1432b5a80(void)

void FUN_1432b5a80(longlong param_1)

{
  FUN_143303ab0(*(undefined8 *)(param_1 + 0xd0));
  return;
}



// FUNCTION 1432b5ac0 FUN_1432b5ac0 body=141 status=ok
// SIG undefined FUN_1432b5ac0(void)

void FUN_1432b5ac0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  lVar1 = DAT_146b63a70;
  if (param_3 == '\0') {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    FUN_143303ea0(*(undefined8 *)(param_1 + 0xd0),param_2,1);
    Scaleform::Lock::DoLock(lVar1 + 8);
  }
  else {
    FUN_143303ea0(*(undefined8 *)(param_1 + 0xd0),param_2,1);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432b5b90 FUN_1432b5b90 body=69 status=ok
// SIG undefined FUN_1432b5b90(void)

undefined8 * FUN_1432b5b90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af7460;
  Scaleform::Lock::~Lock(param_1 + 0x13);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1432b5be0 FUN_1432b5be0 body=69 status=ok
// SIG undefined FUN_1432b5be0(void)

undefined8 * FUN_1432b5be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af7460;
  Scaleform::Lock::~Lock(param_1 + 0x13);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1432b5c30 FUN_1432b5c30 body=170 status=ok
// SIG undefined FUN_1432b5c30(void)

ulonglong FUN_1432b5c30(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = *param_1;
  uVar1 = 0;
  uVar6 = 0xffffffffffffffff;
  uVar4 = uVar1;
  uVar7 = param_2;
  if (uVar5 != 0) {
    while( true ) {
      uVar2 = uVar5 - param_2;
      if (((param_2 <= uVar5) && (uVar2 < uVar6)) && (uVar4 = uVar5, uVar6 = uVar2, uVar2 == 0)) {
        return uVar5;
      }
      uVar2 = *(ulonglong *)(uVar5 + 0x10);
      uVar5 = *(ulonglong *)(uVar5 + 8 + ((longlong)uVar7 >> 0x3f) * -8);
      if ((uVar2 != 0) && (uVar2 != uVar5)) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      if (uVar5 == 0) break;
      uVar7 = uVar7 * 2;
    }
    for (; uVar1 = uVar4, uVar2 != 0; uVar2 = *(ulonglong *)(lVar3 + uVar2)) {
      if ((param_2 <= uVar2) && (uVar2 - param_2 < uVar6)) {
        uVar1 = uVar2;
        uVar6 = uVar2 - param_2;
      }
      lVar3 = 8;
      if (*(longlong *)(uVar2 + 8) == 0) {
        lVar3 = 0x10;
      }
      uVar4 = uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 1432b5ce0 SysAllocStatic body=197 status=ok
// SIG undefined SysAllocStatic(SysAllocStatic * this, void * param_1, __uint64 param_2, void * param_3, __uint64 param_4, void * param_5, __uint64 param_6, void * param_7, __uint64 param_8)

/* public: __cdecl Scaleform::SysAllocStatic::SysAllocStatic(void * __ptr64,unsigned __int64,void *
   __ptr64,unsigned __int64,void * __ptr64,unsigned __int64,void * __ptr64,unsigned __int64) __ptr64
    */

SysAllocStatic * __thiscall
Scaleform::SysAllocStatic::SysAllocStatic
          (SysAllocStatic *this,void *param_1,__uint64 param_2,void *param_3,__uint64 param_4,
          void *param_5,__uint64 param_6,void *param_7,__uint64 param_8)

{
  undefined8 uVar1;
  
                    /* 0x32b5ce0  12  ??0SysAllocStatic@Scaleform@@QEAA@PEAX_K010101@Z */
  *(undefined8 *)(this + 8) = 0x1000;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145af7698;
  uVar1 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  if (this + 0x20 != (SysAllocStatic *)0x0) {
    uVar1 = FUN_1433049e0(this + 0x20,0x1000);
  }
  *(undefined8 *)(this + 0x18) = uVar1;
  if (param_1 != (void *)0x0) {
    AddMemSegment(this,param_1,param_2);
  }
  if (param_3 != (void *)0x0) {
    AddMemSegment(this,param_3,param_4);
  }
  if (param_5 != (void *)0x0) {
    AddMemSegment(this,param_5,param_6);
  }
  if (param_7 != (void *)0x0) {
    AddMemSegment(this,param_7,param_8);
  }
  return this;
}



// FUNCTION 1432b5db0 SysAllocStatic body=64 status=ok
// SIG undefined SysAllocStatic(SysAllocStatic * this, __uint64 param_1)

/* public: __cdecl Scaleform::SysAllocStatic::SysAllocStatic(unsigned __int64) __ptr64 */

SysAllocStatic * __thiscall
Scaleform::SysAllocStatic::SysAllocStatic(SysAllocStatic *this,__uint64 param_1)

{
  undefined8 uVar1;
  
                    /* 0x32b5db0  13  ??0SysAllocStatic@Scaleform@@QEAA@_K@Z */
  *(__uint64 *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145af7698;
  uVar1 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  if (this != (SysAllocStatic *)0xffffffffffffffe0) {
    uVar1 = FUN_1433049e0();
  }
  *(undefined8 *)(this + 0x18) = uVar1;
  return this;
}



// FUNCTION 1432b5e00 AddMemSegment body=103 status=ok
// SIG void AddMemSegment(SysAllocStatic * this, void * param_1, __uint64 param_2)

/* public: void __cdecl Scaleform::SysAllocStatic::AddMemSegment(void * __ptr64,unsigned __int64)
   __ptr64 */

void __thiscall
Scaleform::SysAllocStatic::AddMemSegment(SysAllocStatic *this,void *param_1,__uint64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
                    /* 0x32b5e00  61  ?AddMemSegment@SysAllocStatic@Scaleform@@QEAAXPEAX_K@Z */
  uVar3 = ~(*(longlong *)(this + 8) - 1U);
  uVar4 = (longlong)param_1 + *(longlong *)(this + 8) + -1 & uVar3;
  if (*(ulonglong *)(this + 0x10) < 4) {
    lVar2 = *(ulonglong *)(this + 0x10) * 0x40;
    lVar1 = ((longlong)param_1 + param_2 & uVar3) - uVar4;
    *(ulonglong *)(this + lVar2 + 0x80) = uVar4;
    *(longlong *)(this + lVar2 + 0x88) = lVar1;
    *(undefined8 *)(this + lVar2 + 0x90) = 0;
    *(longlong *)(this + 0x160) = *(longlong *)(this + 0x160) + lVar1;
    HeapPT::AllocLite::InitSegment(*(undefined8 *)(this + 0x18));
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
  }
  return;
}



// FUNCTION 1432b5e90 Alloc body=23 status=ok
// SIG undefined Alloc(void)

void Scaleform::SysAllocStatic::Alloc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  FUN_143304ab0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,local_res8);
  return;
}



// FUNCTION 1432b5eb0 FUN_1432b5eb0 body=159 status=ok
// SIG undefined FUN_1432b5eb0(void)

bool FUN_1432b5eb0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar2 = (ulonglong *)(param_1 + 0x80);
    do {
      if ((*puVar2 <= param_2) && (param_2 < puVar2[1] + *puVar2)) {
        iVar1 = FUN_143304cc0(*(undefined8 *)(param_1 + 0x18),puVar2 + -4,param_2,param_3,param_4,
                              param_5);
        return iVar1 < 2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x10));
  }
  return false;
}



// FUNCTION 1432b5f60 Free body=128 status=ok
// SIG undefined Free(void)

undefined8
Scaleform::SysAllocStatic::Free
          (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = (ulonglong *)(param_1 + 0x80);
    do {
      if ((*puVar1 <= param_2) && (param_2 < puVar1[1] + *puVar1)) {
        FUN_143304b80(*(undefined8 *)(param_1 + 0x18),puVar1 + -4,param_2,param_3,param_4);
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 1432b6090 FUN_1432b6090 body=98 status=ok
// SIG undefined FUN_1432b6090(void)

longlong FUN_1432b6090(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  if (1 < uVar1) {
    plVar2 = (longlong *)(param_1 + 200);
    lVar5 = (uVar1 - 2 >> 1) + 1;
    uVar7 = lVar5 * 2;
    do {
      uVar4 = uVar4 + plVar2[-8];
      uVar6 = uVar6 + *plVar2;
      plVar2 = plVar2 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (uVar7 < uVar1) {
    uVar3 = *(ulonglong *)(uVar7 * 0x40 + 0x88 + param_1);
  }
  return uVar6 + uVar4 + uVar3;
}



// FUNCTION 1432b6100 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FAuthenticationGraphRegistry>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144025e20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1432b6130 CanAcquire body=3 status=ok
// SIG bool CanAcquire(AcquireInterface * this)

/* public: virtual bool __cdecl Scaleform::AcquireInterface::CanAcquire(void) __ptr64 */

bool __thiscall Scaleform::AcquireInterface::CanAcquire(AcquireInterface *this)

{
                    /* 0x32b6130  79  ?CanAcquire@AcquireInterface@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b6140 TryAcquire body=3 status=ok
// SIG bool TryAcquire(AcquireInterface * this)

/* public: virtual bool __cdecl Scaleform::AcquireInterface::TryAcquire(void) __ptr64 */

bool __thiscall Scaleform::AcquireInterface::TryAcquire(AcquireInterface *this)

{
                    /* 0x32b6140  488  ?TryAcquire@AcquireInterface@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b6150 TryAcquireCommit body=3 status=ok
// SIG bool TryAcquireCommit(AcquireInterface * this)

/* public: virtual bool __cdecl Scaleform::AcquireInterface::TryAcquireCommit(void) __ptr64 */

bool __thiscall Scaleform::AcquireInterface::TryAcquireCommit(AcquireInterface *this)

{
                    /* 0x32b6150  496  ?TryAcquireCommit@AcquireInterface@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b6160 TryAcquireCancel body=3 status=ok
// SIG bool TryAcquireCancel(AcquireInterface * this)

/* public: virtual bool __cdecl Scaleform::AcquireInterface::TryAcquireCancel(void) __ptr64 */

bool __thiscall Scaleform::AcquireInterface::TryAcquireCancel(AcquireInterface *this)

{
                    /* 0x32b6160  492  ?TryAcquireCancel@AcquireInterface@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b6170 AcquireMultipleObjects body=1203 status=ok
// SIG bool AcquireMultipleObjects(Waitable * * param_1, uint param_2, uint param_3)

/* public: static bool __cdecl Scaleform::AcquireInterface::AcquireMultipleObjects(class
   Scaleform::Waitable * __ptr64 * __ptr64,unsigned int,unsigned int) */

bool __cdecl
Scaleform::AcquireInterface::AcquireMultipleObjects(Waitable **param_1,uint param_2,uint param_3)

{
  Waitable *pWVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  void *_Dst;
  Waitable **ppWVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined **local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined **local_1a0;
  char local_198;
  char local_197;
  Mutex local_190 [40];
  WaitCondition local_168 [16];
  Waitable **local_158;
  uint local_150;
  undefined ***local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 local_130 [264];
  
                    /* 0x32b6170  56
                       ?AcquireMultipleObjects@AcquireInterface@Scaleform@@SA_NPEAPEAVWaitable@2@II@Z
                        */
  uVar9 = (ulonglong)param_2;
  if (param_2 < 0x21) {
    local_138 = local_130;
  }
  else {
    local_138 = (undefined1 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar9 << 3);
  }
  uVar16 = 0;
  uVar12 = uVar9;
  uVar15 = uVar16;
  if (param_2 != 0) {
    do {
      uVar7 = (**(code **)(**(longlong **)(uVar15 + (longlong)param_1) + 0x10))();
      *(undefined8 *)(local_138 + uVar15) = uVar7;
      uVar12 = uVar12 - 1;
      uVar15 = uVar15 + 8;
    } while (uVar12 != 0);
  }
  cVar4 = FUN_1432b8060(local_138,param_2);
  if (cVar4 == '\0') {
    if (param_3 == 0) {
      bVar11 = false;
    }
    else {
      local_1a8 = 0;
      local_1b0 = 1;
      local_1b8 = &PTR_FUN_145af7750;
      local_1a0 = &PTR_LAB_145af7768;
      Mutex::Mutex(local_190,true,false);
      WaitCondition::WaitCondition(local_168);
      local_148 = &local_1b8;
      local_198 = '\0';
      local_140 = local_138;
      local_197 = '\0';
      uVar12 = uVar16;
      local_158 = param_1;
      local_150 = param_2;
      if (param_2 != 0) {
        do {
          pWVar1 = local_158[uVar12];
          lVar14 = *(longlong *)(pWVar1 + 0x10);
          if (lVar14 == 0) {
            if ((int)uVar12 != 0) {
              lVar14 = uVar12 << 3;
              ppWVar10 = local_158;
              do {
                lVar3 = *(longlong *)(lVar14 + -8 + (longlong)ppWVar10);
                lVar14 = lVar14 + -8;
                uVar17 = (int)uVar12 - 1;
                uVar12 = (ulonglong)uVar17;
                lVar2 = *(longlong *)(lVar3 + 0x10);
                if (lVar2 != 0) {
                  lVar2 = lVar2 + 0x20;
                  Lock::DoLock(lVar2);
                  lVar3 = *(longlong *)(lVar3 + 0x10);
                  if (*(ulonglong *)(lVar3 + 0x10) != 0) {
                    uVar9 = uVar16;
                    do {
                      if ((*(code **)(*(longlong *)(lVar3 + 8) + uVar9 * 0x10) == FUN_1432b7f70) &&
                         (*(Waitable ****)(*(longlong *)(lVar3 + 8) + 8 + uVar9 * 0x10) ==
                          &local_158)) {
                        if (*(longlong *)(lVar3 + 0x10) == 1) {
                          *(undefined8 *)(lVar3 + 0x10) = 0;
                        }
                        else {
                          _Dst = (void *)(uVar9 * 0x10 + *(longlong *)(lVar3 + 8));
                          memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                                  (*(longlong *)(lVar3 + 0x10) - uVar9) * 0x10 - 0x10);
                          *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -1;
                        }
                        break;
                      }
                      uVar9 = (ulonglong)((int)uVar9 + 1);
                    } while (uVar9 < *(ulonglong *)(lVar3 + 0x10));
                  }
                  Lock::DoLock(lVar2);
                  ppWVar10 = local_158;
                }
              } while (uVar17 != 0);
            }
            bVar11 = false;
            goto LAB_1432b6527;
          }
          lVar14 = lVar14 + 0x20;
          Lock::DoLock(lVar14);
          lVar2 = *(longlong *)(pWVar1 + 0x10);
          plVar13 = (longlong *)(lVar2 + 8);
          uVar15 = *(longlong *)(lVar2 + 0x10) + 1;
          if (uVar15 < *(ulonglong *)(lVar2 + 0x10)) {
            if (uVar15 < *(ulonglong *)(lVar2 + 0x18) >> 1) {
LAB_1432b6316:
              FUN_1432b8b20(plVar13,plVar13);
            }
          }
          else if (*(ulonglong *)(lVar2 + 0x18) < uVar15) goto LAB_1432b6316;
          *(ulonglong *)(lVar2 + 0x10) = uVar15;
          puVar8 = (undefined8 *)(*plVar13 + -0x10 + uVar15 * 0x10);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = FUN_1432b7f70;
            puVar8[1] = &local_158;
          }
          Lock::DoLock(lVar14);
          uVar17 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar17;
        } while (uVar17 < local_150);
      }
      cVar4 = FUN_1432b8060(local_138,uVar9);
      if (cVar4 == '\0') {
        bVar11 = false;
        uVar17 = param_3;
        if (param_3 != 0xffffffff) {
          uVar5 = Timer::GetTicksMs();
          uVar16 = (ulonglong)uVar5;
        }
        while( true ) {
          Mutex::DoLock(local_190);
          if (uVar17 != 0) {
            if (uVar17 == 0xffffffff) {
              while (local_198 == '\0') {
                WaitCondition::Wait(local_168,local_190,0xffffffff);
              }
            }
            else if (local_198 == '\0') {
              WaitCondition::Wait(local_168,local_190,uVar17);
            }
          }
          cVar4 = local_198;
          if (local_197 != '\0') {
            local_197 = '\0';
            local_198 = '\0';
          }
          Mutex::Unlock(local_190);
          if (cVar4 == '\0') goto LAB_1432b6517;
          cVar4 = FUN_1432b8060(local_138,uVar9);
          if (cVar4 != '\0') break;
          if (param_3 != 0xffffffff) {
            iVar6 = Timer::GetTicksMs();
            uVar17 = iVar6 - (int)uVar16;
            if (param_3 <= uVar17) goto LAB_1432b6517;
            uVar17 = param_3 - uVar17;
          }
        }
        bVar11 = true;
LAB_1432b6517:
        FUN_1432b7e80(&local_158,FUN_1432b7f70);
      }
      else {
        FUN_1432b7e80(&local_158,FUN_1432b7f70);
        bVar11 = true;
      }
LAB_1432b6527:
      local_1b8 = &PTR_FUN_145af7750;
      local_1a0 = &PTR_LAB_145af7768;
      WaitCondition::~WaitCondition(local_168);
      Mutex::~Mutex(local_190);
      lVar14 = local_1a8;
      local_1a0 = &PTR_FUN_144025e68;
      local_1b8 = &PTR_FUN_145af7738;
      if (((local_1a8 != 0) &&
          (iVar6 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_1a8,0xffffffff), iVar6 == 1)) &&
         (lVar14 != 0)) {
        Lock::~Lock(lVar14 + 0x20);
        if (*(longlong *)(lVar14 + 8) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar14);
      }
      RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_1b8);
    }
  }
  else {
    bVar11 = true;
  }
  if (local_138 != local_130) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return bVar11;
}



// FUNCTION 1432b6630 AcquireOneOfMultipleObjects body=1062 status=ok
// SIG int AcquireOneOfMultipleObjects(Waitable * * param_1, uint param_2, uint param_3)

/* public: static int __cdecl Scaleform::AcquireInterface::AcquireOneOfMultipleObjects(class
   Scaleform::Waitable * __ptr64 * __ptr64,unsigned int,unsigned int) */

int __cdecl
Scaleform::AcquireInterface::AcquireOneOfMultipleObjects
          (Waitable **param_1,uint param_2,uint param_3)

{
  Waitable *pWVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  void *_Dst;
  Waitable **ppWVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  Waitable **local_b8;
  uint local_b0;
  undefined ***local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  longlong local_88;
  undefined **local_80;
  char local_78;
  char local_77;
  Mutex local_70 [40];
  WaitCondition local_48 [16];
  
  uVar14 = 0;
                    /* 0x32b6630  57
                       ?AcquireOneOfMultipleObjects@AcquireInterface@Scaleform@@SAHPEAPEAVWaitable@2@II@Z
                        */
  iVar7 = 0;
  uVar11 = uVar14;
  ppWVar10 = param_1;
  if (param_2 != 0) {
    do {
      plVar8 = (longlong *)(**(code **)(*(longlong *)*ppWVar10 + 0x10))();
      cVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar6 = (int)uVar11;
      if (cVar4 != '\0') {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      uVar11 = (ulonglong)(iVar6 + 1U);
      ppWVar10 = ppWVar10 + 1;
    } while (iVar6 + 1U < param_2);
  }
  if (param_3 == 0) {
    iVar7 = -1;
  }
  else {
    local_88 = 0;
    local_90 = 1;
    local_98 = &PTR_FUN_145af7750;
    local_80 = &PTR_LAB_145af7768;
    Mutex::Mutex(local_70,true,false);
    WaitCondition::WaitCondition(local_48);
    local_78 = '\0';
    local_a8 = &local_98;
    local_77 = '\0';
    local_a0 = 0;
    uVar11 = uVar14;
    local_b8 = param_1;
    local_b0 = param_2;
    if (param_2 != 0) {
      do {
        pWVar1 = local_b8[uVar11];
        lVar12 = *(longlong *)(pWVar1 + 0x10);
        if (lVar12 == 0) {
          uVar13 = uVar14;
          if ((int)uVar11 != 0) {
            lVar12 = uVar11 << 3;
            ppWVar10 = local_b8;
            do {
              lVar2 = *(longlong *)(lVar12 + -8 + (longlong)ppWVar10);
              lVar12 = lVar12 + -8;
              uVar15 = (int)uVar11 - 1;
              uVar11 = (ulonglong)uVar15;
              lVar3 = *(longlong *)(lVar2 + 0x10);
              if (lVar3 != 0) {
                Lock::DoLock(lVar3 + 0x20);
                lVar2 = *(longlong *)(lVar2 + 0x10);
                if (*(ulonglong *)(lVar2 + 0x10) != 0) {
                  uVar13 = uVar14;
                  do {
                    if ((*(code **)(*(longlong *)(lVar2 + 8) + uVar13 * 0x10) == FUN_1432b8110) &&
                       (*(Waitable ****)(*(longlong *)(lVar2 + 8) + 8 + uVar13 * 0x10) == &local_b8)
                       ) {
                      if (*(longlong *)(lVar2 + 0x10) == 1) {
                        *(undefined8 *)(lVar2 + 0x10) = 0;
                      }
                      else {
                        _Dst = (void *)(uVar13 * 0x10 + *(longlong *)(lVar2 + 8));
                        memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                                (*(longlong *)(lVar2 + 0x10) - uVar13) * 0x10 - 0x10);
                        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
                      }
                      break;
                    }
                    uVar13 = (ulonglong)((int)uVar13 + 1);
                  } while (uVar13 < *(ulonglong *)(lVar2 + 0x10));
                }
                Lock::DoLock(lVar3 + 0x20);
                ppWVar10 = local_b8;
              }
              uVar13 = 0;
            } while (uVar15 != 0);
          }
          goto LAB_1432b69a2;
        }
        Lock::DoLock(lVar12 + 0x20);
        lVar2 = *(longlong *)(pWVar1 + 0x10);
        plVar8 = (longlong *)(lVar2 + 8);
        uVar13 = *(longlong *)(lVar2 + 0x10) + 1;
        if (uVar13 < *(ulonglong *)(lVar2 + 0x10)) {
          if (uVar13 < *(ulonglong *)(lVar2 + 0x18) >> 1) {
LAB_1432b6783:
            FUN_1432b8b20(plVar8,plVar8);
          }
        }
        else if (*(ulonglong *)(lVar2 + 0x18) < uVar13) goto LAB_1432b6783;
        *(ulonglong *)(lVar2 + 0x10) = uVar13;
        puVar9 = (undefined8 *)(*plVar8 + -0x10 + uVar13 * 0x10);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = FUN_1432b8110;
          puVar9[1] = &local_b8;
        }
        Lock::DoLock(lVar12 + 0x20);
        uVar15 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar15;
      } while (uVar15 < local_b0);
    }
    uVar15 = FUN_1432b8210(param_1,param_2);
    if (uVar15 == 0xffffffff) {
      if (param_3 != 0xffffffff) {
        iVar7 = Timer::GetTicksMs();
      }
      uVar5 = FUN_1432b8210(param_1,param_2);
      uVar15 = param_3;
      if (uVar5 == 0xffffffff) {
        while( true ) {
          do {
            Mutex::DoLock(local_70);
            if (uVar15 != 0) {
              if (uVar15 == 0xffffffff) {
                while (local_78 == '\0') {
                  WaitCondition::Wait(local_48,local_70,0xffffffff);
                }
              }
              else if (local_78 == '\0') {
                WaitCondition::Wait(local_48,local_70,uVar15);
              }
            }
            cVar4 = local_78;
            if (local_77 != '\0') {
              local_77 = '\0';
              local_78 = '\0';
            }
            Mutex::Unlock(local_70);
            if ((cVar4 == '\0') || (uVar5 = FUN_1432b8210(param_1,param_2), uVar5 != 0xffffffff))
            goto LAB_1432b698f;
          } while (param_3 == 0xffffffff);
          iVar6 = Timer::GetTicksMs();
          if (param_3 <= (uint)(iVar6 - iVar7)) break;
          uVar15 = param_3 - (iVar6 - iVar7);
        }
      }
LAB_1432b698f:
      FUN_1432b7e80(&local_b8,FUN_1432b8110);
      uVar13 = (ulonglong)uVar5;
    }
    else {
      FUN_1432b7e80(&local_b8,FUN_1432b8110);
      uVar13 = (ulonglong)uVar15;
    }
LAB_1432b69a2:
    local_98 = &PTR_FUN_145af7750;
    local_80 = &PTR_LAB_145af7768;
    WaitCondition::~WaitCondition(local_48);
    Mutex::~Mutex(local_70);
    lVar12 = local_88;
    local_80 = &PTR_FUN_144025e68;
    local_98 = &PTR_FUN_145af7738;
    if (((local_88 != 0) &&
        (iVar7 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_88,0xffffffff), iVar7 == 1)) &&
       (lVar12 != 0)) {
      Lock::~Lock(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar12);
    }
    RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_98);
    iVar7 = (int)uVar13;
  }
  return iVar7;
}



// FUNCTION 1432b6a60 GetDefaultAcquireInterface body=98 status=ok
// SIG DefaultAcquireInterface * GetDefaultAcquireInterface(void)

/* public: static class Scaleform::DefaultAcquireInterface * __ptr64 __cdecl
   Scaleform::DefaultAcquireInterface::GetDefaultAcquireInterface(void) */

DefaultAcquireInterface * __cdecl
Scaleform::DefaultAcquireInterface::GetDefaultAcquireInterface(void)

{
                    /* 0x32b6a60  143
                       ?GetDefaultAcquireInterface@DefaultAcquireInterface@Scaleform@@SAPEAV12@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62ef8) {
    _Init_thread_header(&DAT_146b62ef8);
    if (DAT_146b62ef8 == -1) {
      atexit((_func_5014 *)&LAB_143ec4590);
      _Init_thread_footer(&DAT_146b62ef8);
    }
  }
  return (DefaultAcquireInterface *)&PTR_PTR_1467ccfc8;
}



// FUNCTION 1432b6ad0 Release body=86 status=ok
// SIG void Release(HandlerArray * this)

/* public: void __cdecl Scaleform::Waitable::HandlerArray::Release(void) __ptr64 */

void __thiscall Scaleform::Waitable::HandlerArray::Release(HandlerArray *this)

{
  int iVar1;
  
                    /* 0x32b6ad0  354  ?Release@HandlerArray@Waitable@Scaleform@@QEAAXXZ */
  iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this,0xffffffff);
  if ((iVar1 == 1) && (this != (HandlerArray *)0x0)) {
    Lock::~Lock(this + 0x20);
    if (*(longlong *)(this + 8) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
                    /* WARNING: Could not recover jumptable at 0x0001432b6b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this);
    return;
  }
  return;
}



// FUNCTION 1432b6b30 CallWaitHandlers body=193 status=ok
// SIG void CallWaitHandlers(HandlerArray * this)

/* public: void __cdecl Scaleform::Waitable::HandlerArray::CallWaitHandlers(void) __ptr64 */

void __thiscall Scaleform::Waitable::HandlerArray::CallWaitHandlers(HandlerArray *this)

{
  HandlerArray *pHVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *local_28;
  longlong local_20;
  undefined8 local_18;
  
                    /* 0x32b6b30  77  ?CallWaitHandlers@HandlerArray@Waitable@Scaleform@@QEAAXXZ */
  pHVar1 = this + 0x20;
  Lock::DoLock(pHVar1);
  if (*(longlong *)(this + 0x10) != 0) {
    if (*(longlong *)(this + 0x10) == 1) {
      (*(code *)**(undefined8 **)(this + 8))((*(undefined8 **)(this + 8))[1]);
      Lock::DoLock(pHVar1);
      return;
    }
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    local_18 = 0;
    FUN_1432b8a70(&local_28,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    puVar2 = local_28;
    for (lVar3 = local_20; lVar3 != 0; lVar3 = lVar3 + -1) {
      (*(code *)*puVar2)(puVar2[1]);
      puVar2 = puVar2 + 2;
    }
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28);
    }
  }
  Lock::DoLock(pHVar1);
  return;
}



// FUNCTION 1432b6c00 FUN_1432b6c00 body=161 status=ok
// SIG undefined FUN_1432b6c00(void)

undefined8 * FUN_1432b6c00(undefined8 *param_1,char param_2)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af7738;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 == '\0') {
    param_1[2] = 0;
    return param_1;
  }
  puVar1 = (undefined4 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    FUN_1432bdc50(puVar1 + 8,0);
    *puVar1 = 1;
    param_1[2] = puVar1;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1432b6cb0 FUN_1432b6cb0 body=118 status=ok
// SIG undefined FUN_1432b6cb0(void)

void FUN_1432b6cb0(RefCountImplCore *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_145af7738;
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if ((iVar2 == 1) && (lVar1 != 0)) {
      Scaleform::Lock::~Lock(lVar1 + 0x20);
      if (*(longlong *)(lVar1 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432b6d30 CallWaitHandlers body=14 status=ok
// SIG void CallWaitHandlers(Waitable * this)

/* public: void __cdecl Scaleform::Waitable::CallWaitHandlers(void) __ptr64 */

void __thiscall Scaleform::Waitable::CallWaitHandlers(Waitable *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
                    /* 0x32b6d30  78  ?CallWaitHandlers@Waitable@Scaleform@@QEAAXXZ */
  lVar3 = *(longlong *)(this + 0x10);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = lVar3 + 0x20;
  Lock::DoLock(lVar1);
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    if (*(longlong *)(lVar3 + 0x10) == 1) {
      (*(code *)**(undefined8 **)(lVar3 + 8))((*(undefined8 **)(lVar3 + 8))[1]);
      Lock::DoLock(lVar1);
      return;
    }
    puStack_28 = (undefined8 *)0x0;
    lStack_20 = 0;
    uStack_18 = 0;
    FUN_1432b8a70(&puStack_28,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    puVar2 = puStack_28;
    for (lVar3 = lStack_20; lVar3 != 0; lVar3 = lVar3 + -1) {
      (*(code *)*puVar2)(puVar2[1]);
      puVar2 = puVar2 + 2;
    }
    if (puStack_28 != (undefined8 *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puStack_28);
    }
  }
  Lock::DoLock(lVar1);
  return;
}



// FUNCTION 1432b6d50 AddWaitHandler body=187 status=ok
// SIG bool AddWaitHandler(Waitable * this, _func_void_void_ptr * param_1, void * param_2)

/* public: bool __cdecl Scaleform::Waitable::AddWaitHandler(void (__cdecl*)(void * __ptr64),void *
   __ptr64) __ptr64 */

bool __thiscall
Scaleform::Waitable::AddWaitHandler(Waitable *this,_func_void_void_ptr *param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
                    /* 0x32b6d50  65  ?AddWaitHandler@Waitable@Scaleform@@QEAA_NP6AXPEAX@Z0@Z */
  lVar1 = *(longlong *)(this + 0x10);
  if (lVar1 == 0) {
    return false;
  }
  Lock::DoLock(lVar1 + 0x20);
  lVar2 = *(longlong *)(this + 0x10);
  plVar4 = (longlong *)(lVar2 + 8);
  uVar5 = *(longlong *)(lVar2 + 0x10) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x10)) {
    uVar6 = uVar5;
    if (*(ulonglong *)(lVar2 + 0x18) >> 1 <= uVar5) goto LAB_1432b6dca;
  }
  else {
    if (uVar5 <= *(ulonglong *)(lVar2 + 0x18)) goto LAB_1432b6dca;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_1432b8b20(plVar4,plVar4,uVar6);
LAB_1432b6dca:
  *(ulonglong *)(lVar2 + 0x10) = uVar5;
  puVar3 = (undefined8 *)(*plVar4 + -0x10 + uVar5 * 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_1;
    puVar3[1] = param_2;
  }
  Lock::DoLock(lVar1 + 0x20);
  return true;
}



// FUNCTION 1432b6e20 RemoveWaitHandler body=218 status=ok
// SIG bool RemoveWaitHandler(Waitable * this, _func_void_void_ptr * param_1, void * param_2)

/* public: bool __cdecl Scaleform::Waitable::RemoveWaitHandler(void (__cdecl*)(void * __ptr64),void
   * __ptr64) __ptr64 */

bool __thiscall
Scaleform::Waitable::RemoveWaitHandler(Waitable *this,_func_void_void_ptr *param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  void *_Dst;
  
                    /* 0x32b6e20  363  ?RemoveWaitHandler@Waitable@Scaleform@@QEAA_NP6AXPEAX@Z0@Z */
  lVar1 = *(longlong *)(this + 0x10);
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    Lock::DoLock();
    lVar2 = *(longlong *)(this + 0x10);
    uVar5 = 0;
    if (*(ulonglong *)(lVar2 + 0x10) != 0) {
      do {
        plVar4 = (longlong *)(uVar5 * 0x10 + *(longlong *)(lVar2 + 8));
        if (((_func_void_void_ptr *)*plVar4 == param_1) && ((void *)plVar4[1] == param_2)) {
          if (*(longlong *)(lVar2 + 0x10) == 1) {
            FUN_1432b8bd0(lVar2 + 8,0);
          }
          else {
            _Dst = (void *)(uVar5 * 0x10 + *(longlong *)(lVar2 + 8));
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                    (*(longlong *)(lVar2 + 0x10) - uVar5) * 0x10 - 0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
          }
          bVar3 = true;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while (uVar5 < *(ulonglong *)(lVar2 + 0x10));
    }
    Lock::DoLock(lVar1 + 0x20);
  }
  return bVar3;
}



// FUNCTION 1432b6f00 Wait body=675 status=ok
// SIG bool Wait(Waitable * this, uint param_1)

/* public: bool __cdecl Scaleform::Waitable::Wait(unsigned int) __ptr64 */

bool __thiscall Scaleform::Waitable::Wait(Waitable *this,uint param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Waitable *local_98;
  undefined ***local_90;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined **local_70;
  char local_68;
  char local_67;
  Mutex local_60 [40];
  WaitCondition local_38 [16];
  
                    /* 0x32b6f00  522  ?Wait@Waitable@Scaleform@@QEAA_NI@Z */
  cVar2 = (**(code **)(*(longlong *)this + 8))();
  if (cVar2 != '\0') {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  iVar5 = 0;
  local_70 = &PTR_LAB_145af7768;
  local_80 = 1;
  local_78 = 0;
  local_88 = &PTR_FUN_145af7750;
  Mutex::Mutex(local_60,true,false);
  WaitCondition::WaitCondition(local_38);
  local_90 = &local_88;
  local_68 = '\0';
  local_67 = '\0';
  local_98 = this;
  bVar3 = AddWaitHandler(this,Waitable_SingleWaitHandler,&local_98);
  if (bVar3) {
    cVar2 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar2 == '\0') {
      bVar3 = false;
      uVar6 = param_1;
      if (param_1 != 0xffffffff) {
        iVar5 = Timer::GetTicksMs();
      }
      while( true ) {
        Mutex::DoLock(local_60);
        if (uVar6 != 0) {
          if (uVar6 == 0xffffffff) {
            while (local_68 == '\0') {
              WaitCondition::Wait(local_38,local_60,0xffffffff);
            }
          }
          else if (local_68 == '\0') {
            WaitCondition::Wait(local_38,local_60,uVar6);
          }
        }
        cVar2 = local_68;
        if (local_67 != '\0') {
          local_67 = '\0';
          local_68 = '\0';
        }
        Mutex::Unlock(local_60);
        if (cVar2 == '\0') goto LAB_1432b70c9;
        cVar2 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar2 != '\0') break;
        if (param_1 != 0xffffffff) {
          iVar4 = Timer::GetTicksMs();
          if (param_1 <= (uint)(iVar4 - iVar5)) goto LAB_1432b70c9;
          uVar6 = param_1 - (iVar4 - iVar5);
        }
      }
      bVar3 = true;
LAB_1432b70c9:
      RemoveWaitHandler(this,Waitable_SingleWaitHandler,&local_98);
    }
    else {
      RemoveWaitHandler(this,Waitable_SingleWaitHandler,&local_98);
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  local_88 = &PTR_FUN_145af7750;
  local_70 = &PTR_LAB_145af7768;
  WaitCondition::~WaitCondition(local_38);
  Mutex::~Mutex(local_60);
  lVar1 = local_78;
  local_70 = &PTR_FUN_144025e68;
  local_88 = &PTR_FUN_145af7738;
  if (((local_78 != 0) &&
      (iVar5 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_78,0xffffffff), iVar5 == 1)) &&
     (lVar1 != 0)) {
    Lock::~Lock(lVar1 + 0x20);
    if (*(longlong *)(lVar1 + 8) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_88);
  return bVar3;
}



// FUNCTION 1432b71b0 Acquire body=37 status=ok
// SIG bool Acquire(Waitable * this, uint param_1)

/* public: bool __cdecl Scaleform::Waitable::Acquire(unsigned int) __ptr64 */

bool __thiscall Scaleform::Waitable::Acquire(Waitable *this,uint param_1)

{
  int iVar1;
  Waitable *local_res8 [4];
  
                    /* 0x32b71b0  55  ?Acquire@Waitable@Scaleform@@QEAA_NI@Z */
  local_res8[0] = this;
  iVar1 = AcquireInterface::AcquireOneOfMultipleObjects(local_res8,1,param_1);
  return iVar1 == 0;
}



// FUNCTION 1432b71e0 IsSignaled body=3 status=ok
// SIG bool IsSignaled(Waitable * this)

/* public: virtual bool __cdecl Scaleform::Waitable::IsSignaled(void)const __ptr64 */

bool __thiscall Scaleform::Waitable::IsSignaled(Waitable *this)

{
                    /* 0x32b71e0  241  ?IsSignaled@Waitable@Scaleform@@UEBA_NXZ */
  return true;
}



// FUNCTION 1432b71f0 GetAcquireInterface body=112 status=ok
// SIG AcquireInterface * GetAcquireInterface(Waitable * this)

/* public: virtual class Scaleform::AcquireInterface * __ptr64 __cdecl
   Scaleform::Waitable::GetAcquireInterface(void) __ptr64 */

AcquireInterface * __thiscall Scaleform::Waitable::GetAcquireInterface(Waitable *this)

{
                    /* 0x32b71f0  128
                       ?GetAcquireInterface@Waitable@Scaleform@@UEAAPEAVAcquireInterface@2@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62ef8) {
    _Init_thread_header(&DAT_146b62ef8);
    if (DAT_146b62ef8 == -1) {
      PTR_PTR_1467ccfc8 = (undefined *)&PTR_FUN_145af7710;
      atexit((_func_5014 *)&LAB_143ec4590);
      _Init_thread_footer(&DAT_146b62ef8);
    }
  }
  return (AcquireInterface *)&PTR_PTR_1467ccfc8;
}



// FUNCTION 1432b7270 Event body=90 status=ok
// SIG undefined Event(Event * this, bool param_1, bool param_2)

/* public: __cdecl Scaleform::Event::Event(bool,bool) __ptr64 */

Event * __thiscall Scaleform::Event::Event(Event *this,bool param_1,bool param_2)

{
                    /* 0x32b7270  3  ??0Event@Scaleform@@QEAA@_N0@Z */
  FUN_1432b6c00(this,param_2);
  *(undefined ***)this = &PTR_FUN_145af7750;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af7768;
  Mutex::Mutex((Mutex *)(this + 0x28),true,false);
  WaitCondition::WaitCondition((WaitCondition *)(this + 0x50));
  this[0x20] = (Event)param_1;
  this[0x21] = (Event)0x0;
  return this;
}



// FUNCTION 1432b72d0 ~Event body=72 status=ok
// SIG void ~Event(Event * this)

/* public: virtual __cdecl Scaleform::Event::~Event(void) __ptr64 */

void __thiscall Scaleform::Event::~Event(Event *this)

{
                    /* 0x32b72d0  29  ??1Event@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145af7750;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af7768;
  WaitCondition::~WaitCondition((WaitCondition *)(this + 0x50));
  Mutex::~Mutex((Mutex *)(this + 0x28));
  *(undefined ***)(this + 0x18) = &PTR_FUN_144025e68;
  FUN_1432b6cb0(this);
  return;
}



// FUNCTION 1432b7320 Wait body=153 status=ok
// SIG bool Wait(Event * this, uint param_1)

/* public: bool __cdecl Scaleform::Event::Wait(unsigned int) __ptr64 */

bool __thiscall Scaleform::Event::Wait(Event *this,uint param_1)

{
  Event EVar1;
  
                    /* 0x32b7320  520  ?Wait@Event@Scaleform@@QEAA_NI@Z */
  Mutex::DoLock((Mutex *)(this + 0x28));
  if (param_1 != 0) {
    if (param_1 == 0xffffffff) {
      if (this[0x20] == (Event)0x0) {
        do {
          WaitCondition::Wait((WaitCondition *)(this + 0x50),(Mutex *)(this + 0x28),0xffffffff);
        } while (this[0x20] == (Event)0x0);
      }
    }
    else if (this[0x20] == (Event)0x0) {
      WaitCondition::Wait((WaitCondition *)(this + 0x50),(Mutex *)(this + 0x28),param_1);
    }
  }
  EVar1 = this[0x20];
  if (this[0x21] != (Event)0x0) {
    this[0x21] = (Event)0x0;
    this[0x20] = (Event)0x0;
  }
  Mutex::Unlock((Mutex *)(this + 0x28));
  return (bool)EVar1;
}



// FUNCTION 1432b73c0 SetEvent body=176 status=ok
// SIG void SetEvent(Event * this)

/* public: void __cdecl Scaleform::Event::SetEvent(void) __ptr64 */

void __thiscall Scaleform::Event::SetEvent(Event *this)

{
  HandlerArray *this_00;
  int iVar1;
  HandlerArray *local_res8;
  
                    /* 0x32b73c0  401  ?SetEvent@Event@Scaleform@@QEAAXXZ */
  Mutex::DoLock((Mutex *)(this + 0x28));
  this[0x20] = (Event)0x1;
  this[0x21] = (Event)0x0;
  WaitCondition::NotifyAll((WaitCondition *)(this + 0x50));
  local_res8 = (HandlerArray *)0x0;
  if (*(longlong *)(this + 0x10) != 0) {
    FUN_1432b84f0(&local_res8);
  }
  this_00 = local_res8;
  Mutex::Unlock((Mutex *)(this + 0x28));
  if (this_00 != (HandlerArray *)0x0) {
    Waitable::HandlerArray::CallWaitHandlers(this_00);
    iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this_00,0xffffffff);
    if (iVar1 == 1) {
      Lock::~Lock(this_00 + 0x20);
      if (*(longlong *)(this_00 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this_00);
    }
  }
  return;
}



// FUNCTION 1432b7480 ?ResetEvent@Event@Scaleform@@QEAAXXZ body=49 status=ok
// SIG BOOL ?ResetEvent@Event@Scaleform@@QEAAXXZ(HANDLE hEvent)

BOOL __stdcall _ResetEvent_Event_Scaleform__QEAAXXZ(HANDLE hEvent)

{
  BOOL extraout_EAX;
  
                    /* 0x32b7480  366  ?ResetEvent@Event@Scaleform@@QEAAXXZ */
  Scaleform::Mutex::DoLock((Mutex *)((longlong)hEvent + 0x28));
  *(undefined1 *)((longlong)hEvent + 0x20) = 0;
  *(undefined1 *)((longlong)hEvent + 0x21) = 0;
  Scaleform::Mutex::Unlock((Mutex *)((longlong)hEvent + 0x28));
  return extraout_EAX;
}



// FUNCTION 1432b74c0 PulseEvent body=176 status=ok
// SIG void PulseEvent(Event * this)

/* public: void __cdecl Scaleform::Event::PulseEvent(void) __ptr64 */

void __thiscall Scaleform::Event::PulseEvent(Event *this)

{
  HandlerArray *this_00;
  int iVar1;
  HandlerArray *local_res8;
  
                    /* 0x32b74c0  333  ?PulseEvent@Event@Scaleform@@QEAAXXZ */
  Mutex::DoLock((Mutex *)(this + 0x28));
  this[0x20] = (Event)0x1;
  this[0x21] = (Event)0x1;
  WaitCondition::NotifyAll((WaitCondition *)(this + 0x50));
  local_res8 = (HandlerArray *)0x0;
  if (*(longlong *)(this + 0x10) != 0) {
    FUN_1432b84f0(&local_res8);
  }
  this_00 = local_res8;
  Mutex::Unlock((Mutex *)(this + 0x28));
  if (this_00 != (HandlerArray *)0x0) {
    Waitable::HandlerArray::CallWaitHandlers(this_00);
    iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this_00,0xffffffff);
    if (iVar1 == 1) {
      Lock::~Lock(this_00 + 0x20);
      if (*(longlong *)(this_00 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this_00);
    }
  }
  return;
}



// FUNCTION 1432b7580 IsSignaled body=5 status=ok
// SIG bool IsSignaled(Event * this)

/* public: virtual bool __cdecl Scaleform::Event::IsSignaled(void)const __ptr64 */

bool __thiscall Scaleform::Event::IsSignaled(Event *this)

{
                    /* 0x32b7580  238  ?IsSignaled@Event@Scaleform@@UEBA_NXZ */
  return (bool)this[0x20];
}



// FUNCTION 1432b7590 GetAcquireInterface body=14 status=ok
// SIG AcquireInterface * GetAcquireInterface(Event * this)

/* public: virtual class Scaleform::AcquireInterface * __ptr64 __cdecl
   Scaleform::Event::GetAcquireInterface(void) __ptr64 */

AcquireInterface * __thiscall Scaleform::Event::GetAcquireInterface(Event *this)

{
  AcquireInterface *pAVar1;
  
                    /* 0x32b7590  125
                       ?GetAcquireInterface@Event@Scaleform@@UEAAPEAVAcquireInterface@2@XZ */
  pAVar1 = (AcquireInterface *)(this + 0x18);
  if (this == (Event *)0x0) {
    pAVar1 = (AcquireInterface *)0x0;
  }
  return pAVar1;
}



// FUNCTION 1432b75b0 CanAcquire body=12 status=ok
// SIG bool CanAcquire(Event * this)

/* public: virtual bool __cdecl Scaleform::Event::CanAcquire(void) __ptr64 */

bool __thiscall Scaleform::Event::CanAcquire(Event *this)

{
  undefined1 uVar1;
  
                    /* 0x32b75b0  80  ?CanAcquire@Event@Scaleform@@UEAA_NXZ */
                    /* WARNING: Could not recover jumptable at 0x0001432b75b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + -0x18) + 8))(this + -0x18);
  return (bool)uVar1;
}



// FUNCTION 1432b75d0 TryAcquire body=12 status=ok
// SIG bool TryAcquire(Event * this)

/* public: virtual bool __cdecl Scaleform::Event::TryAcquire(void) __ptr64 */

bool __thiscall Scaleform::Event::TryAcquire(Event *this)

{
  undefined1 uVar1;
  
                    /* 0x32b75d0  489  ?TryAcquire@Event@Scaleform@@UEAA_NXZ */
                    /* WARNING: Could not recover jumptable at 0x0001432b75d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + -0x18) + 8))(this + -0x18);
  return (bool)uVar1;
}



// FUNCTION 1432b75f0 TryAcquireCommit body=60 status=ok
// SIG bool TryAcquireCommit(Event * this)

/* public: virtual bool __cdecl Scaleform::Event::TryAcquireCommit(void) __ptr64 */

bool __thiscall Scaleform::Event::TryAcquireCommit(Event *this)

{
                    /* 0x32b75f0  497  ?TryAcquireCommit@Event@Scaleform@@UEAA_NXZ */
  Mutex::DoLock((Mutex *)(this + 0x10));
  if (this[9] != (Event)0x0) {
    this[9] = (Event)0x0;
    this[8] = (Event)0x0;
  }
  Mutex::Unlock((Mutex *)(this + 0x10));
  return true;
}



// FUNCTION 1432b7640 TryAcquireCancel body=3 status=ok
// SIG bool TryAcquireCancel(Event * this)

/* public: virtual bool __cdecl Scaleform::Event::TryAcquireCancel(void) __ptr64 */

bool __thiscall Scaleform::Event::TryAcquireCancel(Event *this)

{
                    /* 0x32b7640  493  ?TryAcquireCancel@Event@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b7650 Semaphore body=92 status=ok
// SIG undefined Semaphore(Semaphore * this, int param_1, bool param_2)

/* public: __cdecl Scaleform::Semaphore::Semaphore(int,bool) __ptr64 */

Semaphore * __thiscall Scaleform::Semaphore::Semaphore(Semaphore *this,int param_1,bool param_2)

{
                    /* 0x32b7650  11  ??0Semaphore@Scaleform@@QEAA@H_N@Z */
  FUN_1432b6c00(this,param_2);
  *(undefined ***)this = &PTR_FUN_145af7790;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af77a8;
  Mutex::Mutex((Mutex *)(this + 0x28),true,false);
  WaitCondition::WaitCondition((WaitCondition *)(this + 0x50));
  *(int *)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x24) = 0;
  return this;
}



// FUNCTION 1432b76c0 ~Semaphore body=72 status=ok
// SIG void ~Semaphore(Semaphore * this)

/* public: virtual __cdecl Scaleform::Semaphore::~Semaphore(void) __ptr64 */

void __thiscall Scaleform::Semaphore::~Semaphore(Semaphore *this)

{
                    /* 0x32b76c0  40  ??1Semaphore@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145af7790;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af77a8;
  WaitCondition::~WaitCondition((WaitCondition *)(this + 0x50));
  Mutex::~Mutex((Mutex *)(this + 0x28));
  *(undefined ***)(this + 0x18) = &PTR_FUN_144025e68;
  FUN_1432b6cb0(this);
  return;
}



// FUNCTION 1432b7740 ObtainSemaphore body=242 status=ok
// SIG bool ObtainSemaphore(Semaphore * this, int param_1, uint param_2)

/* public: bool __cdecl Scaleform::Semaphore::ObtainSemaphore(int,unsigned int) __ptr64 */

bool __thiscall Scaleform::Semaphore::ObtainSemaphore(Semaphore *this,int param_1,uint param_2)

{
  Mutex *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x32b7740  288  ?ObtainSemaphore@Semaphore@Scaleform@@QEAA_NHI@Z */
  if (*(int *)(this + 0x20) < param_1) {
    return false;
  }
  this_00 = (Mutex *)(this + 0x28);
  Mutex::DoLock(this_00);
  if (*(int *)(this + 0x20) < *(int *)(this + 0x24) + param_1) {
    if (param_2 != 0) {
      if (param_2 == 0xffffffff) {
        if (*(int *)(this + 0x20) < *(int *)(this + 0x24) + param_1) {
          do {
            WaitCondition::Wait((WaitCondition *)(this + 0x50),this_00,0xffffffff);
          } while (*(int *)(this + 0x20) < *(int *)(this + 0x24) + param_1);
        }
        goto LAB_1432b77bb;
      }
      iVar2 = Timer::GetTicksMs();
      bVar1 = WaitCondition::Wait((WaitCondition *)(this + 0x50),this_00,param_2);
      if (bVar1) {
        do {
          if (*(int *)(this + 0x24) + param_1 <= *(int *)(this + 0x20)) goto LAB_1432b77bb;
          iVar3 = Timer::GetTicksMs();
          if (param_2 <= (uint)(iVar3 - iVar2)) break;
          bVar1 = WaitCondition::Wait((WaitCondition *)(this + 0x50),this_00,
                                      param_2 - (iVar3 - iVar2));
        } while (bVar1);
      }
    }
    bVar1 = false;
  }
  else {
LAB_1432b77bb:
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + param_1;
    bVar1 = true;
  }
  Mutex::Unlock(this_00);
  return bVar1;
}



// FUNCTION 1432b7840 ReleaseSemaphore body=217 status=ok
// SIG bool ReleaseSemaphore(Semaphore * this, int param_1)

/* public: bool __cdecl Scaleform::Semaphore::ReleaseSemaphore(int) __ptr64 */

bool __thiscall Scaleform::Semaphore::ReleaseSemaphore(Semaphore *this,int param_1)

{
  HandlerArray *this_00;
  int iVar1;
  HandlerArray *local_res18;
  
                    /* 0x32b7840  358  ?ReleaseSemaphore@Semaphore@Scaleform@@QEAA_NH@Z */
  if (param_1 != 0) {
    Mutex::DoLock((Mutex *)(this + 0x28));
    if (*(int *)(this + 0x24) - param_1 < 0) {
      *(undefined4 *)(this + 0x24) = 0;
    }
    else {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) - param_1;
    }
    if (param_1 == 1) {
      WaitCondition::Notify((WaitCondition *)(this + 0x50));
    }
    else {
      WaitCondition::NotifyAll((WaitCondition *)(this + 0x50));
    }
    local_res18 = (HandlerArray *)0x0;
    if (*(longlong *)(this + 0x10) != 0) {
      FUN_1432b84f0(&local_res18);
    }
    this_00 = local_res18;
    Mutex::Unlock((Mutex *)(this + 0x28));
    if (this_00 != (HandlerArray *)0x0) {
      Waitable::HandlerArray::CallWaitHandlers(this_00);
      iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this_00,0xffffffff);
      if (iVar1 == 1) {
        Lock::~Lock(this_00 + 0x20);
        if (*(longlong *)(this_00 + 8) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this_00);
      }
    }
  }
  return true;
}



// FUNCTION 1432b7920 operator++ body=104 status=ok
// SIG int operator++(Semaphore * this, int param_1)

/* public: int __cdecl Scaleform::Semaphore::operator++(int) __ptr64 */

int __thiscall Scaleform::Semaphore::operator++(Semaphore *this,int param_1)

{
  Mutex *this_00;
  int iVar1;
  
                    /* 0x32b7920  45  ??ESemaphore@Scaleform@@QEAAHH@Z */
  this_00 = (Mutex *)(this + 0x28);
  Mutex::DoLock(this_00);
  if (*(int *)(this + 0x20) <= *(int *)(this + 0x24)) {
    do {
      WaitCondition::Wait((WaitCondition *)(this + 0x50),this_00,0xffffffff);
    } while (*(int *)(this + 0x20) <= *(int *)(this + 0x24));
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
  iVar1 = *(int *)(this + 0x24);
  Mutex::Unlock(this_00);
  return iVar1;
}



// FUNCTION 1432b7990 operator-- body=195 status=ok
// SIG int operator--(Semaphore * this, int param_1)

/* public: int __cdecl Scaleform::Semaphore::operator--(int) __ptr64 */

int __thiscall Scaleform::Semaphore::operator--(Semaphore *this,int param_1)

{
  int iVar1;
  HandlerArray *pHVar2;
  int iVar3;
  HandlerArray *local_res8;
  
                    /* 0x32b7990  46  ??FSemaphore@Scaleform@@QEAAHH@Z */
  Mutex::DoLock((Mutex *)(this + 0x28));
  if (0 < *(int *)(this + 0x24)) {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  }
  WaitCondition::Notify((WaitCondition *)(this + 0x50));
  local_res8 = (HandlerArray *)0x0;
  if (*(longlong *)(this + 0x10) != 0) {
    FUN_1432b84f0(&local_res8);
  }
  pHVar2 = local_res8;
  Mutex::Unlock((Mutex *)(this + 0x28));
  if (pHVar2 != (HandlerArray *)0x0) {
    Waitable::HandlerArray::CallWaitHandlers(pHVar2);
  }
  pHVar2 = local_res8;
  iVar1 = *(int *)(this + 0x24);
  if (local_res8 != (HandlerArray *)0x0) {
    iVar3 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_res8,0xffffffff);
    if (iVar3 == 1) {
      Lock::~Lock(pHVar2 + 0x20);
      if (*(longlong *)(pHVar2 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pHVar2);
    }
  }
  return iVar1;
}



// FUNCTION 1432b7a60 operator+= body=111 status=ok
// SIG int operator+=(Semaphore * this, int param_1)

/* public: int __cdecl Scaleform::Semaphore::operator+=(int) __ptr64 */

int __thiscall Scaleform::Semaphore::operator+=(Semaphore *this,int param_1)

{
  Mutex *this_00;
  int iVar1;
  
                    /* 0x32b7a60  47  ??YSemaphore@Scaleform@@QEAAHH@Z */
  this_00 = (Mutex *)(this + 0x28);
  Mutex::DoLock(this_00);
  if (*(int *)(this + 0x20) < *(int *)(this + 0x24) + param_1) {
    do {
      WaitCondition::Wait((WaitCondition *)(this + 0x50),this_00,0xffffffff);
    } while (*(int *)(this + 0x20) < *(int *)(this + 0x24) + param_1);
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + param_1;
  iVar1 = *(int *)(this + 0x24);
  Mutex::Unlock(this_00);
  return iVar1;
}



// FUNCTION 1432b7ae0 operator-= body=212 status=ok
// SIG int operator-=(Semaphore * this, int param_1)

/* public: int __cdecl Scaleform::Semaphore::operator-=(int) __ptr64 */

int __thiscall Scaleform::Semaphore::operator-=(Semaphore *this,int param_1)

{
  int iVar1;
  HandlerArray *pHVar2;
  int iVar3;
  HandlerArray *local_res8;
  
                    /* 0x32b7ae0  48  ??ZSemaphore@Scaleform@@QEAAHH@Z */
  Mutex::DoLock((Mutex *)(this + 0x28));
  if (*(int *)(this + 0x24) - param_1 < 0) {
    *(undefined4 *)(this + 0x24) = 0;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) - param_1;
  }
  WaitCondition::NotifyAll((WaitCondition *)(this + 0x50));
  local_res8 = (HandlerArray *)0x0;
  if (*(longlong *)(this + 0x10) != 0) {
    FUN_1432b84f0(&local_res8);
  }
  pHVar2 = local_res8;
  Mutex::Unlock((Mutex *)(this + 0x28));
  if (pHVar2 != (HandlerArray *)0x0) {
    Waitable::HandlerArray::CallWaitHandlers(pHVar2);
  }
  pHVar2 = local_res8;
  iVar1 = *(int *)(this + 0x24);
  if (local_res8 != (HandlerArray *)0x0) {
    iVar3 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_res8,0xffffffff);
    if (iVar3 == 1) {
      Lock::~Lock(pHVar2 + 0x20);
      if (*(longlong *)(pHVar2 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pHVar2);
    }
  }
  return iVar1;
}



// FUNCTION 1432b7bc0 CreateWaitableIncrement body=75 status=ok
// SIG Waitable * CreateWaitableIncrement(Semaphore * this, int param_1)

/* public: class Scaleform::Waitable * __ptr64 __cdecl
   Scaleform::Semaphore::CreateWaitableIncrement(int) __ptr64 */

Waitable * __thiscall Scaleform::Semaphore::CreateWaitableIncrement(Semaphore *this,int param_1)

{
  longlong lVar1;
  Waitable *pWVar2;
  
                    /* 0x32b7bc0  103
                       ?CreateWaitableIncrement@Semaphore@Scaleform@@QEAAPEAVWaitable@2@H@Z */
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
  if (lVar1 != 0) {
    pWVar2 = (Waitable *)FUN_1432b8280(lVar1,this,param_1);
    return pWVar2;
  }
  return (Waitable *)0x0;
}



// FUNCTION 1432b7c20 CanAcquire body=14 status=ok
// SIG bool CanAcquire(Semaphore * this)

/* public: virtual bool __cdecl Scaleform::Semaphore::CanAcquire(void) __ptr64 */

bool __thiscall Scaleform::Semaphore::CanAcquire(Semaphore *this)

{
                    /* 0x32b7c20  82  ?CanAcquire@Semaphore@Scaleform@@UEAA_NXZ */
  return 0 < *(int *)(this + 8) - *(int *)(this + 0xc);
}



// FUNCTION 1432b7c40 TryAcquire body=90 status=ok
// SIG bool TryAcquire(Semaphore * this)

/* public: virtual bool __cdecl Scaleform::Semaphore::TryAcquire(void) __ptr64 */

bool __thiscall Scaleform::Semaphore::TryAcquire(Semaphore *this)

{
                    /* 0x32b7c40  491  ?TryAcquire@Semaphore@Scaleform@@UEAA_NXZ */
  if (*(int *)(this + 8) < 1) {
    return false;
  }
  Mutex::DoLock((Mutex *)(this + 0x10));
  if (*(int *)(this + 0xc) + 1 <= *(int *)(this + 8)) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    Mutex::Unlock((Mutex *)(this + 0x10));
    return true;
  }
  Mutex::Unlock((Mutex *)(this + 0x10));
  return false;
}



// FUNCTION 1432b7ca0 TryAcquireCommit body=3 status=ok
// SIG bool TryAcquireCommit(Semaphore * this)

/* public: virtual bool __cdecl Scaleform::Semaphore::TryAcquireCommit(void) __ptr64 */

bool __thiscall Scaleform::Semaphore::TryAcquireCommit(Semaphore *this)

{
                    /* 0x32b7ca0  499  ?TryAcquireCommit@Semaphore@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b7cb0 TryAcquireCancel body=186 status=ok
// SIG bool TryAcquireCancel(Semaphore * this)

/* public: virtual bool __cdecl Scaleform::Semaphore::TryAcquireCancel(void) __ptr64 */

bool __thiscall Scaleform::Semaphore::TryAcquireCancel(Semaphore *this)

{
  HandlerArray *this_00;
  int iVar1;
  HandlerArray *local_res8;
  
                    /* 0x32b7cb0  495  ?TryAcquireCancel@Semaphore@Scaleform@@UEAA_NXZ */
  Mutex::DoLock((Mutex *)(this + 0x10));
  if (*(int *)(this + 0xc) + -1 < 0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  }
  WaitCondition::Notify((WaitCondition *)(this + 0x38));
  local_res8 = (HandlerArray *)0x0;
  if (*(longlong *)(this + -8) != 0) {
    FUN_1432b84f0(&local_res8);
  }
  this_00 = local_res8;
  Mutex::Unlock((Mutex *)(this + 0x10));
  if (this_00 != (HandlerArray *)0x0) {
    Waitable::HandlerArray::CallWaitHandlers(this_00);
    iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this_00,0xffffffff);
    if (iVar1 == 1) {
      Lock::~Lock(this_00 + 0x20);
      if (*(longlong *)(this_00 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this_00);
    }
  }
  return true;
}



// FUNCTION 1432b7d70 IsSignaled body=14 status=ok
// SIG bool IsSignaled(Semaphore * this)

/* public: virtual bool __cdecl Scaleform::Semaphore::IsSignaled(void)const __ptr64 */

bool __thiscall Scaleform::Semaphore::IsSignaled(Semaphore *this)

{
                    /* 0x32b7d70  240  ?IsSignaled@Semaphore@Scaleform@@UEBA_NXZ */
  return 0 < *(int *)(this + 0x20) - *(int *)(this + 0x24);
}



// FUNCTION 1432b7d90 GetAcquireInterface body=14 status=ok
// SIG AcquireInterface * GetAcquireInterface(Semaphore * this)

/* public: virtual class Scaleform::AcquireInterface * __ptr64 __cdecl
   Scaleform::Semaphore::GetAcquireInterface(void) __ptr64 */

AcquireInterface * __thiscall Scaleform::Semaphore::GetAcquireInterface(Semaphore *this)

{
  AcquireInterface *pAVar1;
  
                    /* 0x32b7d90  127
                       ?GetAcquireInterface@Semaphore@Scaleform@@UEAAPEAVAcquireInterface@2@XZ */
  pAVar1 = (AcquireInterface *)(this + 0x18);
  if (this == (Semaphore *)0x0) {
    pAVar1 = (AcquireInterface *)0x0;
  }
  return pAVar1;
}



// FUNCTION 1432b7db0 Waitable_SingleWaitHandler body=42 status=ok
// SIG undefined Waitable_SingleWaitHandler(void)

void Scaleform::Waitable_SingleWaitHandler(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (cVar1 != '\0') {
    Event::PulseEvent((Event *)param_1[1]);
    return;
  }
  return;
}



// FUNCTION 1432b7de0 FUN_1432b7de0 body=146 status=ok
// SIG undefined FUN_1432b7de0(void)

undefined1 FUN_1432b7de0(longlong *param_1,_func_void_void_ptr *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if ((int)param_1[1] != 0) {
    do {
      bVar1 = Scaleform::Waitable::AddWaitHandler
                        (*(Waitable **)(*param_1 + uVar3 * 8),param_2,param_1);
      if (!bVar1) {
        if ((int)uVar3 != 0) {
          lVar4 = uVar3 << 3;
          do {
            lVar4 = lVar4 + -8;
            Scaleform::Waitable::RemoveWaitHandler(*(Waitable **)(lVar4 + *param_1),param_2,param_1)
            ;
            uVar2 = (int)uVar3 - 1;
            uVar3 = (ulonglong)uVar2;
          } while (uVar2 != 0);
        }
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 1));
  }
  return 1;
}



// FUNCTION 1432b7e80 FUN_1432b7e80 body=225 status=ok
// SIG undefined FUN_1432b7e80(void)

void FUN_1432b7e80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if ((int)param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(*param_1 + uVar5 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 != 0) {
        Scaleform::Lock::DoLock(lVar2 + 0x20);
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(ulonglong *)(lVar1 + 0x10) != 0) {
          uVar3 = 0;
          do {
            if ((*(longlong *)(*(longlong *)(lVar1 + 8) + uVar3 * 0x10) == param_2) &&
               (*(longlong **)(*(longlong *)(lVar1 + 8) + 8 + uVar3 * 0x10) == param_1)) {
              if (*(longlong *)(lVar1 + 0x10) == 1) {
                *(undefined8 *)(lVar1 + 0x10) = 0;
              }
              else {
                _Dst = (void *)(uVar3 * 0x10 + *(longlong *)(lVar1 + 8));
                memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                        (*(longlong *)(lVar1 + 0x10) - uVar3) * 0x10 - 0x10);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
              }
              break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
          } while (uVar3 < *(ulonglong *)(lVar1 + 0x10));
        }
        Scaleform::Lock::DoLock(lVar2 + 0x20);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 1));
  }
  return;
}



// FUNCTION 1432b7f70 FUN_1432b7f70 body=223 status=ok
// SIG undefined FUN_1432b7f70(void)

void FUN_1432b7f70(longlong param_1)

{
  longlong lVar1;
  HandlerArray *this;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  HandlerArray *local_res8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + uVar4 * 8) + 8))();
      if (cVar2 == '\0') {
        return;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x28));
  *(undefined1 *)(lVar1 + 0x20) = 1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  Scaleform::WaitCondition::NotifyAll((WaitCondition *)(lVar1 + 0x50));
  local_res8 = (HandlerArray *)0x0;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    FUN_1432b84f0(&local_res8);
  }
  this = local_res8;
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x28));
  if (this != (HandlerArray *)0x0) {
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(this);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this,0xffffffff);
    if (iVar3 == 1) {
      Scaleform::Lock::~Lock(this + 0x20);
      if (*(longlong *)(this + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this);
    }
  }
  return;
}



// FUNCTION 1432b8060 FUN_1432b8060 body=165 status=ok
// SIG undefined FUN_1432b8060(void)

undefined8 FUN_1432b8060(undefined8 *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  uVar3 = 0;
  uVar4 = (ulonglong)param_2;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      cVar1 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
      if (cVar1 == '\0') break;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      puVar5 = puVar5 + 1;
    } while (uVar2 < param_2);
  }
  if ((uint)uVar3 != param_2) {
    if ((uint)uVar3 != 0) {
      param_1 = param_1 + uVar3;
      do {
        puVar5 = param_1 + -1;
        param_1 = param_1 + -1;
        (**(code **)(*(longlong *)*puVar5 + 0x20))();
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 != 0);
    }
    return 0;
  }
  if (param_2 != 0) {
    do {
      (**(code **)(*(longlong *)*param_1 + 0x18))();
      param_1 = param_1 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 1;
}



// FUNCTION 1432b8110 FUN_1432b8110 body=243 status=ok
// SIG undefined FUN_1432b8110(void)

void FUN_1432b8110(longlong *param_1)

{
  longlong lVar1;
  HandlerArray *this;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  HandlerArray *local_res8;
  
  uVar5 = 0;
  if ((int)param_1[1] != 0) {
    while( true ) {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(*param_1 + uVar5 * 8) + 0x10))();
      cVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      if (cVar2 != '\0') break;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      if (*(uint *)(param_1 + 1) <= uVar6) {
        return;
      }
    }
    lVar1 = param_1[2];
    Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x28));
    *(undefined1 *)(lVar1 + 0x20) = 1;
    *(undefined1 *)(lVar1 + 0x21) = 1;
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(lVar1 + 0x50));
    local_res8 = (HandlerArray *)0x0;
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1432b84f0(&local_res8);
    }
    this = local_res8;
    Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x28));
    if (this != (HandlerArray *)0x0) {
      Scaleform::Waitable::HandlerArray::CallWaitHandlers(this);
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this,0xffffffff);
      if (iVar3 == 1) {
        Scaleform::Lock::~Lock(this + 0x20);
        if (*(longlong *)(this + 8) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,this);
      }
    }
  }
  return;
}



// FUNCTION 1432b8210 FUN_1432b8210 body=104 status=ok
// SIG undefined FUN_1432b8210(void)

uint FUN_1432b8210(undefined8 *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
      cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (cVar1 != '\0') {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    } while (uVar3 < param_2);
  }
  return 0xffffffff;
}



// FUNCTION 1432b8280 FUN_1432b8280 body=200 status=ok
// SIG undefined FUN_1432b8280(void)

undefined8 * FUN_1432b8280(undefined8 *param_1,Waitable *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af7738;
  puVar1 = (undefined4 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    FUN_1432bdc50(puVar1 + 8,0);
    *puVar1 = 1;
  }
  param_1[2] = puVar1;
  *param_1 = &PTR_FUN_145af77d0;
  param_1[4] = param_2;
  param_1[3] = &PTR_LAB_145af77f8;
  *(undefined4 *)(param_1 + 5) = param_3;
  Scaleform::Waitable::AddWaitHandler(param_2,(_func_void_void_ptr *)&LAB_1432b84e0,param_1);
  return param_1;
}



// FUNCTION 1432b8350 FUN_1432b8350 body=73 status=ok
// SIG undefined FUN_1432b8350(void)

void FUN_1432b8350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af77d0;
  param_1[3] = &PTR_LAB_145af77f8;
  Scaleform::Waitable::RemoveWaitHandler
            ((Waitable *)param_1[4],(_func_void_void_ptr *)&LAB_1432b84e0,param_1);
  param_1[3] = &PTR_FUN_144025e68;
  FUN_1432b6cb0(param_1);
  return;
}



// FUNCTION 1432b83d0 FUN_1432b83d0 body=127 status=ok
// SIG undefined FUN_1432b83d0(void)

undefined8 FUN_1432b83d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(lVar2 + 0x20) < iVar1) {
    return 0;
  }
  Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x28));
  if (*(int *)(lVar2 + 0x24) + iVar1 <= *(int *)(lVar2 + 0x20)) {
    *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + iVar1;
    Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x28));
    return 1;
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x28));
  return 0;
}



// FUNCTION 1432b84f0 FUN_1432b84f0 body=137 status=ok
// SIG undefined FUN_1432b84f0(void)

longlong * FUN_1432b84f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 != 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_2,1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if ((iVar2 == 1) && (lVar1 != 0)) {
      Scaleform::Lock::~Lock(lVar1 + 0x20);
      if (*(longlong *)(lVar1 + 8) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1432b8580 FUN_1432b8580 body=137 status=ok
// SIG undefined FUN_1432b8580(void)

undefined8 * FUN_1432b8580(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-1] = &PTR_FUN_144025e68;
      puVar1 = puVar1 + -1;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 8 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_FUN_144025e68;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432b8610 FUN_1432b8610 body=418 status=ok
// SIG undefined FUN_1432b8610(void)

longlong * FUN_1432b8610(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  RefCountImplCore *pRVar3;
  int iVar4;
  longlong lVar5;
  RefCountImplCore *this;
  
  if ((param_2 & 2) != 0) {
    lVar5 = param_1[-1];
    plVar1 = param_1 + -1;
    pRVar3 = (RefCountImplCore *)(param_1 + lVar5 * 0xb);
    while (lVar5 != 0) {
      this = pRVar3 + -0x58;
      lVar5 = lVar5 + -1;
      *(undefined ***)this = &PTR_FUN_145af7750;
      *(undefined ***)(pRVar3 + -0x40) = &PTR_LAB_145af7768;
      Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(pRVar3 + -8));
      Scaleform::Mutex::~Mutex((Mutex *)(pRVar3 + -0x30));
      lVar2 = *(longlong *)(pRVar3 + -0x48);
      *(undefined ***)(pRVar3 + -0x40) = &PTR_FUN_144025e68;
      *(undefined ***)this = &PTR_FUN_145af7738;
      if (((lVar2 != 0) &&
          (iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar2,0xffffffff),
          iVar4 == 1)) && (lVar2 != 0)) {
        Scaleform::Lock::~Lock(lVar2 + 0x20);
        if (*(longlong *)(lVar2 + 8) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      Scaleform::RefCountImplCore::~RefCountImplCore(this);
      pRVar3 = this;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(plVar1,*plVar1 * 0x58 + 8);
    }
    return plVar1;
  }
  *param_1 = (longlong)&PTR_FUN_145af7750;
  param_1[3] = (longlong)&PTR_LAB_145af7768;
  Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(param_1 + 10));
  Scaleform::Mutex::~Mutex((Mutex *)(param_1 + 5));
  param_1[3] = (longlong)&PTR_FUN_144025e68;
  FUN_1432b6cb0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432b87c0 FUN_1432b87c0 body=418 status=ok
// SIG undefined FUN_1432b87c0(void)

longlong * FUN_1432b87c0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  RefCountImplCore *pRVar3;
  int iVar4;
  longlong lVar5;
  RefCountImplCore *this;
  
  if ((param_2 & 2) != 0) {
    lVar5 = param_1[-1];
    plVar1 = param_1 + -1;
    pRVar3 = (RefCountImplCore *)(param_1 + lVar5 * 0xb);
    while (lVar5 != 0) {
      this = pRVar3 + -0x58;
      lVar5 = lVar5 + -1;
      *(undefined ***)this = &PTR_FUN_145af7790;
      *(undefined ***)(pRVar3 + -0x40) = &PTR_LAB_145af77a8;
      Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(pRVar3 + -8));
      Scaleform::Mutex::~Mutex((Mutex *)(pRVar3 + -0x30));
      lVar2 = *(longlong *)(pRVar3 + -0x48);
      *(undefined ***)(pRVar3 + -0x40) = &PTR_FUN_144025e68;
      *(undefined ***)this = &PTR_FUN_145af7738;
      if (((lVar2 != 0) &&
          (iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar2,0xffffffff),
          iVar4 == 1)) && (lVar2 != 0)) {
        Scaleform::Lock::~Lock(lVar2 + 0x20);
        if (*(longlong *)(lVar2 + 8) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      Scaleform::RefCountImplCore::~RefCountImplCore(this);
      pRVar3 = this;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(plVar1,*plVar1 * 0x58 + 8);
    }
    return plVar1;
  }
  *param_1 = (longlong)&PTR_FUN_145af7790;
  param_1[3] = (longlong)&PTR_LAB_145af77a8;
  Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(param_1 + 10));
  Scaleform::Mutex::~Mutex((Mutex *)(param_1 + 5));
  param_1[3] = (longlong)&PTR_FUN_144025e68;
  FUN_1432b6cb0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432b8980 FUN_1432b8980 body=143 status=ok
// SIG undefined FUN_1432b8980(void)

undefined8 * FUN_1432b8980(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145af77d0;
  param_1[3] = &PTR_LAB_145af77f8;
  Scaleform::Waitable::RemoveWaitHandler
            ((Waitable *)param_1[4],(_func_void_void_ptr *)&LAB_1432b84e0,param_1);
  param_1[3] = &PTR_FUN_144025e68;
  FUN_1432b6cb0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1432b8a10 FUN_1432b8a10 body=89 status=ok
// SIG undefined FUN_1432b8a10(void)

undefined8 FUN_1432b8a10(undefined8 param_1,ulonglong param_2)

{
  FUN_1432b6cb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432b8a70 FUN_1432b8a70 body=173 status=ok
// SIG undefined FUN_1432b8a70(void)

void FUN_1432b8a70(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = param_1[1];
  uVar1 = uVar2 + param_3;
  if (uVar1 < uVar2) {
    uVar4 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1432b8ad1;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1432b8ad1;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432b8b20(param_1,param_1,uVar4);
LAB_1432b8ad1:
  puVar3 = (undefined8 *)(uVar2 * 0x10 + *param_1);
  param_1[1] = uVar1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_2;
      puVar3[1] = param_2[1];
    }
    param_2 = param_2 + 2;
    puVar3 = puVar3 + 2;
  }
  return;
}



// FUNCTION 1432b8b20 FUN_1432b8b20 body=174 status=ok
// SIG undefined FUN_1432b8b20(void)

void FUN_1432b8b20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 0xf & 0xfffffffffffffff0;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 << 4);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432b8bd0 FUN_1432b8bd0 body=135 status=ok
// SIG undefined FUN_1432b8bd0(void)

void FUN_1432b8bd0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1432b8c17;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1432b8c17;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432b8b20(param_1,param_1,uVar4);
LAB_1432b8c17:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x10 + *param_1);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 2;
    }
  }
  return;
}



// FUNCTION 1432b8c60 Mutex body=213 status=ok
// SIG undefined Mutex(Mutex * this, bool param_1, bool param_2)

/* public: __cdecl Scaleform::Mutex::Mutex(bool,bool) __ptr64 */

Mutex * __thiscall Scaleform::Mutex::Mutex(Mutex *this,bool param_1,bool param_2)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x32b8c60  5  ??0Mutex@Scaleform@@QEAA@_N0@Z */
  FUN_1432b6c00(this,param_2);
  *(undefined ***)this = &PTR_FUN_145af7820;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af7838;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x20) = 0;
    return this;
  }
  puVar1[2] = &PTR_FUN_145af78c8;
  *(bool *)(puVar1 + 1) = param_1;
  puVar1[3] = this;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  if (*(char *)(puVar1 + 1) != '\0') {
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *puVar1 = pvVar2;
    *(undefined8 **)(this + 0x20) = puVar1;
    return this;
  }
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  *puVar1 = pvVar2;
  *(undefined8 **)(this + 0x20) = puVar1;
  return this;
}



// FUNCTION 1432b8d40 ~Mutex body=111 status=ok
// SIG void ~Mutex(Mutex * this)

/* public: virtual __cdecl Scaleform::Mutex::~Mutex(void) __ptr64 */

void __thiscall Scaleform::Mutex::~Mutex(Mutex *this)

{
  undefined8 *puVar1;
  
                    /* 0x32b8d40  34  ??1Mutex@Scaleform@@UEAA@XZ */
  puVar1 = *(undefined8 **)(this + 0x20);
  *(undefined ***)this = &PTR_FUN_145af7820;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af7838;
  if (puVar1 != (undefined8 *)0x0) {
    CloseHandle((HANDLE)*puVar1);
    puVar1[2] = &PTR_FUN_144025e68;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
  }
  *(undefined ***)(this + 0x18) = &PTR_FUN_144025e68;
  FUN_1432b6cb0(this);
  return;
}



// FUNCTION 1432b8dc0 DoLock body=35 status=ok
// SIG void DoLock(Mutex * this)

/* public: void __cdecl Scaleform::Mutex::DoLock(void) __ptr64 */

void __thiscall Scaleform::Mutex::DoLock(Mutex *this)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  
                    /* 0x32b8dc0  110  ?DoLock@Mutex@Scaleform@@QEAAXXZ */
  puVar2 = *(undefined8 **)(this + 0x20);
  DVar3 = WaitForSingleObject((HANDLE)*puVar2,0xffffffff);
  if (DVar3 == 0) {
    piVar1 = (int *)((longlong)puVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 1432b8df0 TryLock body=44 status=ok
// SIG bool TryLock(Mutex * this)

/* public: bool __cdecl Scaleform::Mutex::TryLock(void) __ptr64 */

bool __thiscall Scaleform::Mutex::TryLock(Mutex *this)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  
                    /* 0x32b8df0  500  ?TryLock@Mutex@Scaleform@@QEAA_NXZ */
  puVar2 = *(undefined8 **)(this + 0x20);
  DVar3 = WaitForSingleObject((HANDLE)*puVar2,0);
  if (DVar3 != 0) {
    return false;
  }
  piVar1 = (int *)((longlong)puVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  return true;
}



// FUNCTION 1432b8e30 Unlock body=12 status=ok
// SIG void Unlock(Mutex * this)

/* public: void __cdecl Scaleform::Mutex::Unlock(void) __ptr64 */

void __thiscall Scaleform::Mutex::Unlock(Mutex *this)

{
                    /* 0x32b8e30  507  ?Unlock@Mutex@Scaleform@@QEAAXXZ */
  FUN_1432b9b00(*(undefined8 *)(this + 0x20),this);
  return;
}



// FUNCTION 1432b8e50 IsLockedByAnotherThread body=79 status=ok
// SIG bool IsLockedByAnotherThread(Mutex * this)

/* public: bool __cdecl Scaleform::Mutex::IsLockedByAnotherThread(void) __ptr64 */

bool __thiscall Scaleform::Mutex::IsLockedByAnotherThread(Mutex *this)

{
  undefined8 *puVar1;
  DWORD DVar2;
  
                    /* 0x32b8e50  237  ?IsLockedByAnotherThread@Mutex@Scaleform@@QEAA_NXZ */
  puVar1 = *(undefined8 **)(this + 0x20);
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    DVar2 = WaitForSingleObject((HANDLE)*puVar1,0);
    if (DVar2 != 0) {
      return true;
    }
    *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
    FUN_1432b9b00(puVar1,this);
  }
  return false;
}



// FUNCTION 1432b8eb0 IsSignaled body=13 status=ok
// SIG bool IsSignaled(Mutex * this)

/* public: virtual bool __cdecl Scaleform::Mutex::IsSignaled(void)const __ptr64 */

bool __thiscall Scaleform::Mutex::IsSignaled(Mutex *this)

{
                    /* 0x32b8eb0  239  ?IsSignaled@Mutex@Scaleform@@UEBA_NXZ */
  return *(int *)(*(longlong *)(this + 0x20) + 0xc) == 0;
}



// FUNCTION 1432b8ed0 GetAcquireInterface body=90 status=ok
// SIG AcquireInterface * GetAcquireInterface(Mutex * this)

/* public: virtual class Scaleform::AcquireInterface * __ptr64 __cdecl
   Scaleform::Mutex::GetAcquireInterface(void) __ptr64 */

AcquireInterface * __thiscall Scaleform::Mutex::GetAcquireInterface(Mutex *this)

{
  undefined8 *puVar1;
  DWORD DVar2;
  
                    /* 0x32b8ed0  126
                       ?GetAcquireInterface@Mutex@Scaleform@@UEAAPEAVAcquireInterface@2@XZ */
  puVar1 = *(undefined8 **)(this + 0x20);
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    if (*(int *)((longlong)puVar1 + 0xc) != 0) {
      DVar2 = WaitForSingleObject((HANDLE)*puVar1,0);
      if (DVar2 != 0) goto LAB_1432b8f1b;
      *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
      FUN_1432b9b00(puVar1,this);
    }
    return (AcquireInterface *)(puVar1 + 2);
  }
LAB_1432b8f1b:
  return (AcquireInterface *)(this + 0x18);
}



// FUNCTION 1432b8f30 CanAcquire body=80 status=ok
// SIG bool CanAcquire(Mutex * this)

/* public: virtual bool __cdecl Scaleform::Mutex::CanAcquire(void) __ptr64 */

bool __thiscall Scaleform::Mutex::CanAcquire(Mutex *this)

{
  undefined8 *puVar1;
  DWORD DVar2;
  
                    /* 0x32b8f30  81  ?CanAcquire@Mutex@Scaleform@@UEAA_NXZ */
  puVar1 = *(undefined8 **)(this + 8);
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    DVar2 = WaitForSingleObject((HANDLE)*puVar1,0);
    if (DVar2 != 0) {
      return false;
    }
    *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
    FUN_1432b9b00(puVar1,this + -0x18);
  }
  return true;
}



// FUNCTION 1432b8f90 TryAcquire body=44 status=ok
// SIG bool TryAcquire(Mutex * this)

/* public: virtual bool __cdecl Scaleform::Mutex::TryAcquire(void) __ptr64 */

bool __thiscall Scaleform::Mutex::TryAcquire(Mutex *this)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  
                    /* 0x32b8f90  490  ?TryAcquire@Mutex@Scaleform@@UEAA_NXZ */
  puVar2 = *(undefined8 **)(this + 8);
  DVar3 = WaitForSingleObject((HANDLE)*puVar2,0);
  if (DVar3 != 0) {
    return false;
  }
  piVar1 = (int *)((longlong)puVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  return true;
}



// FUNCTION 1432b8fd0 TryAcquireCommit body=3 status=ok
// SIG bool TryAcquireCommit(Mutex * this)

/* public: virtual bool __cdecl Scaleform::Mutex::TryAcquireCommit(void) __ptr64 */

bool __thiscall Scaleform::Mutex::TryAcquireCommit(Mutex *this)

{
                    /* 0x32b8fd0  498  ?TryAcquireCommit@Mutex@Scaleform@@UEAA_NXZ */
  return true;
}



// FUNCTION 1432b8fe0 TryAcquireCancel body=24 status=ok
// SIG bool TryAcquireCancel(Mutex * this)

/* public: virtual bool __cdecl Scaleform::Mutex::TryAcquireCancel(void) __ptr64 */

bool __thiscall Scaleform::Mutex::TryAcquireCancel(Mutex *this)

{
                    /* 0x32b8fe0  494  ?TryAcquireCancel@Mutex@Scaleform@@UEAA_NXZ */
  FUN_1432b9b00(*(undefined8 *)(this + 8),this + -0x18);
  return true;
}



// FUNCTION 1432b9000 WaitCondition body=101 status=ok
// SIG undefined WaitCondition(WaitCondition * this)

/* public: __cdecl Scaleform::WaitCondition::WaitCondition(void) __ptr64 */

WaitCondition * __thiscall Scaleform::WaitCondition::WaitCondition(WaitCondition *this)

{
  longlong lVar1;
  
                    /* 0x32b9000  21  ??0WaitCondition@Scaleform@@QEAA@XZ */
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
  if (lVar1 != 0) {
    FUN_1432bdc50(lVar1,0);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(longlong *)this = lVar1;
    return this;
  }
  *(undefined8 *)this = 0;
  return this;
}



// FUNCTION 1432b9070 ~WaitCondition body=50 status=ok
// SIG void ~WaitCondition(WaitCondition * this)

/* public: __cdecl Scaleform::WaitCondition::~WaitCondition(void) __ptr64 */

void __thiscall Scaleform::WaitCondition::~WaitCondition(WaitCondition *this)

{
  longlong lVar1;
  
                    /* 0x32b9070  43  ??1WaitCondition@Scaleform@@QEAA@XZ */
  lVar1 = *(longlong *)this;
  if (lVar1 != 0) {
    WaitConditionImpl::~WaitConditionImpl(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001432b9098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1432b90b0 Wait body=8 status=ok
// SIG bool Wait(WaitCondition * this, Mutex * param_1, uint param_2)

/* public: bool __cdecl Scaleform::WaitCondition::Wait(class Scaleform::Mutex * __ptr64,unsigned
   int) __ptr64 */

bool __thiscall Scaleform::WaitCondition::Wait(WaitCondition *this,Mutex *param_1,uint param_2)

{
  bool bVar1;
  
                    /* 0x32b90b0  521  ?Wait@WaitCondition@Scaleform@@QEAA_NPEAVMutex@2@I@Z */
  bVar1 = (bool)FUN_1432b9e90(*(undefined8 *)this);
  return bVar1;
}



// FUNCTION 1432b90c0 Notify body=78 status=ok
// SIG void Notify(WaitCondition * this)

/* public: void __cdecl Scaleform::WaitCondition::Notify(void) __ptr64 */

void __thiscall Scaleform::WaitCondition::Notify(WaitCondition *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
                    /* 0x32b90c0  286  ?Notify@WaitCondition@Scaleform@@QEAAXXZ */
  lVar1 = *(longlong *)this;
  Lock::DoLock();
  puVar2 = *(undefined8 **)(lVar1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2[1] == 0) {
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x40) = 0;
    }
    else {
      lVar3 = puVar2[1];
      *(longlong *)(lVar1 + 0x38) = lVar3;
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    SetEvent((HANDLE)*puVar2);
  }
  Lock::DoLock(lVar1);
  return;
}



// FUNCTION 1432b9120 NotifyAll body=8 status=ok
// SIG void NotifyAll(WaitCondition * this)

/* public: void __cdecl Scaleform::WaitCondition::NotifyAll(void) __ptr64 */

void __thiscall Scaleform::WaitCondition::NotifyAll(WaitCondition *this)

{
                    /* 0x32b9120  287  ?NotifyAll@WaitCondition@Scaleform@@QEAAXXZ */
  WaitConditionImpl::NotifyAll(*(undefined8 *)this);
  return;
}



// FUNCTION 1432b9130 Thread body=111 status=ok
// SIG undefined Thread(Thread * this, __uint64 param_1, int param_2)

/* public: __cdecl Scaleform::Thread::Thread(unsigned __int64,int) __ptr64 */

Thread * __thiscall Scaleform::Thread::Thread(Thread *this,__uint64 param_1,int param_2)

{
                    /* 0x32b9130  20  ??0Thread@Scaleform@@QEAA@_KH@Z */
  FUN_1432b6c00(this,1);
  *(undefined ***)this = &PTR_FUN_145af7860;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af78a0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(__uint64 *)(this + 0x38) = param_1;
  *(int *)(this + 0x40) = param_2;
  *(undefined4 *)(this + 0x44) = 3;
  return this;
}



// FUNCTION 1432b91b0 Thread body=153 status=ok
// SIG undefined Thread(Thread * this, _func_int_Thread_ptr_void_ptr * param_1, void * param_2, __uint64 param_3, int param_4, ThreadState param_5)

/* public: __cdecl Scaleform::Thread::Thread(int (__cdecl*)(class Scaleform::Thread * __ptr64,void *
   __ptr64),void * __ptr64,unsigned __int64,int,enum Scaleform::Thread::ThreadState) __ptr64 */

Thread * __thiscall
Scaleform::Thread::Thread
          (Thread *this,_func_int_Thread_ptr_void_ptr *param_1,void *param_2,__uint64 param_3,
          int param_4,ThreadState param_5)

{
                    /* 0x32b91b0  19
                       ??0Thread@Scaleform@@QEAA@P6AHPEAV01@PEAX@Z1_KHW4ThreadState@01@@Z */
  FUN_1432b6c00(this,1);
  *(undefined ***)this = &PTR_FUN_145af7860;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af78a0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(int *)(this + 0x40) = param_4;
  *(__uint64 *)(this + 0x38) = param_3;
  *(undefined4 *)(this + 0x44) = 3;
  *(_func_int_Thread_ptr_void_ptr **)(this + 0x20) = param_1;
  *(void **)(this + 0x28) = param_2;
  if (param_5 != 0) {
    (**(code **)(*(longlong *)this + 0x28))(this);
  }
  return this;
}



// FUNCTION 1432b9250 Thread body=127 status=ok
// SIG undefined Thread(Thread * this, CreateParams * param_1)

/* public: __cdecl Scaleform::Thread::Thread(struct Scaleform::Thread::CreateParams const & __ptr64)
   __ptr64 */

Thread * __thiscall Scaleform::Thread::Thread(Thread *this,CreateParams *param_1)

{
                    /* 0x32b9250  18  ??0Thread@Scaleform@@QEAA@AEBUCreateParams@01@@Z */
  FUN_1432b6c00(this,1);
  *(undefined ***)this = &PTR_FUN_145af7860;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af78a0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(*(longlong *)this + 0x28))(this);
  }
  return this;
}



// FUNCTION 1432b92e0 ~Thread body=85 status=ok
// SIG void ~Thread(Thread * this)

/* public: virtual __cdecl Scaleform::Thread::~Thread(void) __ptr64 */

void __thiscall Scaleform::Thread::~Thread(Thread *this)

{
                    /* 0x32b92e0  42  ??1Thread@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145af7860;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145af78a0;
  if (*(HANDLE *)(this + 0x48) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x18) = &PTR_FUN_144025e68;
  FUN_1432b6cb0(this);
  return;
}



// FUNCTION 1432b9340 FinishAllThreads body=5 status=ok
// SIG void FinishAllThreads(void)

/* public: static void __cdecl Scaleform::Thread::FinishAllThreads(void) */

void __cdecl Scaleform::Thread::FinishAllThreads(void)

{
  longlong lVar1;
  
                    /* 0x32b9340  120  ?FinishAllThreads@Thread@Scaleform@@SAXXZ */
  if (DAT_146b62f00 != 0) {
    ThreadList::finishAllThreads(DAT_146b62f00);
    lVar1 = DAT_146b62f00;
    if (DAT_146b62f00 != 0) {
      FUN_1432ba380(DAT_146b62f00);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
    DAT_146b62f00 = 0;
  }
  return;
}



// FUNCTION 1432b9350 Run body=17 status=ok
// SIG int Run(Thread * this)

/* public: virtual int __cdecl Scaleform::Thread::Run(void) __ptr64 */

int __thiscall Scaleform::Thread::Run(Thread *this)

{
  int iVar1;
  
                    /* 0x32b9350  376  ?Run@Thread@Scaleform@@UEAAHXZ */
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b935d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this + 0x20))(this,*(undefined8 *)(this + 0x28));
    return iVar1;
  }
  return 0;
}



// FUNCTION 1432b9370 OnExit body=3 status=ok
// SIG void OnExit(Thread * this)

/* public: virtual void __cdecl Scaleform::Thread::OnExit(void) __ptr64 */

void __thiscall Scaleform::Thread::OnExit(Thread *this)

{
                    /* 0x32b9370  289  ?OnExit@Thread@Scaleform@@UEAAXXZ */
  return;
}



// FUNCTION 1432b9380 Start body=229 status=ok
// SIG bool Start(Thread * this, ThreadState param_1)

/* public: virtual bool __cdecl Scaleform::Thread::Start(enum Scaleform::Thread::ThreadState)
   __ptr64 */

bool __thiscall Scaleform::Thread::Start(Thread *this,ThreadState param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uintptr_t uVar3;
  
                    /* 0x32b9380  463  ?Start@Thread@Scaleform@@UEAA_NW4ThreadState@12@@Z */
  if (param_1 == 0) {
    return false;
  }
  if (((0 < *(int *)(this + 0x34)) || ((*(uint *)(this + 0x30) & 1) != 0)) &&
     (bVar1 = Waitable::Wait((Waitable *)this,0xffffffff), !bVar1)) {
    return false;
  }
  if (*(HANDLE *)(this + 0x48) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  RefCountImpl::AddRef((RefCountImpl *)this);
  FUN_1432ba700(this);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar2 = 8;
  if (param_1 == 1) {
    uVar2 = 1;
  }
  *(undefined4 *)(this + 0x30) = uVar2;
  uVar3 = _beginthreadex((void *)0x0,*(uint *)(this + 0x38),FUN_1432b96f0,this,0,
                         (uint *)(this + 0x50));
  *(uintptr_t *)(this + 0x48) = uVar3;
  if (uVar3 != 0) {
    return true;
  }
  *(undefined4 *)(this + 0x30) = 0;
  RefCountImpl::Release((RefCountImpl *)this);
  FUN_1432ba990(DAT_146b62f00,this);
  return false;
}



// FUNCTION 1432b9470 Exit body=63 status=ok
// SIG void Exit(Thread * this, int param_1)

/* public: virtual void __cdecl Scaleform::Thread::Exit(int) __ptr64 */

void __thiscall Scaleform::Thread::Exit(Thread *this,int param_1)

{
                    /* 0x32b9470  118  ?Exit@Thread@Scaleform@@UEAAXH@Z */
  (**(code **)(*(longlong *)this + 0x20))();
  FinishAndRelease(this);
  FUN_1432ba990(DAT_146b62f00,this);
                    /* WARNING: Could not recover jumptable at 0x0001432b94a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthreadex(param_1);
  return;
}



// FUNCTION 1432b94c0 Suspend body=61 status=ok
// SIG bool Suspend(Thread * this)

/* public: bool __cdecl Scaleform::Thread::Suspend(void) __ptr64 */

bool __thiscall Scaleform::Thread::Suspend(Thread *this)

{
  DWORD DVar1;
  
                    /* 0x32b94c0  476  ?Suspend@Thread@Scaleform@@QEAA_NXZ */
  if ((*(uint *)(this + 0x30) & 1) != 0) {
    DVar1 = SuspendThread(*(HANDLE *)(this + 0x48));
    if (DVar1 != 0xffffffff) {
      AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this + 0x34,1);
      return true;
    }
  }
  return false;
}



// FUNCTION 1432b9510 Resume body=66 status=ok
// SIG bool Resume(Thread * this)

/* public: bool __cdecl Scaleform::Thread::Resume(void) __ptr64 */

bool __thiscall Scaleform::Thread::Resume(Thread *this)

{
  int iVar1;
  DWORD DVar2;
  
                    /* 0x32b9510  375  ?Resume@Thread@Scaleform@@QEAA_NXZ */
  if ((*(uint *)(this + 0x30) & 1) != 0) {
    iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this + 0x34,0xffffffff);
    if (0 < iVar1) {
      if ((iVar1 == 1) && (DVar2 = ResumeThread(*(HANDLE *)(this + 0x48)), DVar2 == 0xffffffff)) {
        return false;
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 1432b9560 GetExitFlag body=10 status=ok
// SIG bool GetExitFlag(Thread * this)

/* public: bool __cdecl Scaleform::Thread::GetExitFlag(void)const __ptr64 */

bool __thiscall Scaleform::Thread::GetExitFlag(Thread *this)

{
                    /* 0x32b9560  158  ?GetExitFlag@Thread@Scaleform@@QEBA_NXZ */
  return (bool)((byte)(*(uint *)(this + 0x30) >> 4) & 1);
}



// FUNCTION 1432b9570 SetExitFlag body=70 status=ok
// SIG void SetExitFlag(Thread * this, bool param_1)

/* public: void __cdecl Scaleform::Thread::SetExitFlag(bool) __ptr64 */

void __thiscall Scaleform::Thread::SetExitFlag(Thread *this,bool param_1)

{
  Thread *pTVar1;
  char cVar2;
  
                    /* 0x32b9570  402  ?SetExitFlag@Thread@Scaleform@@QEAAX_N@Z */
  pTVar1 = this + 0x30;
  if (param_1) {
    do {
      cVar2 = AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync
                        (pTVar1,*(uint *)pTVar1,*(uint *)pTVar1 | 0x10);
    } while (cVar2 == '\0');
    return;
  }
  do {
    cVar2 = AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync
                      (pTVar1,*(uint *)pTVar1,*(uint *)pTVar1 & 0xffffffef);
  } while (cVar2 == '\0');
  return;
}



// FUNCTION 1432b95d0 IsFinished body=9 status=ok
// SIG bool IsFinished(Thread * this)

/* public: bool __cdecl Scaleform::Thread::IsFinished(void)const __ptr64 */

bool __thiscall Scaleform::Thread::IsFinished(Thread *this)

{
                    /* 0x32b95d0  233  ?IsFinished@Thread@Scaleform@@QEBA_NXZ */
  return (bool)((byte)(*(uint *)(this + 0x30) >> 1) & 1);
}



// FUNCTION 1432b95e0 IsSuspended body=9 status=ok
// SIG bool IsSuspended(Thread * this)

/* public: bool __cdecl Scaleform::Thread::IsSuspended(void)const __ptr64 */

bool __thiscall Scaleform::Thread::IsSuspended(Thread *this)

{
                    /* 0x32b95e0  242  ?IsSuspended@Thread@Scaleform@@QEBA_NXZ */
  return 0 < *(int *)(this + 0x34);
}



// FUNCTION 1432b95f0 GetThreadState body=23 status=ok
// SIG ThreadState GetThreadState(Thread * this)

/* public: enum Scaleform::Thread::ThreadState __cdecl Scaleform::Thread::GetThreadState(void)const
   __ptr64 */

ThreadState __thiscall Scaleform::Thread::GetThreadState(Thread *this)

{
                    /* 0x32b95f0  215  ?GetThreadState@Thread@Scaleform@@QEBA?AW4ThreadState@12@XZ
                        */
  if (0 < *(int *)(this + 0x34)) {
    return 2;
  }
  return *(ThreadState *)(this + 0x30) & 1;
}



// FUNCTION 1432b9610 GetCPUCount body=24 status=ok
// SIG int GetCPUCount(void)

/* public: static int __cdecl Scaleform::Thread::GetCPUCount(void) */

int __cdecl Scaleform::Thread::GetCPUCount(void)

{
  _SYSTEM_INFO local_38;
  
                    /* 0x32b9610  138  ?GetCPUCount@Thread@Scaleform@@SAHXZ */
  GetSystemInfo(&local_38);
  return local_38.dwNumberOfProcessors;
}



// FUNCTION 1432b96a0 ?Sleep@Thread@Scaleform@@SA_NI@Z body=23 status=ok
// SIG void ?Sleep@Thread@Scaleform@@SA_NI@Z(DWORD dwMilliseconds)

void __stdcall _Sleep_Thread_Scaleform__SA_NI_Z(DWORD dwMilliseconds)

{
                    /* 0x32b96a0  462  ?Sleep@Thread@Scaleform@@SA_NI@Z */
  Sleep(dwMilliseconds * 1000);
  return;
}



// FUNCTION 1432b96c0 MSleep body=17 status=ok
// SIG bool MSleep(uint param_1)

/* public: static bool __cdecl Scaleform::Thread::MSleep(unsigned int) */

bool __cdecl Scaleform::Thread::MSleep(uint param_1)

{
                    /* 0x32b96c0  265  ?MSleep@Thread@Scaleform@@SA_NI@Z */
  ::Sleep(param_1);
  return true;
}



// FUNCTION 1432b96f0 FUN_1432b96f0 body=182 status=ok
// SIG undefined FUN_1432b96f0(void)

undefined4 FUN_1432b96f0(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  HANDLE pvVar4;
  int nPriority;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 != 0xffffffff) {
    pvVar4 = GetCurrentThread();
    SetThreadAffinityMask(pvVar4,(ulonglong)uVar1);
  }
  switch(*(undefined4 *)(param_1 + 0x44)) {
  case 0:
    nPriority = 0xf;
    break;
  case 1:
    nPriority = 2;
    break;
  case 2:
    nPriority = 1;
    break;
  default:
    nPriority = 0;
    break;
  case 4:
    nPriority = -1;
    break;
  case 5:
    nPriority = -2;
    break;
  case 6:
    nPriority = -0xf;
  }
  pvVar4 = GetCurrentThread();
  SetThreadPriority(pvVar4,nPriority);
  DVar2 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x50) = DVar2;
  uVar3 = Scaleform::Thread::PRun(param_1);
  Scaleform::Thread::FinishAndRelease(param_1);
  FUN_1432ba990(DAT_146b62f00,param_1);
  return uVar3;
}



// FUNCTION 1432b97d0 FUN_1432b97d0 body=38 status=ok
// SIG undefined FUN_1432b97d0(void)

void FUN_1432b97d0(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 0x48) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1432b9800 PRun body=110 status=ok
// SIG undefined PRun(void)

void Scaleform::Thread::PRun(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_1 + 6) & 8) != 0) {
    if ((*(uint *)(param_1 + 6) & 1) != 0) {
      DVar2 = SuspendThread((HANDLE)param_1[9]);
      if (DVar2 != 0xffffffff) {
        AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((longlong)param_1 + 0x34,1);
      }
    }
    do {
      cVar1 = AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync
                        (param_1 + 6,*(uint *)(param_1 + 6),*(uint *)(param_1 + 6) & 0xfffffff7);
    } while (cVar1 == '\0');
  }
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  return;
}



// FUNCTION 1432b9880 FinishAndRelease body=148 status=ok
// SIG undefined FinishAndRelease(void)

void Scaleform::Thread::FinishAndRelease(RefCountImpl *param_1)

{
  HandlerArray *pHVar1;
  char cVar2;
  HandlerArray *local_res8;
  
  pHVar1 = *(HandlerArray **)(param_1 + 0x10);
  local_res8 = (HandlerArray *)0x0;
  if (pHVar1 != (HandlerArray *)0x0) {
    AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(pHVar1,1);
    local_res8 = pHVar1;
  }
  do {
    cVar2 = AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync
                      (param_1 + 0x30,*(uint *)(param_1 + 0x30),
                       *(uint *)(param_1 + 0x30) & 0xfffffffe);
  } while (cVar2 == '\0');
  do {
    cVar2 = AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync
                      (param_1 + 0x30,*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x30) | 2);
  } while (cVar2 == '\0');
  RefCountImpl::Release(param_1);
  if (local_res8 != (HandlerArray *)0x0) {
    Waitable::HandlerArray::CallWaitHandlers(local_res8);
    Waitable::HandlerArray::Release(local_res8);
  }
  return;
}



// FUNCTION 1432b9970 GetCurrentThreadId body=7 status=ok
// SIG DWORD GetCurrentThreadId(void)

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001432b9970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



// FUNCTION 1432b99f0 FUN_1432b99f0 body=94 status=ok
// SIG undefined FUN_1432b99f0(void)

undefined8 * FUN_1432b99f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  HANDLE pvVar1;
  
  param_1[2] = &PTR_FUN_145af78c8;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[3] = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *param_1 = pvVar1;
    return param_1;
  }
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  *param_1 = pvVar1;
  return param_1;
}



// FUNCTION 1432b9a60 FUN_1432b9a60 body=35 status=ok
// SIG undefined FUN_1432b9a60(void)

void FUN_1432b9a60(undefined8 *param_1)

{
  CloseHandle((HANDLE)*param_1);
  param_1[2] = &PTR_FUN_144025e68;
  return;
}



// FUNCTION 1432b9a90 FUN_1432b9a90 body=34 status=ok
// SIG undefined FUN_1432b9a90(void)

void FUN_1432b9a90(undefined8 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  if (DVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  }
  return;
}



// FUNCTION 1432b9ac0 FUN_1432b9ac0 body=43 status=ok
// SIG undefined FUN_1432b9ac0(void)

undefined4 FUN_1432b9ac0(undefined8 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
  if (DVar1 != 0) {
    return 0;
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return 1;
}



// FUNCTION 1432b9b00 FUN_1432b9b00 body=131 status=ok
// SIG undefined FUN_1432b9b00(void)

void FUN_1432b9b00(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  HandlerArray *pHVar2;
  int iVar3;
  HandlerArray *this;
  
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  pHVar2 = *(HandlerArray **)(param_2 + 0x10);
  this = (HandlerArray *)0x0;
  if (pHVar2 != (HandlerArray *)0x0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(pHVar2,1);
    this = pHVar2;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    iVar3 = ReleaseSemaphore((HANDLE)*param_1,1,(LPLONG)0x0);
  }
  else {
    iVar3 = ReleaseMutex((HANDLE)*param_1);
  }
  if ((iVar3 != 0) && (iVar1 == 0)) {
    if (this == (HandlerArray *)0x0) {
      return;
    }
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(this);
  }
  if (this != (HandlerArray *)0x0) {
    Scaleform::Waitable::HandlerArray::Release(this);
  }
  return;
}



// FUNCTION 1432b9b90 FUN_1432b9b90 body=78 status=ok
// SIG undefined FUN_1432b9b90(void)

ulonglong FUN_1432b9b90(undefined8 *param_1,undefined8 param_2)

{
  DWORD DVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)((longlong)param_1 + 0xc) != 0) {
    DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
    if (DVar1 != 0) {
      return CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),1);
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    uVar2 = FUN_1432b9b00(param_1,param_2);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1432b9c00 FUN_1432b9c00 body=98 status=ok
// SIG undefined FUN_1432b9c00(void)

undefined8 * FUN_1432b9c00(undefined8 *param_1,longlong param_2)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
      if (DVar1 != 0) goto LAB_1432b9c4a;
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      FUN_1432b9b00(param_1,param_2);
    }
    return param_1 + 2;
  }
LAB_1432b9c4a:
  puVar2 = (undefined8 *)(param_2 + 0x18);
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 1432b9c70 FUN_1432b9c70 body=97 status=ok
// SIG undefined FUN_1432b9c70(void)

undefined8 * FUN_1432b9c70(longlong param_1)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = puVar1[1];
    return puVar1;
  }
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *puVar1 = pvVar2;
  return puVar1;
}



// FUNCTION 1432b9ce0 FUN_1432b9ce0 body=56 status=ok
// SIG undefined FUN_1432b9ce0(void)

void FUN_1432b9ce0(longlong param_1,undefined8 *param_2)

{
  ResetEvent((HANDLE)*param_2);
  param_2[1] = *(undefined8 *)(param_1 + 0x30);
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1432b9df0 FUN_1432b9df0 body=39 status=ok
// SIG undefined FUN_1432b9df0(void)

longlong FUN_1432b9df0(longlong param_1)

{
  FUN_1432bdc50(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_1;
}



// FUNCTION 1432b9e20 ~WaitConditionImpl body=106 status=ok
// SIG undefined ~WaitConditionImpl(void)

void Scaleform::WaitConditionImpl::~WaitConditionImpl(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[1];
    CloseHandle((HANDLE)*puVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  Lock::~Lock(param_1);
  return;
}



// FUNCTION 1432b9e90 FUN_1432b9e90 body=440 status=ok
// SIG undefined FUN_1432b9e90(void)

ulonglong FUN_1432b9e90(longlong param_1,Waitable *param_2,DWORD param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  uVar2 = *(uint *)(*(ulonglong *)(param_2 + 0x20) + 0xc);
  uVar8 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    return *(ulonglong *)(param_2 + 0x20) & 0xffffffffffffff00;
  }
  Scaleform::Lock::DoLock();
  puVar6 = (undefined8 *)FUN_1432b9c70(param_1);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    puVar6[2] = 0;
    puVar6[1] = 0;
    *(undefined8 **)(param_1 + 0x38) = puVar6;
  }
  else {
    puVar6[2] = *(longlong *)(param_1 + 0x40);
    *(undefined8 **)(*(longlong *)(param_1 + 0x40) + 8) = puVar6;
    puVar6[1] = 0;
  }
  *(undefined8 **)(param_1 + 0x40) = puVar6;
  Scaleform::Lock::DoLock(param_1);
  lVar3 = *(longlong *)(param_2 + 0x20);
  *(undefined4 *)(lVar3 + 0xc) = 0;
  if (*(char *)(lVar3 + 8) == '\0') {
    ReleaseSemaphore((HANDLE)**(undefined8 **)(param_2 + 0x20),1,(LPLONG)0x0);
  }
  else {
    uVar7 = uVar8;
    if (uVar2 != 0) {
      do {
        ReleaseMutex((HANDLE)**(undefined8 **)(param_2 + 0x20));
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  Scaleform::Waitable::CallWaitHandlers(param_2);
  if (param_3 == 0xffffffff) {
    param_3 = 0xffffffff;
  }
  DVar5 = WaitForSingleObject((HANDLE)*puVar6,param_3);
  Scaleform::Lock::DoLock(param_1);
  if ((DVar5 & 0xffffff7f) == 0) {
    uVar9 = 1;
  }
  else {
    for (puVar4 = *(undefined8 **)(param_1 + 0x38); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[1]) {
      if (puVar4 == puVar6) {
        if (puVar6[2] == 0) {
          *(undefined8 *)(param_1 + 0x38) = puVar6[1];
        }
        else {
          *(undefined8 *)(puVar6[2] + 8) = puVar6[1];
        }
        if (puVar6[1] == 0) {
          *(undefined8 *)(param_1 + 0x40) = puVar6[2];
        }
        else {
          *(undefined8 *)(puVar6[1] + 0x10) = puVar6[2];
        }
        break;
      }
    }
  }
  ResetEvent((HANDLE)*puVar6);
  puVar6[1] = *(undefined8 *)(param_1 + 0x30);
  puVar6[2] = 0;
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  Scaleform::Lock::DoLock(param_1);
  if (uVar2 != 0) {
    do {
      puVar6 = *(undefined8 **)(param_2 + 0x20);
      DVar5 = WaitForSingleObject((HANDLE)*puVar6,0xffffffff);
      if (DVar5 == 0) {
        piVar1 = (int *)((longlong)puVar6 + 0xc);
        *piVar1 = *piVar1 + 1;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return uVar9;
}



// FUNCTION 1432ba050 FUN_1432ba050 body=75 status=ok
// SIG undefined FUN_1432ba050(void)

void FUN_1432ba050(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  Scaleform::Lock::DoLock();
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      lVar2 = puVar1[1];
      *(longlong *)(param_1 + 0x38) = lVar2;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    SetEvent((HANDLE)*puVar1);
  }
  Scaleform::Lock::DoLock(param_1);
  return;
}



// FUNCTION 1432ba0b0 NotifyAll body=133 status=ok
// SIG undefined NotifyAll(void)

void Scaleform::WaitConditionImpl::NotifyAll(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  Lock::DoLock();
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      lVar2 = puVar1[1];
      *(longlong *)(param_1 + 0x38) = lVar2;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    while (puVar1 != (undefined8 *)0x0) {
      SetEvent((HANDLE)*puVar1);
      puVar1 = *(undefined8 **)(param_1 + 0x38);
      if (puVar1 == (undefined8 *)0x0) break;
      if (puVar1[1] == 0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        lVar2 = puVar1[1];
        *(longlong *)(param_1 + 0x38) = lVar2;
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
    }
  }
  Lock::DoLock(param_1);
  return;
}



// FUNCTION 1432ba140 FUN_1432ba140 body=234 status=ok
// SIG undefined FUN_1432ba140(void)

ulonglong FUN_1432ba140(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = (uVar3 >> 6 ^ uVar3) & *(ulonglong *)(lVar2 + 8);
    lVar1 = uVar4 * 3 + 2;
    puVar6 = (ulonglong *)(lVar2 + lVar1 * 8);
    in_RAX = uVar4;
    if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) && (puVar6[1] == uVar4)) {
      uVar7 = 0xffffffffffffffff;
      while( true ) {
        uVar5 = in_RAX;
        if ((puVar6[1] == uVar4) && (puVar6[2] == uVar3)) {
          uVar3 = *puVar6;
          if (uVar4 == uVar5) {
            if (uVar3 != 0xffffffffffffffff) {
              *puVar6 = 0xfffffffffffffffe;
              lVar1 = lVar2 + uVar3 * 0x18;
              *puVar6 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
              puVar6[1] = *(ulonglong *)(lVar1 + 0x18);
              puVar6[2] = *(ulonglong *)(lVar1 + 0x20);
              *(undefined8 *)(lVar1 + 0x10) = 0xfffffffffffffffe;
              param_1 = (longlong *)*param_1;
              *param_1 = *param_1 + -1;
              return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x10 + uVar7 * 0x18) = uVar3;
          }
          *puVar6 = 0xfffffffffffffffe;
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        in_RAX = *puVar6;
        if (in_RAX == 0xffffffffffffffff) break;
        puVar6 = (ulonglong *)(lVar2 + in_RAX * 0x18 + 0x10);
        uVar7 = uVar5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432ba230 FUN_1432ba230 body=322 status=ok
// SIG undefined FUN_1432ba230(void)

void FUN_1432ba230(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432ba284;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1432baa40(param_1,param_2,lVar10);
LAB_1432ba284:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 1432ba380 FUN_1432ba380 body=149 status=ok
// SIG undefined FUN_1432ba380(void)

void FUN_1432ba380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    Scaleform::WaitConditionImpl::~WaitConditionImpl(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  Scaleform::Mutex::~Mutex((Mutex *)(param_1 + 1));
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432ba420 FUN_1432ba420 body=301 status=ok
// SIG undefined FUN_1432ba420(void)

Mutex * FUN_1432ba420(Mutex *param_1,uint param_2)

{
  Mutex *pMVar1;
  undefined8 *puVar2;
  Mutex *pMVar3;
  Mutex *pMVar4;
  longlong lVar5;
  
  if ((param_2 & 2) != 0) {
    lVar5 = *(longlong *)(param_1 + -8);
    pMVar1 = param_1 + -8;
    pMVar3 = param_1 + lVar5 * 0x28;
    while (lVar5 != 0) {
      puVar2 = *(undefined8 **)(pMVar3 + -8);
      pMVar4 = pMVar3 + -0x28;
      lVar5 = lVar5 + -1;
      *(undefined ***)pMVar4 = &PTR_FUN_145af7820;
      *(undefined ***)(pMVar3 + -0x10) = &PTR_LAB_145af7838;
      if (puVar2 != (undefined8 *)0x0) {
        CloseHandle((HANDLE)*puVar2);
        puVar2[2] = &PTR_FUN_144025e68;
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
      }
      *(undefined ***)(pMVar3 + -0x10) = &PTR_FUN_144025e68;
      FUN_1432b6cb0(pMVar4);
      pMVar3 = pMVar4;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(pMVar1,*(longlong *)pMVar1 * 0x28 + 8);
    }
    return pMVar1;
  }
  Scaleform::Mutex::~Mutex(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432ba560 FUN_1432ba560 body=345 status=ok
// SIG undefined FUN_1432ba560(void)

longlong * FUN_1432ba560(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 & 2) != 0) {
    lVar3 = param_1[-1];
    plVar1 = param_1 + lVar3 * 0xb;
    while (lVar3 != 0) {
      plVar2 = plVar1 + -0xb;
      lVar3 = lVar3 + -1;
      *plVar2 = (longlong)&PTR_FUN_145af7860;
      plVar1[-8] = (longlong)&PTR_LAB_145af78a0;
      if ((HANDLE)plVar1[-2] != (HANDLE)0x0) {
        CloseHandle((HANDLE)plVar1[-2]);
        plVar1[-2] = 0;
      }
      plVar1[-2] = 0;
      plVar1[-8] = (longlong)&PTR_FUN_144025e68;
      FUN_1432b6cb0(plVar2);
      plVar1 = plVar2;
    }
    param_1 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1,*param_1 * 0x58 + 8);
    }
    return param_1;
  }
  *param_1 = (longlong)&PTR_FUN_145af7860;
  param_1[3] = (longlong)&PTR_LAB_145af78a0;
  if ((HANDLE)param_1[9] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[9]);
    param_1[9] = 0;
  }
  param_1[9] = 0;
  param_1[3] = (longlong)&PTR_FUN_144025e68;
  FUN_1432b6cb0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432ba6d0 FUN_1432ba6d0 body=43 status=ok
// SIG undefined FUN_1432ba6d0(void)

undefined8 * FUN_1432ba6d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144025e68;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432ba700 FUN_1432ba700 body=129 status=ok
// SIG undefined FUN_1432ba700(void)

void FUN_1432ba700(undefined8 param_1)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  if (DAT_146b62f00 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
    if (puVar2 == (undefined8 *)0x0) {
      DAT_146b62f00 = (undefined8 *)0x0;
    }
    else {
      *puVar2 = 0;
      Scaleform::Mutex::Mutex((Mutex *)(puVar2 + 1),true,false);
      Scaleform::WaitCondition::WaitCondition((WaitCondition *)(puVar2 + 6));
      DVar1 = GetCurrentThreadId();
      *(DWORD *)(puVar2 + 7) = DVar1;
      DAT_146b62f00 = puVar2;
    }
  }
  FUN_1432ba8a0(DAT_146b62f00,param_1);
  return;
}



// FUNCTION 1432ba7a0 FUN_1432ba7a0 body=96 status=ok
// SIG undefined FUN_1432ba7a0(void)

void FUN_1432ba7a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432ba800 FinishAllThreads body=115 status=ok
// SIG undefined FinishAllThreads(void)

void Scaleform::ThreadList::FinishAllThreads(void)

{
  longlong lVar1;
  
  if (DAT_146b62f00 != 0) {
    finishAllThreads(DAT_146b62f00);
    lVar1 = DAT_146b62f00;
    if (DAT_146b62f00 != 0) {
      FUN_1432ba380(DAT_146b62f00);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
    DAT_146b62f00 = 0;
  }
  return;
}



// FUNCTION 1432ba8a0 FUN_1432ba8a0 body=118 status=ok
// SIG undefined FUN_1432ba8a0(void)

void FUN_1432ba8a0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  ulonglong local_res10;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  local_res10 = param_2;
  DVar3 = WaitForSingleObject((HANDLE)*puVar2,0xffffffff);
  if (DVar3 == 0) {
    piVar1 = (int *)((longlong)puVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
    param_2 = local_res10;
  }
  FUN_1432ba230(param_1,param_1,&local_res10,param_2 >> 6 ^ param_2);
  FUN_1432b9b00(*(undefined8 *)(param_1 + 0x28),param_1 + 8);
  return;
}



// FUNCTION 1432ba920 finishAllThreads body=109 status=ok
// SIG undefined finishAllThreads(void)

void Scaleform::ThreadList::finishAllThreads(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  
  puVar2 = (undefined8 *)param_1[5];
  DVar3 = WaitForSingleObject((HANDLE)*puVar2,0xffffffff);
  if (DVar3 == 0) {
    piVar1 = (int *)((longlong)puVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
  }
  while (((longlong *)*param_1 != (longlong *)0x0 && (*(longlong *)*param_1 != 0))) {
    FUN_1432b9e90(param_1[6],param_1 + 1,0xffffffff);
  }
  FUN_1432b9b00(param_1[5],param_1 + 1);
  return;
}



// FUNCTION 1432ba990 FUN_1432ba990 body=172 status=ok
// SIG undefined FUN_1432ba990(void)

void FUN_1432ba990(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD DVar5;
  undefined8 local_res10;
  
  puVar2 = (undefined8 *)param_1[5];
  local_res10 = param_2;
  DVar5 = WaitForSingleObject((HANDLE)*puVar2,0xffffffff);
  if (DVar5 == 0) {
    piVar1 = (int *)((longlong)puVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
  }
  FUN_1432ba140(param_1,&local_res10);
  if (((longlong *)*param_1 == (longlong *)0x0) || (*(longlong *)*param_1 == 0)) {
    lVar3 = param_1[6];
    Scaleform::Lock::DoLock();
    puVar2 = *(undefined8 **)(lVar3 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      if (puVar2[1] == 0) {
        *(undefined8 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x40) = 0;
      }
      else {
        lVar4 = puVar2[1];
        *(longlong *)(lVar3 + 0x38) = lVar4;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      SetEvent((HANDLE)*puVar2);
    }
    Scaleform::Lock::DoLock(lVar3);
  }
  FUN_1432b9b00(param_1[5],param_1 + 1);
  return;
}



// FUNCTION 1432baa40 FUN_1432baa40 body=304 status=ok
// SIG undefined FUN_1432baa40(void)

void FUN_1432baa40(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ba7a0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x18;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        puVar5 = (ulonglong *)(lVar1 + 0x20 + lVar3);
        FUN_1432ba230(&local_res20,param_2,puVar5,*puVar5 >> 6 ^ *puVar5);
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432bab70 Init body=61 status=ok
// SIG void Init(HeapDesc * param_1, SysAllocBase * param_2)

/* public: static void __cdecl Scaleform::System::Init(struct Scaleform::MemoryHeap::HeapDesc const
   & __ptr64,class Scaleform::SysAllocBase * __ptr64) */

void __cdecl Scaleform::System::Init(HeapDesc *param_1,SysAllocBase *param_2)

{
                    /* 0x32bab70  229
                       ?Init@System@Scaleform@@SAXAEBUHeapDesc@MemoryHeap@2@PEAVSysAllocBase@2@@Z */
  if (DAT_146b62f10 == (SysAllocBase *)0x0) {
    Timer::initializeTimerSystem();
    (**(code **)(*(longlong *)param_2 + 8))(param_2,param_1);
    DAT_146b62f10 = param_2;
  }
  return;
}



// FUNCTION 1432babc0 Destroy body=66 status=ok
// SIG void Destroy(void)

/* public: static void __cdecl Scaleform::System::Destroy(void) */

void __cdecl Scaleform::System::Destroy(void)

{
  char cVar1;
  
                    /* 0x32babc0  106  ?Destroy@System@Scaleform@@SAXXZ */
  if (DAT_146b62f10 != (longlong *)0x0) {
    Thread::FinishAllThreads();
    cVar1 = (**(code **)(*DAT_146b62f10 + 0x10))();
    HasMemoryLeaks = cVar1 == '\0';
    DAT_146b62f10 = (longlong *)0x0;
    FUN_143305bd0();
    return;
  }
  return;
}



// FUNCTION 1432bac10 FUN_1432bac10 body=73 status=ok
// SIG undefined FUN_1432bac10(void)

/* WARNING: Removing unreachable block (ram,0x0001432bac40) */

undefined1 FUN_1432bac10(void)

{
  return 0;
}



// FUNCTION 1432bac60 FUN_1432bac60 body=11 status=ok
// SIG undefined FUN_1432bac60(void)

void FUN_1432bac60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1432bb160(param_2,param_3);
  return;
}



// FUNCTION 1432bac80 IsPathAbsolute body=133 status=ok
// SIG undefined IsPathAbsolute(void)

undefined4 Scaleform::GFx::URLBuilder::IsPathAbsolute(char *param_1)

{
  int iVar1;
  char *local_res8 [4];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_res8[0] = param_1;
    iVar1 = FUN_143307250(local_res8);
    if (iVar1 == 0) {
      local_res8[0] = local_res8[0] + -1;
    }
    if ((iVar1 != 0x2f) && (iVar1 != 0x5c)) {
      do {
        if (iVar1 == 0) {
          return 0;
        }
        do {
          if (iVar1 == 0x3a) {
            iVar1 = FUN_143307250(local_res8);
            if (iVar1 == 0) {
              local_res8[0] = local_res8[0] + -1;
            }
            else {
              if (iVar1 == 0x2f) {
                return 1;
              }
              if (iVar1 == 0x5c) {
                return 1;
              }
            }
          }
          else {
            if (iVar1 == 0x2f) {
              return 0;
            }
            if (iVar1 == 0x5c) {
              return 0;
            }
          }
          iVar1 = FUN_143307250(local_res8);
        } while (iVar1 != 0);
        local_res8[0] = local_res8[0] + -1;
      } while( true );
    }
  }
  return 1;
}



// FUNCTION 1432bad10 FUN_1432bad10 body=156 status=ok
// SIG undefined FUN_1432bad10(void)

uint FUN_1432bad10(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong local_res10 [3];
  
  lVar3 = FUN_1432c3580();
  do {
    lVar1 = lVar3;
    lVar3 = lVar1 + -1;
    if (lVar3 < 0) goto LAB_1432bad96;
    iVar2 = FUN_1432c35f0(param_1,lVar3);
  } while ((iVar2 != 0x2f) && (iVar2 != 0x5c));
  uVar4 = FUN_1432c3de0(param_1,local_res10,0,lVar1);
  FUN_1432c4d80(param_1,uVar4);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
  }
LAB_1432bad96:
  return (uint)((ulonglong)lVar3 >> 0x3f) ^ 1;
}



// FUNCTION 1432badc0 FUN_1432badc0 body=175 status=ok
// SIG undefined FUN_1432badc0(void)

undefined8 FUN_1432badc0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong local_res10 [3];
  
  FUN_1433076e0(param_1,local_res10);
  uVar5 = local_res10[0] & 0xfffffffffffffffc;
  lVar2 = 0;
  lVar3 = lVar2;
  do {
    lVar4 = lVar3 + 1;
    if (*(char *)(uVar5 + 0xc + lVar3) != (&DAT_145af7978)[lVar3]) goto LAB_1432bae40;
    lVar3 = lVar4;
  } while (lVar4 != 8);
  goto LAB_1432bae05;
  while (lVar2 = lVar3, lVar3 != 8) {
LAB_1432bae40:
    lVar3 = lVar2 + 1;
    if (*(char *)(uVar5 + 0xc + lVar2) != "file://"[lVar2]) {
      iVar1 = _guard_xfg_dispatch_icall_nop((char *)(uVar5 + 0xc),"https://");
      if (iVar1 != 0) {
        uVar6 = 0;
        goto LAB_1432bae08;
      }
      break;
    }
  }
LAB_1432bae05:
  uVar6 = 1;
LAB_1432bae08:
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar5 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
  }
  return uVar6;
}



// FUNCTION 1432bae80 FUN_1432bae80 body=718 status=ok
// SIG undefined FUN_1432bae80(void)

bool FUN_1432bae80(undefined8 param_1,ulonglong *param_2,int param_3,longlong param_4,int param_5,
                  longlong *param_6,longlong param_7)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong local_30;
  longlong local_28;
  
  uVar8 = 0;
  local_38 = 0;
  lVar3 = curl_easy_init();
  if (lVar3 == 0) {
    return false;
  }
  curl_easy_setopt(lVar3,0x2712,(*param_2 & 0xfffffffffffffffc) + 0xc);
  curl_easy_setopt(lVar3,0x4e2b,Scaleform::GFx::URLBuilder::HttpWriteData);
  curl_easy_setopt(lVar3,0x2711,param_1);
  curl_easy_setopt(lVar3,0x2722,"Scaleform-agent/1.0");
  curl_easy_setopt(lVar3,0x40);
  curl_easy_setopt(lVar3,0x51);
  if (param_3 == 2) {
    if ((param_4 == 0) || (param_5 < 1)) {
      curl_easy_setopt(lVar3,0x2f,1);
    }
    else {
      uVar6 = 0x271f;
      lVar4 = param_4;
LAB_1432bafce:
      curl_easy_setopt(lVar3,uVar6,lVar4);
    }
  }
  else if (param_3 == 3) {
    curl_easy_setopt(lVar3,0x2e,1);
    curl_easy_setopt(lVar3,0x36,1);
    if ((param_4 != 0) && (lVar4 = (longlong)param_5, 0 < param_5)) {
      local_30 = param_4;
      local_28 = lVar4;
      curl_easy_setopt(lVar3,0x2719,&local_30);
      curl_easy_setopt(lVar3,0x4e2c,FUN_1432bb4d0);
      uVar6 = 0x75a3;
      goto LAB_1432bafce;
    }
  }
  curl_easy_setopt(lVar3,0x2711,param_1);
  uVar9 = uVar8;
  if (param_7 != 0) {
    puVar5 = (ulonglong *)FUN_1432c2fb0(&local_38,param_7);
    uVar9 = 1;
    if ((*(ulonglong *)(*puVar5 & 0xfffffffffffffffc) & 0x7fffffffffffffff) != 0) {
      bVar1 = true;
      goto LAB_1432bb02a;
    }
  }
  bVar1 = false;
LAB_1432bb02a:
  if (uVar9 != 0) {
    uVar9 = CONCAT44(uStack_34,local_38) & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
    }
  }
  uVar9 = uVar8;
  if (bVar1) {
    FUN_1432c2fb0(&local_38,"Content-Type: ");
    FUN_1432c3950(&local_38,param_7,0xffffffffffffffff);
    uVar9 = curl_slist_append(0,(CONCAT44(uStack_34,local_38) & 0xfffffffffffffffc) + 0xc);
    uVar7 = CONCAT44(uStack_34,local_38) & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar7 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar7);
    }
  }
  if ((param_6 != (longlong *)0x0) && (param_6[1] != 0)) {
    do {
      uVar9 = curl_slist_append(uVar9,(*(ulonglong *)(*param_6 + uVar8 * 8) & 0xfffffffffffffffc) +
                                      0xc);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)param_6[1]);
  }
  if (uVar9 != 0) {
    curl_easy_setopt(lVar3,0x2727,uVar9);
  }
  iVar2 = FUN_1436a3af0(lVar3);
  FUN_1436a39f0(lVar3);
  return iVar2 == 0;
}



// FUNCTION 1432bb160 FUN_1432bb160 body=820 status=ok
// SIG undefined FUN_1432bb160(void)

void FUN_1432bb160(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  
  if (((*(ulonglong *)(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffc) & 0x7fffffffffffffff) ==
       0) || (cVar1 = Scaleform::GFx::URLBuilder::IsPathAbsolute
                                ((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc) + 0xc),
             cVar1 != '\0')) {
    FUN_1432c4d80(param_1,param_2 + 8);
  }
  else {
    FUN_1432c31e0(&local_res10,param_2 + 0x10);
    lVar3 = FUN_1432c3580(&local_res10);
    iVar2 = FUN_1432c35f0(&local_res10,lVar3 + -1);
    if ((iVar2 != 0x5c) && (iVar2 != 0x2f)) {
      FUN_1432c3700(&local_res10,0x2f);
    }
    FUN_1432c4fd0(&local_res10,param_2 + 8);
    uVar10 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_1432c2f70(&local_res18);
    lVar3 = FUN_1432c3580(&local_res10);
    uVar5 = uVar10;
    uVar7 = uVar10;
    uVar8 = uVar10;
    uVar9 = uVar10;
    if (lVar3 != 0) {
      do {
        iVar2 = FUN_1432c35f0(&local_res10,uVar7);
        if ((iVar2 == 0x2f) || (iVar2 == 0x5c)) {
          uVar4 = local_res18 & 0xfffffffffffffffc;
          if ((*(char *)(uVar4 + 0xc) == '.') &&
             ((*(char *)(uVar4 + 0xd) == '.' && (*(char *)(uVar4 + 0xe) == '\0')))) {
            if (uVar5 == 0) {
              uVar9 = uVar9 + 1;
            }
            else {
              FUN_1432c31e0(&local_res20,(uVar8 - 8) + uVar5 * 8);
              uVar4 = uVar5 - 1;
              FUN_1432bc120(&local_68,&local_68,uVar4);
              uVar8 = local_68;
              if (uVar5 < uVar4) {
                lVar3 = uVar5 * 8 + local_68;
                for (lVar6 = uVar4 - uVar5; lVar6 != 0; lVar6 = lVar6 + -1) {
                  if (lVar3 != 0) {
                    FUN_1432c2f70(lVar3);
                  }
                  lVar3 = lVar3 + 8;
                }
              }
              uVar4 = local_res20 & 0xfffffffffffffffc;
              iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar4 + 8,0xffffffff);
              uVar5 = local_60;
              if (iVar2 == 1) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar4);
                uVar5 = local_60;
              }
            }
          }
          else if ((*(char *)(uVar4 + 0xc) != '.') || (*(char *)(uVar4 + 0xd) != '\0')) {
            FUN_1432c3700(&local_res18,iVar2);
            FUN_1432bc120(&local_68,&local_68,uVar5 + 1);
            uVar5 = local_60;
            uVar8 = local_68;
            lVar3 = local_60 * 8 + -8 + local_68;
            if (lVar3 != 0) {
              FUN_1432c31e0(lVar3,&local_res18);
            }
          }
          FUN_1432c3510(&local_res18);
        }
        else {
          FUN_1432c3700(&local_res18,iVar2);
        }
        uVar7 = uVar7 + 1;
        uVar4 = FUN_1432c3580(&local_res10);
      } while (uVar7 < uVar4);
    }
    FUN_1432c3510(param_1);
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      FUN_1432c3950(param_1,&DAT_145af7970,0xffffffffffffffff);
    }
    if (uVar5 != 0) {
      do {
        FUN_1432c3950(param_1,(*(ulonglong *)(uVar8 + uVar10 * 8) & 0xfffffffffffffffc) + 0xc,
                      0xffffffffffffffff);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
    }
    FUN_1432c4fd0(param_1,&local_res18);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
    }
    FUN_1432bbc10(&local_68);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
      return;
    }
  }
  return;
}



// FUNCTION 1432bb4a0 HttpWriteData body=41 status=ok
// SIG undefined HttpWriteData(void)

longlong Scaleform::GFx::URLBuilder::HttpWriteData
                   (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  param_2 = param_2 * param_3;
  if (param_2 != 0) {
    FUN_1432bbdf0(param_4,param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1432bb4d0 FUN_1432bb4d0 body=86 status=ok
// SIG undefined FUN_1432bb4d0(void)

ulonglong FUN_1432bb4d0(void *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  
  uVar1 = param_2 * param_3;
  if (uVar1 <= (ulonglong)param_4[1]) {
    _guard_xfg_dispatch_icall_nop(param_1,(void *)*param_4,uVar1);
    param_4[1] = param_4[1] - uVar1;
    return uVar1;
  }
  _guard_xfg_dispatch_icall_nop(param_1,(void *)*param_4,param_4[1]);
  uVar1 = param_4[1];
  param_4[1] = 0;
  return uVar1;
}



// FUNCTION 1432bb540 FUN_1432bb540 body=140 status=ok
// SIG undefined FUN_1432bb540(void)

undefined8 FUN_1432bb540(longlong *param_1,undefined8 param_2,longlong param_3)

{
  RefCountImpl *this;
  undefined8 uVar1;
  
  this = (RefCountImpl *)(**(code **)(*param_1 + 0x18))(param_1,0xc);
  if (this == (RefCountImpl *)0x0) {
    if (param_3 != 0) {
      FUN_1432bbf90(param_3,"Loader failed to open \'%s\', FileOpener not installed",param_2);
    }
    return 0;
  }
  uVar1 = (**(code **)(*(longlong *)this + 0x18))(this,param_2,param_3,0x21,0x1b6);
  Scaleform::RefCountImpl::Release(this);
  return uVar1;
}



// FUNCTION 1432bb5e0 FUN_1432bb5e0 body=72 status=ok
// SIG undefined FUN_1432bb5e0(void)

undefined8 FUN_1432bb5e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  RefCountImpl *local_res18 [2];
  
  puVar1 = (undefined8 *)Scaleform::GFx::StateBag::GetLog(param_1,local_res18);
  uVar2 = FUN_1432bb540(param_1,param_2,*puVar1);
  if (local_res18[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res18[0]);
  }
  return uVar2;
}



// FUNCTION 1432bb6c0 FUN_1432bb6c0 body=33 status=ok
// SIG undefined FUN_1432bb6c0(void)

undefined8 * FUN_1432bb6c0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145af7938;
  FUN_1432bba10();
  return param_1;
}



// FUNCTION 1432bb6f0 FUN_1432bb6f0 body=270 status=ok
// SIG undefined FUN_1432bb6f0(void)

undefined8 * FUN_1432bb6f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  RefCountImpl *this;
  RefCountImpl *this_00;
  RefCountImpl *this_01;
  undefined4 local_28 [2];
  RefCountImpl *local_20;
  RefCountImpl *local_18;
  RefCountImpl *local_10;
  
  *param_1 = &PTR_LAB_145af7938;
  this_01 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  if (this_01 == (RefCountImpl *)0x0) {
    this_01 = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined ***)this_01 = &PTR_FUN_144f70a50;
    *(undefined ***)this_01 = &PTR_FUN_145af7900;
    *(undefined4 *)(this_01 + 8) = 1;
    *(undefined4 *)(this_01 + 0x10) = 0x1e;
  }
  local_28[0] = 0;
  if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_2);
  }
  this = (RefCountImpl *)*param_2;
  local_20 = this;
  if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
  }
  this_00 = (RefCountImpl *)*param_3;
  local_18 = this_00;
  local_10 = this_01;
  if (this_01 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this_01);
    Scaleform::RefCountImpl::Release(this_01);
  }
  FUN_1432bba10(param_1,local_28);
  if (this_01 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_01);
  }
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return param_1;
}



// FUNCTION 1432bb810 FUN_1432bb810 body=105 status=ok
// SIG undefined FUN_1432bb810(void)

undefined8 * FUN_1432bb810(undefined8 *param_1,longlong param_2)

{
  RefCountImpl *this;
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_145af7938;
  FUN_1432f41a0();
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x80,0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1432fd470(lVar1,*(undefined8 *)(param_2 + 8));
  }
  param_1[1] = uVar2;
  this = *(RefCountImpl **)(param_2 + 0x10);
  param_1[2] = this;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  return param_1;
}



// FUNCTION 1432bb880 ~Loader body=63 status=ok
// SIG void ~Loader(Loader * this)

/* public: virtual __cdecl Scaleform::GFx::Loader::~Loader(void) __ptr64 */

void __thiscall Scaleform::GFx::Loader::~Loader(Loader *this)

{
                    /* 0x32bb880  30  ??1Loader@GFx@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_LAB_145af7938;
  if (*(RefCountImpl **)(this + 8) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 8));
  }
  if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
  }
  *(undefined ***)this = &PTR_GetPoolName_145af7910;
  return;
}



// FUNCTION 1432bb8d0 FUN_1432bb8d0 body=114 status=ok
// SIG undefined FUN_1432bb8d0(void)

void FUN_1432bb8d0(longlong param_1,RefCountImpl *param_2)

{
  RefCountImpl *this;
  longlong lVar1;
  RefCountImpl *this_00;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
    }
    *(RefCountImpl **)(param_1 + 0x10) = param_2;
    this = *(RefCountImpl **)(param_2 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    this_00 = *(RefCountImpl **)(lVar1 + 0x28);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this_00);
    }
    *(RefCountImpl **)(lVar1 + 0x28) = this;
  }
  return;
}



// FUNCTION 1432bb960 GetMovieInfo body=69 status=ok
// SIG undefined GetMovieInfo(void)

ulonglong Scaleform::GFx::Loader::GetMovieInfo(ulonglong param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != 0)) {
    if (*(longlong *)(param_1 + 8) != 0) {
      bVar1 = FUN_1432fd7b0();
      return (ulonglong)bVar1;
    }
    return 0;
  }
  return param_1 & 0xffffffffffffff00;
}



// FUNCTION 1432bb9b0 CreateMovie body=40 status=ok
// SIG undefined CreateMovie(void)

undefined8 Scaleform::GFx::Loader::CreateMovie(longlong param_1,char *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (*(longlong *)(param_1 + 8) != 0)) {
    uVar1 = FUN_1432fdf50(*(longlong *)(param_1 + 8),param_2,*(uint *)(param_1 + 0x18) | param_3);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432bba10 FUN_1432bba10 body=313 status=ok
// SIG undefined FUN_1432bba10(void)

void FUN_1432bba10(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  RefCountImpl *this;
  byte bVar4;
  
  FUN_1432f41a0();
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 3) = uVar1;
  bVar4 = (byte)((uint)uVar1 >> 0x1c) & 1;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1432de540(lVar2,bVar4);
  }
  param_1[2] = lVar3;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x80,0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1432fd1d0(lVar2,param_1[2],bVar4);
  }
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0xc,*(undefined8 *)(param_2 + 2));
    this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
    if (this == (RefCountImpl *)0x0) {
      this = (RefCountImpl *)0x0;
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_144f70cb0;
      *(undefined4 *)(this + 8) = 1;
      *(undefined4 *)(this + 0x10) = 0x10;
      *(undefined4 *)(this + 0x18) = 0;
    }
    (**(code **)(*param_1 + 0x10))(param_1,0x10,this);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    (**(code **)(*param_1 + 0x10))(param_1,0x1d,*(undefined8 *)(param_2 + 4));
    (**(code **)(*param_1 + 0x10))(param_1,0x1e,*(undefined8 *)(param_2 + 6));
  }
  return;
}



// FUNCTION 1432bbb50 FUN_1432bbb50 body=83 status=ok
// SIG undefined FUN_1432bbb50(void)

undefined8 FUN_1432bbb50(undefined8 param_1,SysAllocBase *param_2)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48[0] = 0;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_20 = 0;
  local_18 = 1;
  local_10 = 0;
  Scaleform::System::Init((HeapDesc *)local_48,param_2);
  return param_1;
}



// FUNCTION 1432bbbb0 FUN_1432bbbb0 body=32 status=ok
// SIG undefined FUN_1432bbbb0(void)

undefined8 FUN_1432bbbb0(undefined8 param_1,HeapDesc *param_2,SysAllocBase *param_3)

{
  Scaleform::System::Init(param_2,param_3);
  return param_1;
}



// FUNCTION 1432bbbe0 Destroy body=5 status=ok
// SIG void Destroy(void)

void __cdecl Scaleform::System::Destroy(void)

{
  char cVar1;
  
  if (DAT_146b62f10 != (longlong *)0x0) {
    Thread::FinishAllThreads();
    cVar1 = (**(code **)(*DAT_146b62f10 + 0x10))();
    HasMemoryLeaks = cVar1 == '\0';
    DAT_146b62f10 = (longlong *)0x0;
    FUN_143305bd0();
    return;
  }
  return;
}



// FUNCTION 1432bbbf0 Init body=5 status=ok
// SIG void Init(HeapDesc * param_1, SysAllocBase * param_2)

/* public: static void __cdecl Scaleform::GFx::System::Init(struct Scaleform::MemoryHeap::HeapDesc
   const & __ptr64,class Scaleform::SysAllocBase * __ptr64) */

void __cdecl Scaleform::GFx::System::Init(HeapDesc *param_1,SysAllocBase *param_2)

{
  if (DAT_146b62f10 == (SysAllocBase *)0x0) {
    Timer::initializeTimerSystem();
    (**(code **)(*(longlong *)param_2 + 8))(param_2,param_1);
    DAT_146b62f10 = param_2;
  }
  return;
}



// FUNCTION 1432bbc00 Destroy body=5 status=ok
// SIG void Destroy(void)

/* public: static void __cdecl Scaleform::GFx::System::Destroy(void) */

void __cdecl Scaleform::GFx::System::Destroy(void)

{
  char cVar1;
  
  if (DAT_146b62f10 != (longlong *)0x0) {
    Thread::FinishAllThreads();
    cVar1 = (**(code **)(*DAT_146b62f10 + 0x10))();
    Scaleform::System::HasMemoryLeaks = cVar1 == '\0';
    DAT_146b62f10 = (longlong *)0x0;
    FUN_143305bd0();
    return;
  }
  return;
}



// FUNCTION 1432bbc10 FUN_1432bbc10 body=149 status=ok
// SIG undefined FUN_1432bbc10(void)

void FUN_1432bbc10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  lVar2 = param_1[1];
  puVar3 = (ulonglong *)(*param_1 + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((*puVar3 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    puVar3 = puVar3 + -1;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432bbc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1432bbcb0 FUN_1432bbcb0 body=272 status=ok
// SIG undefined FUN_1432bbcb0(void)

undefined8 * FUN_1432bbcb0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 & 2) != 0) {
    lVar3 = param_1[-1];
    puVar2 = param_1 + lVar3 * 4;
    while (lVar3 != 0) {
      puVar1 = puVar2 + -4;
      lVar3 = lVar3 + -1;
      *puVar1 = &PTR_LAB_145af7938;
      if ((RefCountImpl *)puVar2[-3] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[-3]);
      }
      if ((RefCountImpl *)puVar2[-2] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[-2]);
      }
      *puVar1 = &PTR_GetPoolName_145af7910;
      puVar2 = puVar1;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x20 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_LAB_145af7938;
  if ((RefCountImpl *)param_1[1] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[1]);
  }
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  *param_1 = &PTR_GetPoolName_145af7910;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1432bbdc0 FUN_1432bbdc0 body=43 status=ok
// SIG undefined FUN_1432bbdc0(void)

undefined8 * FUN_1432bbdc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_GetPoolName_145af7910;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432bbdf0 FUN_1432bbdf0 body=166 status=ok
// SIG undefined FUN_1432bbdf0(void)

void FUN_1432bbdf0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = param_1[1];
  uVar1 = uVar2 + param_3;
  if (uVar1 < uVar2) {
    uVar4 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1432bbe51;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1432bbe51;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432bbfd0(param_1,param_1,uVar4);
LAB_1432bbe51:
  puVar3 = (undefined1 *)(*param_1 + uVar2);
  param_1[1] = uVar1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_2;
    }
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1432bbea0 FUN_1432bbea0 body=98 status=ok
// SIG undefined FUN_1432bbea0(void)

void FUN_1432bbea0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (ulonglong *)(param_1 + -8 + param_2 * 8);
    do {
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((*puVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar2 = puVar2 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1432bbf10 GetStateAddRef body=41 status=ok
// SIG undefined GetStateAddRef(void)

void Scaleform::GFx::StateBag::GetStateAddRef(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)*param_1)();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432bbf2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1432bbf40 GetStatesAddRef body=69 status=ok
// SIG undefined GetStatesAddRef(void)

void Scaleform::GFx::StateBag::GetStatesAddRef
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)*param_1)();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1432bbf90 FUN_1432bbf90 body=51 status=ok
// SIG undefined FUN_1432bbf90(void)

void FUN_1432bbf90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = 0x31000;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 1432bbfd0 FUN_1432bbfd0 body=157 status=ok
// SIG undefined FUN_1432bbfd0(void)

void FUN_1432bbfd0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432bc070 FUN_1432bc070 body=167 status=ok
// SIG undefined FUN_1432bc070(void)

void FUN_1432bc070(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 8);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432bc120 FUN_1432bc120 body=155 status=ok
// SIG undefined FUN_1432bc120(void)

void FUN_1432bc120(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1432bbea0(*param_1 + param_3 * 8,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432bc070(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432bc070(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432bc1c0 SetState body=51 status=ok
// SIG undefined SetState(void)

void Scaleform::GFx::StateBag::SetState(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)*param_1)();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 1432bc200 FUN_1432bc200 body=176 status=ok
// SIG undefined FUN_1432bc200(void)

void FUN_1432bc200(longlong *param_1,undefined8 param_2)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0x15;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145af7a08;
    *(undefined4 *)(this + 8) = 1;
    FUN_1432c5250(this + 0x18);
    Scaleform::String::operator=(this + 0x18,param_2);
  }
  (**(code **)(*param_1 + 0x10))(param_1,0x15,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
    return;
  }
  return;
}



// FUNCTION 1432bc2c0 FUN_1432bc2c0 body=60 status=ok
// SIG undefined FUN_1432bc2c0(void)

longlong FUN_1432bc2c0(longlong *param_1)

{
  ulonglong uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*param_1 + 0x18))(param_1,0x15);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = *(ulonglong *)(this + 0x18);
    Scaleform::RefCountImpl::Release(this);
    return (uVar1 & 0xfffffffffffffffc) + 0xc;
  }
  return 0;
}



// FUNCTION 1432bc310 FUN_1432bc310 body=142 status=ok
// SIG undefined FUN_1432bc310(void)

undefined8 * FUN_1432bc310(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x14;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af79f8;
  *(undefined4 *)(param_1 + 1) = 1;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_1432c2f70(puVar1 + 3);
  }
  param_1[3] = puVar1;
  Scaleform::String::operator=(puVar1 + 3,"gfxfontlib.swf");
  return param_1;
}



// FUNCTION 1432bc3b0 FUN_1432bc3b0 body=84 status=ok
// SIG undefined FUN_1432bc3b0(void)

void FUN_1432bc3b0(RefCountImplCore *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_145af79f8;
  if (lVar1 != 0) {
    FUN_1432bd490(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432bc410 AddFontsFrom body=182 status=ok
// SIG undefined AddFontsFrom(void)

void Scaleform::GFx::FontLib::AddFontsFrom(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (param_2 != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18);
    if (lVar1 != 0) {
      Resource::AddRef(lVar1);
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    FUN_1432bd7b0(plVar2,plVar2,plVar2[1] + 1);
    plVar2 = (longlong *)(*plVar2 + (plVar2[1] + -1) * 8);
    if (plVar2 != (longlong *)0x0) {
      if (lVar1 != 0) {
        Resource::AddRef(lVar1);
      }
      *plVar2 = lVar1;
    }
    if (lVar1 != 0) {
      FUN_1432de450(lVar1);
    }
    if ((param_3 != '\0') && (plVar2 = *(longlong **)(param_2 + 0x10), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 1432bc4d0 SetResult body=100 status=ok
// SIG undefined SetResult(void)

void Scaleform::GFx::FontLib::FontResult::SetResult
               (longlong *param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    Resource::AddRef(param_2);
  }
  if (param_3 != 0) {
    Resource::AddRef(param_3);
  }
  if (*param_1 != 0) {
    FUN_1432de450();
  }
  if (param_1[1] != 0) {
    FUN_1432de450();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432bc540 FUN_1432bc540 body=47 status=ok
// SIG undefined FUN_1432bc540(void)

void FUN_1432bc540(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1432de450();
  }
  if (param_1[1] != 0) {
    FUN_1432de450();
    return;
  }
  return;
}



// FUNCTION 1432bc580 FUN_1432bc580 body=908 status=ok
// SIG undefined FUN_1432bc580(void)

ulonglong FUN_1432bc580(ulonglong param_1,undefined8 param_2,char *param_3,uint param_4,
                       longlong param_5,undefined8 param_6,longlong param_7)

{
  bool bVar1;
  int iVar2;
  char *_Str1;
  longlong lVar3;
  RefCountImpl *this;
  RefCountImpl *pRVar4;
  RefCountImpl *pRVar5;
  RefCountImpl *this_00;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint local_res20;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  
  plVar8 = *(longlong **)(param_1 + 0x18);
  if (plVar8 == (longlong *)0x0) {
    return param_1 & 0xffffffffffffff00;
  }
  this = (RefCountImpl *)0x0;
  bVar1 = false;
  local_res20 = 0;
  local_58 = 0;
  pRVar5 = this;
  if (plVar8[1] != 0) {
    do {
      if (bVar1) goto LAB_1432bc6f3;
      local_58 = *(longlong *)(*plVar8 + (longlong)pRVar5 * 8);
      FUN_14330e460(*(undefined8 *)(local_58 + 0x40));
      lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x40) + 0x120);
      if (lVar3 != 0) {
        uVar6 = 3;
        if ((param_4 & 0x300) != 0) {
          uVar6 = 0x303;
        }
        do {
          if ((*(uint *)((longlong)*(longlong **)(lVar3 + 8) + 0x1c) & (uVar6 | param_4 & 0x10)) ==
              (param_4 & 0x313)) {
            _Str1 = (char *)(**(code **)(**(longlong **)(lVar3 + 8) + 8))();
            iVar2 = _stricmp(_Str1,param_3);
            if (iVar2 == 0) {
              local_res20 = *(uint *)(lVar3 + 0x10);
              bVar1 = true;
              break;
            }
          }
          lVar3 = *(longlong *)(lVar3 + 0x18);
        } while (lVar3 != 0);
      }
      pRVar5 = (RefCountImpl *)(ulonglong)((int)pRVar5 + 1);
      plVar8 = *(longlong **)(param_1 + 0x18);
    } while (pRVar5 < (RefCountImpl *)plVar8[1]);
    if (bVar1) {
LAB_1432bc6f3:
      if (param_5 == 0) {
        if (param_7 == 0) goto LAB_1432bc6b0;
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x80,0);
        pRVar5 = this;
        if (lVar3 != 0) {
          pRVar5 = (RefCountImpl *)FUN_1432fd620(lVar3,param_6,*(undefined8 *)(param_7 + 0x10),0);
        }
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
        this_00 = this;
        if (lVar3 != 0) {
          this_00 = (RefCountImpl *)FUN_1432bd270(lVar3,param_6);
        }
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
        if (lVar3 != 0) {
          this = (RefCountImpl *)FUN_143318b20(lVar3,pRVar5,param_6,this_00);
        }
        pRVar4 = (RefCountImpl *)FUN_1432fe990(this,local_58,1);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        if (this_00 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this_00);
        }
      }
      else {
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
        if (lVar3 != 0) {
          this = (RefCountImpl *)
                 FUN_143318b20(lVar3,*(undefined8 *)(param_5 + 0x28),param_6,
                               *(undefined8 *)(param_5 + 0x30));
        }
        pRVar4 = (RefCountImpl *)
                 FUN_1432fe990(this,local_58,*(uint *)(*(longlong *)(param_5 + 0x70) + 0x28) | 1,0);
        pRVar5 = this;
      }
      this = pRVar4;
      if (pRVar5 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar5);
      }
      if (this != (RefCountImpl *)0x0) {
        local_50 = 0;
        lStack_48 = 0;
        lVar3 = *(longlong *)(this + 0x70);
        if ((*(char *)(lVar3 + 0x78) == '\0') || (*(uint *)(lVar3 + 0x38) <= local_res20)) {
          FUN_14330cc40(lVar3 + 0x30,&local_50,local_res20);
        }
        else {
          plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x40) + (ulonglong)local_res20 * 0x10);
          if ((*plVar8 != 0) && (Scaleform::GFx::Resource::AddRef(), local_50 != 0)) {
            FUN_1432de450();
          }
          local_50 = *plVar8;
          lStack_48 = plVar8[1];
        }
        if (local_50 != 0) {
          Scaleform::GFx::FontLib::FontResult::SetResult(param_2,this);
          uVar7 = 1;
          if (local_50 != 0) {
            FUN_1432de450();
          }
          goto LAB_1432bc6b3;
        }
      }
    }
  }
LAB_1432bc6b0:
  uVar7 = 0;
LAB_1432bc6b3:
  if (this != (RefCountImpl *)0x0) {
    FUN_1432de450(this);
  }
  return uVar7;
}



// FUNCTION 1432bc970 FUN_1432bc970 body=548 status=ok
// SIG undefined FUN_1432bc970(void)

void FUN_1432bc970(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  ulonglong *local_38;
  ulonglong *local_30;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  if ((plVar4 != (longlong *)0x0) && (uVar14 = 0, plVar4[1] != 0)) {
    do {
      lVar10 = *(longlong *)(*plVar4 + uVar14 * 8);
      FUN_14330e460(*(undefined8 *)(lVar10 + 0x40));
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + 0x120);
      if (lVar10 != 0) {
        local_38 = &local_res8;
        local_30 = &local_res8;
        do {
          uVar5 = (**(code **)(**(longlong **)(lVar10 + 8) + 8))();
          FUN_1432c2fb0(&local_res8,uVar5);
          uVar6 = FUN_1432c4390((longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                                *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff
                                ,0x1505);
          lVar9 = *param_2;
          if (lVar9 != 0) {
            uVar13 = *(ulonglong *)(lVar9 + 8) & uVar6;
            puVar12 = (ulonglong *)(lVar9 + 0x10 + uVar13 * 0x20);
            if ((*puVar12 != 0xfffffffffffffffe) && (uVar8 = uVar13, puVar12[1] == uVar13)) {
              do {
                if (puVar12[1] == uVar13) {
                  pcVar7 = (char *)((puVar12[2] & 0xfffffffffffffffc) + 0xc);
                  lVar11 = ((local_res8 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar7;
                  do {
                    cVar1 = *pcVar7;
                    cVar2 = pcVar7[lVar11];
                    if (cVar1 != cVar2) break;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar2 != '\0');
                  if (cVar1 == cVar2) {
                    if (-1 < (longlong)uVar8) {
                      lVar9 = (uVar8 + 1) * 0x20 + lVar9;
                      FUN_1432c4d80(lVar9,&local_res8);
                      FUN_1432c4d80(lVar9 + 8,&local_res8);
                      goto LAB_1432bcb22;
                    }
                    break;
                  }
                }
                uVar8 = *puVar12;
                if (uVar8 == 0xffffffffffffffff) break;
                puVar12 = (ulonglong *)(lVar9 + 0x10 + uVar8 * 0x20);
              } while( true );
            }
          }
          FUN_1432bcea0(param_2,param_2,&local_38,uVar6);
LAB_1432bcb22:
          uVar6 = local_res8 & 0xfffffffffffffffc;
          iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
          if (iVar3 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
          }
          lVar10 = *(longlong *)(lVar10 + 0x18);
        } while (lVar10 != 0);
      }
      plVar4 = *(longlong **)(param_1 + 0x18);
      uVar14 = (ulonglong)((int)uVar14 + 1);
    } while (uVar14 < (ulonglong)plVar4[1]);
  }
  return;
}



// FUNCTION 1432bcba0 LoadFonts body=139 status=ok
// SIG undefined LoadFonts(void)

void Scaleform::GFx::FontLib::LoadFonts(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((plVar2 != (longlong *)0x0) && (uVar3 = 0, plVar2[1] != 0)) {
    do {
      lVar1 = *(longlong *)(*plVar2 + uVar3 * 8);
      FUN_14330e460(*(undefined8 *)(lVar1 + 0x40));
      for (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x120); lVar1 != 0;
          lVar1 = *(longlong *)(lVar1 + 0x18)) {
        FUN_1432bcc30(param_2,param_2,lVar1 + 8);
      }
      plVar2 = *(longlong **)(param_1 + 0x18);
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < (ulonglong)plVar2[1]);
  }
  return;
}



// FUNCTION 1432bcc30 FUN_1432bcc30 body=230 status=ok
// SIG undefined FUN_1432bcc30(void)

longlong FUN_1432bcc30(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = 0x1505;
  lVar6 = 8;
  do {
    lVar1 = lVar6 + -1;
    lVar6 = lVar6 + -1;
    uVar4 = uVar4 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)param_3);
  } while (lVar6 != 0);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar5 = *(ulonglong *)(lVar6 + 8) & uVar4;
    lVar1 = uVar5 * 3 + 2;
    puVar2 = (ulonglong *)(lVar6 + lVar1 * 8);
    if ((*(longlong *)(lVar6 + lVar1 * 8) != -2) && (uVar3 = uVar5, puVar2[1] == uVar5)) {
      while ((puVar2[1] != uVar5 || (puVar2[2] != *param_3))) {
        uVar3 = *puVar2;
        if (uVar3 == 0xffffffffffffffff) goto LAB_1432bccfb;
        puVar2 = (ulonglong *)(lVar6 + uVar3 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar3) {
        lVar6 = lVar6 + uVar3 * 0x18;
        if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
        }
        if (*(RefCountImpl **)(lVar6 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar6 + 0x20));
        }
        *(ulonglong *)(lVar6 + 0x20) = *param_3;
        return lVar6 + 0x20;
      }
    }
  }
LAB_1432bccfb:
  lVar6 = FUN_1432bd050(param_1,param_2,param_3,uVar4);
  return lVar6;
}



// FUNCTION 1432bcd20 FUN_1432bcd20 body=371 status=ok
// SIG undefined FUN_1432bcd20(void)

longlong FUN_1432bcd20(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  FUN_1432bd760();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar7 = param_4 * 0x20 + lVar2;
  uVar4 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c31e0(lVar7 + 0x20,param_3);
    FUN_1432c31e0(lVar7 + 0x28,param_3 + 8);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar5 = uVar4 * 0x20 + lVar2;
    } while (*(longlong *)(lVar5 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_1432bd220(lVar5 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      FUN_1432c4d80(lVar7 + 0x28,param_3 + 8);
      *(ulonglong *)(lVar7 + 0x10) = uVar4;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c31e0(lVar5 + 0x20,lVar7 + 0x20);
      FUN_1432c31e0(lVar5 + 0x28,lVar7 + 0x28);
      *puVar6 = uVar4;
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      FUN_1432c4d80(lVar7 + 0x28,param_3 + 8);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 1432bcea0 FUN_1432bcea0 body=421 status=ok
// SIG undefined FUN_1432bcea0(void)

longlong FUN_1432bcea0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1432bcef3;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_1432bd860(param_1,param_2,lVar5);
LAB_1432bcef3:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar7 = param_4 * 0x20 + lVar5;
  uVar3 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c31e0(lVar7 + 0x20,*param_3);
    FUN_1432c31e0(lVar7 + 0x28,param_3[1]);
  }
  else {
    do {
      uVar3 = uVar3 + 1 & plVar1[1];
      lVar4 = uVar3 * 0x20 + lVar5;
    } while (*(longlong *)(lVar4 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_1432bd220(lVar4 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      FUN_1432c4d80(lVar7 + 0x28,param_3[1]);
      *(ulonglong *)(lVar7 + 0x10) = uVar3;
    }
    else {
      puVar6 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar2 = *puVar6;
      while (uVar2 != param_4) {
        puVar6 = (ulonglong *)(lVar5 + 0x10 + *puVar6 * 0x20);
        uVar2 = *puVar6;
      }
      *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c31e0(lVar4 + 0x20,lVar7 + 0x20);
      FUN_1432c31e0(lVar4 + 0x28,lVar7 + 0x28);
      *puVar6 = uVar3;
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      FUN_1432c4d80(lVar7 + 0x28,param_3[1]);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 1432bd050 FUN_1432bd050 body=459 status=ok
// SIG undefined FUN_1432bd050(void)

longlong FUN_1432bd050(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432bd0a2;
    lVar9 = plVar3[1] * 2 + 2;
  }
  FUN_1432bda50(param_1,param_2,lVar9);
LAB_1432bd0a2:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar9 = lVar4 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
    }
    *(undefined8 *)(lVar9 + 0x20) = *param_3;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar8 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar8 * 0x18) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
      }
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar1 = *(ulonglong *)(lVar9 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
      }
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return lVar9 + 0x20;
}



// FUNCTION 1432bd220 FUN_1432bd220 body=80 status=ok
// SIG undefined FUN_1432bd220(void)

undefined8 * FUN_1432bd220(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c31e0(param_1 + 2,param_2 + 2);
  FUN_1432c31e0(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1432bd270 FUN_1432bd270 body=314 status=ok
// SIG undefined FUN_1432bd270(void)

undefined8 * FUN_1432bd270(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af7a10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_18 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_2 + 0x20))(param_2,&local_48,&DAT_145af7a18,7);
  uVar1 = local_48;
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  uVar2 = uStack_40;
  param_1[2] = uVar1;
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  uVar1 = local_38;
  param_1[3] = uVar2;
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  uVar2 = uStack_30;
  param_1[4] = uVar1;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  uVar1 = local_28;
  param_1[6] = uVar2;
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  uVar2 = uStack_20;
  param_1[7] = uVar1;
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  uVar1 = local_18;
  param_1[8] = uVar2;
  if ((RefCountImpl *)param_1[9] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[9]);
  }
  param_1[9] = uVar1;
  return param_1;
}



// FUNCTION 1432bd3b0 FUN_1432bd3b0 body=218 status=ok
// SIG undefined FUN_1432bd3b0(void)

void FUN_1432bd3b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar3;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar4 + 0x28) & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar1 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar4 + 0x20) & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar1 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432bd490 FUN_1432bd490 body=140 status=ok
// SIG undefined FUN_1432bd490(void)

void FUN_1432bd490(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = param_1[3];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  lVar4 = param_1[1];
  plVar3 = (longlong *)(*param_1 + (lVar4 + -1) * 8);
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (*plVar3 != 0) {
      FUN_1432de450();
    }
    plVar3 = plVar3 + -1;
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 1432bd520 ~MovieDefBindStates body=134 status=ok
// SIG undefined ~MovieDefBindStates(void)

void Scaleform::GFx::MovieDefBindStates::~MovieDefBindStates(RefCountImplCore *param_1)

{
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432bd5b0 FUN_1432bd5b0 body=168 status=ok
// SIG undefined FUN_1432bd5b0(void)

RefCountImplCore * FUN_1432bd5b0(RefCountImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_145af7a08;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1432bd660 FUN_1432bd660 body=160 status=ok
// SIG undefined FUN_1432bd660(void)

RefCountImplCore * FUN_1432bd660(RefCountImplCore *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_145af79f8;
  if (lVar1 != 0) {
    FUN_1432bd490(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1432bd700 FUN_1432bd700 body=89 status=ok
// SIG undefined FUN_1432bd700(void)

undefined8 FUN_1432bd700(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::MovieDefBindStates::~MovieDefBindStates();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1432bd760 FUN_1432bd760 body=67 status=ok
// SIG undefined FUN_1432bd760(void)

void FUN_1432bd760(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1432bd860(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1432bd860(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1432bd7b0 FUN_1432bd7b0 body=174 status=ok
// SIG undefined FUN_1432bd7b0(void)

void FUN_1432bd7b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar1 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (*plVar1 != 0) {
        FUN_1432de450();
      }
      plVar1 = plVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432bc070(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432bc070(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432bd860 FUN_1432bd860 body=485 status=ok
// SIG undefined FUN_1432bd860(void)

void FUN_1432bd860(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432bd3b0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar7 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar8 = lVar7;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar8 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar8 = lVar8 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar8 = *param_1 + lVar7;
      if (*(longlong *)(lVar8 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_1432bcd20(&local_res20,param_2,lVar8 + 0x20,uVar3);
        uVar6 = *(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        uVar6 = *(ulonglong *)(lVar8 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar8 + 0x10) = 0xfffffffffffffffe;
      }
      lVar7 = lVar7 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  local_res20 = (undefined8 *)0x0;
  FUN_1432bd3b0(&local_res20);
  return;
}



// FUNCTION 1432bda50 FUN_1432bda50 body=370 status=ok
// SIG undefined FUN_1432bda50(void)

void FUN_1432bda50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14207f9b0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x18;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar5;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        lVar3 = 8;
        lVar7 = 0x1505;
        do {
          lVar1 = lVar3 + 0x1f;
          lVar3 = lVar3 + -1;
          lVar7 = lVar7 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar6);
        } while (lVar3 != 0);
        FUN_1432bd050(&local_res20,param_2,lVar6 + 0x20,lVar7);
        if (*(RefCountImpl **)(lVar6 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar6 + 0x20));
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432bdbe0 ExchangeAdd_NoSync body=7 status=ok
// SIG undefined ExchangeAdd_NoSync(void)

int Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1;
}



// FUNCTION 1432bdbf0 CompareAndSet_NoSync body=11 status=ok
// SIG undefined CompareAndSet_NoSync(void)

bool Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  if (param_2 == iVar1) {
    *param_1 = param_3;
  }
  UNLOCK();
  return param_2 == iVar1;
}



// FUNCTION 1432bdc10 Exchange_NoSync body=7 status=ok
// SIG undefined Exchange_NoSync(void)

undefined8
Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1432bdc50 FUN_1432bdc50 body=129 status=ok
// SIG undefined FUN_1432bdc50(void)

longlong * FUN_1432bdc50(longlong *param_1,uint param_2)

{
  HMODULE hModule;
  bool bVar1;
  
  bVar1 = DAT_146b62f18 == '\0';
  *param_1 = (longlong)(param_1 + 1);
  if (bVar1) {
    hModule = LoadLibraryA("kernel32.dll");
    DAT_146b62f20 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    DAT_146b62f18 = '\x01';
  }
  if (DAT_146b62f20 == (FARPROC)0x0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)*param_1);
    return param_1;
  }
  (*DAT_146b62f20)((LPCRITICAL_SECTION)*param_1,(ulonglong)param_2);
  return param_1;
}



// FUNCTION 1432bdce0 ~Lock body=10 status=ok
// SIG undefined ~Lock(void)

void Scaleform::Lock::~Lock(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432bdce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}



// FUNCTION 1432bdcf0 DoLock body=10 status=ok
// SIG undefined DoLock(void)

void Scaleform::Lock::DoLock(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432bdcf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}



// FUNCTION 1432bdd00 DoLock body=10 status=ok
// SIG undefined DoLock(void)

void Scaleform::Lock::DoLock(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432bdd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}



// FUNCTION 1432bdd30 FUN_1432bdd30 body=180 status=ok
// SIG undefined FUN_1432bdd30(void)

undefined8 * FUN_1432bdd30(undefined8 *param_1)

{
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145af7460;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[8] = 0x10;
  param_1[9] = 0x2000;
  param_1[10] = 0x2000;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0x11] = param_1 + 0x10;
  param_1[0x12] = param_1 + 0x10;
  FUN_1432bdc50(param_1 + 0x13);
  *(undefined2 *)(param_1 + 0x19) = 0x101;
  _guard_xfg_dispatch_icall_nop(param_1 + 7,0,0x50);
  return param_1;
}



// FUNCTION 1432bde20 FUN_1432bde20 body=5 status=ok
// SIG undefined FUN_1432bde20(void)

void FUN_1432bde20(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1432bde30 AssignToCurrentThread body=27 status=ok
// SIG undefined AssignToCurrentThread(void)

void Scaleform::MemoryHeap::AssignToCurrentThread(longlong param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  *(ulonglong *)(param_1 + 0x28) = (ulonglong)DVar1;
  return;
}



// FUNCTION 1432bde60 FUN_1432bde60 body=66 status=ok
// SIG undefined FUN_1432bde60(void)

undefined1 FUN_1432bde60(longlong *param_1)

{
  undefined1 uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x13);
  uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
  Scaleform::Lock::DoLock(param_1 + 0x13);
  return uVar1;
}



// FUNCTION 1432bded0 FUN_1432bded0 body=135 status=ok
// SIG undefined FUN_1432bded0(void)

void FUN_1432bded0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  Scaleform::Lock::DoLock();
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar1 = param_1 + 0x80;
  if (param_1 == -0x88) {
    lVar1 = 0;
  }
  for (; lVar2 != lVar1; lVar2 = *(longlong *)(lVar2 + 0x10)) {
    (**(code **)(*param_2 + 8))(param_2,param_1,lVar2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432bdf60 FUN_1432bdf60 body=74 status=ok
// SIG undefined FUN_1432bdf60(void)

void FUN_1432bdf60(longlong param_1,longlong *param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x98);
  (**(code **)(*param_2 + 8))(param_2,0,param_1);
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432be000 ~RefCountImplCore body=11 status=ok
// SIG void ~RefCountImplCore(RefCountImplCore * this)

/* public: virtual __cdecl Scaleform::RefCountImplCore::~RefCountImplCore(void) __ptr64 */

void __thiscall Scaleform::RefCountImplCore::~RefCountImplCore(RefCountImplCore *this)

{
                    /* 0x32be000  37  ??1RefCountImplCore@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_144f70a50;
  return;
}



// FUNCTION 1432be020 ~RefCountNTSImplCore body=11 status=ok
// SIG void ~RefCountNTSImplCore(RefCountNTSImplCore * this)

/* public: virtual __cdecl Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(void) __ptr64 */

void __thiscall Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(RefCountNTSImplCore *this)

{
                    /* 0x32be020  38  ??1RefCountNTSImplCore@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR__vector_deleting_destructor__145af7a80;
  return;
}



// FUNCTION 1432be040 AddRef body=14 status=ok
// SIG void AddRef(RefCountImpl * this)

/* public: void __cdecl Scaleform::RefCountImpl::AddRef(void) __ptr64 */

void __thiscall Scaleform::RefCountImpl::AddRef(RefCountImpl *this)

{
                    /* 0x32be040  64  ?AddRef@RefCountImpl@Scaleform@@QEAAXXZ */
  AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this + 8,1);
  return;
}



// FUNCTION 1432be060 Release body=56 status=ok
// SIG void Release(RefCountImpl * this)

/* public: void __cdecl Scaleform::RefCountImpl::Release(void) __ptr64 */

void __thiscall Scaleform::RefCountImpl::Release(RefCountImpl *this)

{
  int iVar1;
  
                    /* 0x32be060  355  ?Release@RefCountImpl@Scaleform@@QEAAXXZ */
  iVar1 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(this + 8,0xffffffff);
  if ((iVar1 == 1) && (this != (RefCountImpl *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001432be08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)this)(this,1);
    return;
  }
  return;
}



// FUNCTION 1432be0a0 FUN_1432be0a0 body=14 status=ok
// SIG undefined FUN_1432be0a0(void)

void FUN_1432be0a0(longlong param_1)

{
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 8,1);
  return;
}



// FUNCTION 1432be0c0 FUN_1432be0c0 body=56 status=ok
// SIG undefined FUN_1432be0c0(void)

void FUN_1432be0c0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if ((iVar1 == 1) && (param_1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001432be0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1432be100 Release body=18 status=ok
// SIG void Release(RefCountNTSImpl * this)

/* public: void __cdecl Scaleform::RefCountNTSImpl::Release(void)const __ptr64 */

void __thiscall Scaleform::RefCountNTSImpl::Release(RefCountNTSImpl *this)

{
  RefCountNTSImpl *pRVar1;
  
                    /* 0x32be100  356  ?Release@RefCountNTSImpl@Scaleform@@QEBAXXZ */
  pRVar1 = this + 8;
  *(int *)pRVar1 = *(int *)pRVar1 + -1;
  if (*(int *)pRVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432be10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)this)(this,1);
    return;
  }
  return;
}



// FUNCTION 1432be120 ~RefCountWeakSupportImpl body=90 status=ok
// SIG void ~RefCountWeakSupportImpl(RefCountWeakSupportImpl * this)

/* public: virtual __cdecl Scaleform::RefCountWeakSupportImpl::~RefCountWeakSupportImpl(void)
   __ptr64 */

void __thiscall
Scaleform::RefCountWeakSupportImpl::~RefCountWeakSupportImpl(RefCountWeakSupportImpl *this)

{
  int *piVar1;
  
                    /* 0x32be120  39  ??1RefCountWeakSupportImpl@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145af7a88;
  if (*(longlong *)(this + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(this + 0x10) + 8) = 0;
    piVar1 = *(int **)(this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined ***)this = &PTR__vector_deleting_destructor__145af7a80;
      return;
    }
  }
  *(undefined ***)this = &PTR__vector_deleting_destructor__145af7a80;
  return;
}



// FUNCTION 1432be180 FUN_1432be180 body=97 status=ok
// SIG undefined FUN_1432be180(void)

undefined8 FUN_1432be180(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_res8[0] = 2;
    puVar1 = (undefined4 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,local_res8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
      *(longlong *)(puVar1 + 2) = param_1;
    }
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
  }
  **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1432be1f0 Push body=3 status=ok
// SIG void Push(PtrLeakContext * this, char * param_1)

/* public: void __cdecl Scaleform::PtrLeakContext::Push(char const * __ptr64) __ptr64 */

void __thiscall Scaleform::PtrLeakContext::Push(PtrLeakContext *this,char *param_1)

{
                    /* 0x32be1f0  336  ?Push@PtrLeakContext@Scaleform@@QEAAXPEBD@Z */
  return;
}



// FUNCTION 1432be200 Push body=3 status=ok
// SIG void Push(PtrLeakContext * this, ulong param_1)

/* public: void __cdecl Scaleform::PtrLeakContext::Push(unsigned long) __ptr64 */

void __thiscall Scaleform::PtrLeakContext::Push(PtrLeakContext *this,ulong param_1)

{
                    /* 0x32be200  335  ?Push@PtrLeakContext@Scaleform@@QEAAXK@Z */
  return;
}



// FUNCTION 1432be210 IsTracked body=3 status=ok
// SIG bool IsTracked(PtrLeakContext * this)

/* public: bool __cdecl Scaleform::PtrLeakContext::IsTracked(void)const __ptr64 */

bool __thiscall Scaleform::PtrLeakContext::IsTracked(PtrLeakContext *this)

{
                    /* 0x32be210  243  ?IsTracked@PtrLeakContext@Scaleform@@QEBA_NXZ */
  return false;
}



// FUNCTION 1432be220 PtrLeakContext body=37 status=ok
// SIG undefined PtrLeakContext(PtrLeakContext * this)

/* private: __cdecl Scaleform::PtrLeakContext::PtrLeakContext(void) __ptr64 */

PtrLeakContext * __thiscall Scaleform::PtrLeakContext::PtrLeakContext(PtrLeakContext *this)

{
                    /* 0x32be220  6  ??0PtrLeakContext@Scaleform@@AEAA@XZ */
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_144f70a50;
  *(undefined ***)this = &PTR_FUN_145af7a90;
  *(undefined4 *)(this + 8) = 1;
  return this;
}



// FUNCTION 1432be250 CalcHash body=3 status=ok
// SIG ulong CalcHash(PtrLeakContext * this, PtrLeakContextInitializer * param_1)

/* private: unsigned long __cdecl Scaleform::PtrLeakContext::CalcHash(class
   Scaleform::PtrLeakContextInitializer * __ptr64) __ptr64 */

ulong __thiscall
Scaleform::PtrLeakContext::CalcHash(PtrLeakContext *this,PtrLeakContextInitializer *param_1)

{
                    /* 0x32be250  75
                       ?CalcHash@PtrLeakContext@Scaleform@@AEAAKPEAVPtrLeakContextInitializer@2@@Z
                        */
  return 0;
}


