// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434dd100 ForEachChild_GC body=61 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::Domain::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*param_3)(param_2,param_1 + 0x40);
  }
  return;
}



// FUNCTION 1434dd150 FUN_1434dd150 body=246 status=ok
// SIG undefined FUN_1434dd150(void)

undefined8 FUN_1434dd150(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354b50(local_68,param_3);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  local_res10 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),local_78,local_70);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"Domain ",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::ASString::operator+(&local_res8,param_2,&local_res10);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1434dd250 FUN_1434dd250 body=614 status=ok
// SIG undefined FUN_1434dd250(void)

void FUN_1434dd250(longlong param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (param_2 == 0) {
    uVar5 = FUN_1435be210(*(undefined8 *)(lVar2 + 0x1c8),&local_res8,lVar2);
    FUN_1434e6830(param_1 + 0x40,uVar5);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    if (*(longlong *)(lVar2 + 0x108) != 0) {
      uVar6 = *(longlong *)(lVar2 + 0x108) - 1;
      uVar5 = FUN_143307740(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar2 + 0x120) + (uVar6 >> 6) * 8) +
                                0x18 + (ulonglong)((uint)uVar6 & 0x3f) * 0xa0) + 0xa0) + 0x18,
                            &local_res8);
      FUN_1432c4d80(param_1 + 0x48,uVar5);
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
        return;
      }
    }
  }
  else if (((((byte)*param_3 & 0x1f) == 0xc) && (lVar3 = *(longlong *)(param_3 + 4), lVar3 != 0)) &&
          (*(longlong *)(param_1 + 0x28) == *(longlong *)(lVar3 + 0x28))) {
    uVar5 = FUN_1435be210(*(undefined8 *)(lVar3 + 0x40),&local_res8,lVar2);
    FUN_1434e6830(param_1 + 0x40,uVar5);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    if ((*(ulonglong *)(*(ulonglong *)(lVar3 + 0x48) & 0xfffffffffffffffc) & 0x7fffffffffffffff) !=
        0) {
      FUN_1432c4d80(param_1 + 0x48,lVar3 + 0x48);
      return;
    }
    if (*(longlong *)(lVar2 + 0x108) != 0) {
      uVar6 = *(longlong *)(lVar2 + 0x108) - 1;
      uVar5 = FUN_143307740(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar2 + 0x120) + (uVar6 >> 6) * 8) +
                                0x18 + (ulonglong)((uint)uVar6 & 0x3f) * 0xa0) + 0xa0) + 0x18,
                            &local_res8);
      FUN_1432c4d80(param_1 + 0x48,uVar5);
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
    }
  }
  else {
    uVar5 = FUN_1435c8e40(local_18,0x40a,lVar2);
    FUN_1435cbef0(lVar2,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dd4c0 FUN_1434dd4c0 body=420 status=ok
// SIG undefined FUN_1434dd4c0(void)

void FUN_1434dd4c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res8;
  undefined4 uStackX_c;
  RefCountImpl *local_res18 [2];
  
  uVar1 = *(uint *)(param_3 + 0x48);
  FUN_1434effb0(param_1 + 0x50,(ulonglong)uVar1);
  _guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x50),*(void **)(param_3 + 0x50),(ulonglong)uVar1);
  puVar4 = (ulonglong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
  if (puVar4 == (ulonglong *)0x0) {
    puVar4 = (ulonglong *)0x0;
  }
  else {
    puVar4[1] = *(ulonglong *)(param_1 + 0x50);
    *puVar4 = (ulonglong)uVar1;
  }
  local_res8 = 0x153;
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x178,&local_res8);
  local_res18[0] = (RefCountImpl *)0x0;
  if (lVar5 != 0) {
    local_res18[0] = (RefCountImpl *)FUN_1434e5dc0(lVar5);
  }
  FUN_1432c2fb0(&local_res8,"ByteArray");
  FUN_1432c4d80(local_res18[0] + 0x18,&local_res8);
  uVar6 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
  }
  *(uint *)(local_res18[0] + 0x10) = uVar1;
  cVar2 = FUN_14361e750(puVar4,local_res18[0]);
  if (cVar2 == '\0') {
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
       ((*(ulonglong *)(param_1 + 0x60) & 0xfffffffffffffffe) != 0)) {
      FUN_1434efb80(param_1 + 0x50,param_1 + 0x50,0);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    FUN_1435c7d00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res8,local_res18,
                  *(undefined8 *)(param_1 + 0x40),0);
    lVar5 = CONCAT44(uStackX_c,local_res8);
    if (((lVar5 != 0) && ((local_res8 & 1) == 0)) && ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
      FUN_1434ef880();
    }
  }
  if (local_res18[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res18[0]);
  }
  if (puVar4 != (ulonglong *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar4);
  }
  return;
}



// FUNCTION 1434dd670 FUN_1434dd670 body=233 status=ok
// SIG undefined FUN_1434dd670(void)

void FUN_1434dd670(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28);
  if (lVar1 == 0) {
    uVar5 = *param_2;
    if (uVar5 != 0) {
      if ((uVar5 & 1) != 0) {
        *param_2 = uVar5 - 1;
        *param_2 = 0;
        return;
      }
      if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
        FUN_1434ef880();
      }
      *param_2 = 0;
      return;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = FUN_1435b5bc0(uVar2);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1434dd020(lVar4,uVar2);
    }
    uVar3 = *param_2;
    if (uVar5 != uVar3) {
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar3 - 1;
        }
      }
      *param_2 = uVar5;
    }
    FUN_1434f0700(*param_2 + 0x40,lVar1);
  }
  return;
}



// FUNCTION 1434dd760 FUN_1434dd760 body=289 status=ok
// SIG undefined FUN_1434dd760(void)

void FUN_1434dd760(longlong param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [8];
  
  local_58 = *(longlong *)*param_3;
  if (local_58 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = -1;
    do {
      local_50 = local_50 + 1;
    } while (*(char *)(local_58 + local_50) != '\0');
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = FUN_1435ae830(local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_58);
  plVar2 = (longlong *)FUN_1435be300(uVar3,uVar1);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (local_30 != 0) {
    if ((local_30 & 1) == 0) {
      if ((*(uint *)(local_30 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_30 = local_30 - 1;
    }
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffec;
  *param_2 = *param_2 | 0xc;
  local_48 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = uStack_40;
  param_2[7] = uStack_3c;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1435b4fe0(*(undefined8 *)(*plVar2 + 0xd8));
    FUN_1435903c0(param_2,uVar3);
  }
  return;
}



// FUNCTION 1434dd890 FUN_1434dd890 body=788 status=ok
// SIG undefined FUN_1434dd890(void)

void FUN_1434dd890(longlong param_1,char *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  RefCountImpl *pRVar11;
  longlong lVar12;
  ulonglong uVar13;
  RefCountImpl *pRVar14;
  uint local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 uStackX_14;
  RefCountImpl *local_res18;
  ulonglong local_res20;
  undefined1 local_78 [8];
  longlong local_70;
  SysFile local_68 [16];
  RefCountImpl *local_58;
  
  *param_2 = '\0';
  Scaleform::SysFile::SysFile(local_68);
  puVar2 = (undefined8 *)*param_3;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (puVar2 == (undefined8 *)(puVar2[1] + 0x80)) {
    uVar10 = FUN_1435c8e40(local_78,0x5e3,uVar3);
    FUN_1435cbe70(uVar3,uVar10);
    piVar1 = (int *)(local_70 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar10 = *puVar2;
    uVar6 = FUN_14335fa60(param_3);
    FUN_1432c3140(&local_res20,uVar10,uVar6);
    cVar4 = Scaleform::GFx::URLBuilder::IsPathAbsolute((local_res20 & 0xfffffffffffffffc) + 0xc);
    if (cVar4 == '\0') {
      uVar10 = FString::TrimQuotes(param_1 + 0x48,&local_res8,&local_res20);
      FUN_1432c4d80(&local_res20,uVar10);
      uVar13 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
      iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar13 + 8,0xffffffff);
      if (iVar7 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar13);
      }
    }
    bVar5 = Scaleform::SysFile::Open(local_68,(String *)&local_res20,0x21,0x1b6);
    if (bVar5) {
      uVar8 = (**(code **)(*(longlong *)local_58 + 0x30))();
      local_res8 = uVar8;
      FUN_1434effb0(param_1 + 0x50,(longlong)(int)uVar8);
      uVar9 = (**(code **)(*(longlong *)local_58 + 0x50))
                        (local_58,*(undefined8 *)(param_1 + 0x50),uVar8);
      if (uVar9 == uVar8) {
        pRVar11 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
        local_res18 = (RefCountImpl *)0x0;
        pRVar14 = local_res18;
        if (pRVar11 != (RefCountImpl *)0x0) {
          lVar12 = *(longlong *)(param_1 + 0x50);
          *(longlong *)pRVar11 = (longlong)(int)local_res8;
          *(longlong *)(pRVar11 + 8) = lVar12;
          pRVar14 = pRVar11;
        }
        local_res10 = 0x153;
        lVar12 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x178,&local_res10);
        if (lVar12 != 0) {
          local_res18 = (RefCountImpl *)FUN_1434e5dc0(lVar12);
        }
        FUN_1432c2fb0(&local_res10,*(undefined8 *)*param_3);
        FUN_1432c4d80(local_res18 + 0x18,&local_res10);
        uVar13 = CONCAT44(uStackX_14,local_res10) & 0xfffffffffffffffc;
        iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar13 + 8,0xffffffff);
        if (iVar7 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar13);
        }
        *(uint *)(local_res18 + 0x10) = local_res8;
        cVar4 = FUN_14361e750(pRVar14,local_res18);
        *param_2 = cVar4;
        if (cVar4 != '\0') {
          FUN_1435c7d00(uVar3,&local_res8,&local_res18,*(undefined8 *)(param_1 + 0x40),0);
          lVar12 = CONCAT44(uStackX_c,local_res8);
          if (((lVar12 != 0) && ((local_res8 & 1) == 0)) &&
             ((*(uint *)(lVar12 + 8) & 0x3fffff) != 0)) {
            *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) - 1;
            FUN_1434ef880();
          }
        }
        if (local_res18 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_res18);
        }
        if (pRVar14 != (RefCountImpl *)0x0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pRVar14);
        }
      }
      if (*param_2 == '\0') {
        Scaleform::
        ArrayBase<Scaleform::ArrayData<unsigned_char,Scaleform::AllocatorLH<unsigned_char,328>,Scaleform::ArrayDefaultPolicy>_>
        ::Clear(param_1 + 0x50);
      }
    }
    else {
      uVar10 = FUN_1435c8e40(local_78,0x5dc,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
      FUN_1435cbdb0(uVar3,uVar10);
      piVar1 = (int *)(local_70 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
  }
  if (local_58 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_58);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)local_68);
  return;
}



// FUNCTION 1434ddbb0 FUN_1434ddbb0 body=33 status=ok
// SIG undefined FUN_1434ddbb0(void)

undefined8 * FUN_1434ddbb0(undefined8 *param_1)

{
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b1aa00;
  return param_1;
}



// FUNCTION 1434ddbe0 FUN_1434ddbe0 body=141 status=ok
// SIG undefined FUN_1434ddbe0(void)

void FUN_1434ddbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434dd020(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434ddc80 FUN_1434ddc80 body=33 status=ok
// SIG undefined FUN_1434ddc80(void)

undefined8 * FUN_1434ddc80(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434ddcb0 FUN_1434ddcb0 body=227 status=ok
// SIG undefined FUN_1434ddcb0(void)

undefined8 * FUN_1434ddcb0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15850);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15850);
    *puVar3 = &PTR_FUN_145b1aa00;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 1434ddda0 FUN_1434ddda0 body=33 status=ok
// SIG undefined FUN_1434ddda0(void)

undefined8 * FUN_1434ddda0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1434dddd0 FUN_1434dddd0 body=159 status=ok
// SIG undefined FUN_1434dddd0(void)

void FUN_1434dddd0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar2 = FUN_1435b5bc0(uVar4);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1434dd020(lVar2,uVar4);
  }
  uVar1 = *param_2;
  if (uVar3 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = uVar3;
  }
  uVar3 = *param_2;
  uVar4 = FUN_1435cf440(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  FUN_1434f0700(uVar3 + 0x40,uVar4);
  return;
}



// FUNCTION 1434dde80 FUN_1434dde80 body=33 status=ok
// SIG undefined FUN_1434dde80(void)

undefined8 * FUN_1434dde80(undefined8 *param_1)

{
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b1aaa0;
  return param_1;
}



// FUNCTION 1434ddee0 FUN_1434ddee0 body=68 status=ok
// SIG undefined FUN_1434ddee0(void)

void FUN_1434ddee0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3ef,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ddf30 FUN_1434ddf30 body=68 status=ok
// SIG undefined FUN_1434ddf30(void)

void FUN_1434ddf30(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3ee,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ddf80 FUN_1434ddf80 body=39 status=ok
// SIG undefined FUN_1434ddf80(void)

undefined8 * FUN_1434ddf80(undefined8 *param_1)

{
  FUN_1435b9d40();
  *(undefined2 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_145b1ab68;
  return param_1;
}



// FUNCTION 1434ddfd0 FUN_1434ddfd0 body=393 status=ok
// SIG undefined FUN_1434ddfd0(void)

void FUN_1434ddfd0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong lVar4;
  undefined4 local_58 [2];
  undefined8 local_50;
  uint local_48;
  uint local_40 [10];
  undefined4 uVar5;
  
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x41) == '\0')) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x100);
    local_res18 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x108);
    local_58[0] = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    FUN_14361d0e0(&local_res18,local_58);
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0xa8) + (ulonglong)local_48 * 4);
    lVar4 = param_1;
    pcVar3 = (char *)FUN_1435b5dd0(*(longlong *)(param_1 + 0x28),local_res8,
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x100),local_58,
                                   param_1);
    uVar5 = (undefined4)((ulonglong)lVar4 >> 0x20);
    if (*pcVar3 != '\0') {
      FUN_143590110(local_40,param_1);
      lVar4 = *(longlong *)(param_1 + 0x28);
      local_res10[0] = 0;
      FUN_1434e80d0(*(undefined8 *)(lVar4 + 0x98),local_res8,local_40,lVar2,CONCAT44(uVar5,uVar1),0,
                    param_1,lVar4 + 200,lVar4,local_40,local_res10,0,0,1,1,0);
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (9 < ((byte)local_40[0] & 0x1f)) {
        if ((local_40[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_40);
        }
        else {
          FUN_143592150();
        }
      }
    }
  }
  return;
}



// FUNCTION 1434de160 FUN_1434de160 body=399 status=ok
// SIG undefined FUN_1434de160(void)

void FUN_1434de160(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  byte local_60 [4];
  undefined8 local_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  
  local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x108);
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  FUN_14361d0e0(&local_res10,local_78);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x100);
  local_res18 = local_70;
  if (local_78[0] != 0) {
    uVar9 = (ulonglong)local_78[0];
    do {
      local_60[0] = 0;
      local_5c = 0xffffffffffffffff;
      local_54 = 0xffffffff;
      local_50 = 0;
      local_4c = 0xffffffff;
      local_48 = 0;
      local_40 = 0;
      FUN_14361ced0(&local_res18,local_60);
      if ((local_60[0] & 0xf) == 4) {
        lVar5 = *(longlong *)(lVar1 + 0xa0);
        if (((local_60[0] & 0xf) == 0) || ((local_60[0] & 0xf) == 6)) {
          uVar7 = (ulonglong)(int)local_54;
        }
        else {
          local_res20 = *(undefined8 *)(*(longlong *)(lVar5 + 0x78) + (ulonglong)local_54 * 8);
          uVar3 = FUN_14358f8b0(&local_res20);
          uVar7 = (ulonglong)uVar3;
        }
        piVar8 = (int *)(uVar7 * 0x10 + *(longlong *)(lVar5 + 0x148));
        uVar4 = FUN_1435ba6d0(lVar1,(longlong)*piVar8);
        FUN_1435ba8a0(lVar1,&local_res8,(longlong)piVar8[2]);
        cVar2 = FUN_1435be060(uVar4);
        if ((((cVar2 == '\0') &&
             (lVar5 = FUN_1435c7f00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),lVar1,
                                    piVar8), lVar5 != 0)) && (*(longlong *)(lVar5 + 0xe8) == lVar1))
           && (plVar6 = (longlong *)(*(longlong *)(lVar5 + 0xd8) + 0xe8), *plVar6 == 0)) {
          FUN_1434f0700(plVar6,param_1);
        }
        piVar8 = (int *)(local_res8 + 0x18);
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          FUN_14335f920();
        }
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 1434de300 FUN_1434de300 body=86 status=ok
// SIG undefined FUN_1434de300(void)

longlong FUN_1434de300(longlong *param_1,longlong param_2)

{
  if (((param_2 != 0) && ((char)param_1[8] == '\0')) &&
     (*(char *)((longlong)param_1 + 0x41) == '\0')) {
    (**(code **)(*param_1 + 0xc0))();
    if (*(char *)(*(longlong *)(param_1[5] + 0x98) + 0xb8) == '\0') {
      FUN_1435c8f90(*(longlong *)(param_1[5] + 0x98),1);
    }
  }
  return param_2;
}



// FUNCTION 1434de360 FUN_1434de360 body=71 status=ok
// SIG undefined FUN_1434de360(void)

void FUN_1434de360(longlong *param_1)

{
  if (((char)param_1[8] == '\0') && (*(char *)((longlong)param_1 + 0x41) == '\0')) {
    (**(code **)(*param_1 + 0xc0))();
    if (*(char *)(*(longlong *)(param_1[5] + 0x98) + 0xb8) == '\0') {
      FUN_1435c8f90(*(longlong *)(param_1[5] + 0x98),1);
      return;
    }
  }
  return;
}



// FUNCTION 1434de3b0 FUN_1434de3b0 body=1278 status=ok
// SIG undefined FUN_1434de3b0(void)

