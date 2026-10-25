// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143389540 FUN_143389540 body=467 status=ok
// SIG undefined FUN_143389540(void)

void FUN_143389540(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  RefCountImpl *this;
  ulonglong local_res8;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined4 local_20 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  local_20[0] = 4;
  FUN_1432c31e0(&local_18,param_1 + 0x28);
  FUN_1432c31e0(&local_10,param_1 + 0x20);
  FUN_1432c2f70(&local_res8);
  Scaleform::GFx::LoadStates::BuildURL(*(undefined8 *)(param_1 + 0x18),&local_res8,local_20);
  this = (RefCountImpl *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  cVar1 = FUN_1432badc0(&local_res8);
  if (cVar1 == '\0') {
    this = (RefCountImpl *)
           FUN_143319140(*(undefined8 *)(param_1 + 0x18),(local_res8 & 0xfffffffffffffffc) + 0xc,0);
LAB_14338963b:
    if (this != (RefCountImpl *)0x0) {
      uVar2 = FUN_1432ec520(param_1 + 0x30,this,param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x50) = uVar2;
      goto LAB_143389659;
    }
  }
  else {
    cVar1 = FUN_1432bae80(&local_38,&local_res8,1,0,0,0,0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0);
      if (lVar4 != 0) {
        this = (RefCountImpl *)FUN_1432e1570(lVar4,&local_res8,local_38,local_30 & 0xffffffff);
      }
      goto LAB_14338963b;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
LAB_143389659:
  *(undefined4 *)(param_1 + 0x4c) = 1;
  if (local_38 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_10 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143389720 FUN_143389720 body=109 status=ok
// SIG undefined FUN_143389720(void)

longlong FUN_143389720(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x4c) == 1) {
    FUN_1432f25b0(param_2,*(undefined8 *)(param_1 + 0x38));
    _guard_xfg_dispatch_icall_nop
              ((void *)*param_2,*(void **)(param_1 + 0x30),*(size_t *)(param_1 + 0x38));
    *param_3 = *(undefined4 *)(param_1 + 0x48);
    *param_4 = *(undefined1 *)(param_1 + 0x50);
    lVar1 = 1;
  }
  else {
    lVar1 = (ulonglong)(uint3)((uint)*(int *)(param_1 + 0x4c) >> 8) << 8;
  }
  return lVar1;
}



// FUNCTION 1433897a0 FUN_1433897a0 body=353 status=ok
// SIG undefined FUN_1433897a0(void)

undefined8 * FUN_1433897a0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RefCountImpl *this;
  ulonglong local_res8;
  
  param_1[3] = param_3;
  param_1[4] = param_2;
  uVar6 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145b03968;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  uVar5 = uVar6;
  if (lVar3 != 0) {
    lVar1 = param_1[3];
    uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x28);
    uVar4 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10);
    uVar5 = FUN_143318b20(lVar3,uVar5,uVar4,0);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = uVar5;
  FUN_1432c2f70(&local_res8);
  FUN_1432e47e0(param_1[3],&local_res8);
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x58);
  if (lVar3 != 0) {
    uVar6 = FUN_143389470(lVar3,param_1[6],&local_res8,param_2 + 0x18);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = uVar6;
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1[3] + 0x10) + 0x18))
                   ((longlong *)(param_1[3] + 0x10),0x18);
  (**(code **)(*(longlong *)this + 8))(this,param_1[5]);
  Scaleform::RefCountImpl::Release(this);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 143389910 FUN_143389910 body=88 status=ok
// SIG undefined FUN_143389910(void)

void FUN_143389910(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b03968;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_145b038f0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014338995f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143389970 FUN_143389970 body=204 status=ok
// SIG undefined FUN_143389970(void)

undefined8 FUN_143389970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int local_res8;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  bVar5 = *(int *)(lVar1 + 0x4c) == 1;
  if (bVar5) {
    FUN_1432f25b0(&local_28,*(undefined8 *)(lVar1 + 0x38));
    _guard_xfg_dispatch_icall_nop(local_28,*(void **)(lVar1 + 0x30),*(size_t *)(lVar1 + 0x38));
    iVar4 = *(int *)(lVar1 + 0x48);
    local_res8._0_1_ = *(undefined1 *)(lVar1 + 0x50);
  }
  else {
    iVar4 = local_res8;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x25) == '\0') {
    if (!bVar5) goto LAB_1433899e8;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar2 + 0x130))
              (plVar2,*(longlong *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),&local_28,
               (longlong)iVar4,(undefined1)local_res8);
  }
  else if (!bVar5) {
LAB_1433899e8:
    uVar3 = 0;
    goto LAB_143389a16;
  }
  uVar3 = 1;
LAB_143389a16:
  if (local_28 != (void *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return uVar3;
}



// FUNCTION 143389a50 FUN_143389a50 body=153 status=ok
// SIG undefined FUN_143389a50(void)

undefined8 FUN_143389a50(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  FUN_1432c2f70();
  uVar2 = *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
  if (4 < uVar2) {
    iVar1 = _stricmp((char *)((longlong)(*param_2 & 0xfffffffffffffffc) + uVar2 + 8),".swf");
    if (iVar1 == 0) {
      FUN_1432c3510(param_1);
      FUN_1432c3950(param_1,(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                    (*(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff) - 4);
      FUN_1432c3950(param_1,&DAT_145afb774,0xffffffffffffffff);
    }
  }
  return param_1;
}



// FUNCTION 143389af0 FUN_143389af0 body=159 status=ok
// SIG undefined FUN_143389af0(void)

void FUN_143389af0(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143389b90 FUN_143389b90 body=178 status=ok
// SIG undefined FUN_143389b90(void)

void FUN_143389b90(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143389c50 FUN_143389c50 body=192 status=ok
// SIG undefined FUN_143389c50(void)

void FUN_143389c50(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1432de450();
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143389d10 FUN_143389d10 body=89 status=ok
// SIG undefined FUN_143389d10(void)

undefined8 FUN_143389d10(undefined8 param_1,ulonglong param_2)

{
  FUN_143389af0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143389d70 FUN_143389d70 body=113 status=ok
// SIG undefined FUN_143389d70(void)

undefined8 * FUN_143389d70(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b038f0;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143389df0 FUN_143389df0 body=151 status=ok
// SIG undefined FUN_143389df0(void)

undefined8 * FUN_143389df0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b03968;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_145b038f0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143389e90 FUN_143389e90 body=151 status=ok
// SIG undefined FUN_143389e90(void)

undefined8 * FUN_143389e90(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b03938;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_145b038f0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143389f30 FUN_143389f30 body=89 status=ok
// SIG undefined FUN_143389f30(void)

undefined8 FUN_143389f30(undefined8 param_1,ulonglong param_2)

{
  FUN_143389b90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143389f90 FUN_143389f90 body=89 status=ok
// SIG undefined FUN_143389f90(void)

undefined8 FUN_143389f90(undefined8 param_1,ulonglong param_2)

{
  FUN_143389c50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14338a030 FUN_14338a030 body=107 status=ok
// SIG undefined FUN_14338a030(void)

longlong FUN_14338a030(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x1f48) == 100) {
    *(longlong *)(param_1 + 8000) = *(longlong *)(param_1 + 8000) + 1;
    *(undefined8 *)(param_1 + 0x1f48) = 99;
    lVar1 = *(longlong *)(param_1 + 8000);
    if (*(longlong *)(param_1 + 8000) == 100) {
      lVar1 = 0;
    }
    *(longlong *)(param_1 + 8000) = lVar1;
  }
  uVar3 = *(longlong *)(param_1 + 8000) + *(longlong *)(param_1 + 0x1f48);
  *(longlong *)(param_1 + 0x1f48) = *(longlong *)(param_1 + 0x1f48) + 1;
  uVar2 = uVar3 - 100;
  if (uVar3 < 100) {
    uVar2 = uVar3;
  }
  return uVar2 * 0x50 + param_1;
}



// FUNCTION 14338a0b0 InputEventsQueue body=26 status=ok
// SIG undefined InputEventsQueue(void)

longlong Scaleform::GFx::InputEventsQueue::InputEventsQueue(longlong param_1)

{
  *(undefined8 *)(param_1 + 8000) = 0;
  *(undefined8 *)(param_1 + 0x1f48) = 0;
  *(undefined4 *)(param_1 + 0x1f80) = 0;
  return param_1;
}



// FUNCTION 14338a0d0 FUN_14338a0d0 body=276 status=ok
// SIG undefined FUN_14338a0d0(void)

longlong FUN_14338a0d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x1f48);
  uVar9 = 0;
  if (lVar3 == 0) {
    uVar8 = 1;
    uVar4 = uVar9;
    do {
      if ((*(uint *)(param_1 + 0x1f80) & uVar8) != 0) {
        if (*(longlong *)(param_1 + 0x1f48) == 100) {
          *(longlong *)(param_1 + 8000) = *(longlong *)(param_1 + 8000) + 1;
          *(undefined8 *)(param_1 + 0x1f48) = 99;
          uVar2 = *(ulonglong *)(param_1 + 8000);
          if (*(ulonglong *)(param_1 + 8000) == 100) {
            uVar2 = uVar9;
          }
          *(ulonglong *)(param_1 + 8000) = uVar2;
        }
        uVar5 = *(longlong *)(param_1 + 8000) + *(longlong *)(param_1 + 0x1f48);
        *(longlong *)(param_1 + 0x1f48) = *(longlong *)(param_1 + 0x1f48) + 1;
        uVar2 = uVar5 - 100;
        if (uVar5 < 100) {
          uVar2 = uVar5;
        }
        puVar6 = (undefined4 *)(uVar2 * 0x50 + param_1);
        *puVar6 = 0;
        *(char *)(puVar6 + 5) = (char)uVar4;
        puVar6[2] = *(undefined4 *)(param_1 + 0x1f50 + uVar4 * 8);
        puVar6[3] = *(undefined4 *)(param_1 + 0x1f54 + uVar4 * 8);
        *(undefined2 *)(puVar6 + 4) = 0;
        *(undefined1 *)((longlong)puVar6 + 0x13) = 0x40;
        *(uint *)(param_1 + 0x1f80) = *(uint *)(param_1 + 0x1f80) & ~uVar8;
      }
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      uVar8 = uVar8 * 2;
    } while (uVar7 < 6);
    lVar3 = *(longlong *)(param_1 + 0x1f48);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar1 = *(longlong *)(param_1 + 8000);
  *(longlong *)(param_1 + 0x1f48) = lVar3 + -1;
  uVar4 = lVar1 + 1;
  if (uVar4 == 100) {
    uVar4 = uVar9;
  }
  *(ulonglong *)(param_1 + 8000) = uVar4;
  return lVar1 * 0x50 + param_1;
}



// FUNCTION 14338a1f0 FUN_14338a1f0 body=50 status=ok
// SIG undefined FUN_14338a1f0(void)

void FUN_14338a1f0(longlong param_1,uint param_2,undefined4 *param_3)

{
  if (param_2 < 6) {
    *(uint *)(param_1 + 0x1f80) = *(uint *)(param_1 + 0x1f80) | 1 << ((byte)param_2 & 0x1f);
    *(undefined4 *)(param_1 + 0x1f50 + (ulonglong)param_2 * 8) = *param_3;
    *(undefined4 *)(param_1 + 0x1f54 + (ulonglong)param_2 * 8) = param_3[1];
  }
  return;
}



// FUNCTION 14338a230 FUN_14338a230 body=117 status=ok
// SIG undefined FUN_14338a230(void)

void FUN_14338a230(longlong param_1,byte param_2,float *param_3,undefined2 param_4,
                  undefined1 param_5)

{
  undefined4 *puVar1;
  
  if (*param_3 != 1.1754944e-38) {
    *(uint *)(param_1 + 0x1f80) = *(uint *)(param_1 + 0x1f80) & ~(1 << (param_2 & 0x1f));
  }
  puVar1 = (undefined4 *)FUN_14338a030(param_1);
  *puVar1 = 0;
  *(byte *)(puVar1 + 5) = param_2;
  puVar1[2] = *param_3;
  puVar1[3] = param_3[1];
  *(undefined2 *)(puVar1 + 4) = param_4;
  *(undefined1 *)((longlong)puVar1 + 0x13) = param_5;
  return;
}



// FUNCTION 14338a2b0 FUN_14338a2b0 body=115 status=ok
// SIG undefined FUN_14338a2b0(void)

void FUN_14338a2b0(longlong param_1,byte param_2,float *param_3,undefined1 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  
  if (*param_3 != 1.1754944e-38) {
    *(uint *)(param_1 + 0x1f80) = *(uint *)(param_1 + 0x1f80) & ~(1 << (param_2 & 0x1f));
  }
  puVar2 = (undefined4 *)FUN_14338a030(param_1);
  *puVar2 = 0;
  *(byte *)(puVar2 + 5) = param_2;
  puVar2[2] = *param_3;
  fVar1 = param_3[1];
  *(undefined1 *)((longlong)puVar2 + 0x12) = param_4;
  puVar2[3] = fVar1;
  *(undefined2 *)(puVar2 + 4) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x13) = 0x20;
  return;
}



// FUNCTION 14338a330 AddKeyEvent body=85 status=ok
// SIG undefined AddKeyEvent(void)

void Scaleform::GFx::InputEventsQueue::AddKeyEvent
               (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
               undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14338a030();
  *puVar1 = 1;
  puVar1[3] = param_2;
  puVar1[2] = param_4;
  *(undefined1 *)(puVar1 + 4) = param_3;
  *(undefined1 *)((longlong)puVar1 + 0x11) = param_6;
  *(undefined1 *)((longlong)puVar1 + 0x12) = param_7;
  *(undefined1 *)((longlong)puVar1 + 0x13) = param_5;
  return;
}



// FUNCTION 14338a390 FUN_14338a390 body=72 status=ok
// SIG undefined FUN_14338a390(void)

void FUN_14338a390(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14338a030();
  *puVar1 = 4;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 5) = param_5;
  return;
}



// FUNCTION 14338a3e0 FUN_14338a3e0 body=86 status=ok
// SIG undefined FUN_14338a3e0(void)

void FUN_14338a3e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14338a030();
  *puVar1 = 5;
  *(undefined8 *)(puVar1 + 4) = param_3;
  *(undefined8 *)(puVar1 + 6) = param_4;
  *(undefined8 *)(puVar1 + 8) = param_5;
  *(undefined8 *)(puVar1 + 10) = param_6;
  puVar1[2] = param_2;
  return;
}



// FUNCTION 14338a440 FUN_14338a440 body=142 status=ok
// SIG undefined FUN_14338a440(void)

void FUN_14338a440(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14338a030();
  *puVar1 = 6;
  *(undefined8 *)(puVar1 + 8) = param_5;
  *(undefined8 *)(puVar1 + 10) = param_6;
  *(undefined8 *)(puVar1 + 0xc) = param_7;
  *(undefined8 *)(puVar1 + 0xe) = param_8;
  *(undefined8 *)(puVar1 + 4) = param_3;
  *(undefined8 *)(puVar1 + 6) = param_4;
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x12) = param_10;
  puVar1[2] = param_2;
  return;
}



// FUNCTION 14338a4e0 AddStatusEvent body=72 status=ok
// SIG undefined AddStatusEvent(void)

void Scaleform::GFx::InputEventsQueue::AddStatusEvent
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14338a030();
  *puVar1 = 7;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 6) = param_4;
  *(undefined8 *)(puVar1 + 4) = param_3;
  *(undefined8 *)(puVar1 + 8) = param_5;
  return;
}



// FUNCTION 14338a530 FUN_14338a530 body=52 status=ok
// SIG undefined FUN_14338a530(void)

undefined8 * FUN_14338a530(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) & 0xe0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



// FUNCTION 14338a570 FUN_14338a570 body=26 status=ok
// SIG undefined FUN_14338a570(void)

void FUN_14338a570(longlong param_1)

{
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xe0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



// FUNCTION 14338a590 FUN_14338a590 body=158 status=ok
// SIG undefined FUN_14338a590(void)

void FUN_14338a590(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 0x10;
  uVar3 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x34) = uVar3;
  uVar2 = *(ushort *)(param_2 + 0x10);
  if (uVar2 != 0) {
    if ((((*(byte *)(param_2 + 0x13) & 0x40) == 0) && ((char)*(byte *)(param_2 + 0x13) < '\0')) &&
       (uVar2 != 0)) {
      uVar3 = ~(uint)uVar2 & uVar3;
    }
    else {
      uVar3 = uVar2 | uVar3;
    }
    *(uint *)(param_1 + 0x30) = uVar3;
  }
  if ((*(byte *)(param_2 + 0x13) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = (int)*(char *)(param_2 + 0x12);
  }
  if (((int)*(float *)(param_2 + 8) == (int)*(float *)(param_1 + 0x38)) &&
     ((int)*(float *)(param_2 + 0xc) == (int)*(float *)(param_1 + 0x3c))) {
    bVar4 = *(byte *)(param_1 + 0x4c) & 0xf7;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x4c) | 8;
  }
  *(byte *)(param_1 + 0x4c) = bVar4;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}



// FUNCTION 14338a640 FUN_14338a640 body=152 status=ok
// SIG undefined FUN_14338a640(void)

undefined8 * FUN_14338a640(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  RefCountNTSImpl *this;
  
  uVar3 = (ulonglong)param_3;
  if (*(ulonglong *)(param_1 + 0x20) <= uVar3) {
    *param_2 = 0;
    return param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  piVar2 = *(int **)(lVar1 + uVar3 * 8);
  this = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  *param_2 = this;
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return param_2;
}



// FUNCTION 14338a6e0 FUN_14338a6e0 body=143 status=ok
// SIG undefined FUN_14338a6e0(void)

void FUN_14338a6e0(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(ulonglong *)(param_1 + 0x20) <= (ulonglong)param_2) {
    uVar1 = param_2 + 1;
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    FUN_14338a930(param_1 + 0x18,param_1 + 0x18,uVar1);
    if (uVar2 < uVar1) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 8);
      for (lVar4 = uVar1 - uVar2; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
        }
        puVar3 = puVar3 + 1;
      }
    }
  }
  FUN_1432efc10(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 8,param_3);
  return;
}



// FUNCTION 14338a780 FUN_14338a780 body=203 status=ok
// SIG undefined FUN_14338a780(void)

byte FUN_14338a780(longlong param_1)

{
  byte bVar1;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 8:
    return 8;
  case 9:
    return 0x12;
  case 0xd:
    return 0xd;
  case 0x1b:
    return 0x13;
  case 0x21:
    return 0x10;
  case 0x22:
    return 0x11;
  case 0x23:
    return 4;
  case 0x24:
    return 3;
  case 0x25:
    return 1;
  case 0x26:
    return 0xe;
  case 0x27:
    return 2;
  case 0x28:
    return 0xf;
  case 0x2d:
    return 5;
  case 0x2e:
    return 6;
  }
  bVar1 = 0;
  if (0x1f < *(byte *)(param_1 + 0xc)) {
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  return bVar1;
}



// FUNCTION 14338a8c0 FUN_14338a8c0 body=108 status=ok
// SIG undefined FUN_14338a8c0(void)

ulonglong FUN_14338a8c0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x12) & 1;
  if ((*(byte *)(param_1 + 0x12) & 8) != 0) {
    bVar2 = bVar2 ^ 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 - 0x20U < 0x50) {
    if (bVar2 == 0) {
      return (ulonglong)(byte)(&DAT_145b03980)[iVar1 - 0x20U];
    }
    return (ulonglong)(byte)(&DAT_145b039d0)[iVar1 - 0x20U];
  }
  if (0x24 < iVar1 - 0xbaU) {
    return (ulonglong)(uint3)(iVar1 - 0xbaU >> 8) << 8;
  }
  if (bVar2 == 0) {
    return (ulonglong)(byte)";=,-./`"[iVar1 - 0xbaU];
  }
  return (ulonglong)(byte)":+<_>?~"[iVar1 - 0xbaU];
}



// FUNCTION 14338a930 FUN_14338a930 body=187 status=ok
// SIG undefined FUN_14338a930(void)

void FUN_14338a930(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    puVar2 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar3) * 8);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      piVar1 = (int *)*puVar2;
      if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar2 = puVar2 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432cfd30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432cfd30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 14338a9f0 FUN_14338a9f0 body=527 status=ok
// SIG undefined FUN_14338a9f0(void)

void FUN_14338a9f0(longlong param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  uVar8 = 0;
  uVar11 = 0;
  bVar2 = true;
  do {
    do {
      while( true ) {
        uVar4 = *(uint *)(param_1 + 4);
        iVar10 = 0;
        iVar6 = 0;
        iVar9 = 0;
        uVar3 = 0;
        if (1 < uVar4) {
          uVar3 = (uVar4 - 2 >> 1) + 1;
          uVar7 = (ulonglong)uVar3;
          uVar3 = uVar3 * 2;
          iVar6 = 0;
          uVar5 = uVar11;
          do {
            iVar10 = iVar10 + *(short *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar5 * 2);
            iVar6 = iVar6 + *(short *)(*(longlong *)(param_1 + 0x10) +
                                      (ulonglong)(uVar5 + 0x100) * 2);
            uVar5 = uVar5 + 0x200;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (uVar3 < uVar4) {
          iVar9 = (int)*(short *)(*(longlong *)(param_1 + 0x10) +
                                 (ulonglong)(uVar3 * 0x100 + uVar11) * 2);
        }
        iVar9 = iVar9 + iVar6 + iVar10;
        if (iVar9 != 0x4000) break;
        uVar11 = uVar11 + 1;
        if (0xff < uVar11) {
          uVar11 = uVar4 * 0x80;
          if ((uVar4 & 0x1ffffff) != 0) {
            do {
              uVar4 = uVar11 + uVar8;
              uVar3 = uVar11 - uVar8;
              uVar8 = uVar8 + 1;
              *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 2) =
                   *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2);
            } while (uVar8 < uVar11);
          }
          **(undefined2 **)(param_1 + 0x10) =
               (*(undefined2 **)(param_1 + 0x10))[*(int *)(param_1 + 4) * 0x100 - 1];
          return;
        }
      }
      iVar6 = 0;
      uVar5 = 0;
      uVar3 = uVar11;
      if (uVar4 != 0) {
        do {
          fVar12 = (float)(int)*(short *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2) *
                   (16384.0 / (float)iVar9);
          if (fVar12 <= 0.0) {
            fVar12 = fVar12 - 0.5;
          }
          else {
            fVar12 = fVar12 + 0.5;
          }
          uVar5 = uVar5 + 1;
          *(short *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2) = (short)(int)fVar12;
          iVar6 = iVar6 + (short)(int)fVar12;
          uVar3 = uVar3 + 0x100;
        } while (uVar5 < *(uint *)(param_1 + 4));
      }
      uVar4 = *(uint *)(param_1 + 4);
      iVar6 = iVar6 + -0x4000;
      uVar3 = 0;
      iVar9 = 1;
      if (0 < iVar6) {
        iVar9 = -1;
      }
    } while (uVar4 == 0);
    do {
      if (iVar6 == 0) break;
      bVar2 = (bool)(bVar2 ^ 1);
      if (bVar2) {
        iVar10 = (uVar4 >> 1) + (uVar3 >> 1);
      }
      else {
        iVar10 = (uVar4 >> 1) - (uVar3 >> 1);
      }
      uVar7 = (ulonglong)(uVar11 + iVar10 * 0x100);
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x10) + uVar7 * 2);
      if (sVar1 < 0x4000) {
        *(short *)(*(longlong *)(param_1 + 0x10) + uVar7 * 2) = sVar1 + (short)iVar9;
        iVar6 = iVar6 + iVar9;
      }
      uVar4 = *(uint *)(param_1 + 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  } while( true );
}



// FUNCTION 14338ac10 FUN_14338ac10 body=94 status=ok
// SIG undefined FUN_14338ac10(void)

void FUN_14338ac10(float *param_1,float param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  
  *param_1 = param_2;
  fVar3 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar2 = (uint)(longlong)fVar3;
  param_1[1] = (float)(uVar2 * 2);
  uVar1 = (ulonglong)(uVar2 << 9);
  param_1[2] = (float)(1 - (uVar2 & 0x7fffffff));
  if (*(ulonglong *)(param_1 + 6) < uVar1) {
    FUN_14338d5a0(param_1 + 4,uVar1,0);
    *(ulonglong *)(param_1 + 6) = uVar1;
  }
  return;
}



// FUNCTION 14338ac80 FUN_14338ac80 body=352 status=ok
// SIG undefined FUN_14338ac80(void)

void FUN_14338ac80(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                  int param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if ((((0 < param_2) && (0 < param_3)) && (0 < param_6)) && (0 < param_7)) {
    if (param_9 != 1) {
      if (param_9 == 2) {
        puVar2 = &LAB_14338b150;
        uVar1 = 4;
      }
      else {
        if (param_9 != 3) {
          if (param_9 != 4) {
            return;
          }
          FUN_14338b4b0(param_1,param_2,param_3,param_4,1,param_5,param_6,param_7,param_8,1,
                        &LAB_14338b120);
          return;
        }
        puVar2 = &LAB_14338b180;
        uVar1 = 3;
      }
      FUN_14338b4b0(param_1,param_2,param_3,param_4,4,param_5,param_6,param_7,param_8,uVar1,puVar2);
      return;
    }
    FUN_14338b4b0(param_1,param_2,param_3,param_4,3,param_5,param_6,param_7,param_8,3,&LAB_14338b130
                 );
  }
  return;
}



// FUNCTION 14338adf0 FUN_14338adf0 body=352 status=ok
// SIG undefined FUN_14338adf0(void)

void FUN_14338adf0(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                  int param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if ((((0 < param_2) && (0 < param_3)) && (0 < param_6)) && (0 < param_7)) {
    if (param_9 != 1) {
      if (param_9 == 2) {
        pcVar2 = FUN_14338b1a0;
        uVar1 = 4;
      }
      else {
        if (param_9 != 3) {
          if (param_9 != 4) {
            return;
          }
          FUN_14338b7a0(param_1,param_2,param_3,param_4,1,param_5,param_6,param_7,param_8,1,
                        FUN_14338b440);
          return;
        }
        pcVar2 = FUN_14338b400;
        uVar1 = 3;
      }
      FUN_14338b7a0(param_1,param_2,param_3,param_4,4,param_5,param_6,param_7,param_8,uVar1,pcVar2);
      return;
    }
    FUN_14338b7a0(param_1,param_2,param_3,param_4,3,param_5,param_6,param_7,param_8,3,FUN_14338b2f0)
    ;
  }
  return;
}



// FUNCTION 14338af60 FUN_14338af60 body=437 status=ok
// SIG undefined FUN_14338af60(void)

void FUN_14338af60(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                  int param_6,int param_7,undefined4 param_8,int param_9,undefined8 param_10)

{
  undefined1 local_res10 [24];
  
  if ((((0 < param_2) && (0 < param_3)) && (0 < param_6)) && (0 < param_7)) {
    if (param_9 == 1) {
      FUN_14338c920(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_res10,
                    local_res10,param_10);
    }
    else {
      if (param_9 == 2) {
        FUN_14338cfa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_res10,
                      local_res10,param_10);
        return;
      }
      if (param_9 == 3) {
        FUN_14338cc60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_res10,
                      local_res10,param_10);
        return;
      }
      if (param_9 == 4) {
        FUN_14338c5e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_res10,
                      local_res10,param_10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14338b1a0 FUN_14338b1a0 body=320 status=ok
// SIG undefined FUN_14338b1a0(void)

void FUN_14338b1a0(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  int param_6,int param_7)

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
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  bVar1 = param_2[2];
  bVar2 = *param_2;
  bVar3 = param_2[3];
  iVar13 = (0x100 - param_7) * (0x100 - param_6);
  iVar15 = (0x100 - param_7) * param_6;
  iVar14 = (0x100 - param_6) * param_7;
  param_6 = param_6 * param_7;
  bVar4 = *param_3;
  bVar5 = param_3[2];
  bVar6 = param_3[3];
  bVar7 = *param_4;
  bVar8 = param_4[2];
  bVar9 = param_4[3];
  bVar10 = *param_5;
  bVar11 = param_5[2];
  bVar12 = param_5[3];
  param_1[1] = (char)((uint)param_2[1] * iVar13 + 0x8000 + (uint)param_3[1] * iVar15 +
                      (uint)param_4[1] * iVar14 + (uint)param_5[1] * param_6 >> 0x10);
  param_1[2] = (char)((uint)bVar1 * iVar13 + 0x8000 + (uint)bVar5 * iVar15 + (uint)bVar8 * iVar14 +
                      (uint)bVar11 * param_6 >> 0x10);
  *param_1 = (char)((uint)bVar2 * iVar13 + 0x8000 + (uint)bVar4 * iVar15 + (uint)bVar7 * iVar14 +
                    (uint)bVar10 * param_6 >> 0x10);
  param_1[3] = (char)((uint)bVar3 * iVar13 + 0x8000 + (uint)bVar6 * iVar15 + (uint)bVar9 * iVar14 +
                      (uint)bVar12 * param_6 >> 0x10);
  return;
}



// FUNCTION 14338b2f0 FUN_14338b2f0 body=255 status=ok
// SIG undefined FUN_14338b2f0(void)

void FUN_14338b2f0(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  iVar11 = (0x100 - param_7) * param_6;
  iVar9 = (0x100 - param_7) * (0x100 - param_6);
  iVar10 = (0x100 - param_6) * param_7;
  param_6 = param_6 * param_7;
  bVar3 = param_3[1];
  bVar4 = param_3[2];
  bVar5 = param_4[1];
  bVar6 = param_4[2];
  bVar7 = param_5[1];
  bVar8 = param_5[2];
  *param_1 = (char)((uint)*param_2 * iVar9 + 0x8000 + (uint)*param_3 * iVar11 +
                    (uint)*param_4 * iVar10 + (uint)*param_5 * param_6 >> 0x10);
  param_1[1] = (char)((uint)bVar1 * iVar9 + 0x8000 + (uint)bVar3 * iVar11 + (uint)bVar5 * iVar10 +
                      (uint)bVar7 * param_6 >> 0x10);
  param_1[2] = (char)((uint)bVar2 * iVar9 + 0x8000 + (uint)bVar4 * iVar11 + (uint)bVar6 * iVar10 +
                      (uint)bVar8 * param_6 >> 0x10);
  return;
}



// FUNCTION 14338b400 FUN_14338b400 body=53 status=ok
// SIG undefined FUN_14338b400(void)

void FUN_14338b400(longlong param_1)

{
  FUN_14338b2f0();
  *(undefined1 *)(param_1 + 3) = 0xff;
  return;
}



// FUNCTION 14338b440 FUN_14338b440 body=105 status=ok
// SIG undefined FUN_14338b440(void)

void FUN_14338b440(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  int param_6,int param_7)

{
  *param_1 = (char)((uint)*param_5 * param_6 * param_7 + 0x8000 +
                    (uint)*param_3 * (0x100 - param_7) * param_6 +
                    (uint)*param_4 * (0x100 - param_6) * param_7 +
                    (uint)*param_2 * (0x100 - param_7) * (0x100 - param_6) >> 0x10);
  return;
}



// FUNCTION 14338b4b0 FUN_14338b4b0 body=744 status=ok
// SIG undefined FUN_14338b4b0(void)

void FUN_14338b4b0(longlong param_1,uint param_2,uint param_3,int param_4,int param_5,
                  longlong param_6,int param_7,int param_8,int param_9,int param_10,code *param_11)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint local_68;
  int local_60;
  undefined4 local_5c;
  int local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar2 = 0;
  uVar12 = (ulonglong)(int)param_2;
  uVar6 = uVar12;
  if (param_2 != 0) {
    local_5c = 2;
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar12 * 4,&local_5c);
    uVar6 = (ulonglong)param_2;
  }
  iVar11 = (int)uVar6;
  iVar10 = (param_7 << 8) / iVar11;
  iVar9 = (param_7 << 8) % iVar11;
  uVar3 = (longlong)(param_7 << 7) / (longlong)iVar11 & 0xffffffff;
  if (iVar9 < 1) {
    iVar9 = iVar9 + iVar11;
    iVar10 = iVar10 + -1;
  }
  iVar4 = iVar9 - iVar11;
  lVar5 = 0;
  if (0 < (longlong)uVar12) {
    do {
      *(int *)(lVar2 + lVar5 * 4) = (int)uVar3;
      iVar4 = iVar4 + iVar9;
      uVar1 = (int)uVar3 + iVar10;
      if (0 < iVar4) {
        iVar4 = iVar4 - iVar11;
        uVar1 = uVar1 + 1;
      }
      uVar3 = (ulonglong)uVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)uVar12);
  }
  local_60 = (param_8 << 8) / (int)param_3;
  iVar9 = (param_8 << 8) % (int)param_3;
  uVar3 = (longlong)(param_8 << 7) / (longlong)(int)param_3;
  local_68 = (uint)uVar3;
  uVar3 = uVar3 & 0xffffffff;
  if (iVar9 < 1) {
    iVar9 = iVar9 + param_3;
    local_60 = local_60 + -1;
  }
  if (0 < (int)param_3) {
    local_58 = param_7 + -1;
    local_48 = (longlong)(local_58 * param_10);
    param_7 = iVar9 - param_3;
    local_50 = (ulonglong)param_3;
    local_40 = (longlong)param_4;
LAB_14338b610:
    iVar10 = (int)uVar3 >> 8;
    lVar5 = 0;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    iVar4 = 0;
    iVar11 = param_8 + -1;
    if (iVar10 < param_8) {
      iVar11 = iVar10;
    }
    lVar7 = iVar11 * param_9 + param_6;
    lVar8 = param_1;
    if (0 < (longlong)uVar12) {
      do {
        if (-1 < *(int *)(lVar2 + lVar5 * 4)) {
          if (lVar5 < (longlong)uVar12) goto LAB_14338b680;
          break;
        }
        (*param_11)(lVar8,lVar7);
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + param_5;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (longlong)uVar12);
      goto LAB_14338b6b1;
    }
    goto LAB_14338b6b9;
  }
LAB_14338b75d:
  if (lVar2 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  return;
  while( true ) {
    (*param_11)(lVar8,iVar10 * param_10 + lVar7);
    iVar4 = iVar4 + 1;
    lVar8 = lVar8 + param_5;
    lVar5 = lVar5 + 1;
    if ((longlong)uVar12 <= lVar5) break;
LAB_14338b680:
    iVar10 = *(int *)(lVar2 + lVar5 * 4) >> 8;
    if (local_58 <= iVar10) break;
  }
LAB_14338b6b1:
  uVar6 = (ulonglong)param_2;
LAB_14338b6b9:
  lVar7 = lVar7 + local_48;
  if (iVar4 < (int)uVar6) {
    uVar6 = (ulonglong)(uint)((int)uVar6 - iVar4);
    do {
      (*param_11)(lVar8,lVar7);
      lVar8 = lVar8 + param_5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = (ulonglong)param_2;
  }
  param_7 = param_7 + iVar9;
  local_68 = local_68 + local_60;
  if (0 < param_7) {
    param_7 = param_7 - param_3;
    local_68 = local_68 + 1;
  }
  uVar3 = (ulonglong)local_68;
  param_1 = param_1 + local_40;
  local_50 = local_50 - 1;
  if (local_50 == 0) goto code_r0x00014338b753;
  goto LAB_14338b610;
code_r0x00014338b753:
  local_50 = 0;
  goto LAB_14338b75d;
}



// FUNCTION 14338b7a0 FUN_14338b7a0 body=957 status=ok
// SIG undefined FUN_14338b7a0(void)

void FUN_14338b7a0(longlong param_1,int param_2,uint param_3,int param_4,int param_5,
                  longlong param_6,int param_7,int param_8,int param_9,int param_10,code *param_11)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint local_res8;
  int local_res10;
  int local_68;
  undefined4 local_64;
  int local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  
  lVar3 = 0;
  lVar6 = (longlong)param_2;
  local_50 = param_1;
  if (param_2 != 0) {
    local_64 = 2;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar6 * 4,&local_64);
  }
  iVar14 = (param_7 << 8) / param_2;
  iVar11 = (param_7 << 8) % param_2;
  if (iVar11 < 1) {
    iVar11 = iVar11 + param_2;
    iVar14 = iVar14 + -1;
  }
  iVar4 = iVar11 - param_2;
  lVar5 = 0;
  if (0 < param_2) {
    iVar2 = (param_7 << 7) / param_2 + -0x80;
    do {
      *(int *)(lVar3 + lVar5 * 4) = iVar2;
      iVar4 = iVar4 + iVar11;
      iVar2 = iVar2 + iVar14;
      if (0 < iVar4) {
        iVar4 = iVar4 - param_2;
        iVar2 = iVar2 + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  local_68 = (param_8 << 8) / (int)param_3;
  uVar13 = (longlong)(param_8 << 8) % (longlong)(int)param_3;
  uVar12 = (uint)uVar13;
  uVar13 = uVar13 & 0xffffffff;
  if ((int)uVar12 < 1) {
    uVar12 = uVar12 + param_3;
    uVar13 = (ulonglong)uVar12;
    local_68 = local_68 + -1;
  }
  local_res10 = uVar12 - param_3;
  if (0 < (int)param_3) {
    local_60 = param_7 + -1;
    lVar5 = (longlong)(local_60 * param_10);
    local_res8 = (param_8 << 7) / (int)param_3 - 0x80;
    local_48 = (ulonglong)param_3;
    local_58 = lVar5;
    local_40 = (longlong)param_4;
LAB_14338b930:
    uVar15 = local_res8 & 0xff;
    iVar11 = (int)local_res8 >> 8;
    lVar9 = param_6;
    if (-1 < iVar11) {
      lVar9 = iVar11 * param_9 + param_6;
    }
    iVar14 = param_8 + -1;
    if (iVar11 + 1 < param_8) {
      iVar14 = iVar11 + 1;
    }
    lVar7 = 0;
    lVar8 = iVar14 * param_9 + param_6;
    lVar10 = local_50;
    if (0 < lVar6) {
      do {
        uVar1 = *(uint *)(lVar3 + lVar7 * 4);
        if (-1 < (int)uVar1) {
          if (lVar7 < lVar6) goto LAB_14338b9c0;
          break;
        }
        (*param_11)(lVar10,lVar9,lVar9,lVar8,lVar8,uVar1 & 0xff,uVar15);
        lVar7 = lVar7 + 1;
        lVar10 = lVar10 + param_5;
      } while (lVar7 < lVar6);
      goto LAB_14338ba27;
    }
    goto LAB_14338ba34;
  }
LAB_14338bb29:
  if (lVar3 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
  }
  return;
  while( true ) {
    lVar5 = (longlong)((iVar11 + 1) * param_10);
    (*param_11)(lVar10,iVar11 * param_10 + lVar9,lVar5 + lVar9,iVar11 * param_10 + lVar8,
                lVar5 + lVar8,uVar1 & 0xff,uVar15);
    lVar7 = lVar7 + 1;
    lVar10 = lVar10 + param_5;
    if (lVar6 <= lVar7) break;
LAB_14338b9c0:
    uVar1 = *(uint *)(lVar3 + lVar7 * 4);
    iVar11 = (int)uVar1 >> 8;
    if (local_60 <= iVar11) break;
  }
LAB_14338ba27:
  uVar13 = (ulonglong)uVar12;
  lVar5 = local_58;
LAB_14338ba34:
  if (lVar7 < lVar6) {
    do {
      (*param_11)(lVar10,lVar9 + lVar5,lVar9 + lVar5,lVar8 + lVar5,lVar8 + lVar5,
                  *(undefined1 *)(lVar3 + lVar7 * 4),uVar15);
      lVar10 = lVar10 + param_5;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
    uVar13 = (ulonglong)uVar12;
    lVar5 = local_58;
  }
  local_res10 = local_res10 + (int)uVar13;
  local_res8 = local_res8 + local_68;
  if (0 < local_res10) {
    local_res10 = local_res10 - param_3;
    local_res8 = local_res8 + 1;
  }
  local_50 = local_50 + local_40;
  local_48 = local_48 - 1;
  if (local_48 == 0) goto code_r0x00014338bb0c;
  goto LAB_14338b930;
code_r0x00014338bb0c:
  local_48 = 0;
  goto LAB_14338bb29;
}



// FUNCTION 14338bb60 FUN_14338bb60 body=760 status=ok
// SIG undefined FUN_14338bb60(void)

void FUN_14338bb60(undefined1 *param_1,uint param_2,int param_3,longlong param_4,uint param_5,
                  uint *param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  short *psVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte local_48 [32];
  
  uVar11 = 0;
  lVar3 = *(longlong *)(param_8 + 0x10);
  iVar1 = *(int *)(param_8 + 8);
  uVar2 = *(uint *)(param_8 + 4);
  puVar7 = param_6;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar12 = *puVar7;
    iVar6 = ((int)uVar12 >> 8) + iVar1;
    if (-1 < iVar6) {
      if (param_2 <= (uint)uVar11) {
        return;
      }
      puVar7 = param_6 + uVar11;
      do {
        iVar6 = ((int)*puVar7 >> 8) + iVar1;
        uVar12 = (uint)uVar11;
        if (param_5 < iVar6 + uVar2) {
          if (param_2 <= uVar12) {
            return;
          }
          uVar10 = (ulonglong)(param_2 - uVar12);
          param_6 = param_6 + uVar11;
          do {
            uVar12 = *param_6;
            iVar6 = ((int)uVar12 >> 8) + iVar1;
            pbVar9 = local_48;
            uVar11 = (ulonglong)uVar2;
            if (uVar2 != 0) {
              do {
                iVar5 = param_5 - 1;
                if (iVar6 < (int)param_5) {
                  iVar5 = iVar6;
                }
                iVar6 = iVar6 + 1;
                *pbVar9 = *(undefined1 *)(iVar5 + param_4);
                uVar11 = uVar11 - 1;
                pbVar9 = pbVar9 + 1;
              } while (uVar11 != 0);
            }
            pbVar9 = local_48;
            psVar8 = (short *)(lVar3 + (longlong)(int)(0xff - (uVar12 & 0xff)) * 2);
            iVar6 = (int)*psVar8 * (uint)local_48[0] + 0x2000;
            uVar12 = uVar2;
            while( true ) {
              pbVar9 = pbVar9 + 1;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) break;
              psVar8 = psVar8 + 0x100;
              iVar6 = iVar6 + (uint)*pbVar9 * (int)*psVar8;
            }
            iVar6 = iVar6 >> 0xe;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0xff < iVar6) {
              iVar6 = 0xff;
            }
            param_6 = param_6 + 1;
            *param_1 = (char)iVar6;
            param_1 = param_1 + param_3;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return;
        }
        pbVar9 = (byte *)(iVar6 + param_4);
        psVar8 = (short *)((longlong)(int)(0xff - (*puVar7 & 0xff)) * 2 + lVar3);
        iVar6 = (uint)*pbVar9 * (int)*psVar8 + 0x2000;
        uVar4 = uVar2;
        while (uVar4 = uVar4 - 1, uVar4 != 0) {
          pbVar9 = pbVar9 + 1;
          psVar8 = psVar8 + 0x100;
          iVar6 = iVar6 + (int)*psVar8 * (uint)*pbVar9;
        }
        iVar6 = iVar6 >> 0xe;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        uVar11 = (ulonglong)(uVar12 + 1);
        *param_1 = (char)iVar6;
        puVar7 = puVar7 + 1;
        param_1 = param_1 + param_3;
      } while (uVar12 + 1 < param_2);
      return;
    }
    pbVar9 = local_48;
    uVar10 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      do {
        iVar5 = 0;
        if (-1 < iVar6) {
          iVar5 = iVar6;
        }
        iVar6 = iVar6 + 1;
        *pbVar9 = *(undefined1 *)(iVar5 + param_4);
        uVar10 = uVar10 - 1;
        pbVar9 = pbVar9 + 1;
      } while (uVar10 != 0);
    }
    pbVar9 = local_48;
    psVar8 = (short *)((longlong)(int)(0xff - (uVar12 & 0xff)) * 2 + lVar3);
    iVar6 = (int)*psVar8 * (uint)local_48[0] + 0x2000;
    uVar12 = uVar2;
    while( true ) {
      pbVar9 = pbVar9 + 1;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) break;
      psVar8 = psVar8 + 0x100;
      iVar6 = iVar6 + (int)*psVar8 * (uint)*pbVar9;
    }
    iVar6 = iVar6 >> 0xe;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    uVar12 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar12;
    *param_1 = (char)iVar6;
    param_1 = param_1 + param_3;
    puVar7 = puVar7 + 1;
  } while (uVar12 < param_2);
  return;
}



