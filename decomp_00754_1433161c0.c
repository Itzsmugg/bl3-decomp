// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433161c0 operator= body=89 status=ok
// SIG undefined operator=(void)

longlong Scaleform::
         StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::
         operator=(longlong param_1,longlong param_2)

{
  FUN_1432c4d80();
  if ((*(int *)(param_2 + 8) == 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
    GFx::Resource::AddRef();
  }
  if ((*(int *)(param_1 + 8) == 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_1432de450();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 143316220 FUN_143316220 body=91 status=ok
// SIG undefined FUN_143316220(void)

void FUN_143316220(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  
  FUN_1432c4d80(param_1,*param_2);
  piVar1 = (int *)param_2[1];
  if ((*piVar1 == 0) && (*(longlong *)(piVar1 + 2) != 0)) {
    Scaleform::GFx::Resource::AddRef();
  }
  if ((*(int *)(param_1 + 8) == 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_1432de450();
  }
  *(int *)(param_1 + 8) = *piVar1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(piVar1 + 2);
  return;
}



// FUNCTION 143316280 FUN_143316280 body=184 status=ok
// SIG undefined FUN_143316280(void)

undefined8 * FUN_143316280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  if ((RefCountImpl *)param_2[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_2[8]);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)((longlong)param_1 + 0x62) = *(undefined2 *)((longlong)param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)((longlong)param_2 + 100);
  *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x65);
  return param_1;
}



// FUNCTION 143316340 FUN_143316340 body=128 status=ok
// SIG undefined FUN_143316340(void)

undefined4 * FUN_143316340(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = param_2[4];
  uVar1 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  param_1[4] = uVar3;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  FUN_1432fc560(param_1 + 0xc,*(undefined2 *)(param_2 + 0x12),param_2[0xc],
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0xe),param_2[0x13],0);
  return param_1;
}



// FUNCTION 1433163e0 FUN_1433163e0 body=89 status=ok
// SIG undefined FUN_1433163e0(void)

undefined8 FUN_1433163e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14330fa20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 143316440 FUN_143316440 body=176 status=ok
// SIG undefined FUN_143316440(void)

RefCountImplCore * FUN_143316440(RefCountImplCore *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
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



// FUNCTION 1433164f0 FUN_1433164f0 body=120 status=ok
// SIG undefined FUN_1433164f0(void)

RefCountImplCore * FUN_1433164f0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1432de450();
  }
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



// FUNCTION 143316570 FUN_143316570 body=82 status=ok
// SIG undefined FUN_143316570(void)

undefined8 * FUN_143316570(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145afb4d8;
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  *param_1 = &PTR_FUN_145afa360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1433165d0 FUN_1433165d0 body=43 status=ok
// SIG undefined FUN_1433165d0(void)

undefined8 * FUN_1433165d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af1858;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143316600 FUN_143316600 body=89 status=ok
// SIG undefined FUN_143316600(void)

undefined8 FUN_143316600(undefined8 param_1,ulonglong param_2)

{
  FUN_14330d710();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 143316660 FUN_143316660 body=120 status=ok
// SIG undefined FUN_143316660(void)

RefCountImplCore * FUN_143316660(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145afb2d0;
  Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(param_1 + 0x38));
  Scaleform::Mutex::~Mutex((Mutex *)(param_1 + 0x10));
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433166e0 FUN_1433166e0 body=89 status=ok
// SIG undefined FUN_1433166e0(void)

undefined8 FUN_1433166e0(undefined8 param_1,ulonglong param_2)

{
  FUN_143312740();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143316740 FUN_143316740 body=89 status=ok
// SIG undefined FUN_143316740(void)

undefined8 FUN_143316740(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::MovieDataDef::~MovieDataDef();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433167a0 FUN_1433167a0 body=89 status=ok
// SIG undefined FUN_1433167a0(void)

undefined8 FUN_1433167a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433109e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143316800 FUN_143316800 body=43 status=ok
// SIG undefined FUN_143316800(void)

undefined8 * FUN_143316800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145afb2b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143316830 FUN_143316830 body=131 status=ok
// SIG undefined FUN_143316830(void)

void FUN_143316830(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1[1];
    FUN_14330c5b0(param_1,param_1[3],param_3 + lVar1);
    lVar1 = *param_1 + lVar1 * 0x18;
    if (param_3 != 0) {
      puVar2 = (undefined4 *)(param_2 + 0x10);
      do {
        if (lVar1 != 0) {
          FUN_1432c54e0(lVar1,puVar2 + -4,*(undefined8 *)(puVar2 + -2));
          *(undefined4 *)(lVar1 + 0x10) = *puVar2;
        }
        puVar2 = puVar2 + 6;
        lVar1 = lVar1 + 0x18;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



// FUNCTION 1433168c0 FUN_1433168c0 body=67 status=ok
// SIG undefined FUN_1433168c0(void)

void FUN_1433168c0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143317e20(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143317e20(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143316910 FUN_143316910 body=67 status=ok
// SIG undefined FUN_143316910(void)

void FUN_143316910(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143317f90(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143317f90(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143316960 FUN_143316960 body=67 status=ok
// SIG undefined FUN_143316960(void)

void FUN_143316960(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433180f0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433180f0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1433169b0 FUN_1433169b0 body=67 status=ok
// SIG undefined FUN_1433169b0(void)

void FUN_1433169b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143318280(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143318280(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143316a00 FUN_143316a00 body=67 status=ok
// SIG undefined FUN_143316a00(void)

void FUN_143316a00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143318420(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143318420(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143316a50 FUN_143316a50 body=67 status=ok
// SIG undefined FUN_143316a50(void)

void FUN_143316a50(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433185c0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433185c0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143316aa0 FUN_143316aa0 body=67 status=ok
// SIG undefined FUN_143316aa0(void)

void FUN_143316aa0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143318780(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143318780(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143316af0 FUN_143316af0 body=140 status=ok
// SIG undefined FUN_143316af0(void)

void FUN_143316af0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1 + lVar3;
      if (*(longlong *)(lVar1 + 0x10) != -2) {
        if ((*(int *)(lVar1 + 0x20) == 0) && (*(longlong *)(lVar1 + 0x28) != 0)) {
          FUN_1432de450();
        }
        *(undefined8 *)(lVar1 + 0x10) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143316b80 FUN_143316b80 body=177 status=ok
// SIG undefined FUN_143316b80(void)

void FUN_143316b80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar1 + 0x20 + lVar4) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143316c40 FUN_143316c40 body=244 status=ok
// SIG undefined FUN_143316c40(void)

void FUN_143316c40(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (ulonglong *)(param_2 * 0x38 + -0x38 + param_1);
    do {
      uVar2 = puVar4[4];
      puVar3 = (ulonglong *)(puVar4[3] + (uVar2 - 1) * 0x18);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*puVar3 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar1 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        puVar3 = puVar3 + -3;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((*puVar4 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar4 = puVar4 + -7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143316d40 Execute body=35 status=ok
// SIG undefined Execute(void)

void Scaleform::GFx::MovieBindProcess::Execute(undefined8 param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_143312890(param_1);
  } while (iVar1 == 1);
  return;
}



// FUNCTION 143316d80 FUN_143316d80 body=141 status=ok
// SIG undefined FUN_143316d80(void)

ulonglong FUN_143316d80(longlong *param_1,ulonglong *param_2,uint *param_3)

{
  uint *puVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong *local_res8;
  
  if (*param_1 != 0) {
    local_res8 = param_2;
    uVar2 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    in_RAX = FUN_1433155d0(param_1,&local_res8,*(ulonglong *)(*param_1 + 8) & uVar2);
    if ((-1 < (longlong)in_RAX) && (uVar2 = (in_RAX + 1) * 0x20 + *param_1, in_RAX = 0, uVar2 != 0))
    {
      if (param_3 != (uint *)0x0) {
        puVar1 = (uint *)(uVar2 + 8);
        uVar2 = (ulonglong)*puVar1;
        *param_3 = *puVar1;
      }
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143316e10 FUN_143316e10 body=200 status=ok
// SIG undefined FUN_143316e10(void)

ulonglong FUN_143316e10(ulonglong *param_1,ulonglong *param_2,int *param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong *local_res8;
  
  if (*param_1 != 0) {
    local_res8 = param_2;
    uVar2 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    uVar2 = FUN_143315680(param_1,&local_res8,*(ulonglong *)(*param_1 + 8) & uVar2);
    in_RAX = uVar2;
    if (-1 < (longlong)uVar2) {
      in_RAX = *param_1;
      lVar1 = in_RAX + 0x20 + uVar2 * 0x28;
      if (lVar1 != 0) {
        if (param_3 != (int *)0x0) {
          if ((*(int *)(lVar1 + 8) == 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
            Scaleform::GFx::Resource::AddRef();
          }
          if ((*param_3 == 0) && (*(longlong *)(param_3 + 2) != 0)) {
            FUN_1432de450();
          }
          *param_3 = *(int *)(lVar1 + 8);
          in_RAX = *(ulonglong *)(lVar1 + 0x10);
          *(ulonglong *)(param_3 + 2) = in_RAX;
        }
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143317030 FUN_143317030 body=30 status=ok
// SIG undefined FUN_143317030(void)

undefined8 FUN_143317030(longlong param_1,undefined8 param_2)

{
  FUN_1432de380(param_2,param_1 + 0x28);
  return param_2;
}



// FUNCTION 143317050 FUN_143317050 body=38 status=ok
// SIG undefined FUN_143317050(void)

undefined8 FUN_143317050(longlong param_1,undefined8 param_2)

{
  FUN_143310ea0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),
                *(undefined8 *)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 1433170d0 GetMetadata body=88 status=ok
// SIG undefined GetMetadata(void)

ulonglong Scaleform::GFx::MovieDefImpl::GetMetadata(longlong param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
  if (param_2 == (void *)0x0) {
    return (ulonglong)*(uint *)(lVar1 + 0xe0);
  }
  uVar2 = *(uint *)(lVar1 + 0xe0);
  if (param_3 < *(uint *)(lVar1 + 0xe0)) {
    uVar2 = param_3;
  }
  if (*(void **)(lVar1 + 0xd8) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(param_2,*(void **)(lVar1 + 0xd8),(ulonglong)uVar2);
  }
  return (ulonglong)uVar2;
}



// FUNCTION 143317140 FindAllIntersections body=27 status=ok
// SIG undefined FindAllIntersections(void)

undefined8 Chaos::FBVHParticles::FindAllIntersections(longlong param_1,undefined8 param_2)

{
  FUN_14330f0e0(*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 143317160 FUN_143317160 body=170 status=ok
// SIG undefined FUN_143317160(void)

longlong FUN_143317160(int *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_18;
  longlong lStack_10;
  
  if (*param_1 == 0) {
    return *(longlong *)(param_1 + 2);
  }
  local_18 = 0;
  lStack_10 = 0;
  if ((*(char *)(param_2 + 0x48) == '\0') || (*(uint *)(param_2 + 8) <= (uint)param_1[2])) {
    FUN_14330cc40(param_2,&local_18);
  }
  else {
    plVar2 = (longlong *)((ulonglong)(uint)param_1[2] * 0x10 + *(longlong *)(param_2 + 0x10));
    if (*plVar2 != 0) {
      Scaleform::GFx::Resource::AddRef();
      if (local_18 != 0) {
        FUN_1432de450();
      }
    }
    local_18 = *plVar2;
    lStack_10 = plVar2[1];
  }
  lVar1 = local_18;
  if (local_18 != 0) {
    FUN_1432de450(local_18);
  }
  return lVar1;
}



// FUNCTION 143317210 GetResourceData body=105 status=ok
// SIG undefined GetResourceData(void)

void Scaleform::GFx::ResourceBinding::GetResourceData
               (longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x48) != '\0') && (param_3 < *(uint *)(param_1 + 8))) {
    plVar1 = (longlong *)((ulonglong)param_3 * 0x10 + *(longlong *)(param_1 + 0x10));
    if (*plVar1 != 0) {
      Resource::AddRef();
    }
    if (*param_2 != 0) {
      FUN_1432de450();
    }
    *param_2 = *plVar1;
    param_2[1] = plVar1[1];
    return;
  }
  FUN_14330cc40();
  return;
}



// FUNCTION 143317290 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_1432c2f70(param_2);
  return param_2;
}



// FUNCTION 1433172f0 FUN_1433172f0 body=35 status=ok
// SIG undefined FUN_1433172f0(void)

undefined8 FUN_1433172f0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x88))();
  return param_2;
}



// FUNCTION 143317390 FUN_143317390 body=92 status=ok
// SIG undefined FUN_143317390(void)

void FUN_143317390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  lVar1 = param_1 + -0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  plVar2 = *(longlong **)(lVar1 + 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)Scaleform::Log::GetGlobalLog();
  }
  local_18[0] = 0x21000;
  (**(code **)(*plVar2 + 8))(plVar2,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 1433173f0 FUN_1433173f0 body=72 status=ok
// SIG undefined FUN_1433173f0(void)

void FUN_1433173f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)FUN_143396bf0();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x21000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 143317440 FUN_143317440 body=244 status=ok
// SIG undefined FUN_143317440(void)

undefined8 FUN_143317440(ulonglong *param_1,ulonglong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (int *)(*param_2 & 0xfffffffffffffffc);
  piVar6 = (int *)(*param_1 & 0xfffffffffffffffc);
  iVar10 = *piVar5 + -1;
  iVar9 = *piVar6 + -1;
  if (((iVar9 < 0) || (iVar10 < 0)) && (iVar9 != iVar10)) {
    return 0;
  }
  if (-1 < iVar9) {
    lVar8 = (longlong)iVar9;
    lVar3 = (longlong)iVar10;
    do {
      if (lVar3 < 0) break;
      cVar2 = *(char *)((longlong)piVar6 + lVar8 + 0xc);
      if ((cVar2 == '\\') || (cVar2 == '/')) {
        cVar1 = *(char *)((longlong)piVar5 + lVar3 + 0xc);
        if (cVar1 == '\\') {
          return 1;
        }
        if (cVar1 == '/') {
          return 1;
        }
      }
      iVar7 = (int)cVar2;
      if (iVar7 - 0x41U < 0x1a) {
        iVar7 = iVar7 + 0x20;
      }
      iVar4 = (int)*(char *)((longlong)piVar5 + lVar3 + 0xc);
      if (iVar4 - 0x41U < 0x1a) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar7 != iVar4) {
        return 0;
      }
      iVar9 = iVar9 + -1;
      iVar10 = iVar10 + -1;
      lVar3 = lVar3 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  if (iVar10 == iVar9) {
    return 1;
  }
  if (iVar10 < iVar9) {
    cVar2 = *(char *)((longlong)iVar9 + 0xc + (longlong)piVar6);
  }
  else {
    cVar2 = *(char *)((longlong)iVar10 + 0xc + (longlong)piVar5);
  }
  if ((cVar2 != '\\') && (cVar2 != '/')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143317560 FUN_143317560 body=167 status=ok
// SIG undefined FUN_143317560(void)

void FUN_143317560(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x108;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143317610 FUN_143317610 body=165 status=ok
// SIG undefined FUN_143317610(void)

void FUN_143317610(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x108;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433176c0 FUN_1433176c0 body=134 status=ok
// SIG undefined FUN_1433176c0(void)

void FUN_1433176c0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_143317707;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_143317707;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432d5ad0(param_1,param_1,uVar4);
LAB_143317707:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x10 + *param_1);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
      }
      puVar2 = puVar2 + 2;
    }
  }
  return;
}



// FUNCTION 143317750 FUN_143317750 body=155 status=ok
// SIG undefined FUN_143317750(void)

void FUN_143317750(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_143316c40(param_3 * 0x38 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5a20(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5a20(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1433177f0 FUN_1433177f0 body=174 status=ok
// SIG undefined FUN_1433177f0(void)

void FUN_1433177f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
      FUN_143317560(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143317560(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433178a0 FUN_1433178a0 body=174 status=ok
// SIG undefined FUN_1433178a0(void)

void FUN_1433178a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
      FUN_143317610(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143317610(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143317950 FUN_143317950 body=210 status=ok
// SIG undefined FUN_143317950(void)

void FUN_143317950(longlong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *local_res8;
  ulonglong *local_18;
  undefined4 *local_10;
  
  local_res8 = param_2;
  if (*param_1 != 0) {
    uVar2 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    lVar3 = FUN_1433155d0(param_1,&local_res8,*(ulonglong *)(*param_1 + 8) & uVar2);
    if (((-1 < lVar3) && (lVar1 = *param_1, lVar1 != 0)) && (lVar3 <= *(longlong *)(lVar1 + 8))) {
      *(undefined4 *)(lVar3 * 0x20 + 0x28 + lVar1) = *param_3;
      return;
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  uVar4 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505);
  FUN_143314df0(param_1,param_1,&local_18,uVar4);
  return;
}



// FUNCTION 143317a30 FUN_143317a30 body=266 status=ok
// SIG undefined FUN_143317a30(void)

void FUN_143317a30(longlong *param_1,ulonglong *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *local_res8;
  ulonglong *local_18;
  int *local_10;
  
  local_res8 = param_2;
  if (*param_1 != 0) {
    uVar3 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    lVar4 = FUN_143315680(param_1,&local_res8,*(ulonglong *)(*param_1 + 8) & uVar3);
    if (((-1 < lVar4) && (lVar2 = *param_1, lVar2 != 0)) && (lVar4 <= *(longlong *)(lVar2 + 8))) {
      piVar1 = (int *)(lVar2 + (lVar4 * 5 + 5) * 8);
      if ((*param_3 == 0) && (*(longlong *)(param_3 + 2) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*piVar1 == 0) && (*(longlong *)(piVar1 + 2) != 0)) {
        FUN_1432de450();
      }
      *piVar1 = *param_3;
      *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(param_3 + 2);
      return;
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  uVar5 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505);
  FUN_143314f90(param_1,param_1,&local_18,uVar5);
  return;
}



// FUNCTION 143317b60 FUN_143317b60 body=183 status=ok
// SIG undefined FUN_143317b60(void)

void FUN_143317b60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_3);
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar3 = FUN_143315420(plVar1,lVar3 + 0x10);
  if (lVar3 < 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar1 + (lVar3 * 3 + 4) * 8;
  }
  if (param_5 == (char *)0x0) {
LAB_143317be7:
    bVar2 = false;
  }
  else {
    pcVar4 = strstr(param_5,"-forcepack");
    if (pcVar4 == (char *)0x0) {
      pcVar4 = strstr(param_5,".forcepack");
      if (pcVar4 == (char *)0x0) goto LAB_143317be7;
    }
    bVar2 = true;
  }
  if ((lVar3 == 0) || (bVar2)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_3,param_5);
  }
  return;
}



// FUNCTION 143317c40 FUN_143317c40 body=143 status=ok
// SIG undefined FUN_143317c40(void)

void FUN_143317c40(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  if ((param_2 != '\0') && (lVar3 = *(longlong *)(lVar2 + 0x40), *(int *)(lVar3 + 0xe4) < 2)) {
    *(undefined1 *)(lVar3 + 0xec) = 1;
  }
  FUN_14330e460(*(undefined8 *)(lVar2 + 0x40));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xf8);
  Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x10));
  cVar1 = *(char *)(lVar2 + 0x40);
  while (cVar1 == '\0') {
    Scaleform::WaitCondition::Wait
              ((WaitCondition *)(lVar2 + 0x38),(Mutex *)(lVar2 + 0x10),0xffffffff);
    cVar1 = *(char *)(lVar2 + 0x40);
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x10));
  return;
}



// FUNCTION 143317cd0 FUN_143317cd0 body=327 status=ok
// SIG undefined FUN_143317cd0(void)

void FUN_143317cd0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar2 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar2 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar2 = lVar2 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar6) != -2) {
        lVar4 = 8;
        lVar7 = lVar2 + 0x20 + lVar6;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + -1;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143313c20(&local_res20,param_2,lVar7,lVar8);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143317e20 FUN_143317e20 body=365 status=ok
// SIG undefined FUN_143317e20(void)

void FUN_143317e20(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
    FUN_143315ca0();
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
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x20;
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
        FUN_143313d70(&local_res20,param_2,lVar6 + 0x20,lVar7);
        if (*(RefCountImpl **)(lVar6 + 0x28) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar6 + 0x28));
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143317f90 FUN_143317f90 body=342 status=ok
// SIG undefined FUN_143317f90(void)

void FUN_143317f90(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143316af0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar2 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar2;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x20;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar2;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_143313f10(&local_res20,param_2,lVar4 + 0x18,
                      *(uint *)(lVar4 + 0x18) >> 8 ^ *(uint *)(lVar4 + 0x18));
        if ((*(int *)(lVar4 + 0x20) == 0) && (*(longlong *)(lVar4 + 0x28) != 0)) {
          FUN_1432de450();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433180f0 FUN_1433180f0 body=396 status=ok
// SIG undefined FUN_1433180f0(void)

void FUN_1433180f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143315d30();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar7 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
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
        lVar4 = 4;
        lVar9 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar9 = lVar9 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar8);
        } while (lVar4 != 0);
        FUN_1433140d0(&local_res20,param_2,lVar8 + 0x20,lVar9);
        uVar6 = *(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc;
        iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar3 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar8 + 0x10) = 0xfffffffffffffffe;
      }
      lVar7 = lVar7 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143318280 FUN_143318280 body=408 status=ok
// SIG undefined FUN_143318280(void)

void FUN_143318280(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
    FUN_143315de0();
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
  lVar8 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar8;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar8;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_143314240(&local_res20,param_2,lVar7 + 0x20,uVar3);
        uVar6 = *(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar8 = lVar8 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143318420 FUN_143318420 body=403 status=ok
// SIG undefined FUN_143318420(void)

void FUN_143318420(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
    FUN_143315ea0();
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
  lVar8 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar8;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar8;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_1433143a0(&local_res20,param_2,lVar7 + 0x20,uVar3);
        uVar6 = *(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar8 = lVar8 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433185c0 FUN_1433185c0 body=443 status=ok
// SIG undefined FUN_1433185c0(void)

void FUN_1433185c0(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
    FUN_143315f50();
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
  lVar8 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x28 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar8;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x28;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar8;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_143314500(&local_res20,param_2,lVar7 + 0x20,uVar3);
        if ((*(int *)(lVar7 + 0x28) == 0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
          FUN_1432de450();
        }
        uVar6 = *(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar8 = lVar8 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143318780 FUN_143318780 body=408 status=ok
// SIG undefined FUN_143318780(void)

void FUN_143318780(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
    FUN_143316b80();
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
  lVar8 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar8;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar8;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_143315160(&local_res20,param_2,lVar7 + 0x20,uVar3);
        uVar6 = *(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar8 = lVar8 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143318920 FUN_143318920 body=144 status=ok
// SIG undefined FUN_143318920(void)

undefined8 * FUN_143318920(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afb968;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1432c2f70(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 1433189c0 FUN_1433189c0 body=335 status=ok
// SIG undefined FUN_1433189c0(void)

void FUN_1433189c0(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_145afb968;
  lVar4 = *(longlong *)(param_1 + 0x88);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x80) + (lVar4 + -1) * 8);
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (*plVar3 != 0) {
      FUN_1432de450();
    }
    plVar3 = plVar3 + -1;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  uVar1 = *(ulonglong *)(param_1 + 0x70);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  if (*(RefCountImpl **)(param_1 + 0x50) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x50));
  }
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143318b20 FUN_143318b20 body=888 status=ok
// SIG undefined FUN_143318b20(void)

undefined8 *
FUN_143318b20(undefined8 *param_1,RefCountImpl *param_2,RefCountImpl *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  RefCountImpl *pRVar4;
  RefCountImpl *local_res8;
  
  uVar2 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afb968;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1432c2f70(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = param_2;
  pRVar4 = *(RefCountImpl **)(param_2 + 0x28);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[0xc] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xc]);
  }
  param_1[0xc] = pRVar4;
  if (param_3 == (RefCountImpl *)0x0) {
    param_3 = param_2 + 0x10;
  }
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (param_4 == 0) {
    if (lVar1 != 0) {
      uVar2 = FUN_1432bd270(lVar1,param_3);
    }
  }
  else if (lVar1 != 0) {
    uVar2 = FUN_14331adc0(lVar1,param_4);
  }
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  param_1[2] = uVar2;
  puVar3 = (undefined8 *)Scaleform::GFx::StateBag::GetLogState(param_3,&local_res8);
  if ((RefCountImpl *)*puVar3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*puVar3);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = *puVar3;
  if (local_res8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x10);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x11);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x18);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0xf);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  param_1[7] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x1d);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x1e);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[9] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[9]);
  }
  param_1[9] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x28);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  param_1[10] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  pRVar4 = (RefCountImpl *)(**(code **)(*(longlong *)param_3 + 0x18))(param_3,0x29);
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar4);
  }
  if ((RefCountImpl *)param_1[0xb] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xb]);
  }
  param_1[0xb] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  return param_1;
}



// FUNCTION 143318ea0 FUN_143318ea0 body=538 status=ok
// SIG undefined FUN_143318ea0(void)

RefCountImpl * FUN_143318ea0(longlong param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  RefCountImpl *pRVar2;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  pRVar2 = (RefCountImpl *)0x0;
  this = pRVar2;
  if (lVar1 != 0) {
    this = (RefCountImpl *)FUN_14331adc0(lVar1,*(undefined8 *)(param_1 + 0x10));
  }
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  if ((lVar1 != 0) && (pRVar2 = (RefCountImpl *)FUN_143318920(lVar1), pRVar2 != (RefCountImpl *)0x0)
     ) {
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    if (*(RefCountImpl **)(pRVar2 + 0x10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x10));
    }
    *(RefCountImpl **)(pRVar2 + 0x10) = this;
    if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x68));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x68));
    }
    *(undefined8 *)(pRVar2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x18));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x18) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x18));
    }
    *(undefined8 *)(pRVar2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x28));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x28) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x28));
    }
    *(undefined8 *)(pRVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x30));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x30));
    }
    *(undefined8 *)(pRVar2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x20));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x20));
    }
    *(undefined8 *)(pRVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x60));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x60) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x60));
    }
    *(undefined8 *)(pRVar2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x38));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x38));
    }
    *(undefined8 *)(pRVar2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x40));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x40) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x40));
    }
    *(undefined8 *)(pRVar2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    if (*(RefCountImpl **)(param_1 + 0x50) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x50));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x50) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x50));
    }
    *(undefined8 *)(pRVar2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x58));
    }
    if (*(RefCountImpl **)(pRVar2 + 0x58) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x58));
    }
    *(undefined8 *)(pRVar2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return pRVar2;
}



// FUNCTION 1433190c0 FUN_1433190c0 body=65 status=ok
// SIG undefined FUN_1433190c0(void)

void FUN_1433190c0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = param_1 + 0x70;
  Scaleform::String::operator=
            (param_1,(*(ulonglong *)(*(longlong *)(param_2 + 0x40) + 0x48) & 0xfffffffffffffffc) +
                     0xc);
  cVar1 = FUN_1432bad10(param_1);
  if (cVar1 == '\0') {
    FUN_1432c3510(param_1);
    return;
  }
  return;
}



// FUNCTION 143319110 GetLoadTimeImageCreator body=22 status=ok
// SIG undefined GetLoadTimeImageCreator(void)

longlong Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if ((-1 < param_2) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), lVar1 != 0)) {
    lVar2 = lVar1;
  }
  return lVar2;
}



// FUNCTION 143319130 GetImageCreator body=9 status=ok
// SIG undefined GetImageCreator(void)

undefined8 Scaleform::GFx::LoadStates::GetImageCreator(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20);
}



// FUNCTION 143319140 FUN_143319140 body=150 status=ok
// SIG undefined FUN_143319140(void)