undefined8 * FUN_1434de3b0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_1435b9d40(param_1,param_3);
  *param_1 = &PTR_ForEachChild_GC_145b1ac30;
  param_1[8] = 0;
  uVar2 = Scaleform::GFx::NumberUtil::NaN();
  param_1[9] = uVar2;
  uVar2 = Scaleform::GFx::NumberUtil::NaN();
  param_1[10] = uVar2;
  uVar2 = Scaleform::GFx::NumberUtil::NaN();
  param_1[0xb] = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar7 = 0x10;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 2;
  *(undefined4 *)(param_1 + 0x11) = 4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  *(undefined4 *)(param_1 + 0x12) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x20;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
  *(undefined4 *)(param_1 + 0x14) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x200;
  *(undefined4 *)(param_1 + 0x15) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x5ff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_1434deee0(param_1,&PTR_PTR_1464efc20);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1c8);
  uVar3 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0xd8));
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(param_2 + 0x200) + 0xd8));
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(param_2 + 0x210) + 0xd8));
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(param_2 + 0x218) + 0xd8));
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435caea0(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435caf00(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435caf60(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435cafc0(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435cb020(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435cb080(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  uVar3 = FUN_1435cb140(param_2);
  FUN_1434dea70(param_1,uVar2,uVar3);
  plVar1 = *(longlong **)(param_2 + 0x50);
  if ((char)plVar1[5] != '\0') {
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
    uVar3 = FUN_1435b4fe0(uVar3);
    FUN_1434dea70(param_1,uVar2,uVar3);
    uVar3 = (**(code **)(*plVar1 + 0x70))(plVar1);
    uVar3 = FUN_1435b4fe0(uVar3);
    FUN_1434dea70(param_1,uVar2,uVar3);
  }
  local_58 = &local_88;
  local_88 = 1;
  local_80 = 0;
  local_7c = 0;
  local_78 = &DAT_145af3922;
  ppuVar4 = &PTR_FUN_145b1afa0;
  local_70 = "";
  lVar5 = 0xd;
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  do {
    FUN_1435b6830(param_1[5],&local_58,ppuVar4);
    ppuVar4 = ppuVar4 + 6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_78 = &DAT_145af3922;
  local_70 = "flash.net";
  ppuVar4 = &PTR_FUN_145b1b280;
  local_58 = &local_88;
  local_88 = 1;
  local_80 = 0;
  lVar5 = 3;
  local_50 = 0;
  local_48 = 0;
  lVar6 = 3;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_7c = 0;
  local_68 = 0;
  uStack_60 = 0;
  do {
    FUN_1435b6830(param_1[5],&local_58,ppuVar4);
    ppuVar4 = ppuVar4 + 6;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  local_70 = "flash.system";
  local_58 = &local_88;
  local_88 = 1;
  local_80 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_7c = 0;
  local_78 = &DAT_145af3922;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1435b6830(param_1[5],&local_58,&PTR_LAB_145b1b348);
  local_78 = &DAT_145af3922;
  local_70 = "flash.utils";
  ppuVar4 = &PTR_LAB_145b1b390;
  local_58 = &local_88;
  local_88 = 1;
  local_80 = 0;
  local_7c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  lVar6 = 0xb;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  do {
    FUN_1435b6830(param_1[5],&local_58,ppuVar4);
    ppuVar4 = ppuVar4 + 6;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  ppuVar4 = &PTR_s_Infinity_1467d0140;
  do {
    FUN_1435b5940(param_3,ppuVar4);
    ppuVar4 = ppuVar4 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_88 = 1;
  local_78 = &DAT_145af3922;
  ppuVar4 = &PTR_FUN_145b1b640;
  local_80 = 0;
  local_70 = "avmplus";
  local_58 = &local_88;
  local_7c = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  do {
    FUN_1435b6830(param_1[5],&local_58,ppuVar4);
    ppuVar4 = ppuVar4 + 6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 1434de8c0 FUN_1434de8c0 body=181 status=ok
// SIG undefined FUN_1434de8c0(void)

void FUN_1434de8c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_ForEachChild_GC_145b1ac30;
  FUN_1434e5ef0(param_1 + 0x19);
  FUN_1434e5f70(param_1 + 0x16);
  if (9 < ((byte)*(uint *)(param_1 + 0xc) & 0x1f)) {
    if ((*(uint *)(param_1 + 0xc) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (param_1[8] != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(param_1[8] + 8) + 1;
    do {
      if (*(longlong *)(param_1[8] + 0x10 + lVar1) != -2) {
        *(undefined8 *)(param_1[8] + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (param_1[8] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    param_1[8] = 0;
  }
  *param_1 = &PTR_FUN_145b1aaa0;
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434de980 FUN_1434de980 body=221 status=ok
// SIG undefined FUN_1434de980(void)

longlong FUN_1434de980(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,ulonglong *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1434ef720(param_1 + 0xb0,param_6);
  uVar2 = param_5;
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar1 = *(longlong *)(lVar3 + 0x78);
  *(longlong *)(lVar3 + 0x78) = lVar1 + 1;
  FUN_1435b5270(lVar3,param_3,param_4,param_5,1,lVar1,0);
  param_5 = uVar2;
  FUN_1434e7e70(param_2 + 0x30,param_3,param_4,&param_5);
  uVar4 = *(longlong *)(lVar3 + 0x28) + -1 + *(longlong *)(lVar3 + 0x40);
  *param_7 = uVar4;
  if (((longlong)uVar4 < 0) || (uVar4 < *(ulonglong *)(lVar3 + 0x28))) {
    lVar3 = FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30));
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x38) + 0x10 +
            ((uVar4 & 0xffffffff) - *(ulonglong *)(lVar3 + 0x28)) * 0x40;
  }
  return lVar3;
}



// FUNCTION 1434dea70 FUN_1434dea70 body=453 status=ok
// SIG undefined FUN_1434dea70(void)

void FUN_1434dea70(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  longlong local_res10;
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  uint local_38 [8];
  
  (**(code **)(*param_3 + 0x78))(param_3,&local_res8);
  local_res10 = param_3[5];
  local_50 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8);
  if (local_50 != 0) {
    *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
  }
  uVar4 = FUN_143590110(local_38,param_3);
  FUN_1434ef720(param_1 + 0xb0,uVar4);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar2 + 0x78);
  *(longlong *)(lVar2 + 0x78) = lVar3 + 1;
  FUN_1435b5270(lVar2,&local_res8,local_50,local_res10,1,lVar3,0);
  local_58 = local_res8;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (local_50 != 0) {
    *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
  }
  local_48 = &local_58;
  local_40 = &local_res10;
  FUN_1434e5270(param_2 + 0x30,*(undefined8 *)(param_2 + 0x38),&local_48,
                (uint)((*(longlong *)(local_50 + 0x28) << 0x3c) >> 0x3c) ^
                (*(uint *)(*(longlong *)(local_50 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                *(uint *)(local_res8 + 0x1c) & 0xffffff);
  if (local_50 != 0) {
    if ((local_50 & 1) == 0) {
      if ((*(uint *)(local_50 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_50 = local_50 - 1;
    }
  }
  piVar1 = (int *)(local_58 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434dec40 FUN_1434dec40 body=170 status=ok
// SIG undefined FUN_1434dec40(void)

longlong FUN_1434dec40(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) && ((int)((*(longlong *)(param_4 + 0x28) << 0x3c) >> 0x3c) == 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar1 = *(undefined8 *)(lVar2 + 0x1c8);
    lVar2 = FUN_1435c8430(lVar2,param_3,param_4,uVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1435b4fe0(*(undefined8 *)(lVar2 + 0xd8));
      *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
      param_2 = FUN_1434e8000(param_1,uVar1,uVar3,param_4,param_5);
    }
  }
  return param_2;
}



// FUNCTION 1434decf0 FUN_1434decf0 body=475 status=ok
// SIG undefined FUN_1434decf0(void)

ulonglong FUN_1434decf0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined1 local_res18 [8];
  
  if ((int)((*(longlong *)(param_3 + 0x28) << 0x3c) >> 0x3c) != 0) {
    return 0;
  }
  lVar8 = *(longlong *)*param_2;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(lVar8 + lVar6) != '\0');
  uVar4 = Scaleform::String::BernsteinHashFunction(lVar8,lVar6,0x1505);
  lVar6 = *(longlong *)(param_1 + 0x40);
  uVar4 = *(ulonglong *)(lVar6 + 8) & uVar4;
  puVar9 = (ulonglong *)(lVar6 + 0x10 + uVar4 * 0x20);
  if (*puVar9 == 0xfffffffffffffffe) {
    return 0;
  }
  uVar10 = uVar4;
  if (puVar9[1] != uVar4) {
    return 0;
  }
  do {
    if (puVar9[1] == uVar4) {
      pcVar5 = (char *)puVar9[2];
      lVar7 = lVar8 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar7];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        if ((longlong)uVar10 < 0) {
          return 0;
        }
        lVar6 = (uVar10 + 1) * 0x20 + lVar6;
        if (lVar6 == 0) {
          return 0;
        }
        plVar3 = *(longlong **)(lVar6 + 8);
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        pcVar5 = (char *)**(undefined8 **)(param_3 + 0x38);
        lVar8 = *(longlong *)(*plVar3 + 0x18) - (longlong)pcVar5;
        break;
      }
    }
    uVar10 = *puVar9;
    if (uVar10 == 0xffffffffffffffff) {
      return 0;
    }
    puVar9 = (ulonglong *)(lVar6 + 0x10 + uVar10 * 0x20);
  } while( true );
  while (pcVar5 = pcVar5 + 1, cVar2 != '\0') {
    cVar1 = *pcVar5;
    cVar2 = pcVar5[lVar8];
    if (cVar1 != cVar2) break;
  }
  if (cVar1 != cVar2) {
    return 0;
  }
  puVar9 = (ulonglong *)
           (*(code *)plVar3[1])(local_res18,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  uVar4 = *puVar9;
  FUN_1434f0230(param_1 + 200,param_1 + 200,*(longlong *)(param_1 + 0xd0) + 1);
  puVar9 = (ulonglong *)(*(longlong *)(param_1 + 200) + (*(longlong *)(param_1 + 0xd0) + -1) * 8);
  if (puVar9 != (ulonglong *)0x0) {
    *puVar9 = uVar4;
    if (uVar4 == 0) {
      return 0;
    }
    *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
    *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
    FUN_1434ef880(uVar4);
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 1434deee0 FUN_1434deee0 body=139 status=ok
// SIG undefined FUN_1434deee0(void)

void FUN_1434deee0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_res10;
  longlong *local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)*param_2;
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    local_18 = &local_res10;
    local_10 = param_2;
    do {
      lVar3 = -1;
      local_res10 = *(longlong *)(*plVar1 + 0x10);
      do {
        lVar3 = lVar3 + 1;
      } while (*(char *)(local_res10 + lVar3) != '\0');
      uVar2 = Scaleform::String::BernsteinHashFunction(local_res10,lVar3,0x1505);
      FUN_1434e50e0(param_1 + 0x40,param_1 + 0x40,&local_18,uVar2);
      uVar4 = (ulonglong)((int)uVar4 + 1);
      plVar1 = (longlong *)param_2[uVar4];
      local_10 = param_2 + uVar4;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1434def80 ForEachChild_GC body=122 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_1435b16a0();
  uVar1 = *(ulonglong *)(param_1 + 0xd0);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 200) + uVar2 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 200) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1434df000 FUN_1434df000 body=235 status=ok
// SIG undefined FUN_1434df000(void)

void FUN_1434df000(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  FUN_1432c5960(&local_38,DAT_146b62f28);
  cVar4 = thunk_FUN_143365ba0(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),
                              &local_38,0);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_48,0x41c,uVar3);
    FUN_1435cbe90(uVar3,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    puVar6 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar6 = local_38;
    }
    local_40 = FUN_143360a90(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),puVar6,local_30);
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = local_40;
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FUN_14335f920(local_40);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 1434df100 FUN_1434df100 body=235 status=ok
// SIG undefined FUN_1434df100(void)

void FUN_1434df100(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  FUN_1432c5960(&local_38,DAT_146b62f28);
  cVar4 = thunk_FUN_143365ba0(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),
                              &local_38,1);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_48,0x41c,uVar3);
    FUN_1435cbe90(uVar3,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    puVar6 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar6 = local_38;
    }
    local_40 = FUN_143360a90(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),puVar6,local_30);
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = local_40;
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FUN_14335f920(local_40);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 1434df200 FUN_1434df200 body=235 status=ok
// SIG undefined FUN_1434df200(void)

void FUN_1434df200(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  FUN_1432c5960(&local_38,DAT_146b62f28);
  cVar4 = thunk_FUN_143365870(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),
                              &local_38,0);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_48,0x41c,uVar3);
    FUN_1435cbe90(uVar3,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    puVar6 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar6 = local_38;
    }
    local_40 = FUN_143360a90(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),puVar6,local_30);
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = local_40;
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FUN_14335f920(local_40);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 1434df300 FUN_1434df300 body=235 status=ok
// SIG undefined FUN_1434df300(void)

void FUN_1434df300(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  FUN_1432c5960(&local_38,DAT_146b62f28);
  cVar4 = thunk_FUN_143365870(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),
                              &local_38,1);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_48,0x41c,uVar3);
    FUN_1435cbe90(uVar3,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    puVar6 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar6 = local_38;
    }
    local_40 = FUN_143360a90(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),puVar6,local_30);
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = local_40;
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FUN_14335f920(local_40);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 1434df470 FUN_1434df470 body=356 status=ok
// SIG undefined FUN_1434df470(void)

void FUN_1434df470(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  undefined4 local_48 [2];
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = *(undefined8 **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x80);
  *(int *)(local_40 + 3) = *(int *)(local_40 + 3) + 1;
  if ((param_3 != 0) && (pcVar3 = (char *)FUN_1435911f0(param_4,local_res18), *pcVar3 == '\0'))
  goto LAB_1434df5ad;
  local_res8[0] = 0;
  iVar2 = *(int *)(local_40 + 4);
  local_48[0] = 0;
  if (iVar2 == 0) {
    local_28 = Scaleform::GFx::NumberUtil::NaN();
    local_38[0] = 4;
    local_30 = 0;
    FUN_143590140(param_2,local_38);
    if (((byte)local_38[0] & 0x1f) < 10) goto LAB_1434df5ad;
    if ((local_38[0] >> 9 & 1) != 0) {
      FUN_143592150();
      goto LAB_1434df5ad;
    }
  }
  else {
    if ((1 < param_3) &&
       (pcVar3 = (char *)FUN_143590b70(param_4 + 0x20,local_res18,local_res8), *pcVar3 == '\0'))
    goto LAB_1434df5ad;
    local_28 = FUN_143364f60(*local_40,iVar2,local_res8[0],local_48);
    local_38[0] = 4;
    local_30 = 0;
    FUN_143590140(param_2,local_38);
    if (((byte)local_38[0] & 0x1f) < 10) goto LAB_1434df5ad;
    if ((local_38[0] >> 9 & 1) != 0) {
      FUN_143592150(local_38);
      goto LAB_1434df5ad;
    }
  }
  FUN_1435920c0(local_38);
LAB_1434df5ad:
  piVar1 = (int *)(local_40 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434df5e0 FUN_1434df5e0 body=229 status=ok
// SIG undefined FUN_1434df5e0(void)

void FUN_1434df5e0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  char *_Str1;
  undefined8 uVar5;
  uint local_res18 [2];
  ulonglong local_res20;
  
  iVar1 = (int)((longlong *)*param_3)[4];
  local_res18[0] = 0;
  lVar2 = *(longlong *)*param_3;
  FUN_1432c2fb0(&local_res20,lVar2);
  uVar3 = Scaleform::GFx::ASUtils::SkipWhiteSpace(&local_res20);
  local_res18[0] = FUN_1433062a0(uVar3,lVar2,iVar1);
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  _Str1 = (char *)((ulonglong)local_res18[0] + lVar2);
  iVar4 = strncmp(_Str1,"0x",2);
  if (iVar4 != 0) {
    iVar4 = strncmp(_Str1,"0X",2);
    if (iVar4 != 0) {
      uVar5 = FUN_143365480(_Str1,iVar1 - local_res18[0],local_res18);
      *param_2 = uVar5;
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1434df6d0 FUN_1434df6d0 body=385 status=ok
// SIG undefined FUN_1434df6d0(void)

void FUN_1434df6d0(longlong param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  undefined8 *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  if (param_3 == 0) {
    FUN_143590250(param_2,*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                          + 8);
    return;
  }
  uVar3 = *param_4 & 0x1f;
  if (uVar3 != 0) {
    if (uVar3 == 0xc) {
      bVar6 = *(longlong *)(param_4 + 4) == 0;
    }
    else {
      if (uVar3 != 10) goto LAB_1434df720;
      bVar6 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    }
    if (!bVar6) {
LAB_1434df720:
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
      local_48 = (undefined8 *)(lVar2 + 0x48);
      piVar1 = (int *)(lVar2 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar4 = (char *)FUN_1435911f0(param_4,local_res18,&local_48);
      if (*pcVar4 != '\0') {
        FUN_1432c5960(&local_38,DAT_146b62f28);
        FUN_1433649b0(*local_48,*(undefined4 *)(local_48 + 4),&local_38,0);
        puVar5 = &DAT_145af3922;
        if (local_38 != (undefined1 *)0x0) {
          puVar5 = local_38;
        }
        local_40 = FUN_143360a90(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                  0x218),puVar5,local_30);
        *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 1;
        FUN_143590250(param_2,&local_40);
        piVar1 = (int *)(local_40 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        Scaleform::StringBuffer::~StringBuffer(&local_38);
      }
      piVar1 = (int *)(local_48 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143590250(param_2,*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                        0x10);
  return;
}



// FUNCTION 1434df860 FUN_1434df860 body=385 status=ok
// SIG undefined FUN_1434df860(void)

void FUN_1434df860(longlong param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  undefined8 *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  if (param_3 == 0) {
    FUN_143590250(param_2,*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                          + 8);
    return;
  }
  uVar3 = *param_4 & 0x1f;
  if (uVar3 != 0) {
    if (uVar3 == 0xc) {
      bVar6 = *(longlong *)(param_4 + 4) == 0;
    }
    else {
      if (uVar3 != 10) goto LAB_1434df8b0;
      bVar6 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    }
    if (!bVar6) {
LAB_1434df8b0:
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
      local_48 = (undefined8 *)(lVar2 + 0x48);
      piVar1 = (int *)(lVar2 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar4 = (char *)FUN_1435911f0(param_4,local_res18,&local_48);
      if (*pcVar4 != '\0') {
        FUN_1432c5960(&local_38,DAT_146b62f28);
        thunk_FUN_143365a50(*local_48,*(undefined4 *)(local_48 + 4),&local_38,0);
        puVar5 = &DAT_145af3922;
        if (local_38 != (undefined1 *)0x0) {
          puVar5 = local_38;
        }
        local_40 = FUN_143360a90(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                  0x218),puVar5,local_30);
        *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 1;
        FUN_143590250(param_2,&local_40);
        piVar1 = (int *)(local_40 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        Scaleform::StringBuffer::~StringBuffer(&local_38);
      }
      piVar1 = (int *)(local_48 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143590250(param_2,*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                        0x10);
  return;
}



// FUNCTION 1434df9f0 FUN_1434df9f0 body=468 status=ok
// SIG undefined FUN_1434df9f0(void)

void FUN_1434df9f0(longlong param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  uVar6 = *param_3 & 0x1f;
  if (uVar6 == 0) {
LAB_1434dfbbb:
    *param_2 = 0;
  }
  else {
    if (uVar6 == 0xc) {
      bVar10 = *(longlong *)(param_3 + 4) == 0;
LAB_1434dfa2b:
      if (bVar10) goto LAB_1434dfbbb;
    }
    else if (uVar6 == 10) {
      bVar10 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1434dfa2b;
    }
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_res20 = lVar3 + 0x48;
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar8 = (char *)FUN_1435911f0(param_3,local_res18,&local_res20);
    if (*pcVar8 == '\0') {
      *param_2 = 0;
    }
    else if (*(int *)(local_res20 + 0x20) == 0) {
      *param_2 = 0;
    }
    else {
      sVar4 = FUN_14335fad0(&local_res20,0);
      iVar7 = FUN_1434f05a0(sVar4);
      if ((iVar7 == 0) && (sVar4 != 0x5f)) {
        *param_2 = 0;
      }
      else {
        uVar9 = 1;
        uVar6 = FUN_14335fa60(&local_res20);
        if (1 < uVar6) {
          do {
            uVar6 = FUN_14335fad0(&local_res20,uVar9);
            uVar5 = (ushort)uVar6;
            lVar3 = (ulonglong)(uVar5 >> 8) * 2;
            uVar2 = *(ushort *)(&DAT_145afe320 + lVar3);
            if ((((uVar2 == 0) ||
                 ((uVar2 != 1 &&
                  ((*(ushort *)
                     (&DAT_145afe320 + (ulonglong)(((uVar6 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2)
                    >> (uVar6 & 0xf) & 1) == 0)))) &&
                ((uVar2 = *(ushort *)(&DAT_145afdc80 + lVar3), uVar2 == 0 ||
                 ((uVar2 != 1 &&
                  ((*(ushort *)
                     (&DAT_145afdc80 + (ulonglong)(((uVar6 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2)
                    >> (uVar6 & 0xf) & 1) == 0)))))) &&
               ((1 < (ushort)(uVar5 - 0x2d) && (uVar5 != 0x5f)))) {
              *param_2 = 0;
              goto LAB_1434dfba0;
            }
            uVar9 = uVar9 + 1;
            uVar6 = FUN_14335fa60(&local_res20);
          } while (uVar9 < uVar6);
        }
        *param_2 = 1;
      }
    }
LAB_1434dfba0:
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dfbd0 FUN_1434dfbd0 body=473 status=ok
// SIG undefined FUN_1434dfbd0(void)

void FUN_1434dfbd0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char *pcVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *local_res8;
  undefined1 local_res18 [8];
  ulonglong local_838;
  undefined1 *local_830;
  ulonglong local_828;
  undefined1 local_7f8 [2000];
  
  FUN_1432c5960(&local_830,DAT_146b62f28);
  uVar10 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar12 = uVar10;
  if (param_3 != 0) {
    do {
      if ((int)uVar12 != 0) {
        FUN_1432c5df0(&local_830,0x20);
      }
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
      local_res8 = (undefined8 *)(lVar3 + 0x48);
      piVar1 = (int *)(lVar3 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar6 = (char *)FUN_1435911f0(uVar12 * 0x20 + param_4,local_res18,&local_res8);
      if (*pcVar6 == '\0') {
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        goto LAB_1434dfd6e;
      }
      puVar7 = (ulonglong *)FUN_1432c3140(&local_838,*local_res8,*(undefined4 *)(local_res8 + 4));
      Scaleform::StringBuffer::AppendString
                (&local_830,(*puVar7 & 0xfffffffffffffffc) + 0xc,0xffffffffffffffff);
      uVar9 = local_838 & 0xfffffffffffffffc;
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
      }
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < param_3);
  }
  plVar4 = *(longlong **)(lVar2 + 0x38);
  for (uVar12 = local_828; uVar12 != 0; uVar12 = uVar12 - _Size) {
    _Size = 1999;
    if (uVar12 < 1999) {
      _Size = uVar12;
    }
    puVar8 = &DAT_145af3922;
    if (local_830 != (undefined1 *)0x0) {
      puVar8 = local_830;
    }
    _guard_xfg_dispatch_icall_nop(local_7f8,puVar8 + uVar10,_Size);
    local_7f8[_Size] = 0;
    (**(code **)(*plVar4 + 8))(plVar4,0,local_7f8);
    uVar10 = uVar10 + _Size;
  }
  (**(code **)(*plVar4 + 8))(plVar4,0,&DAT_145af0af0);
LAB_1434dfd6e:
  Scaleform::StringBuffer::~StringBuffer(&local_830);
  return;
}



// FUNCTION 1434dfdc0 FUN_1434dfdc0 body=325 status=ok
// SIG undefined FUN_1434dfdc0(void)

void FUN_1434dfdc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *local_res8;
  RefCountImpl *local_18 [2];
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(lVar2 + 0x10,0x26);
  if (this == (RefCountImpl *)0x0) {
    plVar5 = (longlong *)
             Scaleform::GFx::StateBag::GetLogState
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300)
                         + 0x10) + 0x10,local_18);
    lVar2 = *plVar5;
    if (local_18[0] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_18[0]);
    }
    if (lVar2 != 0) {
      FUN_143317390(lVar2 + 0x18,"navigateToURL failed! UrlNavigator state is not installed.");
    }
  }
  else {
    Scaleform::RefCountImpl::Release(this);
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x10) + 0x218);
    local_res8 = (undefined8 *)(lVar2 + 0x48);
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    FUN_143558250(param_3,&local_res8);
    lVar2 = *(longlong *)this;
    uVar4 = FUN_1432c3140(local_18,*local_res8,*(undefined4 *)(local_res8 + 4));
    (**(code **)(lVar2 + 8))(this,uVar4);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      (((ulonglong)local_18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))
                (DAT_146b62f28,(ulonglong)local_18[0] & 0xfffffffffffffffc);
    }
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dff10 FUN_1434dff10 body=117 status=ok
// SIG undefined FUN_1434dff10(void)

void FUN_1434dff10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar3 = FUN_1435c8910(uVar2,param_3);
  if (lVar3 != 0) {
    FUN_1434f0700(param_2,lVar3);
    return;
  }
  uVar4 = FUN_1435c8e40(local_18,0x3f6,uVar2);
  FUN_1435cbe10(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434dffc0 FUN_1434dffc0 body=270 status=ok
// SIG undefined FUN_1434dffc0(void)

void FUN_1434dffc0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uStackX_c;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  plVar3 = *(longlong **)(lVar2 + 0x240);
  if ((plVar3 != (longlong *)0x0) && (param_3 != 0)) {
    puVar4 = *(undefined8 **)(param_4 + 0x10);
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
    bVar5 = param_3 < 2;
    if (bVar5) {
      puVar8 = (undefined8 *)((ulonglong)uStackX_c << 0x20);
      puVar6 = (undefined8 *)
               **(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
      *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
      puVar7 = puVar6;
    }
    else {
      puVar8 = *(undefined8 **)(param_4 + 0x30);
      puVar6 = (undefined8 *)((ulonglong)uStackX_c << 0x20);
      *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
      puVar7 = puVar8;
    }
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    if (bVar5) {
      piVar1 = (int *)(puVar6 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (!bVar5) {
      piVar1 = (int *)(puVar8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(puVar8);
      }
    }
    (**(code **)(*plVar3 + 8))(plVar3,lVar2,*puVar4,*puVar7);
    piVar1 = (int *)(puVar7 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar7);
    }
    piVar1 = (int *)(puVar4 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar4);
    }
  }
  return;
}



// FUNCTION 1434e0190 FUN_1434e0190 body=184 status=ok
// SIG undefined FUN_1434e0190(void)

void FUN_1434e0190(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_38;
  longlong local_30;
  uint local_28 [2];
  undefined8 local_20;
  
  local_28[0] = 0;
  local_20 = 0;
  local_38 = *(longlong *)*param_3;
  if (local_38 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = -1;
    do {
      local_30 = local_30 + 1;
    } while (*(char *)(local_38 + local_30) != '\0');
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435cf440(uVar1);
  cVar2 = FUN_1435cc800(uVar1,&local_38,uVar3,local_28);
  if (cVar2 != '\0') {
    FUN_1435904e0(local_28,param_2);
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434e0250 FUN_1434e0250 body=100 status=ok
// SIG undefined FUN_1434e0250(void)

void FUN_1434e0250(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_1435caa60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_res8,0);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e02c0 FUN_1434e02c0 body=151 status=ok
// SIG undefined FUN_1434e02c0(void)

void FUN_1434e02c0(longlong param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8 [4];
  undefined8 uStack_10;
  
  lVar3 = FUN_1435caa60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3);
  plVar2 = *(longlong **)(lVar3 + 0xb0);
  if (plVar2 == (longlong *)0x0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined8 *)(param_2 + 6) = uStack_10;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,local_res8,0);
    FUN_143590250(param_2,uVar4);
    piVar1 = (int *)(local_res8[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434e0360 FUN_1434e0360 body=45 status=ok
// SIG undefined FUN_1434e0360(void)

void FUN_1434e0360(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300)
                         + 0x10) + 0x58))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434e03a0 FUN_1434e03a0 body=356 status=ok
// SIG undefined FUN_1434e03a0(void)

void FUN_1434e03a0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  RefCountImpl *this;
  undefined1 local_res18 [16];
  undefined4 local_48 [2];
  uint local_40 [2];
  longlong local_38;
  undefined4 local_30;
  
  if (param_3 < 2) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_40,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_38 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    pcVar5 = (char *)FUN_143590eb0(param_4 + 0x20,local_res18,local_48);
    if (*pcVar5 != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x48);
      lVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,0x88,0);
      if (lVar6 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)FUN_1435fd2c0(lVar6,param_4,local_48[0],0);
      }
      if (2 < param_3) {
        FUN_1435fd8c0(this,param_3 - 2,param_4 + 0x40);
      }
      uVar2 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
      local_30 = FUN_1432e6fd0(uVar2,this);
      local_40[0] = 3;
      local_38 = 0;
      FUN_143590140(param_2,local_40);
      if (9 < ((byte)local_40[0] & 0x1f)) {
        if ((local_40[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_40);
        }
        else {
          FUN_143592150();
        }
      }
      (**(code **)(*(longlong *)this + 8))(this,uVar2);
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1434e0510 FUN_1434e0510 body=356 status=ok
// SIG undefined FUN_1434e0510(void)

void FUN_1434e0510(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  RefCountImpl *this;
  undefined1 local_res18 [16];
  undefined4 local_48 [2];
  uint local_40 [2];
  longlong local_38;
  undefined4 local_30;
  
  if (param_3 < 2) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_40,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_38 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    pcVar5 = (char *)FUN_143590eb0(param_4 + 0x20,local_res18,local_48);
    if (*pcVar5 != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x48);
      lVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,0x88,0);
      if (lVar6 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)FUN_1435fd2c0(lVar6,param_4,local_48[0],1);
      }
      if (2 < param_3) {
        FUN_1435fd8c0(this,param_3 - 2,param_4 + 0x40);
      }
      uVar2 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
      local_30 = FUN_1432e6fd0(uVar2,this);
      local_40[0] = 3;
      local_38 = 0;
      FUN_143590140(param_2,local_40);
      if (9 < ((byte)local_40[0] & 0x1f)) {
        if ((local_40[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_40);
        }
        else {
          FUN_143592150();
        }
      }
      (**(code **)(*(longlong *)this + 8))(this,uVar2);
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1434e06a0 FUN_1434e06a0 body=157 status=ok
// SIG undefined FUN_1434e06a0(void)

undefined8 * FUN_1434e06a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1435b93d0(param_1,param_2,&PTR_DAT_145b16a40);
  *(undefined4 *)(param_1 + 0x12) = 0x17;
  *param_1 = &PTR_FUN_145b1acf8;
  uVar1 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0xd8));
  FUN_1434f0700(param_1 + 0x15,uVar1);
  lVar2 = FUN_1434ef190(param_1);
  lVar3 = FUN_1434ef190(*(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0xd8));
  FUN_1434e6660(lVar2 + 8,lVar3 + 8);
  FUN_1434e8a90(param_1);
  return param_1;
}



// FUNCTION 1434e0780 FUN_1434e0780 body=149 status=ok
// SIG undefined FUN_1434e0780(void)

undefined8 * FUN_1434e0780(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_res18[0] = param_3;
  FUN_1434e06a0(param_1,*(undefined8 *)(param_2 + 0x28));
  *param_1 = &PTR_FUN_145b1ad70;
  param_1[0x20] = param_2;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  param_1[0x21] = local_res18[0];
  local_28[0] = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  FUN_14361d0e0(local_res18,local_28);
  FUN_1435b5890(param_1,local_res8,local_28,param_2,0x48);
  return param_1;
}



// FUNCTION 1434e0820 FUN_1434e0820 body=63 status=ok
// SIG undefined FUN_1434e0820(void)

void FUN_1434e0820(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b9890();
  if (*(longlong *)(param_1 + 0x100) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434e0890 FUN_1434e0890 body=109 status=ok
// SIG undefined FUN_1434e0890(void)

undefined8 * FUN_1434e0890(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar1,param_1);
    *(undefined2 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_145b1ab68;
    *param_2 = puVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434e0910 FUN_1434e0910 body=502 status=ok
// SIG undefined FUN_1434e0910(void)

undefined8 *
FUN_1434e0910(undefined8 *param_1,longlong param_2,longlong param_3,byte *param_4,undefined8 param_5
             )

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong local_res8;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 local_48 [2];
  undefined8 local_40;
  uint local_38;
  
  bVar2 = *param_4;
  lVar5 = FUN_1435ba6d0(param_2,(longlong)
                                *(int *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148) +
                                        (longlong)*(int *)(param_4 + 4) * 0x10));
  if (lVar5 != 0) {
    *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = FUN_1435ba8a0(param_2,&local_res8,
                        (longlong)
                        *(int *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148) + 8 +
                                (longlong)*(int *)(param_4 + 4) * 0x10));
  lVar8 = param_3;
  FUN_1435b9a80(param_1,uVar3,uVar6,lVar5,param_3,bVar2 & 1 ^ 1,bVar2 >> 1 & 1);
  uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_38 = 0xffffffff;
  local_48[0] = 0;
  *param_1 = &PTR_FUN_145b1ade8;
  param_1[0x1d] = 0;
  param_1[0x1e] = 3;
  param_1[0x1f] = 0;
  param_1[0x20] = param_5;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  param_1[0x11] = param_1[0x11] | 0x10;
  local_40 = 0;
  param_1[0x11] = (ulonglong)((-(*param_4 >> 2 & 1) ^ (uint)param_1[0x11]) & 4) ^ param_1[0x11];
  FUN_14361d130(&param_5);
  FUN_14361d0e0(&param_5,local_48);
  *(undefined4 *)(param_1 + 0x21) =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0xa8) + (ulonglong)local_38 * 4);
  if (param_3 == 0) {
    uVar4 = FUN_1435b9bd0(param_1);
  }
  else {
    uVar4 = *(undefined4 *)(param_3 + 0x80);
  }
  pcVar7 = (char *)FUN_1435b5890(param_1,&local_res8,local_48,param_2,CONCAT44(uVar9,uVar4));
  if (*pcVar7 != '\0') {
    FUN_1434e0fd0(param_1,param_2,param_1);
  }
  return param_1;
}



// FUNCTION 1434e0b10 FUN_1434e0b10 body=152 status=ok
// SIG undefined FUN_1434e0b10(void)

void FUN_1434e0b10(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 local_res8 [32];
  
  FUN_1434e80d0(*(undefined8 *)(param_1 + 0x98),local_res8,param_2,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x100),
                *(undefined4 *)(param_1 + 0x108),0,
                *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x10),param_1 + 200,param_1,param_2,
                param_3,*param_3,param_4,0,param_5,1);
  return;
}



// FUNCTION 1434e0bd0 FUN_1434e0bd0 body=419 status=ok
// SIG undefined FUN_1434e0bd0(void)

undefined1 * FUN_1434e0bd0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  uint local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_1[0x1e] != 0) {
    param_1[0x1e] = param_1[0x1e] + -1;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
    return param_2;
  }
  if (param_1[0x1f] == 0) {
    local_38[0] = 0;
    local_30 = 0;
    (**(code **)(*param_1 + 0x58))(param_1,local_38,param_1);
    if (*(char *)(param_1[0x13] + 0xb8) == '\0') {
      FUN_1434f0700(param_1 + 0x1f,local_28);
      pcVar4 = (char *)(**(code **)(*param_1 + 0x40))(param_1,local_res8,param_1[0x1f]);
      if (*pcVar4 != '\0') {
        if (9 < ((byte)local_38[0] & 0x1f)) {
          if ((local_38[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_38);
          }
          else {
            FUN_143592150();
          }
        }
        goto LAB_1434e0cea;
      }
    }
    *param_2 = 0;
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
        return param_2;
      }
      FUN_143592150();
      return param_2;
    }
  }
  else {
LAB_1434e0cea:
    lVar1 = param_1[8];
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar6 = 0;
    lVar3 = param_1[5];
    if (lVar1 + lVar3 != 0) {
      do {
        if (((longlong)uVar6 < 0) || (uVar6 < (ulonglong)param_1[5])) {
          pbVar5 = (byte *)FUN_1434ef150(param_1[6],uVar6);
        }
        else {
          pbVar5 = (byte *)(param_1[7] + 0x10 + ((uVar6 & 0xffffffff) - param_1[5]) * 0x40);
        }
        if ((*pbVar5 & 0x30) == 0) {
          FUN_1435ae320(pbVar5,param_1[0x1f],uVar2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulonglong)(lVar1 + lVar3));
    }
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1434e0d80 FUN_1434e0d80 body=187 status=ok
// SIG undefined FUN_1434e0d80(void)

undefined1 * FUN_1434e0d80(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    pcVar3 = (char *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    if (*pcVar3 == '\0') {
      *param_2 = 0;
      return param_2;
    }
  }
  local_res20 = *(undefined8 *)(param_1 + 0x100);
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x100);
  local_38[0] = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  FUN_14361d130(&local_res20);
  FUN_14361d0e0(&local_res20,local_38);
  FUN_1435b5dd0(param_1,param_2,uVar2,local_38,param_3);
  return param_2;
}



// FUNCTION 1434e0e50 FUN_1434e0e50 body=78 status=ok
// SIG undefined FUN_1434e0e50(void)

void FUN_1434e0e50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (((char)plVar1[8] == '\0') && (*(char *)((longlong)plVar1 + 0x41) == '\0')) {
    (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (*(char *)(*(longlong *)(plVar1[5] + 0x98) + 0xb8) == '\0') {
      FUN_1435c8f90(*(longlong *)(plVar1[5] + 0x98),1);
      return;
    }
  }
  return;
}



// FUNCTION 1434e0eb0 FUN_1434e0eb0 body=19 status=ok
// SIG undefined FUN_1434e0eb0(void)

undefined8 FUN_1434e0eb0(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x100);
}



// FUNCTION 1434e0ed0 FUN_1434e0ed0 body=106 status=ok
// SIG undefined FUN_1434e0ed0(void)

longlong * FUN_1434e0ed0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (((char)plVar1[8] == '\0') && (*(char *)((longlong)plVar1 + 0x41) == '\0')) {
    (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (*(char *)(*(longlong *)(plVar1[5] + 0x98) + 0xb8) == '\0') {
      FUN_1435c8f90(*(longlong *)(plVar1[5] + 0x98),1);
    }
    return *(longlong **)(param_1 + 0xe8);
  }
  return plVar1;
}



// FUNCTION 1434e0f50 FUN_1434e0f50 body=81 status=ok
// SIG undefined FUN_1434e0f50(void)

void FUN_1434e0f50(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b8830();
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434e0fd0 FUN_1434e0fd0 body=491 status=ok
// SIG undefined FUN_1434e0fd0(void)

void FUN_1434e0fd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_res8;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  uint local_48 [8];
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    param_2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x100);
  }
  local_res8 = *(undefined8 *)(param_1 + 0x100);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar3 = *(longlong *)(param_2 + 0xa0);
  uVar4 = FUN_14358f8b0(&local_res8);
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      uVar5 = FUN_14358f8b0(&local_res8);
      lVar7 = (ulonglong)uVar5 * 0x10 + *(longlong *)(lVar3 + 0x148);
      FUN_1435ae740(local_58,param_2,lVar7);
      lVar7 = FUN_1435c7f00(uVar2,param_2,lVar7);
      if (((lVar7 == 0) &&
          (lVar7 = FUN_1435b2060(*(longlong *)(param_1 + 0x98),*(longlong *)(param_1 + 0x98) + 0xe8,
                                 local_58,*(undefined8 *)(param_2 + 0x30)), lVar7 == 0)) ||
         (*(longlong *)(lVar7 + 0xd8) == 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x98);
        uVar6 = FUN_1435c8e40(local_68,0x3f6,uVar2);
        FUN_1435cbeb0(uVar2,uVar6);
        piVar1 = (int *)(local_60 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)local_48[0] & 0x1f)) {
          if ((local_48[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_48);
          }
          else {
            FUN_143592150();
          }
        }
        if (local_50 == 0) {
          return;
        }
        if ((local_50 & 1) != 0) {
          return;
        }
        if ((*(uint *)(local_50 + 8) & 0x3fffff) == 0) {
          return;
        }
        *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
        FUN_1434ef880();
        return;
      }
      FUN_1435b8be0(param_3,param_2);
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      if (((local_50 != 0) && ((local_50 & 1) == 0)) && ((*(uint *)(local_50 + 8) & 0x3fffff) != 0))
      {
        *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
        FUN_1434ef880();
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return;
}



// FUNCTION 1434e11d0 FUN_1434e11d0 body=99 status=ok
// SIG undefined FUN_1434e11d0(void)

undefined8 * FUN_1434e11d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  FUN_1435b81c0(param_1,*(undefined8 *)(param_2 + 0x28),0);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *param_1 = &PTR_ForEachChild_GC_145b1ae60;
  param_1[0x1d] = param_2;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  param_1[0x11] = param_1[0x11] | 0x10;
  return param_1;
}



// FUNCTION 1434e1250 FUN_1434e1250 body=302 status=ok
// SIG undefined FUN_1434e1250(void)

undefined8 * FUN_1434e1250(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  uint local_28 [8];
  
  puVar2 = (undefined8 *)FUN_1435b5bc0();
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    Scaleform::GFx::AS3::Classes::UDBase::UDBase(puVar2,param_1);
    *puVar2 = &PTR_ForEachChild_GC_145b1aec0;
    pcVar3 = (char *)(**(code **)(*param_1 + 0x40))(param_1,local_res8,puVar2);
    if (*pcVar3 != '\0') {
      FUN_1435b6f00(puVar2[5],*(longlong *)(puVar2[5] + 0x98) + 0x98,0);
    }
  }
  if (*(char *)(param_1[0x13] + 0xb8) != '\0') {
    *param_2 = 0;
    return param_2;
  }
  *(uint *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1U & 0x8fffffff;
  lVar1 = param_1[0x1b];
  FUN_1435b6f00(lVar1,param_1[0x13] + 0x98,1);
  uVar4 = FUN_143590110(local_28,puVar2);
  FUN_1435b6ee0(lVar1,uVar4);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_1434e1850(puVar2);
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1434e13a0 ForEachChild_GC body=63 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b8260();
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434e13f0 FUN_1434e13f0 body=176 status=ok
// SIG undefined FUN_1434e13f0(void)

undefined1 * FUN_1434e13f0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_res18 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1[0x1d] + 0xa0) + 0x60) +
                 (ulonglong)*(uint *)(param_1 + 0x1c) * 8);
  local_28[0] = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  FUN_14361d0e0(&local_res18,local_28);
  lVar1 = param_1[0x1d];
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  pcVar3 = (char *)FUN_1435b5890(param_1,local_res8,local_28,lVar1,uVar2);
  if (*pcVar3 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434e14b0 FUN_1434e14b0 body=141 status=ok
// SIG undefined FUN_1434e14b0(void)

undefined8 FUN_1434e14b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  local_res8 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0xa0) + 0x60) +
                (ulonglong)*(uint *)(param_1 + 0xe0) * 8);
  local_28[0] = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  FUN_14361d0e0(&local_res8,local_28);
  FUN_1435b5dd0(param_1,param_2,lVar1,local_28,param_3);
  return param_2;
}



// FUNCTION 1434e1570 FUN_1434e1570 body=396 status=ok
// SIG undefined FUN_1434e1570(void)

undefined1 * FUN_1434e1570(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar2 = FUN_1434e1710(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xe0));
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (*(char *)(lVar1 + 0xb8) != '\0') {
    *param_2 = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_1434f0700((longlong *)(param_1 + 0xb0),lVar2);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    *param_2 = 1;
    return param_2;
  }
  uVar3 = 0;
  local_res8 = 0;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0xd8) == 0) {
      FUN_1434e1570(lVar2,&local_res8);
      if (*(char *)(lVar1 + 0xb8) != '\0') {
        *param_2 = 0;
        return param_2;
      }
    }
    local_res8 = *(undefined8 *)(lVar2 + 0xd8);
  }
  local_res20 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0xa0) + 0x78) +
                 (ulonglong)*(uint *)(param_1 + 0xe0) * 8);
  local_24 = 0xffffffffffffffff;
  local_1c = 0xffffffff;
  Scaleform::GFx::AS3::Abc::ReadInstanceHeader(&local_res20,local_28);
  lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x50))(*(longlong **)(lVar1 + 0x48),0x110,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1434e0910(lVar2,*(undefined8 *)(param_1 + 0xe8),local_res8,local_28,local_res20);
  }
  FUN_1435b8600(param_1,uVar3);
  if (*(char *)(lVar1 + 0xb8) != '\0') {
    *param_2 = 0;
    return param_2;
  }
  FUN_1434e13f0(param_1,param_2);
  return param_2;
}