// FUNCTION 14338be60 FUN_14338be60 body=627 status=ok
// SIG undefined FUN_14338be60(void)

void FUN_14338be60(longlong param_1,uint param_2,uint param_3,longlong param_4,uint param_5,
                  uint *param_6,undefined8 param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 local_60 [56];
  
  uVar7 = 0;
  uVar3 = *(undefined8 *)(param_8 + 0x10);
  uVar1 = *(uint *)(param_8 + 4);
  iVar2 = *(int *)(param_8 + 8);
  puVar12 = param_6;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar6 = *puVar12;
    iVar8 = ((int)uVar6 >> 8) + iVar2;
    if (-1 < iVar8) {
      if (param_2 <= (uint)uVar7) {
        return;
      }
      uVar9 = (ulonglong)param_3;
      puVar12 = param_6 + uVar7;
      do {
        iVar8 = ((int)*puVar12 >> 8) + iVar2;
        uVar6 = (uint)uVar7;
        if (param_5 < iVar8 + uVar1) {
          if (param_2 <= uVar6) {
            return;
          }
          uVar10 = (ulonglong)(param_2 - uVar6);
          param_6 = param_6 + uVar7;
          do {
            uVar6 = *param_6;
            iVar8 = ((int)uVar6 >> 8) + iVar2;
            if (uVar1 != 0) {
              uVar7 = 0;
              uVar11 = (ulonglong)uVar1;
              do {
                iVar4 = param_5 - 1;
                if (iVar8 < (int)param_5) {
                  iVar4 = iVar8;
                }
                iVar8 = iVar8 + 1;
                lVar5 = (longlong)(iVar4 * 3);
                local_60[uVar7] = *(undefined1 *)(lVar5 + param_4);
                local_60[uVar7 + 1] = *(undefined1 *)(lVar5 + 1 + param_4);
                local_60[uVar7 + 2] = *(undefined1 *)(lVar5 + 2 + param_4);
                uVar11 = uVar11 - 1;
                uVar7 = (ulonglong)((int)uVar7 + 3);
              } while (uVar11 != 0);
            }
            FUN_14338d300(param_1,local_60,uVar3,0xff - (uVar6 & 0xff),uVar1);
            param_1 = param_1 + (int)uVar9;
            param_6 = param_6 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return;
        }
        FUN_14338d300(param_1,iVar8 * 3 + param_4,uVar3,0xff - (*puVar12 & 0xff),uVar1);
        uVar9 = (ulonglong)(int)param_3;
        uVar7 = (ulonglong)(uVar6 + 1);
        param_1 = param_1 + uVar9;
        puVar12 = puVar12 + 1;
      } while (uVar6 + 1 < param_2);
      return;
    }
    if (uVar1 != 0) {
      uVar9 = 0;
      uVar10 = (ulonglong)uVar1;
      do {
        iVar4 = 0;
        if (-1 < iVar8) {
          iVar4 = iVar8;
        }
        iVar8 = iVar8 + 1;
        lVar5 = (longlong)(iVar4 * 3);
        local_60[uVar9] = *(undefined1 *)(lVar5 + param_4);
        local_60[uVar9 + 1] = *(undefined1 *)(lVar5 + 1 + param_4);
        local_60[uVar9 + 2] = *(undefined1 *)(lVar5 + 2 + param_4);
        uVar10 = uVar10 - 1;
        uVar9 = (ulonglong)((int)uVar9 + 3);
      } while (uVar10 != 0);
    }
    FUN_14338d300(param_1,local_60,uVar3,0xff - (uVar6 & 0xff),uVar1);
    param_1 = param_1 + (int)param_3;
    uVar6 = (uint)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    puVar12 = puVar12 + 1;
  } while (uVar6 < param_2);
  return;
}



// FUNCTION 14338c0e0 FUN_14338c0e0 body=631 status=ok
// SIG undefined FUN_14338c0e0(void)

void FUN_14338c0e0(longlong param_1,uint param_2,uint param_3,longlong param_4,uint param_5,
                  uint *param_6,undefined8 param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 local_60 [56];
  
  uVar7 = 0;
  uVar3 = *(undefined8 *)(param_8 + 0x10);
  uVar1 = *(uint *)(param_8 + 4);
  iVar2 = *(int *)(param_8 + 8);
  puVar12 = param_6;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar6 = *puVar12;
    iVar8 = ((int)uVar6 >> 8) + iVar2;
    if (-1 < iVar8) {
      if (param_2 <= (uint)uVar7) {
        return;
      }
      uVar9 = (ulonglong)param_3;
      puVar12 = param_6 + uVar7;
      do {
        iVar8 = ((int)*puVar12 >> 8) + iVar2;
        uVar6 = (uint)uVar7;
        if (param_5 < iVar8 + uVar1) {
          if (param_2 <= uVar6) {
            return;
          }
          uVar10 = (ulonglong)(param_2 - uVar6);
          param_6 = param_6 + uVar7;
          do {
            uVar6 = *param_6;
            iVar8 = ((int)uVar6 >> 8) + iVar2;
            if (uVar1 != 0) {
              uVar7 = 0;
              uVar11 = (ulonglong)uVar1;
              do {
                iVar4 = param_5 - 1;
                if (iVar8 < (int)param_5) {
                  iVar4 = iVar8;
                }
                iVar8 = iVar8 + 1;
                lVar5 = (longlong)(iVar4 * 3);
                local_60[uVar7] = *(undefined1 *)(lVar5 + param_4);
                local_60[uVar7 + 1] = *(undefined1 *)(lVar5 + 1 + param_4);
                local_60[uVar7 + 2] = *(undefined1 *)(lVar5 + 2 + param_4);
                uVar11 = uVar11 - 1;
                uVar7 = (ulonglong)((int)uVar7 + 3);
              } while (uVar11 != 0);
            }
            FUN_14338d300(param_1,local_60,uVar3,0xff - (uVar6 & 0xff),uVar1);
            param_6 = param_6 + 1;
            *(undefined1 *)(param_1 + 3) = 0xff;
            param_1 = param_1 + (int)uVar9;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return;
        }
        FUN_14338d300(param_1,iVar8 * 3 + param_4,uVar3,0xff - (*puVar12 & 0xff),uVar1);
        uVar9 = (ulonglong)(int)param_3;
        uVar7 = (ulonglong)(uVar6 + 1);
        puVar12 = puVar12 + 1;
        *(undefined1 *)(param_1 + 3) = 0xff;
        param_1 = param_1 + uVar9;
      } while (uVar6 + 1 < param_2);
      return;
    }
    if (uVar1 != 0) {
      uVar9 = 0;
      uVar10 = (ulonglong)uVar1;
      do {
        iVar4 = 0;
        if (-1 < iVar8) {
          iVar4 = iVar8;
        }
        iVar8 = iVar8 + 1;
        lVar5 = (longlong)(iVar4 * 3);
        local_60[uVar9] = *(undefined1 *)(lVar5 + param_4);
        local_60[uVar9 + 1] = *(undefined1 *)(lVar5 + 1 + param_4);
        local_60[uVar9 + 2] = *(undefined1 *)(lVar5 + 2 + param_4);
        uVar10 = uVar10 - 1;
        uVar9 = (ulonglong)((int)uVar9 + 3);
      } while (uVar10 != 0);
    }
    FUN_14338d300(param_1,local_60,uVar3,0xff - (uVar6 & 0xff),uVar1);
    uVar6 = (uint)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    *(undefined1 *)(param_1 + 3) = 0xff;
    param_1 = param_1 + (int)param_3;
    puVar12 = puVar12 + 1;
  } while (uVar6 < param_2);
  return;
}



// FUNCTION 14338c360 FUN_14338c360 body=638 status=ok
// SIG undefined FUN_14338c360(void)

void FUN_14338c360(longlong param_1,uint param_2,uint param_3,longlong param_4,uint param_5,
                  uint *param_6,undefined8 param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 local_78 [80];
  
  uVar7 = 0;
  uVar3 = *(undefined8 *)(param_8 + 0x10);
  uVar1 = *(uint *)(param_8 + 4);
  iVar2 = *(int *)(param_8 + 8);
  puVar12 = param_6;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar6 = *puVar12;
    iVar8 = ((int)uVar6 >> 8) + iVar2;
    if (-1 < iVar8) {
      if (param_2 <= (uint)uVar7) {
        return;
      }
      uVar9 = (ulonglong)param_3;
      puVar12 = param_6 + uVar7;
      do {
        iVar8 = ((int)*puVar12 >> 8) + iVar2;
        uVar6 = (uint)uVar7;
        if (param_5 < iVar8 + uVar1) {
          if (param_2 <= uVar6) {
            return;
          }
          uVar10 = (ulonglong)(param_2 - uVar6);
          param_6 = param_6 + uVar7;
          do {
            uVar6 = *param_6;
            iVar8 = ((int)uVar6 >> 8) + iVar2;
            if (uVar1 != 0) {
              uVar7 = 0;
              uVar11 = (ulonglong)uVar1;
              do {
                iVar4 = param_5 - 1;
                if (iVar8 < (int)param_5) {
                  iVar4 = iVar8;
                }
                iVar8 = iVar8 + 1;
                puVar5 = (undefined1 *)((iVar4 << 2) + param_4);
                local_78[uVar7] = *puVar5;
                local_78[uVar7 + 1] = puVar5[1];
                local_78[uVar7 + 2] = puVar5[2];
                local_78[uVar7 + 3] = puVar5[3];
                uVar11 = uVar11 - 1;
                uVar7 = (ulonglong)((int)uVar7 + 4);
              } while (uVar11 != 0);
            }
            FUN_14338d400(param_1,local_78,uVar3,0xff - (uVar6 & 0xff),uVar1);
            param_1 = param_1 + (int)uVar9;
            param_6 = param_6 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return;
        }
        FUN_14338d400(param_1,iVar8 * 4 + param_4,uVar3,0xff - (*puVar12 & 0xff),uVar1);
        uVar9 = (ulonglong)(int)param_3;
        uVar7 = (ulonglong)(uVar6 + 1);
        param_1 = param_1 + uVar9;
        puVar12 = puVar12 + 1;
      } while (uVar6 + 1 < param_2);
      return;
    }
    if (uVar1 != 0) {
      uVar9 = 0;
      uVar10 = (ulonglong)uVar1;
      do {
        iVar4 = 0;
        if (-1 < iVar8) {
          iVar4 = iVar8;
        }
        iVar8 = iVar8 + 1;
        puVar5 = (undefined1 *)((iVar4 << 2) + param_4);
        local_78[uVar9] = *puVar5;
        local_78[uVar9 + 1] = puVar5[1];
        local_78[uVar9 + 2] = puVar5[2];
        local_78[uVar9 + 3] = puVar5[3];
        uVar10 = uVar10 - 1;
        uVar9 = (ulonglong)((int)uVar9 + 4);
      } while (uVar10 != 0);
    }
    FUN_14338d400(param_1,local_78,uVar3,0xff - (uVar6 & 0xff),uVar1);
    param_1 = param_1 + (int)param_3;
    uVar6 = (uint)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    puVar12 = puVar12 + 1;
  } while (uVar6 < param_2);
  return;
}



// FUNCTION 14338c5e0 FUN_14338c5e0 body=826 status=ok
// SIG undefined FUN_14338c5e0(void)

void FUN_14338c5e0(longlong param_1,uint param_2,int param_3,undefined4 param_4,longlong param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res10 [2];
  int local_res18;
  undefined4 local_res20;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  
  uVar2 = param_7;
  lVar11 = (longlong)(int)param_7;
  lVar6 = 0;
  uVar8 = (ulonglong)param_2;
  local_60 = 0;
  local_68 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 * param_7 != 0) {
    local_78 = 2;
    local_68 = (**(code **)(*DAT_146b62f28 + 0x50))
                         (DAT_146b62f28,(longlong)(int)(param_2 * param_7),&local_78);
  }
  local_res10[0] = (param_6 << 8) / (int)param_2;
  iVar5 = (param_6 << 8) % (int)param_2;
  local_70 = (param_6 << 7) / (int)param_2;
  if (iVar5 < 1) {
    iVar5 = iVar5 + param_2;
    local_res10[0] = local_res10[0] + -1;
  }
  iVar7 = iVar5 - param_2;
  uVar9 = (ulonglong)(int)param_2;
  lVar3 = lVar6;
  local_58 = local_68;
  if (param_2 != 0) {
    local_74 = 2;
    local_60 = uVar9;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar9 * 4,&local_74);
  }
  if (0 < (int)param_2) {
    iVar4 = local_70 + -0x80;
    do {
      *(int *)(lVar3 + lVar6 * 4) = iVar4;
      iVar7 = iVar7 + iVar5;
      iVar4 = iVar4 + local_res10[0];
      if (0 < iVar7) {
        iVar7 = iVar7 - param_2;
        iVar4 = iVar4 + 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (longlong)uVar9);
  }
  if (0 < (int)param_7) {
    uVar9 = (ulonglong)param_7;
    lVar6 = local_58;
    do {
      FUN_14338bb60(lVar6,param_2,param_7,param_5,param_6,lVar3,param_9,param_11);
      param_5 = param_5 + param_8;
      lVar6 = lVar6 + 1;
      uVar9 = uVar9 - 1;
      param_3 = local_res18;
    } while (uVar9 != 0);
  }
  lVar6 = local_68;
  lVar10 = 0;
  iVar5 = (int)(param_7 << 8) / param_3;
  iVar7 = (int)(param_7 << 8) % param_3;
  local_70 = (int)(param_7 << 7) / param_3;
  param_7 = iVar5;
  if (iVar7 < 1) {
    iVar7 = iVar7 + param_3;
    param_7 = iVar5 + -1;
  }
  iVar5 = iVar7 - param_3;
  uVar9 = (ulonglong)param_3;
  if (local_60 < uVar9) {
    if (lVar3 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
    }
    lVar3 = lVar10;
    if (uVar9 != 0) {
      local_res10[0] = 2;
      lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar9 * 4,local_res10);
    }
  }
  uVar1 = local_res20;
  if (0 < (longlong)uVar9) {
    iVar4 = local_70 + -0x80;
    do {
      *(int *)(lVar3 + lVar10 * 4) = iVar4;
      iVar5 = iVar5 + iVar7;
      iVar4 = iVar4 + param_7;
      if (0 < iVar5) {
        iVar5 = iVar5 - local_res18;
        iVar4 = iVar4 + 1;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (longlong)uVar9);
  }
  if (0 < (int)param_2) {
    do {
      FUN_14338bb60(param_1,local_res18,uVar1,lVar6,uVar2,lVar3,param_10,param_11);
      lVar6 = lVar6 + lVar11;
      param_1 = param_1 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (local_68 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (lVar3 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
  }
  return;
}



// FUNCTION 14338c920 FUN_14338c920 body=832 status=ok
// SIG undefined FUN_14338c920(void)

void FUN_14338c920(longlong param_1,uint param_2,int param_3,undefined4 param_4,longlong param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_res10 [2];
  int local_res18;
  undefined4 local_res20;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  
  uVar8 = (ulonglong)param_7;
  lVar4 = 0;
  uVar6 = (ulonglong)param_2;
  local_60 = 0;
  local_68 = 0;
  iVar5 = param_2 * param_7 * 3;
  local_res18 = param_3;
  local_res20 = param_4;
  if (iVar5 != 0) {
    local_74 = 2;
    local_68 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)iVar5,&local_74);
  }
  local_78 = (param_6 << 8) / (int)param_2;
  local_res10[0] = (param_6 << 8) % (int)param_2;
  local_6c = (param_6 << 7) / (int)param_2;
  if (local_res10[0] < 1) {
    local_res10[0] = local_res10[0] + param_2;
    local_78 = local_78 + -1;
  }
  iVar5 = local_res10[0] - param_2;
  uVar7 = (ulonglong)(int)param_2;
  lVar2 = lVar4;
  local_58 = local_68;
  if (param_2 != 0) {
    local_70 = 2;
    local_60 = uVar7;
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar7 * 4,&local_70);
  }
  if (0 < (int)param_2) {
    iVar3 = local_6c + -0x80;
    do {
      *(int *)(lVar2 + lVar4 * 4) = iVar3;
      iVar5 = iVar5 + local_res10[0];
      iVar3 = iVar3 + local_78;
      if (0 < iVar5) {
        iVar5 = iVar5 - param_2;
        iVar3 = iVar3 + 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (longlong)uVar7);
  }
  if (0 < (int)param_7) {
    lVar4 = local_58;
    do {
      FUN_14338be60(lVar4,param_2,param_7 * 3,param_5,param_6,lVar2,param_9,param_11);
      param_5 = param_5 + param_8;
      lVar4 = lVar4 + 3;
      uVar8 = uVar8 - 1;
      param_3 = local_res18;
    } while (uVar8 != 0);
  }
  lVar4 = local_68;
  lVar9 = 0;
  local_res18 = (int)(param_7 << 8) / param_3;
  iVar5 = (int)(param_7 << 8) % param_3;
  local_6c = (int)(param_7 << 7) / param_3;
  if (iVar5 < 1) {
    iVar5 = iVar5 + param_3;
    local_res18 = local_res18 + -1;
  }
  iVar3 = iVar5 - param_3;
  uVar8 = (ulonglong)param_3;
  if (local_60 < uVar8) {
    if (lVar2 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
    lVar2 = lVar9;
    if (param_3 != 0) {
      local_res10[0] = 2;
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar8 * 4,local_res10);
    }
  }
  if (0 < param_3) {
    iVar1 = local_6c + -0x80;
    do {
      *(int *)(lVar2 + lVar9 * 4) = iVar1;
      iVar3 = iVar3 + iVar5;
      iVar1 = iVar1 + local_res18;
      if (0 < iVar3) {
        iVar3 = iVar3 - param_3;
        iVar1 = iVar1 + 1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)uVar8);
  }
  if (0 < (int)param_2) {
    do {
      FUN_14338be60(param_1,param_3,local_res20,lVar4,param_7,lVar2,param_10,param_11);
      lVar4 = lVar4 + (int)(param_7 * 3);
      param_1 = param_1 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (local_68 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (lVar2 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  return;
}



// FUNCTION 14338cc60 FUN_14338cc60 body=832 status=ok
// SIG undefined FUN_14338cc60(void)

void FUN_14338cc60(longlong param_1,uint param_2,int param_3,undefined4 param_4,longlong param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_res10 [2];
  int local_res18;
  undefined4 local_res20;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  
  uVar8 = (ulonglong)param_7;
  lVar4 = 0;
  uVar6 = (ulonglong)param_2;
  local_60 = 0;
  local_68 = 0;
  iVar5 = param_2 * param_7 * 3;
  local_res18 = param_3;
  local_res20 = param_4;
  if (iVar5 != 0) {
    local_74 = 2;
    local_68 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)iVar5,&local_74);
  }
  local_78 = (param_6 << 8) / (int)param_2;
  local_res10[0] = (param_6 << 8) % (int)param_2;
  local_6c = (param_6 << 7) / (int)param_2;
  if (local_res10[0] < 1) {
    local_res10[0] = local_res10[0] + param_2;
    local_78 = local_78 + -1;
  }
  iVar5 = local_res10[0] - param_2;
  uVar7 = (ulonglong)(int)param_2;
  lVar2 = lVar4;
  local_58 = local_68;
  if (param_2 != 0) {
    local_70 = 2;
    local_60 = uVar7;
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar7 * 4,&local_70);
  }
  if (0 < (int)param_2) {
    iVar3 = local_6c + -0x80;
    do {
      *(int *)(lVar2 + lVar4 * 4) = iVar3;
      iVar5 = iVar5 + local_res10[0];
      iVar3 = iVar3 + local_78;
      if (0 < iVar5) {
        iVar5 = iVar5 - param_2;
        iVar3 = iVar3 + 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (longlong)uVar7);
  }
  if (0 < (int)param_7) {
    lVar4 = local_58;
    do {
      FUN_14338be60(lVar4,param_2,param_7 * 3,param_5,param_6,lVar2,param_9,param_11);
      param_5 = param_5 + param_8;
      lVar4 = lVar4 + 3;
      uVar8 = uVar8 - 1;
      param_3 = local_res18;
    } while (uVar8 != 0);
  }
  lVar4 = local_68;
  lVar9 = 0;
  local_res18 = (int)(param_7 << 8) / param_3;
  iVar5 = (int)(param_7 << 8) % param_3;
  local_6c = (int)(param_7 << 7) / param_3;
  if (iVar5 < 1) {
    iVar5 = iVar5 + param_3;
    local_res18 = local_res18 + -1;
  }
  iVar3 = iVar5 - param_3;
  uVar8 = (ulonglong)param_3;
  if (local_60 < uVar8) {
    if (lVar2 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
    lVar2 = lVar9;
    if (param_3 != 0) {
      local_res10[0] = 2;
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar8 * 4,local_res10);
    }
  }
  if (0 < param_3) {
    iVar1 = local_6c + -0x80;
    do {
      *(int *)(lVar2 + lVar9 * 4) = iVar1;
      iVar3 = iVar3 + iVar5;
      iVar1 = iVar1 + local_res18;
      if (0 < iVar3) {
        iVar3 = iVar3 - param_3;
        iVar1 = iVar1 + 1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)uVar8);
  }
  if (0 < (int)param_2) {
    do {
      FUN_14338c0e0(param_1,param_3,local_res20,lVar4,param_7,lVar2,param_10,param_11);
      lVar4 = lVar4 + (int)(param_7 * 3);
      param_1 = param_1 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (local_68 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (lVar2 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  return;
}



// FUNCTION 14338cfa0 FUN_14338cfa0 body=861 status=ok
// SIG undefined FUN_14338cfa0(void)

void FUN_14338cfa0(longlong param_1,uint param_2,int param_3,undefined4 param_4,longlong param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_res10 [2];
  int local_res18;
  undefined4 local_res20;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  longlong local_58;
  ulonglong local_50;
  
  lVar5 = 0;
  uVar7 = (ulonglong)param_2;
  local_50 = 0;
  local_58 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 * param_7 & 0x3fffffff) != 0) {
    local_64 = 2;
    local_58 = (**(code **)(*DAT_146b62f28 + 0x50))
                         (DAT_146b62f28,(longlong)(int)(param_2 * param_7 * 4),&local_64);
  }
  lVar9 = local_58;
  local_68 = (param_6 << 8) / (int)param_2;
  local_res10[0] = (param_6 << 8) % (int)param_2;
  local_5c = (param_6 << 7) / (int)param_2;
  if (local_res10[0] < 1) {
    local_res10[0] = local_res10[0] + param_2;
    local_68 = local_68 + -1;
  }
  iVar6 = local_res10[0] - param_2;
  uVar8 = (ulonglong)(int)param_2;
  lVar3 = lVar5;
  if (param_2 != 0) {
    local_60 = 2;
    local_50 = uVar8;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar8 * 4,&local_60);
  }
  if (0 < (int)param_2) {
    iVar4 = local_5c + -0x80;
    do {
      *(int *)(lVar3 + lVar5 * 4) = iVar4;
      iVar6 = iVar6 + local_res10[0];
      iVar4 = iVar4 + local_68;
      if (0 < iVar6) {
        iVar6 = iVar6 - param_2;
        iVar4 = iVar4 + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)uVar8);
  }
  uVar8 = (ulonglong)param_7;
  if (0 < (int)param_7) {
    do {
      FUN_14338c360(lVar9,param_2,param_7 * 4,param_5,param_6,lVar3,param_9,param_11);
      param_5 = param_5 + param_8;
      lVar9 = lVar9 + 4;
      uVar8 = uVar8 - 1;
      param_3 = local_res18;
    } while (uVar8 != 0);
  }
  lVar5 = local_58;
  lVar9 = 0;
  local_res18 = (int)(param_7 << 8) / param_3;
  iVar6 = (int)(param_7 << 8) % param_3;
  local_5c = (int)(param_7 << 7) / param_3;
  if (iVar6 < 1) {
    iVar6 = iVar6 + param_3;
    local_res18 = local_res18 + -1;
  }
  iVar4 = iVar6 - param_3;
  uVar8 = (ulonglong)param_3;
  if (local_50 < uVar8) {
    if (lVar3 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
    }
    lVar3 = lVar9;
    if (param_3 != 0) {
      local_res10[0] = 2;
      lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar8 * 4,local_res10);
    }
  }
  uVar1 = local_res20;
  if (0 < param_3) {
    iVar2 = local_5c + -0x80;
    do {
      *(int *)(lVar3 + lVar9 * 4) = iVar2;
      iVar4 = iVar4 + iVar6;
      iVar2 = iVar2 + local_res18;
      if (0 < iVar4) {
        iVar4 = iVar4 - param_3;
        iVar2 = iVar2 + 1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)uVar8);
  }
  if (0 < (int)param_2) {
    do {
      FUN_14338c360(param_1,param_3,uVar1,lVar5,param_7,lVar3,param_10,param_11);
      lVar5 = lVar5 + (int)(param_7 * 4);
      param_1 = param_1 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (local_58 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (lVar3 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
  }
  return;
}



// FUNCTION 14338d300 FUN_14338d300 body=244 status=ok
// SIG undefined FUN_14338d300(void)

uint FUN_14338d300(undefined1 *param_1,byte *param_2,longlong param_3,int param_4,int param_5)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  psVar1 = (short *)(param_3 + (longlong)param_4 * 2);
  iVar6 = (int)*(short *)(param_3 + (longlong)param_4 * 2);
  iVar4 = (uint)param_2[2] * iVar6 + 0x2000;
  iVar7 = (uint)*param_2 * iVar6 + 0x2000;
  iVar6 = (uint)param_2[1] * iVar6 + 0x2000;
  pbVar2 = param_2 + 2;
  while (param_5 = param_5 + -1, param_5 != 0) {
    psVar1 = psVar1 + 0x100;
    iVar3 = (int)*psVar1;
    iVar7 = iVar7 + (uint)pbVar2[1] * iVar3;
    iVar6 = iVar6 + (uint)pbVar2[2] * iVar3;
    iVar4 = iVar4 + (uint)pbVar2[3] * iVar3;
    pbVar2 = pbVar2 + 3;
  }
  iVar7 = iVar7 >> 0xe;
  iVar6 = iVar6 >> 0xe;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  uVar5 = iVar4 >> 0xe;
  if (iVar4 >> 0xe < 0) {
    uVar5 = 0;
  }
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  if (0xff < (int)uVar5) {
    uVar5 = 0xff;
  }
  *param_1 = (char)iVar7;
  param_1[1] = (char)iVar6;
  param_1[2] = (char)uVar5;
  return uVar5 & 0xff;
}



// FUNCTION 14338d400 FUN_14338d400 body=404 status=ok
// SIG undefined FUN_14338d400(void)

/* WARNING: Removing unreachable block (ram,0x00014338d500) */

void FUN_14338d400(undefined1 *param_1,byte *param_2,longlong param_3,int param_4,int param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uStack_c;
  
  psVar1 = (short *)(param_3 + (longlong)param_4 * 2);
  iVar3 = (int)*psVar1;
  iVar4 = (uint)*param_2 * iVar3 + 0x2000;
  iVar6 = (uint)param_2[1] * iVar3 + 0x2000;
  iVar7 = (uint)param_2[2] * iVar3 + 0x2000;
  iVar3 = (uint)param_2[3] * iVar3 + 0x2000;
  while (param_5 = param_5 + -1, param_5 != 0) {
    psVar1 = psVar1 + 0x100;
    iVar2 = (int)*psVar1;
    iVar4 = iVar4 + (uint)param_2[4] * iVar2;
    iVar6 = iVar6 + (uint)param_2[5] * iVar2;
    iVar7 = iVar7 + (uint)param_2[6] * iVar2;
    iVar3 = iVar3 + (uint)param_2[7] * iVar2;
    param_2 = param_2 + 4;
  }
  iVar5 = 0;
  iVar2 = iVar4 >> 0xe;
  if (iVar4 >> 0xe < 0) {
    iVar2 = iVar5;
  }
  iVar4 = iVar6 >> 0xe;
  if (iVar6 >> 0xe < 0) {
    iVar4 = iVar5;
  }
  iVar6 = iVar7 >> 0xe;
  if (iVar7 >> 0xe < 0) {
    iVar6 = iVar5;
  }
  iVar7 = iVar3 >> 0xe;
  if (iVar3 >> 0xe < 0) {
    iVar7 = iVar5;
  }
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  param_1[1] = (char)iVar4;
  if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  param_1[2] = (char)iVar6;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  *param_1 = (char)iVar2;
  uStack_c = (undefined1)iVar7;
  param_1[3] = uStack_c;
  return;
}



// FUNCTION 14338d5a0 FUN_14338d5a0 body=169 status=ok
// SIG undefined FUN_14338d5a0(void)

void FUN_14338d5a0(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  if (param_2 <= (ulonglong)param_1[2]) {
    param_1[1] = 0;
    return;
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  param_3 = param_2 + param_3;
  param_1[2] = param_3;
  if (param_3 != 0) {
    local_res8[0] = 2;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_3 * 2,local_res8);
    *param_1 = lVar1;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14338d690 FUN_14338d690 body=64 status=ok
// SIG undefined FUN_14338d690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14338d690(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_146b644f8;
  _DAT_146b644f0 = 0;
  lVar2 = 0x1000;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_146b644e0 = &DAT_146b644f0;
  return;
}



// FUNCTION 14338d6e0 FUN_14338d6e0 body=1028 status=ok
// SIG undefined FUN_14338d6e0(void)

undefined8 FUN_14338d6e0(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong local_res20;
  ulonglong local_88;
  ulonglong local_80;
  
  uVar17 = param_3 + -1 + param_2;
  uVar9 = param_2 >> 0x34;
  uVar7 = uVar17 >> 0x34;
  if (uVar9 <= uVar7) {
    plVar15 = param_1 + uVar9 * 2 + 1;
    uVar19 = uVar9;
    do {
      if (*plVar15 == 0) {
        pvVar6 = (void *)thunk_FUN_1433db430(*param_1,0x10000,0x8000);
        *plVar15 = (longlong)pvVar6;
        if (pvVar6 == (void *)0x0) {
          FUN_14338daf0(param_1,param_2,uVar19 - uVar9 << 0x34);
          return 0;
        }
        _guard_xfg_dispatch_icall_nop(pvVar6,0,0x10000);
      }
      plVar15[1] = plVar15[1] + 1;
      local_res20 = 0;
      local_80 = 0xfff;
      if (uVar19 == uVar9) {
        local_res20 = (ulonglong)((uint)(param_2 >> 0x28) & 0xfff);
      }
      uVar5 = local_res20;
      if (uVar19 == uVar7) {
        local_80 = (ulonglong)((uint)(uVar17 >> 0x28) & 0xfff);
      }
      if (local_res20 <= local_80) {
        lVar8 = local_res20 << 4;
        do {
          plVar1 = (longlong *)(lVar8 + *plVar15);
          if (*(longlong *)(lVar8 + *plVar15) == 0) {
            pvVar6 = (void *)thunk_FUN_1433db430(*param_1,0x10000,0x8000);
            *plVar1 = (longlong)pvVar6;
            if (pvVar6 == (void *)0x0) {
              FUN_14338daf0(param_1,param_2,
                            ((uVar19 - uVar9) * 0x1000 - uVar5) + local_res20 << 0x28);
              return 0;
            }
            _guard_xfg_dispatch_icall_nop(pvVar6,0,0x10000);
          }
          plVar1[1] = plVar1[1] + 1;
          uVar10 = 0;
          local_88 = 0xfff;
          if (local_res20 == uVar5) {
            uVar10 = (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff);
          }
          if (local_res20 == local_80) {
            local_88 = (ulonglong)((uint)(uVar17 >> 0x1c) & 0xfff);
          }
          if (uVar10 <= local_88) {
            lVar16 = uVar10 << 4;
            uVar11 = uVar10;
            do {
              plVar2 = (longlong *)(*plVar1 + lVar16);
              if (*(longlong *)(*plVar1 + lVar16) == 0) {
                pvVar6 = (void *)thunk_FUN_1433db430(*param_1,0x1000,0x800);
                *plVar2 = (longlong)pvVar6;
                if (pvVar6 == (void *)0x0) {
                  FUN_14338daf0(param_1,param_2,
                                (((((uVar19 - uVar9) * 0x1000 - uVar5) + local_res20) * 0x1000 -
                                 uVar10) + uVar11) * 0x10000000);
                  return 0;
                }
                _guard_xfg_dispatch_icall_nop(pvVar6,0,0x1000);
              }
              plVar2[1] = plVar2[1] + 1;
              uVar13 = 0;
              uVar18 = 0xff;
              if (uVar11 == uVar10) {
                uVar13 = param_2 >> 0x14 & 0xff;
              }
              if (uVar11 == local_88) {
                uVar18 = uVar17 >> 0x14 & 0xff;
              }
              if (uVar13 <= uVar18) {
                lVar12 = uVar13 << 4;
                uVar14 = uVar13;
                do {
                  lVar4 = *plVar2;
                  if (*(longlong *)(lVar12 + lVar4) == 0) {
                    pvVar6 = (void *)thunk_FUN_1433db430(*param_1,0x800,0x800);
                    *(void **)(lVar12 + lVar4) = pvVar6;
                    if (pvVar6 == (void *)0x0) {
                      FUN_14338daf0(param_1,param_2,
                                    (((((((uVar19 - uVar9) * 0x1000 - uVar5) + local_res20) * 0x1000
                                       - uVar10) + uVar11) * 0x100 - uVar13) + uVar14) * 0x100000);
                      return 0;
                    }
                    _guard_xfg_dispatch_icall_nop(pvVar6,0,0x800);
                  }
                  plVar3 = (longlong *)(lVar12 + 8 + lVar4);
                  *plVar3 = *plVar3 + 1;
                  uVar14 = uVar14 + 1;
                  lVar12 = lVar12 + 0x10;
                } while (uVar14 <= uVar18);
              }
              uVar11 = uVar11 + 1;
              lVar16 = lVar16 + 0x10;
            } while (uVar11 <= local_88);
          }
          local_res20 = local_res20 + 1;
          lVar8 = lVar8 + 0x10;
        } while (local_res20 <= local_80);
      }
      uVar19 = uVar19 + 1;
      plVar15 = plVar15 + 2;
    } while (uVar19 <= uVar7);
  }
  return 1;
}



// FUNCTION 14338daf0 FUN_14338daf0 body=749 status=ok
// SIG undefined FUN_14338daf0(void)

void FUN_14338daf0(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong local_res18;
  ulonglong local_88;
  
  uVar15 = param_3 + -1 + param_2;
  uVar5 = param_2 >> 0x34;
  uVar7 = uVar15 >> 0x34;
  if (uVar5 <= uVar7) {
    plVar17 = param_1 + uVar5 * 2 + 1;
    uVar14 = uVar5;
    do {
      local_res18 = 0;
      local_88 = 0xfff;
      if (uVar14 == uVar5) {
        local_res18 = (ulonglong)((uint)(param_2 >> 0x28) & 0xfff);
      }
      uVar4 = local_res18;
      if (uVar14 == uVar7) {
        local_88 = (ulonglong)((uint)(uVar15 >> 0x28) & 0xfff);
      }
      if (local_res18 <= local_88) {
        lVar19 = local_res18 << 4;
        do {
          uVar8 = 0;
          plVar12 = (longlong *)(*plVar17 + lVar19);
          uVar16 = 0xfff;
          if (local_res18 == uVar4) {
            uVar8 = (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff);
          }
          if (local_res18 == local_88) {
            uVar16 = (ulonglong)((uint)(uVar15 >> 0x1c) & 0xfff);
          }
          if (uVar8 <= uVar16) {
            lVar18 = uVar8 << 4;
            uVar9 = uVar8;
            do {
              uVar6 = 0;
              plVar20 = (longlong *)(*plVar12 + lVar18);
              uVar10 = 0xff;
              if (uVar9 == uVar8) {
                uVar6 = param_2 >> 0x14 & 0xff;
              }
              if (uVar9 == uVar16) {
                uVar10 = uVar15 >> 0x14 & 0xff;
              }
              if (uVar6 <= uVar10) {
                lVar13 = uVar6 << 4;
                lVar11 = (uVar10 - uVar6) + 1;
                do {
                  lVar2 = *plVar20;
                  uVar3 = *param_1;
                  plVar1 = (longlong *)(lVar13 + 8 + lVar2);
                  *plVar1 = *plVar1 + -1;
                  if (*plVar1 == 0) {
                    thunk_FUN_1433db760(uVar3,*(undefined8 *)(lVar13 + lVar2),0x800);
                    *(undefined8 *)(lVar13 + lVar2) = 0;
                  }
                  lVar13 = lVar13 + 0x10;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              uVar3 = *param_1;
              plVar1 = plVar20 + 1;
              *plVar1 = *plVar1 + -1;
              if (*plVar1 == 0) {
                thunk_FUN_1433db760(uVar3,*plVar20,0x1000,0x800);
                *plVar20 = 0;
              }
              uVar9 = uVar9 + 1;
              lVar18 = lVar18 + 0x10;
            } while (uVar9 <= uVar16);
          }
          uVar3 = *param_1;
          plVar20 = plVar12 + 1;
          *plVar20 = *plVar20 + -1;
          if (*plVar20 == 0) {
            thunk_FUN_1433db760(uVar3,*plVar12,0x10000,0x8000);
            *plVar12 = 0;
          }
          local_res18 = local_res18 + 1;
          lVar19 = lVar19 + 0x10;
        } while (local_res18 <= local_88);
      }
      uVar3 = *param_1;
      plVar12 = plVar17 + 1;
      *plVar12 = *plVar12 + -1;
      if (*plVar12 == 0) {
        thunk_FUN_1433db760(uVar3,*plVar17,0x10000,0x8000);
        *plVar17 = 0;
      }
      uVar14 = uVar14 + 1;
      plVar17 = plVar17 + 2;
    } while (uVar14 <= uVar7);
  }
  return;
}



// FUNCTION 14338ddf0 FUN_14338ddf0 body=238 status=ok
// SIG undefined FUN_14338ddf0(void)

bool FUN_14338ddf0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_3 != param_4) {
    uVar1 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 8 + (param_2 >> 0x34) * 0x10) +
                   (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
                 (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
               (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8);
    FUN_14338daf0(param_1,param_2,param_4);
    cVar2 = FUN_14338d6e0(param_1,param_2,param_3);
    if (cVar2 == '\0') {
      FUN_14338d6e0(param_1,param_2,param_4);
      param_3 = param_4;
    }
    FUN_14338def0(param_1,param_2,param_3,uVar1);
    return cVar2 != '\0';
  }
  return true;
}



// FUNCTION 14338def0 FUN_14338def0 body=681 status=ok
// SIG undefined FUN_14338def0(void)

void FUN_14338def0(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong local_res18;
  
  uVar5 = param_3 + -1 + param_2;
  uVar14 = param_2 >> 0x34;
  uVar12 = uVar5 >> 0x34;
  if (uVar14 <= uVar12) {
    plVar8 = (longlong *)(param_1 + 8 + uVar14 * 0x10);
    uVar10 = uVar14;
    do {
      uVar19 = 0xfff;
      local_res18 = 0;
      if (uVar10 == uVar14) {
        local_res18 = (ulonglong)((uint)(param_2 >> 0x28) & 0xfff);
      }
      if (uVar10 == uVar12) {
        uVar19 = (ulonglong)((uint)(uVar5 >> 0x28) & 0xfff);
      }
      if (local_res18 <= uVar19) {
        lVar16 = local_res18 << 4;
        uVar11 = local_res18;
        do {
          lVar1 = *plVar8;
          uVar18 = 0;
          uVar21 = 0xfff;
          if ((uVar11 == local_res18) && (uVar10 == uVar14)) {
            uVar18 = (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff);
          }
          if ((uVar11 == uVar19) && (uVar10 == uVar12)) {
            uVar21 = (ulonglong)((uint)(uVar5 >> 0x1c) & 0xfff);
          }
          if (uVar18 <= uVar21) {
            lVar6 = uVar18 << 4;
            uVar17 = uVar18;
            do {
              lVar2 = *(longlong *)(lVar1 + lVar16);
              uVar20 = 0;
              uVar9 = 0xff;
              if (((uVar17 == uVar18) && (uVar11 == local_res18)) && (uVar10 == uVar14)) {
                uVar20 = param_2 >> 0x14 & 0xff;
              }
              if (((uVar17 == uVar21) && (uVar11 == uVar19)) && (uVar10 == uVar12)) {
                uVar9 = uVar5 >> 0x14 & 0xff;
              }
              if (uVar20 <= uVar9) {
                lVar15 = uVar20 << 4;
                uVar13 = uVar20;
                do {
                  uVar7 = 0xff;
                  lVar3 = *(longlong *)(lVar2 + lVar6);
                  uVar4 = 0;
                  if (((uVar13 == uVar20) && (uVar17 == uVar18)) &&
                     ((uVar11 == local_res18 && (uVar4 = 0, uVar10 == uVar14)))) {
                    uVar4 = param_2 >> 0xc & 0xff;
                  }
                  if ((((uVar13 == uVar9) && (uVar17 == uVar21)) && (uVar11 == uVar19)) &&
                     (uVar10 == uVar12)) {
                    uVar7 = uVar5 >> 0xc & 0xff;
                  }
                  for (; uVar4 <= uVar7; uVar4 = uVar4 + 1) {
                    *(undefined8 *)(*(longlong *)(lVar3 + lVar15) + uVar4 * 8) = param_4;
                  }
                  uVar13 = uVar13 + 1;
                  lVar15 = lVar15 + 0x10;
                } while (uVar13 <= uVar9);
              }
              lVar6 = lVar6 + 0x10;
              uVar17 = uVar17 + 1;
            } while (uVar17 <= uVar21);
          }
          uVar11 = uVar11 + 1;
          lVar16 = lVar16 + 0x10;
        } while (uVar11 <= uVar19);
      }
      plVar8 = plVar8 + 2;
      uVar10 = uVar10 + 1;
    } while (uVar10 <= uVar12);
  }
  return;
}



// FUNCTION 14338e1a0 FUN_14338e1a0 body=42 status=ok
// SIG undefined FUN_14338e1a0(void)

undefined8 * FUN_14338e1a0(undefined8 *param_1)

{
  *param_1 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x200);
  return param_1;
}



// FUNCTION 14338e1f0 FUN_14338e1f0 body=237 status=ok
// SIG undefined FUN_14338e1f0(void)

longlong *
FUN_14338e1f0(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  
  uVar3 = *param_1 >> ((byte)param_2 & 0x3f);
  if (uVar3 == 0) {
    return (longlong *)0x0;
  }
  bVar2 = Scaleform::Alg::LowerBit(uVar3);
  uVar3 = (ulonglong)bVar2 + param_2;
  puVar5 = param_1 + uVar3 + 1;
  do {
    plVar4 = (longlong *)FUN_14338e2f0(param_1,*puVar5,param_3,param_4,param_5);
    if (plVar4 != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[uVar3 + 1];
      if (plVar4 == plVar1) {
        if (plVar1 == (longlong *)plVar1[1]) {
          param_1[uVar3 + 1] = 0;
          *param_1 = *param_1 & ~(1L << (uVar3 & 0x3f));
          return plVar4;
        }
        param_1[uVar3 + 1] = (ulonglong)plVar1[1];
      }
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      *(longlong *)plVar4[1] = *plVar4;
      return plVar4;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar3 < 0x40);
  return (longlong *)0x0;
}



// FUNCTION 14338e2f0 FUN_14338e2f0 body=160 status=ok
// SIG undefined FUN_14338e2f0(void)

longlong FUN_14338e2f0(undefined8 param_1,longlong param_2,longlong param_3,byte param_4,
                      ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = param_2;
    do {
      uVar2 = lVar3 + param_5 & ~param_5;
      for (uVar1 = uVar2 - lVar3; (uVar1 != 0 && (uVar1 < 0x20)); uVar1 = uVar1 + param_5 + 1) {
        uVar2 = uVar2 + param_5 + 1;
      }
      uVar1 = (ulonglong)*(uint *)(lVar3 + 0x18);
      if (0x40 < uVar1) {
        uVar1 = *(ulonglong *)(lVar3 + 0x20);
      }
      if (uVar2 + (param_3 << (param_4 & 0x3f)) <= (uVar1 << (param_4 & 0x3f)) + lVar3) {
        return lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + 8);
    } while (lVar3 != param_2);
  }
  return 0;
}



// FUNCTION 14338e3a0 GetAlignedPtr body=43 status=ok
// SIG undefined GetAlignedPtr(void)

ulonglong Scaleform::HeapPT::ListBin::GetAlignedPtr(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 + param_2 & ~param_2;
  for (uVar1 = uVar2 - param_1; (uVar1 != 0 && (uVar1 < 0x20)); uVar1 = uVar1 + param_2 + 1) {
    uVar2 = uVar2 + param_2 + 1;
  }
  return uVar2;
}



// FUNCTION 14338e3e0 FUN_14338e3e0 body=95 status=ok
// SIG undefined FUN_14338e3e0(void)

undefined8 FUN_14338e3e0(longlong param_1,longlong param_2,byte param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 + param_4 & ~param_4;
  for (uVar1 = uVar2 - param_1; (uVar1 != 0 && (uVar1 < 0x20)); uVar1 = uVar1 + param_4 + 1) {
    uVar2 = uVar2 + param_4 + 1;
  }
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x18);
  if (0x40 < uVar1) {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
  }
  uVar2 = uVar2 + (param_2 << (param_3 & 0x3f));
  return CONCAT71((int7)(uVar2 >> 8),uVar2 <= (uVar1 << (param_3 & 0x3f)) + param_1);
}



// FUNCTION 14338e450 FUN_14338e450 body=42 status=ok
// SIG undefined FUN_14338e450(void)

undefined8 * FUN_14338e450(undefined8 *param_1)

{
  *param_1 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x200);
  return param_1;
}



// FUNCTION 14338e4a0 FUN_14338e4a0 body=298 status=ok
// SIG undefined FUN_14338e4a0(void)

void FUN_14338e4a0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = param_2[4];
  uVar6 = 0;
  if (uVar1 >> 6 != 0) {
    bVar5 = FUN_14207c6a0();
    uVar6 = (ulonglong)((uint)(uVar1 >> (bVar5 + 5 & 0x3f)) & 1) + (ulonglong)bVar5 * 2;
  }
  param_2[8] = uVar6;
  param_2[7] = 0;
  param_2[6] = 0;
  puVar3 = param_1 + uVar6 + 1;
  uVar7 = 1L << ((byte)uVar6 & 0x3f);
  if ((uVar7 & *param_1) == 0) {
    *param_1 = *param_1 | uVar7;
    *puVar3 = (ulonglong)param_2;
    param_2[5] = (ulonglong)puVar3;
    *param_2 = (ulonglong)param_2;
    param_2[1] = (ulonglong)param_2;
    return;
  }
  if (uVar6 < 0x3f) {
    bVar5 = 0x3b - (char)(uVar6 >> 1);
  }
  else {
    bVar5 = 0;
  }
  uVar6 = *(ulonglong *)(*puVar3 + 0x20);
  uVar7 = *puVar3;
  lVar4 = uVar1 << (bVar5 & 0x3f);
  while( true ) {
    if (uVar6 == uVar1) {
      puVar3 = *(ulonglong **)(uVar7 + 8);
      *puVar3 = (ulonglong)param_2;
      *(ulonglong **)(uVar7 + 8) = param_2;
      param_2[1] = (ulonglong)puVar3;
      *param_2 = uVar7;
      param_2[5] = 0;
      return;
    }
    uVar2 = *(ulonglong *)(uVar7 + 0x30 + (lVar4 >> 0x3f) * -8);
    if (uVar2 == 0) break;
    uVar6 = *(ulonglong *)(uVar2 + 0x20);
    uVar7 = uVar2;
    lVar4 = lVar4 * 2;
  }
  *(ulonglong **)(uVar7 + (lVar4 >> 0x3f) * -8 + 0x30) = param_2;
  param_2[5] = uVar7;
  *param_2 = (ulonglong)param_2;
  param_2[1] = (ulonglong)param_2;
  return;
}



// FUNCTION 14338e5d0 FUN_14338e5d0 body=211 status=ok
// SIG undefined FUN_14338e5d0(void)

void FUN_14338e5d0(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)*param_2;
  lVar1 = param_2[5];
  if (plVar5 == param_2) {
    uVar3 = param_2[7];
    plVar2 = param_2 + 7;
    if (param_2[7] == 0) {
      plVar5 = (longlong *)param_2[6];
      uVar3 = (ulonglong)plVar5;
      plVar2 = param_2 + 6;
      if (plVar5 == (longlong *)0x0) goto LAB_14338e639;
    }
    do {
      do {
        plVar6 = plVar2;
        plVar5 = (longlong *)uVar3;
        uVar3 = *(ulonglong *)((longlong)plVar5 + 0x38);
        plVar2 = (longlong *)((longlong)plVar5 + 0x38);
      } while (*(ulonglong *)((longlong)plVar5 + 0x38) != 0);
      uVar3 = *(ulonglong *)((longlong)plVar5 + 0x30);
      plVar2 = (longlong *)((longlong)plVar5 + 0x30);
    } while (*(ulonglong *)((longlong)plVar5 + 0x30) != 0);
    *plVar6 = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    *plVar2 = (longlong)plVar5;
    plVar5[1] = (longlong)plVar2;
  }
LAB_14338e639:
  if (lVar1 != 0) {
    if (param_2 == (longlong *)param_1[param_2[8] + 1]) {
      param_1[param_2[8] + 1] = (ulonglong)plVar5;
      if (plVar5 == (longlong *)0x0) {
        *param_1 = *param_1 & ~(1L << (param_2[8] & 0x3fU));
        return;
      }
    }
    else {
      lVar4 = 0x30;
      if (*(longlong **)(lVar1 + 0x30) != param_2) {
        lVar4 = 0x38;
      }
      *(longlong **)(lVar4 + lVar1) = plVar5;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
    }
    *(longlong *)((longlong)plVar5 + 0x28) = lVar1;
    lVar1 = param_2[6];
    if (lVar1 != 0) {
      *(longlong *)((longlong)plVar5 + 0x30) = lVar1;
      *(longlong **)(lVar1 + 0x28) = plVar5;
    }
    lVar1 = param_2[7];
    if (lVar1 != 0) {
      *(longlong *)((longlong)plVar5 + 0x38) = lVar1;
      *(longlong **)(lVar1 + 0x28) = plVar5;
    }
  }
  return;
}



// FUNCTION 14338e6b0 FUN_14338e6b0 body=327 status=ok
// SIG undefined FUN_14338e6b0(void)

ulonglong FUN_14338e6b0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  uVar7 = -param_2;
  uVar5 = uVar6;
  if (param_2 >> 6 != 0) {
    bVar2 = FUN_14207c6a0();
    uVar5 = (ulonglong)((uint)(param_2 >> (bVar2 + 5 & 0x3f)) & 1) + (ulonglong)bVar2 * 2;
  }
  uVar3 = param_1[uVar5 + 1];
  if (uVar3 != 0) {
    uVar4 = uVar6;
    if (uVar5 < 0x3f) {
      uVar4 = 0x3b - (uVar5 >> 1);
    }
    lVar8 = param_2 << ((byte)uVar4 & 0x3f);
    uVar4 = uVar3;
    uVar9 = uVar6;
    while ((uVar3 = uVar4, uVar4 = *(longlong *)(uVar3 + 0x20) - param_2, uVar7 <= uVar4 ||
           (uVar6 = uVar3, uVar7 = uVar4, uVar4 != 0))) {
      uVar1 = *(ulonglong *)(uVar3 + 0x38);
      uVar4 = *(ulonglong *)(uVar3 + 0x30 + (lVar8 >> 0x3f) * -8);
      uVar3 = uVar9;
      if ((uVar1 != 0) && (uVar1 != uVar4)) {
        uVar3 = uVar1;
      }
      if (uVar4 == 0) break;
      lVar8 = lVar8 * 2;
      uVar9 = uVar3;
    }
    if (uVar3 != 0) goto LAB_14338e7b0;
    if (uVar6 != 0) {
      return uVar6;
    }
  }
  uVar5 = 1L << ((char)uVar5 + 1U & 0x3f);
  if (((-uVar5 | uVar5) & *param_1) != 0) {
    bVar2 = Scaleform::Alg::LowerBit();
    uVar3 = param_1[(ulonglong)bVar2 + 1];
  }
  if (uVar3 == 0) {
    return uVar6;
  }
LAB_14338e7b0:
  do {
    lVar8 = 0x30;
    uVar5 = *(longlong *)(uVar3 + 0x20) - param_2;
    if (uVar5 < uVar7) {
      uVar6 = uVar3;
    }
    if (*(longlong *)(uVar3 + 0x30) == 0) {
      lVar8 = 0x38;
    }
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    uVar3 = *(ulonglong *)(lVar8 + uVar3);
    uVar7 = uVar5;
  } while (uVar3 != 0);
  return uVar6;
}



// FUNCTION 14338e800 FUN_14338e800 body=143 status=ok
// SIG undefined FUN_14338e800(void)

void FUN_14338e800(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = uVar5;
  if (param_2 >> 6 != 0) {
    bVar3 = FUN_14207c6a0();
    uVar4 = (ulonglong)((uint)(param_2 >> (bVar3 + 5 & 0x3f)) & 1) + (ulonglong)bVar3 * 2;
  }
  lVar1 = *(longlong *)(param_1 + 8 + uVar4 * 8);
  if (uVar4 < 0x3f) {
    uVar5 = 0x3b - (uVar4 >> 1);
  }
  lVar2 = param_2 << ((byte)uVar5 & 0x3f);
  while ((lVar1 != 0 && (*(ulonglong *)(lVar1 + 0x20) != param_2))) {
    lVar1 = *(longlong *)(lVar1 + 0x30 + (lVar2 >> 0x3f) * -8);
    lVar2 = lVar2 * 2;
  }
  return;
}



// FUNCTION 14338e8a0 FUN_14338e8a0 body=110 status=ok
// SIG undefined FUN_14338e8a0(void)

undefined8 * FUN_14338e8a0(undefined8 *param_1)

{
  *param_1 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x200);
  param_1[0x41] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x42,0,0x200);
  param_1[0x82] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x83,0,0x200);
  param_1[0xc3] = 0;
  return param_1;
}