undefined8 FUN_143319140(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) == 0) {
    if ((*(longlong *)(param_1 + 0x18) != 0) && ((param_3 >> 0x15 & 1) == 0)) {
      FUN_143300d50(*(longlong *)(param_1 + 0x18) + 0x18,
                    "Loader failed to open \'%s\', FileOpener not installe",param_2);
    }
    return 0;
  }
  if ((param_3 >> 0x15 & 1) == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (lVar2 == 0) {
      lVar2 = Scaleform::Log::GetGlobalLog();
    }
  }
  else {
    lVar2 = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,lVar2,0x21,0x1b6);
  return uVar3;
}



// FUNCTION 1433191e0 BuildURL body=34 status=ok
// SIG undefined BuildURL(void)

void Scaleform::GFx::LoadStates::BuildURL(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
  if (plVar1 == (longlong *)0x0) {
    FUN_1432bb160(param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433191fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))();
  return;
}



// FUNCTION 143319210 SubmitBackgroundTask body=36 status=ok
// SIG undefined SubmitBackgroundTask(void)

bool Scaleform::GFx::LoadStates::SubmitBackgroundTask(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    return false;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
  return cVar1 != '\0';
}



// FUNCTION 143319240 FUN_143319240 body=395 status=ok
// SIG undefined FUN_143319240(void)

undefined8 * FUN_143319240(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  FUN_1432fceb0(param_1,param_3,0x20001);
  *param_1 = &PTR_FUN_145afb970;
  param_1[4] = &PTR_LAB_145afb988;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_143395610(param_1 + 10,0,*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x38),0,0);
  FUN_143300290(param_1 + 0x5a);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  lVar2 = 2;
  param_1[0x6c] = 0;
  puVar1 = param_1 + 0x79;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  uVar3 = 0;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    uVar3 = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x18);
  }
  *(undefined4 *)(param_1 + 5) = uVar3;
  if (*(RefCountImpl **)(param_2 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x40));
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  param_1[7] = *(undefined8 *)(param_2 + 0x40);
  param_1[8] = param_2;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x6d) = param_4;
  *(undefined4 *)(param_1 + 0x77) = 0;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x83] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  return param_1;
}



// FUNCTION 1433193e0 FUN_1433193e0 body=475 status=ok
// SIG undefined FUN_1433193e0(void)

void FUN_1433193e0(undefined8 *param_1)

{
  longlong *plVar1;
  RefCountImpl *this;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong local_res8;
  
  *param_1 = &PTR_FUN_145afb970;
  param_1[4] = &PTR_LAB_145afb988;
  FUN_1432c2fb0(&local_res8,(*(ulonglong *)(param_1[7] + 0x48) & 0xfffffffffffffffc) + 0xc);
  cVar2 = FUN_1432badc0(&local_res8);
  if (cVar2 != '\0') {
    FUN_1432fe250(*(undefined8 *)(param_1[3] + 0x68),(local_res8 & 0xfffffffffffffffc) + 0xc);
  }
  if ((RefCountImpl *)param_1[0x6c] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x6c]);
  }
  param_1[0x6c] = 0;
  this = *(RefCountImpl **)(param_1[7] + 0xf8);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  Scaleform::GFx::Stream::ShutDown(param_1 + 10);
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  param_1[7] = 0;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = 0;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::Mutex::DoLock((Mutex *)(this + 0x10));
    this[0x40] = (RefCountImpl)0x1;
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(this + 0x38));
    Scaleform::Mutex::Unlock((Mutex *)(this + 0x10));
    Scaleform::RefCountImpl::Release(this);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  plVar5 = param_1 + 0x7f;
  if (*plVar5 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  lVar4 = 2;
  do {
    plVar1 = plVar5 + -3;
    plVar5 = plVar5 + -3;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  } while (lVar4 != 0);
  if ((RefCountImpl *)param_1[0x6c] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x6c]);
  }
  FUN_1433004b0(param_1 + 0x60);
  FUN_143395770(param_1 + 10);
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[4] = &PTR_FUN_145af8cf0;
  FUN_1432fcf30(param_1);
  return;
}



// FUNCTION 1433195d0 FUN_1433195d0 body=104 status=ok
// SIG undefined FUN_1433195d0(void)

undefined1 FUN_1433195d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  cVar2 = FUN_1432fca40(param_1 + 0x50,param_2,*(undefined8 *)(lVar1 + 0x18),
                        *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48),
                        *(undefined8 *)(lVar1 + 0x20),1);
  if (cVar2 == '\0') {
    return 0;
  }
  *(uint *)(*(longlong *)(param_1 + 0x38) + 0xd0) = (uint)*(ushort *)(param_1 + 0x350);
  Scaleform::GFx::MovieDataDef::LoadTaskData::BeginSWFLoading
            (*(undefined8 *)(param_1 + 0x38),param_1 + 0x2d0);
  return 1;
}



// FUNCTION 143319640 ReadRgbaTag body=47 status=ok
// SIG undefined ReadRgbaTag(void)

void Scaleform::GFx::LoadProcess::ReadRgbaTag(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (param_3 < 0x17) {
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x50;
    }
    FUN_143396a00(lVar1);
    return;
  }
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
  }
  FUN_143396ac0(lVar1);
  return;
}



// FUNCTION 143319680 FUN_143319680 body=277 status=ok
// SIG undefined FUN_143319680(void)

longlong FUN_143319680(longlong param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_3;
  FUN_14330e630(*(undefined8 *)(param_1 + 0x38),param_2,local_res8);
  lVar1 = *(longlong *)(param_1 + 0x38);
  puVar4 = (undefined8 *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x20) {
    plVar3 = (longlong *)FUN_14330cf40(puVar4,0x20);
  }
  else {
    plVar3 = (longlong *)*puVar4;
    *puVar4 = plVar3 + 4;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x20;
  }
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[3] = 0;
    plVar2 = (longlong *)*param_4;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,param_4[1]);
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,plVar3[1]);
    }
    *plVar3 = *param_4;
    plVar3[1] = param_4[1];
    *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(param_2 + 8);
    if (*(longlong *)(param_1 + 0x398) == 0) {
      *(longlong **)(param_1 + 0x398) = plVar3;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x130) == 0) {
      *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x130) = plVar3;
    }
    else {
      *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138) + 0x18) = plVar3;
    }
    *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x138) = plVar3;
    *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
  }
  return param_2;
}



// FUNCTION 1433197a0 FUN_1433197a0 body=336 status=ok
// SIG undefined FUN_1433197a0(void)

longlong FUN_1433197a0(longlong param_1,longlong param_2,undefined4 *param_3,RefCountImpl *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined **local_28;
  RefCountImpl *local_20;
  
  (**(code **)(PTR_PTR_1467ce290 + 8))(&PTR_PTR_1467ce290,param_4);
  local_res8[0] = *param_3;
  local_28 = &PTR_PTR_1467ce290;
  local_20 = param_4;
  FUN_143319680(param_1,param_2,local_res8,&local_28);
  lVar1 = *(longlong *)(param_1 + 0x38);
  puVar3 = (undefined8 *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x20) {
    puVar2 = (undefined4 *)FUN_14330cf40(puVar3,0x20);
  }
  else {
    puVar2 = (undefined4 *)*puVar3;
    *puVar3 = puVar2 + 8;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x20;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x40000;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *puVar2 = *param_3;
    if (param_4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_4);
    }
    if (*(RefCountImpl **)(puVar2 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar2 + 2));
    }
    *(RefCountImpl **)(puVar2 + 2) = param_4;
    puVar2[4] = *(undefined4 *)(param_2 + 8);
    if (*(longlong *)(param_1 + 0x3a8) == 0) {
      *(undefined4 **)(param_1 + 0x3a8) = puVar2;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) == 0) {
      *(undefined4 **)(*(longlong *)(param_1 + 0x38) + 0x120) = puVar2;
    }
    else {
      *(undefined4 **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x128) + 0x18) = puVar2;
    }
    *(undefined4 **)(*(longlong *)(param_1 + 0x38) + 0x128) = puVar2;
    *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + 1;
  }
  (**(code **)(PTR_PTR_1467ce290 + 0x10))(&PTR_PTR_1467ce290,param_4);
  return param_2;
}



// FUNCTION 143319900 FUN_143319900 body=542 status=ok
// SIG undefined FUN_143319900(void)

void FUN_143319900(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_res18 [4];
  longlong *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 local_84;
  RefCountImpl *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60 [2];
  longlong local_58;
  undefined4 local_50 [2];
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_3 != 0) {
    if (((*(byte *)(param_1 + 0x368) & 0x80) == 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0x20),
       plVar1 != (longlong *)0x0)) {
      local_90 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,1);
      local_88 = 1;
      local_84 = 1;
      local_80 = (RefCountImpl *)0x0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,&local_98);
      lVar2 = (**(code **)(*local_90 + 0x50))(local_90,0x68);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_1432ef310(lVar2,plVar1,1);
      }
      if (*(int *)(param_1 + 0x3b8) == 0) {
        local_res18[0] = *param_2;
        FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res18,lVar2);
      }
      if (lVar2 != 0) {
        FUN_1432de450(lVar2);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    else {
      local_48 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
      local_50[0] = 1;
      local_40 = 1;
      local_3c = 1;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      FUN_1432e0e80(&local_98,0);
      plVar1 = (longlong *)FUN_1432e1440(&local_98,local_50,param_3);
      lVar2 = (**(code **)(*local_48 + 0x50))(local_48,0x18);
      if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)FUN_14331aff0(lVar2,plVar1);
      }
      FUN_14331a7b0(&local_a8,plVar3);
      local_res18[0] = *param_2;
      FUN_143319680(param_1,local_60,local_res18,&local_a8);
      if ((local_60[0] == 0) && (local_58 != 0)) {
        FUN_1432de450();
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))(local_a8,local_a0);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      if (local_80 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_80);
      }
      local_98 = &PTR_FUN_144f70c80;
      Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_98);
    }
  }
  return;
}



// FUNCTION 143319b30 FUN_143319b30 body=111 status=ok
// SIG undefined FUN_143319b30(void)

void FUN_143319b30(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x36c);
  *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x36c) + 1;
  if (*(longlong *)(param_1 + 0x390) == 0) {
    *(longlong *)(param_1 + 0x390) = param_2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x110) == 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x110) = param_2;
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x118) = param_2;
    *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + 1;
    return;
  }
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x118) + 0x28) = param_2;
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x118) = param_2;
  *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + 1;
  return;
}



// FUNCTION 143319bb0 FUN_143319bb0 body=212 status=ok
// SIG undefined FUN_143319bb0(void)

undefined8 * FUN_143319bb0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  puVar3 = (undefined8 *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x38) {
    puVar2 = (undefined8 *)FUN_14330cf40(puVar3,0x38);
  }
  else {
    puVar2 = (undefined8 *)*puVar3;
    *puVar3 = puVar2 + 7;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x38;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0x378);
    puVar2[3] = *(undefined8 *)(param_1 + 0x390);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x380);
    puVar2[4] = *(undefined8 *)(param_1 + 0x3a8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x37c);
    puVar2[5] = *(undefined8 *)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143319c90 FUN_143319c90 body=193 status=ok
// SIG undefined FUN_143319c90(void)

undefined8 * FUN_143319c90(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong _Size;
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar1 = param_3[1];
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    _Size = lVar1 * 8;
    if (*(ulonglong *)(lVar2 + 0x18) < _Size) {
      _Dst = (void *)FUN_14330cf40(lVar2 + 0x10);
    }
    else {
      _Dst = *(void **)(lVar2 + 0x10);
      *(ulonglong *)(lVar2 + 0x18) = *(ulonglong *)(lVar2 + 0x18) + lVar1 * -8;
      *(void **)(lVar2 + 0x10) = (void *)((longlong)_Dst + _Size);
    }
    *param_2 = _Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_3,_Size);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    }
    if ((param_3[1] != 0) && ((param_3[2] & 0xfffffffffffffffe) != 0)) {
      FUN_14330c390(param_3,param_3,0);
    }
    param_3[1] = 0;
  }
  return param_2;
}



// FUNCTION 143319d60 FUN_143319d60 body=234 status=ok
// SIG undefined FUN_143319d60(void)

void FUN_143319d60(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  if (*(int *)(param_1 + 0x3b8) == 1) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
    lVar2 = **(longlong **)(param_1 + 0x3c0);
    uVar4 = FUN_143319c90(param_1,local_18,param_1 + 0x3e0);
    (**(code **)(lVar2 + 0x80))(*(undefined8 *)(param_1 + 0x3c0),uVar4,uVar1);
    return;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  plVar3 = *(longlong **)(param_1 + 0x38);
  lVar2 = *plVar3;
  uVar4 = FUN_143319c90(param_1,local_18,
                        ((longlong)*(int *)(param_1 + 0x3b8) * 3 + 0x79) * 8 + param_1);
  (**(code **)(lVar2 + 0x10))(plVar3,uVar4,uVar1);
  plVar3 = *(longlong **)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  lVar2 = *plVar3;
  uVar4 = FUN_143319c90(param_1,local_18,param_1 + 0x3f8);
  (**(code **)(lVar2 + 0x18))(plVar3,uVar4,uVar1);
  return;
}



// FUNCTION 143319e50 FUN_143319e50 body=507 status=ok
// SIG undefined FUN_143319e50(void)

void FUN_143319e50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  uVar4 = 0;
  uVar3 = uVar4;
  if (*(longlong *)(param_1 + 1000) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3e0) + uVar3 * 8);
      (**(code **)*puVar1)(puVar1,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 1000));
  }
  uVar3 = uVar4;
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3c8) + uVar3 * 8);
      (**(code **)*puVar1)(puVar1,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x3d0));
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + uVar4 * 8);
      (**(code **)*puVar1)(puVar1,0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x400));
  }
  if (((*(longlong *)(param_1 + 1000) != 0) &&
      ((*(ulonglong *)(param_1 + 0x3f0) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x3f0) != 0)) {
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      local_res8[0] = 2;
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x100,local_res8);
    }
    else {
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x3e0),0x100);
    }
    *(undefined8 *)(param_1 + 0x3e0) = uVar2;
    *(undefined8 *)(param_1 + 0x3f0) = 0x20;
  }
  *(undefined8 *)(param_1 + 1000) = 0;
  if (((*(longlong *)(param_1 + 0x3d0) != 0) &&
      ((*(ulonglong *)(param_1 + 0x3d8) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x3d8) != 0)) {
    if (*(longlong *)(param_1 + 0x3c8) == 0) {
      local_res8[0] = 2;
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x100,local_res8);
    }
    else {
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x3c8),0x100);
    }
    *(undefined8 *)(param_1 + 0x3c8) = uVar2;
    *(undefined8 *)(param_1 + 0x3d8) = 0x20;
  }
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (((*(longlong *)(param_1 + 0x400) != 0) &&
      ((*(ulonglong *)(param_1 + 0x408) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x408) != 0)) {
    if (*(longlong *)(param_1 + 0x3f8) == 0) {
      local_res8[0] = 2;
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x100,local_res8);
    }
    else {
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x3f8),0x100);
    }
    *(undefined8 *)(param_1 + 0x3f8) = uVar2;
    *(undefined8 *)(param_1 + 0x408) = 0x20;
  }
  *(undefined8 *)(param_1 + 0x400) = 0;
  return;
}



// FUNCTION 14331a060 FUN_14331a060 body=1390 status=ok
// SIG undefined FUN_14331a060(void)

undefined8 FUN_14331a060(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar4;
  RefCountNTSImpl *pRVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  ulonglong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  ulonglong local_148;
  int local_140 [2];
  RefCountImpl *local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  ulonglong local_f0;
  ulonglong local_e8 [2];
  undefined4 local_d8 [2];
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  RefCountNTSImpl *local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  uint local_88;
  uint local_84;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  RefCountNTSImpl *local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res18 = param_3;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
  pRVar5 = (RefCountNTSImpl *)0x0;
  this = pRVar5;
  if (lVar3 != 0) {
    this = (RefCountNTSImpl *)FUN_14331ac40(lVar3,param_2);
  }
  if ((*(int *)(this + 0x10) == 1) && (*(undefined4 **)(this + 0x18) != (undefined4 *)0x0)) {
    *(undefined4 *)(this + 0x10) = **(undefined4 **)(this + 0x18);
  }
  local_f8[0] = 2;
  FUN_1432c31e0(&local_f0,param_2 + 0x20);
  FUN_1432c31e0(local_e8,param_4 + 0x70);
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x10) + 0x18);
  if (plVar1 == (longlong *)0x0) {
    FUN_1432bb160(this + 0x20,local_f8);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,this + 0x20,local_f8);
  }
  local_res20 = *(longlong **)(*(longlong *)(param_4 + 0x60) + 0x50);
  FUN_1433b5740(&local_108,this,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x20),local_res20);
  FUN_1432c2f70(&local_res10);
  local_140[0] = 0;
  local_138 = (RefCountImpl *)0x0;
  iVar2 = FUN_1432dee30(*(undefined8 *)(param_4 + 0x60),local_140,&local_108);
  if (iVar2 == 3) {
    plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x10) + 0x20);
    pRVar4 = pRVar5;
    if (plVar1 == (longlong *)0x0) {
LAB_14331a3d4:
      Scaleform::String::operator=(&local_res10,"Failed to load image \'");
      FUN_1432c4fd0(&local_res10,this + 0x20);
      FUN_1432c3950(&local_res10,&DAT_145afba48,0xffffffffffffffff);
      FUN_1432de9d0(local_138,(local_res10 & 0xfffffffffffffffc) + 0xc);
    }
    else {
      if (*(longlong *)(param_2 + 0x18) == 0) {
        uVar6 = *(undefined8 *)(param_4 + 0x38);
        local_70 = local_res20;
        local_64 = *(undefined4 *)(param_2 + 0x2c);
        local_78[0] = 1;
        local_68 = 0;
        local_60 = (RefCountNTSImpl *)0x0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_148 = *(ulonglong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        if ((*(longlong *)(param_4 + 0x18) != 0) &&
           (pRVar4 = *(RefCountNTSImpl **)(*(longlong *)(param_4 + 0x18) + 0x20),
           pRVar4 == (RefCountNTSImpl *)0x0)) {
          pRVar4 = (RefCountNTSImpl *)Scaleform::Log::GetGlobalLog();
        }
        local_60 = pRVar4;
        uStack_58 = local_148;
        local_50 = uVar6;
        pRVar4 = (RefCountNTSImpl *)(**(code **)(*plVar1 + 0x10))(plVar1,local_78,this + 0x20);
      }
      else {
        local_d0 = local_res20;
        local_c4 = *(undefined4 *)(param_2 + 0x2c);
        local_d8[0] = 2;
        local_c8 = 0;
        local_c0 = (RefCountNTSImpl *)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        FUN_1432c2f70(&local_90);
        uVar6 = *(undefined8 *)(param_4 + 0x38);
        local_148 = *(ulonglong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        if ((*(longlong *)(param_4 + 0x18) != 0) &&
           (pRVar4 = *(RefCountNTSImpl **)(*(longlong *)(param_4 + 0x18) + 0x20),
           pRVar4 == (RefCountNTSImpl *)0x0)) {
          pRVar4 = (RefCountNTSImpl *)Scaleform::Log::GetGlobalLog();
        }
        local_98 = *(undefined8 *)(param_2 + 0x18);
        local_c0 = pRVar4;
        local_b8 = local_148;
        uStack_b0 = uVar6;
        local_a0 = FUN_1432ff7e0(*(undefined4 *)(param_2 + 0x10));
        local_88 = (uint)*(ushort *)(param_2 + 0x28);
        local_84 = (uint)*(ushort *)(param_2 + 0x2a);
        FUN_1432c4d80(&local_90,param_2 + 0x30);
        pRVar4 = (RefCountNTSImpl *)(**(code **)(*plVar1 + 0x18))(plVar1,local_d8,this + 0x20);
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_90 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_90 & 0xfffffffffffffffc);
        }
      }
      if (pRVar4 == (RefCountNTSImpl *)0x0) goto LAB_14331a3d4;
      local_128 = 1.0;
      fStack_124 = 0.0;
      fStack_120 = 0.0;
      fStack_11c = 0.0;
      local_118 = 0.0;
      fStack_114 = 1.0;
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      (**(code **)(*(longlong *)pRVar4 + 0x28))(pRVar4,&local_148);
      fVar8 = (float)*(ushort *)(param_2 + 0x2a) / (float)(local_148 >> 0x20);
      fVar7 = (float)*(ushort *)(param_2 + 0x28) / (float)(local_148 & 0xffffffff);
      local_128 = local_128 * fVar7;
      fStack_124 = fStack_124 * fVar7;
      fStack_120 = fStack_120 * fVar7;
      fStack_11c = fStack_11c * fVar7;
      local_118 = local_118 * fVar8;
      fStack_114 = fStack_114 * fVar8;
      fStack_110 = fStack_110 * fVar8;
      fStack_10c = fStack_10c * fVar8;
      (**(code **)(*(longlong *)pRVar4 + 0x68))(pRVar4,&local_128,0);
      lVar3 = (**(code **)(*local_res20 + 0x50))(local_res20,0x68);
      if (lVar3 != 0) {
        pRVar5 = (RefCountNTSImpl *)
                 FUN_14331acc0(lVar3,pRVar4,&local_108,*(undefined4 *)(param_2 + 0x2c));
      }
      if (pRVar5 == (RefCountNTSImpl *)0x0) goto LAB_14331a3d4;
      FUN_1432de8f0(local_138,pRVar5);
    }
    param_3 = local_res18;
    if (pRVar4 != (RefCountNTSImpl *)0x0) {
      (**(code **)(*(longlong *)pRVar4 + 0x10))(pRVar4);
      param_3 = local_res18;
    }
LAB_14331a444:
    if (pRVar5 == (RefCountNTSImpl *)0x0) {
      FUN_143300d50(*(longlong *)(param_4 + 0x18) + 0x18,&DAT_145afa01c,
                    (local_res10 & 0xfffffffffffffffc) + 0xc);
      uVar6 = 0;
      goto LAB_14331a4e5;
    }
  }
  else {
    pRVar5 = (RefCountNTSImpl *)FUN_1432dea40(local_140);
    if (pRVar5 == (RefCountNTSImpl *)0x0) {
      if (local_140[0] < 2) {
        Scaleform::String::operator=(&local_res10,&DAT_145af3922);
      }
      else {
        uVar6 = Scaleform::GFx::ResourceLib::ResourceSlot::GetError(local_138);
        Scaleform::String::operator=(&local_res10,uVar6);
      }
      goto LAB_14331a444;
    }
  }
  Scaleform::GFx::Resource::AddRef(pRVar5);
  if (*param_3 != 0) {
    FUN_1432de450();
  }
  *param_3 = (longlong)pRVar5;
  uVar6 = 1;
  if (pRVar5 != (RefCountNTSImpl *)0x0) {
    FUN_1432de450(pRVar5);
  }
LAB_14331a4e5:
  if (local_140[0] == 1) {
    FUN_1432de450(local_138);
  }
  else if (1 < local_140[0]) {
    Scaleform::RefCountImpl::Release(local_138);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))(local_108,local_100);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_e8[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_e8[0] & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_f0 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_f0 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return uVar6;
}



// FUNCTION 14331a5e0 FUN_14331a5e0 body=153 status=ok
// SIG undefined FUN_14331a5e0(void)

undefined8 * FUN_14331a5e0(undefined8 *param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b642c8) {
    _Init_thread_header(&DAT_146b642c8);
    if (DAT_146b642c8 == -1) {
      atexit((_func_5014 *)&LAB_143ec4800);
      _Init_thread_footer(&DAT_146b642c8);
    }
  }
  (**(code **)(PTR_PTR_1467ce298 + 8))(&PTR_PTR_1467ce298,param_2);
  *param_1 = &PTR_PTR_1467ce298;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 14331a680 FUN_14331a680 body=297 status=ok
// SIG undefined FUN_14331a680(void)

ulonglong FUN_14331a680(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                       longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 local_58 [2];
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar3 = 0;
  uVar1 = *(undefined8 *)(param_4 + 0x38);
  local_50 = param_5;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_58[0] = 1;
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10);
  if ((*(longlong *)(param_4 + 0x18) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x20), lVar3 == 0)) {
    lVar3 = Scaleform::Log::GetGlobalLog();
  }
  local_50 = param_5;
  plVar5 = *(longlong **)(*(ulonglong *)(param_4 + 0x10) + 0x20);
  if (plVar5 == (longlong *)0x0) {
    uVar4 = *(ulonglong *)(param_4 + 0x10) & 0xffffffffffffff00;
  }
  else {
    local_40 = lVar3;
    uStack_38 = uVar2;
    local_30 = uVar1;
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_58,param_2);
    if (plVar5 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      lVar3 = (**(code **)(*param_5 + 0x50))(param_5,0x68);
      if ((lVar3 == 0) || (lVar3 = FUN_1432ef310(lVar3,plVar5,1), lVar3 == 0)) {
        uVar4 = 0;
      }
      else {
        Scaleform::GFx::Resource::AddRef(lVar3);
        if (*param_3 != 0) {
          FUN_1432de450();
        }
        *param_3 = lVar3;
        uVar4 = 1;
        FUN_1432de450(lVar3);
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return uVar4;
}



// FUNCTION 14331a7b0 FUN_14331a7b0 body=184 status=ok
// SIG undefined FUN_14331a7b0(void)

undefined8 * FUN_14331a7b0(undefined8 *param_1,longlong param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b642cc) {
    _Init_thread_header(&DAT_146b642cc);
    if (DAT_146b642cc == -1) {
      atexit((_func_5014 *)&LAB_143ec4810);
      _Init_thread_footer(&DAT_146b642cc);
    }
  }
  if (param_2 != 0) {
    (**(code **)(PTR_PTR_1467ce2a0 + 8))(&PTR_PTR_1467ce2a0,param_2);
    *param_1 = &PTR_PTR_1467ce2a0;
    param_1[1] = param_2;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14331a870 FUN_14331a870 body=260 status=ok
// SIG undefined FUN_14331a870(void)

undefined8
FUN_14331a870(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res10 [2];
  int local_28 [2];
  longlong local_20;
  
  plVar5 = *(longlong **)(param_2 + 0x18);
  lVar4 = 0;
  if (plVar5 == (longlong *)0x0) {
    local_res10[0] = *(undefined4 *)(param_2 + 0x10);
    local_28[0] = 0;
    local_20 = 0;
    FUN_14330e8c0(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_3[1] + 0x50) + 0x70) + 0x18) +
                   0x40),local_28,local_res10);
    plVar2 = (longlong *)FUN_143317160(local_28,param_3[1]);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((uVar1 & 0xff00) == 0x100) {
        plVar5 = plVar2;
      }
    }
    if ((local_28[0] == 0) && (local_20 != 0)) {
      FUN_1432de450();
    }
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
  }
  lVar3 = (**(code **)(*param_5 + 0x50))(param_5,0x80,0);
  if (lVar3 != 0) {
    local_res10[0] = 0;
    lVar4 = FUN_14331af20(lVar3,plVar5,local_res10,param_2 + 0x20,param_5);
  }
  if (*param_3 != 0) {
    FUN_1432de450();
  }
  *param_3 = lVar4;
  return 1;
}



// FUNCTION 14331a980 FUN_14331a980 body=153 status=ok
// SIG undefined FUN_14331a980(void)

undefined8 * FUN_14331a980(undefined8 *param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b642d0) {
    _Init_thread_header(&DAT_146b642d0);
    if (DAT_146b642d0 == -1) {
      atexit((_func_5014 *)&LAB_143ec4820);
      _Init_thread_footer(&DAT_146b642d0);
    }
  }
  (**(code **)(PTR_PTR_1467ce2a8 + 8))(&PTR_PTR_1467ce2a8,param_2);
  *param_1 = &PTR_PTR_1467ce2a8;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 14331aa20 FUN_14331aa20 body=481 status=ok
// SIG undefined FUN_14331aa20(void)