// FUNCTION 1434e1710 FUN_1434e1710 body=190 status=ok
// SIG undefined FUN_1434e1710(void)

longlong FUN_1434e1710(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18 [8];
  longlong local_10;
  
  local_res8 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) + (ulonglong)param_2 * 8);
  local_24 = 0xffffffffffffffff;
  local_1c = 0xffffffff;
  Scaleform::GFx::AS3::Abc::ReadInstanceHeader(&local_res8,local_28);
  if (local_24._4_4_ == 0) {
    return 0;
  }
  lVar3 = FUN_1435c84e0(*(undefined8 *)(param_1 + 0x28),param_1,
                        (longlong)local_24._4_4_ * 0x10 +
                        *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148));
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_1435c8e40(local_18,0x3e9,uVar2);
    FUN_1435cbeb0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return lVar3;
}



// FUNCTION 1434e17e0 FUN_1434e17e0 body=93 status=ok
// SIG undefined FUN_1434e17e0(void)

undefined8 * FUN_1434e17e0(undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 local_res8 [8];
  
  Scaleform::GFx::AS3::Classes::UDBase::UDBase();
  *param_1 = &PTR_ForEachChild_GC_145b1aec0;
  pcVar1 = (char *)(**(code **)(*param_2 + 0x40))(param_2,local_res8,param_1);
  if (*pcVar1 != '\0') {
    FUN_1435b6f00(param_1[5],*(longlong *)(param_1[5] + 0x98) + 0x98,0);
  }
  return param_1;
}