// FUNCTION 14338e920 FUN_14338e920 body=107 status=ok
// SIG undefined FUN_14338e920(void)

void FUN_14338e920(undefined8 *param_1)

{
  *param_1 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x200);
  param_1[0x41] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x42,0,0x200);
  param_1[0x82] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x83,0,0x200);
  param_1[0xc3] = 0;
  return;
}



// FUNCTION 14338e9a0 FUN_14338e9a0 body=200 status=ok
// SIG undefined FUN_14338e9a0(void)

longlong FUN_14338e9a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 < 0x81) {
    if (param_2 < 0x41) {
      lVar1 = FUN_14338f440(param_1,param_2 - 1);
      if (lVar1 != 0) {
        *(longlong *)(param_1 + 0x618) =
             *(longlong *)(param_1 + 0x618) - (ulonglong)*(uint *)(lVar1 + 0x18);
        return lVar1;
      }
    }
    lVar1 = 0;
    if (0x40 < param_2) {
      lVar1 = param_2 - 0x41;
    }
    lVar1 = FUN_14338f440(param_1 + 0x208,lVar1);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x618) = *(longlong *)(param_1 + 0x618) - *(longlong *)(lVar1 + 0x20);
      return lVar1;
    }
  }
  lVar2 = FUN_14338e6b0(param_1 + 0x410,param_2);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    FUN_14338e5d0(param_1 + 0x410,lVar1);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x618) = *(longlong *)(param_1 + 0x618) - *(longlong *)(lVar1 + 0x20);
    }
  }
  return lVar1;
}



// FUNCTION 14338ea70 FUN_14338ea70 body=392 status=ok
// SIG undefined FUN_14338ea70(void)

longlong FUN_14338ea70(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 0x81) {
    if ((param_2 < 0x41) &&
       (lVar1 = FUN_14338e1f0(param_1,param_2 - 1,param_2,param_3,param_4), lVar1 != 0)) {
      *(longlong *)(param_1 + 0x618) =
           *(longlong *)(param_1 + 0x618) - (ulonglong)*(uint *)(lVar1 + 0x18);
      return lVar1;
    }
    lVar1 = 0;
    if (0x40 < param_2) {
      lVar1 = param_2 - 0x41;
    }
    lVar1 = FUN_14338e1f0(param_1 + 0x208,lVar1,param_2,param_3,param_4);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x618) = *(longlong *)(param_1 + 0x618) - *(longlong *)(lVar1 + 0x20);
      return lVar1;
    }
  }
  lVar1 = FUN_14338e6b0(param_1 + 0x410,param_2);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    do {
      uVar3 = lVar1 + param_4 & ~param_4;
      for (uVar2 = uVar3 - lVar1; (uVar2 != 0 && (uVar2 < 0x20)); uVar2 = uVar2 + param_4 + 1) {
        uVar3 = uVar3 + param_4 + 1;
      }
      uVar2 = (ulonglong)*(uint *)(lVar1 + 0x18);
      if (0x40 < uVar2) {
        uVar2 = *(ulonglong *)(lVar1 + 0x20);
      }
      if (uVar3 + (param_2 << ((byte)param_3 & 0x3f)) <= (uVar2 << ((byte)param_3 & 0x3f)) + lVar1)
      {
        FUN_14338e5d0(param_1 + 0x410,lVar1);
        *(longlong *)(param_1 + 0x618) =
             *(longlong *)(param_1 + 0x618) - *(longlong *)(lVar1 + 0x20);
        return lVar1;
      }
      lVar1 = *(longlong *)(lVar1 + 8);
    } while ((lVar1 != lVar4) ||
            (lVar1 = FUN_14338e6b0(param_1 + 0x410,*(longlong *)(lVar1 + 0x20) + 1), lVar4 = lVar1,
            lVar1 != 0));
  }
  return 0;
}



// FUNCTION 14338ec00 FUN_14338ec00 body=202 status=ok
// SIG undefined FUN_14338ec00(void)

void FUN_14338ec00(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(uint)param_2[3];
  if (0x40 < uVar3) {
    uVar3 = param_2[4];
  }
  param_1[0xc3] = param_1[0xc3] + uVar3;
  if (uVar3 < 0x41) {
    uVar2 = param_1[uVar3];
    if (uVar2 != 0) {
      *param_2 = uVar2;
      param_2[1] = *(ulonglong *)(uVar2 + 8);
      **(undefined8 **)(uVar2 + 8) = param_2;
      *(ulonglong **)(uVar2 + 8) = param_2;
      param_1[uVar3] = (ulonglong)param_2;
      *param_1 = *param_1 | 1L << (uVar3 - 1 & 0x3f);
      return;
    }
    param_2[1] = (ulonglong)param_2;
    *param_2 = (ulonglong)param_2;
    param_1[uVar3] = (ulonglong)param_2;
    *param_1 = *param_1 | 1L << (uVar3 - 1 & 0x3f);
    return;
  }
  if (0x80 < uVar3) {
    FUN_14338e4a0(param_1 + 0x82);
    return;
  }
  puVar1 = param_1 + 0x41;
  uVar2 = param_1[uVar3 + 1];
  if (uVar2 != 0) {
    *param_2 = uVar2;
    param_2[1] = *(ulonglong *)(uVar2 + 8);
    **(undefined8 **)(uVar2 + 8) = param_2;
    *(ulonglong **)(uVar2 + 8) = param_2;
    param_1[uVar3 + 1] = (ulonglong)param_2;
    *puVar1 = *puVar1 | 1L << (uVar3 - 0x41 & 0x3f);
    return;
  }
  param_2[1] = (ulonglong)param_2;
  *param_2 = (ulonglong)param_2;
  param_1[uVar3 + 1] = (ulonglong)param_2;
  *puVar1 = *puVar1 | 1L << (uVar3 - 0x41 & 0x3f);
  return;
}



// FUNCTION 14338ecd0 FUN_14338ecd0 body=177 status=ok
// SIG undefined FUN_14338ecd0(void)

void FUN_14338ecd0(ulonglong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_2 + 3);
  if (0x40 < uVar2) {
    uVar2 = param_2[4];
  }
  param_1[0xc3] = param_1[0xc3] - uVar2;
  if (uVar2 < 0x41) {
    plVar1 = (longlong *)param_1[uVar2];
    if (param_2 == plVar1) {
      if (plVar1 == (longlong *)plVar1[1]) {
        param_1[uVar2] = 0;
        *param_1 = *param_1 & ~(1L << (uVar2 - 1 & 0x3f));
        return;
      }
      param_1[uVar2] = (ulonglong)plVar1[1];
    }
  }
  else {
    if (0x80 < uVar2) {
      FUN_14338e5d0(param_1 + 0x82);
      return;
    }
    puVar3 = param_1 + 0x41;
    plVar1 = (longlong *)param_1[uVar2 + 1];
    if (param_2 == plVar1) {
      if (plVar1 == (longlong *)plVar1[1]) {
        puVar3[uVar2 - 0x40] = 0;
        *puVar3 = *puVar3 & ~(1L << (uVar2 - 0x41 & 0x3f));
        return;
      }
      puVar3[uVar2 - 0x40] = (ulonglong)plVar1[1];
    }
  }
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  return;
}



// FUNCTION 14338ed90 FUN_14338ed90 body=243 status=ok
// SIG undefined FUN_14338ed90(void)

void FUN_14338ed90(undefined8 param_1,longlong param_2,byte param_3,char param_4,char param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x18);
  if (0x40 < uVar4) {
    uVar4 = *(ulonglong *)(param_2 + 0x20);
  }
  lVar3 = param_2;
  if (param_4 != '\0') {
    uVar1 = (ulonglong)*(uint *)(param_2 + -4);
    if (0x40 < uVar1) {
      uVar1 = *(ulonglong *)(param_2 + -0x10);
    }
    lVar3 = param_2 - (uVar1 << (param_3 & 0x3f));
    uVar1 = (ulonglong)*(uint *)(lVar3 + 0x18);
    if (0x40 < uVar1) {
      uVar1 = *(ulonglong *)(lVar3 + 0x20);
    }
    uVar4 = uVar4 + uVar1;
    FUN_14338ecd0(param_1,lVar3);
  }
  if (param_5 != '\0') {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x18);
    if (0x40 < uVar1) {
      uVar1 = *(ulonglong *)(param_2 + 0x20);
    }
    param_2 = (uVar1 << (param_3 & 0x3f)) + param_2;
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x18);
    if (0x40 < uVar1) {
      uVar1 = *(ulonglong *)(param_2 + 0x20);
    }
    uVar4 = uVar4 + uVar1;
    FUN_14338ecd0(param_1);
  }
  lVar2 = uVar4 << (param_3 & 0x3f);
  if (uVar4 < 0x41) {
    *(int *)(lVar2 + -4 + lVar3) = (int)uVar4;
    *(int *)(lVar3 + 0x18) = (int)uVar4;
  }
  else {
    *(undefined4 *)(lVar2 + -4 + lVar3) = 0x41;
    *(undefined4 *)(lVar3 + 0x18) = 0x41;
    *(ulonglong *)(lVar2 + -0x10 + lVar3) = uVar4;
    *(ulonglong *)(lVar3 + 0x20) = uVar4;
  }
  FUN_14338ec00(param_1,lVar3);
  return;
}



// FUNCTION 14338ee90 FUN_14338ee90 body=247 status=ok
// SIG undefined FUN_14338ee90(void)

void FUN_14338ee90(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(param_1 + 0x210);
  lVar4 = 0x40;
  do {
    lVar1 = plVar5[-0x41];
    lVar2 = lVar1;
    if (lVar1 != 0) {
      do {
        (**(code **)(*param_2 + 8))
                  (param_2,*(undefined8 *)(lVar2 + 0x10),lVar2,
                   (ulonglong)*(uint *)(lVar2 + 0x18) << ((byte)param_3 & 0x3f),param_4);
        lVar2 = *(longlong *)(lVar2 + 8);
      } while (lVar2 != lVar1);
    }
    lVar1 = *plVar5;
    lVar2 = lVar1;
    if (lVar1 != 0) {
      do {
        uVar3 = (ulonglong)*(uint *)(lVar2 + 0x18);
        if (0x40 < uVar3) {
          uVar3 = *(ulonglong *)(lVar2 + 0x20);
        }
        (**(code **)(*param_2 + 8))
                  (param_2,*(undefined8 *)(lVar2 + 0x10),lVar2,uVar3 << ((byte)param_3 & 0x3f),
                   param_4);
        lVar2 = *(longlong *)(lVar2 + 8);
      } while (lVar2 != lVar1);
    }
    FUN_14338f150(param_1,plVar5[0x41],param_2,param_3,param_4);
    plVar5 = plVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 14338ef90 FUN_14338ef90 body=403 status=ok
// SIG undefined FUN_14338ef90(void)

void FUN_14338ef90(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  
  plVar8 = (longlong *)(param_1 + 0x210);
  lVar7 = 0x40;
  do {
    lVar2 = plVar8[-0x41];
    bVar3 = (byte)param_3;
    if (lVar2 != 0) {
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x18);
      if (0x40 < uVar4) {
        uVar4 = *(ulonglong *)(lVar2 + 0x20);
      }
      lVar5 = lVar2;
      if (0xfff < uVar4 << (bVar3 & 0x3f)) {
        do {
          uVar4 = (ulonglong)*(uint *)(lVar5 + 0x18);
          uVar6 = lVar5 + 0xfffU & 0xfffffffffffff000;
          if (0x40 < uVar4) {
            uVar4 = *(ulonglong *)(lVar5 + 0x20);
          }
          uVar4 = (uVar4 << (bVar3 & 0x3f)) + lVar5 & 0xfffffffffffff000;
          if (uVar6 + 0x1000 <= uVar4) {
            in_stack_ffffffffffffffc8 = uVar4 - uVar6;
            (**(code **)(*param_2 + 8))
                      (param_2,param_4,*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x28),uVar6,
                       in_stack_ffffffffffffffc8);
          }
          plVar1 = (longlong *)(lVar5 + 8);
          lVar5 = *plVar1;
        } while (*plVar1 != lVar2);
      }
    }
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    lVar2 = *plVar8;
    if (lVar2 != 0) {
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x18);
      if (0x40 < uVar4) {
        uVar4 = *(ulonglong *)(lVar2 + 0x20);
      }
      lVar5 = lVar2;
      if (0xfff < uVar4 << (bVar3 & 0x3f)) {
        do {
          uVar4 = (ulonglong)*(uint *)(lVar5 + 0x18);
          uVar6 = lVar5 + 0xfffU & 0xfffffffffffff000;
          if (0x40 < uVar4) {
            uVar4 = *(ulonglong *)(lVar5 + 0x20);
          }
          uVar4 = (uVar4 << (bVar3 & 0x3f)) + lVar5 & 0xfffffffffffff000;
          if (uVar6 + 0x1000 <= uVar4) {
            in_stack_ffffffffffffffc8 = uVar4 - uVar6;
            (**(code **)(*param_2 + 8))
                      (param_2,param_4,*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x28),uVar6,
                       in_stack_ffffffffffffffc8);
          }
          uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
          lVar5 = *(longlong *)(lVar5 + 8);
        } while (lVar5 != lVar2);
      }
    }
    in_stack_ffffffffffffffc8 = CONCAT44(uVar9,param_4);
    FUN_14338f270(param_1,plVar8[0x41],param_2,param_3,in_stack_ffffffffffffffc8);
    plVar8 = plVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 14338f130 FUN_14338f130 body=3 status=ok
// SIG undefined FUN_14338f130(void)

void FUN_14338f130(void)

{
  return;
}



// FUNCTION 14338f150 FUN_14338f150 body=157 status=ok
// SIG undefined FUN_14338f150(void)

void FUN_14338f150(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x38)) {
    FUN_14338f150(param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_4,param_5);
    lVar1 = param_2;
    do {
      (**(code **)(*param_3 + 8))
                (param_3,*(undefined8 *)(lVar1 + 0x10),lVar1,
                 *(longlong *)(lVar1 + 0x20) << ((byte)param_4 & 0x3f),param_5);
      lVar1 = *(longlong *)(lVar1 + 8);
    } while (lVar1 != param_2);
  }
  return;
}



// FUNCTION 14338f270 FUN_14338f270 body=212 status=ok
// SIG undefined FUN_14338f270(void)

void FUN_14338f270(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x38)) {
    FUN_14338f270(param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_4,param_5);
    lVar2 = param_2;
    do {
      uVar1 = (ulonglong)*(uint *)(lVar2 + 0x18);
      uVar3 = lVar2 + 0xfffU & 0xfffffffffffff000;
      if (0x40 < uVar1) {
        uVar1 = *(ulonglong *)(lVar2 + 0x20);
      }
      uVar1 = (uVar1 << ((byte)param_4 & 0x3f)) + lVar2 & 0xfffffffffffff000;
      if (uVar3 + 0x1000 <= uVar1) {
        (**(code **)(*param_3 + 8))
                  (param_3,param_5,*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x28),uVar3,
                   uVar1 - uVar3);
      }
      lVar2 = *(longlong *)(lVar2 + 8);
    } while (lVar2 != param_2);
  }
  return;
}



// FUNCTION 14338f370 LowerBit body=202 status=ok
// SIG undefined LowerBit(void)

uint Scaleform::Alg::LowerBit(ulonglong param_1)

{
  if ((int)param_1 == 0) {
    if ((param_1 & 0xffff00000000) == 0) {
      if ((param_1 & 0xff000000000000) != 0) {
        return (uint)(byte)((&DAT_145af9b40)[param_1 >> 0x30 & 0xff] + 0x30);
      }
      return (uint)(byte)((&DAT_145af9b40)[param_1 >> 0x38] + 0x38);
    }
    if ((param_1 & 0xff00000000) != 0) {
      return (uint)(byte)((&DAT_145af9b40)[param_1 >> 0x20 & 0xff] + 0x20);
    }
    return (uint)(byte)((&DAT_145af9b40)[param_1 >> 0x28 & 0xff] + 0x28);
  }
  if ((short)param_1 == 0) {
    if ((param_1 & 0xff0000) != 0) {
      return (uint)(byte)((&DAT_145af9b40)[param_1 >> 0x10 & 0xff] + 0x10);
    }
    return (uint)(byte)((&DAT_145af9b40)[param_1 >> 0x18 & 0xff] + 0x18);
  }
  if ((char)param_1 != '\0') {
    return (uint)(byte)(&DAT_145af9b40)[param_1 & 0xff];
  }
  return (byte)(&DAT_145af9b40)[param_1 >> 8 & 0xff] + 8;
}



// FUNCTION 14338f440 FUN_14338f440 body=144 status=ok
// SIG undefined FUN_14338f440(void)

longlong * FUN_14338f440(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1 >> ((byte)param_2 & 0x3f);
  if (uVar3 == 0) {
    return (longlong *)0x0;
  }
  bVar2 = Scaleform::Alg::LowerBit(uVar3);
  uVar3 = (ulonglong)bVar2 + param_2;
  plVar1 = (longlong *)param_1[uVar3 + 1];
  if (plVar1 != (longlong *)plVar1[1]) {
    param_1[uVar3 + 1] = (ulonglong)plVar1[1];
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    *(longlong *)plVar1[1] = *plVar1;
    return plVar1;
  }
  param_1[uVar3 + 1] = 0;
  *param_1 = *param_1 & ~(1L << (uVar3 & 0x3f));
  return plVar1;
}



// FUNCTION 14338f500 CRectTracker body=59 status=ok
// SIG undefined CRectTracker(CRectTracker * this)