bool FUN_14331aa20(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *_Str2;
  char *_Str1;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  uVar7 = 0;
  if (*(longlong *)(param_4 + 0x88) != 0) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_4 + 0x80) + uVar7 * 8);
      for (lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x18) + 0x40) + 0x120
                    ); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        plVar8 = *(longlong **)(lVar4 + 8);
        iVar3 = (**(code **)(*plVar8 + 0x90))(plVar8);
        if (iVar3 != 0) {
          uVar1 = *(uint *)((longlong)plVar8 + 0x1c);
          _Str2 = (char *)(**(code **)(*plVar8 + 8))(plVar8);
          uVar6 = 3;
          if ((uVar1 & 0x300) != 0) {
            uVar6 = 0x303;
          }
          if ((uVar6 & *(uint *)((longlong)param_2 + 0x1c)) == (uVar1 & 0x303)) {
            _Str1 = (char *)(**(code **)(*param_2 + 8))(param_2);
            iVar3 = _stricmp(_Str1,_Str2);
            if (iVar3 == 0) {
              lVar5 = *(longlong *)(lVar5 + 0x70);
              if ((*(char *)(lVar5 + 0x78) != '\0') &&
                 (*(uint *)(lVar4 + 0x10) < *(uint *)(lVar5 + 0x38))) {
                plVar8 = (longlong *)
                         ((ulonglong)*(uint *)(lVar4 + 0x10) * 0x10 + *(longlong *)(lVar5 + 0x40));
                if (*plVar8 != 0) {
                  Scaleform::GFx::Resource::AddRef();
                }
                if (*param_3 != 0) {
                  FUN_1432de450();
                }
                *param_3 = *plVar8;
                param_3[1] = plVar8[1];
                return true;
              }
              FUN_14330cc40(lVar5 + 0x30,param_3);
              return true;
            }
          }
        }
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while (uVar7 < *(ulonglong *)(param_4 + 0x88));
  }
  lVar5 = 0;
  cVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((cVar2 == '\0') && (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 != 0)) {
    *(uint *)((longlong)param_2 + 0x1c) = *(uint *)((longlong)param_2 + 0x1c) | 0x40;
  }
  bVar9 = false;
  if (*param_3 == 0) {
    lVar4 = (**(code **)(*param_5 + 0x50))(param_5,0x40);
    if (lVar4 != 0) {
      lVar5 = FUN_14339b960(lVar4,param_2,param_3[1]);
    }
    if (*param_3 != 0) {
      FUN_1432de450();
    }
    *param_3 = lVar5;
    bVar9 = lVar5 == 0;
  }
  return !bVar9;
}



// FUNCTION 14331ac10 FUN_14331ac10 body=43 status=ok
// SIG undefined FUN_14331ac10(void)

undefined8 * FUN_14331ac10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145afb918;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14331ac40 FUN_14331ac40 body=124 status=ok
// SIG undefined FUN_14331ac40(void)

undefined8 * FUN_14331ac40(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR__vector_deleting_destructor__145af7a80;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = &PTR_FUN_145af8c80;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  FUN_1432c31e0(param_1 + 4,param_2 + 0x20);
  *param_1 = &PTR_FUN_145afa330;
  FUN_1432c2f70(param_1 + 6);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)((longlong)param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return param_1;
}



// FUNCTION 14331acc0 FUN_14331acc0 body=246 status=ok
// SIG undefined FUN_14331acc0(void)

undefined8 *
FUN_14331acc0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_144f8bf30;
  plVar1 = param_1 + 4;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f8c5e0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f70a50;
  *plVar1 = (longlong)&PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f8c510;
  FUN_1432de310(param_1 + 10);
  plVar2 = (longlong *)param_1[3];
  if ((plVar2 != (longlong *)0x0) && (plVar2 != plVar1)) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[9] = param_2;
  param_1[3] = plVar1;
  FUN_1432de3d0(param_1 + 10,param_3);
  *(undefined4 *)(param_1 + 0xc) = param_4;
  return param_1;
}



// FUNCTION 14331adc0 FUN_14331adc0 body=349 status=ok
// SIG undefined FUN_14331adc0(void)

undefined8 * FUN_14331adc0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af7a10;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(RefCountImpl **)(param_2 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x10));
  }
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  if (*(RefCountImpl **)(param_2 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x18));
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  if (*(RefCountImpl **)(param_2 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x20));
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  if (*(RefCountImpl **)(param_2 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x30));
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  if (*(RefCountImpl **)(param_2 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x38));
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  if (*(RefCountImpl **)(param_2 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x40));
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  if (*(RefCountImpl **)(param_2 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x48));
  }
  if ((RefCountImpl *)param_1[9] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[9]);
  }
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 14331af20 FUN_14331af20 body=193 status=ok
// SIG undefined FUN_14331af20(void)

undefined8 *
FUN_14331af20(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 3;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x70))
                    (DAT_146b62f28,*(undefined8 *)(param_2 + 0x18),0x40,local_res8);
  if (lVar4 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)FUN_1432cc1a0(lVar4,*(undefined8 *)(param_2 + 0x18),param_4);
  }
  FUN_1432ef310(param_1,plVar5,1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  *param_1 = &PTR_FUN_145afb938;
  uVar1 = param_4[3];
  uVar2 = param_4[2];
  uVar3 = param_4[1];
  *(undefined4 *)(param_1 + 0xd) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = *param_3;
  return param_1;
}



// FUNCTION 14331aff0 FUN_14331aff0 body=99 status=ok
// SIG undefined FUN_14331aff0(void)

undefined8 * FUN_14331aff0(undefined8 *param_1,longlong *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afb8b0;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_1[2] = param_2;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 14331b060 FUN_14331b060 body=89 status=ok
// SIG undefined FUN_14331b060(void)

undefined8 FUN_14331b060(undefined8 param_1,ulonglong param_2)

{
  FUN_1433193e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x420);
  }
  return param_1;
}



// FUNCTION 14331b0c0 FUN_14331b0c0 body=89 status=ok
// SIG undefined FUN_14331b0c0(void)

undefined8 FUN_14331b0c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433189c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14331b120 FUN_14331b120 body=89 status=ok
// SIG undefined FUN_14331b120(void)

undefined8 FUN_14331b120(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::ImageResource::~ImageResource();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14331b180 CreateCompatibleImage body=72 status=ok
// SIG undefined CreateCompatibleImage(void)

longlong Scaleform::Render::WrapperImageSource::CreateCompatibleImage
                   (longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x58))();
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[2] + 8))();
    return param_1[2];
  }
  lVar2 = FUN_1432cb240(param_1,param_2);
  return lVar2;
}



// FUNCTION 14331b1f0 GetSize body=28 status=ok
// SIG undefined GetSize(void)

undefined8 Scaleform::Render::WrapperImageSource::GetSize(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  return param_2;
}



// FUNCTION 14331b210 OnAbandon body=73 status=ok
// SIG undefined OnAbandon(void)

void Scaleform::GFx::LoadProcess::OnAbandon(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 != '\0') {
    MovieDataDef::LoadTaskData::OnMovieDataDefRelease(*(undefined8 *)(param_1 + 0x38));
  }
  if (((*(longlong *)(param_1 + 0x30) != 0) && (param_2 == '\0')) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38), lVar1 != 0)) {
    FUN_14330fc80(lVar1,3);
  }
  return;
}



// FUNCTION 14331b260 FUN_14331b260 body=143 status=ok
// SIG undefined FUN_14331b260(void)

void FUN_14331b260(char *param_1,char **param_2)

{
  char cVar1;
  lconv *plVar2;
  char *pcVar3;
  char local_168 [352];
  
  plVar2 = localeconv();
  cVar1 = *plVar2->decimal_point;
  if (cVar1 != '.') {
    strcpy_s(local_168,0x15c,param_1);
    pcVar3 = local_168;
    if (local_168[0] == '\0') {
LAB_14331b2c7:
      param_1 = local_168;
    }
    else {
      do {
        if (*pcVar3 == '.') {
          *pcVar3 = cVar1;
          goto LAB_14331b2c7;
        }
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      param_1 = local_168;
    }
  }
  strtod(param_1,param_2);
  return;
}



// FUNCTION 14331b300 _stricmp body=7 status=ok
// SIG int _stricmp(char * _Str1, char * _Str2)

int __cdecl _stricmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014331b300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _stricmp(_Str1,_Str2);
  return iVar1;
}



// FUNCTION 14331b320 FUN_14331b320 body=24 status=ok
// SIG undefined FUN_14331b320(void)

wchar_t * FUN_14331b320(wchar_t *param_1,rsize_t param_2,wchar_t *param_3)

{
  wcscpy_s(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 14331b340 FUN_14331b340 body=24 status=ok
// SIG undefined FUN_14331b340(void)

wchar_t * FUN_14331b340(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,rsize_t param_4)

{
  wcsncpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 14331b360 FUN_14331b360 body=24 status=ok
// SIG undefined FUN_14331b360(void)

wchar_t * FUN_14331b360(wchar_t *param_1,rsize_t param_2,wchar_t *param_3)

{
  wcscat_s(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 14331b380 SFwcslen body=15 status=ok
// SIG undefined SFwcslen(void)

void Scaleform::SFwcslen(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + lVar1 * 2) != 0);
  return;
}



// FUNCTION 14331b3e0 FUN_14331b3e0 body=146 status=ok
// SIG undefined FUN_14331b3e0(void)

ushort FUN_14331b3e0(ushort param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(ushort *)(&DAT_145afba50 + (ulonglong)(param_1 >> 8) * 2);
  if (uVar1 != 0) {
    lVar4 = 0;
    if ((uVar1 == 1) ||
       ((*(ushort *)(&DAT_145afba50 + (ulonglong)((param_1 >> 4 & 0xf) + (uint)uVar1) * 2) >>
         (param_1 & 0xf) & 1) != 0)) {
      lVar2 = 0x280;
      do {
        lVar3 = lVar2 >> 1;
        if (*(ushort *)(&UNK_145afc130 + (lVar3 + lVar4) * 4) < param_1) {
          lVar4 = lVar3 + lVar4 + 1;
          lVar3 = lVar2 + (-1 - lVar3);
        }
        lVar2 = lVar3;
      } while (0 < lVar3);
      return *(ushort *)(&UNK_145afc132 + lVar4 * 4);
    }
  }
  return param_1;
}



// FUNCTION 14331b480 FUN_14331b480 body=146 status=ok
// SIG undefined FUN_14331b480(void)

ushort FUN_14331b480(ushort param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(ushort *)(&DAT_145afbdb0 + (ulonglong)(param_1 >> 8) * 2);
  if (uVar1 != 0) {
    lVar4 = 0;
    if ((uVar1 == 1) ||
       ((*(ushort *)(&DAT_145afbdb0 + (ulonglong)((param_1 >> 4 & 0xf) + (uint)uVar1) * 2) >>
         (param_1 & 0xf) & 1) != 0)) {
      lVar2 = 0x2a4;
      do {
        lVar3 = lVar2 >> 1;
        if (*(ushort *)(&UNK_145afcb40 + (lVar3 + lVar4) * 4) < param_1) {
          lVar4 = lVar3 + lVar4 + 1;
          lVar3 = lVar2 + (-1 - lVar3);
        }
        lVar2 = lVar3;
      } while (0 < lVar3);
      return *(ushort *)(&UNK_145afcb42 + lVar4 * 4);
    }
  }
  return param_1;
}



// FUNCTION 14331b530 FUN_14331b530 body=324 status=ok
// SIG undefined FUN_14331b530(void)

undefined8 *
FUN_14331b530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  
  param_1[1] = 0;
  uVar6 = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[0x28] = param_2;
  *param_1 = &PTR_FUN_145affbc8;
  param_1[4] = 0;
  param_1[0x29] = param_3;
  FUN_1432bdc50(param_1 + 0x2a,0);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x35) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar1;
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar3;
  param_1[0x37] = *(undefined8 *)(param_4 + 4);
  uVar4 = uVar6;
  if (param_1 + 5 != (undefined8 *)0x0) {
    uVar4 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    uVar4 = FUN_1432cdbc0(param_1 + 5,uVar4);
  }
  param_1[4] = uVar4;
  local_res8[0] = 2;
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xf8,local_res8);
  if (lVar5 != 0) {
    uVar6 = FUN_1433b6870(lVar5,param_1);
  }
  if ((RefCountImpl *)param_1[0x33] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x33]);
  }
  param_1[0x33] = uVar6;
  if (param_1[0x28] != 0) {
    FUN_1432ce970(param_1[0x28],param_1);
  }
  return param_1;
}



// FUNCTION 14331b680 FUN_14331b680 body=110 status=ok
// SIG undefined FUN_14331b680(void)

void FUN_14331b680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145affbc8;
  if (param_1[4] != 0) {
    FUN_14331b970();
    FUN_1432cde30(param_1[4]);
    param_1[4] = 0;
  }
  if ((RefCountImpl *)param_1[0x33] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x33]);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x30]);
  Scaleform::Lock::~Lock(param_1 + 0x2a);
  FUN_1432cd480(param_1);
  return;
}



// FUNCTION 14331b700 FUN_14331b700 body=84 status=ok
// SIG undefined FUN_14331b700(void)

void FUN_14331b700(longlong param_1,longlong *param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0x10))();
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x1a8);
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    param_2[1] = *(longlong *)(param_1 + 0x1b0);
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    *(int *)(param_2 + 2) = *(int *)(param_1 + 0x1b8);
  }
  return;
}



// FUNCTION 14331b760 OnCapture body=53 status=ok
// SIG undefined OnCapture(void)

void Scaleform::Render::DrawableImageContext::OnCapture(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1432cdfe0();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1433b6a80();
  }
  FUN_14331b970(param_1);
  return;
}



// FUNCTION 14331b7a0 FUN_14331b7a0 body=64 status=ok
// SIG undefined FUN_14331b7a0(void)

void FUN_14331b7a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1432ceac0(*(longlong *)(param_1 + 0x20),param_2,0);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    Scaleform::Render::DICommandQueue::OnNextCapture(*(longlong *)(param_1 + 0x198),param_2);
  }
  return;
}



// FUNCTION 14331b7f0 FUN_14331b7f0 body=138 status=ok
// SIG undefined FUN_14331b7f0(void)

void FUN_14331b7f0(longlong param_1,char param_2)

{
  if (*(longlong *)(param_1 + 0x198) != 0) {
    if (param_2 == '\0') {
      FUN_1433b6d50();
    }
    else {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait();
    }
    if (*(RefCountImpl **)(param_1 + 0x198) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x198));
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14331b970(param_1);
    if (param_2 != '\0') {
      FUN_1432cde30();
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    FUN_1432ce2c0(*(undefined8 *)(param_1 + 0x20),0);
  }
  return;
}



// FUNCTION 14331b8c0 FUN_14331b8c0 body=156 status=ok
// SIG undefined FUN_14331b8c0(void)

void FUN_14331b8c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  Scaleform::Lock::DoLock(param_1 + 0x150);
  plVar3 = (longlong *)(param_1 + 0x180);
  uVar2 = *(longlong *)(param_1 + 0x188) + 1;
  if (uVar2 < *(ulonglong *)(param_1 + 0x188)) {
    uVar4 = uVar2;
    if (*(ulonglong *)(param_1 + 400) >> 1 <= uVar2) goto LAB_14331b929;
  }
  else {
    if (uVar2 <= *(ulonglong *)(param_1 + 400)) goto LAB_14331b929;
    uVar4 = (uVar2 >> 2) + uVar2;
  }
  FUN_1432cfd30(plVar3,plVar3,uVar4);
LAB_14331b929:
  *(ulonglong *)(param_1 + 0x188) = uVar2;
  puVar1 = (undefined8 *)(*plVar3 + -8 + uVar2 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  Scaleform::Lock::DoLock(param_1 + 0x150);
  return;
}



// FUNCTION 14331b970 FUN_14331b970 body=215 status=ok
// SIG undefined FUN_14331b970(void)

void FUN_14331b970(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    Scaleform::Lock::DoLock(param_1 + 0x150);
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      do {
        plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + uVar2 * 8) + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ulonglong *)(param_1 + 0x188));
    }
    if (((*(longlong *)(param_1 + 0x188) != 0) &&
        ((*(ulonglong *)(param_1 + 400) & 0xfffffffffffffffe) != 0)) &&
       (*(ulonglong *)(param_1 + 400) != 0)) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *(undefined8 *)(param_1 + 0x180) = 0;
      }
      *(undefined8 *)(param_1 + 400) = 0;
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    Scaleform::Lock::DoLock(param_1 + 0x150);
  }
  return;
}



// FUNCTION 14331ba50 FUN_14331ba50 body=286 status=ok
// SIG undefined FUN_14331ba50(void)

undefined8 *
FUN_14331ba50(undefined8 *param_1,undefined1 param_2,longlong *param_3,RefCountImpl *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_145affbf8;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10000;
  param_1[0xe] = param_1 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  param_1[0x16] = param_3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[0x17] = param_4;
  param_1[0x18] = 0;
  uVar2 = (**(code **)(*param_3 + 0x28))(param_3,local_res8);
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  FUN_14331f770(param_1,uVar1,uVar2,param_4);
  return param_1;
}



// FUNCTION 14331bb80 FUN_14331bb80 body=449 status=ok
// SIG undefined FUN_14331bb80(void)

longlong *
FUN_14331bb80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_28;
  longlong *local_20;
  undefined4 local_18;
  
  param_1[1] = 0;
  *param_1 = (longlong)&PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = (longlong)&PTR_FUN_144f70a80;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = 0;
  *param_1 = (longlong)&PTR_FUN_145affbf8;
  *(undefined1 *)(param_1 + 10) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10000;
  param_1[0xe] = (longlong)(param_1 + 0x10);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_14331f770(param_1,param_2,param_3,param_6);
  if ((char)param_1[10] == '\0') {
    *(undefined1 *)((longlong)param_5 + 3) = 0xff;
  }
  uVar1 = *param_5;
  local_28 = &PTR__scalar_deleting_destructor__145affcd0;
  (**(code **)(*param_1 + 8))(param_1);
  local_28 = &PTR_FUN_145affd60;
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  local_20 = param_1;
  local_18 = uVar1;
  cVar3 = FUN_1433b5c10(&local_28,param_1);
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x18,param_1[0xb] + 0x70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 8))(local_20);
      }
      puVar4[1] = local_20;
      *puVar4 = &PTR_FUN_145affd60;
      *(undefined4 *)(puVar4 + 2) = local_18;
    }
    uVar5 = (*(code *)local_28[3])(&local_28);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_28 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
  return param_1;
}



// FUNCTION 14331bd50 FUN_14331bd50 body=330 status=ok
// SIG undefined FUN_14331bd50(void)

void FUN_14331bd50(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  RefCountImpl *this;
  longlong local_28;
  longlong lStack_20;
  DWORD local_18;
  
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if (iVar2 == 1) {
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
    }
    param_1[0x16] = 0;
    lVar1 = param_1[0x17];
    local_28 = 0;
    lStack_20 = 0;
    local_18 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x10))(*(longlong **)(lVar1 + 0x148),&local_28);
    if (*(longlong *)(lVar1 + 0x1a8) != 0) {
      local_28 = *(longlong *)(lVar1 + 0x1a8);
    }
    if (*(longlong *)(lVar1 + 0x1b0) != 0) {
      lStack_20 = *(longlong *)(lVar1 + 0x1b0);
    }
    if (*(DWORD *)(lVar1 + 0x1b8) != 0) {
      local_18 = *(DWORD *)(lVar1 + 0x1b8);
    }
    DVar3 = GetCurrentThreadId();
    if ((local_18 == DVar3) || (local_18 == 0)) {
      (**(code **)*param_1)(param_1,1);
    }
    else {
      this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
      if (this == (RefCountImpl *)0x0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        *(undefined ***)this = &PTR_FUN_144f70a50;
        *(undefined ***)this = &PTR_FUN_145b00598;
        *(undefined4 *)(this + 8) = 1;
        *(undefined8 **)(this + 0x10) = param_1;
      }
      (**(code **)(**(longlong **)(param_1[0x17] + 0x148) + 8))
                (*(longlong **)(param_1[0x17] + 0x148),this);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14331bea0 FUN_14331bea0 body=377 status=ok
// SIG undefined FUN_14331bea0(void)

void FUN_14331bea0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong local_28;
  longlong lStack_20;
  int local_18;
  
  lVar1 = param_1[0x17];
  *param_1 = &PTR_FUN_145affbf8;
  local_18 = 0;
  local_28 = 0;
  lStack_20 = 0;
  (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x10))(*(longlong **)(lVar1 + 0x148),&local_28);
  if (*(longlong *)(lVar1 + 0x1a8) != 0) {
    local_28 = *(longlong *)(lVar1 + 0x1a8);
  }
  if (*(longlong *)(lVar1 + 0x1b0) != 0) {
    lStack_20 = *(longlong *)(lVar1 + 0x1b0);
  }
  if (*(int *)(lVar1 + 0x1b8) != 0) {
    local_18 = *(int *)(lVar1 + 0x1b8);
  }
  if ((*(uint *)((longlong)param_1 + 0x4c) & 3) != 0) {
    lVar1 = param_1[0xb];
    Scaleform::Lock::DoLock(lVar1 + 0x70);
    if (((*(uint *)((longlong)param_1 + 0x4c) & 3) != 0) && (param_1[2] != 0)) {
      (**(code **)(*(longlong *)param_1[2] + 0x78))();
      *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffc;
    }
    Scaleform::Lock::DoLock(lVar1 + 0x70);
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  if ((RefCountImpl *)param_1[0x17] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x17]);
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  Scaleform::Render::ImageData::freePlanes(param_1 + 0xc);
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  if ((RefCountImpl *)param_1[0xb] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xb]);
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_1432caa70(param_1);
  return;
}



// FUNCTION 14331c020 FUN_14331c020 body=192 status=ok
// SIG undefined FUN_14331c020(void)

undefined8 FUN_14331c020(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (iVar2 == 6) {
      if (((*(uint *)((longlong)param_2 + 0x4c) & 3) == 0) &&
         (cVar1 = FUN_14331ed70(param_2,1), cVar1 == '\0')) {
        return 0;
      }
      uVar3 = FUN_14331f100(param_2);
      FUN_1432c7760(param_1,uVar3);
      return 1;
    }
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (iVar2 == 2) {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x48))(param_2);
      iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if ((iVar2 != 2) && (iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4), iVar2 != 1)) {
        return 0;
      }
      Scaleform::Render::RawImage::GetImageData(plVar4,param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14331c0f0 FUN_14331c0f0 body=464 status=ok
// SIG undefined FUN_14331c0f0(void)

void FUN_14331c0f0(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  RefCountImpl *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  RefCountImpl *local_28;
  
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_58 = &PTR_FUN_145affda8;
  local_50 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  local_30 = *param_4;
  local_2c = param_4[1];
  local_58 = &PTR_FUN_145affdf8;
  local_48 = param_2;
  if (param_5 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_5);
  }
  local_28 = param_5;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  cVar2 = FUN_1433b5c10(&local_58,param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x38,param_1[0xb] + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))(local_50);
      }
      puVar3[1] = local_50;
      *puVar3 = &PTR_FUN_145affda8;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      puVar3[2] = local_48;
      *(undefined4 *)(puVar3 + 3) = local_40;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = local_3c;
      *(undefined4 *)(puVar3 + 4) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x24) = local_34;
      *(undefined4 *)(puVar3 + 5) = local_30;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = local_2c;
      *puVar3 = &PTR_FUN_145affdf8;
      if (local_28 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(local_28);
      }
      puVar3[6] = local_28;
    }
    uVar4 = (*(code *)local_58[3])(&local_58);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  if (local_28 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_28);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return;
}



// FUNCTION 14331c2d0 FUN_14331c2d0 body=96 status=ok
// SIG undefined FUN_14331c2d0(void)

void FUN_14331c2d0(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)*param_2;
  fStack_14 = (float)param_2[1];
  fStack_c = (float)param_2[3];
  fStack_10 = (float)param_2[2];
  FUN_143361c90(param_3,&local_18);
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = CONCAT44(fStack_14,local_18);
    param_1[1] = CONCAT44(fStack_c,fStack_10);
  }
  return;
}



// FUNCTION 14331c340 FUN_14331c340 body=89 status=ok
// SIG undefined FUN_14331c340(void)

void FUN_14331c340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  
  uVar1 = FUN_14331fda0(&local_58,param_1,param_2,param_3);
  FUN_14331fb70(param_1,uVar1);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return;
}



// FUNCTION 14331c3a0 FUN_14331c3a0 body=453 status=ok
// SIG undefined FUN_14331c3a0(void)

void FUN_14331c3a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_res8);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  (**(code **)(*param_1 + 8))(param_1);
  local_68 = &PTR_FUN_145affda8;
  local_60 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_50 = 0;
  local_68 = &PTR_FUN_145b00030;
  local_40 = 0;
  local_58 = param_2;
  local_48 = uVar1;
  local_44 = uVar2;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  if ((param_1[0x17] != 0) && (lVar3 = *(longlong *)(param_1[0x17] + 0x140), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x71) = 1;
  }
  local_38 = param_3;
  cVar4 = FUN_1433b5c10(&local_68,param_1);
  if (cVar4 == '\0') {
    puVar6 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x38,param_1[0xb] + 0x70);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 8))(local_60);
      }
      puVar6[1] = local_60;
      *puVar6 = &PTR_FUN_145affda8;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      puVar6[2] = local_58;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_50._4_4_;
      *(undefined4 *)(puVar6 + 4) = local_48;
      *(undefined4 *)((longlong)puVar6 + 0x24) = local_44;
      *(undefined4 *)(puVar6 + 5) = (undefined4)local_40;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = local_40._4_4_;
      *puVar6 = &PTR_FUN_145b00030;
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      puVar6[6] = local_38;
    }
    uVar7 = (*(code *)local_68[3])(&local_68);
    if ((uVar7 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  return;
}



// FUNCTION 14331c570 FUN_14331c570 body=428 status=ok
// SIG undefined FUN_14331c570(void)

void FUN_14331c570(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_58 = &PTR_FUN_145affda8;
  local_50 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  local_30 = *param_4;
  local_2c = param_4[1];
  local_28 = param_5;
  local_24 = param_6;
  local_58 = &PTR_FUN_145affef0;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_48 = param_2;
  cVar2 = FUN_1433b5c10(&local_58,param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x38,param_1[0xb] + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))(local_50);
      }
      puVar3[1] = local_50;
      *puVar3 = &PTR_FUN_145affda8;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      puVar3[2] = local_48;
      *(undefined4 *)(puVar3 + 3) = local_40;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = local_3c;
      *(undefined4 *)(puVar3 + 4) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x24) = local_34;
      *(undefined4 *)(puVar3 + 5) = local_30;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = local_2c;
      *puVar3 = &PTR_FUN_145affef0;
      *(undefined4 *)(puVar3 + 6) = local_28;
      *(undefined4 *)((longlong)puVar3 + 0x34) = local_24;
    }
    uVar4 = (*(code *)local_58[3])(&local_58);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return;
}



// FUNCTION 14331c730 FUN_14331c730 body=541 status=ok
// SIG undefined FUN_14331c730(void)

void FUN_14331c730(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5,undefined4 *param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_68 = &PTR_FUN_145affda8;
  local_60 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_50 = *param_3;
  local_4c = param_3[1];
  local_48 = param_3[2];
  local_44 = param_3[3];
  local_40 = *param_4;
  plVar2 = (longlong *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  local_3c = param_4[1];
  local_68 = &PTR_FUN_145afff58;
  local_58 = param_2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (param_6 == (undefined4 *)0x0) {
    puVar4 = &param_6;
    param_6 = (undefined4 *)0x0;
  }
  else {
    param_5._0_4_ = *param_6;
    puVar4 = &param_5;
    param_5._4_4_ = param_6[1];
  }
  local_30 = *(undefined4 *)puVar4;
  local_2c = *(undefined4 *)((longlong)puVar4 + 4);
  local_28 = param_7;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_38 = plVar2;
  cVar3 = FUN_1433b5c10(&local_68,param_1);
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x48,param_1[0xb] + 0x70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 8))(local_60);
      }
      puVar4[1] = local_60;
      *puVar4 = &PTR_FUN_145affda8;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      puVar4[2] = local_58;
      *(undefined4 *)(puVar4 + 3) = local_50;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = local_4c;
      *(undefined4 *)(puVar4 + 4) = local_48;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_44;
      *(undefined4 *)(puVar4 + 5) = local_40;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = local_3c;
      *puVar4 = &PTR_FUN_145afff58;
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      puVar4[6] = local_38;
      *(undefined4 *)(puVar4 + 7) = local_30;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = local_2c;
      *(undefined1 *)(puVar4 + 8) = local_28;
    }
    uVar5 = (*(code *)local_68[3])(&local_68);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  return;
}