// FUNCTION 1434e1850 FUN_1434e1850 body=312 status=ok
// SIG undefined FUN_1434e1850(void)

void FUN_1434e1850(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  uint local_48 [8];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe8);
  local_res18 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x60) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0xe0) * 8);
  uVar6 = FUN_14358f8b0(&local_res18);
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0xa8) + (ulonglong)uVar6 * 4);
  uVar4 = *(undefined8 *)(lVar3 + 0x98);
  uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0xd0) + 0x10);
  FUN_143590110(local_48,param_1);
  local_res10[0] = 0;
  FUN_1434e80d0(uVar4,local_res8,local_48,lVar2,uVar1,0,uVar5,lVar3 + 200,
                *(undefined8 *)(param_1 + 0x28),local_48,local_res10,0,0,1,1,1);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434e1990 FUN_1434e1990 body=33 status=ok
// SIG undefined FUN_1434e1990(void)

undefined8 * FUN_1434e1990(undefined8 *param_1)

{
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b1b790;
  return param_1;
}



// FUNCTION 1434e19e0 FUN_1434e19e0 body=68 status=ok
// SIG undefined FUN_1434e19e0(void)

void FUN_1434e19e0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e1a30 FUN_1434e1a30 body=68 status=ok
// SIG undefined FUN_1434e1a30(void)

void FUN_1434e1a30(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e1a80 FUN_1434e1a80 body=148 status=ok
// SIG undefined FUN_1434e1a80(void)

void FUN_1434e1a80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74700)(DAT_146b74708 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e1b20 FUN_1434e1b20 body=175 status=ok
// SIG undefined FUN_1434e1b20(void)

void FUN_1434e1b20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75150)((longlong)DAT_146b75158 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434e1bd0 FUN_1434e1bd0 body=191 status=ok
// SIG undefined FUN_1434e1bd0(void)

void FUN_1434e1bd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74bc0)(DAT_146b74bc8 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e1c90 FUN_1434e1c90 body=191 status=ok
// SIG undefined FUN_1434e1c90(void)

void FUN_1434e1c90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74bd0)(DAT_146b74bd8 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e1d50 FUN_1434e1d50 body=145 status=ok
// SIG undefined FUN_1434e1d50(void)

void FUN_1434e1d50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b74ce0)((longlong)DAT_146b74ce8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e1df0 FUN_1434e1df0 body=191 status=ok
// SIG undefined FUN_1434e1df0(void)

void FUN_1434e1df0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74be0)(DAT_146b74be8 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e1ee0 FUN_1434e1ee0 body=191 status=ok
// SIG undefined FUN_1434e1ee0(void)

void FUN_1434e1ee0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74bf0)(DAT_146b74bf8 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e1fc0 FUN_1434e1fc0 body=205 status=ok
// SIG undefined FUN_1434e1fc0(void)

void FUN_1434e1fc0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_38 = Scaleform::GFx::NumberUtil::NaN();
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c00)(DAT_146b74c08 + lVar1,&local_38);
    uVar2 = local_38;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_38 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 1434e2090 FUN_1434e2090 body=191 status=ok
// SIG undefined FUN_1434e2090(void)