/* Library Function - Single Match
    public: __cdecl CRectTracker::CRectTracker(void) __ptr64
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

CRectTracker * __thiscall CRectTracker::CRectTracker(CRectTracker *this)

{
  *(undefined ***)this = &PTR_FUN_145b03a70;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  FUN_14338f550();
  return this;
}



// FUNCTION 14338f550 FUN_14338f550 body=163 status=ok
// SIG undefined FUN_14338f550(void)

void FUN_14338f550(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 + 0x38 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1433db320(param_1 + 0x38,param_2,0x1000,0x1000,0x2000);
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_38);
  *(undefined8 *)(param_1 + 0x10) = local_20;
  *(undefined8 *)(param_1 + 0x18) = local_18;
  if (local_38 == 0) {
    local_38 = 1;
  }
  *(longlong *)(param_1 + 0x20) = local_38;
  if (local_30 == 0) {
    local_30 = -0x8000000000000000;
  }
  *(longlong *)(param_1 + 0x28) = local_30;
  return;
}



// FUNCTION 14338f790 FUN_14338f790 body=226 status=ok
// SIG undefined FUN_14338f790(void)

undefined8 * FUN_14338f790(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong local_38 [6];
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_145b03ae8;
  *puVar1 = &PTR_FUN_145b03a70;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x28] = param_2;
  param_1[0x29] = param_2;
  param_1[0x2a] = 0x1000;
  param_1[0x2b] = 1;
  param_1[0x2c] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  (**(code **)(*param_2 + 0x18))(param_2,local_38);
  if (local_38[2] != 0) {
    FUN_14338f550(puVar1,param_2);
    param_1[0x2a] = local_38[2];
    param_1[0x29] = puVar1;
  }
  if ((ulonglong)param_1[0x2b] < local_38[0]) {
    param_1[0x2b] = local_38[0];
  }
  return param_1;
}



// FUNCTION 14338fa60 FUN_14338fa60 body=130 status=ok
// SIG undefined FUN_14338fa60(void)

longlong FUN_14338fa60(longlong param_1)

{
  FUN_14338f790();
  FUN_1433db2a0(param_1 + 0x168,param_1,0x8000,0x2000);
  FUN_1433dbeb0(param_1 + 0x230,param_1,0x8000);
  FUN_1432bdc50(param_1 + 0x888,0);
  *(undefined8 *)(param_1 + 0x8b8) = 0;
  *(undefined8 *)(param_1 + 0x8c0) = 0;
  *DAT_146b644e0 = param_1 + 0x168;
  DAT_146b744f8 = param_1;
  return param_1;
}



// FUNCTION 14338faf0 ~HeapRoot body=41 status=ok
// SIG undefined ~HeapRoot(void)

void Scaleform::HeapPT::HeapRoot::~HeapRoot(undefined8 *param_1)

{
  Lock::~Lock(param_1 + 0x111);
  param_1[1] = &PTR_FUN_144025e20;
  *param_1 = &PTR_FUN_144025e20;
  return;
}



// FUNCTION 14338fb20 FUN_14338fb20 body=296 status=ok
// SIG undefined FUN_14338fb20(void)

void FUN_14338fb20(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  void *_Dst;
  undefined8 uVar2;
  ulonglong uVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x888);
  if (*(ulonglong *)(param_1 + 0x8c0) < param_2) {
    uVar3 = param_2 + 0xf & 0xfffffffffffffff0;
    _Dst = (void *)FUN_1433dbf50(param_1 + 0x230);
    _guard_xfg_dispatch_icall_nop(_Dst,0,uVar3 * 8);
    if (*(void **)(param_1 + 0x8b8) != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x8b8),*(longlong *)(param_1 + 0x8c0) << 3);
      FUN_1433dc060(param_1 + 0x230,*(undefined8 *)(param_1 + 0x8b8),
                    *(longlong *)(param_1 + 0x8c0) << 3);
    }
    *(void **)(param_1 + 0x8b8) = _Dst;
    *(ulonglong *)(param_1 + 0x8c0) = uVar3;
  }
  uVar2 = FUN_1433dbf50(param_1 + 0x230,0x168);
  *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8) = uVar2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14338f790(lVar1,param_3);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8) = uVar2;
  Scaleform::Lock::DoLock(param_1 + 0x888);
  return;
}



// FUNCTION 14338fc50 FUN_14338fc50 body=149 status=ok
// SIG undefined FUN_14338fc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14338fc50(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x888);
  cVar2 = FUN_14338fe60(param_1,param_2);
  uVar3 = _DAT_00000000;
  if (cVar2 != '\0') {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8);
    (**(code **)*puVar1)(puVar1,0);
    FUN_1433dc060(param_1 + 0x230,*(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8)
                  ,0x168);
    *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8) = 0;
    uVar3 = 0;
  }
  Scaleform::Lock::DoLock(param_1 + 0x888);
  return uVar3;
}



// FUNCTION 14338fcf0 FUN_14338fcf0 body=351 status=ok
// SIG undefined FUN_14338fcf0(void)

void FUN_14338fcf0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = param_1 + 0x111;
  Scaleform::Lock::DoLock(plVar1);
  if (param_1[0x117] != 0) {
    for (lVar4 = param_1[0x118]; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (*(longlong *)(param_1[0x117] + -8 + lVar4 * 8) != 0) {
        Scaleform::Lock::DoLock(plVar1);
        Scaleform::Lock::DoLock(plVar1);
        Scaleform::Lock::DoLock(plVar1);
        if (lVar4 == 0) {
          Scaleform::Lock::DoLock(plVar1);
          plVar5 = param_1;
        }
        else {
          plVar5 = *(longlong **)(param_1[0x117] + -8 + lVar4 * 8);
          Scaleform::Lock::DoLock(plVar1);
        }
        lVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
        Scaleform::Lock::DoLock(plVar1);
        if (lVar3 == 0) {
          puVar2 = *(undefined8 **)(param_1[0x117] + -8 + lVar4 * 8);
          (**(code **)*puVar2)(puVar2,0);
          FUN_1433dc060(param_1 + 0x46,*(undefined8 *)(param_1[0x117] + -8 + lVar4 * 8),0x168);
          *(undefined8 *)(param_1[0x117] + -8 + lVar4 * 8) = 0;
        }
        Scaleform::Lock::DoLock(plVar1);
      }
    }
    FUN_1433dc060(param_1 + 0x46,param_1[0x117],param_1[0x118] << 3);
    param_1[0x117] = 0;
    param_1[0x118] = 0;
  }
  Scaleform::Lock::DoLock(plVar1);
  return;
}



// FUNCTION 14338fe60 FUN_14338fe60 body=113 status=ok
// SIG undefined FUN_14338fe60(void)

bool FUN_14338fe60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 0x111;
  Scaleform::Lock::DoLock(plVar1);
  Scaleform::Lock::DoLock(plVar1);
  if (param_2 != 0) {
    param_1 = *(longlong **)(param_1[0x117] + -8 + param_2 * 8);
  }
  Scaleform::Lock::DoLock(plVar1);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  Scaleform::Lock::DoLock(plVar1);
  return lVar2 == 0;
}



// FUNCTION 14338fee0 FUN_14338fee0 body=80 status=ok
// SIG undefined FUN_14338fee0(void)

longlong FUN_14338fee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x888;
  Scaleform::Lock::DoLock(lVar1);
  if (param_2 != 0) {
    param_1 = *(longlong *)(*(longlong *)(param_1 + 0x8b8) + -8 + param_2 * 8);
  }
  Scaleform::Lock::DoLock(lVar1);
  return param_1;
}



// FUNCTION 14338ff40 FUN_14338ff40 body=532 status=ok
// SIG undefined FUN_14338ff40(void)

longlong FUN_14338ff40(longlong param_1,void *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar7 = param_1 + 0x888;
  Scaleform::Lock::DoLock(lVar7);
  Scaleform::Lock::DoLock(lVar7);
  lVar9 = -1;
  do {
    lVar5 = lVar9;
    lVar9 = lVar5 + 1;
  } while (*(char *)(lVar9 + (longlong)param_2) != '\0');
  lVar9 = param_1 + 0x230;
  uVar10 = lVar5 + 0x849U & 0xffffffffffffffe0;
  lVar5 = FUN_1433dbf50(lVar9,uVar10);
  if (lVar5 == 0) {
    return 0;
  }
  uVar8 = (*param_4 & 2) << 3;
  uVar1 = uVar8 | 0x20;
  if ((*param_4 & 4) != 0) {
    uVar1 = uVar8;
  }
  lVar6 = UMovieScene3DConstraintSection::UMovieScene3DConstraintSection();
  if (lVar5 == -0xe0) {
    lVar7 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_4 + 0xe);
    Scaleform::Lock::DoLock(lVar7);
    if (lVar2 != 0) {
      param_1 = *(longlong *)(*(longlong *)(param_1 + 0x8b8) + -8 + lVar2 * 8);
    }
    Scaleform::Lock::DoLock(lVar7);
    lVar7 = FUN_143390460(lVar5 + 0xe0,param_1,lVar6,uVar1,*(undefined8 *)(param_4 + 2),
                          *(undefined8 *)(param_4 + 4),*(undefined8 *)(param_4 + 6),
                          *(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 10));
  }
  if (*(char *)(lVar7 + 0x6e2) == '\0') {
    FUN_1433dc060(lVar9,lVar5,uVar10);
    lVar6 = 0;
  }
  else {
    *(ulonglong *)(lVar6 + 0x18) = uVar10;
    *(undefined4 *)(lVar6 + 0x20) = 1;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    uVar3 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)param_4;
    *(undefined8 *)(lVar6 + 0x40) = uVar3;
    uVar3 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(lVar6 + 0x50) = uVar3;
    uVar3 = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(lVar6 + 0x60) = uVar3;
    uVar3 = *(undefined8 *)(param_4 + 0xc);
    uVar4 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(lVar6 + 0x78) = param_3;
    *(void **)(lVar6 + 0x80) = (void *)(lVar5 + 0x828);
    *(undefined8 *)(lVar6 + 0x68) = uVar3;
    *(undefined8 *)(lVar6 + 0x70) = uVar4;
    *(byte *)(lVar6 + 200) = ~(byte)*param_4 & 1;
    uVar1 = *param_4;
    *(longlong *)(lVar6 + 0xd0) = lVar7;
    *(byte *)(lVar6 + 0xc9) = ~(byte)(uVar1 >> 4) & 1;
    lVar7 = -1;
    do {
      lVar9 = lVar7;
      lVar7 = lVar9 + 1;
    } while (*(char *)(lVar9 + 1 + (longlong)param_2) != '\0');
    _guard_xfg_dispatch_icall_nop((void *)(lVar5 + 0x828),param_2,lVar9 + 2);
  }
  return lVar6;
}



// FUNCTION 143390160 FUN_143390160 body=67 status=ok
// SIG undefined FUN_143390160(void)

void FUN_143390160(longlong param_1,undefined8 *param_2)

{
  FUN_1433907d0(param_2[0x1a]);
  (**(code **)*param_2)(param_2,0);
  FUN_1433dc060(param_1 + 0x230,param_2,param_2[3]);
  return;
}



// FUNCTION 1433901b0 FUN_1433901b0 body=112 status=ok
// SIG undefined FUN_1433901b0(void)

void FUN_1433901b0(longlong *param_1,undefined8 param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x111);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,1);
  Scaleform::HeapPT::Starter::VisitSegments(param_1 + 0x2d,param_2);
  FUN_1433dc1f0(param_1 + 0x46,param_2);
  Scaleform::Lock::DoLock(param_1 + 0x111);
  return;
}



// FUNCTION 143390230 FUN_143390230 body=120 status=ok
// SIG undefined FUN_143390230(void)

undefined8 FUN_143390230(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x888);
  uVar1 = *(ulonglong *)(param_1 + 0x150);
  lVar3 = ((param_2 + -1 + uVar1) / uVar1) * uVar1;
  *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + lVar3;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x20))
                    (*(longlong **)(param_1 + 0x140),lVar3,*(undefined8 *)(param_1 + 0x158));
  Scaleform::Lock::DoLock(param_1 + 0x888);
  return uVar2;
}



// FUNCTION 1433902b0 FUN_1433902b0 body=129 status=ok
// SIG undefined FUN_1433902b0(void)

void FUN_1433902b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x888);
  uVar1 = *(ulonglong *)(param_1 + 0x150);
  lVar2 = ((param_3 + -1 + uVar1) / uVar1) * uVar1;
  *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) - lVar2;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))
            (*(longlong **)(param_1 + 0x140),param_2,lVar2,*(undefined8 *)(param_1 + 0x158));
  Scaleform::Lock::DoLock(param_1 + 0x888);
  return;
}



// FUNCTION 143390340 FUN_143390340 body=179 status=ok
// SIG undefined FUN_143390340(void)

void FUN_143390340(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x111);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  *param_2 = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  param_2[1] = uVar1;
  param_2[2] = param_1[0x3f];
  param_2[3] = param_1[0x3f] - (param_1[0x45] << ((byte)param_1[0x40] & 0x3f));
  param_2[4] = param_1[0x110];
  param_2[5] = param_1[0x110] - (param_1[0x10f] << ((byte)param_1[0x4a] & 0x3f));
  param_2[6] = 0;
  param_2[7] = 0;
  Scaleform::Lock::DoLock(param_1 + 0x111);
  return;
}



// FUNCTION 143390400 FUN_143390400 body=43 status=ok
// SIG undefined FUN_143390400(void)

undefined8 * FUN_143390400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144025e20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 143390430 FUN_143390430 body=47 status=ok
// SIG undefined FUN_143390430(void)

undefined8 * FUN_143390430(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR_FUN_144025e20;
  *param_1 = &PTR_FUN_144025e20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 143390460 FUN_143390460 body=763 status=ok
// SIG undefined FUN_143390460(void)

/* WARNING: Removing unreachable block (ram,0x000143390630) */
/* WARNING: Removing unreachable block (ram,0x000143390648) */
/* WARNING: Removing unreachable block (ram,0x00014339067a) */
/* WARNING: Removing unreachable block (ram,0x000143390683) */
/* WARNING: Removing unreachable block (ram,0x00014339068a) */
/* WARNING: Removing unreachable block (ram,0x00014339069c) */
/* WARNING: Removing unreachable block (ram,0x0001433906a3) */
/* WARNING: Removing unreachable block (ram,0x0001433906ac) */
/* WARNING: Removing unreachable block (ram,0x0001433906c0) */
/* WARNING: Removing unreachable block (ram,0x0001433906c5) */
/* WARNING: Removing unreachable block (ram,0x0001433906d9) */
/* WARNING: Removing unreachable block (ram,0x0001433906e2) */
/* WARNING: Removing unreachable block (ram,0x0001433906e9) */

undefined8 *
FUN_143390460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,longlong param_6,longlong param_7,undefined8 param_8,
             undefined8 param_9)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = DAT_146b744f8 + 0x230;
  bVar1 = FUN_14207c6a0(param_5);
  param_1[3] = (ulonglong)bVar1;
  param_1[4] = (1L << (bVar1 & 0x3f)) + -1;
  FUN_1433dc450(param_1 + 5);
  puVar2 = param_1 + 0xca;
  lVar3 = 8;
  *puVar2 = puVar2;
  param_1[0xcb] = puVar2;
  puVar2 = param_1 + 0xcc;
  do {
    *puVar2 = puVar2;
    puVar2[1] = puVar2;
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined2 *)((longlong)param_1 + 0x6e2) = 0;
  *(byte *)(param_1 + 0xdc) = (byte)((param_4 & 0xffffffff) >> 4) & 1;
  uVar4 = param_6 + 0xfffU & 0xfffffffffffff000;
  param_1[0xde] = uVar4;
  *(byte *)((longlong)param_1 + 0x6e1) = (byte)((uint)param_4 >> 5) & 1;
  param_1[0xdf] = ((param_7 + -1 + uVar4) / uVar4) * uVar4;
  param_1[0xe0] = param_8;
  param_1[0xe7] = param_9;
  param_1[0xdd] = 0x1000;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  (**(code **)(*(longlong *)param_1[1] + 0x18))();
  *(undefined1 *)((longlong)param_1 + 0x6e3) = 0;
  param_1[0xdd] = 0x1000;
  param_1[0xe1] = 0;
  param_1[0xde] = ((param_1[0xde] + 0xfff) / 0x1000) * 0x1000;
  if (((ulonglong)param_1[0xe0] < 0x20000) && (param_1[0xe0] != 0)) {
    param_1[0xe0] = 0x20000;
  }
  if (param_1[0xdf] == 0) {
    *(undefined1 *)((longlong)param_1 + 0x6e2) = 1;
    return param_1;
  }
  lVar3 = FUN_143391900(param_1,param_1[0xdf],param_5,param_1[0xde],local_res20);
  *(bool *)((longlong)param_1 + 0x6e2) = lVar3 != 0;
  return param_1;
}



// FUNCTION 143390780 FUN_143390780 body=63 status=ok
// SIG undefined FUN_143390780(void)

longlong FUN_143390780(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = FUN_143391860();
  uVar2 = param_2 + -1 + uVar1;
  lVar3 = uVar2 - uVar2 % uVar1;
  *(longlong *)(param_1 + 0x738) = lVar3;
  return lVar3;
}



// FUNCTION 1433907d0 FUN_1433907d0 body=313 status=ok
// SIG undefined FUN_1433907d0(void)

void FUN_1433907d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)param_1[0xcb];
  while (plVar1 != param_1 + 0xca) {
    plVar2 = (longlong *)param_1[0xe8];
    lVar3 = plVar1[6];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*param_1,lVar3);
    }
    param_1[0xe2] = param_1[0xe2] - lVar3;
    FUN_14338daf0(DAT_146b644e0,plVar1[7],lVar3);
    uVar5 = 1L << ((byte)*(undefined4 *)((longlong)plVar1 + 0x1c) & 0x3f);
    plVar2 = (longlong *)param_1[1];
    if ((plVar1[4] & 0x80000000U) == 0) {
      uVar4 = 0x1000;
      if (0x1000 < uVar5) {
        uVar4 = uVar5;
      }
      (**(code **)(*plVar2 + 0x28))(plVar2,plVar1[7],lVar3,uVar4);
    }
    else {
      param_1[0xe2] = param_1[0xe2] - (ulonglong)((uint)plVar1[4] & 0x7fffffff);
      uVar4 = (ulonglong)((uint)plVar1[4] & 0x7fffffff);
      (**(code **)(*plVar2 + 0x40))(plVar2,plVar1[7] - uVar4,uVar4 + lVar3,uVar5);
    }
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    *(longlong *)plVar1[1] = *plVar1;
    *plVar1 = -1;
    plVar1[1] = -1;
    FUN_1433dc060(param_1[2],plVar1,plVar1[2]);
    plVar1 = (longlong *)param_1[0xcb];
  }
  FUN_14338e920(param_1 + 6);
  return;
}



// FUNCTION 143390910 FUN_143390910 body=176 status=ok
// SIG undefined FUN_143390910(void)

void FUN_143390910(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = 0x20;
  if (0x1f < param_2) {
    uVar3 = param_2;
  }
  uVar3 = uVar3 + *(ulonglong *)(param_1 + 0x20) & ~*(ulonglong *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x6e0) != '\0') &&
     (bVar2 = (byte)*(undefined8 *)(param_1 + 0x18), uVar3 <= (ulonglong)(8L << (bVar2 & 0x3f)))) {
    lVar1 = FUN_143392310(param_1,uVar3 - 1 >> (bVar2 & 0x3f));
    if (lVar1 != 0) {
      return;
    }
    lVar1 = FUN_143392310(param_1,uVar3 - 1 >> ((byte)*(undefined8 *)(param_1 + 0x18) & 0x3f) &
                                  0xffffffff);
    if (lVar1 != 0) {
      return;
    }
  }
  if (*(ulonglong *)(param_1 + 0x700) <= uVar3) {
    FUN_143391b80(param_1,uVar3,0x1000);
    return;
  }
  FUN_143391f30();
  return;
}



// FUNCTION 1433909d0 FUN_1433909d0 body=246 status=ok
// SIG undefined FUN_1433909d0(void)

void FUN_1433909d0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3 - 1 <= *(ulonglong *)(param_1 + 0x20)) {
    FUN_143390910();
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x20) + 1;
  uVar3 = 0x20;
  if (0x1f < param_2) {
    uVar3 = param_2;
  }
  if (param_3 < uVar4) {
    param_3 = uVar4;
  }
  if (uVar3 < param_3) {
    uVar3 = param_3;
  }
  uVar4 = (param_3 - 1) + uVar3 & ~(param_3 - 1);
  if ((*(char *)(param_1 + 0x6e0) != '\0') &&
     (bVar2 = (byte)*(undefined8 *)(param_1 + 0x18), uVar4 <= (ulonglong)(8L << (bVar2 & 0x3f)))) {
    lVar1 = FUN_143392310(param_1,*(undefined4 *)
                                   (&DAT_145b03b60 + (uVar4 - 1 >> (bVar2 & 0x3f)) * 4));
    if (lVar1 != 0) {
      return;
    }
    lVar1 = FUN_143392310(param_1,*(undefined4 *)
                                   (&DAT_145b03b60 +
                                   (uVar4 - 1 >> ((byte)*(undefined8 *)(param_1 + 0x18) & 0x3f)) * 4
                                   ));
    if (lVar1 != 0) {
      return;
    }
  }
  if (uVar4 < *(ulonglong *)(param_1 + 0x700)) {
    FUN_143392000();
  }
  else {
    FUN_143391b80(param_1,uVar4,param_3);
  }
  return;
}



// FUNCTION 143390ad0 FUN_143390ad0 body=278 status=ok
// SIG undefined FUN_143390ad0(void)

longlong FUN_143390ad0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  ulonglong *puVar5;
  
  local_res8 = 0;
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar4 = 0x20;
  if (0x1f < param_4) {
    uVar4 = param_4;
  }
  uVar4 = uVar4 + *(ulonglong *)(param_1 + 0x20) & ~*(ulonglong *)(param_1 + 0x20);
  if (uVar1 < 8) {
    local_res8 = (ulonglong)(uVar1 + 1 << ((byte)*(longlong *)(param_1 + 0x18) & 0x1f));
    if (uVar4 <= local_res8) {
      return param_3;
    }
    lVar2 = FUN_1433923a0(param_1,param_2,param_3,local_res8,uVar4,
                          (ulonglong)*(uint *)(&DAT_145b03b60 + (ulonglong)uVar1 * 4) +
                          *(longlong *)(param_1 + 0x18));
    return lVar2;
  }
  if (uVar1 == 10) {
    puVar5 = &local_res8;
    lVar2 = FUN_1433dca70(param_1 + 0x28);
    if (lVar2 == 0) {
      uVar3 = FUN_1433dcda0(param_1 + 0x28,param_2,param_3,local_res8,puVar5);
      lVar2 = FUN_1433923a0(param_1,param_2,param_3,local_res8,uVar4,uVar3);
    }
    return lVar2;
  }
  lVar2 = FUN_143391cc0(param_1,param_2,param_3,uVar4);
  return lVar2;
}



// FUNCTION 143390bf0 FUN_143390bf0 body=224 status=ok
// SIG undefined FUN_143390bf0(void)

void FUN_143390bf0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(uint *)(param_2 + 0x18) < 8) {
    param_3[2] = param_2;
    lVar2 = ((ulonglong)*(uint *)(param_2 + 0x18) + 0x66) * 0x10 + param_1;
    param_3[1] = *(longlong *)(lVar2 + 8);
    *param_3 = lVar2;
    **(longlong **)(lVar2 + 8) = (longlong)param_3;
    *(longlong **)(lVar2 + 8) = param_3;
    *(longlong *)(param_1 + 0x718) =
         *(longlong *)(param_1 + 0x718) +
         (ulonglong)
         (uint)(*(int *)(param_2 + 0x18) + 1 << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x1f));
    plVar1 = (longlong *)(param_2 + 0x20);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_143392250(param_1);
      return;
    }
  }
  else if (*(uint *)(param_2 + 0x18) == 10) {
    FUN_1433dc900(param_1 + 0x28);
    plVar1 = (longlong *)(param_2 + 0x20);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_143391a90(param_1,param_2);
      return;
    }
  }
  else {
    *(longlong *)(param_1 + 0x720) = *(longlong *)(param_1 + 0x720) - *(longlong *)(param_2 + 0x30);
    lVar2 = DAT_146b744f8;
    Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
    FUN_143391700(param_1,param_2);
    Scaleform::Lock::DoLock(lVar2 + 0x888);
  }
  return;
}



// FUNCTION 143390ce0 FUN_143390ce0 body=118 status=ok
// SIG undefined FUN_143390ce0(void)

void FUN_143390ce0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  FUN_143390ad0(param_1,*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10) +
                               (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
                             (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
                           (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8),param_2,
                param_3);
  return;
}



// FUNCTION 143390e70 GetUsableSize body=37 status=ok
// SIG undefined GetUsableSize(void)

longlong Scaleform::HeapPT::AllocEngine::GetUsableSize(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 < 8) {
    return (ulonglong)(uVar1 + 1) << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x3f);
  }
  if (uVar1 == 10) {
    lVar2 = AllocBitSet2::GetUsableSize(param_1 + 0x28);
    return lVar2;
  }
  return *(longlong *)(param_2 + 0x30);
}



// FUNCTION 143390ea0 GetRefPoseOverride body=8 status=ok
// SIG undefined GetRefPoseOverride(void)

undefined8 USkinnedMeshComponent::GetRefPoseOverride(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x710);
}



// FUNCTION 143390eb0 FUN_143390eb0 body=35 status=ok
// SIG undefined FUN_143390eb0(void)

longlong FUN_143390eb0(longlong param_1)

{
  return (*(longlong *)(param_1 + 0x710) -
         (*(longlong *)(param_1 + 0x648) << ((byte)*(undefined8 *)(param_1 + 0x28) & 0x3f))) -
         *(longlong *)(param_1 + 0x718);
}



// FUNCTION 143390ee0 FUN_143390ee0 body=101 status=ok
// SIG undefined FUN_143390ee0(void)

void FUN_143390ee0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x728) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x20) == 0)) {
    FUN_1433dc520(param_1 + 0x28);
    FUN_143391700(param_1,*(undefined8 *)(param_1 + 0x728));
  }
  if ((*(longlong *)(param_1 + 0x730) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x20) == 0)) {
    FUN_143392250(param_1);
  }
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  return;
}



// FUNCTION 143390f50 FUN_143390f50 body=436 status=ok
// SIG undefined FUN_143390f50(void)

void FUN_143390f50(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if ((param_3 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
  }
  if ((param_3 & 2) != 0) {
    Scaleform::HeapPT::Starter::VisitMem(*DAT_146b644e0,param_2);
  }
  if ((param_3 & 4) != 0) {
    FUN_1433dc140(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
  if ((param_3 & 0x10) != 0) {
    for (lVar3 = *(longlong *)(param_1 + 0x658); lVar3 != param_1 + 0x650;
        lVar3 = *(longlong *)(lVar3 + 8)) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < 8) {
        (**(code **)(*param_2 + 8))
                  (param_2,lVar3,*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x30),9);
        uVar2 = *(ulonglong *)(lVar3 + 0x30) %
                (ulonglong)
                (uint)(*(int *)(lVar3 + 0x18) + 1 << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x1f))
        ;
        if (uVar2 != 0) {
          uVar5 = 10;
          lVar4 = (*(longlong *)(lVar3 + 0x38) - uVar2) + *(ulonglong *)(lVar3 + 0x30);
          goto LAB_14339105a;
        }
      }
      else {
        if (uVar1 == 9) {
          uVar2 = *(ulonglong *)(lVar3 + 0x30);
          lVar4 = *(longlong *)(lVar3 + 0x38);
          uVar5 = 6;
        }
        else {
          if (uVar1 != 10) goto LAB_143391066;
          uVar2 = *(ulonglong *)(lVar3 + 0x30);
          lVar4 = *(longlong *)(lVar3 + 0x38);
          uVar5 = 7;
        }
LAB_14339105a:
        (**(code **)(*param_2 + 8))(param_2,lVar3,lVar4,uVar2,uVar5);
      }
LAB_143391066:
    }
    if ((param_3 & 0x20) != 0) {
      FUN_14338ee90(param_1 + 0x30,param_2,*(undefined8 *)(param_1 + 0x28),8);
      uVar2 = 0;
      lVar3 = param_1 + 0x660;
      do {
        for (lVar4 = *(longlong *)(lVar3 + 8); lVar4 != lVar3; lVar4 = *(longlong *)(lVar4 + 8)) {
          (**(code **)(*param_2 + 8))
                    (param_2,*(undefined8 *)(lVar4 + 0x10),lVar4,
                     uVar2 + 1 << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x3f),10);
        }
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar2 < 8);
    }
  }
  return;
}



// FUNCTION 143391110 FUN_143391110 body=143 status=ok
// SIG undefined FUN_143391110(void)

void FUN_143391110(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_1 + 0x658); lVar1 != param_1 + 0x650;
      lVar1 = *(longlong *)(lVar1 + 8)) {
    (**(code **)(*param_2 + 8))
              (param_2,5,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x38),
               *(longlong *)(lVar1 + 0x30) + 0xfffU & 0xfffffffffffff000);
  }
  FUN_14338ef90(param_1 + 0x30,param_2,*(undefined8 *)(param_1 + 0x28),0x85);
  return;
}



// FUNCTION 1433911b0 FUN_1433911b0 body=116 status=ok
// SIG undefined FUN_1433911b0(void)

void FUN_1433911b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = FUN_143391860();
  param_2[2] = lVar1;
  param_2[3] = *(longlong *)(param_1 + 0x720);
  for (lVar1 = *(longlong *)(param_1 + 0x658); lVar1 != param_1 + 0x650;
      lVar1 = *(longlong *)(lVar1 + 8)) {
    *param_2 = *param_2 + 1;
    lVar2 = lVar2 + *(longlong *)(lVar1 + 0x10);
    param_2[1] = lVar2;
  }
  return;
}



// FUNCTION 143391240 FUN_143391240 body=459 status=ok
// SIG undefined FUN_143391240(void)

longlong *
FUN_143391240(longlong *param_1,undefined4 param_2,longlong param_3,ulonglong param_4,
             longlong param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = DAT_146b744f8;
  if (((param_1[0xe7] != 0) && ((ulonglong)param_1[0xe7] < (ulonglong)(param_1[0xe2] + param_3))) &&
     (param_1[0xe8] != 0)) {
    Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
    *(int *)(param_1[0xe8] + 8) = *(int *)(param_1[0xe8] + 8) + 1;
    uVar1 = (**(code **)(*(longlong *)param_1[0xe8] + 8))
                      ((longlong *)param_1[0xe8],*param_1,(param_3 - param_1[0xe7]) + param_1[0xe2])
    ;
    *param_6 = uVar1;
    *(int *)(param_1[0xe8] + 8) = *(int *)(param_1[0xe8] + 8) + -1;
    Scaleform::Lock::DoLock(lVar5 + 0x888);
  }
  *param_6 = 0;
  uVar6 = param_5 + 0x5fU & 0xffffffffffffffe0;
  plVar4 = (longlong *)FUN_1433dbf50(param_1[2],uVar6);
  if (plVar4 != (longlong *)0x0) {
    plVar4[2] = uVar6;
    *(undefined4 *)(plVar4 + 3) = param_2;
    uVar3 = FUN_14207c6a0(param_4 & 0xffffffff);
    plVar4[4] = 0;
    *(uint *)((longlong)plVar4 + 0x1c) = uVar3 & 0xff;
    plVar4[5] = *param_1;
    plVar4[6] = param_3;
    plVar4[7] = 0;
    if (param_3 == 0) {
LAB_1433913da:
      plVar4[1] = param_1[0xcb];
      *plVar4 = (longlong)(param_1 + 0xca);
      *(longlong **)param_1[0xcb] = plVar4;
      param_1[0xcb] = (longlong)plVar4;
      param_1[0xe2] = param_1[0xe2] + plVar4[6];
      *param_6 = 1;
      return plVar4;
    }
    if (param_4 < 0x1000) {
      param_4 = 0x1000;
    }
    lVar5 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_3,param_4);
    plVar4[7] = lVar5;
    if (lVar5 != 0) {
      cVar2 = FUN_14338d6e0(DAT_146b644e0,lVar5,plVar4[6]);
      if (cVar2 != '\0') {
        FUN_14338def0(DAT_146b644e0,plVar4[7],plVar4[6],plVar4);
        goto LAB_1433913da;
      }
      (**(code **)(*(longlong *)param_1[1] + 0x28))
                ((longlong *)param_1[1],plVar4[7],param_3,param_4);
    }
    FUN_1433dc060(param_1[2],plVar4,uVar6);
  }
  return (longlong *)0x0;
}



// FUNCTION 143391420 FUN_143391420 body=579 status=ok
// SIG undefined FUN_143391420(void)

longlong * FUN_143391420(longlong *param_1,longlong param_2,ulonglong param_3,undefined1 *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 local_res20 [2];
  longlong local_48 [2];
  
  if (((param_1[0xe7] != 0) && ((ulonglong)param_1[0xe7] < (ulonglong)(param_1[0xe2] + param_2))) &&
     (param_1[0xe8] != 0)) {
    piVar1 = (int *)(param_1[0xe8] + 8);
    *piVar1 = *piVar1 + 1;
    uVar3 = (**(code **)(*(longlong *)param_1[0xe8] + 8))
                      ((longlong *)param_1[0xe8],*param_1,(param_2 - param_1[0xe7]) + param_1[0xe2])
    ;
    *param_4 = uVar3;
    *(int *)(param_1[0xe8] + 8) = *(int *)(param_1[0xe8] + 8) + -1;
  }
  *param_4 = 0;
  lVar2 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  plVar6 = (longlong *)FUN_1433dbf50(param_1[2],0x40);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) goto LAB_143391645;
  plVar6[2] = 0x40;
  plVar6[3] = 9;
  plVar6[4] = 0;
  plVar6[5] = *param_1;
  plVar6[6] = 0;
  plVar6[7] = 0;
  if (param_2 == 0) {
LAB_143391607:
    plVar6[1] = param_1[0xcb];
    *plVar6 = (longlong)(param_1 + 0xca);
    *(longlong **)param_1[0xcb] = plVar6;
    param_1[0xcb] = (longlong)plVar6;
    param_1[0xe2] = param_1[0xe2] + (ulonglong)(*(uint *)(plVar6 + 4) & 0x7fffffff) + plVar6[6];
    *param_4 = 1;
    plVar9 = plVar6;
  }
  else {
    lVar7 = (**(code **)(*(longlong *)param_1[1] + 0x38))
                      ((longlong *)param_1[1],param_2,param_3,local_48,local_res20);
    plVar6[7] = lVar7;
    if (lVar7 != 0) {
      uVar8 = 0x1000;
      if (0x1000 < param_3) {
        uVar8 = param_3;
      }
      uVar8 = ((uVar8 - 1) + lVar7 & ~(uVar8 - 1)) - lVar7;
      bVar4 = FUN_14207c6a0(local_res20[0]);
      *(uint *)((longlong)plVar6 + 0x1c) = (uint)bVar4;
      plVar6[6] = local_48[0] - uVar8;
      plVar6[4] = uVar8 | 0x80000000;
      plVar6[7] = lVar7 + uVar8;
      cVar5 = FUN_14338d6e0(DAT_146b644e0);
      if (cVar5 != '\0') {
        FUN_14338def0(DAT_146b644e0,plVar6[7],plVar6[6],plVar6);
        goto LAB_143391607;
      }
      (**(code **)(*(longlong *)param_1[1] + 0x40))
                ((longlong *)param_1[1],plVar6[7] - uVar8,plVar6[6] + uVar8,
                 1L << ((byte)*(undefined4 *)((longlong)plVar6 + 0x1c) & 0x3f));
      (**(code **)(*(longlong *)param_1[1] + 0x40))
                ((longlong *)param_1[1],plVar6[7],param_2,param_3);
    }
    FUN_1433dc060(param_1[2],plVar6,plVar6[2]);
  }
LAB_143391645:
  Scaleform::Lock::DoLock(lVar2 + 0x888);
  return plVar9;
}



// FUNCTION 143391670 FUN_143391670 body=137 status=ok
// SIG undefined FUN_143391670(void)

undefined8
FUN_143391670(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  uVar2 = FUN_143391240(param_1,param_2,param_3,param_4,param_5,param_6);
  Scaleform::Lock::DoLock(lVar1 + 0x888);
  return uVar2;
}



// FUNCTION 143391700 FUN_143391700 body=240 status=ok
// SIG undefined FUN_143391700(void)

void FUN_143391700(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_2[6];
  plVar2 = (longlong *)param_1[0xe8];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*param_1,lVar1);
  }
  param_1[0xe2] = param_1[0xe2] - lVar1;
  FUN_14338daf0(DAT_146b644e0,param_2[7],lVar1);
  uVar4 = 1L << ((byte)*(undefined4 *)((longlong)param_2 + 0x1c) & 0x3f);
  plVar2 = (longlong *)param_1[1];
  if ((param_2[4] & 0x80000000U) == 0) {
    uVar3 = 0x1000;
    if (0x1000 < uVar4) {
      uVar3 = uVar4;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2[7],lVar1,uVar3);
  }
  else {
    param_1[0xe2] = param_1[0xe2] - (ulonglong)((uint)param_2[4] & 0x7fffffff);
    uVar3 = (ulonglong)((uint)param_2[4] & 0x7fffffff);
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2[7] - uVar3,uVar3 + lVar1,uVar4);
  }
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  FUN_1433dc060(param_1[2],param_2,param_2[2]);
  return;
}



// FUNCTION 143391800 FUN_143391800 body=78 status=ok
// SIG undefined FUN_143391800(void)

void FUN_143391800(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  FUN_143391700(param_1,param_2);
  Scaleform::Lock::DoLock(lVar1 + 0x888);
  return;
}



// FUNCTION 143391860 FUN_143391860 body=146 status=ok
// SIG undefined FUN_143391860(void)

ulonglong FUN_143391860(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x6e1) != '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x6f0);
    uVar3 = (uVar1 - 1) +
            (((*(longlong *)(param_1 + 0x710) -
              (*(longlong *)(param_1 + 0x648) << ((byte)*(undefined8 *)(param_1 + 0x28) & 0x3f))) -
             *(longlong *)(param_1 + 0x718)) + 0x10U >> 4);
    bVar2 = FUN_14207c6a0((uVar3 / uVar1) * uVar1,uVar3 % uVar1);
    uVar3 = 1L << (bVar2 & 0x3f);
    if (uVar3 < uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 * 4 < uVar3) {
      uVar3 = uVar1 * 4;
    }
    return uVar3;
  }
  return *(ulonglong *)(param_1 + 0x6f0);
}



// FUNCTION 143391900 FUN_143391900 body=253 status=ok
// SIG undefined FUN_143391900(void)

longlong FUN_143391900(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar1 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  uVar4 = *(longlong *)(param_1 + 0x20) + 1;
  if (uVar4 < param_3) {
    uVar4 = param_3;
  }
  uVar3 = uVar4;
  if (0x1000 < uVar4) {
    uVar3 = uVar4 * 2;
  }
  uVar4 = (param_4 - 1) + (param_2 + -1 + uVar3 & ~(uVar4 - 1));
  lVar5 = uVar4 - uVar4 % param_4;
  bVar2 = (byte)*(undefined8 *)(param_1 + 0x28);
  lVar5 = FUN_143391240(param_1,10,lVar5,0x1000,
                        (((ulonglong)((1L << (bVar2 & 0x3f)) + -1 + lVar5) >> (bVar2 & 0x3f)) + 0xf
                        >> 4) << 2,param_5);
  if (lVar5 != 0) {
    FUN_1433dc480(param_1 + 0x28,lVar5);
  }
  Scaleform::Lock::DoLock(lVar1 + 0x888);
  return lVar5;
}



// FUNCTION 143391a10 FUN_143391a10 body=119 status=ok
// SIG undefined FUN_143391a10(void)

longlong FUN_143391a10(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_143391860();
  lVar2 = FUN_143391900(param_1,param_2,param_3,uVar1,param_4);
  if (lVar2 == 0) {
    if (*param_4 == '\0') {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143391900(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x6f0),param_4);
    }
  }
  return lVar2;
}



// FUNCTION 143391a90 FUN_143391a90 body=227 status=ok
// SIG undefined FUN_143391a90(void)

void FUN_143391a90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  lVar1 = *(longlong *)(param_1 + 0x728);
  if (((lVar1 != 0) && (lVar1 != param_2)) && (*(longlong *)(lVar1 + 0x20) == 0)) {
    FUN_1433dc520(param_1 + 0x28);
    FUN_143391700(param_1,*(undefined8 *)(param_1 + 0x728));
  }
  *(undefined8 *)(param_1 + 0x728) = 0;
  if ((*(ulonglong *)(param_1 + 0x710) -
       (*(longlong *)(param_1 + 0x648) << ((byte)*(undefined8 *)(param_1 + 0x28) & 0x3f)) ==
       *(longlong *)(param_1 + 0x718)) ||
     ((ulonglong)(*(longlong *)(param_1 + 0x6f0) << 2) < *(ulonglong *)(param_2 + 0x30))) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x6f8) + *(longlong *)(param_2 + 0x30)) <=
        *(ulonglong *)(param_1 + 0x710)) {
      FUN_1433dc520(param_1 + 0x28,param_2);
      FUN_143391700(param_1,param_2);
    }
  }
  else {
    *(longlong *)(param_1 + 0x728) = param_2;
  }
  Scaleform::Lock::DoLock(lVar2 + 0x888);
  return;
}



// FUNCTION 143391b80 FUN_143391b80 body=305 status=ok
// SIG undefined FUN_143391b80(void)