// FUNCTION 14331c960 FUN_14331c960 body=650 status=ok
// SIG undefined FUN_14331c960(void)

void FUN_14331c960(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,int *param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 *local_res20;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_80 [8];
  undefined **local_78;
  longlong *local_70;
  
  if ((param_1[0x17] != 0) &&
     (puVar6 = *(undefined8 **)(param_1[0x17] + 0x20), puVar6 != (undefined8 *)0x0)) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    lVar10 = (**(code **)(*(longlong *)*puVar6 + 0x50))((longlong *)*puVar6,0xd0,0);
    if (lVar10 != 0) {
      FUN_1432ef640(lVar10);
    }
    lVar10 = FUN_1432ceba0(puVar6,lVar10);
    if (lVar10 != 0) {
      lVar11 = FUN_143362550(param_2,*(undefined8 *)(param_1[0x17] + 0x20));
      FUN_1432f03c0(lVar10,lVar11);
      if (param_6 == (int *)0x0) {
        puVar13 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_res8);
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_dc = puVar13[1];
        piVar12 = local_e8;
        local_e8[2] = *puVar13;
      }
      else {
        local_f8 = *param_6;
        local_f4 = param_6[1];
        local_f0 = param_6[2];
        local_ec = param_6[3];
        piVar12 = &local_f8;
      }
      iVar2 = *piVar12;
      iVar3 = piVar12[1];
      iVar4 = piVar12[2];
      iVar5 = piVar12[3];
      local_a8 = iVar2;
      local_a4 = iVar3;
      local_a0 = iVar4;
      local_9c = iVar5;
      puVar13 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_80);
      local_c8 = iVar4 - iVar2;
      local_c4 = iVar5 - iVar3;
      local_d8 = *puVar13;
      local_d4 = puVar13[1];
      local_b8 = 0;
      local_c0 = 0;
      local_b0 = 1;
      local_d0 = iVar2;
      local_cc = iVar3;
      local_90 = local_d8;
      local_8c = local_d4;
      FUN_143364250(lVar10,&local_d8);
      FUN_1433625b0(lVar10,local_res18);
      FUN_14331f9c0(param_1,local_res10,lVar10);
      FUN_1433625b0(lVar11,&DAT_14621c810);
      FUN_143362a30(lVar11,1);
      lVar14 = FUN_1432cd080(lVar11,2);
      uVar7 = local_res20[1];
      uVar8 = local_res20[2];
      uVar9 = local_res20[3];
      *(undefined4 *)(lVar14 + 0x50) = *local_res20;
      *(undefined4 *)(lVar14 + 0x54) = uVar7;
      *(undefined4 *)(lVar14 + 0x58) = uVar8;
      *(undefined4 *)(lVar14 + 0x5c) = uVar9;
      uVar7 = local_res20[5];
      uVar8 = local_res20[6];
      uVar9 = local_res20[7];
      *(undefined4 *)(lVar14 + 0x60) = local_res20[4];
      *(undefined4 *)(lVar14 + 100) = uVar7;
      *(undefined4 *)(lVar14 + 0x68) = uVar8;
      *(undefined4 *)(lVar14 + 0x6c) = uVar9;
      FUN_143362c30(lVar11,param_5);
      *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + 1;
      if (*(longlong *)(param_1[0x17] + 0x140) != 0) {
        *(undefined1 *)(*(longlong *)(param_1[0x17] + 0x140) + 0x71) = 1;
      }
      (**(code **)(*(longlong *)param_1[0x17] + 8))();
      uVar15 = FUN_14331fee0(&local_78,param_1,lVar10,param_6);
      FUN_14331fc20(param_1,uVar15);
      local_78 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
      }
      if (lVar11 != 0) {
        plVar1 = (longlong *)(lVar11 + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00(lVar11);
        }
      }
      plVar1 = (longlong *)(lVar10 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00(lVar10);
      }
    }
  }
  return;
}



// FUNCTION 14331cbf0 FUN_14331cbf0 body=1063 status=ok
// SIG undefined FUN_14331cbf0(void)

void FUN_14331cbf0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,int *param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  RefCountImpl *pRVar12;
  longlong lVar13;
  RefCountImpl *this;
  uint *puVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  RefCountImpl *this_00;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100 [3];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_a8;
  RefCountImpl *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined **local_68;
  longlong *local_60;
  
  if ((param_1[0x17] != 0) &&
     (puVar6 = *(undefined8 **)(param_1[0x17] + 0x20), puVar6 != (undefined8 *)0x0)) {
    lVar10 = (**(code **)(*(longlong *)*puVar6 + 0x50))((longlong *)*puVar6,0xd0,0);
    if (lVar10 != 0) {
      FUN_1432ef640(lVar10);
    }
    lVar10 = FUN_1432ceba0(puVar6,lVar10);
    if (lVar10 != 0) {
      lVar11 = FUN_1432edf60(*(undefined8 *)(param_1[0x17] + 0x20));
      FUN_1432f03c0(lVar10,lVar11);
      this = (RefCountImpl *)0x0;
      local_a0 = (RefCountImpl *)0x0;
      local_a8 = 0;
      pRVar12 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
      this_00 = this;
      if (pRVar12 != (RefCountImpl *)0x0) {
        *(undefined8 *)(pRVar12 + 8) = 0;
        *(undefined ***)pRVar12 = &PTR_FUN_144f70a50;
        *(undefined ***)pRVar12 = &PTR_FUN_145affbc0;
        *(undefined4 *)(pRVar12 + 8) = 1;
        *(undefined8 *)(pRVar12 + 0x10) = 0;
        *(undefined8 *)(pRVar12 + 0x18) = 0;
        *(undefined8 *)(pRVar12 + 0x20) = 0x3f800000;
        *(undefined8 *)(pRVar12 + 0x28) = 0;
        *(undefined4 *)(pRVar12 + 0x30) = 0;
        *(undefined8 *)(pRVar12 + 0x34) = 0x3f800000;
        *(undefined4 *)(pRVar12 + 0x3c) = 0;
        *(undefined2 *)(pRVar12 + 0x40) = 0;
        *(undefined4 *)(pRVar12 + 0x44) = 0xffffffff;
        this_00 = pRVar12;
      }
      local_a0 = this_00;
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
      if (*(longlong **)(this_00 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(this_00 + 0x10) + 0x10))();
      }
      *(longlong **)(this_00 + 0x10) = param_2;
      lVar13 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0xa0,0);
      if (lVar13 != 0) {
        this = (RefCountImpl *)FUN_1433bca40(lVar13);
      }
      lVar13 = *(longlong *)(this + 0x90);
      FUN_1432f2630(lVar13 + 0x18,lVar13 + 0x18,*(longlong *)(lVar13 + 0x20) + 1);
      puVar17 = (undefined4 *)
                (*(longlong *)(lVar13 + 0x18) + -0x10 + *(longlong *)(lVar13 + 0x20) * 0x10);
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = 0;
        if (this_00 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this_00);
        }
        *(RefCountImpl **)(puVar17 + 2) = this_00;
      }
      FUN_1432f30b0(*(undefined8 *)(this + 0x90));
      FUN_1432f3130(*(undefined8 *)(this + 0x90),1,0);
      puVar14 = (uint *)(**(code **)(*param_2 + 0x28))(param_2,local_88);
      lVar13 = (**(code **)(*param_2 + 0x28))(param_2,local_80);
      FUN_143320e70(this,0,0,(float)*puVar14,(float)*(uint *)(lVar13 + 4));
      FUN_1433bcba0(this);
      FUN_1432f2e20(lVar11,this);
      if (param_6 == (int *)0x0) {
        puVar17 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_78);
        local_100[0] = 0;
        local_100[1] = 0;
        local_f4 = puVar17[1];
        piVar15 = local_100;
        local_100[2] = *puVar17;
      }
      else {
        local_110 = *param_6;
        local_10c = param_6[1];
        local_108 = param_6[2];
        local_104 = param_6[3];
        piVar15 = &local_110;
      }
      iVar2 = *piVar15;
      iVar3 = piVar15[1];
      iVar4 = piVar15[2];
      iVar5 = piVar15[3];
      local_c0 = iVar2;
      local_bc = iVar3;
      local_b8 = iVar4;
      local_b4 = iVar5;
      puVar17 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_70);
      local_e0 = iVar4 - iVar2;
      local_dc = iVar5 - iVar3;
      local_f0 = *puVar17;
      local_ec = puVar17[1];
      local_d0 = 0;
      local_d8 = 0;
      local_c8 = 1;
      local_e8 = iVar2;
      local_e4 = iVar3;
      local_98 = local_f0;
      local_94 = local_ec;
      FUN_143364250(lVar10,&local_f0);
      FUN_1433625b0(lVar10,param_3);
      FUN_1433625b0(lVar11,&DAT_14621c810);
      lVar13 = FUN_1432cd080(lVar11,2);
      uVar7 = param_4[1];
      uVar8 = param_4[2];
      uVar9 = param_4[3];
      *(undefined4 *)(lVar13 + 0x50) = *param_4;
      *(undefined4 *)(lVar13 + 0x54) = uVar7;
      *(undefined4 *)(lVar13 + 0x58) = uVar8;
      *(undefined4 *)(lVar13 + 0x5c) = uVar9;
      uVar7 = param_4[5];
      uVar8 = param_4[6];
      uVar9 = param_4[7];
      *(undefined4 *)(lVar13 + 0x60) = param_4[4];
      *(undefined4 *)(lVar13 + 100) = uVar7;
      *(undefined4 *)(lVar13 + 0x68) = uVar8;
      *(undefined4 *)(lVar13 + 0x6c) = uVar9;
      FUN_143362c30(lVar11,param_5);
      *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + 1;
      if (*(longlong *)(param_1[0x17] + 0x140) != 0) {
        *(undefined1 *)(*(longlong *)(param_1[0x17] + 0x140) + 0x71) = 1;
      }
      (**(code **)(*(longlong *)param_1[0x17] + 8))();
      uVar16 = FUN_14331fee0(&local_68,param_1,lVar10,param_6);
      FUN_14331fc20(param_1,uVar16);
      local_68 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 0x10))();
      }
      Scaleform::RefCountImpl::Release(this);
      if (this_00 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this_00);
      }
      if (lVar11 != 0) {
        plVar1 = (longlong *)(lVar11 + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00(lVar11);
        }
      }
      plVar1 = (longlong *)(lVar10 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00(lVar10);
      }
    }
  }
  return;
}



// FUNCTION 14331d020 FUN_14331d020 body=241 status=ok
// SIG undefined FUN_14331d020(void)

void FUN_14331d020(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **local_18;
  longlong *local_10;
  
  local_18 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_18 = &PTR__scalar_deleting_destructor__145affea8;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_10 = param_1;
  cVar2 = FUN_1433b5c10(&local_18,param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x10,param_1[0xb] + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_10 != (longlong *)0x0) {
        (**(code **)(*local_10 + 8))();
      }
      puVar3[1] = local_10;
      *puVar3 = &PTR__scalar_deleting_destructor__145affea8;
    }
    uVar4 = (*(code *)local_18[3])(&local_18);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_18 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x10))();
  }
  return;
}



// FUNCTION 14331d120 FUN_14331d120 body=313 status=ok
// SIG undefined FUN_14331d120(void)

void FUN_14331d120(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = *param_3;
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_38 = *param_2;
  local_34 = param_2[1];
  local_30 = param_2[2];
  local_2c = param_2[3];
  local_48 = &PTR_FUN_145b00098;
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  local_40 = param_1;
  local_28 = uVar1;
  cVar3 = FUN_1433b5c10(&local_48,param_1);
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x28,param_1[0xb] + 0x70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))(local_40);
      }
      puVar4[1] = local_40;
      *puVar4 = &PTR_FUN_145b00098;
      *(undefined4 *)(puVar4 + 2) = local_38;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_34;
      *(undefined4 *)(puVar4 + 3) = local_30;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = local_2c;
      *(undefined4 *)(puVar4 + 4) = local_28;
    }
    uVar5 = (*(code *)local_48[3])(&local_48);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  return;
}



// FUNCTION 14331d260 FUN_14331d260 body=280 status=ok
// SIG undefined FUN_14331d260(void)

void FUN_14331d260(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar1 = *param_3;
  local_38 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_28 = *param_2;
  local_24 = param_2[1];
  local_38 = &PTR_FUN_145b000e0;
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  local_30 = param_1;
  local_20 = uVar1;
  cVar3 = FUN_1433b5c10(&local_38,param_1);
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x20,param_1[0xb] + 0x70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 8))(local_30);
      }
      puVar4[1] = local_30;
      *puVar4 = &PTR_FUN_145b000e0;
      *(undefined4 *)(puVar4 + 2) = local_28;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_24;
      *(undefined4 *)(puVar4 + 3) = local_20;
    }
    uVar5 = (*(code *)local_38[3])(&local_38);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_38 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  return;
}



// FUNCTION 14331d380 FUN_14331d380 body=340 status=ok
// SIG undefined FUN_14331d380(void)

undefined8 *
FUN_14331d380(longlong *param_1,undefined8 *param_2,uint param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **local_48;
  longlong *local_40;
  uint local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 *local_28;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_48 = &PTR_FUN_145b00128;
  local_30 = param_5;
  local_38 = param_3;
  if ((char)param_1[10] == '\0') {
    local_38 = param_3 & 0xffffff;
  }
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_40 = param_1;
  local_34 = param_4;
  local_28 = param_2;
  cVar2 = FUN_1433b5c10(&local_48,param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x28,param_1[0xb] + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))(local_40);
      }
      puVar3[1] = local_40;
      *puVar3 = &PTR_FUN_145b00128;
      *(uint *)(puVar3 + 2) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_34;
      *(undefined1 *)(puVar3 + 3) = local_30;
      puVar3[4] = local_28;
    }
    uVar4 = (*(code *)local_48[3])(&local_48);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  return param_2;
}



// FUNCTION 14331d4e0 FUN_14331d4e0 body=27 status=ok
// SIG undefined FUN_14331d4e0(void)

longlong FUN_14331d4e0(undefined8 param_1,longlong param_2)

{
  FUN_14331d510();
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 14331d510 FUN_14331d510 body=207 status=ok
// SIG undefined FUN_14331d510(void)

undefined4 * FUN_14331d510(longlong *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 local_res18 [4];
  undefined **local_38;
  longlong *local_30;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  
  if ((((param_3 < *(uint *)((longlong)param_1 + 0x44)) && (param_4 < *(uint *)(param_1 + 9))) &&
      (-1 < (int)param_3)) && (-1 < (int)param_4)) {
    local_res18[0] = 0;
    local_38 = &PTR__scalar_deleting_destructor__145affcd0;
    (**(code **)(*param_1 + 8))();
    local_38 = &PTR_FUN_145b00170;
    local_20 = local_res18;
    local_30 = param_1;
    local_28 = param_3;
    local_24 = param_4;
    FUN_14331fca0(param_1,&local_38);
    local_38 = &PTR__scalar_deleting_destructor__145affcd0;
    *param_2 = local_res18[0];
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
      return param_2;
    }
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14331d5f0 FUN_14331d5f0 body=408 status=ok
// SIG undefined FUN_14331d5f0(void)

ulonglong FUN_14331d5f0(longlong *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  ulonglong in_RAX;
  undefined8 *puVar8;
  ulonglong uVar9;
  byte local_res8 [8];
  int iVar10;
  int iVar11;
  undefined **local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  byte *local_38;
  
  iVar1 = param_3[2];
  if ((((*(int *)((longlong)param_1 + 0x44) < iVar1) ||
       (iVar2 = param_3[3], (int)param_1[9] < iVar2)) || (iVar3 = *param_3, iVar3 < 0)) ||
     (iVar4 = param_3[1], iVar4 < 0)) {
    uVar9 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8[0] = 0;
    local_60 = &PTR__scalar_deleting_destructor__145affcd0;
    iVar10 = iVar3;
    iVar11 = iVar1;
    (**(code **)(*param_1 + 8))();
    local_60 = &PTR__scalar_deleting_destructor__145b001b8;
    local_38 = local_res8;
    if ((param_1[0x17] != 0) && (lVar5 = *(longlong *)(param_1[0x17] + 0x140), lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x71) = 1;
    }
    local_58 = param_1;
    local_50 = iVar3;
    local_4c = iVar4;
    local_48 = iVar1;
    local_44 = iVar2;
    local_40 = param_2;
    cVar7 = FUN_1433b5c10(&local_60,param_1);
    if (cVar7 == '\0') {
      puVar8 = (undefined8 *)
               FUN_1433b70a0(param_1[0xb],0x30,param_1[0xb] + 0x70,param_4,iVar10,iVar11);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR__scalar_deleting_destructor__145affcd0;
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))(local_58);
        }
        puVar8[1] = local_58;
        *puVar8 = &PTR__scalar_deleting_destructor__145b001b8;
        *(int *)(puVar8 + 2) = local_50;
        *(int *)((longlong)puVar8 + 0x14) = local_4c;
        *(int *)(puVar8 + 3) = local_48;
        *(int *)((longlong)puVar8 + 0x1c) = local_44;
        puVar8[4] = local_40;
        puVar8[5] = local_38;
      }
      uVar9 = (*(code *)local_60[3])(&local_60);
      if ((uVar9 & 0x10) != 0) {
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
      }
    }
    bVar6 = local_res8[0];
    local_60 = &PTR__scalar_deleting_destructor__145affcd0;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    uVar9 = (ulonglong)bVar6;
  }
  return uVar9;
}



// FUNCTION 14331d790 FUN_14331d790 body=388 status=ok
// SIG undefined FUN_14331d790(void)

void FUN_14331d790(longlong *param_1,undefined4 *param_2,void *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  
  _guard_xfg_dispatch_icall_nop(param_3,0,0x1000);
  if (param_2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_res8);
    local_40 = 0;
    local_3c = 0;
    local_38 = *puVar3;
    local_34 = puVar3[1];
  }
  else {
    local_40 = *param_2;
    local_3c = param_2[1];
    local_38 = param_2[2];
    local_34 = param_2[3];
  }
  local_50 = &PTR__scalar_deleting_destructor__145affcd0;
  uVar6 = local_40;
  uVar7 = local_38;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  local_50 = &PTR_FUN_145b00200;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_48 = param_1;
  local_30 = param_3;
  cVar2 = FUN_1433b5c10(&local_50,param_1);
  if (cVar2 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x28,param_1[0xb] + 0x70,param_4,uVar6,uVar7);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 8))(local_48);
      }
      puVar4[1] = local_48;
      *puVar4 = &PTR_FUN_145b00200;
      *(undefined4 *)(puVar4 + 2) = local_40;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_3c;
      *(undefined4 *)(puVar4 + 3) = local_38;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = local_34;
      puVar4[4] = local_30;
    }
    uVar5 = (*(code *)local_50[3])(&local_50);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_50 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  return;
}



// FUNCTION 14331d920 FUN_14331d920 body=318 status=ok
// SIG undefined FUN_14331d920(void)

undefined1
FUN_14331d920(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  
  local_res20[0] = 0;
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_68 = &PTR_FUN_145b00248;
  local_50 = *param_3;
  local_4c = param_3[1];
  local_48 = param_3[2];
  local_44 = param_3[3];
  local_40 = *param_2;
  local_3c = param_2[1];
  local_28 = local_res20;
  local_58 = (longlong *)0x0;
  local_2c = 0;
  if ((param_1[0x17] != 0) && (lVar3 = *(longlong *)(param_1[0x17] + 0x140), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x71) = 1;
  }
  local_60 = param_1;
  local_30 = param_4;
  cVar2 = FUN_1433b5c10(&local_68,param_1);
  if (cVar2 == '\0') {
    lVar3 = FUN_1433b70a0(param_1[0xb],0x48,param_1[0xb] + 0x70);
    if (lVar3 != 0) {
      FUN_14331ff80(lVar3,&local_68);
    }
    uVar4 = (*(code *)local_68[3])(&local_68);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  uVar1 = local_res20[0];
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  return uVar1;
}



// FUNCTION 14331da70 FUN_14331da70 body=322 status=ok
// SIG undefined FUN_14331da70(void)

undefined1
FUN_14331da70(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  
  local_res8[0] = 0;
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_68 = &PTR_FUN_145b00248;
  local_60 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_50 = 0;
  local_48 = 0;
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = *param_4;
  local_34 = param_4[1];
  local_30 = param_5;
  local_2c = param_6;
  local_28 = local_res8;
  if ((param_1[0x17] != 0) && (lVar3 = *(longlong *)(param_1[0x17] + 0x140), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x71) = 1;
  }
  local_58 = param_2;
  cVar2 = FUN_1433b5c10(&local_68,param_1);
  if (cVar2 == '\0') {
    lVar3 = FUN_1433b70a0(param_1[0xb],0x48,param_1[0xb] + 0x70);
    if (lVar3 != 0) {
      FUN_14331ff80(lVar3,&local_68);
    }
    uVar4 = (*(code *)local_68[3])(&local_68);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  uVar1 = local_res8[0];
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  local_68 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  return uVar1;
}



// FUNCTION 14331dbc0 FUN_14331dbc0 body=452 status=ok
// SIG undefined FUN_14331dbc0(void)

void FUN_14331dbc0(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_58 = &PTR_FUN_145affda8;
  local_50 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  local_30 = *param_4;
  local_2c = param_4[1];
  local_28 = param_5;
  local_24 = param_6;
  local_20 = param_7;
  local_1c = param_8;
  local_58 = &PTR_FUN_145b00290;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_48 = param_2;
  cVar2 = FUN_1433b5c10(&local_58,param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x40,param_1[0xb] + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))(local_50);
      }
      puVar3[1] = local_50;
      *puVar3 = &PTR_FUN_145affda8;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      puVar3[2] = local_48;
      *(undefined4 *)(puVar3 + 3) = local_40;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = local_3c;
      *(undefined4 *)(puVar3 + 4) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x24) = local_34;
      *(undefined4 *)(puVar3 + 5) = local_30;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = local_2c;
      *puVar3 = &PTR_FUN_145b00290;
      *(undefined4 *)(puVar3 + 6) = local_28;
      *(undefined4 *)((longlong)puVar3 + 0x34) = local_24;
      *(undefined4 *)(puVar3 + 7) = local_20;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = local_1c;
    }
    uVar4 = (*(code *)local_58[3])(&local_58);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_58 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return;
}



// FUNCTION 14331dd90 FUN_14331dd90 body=326 status=ok
// SIG undefined FUN_14331dd90(void)

void FUN_14331dd90(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_2c = param_5;
  local_28 = param_6;
  local_48 = &PTR_FUN_145b002f8;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_40 = param_1;
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  cVar2 = FUN_1433b5c10(&local_48,param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x28,param_1[0xb] + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))(local_40);
      }
      puVar3[1] = local_40;
      *puVar3 = &PTR_FUN_145b002f8;
      *(undefined4 *)(puVar3 + 2) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_34;
      *(undefined4 *)(puVar3 + 3) = local_30;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = local_2c;
      *(undefined1 *)(puVar3 + 4) = local_28;
    }
    uVar4 = (*(code *)local_48[3])(&local_48);
    if ((uVar4 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  return;
}



// FUNCTION 14331dee0 FUN_14331dee0 body=151 status=ok
// SIG undefined FUN_14331dee0(void)

void FUN_14331dee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_18;
  
  uVar1 = FUN_1433200f0(&local_48,param_1,param_2,param_3,param_4,param_5);
  FUN_14331fd20(param_1,uVar1);
  local_48 = &PTR_FUN_145b00340;
  if (local_18 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  local_18 = 0;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  local_48 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  return;
}



// FUNCTION 14331df80 FUN_14331df80 body=365 status=ok
// SIG undefined FUN_14331df80(void)

void FUN_14331df80(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined1 param_9,void *param_10,uint param_11)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined1 local_ac [128];
  uint local_2c;
  
  local_d8 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_d8 = &PTR_FUN_145b003a8;
  local_bc = param_5;
  local_b8 = param_6;
  local_b7 = param_7;
  local_b4 = param_8;
  local_b0 = param_9;
  local_2c = 0x10;
  if (param_11 < 0x10) {
    local_2c = param_11;
  }
  local_d0 = param_1;
  local_c8 = param_2;
  local_c4 = param_3;
  local_c0 = param_4;
  if (param_11 != 0) {
    _guard_xfg_dispatch_icall_nop(local_ac,param_10,(ulonglong)param_11 << 2);
  }
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  cVar1 = FUN_1433b5c10(&local_d8,param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_1433b70a0(param_1[0xb],0xb0,param_1[0xb] + 0x70);
    if (lVar2 != 0) {
      FUN_143320320(lVar2,&local_d8);
    }
    uVar3 = (*(code *)local_d8[3])(&local_d8);
    if ((uVar3 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  local_d8 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  return;
}



// FUNCTION 14331e100 FUN_14331e100 body=463 status=ok
// SIG undefined FUN_14331e100(void)

undefined4
FUN_14331e100(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  
  local_res8[0] = 0;
  local_78 = &PTR__scalar_deleting_destructor__145affcd0;
  uVar1 = *param_7;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_78 = &PTR_FUN_145b003f0;
  local_70 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_60 = *param_3;
  local_5c = param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_50 = *param_4;
  local_4c = param_4[1];
  local_48 = param_5;
  local_44 = param_6;
  local_38 = local_res8;
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  local_68 = param_2;
  local_40 = uVar1;
  cVar3 = FUN_1433b5c10(&local_78,param_1);
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x48,param_1[0xb] + 0x70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 8))(local_70);
      }
      puVar4[1] = local_70;
      *puVar4 = &PTR_FUN_145b003f0;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      puVar4[2] = local_68;
      *(undefined4 *)(puVar4 + 3) = local_60;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = local_5c;
      *(undefined4 *)(puVar4 + 4) = local_58;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_54;
      *(undefined4 *)(puVar4 + 5) = local_50;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = local_4c;
      *(undefined4 *)(puVar4 + 6) = local_48;
      *(undefined4 *)((longlong)puVar4 + 0x34) = local_44;
      *(undefined4 *)(puVar4 + 7) = local_40;
      puVar4[8] = local_38;
    }
    uVar5 = (*(code *)local_78[3])(&local_78);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  uVar1 = local_res8[0];
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  local_78 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  return uVar1;
}



// FUNCTION 14331e2e0 FUN_14331e2e0 body=408 status=ok
// SIG undefined FUN_14331e2e0(void)