void FUN_1434e2090(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c10)(DAT_146b74c18 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2150 FUN_1434e2150 body=175 status=ok
// SIG undefined FUN_1434e2150(void)

void FUN_1434e2150(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b754b0)((longlong)DAT_146b754b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434e2200 FUN_1434e2200 body=191 status=ok
// SIG undefined FUN_1434e2200(void)

void FUN_1434e2200(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c20)(DAT_146b74c28 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e22c0 FUN_1434e22c0 body=191 status=ok
// SIG undefined FUN_1434e22c0(void)

void FUN_1434e22c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c30)(DAT_146b74c38 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e23a0 FUN_1434e23a0 body=191 status=ok
// SIG undefined FUN_1434e23a0(void)

void FUN_1434e23a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c40)(DAT_146b74c48 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2460 FUN_1434e2460 body=175 status=ok
// SIG undefined FUN_1434e2460(void)

void FUN_1434e2460(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b751b0)((longlong)DAT_146b751b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434e2510 FUN_1434e2510 body=191 status=ok
// SIG undefined FUN_1434e2510(void)

void FUN_1434e2510(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c50)(DAT_146b74c58 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2600 FUN_1434e2600 body=191 status=ok
// SIG undefined FUN_1434e2600(void)

void FUN_1434e2600(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c60)(DAT_146b74c68 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e26c0 FUN_1434e26c0 body=145 status=ok
// SIG undefined FUN_1434e26c0(void)

void FUN_1434e26c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b746b0)((longlong)DAT_146b746b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e2760 FUN_1434e2760 body=145 status=ok
// SIG undefined FUN_1434e2760(void)

void FUN_1434e2760(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b751d0)((longlong)DAT_146b751d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e2800 FUN_1434e2800 body=175 status=ok
// SIG undefined FUN_1434e2800(void)

void FUN_1434e2800(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b74ec0)((longlong)DAT_146b74ec8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434e28b0 FUN_1434e28b0 body=191 status=ok
// SIG undefined FUN_1434e28b0(void)

void FUN_1434e28b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c70)(DAT_146b74c78 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2970 FUN_1434e2970 body=112 status=ok
// SIG undefined FUN_1434e2970(void)

void FUN_1434e2970(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b746c0)(DAT_146b746c8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e2a10 FUN_1434e2a10 body=191 status=ok
// SIG undefined FUN_1434e2a10(void)

void FUN_1434e2a10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c80)(DAT_146b74c88 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2ad0 FUN_1434e2ad0 body=112 status=ok
// SIG undefined FUN_1434e2ad0(void)

void FUN_1434e2ad0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b746d0)(DAT_146b746d8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e2b40 FUN_1434e2b40 body=112 status=ok
// SIG undefined FUN_1434e2b40(void)

void FUN_1434e2b40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74ee0)(DAT_146b74ee8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e2bb0 FUN_1434e2bb0 body=191 status=ok
// SIG undefined FUN_1434e2bb0(void)

void FUN_1434e2bb0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74c90)(DAT_146b74c98 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2c70 FUN_1434e2c70 body=185 status=ok
// SIG undefined FUN_1434e2c70(void)

void FUN_1434e2c70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = param_6;
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74ba0)(DAT_146b74ba8 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2d30 FUN_1434e2d30 body=205 status=ok
// SIG undefined FUN_1434e2d30(void)

void FUN_1434e2d30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_38 = Scaleform::GFx::NumberUtil::NaN();
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74ca0)(DAT_146b74ca8 + lVar1,&local_38);
    uVar2 = local_38;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_38 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 1434e2e60 FUN_1434e2e60 body=148 status=ok
// SIG undefined FUN_1434e2e60(void)

void FUN_1434e2e60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74cd0)(DAT_146b74cd8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e2f00 FUN_1434e2f00 body=135 status=ok
// SIG undefined FUN_1434e2f00(void)

void FUN_1434e2f00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b746e0)(DAT_146b746e8 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e2fb0 FUN_1434e2fb0 body=112 status=ok
// SIG undefined FUN_1434e2fb0(void)

void FUN_1434e2fb0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74e20)(DAT_146b74e28 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e3020 FUN_1434e3020 body=144 status=ok
// SIG undefined FUN_1434e3020(void)

void FUN_1434e3020(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b74e30)((longlong)DAT_146b74e38 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e30b0 FUN_1434e30b0 body=144 status=ok
// SIG undefined FUN_1434e30b0(void)

void FUN_1434e30b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b74e40)((longlong)DAT_146b74e48 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e3140 FUN_1434e3140 body=144 status=ok
// SIG undefined FUN_1434e3140(void)

void FUN_1434e3140(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b74e50)((longlong)DAT_146b74e58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e31d0 FUN_1434e31d0 body=145 status=ok
// SIG undefined FUN_1434e31d0(void)

void FUN_1434e31d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b74e60)((longlong)DAT_146b74e68 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e32d0 FUN_1434e32d0 body=175 status=ok
// SIG undefined FUN_1434e32d0(void)

void FUN_1434e32d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75480)((longlong)DAT_146b75488 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434e3380 FUN_1434e3380 body=144 status=ok
// SIG undefined FUN_1434e3380(void)

void FUN_1434e3380(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b74e80)((longlong)DAT_146b74e88 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e3410 FUN_1434e3410 body=132 status=ok
// SIG undefined FUN_1434e3410(void)

void FUN_1434e3410(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75490)(DAT_146b75498 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e34a0 FUN_1434e34a0 body=112 status=ok
// SIG undefined FUN_1434e34a0(void)

void FUN_1434e34a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b75430)(DAT_146b75438 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e3510 FUN_1434e3510 body=144 status=ok
// SIG undefined FUN_1434e3510(void)

void FUN_1434e3510(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b74e90)((longlong)DAT_146b74e98 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e35a0 FUN_1434e35a0 body=238 status=ok
// SIG undefined FUN_1434e35a0(void)

void FUN_1434e35a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18[0] = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b754a0)(DAT_146b754a8 + lVar2,local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1434e36d0 FUN_1434e36d0 body=41 status=ok
// SIG undefined FUN_1434e36d0(void)

void FUN_1434e36d0(void)

{
  FUN_1434e4b00();
  return;
}



// FUNCTION 1434e3700 FUN_1434e3700 body=125 status=ok
// SIG undefined FUN_1434e3700(void)

void FUN_1434e3700(longlong *param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 local_res10 [24];
  
  if ((*param_2 & 0x1f) == 0xc) {
    bVar3 = *(longlong *)(param_2 + 4) == 0;
  }
  else {
    if ((*param_2 & 0x1f) != 10) goto LAB_1434e3767;
    bVar3 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
  }
  if (bVar3) {
    lVar2 = *(longlong *)(*param_1 + 8);
    piVar1 = (int *)(lVar2 + 0x98);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_1 = lVar2 + 0x80;
    return;
  }
LAB_1434e3767:
  FUN_1435911f0(param_2,local_res10,param_1);
  return;
}



// FUNCTION 1434e3780 FUN_1434e3780 body=924 status=ok
// SIG undefined FUN_1434e3780(void)

ulonglong FUN_1434e3780(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  double dVar12;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  longlong local_res18;
  longlong local_2c8 [82];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar11 = local_2c8;
  local_res18 = param_2;
  do {
    while (lVar8 = local_res18, param_3 - local_res18 < 10) {
joined_r0x0001434e3a39:
      lVar6 = lVar8;
      lVar8 = lVar6 + 1;
      if (lVar8 < param_3) {
        lVar9 = lVar6 * 0x10;
        dVar12 = (double)FUN_1434b3890(param_4,*(undefined8 *)(lVar9 + 0x10 + *param_1),
                                       *(undefined8 *)(lVar9 + *param_1));
        while (dVar12 < 0.0) {
          lVar3 = *param_1;
          uVar4 = *(undefined8 *)(lVar9 + 0x10 + lVar3);
          *(undefined8 *)(lVar9 + 0x10 + lVar3) = *(undefined8 *)(lVar9 + lVar3);
          *(undefined8 *)(lVar9 + lVar3) = uVar4;
          uVar1 = *(undefined4 *)(lVar9 + 0x18 + lVar3);
          *(undefined4 *)(lVar9 + 0x18 + lVar3) = *(undefined4 *)(lVar9 + 8 + lVar3);
          *(undefined4 *)(lVar9 + 8 + lVar3) = uVar1;
          if (lVar6 == local_res18) break;
          lVar6 = lVar6 + -1;
          lVar9 = lVar6 * 0x10;
          dVar12 = (double)FUN_1434b3890(param_4,*(undefined8 *)(lVar9 + 0x10 + *param_1),
                                         *(undefined8 *)(lVar9 + *param_1));
        }
        goto joined_r0x0001434e3a39;
      }
      if (plVar11 <= local_2c8) {
        return CONCAT71((int7)((ulonglong)local_2c8 >> 8),1);
      }
      local_res18 = plVar11[-2];
      param_3 = plVar11[-1];
      plVar11 = plVar11 + -2;
    }
    lVar3 = *param_1;
    lVar8 = param_3 + -1;
    lVar9 = lVar8 * 0x10;
    uVar4 = *(undefined8 *)(lVar3 + local_res18 * 0x10);
    puVar10 = (undefined8 *)(((param_3 - local_res18) / 2 + local_res18) * 0x10 + lVar3);
    lVar7 = local_res18 + 1;
    lVar6 = lVar7 * 0x10;
    *(undefined8 *)(lVar3 + local_res18 * 0x10) = *puVar10;
    *puVar10 = uVar4;
    uVar1 = *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10);
    *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar10 + 1) = uVar1;
    dVar12 = (double)FUN_1434b3890(param_4,*(undefined8 *)(lVar9 + *param_1),
                                   *(undefined8 *)(lVar6 + *param_1));
    if (dVar12 < 0.0) {
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(lVar3 + lVar9);
      *(undefined8 *)(lVar3 + lVar9) = *(undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = uVar4;
      uVar1 = *(undefined4 *)(lVar3 + 8 + lVar9);
      *(undefined4 *)(lVar3 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar6);
      *(undefined4 *)(lVar3 + 8 + lVar6) = uVar1;
    }
    dVar12 = (double)FUN_1434b3890(param_4,*(undefined8 *)(*param_1 + local_res18 * 0x10),
                                   *(undefined8 *)(*param_1 + lVar6));
    if (dVar12 < 0.0) {
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(lVar3 + local_res18 * 0x10);
      *(undefined8 *)(lVar3 + local_res18 * 0x10) = *(undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = uVar4;
      uVar1 = *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10);
      *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar6);
      *(undefined4 *)(lVar3 + 8 + lVar6) = uVar1;
    }
    uVar5 = FUN_1434b3890(param_4,*(undefined8 *)(*param_1 + lVar9),
                          *(undefined8 *)(*param_1 + local_res18 * 0x10));
    if (extraout_XMM0_Qa < 0.0) {
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(lVar3 + lVar9);
      *(undefined8 *)(lVar3 + lVar9) = *(undefined8 *)(lVar3 + local_res18 * 0x10);
      *(undefined8 *)(lVar3 + local_res18 * 0x10) = uVar4;
      uVar1 = *(undefined4 *)(lVar3 + 8 + lVar9);
      uVar2 = *(uint *)(lVar3 + 8 + local_res18 * 0x10);
      uVar5 = (ulonglong)uVar2;
      *(uint *)(lVar3 + 8 + lVar9) = uVar2;
      *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10) = uVar1;
    }
LAB_1434e3920:
    do {
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
      if (param_3 <= lVar7) {
LAB_1434e3adf:
        return uVar5 & 0xffffffffffffff00;
      }
      uVar5 = FUN_1434b3890(param_4,*(undefined8 *)(*param_1 + lVar6),
                            *(undefined8 *)(*param_1 + local_res18 * 0x10));
    } while (extraout_XMM0_Qa_00 < 0.0);
    do {
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 + -0x10;
      if (lVar8 < 0) goto LAB_1434e3adf;
      uVar5 = FUN_1434b3890(param_4,*(undefined8 *)(*param_1 + local_res18 * 0x10),
                            *(undefined8 *)(*param_1 + lVar9));
    } while (extraout_XMM0_Qa_01 < 0.0);
    lVar3 = *param_1;
    if (lVar7 <= lVar8) {
      lVar9 = lVar8 * 0x10;
      lVar6 = lVar7 * 0x10;
      uVar4 = *(undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar3 + lVar9);
      *(undefined8 *)(lVar3 + lVar9) = uVar4;
      uVar1 = *(undefined4 *)(lVar3 + 8 + lVar6);
      uVar2 = *(uint *)(lVar3 + 8 + lVar9);
      uVar5 = (ulonglong)uVar2;
      *(uint *)(lVar3 + 8 + lVar6) = uVar2;
      *(undefined4 *)(lVar3 + 8 + lVar9) = uVar1;
      goto LAB_1434e3920;
    }
    uVar4 = *(undefined8 *)(lVar3 + local_res18 * 0x10);
    puVar10 = (undefined8 *)(lVar8 * 0x10 + lVar3);
    *(undefined8 *)(lVar3 + local_res18 * 0x10) = *puVar10;
    *puVar10 = uVar4;
    uVar1 = *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10);
    *(undefined4 *)(lVar3 + 8 + local_res18 * 0x10) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar10 + 1) = uVar1;
    if (param_3 - lVar7 < lVar8 - local_res18) {
      *plVar11 = local_res18;
      plVar11[1] = lVar8;
      plVar11 = plVar11 + 2;
      local_res18 = lVar7;
    }
    else {
      *plVar11 = lVar7;
      plVar11[1] = param_3;
      plVar11 = plVar11 + 2;
      param_3 = lVar8;
    }
  } while( true );
}



// FUNCTION 1434e3b20 FUN_1434e3b20 body=966 status=ok
// SIG undefined FUN_1434e3b20(void)

ulonglong FUN_1434e3b20(longlong *param_1,longlong param_2,longlong param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  longlong local_res18;
  longlong local_2b8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar12 = local_2b8;
  local_res18 = param_2;
LAB_1434e3b85:
  while (param_3 - local_res18 < 10) {
    if (local_res18 + 1 < param_3) {
      lVar7 = local_res18 << 4;
      lVar6 = local_res18;
      lVar9 = local_res18 + 1;
LAB_1434e3e20:
      do {
        puVar11 = (undefined8 *)(*param_1 + lVar7);
        if (*param_4 == '\0') {
          uVar3 = *puVar11;
          uVar5 = puVar11[2];
        }
        else {
          uVar3 = puVar11[2];
          uVar5 = *puVar11;
        }
        iVar2 = FUN_1434b3680(param_4,uVar5,uVar3);
        if (iVar2 < 0) {
          puVar11 = (undefined8 *)(*param_1 + lVar7);
          uVar3 = puVar11[2];
          puVar11[2] = *puVar11;
          *puVar11 = uVar3;
          uVar1 = *(undefined4 *)(puVar11 + 3);
          *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(puVar11 + 1);
          *(undefined4 *)(puVar11 + 1) = uVar1;
          if (lVar6 != local_res18) {
            lVar7 = lVar7 + -0x10;
            lVar6 = lVar6 + -1;
            goto LAB_1434e3e20;
          }
        }
        lVar7 = lVar9 << 4;
        lVar8 = lVar9 + 1;
        lVar6 = lVar9;
        lVar9 = lVar8;
      } while (lVar8 < param_3);
    }
    if (plVar12 <= local_2b8) {
      return CONCAT71((int7)((ulonglong)local_2b8 >> 8),1);
    }
    local_res18 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  }
  lVar8 = *param_1;
  lVar6 = param_3 + -1;
  lVar7 = lVar6 * 0x10;
  uVar3 = *(undefined8 *)(lVar8 + local_res18 * 0x10);
  puVar11 = (undefined8 *)((local_res18 + (param_3 - local_res18) / 2) * 0x10 + lVar8);
  lVar13 = local_res18 + 1;
  lVar9 = lVar13 * 0x10;
  *(undefined8 *)(lVar8 + local_res18 * 0x10) = *puVar11;
  *puVar11 = uVar3;
  uVar1 = *(undefined4 *)(lVar8 + 8 + local_res18 * 0x10);
  *(undefined4 *)(lVar8 + 8 + local_res18 * 0x10) = *(undefined4 *)(puVar11 + 1);
  *(undefined4 *)(puVar11 + 1) = uVar1;
  puVar11 = (undefined8 *)(lVar9 + *param_1);
  puVar10 = (undefined8 *)(lVar7 + *param_1);
  if (*param_4 == '\0') {
    uVar3 = *puVar11;
    uVar5 = *puVar10;
  }
  else {
    uVar3 = *puVar10;
    uVar5 = *puVar11;
  }
  iVar2 = FUN_1434b3680(param_4,uVar5,uVar3);
  if (iVar2 < 0) {
    lVar8 = *param_1;
    uVar3 = *(undefined8 *)(lVar8 + lVar7);
    puVar11 = (undefined8 *)(lVar8 + lVar7);
    puVar10 = (undefined8 *)(lVar8 + lVar9);
    *puVar11 = *(undefined8 *)(lVar8 + lVar9);
    *puVar10 = uVar3;
    uVar1 = *(undefined4 *)(puVar11 + 1);
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar10 + 1) = uVar1;
  }
  puVar11 = (undefined8 *)(*param_1 + lVar9);
  puVar10 = (undefined8 *)(*param_1 + local_res18 * 0x10);
  if (*param_4 == '\0') {
    uVar3 = *puVar11;
    uVar5 = *puVar10;
  }
  else {
    uVar3 = *puVar10;
    uVar5 = *puVar11;
  }
  iVar2 = FUN_1434b3680(param_4,uVar5,uVar3);
  if (iVar2 < 0) {
    lVar8 = *param_1;
    uVar3 = *(undefined8 *)(lVar8 + local_res18 * 0x10);
    puVar11 = (undefined8 *)(lVar8 + local_res18 * 0x10);
    puVar10 = (undefined8 *)(lVar8 + lVar9);
    *puVar11 = *(undefined8 *)(lVar8 + lVar9);
    *puVar10 = uVar3;
    uVar1 = *(undefined4 *)(puVar11 + 1);
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar10 + 1) = uVar1;
  }
  puVar11 = (undefined8 *)(*param_1 + local_res18 * 0x10);
  puVar10 = (undefined8 *)(*param_1 + lVar7);
  if (*param_4 == '\0') {
    uVar3 = *puVar11;
    uVar5 = *puVar10;
  }
  else {
    uVar3 = *puVar10;
    uVar5 = *puVar11;
  }
  uVar3 = FUN_1434b3680(param_4,uVar5,uVar3);
  bVar14 = (int)uVar3 < 0;
  uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar14);
  if (!bVar14) goto LAB_1434e3cf0;
  puVar11 = (undefined8 *)(*param_1 + local_res18 * 0x10);
  puVar10 = (undefined8 *)(*param_1 + lVar7);
  do {
    uVar3 = *puVar10;
    *puVar10 = *puVar11;
    *puVar11 = uVar3;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    uVar4 = (ulonglong)*(uint *)(puVar11 + 1);
    *(uint *)(puVar10 + 1) = *(uint *)(puVar11 + 1);
    *(undefined4 *)(puVar11 + 1) = uVar1;
LAB_1434e3cf0:
    do {
      lVar13 = lVar13 + 1;
      lVar9 = lVar9 + 0x10;
      if (param_3 <= lVar13) goto LAB_1434e3eb1;
      puVar11 = (undefined8 *)(*param_1 + local_res18 * 0x10);
      puVar10 = (undefined8 *)(*param_1 + lVar9);
      if (*param_4 == '\0') {
        uVar3 = *puVar11;
        uVar5 = *puVar10;
      }
      else {
        uVar3 = *puVar10;
        uVar5 = *puVar11;
      }
      uVar3 = FUN_1434b3680(param_4,uVar5,uVar3);
      bVar14 = (int)uVar3 < 0;
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar14);
    } while (bVar14);
    do {
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + -0x10;
      if (lVar6 < 0) {
LAB_1434e3eb1:
        return uVar4 & 0xffffffffffffff00;
      }
      puVar11 = (undefined8 *)(*param_1 + lVar7);
      puVar10 = (undefined8 *)(*param_1 + local_res18 * 0x10);
      if (*param_4 == '\0') {
        uVar3 = *puVar11;
        uVar5 = *puVar10;
      }
      else {
        uVar3 = *puVar10;
        uVar5 = *puVar11;
      }
      uVar3 = FUN_1434b3680(param_4,uVar5,uVar3);
      bVar14 = (int)uVar3 < 0;
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar14);
    } while (bVar14);
    lVar8 = *param_1;
    if (lVar6 < lVar13) break;
    lVar7 = lVar6 * 0x10;
    lVar9 = lVar13 * 0x10;
    puVar11 = (undefined8 *)(lVar7 + lVar8);
    puVar10 = (undefined8 *)(lVar9 + lVar8);
  } while( true );
  uVar3 = *(undefined8 *)(lVar8 + local_res18 * 0x10);
  puVar11 = (undefined8 *)(lVar8 + local_res18 * 0x10);
  puVar10 = (undefined8 *)(lVar6 * 0x10 + lVar8);
  *puVar11 = *puVar10;
  *puVar10 = uVar3;
  uVar1 = *(undefined4 *)(puVar11 + 1);
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
  *(undefined4 *)(puVar10 + 1) = uVar1;
  if (param_3 - lVar13 < lVar6 - local_res18) {
    *plVar12 = local_res18;
    plVar12[1] = lVar6;
    plVar12 = plVar12 + 2;
    local_res18 = lVar13;
  }
  else {
    *plVar12 = lVar13;
    plVar12[1] = param_3;
    plVar12 = plVar12 + 2;
    param_3 = lVar6;
  }
  goto LAB_1434e3b85;
}



// FUNCTION 1434e3ef0 FUN_1434e3ef0 body=997 status=ok
// SIG undefined FUN_1434e3ef0(void)

undefined8 FUN_1434e3ef0(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  longlong local_298 [80];
  
  plVar15 = local_298;
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  do {
    while (9 < param_3 - param_2) {
      lVar12 = *param_1;
      lVar14 = param_3 + -1;
      puVar1 = (undefined8 *)(lVar12 + param_2 * 0x18);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      lVar9 = (param_3 - param_2) / 2 + param_2;
      uVar4 = *(undefined8 *)(lVar12 + 0x10 + param_2 * 0x18);
      puVar1 = (undefined8 *)(lVar12 + lVar9 * 0x18);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(lVar12 + param_2 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar12 + 0x10 + param_2 * 0x18) =
           *(undefined8 *)(lVar12 + 0x10 + lVar9 * 0x18);
      puVar1 = (undefined8 *)(lVar12 + lVar9 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(lVar12 + 0x10 + lVar9 * 0x18) = uVar4;
      lVar12 = param_2 + 1;
      lVar11 = *param_1;
      lVar9 = lVar12 * 0x18;
      lVar13 = lVar14 * 0x18;
      if (param_4 == '\0') {
        bVar17 = *(double *)(lVar9 + lVar11) == *(double *)(lVar13 + lVar11);
        bVar16 = *(double *)(lVar9 + lVar11) < *(double *)(lVar13 + lVar11);
      }
      else {
        bVar17 = *(double *)(lVar13 + lVar11) == *(double *)(lVar9 + lVar11);
        bVar16 = *(double *)(lVar13 + lVar11) < *(double *)(lVar9 + lVar11);
      }
      if (!bVar16 && !bVar17) {
        uVar6 = ((undefined8 *)(lVar9 + lVar11))[1];
        uVar7 = *(undefined8 *)(lVar13 + lVar11);
        uVar8 = ((undefined8 *)(lVar13 + lVar11))[1];
        uVar4 = *(undefined8 *)(lVar13 + 0x10 + lVar11);
        *(undefined8 *)(lVar13 + lVar11) = *(undefined8 *)(lVar9 + lVar11);
        ((undefined8 *)(lVar13 + lVar11))[1] = uVar6;
        *(undefined8 *)(lVar13 + 0x10 + lVar11) = *(undefined8 *)(lVar9 + 0x10 + lVar11);
        *(undefined8 *)(lVar9 + lVar11) = uVar7;
        ((undefined8 *)(lVar9 + lVar11))[1] = uVar8;
        *(undefined8 *)(lVar9 + 0x10 + lVar11) = uVar4;
      }
      lVar11 = *param_1;
      if (param_4 == '\0') {
        pdVar10 = (double *)(lVar11 + param_2 * 0x18);
        bVar17 = *(double *)(lVar9 + lVar11) == *pdVar10;
        bVar16 = *(double *)(lVar9 + lVar11) < *pdVar10;
      }
      else {
        dVar5 = *(double *)(lVar11 + param_2 * 0x18);
        bVar17 = dVar5 == *(double *)(lVar9 + lVar11);
        bVar16 = dVar5 < *(double *)(lVar9 + lVar11);
      }
      if (!bVar16 && !bVar17) {
        uVar6 = ((undefined8 *)(lVar9 + lVar11))[1];
        puVar1 = (undefined8 *)(lVar11 + param_2 * 0x18);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar4 = *(undefined8 *)(lVar11 + 0x10 + param_2 * 0x18);
        puVar1 = (undefined8 *)(lVar11 + param_2 * 0x18);
        *puVar1 = *(undefined8 *)(lVar9 + lVar11);
        puVar1[1] = uVar6;
        *(undefined8 *)(lVar11 + 0x10 + param_2 * 0x18) = *(undefined8 *)(lVar9 + 0x10 + lVar11);
        *(undefined8 *)(lVar9 + lVar11) = uVar7;
        ((undefined8 *)(lVar9 + lVar11))[1] = uVar8;
        *(undefined8 *)(lVar9 + 0x10 + lVar11) = uVar4;
      }
      lVar11 = *param_1;
      if (param_4 == '\0') {
        dVar5 = *(double *)(lVar11 + param_2 * 0x18);
        bVar17 = dVar5 == *(double *)(lVar13 + lVar11);
        bVar16 = dVar5 < *(double *)(lVar13 + lVar11);
      }
      else {
        pdVar10 = (double *)(lVar11 + param_2 * 0x18);
        bVar17 = *(double *)(lVar13 + lVar11) == *pdVar10;
        bVar16 = *(double *)(lVar13 + lVar11) < *pdVar10;
      }
      if (!bVar16 && !bVar17) {
        puVar1 = (undefined8 *)(lVar11 + param_2 * 0x18);
        uVar6 = puVar1[1];
        uVar7 = *(undefined8 *)(lVar13 + lVar11);
        uVar8 = ((undefined8 *)(lVar13 + lVar11))[1];
        uVar4 = *(undefined8 *)(lVar13 + 0x10 + lVar11);
        *(undefined8 *)(lVar13 + lVar11) = *puVar1;
        ((undefined8 *)(lVar13 + lVar11))[1] = uVar6;
        *(undefined8 *)(lVar13 + 0x10 + lVar11) = *(undefined8 *)(lVar11 + 0x10 + param_2 * 0x18);
        puVar1 = (undefined8 *)(lVar11 + param_2 * 0x18);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(undefined8 *)(lVar11 + 0x10 + param_2 * 0x18) = uVar4;
      }
      while( true ) {
        do {
          lVar12 = lVar12 + 1;
          lVar9 = lVar9 + 0x18;
          if (param_3 <= lVar12) {
            return 0;
          }
          lVar11 = *param_1;
          if (param_4 == '\0') {
            dVar5 = *(double *)(lVar11 + param_2 * 0x18);
            bVar17 = dVar5 == *(double *)(lVar11 + lVar9);
            bVar16 = dVar5 < *(double *)(lVar11 + lVar9);
          }
          else {
            pdVar10 = (double *)(lVar11 + param_2 * 0x18);
            bVar17 = *(double *)(lVar11 + lVar9) == *pdVar10;
            bVar16 = *(double *)(lVar11 + lVar9) < *pdVar10;
          }
        } while (!bVar16 && !bVar17);
        lVar11 = *param_1;
        pdVar10 = (double *)(lVar13 + lVar11);
        do {
          lVar14 = lVar14 + -1;
          pdVar10 = pdVar10 + -3;
          if (lVar14 < 0) {
            return 0;
          }
          if (param_4 == '\0') {
            pdVar3 = (double *)(lVar11 + param_2 * 0x18);
            bVar17 = *pdVar10 == *pdVar3;
            bVar16 = *pdVar10 < *pdVar3;
          }
          else {
            dVar5 = *(double *)(lVar11 + param_2 * 0x18);
            bVar17 = dVar5 == *pdVar10;
            bVar16 = dVar5 < *pdVar10;
          }
        } while (!bVar16 && !bVar17);
        if (lVar14 < lVar12) break;
        lVar13 = lVar14 * 0x18;
        uVar6 = ((undefined8 *)(lVar13 + lVar11))[1];
        lVar9 = lVar12 * 0x18;
        uVar7 = *(undefined8 *)(lVar9 + lVar11);
        uVar8 = ((undefined8 *)(lVar9 + lVar11))[1];
        uVar4 = *(undefined8 *)(lVar9 + 0x10 + lVar11);
        *(undefined8 *)(lVar9 + lVar11) = *(undefined8 *)(lVar13 + lVar11);
        ((undefined8 *)(lVar9 + lVar11))[1] = uVar6;
        *(undefined8 *)(lVar9 + 0x10 + lVar11) = *(undefined8 *)(lVar13 + 0x10 + lVar11);
        *(undefined8 *)(lVar13 + lVar11) = uVar7;
        ((undefined8 *)(lVar13 + lVar11))[1] = uVar8;
        *(undefined8 *)(lVar13 + 0x10 + lVar11) = uVar4;
      }
      puVar1 = (undefined8 *)(lVar11 + lVar14 * 0x18);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar11 + param_2 * 0x18);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar4 = *(undefined8 *)(lVar11 + 0x10 + param_2 * 0x18);
      puVar2 = (undefined8 *)(lVar11 + param_2 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      *(undefined8 *)(lVar11 + 0x10 + param_2 * 0x18) =
           *(undefined8 *)(lVar11 + 0x10 + lVar14 * 0x18);
      puVar1 = (undefined8 *)(lVar11 + lVar14 * 0x18);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + lVar14 * 0x18) = uVar4;
      if (param_3 - lVar12 < lVar14 - param_2) {
        *plVar15 = param_2;
        plVar15[1] = lVar14;
        param_2 = lVar12;
        plVar15 = plVar15 + 2;
      }
      else {
        plVar15[1] = param_3;
        *plVar15 = lVar12;
        param_3 = lVar14;
        plVar15 = plVar15 + 2;
      }
    }
    lVar14 = param_2 + 1;
    if (lVar14 < param_3) {
      lVar12 = param_2 * 0x18;
      lVar9 = param_2;
      lVar13 = lVar14 * 0x18;
LAB_1434e4222:
      do {
        lVar11 = lVar14;
        lVar14 = *param_1;
        if (param_4 == '\0') {
          pdVar10 = (double *)(lVar14 + 0x18 + lVar12);
          bVar17 = *(double *)(lVar14 + lVar12) == *pdVar10;
          bVar16 = *(double *)(lVar14 + lVar12) < *pdVar10;
        }
        else {
          dVar5 = *(double *)(lVar14 + 0x18 + lVar12);
          bVar17 = dVar5 == *(double *)(lVar14 + lVar12);
          bVar16 = dVar5 < *(double *)(lVar14 + lVar12);
        }
        if (!bVar16 && !bVar17) {
          uVar4 = *(undefined8 *)(lVar14 + 0x28 + lVar12);
          uVar6 = ((undefined8 *)(lVar14 + lVar12))[1];
          puVar1 = (undefined8 *)(lVar14 + 0x18 + lVar12);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x18 + lVar12);
          *puVar1 = *(undefined8 *)(lVar14 + lVar12);
          puVar1[1] = uVar6;
          *(undefined8 *)(lVar14 + 0x28 + lVar12) = *(undefined8 *)(lVar14 + 0x10 + lVar12);
          *(undefined8 *)(lVar14 + lVar12) = uVar7;
          ((undefined8 *)(lVar14 + lVar12))[1] = uVar8;
          *(undefined8 *)(lVar14 + 0x10 + lVar12) = uVar4;
          if (lVar9 != param_2) {
            lVar12 = lVar12 + -0x18;
            lVar14 = lVar11;
            lVar9 = lVar9 + -1;
            goto LAB_1434e4222;
          }
        }
        lVar12 = lVar13;
        lVar14 = lVar11 + 1;
        lVar9 = lVar11;
        lVar13 = lVar13 + 0x18;
      } while (lVar11 + 1 < param_3);
    }
    if (plVar15 <= local_298) {
      return CONCAT71((int7)((ulonglong)local_298 >> 8),1);
    }
    param_2 = plVar15[-2];
    param_3 = plVar15[-1];
    plVar15 = plVar15 + -2;
  } while( true );
}



// FUNCTION 1434e42e0 FUN_1434e42e0 body=913 status=ok
// SIG undefined FUN_1434e42e0(void)

ulonglong FUN_1434e42e0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2b8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar7 = local_2b8;
  local_2d8 = param_2;
  local_2d0 = param_3;
LAB_1434e4347:
  while (param_3 - local_2d8 < 10) {
    lVar11 = local_2d8 + 1;
    lVar10 = local_2d8;
    if (local_2d8 + 1 < param_3) {
      do {
        lVar12 = lVar11;
        lVar11 = lVar10 * 0x18;
        iVar5 = FUN_1434b3550(param_4,*param_1 + lVar11 + 0x18);
        while (iVar5 < 0) {
          lVar8 = *param_1;
          lVar2 = *(longlong *)(lVar11 + 0x18 + lVar8);
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          uVar3 = *(undefined4 *)(lVar11 + 0x28 + lVar8);
          lVar9 = *(longlong *)(lVar11 + lVar8);
          uVar4 = *(undefined8 *)(lVar11 + 0x20 + lVar8);
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(longlong *)(lVar11 + 0x18 + lVar8) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          *(longlong *)(lVar11 + 0x18 + lVar8) = lVar9;
          *(undefined8 *)(lVar11 + 0x20 + lVar8) = *(undefined8 *)(lVar11 + 8 + lVar8);
          *(undefined4 *)(lVar11 + 0x28 + lVar8) = *(undefined4 *)(lVar11 + 0x10 + lVar8);
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          piVar1 = (int *)(*(longlong *)(lVar11 + lVar8) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          *(longlong *)(lVar11 + lVar8) = lVar2;
          *(undefined8 *)(lVar11 + 8 + lVar8) = uVar4;
          *(undefined4 *)(lVar11 + 0x10 + lVar8) = uVar3;
          piVar1 = (int *)(lVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar2);
          }
          param_3 = local_2d0;
          if (lVar10 == local_2d8) break;
          lVar10 = lVar10 + -1;
          lVar11 = lVar10 * 0x18;
          iVar5 = FUN_1434b3550(param_4,*param_1 + lVar11 + 0x18);
        }
        lVar11 = lVar12 + 1;
        lVar10 = lVar12;
      } while (lVar11 < param_3);
    }
    if (plVar7 <= local_2b8) {
      return CONCAT71((int7)((ulonglong)local_2b8 >> 8),1);
    }
    local_2d8 = plVar7[-2];
    param_3 = plVar7[-1];
    plVar7 = plVar7 + -2;
    local_2d0 = param_3;
  }
  lVar2 = local_2d8 * 0x18;
  FUN_1434e4a60(*param_1 + lVar2,*param_1 + ((param_3 - local_2d8) / 2 + local_2d8) * 0x18);
  lVar10 = local_2d8 + 1;
  lVar12 = lVar10 * 0x18;
  lVar11 = param_3 + -1;
  lVar8 = lVar11 * 0x18;
  iVar5 = FUN_1434b3550(param_4,lVar8 + *param_1,*param_1 + lVar12);
  if (iVar5 < 0) {
    FUN_1434e4a60(*param_1 + lVar8,*param_1 + lVar12);
  }
  iVar5 = FUN_1434b3550(param_4,*param_1 + lVar2,*param_1 + lVar12);
  if (iVar5 < 0) {
    FUN_1434e4a60(*param_1 + lVar2,*param_1 + lVar12);
  }
  uVar6 = FUN_1434b3550(param_4,lVar8 + *param_1,*param_1 + lVar2);
  if (-1 < (int)uVar6) goto LAB_1434e4420;
  lVar9 = *param_1 + lVar2;
  lVar8 = lVar8 + *param_1;
  do {
    uVar6 = FUN_1434e4a60(lVar8,lVar9);
LAB_1434e4420:
    do {
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x18;
      if (param_3 <= lVar10) goto LAB_1434e463c;
      uVar6 = FUN_1434b3550(param_4,lVar12 + *param_1,*param_1 + lVar2);
    } while ((int)uVar6 < 0);
    lVar9 = lVar11 * 0x18;
    do {
      lVar11 = lVar11 + -1;
      lVar9 = lVar9 + -0x18;
      if (lVar11 < 0) {
LAB_1434e463c:
        return uVar6 & 0xffffffffffffff00;
      }
      uVar6 = FUN_1434b3550(param_4,*param_1 + lVar2,lVar9 + *param_1);
    } while ((int)uVar6 < 0);
    if (lVar11 < lVar10) break;
    lVar12 = lVar10 * 0x18;
    lVar9 = lVar9 + *param_1;
    lVar8 = *param_1 + lVar12;
  } while( true );
  FUN_1434e4a60(*param_1 + lVar2,lVar9 + *param_1);
  if (param_3 - lVar10 < lVar11 - local_2d8) {
    *plVar7 = local_2d8;
    plVar7[1] = lVar11;
    plVar7 = plVar7 + 2;
    local_2d8 = lVar10;
  }
  else {
    plVar7[1] = param_3;
    *plVar7 = lVar10;
    plVar7 = plVar7 + 2;
    param_3 = lVar11;
    local_2d0 = lVar11;
  }
  goto LAB_1434e4347;
}



// FUNCTION 1434e4680 FUN_1434e4680 body=357 status=ok
// SIG undefined FUN_1434e4680(void)

ulonglong FUN_1434e4680(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar3 = *param_2;
  uVar8 = ((uint)((*(longlong *)(uVar3 + 0x28) << 0x3c) >> 0x3c) ^
          (*(uint *)(*(longlong *)(uVar3 + 0x38) + 0x1c) & 0xffffff) << 2) & uVar2;
  puVar5 = (ulonglong *)((uVar8 + 1) * 0x10 + lVar1);
  if ((*puVar5 != 0xfffffffffffffffe) &&
     ((((uint)((*(longlong *)(puVar5[1] + 0x28) << 0x3c) >> 0x3c) ^
       (*(uint *)(*(longlong *)(puVar5[1] + 0x38) + 0x1c) & 0xffffff) << 2) & uVar2) == uVar8)) {
    uVar7 = 0xffffffffffffffff;
    uVar9 = uVar8;
    while ((uVar4 = puVar5[1],
           (((uint)((*(longlong *)(uVar4 + 0x28) << 0x3c) >> 0x3c) ^
            (*(uint *)(*(longlong *)(uVar4 + 0x38) + 0x1c) & 0xffffff) << 2) & uVar2) != uVar8 ||
           (uVar4 != uVar3))) {
      uVar4 = *puVar5;
      if (uVar4 == 0xffffffffffffffff) {
        return (ulonglong)puVar5 & 0xffffffffffffff00;
      }
      uVar7 = uVar9;
      uVar9 = uVar4;
      puVar5 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar1);
    }
    if (uVar8 == uVar9) {
      uVar2 = *puVar5;
      if (uVar2 != 0xffffffffffffffff) {
        *puVar5 = 0xfffffffffffffffe;
        puVar6 = (ulonglong *)((uVar2 + 1) * 0x10 + lVar1);
        *puVar5 = *puVar6;
        puVar5[1] = puVar6[1];
        puVar5 = puVar6;
      }
    }
    else {
      *(ulonglong *)(lVar1 + (uVar7 + 1) * 0x10) = *puVar5;
    }
    *puVar5 = 0xfffffffffffffffe;
    param_1 = (longlong *)*param_1;
    *param_1 = *param_1 + -1;
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



// FUNCTION 1434e47f0 FUN_1434e47f0 body=263 status=ok
// SIG undefined FUN_1434e47f0(void)

ulonglong FUN_1434e47f0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar6 = 8;
  uVar3 = 0x1505;
  do {
    lVar1 = lVar6 + -1;
    lVar6 = lVar6 + -1;
    uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)param_2);
  } while (lVar6 != 0);
  uVar3 = *(ulonglong *)(lVar7 + 8) & uVar3;
  uVar4 = uVar3 * 0x38;
  puVar8 = (ulonglong *)(lVar7 + 0x10 + uVar4);
  if ((*puVar8 != 0xfffffffffffffffe) && (puVar8[1] == uVar3)) {
    uVar2 = uVar3;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar5 = uVar2;
      if ((puVar8[1] == uVar3) && (uVar4 = *param_2, puVar8[2] == uVar4)) {
        uVar4 = *puVar8;
        if (uVar3 == uVar5) {
          if (uVar4 != 0xffffffffffffffff) {
            lVar7 = uVar4 * 0x38 + lVar7;
            FUN_1434e8a40(puVar8);
            FUN_1434e5c70(puVar8,lVar7 + 0x10);
            puVar8 = (ulonglong *)(lVar7 + 0x10);
          }
        }
        else {
          *(ulonglong *)(uVar9 * 0x38 + 0x10 + lVar7) = uVar4;
        }
        FUN_1434e8a40(puVar8);
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar2 = *puVar8;
      if (uVar2 == 0xffffffffffffffff) break;
      uVar4 = uVar2 * 0x38;
      puVar8 = (ulonglong *)(lVar7 + 0x10 + uVar4);
      uVar9 = uVar5;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1434e4900 FUN_1434e4900 body=126 status=ok
// SIG undefined FUN_1434e4900(void)

void FUN_1434e4900(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 0;
  lVar1 = param_1[1] + -1;
  if (0 < lVar1) {
    lVar3 = lVar1 * 0x20;
    lVar4 = lVar2;
    do {
      FUN_1435904e0(lVar4 + *param_1,lVar3 + *param_1);
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x20;
      lVar1 = lVar1 + -1;
      lVar3 = lVar3 + -0x20;
    } while (lVar2 < lVar1);
  }
  return;
}



// FUNCTION 1434e4980 FUN_1434e4980 body=223 status=ok
// SIG undefined FUN_1434e4980(void)

longlong FUN_1434e4980(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = 8;
  uVar5 = 0x1505;
  do {
    lVar2 = lVar7 + -1;
    lVar7 = lVar7 + -1;
    uVar5 = uVar5 * 0x1003f + (ulonglong)*(byte *)(*param_3 + lVar2);
  } while (lVar7 != 0);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    uVar6 = *(ulonglong *)(lVar7 + 8) & uVar5;
    puVar3 = (ulonglong *)(lVar7 + 0x10 + uVar6 * 0x38);
    if ((*puVar3 != 0xfffffffffffffffe) && (uVar4 = uVar6, puVar3[1] == uVar6)) {
      while ((puVar3[1] != uVar6 || (uVar1 = *(ulonglong *)*param_3, puVar3[2] != uVar1))) {
        uVar4 = *puVar3;
        if (uVar4 == 0xffffffffffffffff) goto LAB_1434e4a39;
        puVar3 = (ulonglong *)(lVar7 + 0x10 + uVar4 * 0x38);
      }
      if (-1 < (longlong)uVar4) {
        lVar7 = uVar4 * 0x38 + lVar7;
        *(ulonglong *)(lVar7 + 0x20) = uVar1;
        FUN_143590140(lVar7 + 0x28,param_3[1]);
        return lVar7 + 0x20;
      }
    }
  }
LAB_1434e4a39:
  lVar7 = FUN_1434e5480(param_1,param_2,param_3,uVar5);
  return lVar7;
}



// FUNCTION 1434e4a60 FUN_1434e4a60 body=148 status=ok
// SIG undefined FUN_1434e4a60(void)

void FUN_1434e4a60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  lVar4 = *param_2;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar4;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  param_2[1] = lVar3;
  *(int *)(param_2 + 2) = (int)lVar5;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 1434e4b00 FUN_1434e4b00 body=349 status=ok
// SIG undefined FUN_1434e4b00(void)

ulonglong * FUN_1434e4b00(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1434e4b5f;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_1434f08b0(param_1,param_2,lVar6);
LAB_1434e4b5f:
  plVar1 = (longlong *)*param_1;
  uVar5 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar6 = *param_1;
  param_4 = uVar5 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar6);
  uVar2 = *puVar8;
  uVar7 = param_4;
  if (uVar2 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    puVar8[1] = *param_3;
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar5;
      puVar4 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar6);
    } while (*puVar4 != 0xfffffffffffffffe);
    uVar5 = ((uint)((*(longlong *)(puVar8[1] + 0x28) << 0x3c) >> 0x3c) ^
            (*(uint *)(*(longlong *)(puVar8[1] + 0x38) + 0x1c) & 0xffffff) << 2) & uVar5;
    if (uVar5 == param_4) {
      *puVar4 = uVar2;
      puVar4[1] = puVar8[1];
      puVar8[1] = *param_3;
      *puVar8 = uVar7;
    }
    else {
      puVar3 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar6);
      uVar5 = *puVar3;
      while (uVar5 != param_4) {
        puVar3 = (ulonglong *)((*puVar3 + 1) * 0x10 + lVar6);
        uVar5 = *puVar3;
      }
      *puVar4 = uVar2;
      puVar4[1] = puVar8[1];
      *puVar3 = uVar7;
      puVar8[1] = *param_3;
      *puVar8 = 0xffffffffffffffff;
    }
  }
  return puVar8 + 1;
}



