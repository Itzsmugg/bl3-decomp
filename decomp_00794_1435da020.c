// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435da020 FUN_1435da020 body=99 status=ok
// SIG undefined FUN_1435da020(void)

undefined8 FUN_1435da020(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_1433549d0(local_68);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  Scaleform::StringBuffer::AppendString(param_1,local_78,local_70);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_1;
}



// FUNCTION 1435da090 FUN_1435da090 body=99 status=ok
// SIG undefined FUN_1435da090(void)

undefined8 FUN_1435da090(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354a50(local_68);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  Scaleform::StringBuffer::AppendString(param_1,local_78,local_70);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_1;
}



// FUNCTION 1435da100 FUN_1435da100 body=99 status=ok
// SIG undefined FUN_1435da100(void)

undefined8 FUN_1435da100(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354ad0(local_68);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  Scaleform::StringBuffer::AppendString(param_1,local_78,local_70);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_1;
}



// FUNCTION 1435da170 FUN_1435da170 body=99 status=ok
// SIG undefined FUN_1435da170(void)

undefined8 FUN_1435da170(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354b50(local_68);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  Scaleform::StringBuffer::AppendString(param_1,local_78,local_70);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_1;
}



// FUNCTION 1435da1e0 FUN_1435da1e0 body=99 status=ok
// SIG undefined FUN_1435da1e0(void)

undefined8 FUN_1435da1e0(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354bd0(local_68);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  Scaleform::StringBuffer::AppendString(param_1,local_78,local_70);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_1;
}



// FUNCTION 1435da250 FUN_1435da250 body=99 status=ok
// SIG undefined FUN_1435da250(void)

undefined8 FUN_1435da250(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354c50(local_68);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  Scaleform::StringBuffer::AppendString(param_1,local_78,local_70);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_1;
}



// FUNCTION 1435da2c0 FUN_1435da2c0 body=635 status=ok
// SIG undefined FUN_1435da2c0(void)

undefined8 FUN_1435da2c0(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8;
  undefined4 uStackX_c;
  ulonglong local_res10;
  undefined4 local_428 [2];
  ulonglong *local_420;
  undefined1 local_408 [1024];
  
  uVar7 = *param_2 & 0x1f;
  if (uVar7 == 1) {
    pcVar5 = "false";
    if ((char)param_2[4] != '\0') {
      pcVar5 = "true";
    }
    Scaleform::StringBuffer::AppendString(param_1,pcVar5,0xffffffffffffffff);
    return param_1;
  }
  if (uVar7 == 2) {
    local_res8 = param_2[4];
    FUN_1432c2f70(&local_res10);
    local_420 = &local_res10;
    local_428[0] = 0;
    FUN_1433561d0(local_408,local_428);
    FUN_1433563e0(local_408,&DAT_145b198a0);
    FUN_143603e10(local_408,&local_res8);
  }
  else {
    if (uVar7 != 3) {
      if (uVar7 != 4) {
        if (uVar7 != 10) {
          return param_1;
        }
        puVar2 = *(undefined8 **)(param_2 + 4);
        *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1;
        Scaleform::StringBuffer::AppendString(param_1,*puVar2,*(undefined4 *)(puVar2 + 4));
        piVar1 = (int *)(puVar2 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_1;
        }
        FUN_14335f920(puVar2);
        return param_1;
      }
      local_res10 = *(ulonglong *)(param_2 + 4);
      FUN_1432c2f70(&local_res8);
      local_420 = (ulonglong *)&local_res8;
      local_428[0] = 0;
      FUN_1433561d0(local_408,local_428);
      FUN_1433563e0(local_408,&DAT_145b198a0);
      FUN_143603f00(local_408,&local_res10);
      Scaleform::MsgFormat::FinishFormatD(local_408);
      FUN_1433562f0(local_408);
      puVar4 = (ulonglong *)(CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc);
      Scaleform::StringBuffer::AppendString
                (param_1,(longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff);
      uVar6 = CONCAT44(uStackX_c,local_res8);
      goto LAB_1435da4dc;
    }
    local_res8 = param_2[4];
    FUN_1432c2f70(&local_res10);
    local_420 = &local_res10;
    local_428[0] = 0;
    FUN_1433561d0(local_408,local_428);
    FUN_1433563e0(local_408,&DAT_145b198a0);
    FUN_1432edfd0(local_408,&local_res8);
  }
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  Scaleform::StringBuffer::AppendString
            (param_1,(longlong)(local_res10 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(local_res10 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  uVar6 = local_res10;
LAB_1435da4dc:
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar6 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6 & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 1435da550 FUN_1435da550 body=83 status=ok
// SIG undefined FUN_1435da550(void)

char * FUN_1435da550(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "public";
  case 1:
    return "protected";
  case 2:
    return "static protected";
  case 3:
    return "private";
  case 4:
    return "explicit";
  case 5:
    return "package internal";
  default:
    return "Invalid Namespace type";
  }
}



// FUNCTION 1435da5d0 FUN_1435da5d0 body=1256 status=ok
// SIG undefined FUN_1435da5d0(void)

ulonglong * FUN_1435da5d0(ulonglong *param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong local_res10 [2];
  ulonglong local_res20;
  ulonglong local_438;
  undefined4 local_430 [2];
  ulonglong *local_428;
  undefined1 local_418 [1024];
  
  switch(*param_2 & 0x1f) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    local_res20 = *(longlong *)(param_3 + 0x218) + 0x48;
    piVar1 = (int *)(*(longlong *)(param_3 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    FUN_1435911f0(param_2,local_res10,&local_res20);
    *param_1 = local_res20;
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return param_1;
    }
    FUN_14335f920();
    return param_1;
  case 5:
    uVar6 = FUN_143360950(*(undefined8 *)(param_3 + 0x218),"thunk",5);
    break;
  case 6:
    local_res10[0] = CONCAT44(local_res10[0]._4_4_,param_2[4]);
    FUN_1432c2f70(&local_res20);
    local_428 = &local_res20;
    local_430[0] = 0;
    FUN_1433561d0(local_418,local_430);
    FUN_1433563e0(local_418,&DAT_145b198a0);
    FUN_1432edfd0(local_418,local_res10);
    Scaleform::MsgFormat::FinishFormatD(local_418);
    FUN_1433562f0(local_418);
    FUN_1432c3060(&local_438,"Method ind: ",(local_res20 & 0xfffffffffffffffc) + 0xc,0);
    uVar6 = FUN_143360a90(*(undefined8 *)(param_3 + 0x218),
                          (longlong)(local_438 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_438 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *param_1 = uVar6;
    *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_438 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_438 & 0xfffffffffffffffc);
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 != 1) {
      return param_1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    return param_1;
  case 7:
    local_res10[0] = CONCAT44(local_res10[0]._4_4_,param_2[4]);
    FUN_1432c2f70(&local_res20);
    local_428 = &local_res20;
    local_430[0] = 0;
    FUN_1433561d0(local_418,local_430);
    FUN_1433563e0(local_418,&DAT_145b198a0);
    FUN_143603e10(local_418,local_res10);
    Scaleform::MsgFormat::FinishFormatD(local_418);
    FUN_1433562f0(local_418);
    FUN_1432c3060(&local_438,"VTable ind: ",(local_res20 & 0xfffffffffffffffc) + 0xc,0);
    uVar6 = FUN_143360a90(*(undefined8 *)(param_3 + 0x218),
                          (longlong)(local_438 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_438 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *param_1 = uVar6;
    *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_438 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_438 & 0xfffffffffffffffc);
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 != 1) {
      return param_1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    return param_1;
  default:
    uVar6 = *(longlong *)(param_3 + 0x218) + 0x48;
    break;
  case 10:
    cVar4 = FUN_14353ffc0(param_2);
    if (cVar4 == '\0') {
      uVar6 = *(ulonglong *)(param_2 + 4);
    }
    else {
      uVar6 = *(ulonglong *)(param_3 + 0x10);
    }
    break;
  case 0xb:
    lVar2 = *(longlong *)(param_2 + 4);
    uVar8 = FUN_1435da550((*(longlong *)(lVar2 + 0x28) << 0x3c) >> 0x3c);
    local_res10[0] = FUN_143360a60(*(undefined8 *)(param_3 + 0x218),uVar8);
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    if (*(int *)(*(longlong *)(lVar2 + 0x38) + 0x20) != 0) {
      FUN_143360130(local_res10,&DAT_145af3920,1);
      FUN_143360170(local_res10,lVar2 + 0x38);
    }
    *param_1 = local_res10[0];
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    local_438 = local_res10[0];
LAB_1435da9cc:
    piVar1 = (int *)(local_438 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return param_1;
    }
    FUN_14335f920();
    return param_1;
  case 0xc:
    lVar2 = *(longlong *)(param_2 + 4);
    if (lVar2 == 0) {
      uVar6 = *(ulonglong *)(param_3 + 0x10);
    }
    else {
      if (*(int *)(*(longlong *)(lVar2 + 0x28) + 0x90) != 10) {
        plVar3 = *(longlong **)(lVar2 + 0x28);
        if ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x88) >> 5 & 1) == 0) {
          uVar8 = 8;
          pcVar7 = "[object ";
        }
        else {
          uVar8 = 7;
          pcVar7 = "[class ";
        }
        local_res10[0] = FUN_143360950(*(undefined8 *)(param_3 + 0x218),pcVar7,uVar8);
        *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
        uVar8 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_438);
        uVar8 = Scaleform::GFx::ASString::operator+(local_res10,&local_res20,uVar8);
        FUN_143360200(uVar8,param_1,&DAT_145b18618);
        piVar1 = (int *)(local_res20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        piVar1 = (int *)(local_res10[0] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        goto LAB_1435da9cc;
      }
      uVar6 = FUN_143360950(*(undefined8 *)(param_3 + 0x218),"function Function() {}",0x16);
    }
    break;
  case 0xd:
    uVar6 = FUN_143360950(*(undefined8 *)(param_3 + 0x218),"ThunkClosure",0xc);
    break;
  case 0xe:
    uVar6 = FUN_143360950(*(undefined8 *)(param_3 + 0x218),"VTableIndClosure",0x10);
  }
  *param_1 = uVar6;
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
  return param_1;
}



// FUNCTION 1435dab00 UDBase body=56 status=ok
// SIG undefined UDBase(void)

undefined8 * Scaleform::GFx::AS3::Classes::UDBase::UDBase(undefined8 *param_1,undefined8 param_2)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4ad98;
  FUN_1435b7490(param_2,param_1);
  return param_1;
}



// FUNCTION 1435dab40 FUN_1435dab40 body=48 status=ok
// SIG undefined FUN_1435dab40(void)

void FUN_1435dab40(undefined8 *param_1)

{
  *param_1 = &PTR_ForEachChild_GC_145b4ad98;
  FUN_1435b7330(param_1[5] & 0xfffffffffffffffe,param_1);
  FUN_1435b38e0(param_1);
  return;
}



// FUNCTION 1435dab90 FUN_1435dab90 body=831 status=ok
// SIG undefined FUN_1435dab90(void)

undefined8 FUN_1435dab90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined4 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78 [2];
  longlong **local_70;
  longlong *local_68;
  uint *local_60;
  uint local_58 [2];
  longlong **local_50;
  longlong *local_48;
  uint *local_40;
  
  uVar10 = 0;
  local_a0 = *(undefined8 *)(*param_3 + 0x48);
  local_a8 = (longlong *)0x0;
  if (DAT_146b7a930 == 0x7ffffff) {
    local_98[0] = 0;
    local_90 = local_98;
    if ((*(uint *)(param_2 + 0x10) & 0xffffffe0) != 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0x1f;
      FUN_143616bf0(&local_90);
    }
  }
  DAT_146b7a930 = DAT_146b7a930 + 1;
  local_48 = param_3;
  local_58[0] = DAT_146b7a930;
  local_50 = &local_a8;
  local_40 = local_58;
  if (((*(byte *)(*(longlong *)(param_2 + 0x38) + 0x10) & 1) != 0) &&
     (cVar2 = FUN_143610f30(local_58,param_2), cVar2 != '\0')) {
    local_res8 = local_res8 & 0xffffffffffffff00;
    pcVar4 = (char *)FUN_1435a1bd0(*(undefined8 *)(param_2 + 0x38),local_res18,&local_res8,
                                   local_res10);
    if ((*pcVar4 != '\0') && ((char)local_res8 != '\0')) {
      FUN_143616250(&local_40,param_2);
    }
  }
  do {
    if ((local_a8 == (longlong *)0x0) || (bVar1 = false, *local_a8 == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      *(bool *)param_1 = *(char *)(*param_3 + 0xb8) == '\0';
      if (local_a8 != (longlong *)0x0) {
        lVar9 = local_a8[1] + 1;
        do {
          if (*(longlong *)(uVar10 + 0x10 + (longlong)local_a8) != -2) {
            *(undefined8 *)(uVar10 + 0x10 + (longlong)local_a8) = 0xfffffffffffffffe;
          }
          uVar10 = uVar10 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a8);
      }
      return param_1;
    }
    if (DAT_146b7a930 == 0x7ffffff) {
      local_98[0] = 0;
      local_90 = local_98;
      if ((*(uint *)(param_2 + 0x10) & 0xffffffe0) != 0) {
        uVar3 = *(uint *)(param_2 + 0x10) & 0x1f;
        *(uint *)(param_2 + 0x10) = uVar3;
        switch(uVar3) {
        case 1:
          FUN_143615e00(&local_90,param_2);
          break;
        case 4:
          FUN_143615dc0(&local_90,param_2);
          break;
        case 5:
          FUN_143615ee0(&local_90,param_2);
          break;
        case 6:
          FUN_143615fb0(&local_90,param_2);
          break;
        case 7:
          FUN_1436160a0(&local_90,param_2);
          break;
        case 0x17:
          FUN_143615dc0(&local_90,param_2);
        }
      }
    }
    DAT_146b7a930 = DAT_146b7a930 + 1;
    local_68 = param_3;
    local_78[0] = DAT_146b7a930;
    local_70 = &local_a8;
    local_60 = local_78;
    if (local_a8 == (longlong *)0x0) {
      local_88 = 0;
      uStack_80 = 0;
      uVar5 = 0;
      pplVar8 = (longlong **)0x0;
    }
    else {
      plVar7 = local_a8 + 2;
      uVar5 = uVar10;
      do {
        if (*plVar7 != -2) break;
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 3;
      } while (uVar5 <= (ulonglong)local_a8[1]);
      pplVar8 = &local_a8;
    }
    lVar9 = uVar5 * 3 + 4;
    uVar5 = (*pplVar8)[lVar9];
    FUN_143313780(pplVar8,*pplVar8 + lVar9);
    if ((*(byte *)(*(longlong *)(uVar5 + 0x38) + 0x10) & 1) != 0) {
      bVar6 = (byte)*(uint *)(uVar5 + 0x10) & 0x1f;
      if (*(uint *)(uVar5 + 0x10) >> 5 == local_78[0]) {
        if (bVar6 == 1) {
          FUN_14360df40(local_78,uVar5);
        }
      }
      else {
        if (bVar6 == 1) {
          local_res8 = uVar5;
          FUN_143313780(local_70,&local_res8);
        }
        local_res8 = local_res8 & 0xffffffffffffff00;
        *(uint *)(uVar5 + 0x10) = local_78[0] << 5 | *(uint *)(uVar5 + 0x10) & 0x1f;
        pcVar4 = (char *)FUN_1435a1bd0(*(undefined8 *)(uVar5 + 0x38),local_res18,&local_res8,
                                       local_res10);
        if ((*pcVar4 != '\0') && ((char)local_res8 != '\0')) {
          FUN_143616250(&local_60,uVar5);
        }
      }
    }
  } while( true );
}



// FUNCTION 1435daf10 FUN_1435daf10 body=188 status=ok
// SIG undefined FUN_1435daf10(void)

undefined8 * FUN_1435daf10(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[4] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  param_1[5] = lVar2;
  param_1[6] = param_3;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x218);
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
  uVar3 = *(undefined8 *)(param_1[5] + 0x48);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar3;
  param_1[0xb] = lVar2 + 0x48;
  iVar1 = *(int *)(lVar2 + 0x60);
  *(int *)(lVar2 + 0x60) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920();
  }
  uVar3 = *(undefined8 *)(param_1[5] + 0x48);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = uVar3;
  uVar3 = *(undefined8 *)(param_1[5] + 0x48);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = uVar3;
  return param_1;
}



// FUNCTION 1435dafe0 FUN_1435dafe0 body=300 status=ok
// SIG undefined FUN_1435dafe0(void)

ulonglong FUN_1435dafe0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  byte local_res8 [8];
  
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (local_res8[0] < 0x80) {
    return (ulonglong)local_res8[0];
  }
  uVar3 = (local_res8[0] & 0x7f) << 7;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,1);
  if (iVar1 == 0) {
    return (ulonglong)uVar3;
  }
  if (local_res8[0] < 0x80) {
    return (ulonglong)(local_res8[0] | uVar3);
  }
  uVar3 = (local_res8[0] & 0x7f | uVar3) << 7;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,1);
  if (iVar1 == 0) {
    return (ulonglong)uVar3;
  }
  if (local_res8[0] < 0x80) {
    return (ulonglong)(local_res8[0] | uVar3);
  }
  uVar3 = (local_res8[0] & 0x7f | uVar3) << 8;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,1);
  if (iVar1 == 0) {
    return (ulonglong)uVar3;
  }
  return (ulonglong)(local_res8[0] | uVar3);
}



// FUNCTION 1435db120 FUN_1435db120 body=77 status=ok
// SIG undefined FUN_1435db120(void)

ulonglong FUN_1435db120(longlong param_1)

{
  ulonglong uVar1;
  uint local_res8 [8];
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,4);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  return (ulonglong)
         ((local_res8[0] & 0xff0000 | local_res8[0] >> 0x10) >> 8 |
         (local_res8[0] & 0xff00 | local_res8[0] << 0x10) << 8);
}



// FUNCTION 1435db180 FUN_1435db180 body=190 status=ok
// SIG undefined FUN_1435db180(void)

ulonglong FUN_1435db180(longlong param_1)

{
  int iVar1;
  ulonglong local_res8 [4];
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,8);
  if (iVar1 == 0) {
    return 0;
  }
  return (((local_res8[0] & 0xff000000000000 | local_res8[0] >> 0x10) >> 0x10 |
          local_res8[0] & 0xff0000000000) >> 0x10 | local_res8[0] & 0xff00000000) >> 8 |
         ((((ulonglong)((uint)local_res8[0] & 0xff00) | local_res8[0] << 0x10) << 0x10 |
          (ulonglong)((uint)local_res8[0] & 0xff0000)) << 0x10 | local_res8[0] & 0xff000000) << 8;
}



// FUNCTION 1435db250 FUN_1435db250 body=327 status=ok
// SIG undefined FUN_1435db250(void)

longlong * FUN_1435db250(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  char local_res8 [8];
  longlong local_res18;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x218);
  local_res18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  uVar5 = FUN_1435dafe0();
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if ((ulonglong)(uVar5 >> 1) < *(ulonglong *)(param_1 + 0x40)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar5 >> 1) * 8);
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *param_2 = lVar3;
      local_res18 = lVar3;
    }
    else {
      uVar6 = FUN_1435c8e40(local_18,0x5e2,uVar4);
      FUN_1435ccf60(uVar4,uVar6,&DAT_145b16b90);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = local_res18;
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    }
  }
  else {
    if (uVar5 >> 1 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
                (*(longlong **)(param_1 + 0x30),local_res8,&local_res18);
      if (local_res8[0] != '\0') {
        FUN_1436138f0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x50),
                      *(longlong *)(param_1 + 0x40) + 1);
        plVar2 = (longlong *)
                 (*(longlong *)(param_1 + 0x38) + (*(longlong *)(param_1 + 0x40) + -1) * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = local_res18;
          *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
        }
      }
    }
    *param_2 = local_res18;
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435db3a0 FUN_1435db3a0 body=3136 status=ok
// SIG undefined FUN_1435db3a0(void)

undefined1 * FUN_1435db3a0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined *puVar5;
  uint3 uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong *puVar20;
  uint uVar21;
  ulonglong *puVar22;
  uint local_res20 [2];
  uint in_stack_fffffffffffffec8;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  int *piStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong *local_108;
  uint local_100 [2];
  int *local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  int *local_e0;
  undefined1 local_d8 [4];
  uint local_d4;
  ulonglong *local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  ulonglong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [2];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar9 = FUN_1435dafe0();
  piVar14 = (int *)param_1[5];
  if ((uVar9 & 1) == 0) {
    if ((ulonglong)param_1[0xd] <= (ulonglong)(uVar9 >> 1)) {
      uVar10 = FUN_1435c8e40(&local_128,0x5e2,piVar14);
      FUN_1435ccf60(piVar14,uVar10,&DAT_145b16b90);
      piStack_120 = piStack_120 + 6;
      *piStack_120 = *piStack_120 + -1;
      if (*piStack_120 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
    FUN_1435903c0(param_3,*(undefined8 *)(param_1[0xc] + (ulonglong)(uVar9 >> 1) * 8));
    *param_2 = 1;
    return param_2;
  }
  lVar19 = 0;
  puVar22 = (ulonglong *)0x0;
  puVar18 = *(ulonglong **)(piVar14 + 0x12);
  local_c8 = (ulonglong *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = piVar14;
  local_d0 = puVar18;
  local_b0 = puVar18;
  if (((byte)uVar9 & 3) == 1) {
    if ((ulonglong)param_1[0x11] <= (ulonglong)(uVar9 >> 2)) {
      uVar10 = FUN_1435c8e40(&local_128,0x5e2,piVar14);
      FUN_1435ccf60(piVar14,uVar10,&DAT_145b16b90);
      piStack_120 = piStack_120 + 6;
      *piStack_120 = *piStack_120 + -1;
      if (*piStack_120 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      goto LAB_1435db4bf;
    }
    plVar3 = *(longlong **)(param_1[0x10] + (ulonglong)(uVar9 >> 2) * 8);
    if (plVar3[0x15] == 0) {
      (**(code **)(*plVar3 + 0x50))(plVar3);
    }
    local_108 = (longlong *)plVar3[0x15];
    if (*param_1 == 0) {
      lVar11 = FUN_1435c8090(param_1[5],&DAT_145b43470);
      *param_1 = *(longlong *)(lVar11 + 0xd8);
    }
    uVar7 = FUN_1435b5020(*param_1,plVar3);
    uVar12 = plVar3[5];
    uVar21 = 0;
    uVar17 = 0;
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,uVar7);
    local_d4 = (uint)(*(byte *)(plVar3 + 0x11) >> 1 & 1);
    puVar18 = local_d0;
    if (plVar3[8] + uVar12 != 0) {
      do {
        if (((longlong)uVar17 < 0) || (uVar17 < uVar12)) {
          lVar11 = FUN_1434ef150(plVar3[6],uVar17);
        }
        else {
          lVar11 = plVar3[7] + 0x10 + ((uVar17 & 0xffffffff) - uVar12) * 0x40;
        }
        cVar8 = FUN_143611230(lVar11);
        if ((cVar8 != '\0') && (cVar8 = FUN_1434b29c0(*(undefined8 *)(lVar11 + 8)), cVar8 != '\0'))
        {
          puVar22 = *(ulonglong **)(lVar11 + 0x28);
          piStack_120 = (int *)(ulonglong)(uint)puVar22[4];
          local_128 = *puVar22;
          lVar11 = FUN_1432c6260(&local_128,0x2f,0xffffffffffffffff);
          if (lVar11 < 0) {
            lVar11 = FUN_1432c6260(&local_128,0x2e,0xffffffffffffffff);
          }
          piVar14 = (int *)(lVar11 + 1U);
          if (piStack_120 < (int *)(lVar11 + 1U)) {
            piVar14 = piStack_120;
          }
          uVar12 = FUN_143360a90(puVar22[1],local_128 + (longlong)piVar14,
                                 (longlong)piStack_120 - (longlong)piVar14);
          *(int *)(uVar12 + 0x18) = *(int *)(uVar12 + 0x18) + 1;
          FUN_1436138f0(&local_c8,puVar18,lVar19 + 1);
          lVar19 = local_c0;
          puVar22 = local_c8;
          if (local_c8 + local_c0 + -1 != (ulonglong *)0x0) {
            local_c8[local_c0 + -1] = uVar12;
            *(int *)(uVar12 + 0x18) = *(int *)(uVar12 + 0x18) + 1;
          }
          piVar14 = (int *)(uVar12 + 0x18);
          *piVar14 = *piVar14 + -1;
          if (*piVar14 == 0) {
            FUN_14335f920(uVar12);
          }
          uVar21 = uVar21 + 1;
          puVar18 = local_b0;
        }
        if (((longlong)uVar17 < 0) || (uVar17 < (ulonglong)(plVar3[5] + plVar3[8]))) {
          uVar17 = uVar17 + 1;
        }
        uVar12 = plVar3[5];
      } while ((uVar17 & 0xffffffff) < plVar3[8] + uVar12);
    }
  }
  else {
    uVar6 = (uint3)(uVar9 >> 8);
    local_res20[0] = CONCAT31(uVar6 >> 2,(char)(uVar9 >> 2)) & 0xffffff01;
    local_d4 = CONCAT31(uVar6 >> 3,(char)(uVar9 >> 3)) & 0xffffff01;
    uVar21 = uVar9 >> 4;
    FUN_1435db250(param_1,&local_108);
    plVar3 = local_108;
    if ((int)local_108[4] == 0) {
LAB_1435db754:
      plVar4 = *(longlong **)(*(longlong *)(local_e0 + 0x82) + 0xd8);
      if (plVar4[0x15] == 0) {
        (**(code **)(*plVar4 + 0x50))(plVar4);
      }
      local_108 = (longlong *)plVar4[0x15];
    }
    else {
      lVar11 = *(longlong *)(local_e0 + 0xbc);
      local_108 = (longlong *)0x0;
      if (lVar11 == 0) goto LAB_1435db754;
      uVar12 = *(ulonglong *)(lVar11 + 8);
      uVar17 = *(uint *)((longlong)plVar3 + 0x1c) & uVar12;
      lVar2 = uVar17 * 3 + 2;
      puVar20 = (ulonglong *)(lVar11 + lVar2 * 8);
      if ((*(longlong *)(lVar11 + lVar2 * 8) != -2) &&
         (uVar16 = uVar17, (*(uint *)(puVar20[1] + 0x1c) & uVar12) == uVar17)) {
        while (((*(uint *)((longlong)puVar20[1] + 0x1c) & uVar12) != uVar17 ||
               ((longlong *)puVar20[1] != plVar3))) {
          uVar16 = *puVar20;
          if (uVar16 == 0xffffffffffffffff) goto LAB_1435db74f;
          puVar20 = (ulonglong *)(lVar11 + uVar16 * 0x18 + 0x10);
        }
        if ((-1 < (longlong)uVar16) && (lVar11 = lVar11 + (uVar16 + 1) * 0x18, lVar11 != 0)) {
          local_108 = *(longlong **)(lVar11 + 8);
        }
      }
LAB_1435db74f:
      if (local_108 == (longlong *)0x0) goto LAB_1435db754;
    }
    if ((char)local_res20[0] != '\0') {
      uVar10 = *(undefined8 *)(local_108[5] + 0xd8);
      if (*param_1 == 0) {
        lVar11 = FUN_1435c8090(param_1[5],&DAT_145b43470);
        *param_1 = *(longlong *)(lVar11 + 0xd8);
      }
      cVar8 = FUN_1435b5020(*param_1,uVar10);
      if (cVar8 == '\0') {
        lVar19 = param_1[5];
        uVar10 = FUN_1435c8e40(&local_128,0x87d,lVar19);
        FUN_1435ccf60(lVar19,uVar10,&DAT_145b15f30);
        piStack_120 = piStack_120 + 6;
        *piStack_120 = *piStack_120 + -1;
        if (*piStack_120 == 0) {
          FUN_14335f920();
        }
        plVar4 = plVar3 + 3;
        *(int *)plVar4 = (int)*plVar4 + -1;
        lVar19 = *plVar4;
        *param_2 = 0;
        if ((int)lVar19 == 0) {
          FUN_14335f920(plVar3);
        }
LAB_1435db4bf:
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
        return param_2;
      }
    }
    uVar12 = (ulonglong)uVar21;
    if ((uVar9 >> 4 != 0) &&
       (FUN_1432f2240(&local_c8,puVar18,uVar21), lVar19 = local_c0, puVar22 = local_c8,
       uVar9 >> 4 != 0)) {
      do {
        puVar18 = local_b0;
        local_d0 = (ulonglong *)FUN_1435db250(param_1,&local_128);
        FUN_1436138f0(&local_c8,puVar18,lVar19 + 1);
        lVar19 = local_c0;
        puVar22 = local_c8;
        if (local_c8 + local_c0 + -1 != (ulonglong *)0x0) {
          uVar17 = *local_d0;
          local_c8[local_c0 + -1] = uVar17;
          piVar14 = (int *)(uVar17 + 0x18);
          *piVar14 = *piVar14 + 1;
        }
        piVar14 = (int *)(local_128 + 0x18);
        *piVar14 = *piVar14 + -1;
        if (*piVar14 == 0) {
          FUN_14335f920();
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    FUN_143614c80(param_1,*(undefined8 *)(local_108[5] + 0xd8));
    plVar4 = plVar3 + 3;
    *(int *)plVar4 = (int)*plVar4 + -1;
    if ((int)*plVar4 == 0) {
      FUN_14335f920(plVar3);
    }
  }
  piVar14 = local_e0;
  uVar12 = *(ulonglong *)(local_e0 + 0x42);
  local_d0 = (ulonglong *)((ulonglong)local_d0 & 0xffffffff00000000);
  (**(code **)(*local_108 + 0x68))
            (local_108,param_3,&local_d0,0,in_stack_fffffffffffffec8 & 0xffffff00,
             in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  if ((char)piVar14[0x2e] == '\0') {
    if (uVar12 < *(ulonglong *)(piVar14 + 0x42)) {
      FUN_1435c8f90(piVar14,1);
    }
    if ((char)piVar14[0x2e] == '\0') {
      plVar3 = *(longlong **)(param_3 + 0x10);
      FUN_143611890(param_1,plVar3);
      if ((char)local_res20[0] == '\0') {
        uVar9 = 0;
        local_100[0] = 0;
        local_f8 = (int *)0x0;
        if (uVar21 != 0) {
          do {
            uVar12 = *puVar22;
            local_128 = CONCAT44(local_128._4_4_,10);
            piStack_120 = (int *)0x0;
            *(int *)(uVar12 + 0x18) = *(int *)(uVar12 + 0x18) + 1;
            local_a8 = 0;
            lStack_a0 = *(longlong *)(local_e0 + 0x76);
            if (lStack_a0 != 0) {
              *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
              *(uint *)(lStack_a0 + 8) = *(uint *)(lStack_a0 + 8) & 0x8fffffff;
            }
            uStack_118._0_4_ = (undefined4)uVar12;
            uStack_118._4_4_ = (undefined4)(uVar12 >> 0x20);
            local_98 = CONCAT44(local_128._4_4_,10);
            uStack_90 = 0;
            uStack_8c = 0;
            local_88 = (undefined4)uStack_118;
            uStack_84 = uStack_118._4_4_;
            uStack_80 = (undefined4)uStack_110;
            uStack_7c = uStack_110._4_4_;
            uStack_118 = uVar12;
            FUN_14360dee0(&local_98);
            FUN_1435aef90(&local_a8,0);
            FUN_1435920c0(&local_128);
            pcVar13 = (char *)FUN_1435dd7a0(param_1,local_res20,local_100);
            if (*pcVar13 == '\0') {
LAB_1435dbe61:
              *param_2 = 0;
              FUN_1434e6250(&local_a8);
              if (9 < ((byte)local_100[0] & 0x1f)) {
                if ((local_100[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_100);
                }
                else {
                  *local_f8 = *local_f8 + -1;
                  if (*local_f8 == 0) {
                    (**(code **)(*DAT_146b62f28 + 0x60))();
                  }
                  local_100[0] = local_100[0] & 0xfffffde0;
                  local_f8 = (int *)0x0;
                  uStack_f0 = 0;
                  local_e8 = 0;
                }
              }
              goto LAB_1435dbfb4;
            }
            pcVar13 = (char *)(**(code **)(*plVar3 + 0x20))(plVar3,local_d8,&local_a8,local_100);
            if (*pcVar13 == '\0') goto LAB_1435dbe61;
            FUN_1434e6250(&local_a8);
            uVar9 = uVar9 + 1;
            puVar22 = puVar22 + 1;
          } while (uVar9 < uVar21);
        }
        if ((char)local_d4 != '\0') {
          FUN_1435db250(param_1,&local_e0);
          iVar15 = local_e0[8];
          piVar14 = local_e0;
          while (local_e0 = piVar14, iVar15 != 0) {
            pcVar13 = (char *)FUN_1435dd7a0(param_1,local_res20,local_100);
            if (*pcVar13 == '\0') {
              piVar1 = piVar14 + 6;
              *piVar1 = *piVar1 + -1;
              iVar15 = *piVar1;
              *param_2 = 0;
              if (iVar15 == 0) {
                FUN_14335f920(piVar14);
              }
              FUN_1434e64f0(local_100);
              FUN_14360abd0(&local_c8);
              return param_2;
            }
            piVar14[6] = piVar14[6] + 1;
            puVar5 = (undefined *)plVar3[6];
            local_128 = local_128 & 0xffffffff00000000;
            piStack_120 = piVar14;
            if (puVar5 == &DAT_1467d9aa0) {
              iVar15 = 8;
LAB_1435dbedb:
              FUN_143614420(plVar3 + 6,iVar15,0,0);
            }
            else if (*(uint *)(puVar5 + 0x18) <= *(uint *)(puVar5 + 8)) {
              iVar15 = *(int *)(puVar5 + 0x30) * 2 + 2;
              goto LAB_1435dbedb;
            }
            FUN_143613ea0(plVar3[6],&local_128,local_100);
            piVar1 = piVar14 + 6;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(piVar14);
            }
            piVar1 = piVar14 + 6;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(piVar14);
            }
            FUN_1435db250(param_1,&local_e0);
            piVar14 = local_e0;
            iVar15 = local_e0[8];
          }
          piVar1 = piVar14 + 6;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(piVar14);
          }
        }
        if (9 < ((byte)local_100[0] & 0x1f)) {
          if ((local_100[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_100);
          }
          else {
            *local_f8 = *local_f8 + -1;
            if (*local_f8 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        goto LAB_1435dbfad;
      }
      local_100[0] = 0;
      local_f8 = (int *)0x0;
      lVar11 = FUN_143360950(*(undefined8 *)(*(longlong *)(piVar14 + 4) + 0x218),"readExternal",0xc,
                             0);
      local_a8 = 10;
      lStack_a0 = 0;
      *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 2;
      local_78[0] = 0;
      local_70 = *(longlong *)(local_e0 + 0x76);
      if (local_70 != 0) {
        *(uint *)(local_70 + 8) = *(int *)(local_70 + 8) + 1U & 0x8fffffff;
      }
      local_98._0_4_ = (undefined4)lVar11;
      local_98._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
      local_68 = 10;
      uStack_64 = uStack_a4;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = (undefined4)local_98;
      uStack_54 = local_98._4_4_;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      local_98 = lVar11;
      FUN_1435aef90(local_78,0);
      piVar14 = (int *)(lVar11 + 0x18);
      *piVar14 = *piVar14 + -1;
      if (*piVar14 == 0) {
        FUN_14335f920(lVar11);
      }
      piVar14 = (int *)(lVar11 + 0x18);
      *piVar14 = *piVar14 + -1;
      if (*piVar14 == 0) {
        FUN_14335f920(lVar11);
      }
      uStack_118 = param_1[4];
      local_128 = CONCAT44(local_128._4_4_,0xc);
      piStack_120 = (int *)0x0;
      if (uStack_118 != 0) {
        *(uint *)(uStack_118 + 8) = *(int *)(uStack_118 + 8) + 1U & 0x8fffffff;
      }
      pcVar13 = (char *)(**(code **)(*plVar3 + 0x58))
                                  (plVar3,local_res20,local_78,local_100,1,&local_128);
      if (*pcVar13 != '\0') {
        uVar9 = (uint)local_128 & 0x1f;
        if (9 < uVar9) {
          if (((uint)local_128 >> 9 & 1) == 0) {
            if (uVar9 == 10) {
              piVar14 = (int *)(uStack_118 + 0x18);
              *piVar14 = *piVar14 + -1;
              if (*piVar14 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar9 == 0xb) || (uVar9 == 0xc)) {
              uVar12 = uStack_118;
              if ((uStack_118 & 1) == 0) {
LAB_1435dbccf:
                if ((uVar12 != 0) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                uStack_118 = uStack_118 - 1;
              }
            }
            else if (uVar9 - 0xd < 2) {
              uVar12 = uStack_110;
              if ((uStack_110 & 1) == 0) goto LAB_1435dbccf;
              uStack_110 = uStack_110 - 1;
            }
          }
          else {
            *piStack_120 = *piStack_120 + -1;
            if (*piStack_120 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_128 = local_128 & 0xfffffffffffffde0;
            piStack_120 = (int *)0x0;
            uStack_118 = 0;
            uStack_110 = 0;
          }
        }
        FUN_1434e6250(local_78);
        FUN_1434e64f0(local_100);
LAB_1435dbfad:
        *param_2 = 1;
LAB_1435dbfb4:
        FUN_14360abd0(&local_c8);
        return param_2;
      }
      uVar9 = (uint)local_128 & 0x1f;
      *param_2 = 0;
      if (9 < uVar9) {
        if (((uint)local_128 >> 9 & 1) == 0) {
          if (uVar9 == 10) {
            piVar14 = (int *)(uStack_118 + 0x18);
            *piVar14 = *piVar14 + -1;
            if (*piVar14 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar9 == 0xb) || (uVar9 == 0xc)) {
            uVar12 = uStack_118;
            if ((uStack_118 & 1) == 0) {
LAB_1435dbb24:
              if ((uVar12 != 0) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              uStack_118 = uStack_118 - 1;
            }
          }
          else if (uVar9 - 0xd < 2) {
            uVar12 = uStack_110;
            if ((uStack_110 & 1) == 0) goto LAB_1435dbb24;
            uStack_110 = uStack_110 - 1;
          }
        }
        else {
          *piStack_120 = *piStack_120 + -1;
          if (*piStack_120 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_128 = local_128 & 0xfffffffffffffde0;
          piStack_120 = (int *)0x0;
          uStack_118 = 0;
          uStack_110 = 0;
        }
      }
      FUN_1434e6250(local_78);
      uVar9 = local_100[0] & 0x1f;
      if (9 < uVar9) {
        if ((local_100[0] >> 9 & 1) == 0) {
          if (uVar9 == 10) {
            piVar14 = (int *)(uStack_f0 + 0x18);
            *piVar14 = *piVar14 + -1;
            if (*piVar14 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar9 == 0xb) || (uVar9 == 0xc)) {
            uVar12 = uStack_f0;
            if ((uStack_f0 & 1) == 0) {
LAB_1435dbbe0:
              if ((uVar12 != 0) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              uStack_f0 = uStack_f0 - 1;
            }
          }
          else if (uVar9 - 0xd < 2) {
            uVar12 = local_e8;
            if ((local_e8 & 1) == 0) goto LAB_1435dbbe0;
            local_e8 = local_e8 - 1;
          }
        }
        else {
          *local_f8 = *local_f8 + -1;
          if (*local_f8 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_100[0] = local_100[0] & 0xfffffde0;
          local_f8 = (int *)0x0;
          uStack_f0 = 0;
          local_e8 = 0;
        }
      }
      puVar18 = puVar22 + lVar19 + -1;
      if (lVar19 != 0) {
        do {
          piVar14 = (int *)(*puVar18 + 0x18);
          *piVar14 = *piVar14 + -1;
          if (*piVar14 == 0) {
            FUN_14335f920();
          }
          puVar18 = puVar18 + -1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar22);
        return param_2;
      }
      goto LAB_1435db968;
    }
  }
  *param_2 = 0;
  puVar18 = puVar22 + lVar19 + -1;
  for (; lVar19 != 0; lVar19 = lVar19 + -1) {
    piVar14 = (int *)(*puVar18 + 0x18);
    *piVar14 = *piVar14 + -1;
    if (*piVar14 == 0) {
      FUN_14335f920();
    }
    puVar18 = puVar18 + -1;
  }
LAB_1435db968:
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar22);
  return param_2;
}



// FUNCTION 1435dbff0 FUN_1435dbff0 body=823 status=ok
// SIG undefined FUN_1435dbff0(void)

undefined1 * FUN_1435dbff0(longlong param_1,undefined1 *param_2,ulonglong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 local_res20 [2];
  undefined8 *local_68;
  longlong local_60;
  char *local_58;
  uint local_50 [2];
  int *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar8 = FUN_1435dafe0();
  uVar15 = uVar8 >> 1;
  if ((uVar8 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (*(ulonglong *)(param_1 + 0x68) <= (ulonglong)uVar15) {
      uVar10 = FUN_1435c8e40(&local_68,0x5e2,uVar3);
      FUN_1435ccf60(uVar3,uVar10,&DAT_145b16b90);
      piVar1 = (int *)(local_60 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
    FUN_1434f0700(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar15 * 8));
    *param_2 = 1;
    return param_2;
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x248) + 0xd8);
  lVar11 = *(longlong *)(lVar4 + 0xa0);
  if (lVar11 == 0) {
    local_res20[0] = 0x152;
    plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
    lVar11 = (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(lVar4 + 0x80),local_res20);
  }
  else {
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar11 + 0x28);
  }
  uVar14 = 0;
  uVar12 = uVar14;
  if (lVar11 != 0) {
    uVar12 = FUN_1434b64a0(lVar11,lVar4);
  }
  uVar6 = *param_3;
  if (uVar12 != uVar6) {
    if (uVar6 != 0) {
      if ((uVar6 & 1) == 0) {
        if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_3 = uVar6 - 1;
      }
    }
    *param_3 = uVar12;
  }
  FUN_143611890(param_1,*param_3);
  local_50[0] = 0;
  local_48 = (int *)0x0;
  FUN_1435db250(param_1,&local_68);
  iVar2 = *(int *)(local_68 + 4);
  puVar7 = local_68;
  while (iVar2 != 0) {
    local_68 = puVar7;
    pcVar13 = (char *)FUN_1435dd7a0(param_1,local_res20,local_50);
    if (*pcVar13 == '\0') {
      piVar1 = (int *)(puVar7 + 3);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      *param_2 = 0;
      if (iVar2 == 0) {
        FUN_14335f920(puVar7);
      }
      uVar8 = local_50[0] & 0x1f;
      if (uVar8 < 10) {
        return param_2;
      }
      if ((local_50[0] >> 9 & 1) != 0) goto LAB_1435dc2bc;
      goto LAB_1435dc282;
    }
    uVar9 = strtoul((char *)*puVar7,&local_58,10);
    FUN_1434b4fe0(*param_3 + 0x40,uVar9,local_50);
    piVar1 = (int *)(puVar7 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar7);
    }
    FUN_1435db250(param_1,&local_68);
    puVar7 = local_68;
    iVar2 = *(int *)(local_68 + 4);
  }
  piVar1 = (int *)(puVar7 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar7);
  }
  if (uVar15 != 0) {
    do {
      pcVar13 = (char *)FUN_1435dd7a0(param_1,local_res20,local_50);
      if (*pcVar13 == '\0') {
        uVar8 = local_50[0] & 0x1f;
        *param_2 = 0;
        if (uVar8 < 10) {
          return param_2;
        }
        if ((local_50[0] >> 9 & 1) == 0) goto LAB_1435dc282;
        goto LAB_1435dc2bc;
      }
      FUN_1434b4fe0(*param_3 + 0x40,uVar14,local_50);
      uVar8 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar8;
    } while (uVar8 < uVar15);
  }
  uVar8 = local_50[0] & 0x1f;
  *param_2 = 1;
  if (uVar8 < 10) {
    return param_2;
  }
  if ((local_50[0] >> 9 & 1) != 0) {
LAB_1435dc2bc:
    *local_48 = *local_48 + -1;
    if (*local_48 != 0) {
      return param_2;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))();
    return param_2;
  }
  if (uVar8 == 10) goto LAB_1435dc2f8;
  if ((uVar8 != 0xb) && (uVar8 != 0xc)) {
    if (1 < uVar8 - 0xd) {
      return param_2;
    }
    bVar16 = (local_38 & 1) == 0;
    goto LAB_1435dc2db;
  }
LAB_1435dc2d4:
  bVar16 = (local_40 & 1) == 0;
  local_38 = local_40;
LAB_1435dc2db:
  if (((bVar16) && (local_38 != 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
LAB_1435dc282:
  if (uVar8 == 10) {
LAB_1435dc2f8:
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return param_2;
    }
    FUN_14335f920();
    return param_2;
  }
  if ((uVar8 != 0xb) && (uVar8 != 0xc)) {
    if (1 < uVar8 - 0xd) {
      return param_2;
    }
    bVar16 = (local_38 & 1) == 0;
    goto LAB_1435dc2db;
  }
  goto LAB_1435dc2d4;
}



// FUNCTION 1435dc330 FUN_1435dc330 body=409 status=ok
// SIG undefined FUN_1435dc330(void)

void FUN_1435dc330(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_res18 [2];
  ulonglong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uVar5 = FUN_1435dafe0();
  if ((uVar5 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if ((ulonglong)(uVar5 >> 1) < *(ulonglong *)(param_1 + 0x68)) {
      FUN_1435903c0(param_2,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar5 >> 1) * 8));
    }
    else {
      uVar6 = FUN_1435c8e40(&local_38,0x5e2,uVar2);
      FUN_1435ccf60(uVar2,uVar6,&DAT_145b16b90);
      piVar1 = (int *)(lStack_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x2e8) + 0xd8);
    lVar7 = *(longlong *)(lVar3 + 0xa0);
    if (lVar7 == 0) {
      local_res18[0] = 0x152;
      plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x98) + 0x48);
      lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(lVar3 + 0x80),local_res18);
    }
    else {
      *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar7 + 0x28);
    }
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_143579270(lVar7,lVar3);
    }
    FUN_143611890(param_1,uVar8);
    uStack_20 = 0;
    local_28 = 0xc;
    local_38 = uVar8;
    if (&local_28 != param_2) {
      if (uVar8 != 0) {
        *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
      }
      FUN_143603d30(param_2);
      *param_2 = local_28;
      param_2[1] = uStack_24;
      param_2[2] = (undefined4)uStack_20;
      param_2[3] = uStack_20._4_4_;
      *(ulonglong *)(param_2 + 4) = local_38;
      *(longlong *)(param_2 + 6) = lStack_30;
    }
    if ((((uVar8 & 1) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
      FUN_1434ef880(uVar8);
    }
    FUN_143579320(uVar8,uVar5 >> 1);
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),*(undefined8 *)(uVar8 + 0x50),uVar5 >> 1);
  }
  return;
}



// FUNCTION 1435dc4d0 FUN_1435dc4d0 body=355 status=ok
// SIG undefined FUN_1435dc4d0(void)

longlong * FUN_1435dc4d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_res18 [2];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar3 = FUN_1435dafe0();
  if ((uVar3 & 1) != 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar5 = FUN_1435c8090(*(undefined8 *)(param_1 + 0x28),&DAT_145b15ff0);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar5 + 0xd8);
    }
    lVar5 = *(longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar5 + 0xa0);
    if (lVar6 == 0) {
      local_res18[0] = 0x152;
      plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x98) + 0x48);
      lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar5 + 0x80),local_res18);
    }
    else {
      *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(lVar6 + 0x28);
    }
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1434c4f80(lVar6,lVar5);
    }
    FUN_143611890(param_1,lVar5);
    uVar7 = FUN_1435db180(param_1);
    *param_2 = lVar5;
    *(undefined8 *)(lVar5 + 0x48) = uVar7;
    return param_2;
  }
  uVar3 = uVar3 >> 1 & 0x7fffffff;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x68) <= uVar3) {
    uVar4 = FUN_1435c8e40(local_18,0x5e2,uVar7);
    FUN_1435ccf60(uVar7,uVar4,&DAT_145b16b90);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar3 * 8);
  *param_2 = lVar5;
  if (lVar5 != 0) {
    *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
  }
  return param_2;
}



// FUNCTION 1435dc640 FUN_1435dc640 body=991 status=ok
// SIG undefined FUN_1435dc640(void)

undefined1 * FUN_1435dc640(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  char local_res20 [8];
  undefined1 local_88;
  undefined1 local_87 [7];
  undefined1 local_80 [8];
  longlong local_78;
  uint local_70 [2];
  int *local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  uint local_50 [2];
  int *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar3 = FUN_1435dafe0();
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if ((ulonglong)(uVar3 >> 1) < *(ulonglong *)(param_1 + 0x68)) {
      FUN_1434f0700(param_3,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar3 >> 1) * 8));
      *param_2 = 1;
      return param_2;
    }
    uVar5 = FUN_1435c8e40(local_80,0x5e2,uVar2);
    FUN_1435ccf60(uVar2,uVar5,&DAT_145b16b90);
    piVar1 = (int *)(local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar6 = FUN_1435c8090(*(undefined8 *)(param_1 + 0x28),&DAT_145b433b0);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xd8);
    }
    iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),local_res20,1);
    if (iVar4 == 1) {
      puVar7 = (undefined8 *)
               FUN_143611580(local_80,*(undefined8 *)(param_1 + 0x18),local_res20[0] != '\0');
      FUN_1434e68a0(param_3,*puVar7);
      FUN_143611890(param_1,*param_3);
      uVar10 = 0;
      local_50[0] = 0;
      local_70[0] = 0;
      local_68 = (int *)0x0;
      local_48 = (int *)0x0;
      if (uVar3 >> 1 != 0) {
        do {
          pcVar8 = (char *)FUN_1435dd7a0(param_1,&local_88,local_50);
          if (*pcVar8 == '\0') {
            uVar3 = local_70[0] & 0x1f;
            *param_2 = 0;
            if (uVar3 < 10) goto joined_r0x0001435dc9a4;
            if ((local_70[0] >> 9 & 1) != 0) {
              *local_68 = *local_68 + -1;
              if (*local_68 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
              local_70[0] = local_70[0] & 0xfffffde0;
              local_68 = (int *)0x0;
              uStack_60 = 0;
              local_58 = 0;
              goto joined_r0x0001435dc9a4;
            }
            if (uVar3 == 10) {
              piVar1 = (int *)(uStack_60 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
              goto joined_r0x0001435dc9a4;
            }
            if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
              uVar9 = uStack_60;
              if ((uStack_60 & 1) != 0) {
                uStack_60 = uStack_60 - 1;
                goto joined_r0x0001435dc9a4;
              }
            }
            else {
              if (1 < uVar3 - 0xd) goto joined_r0x0001435dc9a4;
              uVar9 = local_58;
              if ((local_58 & 1) != 0) {
                local_58 = local_58 - 1;
                goto joined_r0x0001435dc9a4;
              }
            }
            if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
            goto joined_r0x0001435dc9a4;
          }
          pcVar8 = (char *)FUN_1435dd7a0(param_1,local_87,local_70);
          if (*pcVar8 == '\0') {
            *param_2 = 0;
            goto joined_r0x0001435dc846;
          }
          (**(code **)(*(longlong *)*param_3 + 0x90))((longlong *)*param_3,local_50,local_70,0);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar3 >> 1);
      }
      *param_2 = 1;
joined_r0x0001435dc846:
      uVar3 = local_70[0] & 0x1f;
      if (9 < uVar3) {
        if ((local_70[0] >> 9 & 1) == 0) {
          if (uVar3 == 10) {
            piVar1 = (int *)(uStack_60 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
              uVar9 = uStack_60;
              if ((uStack_60 & 1) != 0) {
                uStack_60 = uStack_60 - 1;
                goto joined_r0x0001435dc9a4;
              }
            }
            else {
              if (1 < uVar3 - 0xd) goto joined_r0x0001435dc9a4;
              uVar9 = local_58;
              if ((local_58 & 1) != 0) {
                local_58 = local_58 - 1;
                goto joined_r0x0001435dc9a4;
              }
            }
            if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_68 = *local_68 + -1;
          if (*local_68 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_70[0] = local_70[0] & 0xfffffde0;
          local_68 = (int *)0x0;
          uStack_60 = 0;
          local_58 = 0;
        }
      }
joined_r0x0001435dc9a4:
      uVar3 = local_50[0] & 0x1f;
      if (uVar3 < 10) {
        return param_2;
      }
      if ((local_50[0] >> 9 & 1) != 0) {
        *local_48 = *local_48 + -1;
        if (*local_48 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar3 == 10) {
        piVar1 = (int *)(local_40 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if (((uVar3 != 0xb) && (uVar3 != 0xc)) && (local_40 = local_38, 1 < uVar3 - 0xd)) {
        return param_2;
      }
      if ((local_40 & 1) != 0) {
        return param_2;
      }
      if (local_40 == 0) {
        return param_2;
      }
      if ((*(uint *)(local_40 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435dca30 FUN_1435dca30 body=449 status=ok
// SIG undefined FUN_1435dca30(void)

longlong * FUN_1435dca30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 *local_58 [6];
  
  uVar3 = FUN_1435dafe0();
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((uVar3 & 1) == 0) {
    if (*(ulonglong *)(param_1 + 0x68) <= (ulonglong)(uVar3 >> 1)) {
      uVar5 = FUN_1435c8e40(local_68,0x5e2,lVar2);
      FUN_1435ccf60(lVar2,uVar5,&DAT_145b16b90);
      piVar1 = (int *)(local_60 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar3 >> 1) * 8);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = FUN_1435c8090(lVar2,&DAT_145b16610);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar6 + 0xd8);
    }
    uVar3 = uVar3 >> 1;
    FUN_1432c5960(local_58,DAT_146b62f28);
    Scaleform::StringBuffer::Resize(local_58,uVar3);
    puVar7 = &DAT_145af3922;
    if (local_58[0] != (undefined1 *)0x0) {
      puVar7 = local_58[0];
    }
    iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),puVar7,uVar3);
    if (iVar4 == 0) {
      *param_2 = 0;
    }
    else {
      puVar7 = &DAT_145af3922;
      if (local_58[0] != (undefined1 *)0x0) {
        puVar7 = local_58[0];
      }
      local_res20 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),puVar7,uVar3)
      ;
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      FUN_1434ce0d0(*(undefined8 *)(param_1 + 0x10),&local_res18,*(undefined8 *)(param_1 + 0x10),
                    &local_res20,0);
      FUN_143611890(param_1,local_res18);
      *param_2 = local_res18;
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    Scaleform::StringBuffer::~StringBuffer(local_58);
  }
  return param_2;
}



// FUNCTION 1435dcc00 FUN_1435dcc00 body=444 status=ok
// SIG undefined FUN_1435dcc00(void)

longlong * FUN_1435dcc00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char local_res18 [8];
  uint local_res20 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar3 = FUN_1435dafe0();
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar8 = (ulonglong)(uVar3 >> 1);
  if ((uVar3 & 1) == 0) {
    if (uVar8 < *(ulonglong *)(param_1 + 0x68)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar8 * 8);
      *param_2 = lVar6;
      if (lVar6 == 0) {
        return param_2;
      }
      *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
    uVar5 = FUN_1435c8e40(local_28,0x5e2,lVar6);
    FUN_1435ccf60(lVar6,uVar5,&DAT_145b16b90);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),local_res18,1);
    if (iVar4 == 1) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x268) + 0xd8);
      lVar7 = *(longlong *)(lVar6 + 0xa0);
      if (lVar7 == 0) {
        local_res20[0] = 0x152;
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x98) + 0x48);
        lVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar6 + 0x80),local_res20);
      }
      else {
        *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar7 + 0x28);
      }
      if (lVar7 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_143620f70(lVar7,lVar6,uVar8,local_res18[0] != '\0');
      }
      FUN_143611890(param_1,lVar6);
      if (uVar3 >> 1 != 0) {
        lVar7 = 0;
        do {
          iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                            (*(undefined8 **)(param_1 + 0x30),local_res20,4);
          if (iVar4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (local_res20[0] & 0xff0000 | local_res20[0] >> 0x10) >> 8 |
                    (local_res20[0] << 0x10 | local_res20[0] & 0xff00) << 8;
          }
          *(uint *)(lVar7 + *(longlong *)(lVar6 + 0x58)) = uVar3;
          lVar7 = lVar7 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      *param_2 = lVar6;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435dcdd0 FUN_1435dcdd0 body=444 status=ok
// SIG undefined FUN_1435dcdd0(void)

longlong * FUN_1435dcdd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char local_res18 [8];
  uint local_res20 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar3 = FUN_1435dafe0();
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar8 = (ulonglong)(uVar3 >> 1);
  if ((uVar3 & 1) == 0) {
    if (uVar8 < *(ulonglong *)(param_1 + 0x68)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar8 * 8);
      *param_2 = lVar6;
      if (lVar6 == 0) {
        return param_2;
      }
      *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
    uVar5 = FUN_1435c8e40(local_28,0x5e2,lVar6);
    FUN_1435ccf60(lVar6,uVar5,&DAT_145b16b90);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),local_res18,1);
    if (iVar4 == 1) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x270) + 0xd8);
      lVar7 = *(longlong *)(lVar6 + 0xa0);
      if (lVar7 == 0) {
        local_res20[0] = 0x152;
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x98) + 0x48);
        lVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar6 + 0x80),local_res20);
      }
      else {
        *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar7 + 0x28);
      }
      if (lVar7 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_143621f70(lVar7,lVar6,uVar8,local_res18[0] != '\0');
      }
      FUN_143611890(param_1,lVar6);
      if (uVar3 >> 1 != 0) {
        lVar7 = 0;
        do {
          iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                            (*(undefined8 **)(param_1 + 0x30),local_res20,4);
          if (iVar4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (local_res20[0] & 0xff0000 | local_res20[0] >> 0x10) >> 8 |
                    (local_res20[0] << 0x10 | local_res20[0] & 0xff00) << 8;
          }
          *(uint *)(lVar7 + *(longlong *)(lVar6 + 0x58)) = uVar3;
          lVar7 = lVar7 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      *param_2 = lVar6;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435dcfa0 FUN_1435dcfa0 body=400 status=ok
// SIG undefined FUN_1435dcfa0(void)

longlong * FUN_1435dcfa0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char local_res18 [8];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  uVar3 = FUN_1435dafe0();
  uVar9 = (ulonglong)(uVar3 >> 1);
  if ((uVar3 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    if (*(ulonglong *)(param_1 + 0x68) <= uVar9) {
      uVar5 = FUN_1435c8e40(local_38,0x5e2,uVar10);
      FUN_1435ccf60(uVar10,uVar5,&DAT_145b16b90);
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar9 * 8);
    *param_2 = lVar8;
    if (lVar8 != 0) {
      *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x28);
    iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),local_res18,1);
    if (iVar4 != 1) {
      *param_2 = 0;
      return param_2;
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x278) + 0xd8);
    lVar6 = *(longlong *)(lVar8 + 0xa0);
    if (lVar6 == 0) {
      local_res20[0] = 0x152;
      plVar2 = *(longlong **)(*(longlong *)(lVar8 + 0x98) + 0x48);
      lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar8 + 0x80),local_res20);
    }
    else {
      *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(lVar6 + 0x28);
    }
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = FUN_143622f70(lVar6,lVar8,uVar9,local_res18[0] != '\0');
    }
    FUN_143611890(param_1,lVar7);
    lVar8 = 0;
    if (uVar3 >> 1 != 0) {
      do {
        uVar10 = FUN_1435db180(param_1);
        *(undefined8 *)(lVar8 + *(longlong *)(lVar7 + 0x58)) = uVar10;
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + 8;
      } while (uVar9 != 0);
    }
    *param_2 = lVar7;
  }
  return param_2;
}



// FUNCTION 1435dd140 FUN_1435dd140 body=1611 status=ok
// SIG undefined FUN_1435dd140(void)

undefined1 * FUN_1435dd140(longlong param_1,undefined1 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  char local_res20 [8];
  undefined1 local_b8 [8];
  ulonglong local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  longlong lStack_98;
  uint local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uVar6 = FUN_1435dafe0();
  uVar20 = uVar6 >> 1;
  uVar14 = (ulonglong)uVar20;
  if ((uVar6 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (uVar14 < *(ulonglong *)(param_1 + 0x68)) {
      FUN_1435903c0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar14 * 8));
      *param_2 = 1;
      return param_2;
    }
    uVar8 = FUN_1435c8e40(&local_a0,0x5e2,uVar2);
    FUN_1435ccf60(uVar2,uVar8,&DAT_145b16b90);
    piVar1 = (int *)(lStack_98 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_b0 = *(ulonglong *)(param_1 + 0x28);
    iVar7 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),local_res20,1);
    if (iVar7 == 1) {
      local_b8[0] = local_res20[0] != '\0';
      FUN_1435db250(param_1,&local_a0);
      plVar9 = local_a0;
      uVar21 = 0;
      uVar19 = uVar21;
      do {
        uVar13 = uVar19 + 1;
        if (*(char *)(*local_a0 + uVar19) != "String"[uVar19]) {
          if ((int)local_a0[4] == 0) goto LAB_1435dd43a;
          uVar19 = 0;
          lVar11 = *(longlong *)(local_b0 + 0x2f0);
          if (lVar11 == 0) goto LAB_1435dd43a;
          uVar13 = *(ulonglong *)(lVar11 + 8);
          uVar18 = *(uint *)((longlong)local_a0 + 0x1c) & uVar13;
          lVar3 = uVar18 * 3 + 2;
          puVar17 = (ulonglong *)(lVar11 + lVar3 * 8);
          uVar10 = uVar21;
          if ((*(longlong *)(lVar11 + lVar3 * 8) == -2) ||
             (uVar15 = uVar18, (*(uint *)(puVar17[1] + 0x1c) & uVar13) != uVar18))
          goto LAB_1435dd435;
          goto LAB_1435dd3f0;
        }
        uVar19 = uVar13;
      } while (uVar13 != 7);
      FUN_143611750(&local_b0,*(undefined8 *)(*(longlong *)(local_b0 + 0x280) + 0xd8),uVar14,
                    local_res20[0] != '\0');
      uVar14 = local_b0;
      FUN_143611890(param_1,local_b0);
      uStack_68 = 0;
      local_70 = 0xc;
      local_b0 = uVar14;
      if (&local_70 != param_3) {
        if (uVar14 != 0) {
          *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
        }
        FUN_143603d30(param_3);
        *param_3 = local_70;
        param_3[1] = uStack_6c;
        param_3[2] = (undefined4)uStack_68;
        param_3[3] = uStack_68._4_4_;
        *(ulonglong *)(param_3 + 4) = uVar14;
        *(undefined8 *)(param_3 + 6) = uStack_a8;
      }
      if ((((uVar14 & 1) == 0) && (uVar14 != 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
        FUN_1434ef880(uVar14);
      }
      if (uVar20 != 0) {
        uVar19 = (ulonglong)uVar20;
        do {
          plVar9 = (longlong *)FUN_1435db250(param_1,&local_b0);
          lVar11 = *plVar9;
          if (lVar11 != 0) {
            *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          }
          lVar3 = *(longlong *)(uVar14 + 0x58);
          if (lVar11 != 0) {
            *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          }
          lVar4 = *(longlong *)(lVar3 + uVar21);
          if (lVar4 != 0) {
            piVar1 = (int *)(lVar4 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          *(longlong *)(lVar3 + uVar21) = lVar11;
          if (lVar11 != 0) {
            piVar1 = (int *)(lVar11 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(lVar11);
            }
          }
          piVar1 = (int *)(local_b0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          uVar21 = uVar21 + 8;
          uVar19 = uVar19 - 1;
          plVar9 = local_a0;
        } while (uVar19 != 0);
      }
      *param_2 = 1;
      goto LAB_1435dd751;
    }
  }
  *param_2 = 0;
  return param_2;
LAB_1435dd3f0:
  uVar10 = uVar19;
  if (((*(uint *)((longlong)puVar17[1] + 0x1c) & uVar13) != uVar18) ||
     ((longlong *)puVar17[1] != local_a0)) {
    uVar15 = *puVar17;
    if (uVar15 == 0xffffffffffffffff) goto LAB_1435dd435;
    puVar17 = (ulonglong *)(lVar11 + uVar15 * 0x18 + 0x10);
    goto LAB_1435dd3f0;
  }
  if ((-1 < (longlong)uVar15) && (lVar11 = lVar11 + (uVar15 + 1) * 0x18, lVar11 != 0)) {
    uVar10 = *(ulonglong *)(lVar11 + 8);
  }
LAB_1435dd435:
  if (uVar10 == 0) {
LAB_1435dd43a:
    uVar10 = FUN_143610360(local_b0);
  }
  local_a0 = *(longlong **)(uVar10 + 0x28);
  plVar5 = *(longlong **)(*(longlong *)(local_b0 + 0x260) + 0xd8);
  if (plVar5[0x15] == 0) {
    (**(code **)(*plVar5 + 0x50))(plVar5);
  }
  lVar11 = FUN_14361f050(plVar5[0x15],local_a0);
  FUN_1436117f0(&local_a0,*(undefined8 *)(lVar11 + 0xd8),uVar14,local_b8[0]);
  plVar5 = local_a0;
  FUN_143611890(param_1,local_a0);
  uStack_68 = 0;
  local_70 = 0xc;
  local_a0 = plVar5;
  if (&local_70 != param_3) {
    if (plVar5 != (longlong *)0x0) {
      *(uint *)(plVar5 + 1) = (int)plVar5[1] + 1U & 0x8fffffff;
    }
    FUN_143603d30(param_3);
    *param_3 = local_70;
    param_3[1] = uStack_6c;
    param_3[2] = (undefined4)uStack_68;
    param_3[3] = uStack_68._4_4_;
    *(longlong **)(param_3 + 4) = plVar5;
    *(longlong *)(param_3 + 6) = lStack_98;
  }
  if (((((ulonglong)plVar5 & 1) == 0) && (plVar5 != (longlong *)0x0)) &&
     ((*(uint *)(plVar5 + 1) & 0x3fffff) != 0)) {
    *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) - 1;
    FUN_1434ef880(plVar5);
  }
  local_90 = 0;
  uStack_88 = (int *)0x0;
  uVar14 = uVar21;
  if (uVar20 != 0) {
    do {
      pcVar12 = (char *)FUN_1435dd7a0(param_1,local_b8,&local_90);
      if (*pcVar12 == '\0') {
        uVar6 = local_90 & 0x1f;
        *param_2 = 0;
        if (9 < uVar6) {
          if ((local_90 >> 9 & 1) == 0) {
            if (uVar6 == 10) {
              piVar1 = (int *)(local_80 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else {
              if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
                uVar14 = local_80;
                if ((local_80 & 1) != 0) {
                  local_80 = local_80 - 1;
                  goto LAB_1435dd6d9;
                }
              }
              else {
                if (1 < uVar6 - 0xd) goto LAB_1435dd6d9;
                uVar14 = uStack_78;
                if ((uStack_78 & 1) != 0) {
                  uStack_78 = uStack_78 - 1;
                  goto LAB_1435dd6d9;
                }
              }
              if ((uVar14 != 0) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *uStack_88 = *uStack_88 + -1;
            if (*uStack_88 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_90 = local_90 & 0xfffffde0;
            uStack_88 = (int *)0x0;
            local_80 = 0;
            uStack_78 = 0;
          }
        }
LAB_1435dd6d9:
        plVar5 = plVar9 + 3;
        *(int *)plVar5 = (int)*plVar5 + -1;
        if ((int)*plVar5 != 0) {
          return param_2;
        }
        FUN_14335f920(plVar9);
        return param_2;
      }
      puVar16 = (uint *)(plVar5[0xb] + uVar21);
      if (&local_90 != puVar16) {
        uVar6 = local_90 & 0x1f;
        if (9 < uVar6) {
          if ((local_90 >> 9 & 1) == 0) {
            if (uVar6 == 10) {
              *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + 1;
            }
            else if ((10 < uVar6) &&
                    (((uVar19 = local_80, uVar6 < 0xd || (uVar19 = uStack_78, uVar6 < 0xf)) &&
                     (uVar19 != 0)))) {
              *(int *)(uVar19 + 8) = *(int *)(uVar19 + 8) + 1;
              *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) & 0x8fffffff;
            }
          }
          else {
            *uStack_88 = *uStack_88 + 1;
          }
        }
        FUN_143603d30(puVar16);
        *puVar16 = local_90;
        puVar16[1] = uStack_8c;
        puVar16[2] = (uint)uStack_88;
        puVar16[3] = uStack_88._4_4_;
        *(ulonglong *)(puVar16 + 4) = local_80;
        *(ulonglong *)(puVar16 + 6) = uStack_78;
      }
      uVar6 = (int)uVar14 + 1;
      uVar21 = uVar21 + 0x20;
      uVar14 = (ulonglong)uVar6;
    } while (uVar6 < uVar20);
  }
  *param_2 = 1;
  uVar6 = local_90 & 0x1f;
  if (9 < uVar6) {
    if ((local_90 >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)(local_80 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          uVar14 = local_80;
          if ((local_80 & 1) != 0) {
            local_80 = local_80 - 1;
            goto LAB_1435dd751;
          }
        }
        else {
          if (1 < uVar6 - 0xd) goto LAB_1435dd751;
          uVar14 = uStack_78;
          if ((uStack_78 & 1) != 0) {
            uStack_78 = uStack_78 - 1;
            goto LAB_1435dd751;
          }
        }
        if ((uVar14 != 0) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *uStack_88 = *uStack_88 + -1;
      if (*uStack_88 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_90 = local_90 & 0xfffffde0;
      uStack_88 = (int *)0x0;
      local_80 = 0;
      uStack_78 = 0;
    }
  }
LAB_1435dd751:
  plVar5 = plVar9 + 3;
  *(int *)plVar5 = (int)*plVar5 + -1;
  if ((int)*plVar5 == 0) {
    FUN_14335f920(plVar9);
  }
  return param_2;
}



// FUNCTION 1435dd7a0 FUN_1435dd7a0 body=582 status=ok
// SIG undefined FUN_1435dd7a0(void)

undefined1 * FUN_1435dd7a0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  ulonglong local_res20;
  ulonglong local_28 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),local_res8,1);
  if (iVar4 != 1) {
    *param_2 = 0;
    return param_2;
  }
  switch(local_res8[0]) {
  case 0:
    FUN_1435168c0(param_3);
    break;
  case 1:
    FUN_1434f0650(param_3);
    break;
  case 2:
    FUN_1434f05f0(param_3,0);
    break;
  case 3:
    FUN_1434f05f0(param_3,0x140000001);
    break;
  case 4:
    iVar4 = FUN_1435dafe0(param_1);
    FUN_1434f0780(param_3,(iVar4 << 3) >> 3);
    break;
  case 5:
    uVar8 = FUN_1435db180(param_1);
    FUN_1434f06a0(param_3,uVar8);
    break;
  case 6:
    uVar5 = FUN_1435db250(param_1,&local_res20);
    FUN_143590250(param_3,uVar5);
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    break;
  case 8:
    puVar6 = (undefined8 *)FUN_1435dc4d0(param_1,&local_res20);
    goto LAB_1435dd8aa;
  case 9:
    local_28[0] = 0;
    pcVar7 = (char *)FUN_1435dbff0(param_1,&local_res20,local_28);
    goto LAB_1435dd98e;
  case 10:
    FUN_1435db3a0(param_1,&local_res20,param_3);
    break;
  case 0xb:
    puVar6 = (undefined8 *)FUN_1435dca30(param_1,&local_res20);
    goto LAB_1435dd8aa;
  case 0xc:
    FUN_1435dc330(param_1,param_3);
    break;
  case 0xd:
    puVar6 = (undefined8 *)FUN_1435dcc00(param_1,&local_res20);
    goto LAB_1435dd8aa;
  case 0xe:
    puVar6 = (undefined8 *)FUN_1435dcdd0(param_1,&local_res20);
    goto LAB_1435dd8aa;
  case 0xf:
    puVar6 = (undefined8 *)FUN_1435dcfa0(param_1,&local_res20);
LAB_1435dd8aa:
    FUN_1435903c0(param_3,*puVar6);
    if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
       ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
LAB_1435dd9be:
      FUN_1434ef880(local_res20);
    }
    break;
  case 0x10:
    FUN_1435dd140(param_1,&local_res20,param_3);
    break;
  case 0x11:
    local_28[0] = 0;
    pcVar7 = (char *)FUN_1435dc640(param_1,&local_res20,local_28);
LAB_1435dd98e:
    uVar3 = local_28[0];
    if (*pcVar7 != '\0') {
      FUN_1435903c0(param_3,local_28[0]);
    }
    if (((uVar3 == 0) || ((uVar3 & 1) != 0)) || ((*(uint *)(uVar3 + 8) & 0x3fffff) == 0)) break;
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    local_res20 = uVar3;
    goto LAB_1435dd9be;
  }
  *param_2 = *(char *)(lVar2 + 0xb8) == '\0';
  return param_2;
}



// FUNCTION 1435dda40 FUN_1435dda40 body=62 status=ok
// SIG undefined FUN_1435dda40(void)

void FUN_1435dda40(longlong param_1)

{
  FUN_1434f0160(param_1 + 0x80,*(undefined8 *)(param_1 + 0x98),0);
  FUN_1434f0160(param_1 + 0x60,*(undefined8 *)(param_1 + 0x78),0);
  FUN_1436138f0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x50),0);
  return;
}



// FUNCTION 1435dda90 FUN_1435dda90 body=59 status=ok
// SIG undefined FUN_1435dda90(void)

longlong FUN_1435dda90(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_1435c8090(param_1[5],&DAT_145b43470);
    lVar1 = *(longlong *)(lVar1 + 0xd8);
    *param_1 = lVar1;
    return lVar1;
  }
  return *param_1;
}



// FUNCTION 1435ddae0 FUN_1435ddae0 body=143 status=ok
// SIG undefined FUN_1435ddae0(void)

void FUN_1435ddae0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if ((param_3 & 0xffffffff) < *(ulonglong *)(param_1 + 0x40)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (param_3 & 0xffffffff) * 8);
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar3;
  }
  else {
    uVar4 = FUN_1435c8e40(local_18,0x5e2,uVar2);
    FUN_1435ccf60(uVar2,uVar4,&DAT_145b16b90);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1435ddb80 FUN_1435ddb80 body=123 status=ok
// SIG undefined FUN_1435ddb80(void)

undefined1 * FUN_1435ddb80(longlong param_1,undefined1 *param_2,undefined8 *param_3,uint param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x68) <= (ulonglong)param_4) {
    uVar4 = FUN_1435c8e40(local_18,0x5e2,uVar2);
    FUN_1435ccf60(uVar2,uVar4,&DAT_145b16b90);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  *param_2 = 1;
  *param_3 = *(undefined8 *)(lVar3 + (ulonglong)param_4 * 8);
  return param_2;
}



// FUNCTION 1435ddc10 FUN_1435ddc10 body=129 status=ok
// SIG undefined FUN_1435ddc10(void)

undefined1 * FUN_1435ddc10(longlong param_1,undefined1 *param_2,undefined8 *param_3,uint param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x88) <= (ulonglong)param_4) {
    uVar4 = FUN_1435c8e40(local_18,0x5e2,uVar2);
    FUN_1435ccf60(uVar2,uVar4,&DAT_145b16b90);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  *param_2 = 1;
  *param_3 = *(undefined8 *)(lVar3 + (ulonglong)param_4 * 8);
  return param_2;
}



// FUNCTION 1435ddca0 FUN_1435ddca0 body=223 status=ok
// SIG undefined FUN_1435ddca0(void)

longlong * FUN_1435ddca0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  param_1[1] = lVar2;
  param_1[2] = 0;
  param_1[3] = param_3;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x218);
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
  lVar3 = *(longlong *)(param_1[1] + 0x48);
  param_1[5] = lVar3;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = lVar3;
  param_1[10] = lVar2 + 0x48;
  iVar1 = *(int *)(lVar2 + 0x60);
  *(int *)(lVar2 + 0x60) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920();
  }
  lVar2 = *(longlong *)(param_1[1] + 0x48);
  param_1[0xc] = lVar2;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar2;
  param_1[0x11] = 0;
  lVar2 = *(longlong *)(param_1[1] + 0x48);
  param_1[0x13] = lVar2;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar2;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1435ddd90 FUN_1435ddd90 body=443 status=ok
// SIG undefined FUN_1435ddd90(void)

undefined1 * FUN_1435ddd90(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  char local_res10 [8];
  uint local_res18 [4];
  undefined1 local_28 [8];
  longlong local_20;
  
  local_res18[0] = 0;
  uVar6 = (uint)param_3;
  bVar5 = (byte)param_3;
  if (uVar6 < 0x80) {
    local_res18[0] = (uint)bVar5;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res10,local_res18,1);
    bVar7 = local_res10[0] != '\0';
    goto LAB_1435ddf39;
  }
  if (uVar6 < 0x4000) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
LAB_1435dddea:
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,(char)(param_3 >> 7)) | 0x80;
    (**(code **)*puVar4)(puVar4,local_res10,local_res18,1);
    if (local_res10[0] != '\0') {
      bVar5 = bVar5 & 0x7f;
LAB_1435dde14:
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar5);
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_res10,local_res18,1);
      if (local_res10[0] != '\0') {
        bVar7 = true;
        goto LAB_1435ddf39;
      }
    }
  }
  else if (uVar6 < 0x200000) {
    local_res18[0] = (byte)(param_3 >> 0xe) | 0x80;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res10,local_res18,1);
    if (local_res10[0] != '\0') {
      puVar4 = *(undefined8 **)(param_1 + 0x18);
      goto LAB_1435dddea;
    }
  }
  else if (uVar6 < 0x40000000) {
    local_res18[0] = (byte)(param_3 >> 0x16) | 0x80;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res10,local_res18,1);
    if (local_res10[0] != '\0') {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,(char)(param_3 >> 0xf)) | 0x80;
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_res10,local_res18,1);
      if (local_res10[0] != '\0') {
        local_res18[0] = CONCAT31(local_res18[0]._1_3_,(char)(param_3 >> 8)) | 0x80;
        (**(code **)**(undefined8 **)(param_1 + 0x18))
                  (*(undefined8 **)(param_1 + 0x18),local_res10,local_res18,1);
        if (local_res10[0] != '\0') goto LAB_1435dde14;
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_1435c8e40(local_28,0x5e2,uVar2);
    FUN_1435ccf60(uVar2,uVar3,&DAT_145b16b90);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  bVar7 = false;
LAB_1435ddf39:
  *param_2 = bVar7;
  return param_2;
}



// FUNCTION 1435ddf60 FUN_1435ddf60 body=46 status=ok
// SIG undefined FUN_1435ddf60(void)

undefined8 FUN_1435ddf60(longlong param_1,undefined8 param_2,uint param_3)

{
  uint local_res18 [4];
  
  local_res18[0] =
       param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18;
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),param_2,local_res18,4);
  return param_2;
}



// FUNCTION 1435ddfa0 FUN_1435ddfa0 body=193 status=ok
// SIG undefined FUN_1435ddfa0(void)

undefined8 FUN_1435ddfa0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong local_res8 [4];
  
  local_res8[0] =
       (((param_3 & 0xff000000000000 | param_3 >> 0x10) >> 0x10 | param_3 & 0xff0000000000) >> 0x10
       | param_3 & 0xff00000000) >> 8 |
       ((((ulonglong)((uint)param_3 & 0xff00) | param_3 << 0x10) << 0x10 |
        (ulonglong)((uint)param_3 & 0xff0000)) << 0x10 | param_3 & 0xff000000) << 8;
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),param_2,local_res8,8);
  return param_2;
}



// FUNCTION 1435de070 FUN_1435de070 body=250 status=ok
// SIG undefined FUN_1435de070(void)

undefined1 * FUN_1435de070(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_res18 [2];
  char local_res20 [8];
  
  local_res18[0] = 0;
  iVar1 = *(int *)(*param_3 + 0x20);
  if (iVar1 == 0) {
    local_res18[0] = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res20,local_res18,1);
    local_res18[0]._0_1_ = local_res20[0] != '\0';
  }
  else {
    lVar2 = FUN_1433154b0(param_1 + 0x20,param_3);
    if (((lVar2 < 0) || (lVar2 = (lVar2 + 1) * 0x20 + *(longlong *)(param_1 + 0x20), lVar2 == 0)) ||
       (iVar3 = (int)*(undefined8 *)(lVar2 + 8), iVar3 < 0)) {
      FUN_14360dc40(param_1 + 0x20,param_3);
      FUN_1435ddd90(param_1,local_res18,iVar1 * 2 | 1);
      if (((char)local_res18[0] == '\0') ||
         ((**(code **)**(undefined8 **)(param_1 + 0x18))
                    (*(undefined8 **)(param_1 + 0x18),local_res20,*(undefined8 *)*param_3,iVar1),
         local_res20[0] == '\0')) {
        local_res18[0]._0_1_ = 0;
      }
      else {
        local_res18[0]._0_1_ = 1;
      }
    }
    else {
      FUN_1435ddd90(param_1,local_res18,iVar3 * 2);
    }
  }
  *param_2 = (char)local_res18[0];
  return param_2;
}



// FUNCTION 1435de170 FUN_1435de170 body=307 status=ok
// SIG undefined FUN_1435de170(void)

undefined1 * FUN_1435de170(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  if ((~(*(byte *)(*(longlong *)(param_3 + 0x28) + 0x88) >> 5) & 1) != 0) {
    switch(*(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x90)) {
    case 7:
      FUN_1435dea80(param_1,param_2);
      return param_2;
    case 8:
      FUN_1435deda0(param_1,param_2);
      return param_2;
    case 9:
      FUN_1435dec60(param_1,param_2);
      return param_2;
    case 10:
      *param_2 = 0;
      return param_2;
    case 0xb:
      FUN_1435deec0(param_1,param_2);
      return param_2;
    case 0xc:
      FUN_1435df270(param_1,param_2);
      return param_2;
    case 0xd:
      FUN_1435df430(param_1,param_2);
      return param_2;
    case 0xe:
      FUN_1435df5f0(param_1,param_2);
      return param_2;
    case 0xf:
      FUN_1435df790(param_1,param_2);
      return param_2;
    case 0x10:
      FUN_1435df9a0(param_1,param_2);
      return param_2;
    case 0x12:
      FUN_1435df0f0(param_1,param_2);
      return param_2;
    }
  }
  FUN_1435de2e0(param_1,param_2);
  return param_2;
}



// FUNCTION 1435de2e0 FUN_1435de2e0 body=1938 status=ok
// SIG undefined FUN_1435de2e0(void)

undefined1 * FUN_1435de2e0(ulonglong *param_1,undefined1 *param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong *local_res8;
  longlong local_res20;
  undefined **local_e8;
  ulonglong *local_e0;
  longlong *plStack_d8;
  ulonglong local_d0;
  uint local_c8 [2];
  int *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar12 = (ulonglong)local_res8 >> 8;
  local_res8 = (longlong *)CONCAT71((uint7)uVar12 & 0xffffffff000000,10);
  (*(code *)**(undefined8 **)param_1[3])((undefined8 *)param_1[3],&local_res20,&local_res8,1);
  if ((char)local_res20 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar4 = FUN_14360f760(param_1,param_3);
  if (-1 < iVar4) {
    FUN_1435ddd90(param_1,param_2,iVar4 * 2);
    return param_2;
  }
  if (param_3 != (longlong *)0x0) {
    *(uint *)(param_3 + 1) = (int)param_3[1] + 1U & 0x8fffffff;
  }
  local_res8 = param_3;
  FUN_14360db80(param_1 + 0xb,&local_res8);
  if (((local_res8 != (longlong *)0x0) && (((ulonglong)local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 1) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) - 1;
    FUN_1434ef880();
  }
  lVar9 = param_3[5];
  local_70 = param_1[1];
  iVar4 = FUN_14360f860(param_1,lVar9);
  uVar5 = FUN_1435dff30(lVar9);
  bVar14 = *(byte *)(lVar9 + 0x88) >> 1 & 1;
  local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar5);
  if (param_1[2] == 0) {
    lVar7 = FUN_1435c8090(param_1[1],&DAT_145b43470);
    param_1[2] = *(ulonglong *)(lVar7 + 0xd8);
  }
  cVar3 = FUN_1435b5020(param_1[2],lVar9);
  local_res20 = CONCAT71(local_res20._1_7_,cVar3);
  if (iVar4 < 0) {
    uVar6 = 3;
    if (bVar14 != 0) {
      uVar6 = 0xb;
    }
    FUN_1435ddd90(param_1,&local_res8,-(uint)(cVar3 != '\0') & 4 | uVar6 | (int)local_res8 << 4);
    if ((char)local_res8 == '\0') goto LAB_1435de436;
    uVar8 = FUN_143610320(lVar9);
    uVar12 = local_70;
    FUN_1435c8820(local_70,&local_a8,uVar8);
    pcVar10 = (char *)FUN_1435de070(param_1,&local_res8,&local_a8);
    if (*pcVar10 == '\0') {
      *param_2 = 0;
      piVar1 = (int *)(local_a8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return param_2;
      }
      FUN_14335f920();
      return param_2;
    }
    piVar1 = (int *)(local_a8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_e8 = &PTR_FUN_145b4aea8;
    local_e0 = param_1;
    pcVar10 = (char *)FUN_1435b43c0(lVar9 + 0x28,&local_res8,&local_e8);
    if (*pcVar10 == '\0') {
      *param_2 = 0;
      return param_2;
    }
  }
  else {
    FUN_1435ddd90(param_1,&local_res8,iVar4 * 4 | 1);
    uVar12 = local_70;
    if ((char)local_res8 == '\0') goto LAB_1435de436;
  }
  if ((char)local_res20 == '\0') {
    local_e8 = &PTR_FUN_145b4aeb8;
    local_e0 = param_1;
    plStack_d8 = param_3;
    pcVar10 = (char *)FUN_1435b43c0(lVar9 + 0x28,&local_res8,&local_e8);
    if (*pcVar10 == '\0') {
LAB_1435de436:
      *param_2 = 0;
      return param_2;
    }
    if (bVar14 != 0) {
      lVar9 = param_3[6];
      lStack_98 = lVar9 + 0x40;
      uVar15 = (*(longlong *)(lVar9 + 0x10) - lVar9) + -0x40 >> 3;
      local_78 = *(longlong *)(lVar9 + 0x40);
      uVar12 = 0;
      while (local_a0 = lVar9, local_90 = uVar15, local_78 == 0) {
        uStack_88 = uVar12 + 1;
        if (uVar15 <= uStack_88) goto LAB_1435dea05;
        uVar12 = uStack_88;
        local_78 = *(longlong *)(lStack_98 + uStack_88 * 8);
      }
      uStack_88 = uVar12;
      local_80 = FUN_143561b20();
      if (uVar12 < uVar15) {
        do {
          lVar7 = uVar12 * 0x40 + local_80;
          puVar13 = (undefined4 *)(lVar7 * 0x20 + *(longlong *)(lVar9 + 0x28));
          if ((((((byte)*puVar13 & 0x1f) != 0xc) || (*(longlong *)(puVar13 + 4) == 0)) ||
              (*(int *)(*(longlong *)(*(longlong *)(puVar13 + 4) + 0x28) + 0x90) != 10)) &&
             (*(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x20) + 8 + lVar7 * 0x10) + 0x20) != 0))
          {
            pcVar10 = (char *)FUN_1435de070(param_1,&local_res8);
            if ((*pcVar10 == '\0') ||
               (pcVar10 = (char *)FUN_1435dfb90(param_1,&local_res20,puVar13), *pcVar10 == '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) goto LAB_1435dea00;
          }
          FUN_143612010(&local_a0);
          uVar12 = uStack_88;
          lVar9 = local_a0;
        } while (uStack_88 < local_90);
      }
LAB_1435dea05:
      lVar9 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + 0x218);
      local_res20 = lVar9 + 0x48;
      piVar1 = (int *)(lVar9 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar10 = (char *)FUN_1435de070(param_1,&local_res8,&local_res20);
      cVar3 = *pcVar10;
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (cVar3 == '\0') {
LAB_1435dea00:
        *param_2 = 0;
        return param_2;
      }
    }
    goto LAB_1435dea45;
  }
  local_c8[0] = 0;
  local_c0 = (int *)0x0;
  lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(uVar12 + 0x10) + 0x218),"writeExternal",0xd);
  local_a0 = CONCAT44(local_a0._4_4_,10);
  lStack_98 = 0;
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
  local_60 = *(longlong *)(uVar12 + 0x1d8);
  local_68[0] = 0;
  if (local_60 != 0) {
    *(uint *)(local_60 + 8) = *(int *)(local_60 + 8) + 1U & 0x8fffffff;
  }
  local_90._0_4_ = (undefined4)lVar9;
  local_90._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  local_58 = 10;
  uStack_54 = local_a0._4_4_;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = (undefined4)local_90;
  uStack_44 = local_90._4_4_;
  uStack_40 = (undefined4)uStack_88;
  uStack_3c = uStack_88._4_4_;
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
  local_90 = lVar9;
  FUN_1435aef90(local_68,0);
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
  }
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
  }
  plStack_d8 = (longlong *)*param_1;
  local_e8 = (undefined **)CONCAT44(local_e8._4_4_,0xc);
  local_e0 = (ulonglong *)0x0;
  if (plStack_d8 != (longlong *)0x0) {
    *(uint *)((longlong)plStack_d8 + 8) = *(int *)((longlong)plStack_d8 + 8) + 1U & 0x8fffffff;
  }
  pcVar10 = (char *)(**(code **)(*param_3 + 0x58))
                              (param_3,&local_res8,local_68,local_c8,1,&local_e8);
  if (*pcVar10 == '\0') {
    uVar6 = (uint)local_e8 & 0x1f;
    *param_2 = 0;
    if (9 < uVar6) {
      if (((uint)local_e8 >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          piVar1 = (int *)((longlong)plStack_d8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
            plVar11 = plStack_d8;
            if (((ulonglong)plStack_d8 & 1) != 0) {
              plStack_d8 = (longlong *)((longlong)plStack_d8 - 1);
              goto LAB_1435de6a4;
            }
          }
          else {
            if (1 < uVar6 - 0xd) goto LAB_1435de6a4;
            plVar11 = (longlong *)local_d0;
            if ((local_d0 & 1) != 0) {
              local_d0 = local_d0 - 1;
              goto LAB_1435de6a4;
            }
          }
          if ((plVar11 != (longlong *)0x0) && ((*(uint *)((longlong)plVar11 + 8) & 0x3fffff) != 0))
          {
            *(uint *)((longlong)plVar11 + 8) = *(uint *)((longlong)plVar11 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *(int *)local_e0 = (int)*local_e0 + -1;
        if ((int)*local_e0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_e8 = (undefined **)((ulonglong)local_e8 & 0xfffffffffffffde0);
        local_e0 = (ulonglong *)0x0;
        plStack_d8 = (longlong *)0x0;
        local_d0 = 0;
      }
    }
LAB_1435de6a4:
    FUN_1434e6250(local_68);
    uVar6 = local_c8[0] & 0x1f;
    if (uVar6 < 10) {
      return param_2;
    }
    if ((local_c8[0] >> 9 & 1) != 0) {
      *local_c0 = *local_c0 + -1;
      if (*local_c0 != 0) {
        return param_2;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return param_2;
    }
    if (uVar6 == 10) {
      piVar1 = (int *)(local_b8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return param_2;
      }
      FUN_14335f920();
      return param_2;
    }
    if (((uVar6 != 0xb) && (uVar6 != 0xc)) && (local_b8 = local_b0, 1 < uVar6 - 0xd)) {
      return param_2;
    }
    if ((local_b8 & 1) != 0) {
      return param_2;
    }
    if (local_b8 == 0) {
      return param_2;
    }
    if ((*(uint *)(local_b8 + 8) & 0x3fffff) == 0) {
      return param_2;
    }
    *(uint *)(local_b8 + 8) = *(uint *)(local_b8 + 8) - 1;
    FUN_1434ef880();
    return param_2;
  }
  uVar6 = (uint)local_e8 & 0x1f;
  if (9 < uVar6) {
    if (((uint)local_e8 >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)((longlong)plStack_d8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
        plVar11 = plStack_d8;
        if (((ulonglong)plStack_d8 & 1) == 0) {
LAB_1435de7d1:
          if ((plVar11 != (longlong *)0x0) && ((*(uint *)((longlong)plVar11 + 8) & 0x3fffff) != 0))
          {
            *(uint *)((longlong)plVar11 + 8) = *(uint *)((longlong)plVar11 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          plStack_d8 = (longlong *)((longlong)plStack_d8 - 1);
        }
      }
      else if (uVar6 - 0xd < 2) {
        plVar11 = (longlong *)local_d0;
        if ((local_d0 & 1) == 0) goto LAB_1435de7d1;
        local_d0 = local_d0 - 1;
      }
    }
    else {
      *(int *)local_e0 = (int)*local_e0 + -1;
      if ((int)*local_e0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_e8 = (undefined **)((ulonglong)local_e8 & 0xfffffffffffffde0);
      local_e0 = (ulonglong *)0x0;
      plStack_d8 = (longlong *)0x0;
      local_d0 = 0;
    }
  }
  FUN_1434e6250(local_68);
  uVar6 = local_c8[0] & 0x1f;
  if (9 < uVar6) {
    if ((local_c8[0] >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)(local_b8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if (((((uVar6 == 0xb) || (uVar6 == 0xc)) || (local_b8 = local_b0, uVar6 - 0xd < 2)) &&
               (((local_b8 & 1) == 0 && (local_b8 != 0)))) &&
              ((*(uint *)(local_b8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_b8 + 8) = *(uint *)(local_b8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_c0 = *local_c0 + -1;
      if (*local_c0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
LAB_1435dea45:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435dea80 FUN_1435dea80 body=464 status=ok
// SIG undefined FUN_1435dea80(void)

undefined1 * FUN_1435dea80(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  ulonglong local_res8;
  longlong local_res20;
  undefined **local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  
  local_res8 = CONCAT71(local_res8._1_7_,9);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),&local_res20,&local_res8,1);
  if ((char)local_res20 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar5 = FUN_14360f760(param_1,param_3);
  if (-1 < iVar5) {
    FUN_1435ddd90(param_1,param_2,iVar5 * 2);
    return param_2;
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = param_3;
  FUN_14360db80(param_1 + 0x58,&local_res8);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  lVar3 = *(longlong *)(param_3 + 0x80);
  FUN_1435ddd90(param_1,&local_res8,(int)lVar3 * 2 | 1);
  if ((char)local_res8 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  if (*(ulonglong *)(param_3 + 0x80) < *(ulonglong *)(param_3 + 0x40)) {
    local_48 = &PTR_FUN_145b4aec8;
    local_40 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x10);
    local_38 = param_3;
    local_30 = param_1;
    FUN_1434b5790(param_3 + 0x40,&local_res8,&local_48);
    if ((char)local_res8 == '\0') goto LAB_1435debb4;
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x218);
  local_res20 = lVar4 + 0x48;
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar6 = (char *)FUN_1435de070(param_1,&local_res8,&local_res20);
  cVar2 = *pcVar6;
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar2 == '\0') {
LAB_1435debb4:
    *param_2 = 0;
    return param_2;
  }
  if (lVar3 != 0) {
    local_48 = &PTR_FUN_145b4aed8;
    local_40 = param_3;
    local_38 = param_1;
    FUN_1434b5710(param_3 + 0x40,&local_res8,&local_48);
    if ((char)local_res8 == '\0') goto LAB_1435debb4;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435dec60 FUN_1435dec60 body=313 status=ok
// SIG undefined FUN_1435dec60(void)

undefined1 * FUN_1435dec60(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  ulonglong local_res8;
  char local_res20 [8];
  undefined1 local_18 [16];
  
  local_res8._1_7_ = (uint7)(local_res8 >> 8) & 0xffffffff000000;
  local_res8 = CONCAT71(local_res8._1_7_,8);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if (local_res20[0] == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar2 = FUN_14360f760(param_1,param_3);
  if (-1 < iVar2) {
    FUN_1435ddd90(param_1,param_2,iVar2 * 2);
    return param_2;
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = param_3;
  FUN_14360db80(param_1 + 0x58,&local_res8);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  local_res8 = CONCAT71(local_res8._1_7_,1);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if (local_res20[0] != '\0') {
    FUN_1434c6760(param_3,&local_res8);
    pcVar3 = (char *)FUN_1435ddfa0(param_1,local_18,local_res8);
    if (*pcVar3 != '\0') {
      uVar1 = 1;
      goto LAB_1435ded84;
    }
  }
  uVar1 = 0;
LAB_1435ded84:
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1435deda0 FUN_1435deda0 body=278 status=ok
// SIG undefined FUN_1435deda0(void)

undefined1 * FUN_1435deda0(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong local_res8;
  char local_res20 [8];
  
  uVar1 = local_res8 >> 8;
  local_res8 = CONCAT71((uint7)uVar1 & 0xffffffff000000,0xc);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if (local_res20[0] == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar3 = FUN_14360f760(param_1,param_3);
  if (-1 < iVar3) {
    FUN_1435ddd90(param_1,param_2,iVar3 * 2);
    return param_2;
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = param_3;
  FUN_14360db80(param_1 + 0x58,&local_res8);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  iVar3 = *(int *)(param_3 + 0x48);
  FUN_1435ddd90(param_1,&local_res8,iVar3 * 2 | 1);
  if ((char)local_res8 != '\0') {
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res20,*(undefined8 *)(param_3 + 0x50),iVar3);
    if (local_res20[0] != '\0') {
      uVar2 = 1;
      goto LAB_1435deea4;
    }
  }
  uVar2 = 0;
LAB_1435deea4:
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1435deec0 FUN_1435deec0 body=550 status=ok
// SIG undefined FUN_1435deec0(void)

/* WARNING: Removing unreachable block (ram,0x0001435df0a7) */

undefined1 * FUN_1435deec0(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  char local_res20 [8];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  
  uVar3 = 0;
  local_res8._1_7_ = (uint7)(local_res8 >> 8) & 0xffffffff000000;
  local_res8 = CONCAT71(local_res8._1_7_,0x11);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if (local_res20[0] != '\0') {
    iVar1 = FUN_14360f760(param_1,param_3);
    if (-1 < iVar1) {
      FUN_1435ddd90(param_1,param_2,iVar1 * 2);
      return param_2;
    }
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    local_res8 = param_3;
    FUN_14360db80(param_1 + 0x58,&local_res8);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    FUN_1435ddd90(param_1,&local_res8,*(int *)(*(longlong *)(param_3 + 0x48) + 8) * 2 | 1);
    if ((char)local_res8 != '\0') {
      local_res8 = CONCAT71(local_res8._1_7_,*(undefined1 *)(param_3 + 0x40));
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
      if (local_res20[0] != '\0') {
        lVar5 = *(longlong *)(param_3 + 0x48);
        local_50 = lVar5 + 0x40;
        uVar6 = (*(longlong *)(lVar5 + 0x10) - lVar5) + -0x40 >> 3;
        local_30 = *(longlong *)(lVar5 + 0x40);
        while (local_30 == 0) {
          uVar3 = uVar3 + 1;
          if (uVar6 <= uVar3) goto LAB_1435df0c4;
          local_30 = *(longlong *)(local_50 + uVar3 * 8);
        }
        local_58 = lVar5;
        local_48 = uVar6;
        local_40 = uVar3;
        local_38 = FUN_143561b20();
        if (uVar3 < uVar6) {
          do {
            lVar4 = (uVar3 * 0x40 + local_38) * 0x20;
            pcVar2 = (char *)FUN_1435dfb90(param_1,&local_res8,*(longlong *)(lVar5 + 0x20) + lVar4);
            if ((*pcVar2 == '\0') ||
               (pcVar2 = (char *)FUN_1435dfb90(param_1,local_res20,
                                               *(longlong *)(lVar5 + 0x28) + lVar4), *pcVar2 == '\0'
               )) {
              *param_2 = 0;
              return param_2;
            }
            FUN_143612010(&local_58);
            uVar3 = local_40;
            lVar5 = local_58;
          } while (local_40 < local_48);
        }
LAB_1435df0c4:
        *param_2 = 1;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435df0f0 FUN_1435df0f0 body=370 status=ok
// SIG undefined FUN_1435df0f0(void)

undefined1 * FUN_1435df0f0(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong local_res8;
  char local_res20 [8];
  undefined8 *local_18 [2];
  
  uVar3 = local_res8 >> 8;
  local_res8 = CONCAT71((uint7)uVar3 & 0xffffffff000000,0xb);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if (local_res20[0] == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar5 = FUN_14360f760(param_1,param_3);
  if (-1 < iVar5) {
    FUN_1435ddd90(param_1,param_2,iVar5 * 2);
    return param_2;
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = param_3;
  FUN_14360db80(param_1 + 0x58,&local_res8);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x10) + 0x218);
  local_18[0] = (undefined8 *)(lVar2 + 0x48);
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1434cd9d0(param_3,local_18);
  iVar5 = *(int *)(local_18[0] + 4);
  FUN_1435ddd90(param_1,&local_res8,iVar5 * 2 | 1);
  if ((char)local_res8 != '\0') {
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res20,*local_18[0],iVar5);
    if (local_res20[0] != '\0') {
      uVar4 = 1;
      goto LAB_1435df23d;
    }
  }
  uVar4 = 0;
LAB_1435df23d:
  *param_2 = uVar4;
  piVar1 = (int *)(local_18[0] + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435df270 FUN_1435df270 body=427 status=ok
// SIG undefined FUN_1435df270(void)

undefined1 * FUN_1435df270(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  uint local_res20 [2];
  char local_38 [16];
  
  local_res8 = CONCAT71(local_res8._1_7_,0xd);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if ((char)local_res20[0] == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar2 = FUN_14360f760(param_1,param_3);
  if (iVar2 < 0) {
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    local_res8 = param_3;
    FUN_14360db80(param_1 + 0x58,&local_res8);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,&local_res8);
    uVar1 = (uint)local_res8;
    FUN_1435ddd90(param_1,&local_res8,(uint)local_res8 * 2 | 1);
    if ((char)local_res8 != '\0') {
      FUN_143621510(param_3,&local_res8);
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,(char)local_res8);
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_38,local_res20,1);
      if (local_38[0] != '\0') {
        uVar3 = 0;
        uVar5 = uVar3;
        if (uVar1 != 0) {
          do {
            uVar4 = *(uint *)(uVar3 + *(longlong *)(param_3 + 0x58));
            local_res20[0] =
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            (**(code **)**(undefined8 **)(param_1 + 0x18))
                      (*(undefined8 **)(param_1 + 0x18),&local_res8,local_res20,4);
            if ((char)local_res8 == '\0') {
              *param_2 = 0;
              return param_2;
            }
            uVar4 = (int)uVar5 + 1;
            uVar3 = uVar3 + 4;
            uVar5 = (ulonglong)uVar4;
          } while (uVar4 < uVar1);
        }
        *param_2 = 1;
        return param_2;
      }
    }
    *param_2 = 0;
    return param_2;
  }
  FUN_1435ddd90(param_1,param_2,iVar2 * 2);
  return param_2;
}



// FUNCTION 1435df430 FUN_1435df430 body=427 status=ok
// SIG undefined FUN_1435df430(void)

undefined1 * FUN_1435df430(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  uint local_res20 [2];
  char local_38 [16];
  
  local_res8 = CONCAT71(local_res8._1_7_,0xe);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if ((char)local_res20[0] == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar2 = FUN_14360f760(param_1,param_3);
  if (iVar2 < 0) {
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    local_res8 = param_3;
    FUN_14360db80(param_1 + 0x58,&local_res8);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,&local_res8);
    uVar1 = (uint)local_res8;
    FUN_1435ddd90(param_1,&local_res8,(uint)local_res8 * 2 | 1);
    if ((char)local_res8 != '\0') {
      FUN_143622510(param_3,&local_res8);
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,(char)local_res8);
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_38,local_res20,1);
      if (local_38[0] != '\0') {
        uVar3 = 0;
        uVar5 = uVar3;
        if (uVar1 != 0) {
          do {
            uVar4 = *(uint *)(uVar3 + *(longlong *)(param_3 + 0x58));
            local_res20[0] =
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            (**(code **)**(undefined8 **)(param_1 + 0x18))
                      (*(undefined8 **)(param_1 + 0x18),&local_res8,local_res20,4);
            if ((char)local_res8 == '\0') {
              *param_2 = 0;
              return param_2;
            }
            uVar4 = (int)uVar5 + 1;
            uVar3 = uVar3 + 4;
            uVar5 = (ulonglong)uVar4;
          } while (uVar4 < uVar1);
        }
        *param_2 = 1;
        return param_2;
      }
    }
    *param_2 = 0;
    return param_2;
  }
  FUN_1435ddd90(param_1,param_2,iVar2 * 2);
  return param_2;
}



// FUNCTION 1435df5f0 FUN_1435df5f0 body=409 status=ok
// SIG undefined FUN_1435df5f0(void)

undefined1 * FUN_1435df5f0(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  char local_res20 [8];
  char local_38 [16];
  
  local_res8 = CONCAT71(local_res8._1_7_,0xf);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),local_res20,&local_res8,1);
  if (local_res20[0] == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar2 = FUN_14360f760(param_1,param_3);
  if (iVar2 < 0) {
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    local_res8 = param_3;
    FUN_14360db80(param_1 + 0x58,&local_res8);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,&local_res8);
    uVar1 = (uint)local_res8;
    FUN_1435ddd90(param_1,&local_res8,(uint)local_res8 * 2 | 1);
    if ((char)local_res8 != '\0') {
      FUN_1436234c0(param_3,&local_res8);
      local_res20[0] = (char)local_res8;
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_38,local_res20,1);
      if (local_38[0] != '\0') {
        uVar4 = 0;
        uVar6 = uVar4;
        if (uVar1 != 0) {
          do {
            pcVar3 = (char *)FUN_1435ddfa0(param_1,&local_res8,
                                           *(undefined8 *)(uVar4 + *(longlong *)(param_3 + 0x58)));
            if (*pcVar3 == '\0') {
              *param_2 = 0;
              return param_2;
            }
            uVar5 = (int)uVar6 + 1;
            uVar4 = uVar4 + 8;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < uVar1);
        }
        *param_2 = 1;
        return param_2;
      }
    }
    *param_2 = 0;
    return param_2;
  }
  FUN_1435ddd90(param_1,param_2,iVar2 * 2);
  return param_2;
}



// FUNCTION 1435df790 FUN_1435df790 body=508 status=ok
// SIG undefined FUN_1435df790(void)

undefined1 * FUN_1435df790(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  longlong local_res20;
  char local_48 [16];
  
  local_res8 = CONCAT71(local_res8._1_7_,0x10);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),&local_res20,&local_res8,1);
  if ((char)local_res20 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar5 = FUN_14360f760(param_1,param_3);
  if (iVar5 < 0) {
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    local_res8 = param_3;
    FUN_14360db80(param_1 + 0x58,&local_res8);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,&local_res8);
    uVar4 = (uint)local_res8;
    FUN_1435ddd90(param_1,&local_res8,(uint)local_res8 * 2 | 1);
    if ((char)local_res8 != '\0') {
      FUN_143624440(param_3,&local_res8);
      local_res20 = CONCAT71(local_res20._1_7_,(char)local_res8);
      (**(code **)**(undefined8 **)(param_1 + 0x18))
                (*(undefined8 **)(param_1 + 0x18),local_48,&local_res20,1);
      if (local_48[0] != '\0') {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x240);
        uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_res20);
        pcVar7 = (char *)FUN_1435de070(param_1,&local_res8,uVar6);
        cVar2 = *pcVar7;
        piVar1 = (int *)(local_res20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (cVar2 == '\0') {
          *param_2 = 0;
          return param_2;
        }
        uVar8 = 0;
        uVar10 = uVar8;
        if (uVar4 != 0) {
          do {
            local_res20 = *(longlong *)(uVar8 + *(longlong *)(param_3 + 0x58));
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            pcVar7 = (char *)FUN_1435de070(param_1,&local_res8,&local_res20);
            cVar2 = *pcVar7;
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (cVar2 == '\0') {
              *param_2 = 0;
              return param_2;
            }
            uVar9 = (int)uVar10 + 1;
            uVar8 = uVar8 + 8;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < uVar4);
        }
        *param_2 = 1;
        return param_2;
      }
    }
    *param_2 = 0;
    return param_2;
  }
  FUN_1435ddd90(param_1,param_2,iVar5 * 2);
  return param_2;
}



// FUNCTION 1435df9a0 FUN_1435df9a0 body=481 status=ok
// SIG undefined FUN_1435df9a0(void)

undefined1 * FUN_1435df9a0(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong local_res8;
  char local_res20;
  undefined7 uStackX_21;
  char local_28 [16];
  
  uVar8 = 0;
  uVar2 = local_res8 >> 8;
  local_res8 = CONCAT71((uint7)uVar2 & 0xffffffff000000,0x10);
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),&local_res20,&local_res8,1);
  if (local_res20 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar4 = FUN_14360f760(param_1,param_3);
  if (-1 < iVar4) {
    FUN_1435ddd90(param_1,param_2,iVar4 * 2);
    return param_2;
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = param_3;
  FUN_14360db80(param_1 + 0x58,&local_res8);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,&local_res8);
  uVar3 = (uint)local_res8;
  FUN_1435ddd90(param_1,&local_res8,(uint)local_res8 * 2 | 1);
  if ((char)local_res8 != '\0') {
    FUN_143625460(param_3,&local_res8);
    local_res20 = (char)local_res8;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_28,&local_res20,1);
    if (local_28[0] != '\0') {
      lVar5 = FUN_143610450(param_3);
      uVar6 = FUN_143610320(*(undefined8 *)(lVar5 + 0xd8));
      FUN_1435c8820(*(undefined8 *)(param_1 + 8),&local_res20,uVar6);
      pcVar7 = (char *)FUN_1435de070(param_1,&local_res8,&local_res20);
      if (*pcVar7 != '\0') {
        piVar1 = (int *)(CONCAT71(uStackX_21,local_res20) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (uVar3 != 0) {
          do {
            pcVar7 = (char *)FUN_1435dfb90(param_1,&local_res8,
                                           (ulonglong)uVar8 * 0x20 + *(longlong *)(param_3 + 0x58));
            if (*pcVar7 == '\0') {
              *param_2 = 0;
              return param_2;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar3);
        }
        *param_2 = 1;
        return param_2;
      }
      *param_2 = 0;
      piVar1 = (int *)(CONCAT71(uStackX_21,local_res20) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return param_2;
      }
      FUN_14335f920();
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435dfb90 FUN_1435dfb90 body=604 status=ok
// SIG undefined FUN_1435dfb90(void)

undefined1 * FUN_1435dfb90(longlong param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint local_res18 [2];
  char local_res20 [8];
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  
  local_res18[0] = 0;
  switch(*param_3 & 0x1f) {
  case 0:
switchD_1435dfbd8_caseD_0:
    local_res18[0] = 0;
    goto LAB_1435dfbdf;
  case 1:
    local_res18[0] = (uint)(byte)(((char)param_3[4] != '\0') + 2);
    goto LAB_1435dfbdf;
  case 2:
  case 3:
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if ((int)(param_3[4] * 8) >> 3 != param_3[4]) {
      local_res18[0] = 5;
      (**(code **)*puVar3)(puVar3,local_res20,local_res18,1);
      goto joined_r0x0001435dfcba;
    }
    local_res18[0] = 4;
    (**(code **)*puVar3)();
    if ((local_res20[0] != '\0') &&
       (pcVar7 = (char *)FUN_1435ddd90(param_1,local_38,param_3[4] & 0x1fffffff), *pcVar7 != '\0'))
    {
      *param_2 = 1;
      return param_2;
    }
    goto LAB_1435dfc60;
  case 4:
    local_res18[0] = 5;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res20,local_res18,1);
joined_r0x0001435dfcba:
    if ((local_res20[0] != '\0') &&
       (pcVar7 = (char *)FUN_1435ddfa0(param_1,local_38), *pcVar7 != '\0')) {
      *param_2 = 1;
      return param_2;
    }
LAB_1435dfc60:
    *param_2 = 0;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_1435c8e40(&local_30,0x5e4,uVar2);
    FUN_1435ccf60(uVar2,uVar6,&DAT_145b15f30);
    piVar1 = (int *)(local_28 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    break;
  case 10:
    local_res18[0] = 6;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),local_res20,local_res18,1);
    bVar4 = false;
    if (local_res20[0] == '\0') {
LAB_1435dfd50:
      uVar5 = 0;
    }
    else {
      local_30 = *(longlong *)(param_3 + 4);
      *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1;
      pcVar7 = (char *)FUN_1435de070(param_1,local_38,&local_30);
      bVar4 = true;
      if (*pcVar7 == '\0') goto LAB_1435dfd50;
      uVar5 = 1;
    }
    *param_2 = uVar5;
    if (bVar4) {
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    break;
  case 0xb:
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (*(longlong *)(param_3 + 4) == 0) {
      local_res18[0] = 1;
      (**(code **)*puVar3)();
    }
    else {
      local_res18[0] = 10;
      (**(code **)*puVar3)(puVar3,param_2,local_res18);
    }
    break;
  case 0xc:
    if (*(longlong *)(param_3 + 4) != 0) {
      if (*(int *)(*(longlong *)(*(longlong *)(param_3 + 4) + 0x28) + 0x90) != 10) {
        FUN_1435de170(param_1);
        return param_2;
      }
      goto switchD_1435dfbd8_caseD_0;
    }
    local_res18[0] = 1;
LAB_1435dfbdf:
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),param_2,local_res18,1);
    break;
  default:
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1435dfe30 FUN_1435dfe30 body=104 status=ok
// SIG undefined FUN_1435dfe30(void)

void FUN_1435dfe30(longlong param_1)

{
  FUN_143561f90(param_1 + 0x90);
  FUN_1434f0160(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xb8),0);
  FUN_143561f90(param_1 + 0x58);
  FUN_1434f0160(param_1 + 0x68,*(undefined8 *)(param_1 + 0x80),0);
  FUN_143562100(param_1 + 0x20);
  FUN_1436138f0(param_1 + 0x30,*(undefined8 *)(param_1 + 0x48),0);
  return;
}



// FUNCTION 1435dfea0 FUN_1435dfea0 body=62 status=ok
// SIG undefined FUN_1435dfea0(void)

undefined8 FUN_1435dfea0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = FUN_1435c8090(*(undefined8 *)(param_1 + 8),&DAT_145b43470);
    uVar1 = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1435dfef0 FUN_1435dfef0 body=47 status=ok
// SIG undefined FUN_1435dfef0(void)

undefined1 FUN_1435dfef0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143611230();
  if (cVar1 != '\0') {
    cVar1 = FUN_1434b29c0(*(undefined8 *)(param_1 + 8));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435dff30 FUN_1435dff30 body=213 status=ok
// SIG undefined FUN_1435dff30(void)

undefined4 FUN_1435dff30(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  undefined **local_18;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = &PTR_FUN_145b4ae98;
  uVar4 = 0;
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x40) + uVar5 == 0) {
    return 0;
  }
  do {
    ppuVar1 = local_18;
    if (((longlong)uVar4 < 0) || (uVar4 < uVar5)) {
      lVar2 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar4);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x38) + 0x10 + ((uVar4 & 0xffffffff) - uVar5) * 0x40;
    }
    pcVar3 = (char *)(*(code *)ppuVar1[1])(&local_18,local_res8,lVar2);
    if (*pcVar3 == '\0') {
      return local_10;
    }
    if (((longlong)uVar4 < 0) ||
       (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28)))) {
      uVar4 = uVar4 + 1;
    }
    uVar5 = *(ulonglong *)(param_1 + 0x28);
  } while ((uVar4 & 0xffffffff) < *(longlong *)(param_1 + 0x40) + uVar5);
  return local_10;
}



// FUNCTION 1435e0010 FUN_1435e0010 body=77 status=ok
// SIG undefined FUN_1435e0010(void)

undefined8 * FUN_1435e0010(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_145b4afb0;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1435e0070 FUN_1435e0070 body=110 status=ok
// SIG undefined FUN_1435e0070(void)

void FUN_1435e0070(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b4afb0;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[4]);
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[1] = uVar1 - 1;
      *param_1 = &PTR_FUN_145b0aa60;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  *param_1 = &PTR_FUN_145b0aa60;
  return;
}



// FUNCTION 1435e00f0 FUN_1435e00f0 body=125 status=ok
// SIG undefined FUN_1435e00f0(void)

longlong FUN_1435e00f0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 *local_res8;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38) != 0) {
    Scaleform::GFx::DisplayObject::GetAbsolutePath();
    FUN_1432c3950(param_2,&DAT_145af796c,0xffffffffffffffff);
    Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x18),&local_res8);
    FUN_1432c3950(param_2,*local_res8,0xffffffffffffffff);
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return (*param_2 & 0xfffffffffffffffc) + 0xc;
}



// FUNCTION 1435e0190 FUN_1435e0190 body=226 status=ok
// SIG undefined FUN_1435e0190(void)

undefined8 FUN_1435e0190(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    if (((*(longlong *)(param_1 + 0x10) != 0) || (*(longlong *)(param_1 + 8) != 0)) &&
       ((*(byte *)(param_1 + 0x30) & 2) != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar3 = FUN_143611070(*(undefined8 *)(lVar2 + 0x20),2);
      FUN_143613d80(uVar3,lVar2,param_2);
    }
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
    return 1;
  }
  if (iVar1 == 0x1000013) {
    if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
      return 1;
    }
    uVar3 = 5;
  }
  else {
    if (1 < iVar1 + 0xfeffffebU) {
      return 0;
    }
    if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
      return 1;
    }
    uVar3 = 3;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_143611070(*(undefined8 *)(lVar2 + 0x20),uVar3);
  FUN_143613d80(uVar3,lVar2,param_2);
  return 1;
}



// FUNCTION 1435e0280 OnEventLoad body=53 status=ok
// SIG undefined OnEventLoad(void)

void Scaleform::GFx::AS3::AvmButton::OnEventLoad(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  FUN_1434f0700(param_1 + 8,uVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435e02c0 FUN_1435e02c0 body=75 status=ok
// SIG undefined FUN_1435e02c0(void)

void FUN_1435e02c0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  FUN_1435e1bf0();
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (-2 < *(int *)(lVar2 + 0x2c)) {
    FUN_1435e0f40(param_1);
    return;
  }
  if ((*(byte *)(lVar2 + 0x6a) >> 4 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x6a);
  *puVar1 = *puVar1 & 0xefef;
  return;
}



// FUNCTION 1435e0320 FUN_1435e0320 body=401 status=ok
// SIG undefined FUN_1435e0320(void)

void FUN_1435e0320(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  
  uVar3 = param_1[2];
  if (uVar3 == 0) {
    uVar3 = param_1[1];
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 - 1;
  }
  if (uVar3 != 0) {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (uVar3,&local_res8,*(longlong *)(param_1[3] + 0x20) + 0x298,1,0);
    FUN_1434f0700(local_res8 + 0x50,uVar3);
    FUN_14351a300(uVar3,local_res8,param_1[3]);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  cVar2 = FUN_1435e10c0(param_1);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1[3] + 0x20) + 0x20))();
    plVar1 = *(longlong **)(param_1[3] + 0x20);
    if (*(char *)(plVar1[0x11] + 0xb8) == '\0') {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      FUN_14351d190(&local_res8,plVar1[0x11],plVar1 + 0x54,0,0);
      (**(code **)(*param_1 + 0x90))(param_1,local_res8,param_2 == '\0');
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  param_1[2] = uVar3;
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    if ((uVar3 & 1) != 0) {
      param_1[1] = uVar3 - 1;
      param_1[1] = 0;
      return;
    }
    if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
      FUN_1434ef880();
    }
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1435e04c0 FUN_1435e04c0 body=237 status=ok
// SIG undefined FUN_1435e04c0(void)

undefined1 FUN_1435e04c0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if (uVar4 == 0) {
    uVar4 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 - 1;
  }
  if ((uVar4 != 0) &&
     ((cVar2 = FUN_14351a530(uVar4,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x298,0),
      cVar2 != '\0' ||
      (cVar2 = FUN_14351a530(uVar4,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2a0,0),
      cVar2 != '\0')))) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    local_28 = 0x1000010;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    uVar3 = FUN_143611070(*(undefined8 *)(lVar1 + 0x20),2);
    FUN_143613d80(uVar3,lVar1,&local_28);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2c) = 0xfffffffe;
    cVar2 = FUN_1435e10c0(param_1);
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1435e05c0 GetAS3Root body=9 status=ok
// SIG undefined GetAS3Root(void)

undefined8 Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
}



// FUNCTION 1435e05d0 FUN_1435e05d0 body=17 status=ok
// SIG undefined FUN_1435e05d0(void)

undefined8 FUN_1435e05d0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x10) + 0x48);
}



// FUNCTION 1435e05f0 GetAvmParent body=52 status=ok
// SIG undefined GetAvmParent(void)

longlong Scaleform::GFx::AS3::AvmDisplayObj::GetAvmParent(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
    if (lVar1 != 0) {
      return lVar1 + -0x38;
    }
  }
  return 0;
}



// FUNCTION 1435e0630 GetAS3Parent body=124 status=ok
// SIG undefined GetAS3Parent(void)

ulonglong Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (((lVar1 == 0) ||
      (lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                         (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4), lVar1 == 0)) ||
     (lVar1 == 0x38)) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if ((lVar1 == 0) ||
     (lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))(),
     lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + -0x38;
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  if (uVar2 == 0) {
    uVar2 = *(ulonglong *)(lVar1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  return uVar2 - 1;
}



// FUNCTION 1435e06c0 CreateASInstance body=74 status=ok
// SIG undefined CreateASInstance(void)

undefined8 Scaleform::GFx::AS3::AvmDisplayObj::CreateASInstance(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
    cVar1 = FUN_1435e0710();
    if (cVar1 != '\0') {
      uVar2 = FUN_1435e0a80(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1435e0710 FUN_1435e0710 body=873 status=ok
// SIG undefined FUN_1435e0710(void)

/* WARNING: Removing unreachable block (ram,0x0001435e0915) */
/* WARNING: Removing unreachable block (ram,0x0001435e091a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1435e0710(longlong *param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  longlong *plVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  longlong local_70;
  uint local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  int *local_50;
  longlong *plStack_48;
  longlong *local_40;
  
  if ((param_1[2] != 0) || (param_1[1] != 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1[3] + 0x20) + 0x88);
  if (lVar7 == 0) {
    return param_1[3] & 0xffffffffffffff00;
  }
  FUN_1432c2f70(&local_res10);
  (**(code **)(*param_1 + 0x80))(param_1,&local_res10);
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = (int *)0x0;
  local_88 = (longlong)(local_res10 & 0xfffffffffffffffc) + 0xc;
  uStack_80 = *(ulonglong *)(local_res10 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
  lVar4 = FUN_1435cc580(lVar7,&local_88,param_1[5]);
  if (lVar4 == 0) {
    if (*(char *)(lVar7 + 0xb8) == '\0') {
      uVar6 = FUN_1435c8e40(local_78,0x429,lVar7);
      FUN_1435ccf60(lVar7,uVar6,&DAT_145b14e70);
      piVar1 = (int *)(local_70 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        uVar10 = 0;
      }
      goto LAB_1435e08db;
    }
LAB_1435e08e4:
    FUN_1435cc020(lVar7);
    *(ushort *)(param_1[3] + 0x88) = *(ushort *)(param_1[3] + 0x88) | 0x20;
LAB_1435e08f8:
    uVar9 = 0;
  }
  else {
    uVar10 = 0xc;
    *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
    local_88._0_4_ = (uint)lVar4;
    local_88._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0x28) + 0xd8);
    local_68 = (uint)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = (uint)uStack_80;
    uStack_5c = uStack_80._4_4_;
    local_88 = lVar4;
    (**(code **)(*plVar8 + 0x58))(plVar8,local_58,plVar8);
    plVar2 = plStack_48;
    this = (RefCountNTSImpl *)param_1[3];
    if ((this != (RefCountNTSImpl *)0x0) &&
       (*(int *)(this + 8) = *(int *)(this + 8) + 1, this != (RefCountNTSImpl *)0x0)) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    if ((RefCountNTSImpl *)plStack_48[0x11] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plStack_48[0x11]);
    }
    plVar2[0x11] = (longlong)this;
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    FUN_1434f0700(param_1 + 1,plVar2);
    param_1[2] = 0;
    pcVar5 = (char *)(**(code **)(*plVar8 + 0x68))(plVar8,local_res8,local_58);
    if (*pcVar5 == '\0') {
LAB_1435e08db:
      if (*(char *)(lVar7 + 0xb8) != '\0') goto LAB_1435e08e4;
      goto LAB_1435e08f8;
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,1);
    uVar9 = 1;
  }
  if (9 < uVar10) {
    if (uVar10 == 10) {
      piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
      if ((local_68 & 1) == 0) {
        lVar7 = CONCAT44(uStack_64,local_68);
        goto LAB_1435e0958;
      }
    }
    else if ((uVar10 - 0xd < 2) && ((uStack_60 & 1) == 0)) {
      lVar7 = CONCAT44(uStack_5c,uStack_60);
LAB_1435e0958:
      if ((lVar7 != 0) && ((*(uint *)(lVar7 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  uVar10 = local_58[0] & 0x1f;
  if (9 < uVar10) {
    if ((local_58[0] >> 9 & 1) == 0) {
      if (uVar10 == 10) {
        plVar8 = plStack_48 + 3;
        *(int *)plVar8 = (int)*plVar8 + -1;
        if ((int)*plVar8 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
          plVar8 = plStack_48;
          if (((ulonglong)plStack_48 & 1) != 0) {
            plStack_48 = (longlong *)((longlong)plStack_48 + -1);
            goto LAB_1435e0a30;
          }
        }
        else {
          if (1 < uVar10 - 0xd) goto LAB_1435e0a30;
          plVar8 = local_40;
          if (((ulonglong)local_40 & 1) != 0) {
            local_40 = (longlong *)((longlong)local_40 + -1);
            goto LAB_1435e0a30;
          }
        }
        if ((plVar8 != (longlong *)0x0) && ((*(uint *)(plVar8 + 1) & 0x3fffff) != 0)) {
          *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_50 = *local_50 + -1;
      if (*local_50 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_58[0] = local_58[0] & 0xfffffde0;
      local_50 = (int *)0x0;
      plStack_48 = (longlong *)0x0;
      local_40 = (longlong *)0x0;
    }
  }
LAB_1435e0a30:
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  return uVar9;
}



// FUNCTION 1435e0a80 FUN_1435e0a80 body=493 status=ok
// SIG undefined FUN_1435e0a80(void)

undefined4 FUN_1435e0a80(longlong param_1,char param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_res8 [2];
  uint local_38 [2];
  int *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_28 = *(ulonglong *)(param_1 + 0x10);
  if ((local_28 == 0) && (*(longlong *)(param_1 + 8) == 0)) {
    return 0;
  }
  uVar6 = local_28;
  if (local_28 == 0) {
    uVar6 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 - 1;
  }
  plVar3 = *(longlong **)(uVar6 + 0x28);
  if (local_28 == 0) {
    local_28 = *(ulonglong *)(param_1 + 8);
  }
  if ((local_28 & 1) != 0) {
    local_28 = local_28 - 1;
  }
  local_38[0] = 0xc;
  local_30 = (int *)0x0;
  if (local_28 != 0) {
    *(uint *)(local_28 + 8) = *(int *)(local_28 + 8) + 1U & 0x8fffffff;
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x88);
  uVar7 = 0;
  uVar8 = uVar7;
  if (lVar4 == 0) goto LAB_1435e0b99;
  uVar6 = *(ulonglong *)(lVar4 + 0x108);
  local_res8[0] = 0;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_38,local_res8,0,0);
  if (*(char *)(lVar4 + 0xb8) == '\0') {
    uVar8 = 0;
    if (*(ulonglong *)(lVar4 + 0x108) <= uVar6) goto LAB_1435e0b99;
    if (param_2 == '\0') {
      uVar8 = 1;
      goto LAB_1435e0b99;
    }
    FUN_1435c8f90(lVar4,1);
    uVar8 = uVar7;
    if (*(char *)(lVar4 + 0xb8) == '\0') goto LAB_1435e0b99;
  }
  FUN_1435cc020(lVar4);
  puVar2 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x88);
  *puVar2 = *puVar2 | 0x20;
  uVar8 = uVar7;
LAB_1435e0b99:
  uVar5 = local_38[0] & 0x1f;
  if (9 < uVar5) {
    if ((local_38[0] >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(local_28 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        uVar6 = local_28;
        if ((((uVar5 == 0xb) || (uVar5 == 0xc)) || (uVar6 = local_20, uVar5 - 0xd < 2)) &&
           ((((uVar6 & 1) == 0 && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880();
          return uVar8;
        }
      }
    }
    else {
      *local_30 = *local_30 + -1;
      if (*local_30 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar8;
      }
    }
  }
  return uVar8;
}



// FUNCTION 1435e0c80 FUN_1435e0c80 body=122 status=ok
// SIG undefined FUN_1435e0c80(void)

undefined8 FUN_1435e0c80(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    local_res8[0] = (undefined4)((longlong *)param_1[3])[5];
    uVar1 = (**(code **)(*(longlong *)param_1[3] + 0x218))();
    lVar2 = FUN_143312150(uVar1,local_res8);
    if (lVar2 != 0) {
      FUN_1432c4d80(param_2,lVar2);
      return param_2;
    }
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  }
  Scaleform::String::operator=(param_2,lVar2);
  return param_2;
}



// FUNCTION 1435e0d00 FUN_1435e0d00 body=117 status=ok
// SIG undefined FUN_1435e0d00(void)

void FUN_1435e0d00(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38) != 0) {
    FUN_1434f0700(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 8) = uVar1 - 1;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1435e0d80 FUN_1435e0d80 body=152 status=ok
// SIG undefined FUN_1435e0d80(void)

void FUN_1435e0d80(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    if (uVar1 == 0) {
      uVar1 = *(ulonglong *)(param_1 + 8);
    }
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 - 1;
    }
    FUN_1434f0700(param_1 + 8,uVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar1;
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 8) = uVar1 - 1;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1435e0e20 FUN_1435e0e20 body=95 status=ok
// SIG undefined FUN_1435e0e20(void)

void FUN_1435e0e20(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  if ((uVar1 & 1) != 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 - 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
    *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
    FUN_1434ef880();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435e0e90 FUN_1435e0e90 body=44 status=ok
// SIG undefined FUN_1435e0e90(void)

undefined8 FUN_1435e0e90(longlong param_1)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x20))();
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x88);
}



// FUNCTION 1435e0ed0 FUN_1435e0ed0 body=95 status=ok
// SIG undefined FUN_1435e0ed0(void)

void FUN_1435e0ed0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  if ((uVar1 & 1) != 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 - 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
    *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
    FUN_1434ef880();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435e0f40 FUN_1435e0f40 body=103 status=ok
// SIG undefined FUN_1435e0f40(void)

void FUN_1435e0f40(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar1;
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 8) = uVar1 - 1;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1435e0fb0 FUN_1435e0fb0 body=83 status=ok
// SIG undefined FUN_1435e0fb0(void)

void FUN_1435e0fb0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 8) = uVar1 - 1;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1435e1010 FUN_1435e1010 body=131 status=ok
// SIG undefined FUN_1435e1010(void)

undefined8 FUN_1435e1010(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  bVar4 = param_1 == 0;
  do {
    if (bVar4) {
      return 0;
    }
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    uVar3 = uVar2;
    if (uVar2 == 0) {
      uVar3 = *(ulonglong *)(param_1 + 8);
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 - 1;
    }
    if (uVar3 != 0) {
      if (uVar2 == 0) {
        uVar2 = *(ulonglong *)(param_1 + 8);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 - 1;
      }
      if (*(longlong *)(uVar2 + 0x80) != 0) {
        return *(undefined8 *)(param_1 + 0x18);
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
    if (lVar1 == 0) {
      return 0;
    }
    param_1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
    if (param_1 == 0) {
      param_1 = 0;
      bVar4 = true;
    }
    else {
      param_1 = param_1 + -0x38;
      bVar4 = param_1 == 0;
    }
  } while( true );
}



// FUNCTION 1435e10a0 FUN_1435e10a0 body=16 status=ok
// SIG undefined FUN_1435e10a0(void)

undefined8 FUN_1435e10a0(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x198);
}



// FUNCTION 1435e10c0 FUN_1435e10c0 body=237 status=ok
// SIG undefined FUN_1435e10c0(void)

undefined8 FUN_1435e10c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar2 + 0x6a) < '\0') {
    if ((lVar2 == 0) ||
       (lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))(),
       lVar2 == 0)) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(lVar2 + -0x38);
    }
    cVar1 = (**(code **)(*plVar4 + 0xb0))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
    if (lVar2 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(lVar2 + -0x38);
    }
    while (plVar4 != (longlong *)0x0) {
      lVar2 = *(longlong *)(plVar4[3] + 0x38);
      if (((lVar2 == 0) ||
          (lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))
                             (), lVar2 == 0)) || (lVar2 == 0x38)) {
                    /* WARNING: Could not recover jumptable at 0x0001435e11a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4);
        return uVar3;
      }
      lVar2 = *(longlong *)(plVar4[3] + 0x38);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
      if (lVar2 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)(lVar2 + -0x38);
      }
    }
  }
  return 0;
}



// FUNCTION 1435e11c0 FUN_1435e11c0 body=1691 status=ok
// SIG undefined FUN_1435e11c0(void)

void FUN_1435e11c0(longlong *param_1,uint *param_2)

{
  int *piVar1;
  ushort *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffff58;
  uint local_98 [2];
  int *local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar8 = param_1[2];
  if (uVar8 == 0) {
    uVar8 = param_1[1];
  }
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 - 1;
  }
  if (uVar8 != 0) {
    *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
  }
  uVar4 = *param_2;
  if (uVar4 < 0x1000010) {
    if (uVar4 == 0x100000f) {
      uVar9 = param_1[2];
      lVar5 = *(longlong *)(param_1[3] + 0x20);
      if (uVar9 == 0) {
        uVar9 = param_1[1];
      }
      if ((uVar9 & 1) != 0) {
        uVar9 = uVar9 - 1;
      }
      if (((uVar9 != 0) && (cVar3 = FUN_14351a530(uVar9,lVar5 + 0x288,0), cVar3 != '\0')) &&
         (lVar7 = FUN_1435e0e90(param_1), *(char *)(lVar7 + 0xb8) == '\0')) {
        in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
        Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
                  (uVar9,&local_res8,lVar5 + 0x288,1,in_stack_ffffffffffffff58);
        FUN_1434f0700(local_res8 + 0x50,uVar9);
        FUN_14351a300(uVar9,local_res8,param_1[3]);
        if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
           ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      cVar3 = FUN_1435e10c0(param_1);
      if (cVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1[3] + 0x20) + 0x20))();
        plVar6 = *(longlong **)(param_1[3] + 0x20);
        if (*(char *)(plVar6[0x11] + 0xb8) == '\0') {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          FUN_14351d190(&local_res8,plVar6[0x11],plVar6 + 0x52,0,
                        in_stack_ffffffffffffff58 & 0xffffffffffffff00);
          (**(code **)(*param_1 + 0x90))(param_1,local_res8,0);
          if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
             ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      goto switchD_1435e1633_default;
    }
    if (uVar4 == 1) {
      (**(code **)(*(longlong *)param_1[3] + 0x250))();
      goto switchD_1435e1633_default;
    }
    if (uVar4 == 2) {
      if (uVar8 == 0) {
        return;
      }
      cVar3 = Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::MayHaveEnterFrameHandler
                        (uVar8);
      if (cVar3 == '\0') goto switchD_1435e1633_default;
      lVar5 = param_1[3];
      lVar7 = *(longlong *)(lVar5 + 0x20) + 0x2b0;
      goto LAB_1435e1497;
    }
    if (uVar4 != 0x200) {
      if (uVar4 == 0x40000) {
        FUN_1435e0a80(param_1,1);
      }
      goto switchD_1435e1633_default;
    }
    if ((((*(byte *)(param_1[3] + 0x88) & 1) == 0) ||
        (FUN_1435e0710(), (*(byte *)(param_1[3] + 0x88) >> 1 & 1) != 0)) ||
       (lVar5 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(param_1), lVar5 == 0))
    goto switchD_1435e1633_default;
    Scaleform::GFx::DisplayObject::GetName(param_1[3],&local_res10);
    lVar7 = local_res10;
    local_78 = 10;
    uStack_70 = 0;
    local_68 = local_res10;
    lVar5 = *(longlong *)(*(longlong *)(param_1[3] + 0x20) + 0x88);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    plVar6 = (longlong *)Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(param_1);
    uStack_88 = param_1[2];
    if (uStack_88 == 0) {
      uStack_88 = param_1[1];
    }
    if ((uStack_88 & 1) != 0) {
      uStack_88 = uStack_88 - 1;
    }
    local_98[0] = 0xc;
    local_90 = (int *)0x0;
    if (uStack_88 != 0) {
      *(uint *)(uStack_88 + 8) = *(int *)(uStack_88 + 8) + 1U & 0x8fffffff;
    }
    local_50 = *(longlong *)(lVar5 + 0x1d8);
    local_58[0] = 0;
    if (local_50 != 0) {
      *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
    }
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
    FUN_1435aef90(local_58,0);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_res8,local_58,local_98);
    FUN_1434e6250(local_58);
    uVar4 = local_98[0] & 0x1f;
    if (9 < uVar4) {
      if ((local_98[0] >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          piVar1 = (int *)(uStack_88 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
          uVar9 = uStack_88;
          if ((uStack_88 & 1) == 0) {
LAB_1435e13f5:
            if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            uStack_88 = uStack_88 - 1;
          }
        }
        else if (uVar4 - 0xd < 2) {
          uVar9 = local_80;
          if ((local_80 & 1) == 0) goto LAB_1435e13f5;
          local_80 = local_80 - 1;
        }
      }
      else {
        *local_90 = *local_90 + -1;
        if (*local_90 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_98[0] = local_98[0] & 0xfffffde0;
        local_90 = (int *)0x0;
        uStack_88 = 0;
        local_80 = 0;
      }
    }
    piVar1 = (int *)(lVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar7);
    }
    if (*(char *)(lVar5 + 0xb8) != '\0') {
      FUN_1435cc020(lVar5);
      puVar2 = (ushort *)(*(longlong *)(param_1[3] + 0x38) + 0x88);
      *puVar2 = *puVar2 | 0x20;
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    goto switchD_1435e1633_default;
  }
  switch(uVar4) {
  case 0x1000010:
    *(undefined4 *)(param_1[3] + 0x2c) = 0;
    uVar9 = param_1[2];
    lVar5 = *(longlong *)(param_1[3] + 0x20);
    if (uVar9 == 0) {
      uVar9 = param_1[1];
    }
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar9 - 1;
    }
    if (((uVar9 != 0) && (cVar3 = FUN_14351a530(uVar9,lVar5 + 0x298,0), cVar3 != '\0')) &&
       (lVar7 = FUN_1435e0e90(param_1), *(char *)(lVar7 + 0xb8) == '\0')) {
      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
      Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
                (uVar9,&local_res8,lVar5 + 0x298,1,in_stack_ffffffffffffff58);
      FUN_1434f0700(local_res8 + 0x50,uVar9);
      FUN_14351a300(uVar9,local_res8,param_1[3]);
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    if (((*(byte *)(param_1 + 6) & 1) != 0) &&
       (lVar5 = FUN_1435e0e90(param_1), *(char *)(lVar5 + 0xb8) == '\0')) {
      plVar6 = *(longlong **)(param_1[3] + 0x20);
      (**(code **)(*plVar6 + 0x20))(plVar6);
      FUN_14351d190(&local_res8,plVar6[0x11],plVar6 + 0x54,0,
                    in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      (**(code **)(*param_1 + 0x90))(param_1,local_res8,0);
      if ((local_res8 != 0) &&
         (((local_res8 & 1) == 0 && ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    (**(code **)(*(longlong *)param_1[3] + 0x260))();
    goto switchD_1435e1633_default;
  case 0x1000011:
    if (uVar8 == 0) {
      return;
    }
    cVar3 = FUN_14351a5f0(uVar8);
    break;
  case 0x1000012:
    if (uVar8 == 0) {
      return;
    }
    cVar3 = FUN_14351a610(uVar8);
    break;
  case 0x1000013:
    if (uVar8 == 0) {
      return;
    }
    cVar3 = FUN_14351a630(uVar8);
    if (cVar3 == '\0') goto switchD_1435e1633_default;
    cVar3 = FUN_1435e10c0(param_1);
    break;
  case 0x1000014:
    if (uVar8 == 0) {
      return;
    }
    goto LAB_1435e1817;
  case 0x1000015:
    if (uVar8 == 0) {
      return;
    }
    cVar3 = FUN_14351a4f0(uVar8);
    if (cVar3 == '\0') goto switchD_1435e1633_default;
    lVar5 = param_1[3];
    lVar7 = *(longlong *)(lVar5 + 0x20) + 0x2b8;
    goto LAB_1435e1497;
  case 0x1000016:
    if (uVar8 == 0) {
      return;
    }
    cVar3 = FUN_14351a510(uVar8);
    if (cVar3 == '\0') goto switchD_1435e1633_default;
    lVar5 = param_1[3];
    lVar7 = *(longlong *)(lVar5 + 0x20) + 0x2c0;
LAB_1435e1497:
    FUN_14351a360(uVar8,lVar7,uVar8,0,lVar5);
  default:
    goto switchD_1435e1633_default;
  }
  if (cVar3 != '\0') {
LAB_1435e1817:
    FUN_1435198d0(uVar8,param_2,param_1[3]);
  }
switchD_1435e1633_default:
  if (((uVar8 != 0) && ((uVar8 & 1) == 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
    FUN_1434ef880(uVar8);
  }
  return;
}



// FUNCTION 1435e1880 FUN_1435e1880 body=139 status=ok
// SIG undefined FUN_1435e1880(void)

void FUN_1435e1880(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  (**(code **)(*param_2 + 0xd0))(param_2,&local_res8);
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  if (uVar1 != 0) {
    FUN_1434f0700(local_res8 + 0x50,uVar1);
    FUN_14351a300(uVar1,local_res8,*(undefined8 *)(param_1 + 0x18));
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435e1920 FUN_1435e1920 body=361 status=ok
// SIG undefined FUN_1435e1920(void)

void FUN_1435e1920(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  FUN_14336d8b0(param_1[3]);
  uVar4 = param_1[2];
  lVar1 = *(longlong *)(param_1[3] + 0x20);
  if (uVar4 == 0) {
    uVar4 = param_1[1];
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 - 1;
  }
  FUN_1434f0700(param_1 + 1,uVar4);
  param_1[2] = 0;
  if (uVar4 != 0) {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (uVar4,&local_res8,lVar1 + 0x288,1,0);
    FUN_1434f0700(local_res8 + 0x50,uVar4);
    FUN_14351a300(uVar4,local_res8,param_1[3]);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  cVar3 = FUN_1435e10c0(param_1);
  if (cVar3 != '\0') {
    (**(code **)(**(longlong **)(param_1[3] + 0x20) + 0x20))();
    plVar2 = *(longlong **)(param_1[3] + 0x20);
    if (*(char *)(plVar2[0x11] + 0xb8) == '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      FUN_14351d190(&local_res8,plVar2[0x11],plVar2 + 0x52,0,0);
      (**(code **)(*param_1 + 0x90))(param_1,local_res8,param_2 == '\0');
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return;
}



// FUNCTION 1435e1a90 FUN_1435e1a90 body=117 status=ok
// SIG undefined FUN_1435e1a90(void)

void FUN_1435e1a90(longlong param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)((longlong)param_2 + lVar2 + 1) != '\0');
    _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x70))
                             (DAT_146b62f28,*(undefined8 *)(param_1 + 0x18),lVar2 + 2U,0);
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,lVar2 + 2U);
    *(void **)(param_1 + 0x20) = _Dst;
  }
  return;
}



// FUNCTION 1435e1b10 FUN_1435e1b10 body=113 status=ok
// SIG undefined FUN_1435e1b10(void)

undefined8 FUN_1435e1b10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  RefCountNTSImpl *this;
  char cVar1;
  RefCountNTSImpl *local_res8;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x200))
                    (*(longlong **)(param_1 + 0x18),param_3,1);
  if (cVar1 != '\0') {
    this = *(RefCountNTSImpl **)(param_1 + 0x18);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    local_res8 = this;
    FUN_143610fa0(param_2,0,&local_res8);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1435e1b90 FUN_1435e1b90 body=81 status=ok
// SIG undefined FUN_1435e1b90(void)

ulonglong FUN_1435e1b90(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    lVar2 = (**(code **)(**(longlong **)(uVar1 + 0x28) + 0x38))();
    uVar3 = 0;
    if ((lVar2 != 0) &&
       (uVar3 = *(ulonglong *)(lVar2 + 0xa0), *(longlong *)(uVar3 + 0x178) == param_2)) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1435e1bf0 FUN_1435e1bf0 body=782 status=ok
// SIG undefined FUN_1435e1bf0(void)

void FUN_1435e1bf0(longlong param_1)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  uint local_98 [2];
  int *local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x88) >> 1 & 1) != 0) {
    return;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x88) & 1) == 0) {
    return;
  }
  lVar5 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (lVar5 == 0) {
LAB_1435e1c74:
    lVar5 = 0;
  }
  else {
    lVar6 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 8))();
    lVar5 = lVar6 + -0x38;
    if (lVar6 == 0) goto LAB_1435e1c74;
  }
  plVar10 = *(longlong **)(lVar5 + 0x10);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)(lVar5 + 8);
  }
  if (((ulonglong)plVar10 & 1) != 0) {
    plVar10 = (longlong *)((longlong)plVar10 + -1);
  }
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x88);
  Scaleform::GFx::DisplayObject::GetName(*(longlong *)(param_1 + 0x18),&local_res10);
  lVar3 = local_res10;
  local_78 = 10;
  uStack_70 = 0;
  local_68 = local_res10;
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  local_50 = *(longlong *)(lVar6 + 0x1d8);
  local_58[0] = 0;
  if (local_50 != 0) {
    *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
  }
  local_68._0_4_ = (undefined4)local_res10;
  local_68._4_4_ = (undefined4)((ulonglong)local_res10 >> 0x20);
  local_48 = 10;
  uStack_44 = uStack_74;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  local_68 = lVar3;
  FUN_1435aef90(local_58,0);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  local_98[0] = 0;
  local_90 = (int *)0x0;
  pcVar7 = (char *)(**(code **)(*plVar10 + 0x28))(plVar10,local_res8,local_58,local_98);
  if (*pcVar7 == '\0') {
LAB_1435e1d51:
    if (*(char *)(lVar6 + 0xb8) != '\0') {
      FUN_1435cc020(lVar6);
    }
    puVar2 = (ushort *)(*(longlong *)(lVar5 + 0x18) + 0x88);
    *puVar2 = *puVar2 | 0x20;
LAB_1435e1e1d:
    uVar4 = local_98[0] & 0x1f;
    if (uVar4 < 10) goto LAB_1435e1ebc;
    if ((local_98[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(uStack_88 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        goto LAB_1435e1ebc;
      }
      if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
LAB_1435e1e87:
        uVar8 = uStack_88;
        if ((uStack_88 & 1) != 0) {
          uStack_88 = uStack_88 - 1;
          goto LAB_1435e1ebc;
        }
      }
      else {
        if (1 < uVar4 - 0xd) goto LAB_1435e1ebc;
        uVar8 = local_80;
        if ((local_80 & 1) != 0) {
          local_80 = local_80 - 1;
          goto LAB_1435e1ebc;
        }
      }
      if ((uVar8 != 0) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
        FUN_1434ef880();
      }
      goto LAB_1435e1ebc;
    }
    *local_90 = *local_90 + -1;
    if (*local_90 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  else {
    if (((byte)local_98[0] & 0x1f) != 0xc) goto LAB_1435e1e1d;
    uVar8 = *(ulonglong *)(param_1 + 0x10);
    if (uVar8 == 0) {
      uVar8 = *(ulonglong *)(param_1 + 8);
    }
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 - 1;
    }
    if (uStack_88 != uVar8) goto LAB_1435e1e1d;
    plVar10 = *(longlong **)(lVar5 + 0x10);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar5 + 8);
    }
    if (((ulonglong)plVar10 & 1) != 0) {
      plVar10 = (longlong *)((longlong)plVar10 + -1);
    }
    if (plVar10 != (longlong *)0x0) {
      lVar3 = *plVar10;
      uVar9 = FUN_1435905b0();
      pcVar7 = (char *)(**(code **)(lVar3 + 0x20))(plVar10,local_res8,local_58,uVar9);
      if (*pcVar7 == '\0') goto LAB_1435e1d51;
      goto LAB_1435e1e1d;
    }
    if ((local_98[0] >> 9 & 1) == 0) goto LAB_1435e1e87;
    *local_90 = *local_90 + -1;
    if (*local_90 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      local_98[0] = local_98[0] & 0xfffffde0;
      local_90 = (int *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      goto LAB_1435e1ebc;
    }
  }
  local_98[0] = local_98[0] & 0xfffffde0;
  local_90 = (int *)0x0;
  uStack_88 = 0;
  local_80 = 0;
LAB_1435e1ebc:
  FUN_1434e6250(local_58);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435e1f10 FUN_1435e1f10 body=197 status=ok
// SIG undefined FUN_1435e1f10(void)

undefined8 *
FUN_1435e1f10(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  
  param_5._0_4_ = *param_5;
  FUN_14336c360(param_1,param_3,param_4,&param_5);
  puVar1 = param_1 + 0x12;
  *puVar1 = &PTR_FUN_145b4afb0;
  param_1[0x13] = 0;
  param_1[0x15] = param_1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_1,puVar1);
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_145b4b060;
  param_1[3] = &PTR_LAB_145b4b310;
  *puVar1 = &PTR_LAB_145b4b320;
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  param_1[0x19] = param_2;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 1435e1fe0 FUN_1435e1fe0 body=116 status=ok
// SIG undefined FUN_1435e1fe0(void)

void FUN_1435e1fe0(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 0;
  *param_1 = &PTR_FUN_145b4b060;
  param_1[3] = &PTR_LAB_145b4b310;
  param_1[0x12] = &PTR_LAB_145b4b320;
  if ((RefCountNTSImpl *)param_1[0x1a] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x1a]);
  }
  if (param_1[0x19] != 0) {
    FUN_1432de450();
  }
  FUN_1435e0070(param_1 + 0x12);
  FUN_14336c3d0(param_1);
  return;
}



// FUNCTION 1435e2060 FUN_1435e2060 body=324 status=ok
// SIG undefined FUN_1435e2060(void)

float * FUN_1435e2060(longlong *param_1,float *param_2,Matrix2x4<float> *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  Rect<float> *pRVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar3 = param_1[0x1a];
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  if (lVar3 == 0) {
    plVar4 = (longlong *)param_1[0x19];
    lVar3 = *plVar4;
    uVar6 = (**(code **)(*param_1 + 0x88))(param_1);
    pRVar5 = (Rect<float> *)(**(code **)(lVar3 + 0x38))(plVar4,&local_28,uVar6);
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,(Rect<float> *)&local_18,pRVar5);
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 2) = uStack_10;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    FUN_14337e9c0(lVar3,&local_18);
    if (((float)local_18 < (float)uStack_10) && (local_18._4_4_ < uStack_10._4_4_)) {
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                (param_3,(Rect<float> *)&local_28,(Rect<float> *)&local_18);
      fVar1 = *param_2;
      fVar8 = param_2[2];
      if (fVar1 < fVar8) {
        fVar2 = param_2[1];
        fVar7 = param_2[3];
        if (fVar2 < fVar7) {
          if (fVar8 <= fStack_20) {
            fVar8 = fStack_20;
          }
          if (fVar7 <= fStack_1c) {
            fVar7 = fStack_1c;
          }
          if (fVar1 <= local_28) {
            local_28 = fVar1;
          }
          if (fVar2 <= fStack_24) {
            fStack_24 = fVar2;
          }
          param_2[2] = fVar8;
          param_2[3] = fVar7;
          *param_2 = local_28;
          param_2[1] = fStack_24;
          return param_2;
        }
      }
      *(ulonglong *)param_2 = CONCAT44(fStack_24,local_28);
      *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_1c,fStack_20);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1435e21b0 FUN_1435e21b0 body=114 status=ok
// SIG undefined FUN_1435e21b0(void)

undefined8 FUN_1435e21b0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    cVar1 = FUN_14337f0b0(*(longlong *)(param_1 + 0xd0),param_2,param_3 & 0xffffffffffffff01,param_1
                         );
    if (cVar1 != '\0') {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001435e221e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
                    (*(longlong **)(param_1 + 200),param_2,(byte)param_3 & 1,param_1);
  return uVar2;
}



// FUNCTION 1435e2230 FUN_1435e2230 body=163 status=ok
// SIG undefined FUN_1435e2230(void)

undefined8 FUN_1435e2230(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    lVar2 = FUN_14336b9a0(param_1,*(undefined8 *)(param_1 + 200),param_2,
                          *(undefined1 *)((longlong)param_3 + 0x24),param_3[2]);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      return 3;
    }
  }
  else {
    cVar1 = FUN_14336d7e0(param_1,local_res8,param_2,1,0);
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_14337f0b0(*(undefined8 *)(param_1 + 0xd0),local_res8,1,param_1), cVar1 != '\0'))
    {
      *param_3 = *(longlong *)(param_1 + 0x38);
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1435e22e0 FUN_1435e22e0 body=272 status=ok
// SIG undefined FUN_1435e22e0(void)

undefined8 FUN_1435e22e0(longlong param_1)

{
  ulonglong uVar1;
  RefCountNTSImpl *this;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    this = (RefCountNTSImpl *)FUN_14336cc10();
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      FUN_14336cc90(param_1,0,1);
    }
    uVar2 = FUN_1432ec700(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    if (*(RefCountNTSImpl **)(param_1 + 0xd0) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0xd0));
    }
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    uVar3 = FUN_143366100(param_1);
    FUN_143364170(uVar3,0,1);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x20);
    lVar4 = FUN_1432cd1e0(uVar3);
    uVar1 = *(ulonglong *)(lVar4 + 0x90);
    lVar5 = 0;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        lVar5 = (ulonglong)(*(longlong *)(lVar4 + 0x98) != 0) + 1;
      }
      else {
        lVar5 = *(longlong *)((uVar1 & 0xfffffffffffffffe) + 8);
      }
    }
    FUN_143364100(uVar3,lVar5,uVar2);
    if (this != (RefCountNTSImpl *)0x0) {
      FUN_14336cc90(param_1,this,1);
      Scaleform::RefCountNTSImpl::Release(this);
    }
    return *(undefined8 *)(param_1 + 0xd0);
  }
  return *(undefined8 *)(param_1 + 0xd0);
}



// FUNCTION 1435e2400 FUN_1435e2400 body=73 status=ok
// SIG undefined FUN_1435e2400(void)

undefined8 FUN_1435e2400(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x19];
  uVar2 = (**(code **)(*param_1 + 0x218))();
  FUN_1433b30d0(lVar1,param_2,param_3,uVar2);
  return param_2;
}



// FUNCTION 1435e2450 FUN_1435e2450 body=62 status=ok
// SIG undefined FUN_1435e2450(void)

undefined4 FUN_1435e2450(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_1432cd1e0();
    if (*(short *)(lVar1 + 8) == 3) {
      lVar1 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x48));
      return *(undefined4 *)(lVar1 + 0x98);
    }
  }
  return 0;
}



// FUNCTION 1435e24a0 FUN_1435e24a0 body=75 status=ok
// SIG undefined FUN_1435e24a0(void)

void FUN_1435e24a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14336b350();
  if (lVar1 != 0) {
    lVar1 = FUN_1432cd1e0(lVar1);
    if (*(short *)(lVar1 + 8) == 3) {
      lVar1 = FUN_1432cd080(*(undefined8 *)(param_1 + 0x48),0x10);
      *(undefined4 *)(lVar1 + 0x98) = param_2;
    }
  }
  return;
}



// FUNCTION 1435e2500 FUN_1435e2500 body=378 status=ok
// SIG undefined FUN_1435e2500(void)

undefined8 *
FUN_1435e2500(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             int *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int local_18 [2];
  longlong local_10;
  
  piVar3 = param_5;
  param_5._0_4_ = *param_5;
  FUN_14336c360(param_1,param_2,param_4,&param_5);
  puVar1 = param_1 + 0x12;
  *puVar1 = &PTR_FUN_145b4afb0;
  param_1[0x13] = 0;
  param_1[0x15] = param_1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_1,puVar1);
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_145b4b3e8;
  param_1[3] = &PTR_LAB_145b4b698;
  *puVar1 = &PTR_LAB_145b4b6a8;
  lVar2 = *(longlong *)(param_3 + 8);
  if (lVar2 != 0) {
    Scaleform::GFx::Resource::AddRef(lVar2);
  }
  param_1[0x19] = lVar2;
  param_1[0x1a] = 0;
  plVar6 = *(longlong **)(param_3 + 0x10);
  if (*piVar3 != 0x40000) {
    local_18[0] = 0;
    local_10 = 0;
    param_5._0_4_ = *piVar3;
    cVar4 = FUN_14330e8c0(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1[0x19] + 0x70) + 0x18) + 0x40),
                          local_18,&param_5);
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FUN_143317160(local_18,*(longlong *)(param_1[0x19] + 0x70) + 0x30);
    }
    if ((local_18[0] == 0) && (local_10 != 0)) {
      FUN_1432de450();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((uVar5 & 0xff00) == 0x100) {
      Scaleform::GFx::Resource::AddRef(plVar6);
      if (param_1[0x1a] != 0) {
        FUN_1432de450();
      }
      param_1[0x1a] = plVar6;
    }
  }
  return param_1;
}



// FUNCTION 1435e2680 FUN_1435e2680 body=141 status=ok
// SIG undefined FUN_1435e2680(void)

void FUN_1435e2680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b4b3e8;
  param_1[3] = &PTR_LAB_145b4b698;
  param_1[0x12] = &PTR_LAB_145b4b6a8;
  if (param_1[0x19] != 0) {
    FUN_1432ec7d0(*(undefined8 *)(param_1[4] + 0x10));
  }
  *(undefined1 *)((longlong)param_1 + 0x6d) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1432de450();
  }
  if (param_1[0x19] != 0) {
    FUN_1432de450();
  }
  FUN_1435e0070(param_1 + 0x12);
  FUN_14336c3d0(param_1);
  return;
}



// FUNCTION 1435e2720 FUN_1435e2720 body=1092 status=ok
// SIG undefined FUN_1435e2720(void)

ulonglong FUN_1435e2720(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 local_res8;
  uint local_resc;
  ulonglong local_res18 [2];
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar17;
  uint local_98;
  undefined4 uStack_94;
  int *piStack_90;
  uint local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  int *piStack_50;
  ulonglong local_48 [2];
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar13 = 0;
  uVar12 = *(ulonglong *)(param_1 + 0x10);
  uVar14 = 0;
  uVar7 = uVar12;
  if (uVar12 == 0) {
    uVar7 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 - 1;
  }
  uVar15 = uVar13;
  if ((((uVar7 == 0) && (uVar15 = uVar14, uVar12 == 0)) && (*(longlong *)(param_1 + 8) == 0)) &&
     (cVar5 = FUN_1435e0710(param_1), cVar5 != '\0')) {
    uVar6 = FUN_1435e0a80(param_1,param_2);
    uVar15 = (ulonglong)uVar6;
  }
  uVar12 = *(ulonglong *)(param_1 + 0x10);
  uVar7 = uVar12;
  if (uVar12 == 0) {
    uVar7 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 - 1;
  }
  if (uVar7 == 0) {
    return uVar15;
  }
  if (uVar12 == 0) {
    uVar12 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 - 1;
  }
  if (*(longlong *)(uVar12 + 0x98) != 0) {
    return uVar15;
  }
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x218))();
  if (lVar8 == 0) {
    return uVar15;
  }
  local_68 = 0;
  local_48[0] = 0;
  local_78 = 4;
  uStack_70 = 0;
  local_58[0] = 4;
  piStack_50 = (int *)0x0;
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x18), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_res8);
    local_88 = local_res8;
    local_98 = 3;
    piStack_90 = (int *)0x0;
    FUN_143603d30(&local_78);
    local_78 = local_98;
    local_98 = 3;
    uStack_74 = uStack_94;
    uStack_70 = piStack_90;
    local_68 = CONCAT44(uStack_84,local_88);
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    piStack_90 = (int *)0x0;
    local_88 = local_resc;
    FUN_143603d30(local_58);
    local_48[0] = CONCAT44(uStack_84,local_88);
    local_58[0] = local_98;
    local_58[1] = uStack_94;
    piStack_50 = piStack_90;
  }
  local_res18[0] = 0;
  local_res8 = (undefined4)(*(longlong **)(param_1 + 0x18))[5];
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x218))();
  puVar10 = (ulonglong *)FUN_143312150(uVar9,&local_res8);
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x88);
  if (puVar10 == (ulonglong *)0x0) {
    FUN_1435ccdc0(lVar8,&local_res8,local_res18,"flash.display.BitmapData",CONCAT44(uVar17,2),
                  &local_78);
    uVar13 = local_res18[0];
    goto LAB_1435e2a2c;
  }
  local_98 = 0;
  piStack_90 = (int *)0x0;
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,2);
  cVar5 = FUN_1435ccb40(lVar8,(*puVar10 & 0xfffffffffffffffc) + 0xc,*(undefined8 *)(param_1 + 0x28),
                        &local_98,local_res18,&local_78);
  if (cVar5 != '\0') {
    if (param_2 == '\0') {
      uVar15 = (ulonglong)((int)uVar15 + 1);
    }
    else {
      FUN_1435c8f90(lVar8,1);
    }
  }
  uVar7 = CONCAT44(uStack_84,local_88);
  if (*(char *)(lVar8 + 0xb8) == '\0') {
    uVar6 = local_98 & 0x1f;
    if (uVar6 != 0) {
      if (uVar6 == 0xc) {
        bVar16 = uVar7 == 0;
LAB_1435e2951:
        if (bVar16) goto LAB_1435e2980;
      }
      else if (uVar6 == 10) {
        bVar16 = uVar7 == *(longlong *)(uVar7 + 8) + 0x80U;
        goto LAB_1435e2951;
      }
      if (uVar7 != 0) {
        *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
        *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0x8fffffff;
        uVar13 = uVar7;
        goto LAB_1435e2979;
      }
    }
  }
  else {
    FUN_1435cc020(lVar8);
LAB_1435e2979:
    uVar7 = CONCAT44(uStack_84,local_88);
  }
LAB_1435e2980:
  uVar6 = local_98 & 0x1f;
  if (9 < uVar6) {
    if ((local_98 >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar3 = (int *)(uVar7 + 0x18);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FUN_14335f920();
        }
      }
      else {
        uVar4 = local_88;
        if ((uVar6 != 0xb) && (uVar6 != 0xc)) {
          if (1 < uVar6 - 0xd) goto LAB_1435e2a2c;
          uVar7 = CONCAT44(uStack_7c,uStack_80);
          uVar4 = uStack_80;
        }
        if ((((uVar4 & 1) == 0) && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piStack_90 = *piStack_90 + -1;
      if (*piStack_90 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
LAB_1435e2a2c:
  lVar8 = 2;
  puVar10 = (ulonglong *)&stack0xffffffffffffffd8;
  if (uVar13 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar11 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x218))();
    FUN_1434f5d50(uVar13,uVar9,uVar11);
    FUN_1435167a0(uVar12,uVar13);
    puVar10 = (ulonglong *)&stack0xffffffffffffffd8;
    if (((uVar13 & 1) == 0) &&
       (puVar10 = (ulonglong *)&stack0xffffffffffffffd8, (*(uint *)(uVar13 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
      FUN_1434ef880(uVar13);
      puVar10 = (ulonglong *)&stack0xffffffffffffffd8;
    }
  }
  do {
    puVar1 = puVar10 + -4;
    lVar8 = lVar8 + -1;
    uVar6 = (uint)puVar10[-6] & 0x1f;
    if (9 < uVar6) {
      if (((uint)puVar10[-6] >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          piVar3 = (int *)(*puVar1 + 0x18);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          uVar12 = *puVar1;
          if ((uVar12 & 1) == 0) {
LAB_1435e2b15:
            if ((uVar12 != 0) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar12 - 1;
          }
        }
        else if (uVar6 - 0xd < 2) {
          uVar12 = puVar10[-3];
          if ((uVar12 & 1) == 0) goto LAB_1435e2b15;
          puVar10[-3] = uVar12 - 1;
        }
      }
      else {
        piVar3 = (int *)puVar10[-5];
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(uint *)(puVar10 + -6) = (uint)puVar10[-6] & 0xfffffde0;
        puVar10[-5] = 0;
        *puVar1 = 0;
        puVar10[-3] = 0;
      }
    }
    puVar10 = puVar1;
    if (lVar8 == 0) {
      return uVar15;
    }
  } while( true );
}



// FUNCTION 1435e2b70 FUN_1435e2b70 body=411 status=ok
// SIG undefined FUN_1435e2b70(void)

Rect<float> * FUN_1435e2b70(longlong param_1,Rect<float> *param_2,Matrix2x4<float> *param_3)

{
  longlong *plVar1;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38 [3];
  float local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_58 = 0.0;
  fStack_54 = 0.0;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18);
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
    local_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
    uStack_c = 0;
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18) + 0x48))();
    if (plVar1 == (longlong *)0x0) {
      local_58 = (float)(uint)(local_48 * 0x14);
      fStack_54 = (float)(uint)(local_44 * 0x14);
      fStack_50 = (float)(uint)(local_40 * 0x14);
      fStack_4c = (float)(uint)(local_3c * 0x14);
    }
    else {
      (**(code **)(*plVar1 + 0x70))(plVar1,&local_28);
      local_38[1] = (float)(uint)(local_44 * 0x14);
      local_38[0] = (float)(uint)(local_48 * 0x14);
      local_38[2] = (float)(uint)(local_40 * 0x14);
      local_2c = (float)(uint)(local_3c * 0x14);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_28,(Rect<float> *)&local_58,(Rect<float> *)local_38);
    }
  }
  local_38[0] = 0.0;
  local_38[1] = 0.0;
  local_38[2] = (fStack_50 - local_58) + 0.0;
  local_2c = (fStack_4c - fStack_54) + 0.0;
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,param_2,(Rect<float> *)local_38);
  return param_2;
}



// FUNCTION 1435e2d20 FUN_1435e2d20 body=140 status=ok
// SIG undefined FUN_1435e2d20(void)

ulonglong FUN_1435e2d20(longlong param_1,float *param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18);
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
    in_RAX = (ulonglong)(uint)(local_c - local_14);
    if ((((*param_2 <= (float)(uint)(local_10 - local_18) * 20.0 + 0.0) && (0.0 <= *param_2)) &&
        (param_2[1] <= (float)in_RAX * 20.0 + 0.0)) && (0.0 <= param_2[1])) {
      return CONCAT71((uint7)(uint3)((uint)(local_c - local_14) >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1435e2e00 FUN_1435e2e00 body=356 status=ok
// SIG undefined FUN_1435e2e00(void)

undefined8 FUN_1435e2e00(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  float local_res8;
  float local_resc;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if ((cVar1 != '\0') && (param_1[0x1a] != 0)) {
    FUN_14336b000(param_1,&local_res8,param_2,1,0);
    (**(code **)(**(longlong **)(param_1[0x1a] + 0x18) + 0x30))
              (*(longlong **)(param_1[0x1a] + 0x18),&local_48);
    local_58 = 0;
    fStack_50 = (float)(uint)(local_40 - local_48) * 20.0 + 0.0;
    fStack_4c = (float)(uint)(local_3c - local_44) * 20.0 + 0.0;
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1[0x1a] + 0x18) + 0x48))();
    if (plVar2 != (longlong *)0x0) {
      local_28 = 0x3f800000;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_18 = 0;
      uStack_14 = 0x3f800000;
      uStack_10 = 0;
      uStack_c = 0;
      (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
      uStack_30 = CONCAT44(fStack_4c,fStack_50);
      local_38 = local_58;
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_28,(Rect<float> *)&local_58,(Rect<float> *)&local_38);
    }
    if ((((local_res8 <= fStack_50) && ((float)local_58 <= local_res8)) && (local_resc <= fStack_4c)
        ) && (local_58._4_4_ <= local_resc)) {
      *param_3 = param_1[7];
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1435e2f70 SetResourceMovieDef body=64 status=ok
// SIG undefined SetResourceMovieDef(void)

void Scaleform::GFx::AS3::AvmBitmap::SetResourceMovieDef(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    Resource::AddRef(param_2);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1432de450();
  }
  *(longlong *)(param_1 + 200) = param_2;
  return;
}



// FUNCTION 1435e3020 FUN_1435e3020 body=470 status=ok
// SIG undefined FUN_1435e3020(void)

longlong FUN_1435e3020(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_res8;
  
  uVar7 = param_1[0x14];
  if (uVar7 == 0) {
    uVar7 = param_1[0x13];
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 - 1;
  }
  lVar2 = param_1[9];
  lVar8 = 0;
  uVar9 = 0xffffffff;
  if (uVar7 != 0) {
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
      lVar3 = FUN_1432cd1e0(lVar2);
      if ((*(byte *)(lVar3 + 10) >> 5 & 1) == 0) {
        lVar8 = *(longlong *)(param_1[9] + 0x30);
      }
      uVar9 = 0;
      uVar4 = FUN_1432f0f80(lVar8);
      if (uVar4 != 0) {
        do {
          lVar3 = FUN_1432cd1e0(lVar8);
          puVar6 = (ulonglong *)(lVar3 + 0x90);
          if ((*(byte *)puVar6 & 1) != 0) {
            puVar6 = (ulonglong *)((*puVar6 & 0xfffffffffffffffe) + 0x10);
          }
        } while ((puVar6[uVar9] != param_1[9]) && (uVar9 = uVar9 + 1, uVar9 < uVar4));
      }
      FUN_143364170(lVar8,uVar9,1);
    }
    lVar3 = FUN_1434fa200(uVar7);
    if (lVar3 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar3);
    }
    if (param_1[0x1a] != 0) {
      FUN_1432de450();
    }
    param_1[0x1a] = lVar3;
  }
  lVar3 = param_1[9];
  if (lVar2 != 0) {
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
    }
    lVar2 = param_1[9];
    plVar5 = (longlong *)
             (**(code **)(*param_1 + 8))
                       (param_1,&local_res8,*(longlong *)(param_1[4] + 0x10) + 0x5350);
    if (*plVar5 != 0) {
      plVar1 = (longlong *)(*plVar5 + 0x18);
      *plVar1 = *plVar1 + 1;
    }
    if (param_1[9] != 0) {
      plVar1 = (longlong *)(param_1[9] + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    param_1[9] = *plVar5;
    if (local_res8 != 0) {
      plVar5 = (longlong *)(local_res8 + 0x18);
      *plVar5 = *plVar5 + -1;
      if (*plVar5 == 0) {
        FUN_1432ccf00();
      }
    }
    lVar3 = param_1[9];
    if (lVar3 != 0) {
      if (lVar2 == 0) {
        FUN_143362a30(lVar3,(byte)((ushort)*(undefined2 *)((longlong)param_1 + 0x6a) >> 0xe) & 1);
      }
      else {
        FUN_143362510(lVar3,lVar2);
      }
      if (lVar8 != 0) {
        FUN_143364100(lVar8,uVar9,param_1[9]);
      }
    }
    if (lVar2 != 0) {
      plVar5 = (longlong *)(lVar2 + 0x18);
      *plVar5 = *plVar5 + -1;
      if (*plVar5 == 0) {
        FUN_1432ccf00(lVar2);
      }
    }
    lVar3 = param_1[9];
  }
  return lVar3;
}



// FUNCTION 1435e3200 FUN_1435e3200 body=227 status=ok
// SIG undefined FUN_1435e3200(void)

undefined8 * FUN_1435e3200(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,0xa0,0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar3,3);
    *puVar3 = &PTR_FUN_145af92d8;
    puVar3[0x12] = 0;
    *(undefined4 *)(puVar3 + 0x13) = 0;
  }
  uVar4 = FUN_1432ceba0(param_3,puVar3);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  cVar2 = FUN_1435e32f0(param_1);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *param_2 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
      *plVar1 = *plVar1 + 1;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  return param_2;
}



// FUNCTION 1435e32f0 FUN_1435e32f0 body=1575 status=ok
// SIG undefined FUN_1435e32f0(void)

undefined8 FUN_1435e32f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  RefCountImpl *this;
  RefCountImpl *pRVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  RefCountImpl *this_00;
  undefined8 uVar7;
  undefined4 *puVar8;
  RefCountImpl *this_01;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  float local_e8 [4];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,uVar7);
  this = (RefCountImpl *)(**(code **)(*plVar2 + 0x50))(plVar2,0x80,0);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined4 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(RefCountImpl **)(this + 0x48) = this + 0x68;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR_FUN_145af9280;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
  }
  this_00 = (RefCountImpl *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  pRVar3 = (RefCountImpl *)(**(code **)(*plVar2 + 0x50))(plVar2,0x50);
  this_01 = this_00;
  if (pRVar3 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar3 + 8) = 0;
    *(undefined ***)pRVar3 = &PTR_FUN_144f70a50;
    *(undefined ***)pRVar3 = &PTR_FUN_145affbc0;
    *(undefined4 *)(pRVar3 + 8) = 1;
    *(undefined8 *)(pRVar3 + 0x10) = 0;
    *(undefined8 *)(pRVar3 + 0x18) = 0;
    *(undefined8 *)(pRVar3 + 0x20) = 0x3f800000;
    *(undefined8 *)(pRVar3 + 0x28) = 0;
    *(undefined4 *)(pRVar3 + 0x30) = 0;
    *(undefined8 *)(pRVar3 + 0x34) = 0x3f800000;
    *(undefined4 *)(pRVar3 + 0x3c) = 0;
    *(undefined2 *)(pRVar3 + 0x40) = 0;
    *(undefined4 *)(pRVar3 + 0x44) = 0xffffffff;
    this_01 = pRVar3;
  }
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    FUN_1432f3130(this,0,0,0);
    FUN_1432f15c0(this,0,0);
    FUN_1432f1450(this,0x3f800000,0x3f800000);
    if ((*(float *)(this + 0x5c) != *(float *)(this + 0x54)) ||
       (*(float *)(this + 0x60) != *(float *)(this + 0x58))) {
      FUN_1432f1450(this,*(float *)(this + 0x54),*(undefined4 *)(this + 0x58));
    }
    FUN_1432f0880(this);
    FUN_1432f0900(this);
    lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x90,0);
    if (lVar6 != 0) {
      this_00 = (RefCountImpl *)FUN_143371000(lVar6,this,0);
    }
    FUN_1432f2e20(uVar7,this_00);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this_00);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18) + 0x18))();
    if (iVar1 == 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      pRVar3 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))(lVar6 + 0x10,0xe);
      if (pRVar3 == (RefCountImpl *)0x0) {
        local_res10[0] = 0x21000;
        FUN_1433db230(local_res10,"Image is not created: can\'t find ImageCreator.");
        uVar7 = 0;
        goto LAB_1435e38c7;
      }
      Scaleform::RefCountImpl::Release(pRVar3);
      local_80 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x48);
      local_88[0] = 3;
      local_78 = 1;
      local_74 = 1;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)pRVar3 + 0x20))
                         (pRVar3,local_88,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x18));
LAB_1435e34e2:
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        goto LAB_1435e34e2;
      }
    }
    if (*(longlong **)(this_01 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(this_01 + 0x10) + 0x10))();
    }
    *(longlong **)(this_01 + 0x10) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      local_res8[0] = 0x21000;
      FUN_1433db230(local_res8,"Image is not created.");
      uVar7 = 0;
      goto LAB_1435e38c7;
    }
    *(undefined8 *)(this_01 + 0x20) = 0x3f800000;
    *(undefined8 *)(this_01 + 0x28) = 0;
    *(undefined4 *)(this_01 + 0x30) = 0;
    *(undefined8 *)(this_01 + 0x34) = 0x3f800000;
    *(undefined4 *)(this_01 + 0x3c) = 0;
    *(float *)(this_01 + 0x20) = *(float *)(this_01 + 0x20) * 0.05;
    *(float *)(this_01 + 0x24) = *(float *)(this_01 + 0x24) * 0.05;
    *(float *)(this_01 + 0x28) = *(float *)(this_01 + 0x28) * 0.05;
    *(float *)(this_01 + 0x2c) = *(float *)(this_01 + 0x2c) * 0.05;
    *(float *)(this_01 + 0x30) = *(float *)(this_01 + 0x30) * 0.05;
    *(float *)(this_01 + 0x34) = *(float *)(this_01 + 0x34) * 0.05;
    *(float *)(this_01 + 0x38) = *(float *)(this_01 + 0x38) * 0.05;
    *(float *)(this_01 + 0x3c) = *(float *)(this_01 + 0x3c) * 0.05;
    *(undefined2 *)(this_01 + 0x40) = 1;
    uVar5 = *(ulonglong *)(param_1 + 0xa0);
    if (uVar5 == 0) {
      uVar5 = *(ulonglong *)(param_1 + 0x98);
    }
    if ((uVar5 & 1) != 0) {
      uVar5 = uVar5 - 1;
    }
    if (uVar5 == 0) {
LAB_1435e361d:
      *(undefined2 *)(this_01 + 0x40) = 0x101;
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0xa0);
      if (uVar5 == 0) {
        uVar5 = *(ulonglong *)(param_1 + 0x98);
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 - 1;
      }
      if (*(char *)(uVar5 + 0xa4) != '\0') goto LAB_1435e361d;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_d8);
    local_a8 = 0x3f800000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_98 = 0;
    uStack_94 = 0x3f800000;
    uStack_90 = 0;
    uStack_8c = 0;
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_a8);
    local_e8[0] = 0.0;
    local_e8[1] = 0.0;
    local_e8[2] = 0.0;
    local_e8[3] = 0.0;
    local_c8 = (float)local_d8;
    local_c4 = (float)local_d4;
    local_c0 = (float)local_d0;
    local_bc = (float)local_cc;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform
              ((Matrix2x4<float> *)&local_a8,(Rect<float> *)local_e8,(Rect<float> *)&local_c8);
    FUN_1432f2630(this + 0x18,this + 0x18,*(longlong *)(this + 0x20) + 1);
    puVar8 = (undefined4 *)(*(longlong *)(this + 0x18) + -0x10 + *(longlong *)(this + 0x20) * 0x10);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0;
      Scaleform::RefCountImpl::AddRef(this_01);
      *(RefCountImpl **)(puVar8 + 2) = this_01;
    }
    FUN_1432f3130(this,1,0);
    FUN_1432f15c0(this,0,0);
    FUN_1432f1450(this,(local_e8[2] - local_e8[0]) * 20.0,0);
    FUN_1432f1450(this,(local_e8[2] - local_e8[0]) * 20.0,(local_e8[3] - local_e8[1]) * 20.0);
    FUN_1432f1450(this,0,(local_e8[3] - local_e8[1]) * 20.0);
    if ((*(float *)(this + 0x5c) != *(float *)(this + 0x54)) ||
       (*(float *)(this + 0x60) != *(float *)(this + 0x58))) {
      FUN_1432f1450(this,*(float *)(this + 0x54),*(undefined4 *)(this + 0x58));
    }
    FUN_1432f0880(this);
    FUN_1432f0900(this);
    lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x90,0);
    if (lVar6 != 0) {
      this_00 = (RefCountImpl *)FUN_143371000(lVar6,this,0);
    }
    FUN_1432f2e20(uVar7,this_00);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this_00);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  uVar7 = 1;
LAB_1435e38c7:
  if (this_01 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_01);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar7;
}



// FUNCTION 1435e3920 FUN_1435e3920 body=122 status=ok
// SIG undefined FUN_1435e3920(void)

undefined8 * FUN_1435e3920(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_145b4afb0;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145b4b758;
  param_1[7] = &PTR_LAB_145b4b828;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_2 + 0xbc) = 0xffff;
  return param_1;
}



// FUNCTION 1435e39c0 OnEventLoad body=53 status=ok
// SIG undefined OnEventLoad(void)

void Scaleform::GFx::AS3::AvmButton::OnEventLoad(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  FUN_1434f0700(param_1 + 8,uVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435e3a00 FUN_1435e3a00 body=75 status=ok
// SIG undefined FUN_1435e3a00(void)

void FUN_1435e3a00(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  FUN_1435e1bf0();
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (-2 < *(int *)(lVar2 + 0x2c)) {
    FUN_1435e0f40(param_1);
    return;
  }
  if ((*(byte *)(lVar2 + 0x6a) >> 4 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x6a);
  *puVar1 = *puVar1 & 0xefef;
  return;
}



// FUNCTION 1435e3ac0 FUN_1435e3ac0 body=187 status=ok
// SIG undefined FUN_1435e3ac0(void)

undefined8 FUN_1435e3ac0(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  if (uVar1 < 0x2001) {
    if ((uVar1 != 0x2000) &&
       ((0x20 < uVar1 || ((0x100010100U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0))))
    goto LAB_1435e3aec;
  }
  else if (uVar1 != 0x4000) {
    if (0x1000009 < uVar1) {
      if (uVar1 < 0x100000f) goto LAB_1435e3b47;
      if (uVar1 == 0x1000014) {
        lVar2 = *(longlong *)(param_1 + 0x18);
        uVar3 = FUN_143611070(*(undefined8 *)(lVar2 + 0x20),4);
        FUN_143613d80(uVar3,lVar2,param_2);
        return 1;
      }
    }
LAB_1435e3aec:
    uVar3 = FUN_1435e0190(param_1);
    return uVar3;
  }
LAB_1435e3b47:
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar4 != 0) || (*(longlong *)(param_1 + 8) != 0)) {
    if (uVar4 == 0) {
      uVar4 = *(ulonglong *)(param_1 + 8);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 - 1;
    }
    FUN_1435198d0(uVar4,param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 1435e3b90 IsTabable body=76 status=ok
// SIG undefined IsTabable(void)

ulonglong Scaleform::GFx::AS3::AvmButton::IsTabable(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x1d8))();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + -0x20) + 0xb8) & 0x60;
  if (uVar1 != 0) {
    return (ulonglong)(uVar1 == 0x60);
  }
  return (ulonglong)(0 < *(short *)(*(longlong *)(param_1 + -0x20) + 0xbc));
}



// FUNCTION 1435e3bf0 FUN_1435e3bf0 body=341 status=ok
// SIG undefined FUN_1435e3bf0(void)

void FUN_1435e3bf0(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong local_res8;
  ulonglong local_28 [2];
  
  if ((*(longlong *)(param_1 + -0x28) != 0) || (*(longlong *)(param_1 + -0x30) != 0)) {
    pcVar5 = "focusIn";
    if (param_2 == 0) {
      pcVar5 = "focusOut";
    }
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      lVar2 = (**(code **)(*(longlong *)(param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4) + 8))
                        (param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4);
      if (lVar2 != 0) {
        lVar2 = lVar2 + -0x38;
      }
      uVar6 = *(ulonglong *)(lVar2 + 0x10);
      if (uVar6 == 0) {
        uVar6 = *(ulonglong *)(lVar2 + 8);
      }
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 - 1;
      }
    }
    uVar4 = *(ulonglong *)(param_1 + -0x28);
    if (uVar4 == 0) {
      uVar4 = *(ulonglong *)(param_1 + -0x30);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 - 1;
    }
    uVar3 = (**(code **)(**(longlong **)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + -0x20) + 0x20) + 0x10) + 0x18) +
                        0x1e0))();
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pcVar5[lVar2] != '\0');
    local_res8 = FUN_143360950(uVar3,pcVar5,lVar2,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_1435197a0(uVar4,local_28,&local_res8,uVar6,param_4,0,0);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_14351a300(uVar4,local_28[0],*(undefined8 *)(param_1 + -0x20));
    if (((local_28[0] != 0) && ((local_28[0] & 1) == 0)) &&
       ((*(uint *)(local_28[0] + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_28[0] + 8) = *(uint *)(local_28[0] + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 1435e3d50 FUN_1435e3d50 body=427 status=ok
// SIG undefined FUN_1435e3d50(void)

char * FUN_1435e3d50(longlong param_1,longlong param_2,undefined4 param_3,int param_4,
                    longlong param_5)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  longlong local_28 [2];
  
  pcVar6 = "mouseFocusChange";
  if (param_4 == 2) {
    pcVar6 = "keyFocusChange";
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
    return "vent::directionSet() is not implemented\n";
  }
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                      (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
    if (lVar3 != 0) {
      lVar3 = lVar3 + -0x38;
    }
    uVar7 = *(ulonglong *)(lVar3 + 0x10);
    if (uVar7 == 0) {
      uVar7 = *(ulonglong *)(lVar3 + 8);
    }
    if ((uVar7 & 1) != 0) {
      uVar7 = uVar7 - 1;
    }
  }
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  if (uVar5 == 0) {
    uVar5 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 - 1;
  }
  uVar4 = (**(code **)(**(longlong **)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x10)
                         + 0x18) + 0x1e0))();
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar6[lVar3] != '\0');
  local_28[0] = FUN_143360950(uVar4,pcVar6,lVar3,0);
  *(int *)(local_28[0] + 0x18) = *(int *)(local_28[0] + 0x18) + 1;
  FUN_1435197a0(uVar5,&local_res8,local_28,uVar7,param_3,0,0);
  piVar1 = (int *)(local_28[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(byte *)(local_res8 + 0x5c) = *(byte *)(local_res8 + 0x5c) | 2;
  if (param_4 == 2) {
    *(undefined4 *)(local_res8 + 100) = *(undefined4 *)(param_5 + 0x34);
    *(byte *)(local_res8 + 0x60) = *(byte *)(param_5 + 0x39) & 1;
  }
  FUN_14351a300(uVar5,local_res8,*(undefined8 *)(param_1 + 0x18));
  bVar2 = *(byte *)(local_res8 + 0x5c);
  if (((local_res8 & 1) == 0) && ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return (char *)(ulonglong)(~(bVar2 >> 2) & 1);
}



// FUNCTION 1435e3f40 FUN_1435e3f40 body=66 status=ok
// SIG undefined FUN_1435e3f40(void)

longlong FUN_1435e3f40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (*(char *)(plVar1[4] + 0x20) == '\x02') {
    lVar2 = (**(code **)(*plVar1 + 0x228))();
    lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
    if (lVar2 != 0) {
      return lVar2 + -0x38;
    }
  }
  return 0;
}



// FUNCTION 1435e3fe0 FUN_1435e3fe0 body=49 status=ok
// SIG undefined FUN_1435e3fe0(void)

void FUN_1435e3fe0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 200))();
  if (lVar1 != 0) {
    Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(param_2,lVar1);
    return;
  }
  Scaleform::GFx::InteractiveObject::AddToPlayList(param_2);
  return;
}



// FUNCTION 1435e4020 FUN_1435e4020 body=355 status=ok
// SIG undefined FUN_1435e4020(void)

void FUN_1435e4020(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  plVar7 = (longlong *)0x0;
  lVar6 = plVar3[0x13];
  for (plVar8 = (longlong *)plVar3[0x12]; plVar5 = plVar8, plVar8 != (longlong *)0x0;
      plVar8 = (longlong *)plVar8[0x12]) {
    while (plVar5 != plVar3) {
      plVar1 = plVar5 + 7;
      plVar5 = (longlong *)*plVar1;
      if ((longlong *)*plVar1 == (longlong *)0x0) {
        plVar5 = (longlong *)plVar8[0x13];
        plVar8[0x13] = lVar6;
        goto LAB_1435e409e;
      }
    }
  }
  plVar5 = plVar3;
  if (lVar6 != 0) {
    plVar5 = *(longlong **)(*(longlong *)(plVar3[4] + 0x10) + 0x52d8);
    *(longlong *)(*(longlong *)(plVar3[4] + 0x10) + 0x52d8) = lVar6;
    plVar8 = plVar7;
LAB_1435e409e:
    if (lVar6 != 0) {
      *(longlong **)(lVar6 + 0x90) = plVar8;
    }
  }
  plVar3[0x13] = 0;
  plVar5[0x12] = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4) + 8))();
    if (lVar6 != 0) {
      plVar7 = (longlong *)(lVar6 + -0x38);
    }
    lVar6 = (**(code **)(*plVar7 + 200))(plVar7,plVar3);
    if (lVar6 != 0) {
      lVar4 = *(longlong *)(lVar6 + 0x98);
      plVar3[0x13] = lVar4;
      if (lVar4 != 0) {
        *(longlong **)(lVar4 + 0x90) = plVar3;
      }
      *(longlong **)(lVar6 + 0x98) = plVar5;
      plVar5[0x12] = lVar6;
      goto LAB_1435e4158;
    }
  }
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x10) + 0x52d8);
  if (lVar6 != 0) {
    plVar3[0x13] = lVar6;
    *(longlong **)(lVar6 + 0x90) = plVar3;
  }
  *(longlong **)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x10) + 0x52d8)
       = plVar5;
LAB_1435e4158:
  puVar2 = (uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x10) +
                   0x52f0);
  *puVar2 = *puVar2 | 0x80000;
  return;
}



// FUNCTION 1435e41c0 FUN_1435e41c0 body=94 status=ok
// SIG undefined FUN_1435e41c0(void)

void FUN_1435e41c0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  FUN_1433d4de0(*(longlong *)(param_1 + 0x18) + 0xd8);
  FUN_1435e1bf0(param_1);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (-2 < *(int *)(lVar2 + 0x2c)) {
    FUN_1435e0f40(param_1);
    return;
  }
  if ((*(byte *)(lVar2 + 0x6a) >> 4 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x6a);
  *puVar1 = *puVar1 & 0xefef;
  return;
}



// FUNCTION 1435e4230 FUN_1435e4230 body=827 status=ok
// SIG undefined FUN_1435e4230(void)

int FUN_1435e4230(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_98;
  undefined4 local_94;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  
  plVar2 = *(longlong **)(param_1 + -0x30);
  lVar6 = (**(code **)(*plVar2 + 0x3d0))(plVar2);
  lVar7 = (**(code **)(*plVar2 + 0x3c8))(plVar2);
  bVar4 = false;
  local_94 = 0;
  iVar8 = 2;
  plVar11 = (longlong *)0x0;
  local_98 = 0;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + -0x30) + 0xe0) + -1;
  if (lVar9 < 0) {
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
  }
  else {
    local_90 = 0;
    local_88 = local_80;
    lVar10 = lVar9 * 0x10;
    iVar8 = 2;
    bVar4 = false;
    do {
      plVar3 = *(longlong **)(lVar10 + *(longlong *)(*(longlong *)(param_1 + -0x30) + 0xd8));
      if (((param_4[1] == 0) || ((*(char *)(lVar9 + *param_4) != '\0' && ((short)plVar3[0xd] == 0)))
          ) && ((*(byte *)((longlong)plVar3 + 0x6a) >> 1 & 1) == 0)) {
        iVar5 = (**(code **)(*plVar3 + 0x208))(plVar3,param_2,param_3);
        if (iVar5 == 1) {
          if ((*(uint *)(plVar2 + 0x17) >> 0xd & 1) != 0) {
            *param_3 = (longlong)plVar2;
          }
          if ((*param_3 == 0) || ((*(uint *)(*param_3 + 0xb8) >> 0xc & 1) == 0)) goto LAB_1435e43fa;
          *param_3 = (longlong)plVar2;
          bVar4 = true;
        }
        else {
          if ((iVar5 == 3) && ((longlong *)*param_3 != (longlong *)0x0)) {
            local_90 = param_3[2];
            iVar8 = 1;
            local_98 = *(undefined1 *)((longlong)param_3 + 0x24);
            local_94 = (undefined4)param_3[4];
            local_78 = (undefined4)param_3[1];
            local_74 = *(undefined4 *)((longlong)param_3 + 0xc);
            plVar11 = (longlong *)param_3[3];
            local_88 = (longlong *)*param_3;
LAB_1435e43fa:
            if (lVar6 != 0) {
              param_3[3] = (longlong)plVar2;
              if (iVar5 != 1) {
                *param_3 = lVar6;
                return iVar5;
              }
              goto LAB_1435e4486;
            }
            if ((lVar7 != 0) &&
               (((plVar3 = (longlong *)*param_3, plVar3 == (longlong *)0x0 || (plVar3 == plVar2)) ||
                (-1 < *(char *)((longlong)plVar3 + 0x6a))))) {
              if (lVar7 != param_3[3]) {
                *param_3 = 0;
                iVar8 = 2;
                goto LAB_1435e444f;
              }
              goto LAB_1435e4466;
            }
          }
          else if (iVar8 == 1) goto LAB_1435e43fa;
          if (iVar5 == 1) {
LAB_1435e4486:
            if (lVar6 == 0) {
              return iVar5;
            }
            if ((longlong *)*param_3 != plVar2) {
              return iVar5;
            }
            param_3[3] = (longlong)plVar2;
            return iVar5;
          }
        }
      }
LAB_1435e444f:
      lVar10 = lVar10 + -0x10;
      lVar9 = lVar9 + -1;
      local_80 = local_88;
    } while (-1 < lVar9);
  }
  if ((lVar7 == 0) ||
     (((plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0 && (plVar3 != plVar2)) &&
      (*(char *)((longlong)plVar3 + 0x6a) < '\0')))) {
    if (iVar8 == 1) {
      *param_3 = (longlong)local_80;
      *(undefined4 *)(param_3 + 1) = local_78;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_74;
      param_3[2] = local_90;
      param_3[3] = (longlong)plVar11;
      *(undefined4 *)(param_3 + 4) = local_94;
      *(undefined1 *)((longlong)param_3 + 0x24) = local_98;
      if (lVar6 != 0) {
        if (local_80 == plVar2) {
          plVar11 = plVar2;
        }
        param_3[3] = (longlong)plVar11;
      }
      return 1;
    }
    uVar1 = *param_2;
    *(undefined4 *)((longlong)param_3 + 0xc) = param_2[1];
    *(undefined4 *)(param_3 + 1) = uVar1;
    if (bVar4) {
      *param_3 = (longlong)plVar2;
      if (lVar6 != 0) {
        param_3[3] = (longlong)plVar2;
      }
      return 1;
    }
    iVar8 = 3;
  }
  else {
    if (lVar7 == param_3[3]) {
LAB_1435e4466:
      *param_3 = (longlong)plVar2;
      return 1;
    }
    iVar8 = 2;
  }
  *param_3 = 0;
  return iVar8;
}



// FUNCTION 1435e4580 FUN_1435e4580 body=351 status=ok
// SIG undefined FUN_1435e4580(void)

void FUN_1435e4580(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  RefCountNTSImpl *this;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x30) + 0xe0);
  if (((lVar4 != 0) && ((*(uint *)(*(longlong *)(param_1 + -0x30) + 0xb8) >> 0xf & 1) == 0)) &&
     (lVar4 != 0)) {
    lVar5 = 0;
    do {
      this = *(RefCountNTSImpl **)(lVar5 + *(longlong *)(*(longlong *)(param_1 + -0x30) + 0xd8));
      if (((this != (RefCountNTSImpl *)0x0) && ((char)this[0x6a] < '\0')) &&
         (cVar3 = (**(code **)(*(longlong *)this + 0x1d8))(this), cVar3 != '\0')) {
        if ((0 < *(short *)(this + 0xbc)) && ((char)param_2[1] == '\0')) {
          FUN_1432f2a90(*param_2,*(undefined8 *)(*param_2 + 0x18),0);
          *(undefined1 *)(param_2 + 1) = 1;
        }
        cVar3 = (**(code **)(*(longlong *)this + 0x2c0))(this);
        if (((cVar3 != '\0') ||
            ((*(char *)((longlong)param_2 + 9) != '\0' &&
             (cVar3 = (**(code **)(*(longlong *)this + 0x2d0))(this,2), cVar3 != '\0')))) &&
           (((char)param_2[1] == '\0' || (0 < *(short *)(this + 0xbc))))) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          plVar2 = (longlong *)*param_2;
          FUN_1432f2a90(plVar2,plVar2[3],plVar2[1] + 1);
          puVar1 = (undefined8 *)(*plVar2 + (plVar2[1] + -1) * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            *puVar1 = this;
          }
          Scaleform::RefCountNTSImpl::Release(this);
        }
        if ((*(ushort *)(this + 0x6a) >> 9 & 1) != 0) {
          FUN_1433705a0(this,param_2);
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1435e4720 FUN_1435e4720 body=385 status=ok
// SIG undefined FUN_1435e4720(void)

void FUN_1435e4720(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar4 = param_2[7];
  plVar9 = (longlong *)0x0;
  uVar1 = *(ulonglong *)(lVar6 + 0xe0);
  if (lVar4 != 0) {
    if (lVar4 == lVar6) {
      FUN_1435e4da0(param_1,param_2,(int)uVar1 + -1);
      return;
    }
    lVar4 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 0x28))();
    plVar8 = (longlong *)(lVar4 + -0x48);
    if (lVar4 == 0) {
      plVar8 = plVar9;
    }
    uVar5 = Scaleform::GFx::DisplayList::FindDisplayIndex(plVar8[3] + 0xd8,param_2);
    if (-1 < (longlong)uVar5) {
      FUN_1435e4c30(plVar8,uVar5 & 0xffffffff);
    }
  }
  FUN_1433d47a0(lVar6 + 0xd8,*(undefined8 *)(param_1 + 0x18),uVar1 & 0xffffffff,param_2);
  *(byte *)(lVar6 + 0x102) = *(byte *)(lVar6 + 0x102) | 3;
  if ((((byte)*(ushort *)((longlong)param_2 + 0x6a) >> 4 & 1) != 0) &&
     (uVar7 = *(ushort *)((longlong)param_2 + 0x6a) & 0xefef,
     *(ushort *)((longlong)param_2 + 0x6a) = uVar7, (uVar7 >> 9 & 1) != 0)) {
    FUN_1435f2710(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20),param_2);
  }
  param_2[7] = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0xffffffff;
  if ((*(char *)((longlong)param_2 + 0x6a) < '\0') &&
     (cVar3 = Scaleform::GFx::InteractiveObject::IsInPlayList(param_2), cVar3 != '\0')) {
    lVar6 = (**(code **)(*(longlong *)
                          ((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4) +
                        8))((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4);
    plVar8 = (longlong *)(lVar6 + -0x38);
    if (lVar6 == 0) {
      plVar8 = plVar9;
    }
    FUN_1435e4020(plVar8);
  }
  plVar8 = plVar9;
  if ((*(byte *)((longlong)param_2 + 0x6b) & 1) != 0) {
    plVar8 = param_2;
  }
  if (plVar8 != (longlong *)0x0) {
    plVar9 = (longlong *)((longlong)plVar8 + (ulonglong)*(byte *)((longlong)plVar8 + 0x6d) * 4);
  }
  (**(code **)(*plVar9 + 0x98))(plVar9,0);
  puVar2 = (undefined8 *)plVar8[0x10];
  if (puVar2 != (undefined8 *)0x0) {
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_28 = *(undefined4 *)(puVar2 + 2);
    uStack_24 = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_20 = *(undefined4 *)(puVar2 + 3);
    uStack_1c = *(undefined4 *)((longlong)puVar2 + 0x1c);
    FUN_14336cf20(plVar8,&local_38);
  }
  return;
}



// FUNCTION 1435e48b0 FUN_1435e48b0 body=399 status=ok
// SIG undefined FUN_1435e48b0(void)

void FUN_1435e48b0(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar3 = param_2[7];
  if (*(uint *)(lVar5 + 0xe0) < param_3) {
    param_3 = *(uint *)(lVar5 + 0xe0);
  }
  plVar8 = (longlong *)0x0;
  if (lVar3 != 0) {
    if (lVar3 == lVar5) {
      FUN_1435e4da0(param_1,param_2,param_3);
      return;
    }
    lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0x28))();
    plVar7 = (longlong *)(lVar3 + -0x48);
    if (lVar3 == 0) {
      plVar7 = plVar8;
    }
    uVar4 = Scaleform::GFx::DisplayList::FindDisplayIndex(plVar7[3] + 0xd8,param_2);
    if (-1 < (longlong)uVar4) {
      FUN_1435e4c30(plVar7,uVar4 & 0xffffffff);
    }
  }
  FUN_1433d47a0(lVar5 + 0xd8,*(undefined8 *)(param_1 + 0x18),param_3,param_2);
  *(byte *)(lVar5 + 0x102) = *(byte *)(lVar5 + 0x102) | 3;
  if ((((byte)*(ushort *)((longlong)param_2 + 0x6a) >> 4 & 1) != 0) &&
     (uVar6 = *(ushort *)((longlong)param_2 + 0x6a) & 0xefef,
     *(ushort *)((longlong)param_2 + 0x6a) = uVar6, (uVar6 >> 9 & 1) != 0)) {
    FUN_1435f2710(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20),param_2);
  }
  param_2[7] = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0xffffffff;
  if ((*(char *)((longlong)param_2 + 0x6a) < '\0') &&
     (cVar2 = Scaleform::GFx::InteractiveObject::IsInPlayList(param_2), cVar2 != '\0')) {
    lVar5 = (**(code **)(*(longlong *)
                          ((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4) +
                        8))((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4);
    plVar7 = (longlong *)(lVar5 + -0x38);
    if (lVar5 == 0) {
      plVar7 = plVar8;
    }
    FUN_1435e4020(plVar7);
  }
  plVar7 = plVar8;
  if ((*(byte *)((longlong)param_2 + 0x6b) & 1) != 0) {
    plVar7 = param_2;
  }
  if (plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)((longlong)plVar7 + (ulonglong)*(byte *)((longlong)plVar7 + 0x6d) * 4);
  }
  (**(code **)(*plVar8 + 0x98))(plVar8,0);
  puVar1 = (undefined8 *)plVar7[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    local_38 = *puVar1;
    uStack_30 = puVar1[1];
    local_28 = *(undefined4 *)(puVar1 + 2);
    uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x14);
    uStack_20 = *(undefined4 *)(puVar1 + 3);
    uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x1c);
    FUN_14336cf20(plVar7,&local_38);
  }
  return;
}



// FUNCTION 1435e4a50 FUN_1435e4a50 body=408 status=ok
// SIG undefined FUN_1435e4a50(void)

ulonglong FUN_1435e4a50(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((((*(byte *)(lVar2 + 0x6a) >> 4 & 1) != 0) || ((*(ushort *)(lVar2 + 0x6a) & 0x1000) != 0)) ||
     (*(int *)(lVar2 + 0x2c) < -1)) {
    return 0;
  }
  uVar6 = 0;
  uVar1 = *(uint *)(lVar2 + 0xe0);
  if (uVar1 == 0) {
    return *(ulonglong *)(lVar2 + 0x90);
  }
  uVar4 = uVar6;
  uVar8 = uVar6;
  if (uVar1 != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar6 = *(ulonglong *)(uVar8 + *(longlong *)(lVar2 + 0xd8));
      if (uVar6 == param_2) break;
      if ((*(char *)(uVar6 + 0x6a) < '\0') &&
         (cVar3 = Scaleform::GFx::InteractiveObject::IsInPlayList(uVar6), cVar3 != '\0')) {
        uVar4 = uVar6;
      }
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar8 = uVar8 + 0x10;
    } while (uVar5 < uVar1);
    if (uVar4 != 0) {
      uVar5 = uVar5 + 1;
      if (uVar5 < uVar1) {
        lVar7 = (ulonglong)uVar5 << 4;
        do {
          uVar6 = *(ulonglong *)(lVar7 + *(longlong *)(lVar2 + 0xd8));
          if ((*(char *)(uVar6 + 0x6a) < '\0') &&
             (cVar3 = Scaleform::GFx::InteractiveObject::IsInPlayList(uVar6), cVar3 != '\0')) {
            return uVar6;
          }
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar5 < uVar1);
      }
      uVar6 = uVar4;
      do {
        while (uVar4 == *(ulonglong *)(param_1 + 0x18)) {
          uVar4 = *(ulonglong *)(uVar6 + 0x90);
          uVar6 = uVar4;
          if (uVar4 == 0) {
            return 0;
          }
        }
        if (uVar4 == *(ulonglong *)(*(ulonglong *)(param_1 + 0x18) + 0x38)) {
          return uVar6;
        }
        uVar4 = *(ulonglong *)(uVar4 + 0x38);
      } while (uVar4 != 0);
      return uVar6;
    }
  }
  return *(ulonglong *)(lVar2 + 0x90);
}



// FUNCTION 1435e4bf0 FUN_1435e4bf0 body=53 status=ok
// SIG undefined FUN_1435e4bf0(void)

undefined8 FUN_1435e4bf0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = Scaleform::GFx::DisplayList::FindDisplayIndex(*(longlong *)(param_1 + 0x18) + 0xd8);
  if ((longlong)uVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_1435e4c30(param_1,uVar1 & 0xffffffff);
  return uVar2;
}



// FUNCTION 1435e4c30 FUN_1435e4c30 body=355 status=ok
// SIG undefined FUN_1435e4c30(void)

RefCountNTSImpl * FUN_1435e4c30(longlong param_1,uint param_2)

{
  RefCountNTSImpl *this;
  char cVar1;
  longlong lVar2;
  RefCountNTSImpl *pRVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar2 + 0xe0) <= param_2) {
    return (RefCountNTSImpl *)0x0;
  }
  this = *(RefCountNTSImpl **)(*(longlong *)(lVar2 + 0xd8) + (ulonglong)param_2 * 0x10);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  pRVar3 = (RefCountNTSImpl *)0x0;
  if (((byte)this[0x6b] & 1) != 0) {
    pRVar3 = this;
  }
  if (pRVar3 != (RefCountNTSImpl *)0x0) {
    pRVar3 = pRVar3 + (ulonglong)(byte)pRVar3[0x6d] * 4;
  }
  (**(code **)(*(longlong *)pRVar3 + 0x68))(pRVar3,0);
  if ((((byte)this[0x6b] & 1) != 0) && (*(short *)(this + 0x68) != 0)) {
    FUN_14336cc90(this,0,1);
  }
  if (*(short *)(this + 0x6a) < 0) {
    FUN_1432eba30(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x10),this);
  }
  Scaleform::GFx::DisplayList::RemoveEntryAtIndex
            ((longlong *)(lVar2 + 0xd8),*(undefined8 *)(param_1 + 0x18),param_2);
  *(byte *)(lVar2 + 0x102) = *(byte *)(lVar2 + 0x102) | 3;
  *(undefined8 *)(this + 0x38) = 0;
  pRVar3 = (RefCountNTSImpl *)0x0;
  if ((char)this[0x6a] < '\0') {
    pRVar3 = this;
  }
  if (pRVar3 != (RefCountNTSImpl *)0x0) {
    cVar1 = Scaleform::GFx::InteractiveObject::IsInPlayList(pRVar3);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*(longlong *)(pRVar3 + (ulonglong)(byte)pRVar3[0x6d] * 4) + 8))
                        (pRVar3 + (ulonglong)(byte)pRVar3[0x6d] * 4);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 + -0x38;
      }
      FUN_1435e4020(lVar2);
    }
  }
  if (((byte)this[0x88] & 1) != 0) {
    *(ushort *)(this + 0x88) = *(ushort *)(this + 0x88) & 0xfffe;
    (**(code **)(*(longlong *)this + 0x1a8))(this,0);
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x2c) = 0xffffffff;
    FUN_1435e0f40(this + (ulonglong)(byte)this[0x6d] * 4);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return this;
}



// FUNCTION 1435e4da0 FUN_1435e4da0 body=170 status=ok
// SIG undefined FUN_1435e4da0(void)

undefined8 FUN_1435e4da0(longlong param_1,RefCountNTSImpl *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (param_3 < *(uint *)(lVar1 + 0xe0)) {
    lVar3 = lVar1 + 0xd8;
    lVar2 = Scaleform::GFx::DisplayList::FindDisplayIndex(lVar3);
    if (-1 < lVar2) {
      if (param_2 != (RefCountNTSImpl *)0x0) {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      }
      Scaleform::GFx::DisplayList::RemoveEntryAtIndex(lVar3,*(undefined8 *)(param_1 + 0x18),lVar2);
      FUN_1433d47a0(lVar3,*(undefined8 *)(param_1 + 0x18),param_3,param_2);
      (**(code **)(*(longlong *)param_2 + 0x1a8))(param_2,0);
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
      *(byte *)(lVar1 + 0x102) = *(byte *)(lVar1 + 0x102) | 3;
      Scaleform::RefCountNTSImpl::Release(param_2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435e4e50 FUN_1435e4e50 body=61 status=ok
// SIG undefined FUN_1435e4e50(void)

undefined4 FUN_1435e4e50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = Scaleform::GFx::DisplayList::FindDisplayIndex(*(longlong *)(param_1 + 0x18) + 0xd8);
  if (-1 < lVar1) {
    lVar1 = FUN_1435e4c30(param_1,(int)lVar1);
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435e4ea0 FUN_1435e4ea0 body=123 status=ok
// SIG undefined FUN_1435e4ea0(void)

ulonglong * FUN_1435e4ea0(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = Scaleform::GFx::DisplayObjContainer::GetChildAt(*(undefined8 *)(param_1 + 0x18),param_3);
  if (lVar2 == 0) {
    *param_2 = 0;
  }
  else {
    lVar1 = lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4;
    (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0x70))(lVar1,1);
    uVar3 = *(ulonglong *)(lVar1 + 0x10);
    if (uVar3 == 0) {
      uVar3 = *(ulonglong *)(lVar1 + 8);
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 - 1;
    }
    *param_2 = uVar3;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1435e4f30 FUN_1435e4f30 body=136 status=ok
// SIG undefined FUN_1435e4f30(void)

ulonglong * FUN_1435e4f30(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1433d5ce0(*(longlong *)(param_1 + 0x18) + 0xd8,param_3,1);
  if (lVar2 == 0) {
    *param_2 = 0;
  }
  else {
    lVar1 = lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4;
    (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0x70))(lVar1,1);
    uVar3 = *(ulonglong *)(lVar1 + 0x10);
    if (uVar3 == 0) {
      uVar3 = *(ulonglong *)(lVar1 + 8);
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 - 1;
    }
    *param_2 = uVar3;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1435e4fc0 FUN_1435e4fc0 body=93 status=ok
// SIG undefined FUN_1435e4fc0(void)

void FUN_1435e4fc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = Scaleform::GFx::DisplayList::FindDisplayIndex(lVar1 + 0xd8);
  uVar3 = Scaleform::GFx::DisplayList::FindDisplayIndex(lVar1 + 0xd8,param_3);
  FUN_1435e5030(param_1,uVar2,uVar3);
  return;
}



// FUNCTION 1435e5030 FUN_1435e5030 body=256 status=ok
// SIG undefined FUN_1435e5030(void)

undefined8 FUN_1435e5030(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar7 = (ulonglong)param_2;
  if (*(ulonglong *)(lVar1 + 0xe0) <= uVar7) {
    return 0;
  }
  if ((ulonglong)param_3 < *(ulonglong *)(lVar1 + 0xe0)) {
    cVar5 = FUN_1433d5970((longlong *)(lVar1 + 0xd8),lVar1,uVar7,param_3);
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(lVar1 + 0xd8);
      plVar3 = *(longlong **)(lVar2 + uVar7 * 0x10);
      plVar4 = *(longlong **)(lVar2 + (ulonglong)param_3 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,0);
        *(undefined4 *)(plVar3 + 6) = 0;
        *(undefined4 *)((longlong)plVar3 + 0x2c) = 0xffffffff;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x1a8))(plVar4,0);
        *(undefined4 *)(plVar4 + 6) = 0;
        *(undefined4 *)((longlong)plVar4 + 0x2c) = 0xffffffff;
      }
      *(byte *)(lVar1 + 0x102) = *(byte *)(lVar1 + 0x102) | 3;
      if (*(char *)((longlong)plVar3 + 0x6a) < '\0') {
        uVar6 = FUN_14358b2e0(plVar3);
        FUN_1435e4020(uVar6);
      }
      if (*(char *)((longlong)plVar4 + 0x6a) < '\0') {
        uVar6 = FUN_14358b2e0(plVar4);
        FUN_1435e4020(uVar6);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435e5140 FUN_1435e5140 body=265 status=ok
// SIG undefined FUN_1435e5140(void)

void FUN_1435e5140(longlong param_1,undefined8 param_2,char param_3)

{
  short sVar1;
  longlong lVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  FUN_1435e1880(param_1,param_2,1);
  if (param_3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar4 = 0;
    if (*(int *)(lVar2 + 0xe0) != 0) {
      do {
        this = *(RefCountNTSImpl **)(*(longlong *)(lVar2 + 0xd8) + uVar4 * 0x10);
        if (this != (RefCountNTSImpl *)0x0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xd8) + uVar4 * 0x10);
        lVar6 = 0;
        if ((*(byte *)(lVar3 + 0x6b) & 1) != 0) {
          lVar6 = lVar3;
        }
        if (lVar6 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4);
        }
        sVar1 = *(short *)(lVar2 + 0x100);
        (**(code **)(*plVar5 + 0x90))(plVar5,param_2,1);
        if ((*(short *)(lVar2 + 0x100) != sVar1) &&
           (uVar4 = Scaleform::GFx::DisplayList::FindDisplayIndex(lVar2 + 0xd8,this),
           (longlong)uVar4 < 0)) {
          if (this == (RefCountNTSImpl *)0x0) {
            return;
          }
          Scaleform::RefCountNTSImpl::Release(this);
          return;
        }
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        uVar7 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(lVar2 + 0xe0));
    }
  }
  return;
}



// FUNCTION 1435e5250 FUN_1435e5250 body=934 status=ok
// SIG undefined FUN_1435e5250(void)

ulonglong FUN_1435e5250(longlong param_1,longlong param_2,Point<float> *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float local_res8;
  float local_resc;
  float local_res20;
  float local_res24;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar4 = (**(code **)(*plVar1 + 0x1d8))(plVar1);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  lVar8 = plVar1[0x1c];
  plVar5 = (longlong *)FUN_14336cc10(plVar1);
  if (((plVar5 != (longlong *)0x0) &&
      (cVar3 = (**(code **)(*plVar5 + 0x278))(plVar5), cVar3 != '\0')) &&
     ((*(byte *)((longlong)plVar5 + 0x6a) >> 4 & 1) == 0)) {
    local_a8 = 1.0;
    fStack_a4 = 0.0;
    uStack_a0 = 0;
    fStack_9c = 0.0;
    local_98 = 0.0;
    fStack_94 = 1.0;
    uStack_90 = 0;
    fStack_8c = 0.0;
    local_c8 = 0x3f800000;
    uStack_c0 = 0;
    local_b8 = 0x3f80000000000000;
    uStack_b0 = 0;
    (**(code **)(*plVar5 + 0x1e8))(plVar5,&local_c8);
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_a8,(Matrix2x4<float> *)&local_c8);
    local_c8 = 0x3f800000;
    uStack_c0 = 0;
    local_b8 = 0x3f80000000000000;
    uStack_b0 = 0;
    (**(code **)(*plVar1 + 0x1e8))(plVar1,&local_c8);
    local_res24 = *(float *)param_3 * ((float)local_b8 * fStack_94 + (float)local_c8 * local_98) +
                  *(float *)(param_3 + 4) * (local_b8._4_4_ * fStack_94 + local_98 * local_c8._4_4_)
                  + fStack_8c + fStack_94 * uStack_b0._4_4_ + local_98 * uStack_c0._4_4_;
    local_res20 = *(float *)param_3 * ((float)local_b8 * fStack_a4 + (float)local_c8 * local_a8) +
                  *(float *)(param_3 + 4) * (local_b8._4_4_ * fStack_a4 + local_a8 * local_c8._4_4_)
                  + fStack_9c + fStack_a4 * uStack_b0._4_4_ + local_a8 * uStack_c0._4_4_;
    uVar4 = (**(code **)(*plVar5 + 0x200))(plVar5,&local_res20,3);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
  }
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  FUN_1433705e0(plVar1,&local_e8,param_3,1);
  lVar8 = lVar8 + -1;
  uVar4 = *(ulonglong *)(param_2 + 8);
  local_c8 = 0x3f800000;
  uStack_c0 = 0;
  local_res8 = *(float *)param_3;
  local_b8 = 0x3f80000000000000;
  uStack_b0 = 0;
  local_resc = *(float *)(param_3 + 4);
  if (-1 < lVar8) {
    lVar7 = lVar8 * 0x10;
    do {
      plVar5 = *(longlong **)(lVar7 + plVar1[0x1b]);
      if ((((*(byte *)((longlong)plVar5 + 0x6b) & 1) != 0) &&
          (cVar3 = (**(code **)(*plVar5 + 0x1d8))(plVar5), cVar3 != '\0')) &&
         ((local_e0 == 0 || ((*(char *)(local_e8 + lVar8) != '\0' && ((short)plVar5[0xd] == 0))))))
      {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
        local_c8 = *puVar6;
        uStack_c0 = puVar6[1];
        local_b8 = puVar6[2];
        uStack_b0 = puVar6[3];
        Scaleform::Render::Matrix2x4<float>::TransformByInverse
                  ((Matrix2x4<float> *)&local_c8,(Point<float> *)&local_res20,param_3);
        local_res8 = local_res20;
        local_resc = local_res24;
        (**(code **)(*(longlong *)
                      ((longlong)plVar5 + (ulonglong)*(byte *)((longlong)plVar5 + 0x6d) * 4) + 0xa0)
        )((longlong)plVar5 + (ulonglong)*(byte *)((longlong)plVar5 + 0x6d) * 4,param_2,&local_res8);
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  uVar2 = *(ulonglong *)(param_2 + 8);
  if (local_e8 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return (ulonglong)(uVar4 < uVar2);
}



// FUNCTION 1435e5600 FUN_1435e5600 body=185 status=ok
// SIG undefined FUN_1435e5600(void)

undefined8 * FUN_1435e5600(undefined8 *param_1)

{
  int iVar1;
  void *_Dst;
  ulonglong _Size;
  undefined4 local_res8 [2];
  
  FUN_1435e3920();
  *param_1 = &PTR_FUN_145b4ba50;
  param_1[7] = &PTR_LAB_145b4bb40;
  param_1[9] = &PTR_LAB_145b4bbf0;
  param_1[10] = &PTR_LAB_145b4bcb8;
  iVar1 = (**(code **)(**(longlong **)(param_1[3] + 0x110) + 0x50))();
  param_1[0xb] = 0;
  *(int *)(param_1 + 0xc) = iVar1;
  local_res8[0] = 0x143;
  _Size = (ulonglong)(iVar1 + 7U >> 3);
  _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1 + 0xb,_Size,local_res8);
  param_1[0xb] = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)(param_1[3] + 0x138) = *(byte *)(param_1[3] + 0x138) & 0xdf;
  return param_1;
}



// FUNCTION 1435e56c0 FUN_1435e56c0 body=111 status=ok
// SIG undefined FUN_1435e56c0(void)

void FUN_1435e56c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b4ba50;
  param_1[7] = &PTR_LAB_145b4bb40;
  param_1[9] = &PTR_LAB_145b4bbf0;
  param_1[10] = &PTR_LAB_145b4bcb8;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xb]);
  param_1[10] = &PTR_FUN_145b0aa60;
  param_1[9] = &PTR_FUN_145b0aa60;
  param_1[7] = &PTR_FUN_145b0aa60;
  *param_1 = &PTR_FUN_145b4b758;
  FUN_1435e0070(param_1);
  return;
}



// FUNCTION 1435e5740 FUN_1435e5740 body=438 status=ok
// SIG undefined FUN_1435e5740(void)

undefined8 FUN_1435e5740(longlong param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) goto LAB_1435e58e1;
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar8 = 0;
  lVar4 = lVar8;
  if ((*(byte *)(lVar3 + 0x138) & 0x40) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  if ((lVar4 != 0) && (bVar1 = *(byte *)(lVar4 + 0x58), (bVar1 & 7) != 0)) {
    uVar2 = *param_2;
    if (uVar2 < 0x2001) {
      if (uVar2 == 0x2000) {
        if ((bVar1 & 4) != 0) {
          if ((uint)(int)*(char *)((longlong)param_2 + 0x11) < 6) {
            lVar8 = ((ulonglong)(uint)(int)*(char *)((longlong)param_2 + 0x11) + 0x6d) * 0x50 +
                    *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x10);
          }
          if (((*(uint *)(lVar3 + 0xb8) >> 0xe & 1) == 0) || ((*(byte *)(lVar8 + 0x34) & 1) == 0)) {
            if ((*(byte *)(lVar8 + 0x30) & 1) != 0) goto LAB_1435e57cc;
            pcVar7 = "_over";
          }
          else {
            pcVar7 = "_down";
          }
LAB_1435e57c7:
          FUN_143384900(lVar3,pcVar7,0);
        }
      }
      else if (uVar2 == 0x10) {
LAB_1435e58cc:
        if ((bVar1 & 2) != 0) {
          pcVar7 = "_down";
          goto LAB_1435e57c7;
        }
      }
      else if ((uVar2 == 0x20) || (uVar2 == 0x800)) {
LAB_1435e58b7:
        if ((bVar1 & 4) != 0) {
          pcVar7 = "_over";
          goto LAB_1435e57c7;
        }
      }
      else if (uVar2 == 0x1000) goto LAB_1435e57bb;
    }
    else {
      if (uVar2 != 0x4000) {
        if (uVar2 == 0x8000) goto LAB_1435e58cc;
        if (uVar2 != 0x10000) goto LAB_1435e57cc;
        if ((*(uint *)(lVar3 + 0xb8) >> 0xe & 1) == 0) goto LAB_1435e58b7;
      }
LAB_1435e57bb:
      if ((bVar1 & 1) != 0) {
        pcVar7 = "_up";
        goto LAB_1435e57c7;
      }
    }
  }
LAB_1435e57cc:
  if (*param_2 == 0x400) {
    uVar6 = *(ulonglong *)(param_1 + 0x10);
    if ((uVar6 != 0) || (*(longlong *)(param_1 + 8) != 0)) {
      local_18 = param_2[4];
      uStack_24 = param_2[1];
      uStack_20 = param_2[2];
      uStack_1c = param_2[3];
      local_28 = 0x100000c;
      if (uVar6 == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8);
      }
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 - 1;
      }
      FUN_1435198d0(uVar6,&local_28,*(undefined8 *)(param_1 + 0x18));
    }
    return 1;
  }
LAB_1435e58e1:
  uVar5 = FUN_1435e3ac0(param_1,param_2);
  return uVar5;
}



// FUNCTION 1435e5900 OnEventLoad body=53 status=ok
// SIG undefined OnEventLoad(void)

void Scaleform::GFx::AS3::AvmButton::OnEventLoad(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  FUN_1434f0700(param_1 + 8,uVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435e5940 FUN_1435e5940 body=75 status=ok
// SIG undefined FUN_1435e5940(void)

void FUN_1435e5940(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  FUN_1435e1bf0();
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (-2 < *(int *)(lVar2 + 0x2c)) {
    FUN_1435e0f40(param_1);
    return;
  }
  if ((*(byte *)(lVar2 + 0x6a) >> 4 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x6a);
  *puVar1 = *puVar1 & 0xefef;
  return;
}



// FUNCTION 1435e59b0 FUN_1435e59b0 body=117 status=ok
// SIG undefined FUN_1435e59b0(void)

ulonglong FUN_1435e59b0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x1d8))();
  if ((char)uVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + -0x20);
    uVar3 = *(uint *)(uVar2 + 0xb8) & 0x60;
    if (uVar3 == 0) {
      if (*(short *)(uVar2 + 0xbc) < 1) {
        return (ulonglong)(*(byte *)(param_1 + 0x30) & 1);
      }
    }
    else {
      uVar1 = uVar2;
      if (uVar3 != 0x60) goto LAB_1435e59ca;
      for (uVar1 = *(ulonglong *)(uVar2 + 0x38); uVar2 = 0, uVar1 != 0;
          uVar1 = *(ulonglong *)(uVar1 + 0x38)) {
        if ((*(uint *)(uVar1 + 0xb8) >> 0xf & 1) != 0) goto LAB_1435e59ca;
      }
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_1435e59ca:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1435e5a30 FUN_1435e5a30 body=249 status=ok
// SIG undefined FUN_1435e5a30(void)

void FUN_1435e5a30(longlong param_1,char param_2)

{
  RefCountNTSImpl *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this = *(RefCountNTSImpl **)(param_1 + -0x38);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if ((((((byte)this[0xb8] & 0xc) == 0) && ((*(ushort *)(this + 0x6a) & 0x1000) == 0)) &&
      (-2 < *(int *)(this + 0x2c))) && ((param_2 != '\0' && ((*(byte *)(param_1 + 0x18) & 2) == 0)))
     ) {
    iVar2 = (**(code **)(*(longlong *)this + 0x360))(this);
    iVar3 = (**(code **)(*(longlong *)this + 0x3a0))(this);
    iVar4 = iVar2;
    if (iVar3 == 0) {
      FUN_143384990(this);
      iVar4 = (**(code **)(*(longlong *)this + 0x360))(this);
      if (iVar4 != iVar2) {
        (**(code **)(*(longlong *)(param_1 + -0x50) + 0xd8))(param_1 + -0x50,iVar4);
        FUN_143384330(this,iVar4);
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
        cVar1 = Scaleform::GFx::InteractiveObject::IsInPlayList(*(undefined8 *)(param_1 + -0x38));
        if (cVar1 != '\0') {
          FUN_14336e960(*(undefined8 *)(param_1 + -0x38));
        }
      }
    }
    if (iVar4 == 0) {
      FUN_1433d5140(*(longlong *)(param_1 + -0x38) + 0xd8);
    }
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 1435e5b30 FUN_1435e5b30 body=2606 status=ok
// SIG undefined FUN_1435e5b30(void)

RefCountNTSImpl *
FUN_1435e5b30(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,int param_6,uint param_7,uint *param_8,longlong param_9)

{
  int *piVar1;
  ushort *puVar2;
  RefCountNTSImpl *pRVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  RefCountNTSImpl *this;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  RefCountNTSImpl *pRVar19;
  uint uVar20;
  RefCountNTSImpl *pRVar21;
  longlong **pplVar22;
  undefined4 uVar23;
  char local_168 [16];
  uint local_158;
  uint uStack_154;
  int *piStack_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128;
  longlong lStack_120;
  longlong *local_118;
  longlong lStack_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0 [2];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [64];
  RefCountImpl *local_68;
  ushort local_46;
  undefined1 local_44;
  
  uVar10 = param_7;
  pRVar19 = (RefCountNTSImpl *)0x0;
  local_138 = *(longlong **)(param_1 + -0x38);
  uVar20 = param_7 >> 2;
  lVar16 = (*(longlong **)(param_1 + -0x38))[0x16];
  local_130 = 0;
  bVar5 = (byte)param_7 & 1;
  if (param_8 == (uint *)0x0) {
    param_7 = *(uint *)(param_2 + 0x50);
    puVar11 = (uint *)FUN_143310f20(lVar16,&local_158,&param_7);
  }
  else {
    puVar11 = &local_158;
    local_158 = *param_8;
    uStack_154 = param_8[1];
    piStack_150 = *(int **)(param_8 + 2);
    local_148 = *(ulonglong *)(param_8 + 4);
  }
  local_118 = *(longlong **)puVar11;
  lStack_110 = *(longlong *)(puVar11 + 2);
  local_108 = *(longlong **)(puVar11 + 4);
  if (local_118 == (longlong *)0x0) {
    if ((*(byte *)(param_2 + 99) & 1) != 0) {
      local_128 = (longlong *)0x0;
      lStack_120 = 0;
      FUN_1432c2fb0(&param_8,*(undefined8 *)(param_2 + 0x58));
      uVar6 = FUN_1432ec590(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x10),lVar16,
                            &local_128,&param_8);
      uVar17 = CONCAT71(param_8._1_7_,(char)param_8) & 0xfffffffffffffffc;
      param_7 = CONCAT31(param_7._1_3_,uVar6);
      iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar17 + 8,0xffffffff);
      if (iVar8 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar17);
      }
      if ((char)param_7 != '\0') {
        uVar9 = (**(code **)(*local_128 + 0x10))();
        if ((uVar9 >> 0xf & 1) == 0) {
          local_108 = local_128;
          lStack_110 = *(longlong *)(lStack_120 + 0x50);
        }
        else {
          local_118 = local_128;
          lStack_110 = *(longlong *)(lStack_120 + 0x50);
        }
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1432de450(local_128);
      }
      if (local_118 != (longlong *)0x0) goto LAB_1435e5cfe;
    }
    if ((local_108 == (longlong *)0x0) ||
       (uVar9 = (**(code **)(*local_108 + 0x10))(), (uVar9 & 0xff00) != 0x100)) {
      FUN_143370e50(*(longlong *)(param_1 + -0x38) + 0x18,
                    "Sprite::AddDisplayObject(): unknown cid = %d\n",*(undefined2 *)(param_2 + 0x50)
                   );
      return (RefCountNTSImpl *)0x0;
    }
    local_130 = 8;
    if (lStack_110 == 0) {
      lStack_110 = lVar16;
    }
  }
LAB_1435e5cfe:
  plVar13 = local_138;
  local_168[0] = '\0';
  plVar12 = (longlong *)
            Scaleform::GFx::DisplayList::GetDisplayObjectAtDepth
                      (local_138 + 0x1b,*(undefined4 *)(param_2 + 0x4c),local_168);
  if (param_6 == -1) {
    param_6 = (**(code **)(*plVar13 + 0x360))(plVar13);
  }
  if ((uVar20 & 1) == 0) {
    bVar5 = 1;
  }
  else {
    if (((plVar12 != (longlong *)0x0) &&
        (cVar7 = (**(code **)(*plVar12 + 0x198))(plVar12), cVar7 == '\0')) &&
       (cVar7 = (**(code **)(*plVar12 + 0x1a0))(plVar12), cVar7 != '\0')) {
      (**(code **)(*plVar12 + 0x1a8))(plVar12,1);
    }
    if (local_168[0] == '\0') {
      if (plVar12 == (longlong *)0x0) goto LAB_1435e610e;
      cVar7 = (**(code **)(*plVar12 + 0x198))(plVar12);
      if (cVar7 == '\0') {
        return (RefCountNTSImpl *)0x0;
      }
    }
    if (((plVar12 != (longlong *)0x0) && (-2 < *(int *)((longlong)plVar12 + 0x2c))) &&
       ((int)plVar12[5] == *(int *)(param_2 + 0x50))) {
      lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x1a0);
      *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
      lVar18 = lVar16;
      if (*(char *)((longlong)plVar12 + 0x6a) < '\0') {
        plVar13 = (longlong *)Scaleform::GFx::DisplayObject::GetOriginalName(plVar12,&local_128);
        lVar18 = *plVar13;
        *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
        piVar1 = (int *)(lVar16 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar16);
        }
        plVar13 = local_128 + 3;
        *(int *)plVar13 = (int)*plVar13 + -1;
        if ((int)*plVar13 == 0) {
          FUN_14335f920();
        }
      }
      if (*(char *)((longlong)plVar12 + 0x6a) < '\0') {
        if (*(int *)(*param_3 + 0x20) == 0) {
          if ((*(int *)(lVar18 + 0x20) == 0) || ((*(byte *)(plVar12 + 0x11) >> 1 & 1) != 0))
          goto LAB_1435e5e4f;
        }
        else if (lVar18 == *param_3) goto LAB_1435e5e4f;
      }
      else {
LAB_1435e5e4f:
        if ((int)plVar12[6] == param_6) {
          FUN_143496560(local_a8,param_2);
          if ((-1 < *(char *)(param_2 + 0x62)) &&
             (iVar8 = (**(code **)(*plVar12 + 0x78))(plVar12), iVar8 != 0)) {
            local_44 = 0;
            local_46 = local_46 | 0x80;
          }
          if ((*(byte *)(param_2 + 0x62) >> 3 & 1) == 0) {
            uVar14 = FUN_1433679a0(plVar12);
            cVar7 = Scaleform::Render::Cxform::IsIdentity(uVar14);
            if (cVar7 == '\0') {
              local_46 = local_46 | 8;
              FUN_1432bff30(local_a8);
            }
          }
          FUN_14336fb10(local_138,local_a8);
          if ((*(byte *)((longlong)plVar12 + 0x6b) & 1) == 0) goto LAB_1435e60cd;
          lVar16 = (longlong)plVar12 + (ulonglong)*(byte *)((longlong)plVar12 + 0x6d) * 4;
          plVar13 = (longlong *)Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(lVar16);
          if (((*(byte *)(plVar12 + 0x11) >> 1 & 1) != 0) || (plVar13 == (longlong *)0x0))
          goto LAB_1435e60cd;
          Scaleform::GFx::DisplayObject::GetName(plVar12,&param_8);
          lVar4 = CONCAT71(param_8._1_7_,(char)param_8);
          local_100 = 10;
          uStack_f8 = 0;
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          local_148 = *(ulonglong *)(lVar16 + 0x10);
          if (local_148 == 0) {
            local_148 = *(ulonglong *)(lVar16 + 8);
          }
          if ((local_148 & 1) != 0) {
            local_148 = local_148 - 1;
          }
          local_158 = 0xc;
          piStack_150 = (int *)0x0;
          if (local_148 != 0) {
            *(uint *)(local_148 + 8) = *(int *)(local_148 + 8) + 1U & 0x8fffffff;
          }
          local_d8 = *(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x88) +
                      0x1d8);
          local_e0[0] = 0;
          if (local_d8 != 0) {
            *(uint *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1U & 0x8fffffff;
          }
          local_f0._0_4_ = (undefined4)lVar4;
          local_f0._4_4_ = (undefined4)((uint7)param_8._1_7_ >> 0x18);
          local_d0 = 10;
          uStack_cc = uStack_fc;
          uStack_c8 = 0;
          uStack_c4 = 0;
          local_c0 = (undefined4)local_f0;
          uStack_bc = local_f0._4_4_;
          uStack_b8 = uStack_e8;
          uStack_b4 = uStack_e4;
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          local_f0 = lVar4;
          FUN_1435aef90(local_e0,0);
          (**(code **)(*plVar13 + 0x20))(plVar13,&param_7,local_e0,&local_158);
          FUN_1434e6250(local_e0);
          uVar10 = local_158 & 0x1f;
          if (9 < uVar10) {
            if ((local_158 >> 9 & 1) == 0) {
              if (uVar10 == 10) {
                piVar1 = (int *)(local_148 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
                uVar17 = local_148;
                if ((local_148 & 1) == 0) {
LAB_1435e6082:
                  if ((uVar17 != 0) && ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  local_148 = local_148 - 1;
                }
              }
              else if (uVar10 - 0xd < 2) {
                uVar17 = local_140;
                if ((local_140 & 1) == 0) goto LAB_1435e6082;
                local_140 = local_140 - 1;
              }
            }
            else {
              *piStack_150 = *piStack_150 + -1;
              if (*piStack_150 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
              local_158 = local_158 & 0xfffffde0;
              piStack_150 = (int *)0x0;
              local_148 = 0;
              local_140 = 0;
            }
          }
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar4);
          }
          piVar1 = (int *)(CONCAT71(param_8._1_7_,(char)param_8) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
LAB_1435e60cd:
          if (local_68 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_68);
          }
          piVar1 = (int *)(lVar18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return (RefCountNTSImpl *)0x0;
          }
          FUN_14335f920(lVar18);
          return (RefCountNTSImpl *)0x0;
        }
        bVar5 = 1;
      }
      piVar1 = (int *)(lVar18 + 0x18);
      *piVar1 = *piVar1 + -1;
      plVar13 = local_138;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar18);
        plVar13 = local_138;
      }
    }
  }
LAB_1435e610e:
  FUN_1433830d0(plVar13);
  plVar12 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x18);
  local_128 = (longlong *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_2 + 0x50));
  pplVar22 = &local_128;
  this = (RefCountNTSImpl *)
         (**(code **)(*plVar12 + 0x20))
                   (plVar12,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x10),
                    &local_118,plVar13,pplVar22,local_130);
  uVar23 = (undefined4)((ulonglong)pplVar22 >> 0x20);
  param_8._0_1_ = '\0';
  lVar16 = *(longlong *)(this + 0x38);
  pRVar21 = pRVar19;
  if ((char)*(ushort *)(this + 0x6a) < '\0') {
    pRVar21 = this;
  }
  *(ushort *)(this + 0x6a) = *(ushort *)(this + 0x6a) & 0xfffe;
  for (; lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 0x38)) {
    pfVar15 = (float *)FUN_143367db0(lVar16,&local_158);
    uVar23 = (undefined4)((ulonglong)pplVar22 >> 0x20);
    if ((*pfVar15 < pfVar15[2]) && (pfVar15[1] < pfVar15[3])) {
      *(ushort *)(this + 0x6a) = *(ushort *)(this + 0x6a) | 1;
      (**(code **)(*(longlong *)this + 0xa0))(this);
      break;
    }
  }
  if (pRVar21 != (RefCountNTSImpl *)0x0) {
    if (*(int *)(*param_3 + 0x20) != 0) {
      FUN_14336d560(pRVar21,param_3);
      param_8._0_1_ = '\x01';
    }
    if (param_9 != 0) {
      (**(code **)(*(longlong *)pRVar21 + 0x2f8))(pRVar21);
    }
  }
  if ((uVar10 & 4) == 0) {
    (**(code **)(*(longlong *)this + 0x1a8))(this,0);
  }
  else {
    *(ushort *)(this + 0x88) = *(ushort *)(this + 0x88) | 1;
  }
  param_7 = uVar10 & 0xfffffffe;
  *(int *)(this + 0x30) = param_6;
  if (bVar5 != 0) {
    param_7 = param_7 | 1;
  }
  pRVar3 = this + (ulonglong)(byte)this[0x6d] * 4;
  *(undefined8 *)(pRVar3 + 0x28) = *(undefined8 *)(param_1 + -0x28);
  if ((*(byte *)(param_2 + 99) & 1) != 0) {
    FUN_1435e1a90(pRVar3,*(undefined8 *)(param_2 + 0x58));
  }
  plVar13 = local_138;
  FUN_1433d4610(local_138 + 0x1b,*(undefined8 *)(param_1 + -0x38),param_2,this,
                CONCAT44(uVar23,param_7));
  cVar7 = FUN_1435e0710(pRVar3);
  if (cVar7 == '\0') goto LAB_1435e64bb;
  if ((((byte)this[0x88] >> 1 & 1) == 0) &&
     (lVar16 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(pRVar3), lVar16 != 0)) {
    local_100 = 10;
    uStack_f8 = 0;
    lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x88);
    lVar18 = *param_3;
    *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
    plVar13 = *(longlong **)(param_1 + -0x40);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = *(longlong **)(param_1 + -0x48);
    }
    if (((ulonglong)plVar13 & 1) != 0) {
      plVar13 = (longlong *)((longlong)plVar13 + -1);
    }
    local_148 = *(ulonglong *)(pRVar3 + 0x10);
    if (local_148 == 0) {
      local_148 = *(ulonglong *)(pRVar3 + 8);
    }
    if ((local_148 & 1) != 0) {
      local_148 = local_148 - 1;
    }
    local_158 = 0xc;
    piStack_150 = (int *)0x0;
    if (local_148 != 0) {
      *(uint *)(local_148 + 8) = *(int *)(local_148 + 8) + 1U & 0x8fffffff;
    }
    local_d8 = *(longlong *)(lVar16 + 0x1d8);
    local_e0[0] = 0;
    if (local_d8 != 0) {
      *(uint *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1U & 0x8fffffff;
    }
    local_f0._0_4_ = (undefined4)lVar18;
    local_f0._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    local_d0 = 10;
    uStack_cc = uStack_fc;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_c0 = (undefined4)local_f0;
    uStack_bc = local_f0._4_4_;
    uStack_b8 = uStack_e8;
    uStack_b4 = uStack_e4;
    *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
    local_f0 = lVar18;
    FUN_1435aef90(local_e0,0);
    (**(code **)(*plVar13 + 0x20))(plVar13,&param_7,local_e0,&local_158);
    FUN_1434e6250(local_e0);
    uVar10 = local_158 & 0x1f;
    if (9 < uVar10) {
      if ((local_158 >> 9 & 1) == 0) {
        if (uVar10 == 10) {
          piVar1 = (int *)(local_148 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
          uVar17 = local_148;
          if ((local_148 & 1) == 0) {
LAB_1435e6439:
            if ((uVar17 != 0) && ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            local_148 = local_148 - 1;
          }
        }
        else if (uVar10 - 0xd < 2) {
          uVar17 = local_140;
          if ((local_140 & 1) == 0) goto LAB_1435e6439;
          local_140 = local_140 - 1;
        }
      }
      else {
        *piStack_150 = *piStack_150 + -1;
        if (*piStack_150 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_158 = local_158 & 0xfffffde0;
        piStack_150 = (int *)0x0;
        local_148 = 0;
        local_140 = 0;
      }
    }
    piVar1 = (int *)(lVar18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar18);
    }
    plVar13 = local_138;
    if (*(char *)(lVar16 + 0xb8) != '\0') {
      FUN_1435cc020();
      puVar2 = (ushort *)(*(longlong *)(param_1 + -0x38) + 0x88);
      *puVar2 = *puVar2 | 0x20;
      plVar13 = local_138;
    }
  }
  FUN_1435e0a80(pRVar3,1);
  if ((*(ushort *)(this + 0x6a) >> 10 & 1) != 0) {
    FUN_1435e6b00(this + (ulonglong)(byte)this[0x6d] * 4);
  }
LAB_1435e64bb:
  if ((char)param_8 != '\0') {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + -0x38) + 0x20);
    (**(code **)(*plVar12 + 0x140))(plVar12,pRVar21);
  }
  if (pRVar21 != (RefCountNTSImpl *)0x0) {
    if (((char)param_8 != '\0') &&
       (*param_3 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x38) + 0x20) + 0x208))) {
      FUN_143384c20(plVar13,pRVar21);
    }
    lVar16 = (**(code **)(*(longlong *)(pRVar21 + (ulonglong)(byte)pRVar21[0x6d] * 4) + 8))
                       (pRVar21 + (ulonglong)(byte)pRVar21[0x6d] * 4);
    if (lVar16 != 0) {
      pRVar19 = (RefCountNTSImpl *)(lVar16 + -0x38);
    }
    (**(code **)(*(longlong *)pRVar19 + 0x98))(pRVar19,1);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return this;
}



// FUNCTION 1435e6570 FUN_1435e6570 body=69 status=ok
// SIG undefined FUN_1435e6570(void)

undefined8 FUN_1435e6570(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return 1;
  }
  if (*(longlong *)(param_1 + -0x28) == 0) {
    if (*(longlong *)(param_1 + -0x30) == 0) {
      return 0;
    }
    if ((*(longlong *)(param_1 + -0x28) == 0) && (*(longlong *)(param_1 + -0x30) == 0)) {
      return 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + -0x28);
  if (uVar2 == 0) {
    uVar2 = *(ulonglong *)(param_1 + -0x30);
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = FUN_14351a5c0(uVar2);
  return uVar1;
}



// FUNCTION 1435e65e0 FUN_1435e65e0 body=104 status=ok
// SIG undefined FUN_1435e65e0(void)

void FUN_1435e65e0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 8) = uVar1 - 1;
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 - 1;
    }
    FUN_1434f2570(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1435e6660 FUN_1435e6660 body=213 status=ok
// SIG undefined FUN_1435e6660(void)

void FUN_1435e6660(longlong param_1,uint param_2)

{
  RefCountNTSImpl *this;
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_18;
  uint local_10;
  
  uVar5 = (ulonglong)(param_2 >> 3);
  if (((byte)(1 << (sbyte)(param_2 & 7)) & *(byte *)(uVar5 + *(longlong *)(param_1 + 0x58))) == 0) {
    this = *(RefCountNTSImpl **)(param_1 + 0x18);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    uVar4 = 0;
    local_18 = 0;
    local_10 = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x110);
    cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_18,param_2);
    if ((cVar2 != '\0') && (local_10 != 0)) {
      do {
        plVar1 = *(longlong **)(local_18 + uVar4 * 8);
        (**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(param_1 + 0x18));
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < local_10);
      *(byte *)(*(longlong *)(param_1 + 0x58) + uVar5) =
           *(byte *)(*(longlong *)(param_1 + 0x58) + uVar5) | (byte)(1 << (param_2 & 7));
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1435e6750 ExecuteFrameTags body=54 status=ok
// SIG undefined ExecuteFrameTags(void)

void Scaleform::GFx::AS3::AvmSprite::ExecuteFrameTags(longlong param_1)

{
  ushort *puVar1;
  char cVar2;
  
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  cVar2 = InteractiveObject::IsInPlayList(*(undefined8 *)(param_1 + 0x18));
  if (cVar2 != '\0') {
    FUN_14336e960(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x6a);
  *puVar1 = *puVar1 & 0xffdf;
  return;
}



// FUNCTION 1435e67a0 FUN_1435e67a0 body=68 status=ok
// SIG undefined FUN_1435e67a0(void)

undefined8 FUN_1435e67a0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      cVar1 = (**(code **)(*param_1 + 0xa8))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    return 1;
  }
  if (param_2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001435e67b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x60))();
    return uVar2;
  }
  return 1;
}



// FUNCTION 1435e67f0 FUN_1435e67f0 body=72 status=ok
// SIG undefined FUN_1435e67f0(void)

undefined1 FUN_1435e67f0(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    local_28 = 2;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    cVar1 = (**(code **)(*(longlong *)(param_1 + -0x50) + 0x38))(param_1 + -0x50,&local_28);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1435e6840 FUN_1435e6840 body=528 status=ok
// SIG undefined FUN_1435e6840(void)

void FUN_1435e6840(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong uStack_10;
  
  local_28 = 0;
  plVar8 = *(longlong **)(param_1 + 0x10);
  uStack_20 = (int *)0x0;
  plVar6 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 8);
  }
  if (((ulonglong)plVar6 & 1) != 0) {
    plVar6 = (longlong *)((longlong)plVar6 + -1);
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    if (((ulonglong)plVar8 & 1) != 0) {
      plVar8 = (longlong *)((longlong)plVar8 + -1);
    }
    cVar4 = (**(code **)(*plVar8 + 0xe0))(plVar8,param_2,&local_28);
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x18);
      lVar7 = FUN_143611070(*(undefined8 *)(lVar3 + 0x20),3);
      *(undefined4 *)(lVar7 + 8) = 2;
      if (lVar3 != 0) {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      }
      if (*(RefCountNTSImpl **)(lVar7 + 0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar7 + 0x10));
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      puVar1 = (uint *)(lVar7 + 0x38);
      if (&local_28 != puVar1) {
        uVar5 = local_28 & 0x1f;
        if (9 < uVar5) {
          if ((local_28 >> 9 & 1) == 0) {
            if (uVar5 == 10) {
              *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
            }
            else if ((10 < uVar5) &&
                    (((uVar9 = local_18, uVar5 < 0xd || (uVar9 = uStack_10, uVar5 < 0xf)) &&
                     (uVar9 != 0)))) {
              *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) & 0x8fffffff;
            }
          }
          else {
            *uStack_20 = *uStack_20 + 1;
          }
        }
        FUN_143603d30(puVar1);
        *puVar1 = local_28;
        *(undefined4 *)(lVar7 + 0x3c) = uStack_24;
        *(undefined4 *)(lVar7 + 0x40) = (undefined4)uStack_20;
        *(undefined4 *)(lVar7 + 0x44) = uStack_20._4_4_;
        *(ulonglong *)(lVar7 + 0x48) = local_18;
        *(ulonglong *)(lVar7 + 0x50) = uStack_10;
      }
      *(undefined8 *)(lVar7 + 0x58) = 0;
      uVar9 = *(ulonglong *)(lVar7 + 0x18);
      if (uVar9 != 0) {
        if ((uVar9 & 1) == 0) {
          if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(lVar7 + 0x18) = uVar9 - 1;
        }
        *(undefined8 *)(lVar7 + 0x18) = 0;
      }
      if (*(RefCountImpl **)(lVar7 + 0x60) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar7 + 0x60));
      }
      *(undefined8 *)(lVar7 + 0x60) = 0;
    }
  }
  uVar5 = local_28 & 0x1f;
  if (9 < uVar5) {
    if ((local_28 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar2 = (int *)(local_18 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
      }
      else if (((((uVar5 == 0xb) || (uVar5 == 0xc)) || (local_18 = uStack_10, uVar5 - 0xd < 2)) &&
               (((local_18 & 1) == 0 && (local_18 != 0)))) &&
              ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
        FUN_1434ef880();
        return;
      }
    }
    else {
      *uStack_20 = *uStack_20 + -1;
      if (*uStack_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435e6b00 FUN_1435e6b00 body=171 status=ok
// SIG undefined FUN_1435e6b00(void)

void FUN_1435e6b00(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 4) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    cVar3 = Scaleform::GFx::InteractiveObject::IsInPlayList(lVar2);
    if ((cVar3 == '\0') && (*(longlong *)(lVar2 + 0x38) != 0)) {
      cVar3 = Scaleform::GFx::InteractiveObject::IsInPlayList();
      if (cVar3 != '\0') {
        if (*(longlong *)(lVar2 + 0x38) == 0) {
          Scaleform::GFx::InteractiveObject::AddToPlayList(lVar2);
        }
        else {
          uVar4 = Scaleform::GFx::AS3::AvmDisplayObj::GetAvmParent(param_1);
          FUN_1435e3fe0(uVar4,lVar2);
        }
        FUN_1434a1710(lVar2);
      }
    }
    if ((*(byte *)(lVar2 + 0x138) & 8) == 0) {
      Scaleform::GFx::Sprite::DefaultOnEventLoad(lVar2);
    }
    bVar1 = *(byte *)(lVar2 + 0x6d);
    if (bVar1 != 0) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)(lVar2 + (ulonglong)bVar1 * 4) + 0x10))
                         (lVar2 + (ulonglong)bVar1 * 4);
      (**(code **)(*plVar5 + 0xe8))(plVar5,0);
    }
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 4;
  }
  return;
}



// FUNCTION 1435e6bc0 FUN_1435e6bc0 body=146 status=ok
// SIG undefined FUN_1435e6bc0(void)

ulonglong FUN_1435e6bc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  RefCountNTSImpl *this;
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  RefCountNTSImpl *local_res20;
  
  uVar2 = FUN_1435e5250();
  if (((char)uVar2 == '\0') && ((*(longlong **)(param_1 + 0x18))[0x24] != 0)) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2a0))();
    bVar1 = FUN_14337f0b0(uVar3,param_3,1,*(undefined8 *)(param_1 + 0x18));
    if (bVar1 != 0) {
      this = *(RefCountNTSImpl **)(param_1 + 0x18);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      local_res20 = this;
      FUN_143610fa0(param_2,0,&local_res20);
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}



// FUNCTION 1435e6c60 FUN_1435e6c60 body=48 status=ok
// SIG undefined FUN_1435e6c60(void)

void FUN_1435e6c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b49e80;
  param_1[7] = &PTR_LAB_145b49f70;
  param_1[9] = &PTR_LAB_145b4a020;
  param_1[10] = &PTR_LAB_145b4a0e8;
  FUN_1435e56c0();
  return;
}



// FUNCTION 1435e6ca0 FUN_1435e6ca0 body=138 status=ok
// SIG undefined FUN_1435e6ca0(void)

undefined8 * FUN_1435e6ca0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14336f060();
  *param_1 = &PTR_FUN_145b4bde8;
  param_1[3] = &PTR_LAB_145b4c1d8;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  lVar1 = Scaleform::GFx::InteractiveObject::GetStringManager(param_1);
  param_1[0x24] = lVar1 + 0x48;
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x2000;
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 1435e6d30 FUN_1435e6d30 body=95 status=ok
// SIG undefined FUN_1435e6d30(void)

void FUN_1435e6d30(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_145b4bde8;
  param_1[3] = &PTR_LAB_145b4c1d8;
  piVar1 = (int *)(param_1[0x24] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((RefCountNTSImpl *)param_1[0x23] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x23]);
  }
  if ((RefCountNTSImpl *)param_1[0x22] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x22]);
  }
  FUN_14336f0d0(param_1);
  return;
}



// FUNCTION 1435e6da0 FUN_1435e6da0 body=1316 status=ok
// SIG undefined FUN_1435e6da0(void)

void FUN_1435e6da0(longlong *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  uint *puVar3;
  RefCountNTSImpl *pRVar4;
  RefCountNTSImpl RVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  RefCountNTSImpl *this;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  ulonglong local_res18;
  RefCountNTSImpl *local_res20;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  
  local_60 = param_1[0x16];
  lVar12 = param_1[4];
  local_58 = 0;
  local_res8[0] = 0;
  lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x18);
  lVar16 = *(longlong *)(lVar8 + 0x88);
  local_68 = *(undefined8 *)(*(longlong *)(local_60 + 0x70) + 0x18);
  this = (RefCountNTSImpl *)
         (**(code **)(**(longlong **)(lVar12 + 0x18) + 0x20))
                   (*(longlong **)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 0x10),&local_68,param_1,
                    local_res8,3);
  FUN_143383050(this,1);
  *(ushort *)(this + 0x6a) = *(ushort *)(this + 0x6a) | 0x800;
  *(ushort *)(this + 0x6a) = *(ushort *)(this + 0x6a) | 0x2000;
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 0x1000;
  local_res10 = *(ulonglong *)(lVar16 + 0x1c8);
  pRVar4 = this + (ulonglong)(byte)this[0x6d] * 4;
  local_res20 = pRVar4;
  if (DAT_1467d97e8 == '\0') {
    if (local_res10 != 0) {
      *(uint *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    lVar12 = (**(code **)(**(longlong **)(lVar16 + 0x48) + 0x50))
                       (*(longlong **)(lVar16 + 0x48),0x78,0);
    if (lVar12 == 0) {
      local_res10 = 0;
    }
    else {
      local_res10 = FUN_1435be0a0(lVar12,lVar16,local_res10);
    }
  }
  uVar9 = local_res10;
  puVar2 = (ulonglong *)(lVar16 + 0x1d0);
  if (&local_res10 != puVar2) {
    if (local_res10 != 0) {
      *(uint *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1U & 0x8fffffff;
    }
    uVar15 = *puVar2;
    if (uVar15 != 0) {
      if ((uVar15 & 1) == 0) {
        if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar15 - 1;
      }
    }
    *puVar2 = uVar9;
  }
  *(ulonglong *)(pRVar4 + 0x28) = uVar9;
  RVar5 = this[0x6d];
  if (RVar5 != (RefCountNTSImpl)0x0) {
    plVar13 = (longlong *)
              (**(code **)(*(longlong *)(this + (ulonglong)(byte)RVar5 * 4) + 0x10))
                        (this + (ulonglong)(byte)RVar5 * 4);
    (**(code **)(*plVar13 + 0xe8))(plVar13,0);
  }
  uVar14 = (**(code **)(**(longlong **)(*(longlong *)(param_1[4] + 0x10) + 0x18) + 0x1e0))();
  local_res18 = FUN_143360950(uVar14,"root1",5);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  (**(code **)(*(longlong *)this + 1000))(this,&local_res18);
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(ushort *)(this + 0x88) = *(ushort *)(this + 0x88) | 1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  if ((RefCountNTSImpl *)param_1[0x22] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x22]);
  }
  param_1[0x22] = (longlong)this;
  (**(code **)(*param_1 + 0x138))(param_1,0x404b800000000000);
  (**(code **)(*(longlong *)this + 0x138))(this,0x404b800000000000);
  lVar12 = (**(code **)(*param_1 + 0x230))(param_1);
  if (lVar12 != 0) {
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 1;
  }
  FUN_1433d47a0(param_1 + 0x1b,param_1,(int)param_1[0x1c],this);
  FUN_143364100(*(undefined8 *)(*(longlong *)(param_1[4] + 0x10) + 0x90),0,lVar12);
  *(longlong **)(this + 0x38) = param_1;
  Scaleform::GFx::InteractiveObject::AddToPlayList(this);
  FUN_1435e0710(pRVar4);
  local_78 = "flash.display.LoaderInfo";
  local_70 = 0x18;
  uVar15 = FUN_1435cc580(lVar16,&local_78,*(undefined8 *)(lVar16 + 0x1c8));
  if (uVar15 != 0) {
    *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
  }
  uVar17 = *(ulonglong *)(local_res20 + 0x10);
  if (uVar17 == 0) {
    uVar17 = *(ulonglong *)(local_res20 + 8);
  }
  if ((uVar17 & 1) != 0) {
    uVar17 = uVar17 - 1;
  }
  if (uVar15 != 0) {
    local_res18 = 0;
    cVar11 = FUN_1435e8720(lVar16,&local_res18,uVar15,0,0);
    uVar10 = local_res18;
    if ((cVar11 != '\0') && (uVar17 != 0)) {
      FUN_1434f2570(uVar17,local_res18);
      FUN_1434f0700(uVar10 + 0x88,uVar17);
      lVar16 = (**(code **)(**(longlong **)(uVar17 + 0x28) + 0x38))();
      if (lVar16 != 0) {
        *(RefCountNTSImpl **)(lVar16 + 0x150) = this;
      }
      FUN_143614100(uVar10,&local_res10);
    }
    if (((uVar10 != 0) && ((uVar10 & 1) == 0)) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
      FUN_1434ef880(uVar10);
    }
  }
  FUN_1435e0a80(local_res20,1);
  if (((byte)this[(ulonglong)(byte)this[0x6d] * 4 + 0x68] & 4) == 0) {
    (**(code **)(*(longlong *)this + 0x388))(this);
  }
  FUN_1435ea830(*(undefined8 *)(*(longlong *)(param_1[4] + 0x10) + 0x18),0);
  FUN_1435ea830(*(undefined8 *)(*(longlong *)(param_1[4] + 0x10) + 0x18),1);
  this[(ulonglong)(byte)this[0x6d] * 4 + 0x68] =
       (RefCountNTSImpl)((byte)this[(ulonglong)(byte)this[0x6d] * 4 + 0x68] | 4);
  iVar6 = *(int *)(lVar8 + 0x3c8);
  while (iVar6 != 0) {
    uVar7 = *(undefined4 *)(lVar8 + 0x3c8);
    *(undefined4 *)(lVar8 + 0x3c8) = 0;
    FUN_1435c8f90(*(undefined8 *)(lVar8 + 0x88),uVar7);
    if (*(char *)(*(longlong *)(lVar8 + 0x88) + 0xb8) != '\0') {
      FUN_1435cc020();
      *(ushort *)(param_1[0x23] + 0x88) = *(ushort *)(param_1[0x23] + 0x88) | 0x20;
    }
    iVar6 = *(int *)(lVar8 + 0x3c8);
  }
  if (*(longlong *)(this + 0x38) != 0) {
    (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 0x98))
              (this + (ulonglong)(byte)this[0x6d] * 4,1);
  }
  puVar3 = (uint *)(*(longlong *)(param_1[4] + 0x10) + 0x52f0);
  *puVar3 = *puVar3 | 0x80000;
  (**(code **)(*(longlong *)param_1[0x23] + 0x240))((longlong *)param_1[0x23],1,0);
  FUN_1435ea830(*(undefined8 *)(*(longlong *)(param_1[4] + 0x10) + 0x18),3);
  if (((uVar15 != 0) && ((uVar15 & 1) == 0)) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
    FUN_1434ef880(uVar15);
  }
  if (lVar12 != 0) {
    plVar13 = (longlong *)(lVar12 + 0x18);
    *plVar13 = *plVar13 + -1;
    if (*plVar13 == 0) {
      FUN_1432ccf00(lVar12);
    }
  }
  if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
    FUN_1434ef880(uVar9);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 1435e72e0 FUN_1435e72e0 body=196 status=ok
// SIG undefined FUN_1435e72e0(void)

void FUN_1435e72e0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  
  local_res8[0] = 0x142;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xe0,local_res8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    local_res18[0] = 0;
    FUN_14336e2b0(puVar1,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x20),0,
                  local_res18);
    *puVar1 = &PTR_FUN_145b4d040;
    puVar1[3] = &PTR_LAB_145b4d3f8;
    puVar1[0x1b] = 0;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x118) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x118));
  }
  *(undefined8 **)(param_1 + 0x118) = puVar1;
  Scaleform::GFx::InteractiveObject::AddToPlayList(puVar1);
  FUN_14336fa40(param_1,param_2);
  return;
}



// FUNCTION 1435e7430 ForceShutdown body=106 status=ok
// SIG undefined ForceShutdown(void)

void Scaleform::GFx::AS3::Stage::ForceShutdown(longlong param_1)

{
  FUN_14336ead0(*(undefined8 *)(param_1 + 0x118));
  FUN_1433d4de0(param_1 + 0xd8,param_1);
  FSettingsModule::ShutdownModule(param_1);
  if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x1e0))();
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x110) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x110));
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  DisplayObjContainer::ForceShutdown(param_1);
  return;
}



// FUNCTION 1435e74c0 FUN_1435e74c0 body=55 status=ok
// SIG undefined FUN_1435e74c0(void)

void FUN_1435e74c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x120) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x120) = lVar2;
  return;
}



// FUNCTION 1435e7500 FUN_1435e7500 body=459 status=ok
// SIG undefined FUN_1435e7500(void)

void FUN_1435e7500(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  char *local_28;
  undefined8 local_20;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18);
  lVar2 = param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4;
  lVar4 = *(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4);
  lVar5 = *(longlong *)(lVar3 + 0x88);
  uVar6 = *(ulonglong *)(lVar5 + 0x1c8);
  *(ulonglong *)(lVar2 + 0x28) = uVar6;
  iVar9 = (**(code **)(lVar4 + 0x70))(lVar2,0);
  local_20 = 0x18;
  *(int *)(lVar3 + 0x3c8) = *(int *)(lVar3 + 0x3c8) + iVar9;
  local_28 = "flash.display.LoaderInfo";
  uVar10 = FUN_1435cc580(lVar5,&local_28,*(undefined8 *)(lVar5 + 0x1c8));
  if (uVar10 != 0) {
    *(uint *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1U & 0x8fffffff;
    uVar11 = *(ulonglong *)(lVar2 + 0x10);
    if (uVar11 == 0) {
      uVar11 = *(ulonglong *)(lVar2 + 8);
    }
    if ((uVar11 & 1) != 0) {
      uVar11 = uVar11 - 1;
    }
    local_res8 = 0;
    cVar8 = FUN_1435e8720(*(undefined8 *)(lVar3 + 0x88),&local_res8,uVar10,0,0);
    uVar7 = local_res8;
    if ((cVar8 != '\0') && (uVar11 != 0)) {
      FUN_1434f2570(uVar11,local_res8);
      FUN_1434f0700(uVar7 + 0x88,uVar11);
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
      puVar1 = (ulonglong *)(uVar7 + 0x98);
      if (&local_res8 != puVar1) {
        if (uVar6 != 0) {
          *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
        }
        uVar11 = *puVar1;
        if (uVar11 != 0) {
          if ((uVar11 & 1) == 0) {
            if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar11 - 1;
          }
        }
        *puVar1 = uVar6;
      }
      if (((uVar6 != 0) && ((uVar6 & 1) == 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
        FUN_1434ef880(uVar6);
      }
    }
    if (((uVar7 != 0) && ((uVar7 & 1) == 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
      FUN_1434ef880(uVar7);
    }
    if (((uVar10 & 1) == 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
      FUN_1434ef880(uVar10);
    }
  }
  return;
}



// FUNCTION 1435e76e0 FUN_1435e76e0 body=73 status=ok
// SIG undefined FUN_1435e76e0(void)

void FUN_1435e76e0(RefCountNTSImpl *param_1,int *param_2)

{
  if (param_1 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  if ((*param_2 == 8) &&
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x23f0) != 0)) {
    FUN_14336e600(param_1,(int)*(char *)((longlong)param_2 + 0x11));
  }
  if (param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(param_1);
    return;
  }
  return;
}



// FUNCTION 1435e7730 FUN_1435e7730 body=63 status=ok
// SIG undefined FUN_1435e7730(void)

longlong * FUN_1435e7730(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18) +
                      0x1e0))();
  *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  *param_2 = lVar3 + 0x48;
  if (iVar2 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435e77c0 FUN_1435e77c0 body=94 status=ok
// SIG undefined FUN_1435e77c0(void)

void FUN_1435e77c0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  FUN_1433d4de0(*(longlong *)(param_1 + 0x18) + 0xd8);
  FUN_1435e1bf0(param_1);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (-2 < *(int *)(lVar2 + 0x2c)) {
    FUN_1435e0f40(param_1);
    return;
  }
  if ((*(byte *)(lVar2 + 0x6a) >> 4 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + 0x6a);
  *puVar1 = *puVar1 & 0xefef;
  return;
}



// FUNCTION 1435e7830 OnEvent body=72 status=ok
// SIG undefined OnEvent(void)

undefined8 Scaleform::GFx::AS3::AvmStage::OnEvent(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*param_2 != 0x1000023) {
    uVar1 = FUN_1435e3ac0();
    return uVar1;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar2 != 0) || (*(longlong *)(param_1 + 8) != 0)) {
    if (uVar2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 8);
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar2 - 1;
    }
    FUN_1435198d0(uVar2,param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 1435e7880 FUN_1435e7880 body=311 status=ok
// SIG undefined FUN_1435e7880(void)

undefined8 *
FUN_1435e7880(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulonglong local_res8;
  
  if (param_2 == 0) {
    puVar3 = &DAT_145af3922;
  }
  else {
    puVar2 = (undefined8 *)FUN_143557d60(param_2);
    puVar3 = *(undefined1 **)*puVar2;
  }
  FUN_1432c2fb0(&local_res8,puVar3);
  *param_1 = &PTR_FUN_145b0aac0;
  FUN_1432c2f70(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = (uint)((local_res8 & 0xfffffffffffffffc) == 0xfffffffffffffff4);
  FUN_1432c4d80(param_1 + 3,&local_res8);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  *param_1 = &PTR_FUN_145b4c468;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  FUN_1434f0700(param_1 + 5,param_3);
  FUN_1434f0700(param_1 + 7,param_2);
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1435e79c0 FUN_1435e79c0 body=354 status=ok
// SIG undefined FUN_1435e79c0(void)

undefined8 *
FUN_1435e79c0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong local_res8;
  undefined4 local_res20 [2];
  
  FUN_1432c2fb0(&local_res8,&DAT_145af3922);
  *param_1 = &PTR_FUN_145b0aac0;
  FUN_1432c2f70(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = (uint)((local_res8 & 0xfffffffffffffffc) == 0xfffffffffffffff4);
  FUN_1432c4d80(param_1 + 3,&local_res8);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  *param_1 = &PTR_FUN_145b4c468;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  FUN_1434f0700(param_1 + 5,param_3);
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  param_1[10] = 0;
  local_res20[0] = 2;
  puVar2 = (undefined8 *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x18,local_res20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::operator=
            (param_1 + 8,puVar2);
  FUN_1432f25b0(param_1[8],*(undefined4 *)(param_2 + 0x48));
  _guard_xfg_dispatch_icall_nop
            (*(void **)param_1[8],*(void **)(param_2 + 0x50),((undefined8 *)param_1[8])[1]);
  return param_1;
}



// FUNCTION 1435e7b30 FUN_1435e7b30 body=279 status=ok
// SIG undefined FUN_1435e7b30(void)

undefined8 *
FUN_1435e7b30(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulonglong local_res8;
  
  if (param_2 == 0) {
    puVar3 = &DAT_145af3922;
  }
  else {
    puVar2 = (undefined8 *)FUN_143557d60(param_2);
    puVar3 = *(undefined1 **)*puVar2;
  }
  FUN_1432c2fb0(&local_res8,puVar3);
  *param_1 = &PTR_FUN_145b0aac0;
  FUN_1432c2f70(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[1] = 0;
  FUN_1432c4d80(param_1 + 3,&local_res8);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  *param_1 = &PTR_FUN_145b4c468;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  FUN_1434f0700(param_1 + 6,param_3);
  FUN_1434f0700(param_1 + 7,param_2);
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1435e7c50 FUN_1435e7c50 body=266 status=ok
// SIG undefined FUN_1435e7c50(void)

void FUN_1435e7c50(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145b4c468;
  if (param_1[10] != 0) {
    if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
    }
    param_1[10] = 0;
  }
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  ~AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>(param_1 + 8);
  uVar1 = param_1[7];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[7] = uVar1 - 1;
    }
  }
  uVar1 = param_1[6];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[6] = uVar1 - 1;
    }
  }
  uVar1 = param_1[5];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[5] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_FUN_145b0aac0;
  uVar1 = param_1[3];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001435e7d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
    return;
  }
  return;
}



// FUNCTION 1435e7d60 FUN_1435e7d60 body=254 status=ok
// SIG undefined FUN_1435e7d60(void)

undefined8 * FUN_1435e7d60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  byte bVar5;
  undefined1 local_res8 [8];
  
  FUN_143388a90();
  uVar4 = 0;
  *param_1 = &PTR_FUN_145b4c470;
  bVar5 = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1[3] + 0x18) + 0x10) + 0x58);
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x218))();
    puVar2 = (uint *)(**(code **)(*plVar1 + 0x58))(plVar1,local_res8);
    bVar5 = (byte)(*puVar2 >> 4) & 1;
  }
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (lVar3 != 0) {
    uVar4 = FUN_143388b00(lVar3,param_1[3],param_2 + 0x18,bVar5,*(undefined1 *)(param_2 + 0x24));
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = uVar4;
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1[3] + 0x10) + 0x18))
                   ((longlong *)(param_1[3] + 0x10),0x18);
  (**(code **)(*(longlong *)this + 8))(this,param_1[5]);
  Scaleform::RefCountImpl::Release(this);
  return param_1;
}



// FUNCTION 1435e7e70 FUN_1435e7e70 body=46 status=ok
// SIG undefined FUN_1435e7e70(void)

void FUN_1435e7e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b4c470;
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  return;
}



// FUNCTION 1435e7eb0 FUN_1435e7eb0 body=1544 status=ok
// SIG undefined FUN_1435e7eb0(void)

undefined8 FUN_1435e7eb0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  RefCountNTSImpl *this;
  undefined8 uVar9;
  undefined8 uVar10;
  RefCountNTSImpl *pRVar11;
  longlong *plVar12;
  ulonglong uVar13;
  RefCountNTSImpl *pRVar14;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  int local_90 [2];
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  
  cVar3 = Scaleform::GFx::MoviePreloadTask::IsDone(*(undefined8 *)(param_1 + 0x28));
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((*(char *)(lVar2 + 0x25) != '\0') && (cVar3 != '\0')) {
    return 1;
  }
  plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
  if (cVar3 == '\0') {
    if (*(char *)(lVar2 + 0x58) != '\0') {
      FUN_1434fd600(*(undefined8 *)(lVar2 + 0x28));
      *(undefined1 *)(lVar2 + 0x58) = 0;
    }
    return 0;
  }
  plVar6 = (longlong *)FWmfMediaPlayer::GetSamples(*(undefined8 *)(param_1 + 0x28));
  if (plVar6 == (longlong *)0x0) {
    puVar7 = (undefined8 *)FUN_143557d60(*(undefined8 *)(lVar2 + 0x38));
    FUN_1434fd5b0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)*puVar7);
    if (*(longlong **)(lVar2 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x18))();
    }
    *(undefined1 *)(lVar2 + 0x58) = 0;
    return 1;
  }
  if (*(char *)(lVar2 + 0x58) != '\0') {
    iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
    if ((iVar4 != -1) &&
       ((uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6), uVar5 < 9 ||
        (((byte)*(undefined4 *)(*(longlong *)(*(longlong *)(plVar6[0xe] + 0x18) + 0x40) + 0xd0) & 8
         | 0x10) < 0x18)))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x25) = 1;
      lVar8 = FUN_1434a0340(plVar12);
      if ((lVar8 != 0) && (*(char *)(lVar2 + 0x24) == '\0')) {
        puVar7 = (undefined8 *)FUN_143557d60(*(undefined8 *)(lVar2 + 0x38));
        uVar9 = *(undefined8 *)*puVar7;
        lVar8 = FUN_1434a0340(plVar12);
        FUN_1434a1650(lVar8 + 0x18,"Failed loading SWF \"%s\": ActionScript version mismatch",uVar9)
        ;
      }
      puVar7 = (undefined8 *)FUN_143557d60(*(undefined8 *)(lVar2 + 0x38));
      FUN_1434fd5b0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)*puVar7);
      if (*(longlong **)(lVar2 + 0x50) == (longlong *)0x0) {
        return 1;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x18))();
      return 1;
    }
    FUN_1434fd600(*(undefined8 *)(lVar2 + 0x28));
    if (*(longlong **)(lVar2 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x50) + 8))();
    }
    *(undefined1 *)(lVar2 + 0x58) = 0;
    FUN_1435f2ea0(plVar12,plVar6);
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(plVar6[0xe] + 0x104)) {
    uVar1 = *(undefined4 *)(plVar6[0xe] + 0x104);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    FUN_1434fd450(*(undefined8 *)(lVar2 + 0x28),uVar1,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(plVar6[0xe] + 0x18) + 0x40) + 0x50));
  }
  pRVar14 = (RefCountNTSImpl *)0x0;
  if ((*(char *)(param_1 + 0x38) != '\0') || ((*(uint *)(plVar6[0xe] + 0xf0) >> 8 & 1) == 0))
  goto LAB_1435e8270;
  if (*(int *)(*(longlong *)(plVar6[0xe] + 0x18) + 0x38) == 1) {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x88);
    if (plVar12[0x11] != 0) {
      FUN_1435aaef0(*(undefined8 *)(plVar12[0x11] + 0x30),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x38),0);
    }
    local_res8[0] = 0;
    local_80 = *(undefined8 *)(plVar6[0xe] + 0x18);
    local_70 = 0;
    local_78 = plVar6;
    this = (RefCountNTSImpl *)
           (**(code **)(*(longlong *)plVar12[3] + 0x20))
                     ((longlong *)plVar12[3],*(undefined8 *)(param_1 + 0x18),&local_80,0,local_res8,
                      3);
    FUN_143383050(this,1);
    *(ushort *)(this + 0x88) = *(ushort *)(this + 0x88) | 1;
    (**(code **)(*(longlong *)this + 0x250))(this);
    Scaleform::GFx::InteractiveObject::AddToPlayList(this);
    pRVar11 = this + (ulonglong)(byte)this[0x6d] * 4;
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0xa0);
    if (lVar8 == 0) {
      if (plVar12[0x11] != 0) {
        lVar8 = *(longlong *)(plVar12[0x11] + 0x1c8);
        goto LAB_1435e8190;
      }
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x98);
LAB_1435e8190:
      *(longlong *)(pRVar11 + 0x28) = lVar8;
    }
    (**(code **)(*(longlong *)pRVar11 + 0xd8))(pRVar11,0);
    (**(code **)(*(longlong *)this + 0x138))(this,0x404b800000000000);
    if (((*(longlong *)(pRVar11 + 0x10) == 0) && (*(longlong *)(pRVar11 + 8) == 0)) &&
       (cVar3 = FUN_1435e0710(pRVar11), cVar3 != '\0')) {
      uVar13 = *(ulonglong *)(pRVar11 + 0x10);
      if (uVar13 == 0) {
        uVar13 = *(ulonglong *)(pRVar11 + 8);
      }
      if ((uVar13 & 1) != 0) {
        uVar13 = uVar13 - 1;
      }
      FUN_1434f2570(uVar13,*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0xa0));
      FUN_1435e0a80(pRVar11,1);
    }
    uVar9 = FUN_143516900(uVar9);
    FUN_1435e4720(uVar9,this);
    (**(code **)(*plVar12 + 0x140))(plVar12,this);
    FUN_143384e20(this);
    (**(code **)(*plVar12 + 0x38))(plVar12);
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    uVar10 = FUN_143609d50(local_res20,*(undefined8 *)(lVar2 + 0x50));
    FUN_1434fd4f0(uVar9,this,uVar10);
    Scaleform::RefCountNTSImpl::Release(this);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_1435e8270:
  uVar5 = *(uint *)(plVar6[0xe] + 0xf0) & 0xf;
  if (1 < uVar5) {
    if (uVar5 == 2) {
      if (*(int *)(*(longlong *)(plVar6[0xe] + 0x18) + 0x38) == 2) {
        local_res10[0] = 0x40000;
        uVar9 = *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x88);
        local_58 = 0;
        local_68 = *(longlong *)(plVar6[0xe] + 0x18);
        local_60 = plVar6;
        pRVar11 = (RefCountNTSImpl *)
                  (**(code **)(*(longlong *)plVar12[3] + 0x20))
                            ((longlong *)plVar12[3],plVar12[2],&local_68,0,local_res10,8);
        local_90[0] = 0;
        local_88 = 0;
        local_res18[0] = 0;
        cVar3 = FUN_14330e8c0(*(undefined8 *)(*(longlong *)(plVar6[0xe] + 0x18) + 0x40),local_90,
                              local_res18);
        if (((cVar3 != '\0') &&
            (plVar12 = (longlong *)FUN_143317160(local_90,plVar6[0xe] + 0x30),
            plVar12 != (longlong *)0x0)) &&
           (uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12), (uVar5 & 0xff00) == 0x100)) {
          Scaleform::GFx::AS3::AvmBitmap::SetImage(pRVar11,plVar12);
        }
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          pRVar14 = pRVar11 + (ulonglong)(byte)pRVar11[0x6d] * 4;
        }
        if ((*(longlong *)(pRVar14 + 0x10) == 0) && (*(longlong *)(pRVar14 + 8) == 0)) {
          *(undefined8 *)(pRVar14 + 0x28) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0xa0) + 0x98);
          cVar3 = FUN_1435e0710(pRVar14);
          if (cVar3 != '\0') {
            uVar13 = *(ulonglong *)(pRVar14 + 0x10);
            if (uVar13 == 0) {
              uVar13 = *(ulonglong *)(pRVar14 + 8);
            }
            if ((uVar13 & 1) != 0) {
              uVar13 = uVar13 - 1;
            }
            FUN_1434f2570(uVar13,*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0xa0));
            FUN_1435e0a80(pRVar14,1);
          }
        }
        uVar9 = FUN_143516900(uVar9);
        FUN_1435e4720(uVar9,pRVar11);
        uVar9 = *(undefined8 *)(lVar2 + 0x28);
        uVar10 = FUN_143609d50(local_98,*(undefined8 *)(lVar2 + 0x50));
        FUN_1434fd4f0(uVar9,pRVar11,uVar10);
        if ((local_90[0] == 0) && (local_88 != 0)) {
          FUN_1432de450();
        }
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar11);
        }
      }
      FUN_1434fd490(*(undefined8 *)(lVar2 + 0x28));
    }
    else if (uVar5 - 3 < 2) {
      puVar7 = (undefined8 *)FUN_143557d60(*(undefined8 *)(lVar2 + 0x38));
      FUN_1434fd5b0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)*puVar7);
      *(undefined1 *)(lVar2 + 0x58) = 0;
      FUN_1435f2fc0(plVar12,plVar6);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1435e84d0 FUN_1435e84d0 body=153 status=ok
// SIG undefined FUN_1435e84d0(void)

void FUN_1435e84d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (lVar1 != 0) {
    FUN_1433dfc00(lVar1,1);
    FUN_1433dfce0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (*(char *)(lVar1 + 0xe4) == '\0') {
    FUN_1435aaef0(lVar1,0,2);
    *(undefined4 *)(lVar1 + 0xac) = *(undefined4 *)(lVar1 + 200);
    *(undefined4 *)(lVar1 + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(lVar1 + 0xe0) = 10;
  }
  uVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



// FUNCTION 1435e8570 FUN_1435e8570 body=54 status=ok
// SIG undefined FUN_1435e8570(void)

void FUN_1435e8570(longlong param_1,longlong *param_2)

{
  FUN_1435e84d0();
  (**(code **)(*param_2 + 0x30))(param_2,0x20000);
  *(longlong *)(param_1 + 0x28) = param_2[0xc];
  return;
}



// FUNCTION 1435e85b0 FUN_1435e85b0 body=302 status=ok
// SIG undefined FUN_1435e85b0(void)

undefined8 FUN_1435e85b0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  lVar1 = param_2[0xc];
  fVar6 = (float)lVar2;
  if (lVar2 < 0) {
    fVar6 = fVar6 + 1.8446744e+19;
  }
  fVar6 = fVar6 * *(float *)(param_1 + 0x30);
  lVar3 = 0;
  fVar7 = fVar6;
  if ((9.223372e+18 <= fVar6) && (fVar7 = fVar6 - 9.223372e+18, fVar7 < 9.223372e+18)) {
    lVar3 = -0x8000000000000000;
  }
  uVar5 = (longlong)fVar7 + lVar3 + lVar1 + param_3;
  if (((longlong)fVar6 <= lVar2 - *(longlong *)(param_1 + 0x20)) ||
     ((*(ulonglong *)(param_1 + 0x18) != 0 && (*(ulonglong *)(param_1 + 0x18) < uVar5)))) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      *(undefined4 *)(*(longlong *)(uVar4 + 0x20) + 0xe0) = 10;
      *(longlong *)(param_1 + 0x20) = lVar2;
      goto LAB_1435e86c3;
    }
    FUN_1435e84d0(param_1,param_2);
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar4 == 0) || (uVar5 <= uVar4)) goto LAB_1435e86c3;
    if ((ulonglong)(lVar2 - *(longlong *)(param_1 + 0x20)) < param_3) {
      uVar5 = lVar1 + (*(longlong *)(param_1 + 0x20) - lVar2) + param_3;
      *(ulonglong *)(param_1 + 0x28) = uVar5;
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x28);
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,uVar5);
  uVar4 = param_2[0xc];
  *(ulonglong *)(param_1 + 0x28) = uVar4;
LAB_1435e86c3:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 1435e8720 FUN_1435e8720 body=402 status=ok
// SIG undefined FUN_1435e8720(void)

undefined8
FUN_1435e8720(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_res20 [2];
  uint local_28 [2];
  int *local_20;
  byte local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  local_res20[0] = param_4;
  (**(code **)(*param_3 + 0x68))(param_3,local_28,local_res20,param_5,1,1);
  uVar4 = CONCAT71(uStack_17,local_18);
  if ((*(char *)(param_1 + 0xb8) == '\0') && (uVar3 = local_28[0] & 0x1f, uVar3 != 0)) {
    if (uVar3 == 0xc) {
      bVar6 = uVar4 == 0;
LAB_1435e879f:
      if (bVar6) goto LAB_1435e87ba;
    }
    else if (uVar3 == 10) {
      bVar6 = uVar4 == *(longlong *)(uVar4 + 8) + 0x80U;
      goto LAB_1435e879f;
    }
    FUN_1434f0700(param_2,uVar4);
    uVar4 = CONCAT71(uStack_17,local_18);
    uVar5 = 1;
  }
  else {
LAB_1435e87ba:
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880(uVar2);
          uVar4 = CONCAT71(uStack_17,local_18);
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
      *param_2 = 0;
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
      FUN_1435cc020(param_1);
      uVar4 = CONCAT71(uStack_17,local_18);
    }
    uVar5 = 0;
  }
  uVar3 = local_28[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(uVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          bVar6 = (local_18 & 1) == 0;
        }
        else {
          if (1 < uVar3 - 0xd) {
            return uVar5;
          }
          bVar6 = (local_10 & 1) == 0;
          uVar4 = local_10;
        }
        if (((bVar6) && (uVar4 != 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
          return uVar5;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar5;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1435e88c0 FUN_1435e88c0 body=1652 status=ok
// SIG undefined FUN_1435e88c0(void)

undefined8 *
FUN_1435e88c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *local_48;
  undefined8 local_40;
  
  FUN_1435beb80(param_1,param_3,param_4,param_5,param_6);
  local_40 = 0x16;
  param_1[0x60] = param_2;
  *param_1 = &PTR_FUN_145b4c490;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  uVar3 = param_1[0x39];
  *(undefined1 *)(param_1 + 0x7f) = 0;
  local_48 = "flash.display.Graphics";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x61,uVar1);
  local_48 = "flash.geom.Transform";
  local_40 = 0x14;
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x62,uVar1);
  local_48 = "flash.geom.Matrix";
  local_40 = 0x11;
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 99,uVar1);
  local_40 = 0x13;
  local_48 = "flash.geom.Matrix3D";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 100,uVar1);
  local_40 = 0x20;
  local_48 = "flash.geom.PerspectiveProjection";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x65,uVar1);
  local_40 = 0x19;
  local_48 = "flash.geom.ColorTransform";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x66,uVar1);
  local_40 = 0x12;
  local_48 = "flash.events.Event";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x67,uVar1);
  local_40 = 0x17;
  local_48 = "flash.events.MouseEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x68,uVar1);
  local_40 = 0x1a;
  local_48 = "flash.events.KeyboardEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x6a,uVar1);
  local_40 = 0x17;
  local_48 = "flash.events.FocusEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x6d,uVar1);
  local_40 = 0x16;
  local_48 = "flash.events.TextEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x6f,uVar1);
  local_40 = 0x20;
  local_48 = "scaleform.gfx.GamePadAnalogEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x6c,uVar1);
  local_40 = 0x1a;
  local_48 = "scaleform.gfx.MouseEventEx";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x69,uVar1);
  local_40 = 0x1d;
  local_48 = "scaleform.gfx.KeyboardEventEx";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x6b,uVar1);
  local_40 = 0x1a;
  local_48 = "scaleform.gfx.FocusEventEx";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x6e,uVar1);
  local_40 = 0x19;
  local_48 = "scaleform.gfx.TextEventEx";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x70,uVar1);
  local_40 = 0x17;
  local_48 = "flash.events.TimerEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x71,uVar1);
  local_40 = 0x1a;
  local_48 = "flash.events.ProgressEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x72,uVar1);
  local_40 = 0x18;
  local_48 = "flash.events.StatusEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x75,uVar1);
  local_40 = 0x1f;
  local_48 = "flash.events.AccelerometerEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x76,uVar1);
  local_40 = 0x1d;
  local_48 = "flash.events.GeolocationEvent";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x77,uVar1);
  lVar2 = FUN_1435c8090(param_1,&DAT_145b2b080);
  if (lVar2 != 0) {
    FUN_1434f0700(param_1 + 0x78,*(undefined8 *)(lVar2 + 0xd8));
  }
  local_40 = 0x10;
  local_48 = "flash.geom.Point";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x79,uVar1);
  local_40 = 0x14;
  local_48 = "flash.geom.Rectangle";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x7a,uVar1);
  local_40 = 0x15;
  local_48 = "flash.text.TextFormat";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x7b,uVar1);
  local_40 = 0x1c;
  local_48 = "flash.events.EventDispatcher";
  uVar1 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x7c,uVar1);
  local_40 = 0x13;
  local_48 = "flash.geom.Vector3D";
  uVar3 = FUN_1435cc580(param_1,&local_48,uVar3);
  FUN_1434f0700(param_1 + 0x7d,uVar3);
  return param_1;
}



// FUNCTION 1435e8f40 FUN_1435e8f40 body=109 status=ok
// SIG undefined FUN_1435e8f40(void)

undefined8 FUN_1435e8f40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  lVar2 = (**(code **)(**(longlong **)(plVar1[0x15] + 0x28) + 0x38))();
  if (lVar2 != 0) {
    return *(undefined8 *)(*(longlong *)(lVar2 + 0xa0) + 0x178);
  }
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x300) + 0x10) + 0x50);
}



// FUNCTION 1435e8fc0 FUN_1435e8fc0 body=180 status=ok
// SIG undefined FUN_1435e8fc0(void)

ulonglong FUN_1435e8fc0(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = param_2[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *param_2;
      piVar3 = *(int **)(lVar2 + uVar5 * 8);
      uVar4 = 0;
      if (piVar3 != (int *)0x0) {
        uVar4 = *(ulonglong *)(piVar3 + 2);
        if (uVar4 == 0) {
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
          uVar4 = 0;
        }
        else if (*(int *)(uVar4 + 8) == 0) {
          uVar4 = 0;
        }
      }
      if (uVar4 == param_3) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1435e9080 FUN_1435e9080 body=468 status=ok
// SIG undefined FUN_1435e9080(void)

void FUN_1435e9080(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined4 local_res10 [2];
  longlong *local_38;
  char local_30;
  int *local_28;
  longlong **local_20;
  
  lVar4 = *param_1;
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (lVar4 != 0) {
    uVar2 = *(ulonglong *)(lVar4 + 8);
    uVar9 = (longlong)param_2 & uVar2;
    puVar6 = (ulonglong *)(lVar4 + 0x10 + uVar9 * 0x20);
    if ((*puVar6 != 0xfffffffffffffffe) &&
       (uVar8 = uVar9, ((longlong)(int)puVar6[1] & uVar2) == uVar9)) {
      while ((((longlong)(int)puVar6[1] & uVar2) != uVar9 || ((int)puVar6[1] != param_2))) {
        uVar8 = *puVar6;
        if (uVar8 == 0xffffffffffffffff) goto LAB_1435e9121;
        puVar6 = (ulonglong *)(lVar4 + 0x10 + uVar8 * 0x20);
      }
      if (-1 < (longlong)uVar8) {
        plVar3 = (longlong *)(lVar4 + 0x18 + uVar8 * 0x20);
      }
    }
  }
LAB_1435e9121:
  plVar7 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  if (plVar7 == (longlong *)0x0) {
    local_res10[0] = 2;
    plVar3 = (longlong *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x18,local_res10);
    plVar7 = plVar5;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar7 = plVar3;
    }
    local_28 = local_res8;
    local_20 = &local_38;
    local_30 = '\x01';
    local_res8[0] = param_2;
    local_38 = plVar7;
    FUN_1436077d0(param_1,param_1,&local_28,(longlong)param_2);
    plVar3 = local_38;
    if ((local_38 != (longlong *)0x0) && (local_30 != '\0')) {
      local_30 = '\0';
      FUN_14360ad20(local_38);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3);
    }
  }
  else {
    plVar7 = (longlong *)*plVar7;
  }
  lVar4 = FUN_1435e8fc0(param_1,plVar7,param_3);
  if (lVar4 == -1) {
    if (param_3 != 0) {
      plVar5 = (longlong *)FUN_1432be180(param_3);
    }
    FUN_14338a930(plVar7,plVar7,plVar7[1] + 1);
    puVar1 = (undefined8 *)(*plVar7 + (plVar7[1] + -1) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      if (plVar5 != (longlong *)0x0) {
        *(int *)plVar5 = (int)*plVar5 + 1;
      }
      *puVar1 = plVar5;
    }
    if ((plVar5 != (longlong *)0x0) && (*(int *)plVar5 = (int)*plVar5 + -1, (int)*plVar5 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar5);
    }
  }
  return;
}



// FUNCTION 1435e9260 FUN_1435e9260 body=240 status=ok
// SIG undefined FUN_1435e9260(void)

void FUN_1435e9260(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar6 = *param_1;
  puVar9 = (undefined8 *)0x0;
  puVar8 = puVar9;
  if (lVar6 != 0) {
    uVar1 = *(ulonglong *)(lVar6 + 8);
    uVar11 = (longlong)param_2 & uVar1;
    puVar7 = (ulonglong *)(lVar6 + 0x10 + uVar11 * 0x20);
    if ((*puVar7 != 0xfffffffffffffffe) &&
       (uVar10 = uVar11, ((longlong)(int)puVar7[1] & uVar1) == uVar11)) {
      while ((((longlong)(int)puVar7[1] & uVar1) != uVar11 || ((int)puVar7[1] != param_2))) {
        uVar10 = *puVar7;
        if (uVar10 == 0xffffffffffffffff) goto LAB_1435e92f2;
        puVar7 = (ulonglong *)(lVar6 + 0x10 + uVar10 * 0x20);
      }
      if (-1 < (longlong)uVar10) {
        puVar8 = (undefined8 *)(lVar6 + 0x18 + uVar10 * 0x20);
      }
    }
  }
LAB_1435e92f2:
  puVar5 = puVar8 + 1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar5 = puVar9;
  }
  if (puVar5 != (undefined8 *)0x0) {
    plVar2 = (longlong *)*puVar5;
    lVar6 = FUN_1435e8fc0(param_1,plVar2);
    if (lVar6 != -1) {
      lVar3 = *plVar2;
      piVar4 = *(int **)(lVar3 + lVar6 * 8);
      if ((piVar4 != (int *)0x0) && (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar3 + lVar6 * 8) = 0;
    }
  }
  return;
}



// FUNCTION 1435e9360 FUN_1435e9360 body=184 status=ok
// SIG undefined FUN_1435e9360(void)

undefined8 FUN_1435e9360(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  puVar7 = (undefined8 *)0x0;
  puVar6 = puVar7;
  if (lVar1 != 0) {
    uVar2 = *(ulonglong *)(lVar1 + 8);
    uVar8 = (longlong)param_2 & uVar2;
    puVar5 = (ulonglong *)(lVar1 + 0x10 + uVar8 * 0x20);
    if ((*puVar5 != 0xfffffffffffffffe) &&
       (uVar4 = uVar8, ((longlong)(int)puVar5[1] & uVar2) == uVar8)) {
      while ((((longlong)(int)puVar5[1] & uVar2) != uVar8 || ((int)puVar5[1] != param_2))) {
        uVar4 = *puVar5;
        if (uVar4 == 0xffffffffffffffff) goto LAB_1435e93f2;
        puVar5 = (ulonglong *)(lVar1 + 0x10 + uVar4 * 0x20);
      }
      if (-1 < (longlong)uVar4) {
        puVar6 = (undefined8 *)(lVar1 + 0x18 + uVar4 * 0x20);
      }
    }
  }
LAB_1435e93f2:
  puVar3 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar3 = puVar7;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 1435e9420 FUN_1435e9420 body=453 status=ok
// SIG undefined FUN_1435e9420(void)

void FUN_1435e9420(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int *piVar5;
  RefCountNTSImpl *this;
  ulonglong uVar6;
  RefCountNTSImpl *pRVar7;
  ulonglong *puVar8;
  RefCountNTSImpl *this_00;
  RefCountNTSImpl *pRVar9;
  ulonglong uVar10;
  RefCountNTSImpl *pRVar11;
  int local_38 [3];
  undefined1 local_2c;
  undefined4 local_28;
  
  lVar2 = *param_1;
  pRVar11 = (RefCountNTSImpl *)0x0;
  pRVar9 = pRVar11;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 8);
    uVar10 = (longlong)param_2 & uVar3;
    puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar10 * 0x20);
    if ((*puVar8 != 0xfffffffffffffffe) &&
       (uVar6 = uVar10, ((longlong)(int)puVar8[1] & uVar3) == uVar10)) {
      while ((((longlong)(int)puVar8[1] & uVar3) != uVar10 || ((int)puVar8[1] != param_2))) {
        uVar6 = *puVar8;
        if (uVar6 == 0xffffffffffffffff) goto LAB_1435e94b2;
        puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar6 * 0x20);
      }
      if (-1 < (longlong)uVar6) {
        pRVar9 = (RefCountNTSImpl *)(lVar2 + 0x18 + uVar6 * 0x20);
      }
    }
  }
LAB_1435e94b2:
  pRVar7 = pRVar9 + 8;
  if (pRVar9 == (RefCountNTSImpl *)0x0) {
    pRVar7 = pRVar11;
  }
  if ((pRVar7 != (RefCountNTSImpl *)0x0) &&
     (plVar4 = *(longlong **)pRVar7, pRVar9 = pRVar11, plVar4[1] != 0)) {
    do {
      piVar5 = *(int **)(*plVar4 + (longlong)pRVar9 * 8);
      puVar1 = (undefined8 *)(*plVar4 + (longlong)pRVar9 * 8);
      if (piVar5 == (int *)0x0) {
LAB_1435e95b7:
        FUN_143612500(plVar4,pRVar9);
      }
      else {
        if (*(longlong *)(piVar5 + 2) == 0) {
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar1 = 0;
          goto LAB_1435e95b7;
        }
        if (*(int *)(*(longlong *)(piVar5 + 2) + 8) == 0) goto LAB_1435e95b7;
        local_38[1] = 0;
        local_38[2] = 0;
        local_2c = 0;
        local_28 = 0xff00;
        piVar5 = (int *)*puVar1;
        pRVar7 = pRVar11;
        this_00 = pRVar11;
        local_38[0] = param_2;
        if (piVar5 != (int *)0x0) {
          this = *(RefCountNTSImpl **)(piVar5 + 2);
          if (this == (RefCountNTSImpl *)0x0) {
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *puVar1 = 0;
          }
          else if (*(int *)(this + 8) != 0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            Scaleform::RefCountNTSImpl::Release(this);
            pRVar7 = this + (ulonglong)(byte)this[0x6d] * 4;
            this_00 = this;
          }
        }
        FUN_1435e11c0(pRVar7,local_38);
        pRVar9 = pRVar9 + 1;
        if (this_00 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this_00);
        }
      }
    } while (pRVar9 < (RefCountNTSImpl *)plVar4[1]);
  }
  return;
}



// FUNCTION 1435e95f0 FUN_1435e95f0 body=454 status=ok
// SIG undefined FUN_1435e95f0(void)

void FUN_1435e95f0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int *piVar5;
  RefCountNTSImpl *this;
  ulonglong uVar6;
  RefCountNTSImpl *pRVar7;
  ulonglong *puVar8;
  RefCountNTSImpl *this_00;
  RefCountNTSImpl *pRVar9;
  ulonglong uVar10;
  RefCountNTSImpl *pRVar11;
  int local_38 [3];
  undefined1 local_2c;
  undefined4 local_28;
  
  lVar2 = *param_1;
  pRVar11 = (RefCountNTSImpl *)0x0;
  pRVar9 = pRVar11;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 8);
    uVar10 = (longlong)param_2 & uVar3;
    puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar10 * 0x20);
    if ((*puVar8 != 0xfffffffffffffffe) &&
       (uVar6 = uVar10, ((longlong)(int)puVar8[1] & uVar3) == uVar10)) {
      while ((((longlong)(int)puVar8[1] & uVar3) != uVar10 || ((int)puVar8[1] != param_2))) {
        uVar6 = *puVar8;
        if (uVar6 == 0xffffffffffffffff) goto LAB_1435e9682;
        puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar6 * 0x20);
      }
      if (-1 < (longlong)uVar6) {
        pRVar9 = (RefCountNTSImpl *)(lVar2 + 0x18 + uVar6 * 0x20);
      }
    }
  }
LAB_1435e9682:
  pRVar7 = pRVar9 + 8;
  if (pRVar9 == (RefCountNTSImpl *)0x0) {
    pRVar7 = pRVar11;
  }
  if ((pRVar7 != (RefCountNTSImpl *)0x0) &&
     (plVar4 = *(longlong **)pRVar7, pRVar9 = pRVar11, plVar4[1] != 0)) {
    do {
      piVar5 = *(int **)(*plVar4 + (longlong)pRVar9 * 8);
      puVar1 = (undefined8 *)(*plVar4 + (longlong)pRVar9 * 8);
      if (piVar5 == (int *)0x0) {
LAB_1435e9788:
        FUN_143612500(plVar4,pRVar9);
      }
      else {
        if (*(longlong *)(piVar5 + 2) == 0) {
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar1 = 0;
          goto LAB_1435e9788;
        }
        if (*(int *)(*(longlong *)(piVar5 + 2) + 8) == 0) goto LAB_1435e9788;
        local_38[1] = 0;
        local_38[2] = 0;
        local_2c = 0;
        local_28 = 0xff00;
        piVar5 = (int *)*puVar1;
        pRVar7 = pRVar11;
        this_00 = pRVar11;
        local_38[0] = param_2;
        if (piVar5 != (int *)0x0) {
          this = *(RefCountNTSImpl **)(piVar5 + 2);
          if (this == (RefCountNTSImpl *)0x0) {
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *puVar1 = 0;
          }
          else if (*(int *)(this + 8) != 0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            Scaleform::RefCountNTSImpl::Release(this);
            pRVar7 = this + (ulonglong)(byte)this[0x6d] * 4;
            this_00 = this;
          }
        }
        (**(code **)(*(longlong *)pRVar7 + 0x40))(pRVar7,local_38);
        pRVar9 = pRVar9 + 1;
        if (this_00 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this_00);
        }
      }
    } while (pRVar9 < (RefCountNTSImpl *)plVar4[1]);
  }
  return;
}



// FUNCTION 1435e97c0 FUN_1435e97c0 body=95 status=ok
// SIG undefined FUN_1435e97c0(void)

void FUN_1435e97c0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_145b4c498;
  FUN_1435e9860();
  FUN_1434e5ef0(param_1 + 8);
  lVar1 = param_1[7];
  *param_1 = &PTR_FUN_145b0aac8;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_1[4])) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
    return;
  }
  return;
}



// FUNCTION 1435e9830 FUN_1435e9830 body=34 status=ok
// SIG undefined FUN_1435e9830(void)

void FUN_1435e9830(longlong param_1)

{
  FUN_1435e9860();
  FUN_1434f0230(param_1 + 0x40,param_1 + 0x40,0);
  return;
}



// FUNCTION 1435e9860 FUN_1435e9860 body=397 status=ok
// SIG undefined FUN_1435e9860(void)

void FUN_1435e9860(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (lVar6 != 0) {
    lVar7 = lVar6 * 8;
    do {
      lVar7 = lVar7 + -8;
      lVar1 = *(longlong *)(param_1 + 0x40);
      uVar2 = *(ulonglong *)(lVar1 + lVar7);
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(lVar1 + lVar7) = uVar2 - 1;
        }
        *(undefined8 *)(lVar1 + lVar7) = 0;
      }
      uVar3 = *(ulonglong *)(uVar2 + 0x30);
      *(int *)(uVar3 + 0x70) = *(int *)(uVar3 + 0x70) + -1;
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      if (*(ulonglong *)(uVar3 + 0x60) != 0) {
        puVar4 = *(ulonglong **)(uVar3 + 0x58);
        uVar5 = 0;
        do {
          if (*puVar4 == uVar2) {
            FUN_1435bc990(uVar2);
            if (*(longlong *)(uVar3 + 0x60) == 1) {
              FUN_143613820(uVar3 + 0x58,uVar3 + 0x58,0);
            }
            else {
              uVar2 = *(ulonglong *)(*(longlong *)(uVar3 + 0x58) + uVar5 * 8);
              if (uVar2 != 0) {
                if ((uVar2 & 1) == 0) {
                  if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
                    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  *(ulonglong *)(*(longlong *)(uVar3 + 0x58) + uVar5 * 8) = uVar2 - 1;
                }
              }
              _Dst = (void *)(*(longlong *)(uVar3 + 0x58) + uVar5 * 8);
              memmove(_Dst,(void *)((longlong)_Dst + 8),
                      (*(longlong *)(uVar3 + 0x60) - uVar5) * 8 - 8);
              *(longlong *)(uVar3 + 0x60) = *(longlong *)(uVar3 + 0x60) + -1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar5 < *(ulonglong *)(uVar3 + 0x60));
      }
      if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880(uVar3);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1435e9a00 FUN_1435e9a00 body=684 status=ok
// SIG undefined FUN_1435e9a00(void)

void FUN_1435e9a00(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  uint local_48 [2];
  int *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return;
  }
  if ((*(byte *)(lVar4 + 0x6a) >> 4 & 1) != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 1) {
    FUN_1435e11c0(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4,param_1 + 0x20);
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      return;
    }
    if (*(code **)(param_1 + 0x58) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001435e9a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x58))(param_1);
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x88);
  local_18 = *(ulonglong *)(lVar4 + 0x10 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
  if (local_18 == 0) {
    local_18 = *(ulonglong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4 + 8);
  }
  if ((local_18 & 1) != 0) {
    local_18 = local_18 - 1;
  }
  local_28[0] = 0xc;
  local_20 = (int *)0x0;
  if (local_18 != 0) {
    *(uint *)(local_18 + 8) = *(int *)(local_18 + 8) + 1U & 0x8fffffff;
  }
  local_48[0] = 0;
  local_40 = (int *)0x0;
  local_res8[0] = 0;
  FUN_1435ce880(lVar5,param_1 + 0x38,local_28,local_48,local_res8,0,0,1);
  if (*(char *)(lVar5 + 0xb8) != '\0') {
    FUN_1435cc020(lVar5);
    puVar2 = (ushort *)(*(longlong *)(param_1 + 0x10) + 0x88);
    *puVar2 = *puVar2 | 0x20;
  }
  uVar6 = local_48[0] & 0x1f;
  if (9 < uVar6) {
    if ((local_48[0] >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)(uStack_38 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          uVar7 = uStack_38;
          if ((uStack_38 & 1) != 0) {
            uStack_38 = uStack_38 - 1;
            goto LAB_1435e9bca;
          }
        }
        else {
          if (1 < uVar6 - 0xd) goto LAB_1435e9bca;
          uVar7 = local_30;
          if ((local_30 & 1) != 0) {
            local_30 = local_30 - 1;
            goto LAB_1435e9bca;
          }
        }
        if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_48[0] = local_48[0] & 0xfffffde0;
      local_40 = (int *)0x0;
      uStack_38 = 0;
      local_30 = 0;
    }
  }
LAB_1435e9bca:
  uVar6 = local_28[0] & 0x1f;
  if (9 < uVar6) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
          return;
        }
      }
      else {
        uVar7 = local_18;
        if ((((uVar6 == 0xb) || (uVar6 == 0xc)) || (uVar7 = local_10, uVar6 - 0xd < 2)) &&
           ((((uVar7 & 1) == 0 && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
          return;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435e9cc0 FUN_1435e9cc0 body=66 status=ok
// SIG undefined FUN_1435e9cc0(void)

longlong FUN_1435e9cc0(longlong param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  
  if (param_2 < 5) {
    uVar1 = *(uint *)(&DAT_145b4ddb0 + (ulonglong)param_2 * 4);
  }
  else {
    fVar2 = _guard_xfg_dispatch_icall_nop((float)param_2);
    uVar1 = (uint)(longlong)fVar2;
  }
  return param_1 + ((ulonglong)uVar1 * 3 + 8) * 4;
}



// FUNCTION 1435e9d10 FUN_1435e9d10 body=655 status=ok
// SIG undefined FUN_1435e9d10(void)

undefined8 *
FUN_1435e9d10(undefined8 *param_1,RefCountImpl *param_2,longlong param_3,RefCountImpl *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar4 = (undefined8 *)0x0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b0a870;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[3] = param_4;
  uVar1 = (**(code **)(*(longlong *)param_4 + 0x30))(param_4);
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 4) = uVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_145b4c4b0;
  param_1[5] = &PTR_LAB_145b4c6a8;
  param_1[8] = &PTR_LAB_145b4c6c8;
  param_1[9] = &PTR_LAB_145b4c6e8;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[0x10] = param_2;
  puVar3 = param_1 + 0x1b;
  param_1[0x11] = 0;
  lVar6 = 7;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  do {
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[-2] = 0;
    puVar3 = puVar3 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[0x31] = uVar5;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_14358fd40(param_1 + 0x34,*(undefined8 *)(param_1[0x10] + 0x18));
  lVar6 = 6;
  puVar3 = param_1 + 0x7a;
  do {
    *puVar3 = 0;
    puVar2 = puVar3 + 4;
    puVar3[1] = 0;
    lVar6 = lVar6 + -1;
    puVar3[2] = 0;
    lVar7 = 0x10;
    puVar3[3] = 0;
    do {
      *(undefined4 *)puVar2 = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar3 = puVar3 + 0x1c;
  } while (lVar6 != 0);
  *(undefined2 *)(param_1 + 0x122) = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[2] = param_3;
  Scaleform::GFx::MovieImpl::SetASMovieRoot(param_3,param_1);
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                     (*(longlong **)(param_1[2] + 0x48),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3 + 2;
    puVar3[1] = param_3;
    *puVar4 = puVar4;
    puVar3[3] = puVar4;
    *puVar3 = &PTR_FUN_145b4d858;
    puVar4 = puVar3;
  }
  *(undefined8 **)(param_3 + 0x40) = puVar4;
  FUN_1432e2000(param_3,param_1 + 8);
  param_1[0x18] = 0;
  *(uint *)(param_3 + 0x52f0) = *(uint *)(param_3 + 0x52f0) & 0xff7fffff;
  *(uint *)(param_3 + 0x52f0) = *(uint *)(param_3 + 0x52f0) | 0x400000;
  *(uint *)(param_3 + 0x52f0) = *(uint *)(param_3 + 0x52f0) & 0xdfffffff;
  *(uint *)(param_3 + 0x52f0) = *(uint *)(param_3 + 0x52f0) | 0x10000000;
  *(undefined1 *)((longlong)param_1 + 0x912) = 0;
  uVar5 = FUN_143df8e70();
  param_1[0x128] = uVar5;
  return param_1;
}



// FUNCTION 1435e9fb0 FUN_1435e9fb0 body=900 status=ok
// SIG undefined FUN_1435e9fb0(void)

void FUN_1435e9fb0(RefCountImplCore *param_1)

{
  RefCountImplCore *pRVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  RefCountImplCore *pRVar7;
  
  *(undefined ***)param_1 = &PTR_FUN_145b4c4b0;
  *(undefined ***)(param_1 + 0x28) = &PTR_LAB_145b4c6a8;
  *(undefined ***)(param_1 + 0x40) = &PTR_LAB_145b4c6c8;
  *(undefined ***)(param_1 + 0x48) = &PTR_LAB_145b4c6e8;
  lVar6 = *(longlong *)(param_1 + 0x930);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x928) + (lVar6 + -1) * 8);
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    if ((RefCountImpl *)*puVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar5);
    }
    puVar5 = puVar5 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x928));
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x918) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x918) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x918) + 0x10 + lVar6) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x918) + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x918));
    *(undefined8 *)(param_1 + 0x918) = 0;
  }
  lVar6 = 6;
  pRVar7 = param_1 + 0x910;
  do {
    pRVar1 = pRVar7 + -0xe0;
    lVar6 = lVar6 + -1;
    if (*(RefCountNTSImpl **)(pRVar7 + -200) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(pRVar7 + -200));
    }
    lVar4 = *(longlong *)(pRVar7 + -0xd8);
    puVar5 = (undefined8 *)(*(longlong *)pRVar1 + (lVar4 + -1) * 8);
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      if ((RefCountNTSImpl *)*puVar5 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar5);
      }
      puVar5 = puVar5 + -1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(longlong *)pRVar1);
    pRVar7 = pRVar1;
  } while (lVar6 != 0);
  FUN_1433611b0(*(undefined8 *)(param_1 + 0x3b8),param_1 + 0x1a0,0x43);
  if (*(RefCountNTSImpl **)(param_1 + 0x198) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x198));
  }
  FUN_14360aef0(param_1 + 400);
  FUN_1435f4dc0(param_1 + 200);
  puVar5 = *(undefined8 **)(param_1 + 0x178);
  while (puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar5;
    FUN_14360bb50(puVar5);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
    puVar5 = puVar2;
  }
  pRVar7 = param_1 + 0x98;
  if (9 < ((byte)*(uint *)pRVar7 & 0x1f)) {
    if ((*(uint *)pRVar7 >> 9 & 1) == 0) {
      FUN_1435920c0(pRVar7);
    }
    else {
      piVar3 = *(int **)(param_1 + 0xa0);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)pRVar7 = *(uint *)pRVar7 & 0xfffffde0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x88);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1[0x90] != (RefCountImplCore)0x0) {
      param_1[0x90] = (RefCountImplCore)0x0;
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  param_1[0x90] = (RefCountImplCore)0x0;
  FUN_1435aaef0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x20),0,1);
  if (*(RefCountImpl **)(param_1 + 0x80) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x80));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1[0x78] != (RefCountImplCore)0x0) {
      param_1[0x78] = (RefCountImplCore)0x0;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar5);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  param_1[0x78] = (RefCountImplCore)0x0;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1[0x68] != (RefCountImplCore)0x0) {
      param_1[0x68] = (RefCountImplCore)0x0;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar5);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  param_1[0x68] = (RefCountImplCore)0x0;
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1[0x58] != (RefCountImplCore)0x0) {
      param_1[0x58] = (RefCountImplCore)0x0;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar5);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  param_1[0x58] = (RefCountImplCore)0x0;
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_145af1858;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_145af3848;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_145b4ac30;
  *(undefined ***)param_1 = &PTR_FUN_145b0a870;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1435ea340 FUN_1435ea340 body=77 status=ok
// SIG undefined FUN_1435ea340(void)

undefined8 FUN_1435ea340(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58) != 0) {
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50) + 0x60))();
    Scaleform::String::operator=(param_2,uVar2);
    cVar1 = FUN_1432bad10(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_1432c3510(param_2);
  return 0;
}



// FUNCTION 1435ea3a0 FUN_1435ea3a0 body=290 status=ok
// SIG undefined FUN_1435ea3a0(void)

void FUN_1435ea3a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(uint *)(param_2 + 2) & 4) == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    if ((*(uint *)(param_2 + 2) & 0x20) == 0) {
      lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,0x40);
      if ((lVar5 == 0) ||
         (lVar5 = FUN_1435e7d60(lVar5,param_2,*(undefined8 *)(param_1 + 0x10)), lVar5 == 0))
      goto LAB_1435ea4aa;
      lVar2 = *(longlong *)(lVar5 + 0x20);
      for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5300); lVar3 != 0;
          lVar3 = *(longlong *)(lVar3 + 8)) {
        lVar4 = *(longlong *)(lVar3 + 0x20);
        if (((*(longlong *)(lVar4 + 0x28) != 0) &&
            (*(longlong *)(lVar4 + 0x28) == *(longlong *)(lVar2 + 0x28))) ||
           ((*(longlong *)(lVar4 + 0x30) != 0 &&
            (*(longlong *)(lVar4 + 0x30) == *(longlong *)(lVar2 + 0x30))))) {
          *(undefined1 *)(lVar4 + 0x25) = 1;
        }
      }
    }
    else {
      lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,0x38);
      if (lVar5 == 0) goto LAB_1435ea4aa;
      lVar5 = FUN_1433897a0(lVar5,param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,0x38);
    if (lVar5 == 0) goto LAB_1435ea4aa;
    lVar5 = FUN_1433891d0(lVar5,param_2,*(undefined8 *)(param_1 + 0x10));
  }
  if (lVar5 != 0) {
    FUN_1432e40d0(*(undefined8 *)(param_1 + 0x10),lVar5);
    return;
  }
LAB_1435ea4aa:
                    /* WARNING: Could not recover jumptable at 0x0001435ea4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,1);
  return;
}



// FUNCTION 1435ea4d0 FUN_1435ea4d0 body=370 status=ok
// SIG undefined FUN_1435ea4d0(void)

void FUN_1435ea4d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  RefCountImpl *this;
  RefCountImpl *this_00;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  this = (RefCountImpl *)0x0;
  local_res8 = 0;
  lVar5 = (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                    (*(longlong **)(param_1[2] + 0x48),0x60,0);
  if (lVar5 == 0) {
    return;
  }
  puVar6 = (undefined8 *)FUN_1435e7880(lVar5,param_2,param_3,param_4,0);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  cVar4 = FUN_1432ff890(puVar6 + 3,0,&local_res8);
  if ((cVar4 != '\0') && ((char)local_res8 != '\0')) {
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
    if (lVar5 != 0) {
      lVar1 = param_1[2];
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x28);
      uVar7 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10);
      this = (RefCountImpl *)FUN_143318b20(lVar5,uVar2,uVar7,0);
    }
    (**(code **)(*param_1 + 0x120))(param_1,puVar6,this);
    (**(code **)*puVar6)(puVar6,1);
    if (this == (RefCountImpl *)0x0) {
      return;
    }
    Scaleform::RefCountImpl::Release(this);
    return;
  }
  lVar5 = FUN_1432c3580(puVar6 + 3);
  if ((lVar5 == 0) || (cVar4 != '\0')) {
    this_00 = (RefCountImpl *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    this_00 = (RefCountImpl *)
              (**(code **)(*(longlong *)(param_1[2] + 0x10) + 0x18))
                        ((longlong *)(param_1[2] + 0x10),0x18);
    this = (RefCountImpl *)0x1;
    if (this_00 != (RefCountImpl *)0x0) {
      bVar3 = true;
      goto LAB_1435ea602;
    }
  }
  bVar3 = false;
LAB_1435ea602:
  if ((this != (RefCountImpl *)0x0) && (this_00 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  if (bVar3) {
    FUN_1435ea3a0(param_1);
  }
  else {
    FUN_1432e4090(param_1[2],puVar6);
  }
  return;
}



// FUNCTION 1435ea650 FUN_1435ea650 body=113 status=ok
// SIG undefined FUN_1435ea650(void)

void FUN_1435ea650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (lVar2 != 0) {
    lVar2 = FUN_1435e79c0(lVar2,param_2,param_3,param_4);
    if (lVar2 != 0) {
      FUN_1432e4090(*(undefined8 *)(param_1 + 0x10),lVar2);
    }
  }
  return;
}



// FUNCTION 1435ea6d0 FUN_1435ea6d0 body=241 status=ok
// SIG undefined FUN_1435ea6d0(void)

void FUN_1435ea6d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  RefCountImpl *this;
  undefined4 uVar5;
  longlong *plVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  lVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,0x60,0);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = FUN_1435e7b30(lVar3,param_2,param_3,param_4,0);
  if (lVar3 == 0) {
    return;
  }
  cVar2 = FUN_14355cb30(param_3);
  uVar5 = 4;
  if (cVar2 != '\0') {
    uVar5 = 0x20;
  }
  *(undefined4 *)(lVar3 + 0x10) = uVar5;
  lVar4 = FUN_1432c3580(lVar3 + 0x18);
  if (lVar4 == 0) {
    this = (RefCountImpl *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    this = (RefCountImpl *)(**(code **)(*plVar6 + 0x18))(plVar6,0x18);
    bVar7 = true;
    if (this != (RefCountImpl *)0x0) {
      bVar1 = true;
      goto LAB_1435ea780;
    }
  }
  bVar1 = false;
LAB_1435ea780:
  if ((bVar7) && (this != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(this);
  }
  if (bVar1) {
    FUN_1435ea3a0(param_1);
  }
  else {
    FUN_1432e4090(*(undefined8 *)(param_1 + 0x10),lVar3);
  }
  return;
}



// FUNCTION 1435ea7d0 FUN_1435ea7d0 body=84 status=ok
// SIG undefined FUN_1435ea7d0(void)

void FUN_1435ea7d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3 + 2;
    puVar3[1] = param_2;
    *puVar1 = puVar1;
    puVar3[3] = puVar1;
    *puVar3 = &PTR_FUN_145b4d858;
    *(undefined8 **)(param_2 + 0x40) = puVar3;
    return;
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1435ea830 FUN_1435ea830 body=137 status=ok
// SIG undefined FUN_1435ea830(void)

void FUN_1435ea830(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  int local_10;
  
  local_30 = param_1 + 200;
  local_38[0] = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = *(undefined8 *)(local_30 + (longlong)param_2 * 0x18);
  local_10 = param_2;
  lVar1 = FUN_1435f4f00(local_38);
  while (lVar1 != 0) {
    FUN_1435e9a00(lVar1,param_1);
    lVar1 = FUN_1435f4f00(local_38);
  }
  if (local_18 != 0) {
    FUN_1435f4d40(local_30);
    return;
  }
  return;
}



// FUNCTION 1435ea8c0 FUN_1435ea8c0 body=139 status=ok
// SIG undefined FUN_1435ea8c0(void)

void FUN_1435ea8c0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 *local_20;
  longlong local_18;
  int local_10;
  
  local_38[0] = 0;
  local_30 = param_1 + 200;
  local_18 = 0;
  if (param_3 == (undefined8 *)0x0) {
    local_28 = *(undefined8 *)(local_30 + (longlong)param_2 * 0x18);
  }
  else {
    local_28 = *param_3;
  }
  local_20 = param_3;
  local_10 = param_2;
  lVar1 = FUN_1435f4f00(local_38);
  while (lVar1 != 0) {
    FUN_1435e9a00(lVar1,param_1);
    lVar1 = FUN_1435f4f00(local_38);
  }
  if (local_18 == 0) {
    return;
  }
  FUN_1435f4d40(local_30);
  return;
}



// FUNCTION 1435ea960 FUN_1435ea960 body=69 status=ok
// SIG undefined FUN_1435ea960(void)

void FUN_1435ea960(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c8) != 0) {
    uVar1 = FUN_1435c8f90(*(undefined8 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x3c8) = uVar1;
    if (*(char *)(*(longlong *)(param_1 + 0x88) + 0xb8) != '\0') {
      FUN_1435cc020();
      return;
    }
  }
  return;
}



// FUNCTION 1435ea9b0 FUN_1435ea9b0 body=257 status=ok
// SIG undefined FUN_1435ea9b0(void)

void FUN_1435ea9b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  uint local_10;
  
  uVar3 = 0;
  do {
    local_38[0] = 0;
    local_18 = (undefined8 *)0x0;
    local_28 = *(undefined8 *)(param_1 + 200 + (longlong)(int)uVar3 * 0x18);
    local_20 = 0;
    local_30 = param_1 + 200;
    local_10 = uVar3;
    lVar2 = FUN_1435f4f00(local_38);
    puVar1 = local_18;
    while (local_18 = puVar1, lVar2 != 0) {
      FUN_1435e9a00(lVar2,param_1);
      lVar2 = FUN_1435f4f00(local_38);
      puVar1 = local_18;
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_14360ebd0(puVar1);
      if (*(uint *)(local_30 + 0xb8) < 0x32) {
        *puVar1 = *(undefined8 *)(local_30 + 0xb0);
        *(int *)(local_30 + 0xb8) = *(int *)(local_30 + 0xb8) + 1;
        *(undefined8 **)(local_30 + 0xb0) = puVar1;
      }
      else {
        FUN_14360bb50(puVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  return;
}



// FUNCTION 1435eaac0 FUN_1435eaac0 body=234 status=ok
// SIG undefined FUN_1435eaac0(void)

void FUN_1435eaac0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 200 + (longlong)param_2 * 0x18) != 0) {
    lVar1 = param_1 + 200;
    local_38[0] = 0;
    local_18 = 0;
    local_20 = 0;
    local_28 = *(undefined8 *)(lVar1 + (longlong)param_2 * 0x18);
    local_30 = lVar1;
    local_10 = param_2;
    lVar3 = FUN_1435f4f00(local_38);
    if (lVar3 != 0) {
      plVar2 = (longlong *)(lVar1 + (longlong)param_3 * 0x18);
      do {
        plVar4 = (longlong *)FUN_1435f4bd0(lVar1);
        if ((longlong *)plVar2[1] == (longlong *)0x0) {
          *plVar4 = *plVar2;
          *plVar2 = (longlong)plVar4;
        }
        else {
          *plVar4 = *(longlong *)plVar2[1];
          *(longlong **)plVar2[1] = plVar4;
        }
        plVar2[1] = (longlong)plVar4;
        if (*plVar4 == 0) {
          plVar2[2] = (longlong)plVar4;
        }
        *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
        FUN_14360c520(plVar4,lVar3);
        lVar3 = FUN_1435f4f00(local_38);
      } while (lVar3 != 0);
    }
    if (local_18 != 0) {
      FUN_1435f4d40(local_30);
      return;
    }
  }
  return;
}



// FUNCTION 1435eabb0 FUN_1435eabb0 body=19 status=ok
// SIG undefined FUN_1435eabb0(void)

void FUN_1435eabb0(longlong param_1)

{
  FUN_1435f61a0(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x118));
  return;
}



// FUNCTION 1435eabd0 FUN_1435eabd0 body=88 status=ok
// SIG undefined FUN_1435eabd0(void)

void FUN_1435eabd0(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 200 + (longlong)param_2 * 0x18);
      puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == param_3) {
      if ((RefCountNTSImpl *)puVar1[2] != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar1[2]);
      }
      puVar1[2] = 0;
    }
  }
  return;
}



// FUNCTION 1435eac30 FUN_1435eac30 body=407 status=ok
// SIG undefined FUN_1435eac30(void)

void FUN_1435eac30(longlong param_1)

{
  undefined8 *puVar1;
  RefCountImpl *pRVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  uVar6 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uVar3 = uVar6;
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (*(longlong *)(param_1 + 0x930) != 0) {
    do {
      uVar3 = local_30;
      uVar8 = local_38;
      if (1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + uVar5 * 8) + 8)) {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x928) + uVar5 * 8);
        FUN_1432d1b00(&local_38,&local_38,local_30 + 1);
        uVar3 = local_30;
        uVar8 = local_38;
        puVar1 = (undefined8 *)(local_38 + (local_30 - 1) * 8);
        if (puVar1 != (undefined8 *)0x0) {
          pRVar2 = (RefCountImpl *)*puVar7;
          if (pRVar2 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef(pRVar2);
          }
          *puVar1 = *puVar7;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulonglong *)(param_1 + 0x930));
  }
  plVar4 = (longlong *)(param_1 + 0x928);
  FUN_1432cfe60(plVar4,plVar4,0);
  if (uVar3 != 0) {
    do {
      FUN_1435fe730(*(undefined8 *)(uVar8 + uVar6 * 8));
      FUN_1432cfe60(plVar4,plVar4,*(longlong *)(param_1 + 0x930) + 1);
      puVar7 = (undefined8 *)(*plVar4 + (*(longlong *)(param_1 + 0x930) + -1) * 8);
      if (puVar7 != (undefined8 *)0x0) {
        pRVar2 = *(RefCountImpl **)(uVar8 + uVar6 * 8);
        if (pRVar2 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar2);
        }
        *puVar7 = *(undefined8 *)(uVar8 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  puVar7 = (undefined8 *)(uVar8 + (uVar3 - 1) * 8);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((RefCountImpl *)*puVar7 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar7);
    }
    puVar7 = puVar7 + -1;
  }
  if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435eadbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
    return;
  }
  return;
}



// FUNCTION 1435eadd0 FUN_1435eadd0 body=197 status=ok
// SIG undefined FUN_1435eadd0(void)

RefCountImpl * FUN_1435eadd0(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  RefCountImpl *this;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0x147;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x170,local_res8);
  if (lVar2 == 0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    this = (RefCountImpl *)FUN_1435fda00(lVar2,param_2,*(undefined8 *)(param_1 + 0x940),param_3);
  }
  FUN_1432cfe60(param_1 + 0x928,param_1 + 0x928,*(longlong *)(param_1 + 0x930) + 1);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x928) + (*(longlong *)(param_1 + 0x930) + -1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    *puVar1 = this;
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return this;
}



// FUNCTION 1435eaeb0 FUN_1435eaeb0 body=111 status=ok
// SIG undefined FUN_1435eaeb0(void)

void FUN_1435eaeb0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  lVar1 = FUN_14336dce0(*(undefined8 *)(param_1 + -0x18));
  if (lVar1 != 0) {
    if (param_2 == 1) {
      local_res8[0] = 0x34000;
    }
    else if (param_2 == 2) {
      local_res8[0] = 0x24000;
    }
    else if (param_2 == 3) {
      local_res8[0] = 0x6000;
    }
    else {
      local_res8[0] = 0x1000;
    }
    FUN_1432c19d0(lVar1,local_res8,&DAT_145afa01c,param_3);
  }
  return;
}



// FUNCTION 1435eaf60 FUN_1435eaf60 body=590 status=ok
// SIG undefined FUN_1435eaf60(void)

void FUN_1435eaf60(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if ((*(byte *)((longlong)param_1 + 0x912) & 2) != 0) goto LAB_1435eb0e4;
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1[2] + 0x58) + 0x218))();
  lVar6 = (**(code **)(*param_1 + 0x80))(param_1,0);
  if ((lVar6 == 0) ||
     (lVar7 = (**(code **)(*(longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4) + 0x28))(),
     lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar7 + -0x48;
  }
  uVar9 = *(ulonglong *)(lVar7 + 0x10);
  if (uVar9 == 0) {
    uVar9 = *(ulonglong *)(lVar7 + 8);
  }
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 - 1;
  }
  if ((uVar9 == 0) ||
     (*(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff, *(longlong *)(uVar9 + 0x80) == 0
     )) {
LAB_1435eb0a2:
    *(byte *)((longlong)param_1 + 0x912) = *(byte *)((longlong)param_1 + 0x912) | 2;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x912) & 1) == 0) {
      uVar8 = FUN_1434f24f0(uVar9);
      FUN_1434ff8e0(uVar8,lVar6);
      *(byte *)((longlong)param_1 + 0x912) = *(byte *)((longlong)param_1 + 0x912) | 1;
    }
    uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
    lVar6 = Scaleform::GFx::DisplayObjContainer::FindRootNode(lVar6);
    bVar10 = uVar4 <= *(uint *)(lVar6 + 0x28);
    if ((param_2 != '\0') || (bVar10)) {
      uVar1 = *(undefined4 *)(plVar5[0xe] + 0x104);
      uVar2 = *(undefined4 *)(*(longlong *)(*(longlong *)(plVar5[0xe] + 0x18) + 0x40) + 0x50);
      uVar8 = FUN_1434f24f0(uVar9);
      FUN_1434ff690(uVar8,uVar1,uVar2);
      if (bVar10) {
        uVar8 = FUN_1434f24f0(uVar9);
        FUN_1434ff770(uVar8);
        goto LAB_1435eb0a2;
      }
    }
  }
  if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
    FUN_1434ef880(uVar9);
  }
LAB_1435eb0e4:
  if ((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x911) == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)((longlong)param_1 + 0x21) = cVar3;
  if (*(char *)((longlong)param_1 + 0x911) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x911) = 0;
  }
  if (((char)param_1[0x122] != '\0') && (cVar3 != '\0')) {
    *(undefined1 *)(param_1 + 0x122) = 0;
    FUN_1435e95f0(param_1 + 0x32,0x1000013);
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  if ((param_2 != '\0') && (lVar6 = *(longlong *)(param_1[0x10] + 0x20), lVar6 != 0)) {
    uVar8 = *(undefined8 *)(param_1[2] + 0x38);
    if (*(int *)(lVar6 + 0xe0) != 0) {
      *(undefined4 *)(lVar6 + 0xe0) = 0;
      FUN_1435aaef0(lVar6,uVar8);
    }
    FUN_1435aacb0(*(undefined8 *)(param_1[0x10] + 0x20),param_1 + 0x17,(longlong)param_1 + 0xbc,
                  *(undefined8 *)(param_1[2] + 0x38));
    return;
  }
  return;
}



// FUNCTION 1435eb1c0 FUN_1435eb1c0 body=204 status=ok
// SIG undefined FUN_1435eb1c0(void)

bool FUN_1435eb1c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x400,0);
    puVar4 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)
               FUN_1435e88c0(lVar3,param_1,param_1 + 0x28,param_1 + 0x1a0,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x20),0);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    if (puVar2 != puVar4) {
      if ((puVar2 != (undefined8 *)0x0) && (*(char *)(param_1 + 0x90) != '\0')) {
        *(undefined1 *)(param_1 + 0x90) = 0;
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 **)(param_1 + 0x88) = puVar4;
    }
    *(bool *)(param_1 + 0x90) = puVar4 != (undefined8 *)0x0;
  }
  return *(longlong *)(param_1 + 0x88) != 0;
}



// FUNCTION 1435eb2a0 FUN_1435eb2a0 body=399 status=ok
// SIG undefined FUN_1435eb2a0(void)

void FUN_1435eb2a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  longlong local_res20;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x88) + 0x3f8) != '\0')) &&
     (*(int *)(*(longlong *)(param_1 + 0x198) + 0x128) != 0)) {
    local_res20 = *(longlong *)(param_1 + 0x1a0);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    FUN_1435f32c0(param_1,&local_res20);
    FUN_14351dbf0(&local_res8,*(undefined8 *)(param_1 + 0x88),&local_res20,param_2);
    lVar4 = FUN_14358b2e0(*(undefined8 *)(param_1 + 0x198));
    uVar5 = *(ulonglong *)(lVar4 + 0x10);
    if (uVar5 == 0) {
      uVar5 = *(ulonglong *)(lVar4 + 8);
    }
    if ((uVar5 & 1) != 0) {
      uVar5 = uVar5 - 1;
    }
    if ((uVar5 != 0) &&
       (cVar3 = FUN_14351a300(uVar5,local_res8,*(undefined8 *)(param_1 + 0x198)), cVar3 == '\0')) {
      if (local_res8 != 0) {
        if ((local_res8 & 1) == 0) {
          if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_res8 = local_res8 - 1;
        }
      }
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    if (local_res8 != 0) {
      if ((local_res8 & 1) == 0) {
        if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_res8 = local_res8 - 1;
      }
    }
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x238);
  if (plVar2 != (longlong *)0x0) {
    local_14 = 0;
    local_18 = 0x17;
    local_10 = param_3;
    local_c = param_2;
    (**(code **)(*plVar2 + 8))(plVar2,*(longlong *)(param_1 + 0x10),&local_18);
  }
  return;
}



// FUNCTION 1435eb440 FUN_1435eb440 body=107 status=ok
// SIG undefined FUN_1435eb440(void)

void FUN_1435eb440(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  FUN_1433d4de0(lVar1 + 0xd8,lVar1);
  FSettingsModule::ShutdownModule(lVar1);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58) + 0x260))();
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58) + 0x1e0))();
  lVar1 = *(longlong *)(param_1 + 0x10) + 0x60;
  FUN_1432f2860(lVar1,lVar1,0);
  return;
}



// FUNCTION 1435eb4c0 FUN_1435eb4c0 body=121 status=ok
// SIG undefined FUN_1435eb4c0(void)

undefined8 *
FUN_1435eb4c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 1;
    puVar1[4] = param_3;
    *(undefined1 *)(puVar1 + 6) = param_4;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_145b4c498;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435eb540 FUN_1435eb540 body=106 status=ok
// SIG undefined FUN_1435eb540(void)

void FUN_1435eb540(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c8) != 0) {
    uVar1 = FUN_1435c8f90(*(undefined8 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x3c8) = uVar1;
    if (*(char *)(*(longlong *)(param_1 + 0x88) + 0xb8) != '\0') {
      FUN_1435cc020();
    }
  }
  FUN_1435ea9b0(param_1);
  FUN_1435eac30(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0xb8) != '\0') {
    FUN_1435cc020();
    return;
  }
  return;
}



// FUNCTION 1435eb620 FUN_1435eb620 body=92 status=ok
// SIG undefined FUN_1435eb620(void)

void FUN_1435eb620(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  if (*(char *)(lVar1 + 0xe4) != '\0') {
    *(undefined4 *)(lVar1 + 0xe0) = 10;
    return;
  }
  FUN_1435aaef0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),2);
  *(undefined4 *)(lVar1 + 0xac) = *(undefined4 *)(lVar1 + 200);
  *(undefined4 *)(lVar1 + 0xb0) = 0;
  return;
}



// FUNCTION 1435eb710 FUN_1435eb710 body=3488 status=ok
// SIG undefined FUN_1435eb710(void)

void FUN_1435eb710(longlong param_1,uint param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined1 uVar2;
  int *piVar3;
  RefCountNTSImpl *pRVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  RefCountNTSImpl *pRVar18;
  RefCountNTSImpl *pRVar19;
  undefined1 uVar20;
  RefCountNTSImpl *pRVar21;
  byte bVar22;
  RefCountNTSImpl *pRVar24;
  float fVar25;
  RefCountNTSImpl *local_res18;
  RefCountNTSImpl *local_res20;
  undefined8 local_118;
  undefined4 local_110;
  byte local_10c;
  RefCountNTSImpl local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined8 local_100;
  undefined4 local_f8;
  byte local_f4;
  RefCountNTSImpl local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  RefCountNTSImpl local_ed;
  RefCountNTSImpl *local_e8;
  uint local_e0;
  undefined4 local_dc;
  RefCountNTSImpl *local_d8;
  RefCountNTSImpl *local_d0;
  longlong local_c8;
  longlong local_c0;
  RefCountNTSImpl *local_b8;
  RefCountNTSImpl *local_b0;
  RefCountNTSImpl *local_a8;
  longlong local_a0;
  RefCountNTSImpl *pRStack_98;
  undefined2 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  uint local_74;
  RefCountNTSImpl *local_70;
  RefCountNTSImpl *local_68 [5];
  byte bVar23;
  
  pRVar18 = (RefCountNTSImpl *)0x0;
  uVar13 = (ulonglong)param_2;
  local_res18 = (RefCountNTSImpl *)((ulonglong)local_res18 & 0xffffffff00000000);
  pRVar24 = pRVar18;
  if (param_2 < 6) {
    pRVar24 = (RefCountNTSImpl *)((uVar13 + 0x6d) * 0x50 + *(longlong *)(param_1 + 0x10));
  }
  piVar3 = *(int **)(pRVar24 + 0x10);
  local_d8 = (RefCountNTSImpl *)0x0;
  pRVar21 = pRVar18;
  local_res20 = pRVar24;
  if (piVar3 != (int *)0x0) {
    pRVar21 = *(RefCountNTSImpl **)(piVar3 + 2);
    if (pRVar21 == (RefCountNTSImpl *)0x0) {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(longlong *)(pRVar24 + 0x10) = 0;
      pRVar21 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(pRVar21 + 8) == 0) {
      local_d8 = (RefCountNTSImpl *)0x0;
      pRVar21 = pRVar18;
    }
    else {
      *(int *)(pRVar21 + 8) = *(int *)(pRVar21 + 8) + 1;
      *(int *)(pRVar21 + 8) = *(int *)(pRVar21 + 8) + 1;
      local_d8 = pRVar21;
    }
  }
  if (pRVar21 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar21);
  }
  piVar3 = *(int **)pRVar24;
  local_e8 = (RefCountNTSImpl *)0x0;
  pRVar19 = pRVar18;
  if (piVar3 != (int *)0x0) {
    pRVar19 = *(RefCountNTSImpl **)(piVar3 + 2);
    if (pRVar19 == (RefCountNTSImpl *)0x0) {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(longlong *)pRVar24 = 0;
      pRVar19 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(pRVar19 + 8) == 0) {
      local_e8 = (RefCountNTSImpl *)0x0;
      pRVar19 = pRVar18;
    }
    else {
      *(int *)(pRVar19 + 8) = *(int *)(pRVar19 + 8) + 1;
      *(int *)(pRVar19 + 8) = *(int *)(pRVar19 + 8) + 1;
      local_e8 = pRVar19;
    }
  }
  if (pRVar19 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar19);
  }
  local_90 = 0;
  local_8c = 0;
  local_74 = 0xffffffff;
  local_a0 = 0;
  pRStack_98 = (RefCountNTSImpl *)0x0;
  local_84 = 0;
  local_7c = 0;
  FUN_1432e3a60(*(undefined8 *)(param_1 + 0x10),uVar13,&local_a0);
  if (((local_74 == param_2) && (local_a0 != 0)) && ((*(uint *)(local_a0 + 0xb8) >> 0xc & 1) == 0))
  {
    if (pRStack_98 != (RefCountNTSImpl *)0x0) {
      uVar10 = FUN_14358b2e0();
      cVar8 = FUN_1435e10c0(uVar10);
      pRVar4 = pRStack_98;
      if (cVar8 != '\0') {
        if (pRStack_98 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRStack_98 + 8) = *(int *)(pRStack_98 + 8) + 1;
        }
        if (pRVar19 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar19);
        }
        local_e8 = pRVar4;
        pRVar19 = pRVar4;
        goto LAB_1435eb8ba;
      }
    }
    FUN_1432e3ce0(*(undefined8 *)(param_1 + 0x10),param_2,pRVar19);
  }
LAB_1435eb8ba:
  if ((pRVar21 != (RefCountNTSImpl *)0x0) && (((byte)pRVar21[0x6a] >> 4 & 1) != 0)) {
    Scaleform::RefCountNTSImpl::Release(pRVar21);
    local_d8 = (RefCountNTSImpl *)0x0;
    pRVar21 = pRVar18;
  }
  if ((pRVar19 != (RefCountNTSImpl *)0x0) && (((byte)pRVar19[0x6a] >> 4 & 1) != 0)) {
    Scaleform::RefCountNTSImpl::Release(pRVar19);
    local_e8 = (RefCountNTSImpl *)0x0;
    pRVar19 = pRVar18;
  }
  if (pRVar21 != (RefCountNTSImpl *)0x0) {
    *(int *)(pRVar21 + 8) = *(int *)(pRVar21 + 8) + 1;
  }
  if (param_2 < 6) {
    lVar15 = uVar13 * 0x688 + 0x2400 + *(longlong *)(param_1 + 0x10);
  }
  else {
    lVar15 = 0;
  }
  local_b8 = pRVar21;
  puVar11 = (undefined1 *)FUN_14335f850(lVar15,&local_res18);
  uVar2 = *puVar11;
  local_dc = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x3f8) != '\0') {
    local_dc = 0x10;
  }
  local_e0 = *(uint *)(pRVar24 + 0x30) ^ *(uint *)(pRVar24 + 0x34);
  local_d0 = pRVar19;
  if (pRVar19 == (RefCountNTSImpl *)0x0) {
    local_d0 = *(RefCountNTSImpl **)(param_1 + 0x198);
  }
  uVar20 = (undefined1)param_2;
  if ((*(uint *)(pRVar24 + 0x34) & 1) == 0) {
LAB_1435eba42:
    if (pRVar19 != pRVar21) {
LAB_1435eba4b:
      lVar15 = (ulonglong)param_2 * 0xe0;
      local_res18 = *(RefCountNTSImpl **)(lVar15 + 0x3d8 + param_1);
      pRVar18 = local_res18;
      while ((pRVar18 = pRVar18 + -1, -1 < (longlong)pRVar18 &&
             ((pRVar19 == (RefCountNTSImpl *)0x0 ||
              ((pRVar4 = *(RefCountNTSImpl **)
                          (*(longlong *)(lVar15 + 0x3d0 + param_1) + (longlong)pRVar18 * 8),
               pRVar21 = local_d8, pRVar24 = local_res20, pRVar4 != pRVar19 &&
               (cVar8 = Scaleform::GFx::DisplayObjectBase::IsAncestor(pRVar4,pRVar19),
               pRVar21 = local_d8, pRVar24 = local_res20, cVar8 == '\0'))))))) {
        lVar16 = *(longlong *)(*(longlong *)(lVar15 + 0x3d0 + param_1) + (longlong)pRVar18 * 8);
        cVar8 = *(char *)(lVar16 + 0xc0);
        if (cVar8 == '\0') {
          local_108 = (RefCountNTSImpl)0xff;
        }
        else {
          local_108 = (RefCountNTSImpl)(cVar8 + -1);
          *(RefCountNTSImpl *)(lVar16 + 0xc0) = local_108;
        }
        local_118 = 0x4000;
        local_110 = 0;
        local_105 = 0;
        local_10c = 0;
        plVar14 = *(longlong **)(*(longlong *)(lVar15 + 0x3d0 + param_1) + (longlong)pRVar18 * 8);
        local_107 = uVar20;
        local_106 = uVar2;
        (**(code **)(*plVar14 + 0x328))(plVar14,&local_118);
        pRVar21 = local_d8;
        pRVar24 = local_res20;
      }
      lVar16 = lVar15 + 0x3d0 + param_1;
      pRVar18 = pRVar18 + (longlong)
                          (*(RefCountNTSImpl **)(lVar16 + 8) + (1 - (longlong)local_res18));
      local_res18 = *(RefCountNTSImpl **)(lVar16 + 8);
      FUN_143613430(lVar16,lVar16,pRVar18);
      if (local_res18 < pRVar18) {
        puVar12 = (undefined8 *)
                  (*(longlong *)(lVar15 + 0x3d0 + param_1) + (longlong)local_res18 * 8);
        for (lVar16 = (longlong)pRVar18 - (longlong)local_res18; lVar16 != 0; lVar16 = lVar16 + -1)
        {
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = 0;
          }
          puVar12 = puVar12 + 1;
        }
      }
      if (pRVar21 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar21 + 8) = *(int *)(pRVar21 + 8) + 1;
        pRVar18 = *(RefCountNTSImpl **)(lVar15 + 1000 + param_1);
        if (pRVar18 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar18);
        }
        *(RefCountNTSImpl **)(lVar15 + 1000 + param_1) = pRVar21;
        lVar16 = (**(code **)(*(longlong *)(pRVar21 + (ulonglong)(byte)pRVar21[0x6d] * 4) + 8))();
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = lVar16 + -0x38;
        }
        if (*(char *)(lVar16 + 0x40) == '\0') {
          local_108 = (RefCountNTSImpl)0xff;
        }
        else {
          local_108 = (RefCountNTSImpl)(*(char *)(lVar16 + 0x40) + -1);
          *(RefCountNTSImpl *)(lVar16 + 0x40) = local_108;
        }
        local_118 = 0x100000b;
        local_110 = 0;
        local_105 = 0;
        local_10c = 0;
        local_107 = uVar20;
        local_106 = uVar2;
        (**(code **)(*(longlong *)pRVar21 + 0x328))(pRVar21,&local_118);
        pRVar18 = *(RefCountNTSImpl **)(lVar15 + 1000 + param_1);
        if (pRVar18 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar18);
        }
        *(undefined8 *)(lVar15 + 1000 + param_1) = 0;
      }
    }
  }
  else {
    if (((byte)pRVar24[0x4c] & 4) == 0) {
      if (pRVar19 == pRVar21) {
        if (pRVar21 != (RefCountNTSImpl *)0x0) {
          local_108 = pRVar21[0xc0];
          local_118 = 0x8000;
          pRVar21[0xc0] = (RefCountNTSImpl)((char)local_108 + '\x01');
          local_110 = 0;
          local_105 = 0;
          local_10c = 0;
          local_107 = uVar20;
          local_106 = uVar2;
          (**(code **)(*(longlong *)pRVar21 + 0x328))(pRVar21,&local_118);
        }
        pRVar24[0x4c] = (RefCountNTSImpl)((byte)pRVar24[0x4c] | 4);
        goto LAB_1435eba42;
      }
      goto LAB_1435eba4b;
    }
    if (pRVar19 != pRVar21) {
      if (pRVar21 != (RefCountNTSImpl *)0x0) {
        if (pRVar21[0xc0] == (RefCountNTSImpl)0x0) {
          local_108 = (RefCountNTSImpl)0xff;
        }
        else {
          local_108 = (RefCountNTSImpl)((char)pRVar21[0xc0] + -1);
          pRVar21[0xc0] = local_108;
        }
        local_110 = 0;
        local_105 = 0;
        local_10c = 0;
        local_118 = 0x10000;
        local_107 = uVar20;
        local_106 = uVar2;
        (**(code **)(*(longlong *)pRVar21 + 0x328))(pRVar21,&local_118);
      }
      pRVar24[0x4c] = (RefCountNTSImpl)((byte)pRVar24[0x4c] & 0xfb);
      goto LAB_1435eba42;
    }
  }
  pRVar18 = local_d0;
  bVar22 = 0;
  local_res18 = (RefCountNTSImpl *)((ulonglong)local_res18 & 0xffffffffffffff00);
  do {
    bVar23 = bVar22;
    if (((local_e0 >> (bVar22 & 0x1f) & 1) != 0) &&
       ((*(uint *)(pRVar24 + 0x34) >> (bVar22 & 0x1f) & 1) != 0)) {
      if (bVar22 < 5) {
        uVar17 = *(uint *)(&DAT_145b4ddb0 + (ulonglong)bVar22 * 4);
      }
      else {
        fVar25 = _guard_xfg_dispatch_icall_nop((float)bVar22);
        uVar17 = (uint)(longlong)fVar25;
      }
      local_c8 = ((ulonglong)uVar17 + 0x54) * 3;
      local_c0 = (ulonglong)param_2 * 0xe0 + param_1;
      puVar12 = (undefined8 *)FUN_14338a640(pRVar24,&local_70,bVar22);
      local_res20 = (RefCountNTSImpl *)*puVar12;
      if (local_70 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_70);
      }
      if (local_res20 != (RefCountNTSImpl *)0x0) {
        local_118 = 0x1000;
        local_110 = 0;
        local_105 = 0;
        local_108 = (RefCountNTSImpl)0x0;
        local_10c = bVar22;
        local_107 = uVar20;
        local_106 = uVar2;
        puVar12 = (undefined8 *)FUN_14338a640(pRVar24,local_68,bVar22);
        (**(code **)(*(longlong *)*puVar12 + 0x328))((longlong *)*puVar12,&local_118);
        if (local_68[0] != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(local_68[0]);
        }
      }
      local_100 = 0x20;
      local_f8 = 0;
      local_ed = (RefCountNTSImpl)0x0;
      local_f0 = (RefCountNTSImpl)0x0;
      local_f4 = bVar22;
      local_ef = uVar20;
      local_ee = uVar2;
      (**(code **)(*(longlong *)pRVar18 + 0x328))(pRVar18,&local_100);
      if (((byte)pRVar24[0x4c] & 4) != 0) {
        local_res20 = (RefCountNTSImpl *)((ulonglong)local_res20 & 0xffffffffffffff00);
        uVar13 = Scaleform::Timer::GetTicks();
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar13;
        lVar15 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar5,8);
        iVar9 = *(int *)(local_c0 + local_c8 * 4);
        uVar17 = (uint)((uVar13 - lVar15 >> 1) + lVar15 >> 9);
        if (iVar9 == 0) {
LAB_1435ebe7f:
          puVar12 = (undefined8 *)FUN_14338a640(pRVar24,&local_b0,bVar22);
          local_a8 = (RefCountNTSImpl *)*puVar12;
          if (local_b0 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(local_b0);
          }
          if (pRVar18 == local_a8) {
            local_118 = 0x100000c;
            local_110 = 0;
            local_105 = 0;
            local_10c = (byte)local_res18;
            local_108 = (RefCountNTSImpl)0x0;
            local_107 = uVar20;
            local_106 = uVar2;
            (**(code **)(*(longlong *)pRVar18 + 0x328))(pRVar18,&local_118);
          }
          if ((char)local_res20 == '\0') {
            *(uint *)(local_c0 + local_c8 * 4) = uVar17;
          }
          else {
            *(undefined4 *)(local_c0 + local_c8 * 4) = 0;
          }
        }
        else {
          if (((iVar9 + 300U < uVar17) ||
              ((int)(*(float *)(local_c0 + 4 + local_c8 * 4) * 0.05) !=
               (int)(*(float *)(pRVar24 + 0x38) * 0.05))) ||
             ((int)(*(float *)(local_c0 + 8 + local_c8 * 4) * 0.05) !=
              (int)(*(float *)(pRVar24 + 0x3c) * 0.05))) goto LAB_1435ebe7f;
          local_res20 = (RefCountNTSImpl *)CONCAT71(local_res20._1_7_,1);
          lVar15 = (**(code **)(*(longlong *)(pRVar18 + (ulonglong)(byte)pRVar18[0x6d] * 4) + 8))
                             (pRVar18 + (ulonglong)(byte)pRVar18[0x6d] * 4);
          if (lVar15 != 0) {
            lVar15 = lVar15 + -0x38;
          }
          if ((*(byte *)(lVar15 + 0x41) & 2) == 0) goto LAB_1435ebe7f;
          local_10c = (byte)local_res18;
          local_118 = 0x100000d;
          local_110 = 0;
          local_105 = 0;
          local_108 = (RefCountNTSImpl)0x0;
          local_107 = uVar20;
          local_106 = uVar2;
          (**(code **)(*(longlong *)pRVar18 + 0x328))(pRVar18,&local_118);
          *(undefined4 *)(local_c0 + local_c8 * 4) = 0;
        }
        uVar1 = *(undefined4 *)(pRVar24 + 0x3c);
        *(undefined4 *)(local_c0 + 4 + local_c8 * 4) = *(undefined4 *)(pRVar24 + 0x38);
        *(undefined4 *)(local_c0 + 8 + local_c8 * 4) = uVar1;
        bVar23 = (byte)local_res18;
      }
      FUN_14338a6e0(pRVar24,bVar22,0);
    }
    pRVar19 = local_d8;
    pRVar21 = local_e8;
    bVar22 = bVar23 + 1;
    local_res18 = (RefCountNTSImpl *)CONCAT71(local_res18._1_7_,bVar22);
  } while (bVar22 < (byte)local_dc);
  if (*(int *)(pRVar24 + 0x48) != 0) {
    local_100 = 0x100000e;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = (RefCountNTSImpl)0x0;
    local_ed = pRVar24[0x48];
    local_ef = uVar20;
    local_ee = uVar2;
    (**(code **)(*(longlong *)pRVar18 + 0x328))(pRVar18,&local_100);
  }
  if (((byte)pRVar24[0x4c] & 8) == 0) goto LAB_1435ec0cc;
  local_100 = 8;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = (RefCountNTSImpl)0x0;
  local_ed = pRVar24[0x48];
  local_ef = uVar20;
  local_ee = uVar2;
  (**(code **)(*(longlong *)pRVar18 + 0x328))(pRVar18,&local_100);
  plVar14 = (longlong *)FUN_14338a640(pRVar24,&local_res20,0);
  if (*plVar14 == 0) {
    bVar6 = false;
LAB_1435ec01b:
    bVar7 = false;
  }
  else {
    puVar12 = (undefined8 *)FUN_14338a640(pRVar24,&local_res18,0);
    bVar6 = true;
    if ((RefCountNTSImpl *)*puVar12 == pRVar18) goto LAB_1435ec01b;
    bVar7 = true;
  }
  if ((bVar6) && (local_res18 != (RefCountNTSImpl *)0x0)) {
    Scaleform::RefCountNTSImpl::Release(local_res18);
  }
  if (local_res20 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_res20);
  }
  if (bVar7) {
    puVar12 = (undefined8 *)FUN_14338a640(pRVar24,&local_res18,0);
    iVar9 = (**(code **)(*(longlong *)*puVar12 + 0x290))();
    if (local_res18 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_res18);
    }
    if (iVar9 == 4) {
      local_118 = 8;
      local_110 = 0;
      local_105 = 0;
      local_10c = 0;
      local_108 = (RefCountNTSImpl)0x0;
      local_107 = uVar20;
      local_106 = uVar2;
      puVar12 = (undefined8 *)FUN_14338a640(pRVar24,&local_res18,0);
      (**(code **)(*(longlong *)*puVar12 + 800))((longlong *)*puVar12,&local_118);
      if (local_res18 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_res18);
      }
    }
  }
LAB_1435ec0cc:
  if (pRVar21 == pRVar19) {
    if (pRVar21 == (RefCountNTSImpl *)0x0) {
      lVar15 = (ulonglong)param_2 * 0xe0 + param_1 + 0x3d0;
      FUN_143613430(lVar15,lVar15,0);
    }
  }
  else {
    if (pRVar21 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar21 + 8) = *(int *)(pRVar21 + 8) + 1;
    }
    if (pRVar19 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar19);
    }
    if (pRVar21 != (RefCountNTSImpl *)0x0) {
      local_res18 = (RefCountNTSImpl *)((ulonglong)param_2 * 0xe0);
      if ((*(longlong *)(local_res18 + param_1 + 0x3d8) != 0) &&
         (lVar15 = *(longlong *)(local_res18 + param_1 + 0x3d8) + -1, -1 < lVar15)) {
        plVar14 = (longlong *)(*(longlong *)(local_res18 + param_1 + 0x3d0) + lVar15 * 8);
        do {
          pRVar18 = local_res18;
          if ((RefCountNTSImpl *)*plVar14 == pRVar21) goto LAB_1435ec2cb;
          plVar14 = plVar14 + -1;
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
      }
      *(int *)(pRVar21 + 8) = *(int *)(pRVar21 + 8) + 1;
      local_b0 = *(RefCountNTSImpl **)(param_1 + 0x198);
      local_res20 = *(RefCountNTSImpl **)(local_res18 + param_1 + 0x3d8);
      pRVar19 = pRVar21;
      do {
        pRVar18 = local_res18;
        if ((pRVar19 == local_b0) ||
           ((local_res20 != (RefCountNTSImpl *)0x0 &&
            (*(RefCountNTSImpl **)
              (*(longlong *)(local_res18 + param_1 + 0x3d0) + -8 + (longlong)local_res20 * 8) ==
             pRVar19)))) {
          if (pRVar19 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRVar19);
          }
          break;
        }
        local_f0 = pRVar19[0xc0];
        local_100 = 0x2000;
        pRVar19[0xc0] = (RefCountNTSImpl)((char)local_f0 + '\x01');
        local_f8 = 0;
        local_ed = (RefCountNTSImpl)0x0;
        local_f4 = 0;
        local_ef = uVar20;
        local_ee = uVar2;
        (**(code **)(*(longlong *)pRVar19 + 0x328))(pRVar19,&local_100);
        local_a8 = *(RefCountNTSImpl **)(pRVar18 + param_1 + 0x3d8);
        pRVar4 = local_a8 + 1;
        FUN_143613430(pRVar18 + param_1 + 0x3d0,pRVar18 + param_1 + 0x3d0,pRVar4);
        pRVar18 = local_res20;
        if (local_a8 < pRVar4) {
          puVar12 = (undefined8 *)
                    (*(longlong *)(local_res18 + param_1 + 0x3d0) + (longlong)local_a8 * 8);
          for (lVar15 = (longlong)pRVar4 - (longlong)local_a8; lVar15 != 0; lVar15 = lVar15 + -1) {
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0;
            }
            puVar12 = puVar12 + 1;
          }
        }
        if (local_res20 < (RefCountNTSImpl *)(*(longlong *)(local_res18 + param_1 + 0x3d8) + -1)) {
          _Src = (void *)(*(longlong *)(local_res18 + param_1 + 0x3d0) + (longlong)local_res20 * 8);
          memmove((void *)((longlong)_Src + 8),_Src,
                  (*(longlong *)(local_res18 + param_1 + 0x3d8) - (longlong)local_res20) * 8 - 8);
        }
        puVar12 = (undefined8 *)
                  (*(longlong *)(local_res18 + param_1 + 0x3d0) + (longlong)pRVar18 * 8);
        if (puVar12 != (undefined8 *)0x0) {
          *(int *)(pRVar19 + 8) = *(int *)(pRVar19 + 8) + 1;
          *puVar12 = pRVar19;
        }
        pRVar4 = *(RefCountNTSImpl **)(pRVar19 + 0x38);
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar4 + 8) = *(int *)(pRVar4 + 8) + 1;
        }
        Scaleform::RefCountNTSImpl::Release(pRVar19);
        pRVar19 = pRVar4;
        pRVar18 = local_res18;
      } while (pRVar4 != (RefCountNTSImpl *)0x0);
LAB_1435ec2cb:
      lVar15 = (**(code **)(*(longlong *)(pRVar21 + (ulonglong)(byte)pRVar21[0x6d] * 4) + 8))
                         (pRVar21 + (ulonglong)(byte)pRVar21[0x6d] * 4);
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar15 + -0x38;
      }
      local_108 = *(RefCountNTSImpl *)(lVar15 + 0x40);
      *(char *)(lVar15 + 0x40) = (char)local_108 + '\x01';
      local_110 = 0;
      local_105 = 0;
      local_10c = 0;
      local_118 = 0x100000a;
      local_107 = uVar20;
      local_106 = uVar2;
      (**(code **)(*(longlong *)pRVar21 + 0x328))(pRVar21,&local_118);
      if (*(RefCountNTSImpl **)(pRVar18 + param_1 + 1000) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(pRVar18 + param_1 + 1000));
      }
      *(undefined8 *)(pRVar18 + param_1 + 1000) = 0;
    }
    pRVar24[0x4c] = (RefCountNTSImpl)((byte)pRVar24[0x4c] | 4);
    pRVar19 = pRVar21;
  }
  uVar17 = 0;
  do {
    bVar22 = (byte)uVar17;
    if (((local_e0 >> (bVar22 & 0x1f) & 1) != 0) &&
       ((*(uint *)(pRVar24 + 0x34) >> (uVar17 & 0x1f) & 1) == 0)) {
      local_100 = 0x10;
      local_f8 = 0;
      local_ed = (RefCountNTSImpl)0x0;
      local_f0 = (RefCountNTSImpl)0x0;
      pRVar18 = pRVar19;
      if (pRVar19 == (RefCountNTSImpl *)0x0) {
        pRVar18 = *(RefCountNTSImpl **)(param_1 + 0x198);
      }
      local_f4 = bVar22;
      local_ef = uVar20;
      local_ee = uVar2;
      (**(code **)(*(longlong *)pRVar18 + 0x328))(pRVar18,&local_100);
      FUN_14338a6e0(pRVar24,uVar17,pRVar18);
      pRVar24[0x4c] = (RefCountNTSImpl)((byte)pRVar24[0x4c] | 4);
    }
    uVar17 = (uint)(byte)(bVar22 + 1);
  } while ((byte)(bVar22 + 1) < (byte)local_dc);
  if (pRVar19 == (RefCountNTSImpl *)0x0) {
    piVar3 = *(int **)(pRVar24 + 0x10);
    if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(longlong *)(pRVar24 + 0x10) = 0;
  }
  else {
    lVar15 = FUN_1432be180(pRVar19);
    piVar3 = *(int **)(pRVar24 + 0x10);
    if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(longlong *)(pRVar24 + 0x10) = lVar15;
  }
  pRVar18 = local_e8;
  pRVar24[0x4c] = (RefCountNTSImpl)((byte)pRVar24[0x4c] & 0xf7);
  *(undefined4 *)(pRVar24 + 0x48) = 0;
  if (local_b8 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_b8);
  }
  if (pRVar18 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar18);
  }
  if (pRVar19 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar19);
  }
  return;
}



// FUNCTION 1435ec4c0 FUN_1435ec4c0 body=118 status=ok
// SIG undefined FUN_1435ec4c0(void)

longlong FUN_1435ec4c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return *(longlong *)(param_1[0x33] + 0x110);
  }
  lVar1 = FUN_1435e1010(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  if (lVar1 == 0) {
    return *(longlong *)(param_1[0x33] + 0x110);
  }
  if ((*(ushort *)(lVar1 + 0x6a) >> 9 & 1) != 0) {
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*param_1 + 0x80))(param_1,*(undefined8 *)(lVar1 + 0x38));
  return lVar1;
}



// FUNCTION 1435ec540 FUN_1435ec540 body=83 status=ok
// SIG undefined FUN_1435ec540(void)

undefined8 FUN_1435ec540(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_1435f1b60(param_1,param_2);
  FUN_1432e3300(param_1[2],0,param_1[0x33]);
  (**(code **)(*param_1 + 0x140))(param_1,param_1[0x33]);
  return 1;
}



// FUNCTION 1435ec5e0 FUN_1435ec5e0 body=106 status=ok
// SIG undefined FUN_1435ec5e0(void)

void FUN_1435ec5e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x198);
    if (lVar1 != 0) {
      plVar2 = (longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      goto LAB_1435ec613;
    }
  }
  else {
    plVar2 = (longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
LAB_1435ec613:
    lVar1 = (**(code **)(*plVar2 + 8))();
    if (lVar1 != 0) {
      lVar1 = lVar1 + -0x38;
      goto LAB_1435ec626;
    }
  }
  lVar1 = 0;
LAB_1435ec626:
  FUN_1435e3d50(lVar1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1435ec670 FUN_1435ec670 body=498 status=ok
// SIG undefined FUN_1435ec670(void)

void FUN_1435ec670(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong local_res10;
  longlong local_res18;
  
  if (*(ulonglong **)(param_2 + 0x28) == (ulonglong *)0x0) {
    (**(code **)(*param_1 + 0x1f0))(param_1,param_2);
  }
  else {
    puVar7 = (ulonglong *)(**(ulonglong **)(param_2 + 0x28) & 0xfffffffffffffffc);
    lVar4 = FUN_143360a90(param_1[0x77],(longlong)puVar7 + 0xc,*puVar7 & 0x7fffffffffffffff);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    puVar7 = (ulonglong *)(**(ulonglong **)(param_2 + 0x30) & 0xfffffffffffffffc);
    local_res18 = lVar4;
    lVar5 = FUN_143360a90(param_1[0x77],(longlong)puVar7 + 0xc,*puVar7 & 0x7fffffffffffffff);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    local_res10 = lVar5;
    lVar6 = FUN_1435f2450(param_1,&local_res18,&local_res10);
    if (lVar6 != -1) {
      FUN_1435198d0(*(undefined8 *)(*(longlong *)param_1[0xe] + lVar6 * 8),param_2,0);
    }
    puVar7 = *(ulonglong **)(param_2 + 0x28);
    if (puVar7 != (ulonglong *)0x0) {
      uVar2 = *puVar7;
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
      }
      FMemory::operator_delete(puVar7,8);
    }
    puVar7 = *(ulonglong **)(param_2 + 0x30);
    if (puVar7 != (ulonglong *)0x0) {
      uVar2 = *puVar7;
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
      }
      FMemory::operator_delete(puVar7,8);
    }
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  puVar7 = *(ulonglong **)(param_2 + 0x18);
  if (puVar7 != (ulonglong *)0x0) {
    uVar2 = *puVar7;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
    }
    FMemory::operator_delete(puVar7,8);
  }
  puVar7 = *(ulonglong **)(param_2 + 0x20);
  if (puVar7 != (ulonglong *)0x0) {
    uVar2 = *puVar7;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
    }
    FMemory::operator_delete(puVar7,8);
    return;
  }
  return;
}



// FUNCTION 1435ec870 FUN_1435ec870 body=185 status=ok
// SIG undefined FUN_1435ec870(void)

void FUN_1435ec870(longlong param_1,undefined8 param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    do {
      while( true ) {
        lVar1 = lVar1 + -1;
        if (lVar1 < 0) {
          return;
        }
        plVar2 = *(longlong **)(param_1 + 0x50);
        lVar3 = *(longlong *)(*plVar2 + lVar1 * 8);
        if (lVar3 != 0) break;
        if (plVar2[1] == 1) {
          Scaleform::
          ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
          ::Clear(plVar2);
        }
        else {
          _Dst = (void *)(*plVar2 + lVar1 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(plVar2[1] - lVar1) * 8 - 8);
          plVar2[1] = plVar2[1] + -1;
        }
      }
    } while (*(int *)(lVar3 + 0x80) != param_3);
    FUN_1435198d0(lVar3,param_2,0);
  }
  return;
}



// FUNCTION 1435ec930 FUN_1435ec930 body=153 status=ok
// SIG undefined FUN_1435ec930(void)

void FUN_1435ec930(longlong param_1,undefined8 param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    while (lVar1 = lVar1 + -1, -1 < lVar1) {
      plVar2 = *(longlong **)(param_1 + 0x60);
      lVar3 = *(longlong *)(*plVar2 + lVar1 * 8);
      if (lVar3 == 0) {
        if (plVar2[1] == 1) {
          Scaleform::
          ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
          ::Clear(plVar2);
        }
        else {
          _Dst = (void *)(*plVar2 + lVar1 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(plVar2[1] - lVar1) * 8 - 8);
          plVar2[1] = plVar2[1] + -1;
        }
      }
      else {
        FUN_1435198d0(lVar3,param_2,0);
      }
    }
  }
  return;
}



// FUNCTION 1435ec9d0 FUN_1435ec9d0 body=185 status=ok
// SIG undefined FUN_1435ec9d0(void)

void FUN_1435ec9d0(longlong param_1,undefined8 param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    do {
      while( true ) {
        lVar1 = lVar1 + -1;
        if (lVar1 < 0) {
          return;
        }
        plVar2 = *(longlong **)(param_1 + 0x60);
        lVar3 = *(longlong *)(*plVar2 + lVar1 * 8);
        if (lVar3 != 0) break;
        if (plVar2[1] == 1) {
          Scaleform::
          ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
          ::Clear(plVar2);
        }
        else {
          _Dst = (void *)(*plVar2 + lVar1 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(plVar2[1] - lVar1) * 8 - 8);
          plVar2[1] = plVar2[1] + -1;
        }
      }
    } while (*(int *)(lVar3 + 0x80) != param_3);
    FUN_1435198d0(lVar3,param_2,0);
  }
  return;
}



// FUNCTION 1435ecad0 FUN_1435ecad0 body=147 status=ok
// SIG undefined FUN_1435ecad0(void)

undefined8 FUN_1435ecad0(longlong param_1)

{
  RefCountNTSImpl *this;
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x50))(*(longlong **)(lVar1 + 0x10),0x90,0)
    ;
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1433e8cf0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10),0);
    }
    lVar1 = *(longlong *)(param_1 + 0x80);
    this = *(RefCountNTSImpl **)(lVar1 + 0x28);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    return *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x28);
  }
  return *(undefined8 *)(lVar1 + 0x28);
}



// FUNCTION 1435ecb90 FUN_1435ecb90 body=235 status=ok
// SIG undefined FUN_1435ecb90(void)

undefined8 * FUN_1435ecb90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_res8;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x30);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *puVar3 = &PTR_FUN_144f70a50;
      *puVar3 = &PTR_FUN_145b028d8;
      *(undefined4 *)(puVar3 + 1) = 1;
      FUN_1432c5250(puVar3 + 2);
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    puVar4 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(lVar2,&local_res8);
    Scaleform::String::operator=(puVar3 + 2,*(undefined8 *)*puVar4);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_1433703e0(lVar2,puVar3,param_2);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435ecc90 FUN_1435ecc90 body=4225 status=ok
// SIG undefined FUN_1435ecc90(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1435ecc90(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  RefCountNTSImpl *pRVar12;
  uint *puVar13;
  RefCountNTSImpl *pRVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  RefCountNTSImpl *pRVar17;
  uint local_res10 [4];
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 in_stack_fffffffffffffad8;
  undefined4 uVar18;
  undefined8 in_stack_fffffffffffffae0;
  RefCountNTSImpl *local_508;
  undefined8 local_500;
  RefCountNTSImpl *local_4f8;
  ulonglong local_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  ulonglong local_4e0;
  longlong local_4d8;
  uint local_4d0 [2];
  int *local_4c8;
  RefCountNTSImpl *pRStack_4c0;
  RefCountNTSImpl *local_4b8;
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  RefCountNTSImpl *local_490;
  undefined8 local_488;
  longlong local_480;
  RefCountNTSImpl *local_478;
  undefined8 local_470;
  undefined4 local_468 [2];
  ulonglong local_460;
  ulonglong local_458;
  longlong local_450 [3];
  undefined1 local_438 [1024];
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffae0 >> 0x20);
  pRVar12 = (RefCountNTSImpl *)0x0;
  local_res10[0] = 0;
  if (*(char *)(param_2 + 0x25) != '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x10) & 0x24) == 0) {
    FUN_1432c31e0(&local_508,param_2 + 0x18);
    FUN_1432c2f70(&local_4f0);
    pRVar17 = *(RefCountNTSImpl **)(param_3 + 0x18);
    uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1[2] + 0x50) + 0x70) + 0x28);
    plVar10 = *(longlong **)(param_1[2] + 0x58);
    local_500 = (undefined8 *)CONCAT44(local_500._4_4_,uVar6);
    local_4f8 = pRVar17;
    if (plVar10 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x218))();
      puVar13 = (uint *)(**(code **)(*plVar10 + 0x58))(plVar10,&local_res20);
      if ((*puVar13 >> 4 & 1) != 0) {
        uVar8 = FUN_143389a50(&local_res20,&local_508);
        FUN_1432c4d80(&local_4f0,uVar8);
        uVar16 = CONCAT44(uStackX_24,local_res20) & 0xfffffffffffffffc;
        iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffff);
        if (iVar7 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
        }
        uVar6 = (uint)local_500;
      }
    }
    local_res10[0] = local_res10[0] & 0xffffff00;
    cVar4 = FUN_1432ff890(&local_508,local_res10,0);
    local_res20 = CONCAT31(local_res20._1_3_,cVar4);
    if (cVar4 == '\0') {
      local_500 = (undefined8 *)(CONCAT44(local_500._4_4_,uVar6) | 0x10001);
      uVar6 = uVar6 | 0x210001;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar6 = (uint)local_500;
      }
      if (*(longlong *)(param_2 + 0x40) == 0) {
        FUN_1432c2f70(&local_4f8);
        if (*(longlong *)(param_1[2] + 0x58) == 0) {
LAB_1435ed8a7:
          FUN_1432c3510(&local_4f8);
        }
        else {
          uVar8 = (**(code **)(**(longlong **)(param_1[2] + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_4f8,uVar8);
          cVar4 = FUN_1432bad10(&local_4f8);
          if (cVar4 == '\0') goto LAB_1435ed8a7;
        }
        lVar11 = FUN_1432c3580(&local_4f0);
        if (lVar11 == 0) {
LAB_1435ed90b:
          local_468[0] = 3;
          FUN_1432c31e0(&local_460,&local_508);
          FUN_1432c31e0(&local_458,&local_4f8);
          pRVar14 = (RefCountNTSImpl *)FUN_1432fe2b0(param_3,local_468,uVar6,0,0);
          FUN_143316010(local_468);
        }
        else {
          local_450[0] = CONCAT44(local_450[0]._4_4_,3);
          FUN_1432c31e0(local_450 + 1,&local_4f0);
          FUN_1432c31e0(local_450 + 2,&local_4f8);
          pRVar14 = (RefCountNTSImpl *)FUN_1432fe2b0(param_3,local_450,uVar6,0,0);
          FUN_143316010(local_450);
          if (pRVar14 == (RefCountNTSImpl *)0x0) goto LAB_1435ed90b;
        }
        uVar16 = (ulonglong)local_4f8 & 0xfffffffffffffffc;
        iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffff);
        if (iVar7 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
        }
      }
      else {
        pRVar14 = (RefCountNTSImpl *)FUN_1432fea30(param_3,*(longlong *)(param_2 + 0x40),uVar6,0,0);
      }
      if (pRVar14 == (RefCountNTSImpl *)0x0) {
        if ((pRVar17 != (RefCountNTSImpl *)0x0) && (*(char *)(param_2 + 0x24) == '\0')) {
          FUN_1434a1650(pRVar17 + 0x18,"Failed loading URL \"%s\"",
                        ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
        }
        FUN_1434fd5b0(*(undefined8 *)(param_2 + 0x28),
                      ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
        if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_2 + 0x50) + 0x18))();
        }
      }
      else {
        iVar7 = (**(code **)(*(longlong *)pRVar14 + 0x20))(pRVar14);
        if ((iVar7 == -1) ||
           ((uVar6 = (**(code **)(*(longlong *)pRVar14 + 0x20))(pRVar14), 8 < uVar6 &&
            (0x17 < ((byte)*(undefined4 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(pRVar14 + 0x70) + 0x18) + 0x40) + 0xd0) &
                     8 | 0x10))))) goto LAB_1435ed62d;
        if ((pRVar17 != (RefCountNTSImpl *)0x0) && (*(char *)(param_2 + 0x24) == '\0')) {
          FUN_1434a1650(pRVar17 + 0x18,"Failed loading SWF \"%s\": ActionScript version mismatch",
                        ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
        }
        FUN_1434fd5b0(*(undefined8 *)(param_2 + 0x28),
                      ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
        if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_2 + 0x50) + 0x18))();
        }
        FUN_1432de450(pRVar14);
      }
    }
    else {
      plVar10 = (longlong *)Scaleform::GFx::LoadStates::GetImageCreator(param_3);
      pRVar14 = pRVar12;
      if (plVar10 == (longlong *)0x0) {
        if (pRVar17 != (RefCountNTSImpl *)0x0) {
          FUN_1434a1650(pRVar17 + 0x18,"ImageCreator is not installed, failed to load image \"%s\"",
                        ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
        }
        FUN_1434fd5b0(*(undefined8 *)(param_2 + 0x28),
                      ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
      }
      else {
        uVar8 = *(undefined8 *)(param_3 + 0x38);
        local_4c8 = *(int **)(param_1[2] + 0x48);
        local_4d0[0] = 0;
        pRStack_4c0 = (RefCountNTSImpl *)0x100000001;
        local_4b8 = (RefCountNTSImpl *)0x0;
        uStack_4b0 = 0;
        local_4a8 = 0;
        lStack_4a0 = 0;
        local_4e0 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x10);
        pRVar17 = pRVar12;
        if ((*(longlong *)(param_3 + 0x18) != 0) &&
           (pRVar17 = *(RefCountNTSImpl **)(*(longlong *)(param_3 + 0x18) + 0x20),
           pRVar17 == (RefCountNTSImpl *)0x0)) {
          pRVar17 = (RefCountNTSImpl *)Scaleform::Log::GetGlobalLog();
        }
        lStack_4a0 = param_1[2];
        local_4b8 = pRVar17;
        uStack_4b0 = local_4e0;
        local_4a8 = uVar8;
        FUN_1432c2fb0(&local_4e0,((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
        plVar10 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10,local_4d0,&local_4e0);
        uVar16 = local_4e0 & 0xfffffffffffffffc;
        iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffff);
        if (iVar7 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
        }
        if (plVar10 == (longlong *)0x0) {
          if (local_4f8 != (RefCountNTSImpl *)0x0) {
            FUN_1434a1650(local_4f8 + 0x18,
                          "ImageCreator::LoadProtocolImage failed to load image \"%s\"",
                          ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
          }
          FUN_1434fd5b0(*(undefined8 *)(param_2 + 0x28),
                        ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc);
          goto LAB_1435edc94;
        }
        lVar11 = (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                           (*(longlong **)(param_1[2] + 0x48),0x68);
        if ((lVar11 != 0) && (lVar11 = FUN_1432ef310(lVar11,plVar10,1), lVar11 != 0)) {
          pRVar14 = (RefCountNTSImpl *)
                    FUN_1432e4290(param_1[2],lVar11,(undefined1)local_res10[0],
                                  ((ulonglong)local_508 & 0xfffffffffffffffc) + 0xc,param_3);
          FUN_1432de450(lVar11);
        }
        (**(code **)(*plVar10 + 0x10))(plVar10);
LAB_1435ed62d:
        if (pRVar14 != (RefCountNTSImpl *)0x0) {
          FUN_1435f2ea0(param_1,pRVar14);
        }
      }
      FUN_1434fd600(*(undefined8 *)(param_2 + 0x28));
      if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x50) + 8))();
      }
      uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x88);
      if ((pRVar14 == (RefCountNTSImpl *)0x0) ||
         (*(int *)(*(longlong *)(*(longlong *)(pRVar14 + 0x70) + 0x18) + 0x38) != 2)) {
        pRVar17 = (RefCountNTSImpl *)0x0;
        if (pRVar14 != (RefCountNTSImpl *)0x0) {
          if (param_1[0x11] != 0) {
            FUN_1435aaef0(*(undefined8 *)(param_1[0x11] + 0x30),*(undefined8 *)(param_1[2] + 0x38),0
                         );
          }
          uVar5 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(pRVar14 + 0x70) + 0x18) + 0x40) + 0x50
                   );
          FUN_1434fd450(*(undefined8 *)(param_2 + 0x28),uVar5,uVar5);
          local_4e8 = 0;
          local_498 = *(longlong *)(*(longlong *)(pRVar14 + 0x70) + 0x18);
          local_488 = 0;
          local_490 = pRVar14;
          pRVar17 = (RefCountNTSImpl *)
                    (**(code **)(*(longlong *)param_1[3] + 0x20))
                              ((longlong *)param_1[3],param_1[2],&local_498,0,&local_4e8,
                               CONCAT44(uVar18,3));
          FUN_143383050(pRVar17,1);
          *(ushort *)(pRVar17 + 0x88) = *(ushort *)(pRVar17 + 0x88) | 1;
          (**(code **)(*(longlong *)pRVar17 + 0x250))(pRVar17);
          Scaleform::GFx::InteractiveObject::AddToPlayList(pRVar17);
          pRVar12 = pRVar17 + (ulonglong)(byte)pRVar17[0x6d] * 4;
          lVar11 = FUN_1435f4a10(param_1,*(undefined8 *)(param_2 + 0x28),uVar8);
          *(longlong *)(pRVar12 + 0x28) = lVar11;
          (**(code **)(*(longlong *)pRVar12 + 0xd8))(pRVar12,0);
          (**(code **)(*(longlong *)pRVar17 + 0x138))(pRVar17,0);
          if (((*(longlong *)(pRVar12 + 0x10) == 0) && (*(longlong *)(pRVar12 + 8) == 0)) &&
             (cVar4 = FUN_1435e0710(pRVar12), cVar4 != '\0')) {
            uVar16 = *(ulonglong *)(pRVar12 + 0x10);
            if (uVar16 == 0) {
              uVar16 = *(ulonglong *)(pRVar12 + 8);
            }
            if ((uVar16 & 1) != 0) {
              uVar16 = uVar16 - 1;
            }
            FUN_1434f2570(uVar16,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xa0));
            FUN_1435e0a80(pRVar12,1);
            lVar11 = (**(code **)(**(longlong **)(uVar16 + 0x28) + 0x38))();
            if (lVar11 != 0) {
              *(RefCountNTSImpl **)(lVar11 + 0x150) = pRVar17;
            }
          }
          uVar8 = FUN_143516900(uVar8);
          FUN_1435e4720(uVar8,pRVar17);
          (**(code **)(*param_1 + 0x140))(param_1,pRVar17);
          FUN_143384e20(pRVar17);
          (**(code **)(*param_1 + 0x38))(param_1);
          *(int *)(pRVar17 + 8) = *(int *)(pRVar17 + 8) + 1;
        }
      }
      else {
        local_470 = 0;
        local_500 = (undefined8 *)CONCAT44(local_500._4_4_,0x40000);
        local_480 = *(longlong *)(*(longlong *)(pRVar14 + 0x70) + 0x18);
        local_478 = pRVar14;
        pRVar17 = (RefCountNTSImpl *)
                  (**(code **)(*(longlong *)param_1[3] + 0x20))
                            ((longlong *)param_1[3],param_1[2],&local_480,0,&local_500,
                             CONCAT44(uVar18,8));
        local_4e0 = local_4e0 & 0xffffffff00000000;
        local_4d8 = 0;
        local_4e8 = 0;
        cVar4 = FUN_14330e8c0(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(pRVar14 + 0x70) + 0x18) + 0x40),
                              &local_4e0,&local_4e8);
        if (((cVar4 != '\0') &&
            (plVar10 = (longlong *)FUN_143317160(&local_4e0,*(longlong *)(pRVar14 + 0x70) + 0x30),
            plVar10 != (longlong *)0x0)) &&
           (uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10), (uVar6 & 0xff00) == 0x100)) {
          Scaleform::GFx::AS3::AvmBitmap::SetImage(pRVar17,plVar10);
        }
        if (pRVar17 != (RefCountNTSImpl *)0x0) {
          pRVar12 = pRVar17 + (ulonglong)(byte)pRVar17[0x6d] * 4;
        }
        lVar11 = FUN_1435f4a10(param_1,*(undefined8 *)(param_2 + 0x28),uVar8);
        *(longlong *)(pRVar12 + 0x28) = lVar11;
        if (((*(longlong *)(pRVar12 + 0x10) == 0) && (*(longlong *)(pRVar12 + 8) == 0)) &&
           (cVar4 = FUN_1435e0710(pRVar12), cVar4 != '\0')) {
          uVar16 = *(ulonglong *)(pRVar12 + 0x10);
          if (uVar16 == 0) {
            uVar16 = *(ulonglong *)(pRVar12 + 8);
          }
          if ((uVar16 & 1) != 0) {
            uVar16 = uVar16 - 1;
          }
          FUN_1434f2570(uVar16,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xa0));
          FUN_1435e0a80(pRVar12,1);
        }
        uVar8 = FUN_143516900(uVar8);
        FUN_1435e4720(uVar8,pRVar17);
        if (pRVar17 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar17 + 8) = *(int *)(pRVar17 + 8) + 1;
        }
        if (((int)local_4e0 == 0) && (local_4d8 != 0)) {
          FUN_1432de450();
        }
      }
      if (pRVar17 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar17);
      }
      if ((char)local_res20 == '\0') {
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar15 = FUN_143609d50(&local_res20,*(undefined8 *)(param_2 + 0x50));
        FUN_1434fd4f0(uVar8,pRVar17,uVar15);
        FUN_1434fd490(*(undefined8 *)(param_2 + 0x28));
      }
      else {
        FUN_1434fd620(*(undefined8 *)(param_2 + 0x28),pRVar17);
        if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_2 + 0x50) + 0x10))();
        }
        FUN_1434fd470(*(undefined8 *)(param_2 + 0x28));
      }
      if (pRVar17 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar17);
      }
      if (pRVar14 != (RefCountNTSImpl *)0x0) {
        FUN_1432de450(pRVar14);
      }
    }
LAB_1435edc94:
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_4f0 & 0xfffffffffffffffc) + 8,0xffffffff);
    pRVar12 = local_508;
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_4f0 & 0xfffffffffffffffc);
      pRVar12 = local_508;
    }
    goto LAB_1435edcc3;
  }
  FUN_1432c2f70(&local_4f8);
  local_450[0] = 0;
  local_450[1] = 0;
  local_450[2] = 0;
  local_res20 = 0;
  FUN_1432c2f70(&local_4f0);
  if (*(longlong *)(param_1[2] + 0x58) == 0) {
LAB_1435ecd34:
    FUN_1432c3510(&local_4f0);
  }
  else {
    uVar8 = (**(code **)(**(longlong **)(param_1[2] + 0x50) + 0x60))();
    Scaleform::String::operator=(&local_4f0,uVar8);
    cVar4 = FUN_1432bad10(&local_4f0);
    if (cVar4 == '\0') goto LAB_1435ecd34;
  }
  uVar6 = 4;
  local_res10[0] = 4;
  local_468[0] = 4;
  FUN_1432c31e0(&local_460,param_2 + 0x18);
  FUN_1432c31e0(&local_458,&local_4f0);
  FUN_1432c2f70(&local_4e8);
  Scaleform::GFx::LoadStates::BuildURL(param_3,&local_4e8,local_468);
  local_480 = 0;
  local_478 = (RefCountNTSImpl *)0x0;
  local_470 = 0;
  cVar4 = FUN_1432badc0(&local_4e8);
  if (cVar4 == '\0') {
    pRVar12 = (RefCountNTSImpl *)
              FUN_143319140(param_3,(CONCAT44(uStack_4e4,local_4e8) & 0xfffffffffffffffc) + 0xc,0);
LAB_1435ed215:
    if (pRVar12 == (RefCountNTSImpl *)0x0) goto LAB_1435ecdbb;
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    cVar4 = Scaleform::GFx::AS3::Instances::fl_net::URLLoader::IsLoadingVariables(uVar8);
    if (cVar4 == '\0') {
      cVar4 = FUN_14355cae0(uVar8);
      if (cVar4 != '\0') {
        uVar8 = 0;
        goto LAB_1435ed235;
      }
      cVar4 = FUN_14355cb30(uVar8);
      if (cVar4 != '\0') {
        FUN_1432ec520(local_450,pRVar12,&local_res20);
      }
    }
    else {
      uVar8 = 1;
LAB_1435ed235:
      FUN_1432ec380(&local_4f8,pRVar12,&local_res20,uVar8);
    }
    bVar3 = false;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x14);
    if (iVar7 == 1) {
      uVar6 = 1;
      local_res10[0] = uVar6;
LAB_1435ece0b:
      local_508 = (RefCountNTSImpl *)param_1[0x34];
      *(int *)(local_508 + 0x18) = *(int *)(local_508 + 0x18) + 1;
      local_4d0[0] = 0;
      local_4c8 = (int *)0x0;
      FUN_143557ef0(*(undefined8 *)(param_2 + 0x38),local_4d0);
      pRVar17 = pRStack_4c0;
      if ((local_4d0[0] & 0x1f) == 0xc) {
        if (pRStack_4c0 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRStack_4c0 + 8) = *(int *)(pRStack_4c0 + 8) + 1;
          *(uint *)(pRStack_4c0 + 8) = *(uint *)(pRStack_4c0 + 8) & 0x8fffffff;
        }
        puVar9 = (undefined8 *)
                 (**(code **)(*(longlong *)pRStack_4c0 + 0x78))(pRStack_4c0,&local_500);
        iVar7 = _guard_xfg_dispatch_icall_nop(*(char **)*puVar9,"URLVariables");
        piVar1 = (int *)(local_500 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (iVar7 == 0) {
          FUN_14355d980(pRVar17,&local_508);
          if (uVar6 == 1) {
            FUN_1432c3700(&local_4e8,0x3f);
            FUN_1432c3950(&local_4e8,*(longlong *)local_508,0xffffffffffffffff);
            FUN_143360110(&local_508);
          }
        }
        else if ((*(int *)(*(longlong *)(pRVar17 + 0x28) + 0x90) == 8) &&
                ((~(*(byte *)(*(longlong *)(pRVar17 + 0x28) + 0x88) >> 5) & 1) != 0)) {
          FUN_14357a620(pRVar17,&local_508);
        }
        if ((((ulonglong)pRVar17 & 1) == 0) && ((*(uint *)(pRVar17 + 8) & 0x3fffff) != 0)) {
          *(uint *)(pRVar17 + 8) = *(uint *)(pRVar17 + 8) - 1;
          FUN_1434ef880(pRVar17);
        }
      }
      else if ((local_4d0[0] & 0x1f) == 10) {
        *(int *)(pRStack_4c0 + 0x18) = *(int *)(pRStack_4c0 + 0x18) + 1;
        *(int *)(pRStack_4c0 + 0x18) = *(int *)(pRStack_4c0 + 0x18) + 1;
        pRVar14 = local_508 + 0x18;
        *(int *)pRVar14 = *(int *)pRVar14 + -1;
        if (*(int *)pRVar14 == 0) {
          FUN_14335f920();
        }
        local_508 = pRVar17;
        pRVar14 = pRVar17 + 0x18;
        *(int *)pRVar14 = *(int *)pRVar14 + -1;
        if (*(int *)pRVar14 == 0) {
          FUN_14335f920(pRVar17);
        }
      }
      local_498 = 0;
      local_490 = (RefCountNTSImpl *)0x0;
      local_488 = 0;
      FUN_1435583a0(*(undefined8 *)(param_2 + 0x38),&local_4e0);
      uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffad8 >> 0x20);
      if ((local_4e0 != 0) &&
         (plVar10 = (longlong *)(local_4e0 + 0x40), pRVar17 = pRVar12, *plVar10 != 0)) {
        do {
          lVar11 = FUN_1434b4f50(plVar10,pRVar17);
          lVar11 = *(longlong *)(lVar11 + 0x10);
          FUN_1432c2fb0(&local_500,**(undefined8 **)(lVar11 + 0x40));
          FUN_1432c3950(&local_500,&DAT_145b19618,0xffffffffffffffff);
          FUN_1432c3950(&local_500,**(undefined8 **)(lVar11 + 0x48),0xffffffffffffffff);
          FUN_1432bc120(&local_498,&local_498);
          lVar11 = local_498 + (longlong)(local_490 + -1) * 8;
          if (lVar11 != 0) {
            FUN_1432c31e0(lVar11,&local_500);
          }
          uVar16 = (ulonglong)local_500 & 0xfffffffffffffffc;
          iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffff);
          if (iVar7 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
          }
          uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffad8 >> 0x20);
          pRVar17 = pRVar17 + 1;
          plVar10 = (longlong *)(local_4e0 + 0x40);
        } while (pRVar17 < (RefCountNTSImpl *)*plVar10);
      }
      lVar11 = *(longlong *)(param_2 + 0x38);
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x98) + 0x10) + 0x218);
      local_500 = (undefined8 *)(lVar2 + 0x48);
      piVar1 = (int *)(lVar2 + 0x60);
      *piVar1 = *piVar1 + 1;
      FUN_143557e60(lVar11,&local_500);
      uVar8 = *local_500;
      lVar11 = *(longlong *)local_508;
      uVar5 = FUN_14335fa60(&local_508);
      cVar4 = FUN_1432bae80(&local_480,&local_4e8,local_res10[0],lVar11,CONCAT44(uVar18,uVar5),
                            &local_498,uVar8);
      if ((cVar4 == '\0') || (local_478 == (RefCountNTSImpl *)0x0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      piVar1 = (int *)(local_500 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if ((bVar3) &&
         (lVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30), lVar11 != 0)) {
        pRVar12 = (RefCountNTSImpl *)
                  FUN_1432e1570(lVar11,&local_4e8,local_480,(ulonglong)local_478 & 0xffffffff);
      }
      if (local_4e0 != 0) {
        if ((local_4e0 & 1) == 0) {
          if ((*(uint *)(local_4e0 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_4e0 + 8) = *(uint *)(local_4e0 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_4e0 = local_4e0 - 1;
        }
      }
      FUN_1432bbc10(&local_498);
      uVar6 = local_4d0[0] & 0x1f;
      if (9 < uVar6) {
        if ((local_4d0[0] >> 9 & 1) == 0) {
          if (uVar6 == 10) {
            pRVar17 = pRStack_4c0 + 0x18;
            *(int *)pRVar17 = *(int *)pRVar17 + -1;
            if (*(int *)pRVar17 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
            pRVar17 = pRStack_4c0;
            if (((ulonglong)pRStack_4c0 & 1) == 0) {
LAB_1435ed1be:
              if ((pRVar17 != (RefCountNTSImpl *)0x0) && ((*(uint *)(pRVar17 + 8) & 0x3fffff) != 0))
              {
                *(uint *)(pRVar17 + 8) = *(uint *)(pRVar17 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              pRStack_4c0 = pRStack_4c0 + -1;
            }
          }
          else if (uVar6 - 0xd < 2) {
            pRVar17 = local_4b8;
            if (((ulonglong)local_4b8 & 1) == 0) goto LAB_1435ed1be;
            local_4b8 = local_4b8 + -1;
          }
        }
        else {
          *local_4c8 = *local_4c8 + -1;
          if (*local_4c8 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_4d0[0] = local_4d0[0] & 0xfffffde0;
          local_4c8 = (int *)0x0;
          pRStack_4c0 = (RefCountNTSImpl *)0x0;
          local_4b8 = (RefCountNTSImpl *)0x0;
        }
      }
      pRVar17 = local_508 + 0x18;
      *(int *)pRVar17 = *(int *)pRVar17 + -1;
      if (*(int *)pRVar17 == 0) {
        FUN_14335f920();
      }
      goto LAB_1435ed215;
    }
    if (iVar7 == 2) {
      uVar6 = 2;
      local_res10[0] = uVar6;
      goto LAB_1435ece0b;
    }
    if (iVar7 == 3) {
      uVar6 = 3;
      local_res10[0] = uVar6;
      goto LAB_1435ece0b;
    }
    if (iVar7 == 4) goto LAB_1435ece0b;
LAB_1435ecdbb:
    FUN_1432f2bf0(local_438,0x400,"Can\'t open %s",
                  (CONCAT44(uStack_4e4,local_4e8) & 0xfffffffffffffffc) + 0xc);
    FUN_14351a780(*(undefined8 *)(param_2 + 0x30),local_438);
    bVar3 = true;
  }
  if (local_480 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (pRVar12 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)pRVar12);
  }
  uVar16 = CONCAT44(uStack_4e4,local_4e8) & 0xfffffffffffffffc;
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
  }
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_458 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_458 & 0xfffffffffffffffc);
  }
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_460 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_460 & 0xfffffffffffffffc);
  }
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_4f0 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_4f0 & 0xfffffffffffffffc);
  }
  if (!bVar3) {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    cVar4 = Scaleform::GFx::AS3::Instances::fl_net::URLLoader::IsLoadingVariables(uVar8);
    if (cVar4 == '\0') {
      cVar4 = FUN_14355cae0(uVar8);
      if (cVar4 == '\0') {
        cVar4 = FUN_14355cb30(uVar8);
        if (cVar4 != '\0') {
          FUN_14355cd90(uVar8,local_450);
        }
      }
      else {
        FUN_14355cd00(uVar8,((ulonglong)local_4f8 & 0xfffffffffffffffc) + 0xc);
      }
    }
    else {
      FUN_14355cb80(uVar8,((ulonglong)local_4f8 & 0xfffffffffffffffc) + 0xc);
    }
    FUN_14355c870(uVar8);
    FUN_14355c920(uVar8,local_res20,local_res20);
    FUN_14355ca00(uVar8);
  }
  pRVar12 = local_4f8;
  if (local_450[0] != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    pRVar12 = local_4f8;
  }
LAB_1435edcc3:
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    (((ulonglong)pRVar12 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,(ulonglong)pRVar12 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1435edd20 FUN_1435edd20 body=331 status=ok
// SIG undefined FUN_1435edd20(void)

void FUN_1435edd20(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong *param_4,
                  undefined4 param_5,char param_6)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong local_res10 [3];
  undefined1 local_408 [1024];
  
  if (param_6 == '\0') {
    puVar3 = (undefined8 *)FUN_143557d60(*(undefined8 *)(param_2 + 0x38));
    FUN_1432f2bf0(local_408,0x400,"Can\'t open %s",*(undefined8 *)*puVar3);
    FUN_14351a780(*(undefined8 *)(param_2 + 0x30),local_408);
    return;
  }
  cVar1 = Scaleform::GFx::AS3::Instances::fl_net::URLLoader::IsLoadingVariables
                    (*(undefined8 *)(param_2 + 0x30));
  if (cVar1 == '\0') {
    cVar1 = FUN_14355cae0(*(undefined8 *)(param_2 + 0x30));
    if (cVar1 == '\0') {
      FUN_14355cb30(*(undefined8 *)(param_2 + 0x30));
    }
    else {
      FUN_14355cd00(*(undefined8 *)(param_2 + 0x30),(*param_4 & 0xfffffffffffffffc) + 0xc);
    }
  }
  else {
    FUN_1432c2f70(local_res10);
    FUN_143364700((longlong)(*param_4 & 0xfffffffffffffffc) + 0xc,
                  *(ulonglong *)(*param_4 & 0xfffffffffffffffc) & 0x7fffffffffffffff,local_res10);
    FUN_14355cb80(*(undefined8 *)(param_2 + 0x30),(local_res10[0] & 0xfffffffffffffffc) + 0xc);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
    }
  }
  FUN_14355c870(*(undefined8 *)(param_2 + 0x30));
  FUN_14355c920(*(undefined8 *)(param_2 + 0x30),param_5,param_5);
  FUN_14355ca00(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1435ede80 FUN_1435ede80 body=142 status=ok
// SIG undefined FUN_1435ede80(void)

void FUN_1435ede80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  undefined1 local_408 [1024];
  
  if (param_6 == '\0') {
    puVar1 = (undefined8 *)FUN_143557d60(*(undefined8 *)(param_2 + 0x38));
    FUN_1432f2bf0(local_408,0x400,"Can\'t open %s",*(undefined8 *)*puVar1);
    FUN_14351a780(*(undefined8 *)(param_2 + 0x30),local_408);
    return;
  }
  FUN_14355cd90(*(undefined8 *)(param_2 + 0x30),param_4);
  FUN_14355c870(*(undefined8 *)(param_2 + 0x30));
  FUN_14355c920(*(undefined8 *)(param_2 + 0x30),param_5,param_5);
  FUN_14355ca00(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1435edf20 FUN_1435edf20 body=657 status=ok
// SIG undefined FUN_1435edf20(void)

void FUN_1435edf20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68 [2];
  ulonglong local_60;
  uint local_58 [2];
  int *piStack_50;
  longlong local_48;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)(param_2 + 0x70);
  if (lVar4 == 0) {
    lVar4 = FUN_14336c170(param_2);
  }
  plVar1 = (longlong *)(lVar4 + 0x18);
  lVar4 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                    (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  if (lVar4 != 0) {
    lVar4 = lVar4 + -0x38;
  }
  plVar8 = *(longlong **)(lVar4 + 0x10);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(lVar4 + 8);
  }
  if (((ulonglong)plVar8 & 1) != 0) {
    plVar8 = (longlong *)((longlong)plVar8 + -1);
  }
  if (plVar8 != (longlong *)0x0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x4c60);
    lVar4 = *plVar6;
    if (((lVar4 != 0) &&
        (lVar5 = FUN_1432ef240(plVar6,plVar1,
                               (ulonglong)*(uint *)(*plVar1 + 0x1c) & *(ulonglong *)(lVar4 + 8)),
        -1 < lVar5)) && (lVar4 = lVar4 + (lVar5 * 3 + 3) * 8, lVar4 != 0)) {
      puVar9 = *(undefined8 **)(lVar4 + 8);
      puVar7 = (undefined8 *)0x0;
      puVar10 = puVar7;
      local_res18 = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          lVar4 = puVar9[1];
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          local_60 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x1d8);
          local_68[0] = 0;
          if (local_60 != 0) {
            *(uint *)(local_60 + 8) = *(int *)(local_60 + 8) + 1U & 0x8fffffff;
          }
          local_58[0] = 10;
          piStack_50 = (int *)0x0;
          uStack_40 = CONCAT44(uStack_6c,uStack_70);
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          local_48 = lVar4;
          FUN_1435aef90(local_68,0);
          piVar2 = (int *)(lVar4 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920(lVar4);
          }
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_res10,local_68,puVar9 + 4);
          puVar3 = (undefined8 *)puVar9[2];
          if (*(char *)(puVar9 + 3) == '\0') {
            (**(code **)*puVar9)(puVar9,1);
          }
          else if (puVar7 == (undefined8 *)0x0) {
            puVar9[2] = 0;
            puVar7 = puVar9;
            puVar10 = puVar9;
          }
          else {
            puVar10[2] = puVar9;
            puVar9[2] = 0;
            puVar10 = puVar9;
          }
          if (9 < ((byte)local_58[0] & 0x1f)) {
            if ((local_58[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_58);
            }
            else {
              *piStack_50 = *piStack_50 + -1;
              if (*piStack_50 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
              local_58[0] = local_58[0] & 0xfffffde0;
              piStack_50 = (int *)0x0;
              local_48 = 0;
              uStack_40 = 0;
            }
          }
          if (((local_60 != 0) && ((local_60 & 1) == 0)) &&
             ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
            FUN_1434ef880();
          }
          puVar9 = puVar3;
        } while (puVar3 != (undefined8 *)0x0);
        if (puVar7 != (undefined8 *)0x0) {
          if (puVar7 == local_res18) {
            return;
          }
          local_res10 = puVar7;
          FUN_1432f2c70(*(longlong *)(param_1 + 0x10) + 0x4c60,plVar1,&local_res10);
          return;
        }
      }
      FUN_143490b30(*(longlong *)(param_1 + 0x10) + 0x4c60,plVar1);
    }
  }
  return;
}



// FUNCTION 1435ee1e0 FUN_1435ee1e0 body=961 status=ok
// SIG undefined FUN_1435ee1e0(void)

void FUN_1435ee1e0(longlong *param_1)

{
  uint *puVar1;
  void *_Dst;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  
  Scaleform::GFx::MovieImpl::ClearPlayList(param_1[2]);
  FUN_1435f4dc0(param_1 + 0x19);
  if ((RefCountNTSImpl *)param_1[0x33] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x33]);
  }
  plVar13 = (longlong *)0x0;
  param_1[0x33] = 0;
  (**(code **)(*param_1 + 0x48))(param_1,2);
  lVar12 = param_1[0x18];
  if (lVar12 != 0) {
    FUN_14360b240(lVar12);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar12);
  }
  puVar1 = (uint *)(param_1 + 0x13);
  param_1[0x18] = 0;
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar1);
    }
    else {
      piVar2 = (int *)param_1[0x14];
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
    }
  }
  *puVar1 = *puVar1 & 0xffffffe0;
  FUN_14360aef0(param_1 + 0x32);
  plVar10 = param_1 + 0x7d;
  lVar12 = 6;
  do {
    FUN_143613430(plVar10 + -3,plVar10 + -3,0);
    if ((RefCountNTSImpl *)*plVar10 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar10);
    }
    *plVar10 = 0;
    plVar10 = plVar10 + 0x1c;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  plVar10 = param_1 + 0x123;
  lVar12 = *plVar10;
  if (lVar12 == 0) {
    plVar9 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)(lVar12 + 0x10);
    plVar9 = plVar13;
    do {
      plVar11 = plVar10;
      if (*plVar7 != -2) break;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
      plVar7 = plVar7 + 3;
    } while (plVar9 <= *(longlong **)(lVar12 + 8));
  }
  do {
    do {
      if (((plVar11 == (longlong *)0x0) || (lVar12 = *plVar11, lVar12 == 0)) ||
         (*(longlong *)(lVar12 + 8) < (longlong)plVar9)) {
        if (*plVar10 != 0) {
          lVar12 = *(longlong *)(*plVar10 + 8) + 1;
          plVar9 = plVar13;
          do {
            if (*(longlong *)((longlong)plVar9 + *plVar10 + 0x10) != -2) {
              *(undefined8 *)((longlong)plVar9 + *plVar10 + 0x10) = 0xfffffffffffffffe;
            }
            plVar9 = plVar9 + 3;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar10);
          *plVar10 = 0;
        }
        lVar12 = param_1[2];
        plVar10 = *(longlong **)(lVar12 + 0x80);
        while( true ) {
          plVar9 = (longlong *)(lVar12 + 0x70);
          if (lVar12 == -0x78) {
            plVar9 = plVar13;
          }
          if (plVar10 == plVar9) break;
          FUN_1435e9860(plVar10);
          FUN_1434f0230(plVar10 + 8,plVar10 + 8);
          plVar10 = (longlong *)plVar10[2];
        }
        (**(code **)(*param_1 + 0x48))(param_1,2);
        lVar12 = param_1[0x11];
        plVar10 = *(longlong **)(lVar12 + 0x20);
        plVar9 = plVar13;
        if (plVar10 != (longlong *)0x0) {
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + (longlong)plVar9 * 8);
            if (lVar3 != 0) {
              uVar4 = *(ulonglong *)(lVar3 + 0x30);
              *(int *)(uVar4 + 0x70) = *(int *)(uVar4 + 0x70) + -1;
              *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
              if (*(longlong **)(uVar4 + 0x60) != (longlong *)0x0) {
                plVar7 = *(longlong **)(uVar4 + 0x58);
                plVar11 = plVar13;
                do {
                  if (*plVar7 == lVar3) {
                    FUN_1435bc990();
                    if (*(longlong *)(uVar4 + 0x60) == 1) {
                      FUN_143613820(uVar4 + 0x58,uVar4 + 0x58,0);
                    }
                    else {
                      uVar5 = *(ulonglong *)(*(longlong *)(uVar4 + 0x58) + (longlong)plVar11 * 8);
                      if (uVar5 != 0) {
                        if ((uVar5 & 1) == 0) {
                          if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
                            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
                            FUN_1434ef880();
                          }
                        }
                        else {
                          *(ulonglong *)(*(longlong *)(uVar4 + 0x58) + (longlong)plVar11 * 8) =
                               uVar5 - 1;
                        }
                      }
                      _Dst = (void *)(*(longlong *)(uVar4 + 0x58) + (longlong)plVar11 * 8);
                      memmove(_Dst,(void *)((longlong)_Dst + 8),
                              (*(longlong *)(uVar4 + 0x60) - (longlong)plVar11) * 8 - 8);
                      *(longlong *)(uVar4 + 0x60) = *(longlong *)(uVar4 + 0x60) + -1;
                    }
                    break;
                  }
                  plVar11 = (longlong *)((longlong)plVar11 + 1);
                  plVar7 = plVar7 + 1;
                } while (plVar11 < *(longlong **)(uVar4 + 0x60));
              }
              if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
                FUN_1434ef880(uVar4);
              }
            }
            plVar9 = (longlong *)((longlong)plVar9 + 1);
          } while (plVar9 < plVar10);
        }
        (**(code **)(*param_1 + 0x48))(param_1,2);
        puVar6 = (undefined8 *)param_1[0x11];
        if (puVar6 != (undefined8 *)0x0) {
          if ((char)param_1[0x12] != '\0') {
            *(undefined1 *)(param_1 + 0x12) = 0;
            (**(code **)*puVar6)(puVar6,1);
          }
          param_1[0x11] = 0;
        }
        *(undefined1 *)(param_1 + 0x12) = 0;
        return;
      }
      lVar12 = *(longlong *)(lVar12 + 0x18 + (longlong)plVar9 * 0x18);
      if (lVar12 != 0) {
        plVar7 = param_1 + 9;
        if (param_1 == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        Scaleform::GFx::MovieDefImpl::RemoveReleaseNotifier(lVar12,plVar7);
      }
      plVar7 = *(longlong **)(*plVar11 + 8);
    } while (((longlong)plVar7 < (longlong)plVar9) ||
            (plVar9 = (longlong *)((longlong)plVar9 + 1), plVar7 < plVar9));
    plVar8 = (longlong *)(*plVar11 + (longlong)plVar9 * 0x18 + 0x10);
    do {
      if (*plVar8 != -2) break;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
      plVar8 = plVar8 + 3;
    } while (plVar9 <= plVar7);
  } while( true );
}



// FUNCTION 1435ee5b0 FUN_1435ee5b0 body=711 status=ok
// SIG undefined FUN_1435ee5b0(void)

void FUN_1435ee5b0(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  switch(uVar1 & 0x8f) {
  case 0:
    FUN_1435168c0(param_3);
    return;
  case 1:
    FUN_1434f0650(param_3);
    return;
  case 2:
    FUN_1434f05f0(param_3,*(undefined1 *)(param_2 + 0x20));
    return;
  case 3:
    FUN_1434f0780(param_3,*(undefined4 *)(param_2 + 0x20));
    return;
  case 4:
    FUN_143614720(param_3,*(undefined4 *)(param_2 + 0x20));
    return;
  case 5:
    FUN_1434f06a0(param_3,(int)*(undefined8 *)(param_2 + 0x20));
    return;
  case 6:
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_143590310(param_3);
      return;
    }
    lVar5 = FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8),*(undefined8 *)(param_2 + 0x20));
LAB_1435ee6f3:
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
    break;
  case 7:
    if ((uVar1 >> 6 & 1) == 0) {
      lVar5 = FUN_143360fd0(*(undefined8 *)(param_1 + 0x3b8),*(undefined8 *)(param_2 + 0x20),
                            0xffffffffffffffff);
      goto LAB_1435ee6f3;
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    lVar5 = *(longlong *)(lVar2 + -8);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    *(undefined1 *)(*(longlong *)(lVar2 + -8) + 0x24) = 1;
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    break;
  case 8:
  case 9:
  case 10:
    FUN_1435903c0(param_3);
    return;
  case 0xb:
    uVar4 = *(ulonglong *)(param_2 + 0x20);
    uVar6 = uVar4 & 0xfffffffffffffffd;
    if (((byte)uVar4 >> 1 & 1) == 0) {
      local_28._0_4_ = 0xd;
      local_18 = *(undefined8 *)(param_2 + 0x28);
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
    }
    else {
      local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)(param_2 + 0x28));
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
      local_28._0_4_ = 0xe;
    }
    uStack_20 = 0;
    uStack_10 = uVar6;
    if ((uint *)&local_28 != param_3) {
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
      FUN_143603d30(param_3);
      *param_3 = (uint)local_28;
      param_3[1] = local_28._4_4_;
      param_3[2] = (uint)uStack_20;
      param_3[3] = uStack_20._4_4_;
      param_3[4] = (uint)local_18;
      param_3[5] = local_18._4_4_;
      param_3[6] = (uint)uStack_10;
      param_3[7] = uStack_10._4_4_;
    }
    if ((((uVar4 & 1) == 0) && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
      FUN_1434ef880(uVar6);
    }
  default:
    goto switchD_1435ee5ee_default;
  }
  if (9 < ((byte)*param_3 & 0x1f)) {
    if ((*param_3 >> 9 & 1) == 0) {
      FUN_1435920c0(param_3);
    }
    else {
      piVar3 = *(int **)(param_3 + 2);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_3 = *param_3 & 0xfffffde0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
  }
  *param_3 = *param_3 & 0xffffffea;
  *param_3 = *param_3 | 10;
  local_28._0_4_ = (uint)lVar5;
  local_28._4_4_ = (uint)((ulonglong)lVar5 >> 0x20);
  param_3[4] = (uint)local_28;
  param_3[5] = local_28._4_4_;
  param_3[6] = (uint)uStack_20;
  param_3[7] = uStack_20._4_4_;
  piVar3 = (int *)(lVar5 + 0x18);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    local_28 = lVar5;
    FUN_14335f920(lVar5);
    return;
  }
switchD_1435ee5ee_default:
  return;
}



// FUNCTION 1435ee8b0 FUN_1435ee8b0 body=949 status=ok
// SIG undefined FUN_1435ee8b0(void)

void FUN_1435ee8b0(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  RefCountImpl *this;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  RefCountImpl *pRVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  char local_res18 [8];
  longlong local_res20;
  
  this = (RefCountImpl *)0x0;
  iVar5 = 0;
  uVar2 = *(uint *)(param_3 + 0x18);
  pRVar12 = (RefCountImpl *)0x0;
  uVar13 = 8;
  if ((char)uVar2 < '\0') {
    uVar10 = uVar2 & 0xf;
  }
  else {
    uVar9 = *param_2 & 0x1f;
    switch(uVar9) {
    case 0:
      uVar10 = 0;
      break;
    case 1:
      uVar10 = 2;
      break;
    case 2:
      uVar10 = 3;
      break;
    case 3:
      uVar10 = 4;
      break;
    case 4:
      uVar10 = 5;
      break;
    default:
      pRVar12 = this;
      uVar10 = 6;
      break;
    case 0xc:
      uVar10 = 1;
      if (*(longlong *)(param_2 + 4) != 0) {
        uVar10 = uVar13;
      }
      break;
    case 0xd:
      uVar10 = 1;
      if (*(longlong *)(param_2 + 6) != 0) {
        uVar10 = 0xb;
      }
      break;
    case 0xe:
      pRVar12 = (RefCountImpl *)0x1;
      uVar10 = 1;
      if (*(longlong *)(param_2 + 6) != 0) {
        uVar10 = 0xb;
      }
    }
    iVar5 = (int)pRVar12;
    if (uVar9 == 0xc) {
      bVar14 = *(longlong *)(param_2 + 4) == 0;
    }
    else {
      if (uVar9 != 10) goto LAB_1435ee992;
      bVar14 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
    }
    if (bVar14) {
      uVar10 = 1;
    }
  }
LAB_1435ee992:
  if ((uVar2 >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))(*(longlong **)(param_3 + 0x10),param_3);
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  switch(uVar10) {
  case 0:
  case 1:
    *(uint *)(param_3 + 0x18) = uVar10;
    break;
  case 2:
    *(undefined4 *)(param_3 + 0x18) = 2;
    *(char *)(param_3 + 0x20) = (char)param_2[4];
    break;
  case 3:
    *(undefined4 *)(param_3 + 0x18) = 3;
    pcVar6 = (char *)FUN_143590b70(param_2,local_res18,param_3 + 0x20);
    goto LAB_1435ee9fd;
  case 4:
    *(undefined4 *)(param_3 + 0x18) = 4;
    pcVar6 = (char *)FUN_143590eb0(param_2,local_res18,param_3 + 0x20);
LAB_1435ee9fd:
    if (*pcVar6 == '\0') {
LAB_1435eea06:
      FUN_1435cc020(*(undefined8 *)(param_1 + 0x88));
      uVar15 = Scaleform::GFx::NumberUtil::NaN();
      *(undefined8 *)(param_3 + 0x20) = uVar15;
    }
    break;
  case 5:
    *(undefined4 *)(param_3 + 0x18) = 5;
    FUN_14360f380(param_2,local_res18,&local_res20);
    if (local_res18[0] != '\0') {
      *(longlong *)(param_3 + 0x20) = local_res20;
      return;
    }
    goto LAB_1435eea06;
  case 6:
    local_res20 = **(longlong **)(*(longlong *)(param_1 + 0x88) + 0x10);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    pcVar6 = (char *)FUN_1435911f0(param_2,local_res18,&local_res20);
    if (*pcVar6 == '\0') {
      FUN_1435cc020(*(undefined8 *)(param_1 + 0x88));
    }
    *(longlong *)(param_3 + 0x20) = local_res20;
    *(undefined4 *)(param_3 + 0x18) = 0x46;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    (**(code **)(*plVar3 + 8))(plVar3,param_3);
    goto LAB_1435eead1;
  case 7:
    local_res20 = **(longlong **)(*(longlong *)(param_1 + 0x88) + 0x10);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    pcVar6 = (char *)FUN_1435911f0(param_2,local_res18,&local_res20);
    if (*pcVar6 == '\0') {
      FUN_1435cc020(*(undefined8 *)(param_1 + 0x88));
    }
    lVar8 = local_res20;
    iVar5 = FUN_14335fa60(&local_res20);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,(ulonglong)(iVar5 + 1U) * 2 + 0x1f,0);
    *(undefined4 *)(param_3 + 0x18) = 0x47;
    if (lVar7 != 0) {
      this = (RefCountImpl *)FUN_143497440(lVar7,lVar8,iVar5 + 1U);
    }
    *(RefCountImpl **)(param_3 + 0x20) = this + 0x18;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    (**(code **)(*plVar3 + 8))(plVar3,param_3);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
LAB_1435eead1:
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    break;
  case 8:
    uVar11 = *(ulonglong *)(param_2 + 4);
    cVar4 = FUN_14360e0e0(uVar11);
    if (cVar4 == '\0') {
      if ((*(int *)(*(longlong *)(uVar11 + 0x28) + 0x90) == 7) &&
         ((~(*(byte *)(*(longlong *)(uVar11 + 0x28) + 0x88) >> 5) & 1) != 0)) {
        uVar13 = 9;
      }
      *(ulonglong *)(param_3 + 0x20) = uVar11;
      *(uint *)(param_3 + 0x18) = uVar13 | 0x40;
    }
    else {
      *(ulonglong *)(param_3 + 0x20) = uVar11;
      *(undefined4 *)(param_3 + 0x18) = 0x4a;
    }
    goto LAB_1435eec33;
  case 0xb:
    uVar11 = *(ulonglong *)(param_2 + 6);
    *(undefined4 *)(param_3 + 0x18) = 0x4b;
    uVar11 = -(uint)(iVar5 != 0) & 2 | uVar11;
    *(ulonglong *)(param_3 + 0x20) = uVar11;
    if (iVar5 == 0) {
      lVar8 = *(longlong *)(param_2 + 4);
    }
    else {
      lVar8 = (longlong)(int)param_2[4];
    }
    *(longlong *)(param_3 + 0x28) = lVar8;
LAB_1435eec33:
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    (**(code **)(*plVar3 + 8))(plVar3,param_3,uVar11);
  }
  return;
}



// FUNCTION 1435eece0 FUN_1435eece0 body=189 status=ok
// SIG undefined FUN_1435eece0(void)

undefined8 FUN_1435eece0(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((*(uint *)(param_4 + 8) & 0x3fffff) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x28) + 0x90);
    if ((iVar1 - 0x18U < 0xc) &&
       ((~(*(byte *)(*(longlong *)(param_4 + 0x28) + 0x88) >> 5) & 1) != 0)) {
      uVar3 = 10;
    }
    else {
      uVar3 = 8;
      if (iVar1 == 7) {
        uVar3 = 9;
      }
    }
    if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
                (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    *(longlong *)(param_2 + 0x20) = param_4;
    *(uint *)(param_2 + 0x18) = uVar3 | 0x40;
    *(longlong **)(param_2 + 0x10) = param_3;
    (**(code **)(*param_3 + 8))(param_3,param_2,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1435eedb0 FUN_1435eedb0 body=244 status=ok
// SIG undefined FUN_1435eedb0(void)

void FUN_1435eedb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  uVar3 = FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8),param_3);
  local_28[0] = 10;
  local_20 = (int *)0x0;
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 2;
  local_18 = uVar3;
  FUN_1435ee8b0(param_1,local_28,param_2);
  uVar2 = local_28[0] & 0x1f;
  if (9 < uVar2) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        uVar4 = local_18;
        if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (uVar4 = local_10, uVar2 - 0xd < 2)) &&
           ((((uVar4 & 1) == 0 && (uVar4 != 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  return;
}



// FUNCTION 1435eeeb0 FUN_1435eeeb0 body=295 status=ok
// SIG undefined FUN_1435eeeb0(void)

void FUN_1435eeeb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  uVar3 = FUN_143360fd0(*(undefined8 *)(param_1 + 0x3b8),param_3,0xffffffffffffffff);
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
              (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x87;
  local_28[0] = 10;
  local_20 = (int *)0x0;
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  local_18 = uVar3;
  FUN_1435ee8b0(param_1,local_28,param_2);
  uVar2 = local_28[0] & 0x1f;
  if (9 < uVar2) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        uVar4 = local_18;
        if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (uVar4 = local_10, uVar2 - 0xd < 2)) &&
           ((((uVar4 & 1) == 0 && (uVar4 != 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  return;
}



// FUNCTION 1435eefe0 FUN_1435eefe0 body=864 status=ok
// SIG undefined FUN_1435eefe0(void)

void FUN_1435eefe0(longlong param_1,undefined8 param_2,char *param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_278 [2];
  int *local_270;
  ulonglong local_268;
  ulonglong local_260;
  undefined4 local_258 [140];
  
  uVar5 = param_5;
  uVar12 = (ulonglong)param_5;
  if (param_5 < 0xb) {
    puVar6 = local_258;
  }
  else {
    puVar6 = (undefined4 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)param_5 << 5,0);
  }
  puVar9 = puVar6;
  uVar11 = uVar12;
  if (uVar5 != 0) {
    do {
      puVar7 = (undefined4 *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0;
        *(undefined8 *)(puVar9 + 2) = 0;
        puVar7 = puVar9;
      }
      FUN_1435ee5b0(param_1,param_4,puVar7);
      param_4 = param_4 + 0x30;
      uVar11 = uVar11 - 1;
      puVar9 = puVar9 + 8;
    } while (uVar11 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  local_278[0] = 0;
  local_270 = (int *)0x0;
  if (*(longlong *)(lVar1 + 0x108) == 0) {
    if ((DAT_1467d97e8 == '\0') || (lVar13 = *(longlong *)(lVar1 + 0x1d0), lVar13 == 0)) {
      lVar13 = *(longlong *)(lVar1 + 0x1c8);
    }
  }
  else {
    uVar11 = *(longlong *)(lVar1 + 0x108) - 1;
    lVar13 = *(longlong *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x120) + (uVar11 >> 6) * 8) + 0x18 +
                (ulonglong)((uint)uVar11 & 0x3f) * 0xa0) + 0x30);
  }
  pcVar8 = "Object";
  if (param_3 != (char *)0x0) {
    pcVar8 = param_3;
  }
  param_5 = uVar5;
  cVar3 = FUN_1435ccb40(lVar1,pcVar8,lVar13,local_278,&param_5,puVar6);
  if (*(char *)(lVar1 + 0xb8) == '\0') {
    if (cVar3 != '\0') {
      FUN_1435c8f90(lVar1,1);
    }
    if (*(char *)(lVar1 + 0xb8) == '\0') goto LAB_1435ef171;
  }
  printf("Exception in CreateObject(\"%s\"):\n\t",param_3);
  FUN_1435cc020(*(undefined8 *)(param_1 + 0x88));
LAB_1435ef171:
  FUN_1435ee8b0(param_1,local_278,param_2);
  if (uVar5 != 0) {
    puVar10 = (ulonglong *)(puVar6 + 4);
    do {
      uVar4 = (uint)puVar10[-2] & 0x1f;
      if (9 < uVar4) {
        if (((uint)puVar10[-2] >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            piVar2 = (int *)(*puVar10 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
            uVar11 = *puVar10;
            if ((uVar11 & 1) == 0) {
LAB_1435ef22e:
              if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *puVar10 = uVar11 - 1;
            }
          }
          else if (uVar4 - 0xd < 2) {
            uVar11 = puVar10[1];
            if ((uVar11 & 1) == 0) goto LAB_1435ef22e;
            puVar10[1] = uVar11 - 1;
          }
        }
        else {
          piVar2 = (int *)puVar10[-1];
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(uint *)(puVar10 + -2) = (uint)puVar10[-2] & 0xfffffde0;
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
        }
      }
      puVar10 = puVar10 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (10 < uVar5) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar6);
  }
  uVar5 = local_278[0] & 0x1f;
  if (9 < uVar5) {
    if ((local_278[0] >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar2 = (int *)(local_268 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar5 == 0xb) || (uVar5 == 0xc)) || (local_268 = local_260, uVar5 - 0xd < 2)) &&
              ((((local_268 & 1) == 0 && (local_268 != 0)) &&
               ((*(uint *)(local_268 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(local_268 + 8) = *(uint *)(local_268 + 8) - 1;
        FUN_1434ef880();
        return;
      }
    }
    else {
      *local_270 = *local_270 + -1;
      if (*local_270 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435ef350 FUN_1435ef350 body=356 status=ok
// SIG undefined FUN_1435ef350(void)

void FUN_1435ef350(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  int *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x248) + 0xd8);
  lVar5 = *(longlong *)(lVar2 + 0xa0);
  if (lVar5 == 0) {
    local_res8[0] = 0x152;
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + 0x48);
    lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(lVar2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar5 + 0x28);
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1434b64a0(lVar5,lVar2);
  }
  local_38 = (undefined4)uVar6;
  uStack_34 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_20 = (int *)0x0;
  local_28[0] = 0xc;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  FUN_1435ee8b0(param_1,local_28,param_2);
  uVar4 = local_28[0] & 0x1f;
  if (9 < uVar4) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_14,local_18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
          uVar7 = CONCAT44(uStack_14,local_18);
        }
        else {
          if (1 < uVar4 - 0xd) {
            return;
          }
          uVar7 = CONCAT44(uStack_c,uStack_10);
        }
        if ((((uVar7 & 1) == 0) && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
          return;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435ef4c0 FUN_1435ef4c0 body=364 status=ok
// SIG undefined FUN_1435ef4c0(void)

void FUN_1435ef4c0(longlong param_1,undefined8 param_2,RefCountImpl *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  int *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x58);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_1434afa90(puVar4,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x218) + 0xd8));
    *puVar4 = &PTR_FUN_145b4d780;
    puVar4[9] = 0;
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    if ((RefCountImpl *)puVar4[9] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)puVar4[9]);
    }
    puVar4[9] = param_3;
    puVar4[10] = param_4;
  }
  local_38 = SUB84(puVar4,0);
  uStack_34 = (undefined4)((ulonglong)puVar4 >> 0x20);
  local_20 = (int *)0x0;
  local_28[0] = 0xc;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  FUN_1435ee8b0(param_1,local_28,param_2);
  uVar3 = local_28[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_14,local_18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar5 = CONCAT44(uStack_14,local_18);
        }
        else {
          if (1 < uVar3 - 0xd) {
            return;
          }
          uVar5 = CONCAT44(uStack_c,uStack_10);
        }
        if ((((uVar5 & 1) == 0) && (uVar5 != 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435ef640 FUN_1435ef640 body=270 status=ok
// SIG undefined FUN_1435ef640(void)

bool FUN_1435ef640(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
              (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  cVar2 = FUN_1435f3560(param_1,local_28,param_3);
  if (cVar2 != '\0') {
    FUN_1435ee8b0(param_1,local_28,param_2);
  }
  uVar3 = local_28[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar3 == 0xb) || (uVar3 == 0xc)) || (local_18 = local_10, uVar3 - 0xd < 2)) &&
              ((((local_18 & 1) == 0 && (local_18 != 0)) &&
               ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return cVar2 != '\0';
}



// FUNCTION 1435ef760 FUN_1435ef760 body=1150 status=ok
// SIG undefined FUN_1435ef760(void)

char FUN_1435ef760(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong local_res8;
  undefined8 *local_c8;
  uint local_c0 [2];
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0 [2];
  ulonglong local_98;
  uint local_90;
  undefined4 uStack_8c;
  int *piStack_88;
  longlong local_80;
  undefined8 uStack_78;
  uint local_70 [2];
  int *local_68;
  byte local_60;
  undefined7 uStack_5f;
  byte local_58;
  undefined7 uStack_57;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_c8 = *(undefined8 **)(param_1 + 0x1a0);
  *(int *)(local_c8 + 3) = *(int *)(local_c8 + 3) + 1;
  local_res8 = *(longlong *)(param_1 + 0x1a0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = FUN_1435f3450(param_1,param_2,&local_c8,&local_res8);
  lVar7 = local_res8;
  if (cVar5 == '\0') {
    lVar7 = FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8),param_2);
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(lVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar7);
    }
    puVar8 = (undefined8 *)FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8),&DAT_145b22a58);
    *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 2;
    piVar1 = (int *)(local_c8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(puVar8 + 3);
    *piVar1 = *piVar1 + -1;
    local_c8 = puVar8;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar8);
    }
  }
  local_70[0] = 0;
  local_68 = (int *)0x0;
  cVar5 = FUN_1435f3560(param_1,local_70,*local_c8);
  plVar3 = (longlong *)CONCAT71(uStack_5f,local_60);
  if (cVar5 == '\0') {
    cVar5 = '\0';
    goto LAB_1435efb02;
  }
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  local_50 = 10;
  uStack_48 = 0;
  local_98 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x1d8);
  local_a0[0] = 0;
  if (local_98 != 0) {
    *(uint *)(local_98 + 8) = *(int *)(local_98 + 8) + 1U & 0x8fffffff;
  }
  local_90 = 10;
  uStack_8c = uStack_4c;
  piStack_88 = (int *)0x0;
  uStack_78 = CONCAT44(uStack_34,uStack_38);
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  local_80 = lVar7;
  local_40 = lVar7;
  FUN_1435aef90(local_a0,0);
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  local_c0[0] = 0;
  local_b8 = (int *)0x0;
  FUN_1435ee5b0(param_1,param_3,local_c0);
  pcVar9 = (char *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_res8,local_a0,local_c0);
  cVar5 = *pcVar9;
  if ((((cVar5 == '\0') && (param_4 != 0)) || (param_4 == 2)) &&
     ((*(int *)(lVar7 + 0x20) != 0 &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48),
      puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x40), puVar8 != (undefined8 *)0x0
      )))) {
    *puVar8 = &PTR_FUN_145b0ab20;
    puVar8[1] = lVar7;
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
    *puVar8 = &PTR_FUN_145b4c4a0;
    puVar8[2] = 0;
    *(bool *)(puVar8 + 3) = param_4 == 2;
    *(uint *)(puVar8 + 4) = local_c0[0];
    puVar8[5] = local_b8;
    *(undefined4 *)(puVar8 + 6) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_b0._4_4_;
    *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_a8;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_a8._4_4_;
    uVar6 = local_c0[0] & 0x1f;
    if (9 < uVar6) {
      if ((local_c0[0] >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          *(int *)(uStack_b0 + 0x18) = *(int *)(uStack_b0 + 0x18) + 1;
        }
        else if (((10 < uVar6) &&
                 ((uVar10 = uStack_b0, uVar6 < 0xd || (uVar10 = uStack_a8, uVar6 < 0xf)))) &&
                (uVar10 != 0)) {
          *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
          *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) & 0x8fffffff;
        }
      }
      else {
        *local_b8 = *local_b8 + 1;
      }
    }
    FUN_1432e77e0(*(undefined8 *)(param_1 + 0x10),&local_c8);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0xb8) != '\0') {
    FUN_1435cc020();
  }
  uVar6 = local_c0[0] & 0x1f;
  if (9 < uVar6) {
    if ((local_c0[0] >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)(uStack_b0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
        uVar10 = uStack_b0;
        if ((uStack_b0 & 1) == 0) {
LAB_1435efa65:
          if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          uStack_b0 = uStack_b0 - 1;
        }
      }
      else if (uVar6 - 0xd < 2) {
        uVar10 = uStack_a8;
        if ((uStack_a8 & 1) == 0) goto LAB_1435efa65;
        uStack_a8 = uStack_a8 - 1;
      }
    }
    else {
      *local_b8 = *local_b8 + -1;
      if (*local_b8 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_c0[0] = local_c0[0] & 0xfffffde0;
      local_b8 = (int *)0x0;
      uStack_b0 = 0;
      uStack_a8 = 0;
    }
  }
  if (9 < ((byte)local_90 & 0x1f)) {
    if ((local_90 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_90);
    }
    else {
      *piStack_88 = *piStack_88 + -1;
      if (*piStack_88 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_90 = local_90 & 0xfffffde0;
      piStack_88 = (int *)0x0;
      local_80 = 0;
      uStack_78 = 0;
    }
  }
  if (local_98 != 0) {
    if ((local_98 & 1) == 0) {
      if ((*(uint *)(local_98 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_98 + 8) = *(uint *)(local_98 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_98 = local_98 - 1;
    }
  }
LAB_1435efb02:
  uVar6 = local_70[0] & 0x1f;
  if (9 < uVar6) {
    if ((local_70[0] >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        plVar2 = plVar3 + 3;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          FUN_14335f920(plVar3);
        }
      }
      else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
        if (((local_60 & 1) == 0) &&
           ((plVar3 != (longlong *)0x0 && ((*(uint *)(plVar3 + 1) & 0x3fffff) != 0)))) {
          *(uint *)(plVar3 + 1) = *(uint *)(plVar3 + 1) - 1;
          FUN_1434ef880(plVar3);
        }
      }
      else if ((((uVar6 - 0xd < 2) && ((local_58 & 1) == 0)) &&
               (lVar4 = CONCAT71(uStack_57,local_58), lVar4 != 0)) &&
              ((*(uint *)(lVar4 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_68 = *local_68 + -1;
      if (*local_68 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  piVar1 = (int *)(local_c8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return cVar5;
}



// FUNCTION 1435efbf0 FUN_1435efbf0 body=1270 status=ok
// SIG undefined FUN_1435efbf0(void)

undefined8
FUN_1435efbf0(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,float *param_5,
             uint param_6)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong local_58;
  uint local_50 [2];
  int *local_48;
  byte local_40;
  undefined7 uStack_3f;
  byte local_38;
  undefined7 uStack_37;
  
  uVar15 = 0;
  uVar8 = 0;
  local_50[0] = 0;
  local_48 = (int *)0x0;
  cVar6 = FUN_1435f3560(param_1,local_50);
  if ((((cVar6 == '\0') || (((byte)local_50[0] & 0x1f) != 0xc)) ||
      (lVar18 = CONCAT71(uStack_3f,local_40), lVar18 == 0)) ||
     ((*(int *)(*(longlong *)(lVar18 + 0x28) + 0x90) != 7 ||
      ((~(*(byte *)(*(longlong *)(lVar18 + 0x28) + 0x88) >> 5) & 1) == 0)))) {
    uVar14 = 0;
  }
  else {
    lVar9 = FUN_1432ecc50(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(lVar9 + 0x30) = 0;
    FUN_1434a3ec0(lVar9,0);
    uVar2 = *(uint *)(lVar18 + 0x40);
    lVar18 = lVar18 + 0x40;
    switch(param_2) {
    case 0:
      uVar16 = param_6;
      if (uVar2 < param_6) {
        uVar16 = uVar2;
      }
      pfVar12 = param_5;
      if (uVar16 != 0) {
        do {
          pbVar10 = (byte *)FUN_1434b4f50(lVar18,(int)uVar15 + param_4);
          if ((*pbVar10 & 0x1f) == 0) {
            *pfVar12 = 0.0;
          }
          else {
            *pfVar12 = *(float *)(pbVar10 + 0x10);
          }
          uVar19 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar19;
          pfVar12 = pfVar12 + 1;
        } while (uVar19 < uVar16);
      }
    case 2:
      if (uVar2 < param_6) {
        param_6 = uVar2;
      }
      if (param_6 != 0) {
        do {
          pbVar10 = (byte *)FUN_1434b4f50(lVar18,uVar8 + param_4);
          if ((*pbVar10 & 0x1f) == 0) {
            *param_5 = 0.0;
          }
          else {
            *param_5 = (float)*(double *)(pbVar10 + 0x10);
          }
          uVar8 = uVar8 + 1;
          param_5 = param_5 + 1;
        } while (uVar8 < param_6);
      }
      break;
    case 1:
      if (uVar2 < param_6) {
        param_6 = uVar2;
      }
      if (param_6 != 0) {
        do {
          pbVar10 = (byte *)FUN_1434b4f50(lVar18,param_4 + (int)uVar15);
          if ((*pbVar10 & 0x1f) == 0) {
            param_5[0] = 0.0;
            param_5[1] = 0.0;
          }
          else {
            *(undefined8 *)param_5 = *(undefined8 *)(pbVar10 + 0x10);
          }
          uVar8 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar8;
          param_5 = param_5 + 2;
        } while (uVar8 < param_6);
      }
      break;
    case 3:
      if (uVar2 < param_6) {
        param_6 = uVar2;
      }
      FUN_1434a3ec0(lVar9,param_6);
      if (param_6 != 0) {
        do {
          pbVar10 = (byte *)FUN_1434b4f50(lVar18,param_4 + (int)uVar15);
          if ((*pbVar10 & 0x1f) == 0) {
            param_5[0] = 0.0;
            param_5[1] = 0.0;
          }
          else {
            puVar3 = *(undefined8 **)(pbVar10 + 0x10);
            *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
            *(undefined8 *)param_5 = *puVar3;
            uVar8 = *(uint *)(lVar9 + 0x30);
            *(uint *)(lVar9 + 0x30) = uVar8 + 1;
            lVar4 = *(longlong *)(lVar9 + 0x10);
            *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
            piVar1 = (int *)(*(longlong *)(lVar4 + (ulonglong)uVar8 * 8) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            *(undefined8 **)(lVar4 + (ulonglong)uVar8 * 8) = puVar3;
            piVar1 = (int *)(puVar3 + 3);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(puVar3);
            }
          }
          uVar8 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar8;
          param_5 = param_5 + 2;
        } while (uVar8 < param_6);
      }
      break;
    case 4:
      if (uVar2 < param_6) {
        param_6 = uVar2;
      }
      FUN_1434a3ec0(lVar9,param_6);
      uVar17 = uVar15;
      uVar16 = uVar8;
      if (uVar2 != 0) {
        do {
          pbVar10 = (byte *)FUN_1434b4f50(lVar18,uVar8 + param_4);
          if ((*pbVar10 & 0x1f) != 0) {
            lVar4 = *(longlong *)(pbVar10 + 0x10);
            *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
            lVar5 = *(longlong *)(lVar9 + 0x10);
            *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
            piVar1 = (int *)(*(longlong *)(uVar15 + lVar5) + 0x18);
            *piVar1 = *piVar1 + -1;
            local_58 = lVar4;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            *(longlong *)(uVar15 + lVar5) = lVar4;
            iVar7 = FUN_14335fa60(&local_58);
            uVar17 = (ulonglong)(uint)((int)uVar17 + iVar7 + 1);
            piVar1 = (int *)(local_58 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          uVar16 = (uint)uVar17;
          uVar8 = uVar8 + 1;
          uVar15 = uVar15 + 8;
        } while (uVar8 < uVar2);
      }
      lVar18 = 0;
      puVar11 = (undefined2 *)FUN_1434a2680(lVar9,uVar16 * 2);
      if (param_6 != 0) {
        uVar15 = (ulonglong)param_6;
        do {
          local_58 = **(longlong **)(lVar18 + *(longlong *)(lVar9 + 0x10));
          puVar13 = puVar11;
          while (iVar7 = FUN_143307250(&local_58), iVar7 != 0) {
            *puVar13 = (short)iVar7;
            puVar13 = puVar13 + 1;
          }
          local_58 = local_58 + -1;
          *puVar13 = 0;
          *(undefined2 **)(lVar18 + (longlong)param_5) = puVar11;
          lVar18 = lVar18 + 8;
          uVar15 = uVar15 - 1;
          puVar11 = puVar13 + 1;
        } while (uVar15 != 0);
      }
      FUN_1434a3ec0(lVar9,0);
      break;
    case 5:
      if (uVar2 < param_6) {
        param_6 = uVar2;
      }
      if (param_6 != 0) {
        do {
          pbVar10 = (byte *)FUN_1434b4f50(lVar18,param_4 + (int)uVar15);
          FUN_142055bf0(param_5);
          if ((*pbVar10 & 0x1f) == 0) {
            FUN_142055bf0(param_5);
          }
          else {
            FUN_1435ee8b0(param_1,pbVar10,param_5);
          }
          uVar8 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar8;
          param_5 = param_5 + 0xc;
        } while (uVar8 < param_6);
      }
    }
    uVar14 = 1;
  }
  uVar8 = local_50[0] & 0x1f;
  if (9 < uVar8) {
    if ((local_50[0] >> 9 & 1) == 0) {
      if (uVar8 == 10) {
        piVar1 = (int *)(CONCAT71(uStack_3f,local_40) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(CONCAT71(uStack_3f,local_40));
        }
      }
      else {
        if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
          if ((local_40 & 1) != 0) {
            return uVar14;
          }
          lVar18 = CONCAT71(uStack_3f,local_40);
        }
        else {
          if (1 < uVar8 - 0xd) {
            return uVar14;
          }
          if ((local_38 & 1) != 0) {
            return uVar14;
          }
          lVar18 = CONCAT71(uStack_37,local_38);
        }
        if ((lVar18 != 0) && ((*(uint *)(lVar18 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar18 + 8) = *(uint *)(lVar18 + 8) - 1;
          FUN_1434ef880();
          return uVar14;
        }
      }
    }
    else {
      *local_48 = *local_48 + -1;
      if (*local_48 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar14;
      }
    }
  }
  return uVar14;
}



// FUNCTION 1435f0110 FUN_1435f0110 body=225 status=ok
// SIG undefined FUN_1435f0110(void)

undefined4 FUN_1435f0110(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint local_28 [2];
  int *local_20;
  byte local_18;
  undefined7 uStack_17;
  byte local_10;
  undefined7 uStack_f;
  
  uVar5 = 0;
  local_28[0] = 0;
  local_20 = (int *)0x0;
  cVar2 = FUN_1435f3560(param_1,local_28,param_2);
  lVar4 = CONCAT71(uStack_17,local_18);
  if ((((cVar2 != '\0') && (lVar4 != 0)) && (*(int *)(*(longlong *)(lVar4 + 0x28) + 0x90) == 7)) &&
     (uVar5 = 0, (~(*(byte *)(*(longlong *)(lVar4 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    uVar5 = *(undefined4 *)(lVar4 + 0x40);
  }
  uVar3 = local_28[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          if ((local_18 & 1) != 0) {
            return uVar5;
          }
        }
        else {
          if (1 < uVar3 - 0xd) {
            return uVar5;
          }
          if ((local_10 & 1) != 0) {
            return uVar5;
          }
          lVar4 = CONCAT71(uStack_f,local_10);
        }
        if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) - 1;
          FUN_1434ef880();
          return uVar5;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar5;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1435f0200 FUN_1435f0200 body=2325 status=ok
// SIG undefined FUN_1435f0200(void)

undefined1
FUN_1435f0200(longlong *param_1,undefined4 param_2,undefined8 param_3,int param_4,double *param_5,
             uint param_6,undefined4 param_7)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint local_d8 [2];
  int *local_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [2];
  double local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0 [2];
  int *local_98;
  byte local_90;
  undefined7 uStack_8f;
  byte local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  uint local_68;
  undefined8 local_60;
  
  dVar13 = 0.0;
  local_b0 = 0.0;
  local_a0[0] = 0;
  local_98 = (int *)0x0;
  cVar6 = FUN_1435f3560(param_1,local_a0);
  dVar11 = (double)CONCAT71(uStack_8f,local_90);
  dVar12 = 0.0;
  if ((((cVar6 != '\0') && (dVar12 = dVar13, ((byte)local_a0[0] & 0x1f) == 0xc)) && (dVar11 != 0.0))
     && ((*(int *)(*(longlong *)((longlong)dVar11 + 0x28) + 0x90) == 7 &&
         ((~(*(byte *)(*(longlong *)((longlong)dVar11 + 0x28) + 0x88) >> 5) & 1) != 0)))) {
    *(uint *)((longlong)dVar11 + 8) = *(int *)((longlong)dVar11 + 8) + 1U & 0x8fffffff;
    dVar12 = dVar11;
    local_b0 = dVar11;
  }
  bVar5 = true;
  if (dVar12 == 0.0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1[0x11] + 0x248) + 0xd8);
    lVar10 = *(longlong *)(lVar3 + 0xa0);
    if (lVar10 == 0) {
      local_b8[0] = 0x152;
      plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x98) + 0x48);
      lVar10 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(lVar3 + 0x80),local_b8);
    }
    else {
      *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar10 + 0x28);
    }
    if ((lVar10 != 0) &&
       (dVar13 = (double)FUN_1434b64a0(lVar10,lVar3), local_b0 = dVar12, dVar13 != 0.0)) {
      dVar12 = dVar13;
      local_b0 = dVar13;
    }
    bVar5 = false;
  }
  puVar1 = (uint *)((longlong)dVar12 + 0x40);
  if (*puVar1 < param_4 + param_6) {
    FUN_1434b4900(puVar1,param_4 + param_6);
  }
  switch(param_2) {
  case 0:
    uVar9 = 0;
    if (param_6 != 0) {
      do {
        dStack_c8 = (double)CONCAT44(dStack_c8._4_4_,*(float *)param_5);
        local_d8[0] = 2;
        local_d0 = (int *)0x0;
        FUN_1434b4fe0(puVar1,uVar9 + param_4,local_d8);
        uVar8 = local_d8[0] & 0x1f;
        if (9 < uVar8) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            if (uVar8 == 10) {
              piVar2 = (int *)((longlong)dStack_c8 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_14335f920();
              }
            }
            else {
              dVar13 = dStack_c8;
              if ((((uVar8 == 0xb) || (uVar8 == 0xc)) || (dVar13 = uStack_c0, uVar8 - 0xd < 2)) &&
                 (((((ulonglong)dVar13 & 1) == 0 && (dVar13 != 0.0)) &&
                  ((*(uint *)((longlong)dVar13 + 8) & 0x3fffff) != 0)))) {
                *(uint *)((longlong)dVar13 + 8) = *(uint *)((longlong)dVar13 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *local_d0 = *local_d0 + -1;
            if (*local_d0 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        uVar9 = uVar9 + 1;
        param_5 = (double *)((longlong)param_5 + 4);
      } while (uVar9 < param_6);
    }
    break;
  case 1:
    uVar9 = 0;
    if (param_6 != 0) {
      do {
        dStack_c8 = *param_5;
        local_d8[0] = 4;
        local_d0 = (int *)0x0;
        FUN_1434b4fe0(puVar1,uVar9 + param_4,local_d8);
        uVar8 = local_d8[0] & 0x1f;
        if (9 < uVar8) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            if (uVar8 == 10) {
              piVar2 = (int *)((longlong)dStack_c8 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_14335f920();
              }
            }
            else {
              dVar13 = dStack_c8;
              if ((((uVar8 == 0xb) || (uVar8 == 0xc)) || (dVar13 = uStack_c0, uVar8 - 0xd < 2)) &&
                 (((((ulonglong)dVar13 & 1) == 0 && (dVar13 != 0.0)) &&
                  ((*(uint *)((longlong)dVar13 + 8) & 0x3fffff) != 0)))) {
                *(uint *)((longlong)dVar13 + 8) = *(uint *)((longlong)dVar13 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *local_d0 = *local_d0 + -1;
            if (*local_d0 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        uVar9 = uVar9 + 1;
        param_5 = param_5 + 1;
      } while (uVar9 < param_6);
    }
    break;
  case 2:
    uVar9 = 0;
    if (param_6 != 0) {
      do {
        dStack_c8 = (double)*(float *)param_5;
        local_d8[0] = 4;
        local_d0 = (int *)0x0;
        FUN_1434b4fe0(puVar1,uVar9 + param_4,local_d8);
        uVar8 = local_d8[0] & 0x1f;
        if (9 < uVar8) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            if (uVar8 == 10) {
              piVar2 = (int *)((longlong)dStack_c8 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_14335f920();
              }
            }
            else {
              dVar13 = dStack_c8;
              if ((((uVar8 == 0xb) || (uVar8 == 0xc)) || (dVar13 = uStack_c0, uVar8 - 0xd < 2)) &&
                 (((((ulonglong)dVar13 & 1) == 0 && (dVar13 != 0.0)) &&
                  ((*(uint *)((longlong)dVar13 + 8) & 0x3fffff) != 0)))) {
                *(uint *)((longlong)dVar13 + 8) = *(uint *)((longlong)dVar13 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *local_d0 = *local_d0 + -1;
            if (*local_d0 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        uVar9 = uVar9 + 1;
        param_5 = (double *)((longlong)param_5 + 4);
      } while (uVar9 < param_6);
    }
    break;
  case 3:
    uVar9 = 0;
    if (param_6 == 0) break;
    do {
      dVar11 = (double)FUN_143360a60(param_1[0x77],*param_5);
      *(int *)((longlong)dVar11 + 0x18) = *(int *)((longlong)dVar11 + 0x18) + 1;
      local_d8[0] = 10;
      local_d0 = (int *)0x0;
      *(int *)((longlong)dVar11 + 0x18) = *(int *)((longlong)dVar11 + 0x18) + 1;
      dStack_c8 = dVar11;
      FUN_1434b4fe0(puVar1,uVar9 + param_4,local_d8);
      uVar8 = local_d8[0] & 0x1f;
      if (9 < uVar8) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          if (uVar8 == 10) {
            piVar2 = (int *)((longlong)dStack_c8 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
            dVar12 = dStack_c8;
            if (((ulonglong)dStack_c8 & 1) == 0) {
LAB_1435f0799:
              if ((dVar12 != 0.0) && ((*(uint *)((longlong)dVar12 + 8) & 0x3fffff) != 0)) {
                *(uint *)((longlong)dVar12 + 8) = *(uint *)((longlong)dVar12 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              dStack_c8 = (double)((longlong)dStack_c8 + -1);
            }
          }
          else if (uVar8 - 0xd < 2) {
            dVar12 = uStack_c0;
            if (((ulonglong)uStack_c0 & 1) == 0) goto LAB_1435f0799;
            uStack_c0 = (double)((longlong)uStack_c0 + -1);
          }
        }
        else {
          *local_d0 = *local_d0 + -1;
          if (*local_d0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_d8[0] = local_d8[0] & 0xfffffde0;
          local_d0 = (int *)0x0;
          dStack_c8 = 0.0;
          uStack_c0 = 0.0;
        }
      }
      piVar2 = (int *)((longlong)dVar11 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920(dVar11);
      }
      uVar9 = uVar9 + 1;
      param_5 = param_5 + 1;
      dVar12 = local_b0;
    } while (uVar9 < param_6);
    goto LAB_1435f0918;
  case 4:
    uVar9 = 0;
    if (param_6 == 0) break;
    do {
      dVar11 = (double)FUN_143360fd0(param_1[0x77],*param_5,0xffffffffffffffff);
      *(int *)((longlong)dVar11 + 0x18) = *(int *)((longlong)dVar11 + 0x18) + 1;
      local_d8[0] = 10;
      local_d0 = (int *)0x0;
      *(int *)((longlong)dVar11 + 0x18) = *(int *)((longlong)dVar11 + 0x18) + 1;
      dStack_c8 = dVar11;
      FUN_1434b4fe0(puVar1,uVar9 + param_4);
      uVar8 = local_d8[0] & 0x1f;
      if (9 < uVar8) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          if (uVar8 == 10) {
            piVar2 = (int *)((longlong)dStack_c8 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
            dVar12 = dStack_c8;
            if (((ulonglong)dStack_c8 & 1) == 0) {
LAB_1435f08cc:
              if ((dVar12 != 0.0) && ((*(uint *)((longlong)dVar12 + 8) & 0x3fffff) != 0)) {
                *(uint *)((longlong)dVar12 + 8) = *(uint *)((longlong)dVar12 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              dStack_c8 = (double)((longlong)dStack_c8 + -1);
            }
          }
          else if (uVar8 - 0xd < 2) {
            dVar12 = uStack_c0;
            if (((ulonglong)uStack_c0 & 1) == 0) goto LAB_1435f08cc;
            uStack_c0 = (double)((longlong)uStack_c0 + -1);
          }
        }
        else {
          *local_d0 = *local_d0 + -1;
          if (*local_d0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_d8[0] = local_d8[0] & 0xfffffde0;
          local_d0 = (int *)0x0;
          dStack_c8 = 0.0;
          uStack_c0 = 0.0;
        }
      }
      piVar2 = (int *)((longlong)dVar11 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920(dVar11);
      }
      uVar9 = uVar9 + 1;
      param_5 = param_5 + 1;
      dVar12 = local_b0;
    } while (uVar9 < param_6);
    goto LAB_1435f0918;
  case 5:
    uVar9 = 0;
    if (param_6 == 0) break;
    do {
      local_d8[0] = 0;
      local_d0 = (int *)0x0;
      FUN_1435ee5b0(param_1,param_5,local_d8);
      FUN_1434b4fe0(puVar1,uVar9 + param_4,local_d8);
      uVar8 = local_d8[0] & 0x1f;
      if (9 < uVar8) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          if (uVar8 == 10) {
            piVar2 = (int *)((longlong)dStack_c8 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else {
            dVar11 = dStack_c8;
            if (((((uVar8 == 0xb) || (uVar8 == 0xc)) || (dVar11 = uStack_c0, uVar8 - 0xd < 2)) &&
                ((((ulonglong)dVar11 & 1) == 0 && (dVar11 != 0.0)))) &&
               ((*(uint *)((longlong)dVar11 + 8) & 0x3fffff) != 0)) {
              *(uint *)((longlong)dVar11 + 8) = *(uint *)((longlong)dVar11 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_d0 = *local_d0 + -1;
          if (*local_d0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      uVar9 = uVar9 + 1;
      param_5 = param_5 + 6;
    } while (uVar9 < param_6);
LAB_1435f0918:
    dVar11 = (double)CONCAT71(uStack_8f,local_90);
  }
  if (bVar5) {
    uVar7 = 1;
  }
  else {
    dVar14 = 0.0;
    dVar13 = 0.0;
    local_d0 = (int *)0x0;
    local_d8[0] = 0xc;
    uStack_c0 = (double)CONCAT44(uStack_a4,uStack_a8);
    local_70 = (longlong *)0x0;
    local_80 = 0xffffffffffffffff;
    uStack_78 = 0xffffffffffffffff;
    local_68 = 0;
    dStack_c8 = dVar12;
    local_b0 = dVar12;
    FUN_1435ee8b0(param_1,local_d8,&local_80);
    uVar7 = (**(code **)(*param_1 + 0x188))(param_1,param_3,&local_80,param_7);
    if ((local_68 >> 6 & 1) != 0) {
      (**(code **)(*local_70 + 0x10))(local_70,&local_80,local_60);
      local_70 = (longlong *)0x0;
    }
    uVar9 = local_d8[0] & 0x1f;
    local_68 = 0;
    dVar12 = dVar14;
    if (9 < uVar9) {
      if ((local_d8[0] >> 9 & 1) == 0) {
        dVar12 = dVar13;
        if (uVar9 == 10) {
          piVar2 = (int *)((longlong)dStack_c8 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else {
          dVar13 = dStack_c8;
          if (((((uVar9 == 0xb) || (uVar9 == 0xc)) || (dVar13 = uStack_c0, uVar9 - 0xd < 2)) &&
              ((((ulonglong)dVar13 & 1) == 0 && (dVar13 != 0.0)))) &&
             ((*(uint *)((longlong)dVar13 + 8) & 0x3fffff) != 0)) {
            *(uint *)((longlong)dVar13 + 8) = *(uint *)((longlong)dVar13 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_d0 = *local_d0 + -1;
        if (*local_d0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  uVar9 = local_a0[0] & 0x1f;
  if (9 < uVar9) {
    if ((local_a0[0] >> 9 & 1) == 0) {
      if (uVar9 == 10) {
        piVar2 = (int *)((longlong)dVar11 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920(dVar11);
        }
      }
      else if ((uVar9 == 0xb) || (uVar9 == 0xc)) {
        if (((local_90 & 1) == 0) &&
           ((dVar11 != 0.0 && ((*(uint *)((longlong)dVar11 + 8) & 0x3fffff) != 0)))) {
          *(uint *)((longlong)dVar11 + 8) = *(uint *)((longlong)dVar11 + 8) - 1;
          FUN_1434ef880(dVar11);
        }
      }
      else if ((((uVar9 - 0xd < 2) && ((local_88 & 1) == 0)) &&
               (lVar3 = CONCAT71(uStack_87,local_88), lVar3 != 0)) &&
              ((*(uint *)(lVar3 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_98 = *local_98 + -1;
      if (*local_98 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  if (((dVar12 != 0.0) && (((ulonglong)dVar12 & 1) == 0)) &&
     ((*(uint *)((longlong)dVar12 + 8) & 0x3fffff) != 0)) {
    *(uint *)((longlong)dVar12 + 8) = *(uint *)((longlong)dVar12 + 8) - 1;
    FUN_1434ef880(dVar12);
  }
  return uVar7;
}



// FUNCTION 1435f0b40 FUN_1435f0b40 body=753 status=ok
// SIG undefined FUN_1435f0b40(void)

undefined1 FUN_1435f0b40(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_b8 [2];
  int *local_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  uint local_90 [2];
  int *local_88;
  byte local_80;
  undefined7 uStack_7f;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  uint local_58;
  undefined8 local_50;
  ulonglong local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_90[0] = 0;
  local_88 = (int *)0x0;
  cVar6 = FUN_1435f3560(param_1,local_90,param_2);
  uVar5 = local_90[0];
  lVar4 = CONCAT71(uStack_7f,local_80);
  if ((((cVar6 == '\0') || (((byte)local_90[0] & 0x1f) != 0xc)) || (lVar4 == 0)) ||
     ((*(int *)(*(longlong *)(lVar4 + 0x28) + 0x90) != 7 ||
      ((~(*(byte *)(*(longlong *)(lVar4 + 0x28) + 0x88) >> 5) & 1) == 0)))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1[0x11] + 0x248) + 0xd8);
    lVar9 = *(longlong *)(lVar2 + 0xa0);
    if (lVar9 == 0) {
      local_98[0] = 0x152;
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + 0x48);
      lVar9 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(lVar2 + 0x80),local_98);
    }
    else {
      *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar9 + 0x28);
    }
    if (lVar9 == 0) {
      uStack_a8 = 0;
    }
    else {
      uStack_a8 = FUN_1434b64a0(lVar9,lVar2);
    }
    FUN_1434b4900(uStack_a8 + 0x40,param_3);
    local_b0 = (int *)0x0;
    local_b8[0] = 0xc;
    uStack_a0 = CONCAT44(uStack_34,uStack_38);
    local_60 = (longlong *)0x0;
    local_70 = 0xffffffffffffffff;
    uStack_68 = 0xffffffffffffffff;
    local_58 = 0;
    local_40 = uStack_a8;
    FUN_1435ee8b0(param_1,local_b8,&local_70);
    uVar7 = (**(code **)(*param_1 + 0x188))(param_1,param_2,&local_70,param_4);
    if ((local_58 >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 0x10))(local_60,&local_70,local_50);
      local_60 = (longlong *)0x0;
    }
    uVar8 = local_b8[0] & 0x1f;
    local_58 = 0;
    if (9 < uVar8) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        if (uVar8 == 10) {
          piVar1 = (int *)(uStack_a8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
            uVar10 = uStack_a8;
            if ((uStack_a8 & 1) != 0) {
              uStack_a8 = uStack_a8 - 1;
              goto LAB_1435f0d6f;
            }
          }
          else {
            if (1 < uVar8 - 0xd) goto LAB_1435f0d6f;
            uVar10 = uStack_a0;
            if ((uStack_a0 & 1) != 0) {
              uStack_a0 = uStack_a0 - 1;
              goto LAB_1435f0d6f;
            }
          }
          if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_b0 = *local_b0 + -1;
        if (*local_b0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_b8[0] = local_b8[0] & 0xfffffde0;
        local_b0 = (int *)0x0;
        uStack_a8 = 0;
        uStack_a0 = 0;
      }
    }
  }
  else {
    if (param_3 != *(int *)(lVar4 + 0x40)) {
      FUN_1434b4900(lVar4 + 0x40,param_3);
    }
    uVar7 = 1;
  }
LAB_1435f0d6f:
  uVar8 = uVar5 & 0x1f;
  if (9 < uVar8) {
    if ((uVar5 >> 9 & 1) == 0) {
      if (uVar8 == 10) {
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar4);
        }
      }
      else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
        if (((local_80 & 1) == 0) && ((lVar4 != 0 && ((*(uint *)(lVar4 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) - 1;
          FUN_1434ef880(lVar4);
        }
      }
      else if ((((uVar8 - 0xd < 2) && ((local_78 & 1) == 0)) &&
               (lVar4 = CONCAT71(uStack_77,local_78), lVar4 != 0)) &&
              ((*(uint *)(lVar4 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_88 = *local_88 + -1;
      if (*local_88 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return uVar7;
}



// FUNCTION 1435f0e40 FUN_1435f0e40 body=199 status=ok
// SIG undefined FUN_1435f0e40(void)

undefined1 FUN_1435f0e40(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  uint local_28 [2];
  int *local_20;
  byte local_18;
  undefined7 uStack_17;
  byte local_10;
  undefined7 uStack_f;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  uVar2 = FUN_1435f3560(param_1,local_28,param_2);
  uVar3 = local_28[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(CONCAT71(uStack_17,local_18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          if ((local_18 & 1) != 0) {
            return uVar2;
          }
          lVar4 = CONCAT71(uStack_17,local_18);
        }
        else {
          if (1 < uVar3 - 0xd) {
            return uVar2;
          }
          if ((local_10 & 1) != 0) {
            return uVar2;
          }
          lVar4 = CONCAT71(uStack_f,local_10);
        }
        if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) - 1;
          FUN_1434ef880();
          return uVar2;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar2;
      }
    }
  }
  return uVar2;
}



// FUNCTION 1435f0f10 FUN_1435f0f10 body=1337 status=ok
// SIG undefined FUN_1435f0f10(void)

bool FUN_1435f0f10(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint param_5)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  uint local_298 [2];
  int *local_290;
  byte local_288;
  undefined7 uStack_287;
  byte local_280;
  undefined7 uStack_27f;
  uint local_278 [2];
  int *local_270;
  ulonglong local_268;
  ulonglong local_260;
  undefined4 local_258 [140];
  
  uVar4 = param_5;
  uVar11 = (ulonglong)param_5;
  if (param_5 < 0xb) {
    puVar5 = local_258;
  }
  else {
    puVar5 = (undefined4 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)param_5 << 5,0);
  }
  puVar6 = puVar5;
  uVar10 = uVar11;
  if (uVar4 != 0) {
    do {
      puVar7 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        puVar7 = puVar6;
      }
      FUN_1435ee5b0(param_1,param_4,puVar7);
      param_4 = param_4 + 0x30;
      uVar10 = uVar10 - 1;
      puVar6 = puVar6 + 8;
    } while (uVar10 != 0);
  }
  local_278[0] = 0;
  local_270 = (int *)0x0;
  if ((*(longlong *)(param_1 + 0xc0) == 0) ||
     (puVar6 = (undefined4 *)FUN_1435f2600(param_1,param_2), puVar6 == (undefined4 *)0x0)) {
    local_298[0] = 0;
    local_290 = (int *)0x0;
    cVar2 = FUN_1435f3560(param_1,local_298,param_2);
    if (cVar2 == '\0') {
      bVar12 = false;
    }
    else {
      if ((((byte)local_298[0] & 0x1f) == 0xc) &&
         ((longlong *)CONCAT71(uStack_287,local_288) != (longlong *)0x0)) {
        (**(code **)(*(longlong *)CONCAT71(uStack_287,local_288) + 0x88))();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b7a928) &&
         (_Init_thread_header(&DAT_146b7a928), DAT_146b7a928 == -1)) {
        DAT_146b7a908 = 0;
        DAT_146b7a910 = 0;
        atexit(FUN_143ec4e30);
        _Init_thread_footer(&DAT_146b7a928);
      }
      param_5 = uVar4;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x88),local_298,&DAT_146b7a908,local_278,&param_5,
                    puVar5,0,1);
      bVar12 = true;
    }
    uVar3 = local_298[0] & 0x1f;
    if (9 < uVar3) {
      if ((local_298[0] >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar1 = (int *)(CONCAT71(uStack_287,local_288) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          if ((local_288 & 1) == 0) {
            lVar8 = CONCAT71(uStack_287,local_288);
            goto LAB_1435f1198;
          }
        }
        else if ((uVar3 - 0xd < 2) && ((local_280 & 1) == 0)) {
          lVar8 = CONCAT71(uStack_27f,local_280);
LAB_1435f1198:
          if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) & 0x3fffff) != 0)) {
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_290 = *local_290 + -1;
        if (*local_290 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    bVar13 = false;
    if (!bVar12) goto LAB_1435f11fc;
  }
  else {
    if ((((byte)*puVar6 & 0x1f) == 0xc) && (*(longlong **)(puVar6 + 4) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(puVar6 + 4) + 0x88))();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b7a928) &&
       (_Init_thread_header(&DAT_146b7a928), DAT_146b7a928 == -1)) {
      DAT_146b7a908 = 0;
      DAT_146b7a910 = 0;
      atexit(FUN_143ec4e30);
      _Init_thread_footer(&DAT_146b7a928);
    }
    param_5 = uVar4;
    FUN_1435ce880(*(undefined8 *)(param_1 + 0x88),puVar6,&DAT_146b7a908,local_278,&param_5,puVar5,0,
                  1);
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x88) + 0xb8);
  bVar13 = cVar2 == '\0';
  if (cVar2 == '\0') {
    if (param_3 != 0) {
      FUN_1435ee8b0(param_1,local_278,param_3);
    }
  }
  else {
    FUN_1435cc020();
  }
LAB_1435f11fc:
  if (uVar4 != 0) {
    puVar9 = (ulonglong *)(puVar5 + 4);
    do {
      uVar3 = (uint)puVar9[-2] & 0x1f;
      if (9 < uVar3) {
        if (((uint)puVar9[-2] >> 9 & 1) == 0) {
          if (uVar3 == 10) {
            piVar1 = (int *)(*puVar9 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            uVar10 = *puVar9;
            if ((uVar10 & 1) == 0) {
LAB_1435f12a0:
              if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *puVar9 = uVar10 - 1;
            }
          }
          else if (uVar3 - 0xd < 2) {
            uVar10 = puVar9[1];
            if ((uVar10 & 1) == 0) goto LAB_1435f12a0;
            puVar9[1] = uVar10 - 1;
          }
        }
        else {
          piVar1 = (int *)puVar9[-1];
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(uint *)(puVar9 + -2) = (uint)puVar9[-2] & 0xfffffde0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
        }
      }
      puVar9 = puVar9 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (10 < uVar4) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
  }
  uVar4 = local_278[0] & 0x1f;
  if (9 < uVar4) {
    if ((local_278[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(local_268 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar4 == 0xb) || (uVar4 == 0xc)) || (local_268 = local_260, uVar4 - 0xd < 2)) &&
              ((((local_268 & 1) == 0 && (local_268 != 0)) &&
               ((*(uint *)(local_268 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(local_268 + 8) = *(uint *)(local_268 + 8) - 1;
        FUN_1434ef880();
        return bVar13;
      }
    }
    else {
      *local_270 = *local_270 + -1;
      if (*local_270 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return bVar13;
      }
    }
  }
  return bVar13;
}



// FUNCTION 1435f1450 Invoke body=33 status=ok
// SIG undefined Invoke(void)

void Scaleform::GFx::AS3::MovieRoot::Invoke(longlong *param_1)

{
  (**(code **)(*param_1 + 0x1d0))();
  return;
}



// FUNCTION 1435f1480 FUN_1435f1480 body=853 status=ok
// SIG undefined FUN_1435f1480(void)

bool FUN_1435f1480(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  int local_res8 [2];
  ulonglong local_68;
  int *local_60;
  ulonglong local_58;
  byte local_50;
  undefined7 uStack_4f;
  uint local_48 [2];
  int *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_68 = 0;
  local_60 = (int *)0x0;
  local_58 = 0;
  FUN_1435f3fe0(param_1,&local_68,param_2,param_4,param_5);
  piVar4 = local_60;
  uVar3 = local_68;
  iVar10 = (int)local_60;
  local_48[0] = 0;
  uVar9 = 0;
  if (iVar10 != 0) {
    uVar9 = local_68;
  }
  local_40 = (int *)0x0;
  if ((*(longlong *)(param_1 + 0xc0) == 0) || (lVar7 = FUN_1435f2600(param_1,param_2), lVar7 == 0))
  {
    local_68 = local_68 & 0xffffffff00000000;
    local_60 = (int *)0x0;
    cVar5 = FUN_1435f3560(param_1,&local_68,param_2);
    if (cVar5 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      local_res8[0] = iVar10;
      uVar8 = FUN_143590540();
      FUN_1435ce880(uVar2,&local_68,uVar8,local_48,local_res8,uVar9,0,1);
      uVar6 = (uint)local_68 & 0x1f;
      if (9 < uVar6) {
        if (((uint)local_68 >> 9 & 1) == 0) {
          if (uVar6 == 10) {
            piVar1 = (int *)(local_58 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
            uVar9 = local_58;
            if ((local_58 & 1) == 0) goto LAB_1435f15f9;
          }
          else if ((uVar6 - 0xd < 2) && ((local_50 & 1) == 0)) {
            uVar9 = CONCAT71(uStack_4f,local_50);
LAB_1435f15f9:
            if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_60 = *local_60 + -1;
          if (*local_60 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      goto LAB_1435f1623;
    }
    uVar6 = (uint)local_68 & 0x1f;
    if (9 < uVar6) {
      if (((uint)local_68 >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          piVar1 = (int *)(local_58 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          uVar9 = local_58;
          if ((local_58 & 1) == 0) goto LAB_1435f16bb;
        }
        else if ((uVar6 - 0xd < 2) && ((local_50 & 1) == 0)) {
          uVar9 = CONCAT71(uStack_4f,local_50);
LAB_1435f16bb:
          if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_60 = *local_60 + -1;
        if (*local_60 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    bVar11 = false;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    local_res8[0] = iVar10;
    uVar8 = FUN_143590540();
    FUN_1435ce880(uVar2,lVar7,uVar8,local_48,local_res8,uVar9,0,1);
LAB_1435f1623:
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x88) + 0xb8);
    bVar11 = cVar5 == '\0';
    if (cVar5 == '\0') {
      if (param_3 != 0) {
        FUN_1435ee8b0(param_1,local_48,param_3);
      }
    }
    else {
      FUN_1435cc020();
    }
  }
  uVar6 = local_48[0] & 0x1f;
  if (9 < uVar6) {
    if ((local_48[0] >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)(uStack_38 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          uVar9 = uStack_38;
          if ((uStack_38 & 1) != 0) {
            uStack_38 = uStack_38 - 1;
            goto LAB_1435f1790;
          }
        }
        else {
          if (1 < uVar6 - 0xd) goto LAB_1435f1790;
          uVar9 = local_30;
          if ((local_30 & 1) != 0) {
            local_30 = local_30 - 1;
            goto LAB_1435f1790;
          }
        }
        if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_48[0] = local_48[0] & 0xfffffde0;
      local_40 = (int *)0x0;
      uStack_38 = 0;
      local_30 = 0;
    }
  }
LAB_1435f1790:
  FUN_14360f5f0(uVar3,piVar4);
  if (uVar3 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
  }
  return bVar11;
}



// FUNCTION 1435f17e0 FUN_1435f17e0 body=307 status=ok
// SIG undefined FUN_1435f17e0(void)

void FUN_1435f17e0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  ulonglong uVar2;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar3;
  longlong lVar4;
  
  pRVar3 = (RefCountNTSImpl *)0x0;
  lVar4 = (ulonglong)
          *(byte *)((ulonglong)(uint)(int)*(char *)(param_3 + 0x11) + 0x52c4 +
                   *(longlong *)(param_1 + -0x30)) * 0x60 + *(longlong *)(param_1 + -0x30);
  piVar1 = *(int **)(lVar4 + 0x4ce8);
  this = pRVar3;
  if (piVar1 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar4 + 0x4ce8) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if ((param_4 >>
       (*(byte *)((ulonglong)(uint)(int)*(char *)(param_3 + 0x11) + 0x52c4 +
                 *(longlong *)(param_1 + -0x30)) & 0x1f) & 1) == 0) {
    if (this == (RefCountNTSImpl *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x158);
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 0x28))
                          ();
        pRVar3 = (RefCountNTSImpl *)0x0;
        if (lVar4 != 0) {
          pRVar3 = (RefCountNTSImpl *)(lVar4 + -0x48);
        }
      }
    }
    else {
      lVar4 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                        (this + (ulonglong)(byte)this[0x6d] * 4);
      if (lVar4 != 0) {
        pRVar3 = (RefCountNTSImpl *)(lVar4 + -0x38);
      }
    }
    uVar2 = *(ulonglong *)(pRVar3 + 0x10);
    if (uVar2 == 0) {
      uVar2 = *(ulonglong *)(pRVar3 + 8);
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar2 - 1;
    }
    if (uVar2 != 0) {
      FUN_1435198d0(uVar2,param_3,this);
    }
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1435f1920 FUN_1435f1920 body=307 status=ok
// SIG undefined FUN_1435f1920(void)

void FUN_1435f1920(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  ulonglong uVar2;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar3;
  longlong lVar4;
  
  pRVar3 = (RefCountNTSImpl *)0x0;
  lVar4 = (ulonglong)
          *(byte *)((ulonglong)(uint)(int)*(char *)(param_3 + 0x11) + 0x52c4 +
                   *(longlong *)(param_1 + -0x30)) * 0x60 + *(longlong *)(param_1 + -0x30);
  piVar1 = *(int **)(lVar4 + 0x4ce8);
  this = pRVar3;
  if (piVar1 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar4 + 0x4ce8) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if ((param_4 >>
       (*(byte *)((ulonglong)(uint)(int)*(char *)(param_3 + 0x11) + 0x52c4 +
                 *(longlong *)(param_1 + -0x30)) & 0x1f) & 1) == 0) {
    if (this == (RefCountNTSImpl *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x158);
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 0x28))
                          ();
        pRVar3 = (RefCountNTSImpl *)0x0;
        if (lVar4 != 0) {
          pRVar3 = (RefCountNTSImpl *)(lVar4 + -0x48);
        }
      }
    }
    else {
      lVar4 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                        (this + (ulonglong)(byte)this[0x6d] * 4);
      if (lVar4 != 0) {
        pRVar3 = (RefCountNTSImpl *)(lVar4 + -0x38);
      }
    }
    uVar2 = *(ulonglong *)(pRVar3 + 0x10);
    if (uVar2 == 0) {
      uVar2 = *(ulonglong *)(pRVar3 + 8);
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar2 - 1;
    }
    if (uVar2 != 0) {
      FUN_1435198d0(uVar2,param_3,this);
    }
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1435f1a70 FUN_1435f1a70 body=112 status=ok
// SIG undefined FUN_1435f1a70(void)

longlong FUN_1435f1a70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  param_5._0_4_ = *param_5;
  local_18 = 0;
  local_28 = param_2;
  local_20 = param_3;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),&local_28,
                     param_4,&param_5,3);
  FUN_143383050(lVar1,param_6);
  *(ushort *)(lVar1 + 0x6a) = *(ushort *)(lVar1 + 0x6a) | 0x800;
  return lVar1;
}



// FUNCTION 1435f1af0 FUN_1435f1af0 body=103 status=ok
// SIG undefined FUN_1435f1af0(void)

undefined8
FUN_1435f1af0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  param_5._0_4_ = *param_5;
  local_18 = 0;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),&local_28,
                     param_4,&param_5,9);
  FUN_143383050(uVar1,param_6);
  return uVar1;
}



// FUNCTION 1435f1b60 FUN_1435f1b60 body=331 status=ok
// SIG undefined FUN_1435f1b60(void)

undefined8 * FUN_1435f1b60(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  lVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x180,0);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_res8[0] = 0x40000;
    uVar3 = FUN_1435e6ca0(lVar2,param_2,param_1,0,local_res8);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x198) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x198));
  }
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  puVar1 = (undefined8 *)(lVar2 + 0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435e3920(puVar1,*(undefined8 *)(param_1 + 0x198));
    *puVar1 = &PTR_FUN_145b4c1e8;
    *(undefined ***)(lVar2 + 0x168) = &PTR_LAB_145b4c2d8;
    *(undefined ***)(lVar2 + 0x178) = &PTR_LAB_145b4c388;
  }
  FUN_1435e7500(*(undefined8 *)(param_1 + 0x198));
  uVar3 = *(undefined8 *)(param_1 + 0x198);
  plVar5 = (longlong *)(param_1 + 200);
  local_28 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xff00;
  plVar4 = (longlong *)FUN_1435f4bd0(plVar5);
  if (*(longlong **)(param_1 + 0xd0) == (longlong *)0x0) {
    *plVar4 = *plVar5;
    *plVar5 = (longlong)plVar4;
  }
  else {
    *plVar4 = **(longlong **)(param_1 + 0xd0);
    **(undefined8 **)(param_1 + 0xd0) = plVar4;
  }
  *(longlong **)(param_1 + 0xd0) = plVar4;
  if (*plVar4 == 0) {
    *(longlong **)(param_1 + 0xd8) = plVar4;
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  FUN_143613d80(plVar4,uVar3,&local_28);
  return puVar1;
}



// FUNCTION 1435f1cc0 FUN_1435f1cc0 body=742 status=ok
// SIG undefined FUN_1435f1cc0(void)

char FUN_1435f1cc0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  RefCountImpl *pRVar8;
  RefCountImpl *pRVar9;
  RefCountImpl *this;
  RefCountImpl **ppRVar10;
  RefCountImpl *pRVar11;
  ulonglong local_res8;
  RefCountImpl *local_res10;
  ulonglong local_res18;
  
  uVar6 = (**(code **)(*param_3 + 0x218))(param_3);
  FUN_1432c31e0(&local_res8,param_2 + 0x20);
  if ((*(ulonglong *)(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffc) & 0x7fffffffffffffff) !=
      0) {
    FUN_1432c3950(&local_res8,&DAT_145b4dda8,0xffffffffffffffff);
    FUN_1432c4fd0(&local_res8,param_2 + 0x10);
    FUN_1432c3950(&local_res8,&DAT_145b18618,0xffffffffffffffff);
  }
  lVar7 = (**(code **)(*(longlong *)
                        ((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_3 + 0x6d) * 4) +
                      0x28))((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_3 + 0x6d) * 4)
  ;
  this = (RefCountImpl *)0x0;
  pRVar8 = this;
  if (lVar7 != 0) {
    pRVar8 = (RefCountImpl *)(lVar7 + -0x48);
  }
  uVar2 = *(ulonglong *)(pRVar8 + 0x28);
  FUN_1435cf1c0(*(undefined8 *)(param_1 + 0x88),&local_res10,(local_res8 & 0xfffffffffffffffc) + 0xc
                ,uVar2);
  pRVar8 = local_res10;
  if (local_res10 == (RefCountImpl *)0x0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    pRVar9 = (RefCountImpl *)(**(code **)(*plVar3 + 0x50))(plVar3,0x10,0);
    pRVar11 = this;
    if (pRVar9 != (RefCountImpl *)0x0) {
      *(ulonglong *)pRVar9 = (ulonglong)*(uint *)(param_2 + 0x18);
      *(ulonglong *)(pRVar9 + 8) = param_2 + 0x28;
      pRVar11 = pRVar9;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,0x188,0);
    if (lVar7 != 0) {
      this = (RefCountImpl *)
             Scaleform::GFx::AS3::ASVM::AbcFileWithMovieDef::AbcFileWithMovieDef
                       (lVar7,uVar6,param_2);
    }
    local_res10 = this;
    FUN_1432c4d80(this + 0x18,&local_res8);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x18);
    cVar4 = FUN_14361e750(pRVar11,this);
    if (cVar4 != '\0') {
      FUN_1435eb1c0(param_1);
      ppRVar10 = (RefCountImpl **)
                 FUN_1435c7d00(*(undefined8 *)(param_1 + 0x88),&local_res18,&local_res10,uVar2,0);
      if (ppRVar10 != &local_res10) {
        pRVar8 = *ppRVar10;
        if (pRVar8 != (RefCountImpl *)0x0) {
          *(uint *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1U & 0x8fffffff;
        }
        pRVar8 = *ppRVar10;
      }
      if (((local_res18 != 0) && ((local_res18 & 1) == 0)) &&
         ((*(uint *)(local_res18 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res18 + 8) = *(uint *)(local_res18 + 8) - 1;
        FUN_1434ef880();
      }
      if (*(char *)(*(longlong *)(param_1 + 0x88) + 0xb8) != '\0') {
        FUN_1435cc020();
        cVar4 = '\0';
      }
    }
    Scaleform::RefCountImpl::Release(this);
    if (pRVar11 != (RefCountImpl *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pRVar11);
    }
  }
  else {
    FUN_1435be4e0(*(undefined8 *)(local_res10 + 0x30),local_res10);
    cVar4 = '\x01';
  }
  if (pRVar8 != (RefCountImpl *)0x0) {
    lVar7 = Scaleform::GFx::DisplayObjContainer::FindRootNode(param_3);
    FUN_1434f0230(lVar7 + 0x40,lVar7 + 0x40,*(longlong *)(lVar7 + 0x48) + 1);
    puVar1 = (ulonglong *)(*(longlong *)(lVar7 + 0x40) + (*(longlong *)(lVar7 + 0x48) + -1) * 8);
    if (puVar1 != (ulonglong *)0x0) {
      *puVar1 = (ulonglong)pRVar8;
      *(uint *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1U & 0x8fffffff;
    }
    if ((((ulonglong)pRVar8 & 1) == 0) && ((*(uint *)(pRVar8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(pRVar8 + 8) = *(uint *)(pRVar8 + 8) - 1;
      FUN_1434ef880(pRVar8);
    }
  }
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return cVar4;
}


