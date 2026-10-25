// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433593a0 FUN_1433593a0 body=166 status=ok
// SIG undefined FUN_1433593a0(void)

ulonglong FUN_1433593a0(longlong param_1,void *param_2,int param_3)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x30) & 0xfffffffd) != 0) {
    fflush(*(FILE **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x30) = 2;
  sVar1 = fwrite(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x20));
  if ((int)sVar1 < param_3) {
    piVar2 = _errno();
    if (*piVar2 == 2) {
      iVar3 = 0x1001;
    }
    else {
      piVar2 = _errno();
      if ((*piVar2 == 0xd) || (piVar2 = _errno(), *piVar2 == 1)) {
        iVar3 = 0x1002;
      }
      else {
        piVar2 = _errno();
        iVar3 = (*piVar2 == 0x1c) + 0x1003;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar3;
    return sVar1 & 0xffffffff;
  }
  return sVar1;
}



// FUNCTION 143359450 FUN_143359450 body=163 status=ok
// SIG undefined FUN_143359450(void)

ulonglong FUN_143359450(longlong param_1,void *param_2,int param_3)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  
  if (1 < *(uint *)(param_1 + 0x30)) {
    fflush(*(FILE **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  sVar1 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x20));
  if ((int)sVar1 < param_3) {
    piVar2 = _errno();
    if (*piVar2 == 2) {
      iVar3 = 0x1001;
    }
    else {
      piVar2 = _errno();
      if ((*piVar2 == 0xd) || (piVar2 = _errno(), *piVar2 == 1)) {
        iVar3 = 0x1002;
      }
      else {
        piVar2 = _errno();
        iVar3 = (*piVar2 == 0x1c) + 0x1003;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar3;
    return sVar1 & 0xffffffff;
  }
  return sVar1;
}



// FUNCTION 143359500 FUN_143359500 body=99 status=ok
// SIG undefined FUN_143359500(void)

longlong FUN_143359500(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1,(longlong)param_2,1);
  if ((lVar1 != -1) && (lVar2 != -1)) {
    return lVar2 - lVar1;
  }
  return 0xffffffff;
}



// FUNCTION 143359570 BytesAvailable body=173 status=ok
// SIG undefined BytesAvailable(void)

longlong Scaleform::FILEFile::BytesAvailable(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  lVar2 = (**(code **)(*param_1 + 0x38))();
  if ((lVar1 != -1) && (lVar2 != -1)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    return lVar2 - lVar1;
  }
  piVar3 = _errno();
  if (*piVar3 == 2) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x1001;
    return 0;
  }
  piVar3 = _errno();
  if (*piVar3 != 0xd) {
    piVar3 = _errno();
    if (*piVar3 != 1) {
      piVar3 = _errno();
      *(uint *)((longlong)param_1 + 0x2c) = (*piVar3 == 0x1c) + 0x1003;
      return 0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x1002;
  return 0;
}



// FUNCTION 143359630 Listen body=24 status=ok
// SIG undefined Listen(void)

bool FSocketBSD::Listen(longlong param_1)

{
  int iVar1;
  
  iVar1 = fflush(*(FILE **)(param_1 + 0x20));
  return iVar1 == 0;
}



// FUNCTION 143359650 FUN_143359650 body=125 status=ok
// SIG undefined FUN_143359650(void)

undefined8 FUN_143359650(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (param_3 == 0) {
LAB_143359684:
    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (param_2 == iVar1) goto LAB_1433596b4;
  }
  else if (param_3 == 1) {
    iVar2 = 1;
  }
  else {
    if (param_3 != 2) goto LAB_143359684;
    iVar2 = 2;
  }
  iVar2 = fseek((FILE *)param_1[4],param_2,iVar2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
LAB_1433596b4:
                    /* WARNING: Could not recover jumptable at 0x0001433596c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  return uVar3;
}



// FUNCTION 1433596e0 LSeek body=17 status=ok
// SIG undefined LSeek(void)

longlong FGFxFile::LSeek(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  return (longlong)iVar1;
}



// FUNCTION 143359710 FUN_143359710 body=168 status=ok
// SIG undefined FUN_143359710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143359710(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4018 [16376];
  undefined8 uStack_20;
  
  uStack_20 = 0x143359724;
  iVar4 = 0;
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    do {
      iVar3 = param_3;
      if (0x4000 < param_3) {
        iVar3 = 0x4000;
      }
      iVar1 = (**(code **)(*param_2 + 0x50))(param_2,local_4018,iVar3);
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = (**(code **)(*param_1 + 0x48))(param_1,local_4018);
      }
      iVar4 = iVar4 + iVar2;
      param_3 = param_3 - iVar2;
    } while ((iVar3 <= iVar2) && (param_3 != 0));
  }
  return iVar4;
}



// FUNCTION 1433597c0 FUN_1433597c0 body=140 status=ok
// SIG undefined FUN_1433597c0(void)

undefined4 FUN_1433597c0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fclose(*(FILE **)(param_1 + 0x20));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return 1;
  }
  piVar2 = _errno();
  if (*piVar2 == 2) {
    *(undefined4 *)(param_1 + 0x2c) = 0x1001;
    return 0;
  }
  piVar2 = _errno();
  if (*piVar2 != 0xd) {
    piVar2 = _errno();
    if (*piVar2 != 1) {
      piVar2 = _errno();
      *(uint *)(param_1 + 0x2c) = (*piVar2 == 0x1c) + 0x1003;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x1002;
  return 0;
}



// FUNCTION 143359860 FUN_143359860 body=485 status=ok
// SIG undefined FUN_143359860(void)

void FUN_143359860(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  wchar_t *_Filename;
  int *piVar6;
  undefined *puVar7;
  bool bVar8;
  UINT local_resc;
  wchar_t local_48 [16];
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      puVar7 = &DAT_145b01574;
      if ((uVar1 & 2) == 0) {
        puVar7 = &DAT_145af4754;
      }
    }
    else {
      puVar7 = &DAT_145b0156c;
      if ((uVar1 & 1) == 0) {
        puVar7 = &DAT_145b01570;
      }
    }
  }
  else {
    puVar7 = &DAT_145b01568;
    if ((uVar1 & 1) == 0) {
      puVar7 = &DAT_145af472c;
    }
  }
  uVar3 = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  pcVar4 = (char *)(uVar3 + 0xc);
  if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) || (*(char *)(uVar3 + 0xd) != ':')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    local_resc = SetErrorMode(1);
  }
  FUN_1432c6f90(param_1 + 0x10);
  lVar5 = FUN_143305cd0((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc,
                        0xffffffffffffffff);
  _Filename = (wchar_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(lVar5 + 1) * 2,0);
  FUN_143306bc0(_Filename,lVar5 + 1,(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc,
                0xffffffffffffffff);
  FUN_143306bc0(local_48,0x10,puVar7);
  _wfopen_s((FILE **)(param_1 + 0x20),_Filename,local_48);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Filename);
  if (*(FILE **)(param_1 + 0x20) != (FILE *)0x0) {
    rewind(*(FILE **)(param_1 + 0x20));
  }
  bVar8 = *(longlong *)(param_1 + 0x20) != 0;
  *(bool *)(param_1 + 0x18) = bVar8;
  if (bVar8) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    piVar6 = _errno();
    if (*piVar6 == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 0x1001;
    }
    else {
      piVar6 = _errno();
      if ((*piVar6 == 0xd) || (piVar6 = _errno(), *piVar6 == 1)) {
        *(undefined4 *)(param_1 + 0x2c) = 0x1002;
      }
      else {
        piVar6 = _errno();
        *(uint *)(param_1 + 0x2c) = (*piVar6 == 0x1c) + 0x1003;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (bVar2) {
    SetErrorMode(local_resc);
  }
  return;
}



// FUNCTION 143359a50 FUN_143359a50 body=139 status=ok
// SIG undefined FUN_143359a50(void)

undefined8 * FUN_143359a50(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145b014c8;
    *(undefined4 *)(puVar1 + 1) = 1;
    FUN_1432c31e0(puVar1 + 2,param_1);
    *(undefined4 *)(puVar1 + 5) = param_2;
    FUN_143359860(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143359af0 FUN_143359af0 body=97 status=ok
// SIG undefined FUN_143359af0(void)

void FUN_143359af0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
  if (lVar1 != 0) {
    FUN_1433590b0(lVar1,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 143359b60 FUN_143359b60 body=169 status=ok
// SIG undefined FUN_143359b60(void)

RefCountImplCore * FUN_143359b60(RefCountImplCore *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b014c8;
  if (param_1[0x18] != (RefCountImplCore)0x0) {
    FUN_1433597c0();
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143359c60 FUN_143359c60 body=155 status=ok
// SIG undefined FUN_143359c60(void)

undefined8 * FUN_143359c60(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  uVar3 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b01578;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      local_res8[0] = 2;
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x2080,local_res8);
      if (lVar2 != 0) {
        uVar3 = FUN_14335a140(lVar2,param_2);
      }
      param_1[2] = uVar3;
    }
  }
  return param_1;
}



// FUNCTION 143359d10 FUN_143359d10 body=134 status=ok
// SIG undefined FUN_143359d10(void)

void FUN_143359d10(RefCountImplCore *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_145b01578;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(int *)(puVar1 + 2) != 0) {
      iVar2 = (**(code **)(*(longlong *)*puVar1 + 0x20))();
      (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,iVar2 - *(int *)(puVar1 + 2),0)
      ;
    }
    inflateEnd(*(longlong *)(param_1 + 0x10) + 8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143359df0 LTell body=17 status=ok
// SIG undefined LTell(void)

longlong Scaleform::GFx::ZLibFile::LTell(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  return (longlong)iVar1;
}



// FUNCTION 143359e10 GetLength body=92 status=ok
// SIG undefined GetLength(void)

undefined4 Scaleform::GFx::ZLibFile::GetLength(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x6c) == 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0x70);
    uVar3 = (**(code **)(*param_1 + 0x70))(param_1,0,2);
    (**(code **)(*param_1 + 0x70))(param_1,uVar1,0);
    return uVar3;
  }
  return 0;
}



// FUNCTION 143359e80 LGetLength body=17 status=ok
// SIG undefined LGetLength(void)

longlong Scaleform::GFx::ZLibFile::LGetLength(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  return (longlong)iVar1;
}



// FUNCTION 143359f10 BytesAvailable body=94 status=ok
// SIG undefined BytesAvailable(void)

int Scaleform::GFx::ZLibFile::BytesAvailable(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x6c) == 0)) {
    iVar1 = *(int *)(lVar2 + 0x70);
    iVar3 = (**(code **)(*param_1 + 0x70))(param_1,0,2);
    (**(code **)(*param_1 + 0x70))(param_1,iVar1,0);
    return iVar3 - iVar1;
  }
  return 0;
}



// FUNCTION 143359f90 FUN_143359f90 body=121 status=ok
// SIG undefined FUN_143359f90(void)

undefined4 FUN_143359f90(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar1 + 0x6c) != 0) {
    return *(undefined4 *)(lVar1 + 0x70);
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) goto LAB_143359ff7;
      FUN_14335a580(lVar1,0x7fffffff);
      if (param_2 == 0) goto LAB_143359ff7;
      lVar1 = *(longlong *)(param_1 + 0x10);
    }
    param_2 = param_2 + *(int *)(lVar1 + 0x70);
  }
  FUN_14335a580(lVar1,param_2);
LAB_143359ff7:
  return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x70);
}



// FUNCTION 14335a010 LSeek body=17 status=ok
// SIG undefined LSeek(void)

longlong FGFxFile::LSeek(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  return (longlong)iVar1;
}



// FUNCTION 14335a050 FUN_14335a050 body=169 status=ok
// SIG undefined FUN_14335a050(void)

ulonglong FUN_14335a050(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong in_RAX;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(int *)(puVar1 + 2) != 0) {
    iVar2 = (**(code **)(*(longlong *)*puVar1 + 0x20))();
    (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,iVar2 - *(int *)(puVar1 + 2),0);
  }
  iVar2 = inflateEnd(*(longlong *)(param_1 + 0x10) + 8);
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x98))();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return (ulonglong)(iVar2 == 0);
}



// FUNCTION 14335a140 FUN_14335a140 body=198 status=ok
// SIG undefined FUN_14335a140(void)

undefined8 * FUN_14335a140(undefined8 *param_1,RefCountImpl *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)*param_1 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)*param_1);
  }
  *param_1 = param_2;
  uVar1 = (**(code **)(*(longlong *)param_2 + 0x20))(param_2);
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[7] = &LAB_14335a100;
  param_1[8] = &LAB_14335a130;
  param_1[9] = param_1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  iVar2 = inflateInit_(param_1 + 1,"1.2.7",0x58);
  if (iVar2 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
    return param_1;
  }
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14335a210 FUN_14335a210 body=89 status=ok
// SIG undefined FUN_14335a210(void)

undefined8 FUN_14335a210(undefined8 param_1,ulonglong param_2)

{
  FUN_143359d10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14335a270 FUN_14335a270 body=494 status=ok
// SIG undefined FUN_14335a270(void)

int FUN_14335a270(longlong param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 100)) {
    iVar9 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x70);
    iVar3 = iVar9;
    if (param_3 < iVar9) {
      iVar3 = param_3;
    }
    iVar2 = iVar3;
    if (*(int *)(param_1 + 0x74) < iVar9) {
      iVar6 = (*(int *)(param_1 + 0x78) - iVar9) + *(int *)(param_1 + 0x74);
      iVar2 = *(int *)(param_1 + 0x78) - iVar6;
      iVar4 = iVar3;
      if (iVar2 <= iVar3) {
        iVar4 = iVar2;
      }
      _guard_xfg_dispatch_icall_nop
                (param_2,(void *)(param_1 + 0x7c + (longlong)iVar6),(longlong)iVar4);
      iVar2 = iVar3 - iVar4;
      iVar9 = iVar9 - iVar4;
      param_2 = (void *)((longlong)param_2 + (longlong)iVar4);
    }
    if (0 < iVar2) {
      _guard_xfg_dispatch_icall_nop
                (param_2,(void *)(param_1 + 0x7c + (longlong)(*(int *)(param_1 + 0x74) - iVar9)),
                 (longlong)iVar2);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
    }
    param_3 = param_3 - iVar3;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar3;
  }
  if (0 < param_3) {
    iVar9 = FUN_14335a460(param_1,param_2,param_3);
    if (iVar9 < 0x1000) {
      if (0 < iVar9) {
        iVar4 = 0x1000 - *(int *)(param_1 + 0x74);
        iVar2 = iVar9;
        if (iVar4 < iVar9) {
          iVar2 = iVar4;
        }
        if (0 < iVar2) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1 + 0x7c + (longlong)*(int *)(param_1 + 0x74)),param_2,
                     (longlong)iVar2);
          param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar2;
        }
        if (iVar2 < iVar9) {
          *(int *)(param_1 + 0x74) = iVar9 - iVar2;
          _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x7c),param_2,(longlong)(iVar9 - iVar2));
        }
        if (*(int *)(param_1 + 0x78) < 0x1000) {
          iVar2 = *(int *)(param_1 + 0x78) + iVar9;
          if (0x1000 < iVar2) {
            iVar2 = 0x1000;
          }
          *(int *)(param_1 + 0x78) = iVar2;
        }
      }
      iVar3 = iVar9 + iVar3;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 100);
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 0x1000;
      *(undefined4 *)(param_1 + 0x78) = 0x1000;
      lVar8 = 0x20;
      puVar5 = (undefined8 *)((longlong)(iVar9 + -0x1000) + (longlong)param_2);
      puVar7 = (undefined8 *)(param_1 + 0x7c);
      do {
        uVar1 = puVar5[1];
        *puVar7 = *puVar5;
        puVar7[1] = uVar1;
        uVar1 = puVar5[3];
        puVar7[2] = puVar5[2];
        puVar7[3] = uVar1;
        uVar1 = puVar5[5];
        puVar7[4] = puVar5[4];
        puVar7[5] = uVar1;
        uVar1 = puVar5[7];
        puVar7[6] = puVar5[6];
        puVar7[7] = uVar1;
        uVar1 = puVar5[9];
        puVar7[8] = puVar5[8];
        puVar7[9] = uVar1;
        uVar1 = puVar5[0xb];
        puVar7[10] = puVar5[10];
        puVar7[0xb] = uVar1;
        uVar1 = puVar5[0xd];
        puVar7[0xc] = puVar5[0xc];
        puVar7[0xd] = uVar1;
        uVar1 = puVar5[0xf];
        puVar7[0xe] = puVar5[0xe];
        puVar7[0xf] = uVar1;
        lVar8 = lVar8 + -1;
        puVar5 = puVar5 + 0x10;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
      iVar3 = iVar9 + iVar3;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 100);
    }
  }
  return iVar3;
}



// FUNCTION 14335a460 FUN_14335a460 body=157 status=ok
// SIG undefined FUN_14335a460(void)

int FUN_14335a460(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    return 0;
  }
  param_1[3] = param_2;
  *(int *)(param_1 + 4) = param_3;
  do {
    if (*(int *)(param_1 + 2) == 0) {
      iVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))
                        ((longlong *)*param_1,(longlong)param_1 + 0x107c,0x1000);
      if (iVar1 == 0) break;
      param_1[1] = (longlong)param_1 + 0x107c;
      *(int *)(param_1 + 2) = iVar1;
    }
    iVar1 = FUN_14369eec0(param_1 + 1,2);
    if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      break;
    }
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
      break;
    }
  } while (*(int *)(param_1 + 4) != 0);
  *(int *)((longlong)param_1 + 100) =
       *(int *)((longlong)param_1 + 100) + (param_3 - *(int *)(param_1 + 4));
  return param_3 - *(int *)(param_1 + 4);
}



// FUNCTION 14335a500 FUN_14335a500 body=118 status=ok
// SIG undefined FUN_14335a500(void)

void FUN_14335a500(undefined8 *param_1)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  iVar1 = inflateReset(param_1 + 1);
  if (iVar1 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
    return;
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,*(undefined4 *)(param_1 + 0xc),0)
  ;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 14335a580 FUN_14335a580 body=140 status=ok
// SIG undefined FUN_14335a580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14335a580(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_1008 [4088];
  undefined8 uStack_10;
  
  uStack_10 = 0x14335a590;
  iVar2 = *(int *)(param_1 + 100);
  if (param_2 < iVar2) {
    if (iVar2 - *(int *)(param_1 + 0x78) <= param_2) {
      *(int *)(param_1 + 0x70) = param_2;
      return param_2;
    }
    FUN_14335a500();
  }
  else if (iVar2 < param_2) {
    *(int *)(param_1 + 0x70) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x70);
  while (iVar2 < param_2) {
    iVar1 = param_2 - *(int *)(param_1 + 0x70);
    iVar2 = 0x1000;
    if (iVar1 < 0x1000) {
      iVar2 = iVar1;
    }
    iVar2 = FUN_14335a270(param_1,local_1008,iVar2);
    if (iVar2 == 0) break;
    iVar2 = *(int *)(param_1 + 0x70);
  }
  return *(int *)(param_1 + 0x70);
}



// FUNCTION 14335a610 FUN_14335a610 body=115 status=ok
// SIG undefined FUN_14335a610(void)

undefined8 FUN_14335a610(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38[0] = 0;
  local_20 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_18 = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))(0,param_2,local_38);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14335a690 FUN_14335a690 body=440 status=ok
// SIG undefined FUN_14335a690(void)

undefined1 FUN_14335a690(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 local_res18 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar9 = (longlong *)0x0;
  local_58 = &local_48;
  local_68 = 0;
  local_60 = 0x10000;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  bVar1 = false;
  local_38 = 0;
  local_30 = 0;
  iVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  if (iVar5 == 2) {
    uVar7 = (**(code **)(*param_3 + 0x48))();
    cVar3 = FUN_1432cb5f0(uVar7);
    if (cVar3 != '\0') {
      Scaleform::Render::RawImage::GetImageData(uVar7,&local_68);
LAB_14335a7b6:
      uVar4 = (**(code **)(*param_2 + 0x20))(param_2,param_1,&local_68,param_4);
      if (bVar1) {
        (**(code **)(*param_3 + 0x90))(param_3);
      }
      goto LAB_14335a7e3;
    }
LAB_14335a74d:
    uVar7 = (**(code **)(*param_3 + 0x28))(param_3,local_res18);
    uVar6 = (**(code **)(*param_3 + 0x20))(param_3);
    plVar9 = (longlong *)FUN_1432cb620(uVar6,1,uVar7,0,0,0);
    if (plVar9 != (longlong *)0x0) {
      Scaleform::Render::RawImage::GetImageData(plVar9,&local_68);
      cVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_68,&LAB_1432caa10,0);
      if (cVar3 != '\0') goto LAB_14335a7b6;
    }
  }
  else {
    uVar8 = (**(code **)(*param_3 + 0x60))(param_3);
    if ((uVar8 & 0x40) == 0) goto LAB_14335a74d;
    cVar3 = (**(code **)(*param_3 + 0x88))(param_3,&local_68,0,0);
    if (cVar3 != '\0') {
      bVar1 = true;
      goto LAB_14335a7b6;
    }
  }
  uVar4 = 0;
LAB_14335a7e3:
  Scaleform::Render::ImageData::freePlanes(&local_68);
  lVar2 = local_50;
  if (local_50 != 0) {
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_50,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return uVar4;
}



// FUNCTION 14335a850 FUN_14335a850 body=208 status=ok
// SIG undefined FUN_14335a850(void)

undefined8 * FUN_14335a850(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  local_res18[1] = param_4;
  uVar4 = 0;
  *param_1 = &PTR_FUN_145af8e78;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    puVar6 = local_res10;
    local_res10[0] = param_2;
    do {
      lVar2 = *(longlong *)(puVar6 + 2);
      puVar6 = puVar6 + 2;
      if (lVar2 != 0) {
        uVar3 = param_1[2] + 1;
        if (uVar3 < (ulonglong)param_1[2]) {
          uVar5 = uVar3;
          if (uVar3 < (ulonglong)param_1[3] >> 1) {
LAB_14335a8db:
            FUN_1432bc070(param_1 + 1,param_1 + 1,uVar5);
          }
        }
        else if ((ulonglong)param_1[3] < uVar3) {
          uVar5 = (uVar3 >> 2) + uVar3;
          goto LAB_14335a8db;
        }
        param_1[2] = uVar3;
        plVar1 = (longlong *)(param_1[1] + -8 + uVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = lVar2;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_res10[0]);
  }
  return param_1;
}



// FUNCTION 14335a930 FUN_14335a930 body=193 status=ok
// SIG undefined FUN_14335a930(void)

void FUN_14335a930(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar4 * 8) + 8))();
      iVar3 = (**(code **)(*param_2 + 8))(param_2);
      if (iVar2 == iVar3) {
        return;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < *(ulonglong *)(param_1 + 0x10));
  }
  uVar4 = *(longlong *)(param_1 + 0x10) + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x10)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(param_1 + 0x18) >> 1 <= uVar4) goto LAB_14335a9c3;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x18)) goto LAB_14335a9c3;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432bc070(param_1 + 8,param_1 + 8,uVar5);
LAB_14335a9c3:
  *(ulonglong *)(param_1 + 0x10) = uVar4;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + -8 + uVar4 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



// FUNCTION 14335aa00 GetReader body=119 status=ok
// SIG undefined GetReader(void)

undefined8 Scaleform::Render::ImageFileHandlerRegistry::GetReader(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    do {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar3 * 8) + 0x10))();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar3 * 8) + 8))();
        if (iVar2 == param_2) {
          return *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 14335aa80 FUN_14335aa80 body=119 status=ok
// SIG undefined FUN_14335aa80(void)

undefined8 FUN_14335aa80(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    do {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar3 * 8) + 0x18))();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar3 * 8) + 8))();
        if (iVar2 == param_2) {
          return *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 14335ab00 FUN_14335ab00 body=170 status=ok
// SIG undefined FUN_14335ab00(void)

undefined8
FUN_14335ab00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  puVar5 = &local_res8;
  if (param_2 != (undefined8 *)0x0) {
    puVar5 = param_2;
  }
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar4 * 8) + 0x10))();
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar4 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3,param_4,param_5);
        if (cVar2 != '\0') {
          *puVar5 = plVar1;
          uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
          return uVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x10));
  }
  *puVar5 = 0;
  return 1;
}



// FUNCTION 14335abb0 FUN_14335abb0 body=151 status=ok
// SIG undefined FUN_14335abb0(void)

undefined8 FUN_14335abb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + uVar4 * 8) + 0x10))();
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar4 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,0,0);
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
          return uVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 14335ac50 FUN_14335ac50 body=43 status=ok
// SIG undefined FUN_14335ac50(void)

undefined8 * FUN_14335ac50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01620;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14335ac80 FUN_14335ac80 body=240 status=ok
// SIG undefined FUN_14335ac80(void)

bool FUN_14335ac80(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong local_28 [4];
  
  FUN_1433cf290(local_28);
  if (local_28[0] == 0) {
    return false;
  }
  cVar1 = *(char *)(local_28[0] + 1);
  cVar2 = *(char *)(local_28[0] + 2);
  uVar5 = *(ushort *)(local_28[0] + 0xc);
  bVar3 = *(byte *)(local_28[0] + 0x10);
  uVar4 = *(ushort *)(local_28[0] + 0xe);
  if (cVar1 == '\0') {
    if (cVar2 == '\x02') goto LAB_14335ad29;
  }
  else {
    if (cVar1 == '\x01') {
      if (cVar2 != '\x01') {
        return false;
      }
      goto LAB_14335ad29;
    }
    if (cVar1 != '\0') {
      return false;
    }
  }
  if (cVar2 != '\x03') {
    return false;
  }
LAB_14335ad29:
  if ((((*(byte *)(local_28[0] + 7) < 0x21) &&
       ((0x101000001U >> ((ulonglong)*(byte *)(local_28[0] + 7) & 0x3f) & 1) != 0)) &&
      ((bVar3 - 8 & 0xe7) == 0)) && ((*(byte *)(local_28[0] + 0x11) & 0xc0) == 0)) {
    iVar6 = (**(code **)(*param_2 + 0x30))(param_2);
    return (int)((uint)(bVar3 >> 3) * (uint)uVar4 * (uint)uVar5 + 0x12) <= iVar6;
  }
  return false;
}



// FUNCTION 14335ad80 FUN_14335ad80 body=195 status=ok
// SIG undefined FUN_14335ad80(void)

longlong * FUN_14335ad80(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    if (plVar2 != (longlong *)0x0) {
      FUN_1433cef20(plVar2,param_2,*(undefined4 *)(param_3 + 0x20),0);
      *(undefined4 *)(plVar2 + 7) = 0;
      *plVar2 = (longlong)&PTR_FUN_145b01678;
      *(undefined1 *)((longlong)plVar2 + 0x3c) = 0;
      plVar2[8] = 0;
      plVar3 = DAT_146b62f28;
      if (*(longlong **)(param_3 + 8) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_3 + 8);
      }
      cVar1 = FUN_14335ae50(plVar2,plVar3);
      if (cVar1 != '\0') {
        return plVar2;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 14335ae50 FUN_14335ae50 body=798 status=ok
// SIG undefined FUN_14335ae50(void)

undefined8 FUN_14335ae50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined2 local_res8;
  undefined8 local_res10;
  byte local_res18 [8];
  char local_res20 [8];
  ushort local_58 [12];
  
  local_res18[0] = 0;
  local_res10 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),local_res18,1);
  local_res8._0_1_ = '\0';
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,1);
  cVar1 = (byte)local_res8;
  local_res8 = (ushort)local_res8._1_1_ << 8;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,1);
  cVar2 = (byte)local_res8;
  local_res8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,2);
  local_res8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,2);
  uVar4 = local_res8;
  uVar10 = (ulonglong)local_res8;
  local_res8 = local_res8 & 0xff00;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,1);
  bVar3 = (byte)local_res8;
  if (0x20 < (byte)local_res8) {
    return 0;
  }
  if ((0x101000001U >> ((ulonglong)(uint)(byte)local_res8 & 0x3f) & 1) == 0) {
    return 0;
  }
  local_res8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,2);
  local_res8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,2);
  local_res8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,2);
  local_58[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))(*(longlong **)(param_1 + 0x20),local_58,2);
  local_res20[0] = '\0';
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),local_res20,1);
  *(uint *)(param_1 + 0x14) = (uint)local_res8;
  *(uint *)(param_1 + 0x18) = (uint)local_58[0];
  if (cVar1 == '\0') {
    if (cVar2 == '\x02') goto LAB_14335afdc;
  }
  else {
    if (cVar1 == '\x01') {
      if (cVar2 != '\x01') {
        return 0;
      }
      goto LAB_14335afdc;
    }
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if (cVar2 != '\x03') {
    return 0;
  }
LAB_14335afdc:
  local_res8 = local_res8 & 0xff00;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),&local_res8,1);
  *(byte *)(param_1 + 0x3c) = (byte)local_res8;
  if (local_res18[0] != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
              (*(longlong **)(param_1 + 0x20),local_res18[0]);
  }
  if (local_res20[0] == '\b') {
    *(uint *)(param_1 + 0x38) = (cVar2 == '\x03') + 100;
  }
  else if (local_res20[0] == '\x10') {
    *(undefined4 *)(param_1 + 0x38) = 0x15;
  }
  else if (local_res20[0] == '\x18') {
    *(undefined4 *)(param_1 + 0x38) = 4;
  }
  else {
    if (local_res20[0] != ' ') {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    if (iVar5 == 100) {
      uVar7 = 2;
      if (bVar3 < 0x20) {
        uVar7 = 4;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar7;
    }
    else if (iVar5 == 0x15) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      if (iVar5 == 0x65) {
        iVar5 = 4;
      }
      *(int *)(param_1 + 0x10) = iVar5;
    }
  }
  if (cVar1 == '\x01') {
    uVar6 = FUN_1432c7580(uVar10,bVar3 == 0x20,local_res10);
    FUN_14335b340(param_1 + 0x40,uVar6);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      return 0;
    }
    if (uVar4 != 0) {
      lVar8 = 8;
      do {
        pcVar9 = (char *)(*(longlong *)(param_1 + 0x40) + lVar8);
        local_res20[0] = '\0';
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),local_res20,1);
        local_res18[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),local_res18,1);
        local_res8 = local_res8 & 0xff00;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),&local_res8,1);
        pcVar9[2] = (byte)local_res8;
        pcVar9[1] = local_res18[0];
        *pcVar9 = local_res20[0];
        pcVar9[3] = -1;
        if (bVar3 == 0x20) {
          local_res8 = local_res8 & 0xff00;
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                    (*(longlong **)(param_1 + 0x20),&local_res8,1);
          pcVar9[3] = (byte)local_res8;
        }
        lVar8 = lVar8 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  return 1;
}



// FUNCTION 14335b180 FUN_14335b180 body=437 status=ok
// SIG undefined FUN_14335b180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14335b180(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_1068 [2];
  int local_1060;
  longlong local_1058;
  int local_1048;
  undefined1 local_1028 [4096];
  
  uVar3 = FUN_1433cefe0();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  FUN_1433cf360(local_1068,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x14),
                *(undefined4 *)(param_1 + 0x10),local_1028,0x1000);
  if (((local_1068[0] == 0) || (local_1060 == 0)) || (local_1058 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    uVar4 = 0;
    if ((*(byte *)(param_1 + 0x3c) & 0x20) == 0) {
      uVar5 = *(int *)(param_1 + 0x18) - 1;
      iVar6 = -1;
    }
    else {
      uVar5 = 0;
      iVar6 = 1;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                          (*(longlong **)(param_1 + 0x20),local_1058,local_1048);
        if (iVar2 != local_1048) {
          uVar3 = 0;
          break;
        }
        FUN_1433cf480(local_1068,
                      *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) * (ulonglong)uVar5 +
                      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18),
                      *(undefined8 *)(param_1 + 0x40),param_3,param_4);
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + iVar6;
      } while (uVar4 < *(uint *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x10) == 100) {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*(longlong *)(param_1 + 0x40),1);
      }
      lVar1 = *(longlong *)(param_2 + 0x18);
      if ((lVar1 != 0) &&
         (iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff),
         iVar6 == 1)) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
      }
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x40);
    }
  }
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1068);
  return uVar3;
}



// FUNCTION 14335b340 FUN_14335b340 body=105 status=ok
// SIG undefined FUN_14335b340(void)

longlong * FUN_14335b340(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14335b3b0 FUN_14335b3b0 body=148 status=ok
// SIG undefined FUN_14335b3b0(void)

longlong FUN_14335b3b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  FUN_1433cefa0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14335b450 FUN_14335b450 body=64 status=ok
// SIG undefined FUN_14335b450(void)

undefined8 FUN_14335b450(void)

{
  char *local_18 [3];
  
  FUN_1433cf290(local_18);
  if (((local_18[0] != (char *)0x0) && (*local_18[0] == -1)) && (local_18[0][1] == -0x28)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14335b4a0 FUN_14335b4a0 body=174 status=ok
// SIG undefined FUN_14335b4a0(void)

longlong * FUN_14335b4a0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
    if (plVar2 != (longlong *)0x0) {
      FUN_1433cef20(plVar2,param_2,*(undefined4 *)(param_3 + 0x20),0);
      plVar2[7] = 0;
      *plVar2 = (longlong)&PTR_FUN_145b018d0;
      plVar2[8] = 0;
      *(undefined1 *)(plVar2 + 9) = 0;
      cVar1 = FUN_14335bf40(plVar2);
      if (cVar1 != '\0') {
        return plVar2;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 14335b560 FUN_14335b560 body=211 status=ok
// SIG undefined FUN_14335b560(void)

longlong *
FUN_14335b560(undefined8 param_1,longlong *param_2,longlong param_3,RefCountImpl *param_4,
             undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
    if (plVar2 != (longlong *)0x0) {
      FUN_1433cef20(plVar2,param_2,*(undefined4 *)(param_3 + 0x20),param_5);
      plVar2[7] = 0;
      *plVar2 = (longlong)&PTR_FUN_145b018d0;
      if (param_4 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(param_4);
      }
      plVar2[8] = (longlong)param_4;
      *(undefined1 *)(plVar2 + 9) = param_6;
      cVar1 = FUN_14335bf40(plVar2);
      if (cVar1 != '\0') {
        return plVar2;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 14335b640 FUN_14335b640 body=198 status=ok
// SIG undefined FUN_14335b640(void)

undefined8 *
FUN_14335b640(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = DAT_146b62f28;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_3 + 2);
  }
  puVar1 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x60);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = *(longlong *)(param_3 + 6);
    if ((lVar5 == 0) && (lVar5 = *(longlong *)(param_3 + 4) + 0x10, *(longlong *)(param_3 + 4) == 0)
       ) {
      lVar5 = 0;
    }
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1433cf020(puVar1,0,param_4,*param_3,lVar5,param_2,uVar2,param_5);
    *puVar1 = &PTR_FUN_145b017a8;
    puVar1[0xb] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}



// FUNCTION 14335b710 FUN_14335b710 body=158 status=ok
// SIG undefined FUN_14335b710(void)

longlong * FUN_14335b710(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = 0;
    *plVar2 = (longlong)&PTR_FUN_144f70a50;
    *plVar2 = (longlong)&PTR_FUN_145afb8b0;
    *(undefined4 *)(plVar2 + 1) = 1;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    plVar2[2] = (longlong)param_2;
    *plVar2 = (longlong)&PTR_FUN_145b01940;
    plVar2[3] = 0;
    cVar1 = FUN_14335c330(plVar2);
    if (cVar1 != '\0') {
      return plVar2;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 14335b7c0 CreateInput body=124 status=ok
// SIG undefined CreateInput(void)

longlong * Scaleform::Render::JPEG::FileReader::CreateInput(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_14335c440(lVar2,param_2);
        if (plVar3 != (longlong *)0x0) {
          if ((*(byte *)(plVar3 + 0x7e) & 4) != 0) {
            cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
            if (cVar1 == '\0') {
              return plVar3;
            }
          }
          (**(code **)*plVar3)(plVar3,1);
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14335b850 CreateSwfJpeg2HeaderOnly body=126 status=ok
// SIG undefined CreateSwfJpeg2HeaderOnly(void)

longlong *
Scaleform::Render::JPEG::FileReader::CreateSwfJpeg2HeaderOnly(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_14335c500(lVar2,0,param_2);
        if (plVar3 != (longlong *)0x0) {
          if ((*(byte *)(plVar3 + 0x7e) & 4) != 0) {
            cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
            if (cVar1 == '\0') {
              return plVar3;
            }
          }
          (**(code **)*plVar3)(plVar3,1);
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14335b8e0 FUN_14335b8e0 body=128 status=ok
// SIG undefined FUN_14335b8e0(void)

longlong * FUN_14335b8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14335c5c0(lVar2,0,param_2,param_3);
    if (plVar3 != (longlong *)0x0) {
      if ((*(byte *)(plVar3 + 0x7e) & 4) != 0) {
        cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
        if (cVar1 == '\0') {
          return plVar3;
        }
      }
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14335b980 FUN_14335b980 body=112 status=ok
// SIG undefined FUN_14335b980(void)

undefined8 * FUN_14335b980(undefined8 *param_1)

{
  undefined8 uVar1;
  char in_stack_00000048;
  
  FUN_1433cf020();
  *param_1 = &PTR_FUN_145b017a8;
  param_1[0xb] = 0;
  uVar1 = param_1[0xb];
  if (in_stack_00000048 != '\0') {
    uVar1 = 1;
  }
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 14335ba00 FUN_14335ba00 body=161 status=ok
// SIG undefined FUN_14335ba00(void)

undefined8 *
FUN_14335ba00(undefined8 *param_1,RefCountImpl *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  char cVar1;
  
  FUN_1433cf020(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  param_1[0xb] = param_2;
  *param_1 = &PTR_FUN_145b017a8;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    cVar1 = (**(code **)(*(longlong *)param_1[0xb] + 8))();
    if (cVar1 != '\0') {
      param_1[0xb] = param_1[0xb] | 1;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14335bab0 FUN_14335bab0 body=148 status=ok
// SIG undefined FUN_14335bab0(void)

undefined8 *
FUN_14335bab0(undefined8 *param_1,RefCountImpl *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  
  FUN_1433cf150(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0xb] = param_2;
  *param_1 = &PTR_FUN_145b017a8;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    cVar1 = (**(code **)(*(longlong *)param_1[0xb] + 8))();
    if (cVar1 != '\0') {
      param_1[0xb] = param_1[0xb] | 1;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14335bb50 FUN_14335bb50 body=127 status=ok
// SIG undefined FUN_14335bb50(void)

void FUN_14335bb50(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  RefCountImpl *this;
  
  *param_1 = &PTR_FUN_145b017a8;
  this = (RefCountImpl *)(param_1[0xb] & 0xfffffffffffffffc);
  if (this != (RefCountImpl *)0x0 && (param_1[0xb] & 3) != 0) {
    Scaleform::RefCountImpl::Release(this);
  }
  uVar1 = param_1[10];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[7]);
  FUN_1432caa70(param_1);
  return;
}



// FUNCTION 14335bbe0 FUN_14335bbe0 body=696 status=ok
// SIG undefined FUN_14335bbe0(void)

undefined1 FUN_14335bbe0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  lVar7 = *(longlong *)(param_1 + 0x38);
  local_50 = 1;
  local_58 = &PTR_FUN_145af8dd8;
  FUN_1432c31e0(&local_48,param_1 + 0x50);
  puVar11 = (undefined8 *)0x0;
  local_38 = (int)uVar1;
  local_34 = 0;
  if ((((*(ulonglong *)(*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) & 0x7fffffffffffffff)
        == 0) || (lVar7 == 0)) || (local_30 = 1, local_38 < 1)) {
    local_30 = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  local_40 = lVar7;
  if (uVar6 == 0) {
    cVar3 = (*(code *)local_58[2])(&local_58);
    if (((cVar3 != '\0') &&
        (lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0), lVar7 != 0)) &&
       (plVar8 = (longlong *)FUN_14335c500(lVar7,0,&local_58), plVar8 != (longlong *)0x0)) {
      if (((*(byte *)(plVar8 + 0x7e) & 4) == 0) ||
         (cVar3 = (**(code **)(*plVar8 + 0x50))(plVar8), cVar3 != '\0')) goto LAB_14335bce6;
LAB_14335be68:
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar4 = FUN_14335cad0(*(undefined4 *)(param_1 + 0x28),plVar8,param_2,param_3,param_4);
        goto LAB_14335bcf6;
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)(uVar6 + 0x18);
    uVar2 = *(undefined8 *)(uVar6 + 0x10);
    lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0);
    if ((lVar7 != 0) &&
       (plVar8 = (longlong *)FUN_14335c5c0(lVar7,0,uVar2,uVar1), plVar8 != (longlong *)0x0)) {
      if (((*(byte *)(plVar8 + 0x7e) & 4) != 0) &&
         (cVar3 = (**(code **)(*plVar8 + 0x50))(plVar8), cVar3 == '\0')) {
        lVar9 = (**(code **)(*plVar8 + 0x48))(plVar8);
        lVar7 = *(longlong *)(lVar9 + 0x28);
        if (lVar7 != 0) {
          if (*(RefCountImpl **)(lVar7 + 0x38) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar7 + 0x38));
          }
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar7);
        }
        puVar10 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x848,0);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[7] = 0;
          Scaleform::RefCountImpl::AddRef((RefCountImpl *)&local_58);
          if ((RefCountImpl *)puVar10[7] != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release((RefCountImpl *)puVar10[7]);
          }
          puVar10[7] = &local_58;
          puVar10[2] = &LAB_14335ce00;
          puVar10[3] = FUN_14335cc40;
          puVar10[4] = FUN_14335cef0;
          puVar10[5] = FUN_1436603d0;
          puVar10[6] = AK::MemoryMgr::StartProfileThreadUsage;
          *(undefined1 *)(puVar10 + 8) = 1;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar11 = puVar10;
        }
        *(undefined8 **)(lVar9 + 0x28) = puVar11;
        goto LAB_14335be68;
      }
LAB_14335bce6:
      (**(code **)*plVar8)(plVar8,1);
    }
  }
  uVar4 = 0;
LAB_14335bcf6:
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_48 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_58);
  return uVar4;
}



// FUNCTION 14335bea0 JpegCreateDecompress body=71 status=ok
// SIG undefined JpegCreateDecompress(void)

undefined8
Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegCreateDecompress
          (undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_2 + 0x170),auStack_28);
  if (iVar1 != 0) {
    thunk_FUN_143660e60();
    return 0;
  }
  FUN_14365e420(param_1,0x50,0x270);
  return 1;
}



// FUNCTION 14335bef0 JpegReadHeader body=70 status=ok
// SIG undefined JpegReadHeader(void)

undefined8
Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegReadHeader
          (undefined8 param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_2 + 0x170),auStack_28);
  if (iVar1 != 0) {
    thunk_FUN_143660e60();
    return 0;
  }
  FUN_14365e730(param_1,param_3);
  return 1;
}



// FUNCTION 14335bf40 FUN_14335bf40 body=402 status=ok
// SIG undefined FUN_14335bf40(void)

ulonglong FUN_14335bf40(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 local_res8 [8];
  
  if ((*(longlong **)(param_1 + 0x40) == (longlong *)0x0) ||
     (in_RAX = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))(), (char)in_RAX == '\0')) {
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x48) == '\0') {
      if ((plVar4 == (longlong *)0x0) ||
         (in_RAX = (**(code **)(*plVar4 + 0x10))(plVar4), (char)in_RAX == '\0')) {
LAB_14335c01a:
        plVar4 = (longlong *)0x0;
      }
      else {
        lVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0);
        in_RAX = 0;
        if (lVar6 == 0) goto LAB_14335c01a;
        plVar4 = (longlong *)FUN_14335c440(lVar6,plVar4);
        in_RAX = 0;
        if (plVar4 == (longlong *)0x0) goto LAB_14335c01a;
        if (((*(byte *)(plVar4 + 0x7e) & 4) == 0) ||
           (in_RAX = (**(code **)(*plVar4 + 0x50))(plVar4), (char)in_RAX != '\0')) {
          in_RAX = (**(code **)*plVar4)(plVar4,1);
          goto LAB_14335c01a;
        }
      }
      *(longlong **)(param_1 + 0x38) = plVar4;
    }
    else {
      if ((((plVar4 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar4 + 0x10))(plVar4), cVar3 == '\0')) ||
          (lVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0), lVar6 == 0)) ||
         (plVar4 = (longlong *)FUN_14335c500(lVar6,0,plVar4), plVar4 == (longlong *)0x0)) {
LAB_14335c086:
        plVar4 = (longlong *)0x0;
      }
      else if (((*(byte *)(plVar4 + 0x7e) & 4) == 0) ||
              (cVar3 = (**(code **)(*plVar4 + 0x50))(plVar4), cVar3 != '\0')) {
        (**(code **)*plVar4)(plVar4,1);
        goto LAB_14335c086;
      }
      *(longlong **)(param_1 + 0x38) = plVar4;
      in_RAX = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  else {
    plVar4 = (longlong *)
             FUN_14335b8e0(&PTR_PTR_1467ce370,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
    *(longlong **)(param_1 + 0x38) = plVar4;
    in_RAX = 0;
    if (plVar4 == (longlong *)0x0) goto LAB_14335bf80;
    uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
    Scaleform::Render::JPEG::GJPEGUtil_ReplaceRwSource(uVar5,*(undefined8 *)(param_1 + 0x20));
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    puVar7 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,local_res8);
    uVar1 = puVar7[1];
    uVar2 = *puVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
    return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
  }
LAB_14335bf80:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14335c0e0 FUN_14335c0e0 body=128 status=ok
// SIG undefined FUN_14335c0e0(void)

ulonglong FUN_14335c0e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar2 = FUN_1433cefe0();
    if ((char)uVar2 != '\0') {
      lVar1 = Scaleform::Render::JPEG::FileReader::CreateInput
                        (&PTR_PTR_1467ce370,*(undefined8 *)(param_1 + 0x20));
      uVar2 = 0;
      if (lVar1 != 0) goto LAB_14335c135;
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14335c135:
    uVar2 = FUN_14335cad0(*(undefined4 *)(param_1 + 0x10),lVar1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 14335c170 FUN_14335c170 body=440 status=ok
// SIG undefined FUN_14335c170(void)

undefined8 FUN_14335c170(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  cVar4 = (**(code **)(*param_1 + 0x58))();
  if (cVar4 == '\0') {
    uVar8 = FUN_1432cb240(param_1,param_2);
    return uVar8;
  }
  plVar1 = *(longlong **)(param_2 + 2);
  if (param_1[8] == 0) {
    plVar9 = DAT_146b62f28;
    if (plVar1 != (longlong *)0x0) {
      plVar9 = plVar1;
    }
    lVar7 = (**(code **)(*plVar9 + 0x50))(plVar9,0x60,0);
    if (lVar7 != 0) {
      lVar10 = *(longlong *)(param_2 + 6);
      lVar2 = param_1[4];
      if ((lVar10 == 0) &&
         (lVar10 = *(longlong *)(param_2 + 4) + 0x10, *(longlong *)(param_2 + 4) == 0)) {
        lVar10 = 0;
      }
      uVar8 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar8 = FUN_14335b980(lVar7,uVar6,uVar8,*param_2,lVar10,lVar2,param_1[5],param_1[6],
                            (char)param_1[9]);
      return uVar8;
    }
  }
  else {
    plVar9 = DAT_146b62f28;
    if (plVar1 != (longlong *)0x0) {
      plVar9 = plVar1;
    }
    lVar7 = (**(code **)(*plVar9 + 0x50))(plVar9,0x60,0);
    if (lVar7 != 0) {
      lVar10 = *(longlong *)(param_2 + 6);
      lVar2 = param_1[4];
      if ((lVar10 == 0) &&
         (lVar10 = *(longlong *)(param_2 + 4) + 0x10, *(longlong *)(param_2 + 4) == 0)) {
        lVar10 = 0;
      }
      lVar3 = param_1[8];
      uVar8 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar8 = FUN_14335ba00(lVar7,lVar3,uVar5,uVar8,CONCAT44(uVar6,*param_2),lVar10,lVar2,param_1[5]
                            ,param_1[6]);
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 14335c330 FUN_14335c330 body=260 status=ok
// SIG undefined FUN_14335c330(void)

undefined8 FUN_14335c330(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 200))();
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = plVar6[8];
  lVar3 = plVar6[7];
  lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3f8,0);
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_14335c5c0(lVar7,0,lVar3,lVar2);
    if (plVar8 != (longlong *)0x0) {
      if ((*(byte *)(plVar8 + 0x7e) & 4) != 0) {
        cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
        if (cVar4 == '\0') goto LAB_14335c3c0;
      }
      (**(code **)*plVar8)(plVar8,1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_14335c3c0:
  *(longlong **)(param_1 + 0x18) = plVar8;
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*plVar8 + 0x10))(plVar8);
  puVar9 = (undefined4 *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                     (*(longlong **)(param_1 + 0x18),local_res8);
  uVar1 = *puVar9;
  *(undefined4 *)(plVar6 + 6) = puVar9[1];
  *(undefined4 *)((longlong)plVar6 + 0x2c) = uVar1;
  iVar5 = (**(code **)(*plVar6 + 0x20))(plVar6);
  if (iVar5 == 0) {
    *(undefined4 *)(plVar6 + 5) = 3;
  }
  return 1;
}



// FUNCTION 14335c440 FUN_14335c440 body=180 status=ok
// SIG undefined FUN_14335c440(void)

undefined8 * FUN_14335c440(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_145b01878;
  FUN_1433cf560(param_1 + 0x4f);
  *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xf8;
  uVar3 = Scaleform::Render::JPEG::SetupJpegErr(param_1 + 0x4f);
  param_1[1] = uVar3;
  iVar2 = Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegCreateDecompress
                    (param_1 + 1,param_1 + 0x4f);
  if (iVar2 != 0) {
    lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x848,0);
    uVar3 = 0;
    if (lVar4 != 0) {
      uVar3 = FUN_14335c700(lVar4,param_2);
    }
    param_1[6] = uVar3;
    cVar1 = Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::StartImage(param_1);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | 4;
    }
  }
  return param_1;
}



// FUNCTION 14335c500 FUN_14335c500 body=191 status=ok
// SIG undefined FUN_14335c500(void)

undefined8 * FUN_14335c500(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_145b01878;
  FUN_1433cf560(param_1 + 0x4f);
  *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xf8;
  uVar2 = Scaleform::Render::JPEG::SetupJpegErr(param_1 + 0x4f);
  param_1[1] = uVar2;
  iVar1 = Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegCreateDecompress
                    (param_1 + 1,param_1 + 0x4f);
  if (iVar1 != 0) {
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x848,0);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = FUN_14335c700(lVar3,param_3);
    }
    param_1[6] = uVar2;
    iVar1 = Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegReadHeader
                      (param_1 + 1,param_1 + 0x4f,0);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | 4;
    }
  }
  return param_1;
}



// FUNCTION 14335c5c0 FUN_14335c5c0 body=319 status=ok
// SIG undefined FUN_14335c5c0(void)

undefined8 *
FUN_14335c5c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_145b01878;
  FUN_1433cf560(param_1 + 0x4f);
  *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xf8;
  uVar2 = Scaleform::Render::JPEG::SetupJpegErr(param_1 + 0x4f);
  param_1[1] = uVar2;
  iVar1 = Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegCreateDecompress
                    (param_1 + 1,param_1 + 0x4f);
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x848,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3[7] = 0;
      if ((RefCountImpl *)puVar3[7] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar3[7]);
      }
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 1;
      *puVar3 = param_3;
      puVar3[1] = param_4;
      puVar3[2] = AK::MemoryMgr::StartProfileThreadUsage;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
      puVar3[6] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    param_1[6] = puVar3;
    iVar1 = Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::JpegReadHeader
                      (param_1 + 1,param_1 + 0x4f,0);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | 4;
    }
  }
  return param_1;
}



// FUNCTION 14335c700 FUN_14335c700 body=143 status=ok
// SIG undefined FUN_14335c700(void)

undefined8 * FUN_14335c700(undefined8 *param_1,RefCountImpl *param_2)

{
  param_1[7] = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  param_1[7] = param_2;
  param_1[2] = &LAB_14335ce00;
  param_1[3] = FUN_14335cc40;
  param_1[4] = FUN_14335cef0;
  param_1[5] = FUN_1436603d0;
  param_1[6] = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14335c790 ~JPEGInputImpl_jpeglib body=117 status=ok
// SIG undefined ~JPEGInputImpl_jpeglib(void)

void Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::~JPEGInputImpl_jpeglib(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_145b01878;
  FinishImage();
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    if (*(RefCountImpl **)(lVar1 + 0x38) != (RefCountImpl *)0x0) {
      RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x38));
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  param_1[6] = 0;
  thunk_FUN_143660e60(param_1 + 1);
  JpegErrorHandler::~JpegErrorHandler(param_1 + 0x4f);
  *param_1 = &PTR_FUN_145b01750;
  return;
}



// FUNCTION 14335c810 FUN_14335c810 body=150 status=ok
// SIG undefined FUN_14335c810(void)

undefined8 * FUN_14335c810(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b018d0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x28))();
    puVar1 = (undefined8 *)param_1[7];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  FUN_1433cefa0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14335c8b0 FUN_14335c8b0 body=73 status=ok
// SIG undefined FUN_14335c8b0(void)

undefined8 * FUN_14335c8b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01750;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 14335c900 FUN_14335c900 body=89 status=ok
// SIG undefined FUN_14335c900(void)

undefined8 FUN_14335c900(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::~JPEGInputImpl_jpeglib();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 14335c960 FUN_14335c960 body=89 status=ok
// SIG undefined FUN_14335c960(void)

undefined8 FUN_14335c960(undefined8 param_1,ulonglong param_2)

{
  FUN_14335bb50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14335c9c0 FUN_14335c9c0 body=151 status=ok
// SIG undefined FUN_14335c9c0(void)

RefCountImplCore * FUN_14335c9c0(RefCountImplCore *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145b01940;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14335ca60 FinishImage body=100 status=ok
// SIG undefined FinishImage(void)

undefined8 Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::FinishImage(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  if ((*(byte *)(param_1 + 0x3f0) & 2) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x3f0) & 1) != 0) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 1000),auStack_28);
    if (iVar1 != 0) {
      thunk_FUN_143660e60();
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 2;
      return 0;
    }
    thunk_FUN_143660dd0(param_1 + 8);
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
  }
  return 1;
}



// FUNCTION 14335cad0 FUN_14335cad0 body=326 status=ok
// SIG undefined FUN_14335cad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14335cad0(undefined4 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_res10;
  uint local_res14;
  int local_1058 [2];
  int local_1050;
  longlong local_1048;
  undefined1 local_1018 [4088];
  undefined8 uStack_20;
  
  uStack_20 = 0x14335cae9;
  (**(code **)(*param_2 + 0x30))(param_2,&local_res10);
  uVar3 = 0;
  FUN_1433cf360(local_1058,3,local_res10,param_1,local_1018,0x1000);
  if ((((local_1058[0] != 0) && (local_1050 != 0)) && (local_1048 != 0)) &&
     (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 == '\0')) {
    uVar2 = 0;
    uVar3 = 1;
    if (local_res14 != 0) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x38))(param_2,local_1048);
        if (cVar1 == '\0') {
          uVar3 = 0;
          break;
        }
        FUN_1433cf480(local_1058,
                      *(longlong *)(*(longlong *)(param_3 + 0x10) + 8) * (ulonglong)uVar2 +
                      *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x18),0,param_4,param_5);
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_res14);
    }
  }
  (**(code **)*param_2)(param_2,1);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1058);
  return uVar3;
}



// FUNCTION 14335cc40 FUN_14335cc40 body=139 status=ok
// SIG undefined FUN_14335cc40(void)

undefined4 FUN_14335cc40(longlong param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  pcVar1 = (char *)((longlong)puVar2 + 0x41);
  iVar3 = (**(code **)(*(longlong *)puVar2[7] + 0x50))((longlong *)puVar2[7],pcVar1,0x800);
  uVar4 = (ulonglong)iVar3;
  if (iVar3 == 0) {
    if (*(char *)(puVar2 + 8) != '\0') {
      return 0;
    }
    *pcVar1 = -1;
    uVar4 = 2;
    *(undefined1 *)((longlong)puVar2 + 0x42) = 0xd9;
  }
  if ((((*(char *)(puVar2 + 8) != '\0') && (3 < uVar4)) && (*pcVar1 == -1)) &&
     (((*(char *)((longlong)puVar2 + 0x42) == -0x27 && (*(char *)((longlong)puVar2 + 0x43) == -1))
      && (*(char *)((longlong)puVar2 + 0x44) == -0x28)))) {
    *(undefined1 *)((longlong)puVar2 + 0x42) = 0xd8;
    *(undefined1 *)((longlong)puVar2 + 0x44) = 0xd9;
  }
  *puVar2 = pcVar1;
  puVar2[1] = uVar4;
  *(undefined1 *)(puVar2 + 8) = 0;
  return 1;
}



// FUNCTION 14335ccd0 FinishImage body=100 status=ok
// SIG undefined FinishImage(void)

undefined8 Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::FinishImage(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  if ((*(byte *)(param_1 + 0x3f0) & 2) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x3f0) & 1) != 0) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 1000),auStack_28);
    if (iVar1 != 0) {
      thunk_FUN_143660e60();
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 2;
      return 0;
    }
    FUN_14365e660(param_1 + 8);
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
  }
  return 1;
}



// FUNCTION 14335cd40 GJPEGUtil_ReplaceRwSource body=141 status=ok
// SIG undefined GJPEGUtil_ReplaceRwSource(void)

void Scaleform::Render::JPEG::GJPEGUtil_ReplaceRwSource(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(RefCountImpl **)(lVar1 + 0x38) != (RefCountImpl *)0x0) {
      RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x38));
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x848,0);
  if (lVar1 != 0) {
    uVar2 = FUN_14335c700(lVar1,param_2);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14335ce10 ReadRawData body=109 status=ok
// SIG undefined ReadRawData(void)

undefined4
Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::ReadRawData(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [32];
  
  if ((*(byte *)(param_1 + 0x3f0) & 2) == 0) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 1000),auStack_28);
    if (iVar1 == 0) {
      uVar2 = FUN_14365eaa0(param_1 + 8);
      *param_2 = uVar2;
      return 1;
    }
    thunk_FUN_143660e60(param_1 + 8);
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 2;
  }
  return 0;
}



// FUNCTION 14335ce80 FUN_14335ce80 body=112 status=ok
// SIG undefined FUN_14335ce80(void)

undefined4 FUN_14335ce80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_28 [32];
  
  if ((*(byte *)(param_1 + 0x3f0) & 2) == 0) {
    local_res10[0] = param_2;
    iVar1 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 1000),auStack_28);
    if (iVar1 == 0) {
      FUN_14365e7c0(param_1 + 8,local_res10,1);
      return 1;
    }
    thunk_FUN_143660e60(param_1 + 8);
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 2;
  }
  return 0;
}



// FUNCTION 14335cef0 FUN_14335cef0 body=212 status=ok
// SIG undefined FUN_14335cef0(void)

void FUN_14335cef0(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (0 < param_2) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    if ((int)plVar2[1] < param_2) {
      do {
        puVar3 = *(undefined8 **)(param_1 + 0x28);
        param_2 = param_2 - (int)plVar2[1];
        pcVar1 = (char *)((longlong)puVar3 + 0x41);
        iVar4 = (**(code **)(*(longlong *)puVar3[7] + 0x50))((longlong *)puVar3[7],pcVar1,0x800);
        uVar5 = (ulonglong)iVar4;
        if (iVar4 == 0) {
          if (*(char *)(puVar3 + 8) == '\0') {
            *pcVar1 = -1;
            uVar5 = 2;
            *(undefined1 *)((longlong)puVar3 + 0x42) = 0xd9;
            goto LAB_14335cf64;
          }
        }
        else {
LAB_14335cf64:
          if ((((*(char *)(puVar3 + 8) != '\0') && (3 < uVar5)) && (*pcVar1 == -1)) &&
             (((*(char *)((longlong)puVar3 + 0x42) == -0x27 &&
               (*(char *)((longlong)puVar3 + 0x43) == -1)) &&
              (*(char *)((longlong)puVar3 + 0x44) == -0x28)))) {
            *(undefined1 *)((longlong)puVar3 + 0x42) = 0xd8;
            *(undefined1 *)((longlong)puVar3 + 0x44) = 0xd9;
          }
          *puVar3 = pcVar1;
          puVar3[1] = uVar5;
          *(undefined1 *)(puVar3 + 8) = 0;
        }
      } while ((int)plVar2[1] < param_2);
    }
    *plVar2 = *plVar2 + (longlong)param_2;
    plVar2[1] = plVar2[1] - (longlong)param_2;
  }
  return;
}



// FUNCTION 14335cfd0 StartImage body=125 status=ok
// SIG undefined StartImage(void)

undefined4 Scaleform::Render::JPEG::JPEGInputImpl_jpeglib::StartImage(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  if ((*(byte *)(param_1 + 0x3f0) & 2) == 0) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 1000),auStack_28);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x2c) != 0xca) {
        FUN_14365e730(param_1 + 8,1);
      }
      *(undefined4 *)(param_1 + 0x48) = 2;
      FUN_14365e890(param_1 + 8);
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 1;
      return 1;
    }
    thunk_FUN_143660e60(param_1 + 8);
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 2;
  }
  return 0;
}



// FUNCTION 14335d050 FUN_14335d050 body=116 status=ok
// SIG undefined FUN_14335d050(void)

undefined4 FUN_14335d050(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  if ((*(byte *)(param_1 + 0x3f0) & 2) == 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 1000),auStack_28);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x2c) != 0xca) {
        FUN_14365e730(param_1 + 8,1);
      }
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 1;
      *(undefined4 *)(param_1 + 0x48) = 2;
      return 1;
    }
    thunk_FUN_143660e60(param_1 + 8);
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
    *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | 2;
  }
  return 0;
}



// FUNCTION 14335d0d0 FUN_14335d0d0 body=76 status=ok
// SIG undefined FUN_14335d0d0(void)

undefined8 FUN_14335d0d0(void)

{
  char *local_18 [3];
  
  FUN_1433cf290(local_18);
  if ((((local_18[0] != (char *)0x0) && (*local_18[0] == 'S')) && (local_18[0][1] == 'I')) &&
     ((local_18[0][2] == 'F' && (local_18[0][3] == ' ')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14335d130 ReadImageSource body=133 status=ok
// SIG undefined ReadImageSource(void)

longlong *
Scaleform::Render::SIF::FileReader::ReadImageSource
          (undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((param_2 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2), cVar1 == '\0')) {
    return (longlong *)0x0;
  }
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x90,0);
  if (lVar2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_14335d660(lVar2,param_2,*(undefined4 *)(param_3 + 0x20));
    if ((plVar3 != (longlong *)0x0) && (cVar1 = FUN_14335d1c0(plVar3), cVar1 == '\0')) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return (longlong *)0x0;
    }
  }
  return plVar3;
}



// FUNCTION 14335d1c0 FUN_14335d1c0 body=403 status=ok
// SIG undefined FUN_14335d1c0(void)

undefined8 FUN_14335d1c0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  char local_res10 [8];
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),local_res10,4);
  iVar2 = strncmp(local_res10,"SIF ",4);
  if (iVar2 == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
              (*(longlong **)(param_1 + 0x20),local_res8,1);
    if ((byte)local_res8[0] == '\x11') {
      local_res8[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,4);
      *(uint *)(param_1 + 0x10) = local_res8[0];
      *(uint *)(param_1 + 0x7c) = local_res8[0];
      local_res8[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,4);
      *(uint *)(param_1 + 0x1c) = local_res8[0];
      local_res8[0] = local_res8[0] & 0xffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,1);
      bVar1 = (byte)local_res8[0] & 0xfd;
      local_res8[0] = local_res8[0] & 0xffffff00;
      *(byte *)(param_1 + 0x8b) = bVar1;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,1);
      *(byte *)(param_1 + 0x8a) = (byte)local_res8[0];
      local_res8[0] = local_res8[0] & 0xffff0000;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,2);
      *(short *)(param_1 + 0x88) = (short)local_res8[0];
      if ((*(int *)(param_1 + 0x7c) == 0x3a) && ((short)local_res8[0] == 2)) {
        *(undefined4 *)(param_1 + 0x10) = 0x42;
        *(undefined4 *)(param_1 + 0x7c) = 0x42;
      }
      local_res8[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,4);
      *(uint *)(param_1 + 0x84) = local_res8[0];
      local_res8[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,4);
      *(uint *)(param_1 + 0x80) = local_res8[0];
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x84);
      *(uint *)(param_1 + 0x18) = local_res8[0];
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14335d360 FUN_14335d360 body=762 status=ok
// SIG undefined FUN_14335d360(void)

ulonglong FUN_14335d360(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  uint local_38;
  uint local_34 [3];
  
  uVar2 = FUN_1433cefe0();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | *(byte *)(param_1 + 0x8b);
  local_34[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))(*(longlong **)(param_1 + 0x20),local_34,4);
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))(*(longlong **)(param_1 + 0x20),&local_38,4);
  uVar4 = (ulonglong)local_38;
  uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x10);
  if ((uVar2 == uVar4) &&
     (uVar4 = (ulonglong)local_34[0], *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 8) == uVar4)) {
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        local_38 = local_38 & 0xffffff00;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),&local_38,1);
        *(char *)(uVar4 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18)) = (char)local_38;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x10));
    }
    uVar6 = 1;
    if (1 < *(ushort *)(param_2 + 10)) {
      do {
        local_34[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),local_34,4);
        local_34[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),local_34,4);
        local_38 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),&local_38,4);
        local_34[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                  (*(longlong **)(param_1 + 0x20),local_34,4);
        lVar3 = *(longlong *)(param_2 + 0x10);
        uVar2 = (ulonglong)local_34[0];
        if ((*(ulonglong *)(lVar3 + 0x10) != uVar2) ||
           (uVar2 = (ulonglong)local_38, *(ulonglong *)(lVar3 + 8) != uVar2)) {
          return uVar2 & 0xffffffffffffff00;
        }
        lVar5 = (ulonglong)uVar6 * 0x20;
        uVar2 = 0;
        if (*(longlong *)(lVar5 + 0x10 + lVar3) != 0) {
          do {
            local_38 = local_38 & 0xffffff00;
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                      (*(longlong **)(param_1 + 0x20),&local_38,1);
            *(char *)(uVar2 + *(longlong *)(lVar5 + 0x18 + *(longlong *)(param_2 + 0x10))) =
                 (char)local_38;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(ulonglong *)(lVar5 + 0x10 + *(longlong *)(param_2 + 0x10)));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_2 + 10));
    }
    local_38 = local_38 & 0xffff0000;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
              (*(longlong **)(param_1 + 0x20),&local_38,2);
    uVar6 = (ushort)local_38;
    if ((ushort)local_38 == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
      if ((lVar3 != 0) &&
         (iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar3,0xffffffff),
         iVar1 == 1)) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    else {
      local_38 = local_38 & 0xffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),&local_38,1);
      lVar3 = FUN_1432c7580(uVar6,(char)local_38 != '\0',0);
      if (lVar3 != 0) {
        Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar3,1);
      }
      lVar5 = *(longlong *)(param_2 + 0x18);
      if ((lVar5 != 0) &&
         (iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar5,0xffffffff),
         iVar1 == 1)) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
      }
      *(longlong *)(param_2 + 0x18) = lVar3;
      if (uVar6 != 0) {
        uVar2 = (ulonglong)uVar6;
        lVar3 = 8;
        do {
          local_34[0] = 0;
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                    (*(longlong **)(param_1 + 0x20),local_34,4);
          *(uint *)(lVar3 + *(longlong *)(param_2 + 0x18)) = local_34[0];
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 4;
        } while (uVar2 != 0);
        return 1;
      }
    }
    return 1;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14335d660 FUN_14335d660 body=76 status=ok
// SIG undefined FUN_14335d660(void)

undefined8 * FUN_14335d660(undefined8 *param_1)

{
  FUN_1433cef20();
  *param_1 = &PTR_FUN_145b019e0;
  param_1[9] = param_1 + 0xb;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x10000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14335d6b0 FUN_14335d6b0 body=167 status=ok
// SIG undefined FUN_14335d6b0(void)

undefined8 * FUN_14335d6b0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145b019e0;
  Scaleform::Render::ImageData::freePlanes(param_1 + 7);
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  FUN_1433cefa0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14335d780 CreateInput body=99 status=ok
// SIG undefined CreateInput(void)

undefined8 * Scaleform::Render::PNG::FileReader::CreateInput(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((((param_2 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*param_2 + 0x10))(param_2), cVar1 != '\0')) &&
      (lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1a8,0), lVar2 != 0)) &&
     (puVar3 = (undefined8 *)FUN_14335def0(lVar2,param_2), puVar3 != (undefined8 *)0x0)) {
    if (*(char *)(puVar3 + 0x34) != '\0') {
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14335d7f0 FUN_14335d7f0 body=67 status=ok
// SIG undefined FUN_14335d7f0(void)

bool FUN_14335d7f0(void)

{
  int iVar1;
  undefined8 in_R9;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong local_18;
  undefined1 local_10 [16];
  
  puVar2 = local_10;
  uVar3 = 8;
  FUN_1433cf290(&local_18);
  if (local_18 == 0) {
    return false;
  }
  iVar1 = FUN_14368a980(local_18,0,8,in_R9,puVar2,uVar3);
  return iVar1 == 0;
}



// FUNCTION 14335d840 FUN_14335d840 body=158 status=ok
// SIG undefined FUN_14335d840(void)

longlong * FUN_14335d840(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
    if (plVar2 != (longlong *)0x0) {
      FUN_1433cef20(plVar2,param_2,*(undefined4 *)(param_3 + 0x20),0);
      plVar2[7] = 0;
      *plVar2 = (longlong)&PTR_FUN_145b01bf8;
      cVar1 = Scaleform::Render::PNG::PNGFileImageSource::ReadHeader(plVar2);
      if (cVar1 != '\0') {
        return plVar2;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 14335d8f0 FUN_14335d8f0 body=633 status=ok
// SIG undefined FUN_14335d8f0(void)

undefined8 FUN_14335d8f0(undefined8 param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *_Src;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  longlong local_1a8;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  uint local_184;
  undefined4 local_180;
  undefined4 local_17c;
  char local_10c [260];
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2), cVar1 != '\0')) {
    local_1a8 = 0;
    _Src = (char *)(**(code **)(*param_2 + 8))(param_2);
    strcpy_s(local_10c,0x100,_Src);
    local_188 = **(undefined4 **)(param_3 + 4);
    local_184 = (*(undefined4 **)(param_3 + 4))[1];
    iVar2 = *param_3;
    if (0 < iVar2) {
      if (iVar2 < 3) {
        local_17c = 6;
      }
      else {
        if (4 < iVar2) {
          return 0;
        }
        local_17c = 2;
      }
      local_180 = 8;
      local_198 = URpgStatComponent::GetValue("1.5.27",&local_198,FUN_14335db70,0);
      if ((local_198 != 0) && (local_190 = FUN_143689f30(local_198), local_190 != 0)) {
        FUN_1436921a0(local_198,param_2,FUN_14335de90,0);
        uVar3 = FUN_1436941a0(local_198,_guard_xfg_dispatch_icall_nop,0x100);
        iVar2 = _guard_xfg_dispatch_icall_nop(uVar3,auStack_1f8);
        if (iVar2 == 0) {
          local_1b8 = 0;
          local_1c0 = 0;
          local_1c8 = 0;
          local_1d0 = local_17c;
          local_1d8 = local_180;
          FUN_143692630(local_198,local_190,**(undefined4 **)(param_3 + 4),
                        (*(undefined4 **)(param_3 + 4))[1]);
          FUN_14368b350(local_198,local_190);
          uVar3 = FUN_1436941a0(local_198,_guard_xfg_dispatch_icall_nop,0x100);
          iVar2 = _guard_xfg_dispatch_icall_nop(uVar3,auStack_1f8);
          if (iVar2 == 0) {
            lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))
                              (DAT_146b62f28,
                               (ulonglong)*(uint *)(*(longlong *)(param_3 + 4) + 4) << 3,0);
            uVar6 = 0;
            if (local_184 != 0) {
              do {
                uVar5 = (int)uVar6 + 1;
                *(ulonglong *)(lVar4 + uVar6 * 8) =
                     *(longlong *)(*(longlong *)(param_3 + 4) + 8) * uVar6 +
                     *(longlong *)(*(longlong *)(param_3 + 4) + 0x18);
                uVar6 = (ulonglong)uVar5;
              } while (uVar5 < local_184);
            }
            local_1a8 = lVar4;
            FUN_14368b2c0(local_198,lVar4);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
            uVar3 = FUN_1436941a0(local_198,_guard_xfg_dispatch_icall_nop,0x100);
            iVar2 = _guard_xfg_dispatch_icall_nop(uVar3,auStack_1f8);
            if (iVar2 == 0) {
              FUN_14368b030(local_198,0);
              return 1;
            }
          }
          else if (local_1a8 != 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14335db70 FUN_14335db70 body=106 status=ok
// SIG undefined FUN_14335db70(void)

void FUN_14335db70(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_2[uVar2] != '\0');
  lVar1 = FUN_143694110();
  if (uVar2 < 100) {
    strcpy_s((char *)(lVar1 + 0x28),100,param_2);
  }
  else {
    strncpy_s((char *)(lVar1 + 0x28),100,param_2,99);
    *(undefined1 *)(lVar1 + 0x8b) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143694120(param_1,1);
}



// FUNCTION 14335dbf0 FUN_14335dbf0 body=87 status=ok
// SIG undefined FUN_14335dbf0(void)

void FUN_14335dbf0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14368a660();
  iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,param_2,param_3 & 0xffffffff);
  if ((-1 < iVar1) && ((longlong)iVar1 == param_3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Read Error.");
}



// FUNCTION 14335dc50 Decode body=49 status=ok
// SIG undefined Decode(void)

ulonglong Scaleform::Render::PNG::PNGFileImageSource::Decode
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,*(undefined4 *)(param_1 + 0x10),param_2,param_3,param_4);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14335dc90 FUN_14335dc90 body=306 status=ok
// SIG undefined FUN_14335dc90(void)

undefined8 * FUN_14335dc90(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  cVar4 = (**(code **)(*param_1 + 0x58))();
  if (cVar4 == '\0') {
    puVar6 = (undefined8 *)FUN_1432cb240(param_1,param_2);
    return puVar6;
  }
  plVar8 = DAT_146b62f28;
  if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 2);
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x50))(plVar8,0x58);
  if (puVar6 != (undefined8 *)0x0) {
    lVar9 = *(longlong *)(param_2 + 6);
    lVar2 = param_1[4];
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(param_2 + 4) + 0x10, *(longlong *)(param_2 + 4) == 0)
       ) {
      lVar9 = 0;
    }
    lVar3 = param_1[5];
    uVar1 = *param_2;
    uVar7 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_1433cf020(puVar6,uVar5,uVar7,uVar1,lVar9,lVar2,lVar3,0);
    *puVar6 = &PTR_FUN_145b01b28;
    return puVar6;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14335ddd0 ReadHeader body=171 status=ok
// SIG undefined ReadHeader(void)

ulonglong Scaleform::Render::PNG::PNGFileImageSource::ReadHeader(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *in_RAX;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    in_RAX = (longlong *)(**(code **)(*plVar5 + 0x10))();
    if ((char)in_RAX != '\0') {
      lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1a8,0);
      in_RAX = (longlong *)0x0;
      if (lVar3 != 0) {
        in_RAX = (longlong *)FUN_14335def0(lVar3,plVar5);
        if (in_RAX != (longlong *)0x0) {
          plVar5 = in_RAX;
          if ((char)in_RAX[0x34] != '\0') goto LAB_14335de35;
          in_RAX = (longlong *)(**(code **)*in_RAX)(in_RAX,1);
        }
      }
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14335de35:
  *(longlong **)(param_1 + 0x38) = plVar5;
  if (plVar5 == (longlong *)0x0) {
    return (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
  uVar1 = puVar4[1];
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 14335de90 FUN_14335de90 body=87 status=ok
// SIG undefined FUN_14335de90(void)

void FUN_14335de90(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14368a660();
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3 & 0xffffffff);
  if ((-1 < iVar1) && ((longlong)iVar1 == param_3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Write Error.");
}



// FUNCTION 14335def0 FUN_14335def0 body=184 status=ok
// SIG undefined FUN_14335def0(void)

undefined8 * FUN_14335def0(undefined8 *param_1,RefCountImpl *param_2)

{
  char cVar1;
  int iVar2;
  char *_Src;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_145b01af8;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[0x33] = param_2;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      _guard_xfg_dispatch_icall_nop(param_1 + 1,0,400);
      _Src = (char *)(**(code **)(*(longlong *)param_2 + 8))(param_2);
      strcpy_s((char *)((longlong)param_1 + 0x94),0x100,_Src);
      iVar2 = (**(code **)(*(longlong *)param_2 + 0x50))(param_2,local_res8,8);
      if (iVar2 == 8) {
        iVar2 = FUN_14368a980(local_res8,0,8);
        if (iVar2 == 0) {
          FUN_14335e890(param_1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14335dfb0 FUN_14335dfb0 body=73 status=ok
// SIG undefined FUN_14335dfb0(void)

undefined8 * FUN_14335dfb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01ac0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 14335e000 FUN_14335e000 body=146 status=ok
// SIG undefined FUN_14335e000(void)

undefined8 * FUN_14335e000(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b01af8;
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_14368bf30(param_1 + 1,param_1 + 2,0);
  }
  if ((RefCountImpl *)param_1[0x33] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x33]);
  }
  *param_1 = &PTR_FUN_145b01ac0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 14335e0a0 FUN_14335e0a0 body=165 status=ok
// SIG undefined FUN_14335e0a0(void)

longlong FUN_14335e0a0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x38));
  FUN_1432caa70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14335e150 FUN_14335e150 body=121 status=ok
// SIG undefined FUN_14335e150(void)

undefined8 * FUN_14335e150(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b01bf8;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1433cefa0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14335e1d0 FUN_14335e1d0 body=850 status=ok
// SIG undefined FUN_14335e1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14335e1d0(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                       undefined1 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_2118 [32];
  undefined1 *local_20f8;
  undefined8 local_20f0;
  byte local_20e8;
  undefined4 local_20e4;
  uint local_20e0;
  longlong *local_20d8;
  undefined1 local_20c8 [16];
  void *local_20b8;
  size_t local_20a8;
  undefined1 local_2088 [4096];
  undefined1 local_1088 [16];
  undefined8 local_1078;
  undefined1 local_1048 [4096];
  undefined8 uStack_48;
  
  uStack_48 = 0x14335e201;
  uVar8 = 0;
  iVar1 = 0;
  local_20e8 = 1;
  uVar2 = FUN_14335e890();
  if ((char)uVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    return uVar2;
  }
  uVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x24) == 2) {
    iVar1 = (int)param_1[3] * 3;
    uVar2 = 3;
  }
  else {
    uVar2 = uVar8;
    if (*(int *)((longlong)param_1 + 0x24) == 6) {
      uVar2 = 1;
      iVar1 = (int)param_1[3] << 2;
      local_20e4 = 1;
      goto LAB_14335e25f;
    }
  }
  local_20e4 = (undefined4)uVar2;
LAB_14335e25f:
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x2c);
  }
  local_20e0 = iVar1 + 3U & 0xfffffffc;
  if ((int)uVar2 != 0) {
    local_20f8 = local_1048;
    local_20f0 = 0x1000;
    FUN_1433cf360(local_1088,uVar2,(int)param_1[3],param_2);
    local_20d8 = (longlong *)0x0;
    uVar3 = FUN_1436941a0(param_1[1],_guard_xfg_dispatch_icall_nop,0x100);
    iVar1 = _guard_xfg_dispatch_icall_nop(uVar3,auStack_2118);
    if (iVar1 != 0) {
      FUN_14368bf30(param_1 + 1,param_1 + 2,0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_20d8);
      *(undefined1 *)(param_1 + 0x34) = 0;
      uVar2 = Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1088);
      return uVar2 & 0xffffffffffffff00;
    }
    if ((int)param_1[5] == 0) {
      if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        do {
          iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_1078);
          if (iVar1 == 0) {
            local_20e8 = 0;
            break;
          }
          local_20f8 = param_5;
          FUN_1433cf480(local_1088,
                        *(longlong *)(*(longlong *)(param_3 + 0x10) + 8) * uVar8 +
                        *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x18),0,param_4);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)((longlong)param_1 + 0x1c));
      }
    }
    else {
      uVar2 = (ulonglong)local_20e0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_146b62f28 + 0x50))
                         (DAT_146b62f28,
                          (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) * local_20e0) +
                          (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 8,0);
      *plVar4 = (longlong)(plVar4 + *(uint *)((longlong)param_1 + 0x1c));
      if (1 < *(uint *)((longlong)param_1 + 0x1c)) {
        do {
          uVar6 = uVar7 - 1;
          uVar5 = (ulonglong)uVar7;
          uVar7 = uVar7 + 1;
          plVar4[uVar5] = plVar4[uVar6] + uVar2;
        } while (uVar7 < *(uint *)((longlong)param_1 + 0x1c));
      }
      local_20d8 = plVar4;
      iVar1 = (**(code **)(*param_1 + 8))(param_1,plVar4);
      if (iVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar4);
        FUN_14368bf30(param_1 + 1,param_1 + 2,0);
        *(undefined1 *)(param_1 + 0x34) = 0;
        uVar2 = Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1088);
        return uVar2 & 0xffffffffffffff00;
      }
      local_20f8 = local_2088;
      local_20f0 = 0x1000;
      FUN_1433cf360(local_20c8,local_20e4,(int)param_1[3],param_2);
      if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        do {
          _guard_xfg_dispatch_icall_nop(local_20b8,(void *)plVar4[uVar8],local_20a8);
          local_20f8 = param_5;
          FUN_1433cf480(local_20c8,
                        *(longlong *)(*(longlong *)(param_3 + 0x10) + 8) * uVar8 +
                        *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x18),0,param_4);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)((longlong)param_1 + 0x1c));
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar4);
      Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_20c8);
    }
    FUN_14368c270(param_1[1],0);
    Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1088);
  }
  FUN_14368bf30(param_1 + 1,param_1 + 2,0);
  *(undefined1 *)(param_1 + 0x34) = 0;
  return (ulonglong)local_20e8;
}



// FUNCTION 14335e530 FUN_14335e530 body=373 status=ok
// SIG undefined FUN_14335e530(void)

undefined1 FUN_14335e530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  lVar5 = *(longlong *)(param_1 + 0x38);
  local_40 = 1;
  local_48 = &PTR_FUN_145af8dd8;
  FUN_1432c31e0(&local_38,param_1 + 0x50);
  local_28 = (int)uVar1;
  local_24 = 0;
  if ((((*(ulonglong *)(*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) & 0x7fffffffffffffff)
        == 0) || (lVar5 == 0)) || (local_20 = 1, local_28 < 1)) {
    local_20 = 0;
  }
  local_30 = lVar5;
  cVar2 = (*(code *)local_48[2])(&local_48);
  if (cVar2 != '\0') {
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1a8,0);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_14335def0(lVar5,&local_48);
      if (plVar6 != (longlong *)0x0) {
        if ((char)plVar6[0x34] != '\0') {
          uVar3 = (**(code **)(*plVar6 + 0x18))
                            (plVar6,*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
          (**(code **)*plVar6)(plVar6,1);
          goto LAB_14335e627;
        }
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  uVar3 = 0;
LAB_14335e627:
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_38 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_48);
  return uVar3;
}



// FUNCTION 14335e6b0 FUN_14335e6b0 body=393 status=ok
// SIG undefined FUN_14335e6b0(void)

undefined8 FUN_14335e6b0(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  int *local_68;
  uint *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [2];
  
  uVar5 = FUN_1436941a0(*param_1,_guard_xfg_dispatch_icall_nop,0x100);
  iVar3 = _guard_xfg_dispatch_icall_nop(uVar5,auStack_88);
  if (iVar3 == 0) {
    FUN_14368a950(*param_1,8);
    FUN_14368c5d0(*param_1,param_1[1]);
    puVar1 = (uint *)((longlong)param_1 + 0x1c);
    piVar2 = (int *)(param_1 + 3);
    local_48 = 0;
    local_50 = 0;
    local_68 = piVar2;
    local_60 = puVar1;
    local_58 = param_1 + 4;
    FUN_143694330(*param_1,param_1[1],param_1 + 2,(longlong)param_1 + 0x14);
    if (*piVar2 == 0x10) {
      FUN_1436918f0(*param_1);
    }
    if (*puVar1 == 3) {
      FUN_1436916b0(*param_1);
    }
    if (*piVar2 < 8) {
      FUN_143691700(*param_1);
    }
    iVar3 = FUN_1436944a0(*param_1,param_1[1],0x10);
    if (iVar3 != 0) {
      FUN_143691910(*param_1);
    }
    if ((*puVar1 & 0xfffffffb) == 0) {
      FUN_1436917b0(*param_1);
    }
    iVar3 = FUN_143694410(*param_1,param_1[1],local_38);
    if (iVar3 != 0) {
      FUN_143691720(*param_1,0x400199999999999a,local_38[0]);
    }
    FUN_14368d030(*param_1,param_1[1]);
    local_48 = 0;
    local_50 = 0;
    local_68 = piVar2;
    local_60 = puVar1;
    local_58 = param_1 + 4;
    FUN_143694330(*param_1,param_1[1],param_1 + 2,(longlong)param_1 + 0x14);
    uVar4 = FUN_143694480(*param_1,param_1[1]);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14335e850 ReadData body=23 status=ok
// SIG undefined ReadData(void)

undefined8 Scaleform::Render::PNG::LibPNGInput::ReadData(longlong param_1)

{
  FUN_14368c500(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14335e870 ReadScanline body=26 status=ok
// SIG undefined ReadScanline(void)

undefined8 Scaleform::Render::PNG::LibPNGInput::ReadScanline(longlong param_1,undefined8 param_2)

{
  FUN_14368cae0(*(undefined8 *)(param_1 + 8),param_2,0);
  return 1;
}



// FUNCTION 14335e890 FUN_14335e890 body=260 status=ok
// SIG undefined FUN_14335e890(void)

undefined8 FUN_14335e890(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    return 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x198) + 0x80))();
  (**(code **)(**(longlong **)(param_1 + 0x198) + 0x58))(*(longlong **)(param_1 + 0x198),8);
  lVar2 = URpgStatComponent::GetValue("1.5.27",param_1 + 8,FUN_14335db70,0);
  *(longlong *)(param_1 + 8) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_143689f30(lVar2);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 == 0) {
    FUN_14368bf30(param_1 + 8,0,0);
    return 0;
  }
  FUN_1436922b0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x198),FUN_14335dbf0);
  iVar1 = FUN_14335e6b0(param_1 + 8);
  if (iVar1 == 0) {
    FUN_14368bf30(param_1 + 8,param_1 + 0x10,0);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  return 1;
}



// FUNCTION 14335e9a0 FUN_14335e9a0 body=76 status=ok
// SIG undefined FUN_14335e9a0(void)

undefined8 FUN_14335e9a0(void)

{
  char *local_18 [3];
  
  FUN_1433cf290(local_18);
  if ((((local_18[0] != (char *)0x0) && (*local_18[0] == 'D')) && (local_18[0][1] == 'D')) &&
     ((local_18[0][2] == 'S' && (local_18[0][3] == ' ')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14335ea00 ReadImageSource body=132 status=ok
// SIG undefined ReadImageSource(void)

longlong *
Scaleform::Render::DDS::FileReader::ReadImageSource
          (undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((param_2 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2), cVar1 == '\0')) {
    return (longlong *)0x0;
  }
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x70);
  if (lVar2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_14335edf0(lVar2,param_2,*(undefined4 *)(param_3 + 0x20));
    if ((plVar3 != (longlong *)0x0) && (cVar1 = FUN_14335ea90(plVar3), cVar1 == '\0')) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return (longlong *)0x0;
    }
  }
  return plVar3;
}



// FUNCTION 14335ea90 FUN_14335ea90 body=272 status=ok
// SIG undefined FUN_14335ea90(void)

undefined1 FUN_14335ea90(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_108 [256];
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
            (*(longlong **)(param_1 + 0x20),local_res10,4);
  if (local_res10[0] == 0x20534444) {
    local_res8[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
              (*(longlong **)(param_1 + 0x20),local_res8,4);
    if (local_res8[0] == 0x7c) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                        (*(longlong **)(param_1 + 0x20),local_108,0x78);
      if (iVar2 == 0x78) {
        cVar1 = FUN_14335f000(param_1 + 0x38,local_108,0);
        if (cVar1 == '\0') {
          return 0;
        }
        if (*(int *)(param_1 + 0x44) == 0x35) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                    (*(longlong **)(param_1 + 0x20),0x14,1);
        }
        *(undefined1 *)(param_1 + 0x68) = 0;
        FUN_14335eec0(param_1 + 0x4c);
        if (*(int *)(param_1 + 0x10) == 0) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x44);
        }
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x3c);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
        *(undefined8 *)(param_1 + 0x28) = uVar3;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14335ebb0 FUN_14335ebb0 body=561 status=ok
// SIG undefined FUN_14335ebb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_14335ebb0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *in_stack_ffffffffffffef68;
  undefined8 local_1088;
  longlong local_1080;
  undefined8 local_1078;
  longlong local_1070;
  int local_1068 [2];
  int local_1060;
  longlong local_1058;
  int local_1048;
  undefined1 local_1028 [4096];
  
  cVar1 = FUN_1433cefe0();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar9 = 0;
  uVar10 = *(uint *)(param_1 + 0x14);
  if (*(char *)((longlong)param_2 + 9) != '\0') {
    do {
      uVar7 = 0;
      local_1088 = 0;
      local_1080 = 0;
      local_1078 = 0;
      local_1070 = 0;
      if ((*(byte *)(param_2 + 2) & 1) == 0) {
        FUN_1432c73f0(*(undefined8 *)(param_2 + 4),*param_2,uVar9,&local_1088,
                      (ulonglong)in_stack_ffffffffffffef68 & 0xffffffff00000000);
      }
      else {
        iVar2 = FUN_1432c86a0(*param_2);
        FUN_1432c7ad0(param_2,iVar2 * uVar9,&local_1088);
      }
      in_stack_ffffffffffffef68 = local_1028;
      FUN_1433cf360(local_1068,*(undefined4 *)(param_1 + 0x44),uVar10,
                    *(undefined4 *)(param_1 + 0x10),in_stack_ffffffffffffef68,0x1000);
      iVar2 = local_1048;
      lVar8 = (longlong)local_1048;
      if (((local_1068[0] == 0) || (local_1060 == 0)) || (local_1058 == 0)) {
LAB_14335ed9c:
        Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1068);
        return 0;
      }
      lVar4 = FUN_1432c89d0(*(undefined4 *)(param_1 + 0x10),uVar6,0);
      if (lVar4 != 0) {
        do {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                            (*(longlong **)(param_1 + 0x20),local_1058,iVar2);
          if (iVar3 != iVar2) goto LAB_14335ed9c;
          if ((*(int *)(param_1 + 0x10) - 1U & 0xfffffffd) == 0) {
            FUN_14335f190(local_1058,lVar8,*(int *)(param_1 + 0x10),param_1 + 0x4c);
          }
          in_stack_ffffffffffffef68 = param_4;
          FUN_1433cf480(local_1068,uVar7 * local_1080 + local_1070,0,param_3,param_4);
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar5 = FUN_1432c89d0(*(undefined4 *)(param_1 + 0x10),uVar6,0);
        } while (uVar7 < uVar5);
      }
      uVar10 = uVar10 >> 1;
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1068);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)((longlong)param_2 + 9));
  }
  return 1;
}



// FUNCTION 14335edf0 FUN_14335edf0 body=83 status=ok
// SIG undefined FUN_14335edf0(void)

undefined8 * FUN_14335edf0(undefined8 *param_1)

{
  undefined1 uVar1;
  
  FUN_1433cef20();
  *param_1 = &PTR_FUN_145b01cb8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar1 = *(undefined1 *)((longlong)param_1 + 100);
  *(undefined1 *)((longlong)param_1 + 99) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x62) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x61) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 14335ee50 FUN_14335ee50 body=99 status=ok
// SIG undefined FUN_14335ee50(void)

undefined8 * FUN_14335ee50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01cb8;
  FUN_1433cefa0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14335eec0 FUN_14335eec0 body=319 status=ok
// SIG undefined FUN_14335eec0(void)

void FUN_14335eec0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  cVar3 = '\0';
  cVar1 = '\0';
  if (uVar2 != 0) {
    if ((uVar2 & 0xffffff) == 0) {
      uVar2 = uVar2 >> 0x18;
      cVar1 = '\x18';
    }
    else if ((short)uVar2 == 0) {
      uVar2 = uVar2 >> 0x10;
      cVar1 = '\x10';
    }
    else {
      cVar1 = '\0';
      if ((char)uVar2 == '\0') {
        uVar2 = uVar2 >> 8;
        cVar1 = '\b';
      }
    }
    for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
      cVar1 = cVar1 + '\x01';
    }
  }
  *(char *)(param_1 + 0x15) = cVar1;
  cVar1 = '\0';
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    if ((uVar2 & 0xffffff) == 0) {
      uVar2 = uVar2 >> 0x18;
      cVar1 = '\x18';
    }
    else if ((short)uVar2 == 0) {
      uVar2 = uVar2 >> 0x10;
      cVar1 = '\x10';
    }
    else {
      cVar1 = '\0';
      if ((char)uVar2 == '\0') {
        uVar2 = uVar2 >> 8;
        cVar1 = '\b';
      }
    }
    for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  *(char *)(param_1 + 0x16) = cVar1;
  cVar1 = '\0';
  if (uVar2 != 0) {
    if ((uVar2 & 0xffffff) == 0) {
      uVar2 = uVar2 >> 0x18;
      cVar1 = '\x18';
    }
    else if ((short)uVar2 == 0) {
      uVar2 = uVar2 >> 0x10;
      cVar1 = '\x10';
    }
    else {
      cVar1 = '\0';
      if ((char)uVar2 == '\0') {
        uVar2 = uVar2 >> 8;
        cVar1 = '\b';
      }
    }
    for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  *(char *)(param_1 + 0x17) = cVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 0xffffff) == 0) {
      uVar2 = uVar2 >> 0x18;
      cVar3 = '\x18';
    }
    else if ((short)uVar2 == 0) {
      uVar2 = uVar2 >> 0x10;
      cVar3 = '\x10';
    }
    else {
      cVar3 = '\0';
      if ((char)uVar2 == '\0') {
        uVar2 = uVar2 >> 8;
        cVar3 = '\b';
      }
    }
    for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
      cVar3 = cVar3 + '\x01';
    }
  }
  *(char *)(param_1 + 0x18) = cVar3;
  return;
}



// FUNCTION 14335f000 FUN_14335f000 body=389 status=ok
// SIG undefined FUN_14335f000(void)

ulonglong FUN_14335f000(uint *param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_2;
  if ((uVar1 & 2) != 0) {
    param_1[1] = param_2[1];
  }
  if ((uVar1 & 4) != 0) {
    *param_1 = param_2[2];
  }
  puVar4 = (uint *)(ulonglong)param_2[3];
  if ((uVar1 & 8) == 0) {
    if ((uVar1 >> 0x13 & 1) != 0) {
      puVar4 = (uint *)(ulonglong)(param_2[3] / param_1[1] << 2);
      goto LAB_14335f040;
    }
  }
  else {
LAB_14335f040:
    param_1[2] = (uint)puVar4;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar4 = (uint *)(ulonglong)param_2[5];
    param_1[4] = param_2[5];
  }
  if ((uVar1 >> 0xc & 1) == 0) {
    puVar5 = param_2 + 0x19;
  }
  else {
    puVar4 = (uint *)(ulonglong)param_2[0x11];
    if (param_2[0x11] != 0x20) goto LAB_14335f165;
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    puVar5 = param_2 + 0x14;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x42) != 0) {
        uVar3 = *puVar5;
        puVar4 = (uint *)(ulonglong)uVar3;
        param_1[5] = uVar3;
        if (uVar3 == 8) {
          if ((uVar2 & 2) == 0) goto LAB_14335f165;
          param_1[3] = 9;
        }
        else if (uVar3 == 0x18) {
          param_1[3] = 3;
        }
        else {
          if (uVar3 != 0x20) goto LAB_14335f165;
          param_1[3] = 1;
        }
        if ((uVar1 & 8) == 0) {
          param_1[2] = (uVar3 >> 3) * *param_1;
        }
        param_1[6] = param_2[0x15];
        param_1[7] = param_2[0x16];
        param_1[8] = param_2[0x17];
        puVar4 = (uint *)(ulonglong)param_2[0x18];
        puVar5 = param_2 + 0x19;
        if ((uVar2 & 1) != 0) {
          param_1[9] = param_2[0x18];
          *(undefined1 *)(param_1 + 10) = 1;
        }
      }
    }
    else if (uVar3 == 0x35545844) {
      param_1[3] = 0x34;
      puVar5 = param_2 + 0x19;
    }
    else if (uVar3 == 0x33545844) {
      param_1[3] = 0x33;
      puVar5 = param_2 + 0x19;
    }
    else if (uVar3 == 0x31545844) {
      param_1[3] = 0x32;
      puVar5 = param_2 + 0x19;
    }
    else {
      puVar4 = (uint *)(ulonglong)(uVar3 + 0xcdaba7bc);
      if (((uVar3 + 0xcdaba7bc & 0xfdffffff) == 0) || (uVar3 != 0x30315844)) goto LAB_14335f165;
      param_1[3] = 0x35;
      puVar5 = param_2 + 0x19;
    }
    if (param_1[3] == 0) {
LAB_14335f165:
      return (ulonglong)puVar4 & 0xffffffffffffff00;
    }
  }
  if (param_3 != (longlong *)0x0) {
    puVar4 = puVar5 + 5;
    *param_3 = (longlong)puVar4;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



// FUNCTION 14335f190 FUN_14335f190 body=331 status=ok
// SIG undefined FUN_14335f190(void)

undefined8 FUN_14335f190(longlong param_1,ulonglong param_2,int param_3,longlong param_4)

{
  uint3 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_3 == 3) {
    if (param_2 != 0) {
      uVar4 = 0;
      uVar5 = 1;
      do {
        uVar1 = CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar5 + 1) + param_1),
                                  *(undefined1 *)((ulonglong)uVar5 + param_1)),
                         *(undefined1 *)(uVar4 + param_1));
        *(char *)((ulonglong)(uVar5 + 1) + param_1) =
             (char)(uVar1 >> (*(byte *)(param_4 + 0x17) & 0x1f));
        *(char *)((ulonglong)uVar5 + param_1) = (char)(uVar1 >> (*(byte *)(param_4 + 0x16) & 0x1f));
        *(char *)(uVar4 + param_1) = (char)(uVar1 >> (*(byte *)(param_4 + 0x15) & 0x1f));
        uVar4 = (ulonglong)(uVar5 + 2);
        uVar5 = uVar5 + 3;
      } while (uVar4 < param_2);
      return 1;
    }
  }
  else if ((param_3 == 1) && (param_2 != 0)) {
    uVar4 = 0;
    uVar5 = 3;
    do {
      uVar3 = (ulonglong)uVar5;
      uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar3 + param_1),
                                         *(undefined1 *)((ulonglong)(uVar5 - 1) + param_1)),
                                *(undefined1 *)((ulonglong)(uVar5 - 2) + param_1)),
                       *(undefined1 *)(uVar4 + param_1));
      *(char *)((ulonglong)(uVar5 - 1) + param_1) =
           (char)(uVar2 >> (*(byte *)(param_4 + 0x17) & 0x1f));
      *(char *)((ulonglong)(uVar5 - 2) + param_1) =
           (char)(uVar2 >> (*(byte *)(param_4 + 0x16) & 0x1f));
      *(char *)(uVar4 + param_1) = (char)(uVar2 >> (*(byte *)(param_4 + 0x15) & 0x1f));
      if (*(char *)(param_4 + 0x14) == '\0') {
        *(undefined1 *)(uVar3 + param_1) = 0xff;
      }
      else {
        *(char *)(uVar3 + param_1) = (char)(uVar2 >> (*(byte *)(param_4 + 0x18) & 0x1f));
      }
      uVar4 = (ulonglong)(uVar5 + 1);
      uVar5 = uVar5 + 4;
    } while (uVar4 < param_2);
  }
  return 1;
}



// FUNCTION 14335f2e0 FUN_14335f2e0 body=66 status=ok
// SIG undefined FUN_14335f2e0(void)

void * FUN_14335f2e0(void *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined1 *)((longlong)param_1 + 0xd);
  lVar2 = 100;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)((longlong)param_1 + 0x640) = 0;
  *(undefined4 *)((longlong)param_1 + 0x648) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x640);
  return param_1;
}



// FUNCTION 14335f330 FUN_14335f330 body=128 status=ok
// SIG undefined FUN_14335f330(void)

void FUN_14335f330(longlong param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x648) < 100) {
    *(undefined2 *)(param_1 + 4 + (ulonglong)*(uint *)(param_1 + 0x640) * 0x10) = param_2;
    *(undefined1 *)(param_1 + 0xc + (ulonglong)*(uint *)(param_1 + 0x640) * 0x10) = param_3;
    *(undefined4 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x640) * 0x10) = param_4;
    *(undefined4 *)(param_1 + 8 + (ulonglong)*(uint *)(param_1 + 0x640) * 0x10) = param_5;
    *(undefined1 *)(param_1 + 0xd + (ulonglong)*(uint *)(param_1 + 0x640) * 0x10) = param_6;
    *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
    uVar1 = *(uint *)(param_1 + 0x640);
    if (99 < *(uint *)(param_1 + 0x640)) {
      uVar1 = 0;
    }
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x640) = uVar1;
  }
  return;
}



// FUNCTION 14335f4a0 FUN_14335f4a0 body=176 status=ok
// SIG undefined FUN_14335f4a0(void)

undefined8 * FUN_14335f4a0(undefined8 *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  lVar2 = 100;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b01d28;
  *(undefined4 *)(param_1 + 1) = 1;
  puVar1 = (undefined1 *)((longlong)param_1 + 0x25);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 3,0,0x640);
  param_1[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x665) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x675) = 0;
  *(undefined4 *)((longlong)param_1 + 0x67d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x681) = 0;
  *(undefined2 *)((longlong)param_1 + 0x682) = 0;
  *(undefined1 *)((longlong)param_1 + 0x684) = 0;
  return param_1;
}



// FUNCTION 14335f560 IsKeyDown body=58 status=ok
// SIG undefined IsKeyDown(void)

ulonglong Scaleform::GFx::KeyboardState::IsKeyDown(longlong param_1,uint param_2)

{
  ulonglong in_RAX;
  
  if (param_2 < 0xe5) {
    return CONCAT71((int7)(int3)((int)param_2 >> 0xb),
                    (*(byte *)((longlong)((int)param_2 >> 3) + 0x665 + param_1) &
                    '\x01' << ((char)param_2 + (char)((int)param_2 >> 3) * -8 & 0x1fU)) != 0);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14335f5a0 FUN_14335f5a0 body=42 status=ok
// SIG undefined FUN_14335f5a0(void)

ulonglong FUN_14335f5a0(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  
  if (param_2 == 0x14) {
    return (ulonglong)*(byte *)(param_1 + 0x683);
  }
  if (param_2 != 0x90) {
    if (param_2 != 0x91) {
      return in_RAX & 0xffffffffffffff00;
    }
    return (ulonglong)*(byte *)(param_1 + 0x684);
  }
  return (ulonglong)*(byte *)(param_1 + 0x682);
}



// FUNCTION 14335f5d0 FUN_14335f5d0 body=39 status=ok
// SIG undefined FUN_14335f5d0(void)

void FUN_14335f5d0(longlong param_1,int param_2,undefined1 param_3)

{
  if (param_2 == 0x14) {
    *(undefined1 *)(param_1 + 0x683) = param_3;
  }
  else {
    if (param_2 == 0x90) {
      *(undefined1 *)(param_1 + 0x682) = param_3;
      return;
    }
    if (param_2 == 0x91) {
      *(undefined1 *)(param_1 + 0x684) = param_3;
      return;
    }
  }
  return;
}



// FUNCTION 14335f600 FUN_14335f600 body=104 status=ok
// SIG undefined FUN_14335f600(void)

void FUN_14335f600(longlong param_1,uint param_2,undefined8 param_3,undefined1 param_4,char param_5)

{
  int iVar1;
  
  if (param_2 < 0xe5) {
    iVar1 = (int)param_2 >> 3;
    *(byte *)((longlong)iVar1 + 0x665 + param_1) =
         *(byte *)((longlong)iVar1 + 0x665 + param_1) | (byte)(1 << (param_2 + iVar1 * -8 & 0x1f));
    if (param_5 != '\0') {
      FUN_14335f330(param_1 + 0x18,param_2,param_3,0,5,param_4);
    }
  }
  return;
}



// FUNCTION 14335f670 FUN_14335f670 body=104 status=ok
// SIG undefined FUN_14335f670(void)

void FUN_14335f670(longlong param_1,uint param_2,undefined8 param_3,undefined1 param_4,char param_5)

{
  int iVar1;
  
  if (param_2 < 0xe5) {
    iVar1 = (int)param_2 >> 3;
    *(byte *)((longlong)iVar1 + 0x665 + param_1) =
         *(byte *)((longlong)iVar1 + 0x665 + param_1) & ~(byte)(1 << (param_2 + iVar1 * -8 & 0x1f));
    if (param_5 != '\0') {
      FUN_14335f330(param_1 + 0x18,param_2,param_3,0,6,param_4);
    }
  }
  return;
}



// FUNCTION 14335f780 SetOwnerAsset body=5 status=ok
// SIG undefined SetOwnerAsset(void)

void FStringTable::SetOwnerAsset(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 14335f790 NotifyListeners body=39 status=ok
// SIG undefined NotifyListeners(void)

void Scaleform::GFx::KeyboardState::NotifyListeners
               (longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*param_3 == 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00014335f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
    if (*param_3 == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00014335f7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14335f7c0 FUN_14335f7c0 body=17 status=ok
// SIG undefined FUN_14335f7c0(void)

void FUN_14335f7c0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014335f7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    return;
  }
  return;
}



// FUNCTION 14335f7e0 ResetState body=95 status=ok
// SIG undefined ResetState(void)

void Scaleform::GFx::KeyboardState::ResetState(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x18),0,0x640);
  *(undefined8 *)(param_1 + 0x665) = 0;
  *(undefined8 *)(param_1 + 0x66d) = 0;
  *(undefined8 *)(param_1 + 0x675) = 0;
  *(undefined4 *)(param_1 + 0x67d) = 0;
  *(undefined1 *)(param_1 + 0x681) = 0;
  *(undefined2 *)(param_1 + 0x682) = 0;
  *(undefined1 *)(param_1 + 0x684) = 0;
  return;
}



// FUNCTION 14335f850 FUN_14335f850 body=101 status=ok
// SIG undefined FUN_14335f850(void)

byte * FUN_14335f850(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x667);
  *param_2 = 0;
  *param_2 = bVar1 & 4;
  if ((bVar1 & 2) == 0) {
    *param_2 = *param_2 & 0xfd;
  }
  else {
    *param_2 = *param_2 | 2;
  }
  if ((bVar1 & 1) == 0) {
    *param_2 = *param_2 & 0xfe;
  }
  else {
    *param_2 = *param_2 | 1;
  }
  if (*(char *)(param_1 + 0x682) == '\0') {
    *param_2 = *param_2 & 0xef;
  }
  else {
    *param_2 = *param_2 | 0x10;
  }
  if (*(char *)(param_1 + 0x683) == '\0') {
    *param_2 = *param_2 & 0xf7;
  }
  else {
    *param_2 = *param_2 | 8;
  }
  if (*(char *)(param_1 + 0x684) != '\0') {
    *param_2 = *param_2 | 0x20;
    return param_2;
  }
  *param_2 = *param_2 & 0xdf;
  return param_2;
}



// FUNCTION 14335f8c0 FUN_14335f8c0 body=89 status=ok
// SIG undefined FUN_14335f8c0(void)

RefCountImplCore * FUN_14335f8c0(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x688);
  }
  return param_1;
}



// FUNCTION 14335f920 FUN_14335f920 body=74 status=ok
// SIG undefined FUN_14335f920(void)

void FUN_14335f920(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((lVar2 != param_1) && (lVar2 != 0)) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  local_res8[0] = param_1;
  FUN_1433612d0(*(longlong *)(param_1 + 8) + 0x18,local_res8);
  FUN_143361710(*(undefined8 *)(param_1 + 8),param_1);
  return;
}



// FUNCTION 14335f970 FUN_14335f970 body=201 status=ok
// SIG undefined FUN_14335f970(void)

void FUN_14335f970(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar2 = FUN_1432c3140(&local_res10,*param_1,*(undefined4 *)(param_1 + 4));
  FUN_1432c4000(uVar2,&local_res8);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  puVar3 = (undefined8 *)
           FUN_143360a90(param_1[1],(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                         *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  if ((puVar3 != (undefined8 *)(param_1[1] + 0x48)) && (param_1[2] = puVar3, puVar3 != param_1)) {
    *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14335fa40 FUN_14335fa40 body=25 status=ok
// SIG undefined FUN_14335fa40(void)

uint FUN_14335fa40(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1432c4390(param_1,param_2,0x1505);
  return uVar1 & 0xffffff;
}



// FUNCTION 14335fa60 FUN_14335fa60 body=98 status=ok
// SIG undefined FUN_14335fa60(void)

int FUN_14335fa60(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  puVar4 = (undefined8 *)*param_1;
  iVar2 = *(int *)(puVar4 + 4);
  if ((*(uint *)((longlong)puVar4 + 0x1c) & 0x8000000) != 0) {
    return iVar2;
  }
  iVar3 = *(int *)(puVar4 + 5);
  if (iVar3 == -1) {
    uVar5 = FUN_143305cd0(*puVar4,iVar2);
    *(undefined4 *)(*param_1 + 0x28) = uVar5;
    if (*(int *)(*param_1 + 0x28) == iVar2) {
      puVar1 = (uint *)(*param_1 + 0x1c);
      *puVar1 = *puVar1 | 0x8000000;
    }
    iVar3 = *(int *)(*param_1 + 0x28);
  }
  return iVar3;
}



// FUNCTION 14335fad0 FUN_14335fad0 body=151 status=ok
// SIG undefined FUN_14335fad0(void)

int FUN_14335fad0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  
  plVar1 = (longlong *)*param_1;
  if ((*(uint *)((longlong)plVar1 + 0x1c) & 0x8000000) == 0) {
    if ((*(uint *)((longlong)plVar1 + 0x2c) == 0xffffffff) ||
       (param_2 < *(uint *)((longlong)plVar1 + 0x2c))) {
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0;
      ((undefined8 *)*param_1)[6] = *(undefined8 *)*param_1;
    }
    local_res8 = *(undefined8 *)(*param_1 + 0x30);
    iVar3 = param_2 - *(int *)(*param_1 + 0x2c);
    do {
      *(undefined8 *)(*param_1 + 0x30) = local_res8;
      iVar2 = FUN_143307250(&local_res8);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *(uint *)(*param_1 + 0x2c) = param_2;
    return iVar2;
  }
  return (int)*(char *)((ulonglong)param_2 + *plVar1);
}



// FUNCTION 14335fb70 GetFirstCharAt body=85 status=ok
// SIG undefined GetFirstCharAt(void)

void Scaleform::GFx::ASConstString::GetFirstCharAt
               (longlong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)*param_1;
  uVar1 = (uint)((ulonglong *)*param_1)[4] + local_res8;
  do {
    FUN_143307250(&local_res8);
    param_2 = param_2 + -1;
    if (uVar1 <= local_res8) {
      return;
    }
  } while (-1 < param_2);
  *param_3 = local_res8;
  return;
}



// FUNCTION 14335fbd0 FUN_14335fbd0 body=60 status=ok
// SIG undefined FUN_14335fbd0(void)

ulonglong FUN_14335fbd0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*(uint *)(*param_1 + 0x1c) & 0x8000000) != 0) {
    cVar1 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    return (ulonglong)(uint)(int)cVar1;
  }
  uVar2 = FUN_143307250(param_2);
  if ((int)uVar2 == 0) {
    *param_2 = *param_2 + -1;
  }
  return uVar2;
}



// FUNCTION 14335fc20 FUN_14335fc20 body=119 status=ok
// SIG undefined FUN_14335fc20(void)

void FUN_14335fc20(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  local_res8 = 0;
  FUN_143307100(local_res18,8,&local_res8,param_2);
  puVar1 = (undefined8 *)*param_1;
  lVar2 = FUN_143360bc0(puVar1[1],*puVar1,*(undefined4 *)(puVar1 + 4),local_res18,local_res8);
  if (((*(uint *)(*param_1 + 0x1c) & 0x8000000) != 0) && (param_2 < 0x80)) {
    *(uint *)(lVar2 + 0x1c) = *(uint *)(lVar2 + 0x1c) | 0x8000000;
  }
  return;
}



// FUNCTION 14335fca0 FUN_14335fca0 body=92 status=ok
// SIG undefined FUN_14335fca0(void)

void FUN_14335fca0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = FUN_143360bc0(puVar1[1],*puVar1,*(undefined4 *)(puVar1 + 4),*(undefined8 *)*param_2,
                        *(undefined4 *)((undefined8 *)*param_2 + 4));
  if (((*(uint *)(*param_1 + 0x1c) & 0x8000000) != 0) &&
     ((*(uint *)(*param_2 + 0x1c) & 0x8000000) != 0)) {
    *(uint *)(lVar2 + 0x1c) = *(uint *)(lVar2 + 0x1c) | 0x8000000;
  }
  return;
}



// FUNCTION 14335fd10 FUN_14335fd10 body=187 status=ok
// SIG undefined FUN_14335fd10(void)

longlong FUN_14335fd10(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  
  if (param_2 == param_3) {
    return ((ulonglong *)*param_1)[1] + 0x48;
  }
  uVar1 = *(ulonglong *)*param_1;
  iVar4 = 0;
  uVar6 = uVar1;
  local_res20 = uVar1;
  do {
    if (iVar4 == param_2) {
      uVar6 = local_res20;
    }
    iVar2 = FUN_143307250(&local_res20);
    if (iVar2 == 0) {
      local_res20 = local_res20 - 1;
    }
    iVar4 = iVar4 + 1;
    uVar5 = local_res20;
    if (iVar4 == param_3) goto LAB_14335fd97;
  } while (iVar2 != 0);
  uVar5 = uVar1;
  if (iVar4 < param_3) {
    uVar5 = local_res20;
  }
LAB_14335fd97:
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
  }
  lVar3 = FUN_143360a90(*(undefined8 *)(*param_1 + 8),uVar6,(longlong)((int)uVar5 - (int)uVar6));
  return lVar3;
}



// FUNCTION 14335fde0 TruncateWhitespaceNode body=130 status=ok
// SIG undefined TruncateWhitespaceNode(void)

longlong Scaleform::GFx::ASConstString::TruncateWhitespaceNode(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char *local_28;
  size_t local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = (ulonglong)*(uint *)((undefined8 *)*param_1 + 4);
  local_18 = *(char **)*param_1;
  FUN_1432c63b0(&local_18,&local_28);
  if ((local_10 == local_20) &&
     ((local_18 == local_28 ||
      (((local_28 != (char *)0x0 && (local_18 != (char *)0x0)) &&
       (iVar1 = strncmp(local_28,local_18,local_20), iVar1 == 0)))))) {
    return *param_1;
  }
  lVar2 = FUN_143360a90(*(undefined8 *)(*param_1 + 8),local_28,local_20);
  return lVar2;
}



// FUNCTION 14335fe70 FUN_14335fe70 body=189 status=ok
// SIG undefined FUN_14335fe70(void)

undefined8 FUN_14335fe70(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar2 = FUN_1432c3140(&local_res10,*(undefined8 *)*param_1,
                        *(undefined4 *)((undefined8 *)*param_1 + 4));
  FUN_1432c3f00(uVar2,&local_res8);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  uVar2 = FUN_143360a90(*(undefined8 *)(*param_1 + 8),
                        (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return uVar2;
}



// FUNCTION 14335ff40 ToLowerNode body=50 status=ok
// SIG undefined ToLowerNode(void)

longlong Scaleform::GFx::ASConstString::ToLowerNode(longlong *param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(*param_1 + 0x10) == 0) {
    FUN_14335f970();
  }
  lVar1 = *(longlong *)(*param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*param_1 + 8) + 0x48;
  }
  return lVar1;
}



// FUNCTION 14335ff80 FUN_14335ff80 body=379 status=ok
// SIG undefined FUN_14335ff80(void)

int FUN_14335ff80(longlong *param_1,longlong param_2,ulonglong param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  ulonglong uVar6;
  wchar_t local_418 [256];
  wchar_t local_218 [256];
  
  if (param_3 == 0xffffffffffffffff) {
    param_3 = 0xffffffffffffffff;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_3 + param_2) != '\0');
  }
  puVar3 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(puVar3 + 4);
  uVar6 = (ulonglong)uVar2;
  if ((*(uint *)((longlong)puVar3 + 0x1c) & 0x8000000) == 0) {
    if (*(uint *)(puVar3 + 5) == 0xffffffff) {
      uVar4 = FUN_143305cd0(*puVar3,uVar6);
      *(undefined4 *)(*param_1 + 0x28) = uVar4;
      if (*(uint *)(*param_1 + 0x28) == uVar2) {
        puVar1 = (uint *)(*param_1 + 0x1c);
        *puVar1 = *puVar1 | 0x8000000;
      }
      uVar6 = (ulonglong)*(uint *)(*param_1 + 0x28);
    }
    else {
      uVar6 = (ulonglong)*(uint *)(puVar3 + 5);
    }
  }
  if (uVar6 < 0xfa) {
    _Str1 = local_418;
  }
  else {
    _Str1 = (wchar_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar6 * 2 + 2,0);
  }
  if (param_3 < 0xfa) {
    _Str2 = local_218;
  }
  else {
    _Str2 = (wchar_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_3 * 2 + 2,0);
  }
  FUN_143306bc0(_Str1,uVar6 + 1,*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 4))
  ;
  FUN_143306bc0(_Str2,param_3 + 1,param_2,param_3);
  if (param_4 == '\0') {
    iVar5 = _wcsicoll(_Str1,_Str2);
  }
  else {
    iVar5 = wcscoll(_Str1,_Str2);
  }
  if (_Str1 != local_418) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Str1);
  }
  if (_Str2 != local_218) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Str2);
  }
  return iVar5;
}



// FUNCTION 143360110 FUN_143360110 body=16 status=ok
// SIG undefined FUN_143360110(void)

void FUN_143360110(longlong *param_1)

{
  FUN_143361630(param_1,*(longlong *)(*param_1 + 8) + 0x48);
  return;
}



// FUNCTION 143360130 FUN_143360130 body=55 status=ok
// SIG undefined FUN_143360130(void)

void FUN_143360130(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_143360bc0(puVar1[1],*puVar1,*(undefined4 *)(puVar1 + 4),param_2,param_3);
  FUN_143361630(param_1,uVar2);
  return;
}



// FUNCTION 143360170 FUN_143360170 body=59 status=ok
// SIG undefined FUN_143360170(void)

void FUN_143360170(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_143360bc0(puVar1[1],*puVar1,*(undefined4 *)(puVar1 + 4),*(undefined8 *)*param_2,
                        *(undefined4 *)((undefined8 *)*param_2 + 4));
  FUN_143361630(param_1,uVar2);
  return;
}



// FUNCTION 1433601c0 FUN_1433601c0 body=51 status=ok
// SIG undefined FUN_1433601c0(void)

void FUN_1433601c0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  uVar1 = FUN_143360a90(*(undefined8 *)(*param_1 + 8));
  FUN_143361630(param_1,uVar1);
  return;
}



// FUNCTION 143360200 FUN_143360200 body=74 status=ok
// SIG undefined FUN_143360200(void)

longlong * FUN_143360200(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_3 + lVar2) != '\0');
  lVar2 = FUN_143360bc0(puVar1[1],*puVar1,*(undefined4 *)(puVar1 + 4),param_3,lVar2);
  *param_2 = lVar2;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  return param_2;
}



// FUNCTION 143360250 operator+ body=58 status=ok
// SIG undefined operator+(void)

longlong *
Scaleform::GFx::ASString::operator+(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = FUN_143360bc0(puVar1[1],*puVar1,*(undefined4 *)(puVar1 + 4),*(undefined8 *)*param_3,
                        *(undefined4 *)((undefined8 *)*param_3 + 4));
  *param_2 = lVar2;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  return param_2;
}



// FUNCTION 143360290 FUN_143360290 body=106 status=ok
// SIG undefined FUN_143360290(void)

ulonglong FUN_143360290(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*param_2;
  if (puVar3 == puVar4) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(puVar4 + 4);
  uVar2 = *(uint *)(puVar3 + 4);
  uVar5 = uVar1;
  if (uVar2 < uVar1) {
    uVar5 = uVar2;
  }
  iVar6 = _guard_xfg_dispatch_icall_nop((void *)*puVar3,(void *)*puVar4,(ulonglong)uVar5);
  if (iVar6 != 0) {
    return (ulonglong)(iVar6 < 0);
  }
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar6) >> 8),uVar2 < uVar1);
}



// FUNCTION 143360300 FUN_143360300 body=114 status=ok
// SIG undefined FUN_143360300(void)

void FUN_143360300(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                    (*(longlong **)(param_1 + 0x10),0x1bd0,0);
  if (lVar1 != 0) {
    lVar3 = 0x7f;
    *(undefined8 *)(lVar1 + 0x1bc8) = *(undefined8 *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x30) = lVar1;
    puVar2 = (undefined8 *)(lVar1 + 0x28);
    do {
      puVar2[-4] = param_1;
      *puVar2 = 0xffffffffffffffff;
      puVar2[1] = 0;
      puVar2[-5] = 0;
      puVar2[-3] = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar2 + -5;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 7;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143360380 FUN_143360380 body=142 status=ok
// SIG undefined FUN_143360380(void)

void FUN_143360380(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                    (*(longlong **)(param_1 + 0x10),0x7f8,0);
  uVar5 = lVar3 + 7U & 0xfffffffffffffff8;
  if (uVar5 != 0) {
    *(longlong *)(uVar5 + 0x7e8) = lVar3;
    lVar3 = 0x15;
    *(undefined8 *)(uVar5 + 0x7e0) = *(undefined8 *)(param_1 + 0x40);
    puVar4 = (undefined8 *)(uVar5 + 0x20);
    *(ulonglong *)(param_1 + 0x40) = uVar5;
    do {
      puVar4[-4] = *(undefined8 *)(param_1 + 0x38);
      puVar4[-2] = puVar4 + -4;
      puVar1 = puVar4 + 4;
      *puVar4 = puVar4 + -2;
      puVar4[2] = puVar4;
      *puVar1 = puVar4 + 2;
      puVar2 = puVar4 + 6;
      puVar4 = puVar4 + 0xc;
      *puVar2 = puVar1;
      *(undefined8 **)(param_1 + 0x38) = puVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143360420 FUN_143360420 body=82 status=ok
// SIG undefined FUN_143360420(void)

undefined8 * FUN_143360420(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (0xf < param_2) {
                    /* WARNING: Could not recover jumptable at 0x000143360468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                       (*(longlong **)(param_1 + 0x10),param_2 + 1,0);
    return puVar1;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_143360380();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143360480 FUN_143360480 body=137 status=ok
// SIG undefined FUN_143360480(void)

undefined8 * FUN_143360480(longlong param_1,void *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  
  if (param_3 < 0x10) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_143360380();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    _Dst = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = *puVar1;
      _Dst = puVar1;
    }
  }
  else {
    _Dst = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),param_3 + 1,0);
  }
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
  }
  return _Dst;
}



// FUNCTION 143360540 FUN_143360540 body=284 status=ok
// SIG undefined FUN_143360540(void)

undefined8 * FUN_143360540(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *local_res8;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b01d30;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x17] = 0;
  FUN_1432c5250(param_1 + 0x18);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar2 = FUN_1432c4390(&DAT_145af3922,0,0x1505);
  puVar1 = param_1 + 9;
  param_1[10] = param_1;
  *puVar1 = &DAT_145af3922;
  param_1[0xb] = puVar1;
  *(uint *)((longlong)param_1 + 100) = uVar2 & 0xffffff | 0xc8000000;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  local_res8 = puVar1;
  FUN_1433613d0(param_1 + 3,param_1[4],&local_res8,*(undefined4 *)((longlong)param_1 + 100));
  param_1[0x10] = *puVar1;
  param_1[0x11] = param_1[10];
  param_1[0x12] = param_1[0xb];
  param_1[0x13] = param_1[0xc];
  param_1[0x14] = param_1[0xd];
  param_1[0x15] = param_1[0xe];
  param_1[0x16] = param_1[0xf];
  param_1[0x12] = param_1 + 0x10;
  return param_1;
}



// FUNCTION 143360670 FUN_143360670 body=613 status=ok
// SIG undefined FUN_143360670(void)

void FUN_143360670(RefCountImplCore *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *local_48 [6];
  
  *(undefined ***)param_1 = &PTR_FUN_145b01d30;
  FUN_1432c5960(local_48,DAT_146b62f28);
  uVar10 = 0;
  lVar9 = *(longlong *)(param_1 + 0x30);
  while (lVar9 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    lVar9 = 0x7f;
    *(longlong *)(param_1 + 0x30) = plVar1[0x379];
    plVar8 = plVar1;
    do {
      if (*plVar8 != 0) {
        if (uVar10 < 0x10) {
          puVar6 = &DAT_145afba48;
          if (uVar10 != 0) {
            puVar6 = &DAT_145b01d38;
          }
          Scaleform::StringBuffer::AppendString(local_48,puVar6,0xffffffffffffffff);
          Scaleform::StringBuffer::AppendString(local_48,*plVar8);
          Scaleform::StringBuffer::AppendString(local_48,&DAT_145afba48);
        }
        uVar10 = uVar10 + 1;
        if ((*(uint *)((longlong)plVar8 + 0x1c) & 0x40000000) == 0) {
          puVar2 = (undefined8 *)*plVar8;
          if (*(uint *)(plVar8 + 4) < 0x10) {
            *puVar2 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 **)(param_1 + 0x38) = puVar2;
          }
          else {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      plVar8 = plVar8 + 7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
    lVar9 = *(longlong *)(param_1 + 0x30);
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  while (lVar9 != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x7e8);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x7e0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
    lVar9 = *(longlong *)(param_1 + 0x40);
  }
  if ((uVar10 != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    FUN_1432f1560(*(longlong *)(param_1 + 0xb8) + 0x18,
                  "ActionScript Memory leaks in movie \'%s\', including %d string nodes",
                  (*(ulonglong *)(param_1 + 0xc0) & 0xfffffffffffffffc) + 0xc,uVar10);
    puVar11 = &DAT_145af3922;
    if (local_48[0] != (undefined1 *)0x0) {
      puVar11 = local_48[0];
    }
    FUN_1432f1560(*(longlong *)(param_1 + 0xb8) + 0x18,"Leaked string content: %s\n",puVar11);
  }
  Scaleform::StringBuffer::~StringBuffer(local_48);
  uVar4 = *(ulonglong *)(param_1 + 0xc0);
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar4 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar4 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0xb8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar9 = 0;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 1;
    do {
      if (*(longlong *)(lVar9 + 0x10 + *(longlong *)(param_1 + 0x18)) != -2) {
        *(undefined8 *)(lVar9 + 0x10 + *(longlong *)(param_1 + 0x18)) = 0xfffffffffffffffe;
      }
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433608e0 FUN_1433608e0 body=102 status=ok
// SIG undefined FUN_1433608e0(void)

void FUN_1433608e0(longlong param_1,RefCountImpl *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0xb8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xb8));
  }
  *(RefCountImpl **)(param_1 + 0xb8) = param_2;
  puVar1 = &DAT_145af3922;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  Scaleform::String::operator=(param_1 + 0xc0,puVar1);
  return;
}



// FUNCTION 143360950 FUN_143360950 body=251 status=ok
// SIG undefined FUN_143360950(void)

undefined8 * FUN_143360950(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_48 = param_2;
  uVar1 = FUN_1432c4390(param_2,param_3,0x1505);
  local_40 = (ulonglong)(uVar1 & 0xffffff);
  local_38 = param_3;
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     (lVar2 = FUN_143361510(param_1 + 0x18,&local_48,
                            *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8) & local_40), lVar2 < 0
     )) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_143360300(param_1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(param_1 + 0x48);
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = puVar3[2];
      *(undefined4 *)(puVar3 + 3) = 0;
      *(int *)(puVar3 + 4) = (int)param_3;
      *puVar3 = param_2;
      *(uint *)((longlong)puVar3 + 0x1c) = uVar1 & 0xffffff | param_4 | 0x40000000;
      puVar3[2] = 0;
      local_res8 = puVar3;
      FUN_1433613d0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20),&local_res8,
                    *(undefined4 *)((longlong)puVar3 + 0x1c));
    }
  }
  else {
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar2 * 0x10);
    *(uint *)((longlong)puVar3 + 0x1c) = *(uint *)((longlong)puVar3 + 0x1c) | param_4;
  }
  return puVar3;
}



// FUNCTION 143360a60 FUN_143360a60 body=31 status=ok
// SIG undefined FUN_143360a60(void)

longlong FUN_143360a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return param_1 + 0x48;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  lVar1 = FUN_143360a90();
  return lVar1;
}



// FUNCTION 143360a90 FUN_143360a90 body=298 status=ok
// SIG undefined FUN_143360a90(void)

longlong * FUN_143360a90(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *local_res10;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = param_2;
    uVar1 = FUN_1432c4390(param_2,param_3,0x1505);
    local_30 = (ulonglong)(uVar1 & 0xffffff);
    local_28 = param_3;
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       (lVar2 = FUN_143361510(param_1 + 0x18,&local_38,
                              *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8) & local_30),
       lVar2 < 0)) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        FUN_143360300(param_1);
      }
      plVar3 = *(longlong **)(param_1 + 0x28);
      if (plVar3 != (longlong *)0x0) {
        *(longlong *)(param_1 + 0x28) = plVar3[2];
        local_res10 = plVar3;
        lVar2 = FUN_143360480(param_1,param_2,param_3);
        *plVar3 = lVar2;
        if (lVar2 != 0) {
          *(undefined4 *)(plVar3 + 3) = 0;
          *(int *)(plVar3 + 4) = (int)param_3;
          *(uint *)((longlong)plVar3 + 0x1c) = uVar1 & 0xffffff;
          plVar3[2] = 0;
          FUN_1433613d0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20),&local_res10,
                        *(undefined4 *)((longlong)plVar3 + 0x1c));
          return plVar3;
        }
        FUN_143361710(param_1,plVar3);
      }
      plVar3 = (longlong *)(param_1 + 0x48);
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar2 * 0x10);
    }
    return plVar3;
  }
  return (longlong *)(param_1 + 0x48);
}



// FUNCTION 143360bc0 FUN_143360bc0 body=486 status=ok
// SIG undefined FUN_143360bc0(void)

undefined8 *
FUN_143360bc0(longlong param_1,void *param_2,size_t param_3,void *param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  size_t _Size;
  uint uVar3;
  undefined8 *_Dst;
  longlong lVar4;
  undefined8 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  _Size = (size_t)param_5;
  uVar1 = param_3 + (longlong)param_5;
  if (uVar1 < 0x10) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_143360380();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    _Dst = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = *puVar2;
      _Dst = puVar2;
    }
  }
  else {
    _Dst = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),uVar1 + 1,0);
  }
  if (_Dst != (undefined8 *)0x0) {
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    }
    if ((param_4 != (void *)0x0) && (_Size != 0)) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + param_3),param_4,_Size);
    }
    *(undefined1 *)((longlong)_Dst + uVar1) = 0;
    local_38 = _Dst;
    uVar3 = FUN_1432c4390(_Dst,uVar1,0x1505);
    local_30 = (ulonglong)(uVar3 & 0xffffff);
    local_28 = uVar1;
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (lVar4 = FUN_143361510(param_1 + 0x18,&local_38,
                              *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8) & local_30),
       -1 < lVar4)) {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar4 * 0x10);
      if (uVar1 < 0x10) {
        *_Dst = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = _Dst;
        return puVar2;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
      return puVar2;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_143360300(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    param_5 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = puVar2[2];
      *(undefined4 *)(puVar2 + 3) = 0;
      *(int *)(puVar2 + 4) = (int)uVar1;
      *puVar2 = _Dst;
      *(uint *)((longlong)puVar2 + 0x1c) = uVar3 & 0xffffff;
      puVar2[2] = 0;
      FUN_1433613d0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20),&param_5,
                    *(undefined4 *)((longlong)puVar2 + 0x1c));
      return puVar2;
    }
    if (uVar1 < 0x10) {
      *_Dst = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = _Dst;
    }
    else {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
    }
  }
  return (undefined8 *)(param_1 + 0x48);
}



// FUNCTION 143360db0 FUN_143360db0 body=532 status=ok
// SIG undefined FUN_143360db0(void)

undefined8 *
FUN_143360db0(longlong param_1,void *param_2,size_t param_3,void *param_4,size_t param_5,
             void *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  uVar4 = param_3 + param_5 + (longlong)param_7;
  if (uVar4 < 0x10) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_143360380();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    _Dst = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = *puVar1;
      _Dst = puVar1;
    }
  }
  else {
    _Dst = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),uVar4 + 1,0);
  }
  if (_Dst != (undefined8 *)0x0) {
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    }
    if ((param_4 != (void *)0x0) && (param_5 != 0)) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + param_3),param_4,param_5);
    }
    if ((param_6 != (void *)0x0) && (param_7 != (undefined8 *)0x0)) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Dst + param_5 + param_3),param_6,(size_t)param_7);
    }
    *(undefined1 *)((longlong)_Dst + uVar4) = 0;
    local_38 = _Dst;
    uVar2 = FUN_1432c4390(_Dst,uVar4,0x1505);
    local_30 = (ulonglong)(uVar2 & 0xffffff);
    local_28 = uVar4;
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (lVar3 = FUN_143361510(param_1 + 0x18,&local_38,
                              *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8) & local_30),
       -1 < lVar3)) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar3 * 0x10);
      if (uVar4 < 0x10) {
        *_Dst = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = _Dst;
        return puVar1;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
      return puVar1;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_143360300(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    param_7 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = puVar1[2];
      *(undefined4 *)(puVar1 + 3) = 0;
      *(int *)(puVar1 + 4) = (int)uVar4;
      *puVar1 = _Dst;
      *(uint *)((longlong)puVar1 + 0x1c) = uVar2 & 0xffffff;
      puVar1[2] = 0;
      FUN_1433613d0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20),&param_7,
                    *(undefined4 *)((longlong)puVar1 + 0x1c));
      return puVar1;
    }
    if (uVar4 < 0x10) {
      *_Dst = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = _Dst;
    }
    else {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
    }
  }
  return (undefined8 *)(param_1 + 0x48);
}



// FUNCTION 143360fd0 FUN_143360fd0 body=156 status=ok
// SIG undefined FUN_143360fd0(void)

longlong FUN_143360fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_res20;
  
  FUN_1432c2f70(&local_res20);
  FUN_1432c3830(&local_res20,param_2,param_3);
  lVar2 = FUN_143360a90(param_1,(longlong)(local_res20 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res20 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(undefined1 *)(lVar2 + 0x24) = 1;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  return lVar2;
}



// FUNCTION 143361080 FUN_143361080 body=295 status=ok
// SIG undefined FUN_143361080(void)

void FUN_143361080(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *local_28 [2];
  
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    uVar5 = (ulonglong)param_4;
    do {
      lVar2 = *(longlong *)(param_3 + (longlong)param_2);
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(lVar2 + lVar6) != '\0');
      plVar4 = (longlong *)FUN_143360950(param_1,lVar2,lVar6,0x80000000);
      *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
      *param_2 = plVar4;
      *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
      FUN_14335f970(*param_2);
      plVar1 = plVar4 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        if (((longlong *)plVar4[2] != plVar4) && ((longlong *)plVar4[2] != (longlong *)0x0)) {
          FUN_143361780();
        }
        local_28[0] = plVar4;
        FUN_1433612d0(plVar4[1] + 0x18,local_28);
        puVar3 = (undefined8 *)*plVar4;
        lVar2 = plVar4[1];
        if (puVar3 != (undefined8 *)0x0) {
          if ((*(uint *)((longlong)plVar4 + 0x1c) & 0x40000000) == 0) {
            if (*(uint *)(plVar4 + 4) < 0x10) {
              *puVar3 = *(undefined8 *)(lVar2 + 0x38);
              *(undefined8 **)(lVar2 + 0x38) = puVar3;
            }
            else {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
          *plVar4 = 0;
        }
        plVar4[5] = -1;
        plVar4[6] = 0;
        plVar4[2] = *(longlong *)(lVar2 + 0x28);
        *(longlong **)(lVar2 + 0x28) = plVar4;
      }
      param_2 = param_2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1433611b0 FUN_1433611b0 body=222 status=ok
// SIG undefined FUN_1433611b0(void)

void FUN_1433611b0(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_res20;
  
  if (param_3 != 0) {
    uVar5 = (ulonglong)param_3;
    do {
      plVar2 = (longlong *)*param_2;
      plVar1 = plVar2 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        if (((longlong *)plVar2[2] != plVar2) && ((longlong *)plVar2[2] != (longlong *)0x0)) {
          FUN_143361780();
        }
        local_res20 = plVar2;
        FUN_1433612d0(plVar2[1] + 0x18,&local_res20);
        puVar3 = (undefined8 *)*plVar2;
        lVar4 = plVar2[1];
        if (puVar3 != (undefined8 *)0x0) {
          if ((*(uint *)((longlong)plVar2 + 0x1c) & 0x40000000) == 0) {
            if (*(uint *)(plVar2 + 4) < 0x10) {
              *puVar3 = *(undefined8 *)(lVar4 + 0x38);
              *(undefined8 **)(lVar4 + 0x38) = puVar3;
            }
            else {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
          *plVar2 = 0;
        }
        plVar2[5] = -1;
        plVar2[6] = 0;
        plVar2[2] = *(longlong *)(lVar4 + 0x28);
        *(longlong **)(lVar4 + 0x28) = plVar2;
      }
      *param_2 = 0;
      param_2 = param_2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1433612a0 FUN_1433612a0 body=45 status=ok
// SIG undefined FUN_1433612a0(void)

longlong FUN_1433612a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((ulonglong)*(uint *)(param_1 + 4) != param_2[2]) {
    return (ulonglong)(uint3)(*(uint *)(param_1 + 4) >> 8) << 8;
  }
  iVar1 = strncmp((char *)*param_1,(char *)*param_2,param_2[2]);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



// FUNCTION 1433612d0 FUN_1433612d0 body=255 status=ok
// SIG undefined FUN_1433612d0(void)

ulonglong FUN_1433612d0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar6 = *(uint *)(*param_2 + 0x1c) & uVar2;
  puVar4 = (ulonglong *)((uVar6 + 1) * 0x10 + lVar1);
  if ((*puVar4 != 0xfffffffffffffffe) && ((*(uint *)(puVar4[1] + 0x1c) & uVar2) == uVar6)) {
    uVar3 = uVar6;
    uVar8 = 0xffffffffffffffff;
    while ((uVar7 = uVar3, (*(uint *)(puVar4[1] + 0x1c) & uVar2) != uVar6 || (puVar4[1] != *param_2)
           )) {
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) {
        return (ulonglong)puVar4 & 0xffffffffffffff00;
      }
      puVar4 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar1);
      uVar8 = uVar7;
    }
    if (uVar6 == uVar7) {
      uVar2 = *puVar4;
      if (uVar2 != 0xffffffffffffffff) {
        *puVar4 = 0xfffffffffffffffe;
        puVar5 = (ulonglong *)((uVar2 + 1) * 0x10 + lVar1);
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4 = puVar5;
      }
    }
    else {
      *(ulonglong *)(lVar1 + (uVar8 + 1) * 0x10) = *puVar4;
    }
    *puVar4 = 0xfffffffffffffffe;
    param_1 = (longlong *)*param_1;
    *param_1 = *param_1 + -1;
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}



// FUNCTION 1433613d0 FUN_1433613d0 body=311 status=ok
// SIG undefined FUN_1433613d0(void)

ulonglong * FUN_1433613d0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143361429;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_1433617d0(param_1,param_2,lVar6);
LAB_143361429:
  plVar1 = (longlong *)*param_1;
  uVar3 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar6 = *param_1;
  param_4 = uVar3 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar6);
  uVar2 = *puVar8;
  uVar7 = param_4;
  if (uVar2 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    puVar8[1] = *param_3;
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar3;
      puVar5 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar6);
    } while (*puVar5 != 0xfffffffffffffffe);
    uVar3 = *(uint *)(puVar8[1] + 0x1c) & uVar3;
    if (uVar3 == param_4) {
      *puVar5 = uVar2;
      puVar5[1] = puVar8[1];
      puVar8[1] = *param_3;
      *puVar8 = uVar7;
    }
    else {
      puVar4 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar6);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)((*puVar4 + 1) * 0x10 + lVar6);
        uVar3 = *puVar4;
      }
      *puVar5 = uVar2;
      puVar5[1] = puVar8[1];
      *puVar4 = uVar7;
      puVar8[1] = *param_3;
      *puVar8 = 0xffffffffffffffff;
    }
  }
  return puVar8 + 1;
}



// FUNCTION 143361510 FUN_143361510 body=179 status=ok
// SIG undefined FUN_143361510(void)

ulonglong FUN_143361510(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  puVar4 = (ulonglong *)((param_3 + 1) * 0x10 + *param_1);
  uVar1 = *(ulonglong *)(*param_1 + 8);
  if ((*puVar4 != 0xfffffffffffffffe) &&
     (uVar5 = param_3, (*(uint *)(puVar4[1] + 0x1c) & uVar1) == param_3)) {
    while( true ) {
      puVar2 = (undefined8 *)puVar4[1];
      if (((*(uint *)((longlong)puVar2 + 0x1c) & uVar1) == param_3) &&
         (((ulonglong)*(uint *)(puVar2 + 4) == param_2[2] &&
          (iVar3 = strncmp((char *)*puVar2,(char *)*param_2,param_2[2]), iVar3 == 0)))) {
        return uVar5;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)((uVar5 + 1) * 0x10 + *param_1);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433615d0 FUN_1433615d0 body=89 status=ok
// SIG undefined FUN_1433615d0(void)

undefined8 FUN_1433615d0(undefined8 param_1,ulonglong param_2)

{
  FUN_143360670();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 143361630 FUN_143361630 body=125 status=ok
// SIG undefined FUN_143361630(void)

void FUN_143361630(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  lVar2 = *param_1;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((*(longlong *)(lVar2 + 0x10) != lVar2) && (*(longlong *)(lVar2 + 0x10) != 0)) {
      FUN_143361780();
    }
    local_res8 = lVar2;
    FUN_1433612d0(*(longlong *)(lVar2 + 8) + 0x18,&local_res8);
    FUN_143361710(*(undefined8 *)(lVar2 + 8),lVar2);
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 1433616b0 FUN_1433616b0 body=91 status=ok
// SIG undefined FUN_1433616b0(void)

void FUN_1433616b0(longlong *param_1)

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
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143361710 FUN_143361710 body=111 status=ok
// SIG undefined FUN_143361710(void)

void FUN_143361710(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_2 + 0x1c) & 0x40000000) == 0) {
      if (*(uint *)(param_2 + 4) < 0x10) {
        *puVar1 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar1;
      }
      else {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
    *param_2 = 0;
  }
  param_2[5] = -1;
  param_2[6] = 0;
  param_2[2] = *(longlong *)(param_1 + 0x28);
  *(longlong **)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 143361780 FUN_143361780 body=80 status=ok
// SIG undefined FUN_143361780(void)

void FUN_143361780(longlong param_1)

{
  int *piVar1;
  longlong local_res8 [4];
  
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x10) != param_1) && (*(longlong *)(param_1 + 0x10) != 0)) {
      FUN_143361780();
    }
    local_res8[0] = param_1;
    FUN_1433612d0(*(longlong *)(param_1 + 8) + 0x18,local_res8);
    FUN_143361710(*(undefined8 *)(param_1 + 8),param_1);
    return;
  }
  return;
}



// FUNCTION 1433617d0 FUN_1433617d0 body=297 status=ok
// SIG undefined FUN_1433617d0(void)

void FUN_1433617d0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1433616b0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res18[0] = 0x144;
  local_res20 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,(lVar4 + 1) * 0x10,local_res18)
  ;
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = lVar1 + 0x10;
    *(undefined8 *)(lVar1 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        plVar5 = (longlong *)(lVar1 + 0x18 + lVar3);
        FUN_1433613d0(&local_res20,param_2,plVar5,*(undefined4 *)(*plVar5 + 0x1c));
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143361900 FUN_143361900 body=893 status=ok
// SIG undefined FUN_143361900(void)

ulonglong FUN_143361900(longlong param_1,float *param_2,byte param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_3 == 0) {
    lVar3 = FUN_143321150(param_1 + 0x40,3);
    uVar4 = 0;
    if (lVar3 != 0) {
      lVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
              ::GetRawUserObject(lVar3);
      uVar4 = 0;
      if (lVar3 != 0) {
        uVar6 = 0;
        uVar4 = FVorbisAudioInfo::GetSourceBufferSize(lVar3);
        if ((int)uVar4 != 0) {
          do {
            lVar5 = Scaleform::Render::FilterSet::GetFilter(lVar3,uVar6);
            if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x10), -1 < iVar2)) {
              if (iVar2 < 6) {
                if ((iVar2 - 3U & 0xfffffffd) == 0) {
                  fVar8 = 2.0;
                }
                else {
                  fVar8 = 1.0;
                }
                fVar9 = (*(float *)(lVar5 + 0x24) * 0.05 + 1.0) * 20.0 *
                        (float)*(uint *)(lVar5 + 0x1c) * fVar8;
                fVar11 = param_2[1] - fVar9;
                fVar9 = fVar9 + param_2[3];
                fVar10 = (*(float *)(lVar5 + 0x20) * 0.05 + 1.0) * 20.0 *
                         (float)*(uint *)(lVar5 + 0x1c) * fVar8;
                param_2[1] = fVar11;
                fVar12 = *param_2 - fVar10;
                param_2[3] = fVar9;
                fVar10 = fVar10 + param_2[2];
                *param_2 = fVar12;
                param_2[2] = fVar10;
                if ((*(int *)(lVar5 + 0x10) == 1) || (*(int *)(lVar5 + 0x10) - 3U < 3)) {
                  fVar1 = *(float *)(lVar5 + 0x2c);
                  fVar7 = ABS(*(float *)(lVar5 + 0x28)) * fVar8;
                  if (*(float *)(lVar5 + 0x28) <= 0.0) {
                    fVar7 = _guard_xfg_dispatch_icall_nop(fVar7);
                    *param_2 = fVar12 - fVar7;
                    param_2[2] = fVar10 + 0.0;
                  }
                  else {
                    *param_2 = fVar12;
                    fVar12 = _guard_xfg_dispatch_icall_nop(fVar7);
                    param_2[2] = fVar12 + fVar10;
                  }
                  fVar8 = ABS(fVar1) * fVar8;
                  if (fVar1 <= 0.0) {
                    fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
                    param_2[1] = fVar11 - fVar8;
                    param_2[3] = fVar9 + 0.0;
                  }
                  else {
                    param_2[1] = fVar11;
                    fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
                    param_2[3] = fVar8 + fVar9;
                  }
                }
                fVar8 = _guard_xfg_dispatch_icall_nop(*param_2 - 10.0);
                *param_2 = fVar8;
                fVar8 = _guard_xfg_dispatch_icall_nop(param_2[1] - 10.0);
                param_2[1] = fVar8;
                fVar8 = _guard_xfg_dispatch_icall_nop(param_2[2] + 10.0);
                param_2[2] = fVar8;
                fVar8 = _guard_xfg_dispatch_icall_nop(param_2[3] + 10.0);
                param_2[3] = fVar8;
              }
              else if (iVar2 == 10) {
                param_2[2] = ABS(*(float *)(lVar5 + 0x34) * 0.5) * 20.0 + param_2[2];
                param_2[3] = ABS(*(float *)(lVar5 + 0x38) * 0.5) * 20.0 + param_2[3];
              }
            }
            uVar6 = uVar6 + 1;
            uVar4 = FVorbisAudioInfo::GetSourceBufferSize(lVar3);
          } while (uVar6 < (uint)uVar4);
        }
      }
    }
    return uVar4 & 0xffffffffffffff00;
  }
  return (ulonglong)param_3;
}



// FUNCTION 143361c90 FUN_143361c90 body=676 status=ok
// SIG undefined FUN_143361c90(void)

void FUN_143361c90(longlong param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x10), -1 < iVar2)) {
    if (iVar2 < 6) {
      if ((iVar2 - 3U & 0xfffffffd) == 0) {
        fVar4 = 2.0;
      }
      else {
        fVar4 = 1.0;
      }
      fVar5 = (*(float *)(param_1 + 0x24) * 0.05 + 1.0) * 20.0 * (float)*(uint *)(param_1 + 0x1c) *
              fVar4;
      fVar6 = (*(float *)(param_1 + 0x20) * 0.05 + 1.0) * 20.0 * (float)*(uint *)(param_1 + 0x1c) *
              fVar4;
      fVar7 = param_2[1] - fVar5;
      fVar5 = fVar5 + param_2[3];
      fVar8 = *param_2 - fVar6;
      fVar6 = fVar6 + param_2[2];
      param_2[1] = fVar7;
      param_2[3] = fVar5;
      *param_2 = fVar8;
      param_2[2] = fVar6;
      if ((*(int *)(param_1 + 0x10) == 1) || (*(int *)(param_1 + 0x10) - 3U < 3)) {
        fVar1 = *(float *)(param_1 + 0x2c);
        fVar3 = ABS(*(float *)(param_1 + 0x28)) * fVar4;
        if (*(float *)(param_1 + 0x28) <= 0.0) {
          fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
          *param_2 = fVar8 - fVar3;
          param_2[2] = fVar6 + 0.0;
        }
        else {
          *param_2 = fVar8;
          fVar8 = _guard_xfg_dispatch_icall_nop(fVar3);
          param_2[2] = fVar8 + fVar6;
        }
        fVar4 = ABS(fVar1) * fVar4;
        if (fVar1 <= 0.0) {
          fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
          param_2[1] = fVar7 - fVar4;
          param_2[3] = fVar5 + 0.0;
        }
        else {
          param_2[1] = fVar7;
          fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
          param_2[3] = fVar4 + fVar5;
        }
      }
      fVar4 = _guard_xfg_dispatch_icall_nop(*param_2 - 10.0);
      *param_2 = fVar4;
      fVar4 = _guard_xfg_dispatch_icall_nop(param_2[1] - 10.0);
      param_2[1] = fVar4;
      fVar4 = _guard_xfg_dispatch_icall_nop(param_2[2] + 10.0);
      param_2[2] = fVar4;
      fVar4 = _guard_xfg_dispatch_icall_nop(param_2[3] + 10.0);
      param_2[3] = fVar4;
    }
    else if (iVar2 == 10) {
      param_2[2] = ABS(*(float *)(param_1 + 0x34) * 0.5) * 20.0 + param_2[2];
      param_2[3] = ABS(*(float *)(param_1 + 0x38) * 0.5) * 20.0 + param_2[3];
      return;
    }
  }
  return;
}



// FUNCTION 143361f40 FUN_143361f40 body=274 status=ok
// SIG undefined FUN_143361f40(void)

void FUN_143361f40(longlong param_1,float *param_2)

{
  longlong lVar1;
  RefCountImpl *this;
  undefined4 local_res8 [2];
  
  if ((((*(float *)(param_1 + 0x70) == *param_2) && (*(float *)(param_1 + 0x78) == param_2[2])) &&
      (*(float *)(param_1 + 0x74) == param_2[1])) && (*(float *)(param_1 + 0x7c) == param_2[3])) {
    lVar1 = FUN_143321150(param_1 + 0x40,10);
    if (lVar1 != 0) {
      FUN_1433213e0(param_1 + 0x40,10);
      return;
    }
  }
  else {
    local_res8[0] = 2;
    this = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res8);
    if (this != (RefCountImpl *)0x0) {
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_145b01da8;
      *(undefined4 *)(this + 8) = 1;
    }
    *(float *)(this + 0x10) = *param_2;
    *(float *)(this + 0x14) = param_2[1];
    *(float *)(this + 0x18) = param_2[2];
    *(float *)(this + 0x1c) = param_2[3];
    FUN_1433211b0(param_1 + 0x40,&DAT_146b63118,this);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 143362060 FUN_143362060 body=115 status=ok
// SIG undefined FUN_143362060(void)

void FUN_143362060(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 10) >> 4 & 1) != 0) &&
     (lVar1 = FUN_143321150(param_1 + 0x40,4), lVar1 != 0)) {
    lVar2 = FUN_1432cd080(*(undefined8 *)(lVar1 + 8),0x80);
    *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x30) = 0;
    *(ushort *)(lVar2 + 10) = *(ushort *)(lVar2 + 10) & 0xffdf;
    FUN_1433213e0(lVar2 + 0x40,9);
  }
  FUN_1433215c0(param_1 + 0x40);
  return;
}



// FUNCTION 1433620e0 FUN_1433620e0 body=5 status=ok
// SIG undefined FUN_1433620e0(void)

longlong FUN_1433620e0(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 143362140 FUN_143362140 body=644 status=ok
// SIG undefined FUN_143362140(void)

void FUN_143362140(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 != param_3) {
    lVar6 = FUN_1432cd1e0(param_3);
    bVar1 = *(byte *)(param_1 + 10);
    lVar7 = FUN_1432cd1e0(param_3);
    if ((bVar1 & 1) != (*(byte *)(lVar7 + 10) & 1)) {
      lVar7 = FUN_1432cd1e0(param_3);
      FUN_143362a30(param_2,*(byte *)(lVar7 + 10) & 1);
      if ((*(longlong *)(param_2 + 0x30) != 0) &&
         (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x38) == 0)) {
        FUN_1432ccff0();
      }
    }
    if ((*(ushort *)(lVar6 + 10) >> 9 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar6 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar6 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar6 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar6 + 0x2c);
    }
    else {
      uVar5 = *(undefined8 *)(lVar6 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      uVar2 = *(undefined4 *)(lVar6 + 0x24);
      uVar3 = *(undefined4 *)(lVar6 + 0x28);
      uVar4 = *(undefined4 *)(lVar6 + 0x2c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      uVar2 = *(undefined4 *)(lVar6 + 0x34);
      uVar3 = *(undefined4 *)(lVar6 + 0x38);
      uVar4 = *(undefined4 *)(lVar6 + 0x3c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar6 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 0x200;
      lVar7 = FUN_1432cd1e0(param_3);
      lVar7 = FUN_143321150(lVar7 + 0x40,6);
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 8);
        local_48 = *(undefined4 *)(lVar7 + 0x10);
        uStack_44 = *(undefined4 *)(lVar7 + 0x14);
        uStack_40 = *(undefined4 *)(lVar7 + 0x18);
        uStack_3c = *(undefined4 *)(lVar7 + 0x1c);
        local_38 = *(undefined4 *)(lVar7 + 0x20);
        uStack_34 = *(undefined4 *)(lVar7 + 0x24);
        uStack_30 = *(undefined4 *)(lVar7 + 0x28);
        uStack_2c = *(undefined4 *)(lVar7 + 0x2c);
        local_28 = *(undefined4 *)(lVar7 + 0x30);
        uStack_24 = *(undefined4 *)(lVar7 + 0x34);
        uStack_20 = *(undefined4 *)(lVar7 + 0x38);
        uStack_1c = *(undefined4 *)(lVar7 + 0x3c);
        local_18 = *(undefined4 *)(lVar7 + 0x40);
        uStack_14 = *(undefined4 *)(lVar7 + 0x44);
        uStack_10 = *(undefined4 *)(lVar7 + 0x48);
        uStack_c = *(undefined4 *)(lVar7 + 0x4c);
        FUN_143362850(param_2,&local_48);
      }
      lVar7 = FUN_1432cd1e0(param_3);
      lVar7 = FUN_143321150(lVar7 + 0x40,5);
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 8);
        local_48 = *(undefined4 *)(lVar7 + 0x10);
        uStack_44 = *(undefined4 *)(lVar7 + 0x14);
        uStack_40 = *(undefined4 *)(lVar7 + 0x18);
        uStack_3c = *(undefined4 *)(lVar7 + 0x1c);
        local_38 = *(undefined4 *)(lVar7 + 0x20);
        uStack_34 = *(undefined4 *)(lVar7 + 0x24);
        uStack_30 = *(undefined4 *)(lVar7 + 0x28);
        uStack_2c = *(undefined4 *)(lVar7 + 0x2c);
        local_28 = *(undefined4 *)(lVar7 + 0x30);
        uStack_24 = *(undefined4 *)(lVar7 + 0x34);
        uStack_20 = *(undefined4 *)(lVar7 + 0x38);
        uStack_1c = *(undefined4 *)(lVar7 + 0x3c);
        FUN_143362710(param_2,&local_48);
      }
    }
    uVar2 = *(undefined4 *)(lVar6 + 0x54);
    uVar3 = *(undefined4 *)(lVar6 + 0x58);
    uVar4 = *(undefined4 *)(lVar6 + 0x5c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar6 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar2 = *(undefined4 *)(lVar6 + 100);
    uVar3 = *(undefined4 *)(lVar6 + 0x68);
    uVar4 = *(undefined4 *)(lVar6 + 0x6c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar6 + 0x60);
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    lVar6 = FUN_1432cd1e0(param_3);
    lVar6 = FUN_143321150(lVar6 + 0x40,1);
    if (lVar6 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar6 + 8);
    }
    lVar6 = FUN_1432cd080(param_2,0x20000);
    if (iVar8 == 0) {
      FUN_1433213e0(lVar6 + 0x40,1);
    }
    else {
      FUN_1433211b0(lVar6 + 0x40,&DAT_146b630c8,(longlong)iVar8);
    }
    if (*(longlong *)(param_2 + 0x38) == 0) {
      FUN_1432ccff0(param_2);
    }
    lVar6 = FUN_1432cd1e0(param_3);
    lVar6 = FUN_143321150(lVar6 + 0x40,2);
    if (lVar6 == 0) {
      local_58 = 0.0;
      local_54 = 0.0;
      local_50 = 0.0;
      local_4c = 0.0;
    }
    else {
      lVar6 = *(longlong *)(lVar6 + 8);
      local_58 = *(float *)(lVar6 + 0x10);
      local_54 = *(float *)(lVar6 + 0x14);
      local_50 = *(float *)(lVar6 + 0x18);
      local_4c = *(float *)(lVar6 + 0x1c);
    }
    if ((local_58 < local_50) && (local_54 < local_4c)) {
      FUN_143362b20(param_2,&local_58);
    }
  }
  return;
}



// FUNCTION 1433623e0 FUN_1433623e0 body=292 status=ok
// SIG undefined FUN_1433623e0(void)

undefined1 FUN_1433623e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = FUN_1432cd080(param_2,0xff0000);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    bVar1 = false;
    uVar8 = *(ulonglong *)(param_1 + 0x40) >> 1;
    uVar7 = 0;
    if (uVar8 == 0) {
      return 1;
    }
  }
  else {
    bVar1 = false;
    uVar8 = 1;
    uVar7 = 0;
  }
  do {
    puVar2 = (ulonglong *)FUN_1433215a0(param_1 + 0x40,uVar7);
    uVar6 = *puVar2 & 0xfffffffffffffffe;
    if (uVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(uVar6 + 8);
    }
    if (iVar5 == 4) {
      bVar1 = true;
    }
    else if (iVar5 != 9) {
      FUN_1433211b0(lVar4 + 0x40,uVar6,puVar2[1]);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < uVar8);
  if (bVar1) {
    lVar4 = FUN_143321150(param_1 + 0x40,4);
    plVar3 = (longlong *)FUN_1432cd1e0(*(undefined8 *)(lVar4 + 8));
    lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,param_3);
    if (lVar4 != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,lVar4,param_3);
    }
    FUN_143362c90(param_2,lVar4);
    if (lVar4 != 0) {
      plVar3 = (longlong *)(lVar4 + 0x18);
      *plVar3 = *plVar3 + -1;
      if (*plVar3 == 0) {
        FUN_1432ccf00(lVar4);
      }
    }
  }
  return 1;
}



// FUNCTION 143362510 FUN_143362510 body=52 status=ok
// SIG undefined FUN_143362510(void)

void FUN_143362510(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1432cd080(param_1,3);
                    /* WARNING: Could not recover jumptable at 0x000143362540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2);
  return;
}



// FUNCTION 143362550 FUN_143362550 body=82 status=ok
// SIG undefined FUN_143362550(void)

longlong FUN_143362550(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1432cd1e0();
  lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,param_2);
  }
  return lVar2;
}



// FUNCTION 1433625b0 FUN_1433625b0 body=110 status=ok
// SIG undefined FUN_1433625b0(void)

void FUN_1433625b0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,1);
  *(undefined4 *)(lVar1 + 0x10) = *param_2;
  *(undefined4 *)(lVar1 + 0x14) = param_2[1];
  *(undefined4 *)(lVar1 + 0x18) = param_2[2];
  *(undefined4 *)(lVar1 + 0x1c) = param_2[3];
  *(undefined4 *)(lVar1 + 0x20) = param_2[4];
  *(undefined4 *)(lVar1 + 0x24) = param_2[5];
  *(undefined4 *)(lVar1 + 0x28) = param_2[6];
  *(undefined4 *)(lVar1 + 0x2c) = param_2[7];
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 143362630 FUN_143362630 body=214 status=ok
// SIG undefined FUN_143362630(void)

void FUN_143362630(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  
  lVar5 = FUN_1432cd1e0();
  bVar7 = ~(byte)((ushort)*(undefined2 *)(lVar5 + 10) >> 9);
  uVar8 = (bVar7 & 1) << 0xd | 1;
  lVar5 = FUN_1432cd080(param_1,uVar8);
  uVar4 = param_2[1];
  *(undefined8 *)(lVar5 + 0x10) = *param_2;
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)(lVar5 + 0x20) = param_2[2];
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar5 + 0x34) = uVar1;
  *(undefined4 *)(lVar5 + 0x38) = uVar2;
  *(undefined4 *)(lVar5 + 0x3c) = uVar3;
  *(ushort *)(lVar5 + 10) = *(ushort *)(lVar5 + 10) | 0x200;
  if (((bVar7 & 1) != 0) && (lVar5 = *(longlong *)(param_1 + 0x30), lVar5 != 0)) {
    do {
      lVar6 = FUN_1432cd080(lVar5,uVar8);
      *(ushort *)(lVar6 + 10) = *(ushort *)(lVar6 + 10) | 0x4000;
      if (*(longlong *)(lVar5 + 0x38) == 0) {
        FUN_1432ccff0(lVar5);
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while ((lVar5 != 0) && (lVar6 = FUN_1432cd1e0(lVar5), (*(ushort *)(lVar6 + 10) >> 9 & 1) == 0)
            );
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return;
  }
  FUN_1432ccff0(param_1);
  return;
}



// FUNCTION 143362710 FUN_143362710 body=235 status=ok
// SIG undefined FUN_143362710(void)

void FUN_143362710(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  RefCountImpl *this;
  undefined4 local_res10 [2];
  
  lVar5 = FUN_1432cd080(param_1,0x80000);
  local_res10[0] = 2;
  this = (RefCountImpl *)
         (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x40,local_res10);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x10) = 0x3f800000;
    *(undefined4 *)(this + 0x24) = 0x3f800000;
    *(undefined4 *)(this + 0x38) = 0x3f800000;
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145b01db0;
    *(undefined4 *)(this + 8) = 1;
  }
  uVar4 = param_2[1];
  *(undefined8 *)(this + 0x10) = *param_2;
  *(undefined8 *)(this + 0x18) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  FUN_1433211b0(lVar5 + 0x40,&DAT_146b630e8,this);
  *(ushort *)(lVar5 + 10) = *(ushort *)(lVar5 + 10) | 0x800;
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143362810 FUN_143362810 body=48 status=ok
// SIG undefined FUN_143362810(void)

void FUN_143362810(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x80000);
  FUN_1433213e0(lVar1 + 0x40,5);
  *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xf7ff;
  return;
}



// FUNCTION 143362850 FUN_143362850 body=258 status=ok
// SIG undefined FUN_143362850(void)

void FUN_143362850(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  RefCountImpl *this;
  undefined4 local_res10 [2];
  
  lVar5 = FUN_1432cd080(param_1,0x100000);
  local_res10[0] = 2;
  this = (RefCountImpl *)
         (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res10);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x10) = 0x3f800000;
    *(undefined4 *)(this + 0x24) = 0x3f800000;
    *(undefined4 *)(this + 0x38) = 0x3f800000;
    *(undefined4 *)(this + 0x4c) = 0x3f800000;
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145b01db8;
    *(undefined4 *)(this + 8) = 1;
  }
  uVar4 = param_2[1];
  *(undefined8 *)(this + 0x10) = *param_2;
  *(undefined8 *)(this + 0x18) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)(this + 0x20) = param_2[2];
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar2;
  *(undefined4 *)(this + 0x4c) = uVar3;
  FUN_1433211b0(lVar5 + 0x40,&DAT_146b63128,this);
  *(ushort *)(lVar5 + 10) = *(ushort *)(lVar5 + 10) | 0x1000;
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143362960 FUN_143362960 body=48 status=ok
// SIG undefined FUN_143362960(void)

void FUN_143362960(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x100000);
  FUN_1433213e0(lVar1 + 0x40,6);
  *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xefff;
  return;
}



// FUNCTION 1433629a0 FUN_1433629a0 body=136 status=ok
// SIG undefined FUN_1433629a0(void)

void FUN_1433629a0(longlong param_1,Matrix2x4<float> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd1e0();
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(undefined4 *)param_2 = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar2 + 0x14);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar2 + 0x1c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar2 + 0x24);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar2 + 0x28);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar2 + 0x2c);
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
    lVar2 = FUN_1432cd1e0(lVar1);
    Scaleform::Render::Matrix2x4<float>::Append(param_2,(Matrix2x4<float> *)(lVar2 + 0x10));
  }
  return;
}



// FUNCTION 143362a30 FUN_143362a30 body=101 status=ok
// SIG undefined FUN_143362a30(void)

void FUN_143362a30(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if ((*(byte *)(lVar1 + 10) & 1) != param_2) {
    lVar1 = FUN_1432cd080(param_1,4);
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xfffe;
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) | (ushort)(param_2 != 0);
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) == 0)) {
      FUN_1432ccff0();
    }
  }
  return;
}



// FUNCTION 143362aa0 FUN_143362aa0 body=71 status=ok
// SIG undefined FUN_143362aa0(void)

void FUN_143362aa0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if ((*(ushort *)(lVar1 + 10) & 0xc) != param_2) {
    lVar1 = FUN_1432cd080(param_1,0x20);
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xfff3;
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) | (ushort)param_2;
  }
  return;
}



// FUNCTION 143362af0 FUN_143362af0 body=29 status=ok
// SIG undefined FUN_143362af0(void)

void FUN_143362af0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  FUN_143321150(lVar1 + 0x40,param_2);
  return;
}



// FUNCTION 143362b20 FUN_143362b20 body=262 status=ok
// SIG undefined FUN_143362b20(void)

void FUN_143362b20(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  RefCountImpl *this;
  undefined4 local_res10 [2];
  
  lVar4 = FUN_1432cd080(param_1,0x10000);
  if ((param_2[2] < *param_2 || param_2[2] == *param_2) ||
     (param_2[3] < param_2[1] || param_2[3] == param_2[1])) {
    FUN_1433213e0(lVar4 + 0x40,2);
  }
  else {
    local_res10[0] = 0x47;
    this = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res10);
    if (this != (RefCountImpl *)0x0) {
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_145b01da8;
      *(undefined4 *)(this + 8) = 1;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      fVar1 = param_2[3];
      fVar2 = param_2[2];
      fVar3 = *param_2;
      *(float *)(this + 0x14) = param_2[1];
      *(float *)(this + 0x18) = fVar2;
      *(float *)(this + 0x1c) = fVar1;
      *(float *)(this + 0x10) = fVar3;
      FUN_1433211b0(lVar4 + 0x40,&DAT_146b63098,this);
      Scaleform::RefCountImpl::Release(this);
      return;
    }
  }
  return;
}



// FUNCTION 143362c30 FUN_143362c30 body=87 status=ok
// SIG undefined FUN_143362c30(void)

void FUN_143362c30(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x20000);
  if (param_2 == 0) {
    FUN_1433213e0(lVar1 + 0x40,1);
  }
  else {
    FUN_1433211b0(lVar1 + 0x40,&DAT_146b630c8,(longlong)param_2);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 143362c90 FUN_143362c90 body=247 status=ok
// SIG undefined FUN_143362c90(void)

void FUN_143362c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_1432cd080(param_1,0x40000);
  if (param_2 == 0) {
    lVar2 = FUN_143321150(lVar1 + 0x40,4);
    if (lVar2 != 0) {
      lVar3 = FUN_1432cd080(*(undefined8 *)(lVar2 + 8),0x80);
      *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x30) = 0;
      *(ushort *)(lVar3 + 10) = *(ushort *)(lVar3 + 10) & 0xffdf;
      FUN_1433213e0(lVar3 + 0x40,9);
      FUN_1433213e0(lVar1 + 0x40,4);
      *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xffef;
    }
  }
  else {
    lVar2 = FUN_1432cd080(param_2,0x80);
    *(longlong *)(param_2 + 0x30) = param_1;
    *(ushort *)(lVar2 + 10) = *(ushort *)(lVar2 + 10) | 0x20;
    FUN_1433211b0(lVar2 + 0x40,&DAT_146b630f8,param_1);
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) | 0x10;
    FUN_1433211b0(lVar1 + 0x40,&DAT_146b630b8,param_2);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return;
  }
  FUN_1432ccff0(param_1);
  return;
}



// FUNCTION 143362d90 FUN_143362d90 body=76 status=ok
// SIG undefined FUN_143362d90(void)

void FUN_143362d90(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x40000);
  if (param_2 == '\0') {
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0x7fff;
  }
  else {
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) | 0x8000;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 143362df0 FUN_143362df0 body=21 status=ok
// SIG undefined FUN_143362df0(void)

ushort FUN_143362df0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  return *(ushort *)(lVar1 + 10) >> 0xf;
}



// FUNCTION 143362e10 FUN_143362e10 body=204 status=ok
// SIG undefined FUN_143362e10(void)

void FUN_143362e10(longlong param_1,longlong param_2)

{
  int iVar1;
  RefCountImpl *this;
  longlong lVar2;
  
  if ((param_2 == 0) || (iVar1 = FVorbisAudioInfo::GetSourceBufferSize(param_2), iVar1 == 0)) {
    lVar2 = FUN_1432cd1e0(param_1);
    if ((*(ushort *)(lVar2 + 10) >> 10 & 1) == 0) {
      return;
    }
    lVar2 = FUN_1432cd080(param_1,0x200002);
    FUN_1433213e0(lVar2 + 0x40,3);
    *(ushort *)(lVar2 + 10) = *(ushort *)(lVar2 + 10) & 0xfbff;
  }
  else {
    this = (RefCountImpl *)FUN_1432d1340(param_2,1,0);
    lVar2 = FUN_1432cd080(param_1,0x200002);
    FUN_1433211b0(lVar2 + 0x40,&DAT_146b630d8,this);
    *(ushort *)(lVar2 + 10) = *(ushort *)(lVar2 + 10) | 0x400;
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 143362ef0 FUN_143362ef0 body=119 status=ok
// SIG undefined FUN_143362ef0(void)

void FUN_143362ef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x10000);
  if (param_2 == 0) {
    FUN_1433213e0(lVar1 + 0x40,8);
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xdfff;
  }
  else {
    FUN_1433211b0(lVar1 + 0x40,&DAT_146b63108,param_2);
    *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) | 0x2000;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 143362f70 FUN_143362f70 body=87 status=ok
// SIG undefined FUN_143362f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143362f70(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd1e0();
  lVar2 = FUN_1432cd080(param_1,(*(ushort *)(lVar2 + 10) >> 9 & 1) << 0xd | 1);
  uVar1 = _DAT_146b63028;
  *(undefined8 *)(lVar2 + 0x10) = _DAT_146b63020;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar1 = _DAT_146b63038;
  *(undefined8 *)(lVar2 + 0x20) = _DAT_146b63030;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = _DAT_146b63048;
  *(undefined8 *)(lVar2 + 0x30) = _DAT_146b63040;
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(ushort *)(lVar2 + 10) = *(ushort *)(lVar2 + 10) & 0xfdff;
  return;
}



// FUNCTION 143362fd0 FUN_143362fd0 body=246 status=ok
// SIG undefined FUN_143362fd0(void)

void FUN_143362fd0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  RefCountImpl *this;
  undefined4 local_res18 [4];
  
  lVar1 = FUN_1432cd080(param_1,0x400000);
  lVar2 = FUN_1432cd1e0(param_1);
  lVar2 = FUN_143321150(lVar2 + 0x40,7);
  if (lVar2 == 0) {
    local_res18[0] = 2;
    this = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res18);
    if (this == (RefCountImpl *)0x0) {
      this = (RefCountImpl *)0x0;
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_145b01dc0;
      *(undefined4 *)(this + 8) = 1;
      FUN_1432c5250(this + 0x10);
      *(undefined4 *)(this + 0x18) = 0;
      this[0x1c] = (RefCountImpl)0x0;
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  else {
    this = *(RefCountImpl **)(lVar2 + 8);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
  }
  Scaleform::String::operator=(this + 0x10,param_2);
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
  FUN_1433211b0(lVar1 + 0x40,&DAT_146b63088,this);
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 1433630d0 FUN_1433630d0 body=54 status=ok
// SIG undefined FUN_1433630d0(void)

longlong FUN_1433630d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = FUN_143321150(lVar1 + 0x40,7);
  if (lVar1 != 0) {
    return (*(ulonglong *)(*(longlong *)(lVar1 + 8) + 0x10) & 0xfffffffffffffffc) + 0xc;
  }
  return 0;
}



// FUNCTION 143363110 FUN_143363110 body=239 status=ok
// SIG undefined FUN_143363110(void)

void FUN_143363110(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  RefCountImpl *this;
  undefined4 local_res10 [6];
  
  lVar1 = FUN_1432cd080(param_1,0x400000);
  lVar2 = FUN_1432cd1e0(param_1);
  lVar2 = FUN_143321150(lVar2 + 0x40,7);
  if (lVar2 == 0) {
    local_res10[0] = 2;
    this = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res10);
    if (this == (RefCountImpl *)0x0) {
      this = (RefCountImpl *)0x0;
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_145b01dc0;
      *(undefined4 *)(this + 8) = 1;
      FUN_1432c5250(this + 0x10);
      *(undefined4 *)(this + 0x18) = 0;
      this[0x1c] = (RefCountImpl)0x0;
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  else {
    this = *(RefCountImpl **)(lVar2 + 8);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
  }
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
  *(undefined4 *)(this + 0x18) = param_2;
  FUN_1433211b0(lVar1 + 0x40,&DAT_146b63088,this);
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143363210 FUN_143363210 body=50 status=ok
// SIG undefined FUN_143363210(void)

undefined4 FUN_143363210(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = FUN_143321150(lVar1 + 0x40,7);
  if (lVar1 != 0) {
    return *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x18);
  }
  return 0;
}



// FUNCTION 143363250 FUN_143363250 body=238 status=ok
// SIG undefined FUN_143363250(void)

void FUN_143363250(undefined8 param_1,RefCountImpl param_2)

{
  longlong lVar1;
  longlong lVar2;
  RefCountImpl *this;
  undefined4 local_res10 [2];
  
  lVar1 = FUN_1432cd080(param_1,0x400000);
  lVar2 = FUN_1432cd1e0(param_1);
  lVar2 = FUN_143321150(lVar2 + 0x40,7);
  if (lVar2 == 0) {
    local_res10[0] = 2;
    this = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res10);
    if (this == (RefCountImpl *)0x0) {
      this = (RefCountImpl *)0x0;
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_145b01dc0;
      *(undefined4 *)(this + 8) = 1;
      FUN_1432c5250(this + 0x10);
      *(undefined4 *)(this + 0x18) = 0;
      this[0x1c] = (RefCountImpl)0x0;
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  else {
    this = *(RefCountImpl **)(lVar2 + 8);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
  }
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
  this[0x1c] = param_2;
  FUN_1433211b0(lVar1 + 0x40,&DAT_146b63088,this);
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143363350 FUN_143363350 body=46 status=ok
// SIG undefined FUN_143363350(void)

undefined1 FUN_143363350(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = FUN_143321150(lVar1 + 0x40,7);
  if (lVar1 != 0) {
    return *(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x1c);
  }
  return 0;
}



// FUNCTION 143363390 FUN_143363390 body=62 status=ok
// SIG undefined FUN_143363390(void)

void FUN_143363390(longlong param_1,Matrix2x4<float> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
    lVar2 = FUN_1432cd1e0(lVar1);
    Scaleform::Render::Matrix2x4<float>::Append(param_2,(Matrix2x4<float> *)(lVar2 + 0x10));
  }
  return;
}



// FUNCTION 1433633e0 FUN_1433633e0 body=88 status=ok
// SIG undefined FUN_1433633e0(void)

undefined1 FUN_1433633e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_3,0x80);
  *(undefined8 *)(param_3 + 0x30) = param_1;
  *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) | 0x20;
  FUN_1433211b0(lVar1 + 0x40,&DAT_146b630f8,param_1);
  *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) | 0x10;
  return 1;
}



// FUNCTION 143363440 FUN_143363440 body=91 status=ok
// SIG undefined FUN_143363440(void)

undefined1 FUN_143363440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_143321150(param_1 + 0x40,4);
  if (lVar1 != 0) {
    lVar2 = FUN_1432cd080(*(undefined8 *)(lVar1 + 8),0x80);
    *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x30) = 0;
    *(ushort *)(lVar2 + 10) = *(ushort *)(lVar2 + 10) & 0xffdf;
    FUN_1433213e0(lVar2 + 0x40,9);
    return 1;
  }
  return 0;
}



// FUNCTION 1433634b0 FUN_1433634b0 body=60 status=ok
// SIG undefined FUN_1433634b0(void)

void FUN_1433634b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_2 * 8 + 0x10,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = param_3;
  }
  return;
}



// FUNCTION 143363500 TreeNodeArray body=62 status=ok
// SIG undefined TreeNodeArray(void)

ulonglong * Scaleform::Render::TreeNodeArray::TreeNodeArray(ulonglong *param_1,ulonglong *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((*param_2 & 1) != 0) {
    AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*param_2 & 0xfffffffffffffffe,1);
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 143363550 FUN_143363550 body=130 status=ok
// SIG undefined FUN_143363550(void)

void FUN_143363550(ulonglong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1;
  uVar2 = param_2[1];
  if ((*param_2 & 1) != 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*param_2 & 0xfffffffffffffffe,1);
    uVar2 = 0;
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar3,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
    }
  }
  uVar3 = *param_2;
  param_1[1] = uVar2;
  *param_1 = uVar3;
  return;
}



// FUNCTION 143363610 FUN_143363610 body=520 status=ok
// SIG undefined FUN_143363610(void)

undefined8 FUN_143363610(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *param_1;
  if (uVar5 == 0) {
    *param_1 = param_3;
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar1 = *(ulonglong *)(uVar5 + 8);
    if (param_1[1] < uVar1 + 1) {
      uVar7 = (uVar1 + 1 + (uVar1 >> 1) & 0xfffffffffffffffc) + 2;
      puVar2 = (undefined4 *)
               (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar7 * 8 + 0x10,0);
      uVar3 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 1;
        *(ulonglong *)(puVar2 + 2) = uVar1 + 1;
        if (param_2 != 0) {
          _guard_xfg_dispatch_icall_nop(puVar2 + 4,(void *)(uVar5 + 0x10),param_2 * 8);
        }
        *(ulonglong *)(puVar2 + param_2 * 2 + 4) = param_3;
        if (param_2 < *(ulonglong *)(uVar5 + 8)) {
          _guard_xfg_dispatch_icall_nop
                    (puVar2 + (param_2 + 3) * 2,(void *)(uVar5 + (param_2 + 2) * 8),
                     (*(ulonglong *)(uVar5 + 8) - param_2) * 8);
        }
        FUN_143364540(uVar5);
        param_1[1] = uVar7;
        *param_1 = (ulonglong)puVar2 | 1;
        uVar3 = 1;
      }
    }
    else {
      if (param_2 < uVar1) {
        puVar6 = (undefined8 *)(uVar5 + 0x10 + uVar1 * 8);
        lVar4 = uVar1 - param_2;
        do {
          *puVar6 = puVar6[-1];
          puVar6 = puVar6 + -1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      *(ulonglong *)(uVar5 + 0x10 + param_2 * 8) = param_3;
      uVar3 = 1;
      *(longlong *)(uVar5 + 8) = *(longlong *)(uVar5 + 8) + 1;
    }
    return uVar3;
  }
  if (param_1[1] == 0) {
    if (param_2 == 0) {
      param_1[1] = uVar5;
    }
    param_1[param_2] = param_3;
    return 1;
  }
  puVar2 = (undefined4 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x40);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 2) = 3;
  if (param_2 == 0) {
    *(ulonglong *)(puVar2 + 6) = *param_1;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        *(ulonglong *)(puVar2 + 4) = *param_1;
        *(ulonglong *)(puVar2 + 6) = param_1[1];
      }
      goto LAB_1433636d5;
    }
    *(ulonglong *)(puVar2 + 4) = *param_1;
  }
  *(ulonglong *)(puVar2 + 8) = param_1[1];
LAB_1433636d5:
  *(ulonglong *)(puVar2 + param_2 * 2 + 4) = param_3;
  param_1[1] = 6;
  *param_1 = (ulonglong)puVar2 | 1;
  return 1;
}



// FUNCTION 143363820 FUN_143363820 body=467 status=ok
// SIG undefined FUN_143363820(void)

undefined8 FUN_143363820(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_3 == 0) {
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    uVar6 = *param_1 & 0xfffffffffffffffe;
    uVar7 = *(longlong *)(uVar6 + 8) - param_3;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        if (param_2 == 0) {
          *param_1 = *(ulonglong *)(uVar6 + 0x10 + param_3 * 8);
        }
        else {
          *param_1 = *(ulonglong *)(uVar6 + 0x10);
        }
      }
      else {
        *param_1 = 0;
      }
      param_1[1] = 0;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
      }
      return 1;
    }
    uVar1 = param_1[1];
    if ((uVar1 == 0) || ((uVar5 = uVar1, uVar7 <= uVar1 >> 1 && (10 < uVar1)))) {
      uVar5 = (uVar7 + 1 & 0xfffffffffffffffc) + 2;
    }
    if (uVar5 == uVar1) {
      if (param_2 < uVar7) {
        lVar4 = uVar7 - param_2;
        puVar3 = (undefined8 *)(uVar6 + (param_2 + 2) * 8);
        do {
          *puVar3 = puVar3[param_3];
          puVar3 = puVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      *(ulonglong *)(uVar6 + 8) = uVar7;
    }
    else {
      uVar7 = FUN_1433634b0(param_1,uVar5);
      if (uVar7 == 0) {
        return 0;
      }
      if (param_2 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar7 + 0x10),(void *)(uVar6 + 0x10),param_2 * 8);
      }
      if (param_2 + param_3 < *(ulonglong *)(uVar6 + 8)) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(uVar7 + (param_2 + 2) * 8),(void *)(uVar6 + (param_2 + param_3 + 2) * 8)
                   ,((*(ulonglong *)(uVar6 + 8) - param_2) - param_3) * 8);
      }
      FUN_143364540(uVar6);
      *param_1 = uVar7 | 1;
    }
    param_1[1] = uVar5;
    return 1;
  }
  if (param_1[1] == 0) {
    *param_1 = 0;
    return 1;
  }
  if (param_3 != 2) {
    if (param_2 == 0) {
      *param_1 = param_1[1];
    }
    param_1[1] = 0;
    return 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return 1;
}



// FUNCTION 143363a00 FUN_143363a00 body=190 status=ok
// SIG undefined FUN_143363a00(void)

void FUN_143363a00(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = *(ulonglong *)(param_1 + 0x90);
  if (uVar2 != 0) {
    plVar3 = (longlong *)0x0;
    if ((uVar2 & 1) == 0) {
      lVar4 = (ulonglong)(*(longlong *)(param_1 + 0x98) != 0) + 1;
    }
    else {
      lVar4 = *(longlong *)((uVar2 & 0xfffffffffffffffe) + 8);
    }
    if (lVar4 != 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x90);
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          plVar3 = (longlong *)(param_1 + 0x90);
        }
        else {
          plVar3 = (longlong *)((uVar2 & 0xfffffffffffffffe) + 0x10);
        }
      }
      do {
        lVar4 = lVar4 + -1;
        *(undefined8 *)(*plVar3 + 0x30) = 0;
        plVar1 = (longlong *)(*plVar3 + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00();
        }
        plVar3 = plVar3 + 1;
      } while (lVar4 != 0);
    }
  }
  FUN_143362060(param_1);
  return;
}



// FUNCTION 143363ad0 FUN_143363ad0 body=791 status=ok
// SIG undefined FUN_143363ad0(void)

ulonglong FUN_143363ad0(longlong param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  
  puVar6 = (ulonglong *)(param_1 + 0x90);
  uVar10 = 0;
  if (*puVar6 != 0) {
    if ((*(byte *)puVar6 & 1) == 0) {
      uVar10 = (ulonglong)(*(longlong *)(param_1 + 0x98) != 0) + 1;
    }
    else {
      uVar10 = *(ulonglong *)((*puVar6 & 0xfffffffffffffffe) + 8);
    }
  }
  puVar9 = (ulonglong *)0x0;
  if ((*puVar6 != 0) && (puVar9 = puVar6, (*(byte *)puVar6 & 1) != 0)) {
    puVar9 = (ulonglong *)((*puVar6 & 0xfffffffffffffffe) + 0x10);
  }
  uVar8 = 0;
  bVar1 = true;
  local_88 = 0.0;
  fStack_84 = 0.0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 0.0;
  if (uVar10 != 0) {
    do {
      puVar6 = (ulonglong *)FUN_1432cd1e0(puVar9[uVar8]);
      if ((((*(byte *)((longlong)puVar6 + 10) & 1) != 0) &&
          (*(float *)(puVar6 + 0x10) < *(float *)(puVar6 + 0x11))) &&
         (*(float *)((longlong)puVar6 + 0x84) < *(float *)((longlong)puVar6 + 0x8c))) {
        if (bVar1) {
          local_88 = *(float *)(puVar6 + 0x10);
          bVar1 = false;
          fStack_80 = *(float *)(puVar6 + 0x11);
          fStack_84 = *(float *)((longlong)puVar6 + 0x84);
          fStack_7c = *(float *)((longlong)puVar6 + 0x8c);
        }
        else {
          if (*(float *)(puVar6 + 0x10) < local_88) {
            local_88 = *(float *)(puVar6 + 0x10);
          }
          if (fStack_80 <= *(float *)(puVar6 + 0x11)) {
            fStack_80 = *(float *)(puVar6 + 0x11);
          }
          if (*(float *)((longlong)puVar6 + 0x84) < fStack_84) {
            fStack_84 = *(float *)((longlong)puVar6 + 0x84);
          }
          if (fStack_7c <= *(float *)((longlong)puVar6 + 0x8c)) {
            fStack_7c = *(float *)((longlong)puVar6 + 0x8c);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
    if (!bVar1) {
      local_68 = CONCAT44(fStack_84,local_88);
      uStack_60 = CONCAT44(fStack_7c,fStack_80);
      FUN_143361900(param_1,&local_88,0);
      if ((*(ushort *)(param_1 + 10) >> 9 & 1) == 0) {
        Scaleform::Render::Matrix2x4<float>::EncloseTransform
                  ((Matrix2x4<float> *)(param_1 + 0x10),(Rect<float> *)local_78,
                   (Rect<float> *)&local_88);
        puVar6 = extraout_RAX;
      }
      else {
        Scaleform::Render::Matrix3x4<float>::EncloseTransform
                  ((Matrix3x4<float> *)(param_1 + 0x10),(Rect<float> *)local_78,
                   (Rect<float> *)&local_88);
        puVar6 = extraout_RAX_00;
      }
    }
  }
  fVar2 = local_78[0];
  fVar3 = local_78[1];
  fVar4 = local_78[2];
  fVar5 = local_78[3];
  if (((((local_88 == *(float *)(param_1 + 0x70)) && (fStack_80 == *(float *)(param_1 + 0x78))) &&
       ((fStack_84 == *(float *)(param_1 + 0x74) &&
        ((fStack_7c == *(float *)(param_1 + 0x7c) && (local_78[0] == *(float *)(param_1 + 0x80))))))
       ) && (local_78[2] == *(float *)(param_1 + 0x88))) &&
     ((local_78[1] == *(float *)(param_1 + 0x84) && (local_78[3] == *(float *)(param_1 + 0x8c))))) {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      lVar7 = FUN_1432cd080(param_2,0);
      puVar6 = (ulonglong *)(lVar7 + 0x90);
      if ((*(byte *)puVar6 & 1) != 0) {
        *(undefined8 *)(lVar7 + 0x98) = 0;
      }
    }
    uVar10 = (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  else {
    lVar7 = FUN_1432cd080(param_2,9);
    *(float *)(lVar7 + 0x70) = local_88;
    *(float *)(lVar7 + 0x74) = fStack_84;
    *(float *)(lVar7 + 0x78) = fStack_80;
    *(float *)(lVar7 + 0x7c) = fStack_7c;
    *(float *)(lVar7 + 0x80) = fVar2;
    *(float *)(lVar7 + 0x84) = fVar3;
    *(float *)(lVar7 + 0x88) = fVar4;
    *(float *)(lVar7 + 0x8c) = fVar5;
    FUN_143361f40(lVar7,&local_68);
    if ((*(longlong *)(param_2 + 0x10) != 0) && ((*(byte *)(lVar7 + 0x90) & 1) != 0)) {
      *(undefined8 *)(lVar7 + 0x98) = 0;
    }
    uVar10 = (ulonglong)(*(byte *)(param_1 + 10) & 1);
  }
  return uVar10;
}



// FUNCTION 143363df0 FUN_143363df0 body=368 status=ok
// SIG undefined FUN_143363df0(void)

undefined8 *
FUN_143363df0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined2 param_6)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  
  lVar2 = param_5;
  puVar4 = *(undefined8 **)(param_5 + 0x28);
  if (puVar4 != (undefined8 *)0x0) goto LAB_143363f29;
  if (param_3 == 0) {
    uVar3 = 4;
LAB_143363e47:
    uVar5 = *(ushort *)(param_1 + 10) & 0xc;
    if ((*(ushort *)(param_1 + 10) & 0xc) == 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar3 = *(ushort *)(param_3 + 0x4a) & 0xc;
    uVar5 = uVar3;
    if (uVar3 != 0xc) goto LAB_143363e47;
  }
  uVar3 = *(ushort *)(param_1 + 10);
  param_5._0_4_ = 0x47;
  uVar5 = uVar3 & 1 | uVar5;
  uVar1 = uVar5 | 0x60;
  if (((byte)uVar3 >> 5 & 1) == 0) {
    uVar1 = uVar5;
  }
  puVar4 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_3,0xa0,&param_5);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = uVar1 | 0x200;
    if (((byte)(uVar3 >> 9) & 1) == 0) {
      uVar5 = uVar1;
    }
    FUN_14334df70(puVar4,lVar2,uVar5);
    *puVar4 = &PTR_FUN_145af8b08;
    puVar4[0xe] = puVar4 + 0xc;
    puVar4[0xf] = puVar4 + 0xc;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    *(undefined4 *)(puVar4 + 0x12) = 0x80000000;
  }
  *(undefined8 **)(lVar2 + 0x28) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
LAB_143363f29:
  FUN_14334e060(puVar4,param_2,param_3,param_4,param_1,param_6);
  return puVar4;
}



// FUNCTION 143363f70 FUN_143363f70 body=109 status=ok
// SIG undefined FUN_143363f70(void)

void FUN_143363f70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0xa0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143364310(puVar1,param_1);
    *puVar1 = &PTR_FUN_145af8f68;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
  }
  FUN_1432ceba0(param_2,puVar1);
  return;
}



// FUNCTION 143363ff0 FUN_143363ff0 body=259 status=ok
// SIG undefined FUN_143363ff0(void)

undefined1 FUN_143363ff0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  cVar1 = FUN_1433623e0();
  if (cVar1 != '\0') {
    puVar6 = (ulonglong *)(param_1 + 0x90);
    uVar5 = *puVar6;
    if (uVar5 != 0) {
      uVar7 = 0;
      if ((uVar5 & 1) == 0) {
        uVar5 = (ulonglong)(*(longlong *)(param_1 + 0x98) != 0) + 1;
      }
      else {
        uVar5 = *(ulonglong *)((uVar5 & 0xfffffffffffffffe) + 8);
      }
      if (uVar5 != 0) {
        do {
          puVar4 = puVar6;
          if ((*(byte *)puVar6 & 1) != 0) {
            puVar4 = (ulonglong *)((*puVar6 & 0xfffffffffffffffe) + 0x10);
          }
          plVar2 = (longlong *)FUN_1432cd1e0(puVar4[uVar7]);
          lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
          if (lVar3 != 0) {
            (**(code **)(*plVar2 + 0x40))(plVar2,lVar3,param_3);
          }
          FUN_1432f03c0(param_2,lVar3);
          if (lVar3 != 0) {
            plVar2 = (longlong *)(lVar3 + 0x18);
            *plVar2 = *plVar2 + -1;
            if (*plVar2 == 0) {
              FUN_1432ccf00(lVar3);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143364100 FUN_143364100 body=101 status=ok
// SIG undefined FUN_143364100(void)

char FUN_143364100(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd080(param_1,0x100);
  cVar1 = FUN_143363610(lVar2 + 0x90,param_2,param_3);
  if (cVar1 != '\0') {
    *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + 1;
    *(longlong *)(param_3 + 0x30) = param_1;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_1432ccff0(param_1);
    }
  }
  return cVar1;
}



// FUNCTION 143364170 FUN_143364170 body=204 status=ok
// SIG undefined FUN_143364170(void)

void FUN_143364170(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  
  if (param_3 != 0) {
    lVar4 = FUN_1432cd080(param_1,0x200);
    puVar5 = (ulonglong *)0x0;
    puVar2 = (ulonglong *)(lVar4 + 0x90);
    uVar3 = *puVar2;
    lVar4 = param_3;
    if ((uVar3 != 0) || (param_2 != 0)) {
      puVar5 = puVar2;
      if ((uVar3 & 1) != 0) {
        puVar5 = (ulonglong *)((uVar3 & 0xfffffffffffffffe) + 0x10);
      }
      puVar5 = puVar5 + param_2;
    }
    do {
      lVar4 = lVar4 + -1;
      *(undefined8 *)(*puVar5 + 0x30) = 0;
      plVar1 = (longlong *)(*puVar5 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_1432ccff0(param_1);
    }
    FUN_143363820(puVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 143364250 FUN_143364250 body=185 status=ok
// SIG undefined FUN_143364250(void)

void FUN_143364250(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd1e0();
  if ((((((*(int *)(lVar2 + 0xa0) != *param_2) || (*(int *)(lVar2 + 0xa4) != param_2[1])) ||
        (*(int *)(lVar2 + 0xa8) != param_2[2])) ||
       ((*(int *)(lVar2 + 0xac) != param_2[3] || (*(int *)(lVar2 + 0xb0) != param_2[4])))) ||
      ((*(int *)(lVar2 + 0xb4) != param_2[5] ||
       ((*(int *)(lVar2 + 0xb8) != param_2[6] || (*(int *)(lVar2 + 0xbc) != param_2[7])))))) ||
     ((*(int *)(lVar2 + 0xc0) != param_2[8] ||
      ((*(int *)(lVar2 + 0xc4) != param_2[9] || (*(int *)(lVar2 + 200) != param_2[10])))))) {
    lVar2 = FUN_1432cd080(param_1,0x1000);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)param_2;
    *(undefined8 *)(lVar2 + 0xa8) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(lVar2 + 0xb8) = uVar1;
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(param_2 + 8);
    *(int *)(lVar2 + 200) = param_2[10];
  }
  return;
}



// FUNCTION 143364310 FUN_143364310 body=196 status=ok
// SIG undefined FUN_143364310(void)

undefined8 * FUN_143364310(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_145af8120;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(ushort *)((longlong)param_1 + 10) = *(ushort *)(param_2 + 10) & 0xffcf;
  *param_1 = &PTR_FUN_145af8f20;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar4;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  return param_1;
}



// FUNCTION 1433643e0 FUN_1433643e0 body=89 status=ok
// SIG undefined FUN_1433643e0(void)

RefCountImplCore * FUN_1433643e0(RefCountImplCore *param_1,uint param_2)

{
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



// FUNCTION 143364440 FUN_143364440 body=89 status=ok
// SIG undefined FUN_143364440(void)

RefCountImplCore * FUN_143364440(RefCountImplCore *param_1,uint param_2)

{
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



// FUNCTION 1433644a0 FUN_1433644a0 body=148 status=ok
// SIG undefined FUN_1433644a0(void)

RefCountImplCore * FUN_1433644a0(RefCountImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143364540 FUN_143364540 body=50 status=ok
// SIG undefined FUN_143364540(void)

void FUN_143364540(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1,0xffffffff);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143364568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
    return;
  }
  return;
}



// FUNCTION 143364580 FUN_143364580 body=300 status=ok
// SIG undefined FUN_143364580(void)

/* WARNING: Removing unreachable block (ram,0x000143364604) */

void FUN_143364580(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte local_118 [255];
  byte local_19;
  
  uVar4 = 0;
  pbVar5 = local_118;
  if (param_2 != 0) {
    do {
      bVar1 = *(byte *)(uVar4 + param_1);
      if (&local_19 <= pbVar5 + 4) {
        *pbVar5 = 0;
        FUN_1432c3950(param_3,local_118,0xffffffffffffffff);
        pbVar5 = local_118;
      }
      uVar3 = (uint)bVar1;
      if ((bVar1 < 0x80) &&
         ((*(uint *)(param_4 + (longlong)((int)uVar3 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
        *pbVar5 = bVar1;
      }
      else {
        *pbVar5 = 0x25;
        cVar2 = '7';
        if ((uint)((int)uVar3 >> 4) < 10) {
          cVar2 = '0';
        }
        pbVar5[1] = cVar2 + (char)((int)uVar3 >> 4);
        pbVar5 = pbVar5 + 2;
        cVar2 = '7';
        if ((uVar3 & 0xf) < 10) {
          cVar2 = '0';
        }
        *pbVar5 = cVar2 + (char)(uVar3 & 0xf);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < param_2);
  }
  *pbVar5 = 0;
  FUN_1432c3950(param_3,local_118,0xffffffffffffffff);
  return;
}



// FUNCTION 1433646c0 FUN_1433646c0 body=12 status=ok
// SIG undefined FUN_1433646c0(void)

void FUN_1433646c0(void)

{
  FUN_143364580();
  return;
}



// FUNCTION 1433646e0 FUN_1433646e0 body=12 status=ok
// SIG undefined FUN_1433646e0(void)

void FUN_1433646e0(void)

{
  FUN_143364580();
  return;
}



// FUNCTION 143364700 FUN_143364700 body=249 status=ok
// SIG undefined FUN_143364700(void)

void FUN_143364700(byte *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte local_108 [255];
  byte local_9;
  
  pbVar4 = local_108;
  pbVar3 = param_1;
joined_r0x000143364724:
  if (param_1 + param_2 <= pbVar3) {
    *pbVar4 = 0;
    FUN_1432c3950(param_3,local_108,0xffffffffffffffff);
    return;
  }
  bVar1 = *pbVar3;
  pbVar7 = pbVar3 + 1;
  if (&local_9 <= pbVar4 + 1) {
    *pbVar4 = 0;
    FUN_1432c3950(param_3,local_108,0xffffffffffffffff);
    pbVar4 = local_108;
  }
  if (bVar1 == 0x25) goto code_r0x000143364767;
  *pbVar4 = bVar1;
  goto LAB_1433647bc;
code_r0x000143364767:
  bVar1 = *pbVar7;
  uVar5 = (uint)bVar1;
  if (bVar1 - 0x61 < 0x1a) {
    uVar5 = bVar1 - 0x20;
  }
  bVar1 = pbVar3[2];
  uVar8 = (uint)bVar1;
  if (bVar1 - 0x61 < 0x1a) {
    uVar8 = bVar1 - 0x20;
  }
  pbVar7 = pbVar3 + 3;
  iVar2 = uVar5 - 0x30;
  if (9 < (int)(uVar5 - 0x30)) {
    iVar2 = uVar5 - 0x37;
  }
  iVar6 = uVar8 - 0x30;
  if (9 < (int)(uVar8 - 0x30)) {
    iVar6 = uVar8 - 0x37;
  }
  pbVar3 = pbVar7;
  if ((iVar2 < 0x10) && (iVar6 < 0x10)) {
    *pbVar4 = (char)iVar2 * '\x10' + (char)iVar6;
LAB_1433647bc:
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar7;
  }
  goto joined_r0x000143364724;
}



// FUNCTION 143364800 IsWhiteSpace body=62 status=ok
// SIG undefined IsWhiteSpace(void)

undefined8 Scaleform::GFx::ASUtils::IsWhiteSpace(int param_1)

{
  if ((param_1 != 0x20) && (4 < param_1 - 9U)) {
    if (((0x29 < param_1 - 0x2000U) ||
        ((0x30000000fffU >> ((ulonglong)(param_1 - 0x2000U) & 0x3f) & 1) == 0)) &&
       ((param_1 != 0x205f && (param_1 != 0x3000)))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143364850 SkipWhiteSpace body=153 status=ok
// SIG undefined SkipWhiteSpace(void)

uint Scaleform::GFx::ASUtils::SkipWhiteSpace(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_1432c3580();
  if (uVar1 == 0) {
    return 0;
  }
  while ((((iVar2 = FUN_1432c35f0(param_1,uVar3), iVar2 == 0x20 || (iVar2 - 9U < 5)) ||
          ((iVar2 - 0x2000U < 0x2a &&
           ((0x30000000fffU >> ((ulonglong)(iVar2 - 0x2000U) & 0x3f) & 1) != 0)))) ||
         ((iVar2 == 0x205f || (iVar2 == 0x3000))))) {
    uVar3 = uVar3 + 1;
    if (uVar1 <= uVar3) {
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1433648f0 SkipWhiteSpace body=145 status=ok
// SIG undefined SkipWhiteSpace(void)

ulonglong Scaleform::GFx::ASUtils::SkipWhiteSpace(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res8;
  
  local_res8 = param_1;
  if (param_1 + param_2 <= param_1) {
    return param_1;
  }
  while ((((uVar1 = local_res8, iVar2 = FUN_143307250(&local_res8), iVar2 == 0x20 ||
           (iVar2 - 9U < 5)) ||
          ((iVar2 - 0x2000U < 0x2a &&
           ((0x30000000fffU >> ((ulonglong)(iVar2 - 0x2000U) & 0x3f) & 1) != 0)))) ||
         ((iVar2 == 0x205f || (iVar2 == 0x3000))))) {
    if (param_1 + param_2 <= local_res8) {
      return local_res8;
    }
  }
  return uVar1;
}



// FUNCTION 1433649b0 FUN_1433649b0 body=26 status=ok
// SIG undefined FUN_1433649b0(void)

void FUN_1433649b0(void)

{
  FUN_1433656e0();
  return;
}



// FUNCTION 1433649d0 FUN_1433649d0 body=26 status=ok
// SIG undefined FUN_1433649d0(void)

void FUN_1433649d0(void)

{
  FUN_1433656e0();
  return;
}



// FUNCTION 1433649f0 thunk_FUN_143365870 body=5 status=ok
// SIG undefined thunk_FUN_143365870(void)

undefined8 thunk_FUN_143365870(ulonglong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uStackX_8;
  byte abStackX_10 [8];
  longlong alStack_48 [2];
  
  uStackX_8 = param_1;
  lVar7 = FUN_143305cd0(param_1,0xffffffffffffffff);
  lVar1 = 0;
  do {
    while( true ) {
      if (param_1 + param_2 <= uStackX_8) {
        return 1;
      }
      uVar4 = FUN_143307250(&uStackX_8);
      lVar10 = lVar1 + 1;
      if (0x7f < (int)uVar4) break;
      uVar8 = uVar4 & 0x1f;
      uVar5 = uVar4;
      if ((int)uVar4 < 0) {
        uVar5 = uVar4 + 0x1f;
        uVar8 = uVar8 - 0x20;
      }
      if ((*(uint *)(&DAT_1467ce398 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
      break;
LAB_143365925:
      FUN_1432c5df0(param_3,(int)(char)uVar4);
      lVar1 = lVar10;
    }
    if ((param_4 == '\0') && ((int)uVar4 < 0x80)) {
      uVar8 = uVar4 & 0x1f;
      uVar5 = uVar4;
      if ((int)uVar4 < 0) {
        uVar5 = uVar4 + 0x1f;
        uVar8 = uVar8 - 0x20;
      }
      if ((*(uint *)(&DAT_1467ce3a8 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0)
      goto LAB_143365925;
    }
    if (uVar4 - 0xdc00 < 0x400) {
      return 0;
    }
    if (uVar4 - 0xd800 < 0x400) {
      lVar10 = lVar1 + 2;
      if (lVar10 == lVar7) {
        return 0;
      }
      iVar6 = FUN_143307250(&uStackX_8);
      if (0x3ff < iVar6 - 0xdc00U) {
        return 0;
      }
      uVar4 = (uVar4 - 0xd7f7) * 0x400 + iVar6;
    }
    alStack_48[0] = 0;
    FUN_143307100(abStackX_10,6,alStack_48,uVar4);
    if (alStack_48[0] == 0) {
      return 0;
    }
    lVar11 = 0;
    lVar1 = lVar10;
    if (0 < alStack_48[0]) {
      do {
        bVar9 = abStackX_10[lVar11];
        FUN_1432c5df0(param_3,0x25);
        bVar2 = bVar9 >> 4;
        if (bVar2 < 10) {
          cVar3 = bVar2 + 0x30;
        }
        else {
          cVar3 = bVar2 + 0x37;
        }
        FUN_1432c5df0(param_3,cVar3);
        bVar9 = bVar9 & 0xf;
        if (bVar9 < 10) {
          cVar3 = bVar9 + 0x30;
        }
        else {
          cVar3 = bVar9 + 0x37;
        }
        FUN_1432c5df0(param_3,cVar3);
        lVar11 = lVar11 + 1;
      } while (lVar11 < alStack_48[0]);
    }
  } while( true );
}



// FUNCTION 143364a00 FUN_143364a00 body=26 status=ok
// SIG undefined FUN_143364a00(void)

void FUN_143364a00(void)

{
  FUN_1433656e0();
  return;
}



// FUNCTION 143364a20 thunk_FUN_143365a50 body=5 status=ok
// SIG undefined thunk_FUN_143365a50(void)

undefined8 thunk_FUN_143365a50(char *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcStackX_8;
  
  pcVar1 = param_1 + param_2;
  if (param_1 < pcVar1) {
    do {
      uVar5 = (uint)*param_1;
      param_1 = param_1 + 1;
      pcStackX_8 = param_1;
      if (uVar5 == 0x25) {
        if ((param_4 == '\0') || (*param_1 == 'u')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (*param_1 == 'u') {
          uVar6 = 0;
          pcVar8 = param_1;
          iVar9 = 0;
          do {
            if ((pcVar1 <= pcVar8) ||
               (((cVar2 = *pcVar8, 9 < (byte)(cVar2 - 0x30U) && (5 < (byte)(cVar2 + 0xbfU))) &&
                (5 < (byte)(cVar2 + 0x9fU))))) break;
            pcVar7 = pcVar8 + 1;
            if ((byte)(cVar2 - 0x30U) < 10) {
              bVar4 = cVar2 - 0x30;
              pcVar8 = pcVar7;
            }
            else if ((byte)(cVar2 + 0xbfU) < 6) {
              bVar4 = cVar2 - 0x37;
              pcVar8 = pcVar7;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar4 = cVar2 + 0xa9;
              pcVar8 = pcVar7;
            }
            else {
              bVar4 = 0;
            }
            iVar9 = iVar9 + 1;
            uVar6 = uVar6 << 4 | (ushort)bVar4;
          } while (iVar9 < 4);
          uVar5 = (uint)uVar6;
          if ((longlong)pcVar8 - (longlong)param_1 < 4) {
            pcVar8 = param_1;
          }
        }
        else {
          uVar5 = FUN_143365f20(&pcStackX_8,pcVar1,2);
          uVar5 = uVar5 & 0xffff;
          pcVar8 = pcStackX_8;
        }
        if (pcVar8 == param_1) {
          return 0;
        }
        param_1 = pcVar8;
        if (bVar3) {
          uVar5 = (uint)(char)uVar5;
        }
      }
      FUN_1432c5df0(param_3,uVar5);
    } while (param_1 < pcVar1);
  }
  return 1;
}



// FUNCTION 143364a30 thunk_FUN_143365ba0 body=5 status=ok
// SIG undefined thunk_FUN_143365ba0(void)

undefined8 thunk_FUN_143365ba0(char *param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte abStackX_8 [8];
  byte *pbStackX_10;
  int iVar10;
  
  pcVar1 = param_1 + param_2;
  uVar15 = 0;
  bVar7 = abStackX_8[0];
  do {
    if (pcVar1 <= param_1) {
      return 1;
    }
    uVar3 = (uint)*param_1;
    pcVar11 = param_1 + 1;
    uVar14 = uVar15;
    abStackX_8[0] = bVar7;
    if (uVar3 == 0x25) {
      if (pcVar11 < pcVar1) {
        cVar5 = *pcVar11;
        param_1 = param_1 + 2;
        if ((byte)(cVar5 - 0x30U) < 10) {
          cVar5 = cVar5 + -0x30;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          cVar5 = cVar5 + -0x37;
        }
        else {
          if (5 < (byte)(cVar5 + 0x9fU)) goto LAB_143365c27;
          cVar5 = cVar5 + -0x57;
        }
      }
      else {
LAB_143365c27:
        cVar5 = '\0';
        param_1 = pcVar11;
      }
      if (param_1 == pcVar11) {
        return 0;
      }
      if (param_1 < pcVar1) {
        cVar2 = *param_1;
        pcVar11 = param_1 + 1;
        if ((byte)(cVar2 - 0x30U) < 10) {
          bVar6 = cVar2 - 0x30;
        }
        else if ((byte)(cVar2 + 0xbfU) < 6) {
          bVar6 = cVar2 - 0x37;
        }
        else {
          if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_143365c6e;
          bVar6 = cVar2 + 0xa9;
        }
      }
      else {
LAB_143365c6e:
        bVar6 = 0;
        pcVar11 = param_1;
      }
      if (pcVar11 == param_1) {
        return 0;
      }
      uVar14 = uVar15 + 2;
      abStackX_8[0] = cVar5 << 4 | bVar6;
      if ((char)abStackX_8[0] < '\0') {
        iVar9 = 1;
        if ((abStackX_8[0] & 0x40) == 0) {
          return 0;
        }
        do {
          iVar10 = iVar9;
          iVar9 = iVar10 + 1;
        } while ((char)(abStackX_8[0] << ((byte)iVar9 & 0x1f)) < '\0');
        if (iVar9 == 1) {
          return 0;
        }
        if (4 < iVar9) {
          return 0;
        }
        if (param_2 <= (longlong)(iVar10 * 3) + uVar14) {
          return 0;
        }
        lVar16 = 1;
        if (1 < (longlong)iVar9) {
          do {
            pcVar12 = pcVar11 + 1;
            if (*pcVar11 != '%') {
              return 0;
            }
            if (pcVar12 < pcVar1) {
              cVar5 = *pcVar12;
              pcVar13 = pcVar11 + 2;
              if ((byte)(cVar5 - 0x30U) < 10) {
                cVar5 = cVar5 + -0x30;
              }
              else if ((byte)(cVar5 + 0xbfU) < 6) {
                cVar5 = cVar5 + -0x37;
              }
              else {
                if (5 < (byte)(cVar5 + 0x9fU)) goto LAB_143365d34;
                cVar5 = cVar5 + -0x57;
              }
            }
            else {
LAB_143365d34:
              cVar5 = '\0';
              pcVar13 = pcVar12;
            }
            if (pcVar13 == pcVar12) {
              return 0;
            }
            if (pcVar13 < pcVar1) {
              cVar2 = *pcVar13;
              pcVar11 = pcVar13 + 1;
              if ((byte)(cVar2 - 0x30U) < 10) {
                bVar7 = cVar2 - 0x30;
              }
              else if ((byte)(cVar2 + 0xbfU) < 6) {
                bVar7 = cVar2 - 0x37;
              }
              else {
                if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_143365d7a;
                bVar7 = cVar2 + 0xa9;
              }
            }
            else {
LAB_143365d7a:
              bVar7 = 0;
              pcVar11 = pcVar13;
            }
            if (pcVar11 == pcVar13) {
              return 0;
            }
            bVar7 = cVar5 << 4 | bVar7;
            if ((bVar7 & 0xc0) != 0x80) {
              return 0;
            }
            abStackX_8[lVar16] = bVar7;
            uVar14 = uVar14 + 3;
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar9);
        }
        pbStackX_10 = abStackX_8;
        uVar3 = FUN_143307250(&pbStackX_10);
        if (uVar3 == 0xfffd) {
          return 0;
        }
      }
      else {
        uVar3 = (uint)abStackX_8[0];
        abStackX_8[0] = bVar7;
      }
      if (0xffff < uVar3) {
        if (0x10ffff < uVar3) {
          return 0;
        }
        FUN_1432c5df0(param_3,(uVar3 - 0x10000 >> 10 & 0x3ff) + 0xd800);
        uVar3 = (uVar3 & 0x3ff) + 0xdc00;
        goto LAB_143365e5f;
      }
      if ((param_4 != '\0') || (0x7f < (int)uVar3)) goto LAB_143365e5f;
      uVar8 = uVar3 & 0x1f;
      uVar4 = uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar3 + 0x1f;
        uVar8 = uVar8 - 0x20;
      }
      if ((*(uint *)(&DAT_1467ce3a8 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
      goto LAB_143365e5f;
      for (; uVar15 <= uVar14; uVar15 = uVar15 + 1) {
        FUN_1432c5df0(param_3,(int)pcVar11[uVar15]);
      }
    }
    else {
LAB_143365e5f:
      FUN_1432c5df0(param_3,uVar3);
    }
    uVar15 = uVar14 + 1;
    param_1 = pcVar11;
    bVar7 = abStackX_8[0];
  } while( true );
}



// FUNCTION 143364b00 NaN body=19 status=ok
// SIG undefined NaN(void)

undefined8 Scaleform::GFx::NumberUtil::NaN(void)

{
  return 0xfff8000000000000;
}



// FUNCTION 143364b20 NaN body=19 status=ok
// SIG undefined NaN(void)

undefined8 Scaleform::GFx::NumberUtil::NaN(void)

{
  return 0x7ff0000000000000;
}



// FUNCTION 143364b40 NaN body=19 status=ok
// SIG undefined NaN(void)

undefined8 Scaleform::GFx::NumberUtil::NaN(void)

{
  return 0xfff0000000000000;
}



// FUNCTION 143364b60 FUN_143364b60 body=19 status=ok
// SIG undefined FUN_143364b60(void)

undefined8 FUN_143364b60(void)

{
  return 0x10000000000000;
}



// FUNCTION 143364b80 FUN_143364b80 body=19 status=ok
// SIG undefined FUN_143364b80(void)

undefined8 FUN_143364b80(void)

{
  return 0x7fefffffffffffff;
}