// FUNCTION 1434e4c60 FUN_1434e4c60 body=295 status=ok
// SIG undefined FUN_1434e4c60(void)

void FUN_1434e4c60(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_1434e8750();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    *(undefined8 *)(lVar8 + 0x28) = param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar6 = uVar5;
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(undefined4 *)(lVar8 + 0x24) = uVar10;
    *(undefined4 *)(lVar8 + 0x28) = uVar11;
    *(undefined4 *)(lVar8 + 0x2c) = uVar12;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 1434e4d90 FUN_1434e4d90 body=435 status=ok
// SIG undefined FUN_1434e4d90(void)

longlong FUN_1434e4d90(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_1434e87a0();
  plVar5 = (longlong *)*param_1;
  *plVar5 = *plVar5 + 1;
  param_4 = param_4 & plVar5[1];
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x28);
  lVar2 = lVar6 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    lVar6 = *param_3;
    *(longlong *)(lVar2 + 0x20) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar6 = param_3[1];
    *(longlong *)(lVar2 + 0x28) = lVar6;
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
    }
    *(longlong *)(lVar2 + 0x30) = param_3[2];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar5[1];
      lVar3 = lVar6 + uVar10 * 0x28;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar2 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar7;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      lVar6 = *(longlong *)(lVar2 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar6 = *(longlong *)(lVar2 + 0x28);
      *(longlong *)(lVar3 + 0x28) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      FUN_1434e6900(lVar2 + 0x20,param_3);
      *(longlong *)(lVar2 + 0x30) = param_3[2];
      *(ulonglong *)(lVar2 + 0x10) = uVar10;
    }
    else {
      lVar4 = *(ulonglong *)(lVar2 + 0x18) * 5 + 2;
      uVar8 = *(ulonglong *)(lVar6 + lVar4 * 8);
      while (puVar9 = (ulonglong *)(lVar6 + lVar4 * 8), uVar8 != param_4) {
        lVar4 = *puVar9 * 5 + 2;
        uVar8 = *(ulonglong *)(lVar6 + lVar4 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar7;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      lVar6 = *(longlong *)(lVar2 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar6 = *(longlong *)(lVar2 + 0x28);
      *(longlong *)(lVar3 + 0x28) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      *puVar9 = uVar10;
      FUN_1434e6900(lVar2 + 0x20,param_3);
      *(longlong *)(lVar2 + 0x30) = param_3[2];
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar2 + 0x18) = param_4;
  return lVar2 + 0x20;
}



// FUNCTION 1434e4f50 FUN_1434e4f50 body=400 status=ok
// SIG undefined FUN_1434e4f50(void)

longlong FUN_1434e4f50(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_1434e4faa;
    lVar10 = plVar2[1] * 2 + 2;
  }
  FUN_1434f0cf0(param_1,param_2,lVar10);
LAB_1434e4faa:
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar10 = *param_1;
  lVar9 = param_4 * 0x38 + lVar10;
  uVar7 = param_4;
  if (*(longlong *)(lVar9 + 0x10) == -2) {
    FUN_1434e5b90(lVar9 + 0x10,param_3,0xffffffffffffffff);
  }
  else {
    do {
      uVar7 = uVar7 + 1 & plVar2[1];
      lVar11 = uVar7 * 0x38 + lVar10;
    } while (*(longlong *)(lVar11 + 0x10) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      FUN_1434e5c70(lVar11 + 0x10,lVar9 + 0x10);
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      FUN_143590140(lVar9 + 0x28,param_3 + 1);
      *(ulonglong *)(lVar9 + 0x10) = uVar7;
    }
    else {
      puVar8 = (ulonglong *)(lVar10 + 0x10 + *(ulonglong *)(lVar9 + 0x18) * 0x38);
      uVar3 = *puVar8;
      while (uVar3 != param_4) {
        puVar8 = (ulonglong *)(lVar10 + 0x10 + *puVar8 * 0x38);
        uVar3 = *puVar8;
      }
      *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar9 + 0x10);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(uint *)(lVar11 + 0x28) = *(uint *)(lVar9 + 0x28);
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar9 + 0x30);
      uVar4 = *(undefined4 *)(lVar9 + 0x3c);
      uVar5 = *(undefined4 *)(lVar9 + 0x40);
      uVar6 = *(undefined4 *)(lVar9 + 0x44);
      *(undefined4 *)(lVar11 + 0x38) = *(undefined4 *)(lVar9 + 0x38);
      *(undefined4 *)(lVar11 + 0x3c) = uVar4;
      *(undefined4 *)(lVar11 + 0x40) = uVar5;
      *(undefined4 *)(lVar11 + 0x44) = uVar6;
      uVar1 = *(uint *)(lVar9 + 0x28);
      if (9 < ((byte)uVar1 & 0x1f)) {
        if ((uVar1 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
      *puVar8 = uVar7;
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      FUN_143590140(lVar9 + 0x28,param_3 + 1);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return lVar9 + 0x20;
}



// FUNCTION 1434e50e0 FUN_1434e50e0 body=389 status=ok
// SIG undefined FUN_1434e50e0(void)

void FUN_1434e50e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1434e5134;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_1434f09e0(param_1,param_2,lVar5);
LAB_1434e5134:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar8 = param_4 * 0x20 + lVar5;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar7 = uVar6 * 0x20 + lVar5;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar8 + 0x10) = uVar6;
    }
    else {
      puVar4 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar5 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar4 = uVar6;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 1434e5270 FUN_1434e5270 body=518 status=ok
// SIG undefined FUN_1434e5270(void)

longlong FUN_1434e5270(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_1434e52ca;
    lVar10 = plVar4[1] * 2 + 2;
  }
  FUN_1434f0b40(param_1,param_2,lVar10);
LAB_1434e52ca:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar10 = lVar5 + param_4 * 0x28;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    plVar4 = (longlong *)*param_3;
    lVar5 = *plVar4;
    *(longlong *)(lVar10 + 0x20) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar5 = plVar4[1];
    *(longlong *)(lVar10 + 0x28) = lVar5;
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar2 = lVar5 + uVar9 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x28) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      lVar5 = *(longlong *)(lVar10 + 0x20);
      *(longlong *)(lVar2 + 0x20) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(longlong *)(lVar10 + 0x28);
      *(longlong *)(lVar2 + 0x28) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar10 + 0x30);
      FUN_1434e6900(lVar10 + 0x20,*param_3);
      *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar3 = *(ulonglong *)(lVar10 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar3 * 8), uVar7 != param_4) {
        lVar3 = *puVar8 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      lVar5 = *(longlong *)(lVar10 + 0x20);
      *(longlong *)(lVar2 + 0x20) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(longlong *)(lVar10 + 0x28);
      *(longlong *)(lVar2 + 0x28) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar10 + 0x30);
      *puVar8 = uVar9;
      FUN_1434e6900(lVar10 + 0x20,*param_3);
      *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 1434e5480 FUN_1434e5480 body=419 status=ok
// SIG undefined FUN_1434e5480(void)

longlong FUN_1434e5480(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_1434e54da;
    lVar10 = plVar2[1] * 2 + 2;
  }
  FUN_1434f0cf0(param_1,param_2,lVar10);
LAB_1434e54da:
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar10 = *param_1;
  lVar8 = param_4 * 0x38 + lVar10;
  uVar7 = param_4;
  if (*(longlong *)(lVar8 + 0x10) == -2) {
    FUN_1434e5c00(lVar8 + 0x10,param_3,0xffffffffffffffff);
  }
  else {
    do {
      uVar7 = uVar7 + 1 & plVar2[1];
      lVar11 = uVar7 * 0x38 + lVar10;
    } while (*(longlong *)(lVar11 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      FUN_1434e5c70(lVar11 + 0x10,lVar8 + 0x10);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      FUN_143590140(lVar8 + 0x28,param_3[1]);
      *(ulonglong *)(lVar8 + 0x10) = uVar7;
    }
    else {
      puVar9 = (ulonglong *)(lVar10 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x38);
      uVar3 = *puVar9;
      while (uVar3 != param_4) {
        puVar9 = (ulonglong *)(lVar10 + 0x10 + *puVar9 * 0x38);
        uVar3 = *puVar9;
      }
      *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar8 + 0x10);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(uint *)(lVar11 + 0x28) = *(uint *)(lVar8 + 0x28);
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
      uVar4 = *(undefined4 *)(lVar8 + 0x3c);
      uVar5 = *(undefined4 *)(lVar8 + 0x40);
      uVar6 = *(undefined4 *)(lVar8 + 0x44);
      *(undefined4 *)(lVar11 + 0x38) = *(undefined4 *)(lVar8 + 0x38);
      *(undefined4 *)(lVar11 + 0x3c) = uVar4;
      *(undefined4 *)(lVar11 + 0x40) = uVar5;
      *(undefined4 *)(lVar11 + 0x44) = uVar6;
      uVar1 = *(uint *)(lVar8 + 0x28);
      if (9 < ((byte)uVar1 & 0x1f)) {
        if ((uVar1 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
      *puVar9 = uVar7;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      FUN_143590140(lVar8 + 0x28,param_3[1]);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 1434e5630 FUN_1434e5630 body=411 status=ok
// SIG undefined FUN_1434e5630(void)

longlong * FUN_1434e5630(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_1434e5682;
    lVar10 = plVar4[1] * 2 + 2;
  }
  FUN_1434f0e80(param_1,param_2,lVar10);
LAB_1434e5682:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar10 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    lVar5 = *param_3;
    *(longlong *)(lVar10 + 0x20) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(ulonglong *)(lVar10 + 0x18) = param_4;
    return (longlong *)(lVar10 + 0x20);
  }
  do {
    uVar9 = uVar9 + 1 & plVar4[1];
    lVar3 = lVar5 + uVar9 * 0x18;
  } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
  if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
    lVar5 = *(longlong *)(lVar10 + 0x20);
    *(longlong *)(lVar3 + 0x20) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar5 = *param_3;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar10 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar10 + 0x20) = lVar5;
    *(ulonglong *)(lVar10 + 0x10) = uVar9;
  }
  else {
    lVar2 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
    uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
    while (puVar8 = (ulonglong *)(lVar5 + lVar2 * 8), uVar7 != param_4) {
      lVar2 = *puVar8 * 3 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
    }
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
    lVar5 = *(longlong *)(lVar10 + 0x20);
    *(longlong *)(lVar3 + 0x20) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    *puVar8 = uVar9;
    lVar5 = *param_3;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar10 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar10 + 0x20) = lVar5;
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return (longlong *)(lVar10 + 0x20);
}



// FUNCTION 1434e57d0 FUN_1434e57d0 body=473 status=ok
// SIG undefined FUN_1434e57d0(void)

longlong FUN_1434e57d0(longlong *param_1,undefined8 param_2,uint *param_3,ulonglong param_4)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar12 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_1434e5828;
    lVar12 = plVar2[1] * 2 + 2;
  }
  FUN_1434f0fd0(param_1,param_2,lVar12);
LAB_1434e5828:
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar12 = *param_1;
  lVar14 = param_4 * 0x30 + lVar12;
  uVar10 = param_4;
  if (*(longlong *)(lVar14 + 0x10) == -2) {
    *(undefined8 *)(lVar14 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(uint *)(lVar14 + 0x20) = *param_3;
    *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(param_3 + 2);
    uVar4 = param_3[5];
    uVar5 = param_3[6];
    uVar6 = param_3[7];
    *(uint *)(lVar14 + 0x30) = param_3[4];
    *(uint *)(lVar14 + 0x34) = uVar4;
    *(uint *)(lVar14 + 0x38) = uVar5;
    *(uint *)(lVar14 + 0x3c) = uVar6;
    if (9 < ((byte)*param_3 & 0x1f)) {
      if ((*param_3 >> 9 & 1) == 0) {
        FUN_143592070(param_3);
      }
      else {
        FUN_143592140();
      }
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar2[1];
      lVar13 = uVar10 * 0x30 + lVar12;
    } while (*(longlong *)(lVar13 + 0x10) != -2);
    if (*(ulonglong *)(lVar14 + 0x18) == param_4) {
      FUN_1434e5b30(lVar13 + 0x10,lVar14 + 0x10);
      FUN_143590140(lVar14 + 0x20,param_3);
      *(ulonglong *)(lVar14 + 0x10) = uVar10;
    }
    else {
      puVar11 = (ulonglong *)(lVar12 + 0x10 + *(ulonglong *)(lVar14 + 0x18) * 0x30);
      uVar3 = *puVar11;
      while (uVar3 != param_4) {
        puVar11 = (ulonglong *)(lVar12 + 0x10 + *puVar11 * 0x30);
        uVar3 = *puVar11;
      }
      *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar14 + 0x10);
      puVar1 = (uint *)(lVar14 + 0x20);
      *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar14 + 0x18);
      *(uint *)(lVar13 + 0x20) = *puVar1;
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
      uVar7 = *(undefined4 *)(lVar14 + 0x34);
      uVar8 = *(undefined4 *)(lVar14 + 0x38);
      uVar9 = *(undefined4 *)(lVar14 + 0x3c);
      *(undefined4 *)(lVar13 + 0x30) = *(undefined4 *)(lVar14 + 0x30);
      *(undefined4 *)(lVar13 + 0x34) = uVar7;
      *(undefined4 *)(lVar13 + 0x38) = uVar8;
      *(undefined4 *)(lVar13 + 0x3c) = uVar9;
      if (9 < ((byte)*puVar1 & 0x1f)) {
        if ((*puVar1 >> 9 & 1) == 0) {
          FUN_143592070(puVar1);
        }
        else {
          FUN_143592140();
        }
      }
      *puVar11 = uVar10;
      FUN_143590140(puVar1,param_3);
      *(undefined8 *)(lVar14 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar14 + 0x18) = param_4;
  return lVar14 + 0x20;
}



// FUNCTION 1434e59b0 FUN_1434e59b0 body=141 status=ok
// SIG undefined FUN_1434e59b0(void)