undefined8 FUN_143391b80(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  if ((*(ulonglong *)(param_1 + 0x708) != 0) && (*(ulonglong *)(param_1 + 0x708) <= param_2)) {
    do {
      lVar2 = FUN_143391420(param_1,param_2,param_3,local_res8);
      if (lVar2 != 0) {
        *(longlong *)(param_1 + 0x720) =
             *(longlong *)(param_1 + 0x720) + *(longlong *)(lVar2 + 0x30);
        return *(undefined8 *)(lVar2 + 0x38);
      }
    } while (local_res8[0] != '\0');
  }
  uVar1 = *(ulonglong *)(param_1 + 0x6e8);
  local_res8[0] = '\0';
  do {
    lVar2 = DAT_146b744f8;
    Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
    lVar3 = FUN_143391240(param_1,9,
                          (((uVar1 - 1) + (param_3 + -1 + param_2 & ~(param_3 - 1U))) / uVar1) *
                          uVar1,param_3,0,local_res8);
    Scaleform::Lock::DoLock(lVar2 + 0x888);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 0x720) = *(longlong *)(param_1 + 0x720) + *(longlong *)(lVar3 + 0x30);
      return *(undefined8 *)(lVar3 + 0x38);
    }
  } while (local_res8[0] != '\0');
  return 0;
}



// FUNCTION 143391cc0 FUN_143391cc0 body=605 status=ok
// SIG undefined FUN_143391cc0(void)

undefined8 FUN_143391cc0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
    uVar5 = FUN_1433923a0(param_1,param_2,param_3,*(undefined8 *)(param_2 + 0x30),param_4,
                          *(undefined4 *)(param_2 + 0x1c));
    return uVar5;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = param_1[0xdd];
  lVar8 = 1L << ((byte)uVar2 & 0x3f);
  uVar3 = *(ulonglong *)(param_2 + 0x30);
  uVar7 = (((uVar7 - 1) + (param_4 + -1 + lVar8 & ~(lVar8 - 1U))) / uVar7) * uVar7;
  if (uVar7 - uVar3 == 0) {
    return *(undefined8 *)(param_2 + 0x38);
  }
  if ((uVar7 < uVar3) && (uVar7 * 2 < (ulonglong)param_1[0xe0])) {
LAB_143391e00:
    uVar5 = FUN_1433923a0(param_1,param_2,param_3,uVar3,uVar7,uVar2);
  }
  else {
    if ((uVar3 <= uVar7 && uVar7 - uVar3 != 0) &&
       (((param_1[0xe7] != 0 && ((ulonglong)param_1[0xe7] < (uVar7 - uVar3) + param_1[0xe2])) &&
        (param_1[0xe8] != 0)))) {
      piVar1 = (int *)(param_1[0xe8] + 8);
      *piVar1 = *piVar1 + 1;
      cVar4 = (**(code **)(*(longlong *)param_1[0xe8] + 8))
                        ((longlong *)param_1[0xe8],*param_1,
                         ((uVar7 - uVar3) - param_1[0xe7]) + param_1[0xe2]);
      *(int *)(param_1[0xe8] + 8) = *(int *)(param_1[0xe8] + 8) + -1;
      if ((cVar4 == '\0') || ((ulonglong)param_1[0xe7] < (uVar7 - uVar3) + param_1[0xe2])) {
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
        goto LAB_143391e00;
      }
    }
    lVar6 = DAT_146b744f8 + 0x888;
    Scaleform::Lock::DoLock(lVar6);
    if ((*(char *)((longlong)param_1 + 0x6e3) == '\0') ||
       (cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                          ((longlong *)param_1[1],*(undefined8 *)(param_2 + 0x38),uVar3,uVar7,lVar8)
       , cVar4 == '\0')) {
      Scaleform::Lock::DoLock(lVar6);
      uVar5 = FUN_1433923a0(param_1,param_2,param_3,uVar3,uVar7,*(undefined4 *)(param_2 + 0x1c));
    }
    else {
      if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
        FUN_14338ddf0(DAT_146b644e0,*(undefined8 *)(param_2 + 0x38),uVar7,uVar3);
      }
      else {
        cVar4 = FUN_14338ddf0(DAT_146b644e0,*(undefined8 *)(param_2 + 0x38),uVar7,uVar3);
        if (cVar4 == '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x30))
                    ((longlong *)param_1[1],*(undefined8 *)(param_2 + 0x38),uVar7,uVar3,lVar8);
          Scaleform::Lock::DoLock(lVar6);
          return 0;
        }
      }
      param_1[0xe2] = param_1[0xe2] + (uVar7 - uVar3);
      param_1[0xe4] = param_1[0xe4] + (uVar7 - uVar3);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(ulonglong *)(param_2 + 0x30) = uVar7;
      Scaleform::Lock::DoLock(lVar6);
    }
  }
  return uVar5;
}



// FUNCTION 143391f30 FUN_143391f30 body=187 status=ok
// SIG undefined FUN_143391f30(void)

longlong FUN_143391f30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char local_res8 [8];
  longlong local_res18 [2];
  
  local_res8[0] = '\0';
  do {
    lVar1 = FUN_1433dc540(param_1 + 0x28,param_2,local_res18);
    if (lVar1 != 0) {
      *(longlong *)(local_res18[0] + 0x20) = *(longlong *)(local_res18[0] + 0x20) + 1;
      return lVar1;
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar2 = FUN_143391860(param_1);
    lVar3 = FUN_143391900(param_1,param_2,lVar1 + 1,uVar2,local_res8);
    if (lVar3 == 0) {
      if (local_res8[0] == '\0') {
        return 0;
      }
      FUN_143391900(param_1,param_2,lVar1 + 1,*(undefined8 *)(param_1 + 0x6f0),local_res8);
    }
  } while (local_res8[0] != '\0');
  return 0;
}



// FUNCTION 143392000 FUN_143392000 body=184 status=ok
// SIG undefined FUN_143392000(void)

longlong FUN_143392000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char local_res8 [8];
  longlong local_res20;
  
  local_res8[0] = '\0';
  do {
    lVar1 = FUN_1433dc6a0(param_1 + 0x28,param_2,param_3,&local_res20);
    if (lVar1 != 0) {
      *(longlong *)(local_res20 + 0x20) = *(longlong *)(local_res20 + 0x20) + 1;
      return lVar1;
    }
    uVar2 = FUN_143391860(param_1);
    lVar1 = FUN_143391900(param_1,param_2,param_3,uVar2,local_res8);
    if (lVar1 == 0) {
      if (local_res8[0] == '\0') {
        return 0;
      }
      FUN_143391900(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x6f0),local_res8);
    }
  } while (local_res8[0] != '\0');
  return 0;
}



// FUNCTION 1433920c0 FUN_1433920c0 body=258 status=ok
// SIG undefined FUN_1433920c0(void)

undefined8 FUN_1433920c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  
  lVar1 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  uVar2 = param_2 + 1 << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x1f);
  uVar4 = 0x1000;
  if (0x1000 < (ulonglong)uVar2 * 4) {
    uVar4 = (ulonglong)uVar2 * 4;
  }
  uVar7 = 0;
  lVar3 = FUN_143391240(param_1,(ulonglong)param_2,uVar4 + 0xfff & 0xfffffffffffff000,0x1000,0,
                        local_res10);
  if (lVar3 != 0) {
    plVar5 = *(longlong **)(lVar3 + 0x38);
    plVar6 = (longlong *)(((ulonglong)param_2 + 0x66) * 0x10 + param_1);
    for (uVar4 = *(ulonglong *)(lVar3 + 0x30) / (ulonglong)uVar2; uVar4 != 0; uVar4 = uVar4 - 1) {
      plVar5[2] = lVar3;
      *plVar5 = *plVar6;
      plVar5[1] = (longlong)plVar6;
      *(longlong **)(*plVar6 + 8) = plVar5;
      *plVar6 = (longlong)plVar5;
      plVar5 = (longlong *)((longlong)plVar5 + (ulonglong)uVar2);
    }
    *(longlong *)(param_1 + 0x718) = *(longlong *)(param_1 + 0x718) + *(longlong *)(lVar3 + 0x30);
    uVar7 = *(undefined8 *)(lVar3 + 0x38);
  }
  Scaleform::Lock::DoLock(lVar1 + 0x888);
  return uVar7;
}



// FUNCTION 1433921d0 FUN_1433921d0 body=116 status=ok
// SIG undefined FUN_1433921d0(void)

void FUN_1433921d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)
          (uint)(*(int *)(param_2 + 0x18) + 1 << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x1f));
  plVar2 = *(longlong **)(param_2 + 0x38);
  for (uVar1 = *(ulonglong *)(param_2 + 0x30) / uVar3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    plVar2 = (longlong *)((longlong)plVar2 + uVar3);
  }
  *(longlong *)(param_1 + 0x718) = *(longlong *)(param_1 + 0x718) - *(longlong *)(param_2 + 0x30);
  FUN_143391700(param_1,param_2);
  return;
}



// FUNCTION 143392250 FUN_143392250 body=182 status=ok
// SIG undefined FUN_143392250(void)

void FUN_143392250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  lVar1 = *(longlong *)(param_1 + 0x730);
  if (((lVar1 != 0) && (lVar1 != param_2)) && (*(longlong *)(lVar1 + 0x20) == 0)) {
    FUN_1433921d0(param_1);
  }
  *(undefined8 *)(param_1 + 0x730) = 0;
  if (*(ulonglong *)(param_1 + 0x710) -
      (*(longlong *)(param_1 + 0x648) << ((byte)*(undefined8 *)(param_1 + 0x28) & 0x3f)) ==
      *(longlong *)(param_1 + 0x718)) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x6f8) + *(longlong *)(param_2 + 0x30)) <=
        *(ulonglong *)(param_1 + 0x710)) {
      FUN_1433921d0(param_1,param_2);
    }
  }
  else {
    *(longlong *)(param_1 + 0x730) = param_2;
  }
  Scaleform::Lock::DoLock(lVar2 + 0x888);
  return;
}



// FUNCTION 143392310 FUN_143392310 body=143 status=ok
// SIG undefined FUN_143392310(void)

longlong * FUN_143392310(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((ulonglong)param_2 * 0x10 + 0x668 + param_1);
  if (plVar1 == (longlong *)((ulonglong)param_2 * 0x10 + 0x660 + param_1)) {
    plVar1 = (longlong *)FUN_1433920c0(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  *(longlong *)plVar1[1] = *plVar1;
  *plVar1 = -1;
  plVar1[1] = -1;
  *(longlong *)(plVar1[2] + 0x20) = *(longlong *)(plVar1[2] + 0x20) + 1;
  *(longlong *)(param_1 + 0x718) =
       *(longlong *)(param_1 + 0x718) -
       (ulonglong)(param_2 + 1 << ((byte)*(undefined8 *)(param_1 + 0x18) & 0x1f));
  return plVar1;
}



// FUNCTION 1433923a0 FUN_1433923a0 body=137 status=ok
// SIG undefined FUN_1433923a0(void)

void * FUN_1433923a0(undefined8 param_1,undefined8 param_2,void *param_3,ulonglong param_4,
                    ulonglong param_5,byte param_6)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1433909d0(param_1,param_5,1L << (param_6 & 0x3f));
  if (_Dst != (void *)0x0) {
    if (param_4 < param_5) {
      param_5 = param_4;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,param_5);
    FUN_143390bf0(param_1,param_2,param_3);
  }
  return _Dst;
}



// FUNCTION 143392430 FUN_143392430 body=91 status=ok
// SIG undefined FUN_143392430(void)

undefined8 * FUN_143392430(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*param_2 != 0) {
    cVar1 = FUN_1433924d0(param_1,param_2[1] + 1);
    if (cVar1 != '\0') {
      _guard_xfg_dispatch_icall_nop((void *)*param_1,(void *)*param_2,param_2[1] * 2 + 2);
    }
  }
  return param_1;
}



// FUNCTION 1433924a0 ~WStringBuffer body=29 status=ok
// SIG undefined ~WStringBuffer(void)

void Scaleform::WStringBuffer::~WStringBuffer(longlong *param_1)

{
  if ((*param_1 != param_1[2]) && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001433924b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1433924d0 FUN_1433924d0 body=206 status=ok
// SIG undefined FUN_1433924d0(void)

undefined8 FUN_1433924d0(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  
  if (((ulonglong)param_1[1] < param_2) && ((ulonglong)param_1[3] <= param_2)) {
    _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_2 * 2 + 2,0);
    if (_Dst != (void *)0x0) {
      if ((void *)*param_1 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,param_1[1] * 2 + 2);
      }
      *(undefined2 *)((longlong)_Dst + param_2 * 2) = 0;
      if ((*param_1 != param_1[2]) && (*param_1 != 0)) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = (longlong)_Dst;
      param_1[1] = param_2;
      return 1;
    }
    return 0;
  }
  if (*param_1 != 0) {
    *(undefined2 *)(*param_1 + param_2 * 2) = 0;
  }
  param_1[1] = param_2;
  return 1;
}



// FUNCTION 1433925b0 FUN_1433925b0 body=100 status=ok
// SIG undefined FUN_1433925b0(void)

undefined8 * FUN_1433925b0(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_2[1];
  _Src = (void *)*param_2;
  if (lVar2 == -1) {
    lVar2 = Scaleform::SFwcslen(_Src);
  }
  cVar1 = FUN_1433924d0(param_1,lVar2);
  if ((cVar1 != '\0') && (lVar2 != 0)) {
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,lVar2 * 2 + 2);
  }
  return param_1;
}



// FUNCTION 143392620 FUN_143392620 body=110 status=ok
// SIG undefined FUN_143392620(void)

undefined8 * FUN_143392620(undefined8 *param_1,ulonglong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432c3580(param_2);
  cVar1 = FUN_1433924d0(param_1,lVar2);
  if ((cVar1 != '\0') && (lVar2 != 0)) {
    FUN_143306bc0(*param_1,lVar2 + 1,(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                  *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  }
  return param_1;
}



// FUNCTION 1433926a0 FUN_1433926a0 body=120 status=ok
// SIG undefined FUN_1433926a0(void)

undefined8 * FUN_1433926a0(undefined8 *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = 0;
  sVar1 = *param_2;
  psVar2 = param_2;
  while (sVar1 != 0) {
    lVar4 = lVar4 + 1;
    psVar2 = psVar2 + 1;
    sVar1 = *psVar2;
  }
  if (lVar4 == -1) {
    lVar4 = Scaleform::SFwcslen(param_2);
  }
  cVar3 = FUN_1433924d0(param_1,lVar4);
  if ((cVar3 != '\0') && (lVar4 != 0)) {
    _guard_xfg_dispatch_icall_nop((void *)*param_1,param_2,lVar4 * 2 + 2);
  }
  return param_1;
}



// FUNCTION 143392720 FUN_143392720 body=94 status=ok
// SIG undefined FUN_143392720(void)

undefined8 * FUN_143392720(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_143305cd0(param_2,0xffffffffffffffff);
  cVar1 = FUN_1433924d0(param_1,lVar2);
  if ((cVar1 != '\0') && (lVar2 != 0)) {
    FUN_143306bc0(*param_1,lVar2 + 1,param_2,0xffffffffffffffff);
  }
  return param_1;
}



// FUNCTION 143392790 SetString body=96 status=ok
// SIG undefined SetString(void)

void Scaleform::WStringBuffer::SetString(undefined8 *param_1,void *param_2,longlong param_3)

{
  char cVar1;
  
  if (param_3 == -1) {
    param_3 = SFwcslen(param_2);
  }
  cVar1 = FUN_1433924d0(param_1,param_3);
  if ((cVar1 != '\0') && (param_3 != 0)) {
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,param_2,param_3 * 2 + 2);
  }
  return;
}



// FUNCTION 143392800 FUN_143392800 body=122 status=ok
// SIG undefined FUN_143392800(void)

void FUN_143392800(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 == -1) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_2 + param_3) != '\0');
  }
  lVar2 = FUN_143305cd0(param_2,param_3);
  cVar1 = FUN_1433924d0(param_1,lVar2);
  if ((cVar1 != '\0') && (param_3 != 0)) {
    FUN_143306bc0(*param_1,lVar2 + 1,param_2,param_3);
  }
  return;
}



// FUNCTION 143392880 FUN_143392880 body=70 status=ok
// SIG undefined FUN_143392880(void)

void FUN_143392880(longlong *param_1)

{
  short sVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if ((0 < lVar2) && (*(short *)(*param_1 + -2 + lVar2 * 2) == 0)) {
    lVar2 = lVar2 + -1;
  }
  while( true ) {
    lVar2 = lVar2 + -1;
    if (lVar2 < 0) {
      return;
    }
    sVar1 = *(short *)(*param_1 + lVar2 * 2);
    if ((sVar1 != 10) && (sVar1 != 0xd)) break;
    param_1[1] = param_1[1] + -1;
    *(undefined2 *)(*param_1 + lVar2 * 2) = 0;
  }
  return;
}



// FUNCTION 143392930 FUN_143392930 body=494 status=ok
// SIG undefined FUN_143392930(void)

ulonglong FUN_143392930(uint param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (((param_1 & 7) == 0) || (param_6 == 0)) {
    return 0xffffffffffffffff;
  }
  param_3 = param_3 + param_5 * 2;
  uVar1 = param_6 - 1;
  for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar2 = *(ushort *)(param_3 + uVar6 * 2);
    uVar3 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar2 >> 8) * 2);
    if ((uVar3 != 0) &&
       ((uVar5 = uVar6, uVar3 == 1 ||
        ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar2 >> 4 & 0xf) + (uint)uVar3) * 2) >>
          (uVar2 & 0xf) & 1) != 0)))) {
      for (; -1 < (longlong)uVar5; uVar5 = uVar5 - 1) {
        uVar2 = *(ushort *)(param_3 + uVar5 * 2);
        uVar3 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar2 >> 8) * 2);
        if (((uVar3 == 0) ||
            ((uVar3 != 1 &&
             ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar2 >> 4 & 0xf) + (uint)uVar3) * 2) >>
               (uVar2 & 0xf) & 1) == 0)))) && (uVar2 != 10)) break;
      }
      if ((longlong)uVar5 < 0) {
        uVar5 = 0xffffffffffffffff;
      }
      if (uVar5 == 0xffffffffffffffff) {
        if (param_3 != 0) goto LAB_143392a73;
        uVar6 = 0xffffffffffffffff;
        goto LAB_143392ad7;
      }
      uVar6 = uVar5 + 1;
    }
    if ((uVar6 != 0) &&
       (cVar4 = FUN_143392c50(param_1,*(undefined2 *)(param_3 + -2 + uVar6 * 2),
                              *(undefined2 *)(param_3 + uVar6 * 2)), cVar4 != '\0')) break;
  }
  goto LAB_143392ad2;
  while ((uVar3 == 1 ||
         ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar2 >> 4 & 0xf) + (uint)uVar3) * 2) >>
           (uVar2 & 0xf) & 1) != 0))) {
LAB_143392a73:
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
    uVar2 = *(ushort *)(param_3 + uVar6 * 2);
    uVar3 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar2 >> 8) * 2);
    if (uVar3 == 0) break;
  }
  uVar5 = uVar5 + 2;
  if (uVar2 != 10) {
    uVar5 = uVar6;
  }
  uVar6 = 0xffffffffffffffff;
  if (uVar5 <= (param_4 - param_5) - 1U) {
    uVar6 = uVar5;
  }
LAB_143392ad2:
  uVar5 = uVar1;
  if (uVar6 != 0) {
LAB_143392ad7:
    uVar5 = FUN_143392b20(param_3,uVar6,(param_4 - param_5) + -1);
    if (uVar5 == 0xffffffffffffffff) {
      uVar5 = uVar1;
    }
  }
  return uVar5;
}



// FUNCTION 143392b20 FUN_143392b20 body=133 status=ok
// SIG undefined FUN_143392b20(void)

ulonglong FUN_143392b20(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    while( true ) {
      uVar1 = *(ushort *)(param_1 + param_2 * 2);
      uVar2 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar1 >> 8) * 2);
      if ((uVar2 == 0) ||
         ((uVar2 != 1 &&
          ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar1 >> 4 & 0xf) + (uint)uVar2) * 2) >>
            (uVar1 & 0xf) & 1) == 0)))) break;
      param_2 = param_2 + 1;
    }
    uVar4 = param_2 + 1;
    if (uVar1 != 10) {
      uVar4 = param_2;
    }
    uVar3 = 0xffffffffffffffff;
    if (uVar4 <= param_3) {
      uVar3 = uVar4;
    }
    return uVar3;
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143392bb0 IsAsianChar body=145 status=ok
// SIG undefined IsAsianChar(void)

uint Scaleform::Render::Text::WordWrapHelper::IsAsianChar(ulonglong param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  
  sVar2 = (short)param_2;
  if (((param_1 & 4) != 0) &&
     (((uVar1 = (uint)(ushort)(sVar2 + 0xef00U), (ushort)(sVar2 + 0xef00U) < 0x100 ||
       (uVar1 = (uint)(ushort)(sVar2 + 0xced0U), (ushort)(sVar2 + 0xced0U) < 0x60)) ||
      (uVar1 = param_2 + 0x5400, (ushort)uVar1 < 0x2ba4)))) {
    return uVar1 & 0xffffff00;
  }
  if ((((0xff < (ushort)(sVar2 + 0xef00U)) && (0xa7af < (ushort)(sVar2 + 0xd000U))) &&
      (0x1ff < (ushort)(sVar2 + 0x700U))) && (0xdc < (ushort)(sVar2 + 0x100U))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143392c50 FUN_143392c50 body=210 status=ok
// SIG undefined FUN_143392c50(void)

ulonglong FUN_143392c50(undefined4 param_1,ushort param_2,undefined2 param_3)

{
  ushort uVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = 0;
  uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(param_2 >> 8) * 2);
  if ((((uVar1 == 0) ||
       ((uVar1 != 1 &&
        ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((param_2 >> 4 & 0xf) + (uint)uVar1) * 2) >>
          (param_2 & 0xf) & 1) == 0)))) &&
      (cVar2 = Scaleform::Render::Text::WordWrapHelper::IsAsianChar(param_1,param_3), cVar2 == '\0')
      ) && ((cVar2 = Scaleform::Render::Text::WordWrapHelper::IsAsianChar(param_1,param_2),
            cVar2 == '\0' && (param_2 != 0x2d)))) {
    return 0;
  }
  cVar2 = FUN_143392d30(param_1,param_3);
  if ((cVar2 == '\0') && (cVar2 = FUN_143392de0(param_1,param_2), cVar2 == '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143392d30 FUN_143392d30 body=165 status=ok
// SIG undefined FUN_143392d30(void)

ulonglong FUN_143392d30(ulonglong param_1,ushort param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)(param_2 >> 8);
  uVar1 = *(ushort *)(&DAT_145afe6e0 + uVar2 * 2);
  if ((uVar1 != 0) &&
     ((uVar1 == 1 ||
      (uVar2 = (ulonglong)
               *(ushort *)(&DAT_145afe6e0 + (ulonglong)((param_2 >> 4 & 0xf) + (uint)uVar1) * 2),
      (*(ushort *)(&DAT_145afe6e0 + (ulonglong)((param_2 >> 4 & 0xf) + (uint)uVar1) * 2) >>
       (param_2 & 0xf) & 1) != 0)))) {
LAB_143392dd2:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  if ((param_1 & 2) != 0) {
    lVar3 = 0;
    lVar4 = 0x70;
    do {
      uVar2 = (lVar4 - lVar3) / 2 + lVar3;
      if (param_2 == (&DAT_1467ce430)[uVar2 * 2]) {
        if (((&DAT_1467ce432)[uVar2 * 4] & 1) != 0) goto LAB_143392dd2;
        break;
      }
      if (param_2 < (ushort)(&DAT_1467ce430)[uVar2 * 2]) {
        lVar4 = uVar2 - 1;
      }
      else {
        lVar3 = uVar2 + 1;
      }
    } while (lVar3 <= lVar4);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143392de0 FUN_143392de0 body=91 status=ok
// SIG undefined FUN_143392de0(void)

ulonglong FUN_143392de0(ulonglong param_1,ushort param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar1 = 0;
    lVar2 = 0x70;
    do {
      in_RAX = (lVar2 - lVar1) / 2 + lVar1;
      if (param_2 == (&DAT_1467ce430)[in_RAX * 2]) {
        return (ulonglong)((byte)(&DAT_1467ce432)[in_RAX * 4] >> 1 & 1);
      }
      if (param_2 < (ushort)(&DAT_1467ce430)[in_RAX * 2]) {
        lVar2 = in_RAX - 1;
      }
      else {
        lVar1 = in_RAX + 1;
      }
    } while (lVar1 <= lVar2);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143392e40 FUN_143392e40 body=64 status=ok
// SIG undefined FUN_143392e40(void)

void FUN_143392e40(longlong *param_1)

{
  undefined2 *puVar1;
  
  Scaleform::WStringBuffer::SetString(param_1 + 3);
  puVar1 = &DAT_145af7bc0;
  if ((undefined2 *)param_1[3] != (undefined2 *)0x0) {
    puVar1 = (undefined2 *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x000143392e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,puVar1,param_1[4]);
  return;
}



// FUNCTION 143392e90 FUN_143392e90 body=257 status=ok
// SIG undefined FUN_143392e90(void)

void FUN_143392e90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  RefCountNTSImpl *pRVar2;
  longlong lVar3;
  RefCountNTSImpl *pRVar4;
  RefCountNTSImpl *this;
  
  if (*(RefCountNTSImpl **)(param_1 + 0x38) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x38));
  }
  plVar1 = DAT_146b62f28;
  pRVar2 = (RefCountNTSImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x90,0);
  pRVar4 = (RefCountNTSImpl *)0x0;
  this = pRVar4;
  if (pRVar2 != (RefCountNTSImpl *)0x0) {
    *(undefined8 *)(pRVar2 + 8) = 0;
    *(undefined4 *)(pRVar2 + 8) = 1;
    *(undefined ***)pRVar2 = &PTR_FUN_145b03c28;
    *(undefined8 *)(pRVar2 + 0x10) = 0;
    *(undefined8 *)(pRVar2 + 0x18) = 0;
    *(undefined4 *)(pRVar2 + 0x20) = 100;
    *(undefined4 *)(pRVar2 + 0x24) = 100;
    *(undefined4 *)(pRVar2 + 0x28) = 1;
    *(longlong **)(pRVar2 + 0x30) = plVar1;
    FUN_1433dd540(pRVar2 + 0x38,plVar1);
    pRVar2[0x88] = (RefCountNTSImpl)0x1;
    this = pRVar2;
  }
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x48);
  if (lVar3 != 0) {
    pRVar4 = (RefCountNTSImpl *)FUN_1433e3c10(lVar3,this);
  }
  *(RefCountNTSImpl **)(param_1 + 0x38) = pRVar4;
  FUN_1433e4270(param_2,pRVar4,0,0xffffffffffffffff);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143392fa0 ShutdownModule body=37 status=ok
// SIG undefined ShutdownModule(void)

void FSteamVRPlugin::ShutdownModule(longlong param_1)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x38) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 143392fd0 FUN_143392fd0 body=66 status=ok
// SIG undefined FUN_143392fd0(void)

undefined8 * FUN_143392fd0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b03b80;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x19;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 143393020 FUN_143393020 body=73 status=ok
// SIG undefined FUN_143393020(void)

void FUN_143393020(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b03b80;
  if (*(RefCountNTSImpl **)(param_1 + 0x38) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  Scaleform::WStringBuffer::~WStringBuffer(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143393070 FUN_143393070 body=165 status=ok
// SIG undefined FUN_143393070(void)

void FUN_143393070(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  if ((RefCountNTSImpl *)param_1[7] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[7]);
    param_1[7] = 0;
  }
  lVar1 = FUN_1432c3580(param_2);
  FUN_1433924d0(param_1 + 3,lVar1 + 1);
  FUN_143306bc0(param_1[3],lVar1 + 1,(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  puVar2 = &DAT_145af7bc0;
  if ((undefined2 *)param_1[3] != (undefined2 *)0x0) {
    puVar2 = (undefined2 *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x000143393111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,puVar2,param_1[4]);
  return;
}



// FUNCTION 143393120 FUN_143393120 body=118 status=ok
// SIG undefined FUN_143393120(void)

void FUN_143393120(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  
  if ((RefCountNTSImpl *)param_1[7] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[7]);
    param_1[7] = 0;
  }
  Scaleform::WStringBuffer::SetString(param_1 + 3,param_2,param_3);
  puVar1 = &DAT_145af7bc0;
  if ((undefined2 *)param_1[3] != (undefined2 *)0x0) {
    puVar1 = (undefined2 *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x000143393192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,puVar1,param_1[4]);
  return;
}



// FUNCTION 1433931b0 FUN_1433931b0 body=61 status=ok
// SIG undefined FUN_1433931b0(void)

void FUN_1433931b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143392e90(param_1,param_4);
  FUN_143393120(param_1,param_2,param_3);
  return;
}



// FUNCTION 143393210 FUN_143393210 body=58 status=ok
// SIG undefined FUN_143393210(void)

undefined8 * FUN_143393210(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b03bd0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x1a;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143393250 FUN_143393250 body=4285 status=ok
// SIG undefined FUN_143393250(void)

longlong FUN_143393250(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  uVar6 = 0;
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x10 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 2;
    puVar4[1] = 0x10;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x10 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 3;
    puVar4[1] = 0x10;
    puVar4[2] = 0;
    puVar4[3] = 1;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x26 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 6;
    puVar4[1] = 0x26;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x28 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 7;
    puVar4[1] = 0x28;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x25 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 4;
    puVar4[1] = 0x25;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x27 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 5;
    puVar4[1] = 0x27;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x21 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 8;
    puVar4[1] = 0x21;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x22 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 9;
    puVar4[1] = 0x22;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x24 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 10;
    puVar4[1] = 0x24;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x23 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xb;
    puVar4[1] = 0x23;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x21 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xc;
    puVar4[1] = 0x21;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x22 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xd;
    puVar4[1] = 0x22;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x24 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xe;
    puVar4[1] = 0x24;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x23 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xf;
    puVar4[1] = 0x23;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -8 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x10;
    puVar4[1] = 8;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x2e < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x11;
    puVar4[1] = 0x2e;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0xd < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x12;
    puVar4[1] = 0xd;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x43 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x13;
    puVar4[1] = 0x43;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x2d < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x13;
    puVar4[1] = 0x2d;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x56 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x14;
    puVar4[1] = 0x56;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x2d < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x14;
    puVar4[1] = 0x2d;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x58 < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x15;
    puVar4[1] = 0x58;
    puVar4[2] = 2;
    puVar4[3] = 0;
  }
  uVar5 = uVar6;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar5) * 0x10) + -0x2e < 0) {
        uVar5 = lVar1 + uVar5 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar5) * 0x10 - 0x10);
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x15;
    puVar4[1] = 0x2e;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar1 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar1 + uVar6) * 0x10) + -0x41 < 0) {
        uVar6 = lVar1 + uVar6 + 1;
        lVar1 = lVar2 + (-1 - lVar1);
      }
      lVar2 = lVar1;
    } while (0 < lVar1);
  }
  FUN_143395580(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  if (uVar6 < *(longlong *)(param_1 + 0x20) - 1U) {
    pvVar3 = (void *)(uVar6 * 0x10 + *(longlong *)(param_1 + 0x18));
    memmove((void *)((longlong)pvVar3 + 0x10),pvVar3,
            (*(longlong *)(param_1 + 0x20) - uVar6) * 0x10 - 0x10);
  }
  puVar7 = (undefined8 *)(uVar6 * 0x10 + *(longlong *)(param_1 + 0x18));
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0x4100000016;
    puVar7[1] = 2;
  }
  return param_1;
}



// FUNCTION 143394330 FUN_143394330 body=121 status=ok
// SIG undefined FUN_143394330(void)

void FUN_143394330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    do {
      lVar2 = lVar1 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar2 + lVar3) * 0x10) -
          *(int *)(param_2 + 4) < 0) {
        lVar3 = lVar2 + lVar3 + 1;
        lVar2 = lVar1 + (-1 - lVar2);
      }
      lVar1 = lVar2;
    } while (0 < lVar2);
  }
  FUN_1433953e0((longlong *)(param_1 + 0x18),lVar3,param_2);
  return;
}



// FUNCTION 1433943b0 FindFirstEntry body=115 status=ok
// SIG undefined FindFirstEntry(void)

longlong Scaleform::GFx::TextKeyMap::FindFirstEntry(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    do {
      lVar2 = lVar1 >> 1;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (lVar2 + uVar3) * 0x10) - param_2 < 0) {
        uVar3 = lVar2 + uVar3 + 1;
        lVar2 = lVar1 + (-1 - lVar2);
      }
      lVar1 = lVar2;
    } while (0 < lVar2);
  }
  if ((*(ulonglong *)(param_1 + 0x20) <= uVar3) ||
     (lVar1 = *(longlong *)(param_1 + 0x18) + uVar3 * 0x10, *(int *)(lVar1 + 4) != param_2)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143394470 FUN_143394470 body=140 status=ok
// SIG undefined FUN_143394470(void)

longlong FUN_143394470(longlong param_1,undefined8 param_2,byte *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = Scaleform::GFx::TextKeyMap::FindFirstEntry();
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(int *)(lVar2 + 0xc) == param_4) &&
       (((uint)*param_3 & *(uint *)(lVar2 + 8)) == *(uint *)(lVar2 + 8))) {
      return lVar2;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar3 = lVar2 - lVar1 >> 4;
    if (*(ulonglong *)(param_1 + 0x20) <= lVar3 + 1U) {
      return 0;
    }
    lVar3 = lVar3 * 0x10;
    if (*(int *)(lVar1 + 0x14 + lVar3) != *(int *)(lVar2 + 4)) break;
    lVar2 = lVar1 + 0x10 + lVar3;
  }
  return 0;
}



// FUNCTION 143394510 FUN_143394510 body=163 status=ok
// SIG undefined FUN_143394510(void)

undefined8 * FUN_143394510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  *param_1 = &PTR_FUN_145b03bd8;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_1432c5250(param_1 + 7);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1432c5250(param_1 + 0xe);
  FUN_1432c5250(param_1 + 0xf);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0xff;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1433945c0 FUN_1433945c0 body=187 status=ok
// SIG undefined FUN_1433945c0(void)

void FUN_1433945c0(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = param_1[0xf];
  *param_1 = &PTR_FUN_145b03bd8;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = param_1[0xe];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = param_1[7];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if ((*(int *)(param_1 + 4) == 0) && (param_1[5] != 0)) {
    FUN_1432de450();
  }
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 1433946a0 FUN_1433946a0 body=56 status=ok
// SIG undefined FUN_1433946a0(void)

void FUN_1433946a0(longlong param_1)

{
  *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x800;
  *(undefined4 *)(param_1 + 0x54) = 0xff000000;
  *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x528;
  *(undefined4 *)(param_1 + 0x50) = 0x43700000;
  return;
}



// FUNCTION 1433946e0 FUN_1433946e0 body=1860 status=ok
// SIG undefined FUN_1433946e0(void)

void FUN_1433946e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined4 local_res10 [2];
  undefined4 uVar18;
  ulonglong uVar17;
  undefined4 uVar20;
  ulonglong uVar19;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar22;
  ulonglong uVar21;
  int local_48 [2];
  longlong local_40;
  
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar13 = *(longlong *)(param_2 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_2 + 0x50;
  }
  FUN_143396900(lVar13,(float *)(param_1 + 0x40));
  dVar15 = (double)*(float *)(param_1 + 0x4c);
  dVar16 = (double)*(float *)(param_1 + 0x48);
  FUN_143300df0(lVar13,"  TextRect = { l: %f, t: %f, r: %f, b: %f }\n",
                (double)*(float *)(param_1 + 0x40),(double)*(float *)(param_1 + 0x44),dVar16,dVar15)
  ;
  uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
  uVar20 = (undefined4)((ulonglong)dVar15 >> 0x20);
  *(undefined1 *)(lVar13 + 0x29) = 0;
  iVar6 = FUN_1433958f0(lVar13,1);
  iVar7 = FUN_1433958f0(lVar13,1);
  if (iVar7 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfffe;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 1;
  }
  iVar7 = FUN_1433958f0(lVar13,1);
  if (iVar7 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfffd;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 2;
  }
  iVar7 = FUN_1433958f0(lVar13,1);
  if (iVar7 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfffb;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 4;
  }
  iVar7 = FUN_1433958f0(lVar13,1);
  if (iVar7 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfff7;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 8;
  }
  uVar4 = *(ushort *)(param_1 + 0x80);
  uVar19 = CONCAT44(uVar20,(uint)(uVar4 >> 3)) & 0xffffffff00000001;
  uVar17 = CONCAT44(uVar18,(uint)(uVar4 >> 2)) & 0xffffffff00000001;
  FUN_143300df0(lVar13,"  WordWrap = %d, Multiline = %d, Password = %d, ReadOnly = %d\n",
                (byte)uVar4 & 1,uVar4 >> 1 & 1,uVar17,uVar19);
  uVar18 = (undefined4)(uVar17 >> 0x20);
  uVar20 = (undefined4)(uVar19 >> 0x20);
  iVar7 = FUN_1433958f0(lVar13,1);
  iVar8 = FUN_1433958f0(lVar13,1);
  iVar9 = FUN_1433958f0(lVar13,1);
  iVar10 = FUN_1433958f0(lVar13,1);
  iVar11 = FUN_1433958f0(lVar13,1);
  if (iVar11 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x10;
  }
  iVar11 = FUN_1433958f0(lVar13,1);
  iVar12 = FUN_1433958f0(lVar13,1);
  if (iVar12 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x20;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xffdf;
  }
  iVar12 = FUN_1433958f0(lVar13,1);
  if (iVar12 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xffbf;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x40;
  }
  iVar12 = FUN_1433958f0(lVar13,1);
  if (iVar12 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xefff;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x1000;
  }
  iVar12 = FUN_1433958f0(lVar13,1);
  if (iVar12 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xff7f;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x80;
  }
  iVar12 = FUN_1433958f0(lVar13,1);
  if (iVar12 == 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x100;
  }
  else {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfeff;
  }
  uVar4 = *(ushort *)(param_1 + 0x80);
  uVar21 = CONCAT44(uVar22,(uint)(uVar4 >> 8)) & 0xffffffff00000001;
  uVar19 = CONCAT44(uVar20,(uint)(uVar4 >> 7)) & 0xffffffff00000001;
  uVar17 = CONCAT44(uVar18,(uint)(uVar4 >> 6)) & 0xffffffff00000001;
  FUN_143300df0(lVar13,
                "  AutoSize = %d, Selectable = %d, Border = %d, Html = %d, UseDeviceFont = %d\n",
                uVar4 >> 4 & 1,uVar4 >> 5 & 1,uVar17,uVar19,uVar21);
  if (iVar9 == 0) {
    if (iVar10 == 0) goto LAB_143394b89;
    FUN_143395ed0(lVar13,param_1 + 0x38);
    FUN_143300df0(lVar13,"  HasFontClass: font class = %s\n",
                  (*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffffc) + 0xc);
  }
  else {
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
      FUN_143396c40(lVar13,2);
    }
    uVar5 = *(uint *)(lVar13 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
    *(uint *)(param_1 + 0x30) = (uint)CONCAT11(uVar1,uVar2);
    FUN_143300df0(lVar13,"  HasFont: font id = %d\n",CONCAT11(uVar1,uVar2),(ulonglong)uVar5,uVar17,
                  uVar19,uVar21);
    local_48[0] = 0;
    local_40 = 0;
    local_res10[0] = *(undefined4 *)(param_1 + 0x30);
    FUN_14330e8c0(*(undefined8 *)(param_2 + 0x38),local_48,local_res10);
    if ((local_48[0] == 0) && (local_40 != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
    if ((*(int *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      FUN_1432de450(*(longlong *)(param_1 + 0x28));
    }
    *(int *)(param_1 + 0x20) = local_48[0];
    *(longlong *)(param_1 + 0x28) = local_40;
    if ((local_48[0] == 0) && (local_40 != 0)) {
      FUN_1432de450();
    }
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar5 = *(uint *)(lVar13 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
  fVar14 = (float)CONCAT11(uVar1,uVar2);
  *(float *)(param_1 + 0x50) = fVar14;
  FUN_143300df0(lVar13,"  FontHeight = %f\n",(double)(fVar14 * 0.05));
LAB_143394b89:
  if (iVar7 != 0) {
    FUN_143396ac0(lVar13,param_1 + 0x54);
    FUN_143300df0(lVar13,"  HasColor\n");
  }
  if (iVar8 != 0) {
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
      FUN_143396c40(lVar13,2);
    }
    uVar5 = *(uint *)(lVar13 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
    *(uint *)(param_1 + 0x58) = (uint)CONCAT11(uVar1,uVar2);
    FUN_143300df0(lVar13,"  HasMaxLength: len = %d\n");
  }
  if (iVar11 != 0) {
    *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) | 0x200;
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 1) {
      FUN_143396d60(lVar13);
    }
    bVar3 = *(byte *)((ulonglong)*(uint *)(lVar13 + 0x4c) + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = *(uint *)(lVar13 + 0x4c) + 1;
    *(uint *)(param_1 + 0x84) = (uint)bVar3;
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
      FUN_143396c40(lVar13,2);
    }
    uVar5 = *(uint *)(lVar13 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
    *(float *)(param_1 + 0x5c) = (float)CONCAT11(uVar1,uVar2);
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
      FUN_143396c40(lVar13,2);
    }
    uVar5 = *(uint *)(lVar13 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
    *(float *)(param_1 + 0x60) = (float)CONCAT11(uVar1,uVar2);
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
      FUN_143396c40(lVar13,2);
    }
    uVar5 = *(uint *)(lVar13 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
    *(float *)(param_1 + 100) = (float)(int)CONCAT11(uVar1,uVar2);
    *(undefined1 *)(lVar13 + 0x29) = 0;
    if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
      FUN_143396c40(lVar13,2);
    }
    uVar5 = *(uint *)(lVar13 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar13 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar13 + 0x60));
    *(uint *)(lVar13 + 0x4c) = uVar5 + 2;
    iVar7 = (int)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x68) = (float)iVar7;
    FUN_143300df0(lVar13,
                  "  HasLayout: alignment = %d, leftmarg = %f, rightmarg = %f, indent = %f, leading = %f\n"
                  ,*(undefined4 *)(param_1 + 0x84),(double)*(float *)(param_1 + 0x5c),
                  (double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 100),(double)iVar7
                 );
  }
  FUN_143395ed0(lVar13,param_1 + 0x78);
  if (iVar6 != 0) {
    FUN_143395ed0(lVar13,param_1 + 0x70);
  }
  FUN_143300df0(lVar13,"EditTextChar, varname = %s, text = %s\n",
                (*(ulonglong *)(param_1 + 0x78) & 0xfffffffffffffffc) + 0xc,
                (*(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc) + 0xc);
  return;
}



// FUNCTION 143394e40 FUN_143394e40 body=249 status=ok
// SIG undefined FUN_143394e40(void)

void FUN_143394e40(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar5 = *(uint *)(lVar4 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar4 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar4 + 0x60));
  *(uint *)(lVar4 + 0x4c) = uVar5 + 2;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x90,0);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_143394510(lVar4);
  }
  uVar5 = (uint)CONCAT11(uVar1,uVar2);
  FUN_143300df0(param_1 + 0x20,"EditTextChar, id = %d\n",uVar5);
  FUN_1433946e0(lVar4,param_1,*param_2);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    local_res8[0] = uVar5;
    FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res8,lVar4);
  }
  if (lVar4 != 0) {
    FUN_1432de450(lVar4);
  }
  return;
}