void FUN_14331e2e0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar4 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
  uVar1 = *(undefined4 *)(lVar4 + 4);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_res20);
  uVar2 = *puVar5;
  local_78 = &PTR__scalar_deleting_destructor__145affcd0;
  (**(code **)(*param_1 + 8))(param_1);
  local_78 = &PTR_FUN_145affda8;
  local_70 = param_1;
  (**(code **)(*param_1 + 8))(param_1);
  local_60 = 0;
  local_78 = &PTR_FUN_145b004c8;
  if ((param_1[0x17] != 0) && (lVar4 = *(longlong *)(param_1[0x17] + 0x140), lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x71) = 1;
  }
  local_68 = param_1;
  local_58 = uVar2;
  local_54 = uVar1;
  local_50 = param_2;
  local_4c = param_3;
  local_48 = param_2;
  local_44 = param_3;
  cVar3 = FUN_1433b5c10(&local_78,param_1);
  if (cVar3 == '\0') {
    puVar6 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x38,param_1[0xb] + 0x70);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 8))(local_70);
      }
      puVar6[1] = local_70;
      *puVar6 = &PTR_FUN_145affda8;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      puVar6[2] = local_68;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_60._4_4_;
      *(undefined4 *)(puVar6 + 4) = local_58;
      *(undefined4 *)((longlong)puVar6 + 0x24) = local_54;
      *(undefined4 *)(puVar6 + 5) = local_50;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = local_4c;
      *puVar6 = &PTR_FUN_145b004c8;
      *(undefined4 *)(puVar6 + 6) = local_48;
      *(undefined4 *)((longlong)puVar6 + 0x34) = local_44;
    }
    uVar7 = (*(code *)local_78[3])(&local_78);
    if ((uVar7 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  local_78 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  return;
}



// FUNCTION 14331e480 FUN_14331e480 body=351 status=ok
// SIG undefined FUN_14331e480(void)

void FUN_14331e480(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_38;
  longlong *local_30;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  if ((((param_2 <= *(int *)((longlong)param_1 + 0x44) + -1) && (-1 < param_2)) &&
      (param_3 <= (int)param_1[9] + -1)) && (-1 < param_3)) {
    uVar1 = *param_4;
    local_38 = &PTR__scalar_deleting_destructor__145affcd0;
    (**(code **)(*param_1 + 8))(param_1);
    local_38 = &PTR_FUN_145b00438;
    local_1c = 0;
    if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x71) = 1;
    }
    local_30 = param_1;
    local_28 = param_2;
    local_24 = param_3;
    local_20 = uVar1;
    cVar3 = FUN_1433b5c10(&local_38,param_1);
    if (cVar3 == '\0') {
      puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x20,param_1[0xb] + 0x70);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 8))(local_30);
        }
        puVar4[1] = local_30;
        *puVar4 = &PTR_FUN_145b00438;
        *(int *)(puVar4 + 2) = local_28;
        *(int *)((longlong)puVar4 + 0x14) = local_24;
        *(undefined4 *)(puVar4 + 3) = local_20;
        *(undefined1 *)((longlong)puVar4 + 0x1c) = (undefined1)local_1c;
        *(undefined1 *)((longlong)puVar4 + 0x1d) = local_1c._1_1_;
      }
      uVar5 = (*(code *)local_38[3])(&local_38);
      if ((uVar5 & 0x10) != 0) {
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
      }
    }
    local_38 = &PTR__scalar_deleting_destructor__145affcd0;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}



// FUNCTION 14331e5f0 FUN_14331e5f0 body=351 status=ok
// SIG undefined FUN_14331e5f0(void)

void FUN_14331e5f0(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_38;
  longlong *local_30;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  if ((((param_2 <= *(int *)((longlong)param_1 + 0x44) + -1) && (-1 < param_2)) &&
      (param_3 <= (int)param_1[9] + -1)) && (-1 < param_3)) {
    uVar1 = *param_4;
    local_38 = &PTR__scalar_deleting_destructor__145affcd0;
    (**(code **)(*param_1 + 8))(param_1);
    local_38 = &PTR_FUN_145b00438;
    local_1c = 1;
    if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x71) = 1;
    }
    local_30 = param_1;
    local_28 = param_2;
    local_24 = param_3;
    local_20 = uVar1;
    cVar3 = FUN_1433b5c10(&local_38,param_1);
    if (cVar3 == '\0') {
      puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x20,param_1[0xb] + 0x70);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 8))(local_30);
        }
        puVar4[1] = local_30;
        *puVar4 = &PTR_FUN_145b00438;
        *(int *)(puVar4 + 2) = local_28;
        *(int *)((longlong)puVar4 + 0x14) = local_24;
        *(undefined4 *)(puVar4 + 3) = local_20;
        *(undefined1 *)((longlong)puVar4 + 0x1c) = (undefined1)local_1c;
        *(undefined1 *)((longlong)puVar4 + 0x1d) = local_1c._1_1_;
      }
      uVar5 = (*(code *)local_38[3])(&local_38);
      if ((uVar5 & 0x10) != 0) {
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
      }
    }
    local_38 = &PTR__scalar_deleting_destructor__145affcd0;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}



// FUNCTION 14331e760 FUN_14331e760 body=437 status=ok
// SIG undefined FUN_14331e760(void)

ulonglong FUN_14331e760(longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  ulonglong in_RAX;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  byte local_res8 [8];
  int iVar11;
  int iVar12;
  undefined **local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  undefined8 local_40;
  byte *local_38;
  
  uVar1 = *(uint *)(param_1 + 9);
  iVar10 = param_2[1];
  iVar2 = *(int *)((longlong)param_1 + 0x44);
  if (iVar10 <= (int)uVar1) {
    uVar3 = param_2[3];
    in_RAX = (ulonglong)uVar3;
    if (((-1 < (int)uVar3) && (iVar11 = param_2[2], -1 < iVar11)) &&
       (iVar9 = *param_2, iVar9 <= iVar2)) {
      local_res8[0] = 0;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      local_60 = &PTR__scalar_deleting_destructor__145affcd0;
      if (iVar11 < iVar2) {
        iVar2 = iVar11;
      }
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar1 = uVar3;
      }
      iVar11 = iVar9;
      iVar12 = iVar2;
      (**(code **)(*param_1 + 8))(param_1);
      local_60 = &PTR__scalar_deleting_destructor__145b00480;
      local_38 = local_res8;
      if ((param_1[0x17] != 0) && (lVar4 = *(longlong *)(param_1[0x17] + 0x140), lVar4 != 0)) {
        *(undefined1 *)(lVar4 + 0x71) = 1;
      }
      local_58 = param_1;
      local_50 = iVar9;
      local_4c = iVar10;
      local_48 = iVar2;
      local_44 = uVar1;
      local_40 = param_3;
      cVar6 = FUN_1433b5c10(&local_60,param_1);
      if (cVar6 == '\0') {
        puVar7 = (undefined8 *)
                 FUN_1433b70a0(param_1[0xb],0x30,param_1[0xb] + 0x70,param_4,iVar11,iVar12);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR__scalar_deleting_destructor__145affcd0;
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 8))(local_58);
          }
          puVar7[1] = local_58;
          *puVar7 = &PTR__scalar_deleting_destructor__145b00480;
          *(int *)(puVar7 + 2) = local_50;
          *(int *)((longlong)puVar7 + 0x14) = local_4c;
          *(int *)(puVar7 + 3) = local_48;
          *(uint *)((longlong)puVar7 + 0x1c) = local_44;
          puVar7[4] = local_40;
          puVar7[5] = local_38;
        }
        uVar8 = (*(code *)local_60[3])(&local_60);
        if ((uVar8 & 0x10) != 0) {
          Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
        }
      }
      bVar5 = local_res8[0];
      local_60 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      return (ulonglong)bVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14331e920 FUN_14331e920 body=486 status=ok
// SIG undefined FUN_14331e920(void)

undefined4
FUN_14331e920(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 *local_30;
  
  local_res8[0] = 0;
  local_78 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_78 = &PTR_FUN_145affda8;
  local_70 = param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  local_60 = *param_3;
  local_5c = param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_50 = *param_4;
  local_4c = param_4[1];
  local_48 = param_5;
  local_44 = param_6;
  local_40 = param_7;
  local_3c = param_8;
  local_38 = param_9;
  local_30 = local_res8;
  local_78 = &PTR_FUN_145b00530;
  if ((param_1[0x17] != 0) && (lVar1 = *(longlong *)(param_1[0x17] + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  local_68 = param_2;
  cVar3 = FUN_1433b5c10(&local_78,param_1);
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x50,param_1[0xb] + 0x70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 8))(local_70);
      }
      puVar4[1] = local_70;
      *puVar4 = &PTR_FUN_145affda8;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      puVar4[2] = local_68;
      *(undefined4 *)(puVar4 + 3) = local_60;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = local_5c;
      *(undefined4 *)(puVar4 + 4) = local_58;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_54;
      *(undefined4 *)(puVar4 + 5) = local_50;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = local_4c;
      *puVar4 = &PTR_FUN_145b00530;
      *(undefined4 *)(puVar4 + 6) = local_48;
      *(undefined4 *)((longlong)puVar4 + 0x34) = local_44;
      *(undefined4 *)(puVar4 + 7) = local_40;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = local_3c;
      *(undefined1 *)(puVar4 + 8) = local_38;
      puVar4[9] = local_30;
    }
    uVar5 = (*(code *)local_78[3])(&local_78);
    if ((uVar5 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
    }
  }
  uVar2 = local_res8[0];
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  local_78 = &PTR__scalar_deleting_destructor__145affcd0;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  return uVar2;
}



// FUNCTION 14331eb10 FUN_14331eb10 body=166 status=ok
// SIG undefined FUN_14331eb10(void)

longlong FUN_14331eb10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) ||
      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(), iVar2 == 0)) ||
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(), iVar2 == 7)) {
    if ((*(uint *)(param_1 + 0x4c) & 0x20) != 0) {
      return 0;
    }
    return *(longlong *)(param_1 + 0x10);
  }
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if ((*(uint *)(param_1 + 0x4c) & 0x20) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (plVar1[2] == 0) {
      return 0;
    }
    if (plVar1[2] != 0) {
      return plVar1[2];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014331eb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
  return lVar3;
}



// FUNCTION 14331ebd0 TextureLost body=48 status=ok
// SIG undefined TextureLost(void)

void Scaleform::Render::DrawableImage::TextureLost(longlong param_1,int param_2)

{
  if (param_2 == 1) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14331ec10 FUN_14331ec10 body=339 status=ok
// SIG undefined FUN_14331ec10(void)

bool FUN_14331ec10(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  int local_res8;
  int local_resc;
  
  lVar3 = *param_3;
  local_res8 = *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) == 0) {
    local_res8 = 1;
  }
  local_resc = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) == 0) {
    local_resc = 1;
  }
  uVar2 = (**(code **)(lVar3 + 0x78))(param_3);
  cVar1 = (**(code **)(lVar3 + 0x28))(param_3,uVar2,0x480);
  if (cVar1 == '\0') {
    uVar4 = local_res8 - 1U | local_res8 - 1U >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    local_res8 = (uVar4 >> 0x10 | uVar4) + 1;
    uVar4 = local_resc - 1U | local_resc - 1U >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    local_resc = (uVar4 >> 0x10 | uVar4) + 1;
  }
  lVar3 = param_1;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
  }
  lVar3 = (**(code **)(*param_3 + 0x10))
                    (param_3,*(undefined4 *)(param_1 + 0x40),1,&local_res8,0x480,lVar3,0);
  bVar5 = false;
  if (lVar3 != 0) {
    FStringTable::SetOwnerAsset(param_1,lVar3);
    lVar3 = (**(code **)(*param_2 + 8))(param_2,lVar3,0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
    }
    bVar5 = lVar3 != 0;
    *(longlong *)(param_1 + 0xc0) = lVar3;
  }
  return bVar5;
}



// FUNCTION 14331ed70 FUN_14331ed70 body=212 status=ok
// SIG undefined FUN_14331ed70(void)

bool FUN_14331ed70(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  if ((*(uint *)(param_1 + 0x4c) & 3) != 0) {
    bVar3 = true;
    goto LAB_14331ee27;
  }
  if ((*(longlong *)(param_1 + 0xb8) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0xb8) + 0x1a0) != '\0')) {
LAB_14331ee24:
    bVar3 = false;
  }
  else {
    if (param_2 != '\0') {
      cVar2 = FUN_14331c020(param_1 + 0x60,*(undefined8 *)(param_1 + 0xb0));
      if (cVar2 != '\0') {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
        bVar3 = (*(uint *)(param_1 + 0x4c) & 3) != 0;
        goto LAB_14331ee27;
      }
    }
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      cVar2 = FUN_14331f300(param_1);
      if (cVar2 == '\0') goto LAB_14331ee24;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                        (*(longlong **)(param_1 + 0x10),param_1 + 0x60,0,0);
      if (cVar2 != '\0') {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 3;
      }
    }
    bVar3 = (*(uint *)(param_1 + 0x4c) & 3) != 0;
  }
LAB_14331ee27:
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  return bVar3;
}



// FUNCTION 14331ee50 FUN_14331ee50 body=75 status=ok
// SIG undefined FUN_14331ee50(void)

void FUN_14331ee50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  if (((*(uint *)(param_1 + 0x4c) & 3) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))();
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffc;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  return;
}



// FUNCTION 14331eeb0 FUN_14331eeb0 body=255 status=ok
// SIG undefined FUN_14331eeb0(void)

void FUN_14331eeb0(longlong param_1)

{
  longlong lVar1;
  longlong local_28;
  longlong lStack_20;
  int local_18;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    Scaleform::Lock::DoLock(lVar1 + 0x70);
    if (((*(uint *)(param_1 + 0x4c) & 3) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))();
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffc;
    }
    Scaleform::Lock::DoLock(lVar1 + 0x70);
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) != 0)) {
      lVar1 = *(longlong *)(param_1 + 0xb8);
      local_18 = 0;
      local_28 = 0;
      lStack_20 = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x10))(*(longlong **)(lVar1 + 0x148),&local_28);
      if (*(longlong *)(lVar1 + 0x1a8) != 0) {
        local_28 = *(longlong *)(lVar1 + 0x1a8);
      }
      if (*(longlong *)(lVar1 + 0x1b0) != 0) {
        lStack_20 = *(longlong *)(lVar1 + 0x1b0);
      }
      if (*(int *)(lVar1 + 0x1b8) != 0) {
        local_18 = *(int *)(lVar1 + 0x1b8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                (*(longlong **)(param_1 + 0x10),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x20),lStack_20);
    }
  }
  return;
}



// FUNCTION 14331efc0 FUN_14331efc0 body=303 status=ok
// SIG undefined FUN_14331efc0(void)

void FUN_14331efc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_28;
  longlong *plStack_20;
  int local_18;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    Scaleform::Lock::DoLock(lVar1 + 0x70);
    if (((*(uint *)(param_1 + 0x4c) & 3) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))();
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffc;
    }
    Scaleform::Lock::DoLock(lVar1 + 0x70);
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) != 0)) {
      lVar1 = *(longlong *)(param_1 + 0xb8);
      local_18 = 0;
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x10))(*(longlong **)(lVar1 + 0x148),&local_28);
      if (*(longlong *)(lVar1 + 0x1a8) != 0) {
        local_28 = *(longlong *)(lVar1 + 0x1a8);
      }
      if (*(longlong **)(lVar1 + 0x1b0) != (longlong *)0x0) {
        plStack_20 = *(longlong **)(lVar1 + 0x1b0);
      }
      if (*(int *)(lVar1 + 0x1b8) != 0) {
        local_18 = *(int *)(lVar1 + 0x1b8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                (*(longlong **)(param_1 + 0x10),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x20));
      lVar1 = (**(code **)(*plStack_20 + 0xd0))();
      if (lVar1 != 0) {
        uVar2 = (**(code **)(*plStack_20 + 0xd0))();
        uVar2 = FUN_1432c2370(uVar2);
        FUN_143320580(param_1 + 0x38,uVar2);
      }
    }
  }
  return;
}



// FUNCTION 14331f100 FUN_14331f100 body=91 status=ok
// SIG undefined FUN_14331f100(void)

longlong FUN_14331f100(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x18) != '\0')) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    cVar2 = FUN_1432c1c90(*(longlong *)(lVar1 + 0x10),1);
    if (((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0)) &&
       ((*(char *)(lVar1 + 0x18) != '\0' && (*(longlong *)(lVar1 + 0x10) != 0)))) {
      FUN_1432c1cc0(*(longlong *)(lVar1 + 0x10),1);
    }
  }
  return param_1 + 0x60;
}



// FUNCTION 14331f170 isMapped body=9 status=ok
// SIG undefined isMapped(void)

undefined4 Scaleform::Render::DrawableImage::isMapped(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x4c) >> 8),(*(uint *)(param_1 + 0x4c) & 3) != 0);
}



// FUNCTION 14331f180 FUN_14331f180 body=174 status=ok
// SIG undefined FUN_14331f180(void)

void FUN_14331f180(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = param_1[0xb];
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  if ((*(uint *)((longlong)param_1 + 0x4c) & 8) == 0) {
    *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | 8;
    lVar2 = param_1[0xb];
    plVar3 = *(longlong **)(lVar2 + 0x58);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
    }
    param_1[0x14] = *(longlong *)(lVar2 + 0x58);
    lVar2 = param_1[0xb];
    (**(code **)(*param_1 + 8))(param_1);
    plVar3 = *(longlong **)(lVar2 + 0x58);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x58) = param_1;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  return;
}



// FUNCTION 14331f240 FUN_14331f240 body=174 status=ok
// SIG undefined FUN_14331f240(void)

void FUN_14331f240(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = param_1[0xb];
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  if ((*(uint *)((longlong)param_1 + 0x4c) & 0x10) == 0) {
    *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | 0x10;
    lVar2 = param_1[0xb];
    plVar3 = *(longlong **)(lVar2 + 0x60);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if ((longlong *)param_1[0x15] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    }
    param_1[0x15] = *(longlong *)(lVar2 + 0x60);
    lVar2 = param_1[0xb];
    (**(code **)(*param_1 + 8))(param_1);
    plVar3 = *(longlong **)(lVar2 + 0x60);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x60) = param_1;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  return;
}



// FUNCTION 14331f300 FUN_14331f300 body=1128 status=ok
// SIG undefined FUN_14331f300(void)

undefined8 FUN_14331f300(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  int local_res18;
  int local_res1c;
  undefined1 local_res20 [8];
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  longlong *local_a8;
  longlong *plStack_a0;
  int local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    return 1;
  }
  lVar5 = *(longlong *)(param_1 + 0xb8);
  local_a8 = (longlong *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 0;
  (**(code **)(**(longlong **)(lVar5 + 0x148) + 0x10))(*(longlong **)(lVar5 + 0x148),&local_a8);
  if (*(longlong **)(lVar5 + 0x1a8) != (longlong *)0x0) {
    local_a8 = *(longlong **)(lVar5 + 0x1a8);
  }
  if (*(longlong **)(lVar5 + 0x1b0) != (longlong *)0x0) {
    plStack_a0 = *(longlong **)(lVar5 + 0x1b0);
  }
  if (*(int *)(lVar5 + 0x1b8) != 0) {
    local_98 = *(int *)(lVar5 + 0x1b8);
  }
  local_res10 = *(undefined4 *)(param_1 + 0x44);
  local_res14 = *(undefined4 *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))();
  }
  lVar5 = 0;
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar6 = *(longlong **)(param_1 + 0xb0);
    if (plVar6 != (longlong *)0x0) {
      puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x28))(plVar6,local_res20);
      local_res10 = *puVar7;
      local_res14 = puVar7[1];
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))();
      lVar5 = (**(code **)(*plVar6 + 0xa8))(plVar6,local_a8);
      if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
      uVar8 = *(undefined8 *)(param_1 + 0xb8);
      uVar3 = (**(code **)(*local_a8 + 0x78))();
      FUN_14331f770(param_1,uVar3,&local_res10,uVar8);
    }
LAB_14331f494:
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      if (lVar5 == 0) {
        if ((plVar1 != (longlong *)0x0) && (cVar2 = FUN_14331ed70(param_1,0), cVar2 != '\0')) {
          lVar5 = *plVar1;
          uVar8 = FUN_14331f100(param_1);
          (**(code **)(lVar5 + 0x40))(plVar1,uVar8,&LAB_1432caa10,0);
          FUN_14331ee50(param_1);
        }
      }
      else {
        bVar10 = ~(byte)(*(uint *)(plStack_a0 + 0xb) >> 2) & 1;
        bVar9 = ~(byte)(*(uint *)(plStack_a0 + 0xb) >> 1) & 1;
        if (bVar9 != 0) {
          (**(code **)(*plStack_a0 + 0x58))();
        }
        if (bVar10 == 0) {
          (**(code **)(*plStack_a0 + 0x80))();
        }
        (**(code **)(*plStack_a0 + 0x78))();
        lVar4 = *(longlong *)(param_1 + 0xc0);
        puVar7 = local_res8;
        local_b8 = 0;
        local_res8[0] = 0;
        local_b0 = (float)(*(int *)(lVar4 + 0x38) - *(int *)(lVar4 + 0x30));
        local_ac = (float)(*(int *)(lVar4 + 0x3c) - *(int *)(lVar4 + 0x34));
        (**(code **)(*plStack_a0 + 0x20))(plStack_a0,lVar4,2,&local_b8,puVar7);
        uVar3 = (undefined4)((ulonglong)puVar7 >> 0x20);
        lVar4 = *(longlong *)(param_1 + 0xc0);
        local_res1c = *(int *)(lVar4 + 0x3c) - *(int *)(lVar4 + 0x34);
        local_res18 = *(int *)(lVar4 + 0x38) - *(int *)(lVar4 + 0x30);
        plVar6 = (longlong *)(**(code **)(*plStack_a0 + 0x110))();
        puVar7 = (undefined4 *)(**(code **)(*plVar6 + 8))(plVar6,&local_res18);
        lVar4 = *(longlong *)(param_1 + 0xc0);
        local_68 = *puVar7;
        local_64 = puVar7[1];
        local_60 = puVar7[2];
        local_5c = puVar7[3];
        local_58 = puVar7[4];
        local_54 = puVar7[5];
        local_50 = puVar7[6];
        local_4c = puVar7[7];
        fVar11 = (float)(uint)(*(int *)(lVar4 + 0x38) - *(int *)(lVar4 + 0x30)) /
                 (float)*(uint *)(lVar4 + 0x28);
        fVar13 = (float)(uint)(*(int *)(lVar4 + 0x3c) - *(int *)(lVar4 + 0x34)) /
                 (float)*(uint *)(lVar4 + 0x2c);
        fVar12 = fVar11 * 0.0;
        _local_88 = CONCAT44(fVar12,fVar11);
        _fStack_80 = CONCAT44(fVar12,fVar12);
        fVar11 = fVar13 * 0.0;
        _local_78 = CONCAT44(fVar13,fVar11);
        _fStack_70 = CONCAT44(fVar11,fVar11);
        FUN_1432dafc0(plStack_a0,0x10,1);
        (**(code **)(*plStack_a0 + 0x228))
                  (plStack_a0,lVar5,&local_68,&local_88,CONCAT44(uVar3,0xffffffff));
        (**(code **)(*plStack_a0 + 0x28))(plStack_a0,2);
        FUN_14331efc0(param_1);
        (**(code **)(*plStack_a0 + 0x80))();
        if (bVar10 == 0) {
          (**(code **)(*plStack_a0 + 0x78))();
        }
        if (bVar9 != 0) {
          (**(code **)(*plStack_a0 + 0x60))();
        }
      }
      uVar8 = 1;
      goto LAB_14331f734;
    }
  }
  else {
    lVar4 = (**(code **)(*plStack_a0 + 8))(plStack_a0,*(undefined8 *)(param_1 + 0x10),0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
    }
    *(longlong *)(param_1 + 0xc0) = lVar4;
    if (lVar4 != 0) goto LAB_14331f494;
  }
  uVar8 = 0;
LAB_14331f734:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return uVar8;
}



// FUNCTION 14331f770 FUN_14331f770 body=585 status=ok
// SIG undefined FUN_14331f770(void)

void FUN_14331f770(longlong *param_1,undefined4 param_2,undefined4 *param_3,RefCountImpl *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  longlong lStack_30;
  int local_28;
  
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  if ((RefCountImpl *)param_1[0x17] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x17]);
  }
  param_1[0x17] = (longlong)param_4;
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  param_1[0x18] = 0;
  lVar2 = param_1[0x17];
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  (**(code **)(**(longlong **)(lVar2 + 0x148) + 0x10))(*(longlong **)(lVar2 + 0x148),&local_38);
  if (*(longlong **)(lVar2 + 0x1a8) != (longlong *)0x0) {
    local_38 = *(longlong **)(lVar2 + 0x1a8);
  }
  if (*(longlong *)(lVar2 + 0x1b0) != 0) {
    lStack_30 = *(longlong *)(lVar2 + 0x1b0);
  }
  if (*(int *)(lVar2 + 0x1b8) != 0) {
    local_28 = *(int *)(lVar2 + 0x1b8);
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x44) = *param_3;
  *(undefined4 *)(param_1 + 9) = uVar1;
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  param_1[0x14] = 0;
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  param_1[0x15] = 0;
  if (*(RefCountImpl **)(param_4 + 0x198) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_4 + 0x198));
  }
  if ((RefCountImpl *)param_1[0xb] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xb]);
  }
  param_1[0xb] = *(longlong *)(param_4 + 0x198);
  if (param_1[0x16] == 0) {
    if ((local_38 != (longlong *)0x0) && (cVar3 = (**(code **)(*local_38 + 0x40))(), cVar3 != '\0'))
    {
      FUN_14331ec10(param_1,lStack_30,local_38);
      return;
    }
    local_48 = &PTR__scalar_deleting_destructor__145affcd0;
    (**(code **)(*param_1 + 8))(param_1);
    local_48 = &PTR__scalar_deleting_destructor__145affd18;
    if ((param_1[0x17] != 0) && (lVar2 = *(longlong *)(param_1[0x17] + 0x140), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x71) = 1;
    }
    local_40 = param_1;
    cVar3 = FUN_1433b5c10(&local_48,param_1);
    if (cVar3 == '\0') {
      puVar4 = (undefined8 *)FUN_1433b70a0(param_1[0xb],0x10,param_1[0xb] + 0x70);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__scalar_deleting_destructor__145affcd0;
        if (local_40 != (longlong *)0x0) {
          (**(code **)(*local_40 + 8))();
        }
        puVar4[1] = local_40;
        *puVar4 = &PTR__scalar_deleting_destructor__145affd18;
      }
      uVar5 = (*(code *)local_48[3])(&local_48);
      if ((uVar5 & 0x10) != 0) {
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1[0xb]);
      }
    }
    local_48 = &PTR__scalar_deleting_destructor__145affcd0;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}



// FUNCTION 14331f9c0 FUN_14331f9c0 body=320 status=ok
// SIG undefined FUN_14331f9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14331f9c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    while( true ) {
      lVar1 = FUN_1432cd1e0(param_2);
      if ((*(ushort *)(lVar1 + 10) >> 0xc & 1) != 0) break;
      lVar1 = FUN_1432cd1e0(param_2);
      if (((*(ushort *)(lVar1 + 10) >> 0xb & 1) != 0) ||
         (param_2 = *(longlong *)(param_2 + 0x30), param_2 == 0)) break;
    }
  }
  local_78 = _DAT_146b63020;
  uStack_70 = _DAT_146b63028;
  local_58 = _DAT_146b63040;
  uStack_50 = _DAT_146b63048;
  local_68 = _DAT_146b63030;
  uStack_60 = _DAT_146b63038;
  local_38 = _DAT_1464fadf0;
  uStack_30 = uRam00000001464fadf8;
  local_48 = _DAT_1464fade0;
  uStack_40 = uRam00000001464fade8;
  local_18 = CONCAT44(uRam00000001464fae14,_DAT_1464fae10);
  uStack_10 = CONCAT44(uRam00000001464fae1c,uRam00000001464fae18);
  local_28 = _DAT_1464fae00;
  uStack_24 = uRam00000001464fae04;
  uStack_20 = uRam00000001464fae08;
  uStack_1c = uRam00000001464fae0c;
  if (param_2 != 0) {
    lVar1 = FUN_143362af0(param_2,5);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      local_78 = *(undefined8 *)(lVar1 + 0x10);
      uStack_70 = *(undefined8 *)(lVar1 + 0x18);
      local_68 = *(undefined8 *)(lVar1 + 0x20);
      uStack_60 = *(undefined8 *)(lVar1 + 0x28);
      local_58 = *(undefined8 *)(lVar1 + 0x30);
      uStack_50 = *(undefined8 *)(lVar1 + 0x38);
    }
    lVar1 = FUN_143362af0(param_2,6);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      local_48 = *(undefined8 *)(lVar1 + 0x10);
      uStack_40 = *(undefined8 *)(lVar1 + 0x18);
      local_38 = *(undefined8 *)(lVar1 + 0x20);
      uStack_30 = *(undefined8 *)(lVar1 + 0x28);
      local_28 = *(undefined4 *)(lVar1 + 0x30);
      uStack_24 = *(undefined4 *)(lVar1 + 0x34);
      uStack_20 = *(undefined4 *)(lVar1 + 0x38);
      uStack_1c = *(undefined4 *)(lVar1 + 0x3c);
      local_18 = *(undefined8 *)(lVar1 + 0x40);
      uStack_10 = *(undefined8 *)(lVar1 + 0x48);
    }
  }
  FUN_143362710(param_3,&local_78);
  FUN_143362850(param_3,&local_48);
  return;
}