ulonglong FUN_1434e59b0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0xffffffffffffffff;
  }
  lVar5 = 8;
  uVar3 = 0x1505;
  do {
    lVar1 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    uVar3 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar3 * 0x1003f;
  } while (lVar5 != 0);
  uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
  puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar3 * 0x38);
  if ((*puVar6 != 0xfffffffffffffffe) && (uVar4 = uVar3, puVar6[1] == uVar3)) {
    while( true ) {
      if ((puVar6[1] == uVar3) && (puVar6[2] == *param_2)) {
        return uVar4;
      }
      uVar4 = *puVar6;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x38);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1434e5a40 FUN_1434e5a40 body=229 status=ok
// SIG undefined FUN_1434e5a40(void)

ulonglong FUN_1434e5a40(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  puVar3 = (ulonglong *)((param_3 + 1) * 0x10 + lVar1);
  if ((*puVar3 != 0xfffffffffffffffe) &&
     (uVar4 = param_3,
     ((ulonglong)
      ((uint)((*(longlong *)(puVar3[1] + 0x28) << 0x3c) >> 0x3c) ^
      (*(uint *)(*(longlong *)(puVar3[1] + 0x38) + 0x1c) & 0xffffff) << 2) &
     *(ulonglong *)(lVar1 + 8)) == param_3)) {
    while( true ) {
      uVar2 = puVar3[1];
      if ((((ulonglong)
            ((uint)((*(longlong *)(uVar2 + 0x28) << 0x3c) >> 0x3c) ^
            (*(uint *)(*(longlong *)(uVar2 + 0x38) + 0x1c) & 0xffffff) << 2) &
           *(ulonglong *)(lVar1 + 8)) == param_3) &&
         (((int)((*(longlong *)(uVar2 + 0x28) << 0x3c) >> 0x3c) == *param_2 &&
          (*(longlong *)(uVar2 + 0x38) == *(longlong *)(param_2 + 2))))) {
        return uVar4;
      }
      uVar4 = *puVar3;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar3 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar1);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1434e5b30 FUN_1434e5b30 body=95 status=ok
// SIG undefined FUN_1434e5b30(void)

undefined8 * FUN_1434e5b30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(uint *)(param_1 + 2) = *(uint *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  uVar1 = *(uint *)(param_2 + 2);
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592140();
      return param_1;
    }
    FUN_143592070();
  }
  return param_1;
}



// FUNCTION 1434e5b90 FUN_1434e5b90 body=99 status=ok
// SIG undefined FUN_1434e5b90(void)

undefined8 * FUN_1434e5b90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = *param_2;
  *(uint *)(param_1 + 3) = *(uint *)(param_2 + 1);
  param_1[4] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  uVar1 = *(uint *)(param_2 + 1);
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592140();
      return param_1;
    }
    FUN_143592070();
  }
  return param_1;
}



// FUNCTION 1434e5c00 FUN_1434e5c00 body=102 status=ok
// SIG undefined FUN_1434e5c00(void)

undefined8 * FUN_1434e5c00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = *(undefined8 *)*param_2;
  puVar1 = (uint *)param_2[1];
  *(uint *)(param_1 + 3) = *puVar1;
  param_1[4] = *(undefined8 *)(puVar1 + 2);
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  uVar4 = puVar1[7];
  *(uint *)(param_1 + 5) = puVar1[4];
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  *(uint *)(param_1 + 6) = uVar3;
  *(uint *)((longlong)param_1 + 0x34) = uVar4;
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) != 0) {
      FUN_143592140();
      return param_1;
    }
    FUN_143592070();
  }
  return param_1;
}



// FUNCTION 1434e5c70 FUN_1434e5c70 body=103 status=ok
// SIG undefined FUN_1434e5c70(void)

undefined8 * FUN_1434e5c70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(uint *)(param_1 + 3) = *(uint *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 6);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  uVar1 = *(uint *)(param_2 + 3);
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592140();
      return param_1;
    }
    FUN_143592070();
  }
  return param_1;
}



// FUNCTION 1434e5ce0 FUN_1434e5ce0 body=217 status=ok
// SIG undefined FUN_1434e5ce0(void)

undefined1 * FUN_1434e5ce0(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x48);
  *(longlong *)(param_1 + 0x48) = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  uVar1 = *(uint *)(param_2 + 0x80);
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592140();
      return param_1;
    }
    FUN_143592070();
  }
  return param_1;
}



// FUNCTION 1434e5dc0 FUN_1434e5dc0 body=183 status=ok
// SIG undefined FUN_1434e5dc0(void)

undefined8 * FUN_1434e5dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b17430;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1432c2f70(param_1 + 3);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
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
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14361cba0(param_1 + 0x18);
  return param_1;
}



// FUNCTION 1434e5e80 FUN_1434e5e80 body=104 status=ok
// SIG undefined FUN_1434e5e80(void)

void FUN_1434e5e80(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + (lVar3 + -1) * 0x18);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar2 = plVar2 + -3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1434e5ef0 FUN_1434e5ef0 body=121 status=ok
// SIG undefined FUN_1434e5ef0(void)

void FUN_1434e5ef0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  puVar2 = (ulonglong *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar1 - 1;
      }
    }
    puVar2 = puVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e5f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1434e5f70 FUN_1434e5f70 body=124 status=ok
// SIG undefined FUN_1434e5f70(void)

void FUN_1434e5f70(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (uint *)(*param_1 + -0x20 + lVar2 * 0x20);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar1);
      }
      else {
        FUN_143592150();
      }
    }
    puVar1 = puVar1 + -8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e5fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1434e5ff0 FUN_1434e5ff0 body=157 status=ok
// SIG undefined FUN_1434e5ff0(void)

void FUN_1434e5ff0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar4) != -2) {
        uVar1 = *(uint *)(lVar2 + 0x28 + lVar4);
        if (9 < ((byte)uVar1 & 0x1f)) {
          if ((uVar1 >> 9 & 1) == 0) {
            FUN_1435920c0();
          }
          else {
            FUN_143592150();
          }
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1434e6090 FUN_1434e6090 body=149 status=ok
// SIG undefined FUN_1434e6090(void)

void FUN_1434e6090(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x50));
  uVar2 = *(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x40) = uVar2 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434e6130 FUN_1434e6130 body=283 status=ok
// SIG undefined FUN_1434e6130(void)

void FUN_1434e6130(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xf8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xf8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xf0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xf0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xe8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xe8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xe0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xe0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0xd8) = uVar1 - 1;
      FUN_1435b4dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b4dc0(param_1);
  return;
}



// FUNCTION 1434e6250 FUN_1434e6250 body=104 status=ok
// SIG undefined FUN_1434e6250(void)

void FUN_1434e6250(longlong param_1)

{
  ulonglong uVar1;
  
  if (9 < ((byte)*(uint *)(param_1 + 0x10) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x10) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x10);
    }
    else {
      FUN_143592150();
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 8) = uVar1 - 1;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
      return;
    }
  }
  return;
}



// FUNCTION 1434e62c0 FUN_1434e62c0 body=117 status=ok
// SIG undefined FUN_1434e62c0(void)

void FUN_1434e62c0(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b18980;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar2) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1434e6340 FUN_1434e6340 body=131 status=ok
// SIG undefined FUN_1434e6340(void)

void FUN_1434e6340(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[10];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_FUN_145b17800;
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[8] = uVar1 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434e63d0 FUN_1434e63d0 body=133 status=ok
// SIG undefined FUN_1434e63d0(void)

void FUN_1434e63d0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xe8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0xd8) = uVar1 - 1;
      FUN_1435b4dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b4dc0(param_1);
  return;
}



// FUNCTION 1434e6460 FUN_1434e6460 body=133 status=ok
// SIG undefined FUN_1434e6460(void)

void FUN_1434e6460(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xf8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xf8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xe8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0xe8) = uVar1 - 1;
      FUN_1435b9af0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9af0(param_1);
  return;
}



// FUNCTION 1434e64f0 FUN_1434e64f0 body=29 status=ok
// SIG undefined FUN_1434e64f0(void)

void FUN_1434e64f0(uint *param_1)