// FUNCTION 143394f40 FUN_143394f40 body=470 status=ok
// SIG undefined FUN_143394f40(void)

void FUN_143394f40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  uint local_res8 [2];
  int local_48 [2];
  longlong *local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar4 = *(uint *)(lVar5 + 0x4c);
  uVar6 = CONCAT11(*(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(lVar5 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar5 + 0x60)));
  *(uint *)(lVar5 + 0x4c) = uVar4 + 2;
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  iVar3 = FUN_1433958f0(lVar5,2);
  uVar4 = FUN_1433958f0(lVar5,3);
  fVar8 = (float)FUN_143395450(lVar5);
  fVar9 = (float)FUN_143395450(lVar5);
  cVar2 = FUN_143396c00(lVar5);
  if (cVar2 != '\0') {
    FUN_143300df0(param_1 + 0x20,"CSMTextSettings, id = %d\n",uVar6);
    pcVar7 = "Internal";
    if (iVar3 == 0) {
      pcVar7 = "System";
    }
    FUN_143300df0(param_1 + 0x20,"  FlagType = %s, GridFit = %s\n",pcVar7,
                  (&PTR_DAT_145b03e18)[uVar4]);
    FUN_143300df0(param_1 + 0x20,"  Thinkness = %f, Sharpnesss = %f\n",(double)fVar8,(double)fVar9);
  }
  local_48[0] = 0;
  local_40 = (longlong *)0x0;
  local_res8[0] = (uint)uVar6;
  cVar2 = FUN_14330e8c0(*(undefined8 *)(param_1 + 0x38),local_48,local_res8);
  plVar1 = local_40;
  if (cVar2 != '\0') {
    if (local_48[0] != 0) {
      return;
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    uVar4 = (**(code **)(*local_40 + 0x10))(local_40);
    if ((uVar4 & 0xff00) == 0x8300) {
      *(ushort *)(plVar1 + 0x10) = *(ushort *)(plVar1 + 0x10) | 0x400;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((uVar4 & 0xff00) == 0x8200) {
        *(byte *)(plVar1 + 0xd) = *(byte *)(plVar1 + 0xd) | 1;
      }
    }
  }
  if ((local_48[0] == 0) && (local_40 != (longlong *)0x0)) {
    FUN_1432de450();
  }
  return;
}



// FUNCTION 143395120 FUN_143395120 body=197 status=ok
// SIG undefined FUN_143395120(void)

void FUN_143395120(RefCountNTSImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b03c28;
  FUN_1433dd700();
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x18)) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x18)) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433951f0 FUN_1433951f0 body=89 status=ok
// SIG undefined FUN_1433951f0(void)

undefined8 FUN_1433951f0(undefined8 param_1,ulonglong param_2)

{
  FUN_143395120();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143395250 FUN_143395250 body=143 status=ok
// SIG undefined FUN_143395250(void)

RefCountImplCore * FUN_143395250(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b03b80;
  if (*(RefCountNTSImpl **)(param_1 + 0x38) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  Scaleform::WStringBuffer::~WStringBuffer(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1433952e0 FUN_1433952e0 body=89 status=ok
// SIG undefined FUN_1433952e0(void)

undefined8 FUN_1433952e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433945c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143395340 FUN_143395340 body=124 status=ok
// SIG undefined FUN_143395340(void)

RefCountImplCore * FUN_143395340(RefCountImplCore *param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1433953e0 FUN_1433953e0 body=111 status=ok
// SIG undefined FUN_1433953e0(void)

void FUN_1433953e0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 *puVar2;
  
  FUN_143395580(param_1,param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(param_2 * 0x10 + *param_1);
    memmove((void *)((longlong)_Src + 0x10),_Src,(param_1[1] - param_2) * 0x10 - 0x10);
  }
  puVar2 = (undefined8 *)(param_2 * 0x10 + *param_1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = param_3[1];
    *puVar2 = *param_3;
    puVar2[1] = uVar1;
  }
  return;
}



// FUNCTION 143395450 FUN_143395450 body=117 status=ok
// SIG undefined FUN_143395450(void)

undefined4 FUN_143395450(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 4) {
    FUN_143396c40(param_1,4);
  }
  uVar5 = *(uint *)(param_1 + 0x4c);
  lVar6 = *(longlong *)(param_1 + 0x60);
  uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 3) + lVar6);
  uVar2 = *(undefined1 *)((ulonglong)(uVar5 + 2) + lVar6);
  uVar3 = *(undefined1 *)((ulonglong)(uVar5 + 1) + lVar6);
  uVar4 = *(undefined1 *)((ulonglong)uVar5 + lVar6);
  *(uint *)(param_1 + 0x4c) = uVar5 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
}



// FUNCTION 1433954d0 FUN_1433954d0 body=165 status=ok
// SIG undefined FUN_1433954d0(void)

void FUN_1433954d0(longlong *param_1,undefined8 param_2,longlong param_3)

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



// FUNCTION 143395580 FUN_143395580 body=134 status=ok
// SIG undefined FUN_143395580(void)

void FUN_143395580(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1433955c7;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1433955c7;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1433954d0(param_1,param_1,uVar4);
LAB_1433955c7:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    lVar2 = uVar1 * 0x10 + *param_1;
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 4) = 0xffffffff;
      }
      lVar2 = lVar2 + 0x10;
    }
  }
  return;
}



// FUNCTION 143395610 FUN_143395610 body=107 status=ok
// SIG undefined FUN_143395610(void)

undefined8 *
FUN_143395610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_FUN_145b03ec8;
  param_1[4] = 0;
  FUN_1432c55c0(param_1 + 6,param_3);
  param_1[0xc] = (longlong)param_1 + 0x6c;
  *(undefined4 *)(param_1 + 0xd) = 0x200;
  FUN_1433957e0(param_1,param_2,param_4,param_5);
  return param_1;
}



// FUNCTION 143395690 FUN_143395690 body=203 status=ok
// SIG undefined FUN_143395690(void)

undefined8 *
FUN_143395690(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_145b03ec8;
  param_1[4] = 0;
  FUN_1432c55c0(param_1 + 6,param_4);
  param_1[0xc] = param_2;
  uVar1 = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = param_3;
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[1] = param_5;
  param_1[2] = param_6;
  if (param_6 != 0) {
    uVar1 = *(undefined4 *)(param_6 + 0x18);
  }
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1432c3510(param_1 + 6);
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 143395770 FUN_143395770 body=99 status=ok
// SIG undefined FUN_143395770(void)

void FUN_143395770(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = param_1[6];
  *param_1 = &PTR_FUN_145b03ec8;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  *param_1 = &PTR_FUN_145af8cf0;
  return;
}



// FUNCTION 1433957e0 FUN_1433957e0 body=187 status=ok
// SIG undefined FUN_1433957e0(void)

void FUN_1433957e0(longlong param_1,RefCountImpl *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  *(RefCountImpl **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(longlong *)(param_1 + 0x10) = param_4;
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(param_4 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (param_2 == (RefCountImpl *)0x0) {
    FUN_1432c3510(param_1 + 0x30);
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_2 + 8))(param_2);
    Scaleform::String::operator=(param_1 + 0x30,uVar2);
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (param_2 == (RefCountImpl *)0x0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)param_2 + 0x20))(param_2);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  return;
}



// FUNCTION 1433958b0 ShutDown body=52 status=ok
// SIG undefined ShutDown(void)

void Scaleform::GFx::Stream::ShutDown(longlong param_1)

{
  FUN_1432c3510(param_1 + 0x30);
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1433958f0 FUN_1433958f0 body=175 status=ok
// SIG undefined FUN_1433958f0(void)

uint FUN_1433958f0(longlong param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = 0;
  while (0 < param_2) {
    bVar3 = *(byte *)(param_1 + 0x29);
    if (bVar3 == 0) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
        FUN_143396c40(param_1,1);
      }
      uVar2 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
      *(undefined1 *)(param_1 + 0x28) = uVar2;
      *(undefined1 *)(param_1 + 0x29) = 8;
    }
    else if (param_2 < (int)(uint)bVar3) {
      bVar1 = *(byte *)(param_1 + 0x28);
      bVar3 = bVar3 - (char)param_2;
      *(byte *)(param_1 + 0x29) = bVar3;
      param_2 = 0;
      *(byte *)(param_1 + 0x28) = ('\x01' << (bVar3 & 0x1f)) - 1U & bVar1;
      uVar4 = uVar4 | bVar1 >> (bVar3 & 0x1f);
    }
    else {
      param_2 = param_2 - (uint)bVar3;
      *(undefined1 *)(param_1 + 0x29) = 0;
      uVar4 = uVar4 | (uint)*(byte *)(param_1 + 0x28) << ((byte)param_2 & 0x1f);
    }
  }
  return uVar4;
}



// FUNCTION 1433959b0 ReadSInt body=41 status=ok
// SIG undefined ReadSInt(void)

ulonglong Scaleform::GFx::Stream::ReadSInt(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1433958f0();
  if (((uint)uVar1 >> (param_2 - 1U & 0x1f) & 1) != 0) {
    uVar1 = (ulonglong)((uint)uVar1 | -1 << ((byte)param_2 & 0x1f));
  }
  return uVar1;
}



// FUNCTION 1433959e0 FUN_1433959e0 body=123 status=ok
// SIG undefined FUN_1433959e0(void)

byte FUN_1433959e0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396c40(param_1,1);
    }
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
    *(undefined1 *)(param_1 + 0x29) = 7;
    *(byte *)(param_1 + 0x28) = bVar1 & 0x7f;
    return bVar1 >> 7;
  }
  bVar1 = *(byte *)(param_1 + 0x28);
  bVar2 = *(char *)(param_1 + 0x29) - 1;
  *(byte *)(param_1 + 0x29) = bVar2;
  *(byte *)(param_1 + 0x28) = ('\x01' << (bVar2 & 0x1f)) - 1U & bVar1;
  return bVar1 >> (bVar2 & 0x1f);
}



// FUNCTION 143395a70 FUN_143395a70 body=120 status=ok
// SIG undefined FUN_143395a70(void)

uint FUN_143395a70(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396c40(param_1,1);
    }
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
    bVar2 = (byte)uVar3;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (bVar1 & 0x7f) << (bVar2 & 0x1f);
  } while ((uVar3 < 0x20) && ((char)bVar1 < '\0'));
  return uVar4;
}



// FUNCTION 143395af0 FUN_143395af0 body=130 status=ok
// SIG undefined FUN_143395af0(void)

uint FUN_143395af0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = 0;
  do {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396c40(param_1,1);
    }
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
    uVar3 = uVar2 + 7;
    uVar4 = uVar4 | (bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
  } while ((uVar3 < 0x20) && (uVar2 = uVar3, (char)bVar1 < '\0'));
  if ((bVar1 & 0x40) != 0) {
    uVar4 = uVar4 - (1 << ((byte)uVar3 & 0x1f));
  }
  return uVar4;
}



// FUNCTION 143395b80 FUN_143395b80 body=204 status=ok
// SIG undefined FUN_143395b80(void)

undefined8 FUN_143395b80(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 8) {
    FUN_143396c40(param_1,8);
  }
  lVar10 = *(longlong *)(param_1 + 0x60);
  uVar9 = *(uint *)(param_1 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)uVar9 + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 1;
  uVar2 = *(undefined1 *)((ulonglong)(uVar9 + 1) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 2;
  uVar3 = *(undefined1 *)((ulonglong)(uVar9 + 2) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 3;
  uVar4 = *(undefined1 *)((ulonglong)(uVar9 + 3) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 4;
  uVar5 = *(undefined1 *)((ulonglong)(uVar9 + 4) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 5;
  uVar6 = *(undefined1 *)((ulonglong)(uVar9 + 5) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 6;
  uVar7 = *(undefined1 *)((ulonglong)(uVar9 + 6) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 7;
  uVar8 = *(undefined1 *)((ulonglong)(uVar9 + 7) + lVar10);
  *(uint *)(param_1 + 0x4c) = uVar9 + 8;
  return CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
}



// FUNCTION 143395c60 GetTagEndPosition body=18 status=ok
// SIG undefined GetTagEndPosition(void)

undefined4 Scaleform::GFx::Stream::GetTagEndPosition(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x48) - 1;
  if (uVar1 < 2) {
    return *(undefined4 *)(param_1 + 0x40 + (ulonglong)uVar1 * 4);
  }
  return 0;
}



// FUNCTION 143395c80 FUN_143395c80 body=113 status=ok
// SIG undefined FUN_143395c80(void)

void FUN_143395c80(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = iVar1 - *(int *)(param_1 + 0x50);
  if ((iVar2 <= param_2) && (param_2 < iVar1)) {
    *(int *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x50) - iVar1) + param_2;
    return;
  }
  if ((*(char *)(param_1 + 0x58) != '\0') || (*(int *)(param_1 + 0x4c) + iVar2 != param_2)) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                      (*(longlong **)(param_1 + 0x20),param_2,0);
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(int *)(param_1 + 0x54) = param_2;
    }
  }
  return;
}



// FUNCTION 143395d00 FUN_143395d00 body=165 status=ok
// SIG undefined FUN_143395d00(void)

ushort FUN_143395d00(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 2) {
    FUN_143396c40(param_1,2);
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  uVar1 = CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 1) + *(longlong *)(param_1 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x60)));
  *(uint *)(param_1 + 0x4c) = uVar2 + 2;
  uVar2 = uVar1 & 0x3f;
  uVar1 = uVar1 >> 6;
  if (uVar2 == 0x3f) {
    uVar2 = FUN_143300e60(param_1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_143300df0(param_1,"---------------Tag type = %d, Tag length = %d\n",uVar1,uVar2);
  }
  *(uint *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x48) * 4) =
       (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + *(int *)(param_1 + 0x4c) + uVar2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return uVar1;
}



// FUNCTION 143395db0 FUN_143395db0 body=230 status=ok
// SIG undefined FUN_143395db0(void)

uint FUN_143395db0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  uVar3 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 2) {
    FUN_143396c40(param_1,2);
  }
  uVar4 = *(uint *)(param_1 + 0x4c);
  uVar1 = CONCAT11(*(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(param_1 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(param_1 + 0x60)));
  *(uint *)(param_1 + 0x4c) = uVar4 + 2;
  uVar4 = uVar1 & 0x3f;
  uVar2 = (uint)(uVar1 >> 6);
  if (uVar4 == 0x3f) {
    uVar4 = FUN_143300e60(param_1);
  }
  param_2[1] = uVar3;
  *param_2 = uVar2;
  param_2[2] = uVar4;
  param_2[3] = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + *(int *)(param_1 + 0x4c);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_143300df0(param_1,"---------------Tag type = %d, Tag length = %d, offset = %d\n",uVar2,uVar4
                  ,uVar3);
  }
  *(uint *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x48) * 4) =
       (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + *(int *)(param_1 + 0x4c) + uVar4;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return uVar2;
}



// FUNCTION 143395ea0 FUN_143395ea0 body=34 status=ok
// SIG undefined FUN_143395ea0(void)

void FUN_143395ea0(longlong param_1)

{
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  FUN_143395c80(param_1,*(undefined4 *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x48) * 4));
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}



// FUNCTION 143395ed0 FUN_143395ed0 body=359 status=ok
// SIG undefined FUN_143395ed0(void)

bool FUN_143395ed0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uVar6 = uVar4;
  while( true ) {
    uVar3 = local_30;
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396c40(param_1,1);
    }
    uVar1 = uVar3 + 1;
    cVar2 = *(char *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
    if (cVar2 == '\0') break;
    if (uVar1 < uVar3) {
      uVar5 = uVar1;
      if (uVar1 < uVar4 >> 1) {
LAB_143395f6b:
        FUN_1432bbfd0(&local_38,&local_38,uVar5);
        uVar4 = local_28;
        uVar6 = local_38;
      }
    }
    else if (uVar4 < uVar1) {
      uVar5 = (uVar1 >> 2) + uVar1;
      goto LAB_143395f6b;
    }
    local_30 = uVar1;
    if ((char *)(uVar3 + uVar6) != (char *)0x0) {
      *(char *)(uVar3 + uVar6) = cVar2;
    }
  }
  if (uVar1 < uVar3) {
    uVar5 = uVar1;
    if (uVar4 >> 1 <= uVar1) goto LAB_143395fd6;
  }
  else {
    if (uVar1 <= uVar4) goto LAB_143395fd6;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432bbfd0(&local_38,&local_38,uVar5);
  uVar6 = local_38;
LAB_143395fd6:
  if ((undefined1 *)(uVar3 + uVar6) != (undefined1 *)0x0) {
    *(undefined1 *)(uVar3 + uVar6) = 0;
  }
  if (uVar1 != 0) {
    FUN_1432c3b60(param_2,uVar6,uVar3);
  }
  else {
    FUN_1432c3510();
  }
  if (uVar6 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
  }
  return uVar1 != 0;
}



// FUNCTION 143396040 FUN_143396040 body=131 status=ok
// SIG undefined FUN_143396040(void)

undefined8 FUN_143396040(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined **local_18;
  longlong local_10;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396c40(param_1,1);
  }
  cVar1 = *(char *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  if (cVar1 == '\0') {
    FUN_1432c3510(param_2);
    return 0;
  }
  local_18 = &PTR_FUN_145b03ed8;
  local_10 = param_1;
  FUN_1432c3a60(param_2,&local_18,cVar1);
  return 1;
}



// FUNCTION 1433960d0 FUN_1433960d0 body=370 status=ok
// SIG undefined FUN_1433960d0(void)

void * FUN_1433960d0(longlong param_1,longlong *param_2)

{
  void *_Size;
  char cVar1;
  void *pvVar2;
  void *_Dst;
  void *pvVar3;
  void *pvVar4;
  void *_Src;
  void *local_48;
  void *local_40;
  void *local_38;
  
  _Dst = (void *)0x0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_48 = (void *)0x0;
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  pvVar3 = _Dst;
  _Src = _Dst;
  while( true ) {
    pvVar2 = local_40;
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396c40(param_1,1);
    }
    _Size = (void *)((longlong)pvVar2 + 1);
    cVar1 = *(char *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
    if (cVar1 == '\0') break;
    if (_Size < pvVar2) {
      if (_Size < (void *)((ulonglong)pvVar3 >> 1)) {
LAB_14339616c:
        FUN_1432bbfd0(&local_48,&local_48);
        pvVar3 = local_38;
        _Src = local_48;
      }
    }
    else if (pvVar3 < _Size) goto LAB_14339616c;
    local_40 = _Size;
    if ((char *)((longlong)pvVar2 + (longlong)_Src) != (char *)0x0) {
      *(char *)((longlong)pvVar2 + (longlong)_Src) = cVar1;
    }
  }
  if (_Size < pvVar2) {
    pvVar4 = _Size;
    if ((void *)((ulonglong)pvVar3 >> 1) <= _Size) goto LAB_1433961d7;
  }
  else {
    if (_Size <= pvVar3) goto LAB_1433961d7;
    pvVar4 = (void *)(((ulonglong)_Size >> 2) + (longlong)_Size);
  }
  FUN_1432bbfd0(&local_48,&local_48,pvVar4);
  _Src = local_48;
LAB_1433961d7:
  if ((undefined1 *)((longlong)pvVar2 + (longlong)_Src) != (undefined1 *)0x0) {
    *(undefined1 *)((longlong)pvVar2 + (longlong)_Src) = 0;
  }
  if (_Size != (void *)0x0) {
    _Dst = (void *)(**(code **)(*param_2 + 0x50))(param_2,_Size,0);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(size_t)_Size);
  }
  if (_Src != (void *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Src);
  }
  return _Dst;
}



// FUNCTION 143396250 FUN_143396250 body=236 status=ok
// SIG undefined FUN_143396250(void)

longlong FUN_143396250(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396c40(param_1,1);
  }
  bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    lVar3 = (**(code **)(*param_2 + 0x50))(param_2,bVar1 + 1,0);
    lVar5 = 0;
    uVar6 = 0;
    if ((ulonglong)uVar4 != 0) {
      do {
        *(undefined1 *)(param_1 + 0x29) = 0;
        if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
          FUN_143396c40(param_1,1);
        }
        uVar2 = *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
        *(undefined1 *)(lVar5 + lVar3) = uVar2;
        lVar5 = lVar5 + 1;
        uVar6 = uVar4;
      } while (lVar5 < (longlong)(ulonglong)uVar4);
    }
    *(undefined1 *)((int)uVar6 + lVar3) = 0;
    return lVar3;
  }
  return 0;
}



// FUNCTION 143396350 FUN_143396350 body=51 status=ok
// SIG undefined FUN_143396350(void)

void FUN_143396350(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                    (*(longlong **)(param_1 + 0x20),
                     (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) +
                     *(int *)(param_1 + 0x4c),0);
  if (iVar1 != -1) {
    *(int *)(param_1 + 0x54) = iVar1;
    *(undefined8 *)(param_1 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 143396390 FUN_143396390 body=429 status=ok
// SIG undefined FUN_143396390(void)

void FUN_143396390(longlong param_1,float *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[7] = 0.0;
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[5] = 1.0;
  param_2[6] = 0.0;
  iVar2 = FUN_1433959e0();
  if (iVar2 != 0) {
    uVar3 = FUN_1433958f0(param_1,5);
    uVar4 = FUN_1433958f0(param_1,uVar3);
    bVar1 = (byte)uVar3;
    uVar5 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar4 & uVar5) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    *param_2 = (float)(int)uVar4 * 1.5258789e-05;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar5) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[5] = (float)(int)uVar4 * 1.5258789e-05;
  }
  iVar2 = FUN_1433959e0(param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_1433958f0(param_1,5);
    uVar4 = FUN_1433958f0(param_1,uVar3);
    bVar1 = (byte)uVar3;
    uVar5 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar4 & uVar5) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[4] = (float)(int)uVar4 * 1.5258789e-05;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar5) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[1] = (float)(int)uVar4 * 1.5258789e-05;
  }
  iVar2 = FUN_1433958f0(param_1,5);
  if (0 < iVar2) {
    uVar4 = FUN_1433958f0(param_1,iVar2);
    bVar1 = (byte)iVar2;
    uVar5 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar4 & uVar5) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[3] = (float)(int)uVar4;
    uVar4 = FUN_1433958f0(param_1,iVar2);
    if ((uVar4 & uVar5) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[7] = (float)(int)uVar4;
  }
  return;
}



// FUNCTION 143396550 FUN_143396550 body=423 status=ok
// SIG undefined FUN_143396550(void)

void FUN_143396550(longlong param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  iVar1 = FUN_1433959e0();
  iVar2 = FUN_1433959e0(param_1);
  uVar3 = FUN_1433958f0(param_1,4);
  bVar5 = (byte)uVar3;
  if (iVar2 == 0) {
    *param_2 = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
  }
  else {
    uVar4 = FUN_1433958f0(param_1,uVar3);
    uVar6 = 1 << (bVar5 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    *param_2 = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[1] = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[2] = (float)(int)uVar4 * 0.00390625;
  }
  param_2[3] = 1.0;
  if (iVar1 == 0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
  }
  else {
    uVar4 = FUN_1433958f0(param_1,uVar3);
    uVar6 = 1 << (bVar5 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[4] = (float)(int)uVar4;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[5] = (float)(int)uVar4;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[7] = 1.0;
    param_2[6] = (float)(int)uVar4;
  }
  Scaleform::Render::Cxform::Normalize(param_2);
  return;
}



// FUNCTION 143396700 FUN_143396700 body=497 status=ok
// SIG undefined FUN_143396700(void)

void FUN_143396700(longlong param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  iVar1 = FUN_1433959e0();
  iVar2 = FUN_1433959e0(param_1);
  uVar3 = FUN_1433958f0(param_1,4);
  bVar5 = (byte)uVar3;
  if (iVar2 == 0) {
    *param_2 = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
    param_2[3] = 1.0;
  }
  else {
    uVar4 = FUN_1433958f0(param_1,uVar3);
    uVar6 = 1 << (bVar5 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    *param_2 = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[1] = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[2] = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[3] = (float)(int)uVar4 * 0.00390625;
  }
  if (iVar1 == 0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
  }
  else {
    uVar4 = FUN_1433958f0(param_1,uVar3);
    uVar6 = 1 << (bVar5 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[4] = (float)(int)uVar4;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[5] = (float)(int)uVar4;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[6] = (float)(int)uVar4;
    uVar4 = FUN_1433958f0(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[7] = (float)(int)uVar4;
  }
  Scaleform::Render::Cxform::Normalize(param_2);
  return;
}



// FUNCTION 143396900 FUN_143396900 body=227 status=ok
// SIG undefined FUN_143396900(void)

void FUN_143396900(longlong param_1,float *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  uVar2 = FUN_1433958f0(param_1,5);
  uVar3 = FUN_1433958f0(param_1,uVar2);
  bVar1 = (byte)uVar2;
  uVar4 = 1 << (bVar1 - 1 & 0x1f);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  *param_2 = (float)(int)uVar3;
  uVar3 = FUN_1433958f0(param_1,uVar2);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  param_2[2] = (float)(int)uVar3;
  uVar3 = FUN_1433958f0(param_1,uVar2);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  param_2[1] = (float)(int)uVar3;
  uVar3 = FUN_1433958f0(param_1,uVar2);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  param_2[3] = (float)(int)uVar3;
  return;
}



// FUNCTION 143396a00 FUN_143396a00 body=174 status=ok
// SIG undefined FUN_143396a00(void)

void FUN_143396a00(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396c40(param_1,1);
  }
  uVar1 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  param_2[2] = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396c40(param_1,1);
  }
  uVar1 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  param_2[1] = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396c40(param_1,1);
  }
  uVar1 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  *param_2 = uVar1;
  param_2[3] = 0xff;
  return;
}



// FUNCTION 143396ac0 FUN_143396ac0 body=80 status=ok
// SIG undefined FUN_143396ac0(void)

void FUN_143396ac0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_143396a00();
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396c40(param_1,1);
  }
  uVar1 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}



// FUNCTION 143396b20 FUN_143396b20 body=198 status=ok
// SIG undefined FUN_143396b20(void)

uint FUN_143396b20(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 < *(uint *)(param_1 + 0x50)) {
    uVar4 = *(uint *)(param_1 + 0x50) - uVar1;
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    memmove(param_2,(void *)((ulonglong)uVar1 + *(longlong *)(param_1 + 0x60)),(ulonglong)uVar4);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar4;
    param_3 = param_3 - uVar4;
    param_2 = (void *)((longlong)param_2 + (ulonglong)uVar4);
  }
  if (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x4c)) {
    *(undefined8 *)(param_1 + 0x4c) = 0;
  }
  if (param_3 != 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                      (*(longlong **)(param_1 + 0x20),param_2,param_3);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    uVar4 = uVar4 + iVar3;
    if (iVar3 < (int)param_3) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar3 + (longlong)param_2),0,(ulonglong)(param_3 - iVar3));
    }
  }
  return uVar4;
}



// FUNCTION 143396bf0 FUN_143396bf0 body=5 status=ok
// SIG undefined FUN_143396bf0(void)

undefined8 FUN_143396bf0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 143396c00 FUN_143396c00 body=7 status=ok
// SIG undefined FUN_143396c00(void)

uint FUN_143396c00(longlong param_1)

{
  return *(uint *)(param_1 + 0x18) & 1;
}



// FUNCTION 143396c10 IsVerboseParseShape body=10 status=ok
// SIG undefined IsVerboseParseShape(void)

uint Scaleform::GFx::Stream::IsVerboseParseShape(longlong param_1)

{
  return *(uint *)(param_1 + 0x18) >> 4 & 1;
}



// FUNCTION 143396c40 FUN_143396c40 body=282 status=ok
// SIG undefined FUN_143396c40(void)

bool FUN_143396c40(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x50) == 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 < *(uint *)(param_1 + 0x50)) {
    memmove(*(void **)(param_1 + 0x60),
            (void *)((ulonglong)uVar1 + (longlong)*(void **)(param_1 + 0x60)),
            (ulonglong)(*(uint *)(param_1 + 0x50) - uVar1));
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x4c) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0x200;
    *(void **)(param_1 + 0x60) = (void *)(param_1 + 0x6c);
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x6c),0,0x200);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x68);
    bVar3 = false;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x68) - *(uint *)(param_1 + 0x50);
    iVar5 = (**(code **)(*plVar2 + 0x50))
                      (plVar2,(ulonglong)*(uint *)(param_1 + 0x50) + *(longlong *)(param_1 + 0x60),
                       iVar6);
    if (iVar6 <= iVar5) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      return true;
    }
    if (0 < iVar5) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)*(uint *)(param_1 + 0x50) + *(longlong *)(param_1 + 0x60)),0,
               (ulonglong)(*(int *)(param_1 + 0x68) - *(uint *)(param_1 + 0x50)));
    iVar5 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c);
    bVar3 = param_2 <= iVar5;
    if (iVar5 < param_2) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x4c) + param_2;
      return bVar3;
    }
  }
  return bVar3;
}



// FUNCTION 143396d60 FUN_143396d60 body=10 status=ok
// SIG undefined FUN_143396d60(void)

void FUN_143396d60(undefined8 param_1)

{
  FUN_143396c40(param_1,1);
  return;
}



// FUNCTION 143396d70 FUN_143396d70 body=518 status=ok
// SIG undefined FUN_143396d70(void)

uint FUN_143396d70(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar12;
  uint uVar13;
  longlong lVar11;
  
  uVar1 = (int)param_1[3] + param_2;
  uVar13 = (1 << (8U - (char)(int)param_1[3] & 0x1f)) - 1;
  cVar2 = (&DAT_145b03f58)[param_2];
  if (cVar2 == '\0') {
    return 0;
  }
  if (cVar2 == '\x01') {
    if (8 < uVar1) {
LAB_143396f1f:
      lVar8 = param_1[2];
      uVar13 = (*(byte *)(lVar8 + *param_1) & uVar13) << 8 | (uint)*(byte *)(lVar8 + 1 + *param_1);
      lVar8 = lVar8 + 1;
      iVar9 = 0x10;
      goto LAB_143396f43;
    }
    iVar9 = 8;
    uVar13 = *(byte *)(param_1[2] + *param_1) & uVar13;
  }
  else {
    if (cVar2 == '\x02') {
      if (uVar1 < 0x11) goto LAB_143396f1f;
      lVar8 = param_1[2];
      lVar11 = *param_1;
      iVar9 = 0x18;
      uVar13 = ((*(byte *)(lVar11 + lVar8) & uVar13) << 8 | (uint)*(byte *)(lVar11 + 1 + lVar8)) <<
               8 | (uint)*(byte *)(lVar11 + 2 + lVar8);
      lVar8 = lVar8 + 2;
    }
    else {
      if (cVar2 == '\x03') {
        lVar8 = param_1[2];
        lVar11 = *param_1;
        if (uVar1 < 0x19) {
          iVar9 = 0x18;
          uVar13 = ((*(byte *)(lVar11 + lVar8) & uVar13) << 8 | (uint)*(byte *)(lVar11 + 1 + lVar8))
                   << 8 | (uint)*(byte *)(lVar11 + 2 + lVar8);
          lVar8 = lVar8 + 2;
          goto LAB_143396f43;
        }
      }
      else {
        if (cVar2 != '\x04') {
          uVar13 = 0;
          goto LAB_143396dd0;
        }
        lVar8 = param_1[2];
        if (0x20 < uVar1) {
          lVar11 = *param_1;
          bVar3 = *(byte *)(lVar11 + 1 + lVar8);
          bVar4 = *(byte *)(lVar11 + lVar8);
          bVar5 = *(byte *)(lVar11 + 2 + lVar8);
          bVar6 = *(byte *)(lVar11 + 3 + lVar8);
          param_1[2] = lVar8 + 4;
          bVar7 = *(byte *)(lVar8 + 4 + lVar11);
          bVar12 = (byte)(uVar1 - 0x20);
          *(uint *)(param_1 + 3) = uVar1 - 0x20;
          return (uint)(bVar7 >> (8 - bVar12 & 0x1f)) |
                 ((((bVar4 & uVar13) << 8 | (uint)bVar3) << 8 | (uint)bVar5) << 8 | (uint)bVar6) <<
                 (bVar12 & 0x1f);
        }
        lVar11 = *param_1;
      }
      pbVar10 = (byte *)(lVar11 + lVar8);
      iVar9 = 0x20;
      uVar13 = (((*pbVar10 & uVar13) << 8 | (uint)pbVar10[1]) << 8 | (uint)pbVar10[2]) << 8 |
               (uint)pbVar10[3];
      lVar8 = lVar8 + 3;
    }
LAB_143396f43:
    param_1[2] = lVar8;
  }
  iVar9 = iVar9 - uVar1;
  if (iVar9 != 0) {
    *(int *)(param_1 + 3) = 8 - iVar9;
    return uVar13 >> ((byte)iVar9 & 0x1f);
  }
LAB_143396dd0:
  param_1[2] = param_1[2] + 1;
  *(undefined4 *)(param_1 + 3) = 0;
  return uVar13;
}



// FUNCTION 143396f80 FUN_143396f80 body=548 status=ok
// SIG undefined FUN_143396f80(void)

void FUN_143396f80(longlong *param_1,float *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 1.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  lVar2 = param_1[3];
  bVar1 = *(byte *)(param_1[2] + *param_1);
  uVar4 = (int)lVar2 + 1;
  *(uint *)(param_1 + 3) = uVar4;
  if (7 < uVar4) {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = param_1[2] + 1;
  }
  if ((1 << (7U - (char)(int)lVar2 & 0x1f) & (uint)bVar1) != 0) {
    uVar3 = FUN_143396d70(param_1,5);
    uVar4 = FUN_143396d70(param_1,uVar3);
    bVar1 = (byte)uVar3;
    uVar6 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    *param_2 = (float)(int)uVar4 * 1.5258789e-05;
    uVar4 = FUN_143396d70(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[5] = (float)(int)uVar4 * 1.5258789e-05;
  }
  lVar2 = param_1[3];
  bVar1 = *(byte *)(param_1[2] + *param_1);
  uVar4 = (int)lVar2 + 1;
  *(uint *)(param_1 + 3) = uVar4;
  if (7 < uVar4) {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = param_1[2] + 1;
  }
  if ((1 << (7U - (char)(int)lVar2 & 0x1f) & (uint)bVar1) != 0) {
    uVar3 = FUN_143396d70(param_1,5);
    uVar4 = FUN_143396d70(param_1,uVar3);
    bVar1 = (byte)uVar3;
    uVar6 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[4] = (float)(int)uVar4 * 1.5258789e-05;
    uVar4 = FUN_143396d70(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[1] = (float)(int)uVar4 * 1.5258789e-05;
  }
  iVar5 = FUN_143396d70(param_1,5);
  if (0 < iVar5) {
    uVar4 = FUN_143396d70(param_1,iVar5);
    bVar1 = (byte)iVar5;
    uVar6 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[3] = (float)(int)uVar4;
    uVar4 = FUN_143396d70(param_1,iVar5);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar1 & 0x1f);
    }
    param_2[7] = (float)(int)uVar4;
  }
  return;
}



// FUNCTION 1433971b0 FUN_1433971b0 body=444 status=ok
// SIG undefined FUN_1433971b0(void)