// FUNCTION 14331fb00 FUN_14331fb00 body=111 status=ok
// SIG undefined FUN_14331fb00(void)

undefined8 * FUN_14331fb00(undefined8 *param_1,longlong param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 8))();
    }
    param_1[1] = *(undefined8 *)(param_2 + 8);
    *param_1 = &PTR_FUN_145b00170;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    return param_1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14331fb70 FUN_14331fb70 body=165 status=ok
// SIG undefined FUN_14331fb70(void)

void FUN_14331fb70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x140), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x71) = 1;
  }
  cVar4 = FUN_1433b5c10(param_2,param_1);
  if (cVar4 == '\0') {
    puVar5 = (undefined8 *)
             FUN_1433b70a0(*(longlong *)(param_1 + 0x58),0x50,*(longlong *)(param_1 + 0x58) + 0x70);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1433203e0(puVar5,param_2);
      *puVar5 = &PTR_FUN_145afffc8;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
      lVar1 = param_2[7];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
      *(int *)(puVar5 + 6) = (int)param_2[6];
      *(undefined4 *)((longlong)puVar5 + 0x34) = uVar2;
      *(int *)(puVar5 + 7) = (int)lVar1;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar3;
      lVar1 = param_2[9];
      puVar5[8] = param_2[8];
      puVar5[9] = lVar1;
    }
    uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((uVar6 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(*(undefined8 *)(param_1 + 0x58));
    }
  }
  return;
}



// FUNCTION 14331fc20 FUN_14331fc20 body=126 status=ok
// SIG undefined FUN_14331fc20(void)

void FUN_14331fc20(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  cVar1 = FUN_1433b5c10(param_2,param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_1433b70a0(*(longlong *)(param_1 + 0x58),0x30,*(longlong *)(param_1 + 0x58) + 0x70);
    if (lVar2 != 0) {
      FUN_14331fe60(lVar2,param_2);
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((uVar3 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(*(undefined8 *)(param_1 + 0x58));
    }
  }
  return;
}



// FUNCTION 14331fca0 FUN_14331fca0 body=126 status=ok
// SIG undefined FUN_14331fca0(void)

void FUN_14331fca0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  cVar1 = FUN_1433b5c10(param_2,param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_1433b70a0(*(longlong *)(param_1 + 0x58),0x20,*(longlong *)(param_1 + 0x58) + 0x70);
    if (lVar2 != 0) {
      FUN_14331fb00(lVar2,param_2);
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((uVar3 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(*(undefined8 *)(param_1 + 0x58));
    }
  }
  return;
}



// FUNCTION 14331fd20 FUN_14331fd20 body=126 status=ok
// SIG undefined FUN_14331fd20(void)

void FUN_14331fd20(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x140), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x71) = 1;
  }
  cVar1 = FUN_1433b5c10(param_2,param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_1433b70a0(*(longlong *)(param_1 + 0x58),0x40,*(longlong *)(param_1 + 0x58) + 0x70);
    if (lVar2 != 0) {
      FUN_143320030(lVar2,param_2);
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((uVar3 & 0x10) != 0) {
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(*(undefined8 *)(param_1 + 0x58));
    }
  }
  return;
}



// FUNCTION 14331fda0 FUN_14331fda0 body=186 status=ok
// SIG undefined FUN_14331fda0(void)

undefined8 *
FUN_14331fda0(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145affda8;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[2] = param_2;
  uVar3 = param_3[3];
  uVar4 = param_3[2];
  uVar5 = param_3[1];
  *(undefined4 *)(param_1 + 3) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *param_1 = &PTR_FUN_145afffc8;
  uVar6 = param_4[1];
  param_1[6] = *param_4;
  param_1[7] = uVar6;
  uVar6 = param_4[3];
  param_1[8] = param_4[2];
  param_1[9] = uVar6;
  return param_1;
}



// FUNCTION 14331fe60 FUN_14331fe60 body=114 status=ok
// SIG undefined FUN_14331fe60(void)

undefined8 * FUN_14331fe60(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 8) + 8))();
  }
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__145affe60;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 14331fee0 FUN_14331fee0 body=147 status=ok
// SIG undefined FUN_14331fee0(void)

undefined8 *
FUN_14331fee0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145affe60;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  *(bool *)(param_1 + 5) = param_4 != (undefined4 *)0x0;
  if (param_4 != (undefined4 *)0x0) {
    uVar1 = param_4[3];
    uVar2 = param_4[2];
    uVar3 = param_4[1];
    *(undefined4 *)(param_1 + 3) = *param_4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  }
  return param_1;
}



// FUNCTION 14331ff80 FUN_14331ff80 body=166 status=ok
// SIG undefined FUN_14331ff80(void)

undefined8 * FUN_14331ff80(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 8) + 8))();
  }
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_145b00248;
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 143320030 FUN_143320030 body=177 status=ok
// SIG undefined FUN_143320030(void)

undefined8 * FUN_143320030(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_1433203e0();
  *param_1 = &PTR_FUN_145b00340;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1000,0);
  param_1[6] = puVar2;
  lVar4 = 0x20;
  puVar3 = *(undefined8 **)(param_2 + 0x30);
  do {
    uVar1 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar1;
    uVar1 = puVar3[3];
    puVar2[2] = puVar3[2];
    puVar2[3] = uVar1;
    uVar1 = puVar3[5];
    puVar2[4] = puVar3[4];
    puVar2[5] = uVar1;
    uVar1 = puVar3[7];
    puVar2[6] = puVar3[6];
    puVar2[7] = uVar1;
    uVar1 = puVar3[9];
    puVar2[8] = puVar3[8];
    puVar2[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar2[10] = puVar3[10];
    puVar2[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar2[0xc] = puVar3[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar2[0xe] = puVar3[0xe];
    puVar2[0xf] = uVar1;
    lVar4 = lVar4 + -1;
    puVar2 = puVar2 + 0x10;
    puVar3 = puVar3 + 0x10;
  } while (lVar4 != 0);
  return param_1;
}



// FUNCTION 1433200f0 FUN_1433200f0 body=556 status=ok
// SIG undefined FUN_1433200f0(void)

undefined8 *
FUN_1433200f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6)

{
  undefined8 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_143320470(param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_145b00340;
  _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1000,0);
  param_1[6] = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x1000);
  lVar4 = 8;
  if (*param_6 != 0) {
    *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
    lVar5 = 8;
    puVar2 = (undefined8 *)*param_6;
    puVar3 = (undefined8 *)param_1[6];
    do {
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      uVar1 = puVar2[3];
      puVar3[2] = puVar2[2];
      puVar3[3] = uVar1;
      uVar1 = puVar2[5];
      puVar3[4] = puVar2[4];
      puVar3[5] = uVar1;
      uVar1 = puVar2[7];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar1;
      uVar1 = puVar2[9];
      puVar3[8] = puVar2[8];
      puVar3[9] = uVar1;
      uVar1 = puVar2[0xb];
      puVar3[10] = puVar2[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar2[0xd];
      puVar3[0xc] = puVar2[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar2[0xf];
      puVar3[0xe] = puVar2[0xe];
      puVar3[0xf] = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar5 != 0);
  }
  if (param_6[1] != 0) {
    *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 2;
    lVar5 = 8;
    puVar2 = (undefined8 *)(param_1[6] + 0x400);
    puVar3 = (undefined8 *)param_6[1];
    do {
      uVar1 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
      uVar1 = puVar3[3];
      puVar2[2] = puVar3[2];
      puVar2[3] = uVar1;
      uVar1 = puVar3[5];
      puVar2[4] = puVar3[4];
      puVar2[5] = uVar1;
      uVar1 = puVar3[7];
      puVar2[6] = puVar3[6];
      puVar2[7] = uVar1;
      uVar1 = puVar3[9];
      puVar2[8] = puVar3[8];
      puVar2[9] = uVar1;
      uVar1 = puVar3[0xb];
      puVar2[10] = puVar3[10];
      puVar2[0xb] = uVar1;
      uVar1 = puVar3[0xd];
      puVar2[0xc] = puVar3[0xc];
      puVar2[0xd] = uVar1;
      uVar1 = puVar3[0xf];
      puVar2[0xe] = puVar3[0xe];
      puVar2[0xf] = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar5 != 0);
  }
  if (param_6[2] != 0) {
    *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 4;
    lVar5 = 8;
    puVar2 = (undefined8 *)(param_1[6] + 0x800);
    puVar3 = (undefined8 *)param_6[2];
    do {
      uVar1 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
      uVar1 = puVar3[3];
      puVar2[2] = puVar3[2];
      puVar2[3] = uVar1;
      uVar1 = puVar3[5];
      puVar2[4] = puVar3[4];
      puVar2[5] = uVar1;
      uVar1 = puVar3[7];
      puVar2[6] = puVar3[6];
      puVar2[7] = uVar1;
      uVar1 = puVar3[9];
      puVar2[8] = puVar3[8];
      puVar2[9] = uVar1;
      uVar1 = puVar3[0xb];
      puVar2[10] = puVar3[10];
      puVar2[0xb] = uVar1;
      uVar1 = puVar3[0xd];
      puVar2[0xc] = puVar3[0xc];
      puVar2[0xd] = uVar1;
      uVar1 = puVar3[0xf];
      puVar2[0xe] = puVar3[0xe];
      puVar2[0xf] = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar5 != 0);
  }
  if (param_6[3] != 0) {
    *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 8;
    puVar2 = (undefined8 *)(param_1[6] + 0xc00);
    puVar3 = (undefined8 *)param_6[3];
    do {
      uVar1 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
      uVar1 = puVar3[3];
      puVar2[2] = puVar3[2];
      puVar2[3] = uVar1;
      uVar1 = puVar3[5];
      puVar2[4] = puVar3[4];
      puVar2[5] = uVar1;
      uVar1 = puVar3[7];
      puVar2[6] = puVar3[6];
      puVar2[7] = uVar1;
      uVar1 = puVar3[9];
      puVar2[8] = puVar3[8];
      puVar2[9] = uVar1;
      uVar1 = puVar3[0xb];
      puVar2[10] = puVar3[10];
      puVar2[0xb] = uVar1;
      uVar1 = puVar3[0xd];
      puVar2[0xc] = puVar3[0xc];
      puVar2[0xd] = uVar1;
      uVar1 = puVar3[0xf];
      puVar2[0xe] = puVar3[0xe];
      puVar2[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 143320320 FUN_143320320 body=178 status=ok
// SIG undefined FUN_143320320(void)

undefined8 * FUN_143320320(undefined8 *param_1,longlong param_2)

{
  size_t _Size;
  
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 8) + 8))();
  }
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_145b003a8;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  if (*(uint *)(param_2 + 0xac) != 0) {
    _Size = (ulonglong)*(uint *)(param_2 + 0xac) << 2;
    if (0x80 < _Size) {
      _Size = 0x80;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 0x2c),(void *)(param_2 + 0x2c),_Size)
    ;
  }
  return param_1;
}



// FUNCTION 1433203e0 FUN_1433203e0 body=134 status=ok
// SIG undefined FUN_1433203e0(void)

undefined8 * FUN_1433203e0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 8) + 8))();
  }
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_145affda8;
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  return param_1;
}



// FUNCTION 143320470 FUN_143320470 body=158 status=ok
// SIG undefined FUN_143320470(void)

undefined8 *
FUN_143320470(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145affda8;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  param_1[2] = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[3];
  uVar3 = param_4[2];
  *(undefined4 *)(param_1 + 3) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  uVar1 = param_5[1];
  *(undefined4 *)(param_1 + 5) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  return param_1;
}



// FUNCTION 143320510 FUN_143320510 body=101 status=ok
// SIG undefined FUN_143320510(void)