{
  int *piVar1;
  
  if (((byte)*param_1 & 0x1f) < 10) {
    return;
  }
  if ((*param_1 >> 9 & 1) == 0) {
    FUN_1435920c0();
    return;
  }
  piVar1 = *(int **)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = *param_1 & 0xfffffde0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1434e6510 FUN_1434e6510 body=106 status=ok
// SIG undefined FUN_1434e6510(void)

void FUN_1434e6510(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(param_1[10] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  uVar2 = param_1[9];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[9] = uVar2 - 1;
    }
  }
  piVar1 = (int *)(param_1[8] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434e6580 FUN_1434e6580 body=217 status=ok
// SIG undefined FUN_1434e6580(void)

longlong * FUN_1434e6580(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  FUN_1434f0230(param_1,param_1,uVar3);
  uVar6 = 0;
  if (uVar4 < uVar3) {
    puVar5 = (undefined8 *)(*param_1 + uVar4 * 8);
    for (lVar7 = uVar3 - uVar4; lVar7 != 0; lVar7 = lVar7 + -1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
    }
  }
  if (param_1[1] != 0) {
    do {
      puVar1 = (ulonglong *)(*param_2 + uVar6 * 8);
      puVar2 = (ulonglong *)(*param_1 + uVar6 * 8);
      if (puVar1 != puVar2) {
        uVar3 = *puVar1;
        if (uVar3 != 0) {
          *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
        }
        uVar3 = *puVar2;
        if (uVar3 != 0) {
          if ((uVar3 & 1) == 0) {
            if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar2 = uVar3 - 1;
          }
        }
        *puVar2 = *puVar1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1434e6660 FUN_1434e6660 body=172 status=ok
// SIG undefined FUN_1434e6660(void)

longlong * FUN_1434e6660(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = param_2[1];
  uVar1 = param_1[1];
  FUN_1434f04c0(param_1,param_1,uVar5);
  uVar3 = 0;
  if (uVar1 < uVar5) {
    puVar2 = (undefined4 *)(uVar1 * 0x20 + *param_1);
    for (lVar4 = uVar5 - uVar1; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      puVar2 = puVar2 + 8;
    }
  }
  uVar5 = uVar3;
  if (param_1[1] != 0) {
    do {
      FUN_143590140(*param_1 + uVar5,*param_2 + uVar5);
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 0x20;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1434e6710 FUN_1434e6710 body=172 status=ok
// SIG undefined FUN_1434e6710(void)

longlong * FUN_1434e6710(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = param_2[1];
  uVar1 = param_1[1];
  FUN_1434f0300(param_1,param_1[3],uVar5);
  uVar3 = 0;
  if (uVar1 < uVar5) {
    puVar2 = (undefined4 *)(uVar1 * 0x20 + *param_1);
    for (lVar4 = uVar5 - uVar1; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      puVar2 = puVar2 + 8;
    }
  }
  uVar5 = uVar3;
  if (param_1[1] != 0) {
    do {
      FUN_143590140(*param_1 + uVar5,*param_2 + uVar5);
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 0x20;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1434e67c0 operator= body=100 status=ok
// SIG undefined operator=(void)

longlong *
Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable>::operator=(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    if ((lVar1 != 0) && ((char)param_1[1] != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      FUN_1434e5f70(lVar1 + 8);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
    *param_1 = param_2;
  }
  *(bool *)(param_1 + 1) = param_2 != 0;
  return param_1;
}



// FUNCTION 1434e6830 FUN_1434e6830 body=104 status=ok
// SIG undefined FUN_1434e6830(void)

ulonglong * FUN_1434e6830(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != param_1) {
    uVar1 = *param_2;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_1;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_1 = uVar1 - 1;
      }
    }
    *param_1 = *param_2;
  }
  return param_1;
}



// FUNCTION 1434e68a0 FUN_1434e68a0 body=95 status=ok
// SIG undefined FUN_1434e68a0(void)

ulonglong * FUN_1434e68a0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (param_2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *param_1 = uVar1 - 1;
        *param_1 = param_2;
        return param_1;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_1 = param_2;
  }
  return param_1;
}



// FUNCTION 1434e6900 FUN_1434e6900 body=145 status=ok
// SIG undefined FUN_1434e6900(void)

longlong * FUN_1434e6900(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  lVar3 = *param_2;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar3;
  puVar5 = (ulonglong *)(param_2 + 1);
  puVar2 = (ulonglong *)(param_1 + 1);
  if (puVar5 != puVar2) {
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar4 - 1;
      }
    }
    *puVar2 = *puVar5;
  }
  return param_1;
}



// FUNCTION 1434e69a0 FUN_1434e69a0 body=102 status=ok
// SIG undefined FUN_1434e69a0(void)

uint * FUN_1434e69a0(uint *param_1,longlong param_2)

{
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      FUN_143592150();
    }
  }
  *param_1 = *param_1 & 0xffffffeb;
  *param_1 = *param_1 | 0xb;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return param_1;
}



// FUNCTION 1434e6a10 operator() body=41 status=ok
// SIG undefined operator()(void)

longlong Scaleform::FixedSizeHash<Scaleform::GFx::ASString>::operator()
                   (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 8;
  lVar2 = 0x1505;
  do {
    lVar1 = lVar3 + -1;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 * 0x1003f + (ulonglong)*(byte *)(lVar1 + param_2);
  } while (lVar3 != 0);
  return lVar2;
}



// FUNCTION 1434e6a40 FUN_1434e6a40 body=73 status=ok
// SIG undefined FUN_1434e6a40(void)

undefined8 * FUN_1434e6a40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145b173f0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1434e6a90 FUN_1434e6a90 body=89 status=ok
// SIG undefined FUN_1434e6a90(void)

undefined8 FUN_1434e6a90(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9af0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1434e6af0 FUN_1434e6af0 body=142 status=ok
// SIG undefined FUN_1434e6af0(void)

longlong FUN_1434e6af0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xd8) = uVar1 - 1;
    }
  }
  FUN_1435b4dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1434e6b80 FUN_1434e6b80 body=89 status=ok
// SIG undefined FUN_1434e6b80(void)

undefined8 FUN_1434e6b80(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1434e6be0 FUN_1434e6be0 body=89 status=ok
// SIG undefined FUN_1434e6be0(void)

undefined8 FUN_1434e6be0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9770();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1434e6c40 FUN_1434e6c40 body=153 status=ok
// SIG undefined FUN_1434e6c40(void)

longlong FUN_1434e6c40(longlong param_1,ulonglong param_2)

{
  FUN_1434e5ff0(param_1 + 0x98);
  FUN_1434e5f70(param_1 + 0x78);
  if (9 < ((byte)*(uint *)(param_1 + 0x58) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x58) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x58);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1434e6ce0 FUN_1434e6ce0 body=43 status=ok
// SIG undefined FUN_1434e6ce0(void)

undefined8 * FUN_1434e6ce0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b19ec0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1434e6d10 FUN_1434e6d10 body=112 status=ok
// SIG undefined FUN_1434e6d10(void)

undefined8 * FUN_1434e6d10(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b1a830;
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[2] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_FUN_145b19ec0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1434e6d80 FUN_1434e6d80 body=89 status=ok
// SIG undefined FUN_1434e6d80(void)

undefined8 FUN_1434e6d80(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1434e6de0 FUN_1434e6de0 body=43 status=ok
// SIG undefined FUN_1434e6de0(void)

undefined8 * FUN_1434e6de0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b19ec0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1434e6e10 FUN_1434e6e10 body=89 status=ok
// SIG undefined FUN_1434e6e10(void)

undefined8 FUN_1434e6e10(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1434e6e70 FUN_1434e6e70 body=89 status=ok
// SIG undefined FUN_1434e6e70(void)

undefined8 FUN_1434e6e70(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e6340();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1434e6ed0 FUN_1434e6ed0 body=112 status=ok
// SIG undefined FUN_1434e6ed0(void)

undefined8 * FUN_1434e6ed0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b1a840;
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[2] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_FUN_145b19ec0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1434e6f40 FUN_1434e6f40 body=99 status=ok
// SIG undefined FUN_1434e6f40(void)

undefined8 * FUN_1434e6f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ForEachChild_GC_145b18290;
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1434e6fb0 FUN_1434e6fb0 body=89 status=ok
// SIG undefined FUN_1434e6fb0(void)

undefined8 FUN_1434e6fb0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1434e7010 FUN_1434e7010 body=89 status=ok
// SIG undefined FUN_1434e7010(void)

undefined8 FUN_1434e7010(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e6090();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1434e7070 FUN_1434e7070 body=122 status=ok
// SIG undefined FUN_1434e7070(void)

longlong FUN_1434e7070(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1434e70f0 FUN_1434e70f0 body=89 status=ok
// SIG undefined FUN_1434e70f0(void)

undefined8 FUN_1434e70f0(undefined8 param_1,ulonglong param_2)

{
  FUN_14358fa80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 1434e7150 FUN_1434e7150 body=89 status=ok
// SIG undefined FUN_1434e7150(void)

undefined8 FUN_1434e7150(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e6130();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1434e71b0 FUN_1434e71b0 body=142 status=ok
// SIG undefined FUN_1434e71b0(void)

longlong FUN_1434e71b0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x108);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x108) = uVar1 - 1;
    }
  }
  FUN_1435b9770(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1434e7240 FUN_1434e7240 body=89 status=ok
// SIG undefined FUN_1434e7240(void)

undefined8 FUN_1434e7240(undefined8 param_1,ulonglong param_2)

{
  FUN_1434b05e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1434e72a0 FUN_1434e72a0 body=155 status=ok
// SIG undefined FUN_1434e72a0(void)

undefined8 * FUN_1434e72a0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  Scaleform::GFx::AS3::PrimitiveVS::~PrimitiveVS(param_1 + 10);
  *param_1 = &PTR_FUN_145b17800;
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[8] = uVar1 - 1;
    }
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1434e7340 FUN_1434e7340 body=146 status=ok
// SIG undefined FUN_1434e7340(void)

undefined8 * FUN_1434e7340(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b17800;
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[8] = uVar1 - 1;
    }
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1434e73e0 FUN_1434e73e0 body=89 status=ok
// SIG undefined FUN_1434e73e0(void)

undefined8 FUN_1434e73e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435ab0c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1434e7440 FUN_1434e7440 body=99 status=ok
// SIG undefined FUN_1434e7440(void)

undefined8 * FUN_1434e7440(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b1acf8;
  FUN_1435b9770();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1434e74b0 FUN_1434e74b0 body=99 status=ok
// SIG undefined FUN_1434e74b0(void)

undefined8 * FUN_1434e74b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b1aaa0;
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1434e7520 FUN_1434e7520 body=89 status=ok
// SIG undefined FUN_1434e7520(void)

undefined8 FUN_1434e7520(undefined8 param_1,ulonglong param_2)

{
  FUN_1434de8c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1434e7580 FUN_1434e7580 body=152 status=ok
// SIG undefined FUN_1434e7580(void)

undefined8 * FUN_1434e7580(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[0x20];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x20] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_FUN_145b1acf8;
  FUN_1435b9770(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1434e7620 FUN_1434e7620 body=99 status=ok
// SIG undefined FUN_1434e7620(void)

undefined8 * FUN_1434e7620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b1aaa0;
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1434e7690 FUN_1434e7690 body=89 status=ok
// SIG undefined FUN_1434e7690(void)

undefined8 FUN_1434e7690(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1434e76f0 FUN_1434e76f0 body=134 status=ok
// SIG undefined FUN_1434e76f0(void)

undefined8 * FUN_1434e76f0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b18068;
  *(undefined8 *)(param_1[0x20] + 0x18) = 0;
  if ((RefCountImpl *)param_1[0x20] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x20]);
  }
  FUN_1435b9770(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1434e7780 FUN_1434e7780 body=89 status=ok
// SIG undefined FUN_1434e7780(void)

undefined8 FUN_1434e7780(undefined8 param_1,ulonglong param_2)

{
  FUN_1434b2410();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1434e77e0 FUN_1434e77e0 body=89 status=ok
// SIG undefined FUN_1434e77e0(void)

undefined8 FUN_1434e77e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e62c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1434e7840 FUN_1434e7840 body=99 status=ok
// SIG undefined FUN_1434e7840(void)

undefined8 * FUN_1434e7840(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b1b790;
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1434e78b0 FUN_1434e78b0 body=89 status=ok
// SIG undefined FUN_1434e78b0(void)

undefined8 FUN_1434e78b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1434e7910 FUN_1434e7910 body=151 status=ok
// SIG undefined FUN_1434e7910(void)

longlong FUN_1434e7910(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar2 - 1;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1434e79b0 FUN_1434e79b0 body=176 status=ok
// SIG undefined FUN_1434e79b0(void)

undefined8 * FUN_1434e79b0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145b191f8;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcbe0)(param_1[8]);
  uVar1 = param_1[10];
  param_1[8] = 0;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1434e7a60 FUN_1434e7a60 body=89 status=ok
// SIG undefined FUN_1434e7a60(void)

undefined8 FUN_1434e7a60(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e6340();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1434e7ac0 FUN_1434e7ac0 body=89 status=ok
// SIG undefined FUN_1434e7ac0(void)

undefined8 FUN_1434e7ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e63d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1434e7b20 FUN_1434e7b20 body=89 status=ok
// SIG undefined FUN_1434e7b20(void)

undefined8 FUN_1434e7b20(undefined8 param_1,ulonglong param_2)

{
  FUN_1435dab40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1434e7b80 FUN_1434e7b80 body=89 status=ok
// SIG undefined FUN_1434e7b80(void)

undefined8 FUN_1434e7b80(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e6460();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1434e7be0 FUN_1434e7be0 body=89 status=ok
// SIG undefined FUN_1434e7be0(void)

undefined8 FUN_1434e7be0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1434e7c40 FUN_1434e7c40 body=161 status=ok
// SIG undefined FUN_1434e7c40(void)

undefined8 * FUN_1434e7c40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  uVar2 = param_1[9];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[9] = uVar2 - 1;
    }
  }
  piVar1 = (int *)(param_1[8] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1434e7cf0 FUN_1434e7cf0 body=89 status=ok
// SIG undefined FUN_1434e7cf0(void)

undefined8 FUN_1434e7cf0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434cf7f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1434e7d50 FUN_1434e7d50 body=89 status=ok
// SIG undefined FUN_1434e7d50(void)

undefined8 FUN_1434e7d50(undefined8 param_1,ulonglong param_2)

{
  FUN_1434cfe70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1434e7db0 FUN_1434e7db0 body=89 status=ok
// SIG undefined FUN_1434e7db0(void)

undefined8 FUN_1434e7db0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434d7210();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1434e7e10 FUN_1434e7e10 body=89 status=ok
// SIG undefined FUN_1434e7e10(void)

undefined8 FUN_1434e7e10(undefined8 param_1,ulonglong param_2)

{
  FUN_1434e6510();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1434e7e70 FUN_1434e7e70 body=196 status=ok
// SIG undefined FUN_1434e7e70(void)

void FUN_1434e7e70(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong local_28;
  ulonglong local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_28 = *param_2;
  *(int *)(local_28 + 0x18) = *(int *)(local_28 + 0x18) + 1;
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  local_18 = &local_28;
  local_20 = param_3;
  local_10 = param_4;
  FUN_1434e5270(param_1,*(undefined8 *)(param_1 + 8),&local_18,
                (uint)((*(longlong *)(param_3 + 0x28) << 0x3c) >> 0x3c) ^
                (*(uint *)(*(longlong *)(param_3 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                *(uint *)(local_28 + 0x1c) & 0xffffff);
  if (local_20 != 0) {
    if ((local_20 & 1) == 0) {
      if ((*(uint *)(local_20 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_20 + 8) = *(uint *)(local_20 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_20 = local_20 - 1;
    }
  }
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e7f40 FUN_1434e7f40 body=178 status=ok
// SIG undefined FUN_1434e7f40(void)

void FUN_1434e7f40(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8 [4];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  lVar2 = -1;
  local_28[0] = 5;
  local_20 = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(longlong *)(param_2 + 0x10) + lVar2) != '\0');
  local_18 = param_2;
  local_res8[0] =
       FUN_143360950(*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                      0x218),*(longlong *)(param_2 + 0x10),lVar2,0);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  FUN_1435b12c0(param_1,local_res8,local_28,4);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434e8000 FUN_1434e8000 body=200 status=ok
// SIG undefined FUN_1434e8000(void)

undefined8
FUN_1434e8000(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong local_res18;
  undefined8 local_res20;
  uint local_38 [8];
  
  lVar2 = param_3[5];
  local_res20 = param_4;
  uVar3 = FUN_143590110(local_38,param_3);
  uVar4 = (**(code **)(*param_3 + 0x78))(param_3,&local_res18);
  uVar3 = FUN_1434de980(param_1,param_2,uVar4,local_res20,lVar2,uVar3,param_5);
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  return uVar3;
}



// FUNCTION 1434e80d0 FUN_1434e80d0 body=516 status=ok
// SIG undefined FUN_1434e80d0(void)

undefined1 *
FUN_1434e80d0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined1 param_16)

{
  int *piVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined1 local_c8 [160];
  
  if (*(longlong *)(param_1 + 0x108) == 0x400) {
    uVar2 = FUN_1435c8e40(local_d8,0x3ff,param_1);
    FUN_1435cbdb0(param_1,uVar2);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  uVar2 = FUN_1435bccf0(local_c8);
  uVar5 = *(ulonglong *)(param_1 + 0x108) >> 6;
  if (*(ulonglong *)(param_1 + 0x110) <= uVar5) {
    FUN_1434f0810(param_1 + 0x100,uVar5);
  }
  lVar4 = (ulonglong)(*(uint *)(param_1 + 0x108) & 0x3f) * 0xa0 +
          *(longlong *)(*(longlong *)(param_1 + 0x120) + uVar5 * 8);
  if (lVar4 != 0) {
    FUN_1434e5ce0(lVar4,uVar2);
  }
  *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 1;
  FUN_1435bcd30(local_c8);
  uVar5 = *(longlong *)(param_1 + 0x108) - 1;
  lVar6 = (ulonglong)((uint)uVar5 & 0x3f) * 0xa0 +
          *(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar5 >> 6) * 8);
  *(undefined1 *)(lVar6 + 1) = param_16;
  *(undefined4 *)(lVar6 + 0x20) = param_5;
  FUN_143590140(lVar6 + 0x80,param_3);
  *(undefined8 *)(lVar6 + 0x40) = param_6;
  *(undefined8 *)(lVar6 + 0x30) = param_8;
  *(undefined8 *)(lVar6 + 0x28) = param_9;
  *(undefined8 *)(lVar6 + 0x38) = param_7;
  *(undefined8 *)(lVar6 + 0x18) = param_4;
  lVar4 = FUN_1435bb770(param_4,lVar6);
  if ((*(char *)(param_1 + 0xb8) == '\0') && (*(longlong *)(lVar4 + 0x40) != 0)) {
    FUN_1435bda60(lVar6,lVar4);
    pcVar3 = (char *)FUN_1435bcf40(lVar6,local_res8,param_10,param_11,param_12,param_13,param_15,
                                   lVar4);
    if (*pcVar3 != '\0') {
      *param_2 = 1;
      return param_2;
    }
  }
  FUN_1435cd680(param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434e82e0 FUN_1434e82e0 body=128 status=ok
// SIG undefined FUN_1434e82e0(void)

void FUN_1434e82e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1[1];
    FUN_1434f0230(param_1,param_1,param_3 + lVar1);
    plVar2 = (longlong *)(*param_1 + lVar1 * 8);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (plVar2 != (longlong *)0x0) {
        lVar1 = *param_2;
        *plVar2 = lVar1;
        if (lVar1 != 0) {
          *(uint *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1U & 0x8fffffff;
        }
      }
      param_2 = param_2 + 1;
      plVar2 = plVar2 + 1;
    }
  }
  return;
}



// FUNCTION 1434e8360 FUN_1434e8360 body=138 status=ok
// SIG undefined FUN_1434e8360(void)

void FUN_1434e8360(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  FUN_1434f0230(plVar1,plVar1,*(longlong *)(param_1 + 0x60) + 1);
  puVar2 = (ulonglong *)(*plVar1 + (*(longlong *)(param_1 + 0x60) + -1) * 8);
  if (puVar2 != (ulonglong *)0x0) {
    *puVar2 = param_2;
    if (param_2 == 0) {
      return;
    }
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
  return;
}



// FUNCTION 1434e83f0 FUN_1434e83f0 body=334 status=ok
// SIG undefined FUN_1434e83f0(void)

void FUN_1434e83f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1434e5ff0();
  if (((longlong *)*param_3 == (longlong *)0x0) || (lVar6 = *(longlong *)*param_3, lVar6 == 0)) {
    return;
  }
  uVar5 = 0;
  uVar2 = uVar5;
  if ((ulonglong *)*param_1 != (ulonglong *)0x0) {
    uVar2 = *(ulonglong *)*param_1;
  }
  if (uVar2 < (ulonglong)(lVar6 * 5) >> 2) {
    FUN_1434f0cf0(param_1,param_2);
  }
  lVar6 = *param_3;
  if (lVar6 == 0) {
    param_3 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar6 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 7;
    } while (uVar5 <= *(ulonglong *)(lVar6 + 8));
  }
  do {
    do {
      if (param_3 == (longlong *)0x0) {
        return;
      }
      lVar6 = *param_3;
      if (lVar6 == 0) {
        return;
      }
      if (*(longlong *)(lVar6 + 8) < (longlong)uVar5) {
        return;
      }
      lVar4 = 8;
      lVar6 = lVar6 + 0x20 + uVar5 * 0x38;
      lVar7 = 0x1505;
      do {
        lVar1 = lVar4 + -1;
        lVar4 = lVar4 + -1;
        lVar7 = lVar7 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar6);
      } while (lVar4 != 0);
      FUN_1434e4f50(param_1,param_2,lVar6,lVar7);
      uVar2 = *(ulonglong *)(*param_3 + 8);
    } while (((longlong)uVar2 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar2 < uVar5));
    plVar3 = (longlong *)(uVar5 * 0x38 + 0x10 + *param_3);
    do {
      if (*plVar3 != -2) break;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 7;
    } while (uVar5 <= uVar2);
  } while( true );
}



// FUNCTION 1434e8540 FUN_1434e8540 body=151 status=ok
// SIG undefined FUN_1434e8540(void)

undefined8 FUN_1434e8540(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) + param_2 * 8);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  FUN_1434f0230(lVar3 + 0x58,lVar3 + 0x58,*(longlong *)(lVar3 + 0x60) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (*(longlong *)(lVar3 + 0x60) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = uVar2;
    if (uVar2 == 0) {
      return 1;
    }
    *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
  }
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  return 1;
}



// FUNCTION 1434e85e0 Call body=42 status=ok
// SIG undefined Call(void)

undefined8 Scaleform::GFx::AS3::Instances::fl::AttrGetFirst::Call(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1434f0700(param_1 + 0x10,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) + param_2 * 8));
  }
  return 1;
}



// FUNCTION 1434e8610 FUN_1434e8610 body=106 status=ok
// SIG undefined FUN_1434e8610(void)

undefined8 FUN_1434e8610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
  FUN_1434f0230(lVar2 + 0x58,lVar2 + 0x58,*(longlong *)(lVar2 + 0x60) + 1);
  uVar5 = *(ulonglong *)(lVar2 + 0x58);
  plVar1 = (longlong *)(uVar5 + (*(longlong *)(lVar2 + 0x60) + -1) * 8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(lVar3 + param_2 * 8);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      uVar4 = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      uVar5 = (ulonglong)uVar4;
      *(uint *)(lVar2 + 8) = uVar4;
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1434e8680 Call body=45 status=ok
// SIG undefined Call(void)

undefined8
Scaleform::GFx::AS3::Instances::fl::ChildGetFirst::Call(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1434f0700(param_1 + 0x10,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + param_2 * 8));
  }
  return 1;
}



// FUNCTION 1434e86b0 FUN_1434e86b0 body=160 status=ok
// SIG undefined FUN_1434e86b0(void)

void FUN_1434e86b0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + param_2 * 8) + 0x88)
           + param_3 * 8);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  FUN_1434f0230(lVar3 + 0x58,lVar3 + 0x58,*(longlong *)(lVar3 + 0x60) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (*(longlong *)(lVar3 + 0x60) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = uVar2;
    if (uVar2 == 0) {
      return;
    }
    *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
  }
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  return;
}



// FUNCTION 1434e8750 FUN_1434e8750 body=67 status=ok
// SIG undefined FUN_1434e8750(void)

void FUN_1434e8750(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434f09e0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434f09e0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1434e87a0 FUN_1434e87a0 body=67 status=ok
// SIG undefined FUN_1434e87a0(void)

void FUN_1434e87a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434f0b40(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434f0b40(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1434e87f0 Clear body=65 status=ok
// SIG undefined Clear(void)

void Scaleform::
     ArrayBase<Scaleform::ArrayData<unsigned_char,Scaleform::AllocatorLH<unsigned_char,328>,Scaleform::ArrayDefaultPolicy>_>
     ::Clear(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) &&
     ((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe) != 0)) {
    FUN_1434efb80(param_1,param_1,0);
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1434e8840 FUN_1434e8840 body=181 status=ok
// SIG undefined FUN_1434e8840(void)

void FUN_1434e8840(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar2) != -2) {
        uVar3 = *(ulonglong *)(lVar5 + 0x28 + lVar2);
        if (uVar3 != 0) {
          if ((uVar3 & 1) == 0) {
            if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar5 + 0x28 + lVar2) = uVar3 - 1;
          }
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x20 + lVar2) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1434e8900 FUN_1434e8900 body=135 status=ok
// SIG undefined FUN_1434e8900(void)

void FUN_1434e8900(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar4) != -2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x20 + lVar4) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1434e8990 FUN_1434e8990 body=166 status=ok
// SIG undefined FUN_1434e8990(void)

void FUN_1434e8990(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar4) != -2) {
        uVar1 = *(uint *)(lVar2 + 0x20 + lVar4);
        if (9 < ((byte)uVar1 & 0x1f)) {
          if ((uVar1 >> 9 & 1) == 0) {
            FUN_1435920c0();
          }
          else {
            FUN_143592150();
          }
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1434e8a40 FUN_1434e8a40 body=69 status=ok
// SIG undefined FUN_1434e8a40(void)

void FUN_1434e8a40(undefined8 *param_1)

{
  if (9 < ((byte)*(uint *)(param_1 + 3) & 0x1f)) {
    if ((*(uint *)(param_1 + 3) >> 9 & 1) != 0) {
      FUN_143592150();
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    FUN_1435920c0(param_1 + 3);
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}



// FUNCTION 1434e8a90 FUN_1434e8a90 body=111 status=ok
// SIG undefined FUN_1434e8a90(void)

void FUN_1434e8a90(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xd0)) + 0x20 >> 5;
  uVar1 = (uint)uVar2;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    if (9 < ((byte)**(uint **)(param_1 + 200) & 0x1f)) {
      if ((**(uint **)(param_1 + 200) >> 9 & 1) == 0) {
        FUN_1435920c0();
      }
      else {
        FUN_143592150();
      }
    }
    *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + -0x20;
  }
  return;
}



// FUNCTION 1434e8b00 FUN_1434e8b00 body=121 status=ok
// SIG undefined FUN_1434e8b00(void)

void FUN_1434e8b00(uint *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (uint *)0x0) {
      *param_1 = *param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      param_1[4] = param_3[4];
      param_1[5] = uVar1;
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      if (9 < ((byte)*param_3 & 0x1f)) {
        if ((*param_3 >> 9 & 1) == 0) {
          FUN_143592070(param_3);
        }
        else {
          FUN_143592140();
        }
      }
    }
    param_3 = param_3 + 8;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1434e8b80 FUN_1434e8b80 body=281 status=ok
// SIG undefined FUN_1434e8b80(void)

longlong * FUN_1434e8b80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  
  lVar2 = *param_2;
  plVar7 = (longlong *)0x0;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  plVar8 = plVar7;
  if ((*(int *)(lVar3 + 8) != 0) &&
     (uVar9 = *(uint *)(lVar2 + 0x1c) & 0xffffff, *(int *)(lVar3 + 8) != 0)) {
    uVar6 = (ulonglong)(*(uint *)(lVar3 + 0x30) & uVar9);
    plVar10 = (longlong *)(uVar6 * 0x10 + *(longlong *)(lVar3 + 0x38));
    if (*plVar10 != -1) {
      while( true ) {
        lVar4 = *plVar10;
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 8 + lVar4 * 0x10);
        uVar11 = *(uint *)(lVar5 + 0x1c) & 0xffffff;
        if ((plVar8 == (longlong *)0x0) &&
           (plVar8 = plVar7, uVar6 != (*(uint *)(lVar3 + 0x30) & uVar11))) goto LAB_1434e8c77;
        plVar8 = (longlong *)0x0;
        if ((uVar11 == uVar9) && (lVar5 == lVar2)) break;
        uVar6 = plVar10[1];
        if (uVar6 == 0xffffffffffffffff) goto LAB_1434e8c77;
        plVar8 = plVar10;
        plVar10 = (longlong *)(uVar6 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      if (lVar4 != -1) {
        plVar8 = (longlong *)(lVar4 * 0x20 + *(longlong *)(lVar3 + 0x28));
      }
    }
  }
LAB_1434e8c77:
  iVar1 = *(int *)(lVar2 + 0x18) + -1;
  *(int *)(lVar2 + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return plVar8;
}



// FUNCTION 1434e8ca0 FUN_1434e8ca0 body=134 status=ok
// SIG undefined FUN_1434e8ca0(void)

void FUN_1434e8ca0(undefined8 param_1,longlong *param_2,code *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *param_2;
      uVar1 = *(uint *)(lVar2 + lVar3) & 0x1f;
      if (10 < uVar1) {
        if (uVar1 < 0xd) {
          lVar2 = lVar2 + 0x10;
        }
        else {
          if (0xe < uVar1) goto LAB_1434e8d01;
          lVar2 = lVar2 + 0x18;
        }
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          (*param_3)(param_1);
        }
      }
LAB_1434e8d01:
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1434e8d30 FUN_1434e8d30 body=150 status=ok
// SIG undefined FUN_1434e8d30(void)

void FUN_1434e8d30(undefined8 param_1,longlong *param_2,code *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (*param_2 - param_2[1]) + 0x20 >> 5;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_2[1];
      uVar1 = *(uint *)(lVar2 + lVar3) & 0x1f;
      if (10 < uVar1) {
        if (uVar1 < 0xd) {
          lVar2 = lVar2 + 0x10;
        }
        else {
          if (0xe < uVar1) goto LAB_1434e8da1;
          lVar2 = lVar2 + 0x18;
        }
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          (*param_3)(param_1);
        }
      }
LAB_1434e8da1:
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1434e8dd0 FUN_1434e8dd0 body=265 status=ok
// SIG undefined FUN_1434e8dd0(void)

void FUN_1434e8dd0(longlong param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  FUN_1434e8ca0(param_2,param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x58);
  plVar5 = (longlong *)(param_1 + 0x58);
  if (lVar3 == 0) {
    plVar5 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar4 = (longlong *)(lVar3 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 7;
    } while (uVar6 <= *(ulonglong *)(lVar3 + 8));
  }
  do {
    if (((plVar5 == (longlong *)0x0) || (lVar3 = *plVar5, lVar3 == 0)) ||
       (*(longlong *)(lVar3 + 8) < (longlong)uVar6)) {
      return;
    }
    lVar3 = uVar6 * 0x38 + lVar3;
    uVar2 = *(uint *)(lVar3 + 0x28) & 0x1f;
    if (10 < uVar2) {
      if (uVar2 < 0xd) {
        plVar4 = (longlong *)(lVar3 + 0x38);
      }
      else {
        if (0xe < uVar2) goto LAB_1434e8e8b;
        plVar4 = (longlong *)(lVar3 + 0x40);
      }
      if (*plVar4 != 0) {
        (*param_3)(param_2);
      }
    }
LAB_1434e8e8b:
    uVar1 = *(ulonglong *)(*plVar5 + 8);
    if (((longlong)uVar6 <= (longlong)uVar1) && (uVar6 = uVar6 + 1, uVar6 <= uVar1)) {
      plVar4 = (longlong *)(uVar6 * 0x38 + 0x10 + *plVar5);
      do {
        if (*plVar4 != -2) break;
        uVar6 = uVar6 + 1;
        plVar4 = plVar4 + 7;
      } while (uVar6 <= uVar1);
    }
  } while( true );
}



// FUNCTION 1434e8ee0 FUN_1434e8ee0 body=113 status=ok
// SIG undefined FUN_1434e8ee0(void)

void FUN_1434e8ee0(longlong *param_1)

{
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x8fffffff;
  if ((*(uint *)(param_1 + 1) >> 0x18 & 1) != 0) {
    *(longlong *)(param_1[3] + 0x10) = param_1[2];
    *(longlong *)(param_1[2] + 0x18) = param_1[3];
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfeffffff;
                    /* WARNING: Could not recover jumptable at 0x0001434e8f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  if ((int)*(uint *)(param_1 + 1) < 0) {
    FUN_1434efa50(param_1[4] & 0xfffffffffffffffc,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e8f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 1434e8f80 FUN_1434e8f80 body=175 status=ok
// SIG undefined FUN_1434e8f80(void)

void FUN_1434e8f80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b74d30)((longlong)DAT_146b74d38 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434e9050 FUN_1434e9050 body=112 status=ok
// SIG undefined FUN_1434e9050(void)

void FUN_1434e9050(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74720)(DAT_146b74728 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e90c0 FUN_1434e90c0 body=112 status=ok
// SIG undefined FUN_1434e90c0(void)

void FUN_1434e90c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74730)(DAT_146b74738 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e9130 FUN_1434e9130 body=112 status=ok
// SIG undefined FUN_1434e9130(void)

void FUN_1434e9130(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74740)(DAT_146b74748 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e91a0 FUN_1434e91a0 body=112 status=ok
// SIG undefined FUN_1434e91a0(void)

void FUN_1434e91a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74750)(DAT_146b74758 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e9210 FUN_1434e9210 body=112 status=ok
// SIG undefined FUN_1434e9210(void)

void FUN_1434e9210(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74760)(DAT_146b74768 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e9280 FUN_1434e9280 body=112 status=ok
// SIG undefined FUN_1434e9280(void)

void FUN_1434e9280(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74770)(DAT_146b74778 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e92f0 FUN_1434e92f0 body=112 status=ok
// SIG undefined FUN_1434e92f0(void)

void FUN_1434e92f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b74780)(DAT_146b74788 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434e9360 FUN_1434e9360 body=148 status=ok
// SIG undefined FUN_1434e9360(void)

void FUN_1434e9360(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74790)(DAT_146b74798 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e9400 FUN_1434e9400 body=148 status=ok
// SIG undefined FUN_1434e9400(void)

void FUN_1434e9400(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b747a0)(DAT_146b747a8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e94a0 FUN_1434e94a0 body=148 status=ok
// SIG undefined FUN_1434e94a0(void)

void FUN_1434e94a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74800)(DAT_146b74808 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e9540 FUN_1434e9540 body=148 status=ok
// SIG undefined FUN_1434e9540(void)

void FUN_1434e9540(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74810)(DAT_146b74818 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e95e0 FUN_1434e95e0 body=148 status=ok
// SIG undefined FUN_1434e95e0(void)

void FUN_1434e95e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74820)(DAT_146b74828 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1434e9680 FUN_1434e9680 body=148 status=ok
// SIG undefined FUN_1434e9680(void)

void FUN_1434e9680(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b74830)(DAT_146b74838 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}