void FUN_1433971b0(longlong *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  *(undefined4 *)(param_1 + 3) = 1;
  bVar2 = *(byte *)(param_1[2] + *param_1);
  *(undefined4 *)(param_1 + 3) = 2;
  uVar3 = FUN_143396d70(param_1,4);
  bVar5 = (byte)uVar3;
  if ((bVar2 & 0x40) == 0) {
    *param_2 = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
  }
  else {
    uVar4 = FUN_143396d70(param_1,uVar3);
    uVar6 = 1 << (bVar5 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    *param_2 = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_143396d70(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[1] = (float)(int)uVar4 * 0.00390625;
    uVar4 = FUN_143396d70(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[2] = (float)(int)uVar4 * 0.00390625;
  }
  param_2[3] = 1.0;
  if ((bVar1 & 0x80) == 0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
  }
  else {
    uVar4 = FUN_143396d70(param_1,uVar3);
    uVar6 = 1 << (bVar5 - 1 & 0x1f);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[4] = (float)(int)uVar4;
    uVar4 = FUN_143396d70(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[5] = (float)(int)uVar4;
    uVar4 = FUN_143396d70(param_1,uVar3);
    if ((uVar4 & uVar6) != 0) {
      uVar4 = uVar4 | -1 << (bVar5 & 0x1f);
    }
    param_2[7] = 1.0;
    param_2[6] = (float)(int)uVar4;
  }
  Scaleform::Render::Cxform::Normalize(param_2);
  return;
}



// FUNCTION 143397380 FUN_143397380 body=518 status=ok
// SIG undefined FUN_143397380(void)

void FUN_143397380(longlong *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  *(undefined4 *)(param_1 + 3) = 1;
  bVar2 = *(byte *)(param_1[2] + *param_1);
  *(undefined4 *)(param_1 + 3) = 2;
  uVar4 = FUN_143396d70(param_1,4);
  bVar3 = (byte)uVar4;
  if ((bVar2 & 0x40) == 0) {
    *param_2 = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
    param_2[3] = 1.0;
  }
  else {
    uVar5 = FUN_143396d70(param_1,uVar4);
    uVar6 = 1 << (bVar3 - 1 & 0x1f);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    *param_2 = (float)(int)uVar5 * 0.00390625;
    uVar5 = FUN_143396d70(param_1,uVar4);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[1] = (float)(int)uVar5 * 0.00390625;
    uVar5 = FUN_143396d70(param_1,uVar4);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[2] = (float)(int)uVar5 * 0.00390625;
    uVar5 = FUN_143396d70(param_1,uVar4);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[3] = (float)(int)uVar5 * 0.00390625;
  }
  if ((bVar1 & 0x80) == 0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
  }
  else {
    uVar5 = FUN_143396d70(param_1,uVar4);
    uVar6 = 1 << (bVar3 - 1 & 0x1f);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[4] = (float)(int)uVar5;
    uVar5 = FUN_143396d70(param_1,uVar4);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[5] = (float)(int)uVar5;
    uVar5 = FUN_143396d70(param_1,uVar4);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[6] = (float)(int)uVar5;
    uVar5 = FUN_143396d70(param_1,uVar4);
    if ((uVar5 & uVar6) != 0) {
      uVar5 = uVar5 | -1 << (bVar3 & 0x1f);
    }
    param_2[7] = (float)(int)uVar5;
  }
  Scaleform::Render::Cxform::Normalize(param_2);
  return;
}



// FUNCTION 143397590 FUN_143397590 body=133 status=ok
// SIG undefined FUN_143397590(void)

undefined8 * FUN_143397590(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = param_1[6];
  *param_1 = &PTR_FUN_145b03ec8;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  *param_1 = &PTR_FUN_145af8cf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 143397620 FUN_143397620 body=136 status=ok
// SIG undefined FUN_143397620(void)

void FUN_143397620(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x29) = 0;
      if (*(int *)(lVar2 + 0x50) - *(int *)(lVar2 + 0x4c) < 1) {
        FUN_143396c40(lVar2,1);
      }
      uVar1 = *(undefined1 *)((ulonglong)*(uint *)(lVar2 + 0x4c) + *(longlong *)(lVar2 + 0x60));
      *(uint *)(lVar2 + 0x4c) = *(uint *)(lVar2 + 0x4c) + 1;
      *(undefined1 *)(uVar3 + param_2) = uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



// FUNCTION 1433976b0 releaseFont body=58 status=ok
// SIG undefined releaseFont(void)

void Scaleform::Render::FontCacheHandleRef::releaseFont(undefined8 param_1)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1,0);
  if (this != (RefCountImpl *)0x0) {
    FUN_1433979b0(this,param_1);
    RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1433976f0 FUN_1433976f0 body=33 status=ok
// SIG undefined FUN_1433976f0(void)

void FUN_1433976f0(undefined8 param_1)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1,0);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
    return;
  }
  return;
}



// FUNCTION 143397720 ProcessKillList body=152 status=ok
// SIG undefined ProcessKillList(void)

void Scaleform::Render::FontCacheHandleManager::ProcessKillList(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  Lock::DoLock(param_1 + 0x10);
  lVar1 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != lVar1) {
    bVar3 = false;
    lVar4 = *(longlong *)(param_1 + 0x58);
    do {
      lVar2 = *(longlong *)(lVar4 + 8);
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_14332afa0(*(longlong *)(param_1 + 0x68),lVar4);
        bVar3 = true;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      lVar4 = lVar2;
    } while (lVar2 != lVar1);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (bVar3) {
      GlyphCache::MergeCacheSlots(*(undefined8 *)(param_1 + 0x68));
    }
  }
  Lock::DoLock(param_1 + 0x10);
  return;
}



// FUNCTION 1433977c0 FUN_1433977c0 body=261 status=ok
// SIG undefined FUN_1433977c0(void)

void FUN_1433977c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  RefCountImpl *this;
  longlong lVar4;
  
  Scaleform::Lock::DoLock(param_1 + 0x10);
  lVar1 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != lVar1) {
    bVar3 = false;
    lVar4 = *(longlong *)(param_1 + 0x58);
    do {
      lVar2 = *(longlong *)(lVar4 + 8);
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_14332afa0(*(longlong *)(param_1 + 0x68),lVar4);
        bVar3 = true;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      lVar4 = lVar2;
    } while (lVar2 != lVar1);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (bVar3) {
      Scaleform::Render::GlyphCache::MergeCacheSlots(*(undefined8 *)(param_1 + 0x68));
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar1 = param_1 + 0x40;
  if (lVar4 != lVar1) {
    do {
      lVar2 = *(longlong *)(lVar4 + 8);
      *(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0x30) = 0;
      this = (RefCountImpl *)
             Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync
                       (*(longlong *)(lVar4 + 0x18) + 0x28,0);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      *(undefined8 *)(lVar4 + 0x18) = 0;
      (**(code **)(*DAT_146b62f28 + 0x60))();
      lVar4 = lVar2;
    } while (lVar2 != lVar1);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(param_1 + 0x48) = lVar1;
  }
  Scaleform::Lock::DoLock(param_1 + 0x10);
  return;
}



// FUNCTION 1433978d0 FUN_1433978d0 body=203 status=ok
// SIG undefined FUN_1433978d0(void)

undefined8 FUN_1433978d0(RefCountImpl *param_1,longlong param_2)

{
  RefCountImpl *pRVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_2 + 0x28) == 0) {
    Scaleform::RefCountImpl::AddRef(param_1);
    *(RefCountImpl **)(param_2 + 0x28) = param_1;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    Scaleform::Lock::DoLock(param_1 + 0x10);
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))
                       (*(longlong **)(param_1 + 0x60),0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0xffffffffffffffff;
      puVar4[1] = 0xffffffffffffffff;
      puVar4[2] = param_1;
      puVar4[3] = param_2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    if (*(longlong *)(param_2 + 0x30) == 0) {
      Scaleform::Lock::DoLock(param_1 + 0x10);
      return 0;
    }
    plVar2 = *(longlong **)(param_2 + 0x30);
    pRVar1 = param_1 + 0x40;
    lVar3 = *(longlong *)pRVar1;
    plVar2[1] = (longlong)pRVar1;
    *plVar2 = lVar3;
    *(longlong **)(*(longlong *)pRVar1 + 8) = plVar2;
    *(longlong **)pRVar1 = plVar2;
    Scaleform::Lock::DoLock(param_1 + 0x10);
  }
  return *(undefined8 *)(param_2 + 0x30);
}



// FUNCTION 1433979b0 FUN_1433979b0 body=131 status=ok
// SIG undefined FUN_1433979b0(void)

void FUN_1433979b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x10);
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    *plVar2 = *plVar1;
    plVar2[1] = (longlong)plVar1;
    *(longlong **)(*plVar1 + 8) = plVar2;
    *plVar1 = (longlong)plVar2;
    plVar2[3] = 0;
  }
  Scaleform::Lock::DoLock(param_1 + 0x10);
  return;
}



// FUNCTION 143397a40 FUN_143397a40 body=210 status=ok
// SIG undefined FUN_143397a40(void)

void FUN_143397a40(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  RefCountImpl *this;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = ((longlong)param_2 + 4) * 0x10 + param_1;
  if (*(longlong *)(lVar4 + 8) != lVar4) {
    bVar2 = false;
    lVar3 = *(longlong *)(lVar4 + 8);
    do {
      lVar1 = *(longlong *)(lVar3 + 8);
      if (param_2 == 1) {
        if (*(longlong *)(param_1 + 0x68) != 0) {
          FUN_14332afa0(*(longlong *)(param_1 + 0x68),lVar3);
          bVar2 = true;
        }
      }
      else {
        *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x30) = 0;
        this = (RefCountImpl *)
               Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync
                         (*(longlong *)(lVar3 + 0x18) + 0x28,0);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      lVar3 = lVar1;
    } while (lVar1 != lVar4);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    if (bVar2) {
      Scaleform::Render::GlyphCache::MergeCacheSlots(*(undefined8 *)(param_1 + 0x68));
    }
  }
  return;
}



// FUNCTION 143397b20 FUN_143397b20 body=78 status=ok
// SIG undefined FUN_143397b20(void)

ulonglong FUN_143397b20(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(ulonglong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  uVar1 = FUN_1432c4390((longlong)puVar2 + 0xc,*puVar2 & 0x7fffffffffffffff,0x1505);
  return (ulonglong)*(uint *)(param_2 + 0x20) ^ *(ulonglong *)(param_2 + 0x10) >> 7 ^
         *(ulonglong *)(param_2 + 0x10) ^ uVar1;
}



// FUNCTION 143397b70 FUN_143397b70 body=501 status=ok
// SIG undefined FUN_143397b70(void)

undefined8 * FUN_143397b70(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong local_38;
  longlong lStack_30;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afa268;
  uVar9 = 0;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar6;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  FUN_143302e40(param_1 + 4,*(undefined8 *)(param_2 + 0x28));
  uVar8 = uVar9;
  for (lVar10 = *(longlong *)(param_2 + 0x28); lVar10 != 0; lVar10 = lVar10 + -1) {
    lVar4 = *(longlong *)(param_2 + 0x20);
    lVar5 = param_1[4];
    plVar11 = *(longlong **)(uVar8 + 0x10 + lVar4);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    plVar11 = *(longlong **)(uVar8 + 0x10 + lVar5);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    *(undefined8 *)(uVar8 + 0x10 + lVar5) = *(undefined8 *)(uVar8 + 0x10 + lVar4);
    uVar3 = *(undefined4 *)(uVar8 + 0x20 + lVar4);
    uVar1 = *(undefined4 *)(uVar8 + 0x2c + lVar4);
    uVar2 = *(undefined4 *)(uVar8 + 0x28 + lVar4);
    *(undefined4 *)(uVar8 + 0x24 + lVar5) = *(undefined4 *)(uVar8 + 0x24 + lVar4);
    *(undefined4 *)(uVar8 + 0x28 + lVar5) = uVar2;
    *(undefined4 *)(uVar8 + 0x2c + lVar5) = uVar1;
    *(undefined4 *)(uVar8 + 0x20 + lVar5) = uVar3;
    uVar1 = *(undefined4 *)(uVar8 + 0x30 + lVar4);
    *(undefined4 *)(uVar8 + 0x34 + lVar5) = *(undefined4 *)(uVar8 + 0x34 + lVar4);
    *(undefined4 *)(uVar8 + 0x30 + lVar5) = uVar1;
    *(undefined4 *)(uVar8 + 0x38 + lVar5) = *(undefined4 *)(uVar8 + 0x38 + lVar4);
    uVar8 = uVar8 + 0x40;
  }
  lVar10 = *(longlong *)(param_2 + 0x38);
  plVar11 = (longlong *)(param_2 + 0x38);
  if (lVar10 == 0) {
    plVar11 = (longlong *)0x0;
    uVar9 = 0;
  }
  else {
    plVar7 = (longlong *)(lVar10 + 0x10);
    do {
      if (*plVar7 != -2) break;
      uVar9 = uVar9 + 1;
      plVar7 = plVar7 + 5;
    } while (uVar9 <= *(ulonglong *)(lVar10 + 8));
  }
  do {
    do {
      if (((plVar11 == (longlong *)0x0) || (lStack_30 = *plVar11, lStack_30 == 0)) ||
         (*(longlong *)(lStack_30 + 8) < (longlong)uVar9)) {
        return param_1;
      }
      local_38 = lStack_30 + 0x20 + uVar9 * 0x28;
      lStack_30 = lStack_30 + (uVar9 * 5 + 5) * 8;
      FUN_14339d5a0(param_1 + 7,param_1 + 7,&local_38);
      uVar8 = *(ulonglong *)(*plVar11 + 8);
    } while (((longlong)uVar8 < (longlong)uVar9) || (uVar9 = uVar9 + 1, uVar8 < uVar9));
    plVar7 = (longlong *)(*plVar11 + uVar9 * 0x28 + 0x10);
    do {
      if (*plVar7 != -2) break;
      uVar9 = uVar9 + 1;
      plVar7 = plVar7 + 5;
    } while (uVar9 <= uVar8);
  } while( true );
}



// FUNCTION 143397d90 FUN_143397d90 body=200 status=ok
// SIG undefined FUN_143397d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_143397d90(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x28) <= (param_2 & 0xffffffff)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b74540) {
      _Init_thread_header(&DAT_146b74540);
      if (DAT_146b74540 == -1) {
        DAT_146b74510 = 0;
        _DAT_146b74538 = 0xffffffff;
        _DAT_146b74508 = 1;
        _DAT_146b74500 = &PTR_FUN_145afa260;
        _DAT_146b74520 = 0;
        uRam0000000146b74528 = 0;
        atexit(`Scaleform::GFx::TextureGlyphData::GetTextureGlyph'::`5'::
               _dynamic_atexit_destructor_for__dummyTextureGlyph__);
        _Init_thread_footer(&DAT_146b74540);
      }
    }
    return &DAT_146b74500;
  }
  return (undefined *)((param_2 & 0xffffffff) * 0x40 + *(longlong *)(param_1 + 0x20));
}



// FUNCTION 143397e60 FUN_143397e60 body=247 status=ok
// SIG undefined FUN_143397e60(void)

void FUN_143397e60(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar5 = 0;
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_40 = 1;
  local_48 = &PTR_FUN_145afa260;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  local_10 = 0xffffffff;
  if (lVar4 != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      plVar3 = *(longlong **)(lVar5 + 0x10 + lVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      *(longlong **)(lVar5 + 0x10 + lVar2) = local_38;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar2);
      *puVar1 = local_28;
      puVar1[1] = uStack_20;
      *(undefined4 *)(lVar5 + 0x30 + lVar2) = local_18;
      *(undefined4 *)(lVar5 + 0x34 + lVar2) = local_14;
      *(undefined4 *)(lVar5 + 0x38 + lVar2) = local_10;
      lVar5 = lVar5 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_48);
  return;
}



// FUNCTION 143397f60 AddTextureGlyph body=81 status=ok
// SIG undefined AddTextureGlyph(void)

void Scaleform::GFx::TextureGlyphData::AddTextureGlyph
               (longlong param_1,uint param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((*(ulonglong *)(param_1 + 0x28) <= uVar1) &&
     (FUN_143302e40(param_1 + 0x20,param_2 + 1), *(ulonglong *)(param_1 + 0x28) <= uVar1)) {
    return;
  }
  FUN_14339e150(uVar1 * 0x40 + *(longlong *)(param_1 + 0x20),param_3);
  return;
}



// FUNCTION 143397fc0 FUN_143397fc0 body=107 status=ok
// SIG undefined FUN_143397fc0(void)

void FUN_143397fc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20;
  undefined8 local_18;
  int *local_10;
  
  local_28[0] = 0;
  local_20 = param_3;
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
  }
  local_10 = local_28;
  local_18 = param_2;
  FUN_14339d5a0(param_1 + 0x38,param_1 + 0x38,&local_18);
  if ((local_28[0] == 0) && (local_20 != 0)) {
    FUN_1432de450();
  }
  return;
}



// FUNCTION 143398040 FUN_143398040 body=161 status=ok
// SIG undefined FUN_143398040(void)

void FUN_143398040(longlong param_1,undefined8 param_2,int *param_3)

{
  int local_28 [2];
  longlong local_20;
  undefined8 local_18;
  int *local_10;
  
  local_28[0] = 0;
  local_20 = 0;
  if ((*param_3 == 0) && (*(longlong *)(param_3 + 2) != 0)) {
    Scaleform::GFx::Resource::AddRef();
    if ((local_28[0] == 0) && (local_20 != 0)) {
      FUN_1432de450();
    }
  }
  local_28[0] = *param_3;
  local_20 = *(longlong *)(param_3 + 2);
  local_10 = local_28;
  local_18 = param_2;
  FUN_14339d5a0(param_1 + 0x38,param_1 + 0x38,&local_18);
  if ((local_28[0] == 0) && (local_20 != 0)) {
    FUN_1432de450();
  }
  return;
}



// FUNCTION 1433980f0 FUN_1433980f0 body=106 status=ok
// SIG undefined FUN_1433980f0(void)

void FUN_1433980f0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  uVar2 = 0;
  uVar3 = uVar2;
  if (uVar1 != 0) {
    do {
      (**(code **)(*param_2 + 8))(param_2,uVar2 & 0xffffffff,*(longlong *)(param_1 + 0x20) + uVar3);
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x40;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 143398160 FUN_143398160 body=250 status=ok
// SIG undefined FUN_143398160(void)

void FUN_143398160(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  plVar5 = (longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar6 = 0;
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar6 = 0;
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar6 = uVar6 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar6 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar6)) {
        return;
      }
      uVar4 = FUN_143317160(lVar1 + 0x28 + uVar6 * 0x28,param_3);
      local_res8[0] = *(undefined4 *)(uVar6 * 0x28 + 0x20 + *plVar5);
      (**(code **)(*param_2 + 8))(param_2,local_res8,uVar4);
      uVar2 = *(ulonglong *)(*plVar5 + 8);
    } while (((longlong)uVar2 < (longlong)uVar6) || (uVar6 = uVar6 + 1, uVar2 < uVar6));
    plVar3 = (longlong *)(*plVar5 + (uVar6 * 5 + 2) * 8);
    do {
      if (*plVar3 != -2) break;
      uVar6 = uVar6 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar6 <= uVar2);
  } while( true );
}



// FUNCTION 143398260 FUN_143398260 body=111 status=ok
// SIG undefined FUN_143398260(void)

undefined8 * FUN_143398260(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa1a8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145b03fc8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 1433982e0 FUN_1433982e0 body=233 status=ok
// SIG undefined FUN_1433982e0(void)

undefined8 * FUN_1433982e0(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  char *_Dst;
  longlong lVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa1a8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145b03fc8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (param_2[lVar1] != '\0');
  _Dst = (char *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar2 + 2,0);
  param_1[7] = _Dst;
  lVar1 = -1;
  if (_Dst != (char *)0x0) {
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (param_2[lVar2 + 1] != '\0');
    strcpy_s(_Dst,lVar2 + 2,param_2);
  }
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x2000;
  return param_1;
}



// FUNCTION 1433983d0 FUN_1433983d0 body=390 status=ok
// SIG undefined FUN_1433983d0(void)

void FUN_1433983d0(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_145b03fc8;
  FUN_1433a10f0(param_1 + 0x48,param_1 + 0x48,0);
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8) + 1;
    lVar1 = lVar2;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10 + lVar2) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountImpl *)*puVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar4);
    }
    puVar4 = puVar4 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x48));
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  *(undefined ***)param_1 = &PTR_FUN_145afa1a8;
  Scaleform::Render::FontCacheHandleRef::releaseFont(param_1 + 0x28);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143398560 FUN_143398560 body=4047 status=ok
// SIG undefined FUN_143398560(void)

void FUN_143398560(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  RefCountImpl *pRVar10;
  undefined8 uVar11;
  RefCountImpl *pRVar12;
  undefined8 *puVar13;
  char *pcVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  ulonglong uVar18;
  RefCountImpl *pRVar19;
  RefCountImpl *this;
  RefCountImpl *pRVar20;
  ushort uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ushort uVar28;
  uint *puVar29;
  RefCountImpl *pRVar30;
  bool bVar31;
  float fVar32;
  uint in_stack_fffffffffffffee8;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  RefCountImpl *local_f0;
  RefCountImpl *local_e8;
  RefCountImpl *local_e0;
  uint local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  uint local_c0;
  float local_bc;
  uint *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  int local_a0;
  longlong *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 *local_70;
  float *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar15 = *(longlong *)(param_2 + 0x418);
  if (lVar15 == 0) {
    lVar15 = param_2 + 0x50;
  }
  local_98 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x38);
  iVar7 = *param_3;
  bVar4 = true;
  if (iVar7 == 10) {
    FUN_143300df0(lVar15,"reading DefineFont\n");
    local_b8 = (uint *)0x0;
    local_f8 = (*(int *)(lVar15 + 0x54) - *(int *)(lVar15 + 0x50)) + *(int *)(lVar15 + 0x4c);
    local_b0 = 0;
    local_a8 = 0;
    *(undefined1 *)(lVar15 + 0x29) = 0;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
      FUN_143396c40(lVar15,2);
    }
    uVar25 = *(uint *)(lVar15 + 0x4c);
    uVar2 = *(undefined1 *)((ulonglong)(uVar25 + 1) + *(longlong *)(lVar15 + 0x60));
    uVar3 = *(undefined1 *)((ulonglong)uVar25 + *(longlong *)(lVar15 + 0x60));
    *(uint *)(lVar15 + 0x4c) = uVar25 + 2;
    FUN_143300ed0(&local_b8,&local_b8,1);
    puVar29 = local_b8;
    uVar27 = 1;
    local_b0 = 1;
    if (local_b8 != (uint *)0x0) {
      *local_b8 = (uint)CONCAT11(uVar2,uVar3);
    }
    FUN_143300df0(lVar15,"offset[0] = %d\n",*local_b8);
    lVar26 = 1;
    iVar7 = (int)*puVar29 >> 1;
    local_100 = 1;
    if (1 < iVar7) {
      do {
        *(undefined1 *)(lVar15 + 0x29) = 0;
        if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
          FUN_143396c40(lVar15,2);
        }
        uVar21 = CONCAT11(*(undefined1 *)
                           ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60))
                          ,*(undefined1 *)
                            ((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60)));
        *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
        if (uVar21 == 0) {
          bVar4 = false;
          break;
        }
        uVar18 = uVar27 + 1;
        local_fc = (uint)uVar21;
        if (uVar18 < uVar27) {
          uVar22 = uVar18;
          if (uVar18 < local_a8 >> 1) {
LAB_143398708:
            FUN_143300ed0(&local_b8,&local_b8,uVar22);
            puVar29 = local_b8;
          }
        }
        else if (local_a8 < uVar18) {
          uVar22 = (uVar18 >> 2) + uVar18;
          goto LAB_143398708;
        }
        iVar24 = local_100;
        if (puVar29 + uVar27 != (uint *)0x0) {
          puVar29[uVar27] = local_fc;
        }
        local_b0 = uVar18;
        FUN_143300df0(lVar15,"offset[%d] = %d\n",local_100,puVar29[lVar26]);
        local_100 = iVar24 + 1;
        lVar26 = lVar26 + 1;
        uVar27 = uVar18;
      } while (lVar26 < iVar7);
    }
    uVar18 = (ulonglong)iVar7;
    uVar27 = *(ulonglong *)(param_1 + 0x50);
    plVar1 = (longlong *)(param_1 + 0x48);
    local_d0 = plVar1;
    FUN_1433a10f0(plVar1,plVar1,uVar18);
    if (uVar27 < uVar18) {
      puVar13 = (undefined8 *)(*plVar1 + uVar27 * 8);
      for (lVar26 = uVar18 - uVar27; lVar26 != 0; lVar26 = lVar26 + -1) {
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = 0;
        }
        puVar13 = puVar13 + 1;
      }
    }
    if (bVar4) {
      if (0 < (longlong)uVar18) {
        iVar24 = 1;
        pRVar20 = (RefCountImpl *)0x0;
        do {
          iVar17 = local_f8 + puVar29[(longlong)pRVar20];
          FUN_143395c80(lVar15,iVar17);
          if (iVar24 < iVar7) {
            iVar17 = puVar29[(longlong)(pRVar20 + 1)] - puVar29[(longlong)pRVar20];
          }
          else {
            iVar17 = (param_3[3] + param_3[2]) - iVar17;
          }
          pRVar10 = (RefCountImpl *)(**(code **)(*local_98 + 0x50))(local_98,0x20);
          pRVar19 = (RefCountImpl *)0x0;
          if (pRVar10 != (RefCountImpl *)0x0) {
            *(undefined8 *)(pRVar10 + 8) = 0;
            *(undefined ***)pRVar10 = &PTR_FUN_144f70a50;
            *(undefined ***)pRVar10 = &PTR_FUN_145afb530;
            *(undefined4 *)(pRVar10 + 8) = 1;
            *(undefined8 *)(pRVar10 + 0x10) = 0;
            pRVar10[0x18] = (RefCountImpl)0x0;
            pRVar19 = pRVar10;
          }
          in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffff00;
          (**(code **)(*(longlong *)pRVar19 + 0x78))
                    (pRVar19,param_2,2,iVar17,in_stack_fffffffffffffee8);
          lVar26 = *local_d0;
          Scaleform::RefCountImpl::AddRef(pRVar19);
          pRVar10 = *(RefCountImpl **)(lVar26 + (longlong)pRVar20 * 8);
          if (pRVar10 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar10);
          }
          *(RefCountImpl **)(lVar26 + (longlong)pRVar20 * 8) = pRVar19;
          Scaleform::RefCountImpl::Release(pRVar19);
          iVar24 = iVar24 + 1;
          pRVar20 = pRVar20 + 1;
        } while ((longlong)pRVar20 < (longlong)iVar7);
      }
    }
    else {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x1000;
    }
    if (puVar29 == (uint *)0x0) {
      return;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar29);
    return;
  }
  if (iVar7 == 0x30) {
    pcVar14 = "reading DefineFont2: ";
  }
  else {
    if (iVar7 != 0x4b) {
      return;
    }
    pcVar14 = "reading DefineFont3: ";
  }
  FUN_143300df0(lVar15,pcVar14);
  iVar7 = FUN_1433958f0(lVar15,1);
  bVar31 = iVar7 != 0;
  if (bVar31) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2000;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffdfff;
  }
  iVar7 = FUN_1433958f0(lVar15,1);
  iVar24 = FUN_1433958f0(lVar15,1);
  iVar17 = FUN_1433958f0(lVar15,1);
  if (iVar7 == 0) {
    if (iVar17 == 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffcff;
    }
    else {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffdff;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x100;
    }
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffeff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x200;
  }
  if (iVar24 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff7fff;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x8000;
  }
  iVar7 = FUN_1433958f0(lVar15,1);
  iVar24 = FUN_1433958f0(lVar15,1);
  if (iVar24 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffbfff;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x4000;
  }
  iVar24 = FUN_1433958f0(lVar15,1);
  if (iVar24 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  }
  iVar24 = FUN_1433958f0(lVar15,1);
  if (iVar24 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  }
  *(undefined1 *)(lVar15 + 0x29) = 0;
  if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 1) {
    FUN_143396d60(lVar15);
  }
  uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
  *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 1;
  uVar11 = FUN_143396250(lVar15,*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x38));
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  *(undefined1 *)(lVar15 + 0x29) = 0;
  if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
    FUN_143396c40(lVar15,2);
  }
  uVar21 = CONCAT11(*(undefined1 *)
                     ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60)),
                    *(undefined1 *)
                     ((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60)));
  uVar25 = (uint)uVar21;
  *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
  local_c0 = uVar25;
  cVar6 = FUN_143396c00(lVar15);
  if (cVar6 != '\0') {
    pcVar14 = "(none)";
    if (*(char **)(param_1 + 0x38) != (char *)0x0) {
      pcVar14 = *(char **)(param_1 + 0x38);
    }
    FUN_143300df0(lVar15,"  Name = %s, %d glyphs\n",pcVar14,uVar25);
    uVar8 = *(uint *)(param_1 + 0x1c) & 0x300;
    if (uVar8 == 0x200) {
      pcVar14 = "ShiftJIS";
    }
    else {
      pcVar14 = "ANSI";
      if (uVar8 != 0x100) {
        pcVar14 = "Unicode";
      }
    }
    in_stack_fffffffffffffee8 = *(byte *)(param_1 + 0x1c) & 1;
    FUN_143300df0(lVar15,"  HasLayout = %d, CodePage = %s, Italic = %d, Bold = %d\n",bVar31,pcVar14,
                  in_stack_fffffffffffffee8,*(uint *)(param_1 + 0x1c) >> 1 & 1);
    FUN_143300df0(lVar15,"  LangCode = %d\n",uVar2);
  }
  pRVar20 = (RefCountImpl *)0x0;
  local_100 = (*(int *)(lVar15 + 0x54) - *(int *)(lVar15 + 0x50)) + *(int *)(lVar15 + 0x4c);
  local_f0 = (RefCountImpl *)0x0;
  local_e8 = (RefCountImpl *)0x0;
  local_e0 = (RefCountImpl *)0x0;
  pRVar19 = pRVar20;
  pRVar10 = pRVar20;
  if (uVar21 != 0) {
    if (iVar7 == 0) {
      uVar21 = FUN_143300e10(lVar15);
      uVar8 = (uint)uVar21;
    }
    else {
      uVar8 = FUN_143300e60();
    }
    if (uVar8 == 0) {
      bVar4 = false;
      pRVar19 = (RefCountImpl *)0x0;
      pRVar10 = (RefCountImpl *)0x0;
      uVar25 = 0;
    }
    else {
      FUN_143300ed0(&local_f0,&local_f0,1);
      pRVar10 = (RefCountImpl *)0x1;
      local_e8 = (RefCountImpl *)0x1;
      pRVar19 = local_f0;
      if (local_f0 != (RefCountImpl *)0x0) {
        *(uint *)local_f0 = uVar8;
      }
    }
  }
  if (iVar7 == 0) {
    if (1 < uVar25) {
      local_c8 = (ulonglong)(uVar25 - 1);
      do {
        *(undefined1 *)(lVar15 + 0x29) = 0;
        if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
          FUN_143396c40(lVar15,2);
        }
        pRVar30 = pRVar10 + 1;
        uVar2 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60));
        uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
        *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
        if (pRVar30 < pRVar10) {
          pRVar10 = pRVar30;
          if (pRVar30 < (RefCountImpl *)((ulonglong)local_e0 >> 1)) {
LAB_143398cdb:
            FUN_143300ed0(&local_f0,&local_f0,pRVar10);
            pRVar19 = local_f0;
          }
        }
        else if (local_e0 < pRVar30) {
          pRVar10 = pRVar30 + ((ulonglong)pRVar30 >> 2);
          goto LAB_143398cdb;
        }
        if (pRVar19 + (longlong)pRVar30 * 4 + -4 != (RefCountImpl *)0x0) {
          *(uint *)(pRVar19 + (longlong)pRVar30 * 4 + -4) = (uint)CONCAT11(uVar2,uVar3);
        }
        local_c8 = local_c8 - 1;
        pRVar10 = pRVar30;
        local_e8 = pRVar30;
      } while (local_c8 != 0);
    }
    *(undefined1 *)(lVar15 + 0x29) = 0;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
      FUN_143396c40(lVar15,2);
    }
    uVar2 = *(undefined1 *)((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60))
    ;
    uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
    *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
    uVar25 = (uint)CONCAT11(uVar2,uVar3);
  }
  else {
    if (1 < uVar25) {
      uVar27 = (ulonglong)(uVar25 - 1);
      do {
        uVar9 = FUN_143300e60(lVar15);
        pRVar30 = pRVar10 + 1;
        if (pRVar30 < pRVar10) {
          if (pRVar30 < (RefCountImpl *)((ulonglong)local_e0 >> 1)) {
            FUN_143300ed0(&local_f0,&local_f0,pRVar30);
            pRVar19 = local_f0;
          }
        }
        else if (local_e0 < pRVar30) {
          FUN_143300ed0(&local_f0,&local_f0,pRVar30 + ((ulonglong)pRVar30 >> 2));
          pRVar19 = local_f0;
        }
        if (pRVar19 + (longlong)pRVar30 * 4 + -4 != (RefCountImpl *)0x0) {
          *(undefined4 *)(pRVar19 + (longlong)pRVar30 * 4 + -4) = uVar9;
        }
        uVar27 = uVar27 - 1;
        pRVar10 = pRVar30;
        local_e8 = pRVar30;
      } while (uVar27 != 0);
    }
    uVar25 = FUN_143300e60(lVar15);
  }
  local_c8 = (ulonglong)local_c0;
  plVar1 = (longlong *)(param_1 + 0x48);
  uVar27 = *(ulonglong *)(param_1 + 0x50);
  local_d8 = uVar25;
  local_78 = plVar1;
  FUN_1433a10f0(plVar1,plVar1,local_c0);
  if (uVar27 < local_c8) {
    puVar13 = (undefined8 *)(*plVar1 + uVar27 * 8);
    for (lVar26 = local_c8 - uVar27; lVar26 != 0; lVar26 = lVar26 + -1) {
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 1;
    }
  }
  if (bVar4) {
    local_a0 = *param_3;
    if (local_a0 == 0x30) {
      local_a0 = 0x16;
    }
    if (bVar31) {
      FUN_1433a1070(param_1 + 0x68);
    }
    local_104 = 0;
    if (local_c8 != 0) {
      local_f8 = 1;
      pRVar10 = pRVar20;
      pRVar30 = pRVar20;
      do {
        iVar7 = local_f8;
        FUN_143395c80(lVar15,local_100 + *(int *)(pRVar19 + (longlong)pRVar30 * 4));
        uVar25 = local_d8;
        if (iVar7 < (int)local_c0) {
          uVar25 = *(uint *)(pRVar19 + (longlong)pRVar30 * 4 + 4);
        }
        local_d0 = (longlong *)(longlong)(int)(uVar25 - *(int *)(pRVar19 + (longlong)pRVar30 * 4));
        pRVar12 = (RefCountImpl *)(**(code **)(*local_98 + 0x50))(local_98,0x20);
        this = pRVar20;
        if (pRVar12 != (RefCountImpl *)0x0) {
          *(undefined8 *)(pRVar12 + 8) = 0;
          *(undefined ***)pRVar12 = &PTR_FUN_144f70a50;
          *(undefined ***)pRVar12 = &PTR_FUN_145afb530;
          *(undefined4 *)(pRVar12 + 8) = 1;
          *(undefined8 *)(pRVar12 + 0x10) = 0;
          pRVar12[0x18] = (RefCountImpl)0x0;
          this = pRVar12;
        }
        in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffff00;
        cVar6 = (**(code **)(*(longlong *)this + 0x78))
                          (this,param_2,local_a0,(ulonglong)local_d0 & 0xffffffff,
                           in_stack_fffffffffffffee8);
        if (cVar6 == '\0') {
          uVar27 = (ulonglong)local_104;
          if (uVar27 < *(ulonglong *)(param_1 + 0x70)) {
            uVar18 = uVar27;
            if (uVar27 < *(ulonglong *)(param_1 + 0x78) >> 1) {
LAB_143398fcb:
              FUN_1433a0db0(param_1 + 0x68,param_1 + 0x68,uVar18);
            }
          }
          else if (*(ulonglong *)(param_1 + 0x78) < uVar27) {
            uVar18 = (uVar27 >> 2) + uVar27;
            goto LAB_143398fcb;
          }
          plVar1 = local_78;
          *(ulonglong *)(param_1 + 0x70) = uVar27;
          uVar18 = local_78[1];
          FUN_1433a10f0(local_78,local_78,uVar27);
          if (uVar18 < uVar27) {
            puVar13 = (undefined8 *)(*plVar1 + uVar18 * 8);
            for (lVar15 = uVar27 - uVar18; lVar15 != 0; lVar15 = lVar15 + -1) {
              if (puVar13 != (undefined8 *)0x0) {
                *puVar13 = 0;
              }
              puVar13 = puVar13 + 1;
            }
          }
          if (this != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this);
          }
          goto LAB_1433994e5;
        }
        local_d0 = *(longlong **)(param_1 + 0x48);
        Scaleform::RefCountImpl::AddRef(this);
        pRVar12 = *(RefCountImpl **)((longlong)local_d0 + (longlong)pRVar30 * 8);
        if (pRVar12 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(pRVar12);
        }
        *(RefCountImpl **)((longlong)local_d0 + (longlong)pRVar30 * 8) = this;
        if (bVar31) {
          local_88 = 0;
          uStack_80 = 0;
          FUN_1433abb70(this,&local_88);
          lVar26 = *(longlong *)(param_1 + 0x68);
          if ((float)local_88 <= (float)uStack_80) {
            if (local_88._4_4_ <= uStack_80._4_4_) {
              *(short *)(pRVar10 + lVar26 + 4) = (short)(int)((float)local_88 * 20.0);
              *(short *)(pRVar10 + lVar26 + 6) = (short)(int)(local_88._4_4_ * 20.0);
              *(short *)(pRVar10 + lVar26 + 8) =
                   (short)(longlong)(((float)uStack_80 - (float)local_88) * 20.0);
              *(short *)(pRVar10 + lVar26 + 10) =
                   (short)(longlong)((uStack_80._4_4_ - local_88._4_4_) * 20.0);
              goto LAB_143398f52;
            }
          }
          *(undefined8 *)(pRVar10 + lVar26 + 4) = 0;
        }
LAB_143398f52:
        Scaleform::RefCountImpl::Release(this);
        pRVar30 = pRVar30 + 1;
        local_104 = local_104 + 1;
        local_f8 = local_f8 + 1;
        pRVar10 = pRVar10 + 0xc;
      } while ((longlong)pRVar30 < (longlong)local_c8);
    }
    if (local_d8 + local_100 !=
        (*(int *)(lVar15 + 0x54) - *(int *)(lVar15 + 0x50)) + *(int *)(lVar15 + 0x4c))
    goto LAB_1433994e5;
  }
  else {
    iVar24 = local_100 + uVar25;
    iVar7 = Scaleform::GFx::Stream::GetTagEndPosition(lVar15);
    if (iVar7 <= iVar24) goto LAB_1433994e5;
    FUN_143395c80(lVar15,iVar24);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x1000;
  }
  FUN_143399ef0(param_1,lVar15);
  if (bVar31) {
    if (*param_3 == 0x4b) {
      fVar32 = 0.05;
    }
    else {
      fVar32 = 1.0;
    }
    *(undefined1 *)(lVar15 + 0x29) = 0;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
      FUN_143396c40(lVar15,2);
    }
    uVar2 = *(undefined1 *)((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60))
    ;
    uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
    *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
    *(float *)(param_1 + 0x10) = (float)(int)CONCAT11(uVar2,uVar3) * fVar32;
    *(undefined1 *)(lVar15 + 0x29) = 0;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
      FUN_143396c40(lVar15,2);
    }
    uVar2 = *(undefined1 *)((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60))
    ;
    uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
    *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
    *(float *)(param_1 + 0x14) = (float)(int)CONCAT11(uVar2,uVar3) * fVar32;
    *(undefined1 *)(lVar15 + 0x29) = 0;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
      FUN_143396c40(lVar15,2);
    }
    uVar2 = *(undefined1 *)((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60))
    ;
    uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
    *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
    *(float *)(param_1 + 0x18) = (float)(int)CONCAT11(uVar2,uVar3) * fVar32;
    cVar6 = FUN_143396c00(lVar15);
    if (cVar6 != '\0') {
      FUN_143300df0(lVar15,"  Ascent = %d, Descent = %d, Leading = %d\n",
                    (int)*(float *)(param_1 + 0x10),(int)*(float *)(param_1 + 0x14),
                    (int)*(float *)(param_1 + 0x18));
    }
    if (*(longlong *)(param_1 + 0x70) != *(longlong *)(param_1 + 0x50)) {
      FUN_1433a1070(param_1 + 0x68);
    }
    pRVar10 = pRVar20;
    for (lVar26 = *(longlong *)(param_1 + 0x70); lVar26 != 0; lVar26 = lVar26 + -1) {
      lVar23 = *(longlong *)(param_1 + 0x68);
      *(undefined1 *)(lVar15 + 0x29) = 0;
      if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
        FUN_143396c40(lVar15,2);
      }
      uVar2 = *(undefined1 *)
               ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60));
      uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
      *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
      *(float *)(pRVar10 + lVar23) = (float)CONCAT11(uVar2,uVar3) * fVar32;
      pRVar10 = pRVar10 + 0xc;
    }
    lVar26 = *(longlong *)(param_1 + 0x50);
    local_58 = 0;
    uStack_50 = 0;
    for (; lVar26 != 0; lVar26 = lVar26 + -1) {
      FUN_143396900(lVar15,&local_58);
    }
    *(undefined1 *)(lVar15 + 0x29) = 0;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
      FUN_143396c40(lVar15,2);
    }
    uVar21 = CONCAT11(*(undefined1 *)
                       ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60)),
                      *(undefined1 *)
                       ((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60)));
    *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
    cVar6 = FUN_143396c00(lVar15);
    if (cVar6 != '\0') {
      FUN_143300df0(lVar15,"  KerningCount = %d\n",(uint)uVar21);
    }
    pRVar10 = pRVar20;
    if (uVar21 != 0) {
      do {
        if (param_3[3] + param_3[2] <=
            (*(int *)(lVar15 + 0x54) - *(int *)(lVar15 + 0x50)) + *(int *)(lVar15 + 0x4c)) {
          pcVar14 = "<noname>";
          if (*(char **)(param_1 + 0x38) != (char *)0x0) {
            pcVar14 = *(char **)(param_1 + 0x38);
          }
          FUN_14339fb50(lVar15,
                        "Corrupted file %s, kerning table of the font \'%s\' is longer than tagLength."
                        ,(*(ulonglong *)(lVar15 + 0x30) & 0xfffffffffffffffc) + 0xc,pcVar14);
          break;
        }
        uVar25 = *(uint *)(param_1 + 0x1c);
        iVar7 = *(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c);
        *(undefined1 *)(lVar15 + 0x29) = 0;
        if ((uVar25 >> 0xe & 1) == 0) {
          if (iVar7 < 1) {
            FUN_143396d60(lVar15);
          }
          iVar7 = *(uint *)(lVar15 + 0x4c) + 1;
          uVar28 = (ushort)*(byte *)((ulonglong)*(uint *)(lVar15 + 0x4c) +
                                    *(longlong *)(lVar15 + 0x60));
          *(int *)(lVar15 + 0x4c) = iVar7;
          *(undefined1 *)(lVar15 + 0x29) = 0;
          if (*(int *)(lVar15 + 0x50) - iVar7 < 1) {
            FUN_143396d60(lVar15);
          }
          uVar16 = (ushort)*(byte *)((ulonglong)*(uint *)(lVar15 + 0x4c) +
                                    *(longlong *)(lVar15 + 0x60));
          iVar7 = *(uint *)(lVar15 + 0x4c) + 1;
        }
        else {
          if (iVar7 < 2) {
            FUN_143396c40(lVar15,2);
          }
          iVar7 = *(uint *)(lVar15 + 0x4c) + 2;
          uVar28 = CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) +
                             *(longlong *)(lVar15 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60)));
          *(int *)(lVar15 + 0x4c) = iVar7;
          *(undefined1 *)(lVar15 + 0x29) = 0;
          if (*(int *)(lVar15 + 0x50) - iVar7 < 2) {
            FUN_143396c40(lVar15,2);
          }
          uVar16 = CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) +
                             *(longlong *)(lVar15 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60)));
          iVar7 = *(uint *)(lVar15 + 0x4c) + 2;
        }
        *(int *)(lVar15 + 0x4c) = iVar7;
        *(undefined1 *)(lVar15 + 0x29) = 0;
        if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
          FUN_143396c40(lVar15,2);
        }
        uVar2 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar15 + 0x4c) + 1) + *(longlong *)(lVar15 + 0x60));
        uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
        local_fc = CONCAT22(uVar16,uVar28);
        *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 2;
        local_bc = (float)(int)CONCAT11(uVar2,uVar3) * fVar32;
        cVar6 = FUN_143396c00(lVar15);
        if (cVar6 != '\0') {
          FUN_143300df0(lVar15,"     Pair: %d - %d,\tadj = %d\n",uVar28,uVar16,(int)local_bc);
        }
        local_70 = &local_fc;
        lVar26 = 4;
        local_68 = &local_bc;
        lVar23 = 0x1505;
        do {
          lVar5 = lVar26 + 3;
          lVar26 = lVar26 + -1;
          lVar23 = lVar23 * 0x1003f + (ulonglong)*(byte *)((longlong)&local_100 + lVar5);
        } while (lVar26 != 0);
        FUN_14339dca0(param_1 + 0x80,param_1 + 0x80,&local_70,lVar23);
        uVar25 = (int)pRVar10 + 1;
        pRVar10 = (RefCountImpl *)(ulonglong)uVar25;
      } while ((int)uVar25 < (int)(uint)uVar21);
    }
  }
  if (!bVar4) {
    for (lVar15 = *(longlong *)(param_1 + 0x70); lVar15 != 0; lVar15 = lVar15 + -1) {
      *(undefined8 *)(pRVar20 + *(longlong *)(param_1 + 0x68) + 4) = 0;
      pRVar20 = pRVar20 + 0xc;
    }
  }