void FUN_143320510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b00340;
  if (param_1[6] != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  param_1[6] = 0;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014332056b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143320580 FUN_143320580 body=61 status=ok
// SIG undefined FUN_143320580(void)

longlong * FUN_143320580(longlong *param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  *param_1 = (longlong)param_2;
  return param_1;
}



// FUNCTION 1433205c0 FUN_1433205c0 body=121 status=ok
// SIG undefined FUN_1433205c0(void)

RefCountImplCore * FUN_1433205c0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143320640 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
`anonymous_namespace'::FTextInputMethodChangeNotifier::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143320690 FUN_143320690 body=102 status=ok
// SIG undefined FUN_143320690(void)

undefined8 * FUN_143320690(undefined8 *param_1,uint param_2)

{
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143320700 FUN_143320700 body=73 status=ok
// SIG undefined FUN_143320700(void)

undefined8 * FUN_143320700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143320750 FUN_143320750 body=88 status=ok
// SIG undefined FUN_143320750(void)

undefined8 * FUN_143320750(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1433207b0 FUN_1433207b0 body=103 status=ok
// SIG undefined FUN_1433207b0(void)

undefined8 * FUN_1433207b0(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143320820 FUN_143320820 body=88 status=ok
// SIG undefined FUN_143320820(void)

undefined8 * FUN_143320820(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143320880 FUN_143320880 body=103 status=ok
// SIG undefined FUN_143320880(void)

undefined8 * FUN_143320880(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433208f0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_OwnedObject<`FCEFWebBrowserWindowRHIHelper::UpdateSharedHandleTexture'::`2'::<lambda_1>,1,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143320940 FUN_143320940 body=73 status=ok
// SIG undefined FUN_143320940(void)

undefined8 * FUN_143320940(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143320990 FUN_143320990 body=73 status=ok
// SIG undefined FUN_143320990(void)

undefined8 * FUN_143320990(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1433209e0 FUN_1433209e0 body=88 status=ok
// SIG undefined FUN_1433209e0(void)

undefined8 * FUN_1433209e0(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143320a40 FUN_143320a40 body=88 status=ok
// SIG undefined FUN_143320a40(void)

undefined8 * FUN_143320a40(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143320aa0 FUN_143320aa0 body=52 status=ok
// SIG undefined FUN_143320aa0(void)

undefined8 FUN_143320aa0(undefined8 param_1,ulonglong param_2)

{
  FUN_143320510();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143320ae0 FUN_143320ae0 body=73 status=ok
// SIG undefined FUN_143320ae0(void)

undefined8 * FUN_143320ae0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143320b30 FUN_143320b30 body=88 status=ok
// SIG undefined FUN_143320b30(void)

undefined8 * FUN_143320b30(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145affcd0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143320b90 FUN_143320b90 body=89 status=ok
// SIG undefined FUN_143320b90(void)

undefined8 FUN_143320b90(undefined8 param_1,ulonglong param_2)

{
  FUN_14331bea0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 143320bf0 FUN_143320bf0 body=89 status=ok
// SIG undefined FUN_143320bf0(void)

undefined8 FUN_143320bf0(undefined8 param_1,ulonglong param_2)

{
  FUN_14331b680();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 143320c50 FUN_143320c50 body=190 status=ok
// SIG undefined FUN_143320c50(void)

void FUN_143320c50(longlong *param_1,longlong *param_2,float *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x60))();
  if (cVar1 != '\0') {
    *param_2 = param_1[1];
    iVar2 = *param_4;
    param_3[1] = (float)param_4[1];
    *param_3 = (float)iVar2;
  }
  uVar4 = (ulonglong)(cVar1 != '\0');
  param_2[uVar4] = param_1[2];
  iVar2 = -(int)param_1[5];
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar3 = -*(int *)((longlong)param_1 + 0x2c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar2 = iVar2 + (int)param_1[3];
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1c) + iVar3;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_3[uVar4 * 2] = (float)iVar2;
  param_3[uVar4 * 2 + 1] = (float)iVar3;
  return;
}



// FUNCTION 143320e70 FUN_143320e70 body=191 status=ok
// SIG undefined FUN_143320e70(void)

void FUN_143320e70(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  FUN_1432f15c0(*(undefined8 *)(param_1 + 0x90));
  FUN_1432f1450(*(undefined8 *)(param_1 + 0x90),param_4,param_3);
  FUN_1432f1450(*(undefined8 *)(param_1 + 0x90),param_4,param_5);
  FUN_1432f1450(*(undefined8 *)(param_1 + 0x90),param_2,param_5);
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((*(float *)(lVar1 + 0x5c) != *(float *)(lVar1 + 0x54)) ||
     (*(float *)(lVar1 + 0x60) != *(float *)(lVar1 + 0x58))) {
    FUN_1432f1450(lVar1,*(float *)(lVar1 + 0x54),*(undefined4 *)(lVar1 + 0x58));
  }
  FUN_1432f0880(*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 143320f30 Interface body=31 status=ok
// SIG undefined Interface(void)

undefined8 * Scaleform::Render::StateData::Interface::Interface(undefined8 *param_1,int param_2)

{
  *(int *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_145af8240;
  *(undefined8 **)(&DAT_146b642f0 + (longlong)param_2 * 8) = param_1;
  return param_1;
}



// FUNCTION 143320fc0 FUN_143320fc0 body=82 status=ok
// SIG undefined FUN_143320fc0(void)

void FUN_143320fc0(ulonglong *param_1)

{
  if ((*param_1 & 1) != 0) {
    (**(code **)(*(longlong *)(*param_1 & 0xfffffffffffffffe) + 0x10))
              ((longlong *)(*param_1 & 0xfffffffffffffffe),param_1[1],1);
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  FUN_143321800(param_1[1],*param_1 >> 1);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 143321020 FUN_143321020 body=149 status=ok
// SIG undefined FUN_143321020(void)

void FUN_143321020(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_2[1],1);
    }
    else {
      (**(code **)(*(longlong *)(uVar1 & 0xfffffffffffffffe) + 8))
                ((longlong *)(uVar1 & 0xfffffffffffffffe),param_2[1],1);
    }
  }
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      FUN_143321800(param_1[1],uVar1 >> 1);
    }
    else {
      (**(code **)(*(longlong *)(uVar1 & 0xfffffffffffffffe) + 0x10))
                ((longlong *)(uVar1 & 0xfffffffffffffffe),param_1[1],1);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



// FUNCTION 1433210c0 FUN_1433210c0 body=131 status=ok
// SIG undefined FUN_1433210c0(void)

ulonglong * FUN_1433210c0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      (**(code **)(*(longlong *)(uVar1 & 0xfffffffffffffffe) + 8))
                ((longlong *)(uVar1 & 0xfffffffffffffffe),param_2[1],1);
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      return param_1;
    }
    uVar1 = FUN_143321640(param_1,param_2[1] + 4,uVar1 >> 1,0);
    param_1[1] = uVar1;
    *param_1 = *param_2;
  }
  return param_1;
}



// FUNCTION 143321150 FUN_143321150 body=86 status=ok
// SIG undefined FUN_143321150(void)

ulonglong * FUN_143321150(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != *(ulonglong *)(&DAT_146b642f0 + (longlong)param_2 * 8)) {
        param_1 = (ulonglong *)0x0;
      }
      return param_1;
    }
    uVar3 = 0;
    if (uVar1 >> 1 != 0) {
      puVar2 = (ulonglong *)(param_1[1] + 4);
      do {
        if (*puVar2 == *(ulonglong *)(&DAT_146b642f0 + (longlong)param_2 * 8)) {
          return puVar2;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar3 < uVar1 >> 1);
    }
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1433211b0 FUN_1433211b0 body=554 status=ok
// SIG undefined FUN_1433211b0(void)

void FUN_1433211b0(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  uVar5 = *param_1;
  if (uVar5 == 0) {
    param_1[1] = param_3;
    *param_1 = (ulonglong)param_2 | 1;
                    /* WARNING: Could not recover jumptable at 0x0001433211ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2,param_3,0);
    return;
  }
  if ((*param_1 & 1) == 0) {
    uVar6 = 0;
    uVar7 = param_1[1];
    puVar8 = (undefined8 *)(uVar7 + 4);
    uVar5 = uVar5 >> 1;
    puVar4 = puVar8;
    if (uVar5 != 0) {
      do {
        if ((longlong *)*puVar4 == param_2) {
          (**(code **)(*param_2 + 8))(param_2,param_3,0);
          (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(uVar7 + 0xc + uVar6 * 0x10),0);
          *(ulonglong *)(uVar7 + 0xc + uVar6 * 0x10) = param_3;
          return;
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar6 < uVar5);
    }
    puVar3 = (undefined4 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar5 * 0x10 + 0x14,0);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 1;
      if (uVar5 != 0) {
        puVar4 = (undefined8 *)(uVar7 + 0xc);
        uVar7 = uVar5;
        do {
          plVar1 = (longlong *)puVar4[-1];
          uVar2 = *puVar4;
          *(longlong **)((longlong)puVar3 + (-4 - (longlong)puVar8) + (longlong)puVar4) = plVar1;
          *(undefined8 *)((longlong)puVar3 + (4 - (longlong)puVar8) + (longlong)puVar4) = uVar2;
          (**(code **)(*plVar1 + 8))(plVar1,*puVar4,1);
          puVar4 = puVar4 + 2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      *(longlong **)(puVar3 + uVar5 * 4 + 1) = param_2;
      *(ulonglong *)(puVar3 + uVar5 * 4 + 3) = param_3;
      (**(code **)(*param_2 + 8))(param_2,param_3,0);
      FUN_143321800(param_1[1],uVar5);
      *param_1 = uVar5 * 2 + 2;
      param_1[1] = (ulonglong)puVar3;
    }
  }
  else {
    if ((longlong *)(uVar5 & 0xfffffffffffffffe) == param_2) {
      (**(code **)(*param_2 + 8))(param_2,param_3,0);
      (**(code **)(*param_2 + 0x10))(param_2,param_1[1],0);
      param_1[1] = param_3;
      return;
    }
    puVar3 = (undefined4 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x24);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 1;
      uVar5 = param_1[1];
      *(ulonglong *)(puVar3 + 1) = *param_1 & 0xfffffffffffffffe;
      *(ulonglong *)(puVar3 + 3) = uVar5;
      *(longlong **)(puVar3 + 5) = param_2;
      *(ulonglong *)(puVar3 + 7) = param_3;
      (**(code **)(*param_2 + 8))(param_2,param_3,0);
      param_1[1] = (ulonglong)puVar3;
      *param_1 = 4;
      return;
    }
  }
  return;
}



// FUNCTION 1433213e0 FUN_1433213e0 body=434 status=ok
// SIG undefined FUN_1433213e0(void)

undefined8 FUN_1433213e0(ulonglong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(&DAT_146b642f0 + (longlong)param_2 * 8);
  if ((uVar6 & 1) != 0) {
    if ((longlong *)(uVar6 & 0xfffffffffffffffe) != plVar1) {
      return 0;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[1],0);
    *param_1 = 0;
    param_1[1] = 0;
    return 1;
  }
  uVar6 = uVar6 >> 1;
  uVar8 = 0;
  uVar2 = param_1[1];
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)(uVar2 + 4);
    do {
      if ((longlong *)*puVar4 == plVar1) break;
      uVar8 = uVar8 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar8 < uVar6);
  }
  if (uVar8 == uVar6) {
    return 0;
  }
  if (uVar6 == 2) {
    uVar9 = uVar8 ^ 1;
    uVar5 = *(ulonglong *)(uVar2 + 0xc + uVar9 * 0x10);
    *param_1 = *(ulonglong *)(uVar2 + 4 + uVar9 * 0x10) | 1;
    param_1[1] = uVar5;
    plVar1 = *(longlong **)(uVar2 + 4 + uVar9 * 0x10);
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(uVar2 + 0xc + uVar9 * 0x10),1);
  }
  else {
    lVar7 = (uVar6 - uVar8) + -1;
    uVar5 = FUN_143321640(param_1,uVar2 + 4,uVar8,lVar7);
    if (uVar5 == 0) {
      return 0;
    }
    puVar4 = (undefined8 *)(uVar2 + 0x14 + uVar8 * 0x10);
    if (lVar7 != 0) {
      do {
        plVar1 = (longlong *)*puVar4;
        uVar3 = puVar4[1];
        *(longlong **)((longlong)puVar4 + (uVar5 - uVar2) + -0x10) = plVar1;
        *(undefined8 *)((longlong)puVar4 + (uVar5 - uVar2) + -8) = uVar3;
        (**(code **)(*plVar1 + 8))(plVar1,puVar4[1],1);
        puVar4 = puVar4 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *param_1 = uVar6 * 2 - 2;
    param_1[1] = uVar5;
  }
  plVar1 = *(longlong **)(uVar2 + 4 + uVar8 * 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(uVar2 + 0xc + uVar8 * 0x10),2);
  FUN_143321800(uVar2,uVar6);
  return 1;
}



// FUNCTION 1433215a0 FUN_1433215a0 body=25 status=ok
// SIG undefined FUN_1433215a0(void)

byte * FUN_1433215a0(byte *param_1,longlong param_2)

{
  if ((*param_1 & 1) != 0) {
    return param_1;
  }
  return (byte *)(*(longlong *)(param_1 + 8) + 4 + param_2 * 0x10);
}



// FUNCTION 1433215c0 FUN_1433215c0 body=120 status=ok
// SIG undefined FUN_1433215c0(void)

void FUN_1433215c0(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433215ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(uVar1 & 0xfffffffffffffffe) + 0x10))
                ((longlong *)(uVar1 & 0xfffffffffffffffe),param_1[1],2);
      return;
    }
    puVar2 = (undefined8 *)(param_1[1] + 4);
    for (uVar1 = uVar1 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,puVar2[1],2);
      puVar2 = puVar2 + 2;
    }
  }
  return;
}



// FUNCTION 143321640 FUN_143321640 body=178 status=ok
// SIG undefined FUN_143321640(void)

undefined4 * FUN_143321640(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined4 *)
           (**(code **)(*DAT_146b62f28 + 0x70))
                     (DAT_146b62f28,param_1,(param_3 + param_4) * 0x10 + 4,0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 1;
    if (param_3 != 0) {
      puVar4 = (undefined8 *)(param_2 + 8);
      do {
        plVar1 = (longlong *)puVar4[-1];
        uVar2 = *puVar4;
        *(longlong **)((longlong)puVar3 + (-4 - param_2) + (longlong)puVar4) = plVar1;
        *(undefined8 *)((longlong)puVar3 + (4 - param_2) + (longlong)puVar4) = uVar2;
        (**(code **)(*plVar1 + 8))(plVar1,*puVar4,1);
        puVar4 = puVar4 + 2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143321700 FUN_143321700 body=152 status=ok
// SIG undefined FUN_143321700(void)

longlong FUN_143321700(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar3 = FUN_143321640();
  if ((lVar3 != 0) && (param_5 != 0)) {
    lVar5 = (param_3 * 0x10 - param_4) + lVar3;
    puVar4 = (undefined8 *)(param_4 + 8);
    do {
      plVar1 = (longlong *)puVar4[-1];
      uVar2 = *puVar4;
      *(longlong **)(lVar5 + -4 + (longlong)puVar4) = plVar1;
      *(undefined8 *)(lVar5 + 4 + (longlong)puVar4) = uVar2;
      (**(code **)(*plVar1 + 8))(plVar1,*puVar4,1);
      puVar4 = puVar4 + 2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return lVar3;
}



// FUNCTION 1433217a0 FUN_1433217a0 body=91 status=ok
// SIG undefined FUN_1433217a0(void)

void FUN_1433217a0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      plVar1 = (longlong *)puVar3[-1];
      uVar2 = *puVar3;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      (**(code **)(*plVar1 + 8))(plVar1,*puVar3,1);
      param_1 = param_1 + 2;
      puVar3 = puVar3 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143321800 FUN_143321800 body=109 status=ok
// SIG undefined FUN_143321800(void)

void FUN_143321800(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1,0xffffffff);
  if (iVar2 == 1) {
    puVar1 = (undefined8 *)(param_1 + 4);
    for (; param_2 != 0; param_2 = param_2 + -1) {
      (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,puVar1[1],1);
      puVar1 = puVar1 + 2;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
  }
  return;
}



// FUNCTION 143321870 FUN_143321870 body=104 status=ok
// SIG undefined FUN_143321870(void)

undefined8 * FUN_143321870(undefined8 *param_1,undefined4 param_2,undefined2 param_3,char param_4)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b005f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(uint *)((longlong)param_1 + 0x14) = (uint)(param_4 != '\0');
  FUN_143321990(param_1,param_3,0);
  return param_1;
}



// FUNCTION 1433218e0 FUN_1433218e0 body=98 status=ok
// SIG undefined FUN_1433218e0(void)

undefined8 *
FUN_1433218e0(undefined8 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
             undefined4 param_5)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b005f8;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  FUN_143321990(param_1,param_3,0);
  return param_1;
}



// FUNCTION 143321950 FUN_143321950 body=54 status=ok
// SIG undefined FUN_143321950(void)

void FUN_143321950(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b005f8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143321990 FUN_143321990 body=233 status=ok
// SIG undefined FUN_143321990(void)

undefined8 FUN_143321990(longlong param_1,ushort param_2,char param_3)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if (param_2 == *(ushort *)(param_1 + 0x1c)) {
    return 1;
  }
  if (param_3 == '\0') {
    puVar3 = (undefined1 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)param_2 << 3,0);
  }
  else {
    puVar3 = (undefined1 *)
             (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)param_2 << 3,0);
  }
  if (puVar3 == (undefined1 *)0x0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x1c);
    if (param_2 < *(ushort *)(param_1 + 0x1c)) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
      uVar5 = (ulonglong)uVar2;
      puVar4 = puVar3;
      do {
        lVar1 = *(longlong *)(param_1 + 0x20);
        *puVar4 = puVar4[lVar1 - (longlong)puVar3];
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + (lVar1 - (longlong)puVar3) + 4);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 8;
      } while (uVar5 != 0);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined1 **)(param_1 + 0x20) = puVar3;
  *(ushort *)(param_1 + 0x1c) = param_2;
  return 1;
}



// FUNCTION 143321a80 FUN_143321a80 body=28 status=ok
// SIG undefined FUN_143321a80(void)

undefined8 FUN_143321a80(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) == 1) {
    return 2;
  }
  if (*(int *)(param_1 + 0x18) != 2) {
    return 1;
  }
  return 0;
}



// FUNCTION 143321ab0 FUN_143321ab0 body=247 status=ok
// SIG undefined FUN_143321ab0(void)

void FUN_143321ab0(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  float fVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_143321990(param_1,*(undefined2 *)(param_2 + 0x1c),1);
  uVar6 = 0;
  if (*(short *)(param_1 + 0x1c) != 0) {
    do {
      uVar5 = (ulonglong)uVar6;
      local_res20[0] = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 4 + uVar5 * 8);
      local_res8[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 4 + uVar5 * 8);
      bVar1 = *(byte *)(*(longlong *)(param_3 + 0x20) + uVar5 * 8);
      fVar7 = (float)*(byte *)(*(longlong *)(param_2 + 0x20) + uVar5 * 8);
      puVar4 = (undefined4 *)
               Scaleform::Render::Color::Blend(local_res10,local_res8,local_res20,param_4);
      uVar6 = uVar6 + 1;
      uVar2 = *puVar4;
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(char *)(lVar3 + uVar5 * 8) = (char)(longlong)(((float)bVar1 - fVar7) * param_4 + fVar7);
      *(undefined4 *)(lVar3 + 4 + uVar5 * 8) = uVar2;
    } while (uVar6 < *(ushort *)(param_1 + 0x1c));
  }
  *(float *)(param_1 + 0x28) =
       (*(float *)(param_3 + 0x28) - *(float *)(param_2 + 0x28)) * param_4 +
       *(float *)(param_2 + 0x28);
  return;
}



// FUNCTION 143321bb0 FUN_143321bb0 body=1168 status=ok
// SIG undefined FUN_143321bb0(void)

undefined4 FUN_143321bb0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar10 = 1;
  fVar15 = 0.0;
  if (1 < uVar1) {
    if (3 < uVar1 - 1) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      uVar12 = 2;
      pbVar11 = (byte *)(lVar2 + 0x15);
      do {
        uVar9 = (ulonglong)(uVar12 - 2);
        fVar16 = (float)pbVar11[-0xd] - (float)*(byte *)(lVar2 + uVar9 * 8);
        if (0.0 < fVar16) {
          uVar3 = (uint)*(byte *)(lVar2 + 6 + uVar9 * 8) - (uint)pbVar11[-7];
          uVar6 = (int)uVar3 >> 0x1f;
          uVar4 = (uint)*(byte *)(lVar2 + 5 + uVar9 * 8) - (uint)pbVar11[-8];
          uVar7 = (int)uVar4 >> 0x1f;
          uVar5 = (uint)*(byte *)(lVar2 + 4 + uVar9 * 8) - (uint)pbVar11[-9];
          uVar8 = (int)uVar5 >> 0x1f;
          fVar13 = (float)(int)((uVar3 ^ uVar6) - uVar6) / fVar16;
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          fVar14 = (float)(int)((uVar4 ^ uVar7) - uVar7) / fVar16;
          if (fVar14 <= fVar13) {
            fVar14 = fVar13;
          }
          uVar3 = (uint)*(byte *)(lVar2 + 7 + uVar9 * 8) - (uint)pbVar11[-6];
          uVar4 = (int)uVar3 >> 0x1f;
          fVar13 = (float)(int)((uVar5 ^ uVar8) - uVar8) / fVar16;
          fVar15 = (float)(int)((uVar3 ^ uVar4) - uVar4) / fVar16;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        fVar16 = (float)pbVar11[-5] - (float)*(byte *)(lVar2 + uVar10 * 8);
        if (0.0 < fVar16) {
          uVar3 = (uint)*(byte *)(lVar2 + 6 + uVar10 * 8) - (uint)pbVar11[1];
          uVar6 = (int)uVar3 >> 0x1f;
          uVar4 = (uint)*(byte *)(lVar2 + 5 + uVar10 * 8) - (uint)*pbVar11;
          uVar7 = (int)uVar4 >> 0x1f;
          uVar5 = (uint)*(byte *)(lVar2 + 4 + uVar10 * 8) - (uint)pbVar11[-1];
          uVar8 = (int)uVar5 >> 0x1f;
          fVar13 = (float)(int)((uVar3 ^ uVar6) - uVar6) / fVar16;
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          fVar14 = (float)(int)((uVar4 ^ uVar7) - uVar7) / fVar16;
          if (fVar14 <= fVar13) {
            fVar14 = fVar13;
          }
          uVar3 = (uint)*(byte *)(lVar2 + 7 + uVar10 * 8) - (uint)pbVar11[2];
          uVar4 = (int)uVar3 >> 0x1f;
          fVar13 = (float)(int)((uVar5 ^ uVar8) - uVar8) / fVar16;
          fVar15 = (float)(int)((uVar3 ^ uVar4) - uVar4) / fVar16;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        uVar9 = (ulonglong)uVar12;
        fVar16 = (float)pbVar11[3] - (float)*(byte *)(lVar2 + uVar9 * 8);
        if (0.0 < fVar16) {
          uVar3 = (uint)*(byte *)(lVar2 + 6 + uVar9 * 8) - (uint)pbVar11[9];
          uVar6 = (int)uVar3 >> 0x1f;
          uVar4 = (uint)*(byte *)(lVar2 + 5 + uVar9 * 8) - (uint)pbVar11[8];
          uVar7 = (int)uVar4 >> 0x1f;
          uVar5 = (uint)*(byte *)(lVar2 + 4 + uVar9 * 8) - (uint)pbVar11[7];
          uVar8 = (int)uVar5 >> 0x1f;
          fVar13 = (float)(int)((uVar3 ^ uVar6) - uVar6) / fVar16;
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          fVar14 = (float)(int)((uVar4 ^ uVar7) - uVar7) / fVar16;
          if (fVar14 <= fVar13) {
            fVar14 = fVar13;
          }
          uVar3 = (uint)*(byte *)(lVar2 + 7 + uVar9 * 8) - (uint)pbVar11[10];
          uVar4 = (int)uVar3 >> 0x1f;
          fVar13 = (float)(int)((uVar5 ^ uVar8) - uVar8) / fVar16;
          fVar15 = (float)(int)((uVar3 ^ uVar4) - uVar4) / fVar16;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        uVar9 = (ulonglong)(uVar12 + 1);
        fVar16 = (float)pbVar11[0xb] - (float)*(byte *)(lVar2 + uVar9 * 8);
        if (0.0 < fVar16) {
          uVar3 = (uint)*(byte *)(lVar2 + 6 + uVar9 * 8) - (uint)pbVar11[0x11];
          uVar6 = (int)uVar3 >> 0x1f;
          uVar4 = (uint)*(byte *)(lVar2 + 5 + uVar9 * 8) - (uint)pbVar11[0x10];
          uVar7 = (int)uVar4 >> 0x1f;
          uVar5 = (uint)*(byte *)(lVar2 + 4 + uVar9 * 8) - (uint)pbVar11[0xf];
          uVar8 = (int)uVar5 >> 0x1f;
          fVar13 = (float)(int)((uVar3 ^ uVar6) - uVar6) / fVar16;
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          fVar14 = (float)(int)((uVar4 ^ uVar7) - uVar7) / fVar16;
          if (fVar14 <= fVar13) {
            fVar14 = fVar13;
          }
          uVar3 = (uint)*(byte *)(lVar2 + 7 + uVar9 * 8) - (uint)pbVar11[0x12];
          uVar4 = (int)uVar3 >> 0x1f;
          fVar13 = (float)(int)((uVar5 ^ uVar8) - uVar8) / fVar16;
          fVar15 = (float)(int)((uVar3 ^ uVar4) - uVar4) / fVar16;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        pbVar11 = pbVar11 + 0x20;
        uVar3 = (int)uVar10 + 4;
        uVar10 = (ulonglong)uVar3;
        uVar12 = uVar12 + 4;
      } while (uVar3 < uVar1 - 3);
    }
    if ((uint)uVar10 < (uint)uVar1) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      pbVar11 = (byte *)(lVar2 + 5 + uVar10 * 8);
      do {
        uVar9 = (ulonglong)((int)uVar10 - 1);
        fVar16 = (float)pbVar11[-5] - (float)*(byte *)(lVar2 + uVar9 * 8);
        if (0.0 < fVar16) {
          uVar12 = (uint)*(byte *)(lVar2 + 6 + uVar9 * 8) - (uint)pbVar11[1];
          uVar5 = (int)uVar12 >> 0x1f;
          uVar3 = (uint)*(byte *)(lVar2 + 5 + uVar9 * 8) - (uint)*pbVar11;
          uVar6 = (int)uVar3 >> 0x1f;
          uVar4 = (uint)*(byte *)(lVar2 + 4 + uVar9 * 8) - (uint)pbVar11[-1];
          uVar7 = (int)uVar4 >> 0x1f;
          fVar13 = (float)(int)((uVar12 ^ uVar5) - uVar5) / fVar16;
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          fVar14 = (float)(int)((uVar3 ^ uVar6) - uVar6) / fVar16;
          if (fVar14 <= fVar13) {
            fVar14 = fVar13;
          }
          uVar12 = (uint)*(byte *)(lVar2 + 7 + uVar9 * 8) - (uint)pbVar11[2];
          uVar3 = (int)uVar12 >> 0x1f;
          fVar13 = (float)(int)((uVar4 ^ uVar7) - uVar7) / fVar16;
          fVar15 = (float)(int)((uVar12 ^ uVar3) - uVar3) / fVar16;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        pbVar11 = pbVar11 + 8;
        uVar12 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar12;
      } while (uVar12 < uVar1);
    }
    if (fVar15 != 0.0) {
      if (*(int *)(param_1 + 0x14) == 1) {
        fVar15 = fVar15 * 1.5;
      }
      if ((*(int *)(param_1 + 0x10) == 2) && (0.5 < ABS(*(float *)(param_1 + 0x28)))) {
        fVar15 = fVar15 / (1.01 - ABS(*(float *)(param_1 + 0x28)));
      }
      fVar16 = 0.0;
      if (0.0 <= fVar15) {
        fVar16 = fVar15;
      }
      fVar15 = _guard_xfg_dispatch_icall_nop((fVar16 + 0.18) * 5.0);
      uVar10 = (longlong)fVar15 & 0xffffffff;
      if (0x11 < (uint)(longlong)fVar15) {
        uVar10 = 0x11;
      }
      return *(undefined4 *)(&DAT_145b005b0 + uVar10 * 4);
    }
  }
  return 0x40;
}



// FUNCTION 143322050 FUN_143322050 body=97 status=ok
// SIG undefined FUN_143322050(void)

ulonglong FUN_143322050(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0x1c) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x20);
    uVar5 = (ulonglong)*(ushort *)(param_1 + 0x1c);
    do {
      puVar1 = (uint *)(pbVar4 + 4);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 8;
      uVar3 = uVar3 ^ (ulonglong)(*puVar1 >> 0x10) ^ (ulonglong)bVar2 ^ (ulonglong)*puVar1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return (param_2 >> 0x10 ^ param_2 & 0xffff) ^ uVar3;
  }
  return uVar3;
}



// FUNCTION 1433220c0 FUN_1433220c0 body=116 status=ok
// SIG undefined FUN_1433220c0(void)

ulonglong FUN_1433220c0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ulonglong in_RAX;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if (uVar1 == *(ushort *)(param_2 + 0x1c)) {
    uVar2 = *(uint *)(param_2 + 0x10);
    in_RAX = (ulonglong)uVar2;
    if (((*(uint *)(param_1 + 0x10) == uVar2) &&
        (*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28))) &&
       (bVar4 = *(int *)(param_1 + 0x14) == 1,
       in_RAX = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar4),
       bVar4 == (*(int *)(param_2 + 0x14) == 1))) {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          in_RAX = 0;
          if ((*(char *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) !=
               *(char *)(*(longlong *)(param_2 + 0x20) + uVar3 * 8)) ||
             (uVar2 = *(uint *)(*(longlong *)(param_2 + 0x20) + 4 + uVar3 * 8),
             in_RAX = (ulonglong)uVar2,
             *(uint *)(*(longlong *)(param_1 + 0x20) + 4 + uVar3 * 8) != uVar2)) goto LAB_143322131;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < uVar1);
      }
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_143322131:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143322140 FUN_143322140 body=198 status=ok
// SIG undefined FUN_143322140(void)

undefined8 *
FUN_143322140(undefined8 *param_1,undefined8 param_2,RefCountImpl *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f70a80;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_145b00600;
  param_1[5] = param_2;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = param_4;
  if (param_3 != (RefCountImpl *)0x0) {
    if (*(int *)(param_3 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 7) = 0x100;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
      return param_1;
    }
    uVar1 = FUN_143321bb0(param_3);
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 7) = uVar1;
  }
  return param_1;
}



// FUNCTION 143322210 FUN_143322210 body=63 status=ok
// SIG undefined FUN_143322210(void)

void FUN_143322210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b00600;
  if (param_1[5] != 0) {
    CPopulation::AcceptNewCitizen(param_1[5],param_1);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  FUN_1432caa70(param_1);
  return;
}



// FUNCTION 143322260 FUN_143322260 body=1234 status=ok
// SIG undefined FUN_143322260(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143322260(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined ***pppuVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_958;
  longlong local_950;
  undefined8 local_948;
  longlong local_940;
  undefined **local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined4 local_920;
  undefined2 local_91c;
  longlong local_918;
  undefined4 local_910;
  undefined8 local_908;
  longlong local_900;
  undefined1 local_8f8 [4];
  float local_8f4;
  float local_8f0;
  float local_8ec;
  float local_8e8;
  undefined4 auStack_8dc [2];
  undefined4 local_8d4 [255];
  undefined4 local_4d8 [255];
  undefined4 local_dc;
  
  uVar5 = 0;
  local_958 = 0;
  local_950 = 0;
  local_948 = 0;
  local_940 = 0;
  FUN_1432c7ad0(param_2,0,&local_958);
  lVar4 = local_940;
  pppuVar7 = *(undefined ****)(param_1 + 0x30);
  if (pppuVar7 == (undefined ***)0x0) {
    auStack_8dc[1] = 0;
    (*param_3)(local_940,auStack_8dc + 1,4,0,param_4);
  }
  else {
    local_938 = &PTR_FUN_145b005f8;
    local_930 = 1;
    local_928 = 0;
    local_920 = 0;
    local_91c = 0;
    local_918 = 0;
    local_910 = 0;
    local_908 = 0;
    if (pppuVar7[6] != (undefined **)0x0) {
      FUN_143321ab0(&local_938,pppuVar7,pppuVar7[6],*(undefined4 *)(param_1 + 0x40));
      pppuVar7 = &local_938;
    }
    if (*(int *)((longlong)pppuVar7 + 0x14) == 1) {
      uVar10 = 0x400ae148;
    }
    else {
      uVar10 = 0x3f800000;
    }
    FUN_143322810(local_4d8,pppuVar7[4],*(undefined2 *)((longlong)pppuVar7 + 0x1c),uVar10);
    local_900 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * local_950;
    if (*(int *)(pppuVar7 + 2) == 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        do {
          (*param_3)(lVar4,local_4d8,*(int *)(param_1 + 0x38) << 2,0,param_4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 0x3c));
      }
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x38);
      if (uVar5 != 0) {
        puVar3 = auStack_8dc;
        for (uVar2 = (ulonglong)uVar5; puVar3 = (undefined4 *)((longlong)puVar3 + 4), uVar2 != 0;
            uVar2 = uVar2 - 1) {
          *puVar3 = local_dc;
        }
      }
      (*param_3)(lVar4,auStack_8dc + 1,uVar5 * 4,0,param_4);
      (*param_3)(local_900 + lVar4,auStack_8dc + 1,*(int *)(param_1 + 0x38) << 2,0,param_4);
      uVar5 = *(uint *)(param_1 + 0x38);
      auStack_8dc[1] = local_dc;
      uVar8 = uVar5 - 1;
      *(undefined4 *)((longlong)auStack_8dc + (ulonglong)(uVar5 * 4)) = local_dc;
      fVar13 = (float)uVar5 * 0.5;
      fVar14 = fVar13 - 1.0;
      if (*(int *)(pppuVar7 + 2) == 2) {
        FUN_143322e20(local_8f8,fVar14,fVar14 * *(float *)(pppuVar7 + 5),0);
      }
      lVar4 = lVar4 + local_950;
      uVar5 = 1;
      if (1 < uVar8) {
        do {
          uVar6 = 1;
          puVar3 = auStack_8dc + 2;
          if (*(int *)(pppuVar7 + 2) == 1) {
            fVar11 = ((float)uVar5 - fVar13) + 0.5;
            do {
              fVar9 = ((float)uVar6 - fVar13) + 0.5;
              fVar9 = _guard_xfg_dispatch_icall_nop(fVar9 * fVar9 + fVar11 * fVar11);
              fVar9 = _guard_xfg_dispatch_icall_nop((fVar9 * 256.0) / fVar14 + 0.5);
              iVar1 = (int)fVar9;
              if (0xff < (int)fVar9) {
                iVar1 = 0xff;
              }
              uVar6 = uVar6 + 1;
              *puVar3 = *(undefined4 *)((longlong)local_4d8 + (ulonglong)(uint)(iVar1 * 4));
              puVar3 = puVar3 + 1;
            } while (uVar6 < uVar8);
          }
          else {
            fVar11 = (((float)uVar5 - fVar13) + 0.5) - local_8f0;
            do {
              fVar12 = (((float)uVar6 - fVar13) + 0.5) - local_8f4;
              fVar9 = local_8f0 * fVar12 - local_8f4 * fVar11;
              fVar9 = _guard_xfg_dispatch_icall_nop
                                (ABS((fVar12 * fVar12 + fVar11 * fVar11) * local_8ec - fVar9 * fVar9
                                    ));
              fVar9 = _guard_xfg_dispatch_icall_nop
                                (((fVar9 + local_8f4 * fVar12 + local_8f0 * fVar11) * local_8e8 *
                                 256.0) / fVar14 + 0.5);
              iVar1 = (int)fVar9;
              if (0xff < (int)fVar9) {
                iVar1 = 0xff;
              }
              uVar6 = uVar6 + 1;
              *puVar3 = *(undefined4 *)((longlong)local_4d8 + (ulonglong)(uint)(iVar1 * 4));
              puVar3 = puVar3 + 1;
            } while (uVar6 < uVar8);
          }
          (*param_3)(lVar4,auStack_8dc + 1,*(int *)(param_1 + 0x38) << 2,0,param_4);
          lVar4 = lVar4 + local_950;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar8);
      }
    }
    local_938 = &PTR_FUN_145b005f8;
    if (local_918 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_938);
  }
  return 1;
}



// FUNCTION 143322740 FUN_143322740 body=189 status=ok
// SIG undefined FUN_143322740(void)

longlong FUN_143322740(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1[2] != 0) {
    plVar2 = (longlong *)0x0;
    if (*(longlong *)(param_1[2] + 0x28) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1[2] + 0x28) + 0x10);
    }
    if (plVar2 == param_2) {
      return param_1[2];
    }
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  param_1[2] = 0;
  lVar3 = *param_2;
  uVar1 = (**(code **)(*param_1 + 0x20))();
  lVar3 = (**(code **)(lVar3 + 0x10))(param_2,uVar1,1,param_1 + 7,1,param_1,0);
  FStringTable::SetOwnerAsset(param_1,lVar3);
  return lVar3;
}



// FUNCTION 143322810 FUN_143322810 body=1545 status=ok
// SIG undefined FUN_143322810(void)

undefined4 * FUN_143322810(undefined4 *param_1,byte *param_2,uint param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  byte *pbVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float _Y;
  undefined4 local_res8;
  char local_118;
  char local_116;
  char local_114;
  int local_110;
  uint local_10c;
  byte local_f0 [4];
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  byte *local_b0;
  byte *local_a8;
  ulonglong local_a0;
  
  local_f0[0] = 0;
  if ((param_3 == 0) || (param_2 == (byte *)0x0)) {
    local_f0[0] = 0;
    param_2 = local_f0;
    local_ec = 0xff000000;
    param_3 = 1;
  }
  local_f0[0] = 0;
  pbVar21 = param_2 + 6;
  local_res8._0_2_ = CONCAT11(param_2[5],param_2[6]);
  local_res8._0_3_ = CONCAT12(param_2[4],(undefined2)local_res8);
  local_res8 = CONCAT13(param_2[7],(undefined3)local_res8);
  local_b0 = pbVar21;
  if (param_3 < 2) {
    puVar15 = param_1;
    for (lVar18 = 0x100; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar15 = local_res8;
      puVar15 = puVar15 + 1;
    }
  }
  else {
    uVar11 = (ulonglong)*param_2;
    _Y = 1.0 / param_4;
    uVar13 = uVar11;
    puVar15 = param_1;
    if (*param_2 != 0) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar15 = local_res8;
        puVar15 = puVar15 + 1;
      }
    }
    uVar3 = 0;
    if (1 < param_3) {
      param_2 = param_2 + 0xe;
      local_a8 = param_2;
      local_a0 = (ulonglong)(param_3 - 1);
      do {
        bVar1 = pbVar21[1];
        local_10c = (uint)uVar11;
        uVar3 = (uint)param_2[-6];
        if (param_2[-6] < local_10c) {
          uVar3 = local_10c;
        }
        local_b0 = pbVar21;
        local_a8 = param_2;
        fVar22 = _guard_xfg_dispatch_icall_nop((float)*pbVar21 / 255.0,param_4);
        fVar22 = _guard_xfg_dispatch_icall_nop(fVar22 * 65535.0 + 0.5);
        lVar12 = (longlong)fVar22;
        local_c0 = lVar12;
        fVar22 = _guard_xfg_dispatch_icall_nop((float)pbVar21[-1] / 255.0,param_4);
        fVar22 = _guard_xfg_dispatch_icall_nop(fVar22 * 65535.0 + 0.5);
        local_e8 = (longlong)fVar22;
        fVar23 = _guard_xfg_dispatch_icall_nop((float)pbVar21[-2] / 255.0,param_4);
        fVar23 = _guard_xfg_dispatch_icall_nop(fVar23 * 65535.0 + 0.5);
        local_e0 = (longlong)fVar23;
        bVar2 = param_2[1];
        fVar24 = _guard_xfg_dispatch_icall_nop((float)*param_2 / 255.0,param_4);
        fVar24 = _guard_xfg_dispatch_icall_nop(fVar24 * 65535.0 + 0.5);
        lVar20 = (longlong)fVar24;
        local_d8 = lVar20;
        fVar24 = _guard_xfg_dispatch_icall_nop((float)param_2[-1] / 255.0,param_4);
        fVar24 = _guard_xfg_dispatch_icall_nop(fVar24 * 65535.0 + 0.5);
        lVar18 = (longlong)fVar24;
        local_d0 = lVar18;
        fVar24 = _guard_xfg_dispatch_icall_nop((float)param_2[-2] / 255.0,param_4);
        fVar24 = _guard_xfg_dispatch_icall_nop(fVar24 * 65535.0 + 0.5);
        local_b8 = (longlong)fVar24;
        uVar10 = uVar3 - local_10c;
        uVar9 = (uint)(longlong)fVar24;
        if (param_4 == 1.0) {
          if (local_10c < uVar3) {
            uVar14 = local_10c * 4;
            uVar13 = (ulonglong)uVar10;
            iVar17 = 0;
            iVar7 = 0;
            iVar19 = 0;
            iVar16 = 0;
            do {
              uVar8 = (uVar10 - 1) * 0x100 | uVar10 - 1;
              if ((int)uVar8 < 1) {
                uVar8 = 1;
              }
              local_118 = (char)lVar12;
              local_116 = (char)(longlong)fVar22;
              local_res8._0_2_ =
                   CONCAT11((char)(iVar7 / (int)uVar8) + local_116,
                            (char)(iVar17 / (int)uVar8) + local_118);
              local_114 = (char)(longlong)fVar23;
              local_res8._0_3_ =
                   CONCAT12((char)(iVar19 / (int)uVar8) + local_114,(undefined2)local_res8);
              local_res8 = CONCAT13((char)(iVar16 / (int)uVar8) + bVar1,(undefined3)local_res8);
              *(undefined4 *)((ulonglong)uVar14 + (longlong)param_1) = local_res8;
              uVar14 = uVar14 + 4;
              uVar13 = uVar13 - 1;
              iVar17 = iVar17 + ((uint)(ushort)local_d8 - ((uint)lVar12 & 0xffff));
              iVar7 = iVar7 + ((uint)(ushort)local_d0 - (uint)(ushort)local_e8);
              iVar19 = iVar19 + ((uVar9 & 0xffff) - (uint)(ushort)local_e0);
              iVar16 = iVar16 + ((uint)CONCAT11(bVar2,bVar2) - (uint)CONCAT11(bVar1,bVar1));
            } while (uVar13 != 0);
LAB_143322d19:
            local_10c = local_10c + uVar10;
            uVar11 = (ulonglong)local_10c;
            lVar18 = local_d0;
            lVar20 = local_d8;
          }
        }
        else if (local_10c < uVar3) {
          uVar4 = local_10c * 4;
          uVar14 = uVar10 - 1;
          uVar5 = (uint)(ushort)local_e0;
          uVar6 = (uint)(ushort)local_e8;
          iVar19 = 0;
          uVar8 = (uint)local_c0;
          iVar7 = 0;
          local_c8 = (ulonglong)uVar10;
          local_110 = 0;
          iVar17 = 0;
          do {
            fVar22 = _guard_xfg_dispatch_icall_nop
                               ((float)(ushort)((short)(local_110 / (int)uVar14) + (short)local_c0)
                                / 65535.0,_Y);
            fVar22 = _guard_xfg_dispatch_icall_nop(fVar22 * 255.0 + 0.5);
            fVar23 = _guard_xfg_dispatch_icall_nop
                               ((float)(ushort)((short)(iVar7 / (int)uVar14) + (ushort)local_e8) /
                                65535.0,_Y);
            fVar23 = _guard_xfg_dispatch_icall_nop(fVar23 * 255.0 + 0.5);
            local_res8._0_2_ = CONCAT11((char)(longlong)fVar23,(char)(longlong)fVar22);
            fVar22 = _guard_xfg_dispatch_icall_nop
                               ((float)(ushort)((short)(iVar19 / (int)uVar14) + (ushort)local_e0) /
                                65535.0,_Y);
            fVar22 = _guard_xfg_dispatch_icall_nop(fVar22 * 255.0 + 0.5);
            iVar7 = iVar7 + (((uint)lVar18 & 0xffff) - uVar6);
            iVar19 = iVar19 + ((uVar9 & 0xffff) - uVar5);
            uVar13 = (ulonglong)uVar4;
            uVar4 = uVar4 + 4;
            local_res8._0_3_ = CONCAT12((char)(longlong)fVar22,(undefined2)local_res8);
            local_res8 = CONCAT13((char)(iVar17 / (int)(uVar14 * 0x100 | uVar14)) + bVar1,
                                  (undefined3)local_res8);
            *(undefined4 *)(uVar13 + (longlong)param_1) = local_res8;
            local_110 = local_110 + (((uint)lVar20 & 0xffff) - (uVar8 & 0xffff));
            local_c8 = local_c8 - 1;
            iVar17 = iVar17 + ((uint)CONCAT11(bVar2,bVar2) - (uint)CONCAT11(bVar1,bVar1));
          } while (local_c8 != 0);
          goto LAB_143322d19;
        }
        pbVar21 = local_b0 + 8;
        param_2 = local_a8 + 8;
        local_a0 = local_a0 - 1;
        local_res8._0_2_ = CONCAT11((char)((ulonglong)lVar18 >> 8),(char)((ulonglong)lVar20 >> 8));
        local_res8._0_3_ = CONCAT12((char)((ulonglong)local_b8 >> 8),(undefined2)local_res8);
        local_res8 = CONCAT13(bVar2,(undefined3)local_res8);
        local_b0 = pbVar21;
        local_a8 = param_2;
      } while (local_a0 != 0);
      if (0xff < uVar3) {
        return param_1;
      }
    }
    uVar9 = uVar3 * 4;
    uVar13 = (ulonglong)(0x100 - uVar3);
    do {
      *(undefined4 *)((ulonglong)uVar9 + (longlong)param_1) = local_res8;
      uVar9 = uVar9 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return param_1;
}



// FUNCTION 143322e20 FUN_143322e20 body=191 status=ok
// SIG undefined FUN_143322e20(void)

void FUN_143322e20(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 * param_2;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = fVar2;
  fVar1 = fVar2 - (param_3 * param_3 + param_4 * param_4);
  if (fVar1 == 0.0) {
    if (param_3 != 0.0) {
      if (0.0 <= param_3) {
        param_3 = param_3 - 1.0;
      }
      else {
        param_3 = param_3 + 1.0;
      }
      param_1[1] = param_3;
    }
    if (param_4 != 0.0) {
      if (0.0 <= param_4) {
        param_4 = param_4 - 1.0;
      }
      else {
        param_4 = param_4 + 1.0;
      }
      param_1[2] = param_4;
    }
    fVar1 = fVar2 - (param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  }
  param_1[4] = param_2 / fVar1;
  return;
}



// FUNCTION 143322ef0 FUN_143322ef0 body=185 status=ok
// SIG undefined FUN_143322ef0(void)

float FUN_143322ef0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 4);
  param_3 = param_3 - fVar1;
  param_2 = param_2 - fVar2;
  fVar3 = fVar1 * param_2 - fVar2 * param_3;
  fVar3 = _guard_xfg_dispatch_icall_nop
                    (ABS((param_3 * param_3 + param_2 * param_2) * *(float *)(param_1 + 0xc) -
                         fVar3 * fVar3));
  return (fVar3 + fVar1 * param_3 + fVar2 * param_2) * *(float *)(param_1 + 0x10);
}



// FUNCTION 143322fb0 FUN_143322fb0 body=124 status=ok
// SIG undefined FUN_143322fb0(void)

RefCountImplCore * FUN_143322fb0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b005f8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143323030 FUN_143323030 body=133 status=ok
// SIG undefined FUN_143323030(void)

undefined8 * FUN_143323030(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b00600;
  if (param_1[5] != 0) {
    CPopulation::AcceptNewCitizen(param_1[5],param_1);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  FUN_1432caa70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433230c0 FUN_1433230c0 body=104 status=ok
// SIG undefined FUN_1433230c0(void)

undefined8 FUN_1433230c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_3 + 0x2c) != 0) {
    return 0;
  }
  if (param_2 != param_3[9]) {
    FUN_143323250(param_3 + 9,*param_3,param_2,param_1 + -0x10,param_3 + 0x21,param_3[1]);
  }
  uVar1 = FUN_143323350(param_3 + 9,param_4);
  return uVar1;
}



// FUNCTION 143323130 FUN_143323130 body=50 status=ok
// SIG undefined FUN_143323130(void)

void FUN_143323130(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  if (*(int *)(param_3 + 6) == 0) {
    FUN_1433231c0(param_1 + -0x10,*param_3,param_2,param_3 + 9,param_3 + 0x21);
  }
  return;
}



// FUNCTION 143323170 FUN_143323170 body=63 status=ok
// SIG undefined FUN_143323170(void)

void FUN_143323170(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  if (param_3 != *param_4) {
    FUN_143323250(param_4,param_2,param_3,param_1,param_5,param_6);
  }
  FUN_143323350(param_4,param_7);
  return;
}



// FUNCTION 1433231c0 FUN_1433231c0 body=133 status=ok
// SIG undefined FUN_1433231c0(void)

void FUN_1433231c0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == *param_5) {
    lVar1 = param_5[1];
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    param_5[1] = lVar1;
    *param_5 = param_3;
  }
  if (param_3 == *param_4) {
    lVar2 = param_4[0xb];
    param_5[1] = lVar2;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  }
  if (*(uint *)(param_1 + 0x50) < *(uint *)(param_1 + 0x40)) {
    Scaleform::Render::Primitive::updateMeshIndicies_Impl();
  }
                    /* WARNING: Could not recover jumptable at 0x00014332323e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 400))(param_2,param_1,lVar1,lVar2);
  return;
}



// FUNCTION 143323250 FUN_143323250 body=238 status=ok
// SIG undefined FUN_143323250(void)

void FUN_143323250(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  param_1[1] = param_5;
  puVar1 = param_1 + 9;
  *param_1 = param_3;
  puVar2 = param_1 + 8;
  param_1[3] = param_6;
  param_1[2] = param_2;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x30);
  param_1[6] = lVar3;
  *puVar1 = 0;
  *puVar2 = 0;
  param_1[7] = 0;
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x230))
              (param_2,*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0x10),lVar3,param_1 + 7,
               puVar2,puVar1,0);
    if (param_1[7] != 0) {
      uVar5 = (**(code **)(*(longlong *)param_1[2] + 0x238))((longlong *)param_1[2],param_4);
      *(undefined4 *)(param_1 + 5) = uVar5;
      goto LAB_14332330d;
    }
  }
  param_1[7] = 0;
  *puVar2 = 0;
  *puVar1 = 0;
LAB_14332330d:
  *(undefined4 *)(param_1 + 10) = 0;
  uVar4 = *(undefined8 *)(param_4 + 0x28);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar4;
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 143323350 FUN_143323350 body=647 status=ok
// SIG undefined FUN_143323350(void)

undefined8 FUN_143323350(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  uint local_28;
  
  lVar10 = *(longlong *)(param_1 + 0x20) + 0x20;
  if (*(longlong *)(param_1 + 0x58) != lVar10) {
    do {
      if (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x60)) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x58);
          if (*(longlong *)(lVar1 + 0x20) == 0) {
            if (*(uint *)(*(longlong *)(lVar1 + 0x40) + 0x50) <
                *(uint *)(*(longlong *)(lVar1 + 0x40) + 0x40)) {
              Scaleform::Render::Primitive::updateMeshIndicies_Impl();
            }
            uVar9 = 1;
            if (*(int *)(lVar1 + 0x28) != 2) {
              uVar9 = (ulonglong)*(uint *)(lVar1 + 0x48);
            }
            iStack_38 = (int)uVar9;
            local_40 = (ulonglong *)
                       (*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x38) +
                       (ulonglong)*(uint *)(lVar1 + 0x4c) * 0x10 + 8);
            local_30 = 0x10;
            uStack_34 = 0;
            uVar7 = 0;
            puVar8 = local_40;
            local_28 = 0;
            if (iStack_38 != 0) {
              do {
                uVar2 = *puVar8;
                puVar8 = puVar8 + 2;
                uVar7 = uVar7 ^ uVar2 >> 5;
                local_28 = (uint)uVar7;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            lVar1 = *(longlong *)(param_1 + 0x58);
            if (*(int *)(lVar1 + 0x28) != 4) {
              if (*(int *)(param_1 + 0x50) == 0) {
                plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x98);
                lVar3 = *plVar6;
                if (lVar3 != 0) {
                  lVar5 = FUN_143323bf0(plVar6,&local_40,
                                        *(ulonglong *)(lVar3 + 8) & (ulonglong)local_28);
                  if (-1 < lVar5) {
                    Scaleform::Render::MeshCacheItemUseNode::SetMeshItem
                              (lVar1 + 0x10,*(undefined8 *)(lVar3 + 0x20 + lVar5 * 0x18));
                    goto LAB_1433234aa;
                  }
                }
              }
              cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                                (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                                 lVar1,&local_40,param_2);
              if (cVar4 == '\0') {
                *(undefined4 *)(param_1 + 0x50) = 1;
                return 1;
              }
            }
LAB_1433234aa:
            *(undefined4 *)(param_1 + 0x50) = 0;
            param_2 = 0;
          }
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x20);
          if (lVar1 != 0) {
            lVar3 = *(longlong *)(lVar1 + 0x38);
            *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
            *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
            *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
            plVar6 = (longlong *)(lVar3 + ((longlong)*(int *)(lVar1 + 0x40) + 1) * 0x18);
            *plVar6 = *plVar6 - *(longlong *)(lVar1 + 0x50);
            lVar3 = *(longlong *)(lVar1 + 0x38);
            *(undefined4 *)(lVar1 + 0x40) = 1;
            *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x28);
            *(longlong *)(lVar1 + 8) = lVar3 + 0x18;
            *(longlong *)(*(longlong *)(lVar3 + 0x28) + 8) = lVar1;
            *(longlong *)(lVar3 + 0x28) = lVar1;
            *(longlong *)(lVar3 + 0x30) = *(longlong *)(lVar3 + 0x30) + *(longlong *)(lVar1 + 0x50);
          }
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
          *(longlong *)(param_1 + 0x58) = lVar1;
        } while (lVar1 != *(longlong *)(param_1 + 0x60));
      }
      if (*(char *)(param_1 + 0x70) == '\0') {
        lVar1 = *(longlong *)(param_1 + 0x68);
        while ((lVar1 != lVar10 &&
               (lVar1 = *(longlong *)(param_1 + 0x68), *(int *)(lVar1 + 0x28) != 3))) {
          *(longlong *)(param_1 + 0x60) = lVar1;
          lVar1 = *(longlong *)(lVar1 + 8);
          *(longlong *)(param_1 + 0x68) = lVar1;
        }
        lVar1 = *(longlong *)(param_1 + 0x68);
        if (lVar1 == lVar10) {
          *(longlong *)(param_1 + 0x60) = lVar1;
        }
        else {
          if (*(uint *)(*(longlong *)(lVar1 + 0x40) + 0x50) <
              *(uint *)(*(longlong *)(lVar1 + 0x40) + 0x40)) {
            Scaleform::Render::Primitive::updateMeshIndicies_Impl();
          }
          if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x48) != 0) {
            *(undefined1 *)(param_1 + 0x70) = 1;
            goto LAB_14332359b;
          }
        }
      }
      else {
LAB_14332359b:
        FUN_143323630(param_1);
      }
    } while (*(longlong *)(param_1 + 0x58) != lVar10);
  }
  return 0;
}



// FUNCTION 143323630 FUN_143323630 body=1140 status=ok
// SIG undefined FUN_143323630(void)

void FUN_143323630(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong *puVar19;
  uint uVar20;
  ulonglong uVar21;
  int local_78;
  int local_70 [2];
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong uVar18;
  
  uVar9 = 0;
  bVar5 = false;
  local_68 = 0;
  uVar20 = 1;
  lVar6 = (**(code **)(*(longlong *)(param_1[3] + 8) + 0x10))();
  piVar10 = (int *)param_1[8];
  uVar16 = *(uint *)(lVar6 + 0x34);
  if (piVar10 == (int *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = *piVar10;
  }
  lVar2 = param_1[0xd];
  lVar15 = param_1[9];
  local_60 = (ulonglong)*(uint *)(lVar2 + 0x4c) * 0x10 +
             *(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x38);
  uVar1 = *(uint *)(lVar2 + 0x48);
  uVar14 = uVar9;
  uVar8 = uVar9;
  local_58 = lVar15;
  local_50 = lVar6;
  if (uVar1 != 0) {
    puVar19 = (ulonglong *)(local_60 + 8);
    uVar18 = uVar9;
    uVar21 = uVar9;
    bVar5 = false;
    do {
      uVar3 = *puVar19;
      uVar17 = (uint)uVar14;
      uVar11 = (uint)uVar9;
      if (uVar3 == uVar8) {
        if (lVar15 == 0) {
          uVar14 = (ulonglong)(uVar17 + 1);
        }
        else {
          if (uVar17 == *(uint *)(param_1 + 5)) break;
          uVar14 = (ulonglong)(uVar17 + 1);
          if (*(uint *)(param_1 + 5) <= uVar17 + 1) {
            uVar9 = (ulonglong)(uVar11 + 1);
            break;
          }
        }
      }
      else {
        if ((lVar15 != 0) && (uVar16 <= uVar17)) break;
        uVar14 = 1;
      }
      if (((*(int *)(uVar3 + 0x48) == 0) &&
          (FUN_1432f7230(param_1[3],local_70,param_1[2],uVar3,param_1[6],param_1[7],piVar10,0),
          uVar8 = local_68, lVar6 = local_50, lVar15 = local_58, 1 < local_70[0])) &&
         (local_70[0] != 3)) {
        if (local_70[0] == 5) {
          bVar5 = true;
        }
        else if (local_70[0] == 7) goto LAB_1433237de;
        uVar20 = 4;
      }
LAB_1433237de:
      if (((*(char *)(uVar3 + 0xd0) != '\0') || (uVar20 == 4)) ||
         (piVar10 = (int *)param_1[8], piVar10 == (int *)0x0)) {
        uVar16 = 1;
        uVar9 = (ulonglong)(uVar11 + 1);
        uVar8 = 1;
        goto LAB_143323718;
      }
      uVar17 = (int)uVar18 + *(int *)(uVar3 + 0x48);
      uVar18 = (ulonglong)uVar17;
      if (((*(uint *)(lVar6 + 0x40) < uVar17) ||
          (uVar17 = (int)uVar21 + *(int *)(uVar3 + 0x44) * local_78, uVar21 = (ulonglong)uVar17,
          *(uint *)(lVar6 + 0x3c) < uVar17)) || (*(uint *)(param_1 + 5) <= uVar11)) {
        uVar11 = (uint)uVar14 - 1;
        if (uVar3 != uVar8) {
          uVar11 = (uint)uVar14;
        }
        uVar14 = (ulonglong)uVar11;
        break;
      }
      uVar9 = (ulonglong)(uVar11 + 1);
      puVar19 = puVar19 + 2;
      uVar8 = uVar3;
      local_68 = uVar3;
    } while (uVar11 + 1 < uVar1);
    uVar8 = 0;
  }
LAB_143323718:
  uVar13 = (uint)uVar14;
  uVar11 = (uint)uVar9;
  uVar17 = uVar11;
  if (lVar15 == 0) {
    if (1 < uVar13) {
      uVar13 = 0;
    }
  }
  else {
    while (uVar17 < *(uint *)(param_1[0xd] + 0x48)) {
      uVar13 = (uint)uVar14;
      uVar17 = (uint)uVar9;
      if ((*(longlong *)(local_60 + 8 + uVar9 * 0x10) !=
           *(longlong *)(local_60 + 8 + (ulonglong)(uVar11 - 1) * 0x10)) ||
         (*(uint *)(param_1 + 5) <= uVar13)) break;
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar17 = uVar17 + 1;
      uVar9 = (ulonglong)uVar17;
    }
  }
  if ((uVar13 < uVar16) && ((uVar17 != uVar13 || (uVar13 == 1)))) {
    uVar13 = 0;
    uVar17 = uVar11;
  }
  iVar12 = uVar17 - uVar13;
  if (iVar12 != 0) {
    lVar6 = param_1[0xd];
    if ((uVar17 == *(uint *)(lVar6 + 0x48)) && (uVar13 == 0)) {
      *(undefined4 *)(lVar6 + 0x28) = 1;
      if (param_1[0xc] != param_1[0xd]) {
        FUN_143323ab0();
      }
      if (*(longlong *)(param_1[0xd] + 8) != param_1[4] + 0x20) {
        FUN_143323ab0();
      }
      plVar7 = (longlong *)param_1[0xd];
    }
    else {
      plVar7 = (longlong *)
               FUN_1432d3160(*(undefined8 *)(lVar6 + 0x40),1,*(undefined4 *)(lVar6 + 0x4c),iVar12);
      plVar4 = (longlong *)param_1[0xd];
      plVar7[1] = *(longlong *)plVar4[1];
      *plVar7 = *plVar4;
      *(longlong **)(*plVar4 + 8) = plVar7;
      *plVar4 = (longlong)plVar7;
      *(int *)(param_1[0xd] + 0x4c) = *(int *)(param_1[0xd] + 0x4c) + iVar12;
      *(int *)(param_1[0xd] + 0x48) = *(int *)(param_1[0xd] + 0x48) - iVar12;
      plVar4 = (longlong *)param_1[1];
      if ((*param_1 == *plVar4) && (plVar4[1] == param_1[0xd])) {
        plVar4[1] = (longlong)plVar7;
      }
      if (param_1[0xb] == param_1[0xd]) {
        param_1[0xb] = (longlong)plVar7;
      }
    }
    if ((int)plVar7[9] == 1) {
      *(undefined4 *)(plVar7 + 5) = 0;
      plVar7[6] = param_1[7];
      param_1[0xc] = param_1[0xd];
    }
    else {
      plVar7[6] = param_1[8];
      param_1[0xc] = param_1[0xd];
    }
  }
  if (uVar13 != 0) {
    if ((uVar13 < 2) || (uVar20 == 4)) {
      if (!bVar5) {
        uVar20 = 0;
      }
    }
    else {
      uVar20 = 2;
    }
    plVar7 = (longlong *)
             FUN_1432d3160(*(undefined8 *)(param_1[0xd] + 0x40),uVar20,
                           *(undefined4 *)(param_1[0xd] + 0x4c),uVar13);
    *(char *)(plVar7 + 7) = (char)uVar8;
    if (uVar20 == 2) {
      plVar7[6] = param_1[9];
    }
    else if ((uVar20 & 0xfffffffb) == 0) {
      plVar7[6] = param_1[7];
    }
    plVar4 = (longlong *)param_1[0xd];
    plVar7[1] = *(longlong *)plVar4[1];
    *plVar7 = *plVar4;
    *(longlong **)(*plVar4 + 8) = plVar7;
    *plVar4 = (longlong)plVar7;
    *(int *)(param_1[0xd] + 0x4c) = *(int *)(param_1[0xd] + 0x4c) + uVar13;
    *(int *)(param_1[0xd] + 0x48) = *(int *)(param_1[0xd] + 0x48) - uVar13;
    plVar4 = (longlong *)param_1[1];
    if ((*param_1 == *plVar4) && (plVar4[1] == param_1[0xd])) {
      plVar4[1] = (longlong)plVar7;
    }
    if (param_1[0xb] == param_1[0xd]) {
      param_1[0xb] = (longlong)plVar7;
    }
    if (*(int *)(param_1[0xd] + 0x48) == 0) {
      FUN_1432d31d0();
      param_1[0xd] = (longlong)plVar7;
    }
    param_1[0xc] = (longlong)plVar7;
  }
  if (uVar1 <= uVar17) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143323ab0 FUN_143323ab0 body=316 status=ok
// SIG undefined FUN_143323ab0(void)

ulonglong FUN_143323ab0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,int *param_6,int *param_7)

{
  longlong *plVar1;
  ulonglong in_RAX;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int local_res20 [2];
  uint local_38 [4];
  
  if (((*(char *)(param_4 + 0x38) == '\0') && (param_1[8] != 0)) && (*(uint *)(param_4 + 0x28) < 2))
  {
    piVar2 = (int *)(**(code **)(*(longlong *)(param_1[3] + 8) + 0x10))();
    uVar4 = *(int *)(param_2 + 0x48) + *(int *)(param_3 + 0x48);
    piVar3 = piVar2;
    if (uVar4 <= *(uint *)(param_1 + 5)) {
      FUN_1432d3250(param_4,local_res20,local_38);
      piVar3 = (int *)param_1[8];
      if (((uint)(*(int *)param_1[8] * local_res20[0] + *param_6) <= (uint)piVar2[0xf]) &&
         (piVar3 = (int *)(ulonglong)local_38[0], *param_7 + local_38[0] <= (uint)piVar2[0x10])) {
        *(uint *)(param_5 + 0x48) = uVar4;
        *(undefined4 *)(param_5 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(param_5 + 0x28) = 1;
        Scaleform::Render::PrimitiveBatch::ClearCacheItem(param_5);
        FUN_1432d31d0(param_4);
        plVar1 = (longlong *)param_1[1];
        if ((*param_1 == *plVar1) && (plVar1[1] == param_2)) {
          plVar1[1] = param_5;
        }
        if (param_1[0xb] == param_2) {
          param_1[0xb] = param_5;
        }
        param_1[0xd] = param_5;
        *param_6 = *param_6 + *(int *)param_1[8] * local_res20[0];
        *param_7 = *param_7 + local_38[0];
        *(undefined1 *)(param_1 + 0xe) = 0;
        piVar3 = (int *)(ulonglong)local_38[0];
      }
    }
    return (ulonglong)piVar3 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143323bf0 FUN_143323bf0 body=210 status=ok
// SIG undefined FUN_143323bf0(void)

longlong FUN_143323bf0(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *param_1 + 0x10;
  plVar4 = (longlong *)(lVar5 + param_3 * 0x18);
  if ((*(longlong *)(lVar5 + param_3 * 0x18) != -2) && (lVar5 = param_3, plVar4[1] == param_3)) {
    while( true ) {
      if (plVar4[1] == param_3) {
        uVar1 = *(uint *)(plVar4[2] + 0x58);
        if (uVar1 == *(uint *)(param_2 + 1)) {
          uVar3 = 0;
          if (uVar1 == 0) {
            return lVar5;
          }
          while (*(longlong *)(*(longlong *)(plVar4[2] + 0x48) + uVar3 * 8) ==
                 *(longlong *)(param_2[2] * uVar3 + *param_2)) {
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            if (uVar1 <= uVar2) {
              return lVar5;
            }
          }
        }
      }
      lVar5 = *plVar4;
      if (lVar5 == -1) break;
      plVar4 = (longlong *)(*param_1 + 0x10 + lVar5 * 0x18);
    }
    return -1;
  }
  return -1;
}



// FUNCTION 143323cd0 ClearCacheItem body=55 status=ok
// SIG undefined ClearCacheItem(void)

void Scaleform::Render::PrimitiveBatch::ClearCacheItem(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 0x18);
    **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143323d10 FUN_143323d10 body=3 status=ok
// SIG undefined FUN_143323d10(void)

void FUN_143323d10(void)

{
  return;
}



// FUNCTION 143323d20 RenderQueue body=19 status=ok
// SIG undefined RenderQueue(void)

undefined4 * Scaleform::Render::RenderQueue::RenderQueue(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 143323d40 ~RenderQueue body=45 status=ok
// SIG undefined ~RenderQueue(void)

void Scaleform::Render::RenderQueue::~RenderQueue(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 143323d80 FUN_143323d80 body=116 status=ok
// SIG undefined FUN_143323d80(void)

ulonglong FUN_143323d80(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar5;
  ulonglong uVar4;
  
  if (1 < param_2) {
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_2 << 4,0);
    *(longlong *)(param_1 + 2) = lVar2;
    *param_1 = (uint)param_2;
    in_RAX = 0;
    if (lVar2 != 0) {
      uVar4 = 0;
      uVar3 = uVar4;
      if ((uint)param_2 != 0) {
        do {
          uVar1 = (int)uVar3 + 1;
          uVar4 = (ulonglong)uVar1;
          puVar5 = (undefined8 *)(uVar3 * 0x10 + *(longlong *)(param_1 + 2));
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar3 = uVar4;
        } while (uVar1 < *param_1);
      }
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143323e00 ~RenderQueue body=45 status=ok
// SIG undefined ~RenderQueue(void)

void Scaleform::Render::RenderQueue::~RenderQueue(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 143323e40 FUN_143323e40 body=58 status=ok
// SIG undefined FUN_143323e40(void)

longlong FUN_143323e40(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  if (uVar2 < uVar1) {
    if (*param_1 + uVar2 == uVar1 + 1) {
      return 0;
    }
  }
  else if (uVar2 - uVar1 == 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return (ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 2);
}



// FUNCTION 143323e80 FUN_143323e80 body=25 status=ok
// SIG undefined FUN_143323e80(void)

void FUN_143323e80(int *param_1)

{
  int iVar1;
  
  param_1[4] = param_1[4] + 1;
  iVar1 = param_1[4];
  *(undefined1 *)(param_1 + 6) = 0;
  if (iVar1 == *param_1) {
    iVar1 = 0;
  }
  param_1[4] = iVar1;
  return;
}



// FUNCTION 143323ef0 FUN_143323ef0 body=150 status=ok
// SIG undefined FUN_143323ef0(void)

undefined8 * FUN_143323ef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 9,0,0xc0);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[9] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 143323f90 FUN_143323f90 body=3 status=ok
// SIG undefined FUN_143323f90(void)

void FUN_143323f90(void)

{
  return;
}



// FUNCTION 143323fa0 FUN_143323fa0 body=77 status=ok
// SIG undefined FUN_143323fa0(void)

void FUN_143323fa0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x130))();
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  *(undefined4 *)(param_1 + 5) = uVar1;
  FUN_1432f6cb0(plVar2,param_1 + 1);
  uVar1 = *(undefined4 *)(param_1[4] + 0x14);
  param_1[7] = param_1[4];
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 143324000 FUN_143324000 body=113 status=ok
// SIG undefined FUN_143324000(void)

void FUN_143324000(longlong param_1)

{
  FUN_143324080();
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x48),0,0xc0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}