LAB_1433994e5:
  if (pRVar19 != (RefCountImpl *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pRVar19);
  }
  return;
}



// FUNCTION 143399540 FUN_143399540 body=496 status=ok
// SIG undefined FUN_143399540(void)

void FUN_143399540(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 uVar7;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_143396250(param_2,*(undefined8 *)(param_2 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined1 *)(param_2 + 0x29) = 0;
  if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 1) {
    FUN_143396d60(param_2);
  }
  uVar7 = 0;
  iVar5 = *(uint *)(param_2 + 0x4c) + 1;
  bVar1 = *(byte *)((ulonglong)*(uint *)(param_2 + 0x4c) + *(longlong *)(param_2 + 0x60));
  *(int *)(param_2 + 0x4c) = iVar5;
  if (param_3 == 0x3e) {
    *(undefined1 *)(param_2 + 0x29) = 0;
    if (*(int *)(param_2 + 0x50) - iVar5 < 1) {
      FUN_143396d60(param_2);
    }
    uVar7 = *(undefined1 *)((ulonglong)*(uint *)(param_2 + 0x4c) + *(longlong *)(param_2 + 0x60));
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) + 1;
  }
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 8) == 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffcff;
    }
    else {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffdff;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x100;
    }
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffeff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x200;
  }
  if ((bVar1 & 4) == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  }
  if ((bVar1 & 2) == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  }
  if ((bVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffbfff;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x4000;
  }
  cVar2 = FUN_143396c00(param_2);
  if (cVar2 != '\0') {
    pcVar6 = "reading DefineFontInfo\n";
    if (param_3 != 0xd) {
      pcVar6 = "reading DefineFontInfo2\n";
    }
    FUN_143300df0(param_2,pcVar6);
    pcVar6 = "(none)";
    if (*(char **)(param_1 + 0x38) != (char *)0x0) {
      pcVar6 = *(char **)(param_1 + 0x38);
    }
    FUN_143300df0(param_2,"  Name = %s\n",pcVar6);
    uVar4 = *(uint *)(param_1 + 0x1c) & 0x300;
    if (uVar4 == 0x200) {
      pcVar6 = "ShiftJIS";
    }
    else {
      pcVar6 = "ANSI";
      if (uVar4 != 0x100) {
        pcVar6 = "Unicode";
      }
    }
    FUN_143300df0(param_2,"  CodePage = %s, Italic = %d, Bold = %d\n",pcVar6,
                  *(byte *)(param_1 + 0x1c) & 1,*(uint *)(param_1 + 0x1c) >> 1 & 1);
    if (param_3 == 0x3e) {
      FUN_143300df0(param_2,"  LangCode = %d\n",uVar7);
    }
  }
  FUN_143399ef0(param_1,param_2);
  return;
}



// FUNCTION 143399740 FUN_143399740 body=142 status=ok
// SIG undefined FUN_143399740(void)

ulonglong FUN_143399740(longlong param_1,ushort param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    uVar1 = *(ulonglong *)(lVar3 + 8);
    uVar5 = param_2 & uVar1;
    puVar2 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar3);
    if ((*puVar2 != 0xfffffffffffffffe) && (uVar4 = uVar5, ((ushort)puVar2[1] & uVar1) == uVar5)) {
      while ((((ushort)puVar2[1] & uVar1) != uVar5 || ((ushort)puVar2[1] != param_2))) {
        uVar4 = *puVar2;
        if (uVar4 == 0xffffffffffffffff) {
          return 0xffffffff;
        }
        puVar2 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar3);
      }
      if ((-1 < (longlong)uVar4) && (lVar3 = lVar3 + 0x18 + uVar4 * 0x10, lVar3 != 0)) {
        return (ulonglong)*(ushort *)(lVar3 + 2);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143399850 FUN_143399850 body=196 status=ok
// SIG undefined FUN_143399850(void)

undefined4 FUN_143399850(longlong param_1,short param_2,short param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte local_res10 [24];
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    uVar3 = 0x1505;
    lVar6 = 4;
    do {
      pbVar1 = &stack0x0000000f + lVar6;
      lVar6 = lVar6 + -1;
      uVar3 = (ulonglong)*pbVar1 + uVar3 * 0x1003f;
    } while (lVar6 != 0);
    uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
    lVar6 = uVar3 * 3 + 2;
    puVar4 = (ulonglong *)(lVar2 + lVar6 * 8);
    if ((*(longlong *)(lVar2 + lVar6 * 8) != -2) && (uVar5 = uVar3, puVar4[1] == uVar3)) {
      while ((puVar4[1] != uVar3 ||
             (((short)puVar4[2] != param_2 || (*(short *)((longlong)puVar4 + 0x12) != param_3))))) {
        uVar5 = *puVar4;
        if (uVar5 == 0xffffffffffffffff) {
          return 0;
        }
        puVar4 = (ulonglong *)(lVar2 + uVar5 * 0x18 + 0x10);
      }
      if ((-1 < (longlong)uVar5) && (lVar2 = lVar2 + uVar5 * 0x18 + 0x20, lVar2 != 0)) {
        return *(undefined4 *)(lVar2 + 4);
      }
    }
  }
  return 0;
}



// FUNCTION 143399920 FUN_143399920 body=186 status=ok
// SIG undefined FUN_143399920(void)

ulonglong FUN_143399920(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)(param_1 + 0x60);
  plVar4 = (longlong *)*plVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    puVar1 = (ulonglong *)(plVar4 + 1);
    uVar6 = 0;
    do {
      plVar4 = plVar4 + 2;
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *puVar1);
  }
  do {
    do {
      uVar5 = uVar6;
      if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar5)) {
        return 0xffffffff;
      }
      if (*(ushort *)(lVar2 + 0x1a + uVar5 * 0x10) == param_2) {
        return (ulonglong)*(ushort *)(lVar2 + 0x18 + uVar5 * 0x10);
      }
      uVar3 = *(ulonglong *)(lVar2 + 8);
      uVar6 = uVar5;
    } while (((longlong)uVar3 < (longlong)uVar5) || (uVar6 = uVar5 + 1, uVar3 < uVar6));
    plVar4 = (longlong *)((uVar5 + 2) * 0x10 + lVar2);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 2;
    } while (uVar6 <= uVar3);
  } while( true );
}



// FUNCTION 143399a90 FUN_143399a90 body=397 status=ok
// SIG undefined FUN_143399a90(void)

float * FUN_143399a90(longlong *param_1,uint param_2,float *param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar4 = (ulonglong)param_2;
  if ((short)param_2 == -1) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    fVar5 = (float)(**(code **)(*param_1 + 0x28))(param_1,uVar4);
    param_3[2] = fVar5 + *param_3;
    fVar5 = (float)(**(code **)(*param_1 + 0x30))(param_1,param_2);
    param_3[3] = fVar5 + param_3[1];
  }
  else {
    if (uVar4 < (ulonglong)param_1[0xe]) {
      lVar3 = param_1[0xd];
      fVar5 = (float)*(ushort *)(lVar3 + 8 + uVar4 * 0xc) / 20.0;
      if (fVar5 == 0.0) {
        fVar5 = *(float *)(lVar3 + uVar4 * 0xc);
      }
      uVar1 = *(ushort *)(lVar3 + 10 + uVar4 * 0xc);
      fVar6 = (float)(int)*(short *)(lVar3 + 4 + uVar4 * 0xc) / 20.0;
      *param_3 = fVar6;
      sVar2 = *(short *)(lVar3 + 6 + uVar4 * 0xc);
      param_3[2] = fVar5 + fVar6;
      fVar5 = (float)(int)sVar2 / 20.0;
      param_3[1] = fVar5;
      param_3[3] = (float)uVar1 / 20.0 + fVar5;
      return param_3;
    }
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    if ((uVar4 < (ulonglong)param_1[10]) &&
       (lVar3 = *(longlong *)(param_1[9] + uVar4 * 8), lVar3 != 0)) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_1433abb70(lVar3,&local_18);
      if ((float)local_18 <= (float)uStack_10) {
        if (local_18._4_4_ <= uStack_10._4_4_) {
          *param_3 = (float)local_18;
          param_3[1] = local_18._4_4_;
          param_3[2] = ((float)uStack_10 - (float)local_18) + (float)local_18;
          param_3[3] = (uStack_10._4_4_ - local_18._4_4_) + local_18._4_4_;
          return param_3;
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 143399c30 FUN_143399c30 body=557 status=ok
// SIG undefined FUN_143399c30(void)

undefined8 FUN_143399c30(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 local_res8;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar11 = 0;
  plVar13 = (longlong *)(param_1 + 0x60);
  plVar7 = (longlong *)*plVar13;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (plVar7 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    puVar1 = (ulonglong *)(plVar7 + 1);
    uVar6 = uVar11;
    do {
      plVar7 = plVar7 + 2;
      if (*plVar7 != -2) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *puVar1);
  }
  uVar10 = 0;
  uVar9 = uVar10;
LAB_143399cb9:
  bVar5 = false;
  uVar8 = uVar6;
LAB_143399cc0:
  uVar6 = uVar8;
  if (((plVar13 == (longlong *)0x0) || (lVar4 = *plVar13, lVar4 == 0)) ||
     (*(longlong *)(lVar4 + 8) < (longlong)uVar6)) {
    if (!bVar5) goto LAB_143399e0b;
    uVar6 = local_40 + 1;
    local_res8 = CONCAT22(uVar9,uVar10);
    if (uVar6 < local_40) {
      uVar8 = uVar6;
      if (uVar6 < uVar11 >> 1) {
LAB_143399de1:
        FUN_143300ed0(&local_48,&local_48,uVar8);
      }
    }
    else if (uVar11 < uVar6) {
      uVar8 = (uVar6 >> 2) + uVar6;
      goto LAB_143399de1;
    }
    puVar2 = (undefined4 *)(local_48 + -4 + uVar6 * 4);
    local_40 = uVar6;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = local_res8;
    }
LAB_143399e0b:
    FUN_14339d360(&local_48,0,local_40,(undefined1)local_res8);
    FUN_14339ebc0(param_2,&local_48);
    if (local_48 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    return param_2;
  }
  if (bVar5) {
    uVar3 = *(ushort *)(lVar4 + 0x18 + uVar6 * 0x10);
    if ((uint)uVar9 != uVar3 - 1) goto code_r0x000143399d3c;
  }
  else {
    uVar10 = *(ushort *)(lVar4 + 0x18 + uVar6 * 0x10);
    bVar5 = true;
    uVar3 = uVar10;
  }
  uVar9 = uVar3;
  uVar12 = *(ulonglong *)(lVar4 + 8);
  uVar8 = uVar6;
  if (((longlong)uVar6 <= (longlong)uVar12) && (uVar8 = uVar6 + 1, uVar8 <= uVar12)) {
    plVar7 = (longlong *)((uVar6 + 2) * 0x10 + lVar4);
    do {
      if (*plVar7 != -2) break;
      uVar8 = uVar8 + 1;
      plVar7 = plVar7 + 2;
    } while (uVar8 <= uVar12);
  }
  goto LAB_143399cc0;
code_r0x000143399d3c:
  uVar8 = local_40 + 1;
  local_res8 = CONCAT22(uVar9,uVar10);
  if (uVar8 < local_40) {
    uVar12 = uVar8;
    if (uVar11 >> 1 <= uVar8) goto LAB_143399d7e;
  }
  else {
    if (uVar8 <= uVar11) goto LAB_143399d7e;
    uVar12 = (uVar8 >> 2) + uVar8;
  }
  FUN_143300ed0(&local_48,&local_48,uVar12);
  uVar11 = local_38;
LAB_143399d7e:
  puVar2 = (undefined4 *)(local_48 + -4 + uVar8 * 4);
  local_40 = uVar8;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = local_res8;
  }
  goto LAB_143399cb9;
}



// FUNCTION 143399ef0 FUN_143399ef0 body=377 status=ok
// SIG undefined FUN_143399ef0(void)

void FUN_143399ef0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 local_res8 [4];
  ushort local_res10 [4];
  ushort *local_28;
  undefined2 *local_20;
  
  FUN_143300df0(param_2,"reading code table at offset %d\n",
                (*(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x50)) + *(int *)(param_2 + 0x4c));
  plVar1 = (longlong *)(param_1 + 0x60);
  uVar5 = 0;
  uVar4 = uVar5;
  if ((ulonglong *)*plVar1 != (ulonglong *)0x0) {
    uVar4 = *(ulonglong *)*plVar1;
  }
  if (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x50) * 5) >> 2) {
    FUN_1433a14e0(plVar1,plVar1);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x50);
  if ((*(uint *)(param_1 + 0x1c) >> 0xe & 1) == 0) {
    if (uVar4 != 0) {
      local_28 = local_res10;
      local_20 = local_res8;
      do {
        local_res8[0] = (undefined2)uVar5;
        *(undefined1 *)(param_2 + 0x29) = 0;
        if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 1) {
          FUN_143396d60(param_2);
        }
        bVar2 = *(byte *)((ulonglong)*(uint *)(param_2 + 0x4c) + *(longlong *)(param_2 + 0x60));
        *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) + 1;
        local_res10[0] = (ushort)bVar2;
        FUN_14339db20(plVar1,plVar1,&local_28);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  else if (uVar4 != 0) {
    local_28 = local_res10;
    local_20 = local_res8;
    do {
      local_res8[0] = (undefined2)uVar5;
      *(undefined1 *)(param_2 + 0x29) = 0;
      if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 2) {
        FUN_143396c40(param_2,2);
      }
      uVar3 = *(uint *)(param_2 + 0x4c);
      local_res10[0] =
           CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(param_2 + 0x60)),
                    *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(param_2 + 0x60)));
      *(uint *)(param_2 + 0x4c) = uVar3 + 2;
      FUN_14339db20(plVar1,plVar1,&local_28,local_res10[0]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
    return;
  }
  return;
}



// FUNCTION 14339a070 FUN_14339a070 body=149 status=ok
// SIG undefined FUN_14339a070(void)

undefined8 * FUN_14339a070(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa1a8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145b04088;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = &PTR_FUN_145b04080;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = param_1 + 7;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 14339a110 ~FontDataCompactedSwf body=103 status=ok
// SIG undefined ~FontDataCompactedSwf(void)

void Scaleform::GFx::FontDataCompactedSwf::~FontDataCompactedSwf(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b04088;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)(param_1 + 0x60));
  ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x38);
  *(undefined ***)param_1 = &PTR_FUN_145afa1a8;
  Render::FontCacheHandleRef::releaseFont(param_1 + 0x28);
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14339a180 FUN_14339a180 body=3775 status=ok
// SIG undefined FUN_14339a180(void)

void FUN_14339a180(longlong param_1,longlong param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint *local_250;
  uint *local_240;
  ulonglong local_238;
  ulonglong local_230;
  uint local_228;
  int local_224;
  ulonglong local_220;
  undefined4 local_218;
  int local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [304];
  
  lVar18 = *(longlong *)(param_2 + 0x418);
  if (lVar18 == 0) {
    lVar18 = param_2 + 0x50;
  }
  bVar6 = true;
  if ((*param_3 != 0x30) && (*param_3 != 0x4b)) {
    return;
  }
  lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x10) + 0x40);
  local_228 = *(uint *)(lVar13 + 0x18);
  uVar1 = *(undefined1 *)(lVar13 + 0x1c);
  FUN_1433ea740(local_178,param_1 + 0x38);
  pcVar14 = "reading DefineFont2: ";
  if (*param_3 != 0x30) {
    pcVar14 = "reading DefineFont3: ";
  }
  FUN_143300df0(lVar18,pcVar14);
  iVar8 = FUN_1433958f0(lVar18,1);
  bVar23 = iVar8 != 0;
  if (bVar23) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2000;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffdfff;
  }
  iVar8 = FUN_1433958f0(lVar18,1);
  FUN_1433958f0(lVar18,1);
  iVar9 = FUN_1433958f0(lVar18,1);
  if (iVar8 == 0) {
    if (iVar9 == 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffcff;
    }
    else {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffdff;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x100;
    }
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffeff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x200;
  }
  iVar8 = FUN_1433958f0(lVar18,1);
  iVar9 = FUN_1433958f0(lVar18,1);
  if (iVar9 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffbfff;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x4000;
  }
  iVar9 = FUN_1433958f0(lVar18,1);
  if (iVar9 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  }
  iVar9 = FUN_1433958f0(lVar18,1);
  if (iVar9 == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  }
  *(undefined1 *)(lVar18 + 0x29) = 0;
  if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 1) {
    FUN_143396d60(lVar18);
  }
  uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
  *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 1;
  FUN_1432c2f70(&local_220);
  FUN_143396040(lVar18,&local_220);
  *(undefined1 *)(lVar18 + 0x29) = 0;
  if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
    FUN_143396c40(lVar18,2);
  }
  uVar3 = *(undefined1 *)((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60));
  uVar4 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
  *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
  *(uint *)(param_1 + 0xb8) = (uint)CONCAT11(uVar3,uVar4);
  cVar7 = FUN_143396c00(lVar18);
  if (cVar7 != '\0') {
    pcVar12 = (char *)((local_220 & 0xfffffffffffffffc) + 0xc);
    pcVar14 = "(none)";
    if (pcVar12 != (char *)0x0) {
      pcVar14 = pcVar12;
    }
    FUN_143300df0(lVar18,"  Name = %s, %d glyphs\n",pcVar14,*(undefined4 *)(param_1 + 0xb8));
    uVar10 = *(uint *)(param_1 + 0x1c) & 0x300;
    if (uVar10 == 0x200) {
      pcVar14 = "ShiftJIS";
    }
    else {
      pcVar14 = "ANSI";
      if (uVar10 != 0x100) {
        pcVar14 = "Unicode";
      }
    }
    FUN_143300df0(lVar18,"  HasLayout = %d, CodePage = %s, Italic = %d, Bold = %d\n",bVar23,pcVar14,
                  *(byte *)(param_1 + 0x1c) & 1,*(uint *)(param_1 + 0x1c) >> 1 & 1);
    FUN_143300df0(lVar18,"  LangCode = %d\n",uVar2);
  }
  local_224 = (*(int *)(lVar18 + 0x4c) - *(int *)(lVar18 + 0x50)) + *(int *)(lVar18 + 0x54);
  iVar9 = *(int *)(param_1 + 0xb8);
  uVar17 = 0;
  local_250 = (uint *)0x0;
  local_240 = (uint *)0x0;
  local_238 = 0;
  local_230 = 0;
  if (iVar9 != 0) {
    if (iVar8 == 0) {
      uVar16 = FUN_143300e10(lVar18);
      uVar10 = (uint)uVar16;
    }
    else {
      uVar10 = FUN_143300e60();
    }
    if (uVar10 == 0) {
      bVar6 = false;
      iVar9 = 0;
    }
    else {
      FUN_143300ed0(&local_240,&local_240,1);
      uVar17 = 1;
      local_238 = 1;
      local_250 = local_240;
      if (local_240 != (uint *)0x0) {
        *local_240 = uVar10;
      }
    }
  }
  if (iVar8 == 0) {
    if (1 < iVar9) {
      uVar20 = (ulonglong)(iVar9 - 1);
      do {
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
          FUN_143396c40(lVar18,2);
        }
        uVar22 = uVar17 + 1;
        uVar2 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60));
        uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
        *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
        if (uVar22 < uVar17) {
          uVar19 = uVar22;
          if (uVar22 < local_230 >> 1) {
LAB_14339a6a7:
            FUN_143300ed0(&local_240,&local_240,uVar19);
            local_250 = local_240;
          }
        }
        else if (local_230 < uVar22) {
          uVar19 = (uVar22 >> 2) + uVar22;
          goto LAB_14339a6a7;
        }
        if (local_250 + uVar17 != (uint *)0x0) {
          local_250[uVar17] = (uint)CONCAT11(uVar2,uVar3);
        }
        uVar20 = uVar20 - 1;
        uVar17 = uVar22;
        local_238 = uVar22;
      } while (uVar20 != 0);
    }
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
      FUN_143396c40(lVar18,2);
    }
    iVar8 = *(uint *)(lVar18 + 0x4c) + 2;
    uVar10 = (uint)CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) +
                             *(longlong *)(lVar18 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60)));
  }
  else {
    if (1 < iVar9) {
      uVar20 = (ulonglong)(iVar9 - 1);
      do {
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 4) {
          FUN_143396c40(lVar18,4);
        }
        uVar10 = *(uint *)(lVar18 + 0x4c);
        uVar22 = uVar17 + 1;
        lVar13 = *(longlong *)(lVar18 + 0x60);
        uVar2 = *(undefined1 *)((ulonglong)(uVar10 + 3) + lVar13);
        uVar3 = *(undefined1 *)((ulonglong)(uVar10 + 2) + lVar13);
        uVar4 = *(undefined1 *)((ulonglong)(uVar10 + 1) + lVar13);
        uVar5 = *(undefined1 *)((ulonglong)uVar10 + lVar13);
        *(uint *)(lVar18 + 0x4c) = uVar10 + 4;
        if (uVar22 < uVar17) {
          uVar19 = uVar22;
          if (uVar22 < local_230 >> 1) {
LAB_14339a587:
            FUN_143300ed0(&local_240,&local_240,uVar19);
            local_250 = local_240;
          }
        }
        else if (local_230 < uVar22) {
          uVar19 = (uVar22 >> 2) + uVar22;
          goto LAB_14339a587;
        }
        if (local_250 + uVar17 != (uint *)0x0) {
          local_250[uVar17] = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5);
        }
        uVar20 = uVar20 - 1;
        uVar17 = uVar22;
        local_238 = uVar22;
      } while (uVar20 != 0);
    }
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 4) {
      FUN_143396c40(lVar18,4);
    }
    uVar26 = *(uint *)(lVar18 + 0x4c);
    lVar13 = *(longlong *)(lVar18 + 0x60);
    uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar26 + 3) + lVar13),
                                        *(undefined1 *)((ulonglong)(uVar26 + 2) + lVar13)),
                               *(undefined1 *)((ulonglong)(uVar26 + 1) + lVar13)),
                      *(undefined1 *)((ulonglong)uVar26 + lVar13));
    iVar8 = uVar26 + 4;
  }
  uVar21 = local_228;
  uVar17 = 0;
  *(int *)(lVar18 + 0x4c) = iVar8;
  uVar26 = 0;
  FUN_1433eaa10(local_178,(local_220 & 0xfffffffffffffffc) + 0xc,*(undefined4 *)(param_1 + 0x1c),
                local_228,0,0,0);
  fVar25 = 1.0;
  if (bVar6) {
    local_218 = 0x102;
    local_214 = *param_3;
    if (local_214 == 0x30) {
      local_214 = 0x16;
    }
    lVar13 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x18,&local_218);
    uVar20 = uVar17;
    if (lVar13 != 0) {
      uVar20 = Scaleform::GFx::PathAllocator::PathAllocator(lVar13,0x2000);
    }
    uVar22 = uVar17;
    local_1d8 = uVar20;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        FUN_143395c80(lVar18,local_224 + local_250[uVar22]);
        uVar21 = (int)uVar22 + 1;
        if (uVar21 < *(uint *)(param_1 + 0xb8)) {
          iVar8 = local_250[uVar21] - local_250[uVar22];
        }
        else {
          iVar8 = uVar10 - local_250[uVar22];
        }
        Scaleform::GFx::FontCompactor::StartGlyph(local_178);
        local_1e8 = 0;
        local_1f8 = &PTR_FUN_145afb530;
        local_1f0 = 1;
        local_1e0 = 0;
        uVar26 = uVar26 & 0xffffff00;
        Scaleform::GFx::ConstShapeNoStyles::Read(&local_1f8,param_2,local_214,iVar8,uVar26);
        local_1d0 = 0;
        local_1cc = 0;
        local_1c4 = 0;
        local_1bc = 0;
        local_1b4 = 0;
        local_1ac = 0;
        local_1a4 = 0;
        local_1a0 = 0x3f800000;
        local_19c = 0;
        iVar8 = FUN_1433abe30(&local_1f8,&local_1d0,&local_210,local_198);
        if (iVar8 != 0) {
          uVar20 = (ulonglong)local_228;
          do {
            if (iVar8 != 2) {
              fVar24 = (float)uVar20;
              FUN_1433eac00(local_178,(int)(fVar24 * local_210 * 0.0009765625),
                            (int)(fVar24 * local_20c * 0.0009765625));
              iVar8 = FUN_1433abf50(&local_1f8,&local_1d0,&local_210);
              while (iVar8 != 0) {
                if (iVar8 == 1) {
                  FUN_1433eacd0(local_178,(int)(fVar24 * local_210 * 0.0009765625),
                                (int)(fVar24 * local_20c * 0.0009765625));
                }
                else if (iVar8 == 2) {
                  uVar26 = CONCAT22((short)(uVar26 >> 0x10),
                                    (short)(int)(fVar24 * local_204 * 0.0009765625));
                  FUN_1433eadc0(local_178,(int)(fVar24 * local_210 * 0.0009765625),
                                (int)(fVar24 * local_20c * 0.0009765625),
                                (int)(fVar24 * local_208 * 0.0009765625),uVar26);
                }
                iVar8 = FUN_1433abf50(&local_1f8,&local_1d0,&local_210);
              }
            }
            iVar8 = FUN_1433abe30(&local_1f8,&local_1d0,&local_210,local_198);
          } while (iVar8 != 0);
        }
        FUN_1433eaf50(local_178,uVar1);
        uVar20 = local_1d8;
        Scaleform::GFx::PathAllocator::~PathAllocator(local_1d8);
        Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_1f8);
        uVar22 = (ulonglong)uVar21;
      } while (uVar21 < *(uint *)(param_1 + 0xb8));
    }
    if (uVar20 != 0) {
      Scaleform::GFx::PathAllocator::~PathAllocator(uVar20);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar20);
    }
    uVar21 = local_228;
    if (local_224 + uVar10 !=
        (*(int *)(lVar18 + 0x4c) - *(int *)(lVar18 + 0x50)) + *(int *)(lVar18 + 0x54))
    goto LAB_14339afbd;
  }
  else {
    iVar9 = uVar10 + local_224;
    iVar8 = Scaleform::GFx::Stream::GetTagEndPosition(lVar18);
    if (iVar8 <= iVar9) goto LAB_14339afbd;
    FUN_143395c80(lVar18,iVar9);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x1000;
  }
  FUN_143300df0(lVar18,"reading code table at offset %d\n",
                (*(int *)(lVar18 + 0x4c) - *(int *)(lVar18 + 0x50)) + *(int *)(lVar18 + 0x54));
  if ((*(uint *)(param_1 + 0x1c) >> 0xe & 1) == 0) {
    uVar20 = uVar17;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 1) {
          FUN_143396d60(lVar18);
        }
        uVar1 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
        *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 1;
        FUN_1433eb730(local_178,uVar20 & 0xffffffff,uVar1);
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_1 + 0xb8));
    }
  }
  else {
    uVar20 = uVar17;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
          FUN_143396c40(lVar18,2);
        }
        uVar1 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60));
        uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
        *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
        FUN_1433eb730(local_178,uVar20 & 0xffffffff,CONCAT11(uVar1,uVar2));
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_1 + 0xb8));
    }
  }
  if (bVar23) {
    if (*param_3 == 0x4b) {
      fVar25 = 0.05;
    }
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
      FUN_143396c40(lVar18,2);
    }
    uVar1 = *(undefined1 *)((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60))
    ;
    uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
    *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
    *(float *)(param_1 + 0x10) = (float)(int)CONCAT11(uVar1,uVar2) * fVar25;
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
      FUN_143396c40(lVar18,2);
    }
    uVar1 = *(undefined1 *)((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60))
    ;
    uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
    *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
    *(float *)(param_1 + 0x14) = (float)(int)CONCAT11(uVar1,uVar2) * fVar25;
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
      FUN_143396c40(lVar18,2);
    }
    uVar1 = *(undefined1 *)((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60))
    ;
    uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
    *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
    fVar24 = (float)(int)CONCAT11(uVar1,uVar2) * fVar25;
    *(float *)(param_1 + 0x18) = fVar24;
    iVar8 = (int)fVar24 * uVar21;
    iVar9 = (int)*(float *)(param_1 + 0x14) * uVar21;
    iVar11 = (int)*(float *)(param_1 + 0x10) * uVar21;
    FUN_1433ebae0(local_178,(int)((iVar11 >> 0x1f & 0x3ffU) + iVar11) >> 10,
                  (int)((iVar9 >> 0x1f & 0x3ffU) + iVar9) >> 10,
                  (int)((iVar8 >> 0x1f & 0x3ffU) + iVar8) >> 10);
    cVar7 = FUN_143396c00(lVar18);
    if (cVar7 != '\0') {
      FUN_143300df0(lVar18,"  Ascent = %d, Descent = %d, Leading = %d\n",
                    (int)*(float *)(param_1 + 0x10),(int)*(float *)(param_1 + 0x14),
                    (int)*(float *)(param_1 + 0x18));
    }
    uVar10 = *(uint *)(param_1 + 0xb8);
    if ((ulonglong)uVar10 != 0) {
      do {
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
          FUN_143396c40(lVar18,2);
        }
        uVar1 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60));
        uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
        *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
        iVar8 = (int)((float)CONCAT11(uVar1,uVar2) * fVar25) * uVar21;
        Scaleform::GFx::FontCompactor::AssignGlyphAdvance
                  (local_178,uVar17 & 0xffffffff,(int)((iVar8 >> 0x1f & 0x3ffU) + iVar8) >> 10);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar10);
    }
    local_188 = 0;
    uStack_180 = 0;
    for (uVar17 = (ulonglong)*(uint *)(param_1 + 0xb8); uVar17 != 0; uVar17 = uVar17 - 1) {
      FUN_143396900(lVar18,&local_188);
    }
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
      FUN_143396c40(lVar18,2);
    }
    uVar16 = CONCAT11(*(undefined1 *)
                       ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60)),
                      *(undefined1 *)
                       ((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60)));
    *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
    cVar7 = FUN_143396c00(lVar18);
    if (cVar7 != '\0') {
      FUN_143300df0(lVar18,"  KerningCount = %d\n",(uint)uVar16);
    }
    if (uVar16 != 0) {
      uVar17 = (ulonglong)(uint)uVar16;
      do {
        uVar10 = *(uint *)(param_1 + 0x1c);
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if ((uVar10 >> 0xe & 1) == 0) {
          if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 1) {
            FUN_143396d60(lVar18);
          }
          iVar8 = *(uint *)(lVar18 + 0x4c) + 1;
          uVar16 = (ushort)*(byte *)((ulonglong)*(uint *)(lVar18 + 0x4c) +
                                    *(longlong *)(lVar18 + 0x60));
          *(int *)(lVar18 + 0x4c) = iVar8;
          *(undefined1 *)(lVar18 + 0x29) = 0;
          if (*(int *)(lVar18 + 0x50) - iVar8 < 1) {
            FUN_143396d60(lVar18);
          }
          uVar15 = (ushort)*(byte *)((ulonglong)*(uint *)(lVar18 + 0x4c) +
                                    *(longlong *)(lVar18 + 0x60));
          iVar8 = *(uint *)(lVar18 + 0x4c) + 1;
        }
        else {
          if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
            FUN_143396c40(lVar18,2);
          }
          iVar8 = *(uint *)(lVar18 + 0x4c) + 2;
          uVar16 = CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) +
                             *(longlong *)(lVar18 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60)));
          *(int *)(lVar18 + 0x4c) = iVar8;
          *(undefined1 *)(lVar18 + 0x29) = 0;
          if (*(int *)(lVar18 + 0x50) - iVar8 < 2) {
            FUN_143396c40(lVar18,2);
          }
          uVar15 = CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) +
                             *(longlong *)(lVar18 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60)));
          iVar8 = *(uint *)(lVar18 + 0x4c) + 2;
        }
        *(int *)(lVar18 + 0x4c) = iVar8;
        *(undefined1 *)(lVar18 + 0x29) = 0;
        if (*(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x4c) < 2) {
          FUN_143396c40(lVar18,2);
        }
        uVar1 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar18 + 0x4c) + 1) + *(longlong *)(lVar18 + 0x60));
        uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar18 + 0x4c) + *(longlong *)(lVar18 + 0x60));
        *(uint *)(lVar18 + 0x4c) = *(uint *)(lVar18 + 0x4c) + 2;
        fVar24 = (float)(int)CONCAT11(uVar1,uVar2) * fVar25;
        cVar7 = FUN_143396c00(lVar18);
        if (cVar7 != '\0') {
          FUN_143300df0(lVar18,"     Pair: %d - %d,\tadj = %d\n",uVar16,uVar15,(int)fVar24);
        }
        iVar8 = (int)fVar24 * uVar21;
        FUN_1433eb890(local_178,uVar16,uVar15,(int)((iVar8 >> 0x1f & 0x3ffU) + iVar8) >> 10);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  FUN_1433ebc10(local_178);
  FUN_14339e540(param_1 + 0x60,0);
LAB_14339afbd:
  if (local_250 != (uint *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_220 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar8 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_220 & 0xfffffffffffffffc);
  }
  FUN_1433ea7f0(local_178);
  return;
}



// FUNCTION 14339b100 GetKerningAdjustment body=50 status=ok
// SIG undefined GetKerningAdjustment(void)

float Scaleform::GFx::FontDataCompactedSwf::GetKerningAdjustment(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_14339f810(param_1 + 0x60);
  return (fVar1 * 1024.0) / (float)*(uint *)(param_1 + 0xa4);
}


