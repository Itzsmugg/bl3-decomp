// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434ca140 FUN_1434ca140 body=90 status=ok
// SIG undefined FUN_1434ca140(void)

undefined8 *
FUN_1434ca140(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *param_3;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_4;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}



// FUNCTION 1434ca1a0 FUN_1434ca1a0 body=91 status=ok
// SIG undefined FUN_1434ca1a0(void)

void FUN_1434ca1a0(undefined8 *param_1)

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
  return;
}



// FUNCTION 1434ca210 GetNamespace body=30 status=ok
// SIG undefined GetNamespace(void)

undefined8 FStringTable::GetNamespace(longlong param_1,undefined8 param_2)

{
  FUN_1434ef4b0(param_2,*(undefined8 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 1434ca240 FUN_1434ca240 body=54 status=ok
// SIG undefined FUN_1434ca240(void)

undefined8 FUN_1434ca240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x50) +
                      0x68))();
  FUN_1434ef540(param_2,*(undefined8 *)(lVar1 + 0xd8));
  return param_2;
}



// FUNCTION 1434ca280 FUN_1434ca280 body=490 status=ok
// SIG undefined FUN_1434ca280(void)

undefined8 * FUN_1434ca280(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar3 = param_3[4];
  puVar9 = (undefined8 *)0x0;
  *param_2 = 0;
  if (((byte)uVar3 & 0x1f) == 10) {
    if (((*param_3 & 3) < 2) && (*(longlong *)(param_3 + 2) != 0)) {
      lVar5 = FUN_1435aec10(param_3);
      if (((*(byte *)(lVar5 + 0x48) & 0x1f) == 0) &&
         (lVar6 = (**(code **)(*param_1 + 0x198))(param_1,lVar5 + 0x38,0), lVar6 != 0)) {
        lVar5 = lVar6;
      }
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x2b0);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8);
      }
      else if (((*(byte *)(lVar5 + 0x48) & 0x1f) == 0) &&
              (lVar6 = (**(code **)(*param_1 + 0x198))(param_1,lVar5 + 0x38,0), lVar6 != 0)) {
        lVar5 = lVar6;
      }
    }
    lVar6 = *(longlong *)(param_3 + 8);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    lVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
    uVar4 = *(undefined8 *)(lVar7 + 0xd8);
    puVar8 = (undefined8 *)FUN_1435b5bc0(uVar4);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar8,uVar4);
      *puVar8 = &PTR_ForEachChild_GC_145b1a610;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar9 = puVar8;
    }
    FUN_1434f0700(puVar9 + 8,param_1);
    if (puVar9[9] != 0) {
      piVar1 = (int *)(puVar9[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar9[9] = lVar6;
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    FUN_1434f0700(puVar9 + 10,lVar5);
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    *param_2 = puVar9;
    if (iVar2 == 0) {
      FUN_14335f920(lVar6);
    }
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
    uVar4 = *(undefined8 *)(lVar5 + 0xd8);
    puVar8 = (undefined8 *)FUN_1435b5bc0(uVar4);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar8,uVar4);
      *puVar8 = &PTR_ForEachChild_GC_145b1a610;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar9 = puVar8;
    }
    *param_2 = puVar9;
  }
  return param_2;
}



// FUNCTION 1434ca470 FUN_1434ca470 body=100 status=ok
// SIG undefined FUN_1434ca470(void)

undefined8
FUN_1434ca470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x50) +
                      0x68))();
  FUN_1434dcb80(*(undefined8 *)(lVar1 + 0xd8),param_2,*(undefined8 *)(lVar1 + 0xd8),param_3,param_4,
                param_5);
  return param_2;
}



// FUNCTION 1434ca4e0 FUN_1434ca4e0 body=550 status=ok
// SIG undefined FUN_1434ca4e0(void)

undefined1 FUN_1434ca4e0(longlong *param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  uVar8 = 0;
  uVar9 = 0;
  local_res10 = 0;
  if (((byte)param_2[4] & 0x1f) != 10) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 8);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x78))(param_1,&local_res10);
  if ((*plVar5 == lVar2) ||
     (cVar4 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_2), cVar4 != '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (bVar11) {
    if ((*param_2 & 3) < 2) {
      if (*(longlong *)(param_2 + 2) == 0) {
        uVar9 = 1;
      }
      else {
        lVar6 = FUN_1435aec10(param_2);
        lVar7 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x2b0);
        if (lVar7 == 0) {
          lVar7 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8);
        }
        if (((int)((*(longlong *)(lVar6 + 0x28) << 0x3c) >> 0x3c) != 0) ||
           (((*param_2 >> 3 & 1) == 0 && (*(int *)(*(longlong *)(lVar6 + 0x38) + 0x20) == 0)))) {
          lVar6 = lVar7;
        }
        lVar7 = (**(code **)(*param_1 + 0x110))(param_1);
        if (*(longlong *)(lVar6 + 0x38) == *(longlong *)(lVar7 + 0x38)) {
          uVar9 = 1;
        }
      }
    }
    else {
      cVar4 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_2);
      if (cVar4 == '\0') {
        lVar7 = *(longlong *)(param_1[5] + 0x98);
        lVar6 = (**(code **)(*param_1 + 0x110))(param_1);
        if (((*param_2 >> 3 & 1) != 0) || (lVar10 = *(longlong *)(lVar7 + 0x2b0), lVar10 == 0)) {
          lVar10 = *(longlong *)(lVar7 + 0x1d8);
        }
        cVar4 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                          (param_2,*(undefined8 *)(lVar7 + 0x1d8));
        if (cVar4 == '\0') {
          if (*(longlong *)(lVar10 + 0x38) == *(longlong *)(lVar6 + 0x38)) {
            uVar9 = 0;
            if (((*(byte *)(lVar6 + 0x28) ^ *(byte *)(lVar10 + 0x28)) & 0xf) == 0) {
              uVar9 = 1;
            }
          }
        }
        else {
          lVar7 = FUN_1435aec20(param_2);
          if (*(ulonglong *)(lVar7 + 0x30) != 0) {
            plVar5 = *(longlong **)(lVar7 + 0x28);
            do {
              if ((int)((*(longlong *)(*plVar5 + 0x28) << 0x3c) >> 0x3c) == 0) {
                lVar3 = *(longlong *)(*plVar5 + 0x38);
                if (*(int *)(lVar3 + 0x20) == 0) {
                  bVar11 = *(longlong *)(lVar10 + 0x38) == *(longlong *)(lVar6 + 0x38);
                }
                else {
                  bVar11 = lVar3 == *(longlong *)(lVar6 + 0x38);
                }
                if (bVar11) goto LAB_1434ca5f1;
              }
              uVar8 = uVar8 + 1;
              plVar5 = plVar5 + 1;
            } while (uVar8 < *(ulonglong *)(lVar7 + 0x30));
          }
        }
      }
      else {
LAB_1434ca5f1:
        uVar9 = 1;
      }
    }
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return uVar9;
}



// FUNCTION 1434ca710 FUN_1434ca710 body=101 status=ok
// SIG undefined FUN_1434ca710(void)

void FUN_1434ca710(undefined8 param_1,int param_2)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = param_2 - iVar1) {
    iVar1 = 10;
    if (param_2 < 10) {
      iVar1 = param_2;
    }
    Scaleform::StringBuffer::AppendString(param_1,(&PTR_DAT_1467d3b00)[iVar1],(longlong)iVar1);
  }
  return;
}



// FUNCTION 1434ca780 FUN_1434ca780 body=194 status=ok
// SIG undefined FUN_1434ca780(void)

void FUN_1434ca780(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong local_res10 [3];
  
  local_res10[0] = *(ulonglong *)*param_2;
  uVar3 = (uint)((ulonglong *)*param_2)[4] + local_res10[0];
joined_r0x0001434ca7a1:
  do {
    if (uVar3 <= local_res10[0]) {
      return;
    }
    iVar1 = FUN_143307250(local_res10);
    if (iVar1 == 0x22) {
      puVar2 = &DAT_145af7b88;
LAB_1434ca81e:
      uVar4 = 6;
    }
    else if (iVar1 == 0x26) {
      uVar4 = 5;
      puVar2 = &DAT_145af7b98;
    }
    else {
      if (iVar1 == 0x27) {
        puVar2 = &DAT_145af7b90;
        goto LAB_1434ca81e;
      }
      if (iVar1 == 0x3c) {
        uVar4 = 4;
        puVar2 = &DAT_145af7b78;
      }
      else {
        if (iVar1 != 0x3e) {
          FUN_1432c5df0(param_1,iVar1);
          goto joined_r0x0001434ca7a1;
        }
        uVar4 = 4;
        puVar2 = &DAT_145af7b80;
      }
    }
    Scaleform::StringBuffer::AppendString(param_1,puVar2,uVar4);
  } while( true );
}



// FUNCTION 1434ca850 FUN_1434ca850 body=294 status=ok
// SIG undefined FUN_1434ca850(void)

void FUN_1434ca850(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong local_res10;
  
  local_res10 = *(ulonglong *)*param_2;
  uVar2 = (uint)((ulonglong *)*param_2)[4] + local_res10;
  while (local_res10 < uVar2) {
    uVar1 = FUN_143307250(&local_res10);
    switch(uVar1) {
    case 9:
      Scaleform::StringBuffer::AppendString(param_1,"&#x9;",5);
      break;
    case 10:
      Scaleform::StringBuffer::AppendString(param_1,"&#xA;",5);
      break;
    default:
      FUN_1432c5df0(param_1,uVar1);
      break;
    case 0xd:
      Scaleform::StringBuffer::AppendString(param_1,"&#xD;",5);
      break;
    case 0x22:
      Scaleform::StringBuffer::AppendString(param_1,&DAT_145af7b88,6);
      break;
    case 0x26:
      Scaleform::StringBuffer::AppendString(param_1,&DAT_145af7b98,5);
      break;
    case 0x27:
      Scaleform::StringBuffer::AppendString(param_1,&DAT_145af7b90,6);
      break;
    case 0x3c:
      Scaleform::StringBuffer::AppendString(param_1,&DAT_145af7b78,4);
    }
  }
  return;
}



// FUNCTION 1434caa70 FUN_1434caa70 body=122 status=ok
// SIG undefined FUN_1434caa70(void)

undefined8 FUN_1434caa70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    return 1;
  }
  iVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
  iVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (iVar2 != iVar1) {
    return 2;
  }
  uVar3 = 0;
  if (param_1[8] != param_2[8]) {
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 1434cab90 FUN_1434cab90 body=39 status=ok
// SIG undefined FUN_1434cab90(void)

undefined8 FUN_1434cab90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434ce0d0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x28),
                param_1 + 0x40,param_3);
  return param_2;
}



// FUNCTION 1434cada0 ForEachChild_GC body=61 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::QName::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  return;
}



// FUNCTION 1434cae00 FUN_1434cae00 body=115 status=ok
// SIG undefined FUN_1434cae00(void)

undefined1 * FUN_1434cae00(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_res18 [16];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  longlong local_18;
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_28);
  if (local_res18[0] != '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_20,0x43f,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434cae80 FUN_1434cae80 body=112 status=ok
// SIG undefined FUN_1434cae80(void)

undefined1 *
FUN_1434cae80(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [16];
  int local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if ((local_res18[0] != '\0') && (local_18[0] == 0)) {
    FUN_1434e8360(param_4,param_1);
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434caf00 FUN_1434caf00 body=111 status=ok
// SIG undefined FUN_1434caf00(void)

undefined1 *
FUN_1434caf00(longlong *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [16];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] != '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0],param_4);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434caf80 FUN_1434caf80 body=104 status=ok
// SIG undefined FUN_1434caf80(void)

undefined1 * FUN_1434caf80(undefined8 param_1,undefined1 *param_2,int param_3,uint *param_4)

{
  if (param_3 == 0) {
    FUN_1435903c0(param_4,param_1);
    *param_2 = 1;
    return param_2;
  }
  if (9 < ((byte)*param_4 & 0x1f)) {
    if ((*param_4 >> 9 & 1) == 0) {
      FUN_1435920c0(param_4);
    }
    else {
      FUN_143592150();
    }
  }
  *param_4 = *param_4 & 0xffffffe0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434caff0 FUN_1434caff0 body=23 status=ok
// SIG undefined FUN_1434caff0(void)

undefined8 FUN_1434caff0(undefined8 param_1,undefined8 param_2)

{
  FUN_1435b0650();
  return param_2;
}



// FUNCTION 1434cb010 FUN_1434cb010 body=116 status=ok
// SIG undefined FUN_1434cb010(void)

void FUN_1434cb010(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  if (param_3 == 0) {
    FUN_143590250(param_2,lVar2 + 0x10);
  }
  else {
    local_res8[0] = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145b0a5b8,1);
    *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
    FUN_143590250(param_2,local_res8);
    piVar1 = (int *)(local_res8[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434cb0b0 FUN_1434cb0b0 body=81 status=ok
// SIG undefined FUN_1434cb0b0(void)

void FUN_1434cb0b0(undefined8 param_1,uint *param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_1435903c0(param_2,param_1);
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1434cb110 FUN_1434cb110 body=197 status=ok
// SIG undefined FUN_1434cb110(void)

void FUN_1434cb110(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x50) +
                      0x68))();
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar4,uVar1);
    *puVar4 = &PTR_ForEachChild_GC_145b1a610;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) != 0) {
        *param_2 = (longlong)puVar2 - 1;
        *param_2 = (ulonglong)puVar4;
        return;
      }
      if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
        *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
  return;
}



// FUNCTION 1434cb1f0 FUN_1434cb1f0 body=170 status=ok
// SIG undefined FUN_1434cb1f0(void)

void FUN_1434cb1f0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  FUN_1432c5960(&local_38,*(undefined8 *)(lVar2 + 0x48));
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38,0);
  puVar3 = &DAT_145af3922;
  if (local_38 != (undefined1 *)0x0) {
    puVar3 = local_38;
  }
  lVar2 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),puVar3,local_30);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 1434cb2a0 FUN_1434cb2a0 body=29 status=ok
// SIG undefined FUN_1434cb2a0(void)

void FUN_1434cb2a0(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_3);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434cb2d0 FUN_1434cb2d0 body=392 status=ok
// SIG undefined FUN_1434cb2d0(void)

void FUN_1434cb2d0(longlong param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_res18 [4];
  int local_58 [2];
  uint7 uStack_4f;
  undefined8 uStack_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  uint local_30 [10];
  
  local_res18[0] = 0;
  if ((param_3 == 0) || (uVar1 = *param_4 & 0x1f, uVar1 == 0)) goto LAB_1434cb41c;
  if (uVar1 == 0xc) {
    bVar2 = *(longlong *)(param_4 + 4) == 0;
LAB_1434cb31c:
    if (bVar2) goto LAB_1434cb41c;
  }
  else if (uVar1 == 10) {
    bVar2 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    goto LAB_1434cb31c;
  }
  FUN_1435ae6b0(local_40,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),param_4);
  FUN_1435bdeb0(local_res18,local_30,local_58);
  if (((char)local_res18[0] != '\0') && (local_58[0] == 0)) {
    FUN_1434f05f0(param_2,1);
    if (9 < ((byte)local_30[0] & 0x1f)) {
      if ((local_30[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_30);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_38 == 0) {
      return;
    }
    if ((local_38 & 1) != 0) {
      return;
    }
    if ((*(uint *)(local_38 + 8) & 0x3fffff) == 0) {
      return;
    }
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
    return;
  }
  if (9 < ((byte)local_30[0] & 0x1f)) {
    if ((local_30[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_30);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_38 != 0) && ((local_38 & 1) == 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1434cb41c:
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe1;
  *param_2 = *param_2 | 1;
  *(ulonglong *)(param_2 + 4) = (ulonglong)uStack_4f << 8;
  *(undefined8 *)(param_2 + 6) = uStack_48;
  return;
}



// FUNCTION 1434cb460 FUN_1434cb460 body=471 status=ok
// SIG undefined FUN_1434cb460(void)

void FUN_1434cb460(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_res18 [4];
  uint local_48 [2];
  undefined8 local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = *param_3;
  uVar4 = uVar1 & 0x1f;
  if (uVar4 == 0) goto LAB_1434cb61e;
  if (uVar4 == 0xc) {
    bVar5 = *(longlong *)(param_3 + 4) == 0;
LAB_1434cb4a2:
    if (bVar5) goto LAB_1434cb61e;
  }
  else if (uVar4 == 10) {
    bVar5 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434cb4a2;
  }
  local_38 = param_3[4];
  uStack_34 = param_3[5];
  uStack_30 = param_3[6];
  uStack_2c = param_3[7];
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  local_28[0] = 0;
  local_20 = 0;
  local_40 = *(undefined8 *)(param_3 + 2);
  local_48[0] = uVar1;
  if (9 < uVar4) {
    if ((uVar1 >> 9 & 1) == 0) {
      FUN_143592070(param_3);
    }
    else {
      FUN_143592140();
    }
  }
  plVar3 = (longlong *)FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(lVar2 + 0x210) + 0xd8));
  local_res18[0] = 1;
  (**(code **)(*plVar3 + 0x68))(plVar3,local_28,local_res18,local_48,1,1);
  if (*(char *)(lVar2 + 0xb8) != '\0') {
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    if (((byte)local_28[0] & 0x1f) < 10) {
      return;
    }
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
      return;
    }
    FUN_143592150();
    return;
  }
  (**(code **)(*param_1 + 200))(param_1,local_18);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
LAB_1434cb61e:
  FUN_1434f0700(param_2,param_1);
  return;
}



// FUNCTION 1434cb640 FUN_1434cb640 body=23 status=ok
// SIG undefined FUN_1434cb640(void)

void FUN_1434cb640(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  (**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  return;
}



// FUNCTION 1434cb660 FUN_1434cb660 body=380 status=ok
// SIG undefined FUN_1434cb660(void)

void FUN_1434cb660(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  ulonglong local_30;
  uint local_28 [8];
  
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) goto LAB_1434cb79c;
  if (uVar3 == 0xc) {
    bVar6 = *(longlong *)(param_3 + 4) == 0;
LAB_1434cb6ac:
    if (bVar6) {
LAB_1434cb79c:
      uVar5 = FUN_1435c8e40(local_48,0x5e4,lVar2);
      FUN_1435cbe70(lVar2,uVar5);
      piVar1 = (int *)(local_40 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  else if (uVar3 == 10) {
    bVar6 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434cb6ac;
  }
  FUN_1435ae4e0(local_38,lVar2);
  local_38[0] = local_38[0] | 8;
  if (*(char *)(lVar2 + 0xb8) == '\0') {
    puVar4 = (undefined8 *)FUN_1434ca280(param_1,local_res8,local_38);
    FUN_1434e68a0(param_2,*puVar4);
    (**(code **)(*param_1 + 0x1c8))(param_1,local_res8,local_38,*param_2);
    if (((byte)local_28[0] & 0x1f) < 10) goto LAB_1434cb6f8;
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150(local_28);
      goto LAB_1434cb6f8;
    }
  }
  else {
    if (((byte)local_28[0] & 0x1f) < 10) goto LAB_1434cb6f8;
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      goto LAB_1434cb6f8;
    }
  }
  FUN_1435920c0(local_28);
LAB_1434cb6f8:
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
    return;
  }
  return;
}



// FUNCTION 1434cb7f0 FUN_1434cb7f0 body=208 status=ok
// SIG undefined FUN_1434cb7f0(void)

void FUN_1434cb7f0(longlong *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar4,uVar1);
    *puVar4 = &PTR_ForEachChild_GC_145b1a610;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar2 - 1;
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434cb8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,puVar4);
  return;
}



// FUNCTION 1434cb8d0 FUN_1434cb8d0 body=375 status=ok
// SIG undefined FUN_1434cb8d0(void)

void FUN_1434cb8d0(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [8];
  
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) goto LAB_1434cba07;
  if (uVar3 == 0xc) {
    bVar6 = *(longlong *)(param_3 + 4) == 0;
LAB_1434cb91c:
    if (bVar6) {
LAB_1434cba07:
      uVar5 = FUN_1435c8e40(local_48,0x5e4,lVar2);
      FUN_1435cbe70(lVar2,uVar5);
      piVar1 = (int *)(local_40 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  else if (uVar3 == 10) {
    bVar6 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434cb91c;
  }
  FUN_1435ae4e0(local_38,lVar2);
  if (*(char *)(lVar2 + 0xb8) == '\0') {
    puVar4 = (undefined8 *)FUN_1434ca280(param_1,local_res8,local_38);
    FUN_1434e68a0(param_2,*puVar4);
    (**(code **)(*param_1 + 0x1c8))(param_1,local_res8,local_38,*param_2);
    if (((byte)local_28[0] & 0x1f) < 10) goto LAB_1434cb963;
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150(local_28);
      goto LAB_1434cb963;
    }
  }
  else {
    if (((byte)local_28[0] & 0x1f) < 10) goto LAB_1434cb963;
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      goto LAB_1434cb963;
    }
  }
  FUN_1435920c0(local_28);
LAB_1434cb963:
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
    return;
  }
  return;
}



// FUNCTION 1434cba50 FUN_1434cba50 body=51 status=ok
// SIG undefined FUN_1434cba50(void)

void FUN_1434cba50(longlong *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  
  *param_2 = 0xffffffff;
  pcVar1 = (char *)(**(code **)(*param_1 + 0x148))(param_1,local_res8,local_res10);
  if (*pcVar1 != '\0') {
    *param_2 = local_res10[0];
  }
  return;
}



// FUNCTION 1434cba90 FUN_1434cba90 body=214 status=ok
// SIG undefined FUN_1434cba90(void)

void FUN_1434cba90(longlong *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar4,uVar1);
    *puVar4 = &PTR_ForEachChild_GC_145b1a610;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar2 - 1;
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434cbb5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,puVar4,0,0);
  return;
}



// FUNCTION 1434cbb70 FUN_1434cbb70 body=324 status=ok
// SIG undefined FUN_1434cbb70(void)

void FUN_1434cbb70(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar4 = *(undefined8 *)(lVar6 + 0xd8);
  puVar7 = (undefined8 *)FUN_1435b5bc0(uVar4);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar7,uVar4);
    *puVar7 = &PTR_ForEachChild_GC_145b1a610;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
  }
  FUN_1434f0700(puVar7 + 8,param_1);
  if (puVar7[9] != 0) {
    piVar1 = (int *)(puVar7[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  puVar7[9] = lVar3 + 0x80;
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  FUN_1434f0700(puVar7 + 10,uVar2);
  piVar1 = (int *)(lVar3 + 0x98);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3 + 0x80);
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar7 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      if (((ulonglong)puVar5 & 1) == 0) {
        if ((*(uint *)(puVar5 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar5 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434cbcad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,puVar7,3);
  return;
}



// FUNCTION 1434cbcc0 FUN_1434cbcc0 body=90 status=ok
// SIG undefined FUN_1434cbcc0(void)

void FUN_1434cbcc0(longlong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  
  *param_2 = 0;
  if (((byte)*param_3 & 0x1f) == 0xc) {
    cVar1 = FUN_143592750(*(undefined8 *)(param_3 + 4));
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,*(undefined8 *)(param_3 + 4));
      *param_2 = iVar2 == 1;
    }
  }
  return;
}



// FUNCTION 1434cbd20 FUN_1434cbd20 body=106 status=ok
// SIG undefined FUN_1434cbd20(void)

void FUN_1434cbd20(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 local_res8 [8];
  
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x130))(param_1,local_res8,0);
  uVar1 = *param_2;
  uVar2 = *puVar3;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *param_2 = uVar1 - 1;
        *param_2 = uVar2;
        return;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = uVar2;
  }
  return;
}



// FUNCTION 1434cbd90 FUN_1434cbd90 body=594 status=ok
// SIG undefined FUN_1434cbd90(void)

void FUN_1434cbd90(longlong *param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong local_res8;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [8];
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  
  puVar9 = (undefined8 *)0x0;
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar2 = *(undefined8 *)(lVar6 + 0xd8);
  puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar7,uVar2);
    *puVar7 = &PTR_ForEachChild_GC_145b1a610;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar9 = puVar7;
  }
  local_a8[0] = 0;
  local_a0 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_a8,puVar9);
  FUN_143590140(param_2,local_a8);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if (param_3 == 0) {
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                               &DAT_145af6c98,1,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    puVar8 = (uint *)Scaleform::GFx::AS3::Value::Value(local_88,&local_res8);
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    local_a0 = *(undefined8 *)(param_4 + 2);
    local_a8[0] = *param_4;
    local_98 = param_4[4];
    uStack_94 = param_4[5];
    uStack_90 = param_4[6];
    uStack_8c = param_4[7];
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    puVar8 = local_a8;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
  }
  FUN_1435ae6b0(local_68,*(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8),puVar8);
  if ((bVar3) && (9 < ((byte)local_a8[0] & 0x1f))) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar4) && (9 < ((byte)local_88[0] & 0x1f))) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar5) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,puVar9,local_68);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_60 != 0) && ((local_60 & 1) == 0)) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434cbff0 FUN_1434cbff0 body=597 status=ok
// SIG undefined FUN_1434cbff0(void)

void FUN_1434cbff0(longlong *param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong local_res8;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [8];
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  
  puVar9 = (undefined8 *)0x0;
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar2 = *(undefined8 *)(lVar6 + 0xd8);
  puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar7,uVar2);
    *puVar7 = &PTR_ForEachChild_GC_145b1a610;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar9 = puVar7;
  }
  local_a8[0] = 0;
  local_a0 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_a8,puVar9);
  FUN_143590140(param_2,local_a8);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if (param_3 == 0) {
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                               &DAT_145af6c98,1,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    puVar8 = (uint *)Scaleform::GFx::AS3::Value::Value(local_88,&local_res8);
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    local_a0 = *(undefined8 *)(param_4 + 2);
    local_a8[0] = *param_4;
    local_98 = param_4[4];
    uStack_94 = param_4[5];
    uStack_90 = param_4[6];
    uStack_8c = param_4[7];
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    puVar8 = local_a8;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
  }
  FUN_1435ae6b0(local_68,*(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8),puVar8);
  if ((bVar3) && (9 < ((byte)local_a8[0] & 0x1f))) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar4) && (9 < ((byte)local_88[0] & 0x1f))) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar5) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  (**(code **)(*param_1 + 0x140))(param_1,puVar9,local_68);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_60 != 0) && ((local_60 & 1) == 0)) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434cc250 FUN_1434cc250 body=31 status=ok
// SIG undefined FUN_1434cc250(void)

void FUN_1434cc250(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x100))();
  *(bool *)param_2 = cVar1 == '\0';
  return;
}



// FUNCTION 1434cc280 FUN_1434cc280 body=26 status=ok
// SIG undefined FUN_1434cc280(void)

void FUN_1434cc280(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x100))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434cc2a0 FUN_1434cc2a0 body=1151 status=ok
// SIG undefined FUN_1434cc2a0(void)

void FUN_1434cc2a0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  ulonglong local_res20;
  longlong local_a0;
  uint *local_98;
  uint local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  uint uStack_78;
  uint uStack_74;
  uint local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  plVar1 = param_1 + 5;
  FUN_1435ca860(*(undefined8 *)(*plVar1 + 0x98),&local_res20);
  uVar3 = local_res20;
  uVar14 = *param_2;
  if (local_res20 != uVar14) {
    if (uVar14 != 0) {
      if ((uVar14 & 1) == 0) {
        if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar14 - 1;
      }
    }
    *param_2 = uVar3;
  }
  uVar14 = 0;
  local_res18 = 0;
  do {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0xc0))(param_1);
    if ((plVar6 != (longlong *)0x0) && (uVar3 = plVar6[1], uVar15 = uVar14, uVar3 != 0)) {
      do {
        lVar13 = *(longlong *)(*plVar6 + uVar15 * 8);
        local_70[0] = *(uint *)(lVar13 + 0x48);
        local_68 = *(undefined8 *)(lVar13 + 0x50);
        local_60 = *(undefined4 *)(lVar13 + 0x58);
        uStack_5c = *(undefined4 *)(lVar13 + 0x5c);
        uStack_58 = *(undefined4 *)(lVar13 + 0x60);
        uStack_54 = *(undefined4 *)(lVar13 + 100);
        if (9 < ((byte)*(uint *)(lVar13 + 0x48) & 0x1f)) {
          if ((*(uint *)(lVar13 + 0x48) >> 9 & 1) == 0) {
            FUN_143592070();
          }
          else {
            FUN_143592140();
          }
        }
        uVar9 = uVar14;
        if (local_res18 != 0) {
          uVar7 = FUN_143591d60(local_res8,local_70);
          uVar7 = uVar7 & *(ulonglong *)(local_res18 + 8);
          puVar12 = (ulonglong *)(local_res18 + 0x10 + uVar7 * 0x30);
          if ((*puVar12 != 0xfffffffffffffffe) && (uVar11 = uVar7, puVar12[1] == uVar7)) {
            while ((puVar12[1] != uVar7 ||
                   (cVar5 = FUN_1435927d0(puVar12 + 2,local_70), cVar5 == '\0'))) {
              uVar11 = *puVar12;
              if (uVar11 == 0xffffffffffffffff) goto LAB_1434cc423;
              puVar12 = (ulonglong *)(local_res18 + 0x10 + uVar11 * 0x30);
            }
            if (-1 < (longlong)uVar11) {
              uVar9 = local_res18 + 0x20 + uVar11 * 0x30;
            }
          }
        }
LAB_1434cc423:
        uVar7 = local_res20;
        if (uVar9 == 0) {
          local_90[0] = 0xb;
          local_88 = 0;
          if (lVar13 != 0) {
            *(uint *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1U & 0x8fffffff;
          }
          local_80 = lVar13;
          if (*(longlong *)(local_res20 + 0x40) == *(longlong *)(local_res20 + 0x80)) {
            FUN_1434f0300(local_res20 + 0x78,*(undefined8 *)(local_res20 + 0x90),
                          *(longlong *)(local_res20 + 0x80) + 1);
            puVar10 = (uint *)(*(longlong *)(uVar7 + 0x78) + -0x20 +
                              *(longlong *)(uVar7 + 0x80) * 0x20);
            if (puVar10 != (uint *)0x0) {
              *puVar10 = local_90[0];
              *(undefined8 *)(puVar10 + 2) = local_88;
              puVar10[4] = (uint)local_80;
              puVar10[5] = local_80._4_4_;
              puVar10[6] = uStack_78;
              puVar10[7] = uStack_74;
              if (9 < ((byte)local_90[0] & 0x1f)) {
                if ((local_90[0] >> 9 & 1) == 0) {
                  FUN_143592070(local_90);
                }
                else {
                  FUN_143592140();
                }
              }
            }
          }
          else {
            *(longlong *)(local_res20 + 0x50) = *(longlong *)(local_res20 + 0x40);
            local_a0 = local_res20 + 0x50;
            local_98 = local_90;
            FUN_1434e4980(local_res20 + 0x98,*(undefined8 *)(local_res20 + 0xa0),&local_a0);
          }
          *(longlong *)(uVar7 + 0x40) = *(longlong *)(uVar7 + 0x40) + 1;
          if (9 < ((byte)local_90[0] & 0x1f)) {
            if ((local_90[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_90);
            }
            else {
              FUN_143592150();
            }
          }
          uVar8 = FUN_143591d60(local_res10,local_70);
          FUN_1434e57d0(&local_res18,&local_res18,local_70,uVar8);
        }
        if (9 < ((byte)local_70[0] & 0x1f)) {
          if ((local_70[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_70);
          }
          else {
            FUN_143592150();
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar3);
    }
    param_1 = (longlong *)param_1[9];
    if (param_1 == (longlong *)0x0) {
      if (*(longlong *)(local_res20 + 0x40) == 0) {
        local_80 = *(longlong *)(*(longlong *)(*plVar1 + 0x98) + 0x1d8);
        local_90[0] = 0xb;
        local_88 = 0;
        if (local_80 != 0) {
          *(uint *)(local_80 + 8) = *(int *)(local_80 + 8) + 1U & 0x8fffffff;
        }
        if (*(longlong *)(local_res20 + 0x40) == *(longlong *)(local_res20 + 0x80)) {
          FUN_1434f0300(local_res20 + 0x78,*(undefined8 *)(local_res20 + 0x90),
                        *(longlong *)(local_res20 + 0x80) + 1);
          puVar10 = (uint *)(*(longlong *)(local_res20 + 0x78) + -0x20 +
                            *(longlong *)(local_res20 + 0x80) * 0x20);
          if (puVar10 != (uint *)0x0) {
            *puVar10 = local_90[0];
            *(undefined8 *)(puVar10 + 2) = local_88;
            puVar10[4] = (uint)local_80;
            puVar10[5] = local_80._4_4_;
            puVar10[6] = uStack_78;
            puVar10[7] = uStack_74;
            if (9 < ((byte)local_90[0] & 0x1f)) {
              if ((local_90[0] >> 9 & 1) == 0) {
                FUN_143592070(local_90);
              }
              else {
                FUN_143592140();
              }
            }
          }
        }
        else {
          *(longlong *)(local_res20 + 0x50) = *(longlong *)(local_res20 + 0x40);
          local_a0 = local_res20 + 0x50;
          local_98 = local_90;
          FUN_1434e4980(local_res20 + 0x98,*(undefined8 *)(local_res20 + 0xa0),&local_a0);
        }
        *(longlong *)(local_res20 + 0x40) = *(longlong *)(local_res20 + 0x40) + 1;
        if (9 < ((byte)local_90[0] & 0x1f)) {
          if ((local_90[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_90);
          }
          else {
            FUN_143592150();
          }
        }
      }
      if (local_res18 != 0) {
        lVar13 = *(longlong *)(local_res18 + 8) + 1;
        do {
          lVar4 = local_res18;
          if (*(longlong *)(local_res18 + 0x10 + uVar14) != -2) {
            uVar2 = *(uint *)(local_res18 + 0x20 + uVar14);
            if (9 < ((byte)uVar2 & 0x1f)) {
              if ((uVar2 >> 9 & 1) == 0) {
                FUN_1435920c0();
              }
              else {
                FUN_143592150();
              }
            }
            *(undefined8 *)(lVar4 + 0x10 + uVar14) = 0xfffffffffffffffe;
          }
          uVar14 = uVar14 + 0x30;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        if (local_res18 != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 1434cc730 FUN_1434cc730 body=116 status=ok
// SIG undefined FUN_1434cc730(void)

void FUN_1434cc730(longlong *param_1,uint *param_2)

{
  char *pcVar1;
  undefined1 local_res8 [8];
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x158))(param_1,local_res8);
  if (*pcVar1 != '\0') {
    FUN_1435903c0(param_2,param_1);
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1434cc7b0 FUN_1434cc7b0 body=116 status=ok
// SIG undefined FUN_1434cc7b0(void)

void FUN_1434cc7b0(longlong *param_1,uint *param_2)

{
  char *pcVar1;
  undefined1 local_res8 [8];
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x160))(param_1,local_res8);
  if (*pcVar1 != '\0') {
    FUN_1435903c0(param_2,param_1);
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1434cc840 FUN_1434cc840 body=62 status=ok
// SIG undefined FUN_1434cc840(void)

void FUN_1434cc840(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1434cc890 FUN_1434cc890 body=151 status=ok
// SIG undefined FUN_1434cc890(void)

void FUN_1434cc890(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong local_res8;
  
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0x180))(param_1,&local_res8);
  if (puVar2 != param_2) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_2;
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
    *param_2 = *puVar2;
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434cc930 FUN_1434cc930 body=210 status=ok
// SIG undefined FUN_1434cc930(void)

void FUN_1434cc930(longlong *param_1,uint *param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  if (param_3 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x128))();
    FUN_1434e69a0(param_2,uVar2);
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  local_18[0] = lVar4 + 0x48;
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_4,local_res18,local_18);
  if (*pcVar3 != '\0') {
    lVar4 = (**(code **)(*param_1 + 400))(param_1,local_18,0);
    if (lVar4 == 0) {
      if (9 < ((byte)*param_2 & 0x1f)) {
        if ((*param_2 >> 9 & 1) == 0) {
          FUN_1435920c0(param_2);
        }
        else {
          FUN_143592150();
        }
      }
      *param_2 = *param_2 & 0xffffffe0;
    }
    else {
      FUN_1434e69a0(param_2,lVar4);
    }
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434cca10 FUN_1434cca10 body=1332 status=ok
// SIG undefined FUN_1434cca10(void)

void FUN_1434cca10(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong local_res10;
  longlong local_res18;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar14 = *(longlong *)(param_1[5] + 0x98);
  local_res18 = lVar14;
  FUN_1435ca860(lVar14,&local_res10);
  uVar15 = local_res10;
  uVar12 = *param_2;
  if (local_res10 != uVar12) {
    if (uVar12 != 0) {
      if ((uVar12 & 1) == 0) {
        if ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar12 - 1;
      }
    }
    *param_2 = uVar15;
  }
  iVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (3 < iVar3 - 2U) {
    uStack_40 = *(undefined8 *)(lVar14 + 0x48);
    uVar12 = 0;
    lVar14 = 0;
    plVar7 = (longlong *)param_1[9];
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[9]) {
      plVar5 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((plVar5 != (longlong *)0x0) && (uVar15 = 0, plVar5[1] != 0)) {
        do {
          lVar13 = *(longlong *)(*plVar5 + uVar15 * 8);
          uVar4 = *(uint *)(lVar13 + 0x48) & 0x1f;
          if (uVar4 != 0) {
            if (uVar4 == 0xc) {
              bVar16 = *(longlong *)(lVar13 + 0x58) == 0;
LAB_1434ccb33:
              if (bVar16) goto LAB_1434ccc1c;
            }
            else if (uVar4 == 10) {
              bVar16 = *(longlong *)(lVar13 + 0x58) ==
                       *(longlong *)(*(longlong *)(lVar13 + 0x58) + 8) + 0x80;
              goto LAB_1434ccb33;
            }
            uVar11 = 0;
            if (uVar12 != 0) {
              do {
                cVar2 = FUN_1435927d0(*(longlong *)(lVar14 + uVar11 * 8) + 0x48,
                                      *(longlong *)(*plVar5 + uVar15 * 8) + 0x48);
                if (cVar2 != '\0') goto LAB_1434ccc1c;
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar12);
            }
            uVar8 = 0;
            uVar11 = *(ulonglong *)(*plVar5 + uVar15 * 8);
            if (uVar12 != 0) {
              do {
                lVar13 = *(longlong *)(lVar14 + uVar8 * 8);
                if ((*(longlong *)(lVar13 + 0x38) == *(longlong *)(uVar11 + 0x38)) &&
                   (((*(byte *)(lVar13 + 0x28) ^ *(byte *)(uVar11 + 0x28)) & 0xf) == 0))
                goto LAB_1434ccc1c;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar12);
            }
            if (uVar11 != 0) {
              *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
            }
            FUN_1434f0160(&local_58,uStack_40,uVar12 + 1);
            uVar12 = local_50;
            lVar14 = local_58;
            puVar6 = (ulonglong *)(local_50 * 8 + -8 + local_58);
            if (puVar6 != (ulonglong *)0x0) {
              *puVar6 = uVar11;
              if (uVar11 == 0) goto LAB_1434ccc1c;
              *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
            }
            if (((uVar11 != 0) && ((uVar11 & 1) == 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0))
            {
              *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
              FUN_1434ef880(uVar11);
            }
          }
LAB_1434ccc1c:
          uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)plVar5[1]);
      }
    }
    lVar13 = 0;
    uVar15 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = *(undefined8 *)(local_res18 + 0x48);
    plVar7 = (longlong *)(**(code **)(*param_1 + 0xc0))(param_1);
    if ((plVar7 != (longlong *)0x0) && (uVar11 = 0, plVar7[1] != 0)) {
      do {
        uVar8 = *(ulonglong *)(*plVar7 + uVar11 * 8);
        uVar4 = *(uint *)(uVar8 + 0x48) & 0x1f;
        if (uVar4 != 0) {
          if (uVar4 == 0xc) {
            bVar16 = *(longlong *)(uVar8 + 0x58) == 0;
LAB_1434cccb3:
            if (bVar16) goto LAB_1434ccd5b;
          }
          else if (uVar4 == 10) {
            bVar16 = *(longlong *)(uVar8 + 0x58) ==
                     *(longlong *)(*(longlong *)(uVar8 + 0x58) + 8) + 0x80;
            goto LAB_1434cccb3;
          }
          uVar9 = 0;
          if (uVar15 != 0) {
            do {
              lVar1 = *(longlong *)(lVar13 + uVar9 * 8);
              if ((*(longlong *)(lVar1 + 0x38) == *(longlong *)(uVar8 + 0x38)) &&
                 (((*(byte *)(lVar1 + 0x28) ^ *(byte *)(uVar8 + 0x28)) & 0xf) == 0))
              goto LAB_1434ccd5b;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar15);
          }
          if (uVar8 != 0) {
            *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
          }
          FUN_1434f0160(&local_58,uStack_40,uVar15 + 1);
          uVar15 = local_50;
          lVar13 = local_58;
          puVar6 = (ulonglong *)(local_58 + (local_50 - 1) * 8);
          if (puVar6 != (ulonglong *)0x0) {
            *puVar6 = uVar8;
            if (uVar8 == 0) goto LAB_1434ccd5b;
            *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
          }
          if (((uVar8 != 0) && ((uVar8 & 1) == 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
            FUN_1434ef880(uVar8);
          }
        }
LAB_1434ccd5b:
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulonglong)plVar7[1]);
    }
    uVar11 = 0;
    if (uVar15 != 0) {
      do {
        uVar8 = local_res10;
        local_48 = *(longlong *)(lVar13 + uVar11 * 8);
        local_58 = CONCAT44(local_58._4_4_,0xb);
        local_50 = 0;
        if (local_48 != 0) {
          *(uint *)(local_48 + 8) = *(int *)(local_48 + 8) + 1U & 0x8fffffff;
        }
        if (*(longlong *)(local_res10 + 0x40) == *(longlong *)(local_res10 + 0x80)) {
          FUN_1434f0300(local_res10 + 0x78,*(undefined8 *)(local_res10 + 0x90),
                        *(longlong *)(local_res10 + 0x80) + 1);
          puVar10 = (uint *)(*(longlong *)(uVar8 + 0x78) + -0x20 +
                            *(longlong *)(uVar8 + 0x80) * 0x20);
          if (puVar10 != (uint *)0x0) {
            *puVar10 = (uint)local_58;
            *(ulonglong *)(puVar10 + 2) = local_50;
            puVar10[4] = (uint)local_48;
            puVar10[5] = local_48._4_4_;
            puVar10[6] = (uint)uStack_40;
            puVar10[7] = uStack_40._4_4_;
            if (9 < ((byte)local_58 & 0x1f)) {
              if (((uint)local_58 >> 9 & 1) == 0) {
                FUN_143592070(&local_58);
              }
              else {
                FUN_143592140();
              }
            }
          }
        }
        else {
          *(longlong *)(local_res10 + 0x50) = *(longlong *)(local_res10 + 0x40);
          local_68 = local_res10 + 0x50;
          local_60 = &local_58;
          FUN_1434e4980(local_res10 + 0x98,*(undefined8 *)(local_res10 + 0xa0),&local_68);
        }
        *(longlong *)(uVar8 + 0x40) = *(longlong *)(uVar8 + 0x40) + 1;
        if (9 < ((byte)local_58 & 0x1f)) {
          if (((uint)local_58 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_58);
          }
          else {
            FUN_143592150();
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar15);
    }
    puVar6 = (ulonglong *)(lVar13 + (uVar15 - 1) * 8);
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      uVar11 = *puVar6;
      if (uVar11 != 0) {
        if ((uVar11 & 1) == 0) {
          if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar6 = uVar11 - 1;
        }
      }
      puVar6 = puVar6 + -1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar13);
    puVar6 = (ulonglong *)(uVar12 * 8 + -8 + lVar14);
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      uVar15 = *puVar6;
      if (uVar15 != 0) {
        if ((uVar15 & 1) == 0) {
          if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar6 = uVar15 - 1;
        }
      }
      puVar6 = puVar6 + -1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar14);
  }
  return;
}



// FUNCTION 1434ccf50 FUN_1434ccf50 body=113 status=ok
// SIG undefined FUN_1434ccf50(void)

void FUN_1434ccf50(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  iVar1 = (**(code **)(*param_1 + 0xf0))();
  if (iVar1 == 1) {
    pcVar2 = "element";
  }
  else if (iVar1 == 2) {
    pcVar2 = "text";
  }
  else if (iVar1 == 3) {
    pcVar2 = "comment";
  }
  else if (iVar1 == 4) {
    pcVar2 = "processing-instruction";
  }
  else if (iVar1 == 5) {
    pcVar2 = "attribute";
  }
  FUN_1433601c0(param_2,pcVar2);
  return;
}



// FUNCTION 1434ccfd0 FUN_1434ccfd0 body=46 status=ok
// SIG undefined FUN_1434ccfd0(void)

void FUN_1434ccfd0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x188))();
  FUN_1434f0700(param_2,param_1);
  return;
}



// FUNCTION 1434cd010 FUN_1434cd010 body=81 status=ok
// SIG undefined FUN_1434cd010(void)

void FUN_1434cd010(longlong param_1,uint *param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1435903c0(param_2);
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1434cd070 FUN_1434cd070 body=316 status=ok
// SIG undefined FUN_1434cd070(void)

void FUN_1434cd070(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined1 local_res18 [16];
  uint local_48 [2];
  undefined8 local_40;
  
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar2 = *(undefined8 *)(lVar3 + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar4,uVar2);
    *puVar4 = &PTR_ForEachChild_GC_145b1a610;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
  }
  local_40 = 0;
  local_48[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_48,puVar4);
  FUN_143590140(param_2,local_48);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  local_res8 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if (param_3 != 0) {
    FUN_1435911f0(param_4,local_res18,&local_res8);
  }
  (**(code **)(*param_1 + 0x138))(param_1,puVar4,4,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434cd1c0 FUN_1434cd1c0 body=138 status=ok
// SIG undefined FUN_1434cd1c0(void)

void FUN_1434cd1c0(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0x150))(param_1,local_res8,0,param_3);
  if (*pcVar2 != '\0') {
    FUN_1434f0700(param_2,param_1);
    return;
  }
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *param_2 = uVar1 - 1;
      *param_2 = 0;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1434cd250 FUN_1434cd250 body=37 status=ok
// SIG undefined FUN_1434cd250(void)

void FUN_1434cd250(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
  FUN_1434f0700(param_2,uVar1);
  return;
}



// FUNCTION 1434cd280 FUN_1434cd280 body=547 status=ok
// SIG undefined FUN_1434cd280(void)

void FUN_1434cd280(longlong *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined4 local_res8 [2];
  uint local_88 [2];
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68 [2];
  undefined8 local_60;
  undefined1 local_48 [8];
  ulonglong local_40;
  uint local_38 [8];
  
  lVar1 = *(longlong *)(param_1[5] + 0x98);
  FUN_1435ae4e0(local_48,lVar1);
  if (*(char *)(lVar1 + 0xb8) != '\0') goto LAB_1434cd445;
  lVar1 = FUN_1435caba0(*(undefined8 *)(param_1[5] + 0x98),param_4);
  if (*(int *)(lVar1 + 0x90) == 5) {
    local_88[0] = *param_4;
    local_78 = param_4[4];
    uStack_74 = param_4[5];
    uStack_70 = param_4[6];
    uStack_6c = param_4[7];
    local_68[0] = 0;
    local_60 = 0;
    local_80 = *(undefined8 *)(param_4 + 2);
    if (9 < ((byte)local_88[0] & 0x1f)) {
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    plVar2 = (longlong *)FUN_1435b4fe0(param_1[5]);
    local_res8[0] = 1;
    (**(code **)(*plVar2 + 0x68))(plVar2,local_68,local_res8,local_88,1,1);
    if (*(char *)(*(longlong *)(param_1[5] + 0x98) + 0xb8) == '\0') {
      pcVar3 = (char *)(**(code **)(*param_1 + 0x1b8))(param_1,local_res8,local_48,local_68);
      if (*pcVar3 != '\0') {
        if (9 < ((byte)local_88[0] & 0x1f)) {
          if ((local_88[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_88);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_68[0] & 0x1f)) {
          if ((local_68[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_68);
          }
          else {
            FUN_143592150();
          }
        }
        goto LAB_1434cd43a;
      }
    }
    if (9 < ((byte)local_88[0] & 0x1f)) {
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_88);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    pcVar3 = (char *)(**(code **)(*param_1 + 0x1b8))(param_1,local_res8,local_48,param_4);
    if (*pcVar3 == '\0') goto LAB_1434cd445;
LAB_1434cd43a:
    FUN_1434f0700(param_2,param_1);
  }
LAB_1434cd445:
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_40 != 0) && ((local_40 & 1) == 0)) && ((*(uint *)(local_40 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434cd4b0 FUN_1434cd4b0 body=49 status=ok
// SIG undefined FUN_1434cd4b0(void)

void FUN_1434cd4b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x1c0))(param_1,param_3);
  FUN_1434f0700(param_2,param_1);
  return;
}



// FUNCTION 1434cd4f0 FUN_1434cd4f0 body=199 status=ok
// SIG undefined FUN_1434cd4f0(void)

void FUN_1434cd4f0(longlong *param_1,undefined8 param_2,byte *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  iVar5 = (**(code **)(*param_1 + 0xf0))();
  if (1 < iVar5 - 2U) {
    uVar2 = *(undefined8 *)(param_1[5] + 0x98);
    cVar4 = FUN_143592700(param_3);
    if (cVar4 == '\0') {
      if ((*param_3 & 0x1f) != 0) {
        FUN_1435911f0(param_3,local_res8,param_1 + 8);
      }
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x40);
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(param_1[8] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      param_1[8] = lVar3;
    }
    pcVar6 = (char *)FUN_1434c9f50(local_res8,param_1 + 8);
    if (*pcVar6 == '\0') {
      uVar7 = FUN_1435c8e40(local_18,0x45d,uVar2);
      FUN_1435cbe70(uVar2,uVar7);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return;
}



// FUNCTION 1434cd5c0 FUN_1434cd5c0 body=452 status=ok
// SIG undefined FUN_1434cd5c0(void)

void FUN_1434cd5c0(longlong *param_1,undefined8 param_2,byte *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  longlong local_res20;
  undefined1 local_28 [8];
  longlong local_20;
  
  iVar7 = (**(code **)(*param_1 + 0xf0))();
  if (iVar7 - 2U < 2) {
    return;
  }
  lVar10 = 0;
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x218);
  local_res20 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  cVar6 = FUN_143592700(param_3);
  if (cVar6 == '\0') {
    if (((*param_3 & 0x1f) != 0) &&
       (pcVar8 = (char *)FUN_1435911f0(param_3,local_res8,&local_res20), *pcVar8 == '\0')) {
      uVar9 = FUN_1435c8e40(local_28,0x45d,lVar2);
      FUN_1435cbe70(lVar2,uVar9);
      piVar1 = (int *)(local_20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1434cd761;
    }
  }
  else {
    lVar3 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      (**(code **)(*param_1 + 0x118))(param_1);
    }
    lVar4 = *(longlong *)(lVar3 + 0x40);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    lVar10 = *(longlong *)(lVar3 + 0x48);
    local_res20 = lVar4;
  }
  pcVar8 = (char *)FUN_1434c9f50(local_res8,&local_res20);
  lVar3 = local_res20;
  if (*pcVar8 == '\0') {
    uVar9 = FUN_1435c8e40(local_28,0x45d,lVar2);
    FUN_1435cbe70(lVar2,uVar9);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    piVar1 = (int *)(param_1[8] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    param_1[8] = lVar3;
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(lVar2 + 0x1d8);
    }
    else if (iVar7 == 5) {
      plVar5 = (longlong *)param_1[9];
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      }
    }
    else if (iVar7 == 1) {
      (**(code **)(*param_1 + 200))(param_1,lVar10);
    }
    (**(code **)(*param_1 + 0x118))(param_1,lVar10);
  }
LAB_1434cd761:
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434cd790 FUN_1434cd790 body=342 status=ok
// SIG undefined FUN_1434cd790(void)

void FUN_1434cd790(longlong *param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res8;
  longlong *local_res20;
  uint local_38 [2];
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  iVar3 = (**(code **)(*param_1 + 0xf0))();
  if (iVar3 - 2U < 3) {
    return;
  }
  lVar5 = *(longlong *)(param_1[5] + 0x98);
  lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x218);
  local_res8 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  uVar4 = FUN_143590540();
  FUN_1435cc0e0(lVar5,&local_res20,0,&local_res8,uVar4);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_30 = *(undefined8 *)(param_3 + 2);
  local_38[0] = *param_3;
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_143592070(param_3);
    }
    else {
      FUN_143592140();
    }
  }
  (**(code **)(*local_res20 + 0x20))(local_res20,1,local_38);
  if (iVar3 == 5) {
    plVar6 = (longlong *)param_1[9];
    if (plVar6 == (longlong *)0x0) goto LAB_1434cd897;
    lVar5 = *plVar6;
LAB_1434cd87f:
    (**(code **)(lVar5 + 200))(plVar6,local_res20);
  }
  else if (iVar3 == 1) {
    lVar5 = *param_1;
    plVar6 = param_1;
    goto LAB_1434cd87f;
  }
  (**(code **)(*param_1 + 0x118))(param_1,local_res20);
LAB_1434cd897:
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  if ((((ulonglong)local_res20 & 1) == 0) && ((*(uint *)(local_res20 + 1) & 0x3fffff) != 0)) {
    *(uint *)(local_res20 + 1) = *(uint *)(local_res20 + 1) - 1;
    FUN_1434ef880(local_res20);
  }
  return;
}



// FUNCTION 1434cd8f0 FUN_1434cd8f0 body=215 status=ok
// SIG undefined FUN_1434cd8f0(void)

void FUN_1434cd8f0(longlong *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x50) + 0x68))();
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar4,uVar1);
    *puVar4 = &PTR_ForEachChild_GC_145b1a610;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar2 - 1;
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434cd9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,puVar4,2);
  return;
}



// FUNCTION 1434cd9d0 FUN_1434cd9d0 body=182 status=ok
// SIG undefined FUN_1434cd9d0(void)

void FUN_1434cd9d0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  FUN_1432c5960(&local_38,*(undefined8 *)(lVar2 + 0x48));
  (**(code **)(*param_1 + 0xe8))(param_1,&local_38,0,0,0);
  puVar3 = &DAT_145af3922;
  if (local_38 != (undefined1 *)0x0) {
    puVar3 = local_38;
  }
  lVar2 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),puVar3,local_30);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 1434cdab0 FUN_1434cdab0 body=30 status=ok
// SIG undefined FUN_1434cdab0(void)

undefined8 * FUN_1434cdab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cb110();
  return param_2;
}



// FUNCTION 1434cdae0 FUN_1434cdae0 body=30 status=ok
// SIG undefined FUN_1434cdae0(void)

undefined8 * FUN_1434cdae0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cb660();
  return param_2;
}



// FUNCTION 1434cdb10 FUN_1434cdb10 body=30 status=ok
// SIG undefined FUN_1434cdb10(void)

undefined8 * FUN_1434cdb10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cb7f0();
  return param_2;
}



// FUNCTION 1434cdb40 FUN_1434cdb40 body=30 status=ok
// SIG undefined FUN_1434cdb40(void)

undefined8 * FUN_1434cdb40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cb8d0();
  return param_2;
}



// FUNCTION 1434cdb70 FUN_1434cdb70 body=30 status=ok
// SIG undefined FUN_1434cdb70(void)

undefined8 * FUN_1434cdb70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cba90();
  return param_2;
}



// FUNCTION 1434cdba0 FUN_1434cdba0 body=30 status=ok
// SIG undefined FUN_1434cdba0(void)

undefined8 * FUN_1434cdba0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cbb70();
  return param_2;
}



// FUNCTION 1434cdbd0 FUN_1434cdbd0 body=30 status=ok
// SIG undefined FUN_1434cdbd0(void)

undefined8 * FUN_1434cdbd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cc2a0();
  return param_2;
}



// FUNCTION 1434cdc00 FUN_1434cdc00 body=30 status=ok
// SIG undefined FUN_1434cdc00(void)

undefined8 * FUN_1434cdc00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cc890();
  return param_2;
}



// FUNCTION 1434cdc30 FUN_1434cdc30 body=30 status=ok
// SIG undefined FUN_1434cdc30(void)

undefined8 * FUN_1434cdc30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cca10();
  return param_2;
}



// FUNCTION 1434cdc60 FUN_1434cdc60 body=30 status=ok
// SIG undefined FUN_1434cdc60(void)

undefined8 * FUN_1434cdc60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434cd8f0();
  return param_2;
}



// FUNCTION 1434cdc90 FUN_1434cdc90 body=51 status=ok
// SIG undefined FUN_1434cdc90(void)

undefined8 * FUN_1434cdc90(undefined8 *param_1)

{
  FUN_1435b93d0();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b19ba0;
  *(undefined4 *)(param_1 + 0x12) = 0x12;
  return param_1;
}



// FUNCTION 1434cdcd0 FUN_1434cdcd0 body=201 status=ok
// SIG undefined FUN_1434cdcd0(void)

void FUN_1434cdcd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar3,param_3);
    *puVar3 = &PTR_ForEachChild_GC_145b199d0;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x98) + 0x10) + 0x218);
    puVar3[8] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    puVar3[9] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
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



// FUNCTION 1434cdda0 FUN_1434cdda0 body=238 status=ok
// SIG undefined FUN_1434cdda0(void)

void FUN_1434cdda0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res18;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    uVar4 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x60))();
    uVar4 = FUN_1435b4fe0(uVar4);
    lVar2 = *(longlong *)(param_3 + 4);
    lVar5 = FUN_1435b3ae0(uVar4);
    if (lVar2 == lVar5) {
      FUN_143590250(param_4,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  if (((byte)*param_3 & 0x1f) == 0xc) {
    cVar3 = FUN_143592750(*(undefined8 *)(param_3 + 4));
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_3 + 4);
      local_res18 = **(longlong **)(param_2 + 0x10);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      FUN_1434cb1f0(uVar4,&local_res18);
      FUN_143590250(param_4,&local_res18);
      local_10 = local_res18;
      goto LAB_1434cde73;
    }
  }
  uVar4 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar4);
LAB_1434cde73:
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434cdea0 FUN_1434cdea0 body=238 status=ok
// SIG undefined FUN_1434cdea0(void)

void FUN_1434cdea0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    uVar4 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x60))();
    uVar4 = FUN_1435b4fe0(uVar4);
    lVar2 = *(longlong *)(param_3 + 4);
    lVar5 = FUN_1435b3ae0(uVar4);
    if (lVar2 == lVar5) {
      FUN_1434aec80(param_1,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  if ((((byte)*param_3 & 0x1f) == 0xc) &&
     (cVar3 = FUN_143592750(*(undefined8 *)(param_3 + 4)), cVar3 != '\0')) {
    FUN_1434cb2d0(*(undefined8 *)(param_3 + 4),param_4,param_5,param_6);
    return;
  }
  uVar4 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434cdfa0 FUN_1434cdfa0 body=297 status=ok
// SIG undefined FUN_1434cdfa0(void)

void FUN_1434cdfa0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_res18 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    uVar6 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x60))();
    uVar6 = FUN_1435b4fe0(uVar6);
    lVar2 = *(longlong *)(param_3 + 4);
    lVar7 = FUN_1435b3ae0(uVar6);
    if (lVar2 == lVar7) {
      FUN_1434aea70(param_1,param_2,param_3,param_4);
      return;
    }
  }
  if ((((byte)*param_3 & 0x1f) == 0xc) &&
     (cVar4 = FUN_143592750(*(undefined8 *)(param_3 + 4)), cVar4 != '\0')) {
    plVar3 = *(longlong **)(param_3 + 4);
    if ((param_5 == 0) || (((byte)*param_6 & 0x1f) != 10)) {
      uVar6 = FUN_1435c8e40(local_28,0x5e4,param_2);
      FUN_1435cbef0(param_2,uVar6);
    }
    else {
      local_res18[0] = *(longlong *)(param_6 + 4);
      *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
      uVar5 = (**(code **)(*plVar3 + 0x108))(plVar3,local_res18);
      FUN_1434f05f0(param_4,uVar5);
      local_20 = local_res18[0];
    }
  }
  else {
    uVar6 = FUN_1435c8e40(local_28,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar6);
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ce0d0 FUN_1434ce0d0 body=155 status=ok
// SIG undefined FUN_1434ce0d0(void)

undefined8 *
FUN_1434ce0d0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x50);
  if (puVar4 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar4,param_3);
    *puVar4 = &PTR_ForEachChild_GC_145b199d0;
    lVar3 = *param_4;
    puVar4[8] = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4[9] = param_5;
    if (param_5 != 0) {
      *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar4;
  }
  return param_2;
}



// FUNCTION 1434ce180 FUN_1434ce180 body=131 status=ok
// SIG undefined FUN_1434ce180(void)

undefined8 *
FUN_1434ce180(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0xa0,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1434cfd60(lVar2,param_3,param_4,param_5,param_6);
    *param_2 = uVar3;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434ce210 FUN_1434ce210 body=165 status=ok
// SIG undefined FUN_1434ce210(void)

undefined8 *
FUN_1434ce210(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x50);
  if (puVar4 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar4,param_3);
    *puVar4 = &PTR_ForEachChild_GC_145b199d0;
    lVar3 = *param_4;
    puVar4[8] = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4[9] = param_5;
    if (param_5 != 0) {
      *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar4;
    *puVar4 = &PTR_ForEachChild_GC_145b1a0a0;
  }
  return param_2;
}



// FUNCTION 1434ce2c0 FUN_1434ce2c0 body=197 status=ok
// SIG undefined FUN_1434ce2c0(void)

undefined8 *
FUN_1434ce2c0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar3 = *(longlong *)(param_3 + 0x98);
  lVar5 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),*param_4,param_4[1]);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  plVar4 = *(longlong **)(lVar3 + 0x48);
  puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x50);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar6,param_3);
    *puVar6 = &PTR_ForEachChild_GC_145b199d0;
    puVar6[8] = lVar5;
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    puVar6[9] = param_5;
    if (param_5 != 0) {
      *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
    }
    *puVar6 = &PTR_ForEachChild_GC_145b1a0a0;
  }
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  *param_2 = puVar6;
  if (iVar2 == 0) {
    FUN_14335f920(lVar5);
  }
  return param_2;
}



// FUNCTION 1434ce390 FUN_1434ce390 body=140 status=ok
// SIG undefined FUN_1434ce390(void)

undefined8 *
FUN_1434ce390(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (lVar2 != 0) {
    uVar3 = FUN_1434cf700(lVar2,param_3,param_4,param_5,param_6,param_7);
    *param_2 = uVar3;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434ce430 FUN_1434ce430 body=130 status=ok
// SIG undefined FUN_1434ce430(void)

undefined8 *
FUN_1434ce430(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (lVar2 != 0) {
    uVar3 = FUN_1434d54e0(lVar2,param_3,param_4,param_5,param_6);
    *param_2 = uVar3;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434ce4c0 FUN_1434ce4c0 body=165 status=ok
// SIG undefined FUN_1434ce4c0(void)

undefined8 *
FUN_1434ce4c0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x50);
  if (puVar4 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar4,param_3);
    *puVar4 = &PTR_ForEachChild_GC_145b199d0;
    lVar3 = *param_4;
    puVar4[8] = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4[9] = param_5;
    if (param_5 != 0) {
      *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar4;
    *puVar4 = &PTR_ForEachChild_GC_145b1a440;
  }
  return param_2;
}



// FUNCTION 1434ce570 FUN_1434ce570 body=43 status=ok
// SIG undefined FUN_1434ce570(void)

undefined8 * FUN_1434ce570(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 0x12;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434ce5b0 FUN_1434ce5b0 body=269 status=ok
// SIG undefined FUN_1434ce5b0(void)

undefined8 * FUN_1434ce5b0(undefined8 *param_1,longlong param_2)

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
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b16640);
    *(undefined4 *)(puVar3 + 0x12) = 0x12;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b16640);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b19ba0;
    *(undefined4 *)(puVar3 + 0x12) = 0x12;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *(undefined4 *)(puVar3 + 10) = 0x1010101;
    *puVar3 = &PTR_ForEachChild_GC_145b19c18;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 2;
  }
  return param_1;
}



// FUNCTION 1434ce6d0 FUN_1434ce6d0 body=47 status=ok
// SIG undefined FUN_1434ce6d0(void)

undefined8 * FUN_1434ce6d0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0x1010101;
  *param_1 = &PTR_ForEachChild_GC_145b19c18;
  *(undefined4 *)((longlong)param_1 + 0x54) = 2;
  return param_1;
}



// FUNCTION 1434ce710 FUN_1434ce710 body=1574 status=ok
// SIG undefined FUN_1434ce710(void)

void FUN_1434ce710(longlong param_1,undefined8 param_2,int *param_3,uint *param_4,char param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined8 local_res8;
  ulonglong *local_res18;
  undefined8 local_c8;
  ulonglong *local_c0;
  undefined8 local_a8 [2];
  undefined1 local_98 [24];
  undefined8 local_80;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  if (*param_3 != 0) {
    lVar7 = FUN_1435caba0(lVar3,param_4);
    iVar13 = *(int *)(lVar7 + 0x90);
    uVar14 = *(ulonglong *)(lVar7 + 0x88) >> 5;
    if ((uVar14 & 1) != 0) {
      if (param_5 == '\0') {
        iVar13 = *param_3;
        while (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          if (9 < ((byte)**(uint **)(lVar3 + 0x58) & 0x1f)) {
            if ((**(uint **)(lVar3 + 0x58) >> 9 & 1) == 0) {
              FUN_1435920c0();
            }
            else {
              FUN_143592150();
            }
          }
          *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar3 + 0x58) + -0x20;
        }
      }
      uVar8 = FUN_1435c8e40(&local_c8,0x3ec,lVar3);
      FUN_1435cbe70(lVar3,uVar8);
      puVar1 = local_c0 + 3;
      *(int *)puVar1 = (int)*puVar1 + -1;
      iVar13 = (int)*puVar1;
      puVar1 = local_c0;
      goto joined_r0x0001434cec5a;
    }
    uVar6 = *param_4 & 0x1f;
    if (uVar6 == 0) goto LAB_1434cec65;
    if (uVar6 == 0xc) {
      bVar15 = *(longlong *)(param_4 + 4) == 0;
LAB_1434ce818:
      if (bVar15) goto LAB_1434cec65;
    }
    else if (uVar6 == 10) {
      bVar15 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1434ce818;
    }
    if (((~(byte)uVar14 & 1) != 0) && (0 < iVar13)) {
      if (iVar13 < 5) {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x218);
        local_res18 = (ulonglong *)(lVar3 + 0x48);
        piVar2 = (int *)(lVar3 + 0x60);
        *piVar2 = *piVar2 + 1;
        FUN_1435911f0(param_4,&local_res8,&local_res18);
        plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
        puVar12 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,0x50);
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
        }
        else {
          FUN_1435b9d40(puVar12,lVar4);
          *puVar12 = &PTR_ForEachChild_GC_145b199d0;
          puVar12[8] = local_res18;
          *(int *)(local_res18 + 3) = (int)local_res18[3] + 1;
          puVar12[9] = 0;
          *puVar12 = &PTR_ForEachChild_GC_145b1a0a0;
        }
        local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
        local_c0 = (ulonglong *)0x0;
        Scaleform::GFx::AS3::Value::PickUnsafe(&local_c8,puVar12);
        FUN_143590140(param_2,&local_c8);
        if (9 < ((byte)local_c8 & 0x1f)) {
          if (((uint)local_c8 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_c8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar1 = local_res18 + 3;
        *(int *)puVar1 = (int)*puVar1 + -1;
        iVar13 = (int)*puVar1;
        puVar1 = local_res18;
        goto joined_r0x0001434cec5a;
      }
      if (iVar13 == 5) {
        local_res18 = *(ulonglong **)(param_4 + 4);
        *(int *)(local_res18 + 3) = (int)local_res18[3] + 1;
        pcVar9 = (char *)Scaleform::GFx::ASUtils::SkipWhiteSpace(*local_res18,(int)local_res18[4]);
        if (*pcVar9 == '<') {
          FUN_1434d59c0(local_98,lVar4);
          puVar12 = (undefined8 *)0x0;
          local_a8[0] = 0;
          local_c8 = *local_res18;
          local_c0 = (ulonglong *)(ulonglong)(uint)local_res18[4];
          pcVar9 = (char *)FUN_1434d5b80(local_98,&local_res8,&local_c8,local_a8,0);
          if (*pcVar9 == '\0') {
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x218);
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
            *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
            plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
            puVar11 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,0x50);
            if (puVar11 != (undefined8 *)0x0) {
              FUN_1435b9d40(puVar11,lVar4);
              *puVar11 = &PTR_ForEachChild_GC_145b199d0;
              puVar11[8] = lVar3 + 0x48;
              *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
              puVar11[9] = 0;
              *puVar11 = &PTR_ForEachChild_GC_145b1a0a0;
              puVar12 = puVar11;
            }
            piVar2 = (int *)(lVar3 + 0x60);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920(lVar3 + 0x48);
            }
            local_c8 = local_c8 & 0xffffffff00000000;
            local_c0 = (ulonglong *)0x0;
            Scaleform::GFx::AS3::Value::PickUnsafe(&local_c8,puVar12);
            FUN_143590140(param_2,&local_c8);
            if (9 < ((byte)local_c8 & 0x1f)) {
              if (((uint)local_c8 >> 9 & 1) == 0) {
                FUN_1435920c0(&local_c8);
              }
              else {
                FUN_143592150();
              }
            }
          }
          else {
            FUN_1435903c0(param_2,local_80);
          }
          FUN_1434d5b00(local_98);
        }
        else {
          if (*(char *)(param_1 + 0x52) != '\0') {
            puVar10 = (ulonglong *)
                      Scaleform::GFx::ASConstString::TruncateWhitespaceNode(&local_res18);
            *(int *)(puVar10 + 3) = (int)puVar10[3] + 2;
            puVar1 = local_res18 + 3;
            *(int *)puVar1 = (int)*puVar1 + -1;
            if ((int)*puVar1 == 0) {
              FUN_14335f920();
            }
            puVar1 = puVar10 + 3;
            *(int *)puVar1 = (int)*puVar1 + -1;
            local_res18 = puVar10;
            if ((int)*puVar1 == 0) {
              FUN_14335f920(puVar10);
            }
          }
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
          plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x98) + 0x48);
          puVar12 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,0x50);
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            FUN_1435b9d40(puVar12,lVar3);
            *puVar12 = &PTR_ForEachChild_GC_145b199d0;
            puVar12[8] = local_res18;
            *(int *)(local_res18 + 3) = (int)local_res18[3] + 1;
            puVar12[9] = 0;
            *puVar12 = &PTR_ForEachChild_GC_145b1a0a0;
          }
          local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
          local_c0 = (ulonglong *)0x0;
          Scaleform::GFx::AS3::Value::PickUnsafe(&local_c8,puVar12);
          FUN_143590140(param_2,&local_c8);
          if (9 < ((byte)local_c8 & 0x1f)) {
            if (((uint)local_c8 >> 9 & 1) == 0) {
              FUN_1435920c0(&local_c8);
            }
            else {
              FUN_143592150();
            }
          }
        }
        puVar1 = local_res18 + 3;
        *(int *)puVar1 = (int)*puVar1 + -1;
        iVar13 = (int)*puVar1;
        puVar1 = local_res18;
        goto joined_r0x0001434cec5a;
      }
      if (iVar13 == 0x12) {
        (**(code **)(**(longlong **)(param_4 + 4) + 0x130))
                  (*(longlong **)(param_4 + 4),&local_res8,0);
        local_c8 = local_c8 & 0xffffffff00000000;
        local_c0 = (ulonglong *)0x0;
        Scaleform::GFx::AS3::Value::PickUnsafe(&local_c8,local_res8);
        FUN_143590140(param_2,&local_c8);
        if (((byte)local_c8 & 0x1f) < 10) {
          return;
        }
        if (((uint)local_c8 >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(&local_c8);
        return;
      }
      if (iVar13 == 0x13) {
        if (*(longlong *)(*(longlong *)(param_4 + 4) + 0x60) == 1) {
          FUN_1435903c0(param_2,**(undefined8 **)(*(longlong *)(param_4 + 4) + 0x58));
          return;
        }
        if (param_5 == '\0') {
          iVar13 = *param_3;
          while (iVar13 != 0) {
            iVar13 = iVar13 + -1;
            if (9 < ((byte)**(uint **)(lVar3 + 0x58) & 0x1f)) {
              if ((**(uint **)(lVar3 + 0x58) >> 9 & 1) == 0) {
                FUN_1435920c0();
              }
              else {
                FUN_143592150();
              }
            }
            *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar3 + 0x58) + -0x20;
          }
        }
        uVar8 = FUN_1435c8e40(&local_c8,0x3ec,lVar3);
        FUN_1435cbe70(lVar3,uVar8);
        puVar1 = local_c0 + 3;
        *(int *)puVar1 = (int)*puVar1 + -1;
        iVar13 = (int)*puVar1;
        puVar1 = local_c0;
        goto joined_r0x0001434cec5a;
      }
    }
  }
LAB_1434cec65:
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x218);
  *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
  puVar12 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,0x50);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar12,lVar4);
    *puVar12 = &PTR_ForEachChild_GC_145b199d0;
    puVar12[8] = (ulonglong *)(lVar3 + 0x48);
    *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
    puVar12[9] = 0;
    *puVar12 = &PTR_ForEachChild_GC_145b1a0a0;
  }
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  local_c0 = (ulonglong *)0x0;
  Scaleform::GFx::AS3::Value::PickUnsafe(&local_c8,puVar12);
  FUN_143590140(param_2,&local_c8);
  if (9 < ((byte)local_c8 & 0x1f)) {
    if (((uint)local_c8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_c8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar2 = (int *)(lVar3 + 0x60);
  *piVar2 = *piVar2 + -1;
  iVar13 = *piVar2;
  puVar1 = (ulonglong *)(lVar3 + 0x48);
joined_r0x0001434cec5a:
  if (iVar13 == 0) {
    FUN_14335f920(puVar1);
  }
  return;
}



// FUNCTION 1434ced40 FUN_1434ced40 body=159 status=ok
// SIG undefined FUN_1434ced40(void)

void FUN_1434ced40(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  if (*param_4 != 0) {
    lVar1 = FUN_1435caba0(*(undefined8 *)(param_1[5] + 0x98),param_5);
    if (((~(*(byte *)(lVar1 + 0x88) >> 5) & 1) != 0) && (*(int *)(lVar1 + 0x90) == 0x12)) {
      FUN_143590140(param_3,param_5);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001434ceddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434cedf0 FUN_1434cedf0 body=119 status=ok
// SIG undefined FUN_1434cedf0(void)

void FUN_1434cedf0(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  FUN_1435b3e60(param_1,param_2);
  ppuVar1 = &PTR_FUN_145b16930;
  lVar2 = 3;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434cee90 FUN_1434cee90 body=735 status=ok
// SIG undefined FUN_1434cee90(void)

void FUN_1434cee90(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  longlong local_res10;
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  FUN_1435ca830(lVar2,&local_res8);
  uVar5 = local_res8;
  uVar4 = *param_2;
  if (local_res8 != uVar4) {
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar4 - 1;
      }
    }
    *param_2 = uVar5;
  }
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1 + 0x50));
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"ignoreComments",0xe,0);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1 + 0x51));
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"ignoreProcessingInstructions",0x1c);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1 + 0x52));
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"ignoreWhitespace",0x10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1 + 0x53));
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"prettyPrinting",0xe);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_38[0] = 2;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"prettyIndent",0xc);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  return;
}



// FUNCTION 1434cf190 FUN_1434cf190 body=605 status=ok
// SIG undefined FUN_1434cf190(void)

void FUN_1434cf190(longlong param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  longlong local_res18 [2];
  
  uVar7 = *param_3 & 0x1f;
  if (uVar7 != 0) {
    if (uVar7 == 0xc) {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
    }
    else {
      if (uVar7 != 10) goto LAB_1434cf1d0;
      bVar8 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    }
    if (!bVar8) {
LAB_1434cf1d0:
      if (uVar7 == 0xc) {
        uVar2 = *(undefined8 *)(param_3 + 4);
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
        lVar3 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),"ignoreComments",0xe,0);
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        local_res18[0] = lVar3;
        puVar4 = (undefined4 *)FUN_1434e8b80(uVar2,local_res18);
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar3);
        }
        if ((puVar4 != (undefined4 *)0x0) && (((byte)*puVar4 & 0x1f) == 1)) {
          *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(puVar4 + 4);
        }
        lVar3 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),"ignoreProcessingInstructions",0x1c);
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        local_res18[0] = lVar3;
        puVar4 = (undefined4 *)FUN_1434e8b80(uVar2,local_res18);
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar3);
        }
        if ((puVar4 != (undefined4 *)0x0) && (((byte)*puVar4 & 0x1f) == 1)) {
          *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(puVar4 + 4);
        }
        lVar3 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),"ignoreWhitespace",0x10);
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        local_res18[0] = lVar3;
        puVar4 = (undefined4 *)FUN_1434e8b80(uVar2,local_res18);
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar3);
        }
        if ((puVar4 != (undefined4 *)0x0) && (((byte)*puVar4 & 0x1f) == 1)) {
          *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(puVar4 + 4);
        }
        lVar3 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),"prettyPrinting",0xe);
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        local_res18[0] = lVar3;
        puVar4 = (undefined4 *)FUN_1434e8b80(uVar2,local_res18);
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar3);
        }
        if ((puVar4 != (undefined4 *)0x0) && (((byte)*puVar4 & 0x1f) == 1)) {
          *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(puVar4 + 4);
        }
        lVar5 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),"prettyIndent",0xc);
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
        local_res18[0] = lVar5;
        puVar6 = (uint *)FUN_1434e8b80(uVar2,local_res18);
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar5);
        }
        if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x1f) - 2 < 2)) {
          *(uint *)(param_1 + 0x54) = puVar6[4];
        }
      }
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0x1010101;
  *(undefined4 *)(param_1 + 0x54) = 2;
  return;
}



// FUNCTION 1434cf410 FUN_1434cf410 body=720 status=ok
// SIG undefined FUN_1434cf410(void)

void FUN_1434cf410(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  longlong local_res10;
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  FUN_1435ca830(lVar2,&local_res8);
  uVar5 = local_res8;
  uVar4 = *param_2;
  if (local_res8 != uVar4) {
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar4 - 1;
      }
    }
    *param_2 = uVar5;
  }
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,1);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"ignoreComments",0xe,0);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,1);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"ignoreProcessingInstructions",0x1c);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,1);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"ignoreWhitespace",0x10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 1;
  local_30 = 0;
  local_28 = CONCAT31(local_28._1_3_,1);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"prettyPrinting",0xe);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
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
  local_38[0] = 2;
  local_30 = 0;
  local_28 = 2;
  local_res10 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"prettyIndent",0xc);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_1435b12c0(local_res8,&local_res10,local_38,0);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_38);
  }
  return;
}



// FUNCTION 1434cf700 FUN_1434cf700 body=221 status=ok
// SIG undefined FUN_1434cf700(void)

undefined8 *
FUN_1434cf700(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *param_4;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_6;
  if (param_6 != 0) {
    *(uint *)(param_6 + 8) = *(int *)(param_6 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = &PTR_FUN_145b19cf0;
  param_1[10] = 0;
  lVar2 = *param_5;
  param_1[0xb] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  puVar5 = (ulonglong *)
           FUN_1435cc0e0(*(undefined8 *)(param_1[5] + 0x98),&param_6,0,param_3 + 0x38,param_3 + 0x48
                        );
  uVar3 = param_1[10];
  uVar4 = *puVar5;
  if (uVar4 != uVar3) {
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[10] = uVar3 - 1;
      }
    }
    param_1[10] = uVar4;
  }
  return param_1;
}



// FUNCTION 1434cf7f0 FUN_1434cf7f0 body=160 status=ok
// SIG undefined FUN_1434cf7f0(void)

void FUN_1434cf7f0(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_145b19cf0;
  piVar1 = (int *)(param_1[0xb] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar2 - 1;
    }
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



// FUNCTION 1434cf8a0 FUN_1434cf8a0 body=202 status=ok
// SIG undefined FUN_1434cf8a0(void)

void FUN_1434cf8a0(longlong param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint local_28 [4];
  longlong local_18;
  longlong local_10;
  
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  Scaleform::GFx::AS3::Value::Value(local_28,param_1 + 0x58);
  uVar1 = local_28[0] & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      if (local_18 == 0) goto LAB_1434cf92a;
      plVar2 = &local_18;
    }
    else {
      if ((0xe < uVar1) || (local_10 == 0)) goto LAB_1434cf92a;
      plVar2 = &local_10;
    }
    (*param_3)(param_2,plVar2);
  }
LAB_1434cf92a:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434cf9e0 FUN_1434cf9e0 body=173 status=ok
// SIG undefined FUN_1434cf9e0(void)

undefined8 * FUN_1434cf9e0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x250) + 0xd8);
  puVar5 = (undefined8 *)FUN_1435b5bc0(uVar3);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar5,uVar3);
    *puVar5 = &PTR_ForEachChild_GC_145b18770;
    lVar4 = *(longlong *)(param_1 + 0x40);
    puVar5[8] = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar5[9] = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar5;
  }
  return param_2;
}



// FUNCTION 1434cfae0 EqualsInternal body=49 status=ok
// SIG undefined EqualsInternal(void)

ulonglong Scaleform::GFx::AS3::Instances::fl::XMLAttr::EqualsInternal
                    (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1434caa70();
  if ((int)uVar1 == 0) {
    uVar1 = (ulonglong)
            ((int)CONCAT71((int7)(uVar1 >> 8),
                           *(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) + 1);
  }
  return uVar1;
}



// FUNCTION 1434cfb30 FUN_1434cfb30 body=146 status=ok
// SIG undefined FUN_1434cfb30(void)

undefined8 * FUN_1434cfb30(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x98) + 0x48);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x60);
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar4 = FUN_1434cf700(lVar3,lVar1,uVar4,param_1 + 0x40,param_1 + 0x58,param_3);
    *param_2 = uVar4;
  }
  return param_2;
}



// FUNCTION 1434cfbe0 FUN_1434cfbe0 body=338 status=ok
// SIG undefined FUN_1434cfbe0(void)

void FUN_1434cfbe0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong local_res8;
  
  if (((byte)*(undefined4 *)(param_1[10] + 0x48) & 0x1f) == 10) {
    local_res8 = *(ulonglong *)(param_1[10] + 0x58);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    iVar3 = *(int *)(local_res8 + 0x18);
    *(int *)(local_res8 + 0x18) = iVar3;
    if (iVar3 == 0) {
      FUN_14335f920();
    }
    lVar4 = (**(code **)(*param_1 + 400))(param_1,&local_res8,param_3);
    if (lVar4 == 0) {
      lVar4 = *param_2;
      lVar7 = 8;
      lVar10 = 0x1505;
      if (lVar4 != 0) {
        lVar8 = 8;
        uVar5 = 0x1505;
        do {
          pbVar2 = &stack0x00000007 + lVar8;
          lVar8 = lVar8 + -1;
          uVar5 = (ulonglong)*pbVar2 + uVar5 * 0x1003f;
        } while (lVar8 != 0);
        uVar5 = *(ulonglong *)(lVar4 + 8) & uVar5;
        lVar8 = uVar5 * 3 + 2;
        puVar6 = (ulonglong *)(lVar4 + lVar8 * 8);
        if ((*(longlong *)(lVar4 + lVar8 * 8) != -2) && (uVar9 = uVar5, puVar6[1] == uVar5)) {
          while ((puVar6[1] != uVar5 || (puVar6[2] != local_res8))) {
            uVar9 = *puVar6;
            if (uVar9 == 0xffffffffffffffff) goto LAB_1434cfce0;
            puVar6 = (ulonglong *)(lVar4 + uVar9 * 0x18 + 0x10);
          }
          if ((-1 < (longlong)uVar9) && (lVar4 + uVar9 * 0x18 + 0x20 != 0)) goto LAB_1434cfd13;
        }
      }
LAB_1434cfce0:
      do {
        pbVar2 = &stack0x00000007 + lVar7;
        lVar7 = lVar7 + -1;
        lVar10 = (ulonglong)*pbVar2 + lVar10 * 0x1003f;
      } while (lVar7 != 0);
      FUN_1434e5630(param_2,param_2[1],&local_res8,lVar10);
    }
LAB_1434cfd13:
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res8);
    }
  }
  return;
}



// FUNCTION 1434cfd60 FUN_1434cfd60 body=252 status=ok
// SIG undefined FUN_1434cfd60(void)

undefined8 *
FUN_1434cfd60(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *param_4;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_5;
  if (param_5 != 0) {
    *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = &PTR_ForEachChild_GC_145b19ed0;
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
  puVar5 = (ulonglong *)
           FUN_1435cc0e0(*(undefined8 *)(param_1[5] + 0x98),&param_5,0,param_3 + 0x38,param_3 + 0x48
                        );
  uVar3 = param_1[10];
  uVar4 = *puVar5;
  if (uVar4 != uVar3) {
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[10] = uVar3 - 1;
      }
    }
    param_1[10] = uVar4;
  }
  return param_1;
}



// FUNCTION 1434cfe70 FUN_1434cfe70 body=175 status=ok
// SIG undefined FUN_1434cfe70(void)

void FUN_1434cfe70(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_ForEachChild_GC_145b19ed0;
  FUN_1434e5ef0(param_1 + 0x11);
  FUN_1434e5ef0(param_1 + 0xe);
  FUN_1434e5ef0(param_1 + 0xb);
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar2 - 1;
    }
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



// FUNCTION 1434cff30 ForEachChild_GC body=248 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::XMLElement::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar2 = 0;
  uVar3 = uVar2;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar3 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x58) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar3 = uVar2;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x70) + uVar3 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x70) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x88) + uVar2 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x88) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1434d0050 FUN_1434d0050 body=227 status=ok
// SIG undefined FUN_1434d0050(void)

void FUN_1434d0050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + 0x48);
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x60);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1434cf700(lVar4,lVar2,param_2,param_3,param_4,param_1);
  }
  FUN_1434f0230(param_1 + 0x70,param_1 + 0x70,*(longlong *)(param_1 + 0x78) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x70) + (*(longlong *)(param_1 + 0x78) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = uVar5;
    if (uVar5 == 0) {
      return;
    }
    *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
  }
  if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
    FUN_1434ef880(uVar5);
  }
  return;
}



// FUNCTION 1434d0140 FUN_1434d0140 body=172 status=ok
// SIG undefined FUN_1434d0140(void)

undefined8 FUN_1434d0140(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  
  if (((byte)*(undefined4 *)(param_2 + 0x10) & 0x1f) == 10) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    uVar3 = *(ulonglong *)(param_1 + 0x78);
    *param_3 = 0;
    if (uVar3 != 0) {
      do {
        cVar4 = FUN_1434ca4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + *param_3 * 8),param_2)
        ;
        if (cVar4 != '\0') {
          piVar1 = (int *)(lVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar2);
          }
          return 1;
        }
        *param_3 = *param_3 + 1;
      } while (*param_3 < uVar3);
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  return 0;
}



// FUNCTION 1434d0200 FUN_1434d0200 body=193 status=ok
// SIG undefined FUN_1434d0200(void)

undefined8 FUN_1434d0200(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  
  if (((byte)*(undefined4 *)(param_2 + 0x10) & 0x1f) == 10) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    uVar3 = *(ulonglong *)(param_1 + 0x90);
    *param_3 = 0;
    if (uVar3 != 0) {
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x88) + *param_3 * 8);
        iVar6 = (**(code **)(*plVar4 + 0xf0))(plVar4);
        if ((iVar6 == 1) && (cVar5 = FUN_1434ca4e0(plVar4,param_2), cVar5 != '\0')) {
          piVar1 = (int *)(lVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar2);
          }
          return 1;
        }
        *param_3 = *param_3 + 1;
      } while (*param_3 < uVar3);
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  return 0;
}



// FUNCTION 1434d02d0 FUN_1434d02d0 body=95 status=ok
// SIG undefined FUN_1434d02d0(void)

undefined8 FUN_1434d02d0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  
  if (((byte)*param_2 & 0x1f) == 0xc) {
    cVar1 = FUN_143592750(*(undefined8 *)(param_2 + 4));
    if (cVar1 != '\0') {
      return *(undefined8 *)(param_2 + 4);
    }
  }
  if (((byte)*param_2 & 0x1f) == 0xc) {
    cVar1 = FUN_143592790(*(undefined8 *)(param_2 + 4));
    if ((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_2 + 4) + 0x60) == 1)) {
      return **(undefined8 **)(*(longlong *)(param_2 + 4) + 0x58);
    }
  }
  return 0;
}



// FUNCTION 1434d0340 FUN_1434d0340 body=155 status=ok
// SIG undefined FUN_1434d0340(void)

bool FUN_1434d0340(undefined8 param_1,uint *param_2)

{
  int iVar1;
  char local_res10 [16];
  int local_res20 [2];
  undefined **local_18;
  undefined8 local_10;
  
  FUN_1435bdeb0(local_res10,param_2 + 4,local_res20);
  if (local_res10[0] != '\0') {
    return local_res20[0] == 0;
  }
  local_18 = &PTR_FUN_145b1a820;
  local_10 = param_1;
  if ((*param_2 >> 3 & 1) != 0) {
    iVar1 = FUN_1434d0510();
    return iVar1 != 0;
  }
  iVar1 = FUN_1434d05b0(param_1,param_2,&local_18);
  if (iVar1 != 0) {
    return true;
  }
  return false;
}



// FUNCTION 1434d03f0 FUN_1434d03f0 body=130 status=ok
// SIG undefined FUN_1434d03f0(void)

void FUN_1434d03f0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  
  if ((((param_4 != '\0') &&
       (lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x2b0),
       lVar1 != 0)) && (*(longlong *)(lVar1 + 0x38) == *(longlong *)(param_3 + 0x38))) &&
     (cVar3 = FUN_1435927d0(lVar1 + 0x48,param_3 + 0x48), cVar3 != '\0')) {
    return;
  }
  if ((((byte)*(undefined4 *)(param_3 + 0x48) & 0x1f) == 10) &&
     (puVar2 = *(undefined8 **)(param_3 + 0x58), *(int *)(puVar2 + 4) != 0)) {
    Scaleform::StringBuffer::AppendString(param_2,*puVar2,*(undefined4 *)(puVar2 + 4));
    FUN_1432c5df0(param_2,0x3a);
  }
  return;
}



// FUNCTION 1434d0480 FUN_1434d0480 body=130 status=ok
// SIG undefined FUN_1434d0480(void)

void FUN_1434d0480(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  
  if ((((param_4 != '\0') &&
       (lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x2b0),
       lVar1 != 0)) && (*(longlong *)(lVar1 + 0x38) == *(longlong *)(param_3 + 0x38))) &&
     (cVar3 = FUN_1435927d0(lVar1 + 0x48,param_3 + 0x48), cVar3 != '\0')) {
    return;
  }
  if ((((byte)*(undefined4 *)(param_3 + 0x48) & 0x1f) == 10) &&
     (puVar2 = *(undefined8 **)(param_3 + 0x58), *(int *)(puVar2 + 4) != 0)) {
    FUN_1432c5df0(param_2,0x3a);
    Scaleform::StringBuffer::AppendString(param_2,*puVar2,*(undefined4 *)(puVar2 + 4));
  }
  return;
}



// FUNCTION 1434d0510 FUN_1434d0510 body=154 status=ok
// SIG undefined FUN_1434d0510(void)

ulonglong FUN_1434d0510(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (((byte)*(undefined4 *)(param_2 + 0x10) & 0x1f) != 10) {
    return 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar4 = uVar3;
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_1434ca4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar3 * 8),param_2);
      if (cVar2 != '\0') {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        cVar2 = (**(code **)(*param_3 + 8))(param_3,uVar3);
        if (cVar2 == '\0') {
          return uVar4;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return uVar4;
}



// FUNCTION 1434d05b0 FUN_1434d05b0 body=682 status=ok
// SIG undefined FUN_1434d05b0(void)

int FUN_1434d05b0(longlong param_1,uint *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = *(ulonglong *)(param_1 + 0x90);
  iVar13 = 0;
  uVar12 = 0;
  if (local_40 == 0) {
    return 0;
  }
  do {
    bVar4 = false;
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar12 * 8);
    if (((byte)param_2[4] & 0x1f) == 10) {
      lVar2 = *(longlong *)(param_2 + 8);
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      plVar6 = (longlong *)(**(code **)(*plVar9 + 0x78))(plVar9,&local_48);
      if ((*plVar6 == lVar2) ||
         (cVar5 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_2), cVar5 != '\0')) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (bVar14) {
        if ((*param_2 & 3) < 2) {
          if (*(longlong *)(param_2 + 2) == 0) {
            bVar4 = true;
          }
          else {
            lVar7 = FUN_1435aec10(param_2);
            lVar8 = *(longlong *)(*(longlong *)(plVar9[5] + 0x98) + 0x2b0);
            if (lVar8 == 0) {
              lVar8 = *(longlong *)(*(longlong *)(plVar9[5] + 0x98) + 0x1d8);
            }
            if (((int)((*(longlong *)(lVar7 + 0x28) << 0x3c) >> 0x3c) != 0) ||
               (((*param_2 >> 3 & 1) == 0 && (*(int *)(*(longlong *)(lVar7 + 0x38) + 0x20) == 0))))
            {
              lVar7 = lVar8;
            }
            lVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
            if (*(longlong *)(lVar7 + 0x38) == *(longlong *)(lVar8 + 0x38)) {
              bVar4 = true;
            }
          }
        }
        else {
          cVar5 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_2);
          if (cVar5 == '\0') {
            lVar8 = *(longlong *)(plVar9[5] + 0x98);
            lVar7 = (**(code **)(*plVar9 + 0x110))(plVar9);
            if (((*param_2 >> 3 & 1) != 0) || (lVar10 = *(longlong *)(lVar8 + 0x2b0), lVar10 == 0))
            {
              lVar10 = *(longlong *)(lVar8 + 0x1d8);
            }
            cVar5 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                              (param_2,*(undefined8 *)(lVar8 + 0x1d8));
            if (cVar5 == '\0') {
              if ((*(longlong *)(lVar10 + 0x38) == *(longlong *)(lVar7 + 0x38)) &&
                 (((*(byte *)(lVar10 + 0x28) ^ *(byte *)(lVar7 + 0x28)) & 0xf) == 0)) {
                bVar4 = true;
              }
            }
            else {
              lVar8 = FUN_1435aec20(param_2);
              uVar11 = 0;
              if (*(ulonglong *)(lVar8 + 0x30) != 0) {
                plVar9 = *(longlong **)(lVar8 + 0x28);
                do {
                  if ((int)((*(longlong *)(*plVar9 + 0x28) << 0x3c) >> 0x3c) == 0) {
                    lVar3 = *(longlong *)(*plVar9 + 0x38);
                    if (*(int *)(lVar3 + 0x20) == 0) {
                      bVar14 = *(longlong *)(lVar10 + 0x38) == *(longlong *)(lVar7 + 0x38);
                    }
                    else {
                      bVar14 = lVar3 == *(longlong *)(lVar7 + 0x38);
                    }
                    if (bVar14) {
                      bVar4 = true;
                      break;
                    }
                  }
                  uVar11 = uVar11 + 1;
                  plVar9 = plVar9 + 1;
                } while (uVar11 < *(ulonglong *)(lVar8 + 0x30));
              }
            }
          }
          else {
            bVar4 = true;
          }
        }
      }
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar2);
      }
      if (bVar4) {
        iVar13 = iVar13 + 1;
        cVar5 = (**(code **)(*param_3 + 8))(param_3,uVar12);
        if (cVar5 == '\0') {
          return iVar13;
        }
      }
    }
    uVar12 = uVar12 + 1;
    if (local_40 <= uVar12) {
      return iVar13;
    }
  } while( true );
}



// FUNCTION 1434d0870 FUN_1434d0870 body=587 status=ok
// SIG undefined FUN_1434d0870(void)

void FUN_1434d0870(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_res10;
  uint uStackX_14;
  
  uVar10 = 0;
  puVar1 = (uint *)(param_2 + 0x48);
  local_res10 = 0;
  if ((*puVar1 & 0x1f) != 0) {
    bVar13 = (*puVar1 & 0x1f) != 10;
    if (bVar13) {
      lVar7 = (ulonglong)uStackX_14 << 0x20;
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
      lVar8 = lVar11 + 0x48;
      piVar2 = (int *)(lVar11 + 0x60);
      *piVar2 = *piVar2 + 1;
      lVar11 = lVar8;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x58);
      lVar8 = (ulonglong)uStackX_14 << 0x20;
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      lVar11 = lVar7;
    }
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
    if (bVar13) {
      piVar2 = (int *)(lVar8 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
    }
    if (!bVar13) {
      piVar2 = (int *)(lVar7 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920(lVar7);
      }
    }
    if ((*(int *)(lVar11 + 0x20) != 0) ||
       (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38) + 0x20) != 0)) {
      uVar3 = *(ulonglong *)(param_1 + 0x60);
      uVar9 = uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar3 != 0) {
        do {
          cVar4 = FUN_1435927d0(puVar1,*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar9 * 8) +
                                       0x48);
          uVar12 = uVar9;
          if (cVar4 != '\0') break;
          uVar9 = uVar9 + 1;
          uVar12 = 0xffffffffffffffff;
        } while (uVar9 < uVar3);
      }
      puVar5 = (ulonglong *)
               FUN_1435cc0e0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res10,0,
                             param_2 + 0x38,puVar1);
      uVar3 = *puVar5;
      if ((uVar12 != 0xffffffffffffffff) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar12 * 8) + 0x38) !=
          *(longlong *)(param_2 + 0x38))) {
        FUN_1434ef920(param_1 + 0x58,uVar12);
      }
      FUN_1434f0230(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
      puVar5 = (ulonglong *)
               (*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
      if ((puVar5 != (ulonglong *)0x0) && (*puVar5 = uVar3, uVar3 != 0)) {
        *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      }
      cVar4 = FUN_1435927d0(*(longlong *)(param_1 + 0x50) + 0x48,puVar1);
      if (cVar4 != '\0') {
        lVar7 = *(longlong *)(param_1 + 0x50);
        uVar6 = FUN_143590540();
        FUN_143590140(lVar7 + 0x48,uVar6);
      }
      uVar9 = *(ulonglong *)(param_1 + 0x78);
      if (uVar9 != 0) {
        do {
          lVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + uVar10 * 8) + 0x128))
                            ();
          cVar4 = FUN_1435927d0(lVar7 + 0x48,puVar1);
          if (cVar4 != '\0') {
            uVar6 = FUN_143590540();
            FUN_143590140(lVar7 + 0x48,uVar6);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar9);
      }
      if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880(uVar3);
      }
    }
    piVar2 = (int *)(lVar11 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920(lVar11);
    }
  }
  return;
}



// FUNCTION 1434d0ad0 FUN_1434d0ad0 body=92 status=ok
// SIG undefined FUN_1434d0ad0(void)

void FUN_1434d0ad0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x88);
  FUN_1434f0230(plVar1,plVar1,*(longlong *)(param_1 + 0x90) + 1);
  plVar1 = (longlong *)(*plVar1 + (*(longlong *)(param_1 + 0x90) + -1) * 8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *param_2;
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
    }
  }
  return;
}



// FUNCTION 1434d0b40 FUN_1434d0b40 body=37 status=ok
// SIG undefined FUN_1434d0b40(void)

undefined8 FUN_1434d0b40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x150))(param_1,param_2,param_1[0x12],param_3);
  return param_2;
}



// FUNCTION 1434d0b70 FUN_1434d0b70 body=200 status=ok
// SIG undefined FUN_1434d0b70(void)

void FUN_1434d0b70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_1 + 0x78);
  uVar5 = 0;
  if (uVar3 != 0) {
    plVar1 = (longlong *)(param_2 + 0x58);
    do {
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar5 * 8);
      if (uVar4 != 0) {
        *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0230(plVar1,plVar1,*(longlong *)(param_2 + 0x60) + 1);
      puVar2 = (ulonglong *)(*plVar1 + (*(longlong *)(param_2 + 0x60) + -1) * 8);
      if (puVar2 == (ulonglong *)0x0) {
LAB_1434d0bf4:
        if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      else {
        *puVar2 = uVar4;
        if (uVar4 != 0) {
          *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
          goto LAB_1434d0bf4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}



// FUNCTION 1434d0c40 FUN_1434d0c40 body=328 status=ok
// SIG undefined FUN_1434d0c40(void)

void FUN_1434d0c40(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar9 = 0;
  local_48 = 0;
  if (param_3 == 0) {
    FUN_1434e6580(param_2 + 0x58,param_1 + 0x88);
    return;
  }
  if (((param_4 == (longlong *)0x0) || (*(int *)((undefined8 *)*param_4 + 4) == 0)) ||
     ((pcVar2 = *(char **)*param_4, *pcVar2 == '*' && (pcVar2[1] == '\0')))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x90);
  uVar10 = uVar9;
  if (uVar3 != 0) {
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar9 * 8);
      iVar7 = (**(code **)(*plVar4 + 0xf0))(plVar4);
      if (iVar7 == param_3) {
        if ((iVar7 == 4) && (param_4 != (longlong *)0x0)) {
          if (bVar5) {
LAB_1434d0d28:
            bVar6 = false;
          }
          else {
            uVar10 = 1;
            plVar8 = (longlong *)(**(code **)(*plVar4 + 0x78))(plVar4,&local_48);
            if (*plVar8 == *param_4) goto LAB_1434d0d28;
            bVar6 = true;
          }
          if (uVar10 != 0) {
            uVar10 = 0;
            piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          if (bVar6) goto LAB_1434d0d56;
        }
        FUN_1434e8360(param_2,plVar4);
      }
LAB_1434d0d56:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  return;
}



// FUNCTION 1434d0d90 FUN_1434d0d90 body=173 status=ok
// SIG undefined FUN_1434d0d90(void)

undefined8 * FUN_1434d0d90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x250) + 0xd8);
  puVar5 = (undefined8 *)FUN_1435b5bc0(uVar3);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar5,uVar3);
    *puVar5 = &PTR_ForEachChild_GC_145b18770;
    lVar4 = *(longlong *)(param_1 + 0x40);
    puVar5[8] = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar5[9] = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar5;
  }
  return param_2;
}



// FUNCTION 1434d0e50 FUN_1434d0e50 body=184 status=ok
// SIG undefined FUN_1434d0e50(void)

void FUN_1434d0e50(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  cVar3 = FUN_1434d2270();
  uVar5 = 0;
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,0,0);
    return;
  }
  uVar1 = param_1[0x12];
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0x11] + uVar5 * 8);
      iVar4 = (**(code **)(*plVar2 + 0xf0))(plVar2);
      if (iVar4 == 2) {
        (**(code **)(*plVar2 + 0xe0))(plVar2,param_2,param_3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 1434d0f10 FUN_1434d0f10 body=4415 status=ok
// SIG undefined FUN_1434d0f10(void)

void FUN_1434d0f10(longlong param_1,undefined8 param_2,int param_3,longlong param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  char local_res20;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  int local_b8;
  longlong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong *local_78;
  uint local_70 [12];
  
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_b0 = lVar12;
  lVar9 = FUN_1435b4fe0();
  uVar11 = 0;
  local_b8 = *(int *)(lVar9 + 0x54);
  local_res20 = *(char *)(lVar9 + 0x53);
  if (local_b8 < 0) {
    local_res20 = '\0';
    local_b8 = 0;
  }
  else if ((local_res20 != '\0') && (0 < param_3)) {
    FUN_1434ca710(param_2,param_3);
  }
  local_f0 = *(undefined8 *)(lVar12 + 0x48);
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  if (param_4 != 0) {
    FUN_1434c9a70(&local_108,param_4);
  }
  local_c8 = *(undefined8 *)(lVar12 + 0x48);
  uVar19 = *(ulonglong *)(param_1 + 0x60);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uVar15 = uVar11;
  uVar18 = uVar11;
  if (uVar19 != 0) {
    do {
      uVar13 = local_100;
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + uVar18 * 8);
      uVar16 = uVar11;
      if (local_100 != 0) {
        do {
          lVar12 = *(longlong *)(local_108 + uVar16 * 8);
          if ((*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar14 + 0x38)) &&
             (cVar6 = FUN_1435927d0(lVar12 + 0x48,uVar14 + 0x48), cVar6 != '\0'))
          goto LAB_1434d113f;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar13);
      }
      if (uVar15 != 0) {
        uVar13 = uVar11;
        do {
          lVar12 = *(longlong *)(local_e0 + uVar13 * 8);
          if ((*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar14 + 0x38)) &&
             (((*(byte *)(lVar12 + 0x28) ^ *(byte *)(uVar14 + 0x28)) & 0xf) == 0))
          goto LAB_1434d10cf;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar15);
      }
      if (uVar14 != 0) {
        *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0160(&local_e0,local_c8,uVar15 + 1);
      uVar15 = local_d8;
      puVar10 = (ulonglong *)(local_e0 + (local_d8 - 1) * 8);
      if (puVar10 == (ulonglong *)0x0) {
LAB_1434d10ae:
        if (uVar14 != 0) {
          if (((uVar14 & 1) == 0) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
            FUN_1434ef880(uVar14);
          }
LAB_1434d10cf:
          *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
        }
      }
      else {
        *puVar10 = uVar14;
        if (uVar14 != 0) {
          *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
          goto LAB_1434d10ae;
        }
      }
      FUN_1434f0160(&local_108,local_f0,local_100 + 1);
      puVar10 = (ulonglong *)(local_108 + (local_100 - 1) * 8);
      if (puVar10 == (ulonglong *)0x0) {
LAB_1434d111e:
        if (((uVar14 != 0) && ((uVar14 & 1) == 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar10 = uVar14;
        if (uVar14 != 0) {
          *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
          goto LAB_1434d111e;
        }
      }
LAB_1434d113f:
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar19);
  }
  plVar17 = param_5;
  if (param_5 != (longlong *)0x0) {
    uVar11 = param_5[1];
    uVar19 = 0;
    if (uVar11 != 0) {
      do {
        uVar14 = local_100;
        uVar13 = 0;
        uVar18 = *(ulonglong *)(*plVar17 + uVar19 * 8);
        if (local_100 != 0) {
          do {
            lVar12 = *(longlong *)(local_108 + uVar13 * 8);
            if ((*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar18 + 0x38)) &&
               (cVar6 = FUN_1435927d0(lVar12 + 0x48,uVar18 + 0x48), cVar6 != '\0'))
            goto LAB_1434d12c0;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
        }
        uVar14 = 0;
        if (uVar15 != 0) {
          do {
            lVar12 = *(longlong *)(local_e0 + uVar14 * 8);
            if ((*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar18 + 0x38)) &&
               (((*(byte *)(lVar12 + 0x28) ^ *(byte *)(uVar18 + 0x28)) & 0xf) == 0))
            goto LAB_1434d1250;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
        }
        if (uVar18 != 0) {
          *(uint *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1U & 0x8fffffff;
        }
        FUN_1434f0160(&local_e0,local_c8,uVar15 + 1);
        uVar15 = local_d8;
        puVar10 = (ulonglong *)(local_e0 + local_d8 * 8 + -8);
        if (puVar10 == (ulonglong *)0x0) {
LAB_1434d122f:
          if (uVar18 != 0) {
            if (((uVar18 & 1) == 0) && ((*(uint *)(uVar18 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) - 1;
              FUN_1434ef880(uVar18);
            }
LAB_1434d1250:
            *(uint *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1U & 0x8fffffff;
          }
        }
        else {
          *puVar10 = uVar18;
          if (uVar18 != 0) {
            *(uint *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1U & 0x8fffffff;
            goto LAB_1434d122f;
          }
        }
        FUN_1434f0160(&local_108,local_f0,local_100 + 1);
        puVar10 = (ulonglong *)(local_108 + (local_100 - 1) * 8);
        if (puVar10 == (ulonglong *)0x0) {
LAB_1434d129f:
          if (((uVar18 != 0) && ((uVar18 & 1) == 0)) && ((*(uint *)(uVar18 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar10 = uVar18;
          if (uVar18 != 0) {
            *(uint *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1U & 0x8fffffff;
            goto LAB_1434d129f;
          }
        }
LAB_1434d12c0:
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar11);
    }
  }
  uVar11 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  lVar12 = *(longlong *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(local_b0 + 0x48);
  local_98 = 0;
  local_90 = uVar3;
  FUN_1435cc0e0(*(undefined8 *)(lVar12 + 0x30),&local_88,0,lVar12 + 0x38,lVar12 + 0x48);
  local_c0 = local_88;
  if (local_100 != 0) {
    do {
      lVar12 = *(longlong *)(local_108 + uVar11 * 8);
      if (*(longlong *)(lVar12 + 0x38) == *(longlong *)(local_88 + 0x38)) {
        FUN_143590140(local_88 + 0x48,lVar12 + 0x48);
        local_c0 = local_88;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_100);
  }
  uVar11 = local_c0;
  if (local_c0 != 0) {
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    *(uint *)(local_c0 + 8) = *(uint *)(local_c0 + 8) & 0x8fffffff;
  }
  FUN_1434f0160(&local_a8,uVar3,1);
  uVar19 = local_a0;
  plVar17 = local_a8;
  if ((ulonglong *)(local_a8 + (local_a0 - 1)) != (ulonglong *)0x0) {
    local_a8[local_a0 - 1] = uVar11;
    if (uVar11 == 0) goto LAB_1434d13c6;
    *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
  }
  if (((uVar11 != 0) && ((uVar11 & 1) == 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1434d13c6:
  uVar15 = *(ulonglong *)(param_1 + 0x78);
  uVar18 = 0;
  if (uVar15 != 0) {
    do {
      lVar12 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + uVar18 * 8) + 0x110))();
      FUN_1435cc0e0(*(undefined8 *)(lVar12 + 0x30),&param_5,0,lVar12 + 0x38,lVar12 + 0x48);
      uVar14 = 0;
      if (local_100 != 0) {
        do {
          lVar12 = *(longlong *)(local_108 + uVar14 * 8);
          if (*(longlong *)(lVar12 + 0x38) == param_5[7]) {
            FUN_143590140(param_5 + 9,lVar12 + 0x48);
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < local_100);
      }
      plVar2 = param_5;
      uVar14 = 0;
      if (uVar19 != 0) {
        do {
          if ((*(longlong *)(plVar17[uVar14] + 0x38) == param_5[7]) &&
             (((*(byte *)(plVar17[uVar14] + 0x28) ^ *(byte *)(param_5 + 5)) & 0xf) == 0))
          goto LAB_1434d14e8;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar19);
      }
      if (param_5 != (longlong *)0x0) {
        *(int *)(param_5 + 1) = (int)param_5[1] + 1;
        *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) & 0x8fffffff;
      }
      FUN_1434f0160(&local_a8,local_90);
      uVar19 = local_a0;
      plVar17 = local_a8;
      if (local_a8 + (local_a0 - 1) == (longlong *)0x0) {
LAB_1434d14c7:
        if (plVar2 != (longlong *)0x0) {
          if ((((ulonglong)plVar2 & 1) == 0) && ((*(uint *)(plVar2 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) - 1;
            FUN_1434ef880();
          }
LAB_1434d14e8:
          if (((plVar2 != (longlong *)0x0) && (((ulonglong)plVar2 & 1) == 0)) &&
             ((*(uint *)(plVar2 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        local_a8[local_a0 - 1] = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          *(uint *)(plVar2 + 1) = (int)plVar2[1] + 1U & 0x8fffffff;
          goto LAB_1434d14c7;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar15);
  }
  lVar12 = local_b0;
  local_e8 = 0;
  if (uVar19 != 0) {
    do {
      uVar18 = local_e8;
      uVar15 = local_100;
      uVar14 = 0;
      uVar11 = plVar17[local_e8];
      if (local_100 != 0) {
        do {
          lVar9 = *(longlong *)(local_108 + uVar14 * 8);
          if ((*(longlong *)(lVar9 + 0x38) == *(longlong *)(uVar11 + 0x38)) &&
             (cVar6 = FUN_1435927d0(lVar9 + 0x48,uVar11 + 0x48), cVar6 != '\0')) goto LAB_1434d17d6;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar15);
      }
      if (*(int *)(*(longlong *)(uVar11 + 0x38) + 0x20) != 0) {
        if ((*(byte *)(uVar11 + 0x48) & 0x1f) == 0) {
          lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x218);
          param_5 = (longlong *)(lVar9 + 0x48);
          piVar1 = (int *)(lVar9 + 0x60);
          *piVar1 = *piVar1 + 1;
          do {
            uVar15 = local_100;
            bVar21 = false;
            uVar18 = 0;
            do {
              if (uVar15 <= uVar18) {
                if (!bVar21) {
                  Scaleform::GFx::AS3::Value::Value(local_70,&param_5);
                  FUN_143590140(uVar11 + 0x48,local_70);
                  if (9 < ((byte)local_70[0] & 0x1f)) {
                    if ((local_70[0] >> 9 & 1) == 0) {
                      FUN_1435920c0(local_70);
                    }
                    else {
                      FUN_143592150();
                    }
                  }
                  plVar17 = param_5 + 3;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  uVar18 = local_e8;
                  if ((int)*plVar17 == 0) {
                    FUN_14335f920();
                    uVar18 = local_e8;
                  }
                  goto LAB_1434d1683;
                }
                break;
              }
              lVar9 = *(longlong *)(local_108 + uVar18 * 8);
              uVar7 = *(uint *)(lVar9 + 0x48) & 0x1f;
              if (uVar7 != 0) {
                if (uVar7 == 0xc) {
                  bVar20 = *(longlong *)(lVar9 + 0x58) == 0;
LAB_1434d15e6:
                  if (bVar20) goto LAB_1434d1607;
                }
                else if (uVar7 == 10) {
                  bVar20 = *(longlong *)(lVar9 + 0x58) ==
                           *(longlong *)(*(longlong *)(lVar9 + 0x58) + 8) + 0x80;
                  goto LAB_1434d15e6;
                }
                plVar17 = *(longlong **)(lVar9 + 0x58);
                *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
                bVar21 = plVar17 == param_5;
                plVar17 = plVar17 + 3;
                *(int *)plVar17 = (int)*plVar17 + -1;
                if ((int)*plVar17 == 0) {
                  FUN_14335f920();
                }
              }
LAB_1434d1607:
              uVar18 = uVar18 + 1;
            } while (!bVar21);
            FUN_143360130(&param_5,&DAT_145b1a870,3);
          } while( true );
        }
LAB_1434d1683:
        uVar15 = 0;
        if (local_d8 != 0) {
          do {
            lVar9 = *(longlong *)(local_e0 + uVar15 * 8);
            if ((*(longlong *)(lVar9 + 0x38) == *(longlong *)(uVar11 + 0x38)) &&
               (((*(byte *)(lVar9 + 0x28) ^ *(byte *)(uVar11 + 0x28)) & 0xf) == 0))
            goto LAB_1434d172a;
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_d8);
        }
        *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
        FUN_1434f0160(&local_e0,local_c8,local_d8 + 1);
        puVar10 = (ulonglong *)(local_e0 + (local_d8 - 1) * 8);
        if (puVar10 != (ulonglong *)0x0) {
          *puVar10 = uVar11;
          *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
        }
        if (((uVar11 & 1) == 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880();
        }
LAB_1434d172a:
        uVar15 = 0;
        if (local_100 != 0) {
          do {
            lVar9 = *(longlong *)(local_108 + uVar15 * 8);
            if ((*(longlong *)(lVar9 + 0x38) == *(longlong *)(uVar11 + 0x38)) &&
               (plVar17 = local_a8,
               ((*(byte *)(lVar9 + 0x28) ^ *(byte *)(uVar11 + 0x28)) & 0xf) == 0))
            goto LAB_1434d17d6;
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_100);
        }
        *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
        FUN_1434f0160(&local_108,local_f0,local_100 + 1);
        puVar10 = (ulonglong *)(local_108 + (local_100 - 1) * 8);
        if (puVar10 != (ulonglong *)0x0) {
          *puVar10 = uVar11;
          *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
        }
        plVar17 = local_a8;
        if (((uVar11 & 1) == 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880();
          plVar17 = local_a8;
        }
      }
LAB_1434d17d6:
      local_e8 = uVar18 + 1;
      uVar11 = local_c0;
    } while (local_e8 < uVar19);
  }
  FUN_1432c5df0(param_2,0x3c);
  lVar12 = *plVar17;
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x2b0);
  if ((((lVar9 == 0) || (*(longlong *)(lVar9 + 0x38) != *(longlong *)(lVar12 + 0x38))) ||
      (cVar6 = FUN_1435927d0(lVar9 + 0x48,lVar12 + 0x48), cVar6 == '\0')) &&
     ((((byte)*(undefined4 *)(lVar12 + 0x48) & 0x1f) == 10 &&
      (puVar4 = *(undefined8 **)(lVar12 + 0x58), *(int *)(puVar4 + 4) != 0)))) {
    Scaleform::StringBuffer::AppendString(param_2,*puVar4,*(undefined4 *)(puVar4 + 4));
    FUN_1432c5df0(param_2,0x3a);
  }
  Scaleform::StringBuffer::AppendString(param_2,**(undefined8 **)(param_1 + 0x40));
  local_80 = 0;
  if (*(longlong *)(param_1 + 0x78) == 0) {
LAB_1434d1c09:
    lVar12 = local_e0;
    uVar15 = 0;
    uVar19 = local_d8;
    if (local_d8 != 0) {
      do {
        lVar9 = *(longlong *)(lVar12 + uVar15 * 8);
        Scaleform::StringBuffer::AppendString(param_2," xmlns",0xffffffffffffffff);
        lVar5 = local_b0;
        puVar10 = (ulonglong *)FUN_1435cc0e0(local_b0,&local_78,0,lVar9 + 0x38,lVar9 + 0x48);
        uVar11 = *puVar10;
        if ((*(int *)(*(longlong *)(uVar11 + 0x38) + 0x20) != 0) &&
           ((*(byte *)(uVar11 + 0x48) & 0x1f) == 0)) {
          lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x218);
          param_5 = (longlong *)(lVar9 + 0x48);
          piVar1 = (int *)(lVar9 + 0x60);
          *piVar1 = *piVar1 + 1;
          do {
            uVar19 = local_100;
            bVar21 = false;
            uVar18 = 0;
            do {
              if (uVar19 <= uVar18) {
                if (!bVar21) {
                  Scaleform::GFx::AS3::Value::Value(local_70,&param_5);
                  FUN_143590140(uVar11 + 0x48,local_70);
                  if (9 < ((byte)local_70[0] & 0x1f)) {
                    if ((local_70[0] >> 9 & 1) == 0) {
                      FUN_1435920c0(local_70);
                    }
                    else {
                      FUN_143592150();
                    }
                  }
                  plVar17 = param_5 + 3;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  uVar19 = local_d8;
                  if ((int)*plVar17 == 0) {
                    FUN_14335f920();
                    uVar19 = local_d8;
                  }
                  goto LAB_1434d1d77;
                }
                break;
              }
              lVar9 = *(longlong *)(local_108 + uVar18 * 8);
              uVar7 = *(uint *)(lVar9 + 0x48) & 0x1f;
              if (uVar7 != 0) {
                if (uVar7 == 0xc) {
                  bVar20 = *(longlong *)(lVar9 + 0x58) == 0;
LAB_1434d1cd6:
                  if (bVar20) goto LAB_1434d1cf7;
                }
                else if (uVar7 == 10) {
                  bVar20 = *(longlong *)(lVar9 + 0x58) ==
                           *(longlong *)(*(longlong *)(lVar9 + 0x58) + 8) + 0x80;
                  goto LAB_1434d1cd6;
                }
                plVar17 = *(longlong **)(lVar9 + 0x58);
                *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
                bVar21 = plVar17 == param_5;
                plVar17 = plVar17 + 3;
                *(int *)plVar17 = (int)*plVar17 + -1;
                if ((int)*plVar17 == 0) {
                  FUN_14335f920();
                }
              }
LAB_1434d1cf7:
              uVar18 = uVar18 + 1;
            } while (!bVar21);
            FUN_143360130(&param_5,&DAT_145b1a870);
          } while( true );
        }
LAB_1434d1d77:
        lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x2b0);
        if ((((lVar9 == 0) || (*(longlong *)(lVar9 + 0x38) != *(longlong *)(uVar11 + 0x38))) ||
            (cVar6 = FUN_1435927d0(lVar9 + 0x48,uVar11 + 0x48), cVar6 == '\0')) &&
           ((((byte)*(undefined4 *)(uVar11 + 0x48) & 0x1f) == 10 &&
            (puVar4 = *(undefined8 **)(uVar11 + 0x58), *(int *)(puVar4 + 4) != 0)))) {
          FUN_1432c5df0(param_2,0x3a);
          Scaleform::StringBuffer::AppendString(param_2,*puVar4,*(undefined4 *)(puVar4 + 4));
        }
        Scaleform::StringBuffer::AppendString(param_2,&DAT_145b14870,0xffffffffffffffff);
        Scaleform::StringBuffer::AppendString(param_2,**(undefined8 **)(uVar11 + 0x38));
        FUN_1432c5df0(param_2,0x22);
        if (((uVar11 & 1) == 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880(uVar11);
        }
        uVar15 = uVar15 + 1;
        uVar11 = local_c0;
      } while (uVar15 < uVar19);
    }
    uVar19 = *(ulonglong *)(param_1 + 0x90);
    if (uVar19 == 0) {
      Scaleform::StringBuffer::AppendString(param_2,&DAT_145b1a87c,0xffffffffffffffff);
    }
    else {
      FUN_1432c5df0(param_2,0x3e);
      if ((uVar19 < 2) &&
         ((uVar19 != 1 ||
          (iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x88) + 0xf0))(),
          iVar8 == 2)))) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if ((local_res20 == '\0') || (!bVar21)) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_b8 + param_3;
      }
      uVar15 = 0;
      if (uVar19 != 0) {
        do {
          if ((local_res20 != '\0') && (bVar21)) {
            FUN_1432c5df0(param_2,10);
          }
          plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar15 * 8);
          (**(code **)(*plVar17 + 0xe8))(plVar17,param_2,iVar8,&local_108,0);
          uVar15 = uVar15 + 1;
          uVar11 = local_c0;
        } while (uVar15 < uVar19);
      }
      if ((local_res20 != '\0') && (bVar21)) {
        FUN_1432c5df0(param_2,10);
        for (; param_3 != 0; param_3 = param_3 - iVar8) {
          iVar8 = 10;
          if (param_3 < 10) {
            iVar8 = param_3;
          }
          Scaleform::StringBuffer::AppendString(param_2,(&PTR_DAT_1467d3b00)[iVar8],(longlong)iVar8)
          ;
        }
      }
      Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069d8,0xffffffffffffffff);
      lVar12 = *local_a8;
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x2b0);
      if ((((lVar9 == 0) || (*(longlong *)(lVar9 + 0x38) != *(longlong *)(lVar12 + 0x38))) ||
          (cVar6 = FUN_1435927d0(lVar9 + 0x48,lVar12 + 0x48), cVar6 == '\0')) &&
         ((((byte)*(undefined4 *)(lVar12 + 0x48) & 0x1f) == 10 &&
          (puVar4 = *(undefined8 **)(lVar12 + 0x58), *(int *)(puVar4 + 4) != 0)))) {
        Scaleform::StringBuffer::AppendString(param_2,*puVar4,*(undefined4 *)(puVar4 + 4));
        FUN_1432c5df0(param_2,0x3a);
      }
      Scaleform::StringBuffer::AppendString
                (param_2,**(undefined8 **)(param_1 + 0x40),
                 *(undefined4 *)(*(undefined8 **)(param_1 + 0x40) + 4));
      FUN_1432c5df0(param_2,0x3e);
    }
    if (((uVar11 != 0) && ((uVar11 & 1) == 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
      FUN_1434ef880(uVar11);
    }
    FUN_1434e5ef0(&local_a8);
    FUN_1434e5ef0(&local_e0);
    FUN_1434e5ef0(&local_108);
    return;
  }
LAB_1434d1893:
  uVar11 = local_80;
  FUN_1432c5df0(param_2,0x20);
  plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x70) + uVar11 * 8);
  local_78 = plVar17;
  lVar12 = (**(code **)(*plVar17 + 0x110))(plVar17);
  FUN_1435cc0e0(*(undefined8 *)(lVar12 + 0x30),&local_e8,0,lVar12 + 0x38,lVar12 + 0x48);
  uVar19 = 0;
  if (local_100 != 0) {
    do {
      lVar12 = *(longlong *)(local_108 + uVar19 * 8);
      if (*(longlong *)(lVar12 + 0x38) == *(longlong *)(local_e8 + 0x38)) {
        FUN_143590140(local_e8 + 0x48,lVar12 + 0x48);
        break;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < local_100);
  }
  uVar15 = local_e8;
  uVar19 = local_100;
  if ((*(int *)(*(longlong *)(local_e8 + 0x38) + 0x20) != 0) &&
     ((*(byte *)(local_e8 + 0x48) & 0x1f) == 0)) {
    lVar12 = *(longlong *)(*(longlong *)(local_b0 + 0x10) + 0x218);
    param_5 = (longlong *)(lVar12 + 0x48);
    piVar1 = (int *)(lVar12 + 0x60);
    *piVar1 = *piVar1 + 1;
    do {
      uVar11 = local_100;
      bVar21 = false;
      uVar18 = 0;
      do {
        if (uVar11 <= uVar18) {
          if (!bVar21) {
            Scaleform::GFx::AS3::Value::Value(local_70,&param_5);
            FUN_143590140(uVar15 + 0x48,local_70);
            if (9 < ((byte)local_70[0] & 0x1f)) {
              if ((local_70[0] >> 9 & 1) == 0) {
                FUN_1435920c0();
              }
              else {
                FUN_143592150();
              }
            }
            bVar21 = false;
            uVar11 = 0;
            if (uVar19 == 0) goto LAB_1434d1a9f;
            goto LAB_1434d1a31;
          }
          break;
        }
        lVar12 = *(longlong *)(local_108 + uVar18 * 8);
        uVar7 = *(uint *)(lVar12 + 0x48) & 0x1f;
        if (uVar7 != 0) {
          if (uVar7 == 0xc) {
            bVar20 = *(longlong *)(lVar12 + 0x58) == 0;
LAB_1434d198b:
            if (bVar20) goto LAB_1434d19ac;
          }
          else if (uVar7 == 10) {
            bVar20 = *(longlong *)(lVar12 + 0x58) ==
                     *(longlong *)(*(longlong *)(lVar12 + 0x58) + 8) + 0x80;
            goto LAB_1434d198b;
          }
          plVar17 = *(longlong **)(lVar12 + 0x58);
          *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
          bVar21 = plVar17 == param_5;
          plVar17 = plVar17 + 3;
          *(int *)plVar17 = (int)*plVar17 + -1;
          if ((int)*plVar17 == 0) {
            FUN_14335f920();
          }
        }
LAB_1434d19ac:
        uVar18 = uVar18 + 1;
      } while (!bVar21);
      FUN_143360130(&param_5,&DAT_145b1a870);
    } while( true );
  }
  goto LAB_1434d1b55;
  while (uVar11 = uVar11 + 1, uVar11 < uVar19) {
LAB_1434d1a31:
    lVar12 = *(longlong *)(local_108 + uVar11 * 8);
    uVar7 = *(uint *)(lVar12 + 0x48) & 0x1f;
    if (uVar7 == 0) {
LAB_1434d1a64:
      if (((int)param_5[4] == 0) || (*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar15 + 0x38)))
      {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
    }
    else if (uVar7 == 0xc) {
      bVar20 = *(longlong *)(lVar12 + 0x58) == 0;
LAB_1434d1a5d:
      if (bVar20) goto LAB_1434d1a64;
    }
    else if (uVar7 == 10) {
      bVar20 = *(longlong *)(lVar12 + 0x58) ==
               *(longlong *)(*(longlong *)(lVar12 + 0x58) + 8) + 0x80;
      goto LAB_1434d1a5d;
    }
    if ((*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar15 + 0x38)) &&
       (((*(byte *)(lVar12 + 0x28) ^ *(byte *)(uVar15 + 0x28)) & 0xf) == 0)) goto LAB_1434d1b36;
  }
  if (!bVar21) {
LAB_1434d1a9f:
    uVar11 = 0;
    if (local_d8 != 0) {
      do {
        lVar12 = *(longlong *)(local_e0 + uVar11 * 8);
        if ((*(longlong *)(lVar12 + 0x38) == *(longlong *)(uVar15 + 0x38)) &&
           (((*(byte *)(lVar12 + 0x28) ^ *(byte *)(uVar15 + 0x28)) & 0xf) == 0)) goto LAB_1434d1b36;
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_d8);
    }
    *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
    FUN_1434f0160(&local_e0,local_c8,local_d8 + 1);
    puVar10 = (ulonglong *)(local_e0 + (local_d8 - 1) * 8);
    if (puVar10 != (ulonglong *)0x0) {
      *puVar10 = uVar15;
      *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
    }
    if (((uVar15 & 1) == 0) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
      FUN_1434ef880(uVar15);
    }
  }
LAB_1434d1b36:
  plVar2 = param_5 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  uVar11 = local_80;
  plVar17 = local_78;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(param_5);
    uVar11 = local_80;
    plVar17 = local_78;
  }
LAB_1434d1b55:
  if ((((byte)*(undefined4 *)(uVar15 + 0x48) & 0x1f) == 10) &&
     (puVar4 = *(undefined8 **)(uVar15 + 0x58), *(int *)(puVar4 + 4) != 0)) {
    Scaleform::StringBuffer::AppendString(param_2,*puVar4,*(undefined4 *)(puVar4 + 4));
    FUN_1432c5df0(param_2,0x3a);
  }
  Scaleform::StringBuffer::AppendString
            (param_2,*(undefined8 *)plVar17[8],*(undefined4 *)((undefined8 *)plVar17[8] + 4));
  Scaleform::StringBuffer::AppendString(param_2,&DAT_145b14870,0xffffffffffffffff);
  (**(code **)(*plVar17 + 0xe8))(plVar17,param_2,param_3,&local_108,0);
  FUN_1432c5df0(param_2,0x22);
  if (((uVar15 & 1) == 0) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
    FUN_1434ef880(uVar15);
  }
  local_80 = uVar11 + 1;
  uVar11 = local_c0;
  if (*(ulonglong *)(param_1 + 0x78) <= local_80) goto LAB_1434d1c09;
  goto LAB_1434d1893;
}



// FUNCTION 1434d2060 FUN_1434d2060 body=507 status=ok
// SIG undefined FUN_1434d2060(void)

undefined8 FUN_1434d2060(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78 [2];
  undefined8 local_70;
  uint local_58 [2];
  undefined8 local_50;
  
  uVar6 = FUN_1434caa70();
  if ((int)uVar6 == 0) {
    if ((((*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38) ==
           *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x38)) &&
         (((*(byte *)(*(longlong *)(param_1 + 0x50) + 0x28) ^
           *(byte *)(*(longlong *)(param_2 + 0x50) + 0x28)) & 0xf) == 0)) &&
        (uVar7 = *(ulonglong *)(param_1 + 0x78), uVar7 == *(ulonglong *)(param_2 + 0x78))) &&
       (uVar1 = *(ulonglong *)(param_1 + 0x90), uVar1 == *(ulonglong *)(param_2 + 0x90))) {
      uVar8 = 0;
      if (uVar7 != 0) {
        plVar11 = *(longlong **)(param_1 + 0x70);
LAB_1434d20f0:
        uVar10 = 0;
        lVar2 = *plVar11;
        plVar9 = *(longlong **)(param_2 + 0x70);
        do {
          lVar3 = *plVar9;
          if (*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar3 + 0x40)) {
            lVar4 = *(longlong *)(lVar2 + 0x50);
            if (lVar4 == 0) {
              if (*(longlong *)(lVar3 + 0x50) == 0) {
LAB_1434d213a:
                if (*(longlong *)(lVar2 + 0x58) == *(longlong *)(lVar3 + 0x58)) goto LAB_1434d216d;
              }
            }
            else {
              lVar5 = *(longlong *)(lVar3 + 0x50);
              if (((lVar5 != 0) && (*(longlong *)(lVar4 + 0x38) == *(longlong *)(lVar5 + 0x38))) &&
                 (((*(byte *)(lVar4 + 0x28) ^ *(byte *)(lVar5 + 0x28)) & 0xf) == 0))
              goto LAB_1434d213a;
            }
          }
          uVar10 = uVar10 + 1;
          plVar9 = plVar9 + 1;
          if (uVar7 <= uVar10) goto LAB_1434d2150;
        } while( true );
      }
LAB_1434d217f:
      uVar7 = 0;
      if (uVar1 != 0) {
        do {
          local_58[0] = 0;
          local_50 = 0;
          FUN_143590450(local_58,*(undefined8 *)(*(longlong *)(param_2 + 0x88) + uVar7 * 8));
          local_78[0] = 0;
          local_70 = 0;
          FUN_143590450(local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + uVar7 * 8));
          FUN_1435929f0(local_res20,local_res18,local_78,local_58);
          if (9 < ((byte)local_78[0] & 0x1f)) {
            if ((local_78[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_78);
            }
            else {
              FUN_143592150();
            }
          }
          if (9 < ((byte)local_58[0] & 0x1f)) {
            if ((local_58[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_58);
            }
            else {
              FUN_143592150();
            }
          }
          if (local_res18[0] == '\0') goto LAB_1434d2150;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      uVar6 = 1;
    }
    else {
LAB_1434d2150:
      uVar6 = 2;
    }
  }
  return uVar6;
LAB_1434d216d:
  uVar8 = uVar8 + 1;
  plVar11 = plVar11 + 1;
  if (uVar7 <= uVar8) goto LAB_1434d217f;
  goto LAB_1434d20f0;
}



// FUNCTION 1434d2270 FUN_1434d2270 body=101 status=ok
// SIG undefined FUN_1434d2270(void)

undefined8 FUN_1434d2270(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + uVar3 * 8) + 0xf0))();
      if (iVar2 == 1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 1;
}



// FUNCTION 1434d22e0 FUN_1434d22e0 body=385 status=ok
// SIG undefined FUN_1434d22e0(void)

ulonglong FUN_1434d22e0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined **local_68;
  longlong local_60;
  uint local_58 [8];
  uint local_38 [2];
  ulonglong local_30;
  uint local_28 [8];
  ulonglong uVar5;
  
  if (*(int *)(*param_2 + 0x20) == 0) {
    return *param_2 & 0xffffffffffffff00;
  }
  local_68 = &PTR_FUN_145b1a820;
  local_60 = param_1;
  Scaleform::GFx::AS3::Value::Value(local_58);
  FUN_1435ae6b0(local_38,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if ((local_38[0] >> 3 & 1) == 0) {
    uVar4 = FUN_1434d05b0(param_1,local_38,&local_68);
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    if ((((byte)local_28[0] & 0x1f) == 10) &&
       (uVar1 = *(ulonglong *)(param_1 + 0x78), uVar5 = uVar3, uVar1 != 0)) {
      do {
        cVar2 = FUN_1434ca4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar3 * 8),local_38);
        if (cVar2 != '\0') {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          cVar2 = (*(code *)local_68[1])(&local_68,uVar3);
          if (cVar2 == '\0') break;
        }
        uVar4 = (uint)uVar5;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return (ulonglong)(uVar4 != 0);
}



// FUNCTION 1434d2470 FUN_1434d2470 body=873 status=ok
// SIG undefined FUN_1434d2470(void)

void FUN_1434d2470(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_res8;
  ulonglong *local_res10;
  ulonglong local_res20;
  
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + 0x48);
  local_res10 = param_2;
  lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,0xa0,0);
  uVar12 = 0;
  uVar8 = uVar12;
  if (lVar7 != 0) {
    uVar8 = FUN_1434cfd60(lVar7,lVar2,uVar10,param_1 + 0x40,param_3);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x78);
  uVar11 = uVar12;
  if (uVar4 != 0) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + uVar11 * 8);
      puVar9 = (ulonglong *)(**(code **)(*plVar3 + 0x130))(plVar3,&local_res8,uVar8);
      uVar5 = *puVar9;
      FUN_1434f0230(uVar8 + 0x70,uVar8 + 0x70,*(longlong *)(uVar8 + 0x78) + 1);
      puVar9 = (ulonglong *)(*(longlong *)(uVar8 + 0x70) + (*(longlong *)(uVar8 + 0x78) + -1) * 8);
      if (puVar9 == (ulonglong *)0x0) {
LAB_1434d254e:
        if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880(uVar5);
        }
      }
      else {
        *puVar9 = uVar5;
        if (uVar5 != 0) {
          *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
          goto LAB_1434d254e;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x90);
  uVar11 = uVar12;
  if (uVar4 != 0) {
    do {
      lVar7 = FUN_1435b4fe0(lVar2);
      iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + uVar11 * 8) + 0xf0))();
      if (((iVar6 != 3) || (*(char *)(lVar7 + 0x50) == '\0')) &&
         ((iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + uVar11 * 8) + 0xf0))
                             (), iVar6 != 4 || (*(char *)(lVar7 + 0x51) == '\0')))) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar11 * 8);
        puVar9 = (ulonglong *)(**(code **)(*plVar3 + 0x130))(plVar3,&local_res8,uVar8);
        uVar5 = *puVar9;
        FUN_1434f0230(uVar8 + 0x88,uVar8 + 0x88,*(longlong *)(uVar8 + 0x90) + 1);
        puVar9 = (ulonglong *)(*(longlong *)(uVar8 + 0x88) + (*(longlong *)(uVar8 + 0x90) + -1) * 8)
        ;
        if (puVar9 != (ulonglong *)0x0) {
          *puVar9 = uVar5;
          if (uVar5 == 0) goto LAB_1434d2672;
          *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
        }
        if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880(uVar5);
        }
      }
LAB_1434d2672:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
      lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x218);
      local_res8 = lVar7 + 0x48;
      piVar1 = (int *)(lVar7 + 0x60);
      *piVar1 = *piVar1 + 1;
      uVar10 = FUN_143590540();
      FUN_1435cc0e0(lVar2,&local_res20,0,&local_res8,uVar10);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar11 = local_res20;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + uVar12 * 8);
      if (local_res20 != uVar4) {
        FUN_143590140(local_res20 + 0x48,uVar4 + 0x48);
        lVar2 = *(longlong *)(uVar4 + 0x38);
        piVar1 = (int *)(lVar2 + 0x18);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(uVar11 + 0x38) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(longlong *)(uVar11 + 0x38) = lVar2;
        *(ulonglong *)(uVar11 + 0x28) =
             *(ulonglong *)(uVar11 + 0x28) ^
             (ulonglong)((*(uint *)(uVar4 + 0x28) ^ *(uint *)(uVar11 + 0x28)) & 0xf);
        if (*(RefCountImpl **)(uVar4 + 0x40) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(uVar4 + 0x40));
        }
        if (*(RefCountImpl **)(uVar11 + 0x40) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(uVar11 + 0x40));
        }
        *(undefined8 *)(uVar11 + 0x40) = *(undefined8 *)(uVar4 + 0x40);
      }
      FUN_1434f0230(uVar8 + 0x58,uVar8 + 0x58);
      puVar9 = (ulonglong *)(*(longlong *)(uVar8 + 0x58) + (*(longlong *)(uVar8 + 0x60) + -1) * 8);
      if (puVar9 == (ulonglong *)0x0) {
LAB_1434d2794:
        if (((uVar11 != 0) && ((uVar11 & 1) == 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880(uVar11);
        }
      }
      else {
        *puVar9 = uVar11;
        if (uVar11 != 0) {
          *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
          goto LAB_1434d2794;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ulonglong *)(param_1 + 0x60));
  }
  *local_res10 = uVar8;
  return;
}



// FUNCTION 1434d27e0 FUN_1434d27e0 body=152 status=ok
// SIG undefined FUN_1434d27e0(void)

void FUN_1434d27e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char local_res18 [8];
  uint local_res20 [2];
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] == '\0') {
    local_28 = &PTR_FUN_145b1a850;
    local_20 = param_1;
    local_18 = param_2;
    FUN_1434d05b0(param_1,param_3,&local_28);
  }
  else if ((ulonglong)local_res20[0] <= *(ulonglong *)(param_1 + 0x90)) {
    FUN_1434e8360(param_2,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x88) + (ulonglong)local_res20[0] * 8));
    return;
  }
  return;
}



// FUNCTION 1434d28e0 FUN_1434d28e0 body=97 status=ok
// SIG undefined FUN_1434d28e0(void)

void FUN_1434d28e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  FUN_1434f0700(param_1 + 0x50);
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + uVar3 * 8);
      (**(code **)(*plVar2 + 0x118))(plVar2,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



// FUNCTION 1434d2960 FUN_1434d2960 body=1617 status=ok
// SIG undefined FUN_1434d2960(void)

undefined1 * FUN_1434d2960(longlong *param_1,undefined1 *param_2,ulonglong param_3,uint *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  bool bVar16;
  longlong *local_res8;
  undefined8 local_res20;
  longlong *local_88;
  undefined1 local_80 [8];
  uint local_78 [2];
  longlong local_70;
  longlong *local_68;
  uint local_58 [2];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  uVar15 = 0;
  uVar10 = *(undefined8 *)(param_1[5] + 0x98);
  local_res20 = uVar10;
  if ((((byte)*param_4 & 0x1f) == 0xc) &&
     (cVar5 = FUN_143592790(*(undefined8 *)(param_4 + 4)), cVar5 != '\0')) {
    local_88 = *(longlong **)(param_4 + 4);
    uVar14 = 0;
    uVar2 = local_88[0xc];
    if (uVar2 != 0) {
      do {
        plVar12 = *(longlong **)(local_88[0xb] + uVar14 * 8);
        plVar7 = param_1;
        do {
          if (plVar7 == plVar12) {
            uVar10 = FUN_1435c8e40(local_78,0x45e,local_res20);
            FUN_1435cbe70(local_res20,uVar10);
            piVar1 = (int *)(local_70 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            goto LAB_1434d2bce;
          }
          plVar7 = (longlong *)plVar7[9];
        } while (plVar7 != (longlong *)0x0);
        if (param_3 < (ulonglong)param_1[0x12]) {
          iVar6 = (**(code **)(*plVar12 + 0xf0))(plVar12);
          if (iVar6 == 2) {
            puVar8 = (ulonglong *)(**(code **)(*plVar12 + 0x130))(plVar12,local_80,param_1);
            plVar7 = (longlong *)*puVar8;
            local_res8 = plVar7;
            FUN_1434ef210(param_1 + 0x11,param_3,&local_res8);
            goto LAB_1434d2ae0;
          }
          *(uint *)(plVar12 + 1) = (int)plVar12[1] + 1U & 0x8fffffff;
          local_res8 = plVar12;
          FUN_1434ef210(param_1 + 0x11,param_3,&local_res8);
LAB_1434d2b59:
          if ((((ulonglong)plVar12 & 1) == 0) && ((*(uint *)(plVar12 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar12 + 1) = *(uint *)(plVar12 + 1) - 1;
            FUN_1434ef880(plVar12);
          }
          FUN_1434f0700(plVar12 + 9,param_1);
LAB_1434d2b82:
          uVar15 = 1;
        }
        else if (param_3 == param_1[0x12]) {
          iVar6 = (**(code **)(*plVar12 + 0xf0))(plVar12);
          if (iVar6 != 2) {
            plVar7 = param_1 + 0x11;
            *(uint *)(plVar12 + 1) = (int)plVar12[1] + 1U & 0x8fffffff;
            FUN_1434f0230(plVar7,plVar7,param_1[0x12] + 1);
            puVar8 = (ulonglong *)(*plVar7 + (param_1[0x12] + -1) * 8);
            if (puVar8 != (ulonglong *)0x0) {
              *puVar8 = (ulonglong)plVar12;
              *(uint *)(plVar12 + 1) = (int)plVar12[1] + 1U & 0x8fffffff;
            }
            goto LAB_1434d2b59;
          }
          puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x130))(plVar12,local_78,param_1);
          plVar12 = param_1 + 0x11;
          plVar7 = (longlong *)*puVar9;
          FUN_1434f0230(plVar12,plVar12,param_1[0x12] + 1);
          puVar9 = (undefined8 *)(*plVar12 + (param_1[0x12] + -1) * 8);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = plVar7;
            if (plVar7 == (longlong *)0x0) goto LAB_1434d2b82;
            *(uint *)(plVar7 + 1) = (int)plVar7[1] + 1U & 0x8fffffff;
          }
LAB_1434d2ae0:
          if (((plVar7 != (longlong *)0x0) && (((ulonglong)plVar7 & 1) == 0)) &&
             ((*(uint *)(plVar7 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) - 1;
            FUN_1434ef880(plVar7);
          }
          goto LAB_1434d2b82;
        }
        uVar14 = uVar14 + 1;
        param_3 = param_3 + 1;
        if (uVar2 <= uVar14) {
          *param_2 = uVar15;
          return param_2;
        }
      } while( true );
    }
    goto LAB_1434d2bce;
  }
  local_88 = (longlong *)0x0;
  plVar12 = param_1;
  plVar7 = (longlong *)0x0;
  if ((((byte)*param_4 & 0x1f) == 0xc) &&
     (cVar5 = FUN_143592750(*(undefined8 *)(param_4 + 4)), cVar5 != '\0')) {
    plVar11 = *(longlong **)(param_4 + 4);
    if (plVar11 != (longlong *)0x0) {
      *(uint *)(plVar11 + 1) = (int)plVar11[1] + 1U & 0x8fffffff;
      local_88 = plVar11;
      plVar7 = plVar11;
    }
  }
  else {
    local_50 = *(undefined8 *)(param_4 + 2);
    local_58[0] = *param_4;
    local_48 = param_4[4];
    uStack_44 = param_4[5];
    uStack_40 = param_4[6];
    uStack_3c = param_4[7];
    lVar3 = param_1[5];
    local_78[0] = 0;
    local_70 = 0;
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    plVar11 = (longlong *)FUN_1435b4fe0(lVar3);
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,1);
    (**(code **)(*plVar11 + 0x68))(plVar11,local_78,&local_res8,local_58,1,1);
    bVar4 = (byte)local_58[0];
    if (*(char *)(*(longlong *)(param_1[5] + 0x98) + 0xb8) != '\0') {
      *param_2 = 0;
      if ((bVar4 & 0x1f) < 10) goto LAB_1434d2cc3;
      if ((local_58[0] >> 9 & 1) != 0) {
        FUN_143592150();
        goto LAB_1434d2cc3;
      }
LAB_1434d2cbe:
      FUN_1435920c0(local_58);
LAB_1434d2cc3:
      if (((byte)local_78[0] & 0x1f) < 10) {
        return param_2;
      }
      if ((local_78[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return param_2;
      }
      FUN_1435920c0(local_78);
      return param_2;
    }
    if ((local_78[0] & 0x1f) == 0xc) {
      bVar16 = local_68 == (longlong *)0x0;
LAB_1434d2d17:
      if (bVar16) {
        *param_2 = 0;
        if ((bVar4 & 0x1f) < 10) goto LAB_1434d2cc3;
        if ((local_58[0] >> 9 & 1) != 0) {
          FUN_143592150(local_58);
          goto LAB_1434d2cc3;
        }
        goto LAB_1434d2cbe;
      }
    }
    else if ((local_78[0] & 0x1f) == 10) {
      bVar16 = local_68 == (longlong *)(local_68[1] + 0x80);
      goto LAB_1434d2d17;
    }
    if (local_68 != (longlong *)0x0) {
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      *(uint *)(local_68 + 1) = *(uint *)(local_68 + 1) & 0x8fffffff;
      local_88 = local_68;
      plVar7 = local_68;
    }
    if (9 < (bVar4 & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
    uVar10 = local_res20;
    if (9 < ((byte)local_78[0] & 0x1f)) {
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
        uVar10 = local_res20;
      }
      else {
        FUN_143592150();
        uVar10 = local_res20;
      }
    }
  }
  do {
    if (plVar12 == plVar7) {
      uVar13 = FUN_1435c8e40(local_78,0x45e,uVar10);
      FUN_1435cbe70(uVar10,uVar13);
      piVar1 = (int *)(local_70 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      if (plVar7 == (longlong *)0x0) {
        return param_2;
      }
      if (((ulonglong)plVar7 & 1) != 0) {
        return param_2;
      }
      if ((*(uint *)(plVar7 + 1) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) - 1;
      FUN_1434ef880(plVar7);
      return param_2;
    }
    puVar8 = (ulonglong *)(plVar12 + 9);
    plVar12 = (longlong *)*puVar8;
  } while ((longlong *)*puVar8 != (longlong *)0x0);
  if (param_3 < (ulonglong)param_1[0x12]) {
    iVar6 = (**(code **)(*plVar7 + 0xf0))(plVar7);
    if (iVar6 == 2) {
      puVar8 = (ulonglong *)(**(code **)(*plVar7 + 0x130))(plVar7,&local_res20,param_1);
      plVar11 = (longlong *)*puVar8;
      local_res8 = plVar11;
      FUN_1434ef210(param_1 + 0x11,param_3,&local_res8);
      goto LAB_1434d2e95;
    }
    FUN_1434ef210(param_1 + 0x11,param_3,&local_88);
LAB_1434d2f00:
    FUN_1434f0700(plVar7 + 9,param_1);
LAB_1434d2f0c:
    uVar15 = 1;
  }
  else if (param_3 == param_1[0x12]) {
    iVar6 = (**(code **)(*plVar7 + 0xf0))(plVar7);
    if (iVar6 != 2) {
      FUN_1434f0230(param_1 + 0x11,param_1 + 0x11,param_1[0x12] + 1);
      puVar9 = (undefined8 *)(param_1[0x11] + (param_1[0x12] + -1) * 8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = plVar7;
        *(uint *)(plVar7 + 1) = (int)plVar7[1] + 1U & 0x8fffffff;
      }
      goto LAB_1434d2f00;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x130))(plVar7,&local_res8,param_1);
    plVar12 = param_1 + 0x11;
    plVar11 = (longlong *)*puVar9;
    FUN_1434f0230(plVar12,plVar12,param_1[0x12] + 1);
    puVar9 = (undefined8 *)(*plVar12 + (param_1[0x12] + -1) * 8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = plVar11;
      if (plVar11 == (longlong *)0x0) goto LAB_1434d2f0c;
      *(uint *)(plVar11 + 1) = (int)plVar11[1] + 1U & 0x8fffffff;
    }
LAB_1434d2e95:
    if (((plVar11 != (longlong *)0x0) && (((ulonglong)plVar11 & 1) == 0)) &&
       ((*(uint *)(plVar11 + 1) & 0x3fffff) != 0)) {
      *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) - 1;
      FUN_1434ef880(plVar11);
    }
    goto LAB_1434d2f0c;
  }
  if (((plVar7 != (longlong *)0x0) && (((ulonglong)plVar7 & 1) == 0)) &&
     ((*(uint *)(plVar7 + 1) & 0x3fffff) != 0)) {
    *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) - 1;
    FUN_1434ef880(plVar7);
    *param_2 = uVar15;
    return param_2;
  }
LAB_1434d2bce:
  *param_2 = uVar15;
  return param_2;
}



// FUNCTION 1434d2fc0 FUN_1434d2fc0 body=286 status=ok
// SIG undefined FUN_1434d2fc0(void)

undefined1 * FUN_1434d2fc0(longlong *param_1,undefined1 *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  uVar6 = 0;
  uVar7 = *param_3 & 0x1f;
  if (uVar7 == 0) {
LAB_1434d30ae:
    puVar3 = (undefined1 *)(**(code **)(*param_1 + 0x150))(param_1,local_res10,0);
LAB_1434d30c2:
    uVar6 = *puVar3;
  }
  else {
    if (uVar7 == 0xc) {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1434d3010:
      if (bVar8) goto LAB_1434d30ae;
    }
    else if (uVar7 == 10) {
      bVar8 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1434d3010;
    }
    if ((uVar7 == 0xc) && (cVar1 = FUN_143592750(*(undefined8 *)(param_3 + 4)), cVar1 != '\0')) {
      lVar5 = *(longlong *)(param_3 + 4);
    }
    else {
      if ((((byte)*param_3 & 0x1f) != 0xc) ||
         ((cVar1 = FUN_143592790(*(undefined8 *)(param_3 + 4)), cVar1 == '\0' ||
          (*(longlong *)(*(longlong *)(param_3 + 4) + 0x60) != 1)))) goto LAB_1434d30c5;
      lVar5 = **(longlong **)(*(longlong *)(param_3 + 4) + 0x58);
    }
    if (lVar5 != 0) {
      uVar2 = 0;
      if (param_1[0x12] != 0) {
        plVar4 = (longlong *)param_1[0x11];
        do {
          if (*plVar4 == lVar5) {
            puVar3 = (undefined1 *)
                     (**(code **)(*param_1 + 0x150))(param_1,local_res10,(int)uVar2 + 1,param_4);
            goto LAB_1434d30c2;
          }
          uVar2 = uVar2 + 1;
          plVar4 = plVar4 + 1;
        } while (uVar2 < (ulonglong)param_1[0x12]);
      }
    }
  }
LAB_1434d30c5:
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1434d30f0 FUN_1434d30f0 body=257 status=ok
// SIG undefined FUN_1434d30f0(void)

undefined1 * FUN_1434d30f0(longlong *param_1,undefined1 *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  uVar6 = 0;
  uVar7 = *param_3 & 0x1f;
  if (uVar7 == 0) {
LAB_1434d31bd:
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x12);
LAB_1434d31c4:
    puVar3 = (undefined1 *)(**(code **)(*param_1 + 0x150))(param_1,local_res10,uVar4,param_4);
    uVar6 = *puVar3;
  }
  else {
    if (uVar7 == 0xc) {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1434d3140:
      if (bVar8) goto LAB_1434d31bd;
    }
    else if (uVar7 == 10) {
      bVar8 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1434d3140;
    }
    if ((uVar7 == 0xc) && (cVar1 = FUN_143592750(), cVar1 != '\0')) {
      lVar5 = *(longlong *)(param_3 + 4);
    }
    else {
      if ((((byte)*param_3 & 0x1f) != 0xc) ||
         ((cVar1 = FUN_143592790(), cVar1 == '\0' ||
          (*(longlong *)(*(longlong *)(param_3 + 4) + 0x60) != 1)))) goto LAB_1434d31d8;
      lVar5 = **(longlong **)(*(longlong *)(param_3 + 4) + 0x58);
    }
    if (lVar5 != 0) {
      uVar4 = 0;
      if (param_1[0x12] != 0) {
        plVar2 = (longlong *)param_1[0x11];
        do {
          if (*plVar2 == lVar5) {
            uVar4 = uVar4 & 0xffffffff;
            goto LAB_1434d31c4;
          }
          uVar4 = uVar4 + 1;
          plVar2 = plVar2 + 1;
        } while (uVar4 < (ulonglong)param_1[0x12]);
      }
    }
  }
LAB_1434d31d8:
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1434d3200 FUN_1434d3200 body=299 status=ok
// SIG undefined FUN_1434d3200(void)

void FUN_1434d3200(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  uVar5 = 0;
  if (param_2 == 0) {
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar5 * 8);
        if ((lVar2 != 0) && (uVar3 = *(ulonglong *)(lVar2 + 0x48), uVar3 != 0)) {
          if ((uVar3 & 1) == 0) {
            if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x48) = uVar3 - 1;
          }
          *(undefined8 *)(lVar2 + 0x48) = 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    FUN_1434f0230(param_1 + 0x88,param_1 + 0x88,0);
  }
  else if (uVar1 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x88);
    do {
      lVar2 = *plVar4;
      if (lVar2 == param_2) {
        if ((lVar2 != 0) && (uVar1 = *(ulonglong *)(lVar2 + 0x48), uVar1 != 0)) {
          if ((uVar1 & 1) == 0) {
            if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x48) = uVar1 - 1;
          }
          *(undefined8 *)(lVar2 + 0x48) = 0;
        }
        FUN_1434ef920(param_1 + 0x88,uVar5);
        return;
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 1434d3340 FUN_1434d3340 body=126 status=ok
// SIG undefined FUN_1434d3340(void)

void FUN_1434d3340(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < *(ulonglong *)(param_1 + 0x90)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + param_2 * 8);
    if ((lVar1 != 0) && (uVar2 = *(ulonglong *)(lVar1 + 0x48), uVar2 != 0)) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar1 + 0x48) = uVar2 - 1;
      }
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    FUN_1434ef920((longlong *)(param_1 + 0x88),param_2);
  }
  return;
}



// FUNCTION 1434d33d0 FUN_1434d33d0 body=233 status=ok
// SIG undefined FUN_1434d33d0(void)

void FUN_1434d33d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  uVar6 = *(ulonglong *)(param_1 + 0x90);
  uVar7 = 0;
  if (uVar6 != 0) {
    plVar8 = (longlong *)0x0;
    do {
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar7 * 8);
      iVar2 = (**(code **)(*plVar9 + 0xf0))(plVar9);
      if (iVar2 == 2) {
        if (plVar8 == (longlong *)0x0) {
          plVar3 = (longlong *)plVar9[8];
          if (((int)plVar3[4] != 0) && (uVar5 = 0, (int)plVar3[4] != 0)) {
            do {
              cVar1 = Scaleform::GFx::ASUtils::IsWhiteSpace((int)*(char *)(uVar5 + *plVar3));
              if (cVar1 == '\0') goto LAB_1434d3495;
              plVar3 = (longlong *)plVar9[8];
              uVar4 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(plVar3 + 4));
          }
        }
        else if (*(int *)(plVar9[8] + 0x20) != 0) {
          FUN_143360170(plVar8 + 8,plVar9 + 8);
        }
        FUN_1434ef920((longlong *)(param_1 + 0x88),uVar7);
        uVar7 = uVar7 - 1;
        uVar6 = uVar6 - 1;
        plVar9 = plVar8;
      }
      else {
        plVar9 = (longlong *)0x0;
      }
LAB_1434d3495:
      uVar7 = uVar7 + 1;
      plVar8 = plVar9;
    } while (uVar7 < uVar6);
  }
  return;
}



// FUNCTION 1434d34c0 FUN_1434d34c0 body=279 status=ok
// SIG undefined FUN_1434d34c0(void)

undefined8 FUN_1434d34c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  uint uStackX_c;
  
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  bVar10 = false;
  uVar9 = 0;
  if (uVar3 != 0) {
    lVar7 = (ulonglong)uStackX_c << 0x20;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar9 * 8);
      if (((byte)*(undefined4 *)(lVar8 + 0x48) & 0x1f) == 10) {
        lVar7 = *(longlong *)(lVar8 + 0x58);
        bVar10 = true;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        if (lVar7 != *param_2) goto LAB_1434d3526;
        bVar5 = true;
      }
      else {
LAB_1434d3526:
        bVar5 = false;
      }
      if (bVar10) {
        bVar10 = false;
        piVar1 = (int *)(lVar7 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar7);
        }
      }
      if (bVar5) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar9 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          return *puVar2;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 == param_3) {
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 1;
      if (*(char *)(*(longlong *)*param_2 + lVar7) != (&DAT_145b1a8b8)[lVar7]) {
        return 0;
      }
      lVar7 = lVar8;
    } while (lVar8 != 4);
    uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1f8);
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 400))(plVar4,param_2,param_3);
  }
  return uVar6;
}



// FUNCTION 1434d35e0 FUN_1434d35e0 body=166 status=ok
// SIG undefined FUN_1434d35e0(void)

longlong FUN_1434d35e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x60) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x58);
    do {
      if (*(longlong *)(*plVar4 + 0x38) == *param_2) {
        plVar4 = *(longlong **)(param_1 + 0x58) + uVar3;
        if (plVar4 != (longlong *)0x0) {
          return *plVar4;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x60));
  }
  if (*(longlong **)(param_1 + 0x48) != param_3) {
                    /* WARNING: Could not recover jumptable at 0x0001434d3627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 400))();
    return lVar1;
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    if (*(char *)(*(longlong *)*param_2 + lVar1) != (&DAT_145b1a8b8)[lVar1]) {
      return 0;
    }
    lVar1 = lVar2;
  } while (lVar2 != 4);
  return *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1f8);
}



// FUNCTION 1434d3690 FUN_1434d3690 body=459 status=ok
// SIG undefined FUN_1434d3690(void)

void FUN_1434d3690(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong local_res8;
  
  if (((byte)*(undefined4 *)(param_1[10] + 0x48) & 0x1f) == 10) {
    local_res8 = *(ulonglong *)(param_1[10] + 0x58);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    iVar3 = *(int *)(local_res8 + 0x18);
    *(int *)(local_res8 + 0x18) = iVar3;
    if (iVar3 == 0) {
      FUN_14335f920();
    }
    lVar5 = (**(code **)(*param_1 + 400))(param_1,&local_res8,param_3);
    if (lVar5 == 0) {
      lVar5 = *param_2;
      lVar8 = 8;
      lVar12 = 0x1505;
      if (lVar5 != 0) {
        lVar11 = 8;
        uVar6 = 0x1505;
        do {
          pbVar2 = &stack0x00000007 + lVar11;
          lVar11 = lVar11 + -1;
          uVar6 = (ulonglong)*pbVar2 + uVar6 * 0x1003f;
        } while (lVar11 != 0);
        uVar6 = *(ulonglong *)(lVar5 + 8) & uVar6;
        lVar11 = uVar6 * 3 + 2;
        puVar7 = (ulonglong *)(lVar5 + lVar11 * 8);
        if ((*(longlong *)(lVar5 + lVar11 * 8) != -2) && (uVar10 = uVar6, puVar7[1] == uVar6)) {
          while ((puVar7[1] != uVar6 || (puVar7[2] != local_res8))) {
            uVar10 = *puVar7;
            if (uVar10 == 0xffffffffffffffff) goto LAB_1434d37a0;
            puVar7 = (ulonglong *)(lVar5 + uVar10 * 0x18 + 0x10);
          }
          if ((-1 < (longlong)uVar10) && (lVar5 + uVar10 * 0x18 + 0x20 != 0)) goto LAB_1434d37d3;
        }
      }
LAB_1434d37a0:
      do {
        pbVar2 = &stack0x00000007 + lVar8;
        lVar8 = lVar8 + -1;
        lVar12 = (ulonglong)*pbVar2 + lVar12 * 0x1003f;
      } while (lVar8 != 0);
      FUN_1434e5630(param_2,param_2[1],&local_res8,lVar12);
    }
LAB_1434d37d3:
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res8);
    }
  }
  uVar6 = param_1[0xf];
  uVar9 = 0;
  uVar10 = uVar9;
  if (uVar6 != 0) {
    do {
      plVar4 = *(longlong **)(param_1[0xe] + uVar10 * 8);
      (**(code **)(*plVar4 + 0x1a0))(plVar4,param_2,param_3);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  uVar6 = param_1[0x12];
  if (uVar6 != 0) {
    do {
      plVar4 = *(longlong **)(param_1[0x11] + uVar9 * 8);
      (**(code **)(*plVar4 + 0x1a0))(plVar4,param_2,param_3);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  return;
}



// FUNCTION 1434d3870 FUN_1434d3870 body=552 status=ok
// SIG undefined FUN_1434d3870(void)

longlong * FUN_1434d3870(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  void *_Dst;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  uVar10 = 0;
  uVar9 = uVar10;
  if (((byte)*param_2 & 0x1f) == 0xb) {
    uVar11 = *(ulonglong *)(param_2 + 4);
    if (uVar11 != 0) {
      *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
      uVar9 = uVar11;
    }
  }
  else {
    local_res8 = *(longlong *)(param_2 + 4);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    uVar2 = *(undefined8 *)(param_1[5] + 0x98);
    uVar6 = FUN_143590540();
    puVar7 = (ulonglong *)FUN_1435cc0e0(uVar2,local_res10,3,&local_res8,uVar6);
    if (*puVar7 != 0) {
      uVar9 = *puVar7;
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x110))(param_1);
  if ((*(longlong *)(lVar8 + 0x38) != *(longlong *)(uVar9 + 0x38)) ||
     (((*(byte *)(lVar8 + 0x28) ^ *(byte *)(uVar9 + 0x28)) & 0xf) != 0)) {
    uVar11 = uVar10;
    if (param_1[0xf] != 0) {
      do {
        lVar8 = (**(code **)(**(longlong **)(param_1[0xe] + uVar11 * 8) + 0x110))();
        if ((*(longlong *)(lVar8 + 0x38) == *(longlong *)(uVar9 + 0x38)) &&
           (((*(byte *)(lVar8 + 0x28) ^ *(byte *)(uVar9 + 0x28)) & 0xf) == 0)) goto LAB_1434d3a63;
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulonglong)param_1[0xf]);
    }
    uVar11 = uVar10;
    if (param_1[0xc] != 0) {
      do {
        lVar8 = *(longlong *)(param_1[0xb] + uVar11 * 8);
        if ((*(longlong *)(lVar8 + 0x38) == *(longlong *)(uVar9 + 0x38)) &&
           (((*(byte *)(uVar9 + 0x48) & 0x1f) == 0 ||
            (cVar5 = FUN_1435927d0(uVar9 + 0x48,lVar8 + 0x48), cVar5 != '\0')))) {
          if (param_1[0xc] == 1) {
            FUN_1434f0230(param_1 + 0xb,param_1 + 0xb,0);
          }
          else {
            uVar3 = *(ulonglong *)(param_1[0xb] + uVar11 * 8);
            if (uVar3 != 0) {
              if ((uVar3 & 1) == 0) {
                if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *(ulonglong *)(param_1[0xb] + uVar11 * 8) = uVar3 - 1;
              }
            }
            _Dst = (void *)(param_1[0xb] + uVar11 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[0xc] - uVar11) * 8 - 8);
            param_1[0xc] = param_1[0xc] + -1;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulonglong)param_1[0xc]);
    }
    if (param_1[0x12] != 0) {
      do {
        plVar4 = *(longlong **)(param_1[0x11] + uVar10 * 8);
        (**(code **)(*plVar4 + 0x1a8))(plVar4,param_2);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulonglong)param_1[0x12]);
    }
  }
LAB_1434d3a63:
  if (((uVar9 & 1) == 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
    FUN_1434ef880(uVar9);
  }
  return param_1;
}



// FUNCTION 1434d3aa0 FUN_1434d3aa0 body=166 status=ok
// SIG undefined FUN_1434d3aa0(void)

undefined1 * FUN_1434d3aa0(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_res18 [16];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  longlong local_18;
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_28);
  if (local_res18[0] != '\0') {
    FUN_1434d3b50(param_1,param_2,local_28[0],param_4);
    return param_2;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_20,0x43f,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434d3b50 FUN_1434d3b50 body=774 status=ok
// SIG undefined FUN_1434d3b50(void)

undefined1 *
FUN_1434d3b50(longlong *param_1,undefined1 *param_2,ulonglong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong local_30;
  
  uVar15 = 1;
  if ((ulonglong)param_1[0x12] <= param_3) {
    uVar4 = param_1[0x12];
    uVar13 = param_1[0x12] + 1;
    FUN_1434f0230(param_1 + 0x11,param_1 + 0x11,uVar13);
    if (uVar4 < uVar13) {
      puVar12 = (undefined8 *)(param_1[0x11] + uVar4 * 8);
      for (lVar14 = uVar13 - uVar4; lVar14 != 0; lVar14 = lVar14 + -1) {
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = 0;
        }
        puVar12 = puVar12 + 1;
      }
    }
    param_3 = param_1[0x12] - 1;
    uVar4 = *(ulonglong *)(param_1[0x11] + param_3 * 8);
    plVar3 = (longlong *)(param_1[0x11] + param_3 * 8);
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *plVar3 = uVar4 - 1;
      }
      *plVar3 = 0;
    }
  }
  if (((((byte)*param_4 & 0x1f) == 0xc) &&
      (cVar7 = FUN_143592750(*(undefined8 *)(param_4 + 4)), cVar7 != '\0')) &&
     (iVar8 = (**(code **)(**(longlong **)(param_4 + 4) + 0xf0))(), iVar8 != 5)) {
    plVar3 = *(longlong **)(param_4 + 4);
    iVar8 = (**(code **)(*plVar3 + 0xf0))(plVar3);
    plVar9 = param_1;
    if (iVar8 == 1) {
      do {
        if (plVar9 == plVar3) {
          uVar5 = *(undefined8 *)(param_1[5] + 0x98);
          uVar10 = FUN_1435c8e40(local_38,0x45e,uVar5);
          FUN_1435cbe70(uVar5,uVar10);
          piVar2 = (int *)(local_30 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
          *param_2 = 0;
          return param_2;
        }
        plVar1 = plVar9 + 9;
        plVar9 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
    }
    FUN_1434f0700(plVar3 + 9,param_1);
    lVar14 = *(longlong *)(param_3 * 8 + param_1[0x11]);
    if ((lVar14 != 0) && (uVar4 = *(ulonglong *)(lVar14 + 0x48), uVar4 != 0)) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar14 + 0x48) = uVar4 - 1;
      }
      *(undefined8 *)(lVar14 + 0x48) = 0;
    }
    FUN_1434f0700(param_1[0x11] + param_3 * 8,plVar3);
  }
  else if ((((byte)*param_4 & 0x1f) == 0xc) &&
          (cVar7 = FUN_143592790(*(undefined8 *)(param_4 + 4)), cVar7 != '\0')) {
    (**(code **)(*param_1 + 0x170))(param_1,param_3);
    puVar11 = (undefined1 *)(**(code **)(*param_1 + 0x150))(param_1,local_res8,param_3,param_4);
    uVar15 = *puVar11;
  }
  else {
    lVar14 = *(longlong *)(param_3 * 8 + param_1[0x11]);
    if ((lVar14 != 0) && (uVar4 = *(ulonglong *)(lVar14 + 0x48), uVar4 != 0)) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar14 + 0x48) = uVar4 - 1;
      }
      *(undefined8 *)(lVar14 + 0x48) = 0;
    }
    lVar14 = param_1[5];
    lVar6 = *(longlong *)(param_4 + 4);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    plVar3 = *(longlong **)(*(longlong *)(lVar14 + 0x98) + 0x48);
    puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x50);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar12,lVar14);
      *puVar12 = &PTR_ForEachChild_GC_145b199d0;
      puVar12[8] = lVar6;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      puVar12[9] = param_1;
      *(uint *)(param_1 + 1) = (int)param_1[1] + 1U & 0x8fffffff;
      *puVar12 = &PTR_ForEachChild_GC_145b1a0a0;
    }
    FUN_1434e68a0(param_1[0x11] + param_3 * 8,puVar12);
    piVar2 = (int *)(lVar6 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920(lVar6);
    }
  }
  *param_2 = uVar15;
  return param_2;
}



// FUNCTION 1434d3e60 FUN_1434d3e60 body=644 status=ok
// SIG undefined FUN_1434d3e60(void)

undefined1 *
FUN_1434d3e60(longlong *param_1,undefined1 *param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char local_res8 [8];
  undefined4 local_res20 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_68 [2];
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 local_40;
  
  lVar8 = *(longlong *)(param_1[5] + 0x98);
  local_48[0] = 0;
  local_40 = 0;
  if ((((byte)*param_4 & 0x1f) == 0xc) &&
     (cVar2 = FUN_143592750(*(undefined8 *)(param_4 + 4)), cVar2 != '\0')) {
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)(param_4 + 4) + 0x130))
                       (*(longlong **)(param_4 + 4),local_res8,0);
LAB_1434d3ec7:
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    uStack_80 = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(&local_88,*puVar4);
    FUN_143590140(local_48,&local_88);
    if (9 < ((byte)local_88 & 0x1f)) {
      if (((uint)local_88 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_88);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    if ((((byte)*param_4 & 0x1f) == 0xc) &&
       (cVar2 = FUN_143592790(*(undefined8 *)(param_4 + 4)), cVar2 != '\0')) {
      puVar4 = (undefined8 *)FUN_1434d75c0(*(undefined8 *)(param_4 + 4),local_res8,0);
      goto LAB_1434d3ec7;
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x218);
    local_88 = lVar8 + 0x48;
    piVar1 = (int *)(lVar8 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar5 = (char *)FUN_1435911f0(param_4,local_res8,&local_88);
    if (*pcVar5 == '\0') {
      *param_2 = 0;
      piVar1 = (int *)(local_88 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1434d40a1;
    }
    FUN_143590250(local_48,&local_88);
    piVar1 = (int *)(local_88 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  FUN_1435bdeb0(local_res8,param_3 + 0x10,local_res20);
  if (local_res8[0] == '\0') {
    lVar8 = param_1[0x12];
    local_60 = 0;
    local_68[0] = 0;
    lVar7 = lVar8;
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      lVar7 = lVar7 + -1;
      cVar2 = FUN_1434ca4e0(*(undefined8 *)(param_1[0x11] + lVar7 * 8),param_3);
      if (cVar2 != '\0') {
        if ((local_68[0] & 0x1f) != 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(longlong)local_58);
        }
        if (9 < ((byte)local_68[0] & 0x1f)) {
          if ((local_68[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_68);
          }
          else {
            FUN_143592150();
          }
        }
        local_58 = (int)lVar7;
        local_88 = CONCAT44(local_88._4_4_,local_58);
        local_68[0] = local_68[0] & 0xffffffe2 | 2;
        uStack_54 = local_88._4_4_;
        uStack_50 = (undefined4)uStack_80;
        uStack_4c = uStack_80._4_4_;
      }
    }
    uVar3 = 1;
    if ((local_68[0] & 0x1f) != 0) {
      puVar6 = (undefined1 *)FUN_1434d3b50(param_1,local_res8,(longlong)local_58,local_48);
      uVar3 = *puVar6;
    }
    *param_2 = uVar3;
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    FUN_1434d3b50(param_1,param_2,local_res20[0],local_48);
  }
LAB_1434d40a1:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  return param_2;
}



// FUNCTION 1434d40f0 FUN_1434d40f0 body=778 status=ok
// SIG undefined FUN_1434d40f0(void)

void FUN_1434d40f0(ulonglong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char cVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_38 [8];
  longlong local_30;
  
  plVar2 = (longlong *)(param_1 + 0x88);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  FUN_1434f0230(plVar2,plVar2,0);
  if ((((byte)*param_2 & 0x1f) == 0xc) &&
     (cVar10 = FUN_143592750(*(undefined8 *)(param_2 + 4)), cVar10 != '\0')) {
    uVar6 = *(ulonglong *)(param_2 + 4);
    uVar15 = param_1;
    do {
      if (uVar15 == uVar6) {
        uVar11 = FUN_1435c8e40(local_38,0x45e,lVar5);
        FUN_1435cbe70(lVar5,uVar11);
        piVar1 = (int *)(local_30 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      uVar15 = *(ulonglong *)(uVar15 + 0x48);
    } while (uVar15 != 0);
    FUN_1434f0700(uVar6 + 0x48,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
    }
    FUN_1434f0230(plVar2,plVar2,*(longlong *)(param_1 + 0x90) + 1);
    puVar3 = (ulonglong *)(*plVar2 + (*(longlong *)(param_1 + 0x90) + -1) * 8);
    if (puVar3 != (ulonglong *)0x0) {
      *puVar3 = uVar6;
      if (uVar6 == 0) {
        return;
      }
      *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
    }
    if (uVar6 == 0) {
      return;
    }
    if ((uVar6 & 1) != 0) {
      return;
    }
    if ((*(uint *)(uVar6 + 8) & 0x3fffff) == 0) {
      return;
    }
    *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
    FUN_1434ef880(uVar6);
    return;
  }
  if ((((byte)*param_2 & 0x1f) == 0xc) &&
     (cVar10 = FUN_143592790(*(undefined8 *)(param_2 + 4)), cVar10 != '\0')) {
    lVar7 = *(longlong *)(param_2 + 4);
    uVar15 = 0;
    uVar6 = *(ulonglong *)(lVar7 + 0x60);
    if (uVar6 != 0) {
      do {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x58) + uVar15 * 8);
        uVar12 = param_1;
        do {
          if (uVar12 == uVar8) {
            uVar11 = FUN_1435c8e40(local_38,0x45e,lVar5);
            FUN_1435cbe70(lVar5,uVar11);
            piVar1 = (int *)(local_30 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 != 0) {
              return;
            }
            FUN_14335f920();
            return;
          }
          uVar12 = *(ulonglong *)(uVar12 + 0x48);
        } while (uVar12 != 0);
        FUN_1434f0700(uVar8 + 0x48,param_1);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar6);
    }
    FUN_1434e6580(plVar2,lVar7 + 0x58);
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x218);
  local_res10 = lVar5 + 0x48;
  piVar1 = (int *)(lVar5 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar13 = (char *)FUN_1435911f0(param_2,local_res8,&local_res10);
  if (*pcVar13 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x28);
    plVar9 = *(longlong **)(*(longlong *)(lVar5 + 0x98) + 0x48);
    puVar14 = (undefined8 *)(**(code **)(*plVar9 + 0x50))(plVar9,0x50);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar14,lVar5);
      *puVar14 = &PTR_ForEachChild_GC_145b199d0;
      puVar14[8] = local_res10;
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      puVar14[9] = param_1;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
      *puVar14 = &PTR_ForEachChild_GC_145b1a0a0;
    }
    FUN_1434f0230(plVar2,plVar2,*(longlong *)(param_1 + 0x90) + 1);
    puVar4 = (undefined8 *)(*plVar2 + (*(longlong *)(param_1 + 0x90) + -1) * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = puVar14;
      if (puVar14 == (undefined8 *)0x0) goto LAB_1434d43d7;
      *(uint *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1U & 0x8fffffff;
    }
    if (((puVar14 != (undefined8 *)0x0) && (((ulonglong)puVar14 & 1) == 0)) &&
       ((*(uint *)(puVar14 + 1) & 0x3fffff) != 0)) {
      *(uint *)(puVar14 + 1) = *(uint *)(puVar14 + 1) - 1;
      FUN_1434ef880(puVar14);
    }
  }
LAB_1434d43d7:
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 1434d4400 FUN_1434d4400 body=254 status=ok
// SIG undefined FUN_1434d4400(void)

void FUN_1434d4400(longlong param_1,undefined8 param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  
  uVar5 = 0;
  if ((*param_3 >> 3 & 1) != 0) {
    local_38 = &PTR_FUN_145b1a860;
    local_30 = param_1;
    local_28 = param_2;
    if ((((byte)param_3[4] & 0x1f) == 10) &&
       (uVar1 = *(ulonglong *)(param_1 + 0x78), uVar4 = uVar5, uVar1 != 0)) {
      do {
        cVar3 = FUN_1434ca4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8),param_3);
        if (cVar3 != '\0') {
          cVar3 = (*(code *)local_38[1])(&local_38,uVar4);
          if (cVar3 == '\0') break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar5 * 8);
      if ((*param_3 >> 3 & 1) == 0) {
        cVar3 = FUN_1434ca4e0(plVar2,param_3);
        if (cVar3 != '\0') {
          FUN_1434e8360(param_2,plVar2);
        }
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 1434d4510 FUN_1434d4510 body=2281 status=ok
// SIG undefined FUN_1434d4510(void)

undefined1 * FUN_1434d4510(longlong *param_1,undefined1 *param_2,uint *param_3,undefined4 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  longlong local_res8;
  undefined1 local_res18 [16];
  uint local_d8 [2];
  undefined8 local_d0;
  longlong local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_60;
  longlong local_58;
  
  uVar20 = *(ulonglong *)(param_1[5] + 0x98);
  lVar10 = *(longlong *)(uVar20 + 0x10);
  local_60 = uVar20;
  FUN_1435bdeb0(&local_res8,param_3 + 4,local_res18);
  if ((char)local_res8 != '\0') {
    uVar7 = FUN_1435c8e40(&local_60,0x43f,uVar20);
    FUN_1435cbe70(uVar20,uVar7);
    piVar1 = (int *)(local_58 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  local_d8[0] = 0;
  local_d0 = 0;
  if ((((byte)*param_4 & 0x1f) == 0xc) &&
     (cVar5 = FUN_143592750(*(undefined8 *)(param_4 + 4)), cVar5 != '\0')) {
    puVar8 = (undefined8 *)
             (**(code **)(**(longlong **)(param_4 + 4) + 0x130))
                       (*(longlong **)(param_4 + 4),&local_res8,0);
LAB_1434d45ca:
    local_90 = (undefined1 *)((ulonglong)local_90._4_4_ << 0x20);
    uStack_88 = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(&local_90,*puVar8);
    FUN_143590140(local_d8,&local_90);
    if (9 < ((byte)local_90 & 0x1f)) {
      if (((uint)local_90 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_90);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    if ((((byte)*param_4 & 0x1f) == 0xc) &&
       (cVar5 = FUN_143592790(*(undefined8 *)(param_4 + 4)), cVar5 != '\0')) {
      puVar8 = (undefined8 *)FUN_1434d75c0(*(undefined8 *)(param_4 + 4),&local_res8,0);
      goto LAB_1434d45ca;
    }
    local_90 = (undefined1 *)(*(longlong *)(lVar10 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(lVar10 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar9 = (char *)FUN_1435911f0(param_4,&local_res8,&local_90);
    if (*pcVar9 == '\0') {
      *param_2 = 0;
      piVar1 = (int *)(local_90 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1434d4db7;
    }
    FUN_143590250(local_d8,&local_90);
    piVar1 = (int *)(local_90 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  uVar17 = 0;
  if ((*param_3 >> 3 & 1) == 0) {
    local_b0 = 0;
    local_b8[0] = 0;
    local_98 = *(longlong *)(lVar10 + 0x218) + 0x48;
    piVar1 = (int *)(*(longlong *)(lVar10 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar9 = (char *)FUN_1435911f0(param_3 + 4,&local_res8,&local_98);
    if (*pcVar9 == '\0') {
      *param_2 = 0;
    }
    else {
      bVar16 = (byte)local_d8[0];
      if ((bVar16 & 0x1f) == 0xc) {
        cVar5 = FUN_143592750(local_c8);
        if (cVar5 == '\0') {
          bVar16 = (byte)local_d8[0];
          goto LAB_1434d4a9c;
        }
LAB_1434d4ac2:
        bVar4 = false;
      }
      else {
LAB_1434d4a9c:
        if ((((bVar16 & 0x1f) == 0xc) && (cVar5 = FUN_143592790(local_c8), cVar5 != '\0')) ||
           (cVar5 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_3), cVar5 != '\0'))
        goto LAB_1434d4ac2;
        bVar4 = true;
      }
      lVar10 = param_1[0x12];
      lVar18 = lVar10;
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        lVar18 = lVar18 + -1;
        cVar5 = FUN_1434ca4e0(*(undefined8 *)(param_1[0x11] + lVar18 * 8),param_3);
        if (cVar5 != '\0') {
          if ((local_b8[0] & 0x1f) != 0) {
            FUN_1434ef920(param_1 + 0x11,(longlong)local_a8);
          }
          if (9 < ((byte)local_b8[0] & 0x1f)) {
            if ((local_b8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_b8);
            }
            else {
              FUN_143592150();
            }
          }
          local_a8 = (int)lVar18;
          local_90 = (undefined1 *)CONCAT44(local_90._4_4_,local_a8);
          local_b8[0] = local_b8[0] & 0xffffffe2 | 2;
          uStack_a4 = local_90._4_4_;
          uStack_a0 = (undefined4)uStack_88;
          uStack_9c = uStack_88._4_4_;
        }
      }
      if ((local_b8[0] & 0x1f) == 0) {
        local_b8[0] = local_b8[0] & 0xffffffe2 | 2;
        local_a8 = (int)param_1[0x12];
        local_90._4_4_ = (uint)((ulonglong)local_90 >> 0x20);
        local_90 = (undefined1 *)CONCAT44(local_90._4_4_,local_a8);
        uStack_88._4_4_ = (undefined4)((ulonglong)uStack_88 >> 0x20);
        uStack_a4 = local_90._4_4_;
        uStack_a0 = (undefined4)uStack_88;
        uStack_9c = uStack_88._4_4_;
        if (bVar4) {
          lVar10 = param_1[5];
          if (((*param_3 & 3) < 2) && (*(longlong *)(param_3 + 2) != 0)) {
            lVar18 = FUN_1435aec10(param_3);
          }
          else {
            lVar18 = *(longlong *)(uVar20 + 0x2b0);
          }
          if (lVar18 == 0) {
            lVar18 = *(longlong *)(local_60 + 0x1d8);
          }
          lVar3 = *(longlong *)(param_3 + 8);
          *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
          plVar14 = *(longlong **)(*(longlong *)(lVar10 + 0x98) + 0x48);
          local_res8 = lVar3;
          lVar13 = (**(code **)(*plVar14 + 0x50))(plVar14,0xa0,0);
          if (lVar13 == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = (longlong *)FUN_1434cfd60(lVar13,lVar10,lVar18,&local_res8,param_1);
          }
          piVar1 = (int *)(lVar3 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar3);
          }
          local_60 = local_60 & 0xffffffff00000000;
          local_58 = 0;
          FUN_143590450(&local_60,plVar14);
          pcVar9 = (char *)FUN_1434d3b50(param_1,&local_res8,(longlong)local_a8,&local_60);
          cVar5 = *pcVar9;
          if (9 < ((byte)local_60 & 0x1f)) {
            if (((uint)local_60 >> 9 & 1) == 0) {
              FUN_1435920c0(&local_60);
            }
            else {
              FUN_143592150();
            }
          }
          if (cVar5 == '\0') {
            *param_2 = 0;
            if (((plVar14 != (longlong *)0x0) && (((ulonglong)plVar14 & 1) == 0)) &&
               ((*(uint *)(plVar14 + 1) & 0x3fffff) != 0)) {
              *(uint *)(plVar14 + 1) = *(uint *)(plVar14 + 1) - 1;
              FUN_1434ef880(plVar14);
            }
            goto LAB_1434d4d84;
          }
          (**(code **)(*plVar14 + 200))(plVar14,lVar18);
          if ((((ulonglong)plVar14 & 1) == 0) && ((*(uint *)(plVar14 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar14 + 1) = *(uint *)(plVar14 + 1) - 1;
            FUN_1434ef880(plVar14);
          }
          goto LAB_1434d4ccf;
        }
LAB_1434d4d6a:
        puVar15 = (undefined1 *)FUN_1434d3b50(param_1,&local_res8,(longlong)local_a8,local_d8);
        uVar19 = *puVar15;
      }
      else {
LAB_1434d4ccf:
        if (!bVar4) goto LAB_1434d4d6a;
        plVar14 = *(longlong **)(param_1[0x11] + (longlong)local_a8 * 8);
        if (plVar14 != (longlong *)0x0) {
          *(uint *)(plVar14 + 1) = (int)plVar14[1] + 1U & 0x8fffffff;
        }
        (**(code **)(*plVar14 + 0x168))(plVar14,0);
        *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
        piVar1 = (int *)(local_c8 + 0x18);
        *piVar1 = *piVar1 + -1;
        iVar6 = *(int *)(local_c8 + 0x20);
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if ((iVar6 == 0) || (iVar6 = (**(code **)(*plVar14 + 0xf0))(plVar14), iVar6 != 1)) {
          uVar19 = 1;
        }
        else {
          puVar15 = (undefined1 *)FUN_1434d3b50(plVar14,&local_res8,0,local_d8);
          uVar19 = *puVar15;
        }
        if ((((ulonglong)plVar14 & 1) == 0) && ((*(uint *)(plVar14 + 1) & 0x3fffff) != 0)) {
          *(uint *)(plVar14 + 1) = *(uint *)(plVar14 + 1) - 1;
          FUN_1434ef880(plVar14);
        }
      }
      *param_2 = uVar19;
    }
LAB_1434d4d84:
    piVar1 = (int *)(local_98 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_b8);
      }
      else {
        FUN_143592150();
      }
    }
    goto LAB_1434d4db7;
  }
  bVar16 = (byte)local_d8[0];
  if ((bVar16 & 0x1f) == 0xc) {
    cVar5 = FUN_143592790(local_c8);
    lVar18 = local_c8;
    if (cVar5 == '\0') {
      bVar16 = (byte)local_d8[0];
      goto LAB_1434d477a;
    }
    FUN_1432c5960(&local_90,*(undefined8 *)(uVar20 + 0x48));
    uVar20 = *(ulonglong *)(lVar18 + 0x60);
    if (uVar20 != 0) {
      do {
        if (uVar17 != 0) {
          FUN_1432c5df0(&local_90,0x20);
        }
        plVar14 = *(longlong **)(*(longlong *)(lVar18 + 0x58) + uVar17 * 8);
        (**(code **)(*plVar14 + 0xe0))(plVar14,&local_90,0);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar20);
    }
    puVar15 = &DAT_145af3922;
    if (local_90 != (undefined1 *)0x0) {
      puVar15 = local_90;
    }
    local_res8 = FUN_143360a90(*(undefined8 *)(lVar10 + 0x218),puVar15,uStack_88);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143590250(local_d8,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    Scaleform::StringBuffer::~StringBuffer(&local_90);
    uVar20 = local_60;
  }
  else {
LAB_1434d477a:
    if (((bVar16 & 0x1f) == 0xc) && (cVar5 = FUN_143592750(local_c8), cVar5 != '\0')) {
      local_res8 = *(longlong *)(lVar10 + 0x218) + 0x48;
      piVar1 = (int *)(*(longlong *)(lVar10 + 0x218) + 0x60);
      *piVar1 = *piVar1 + 1;
      FUN_1434cb1f0(local_c8,&local_res8);
    }
    else {
      local_res8 = local_c8;
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
    }
    FUN_143590250(local_d8,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  puVar8 = (undefined8 *)0x0;
  uVar17 = 0;
  if (param_1[0xf] == 0) {
LAB_1434d485b:
    local_res8 = param_1[5];
    if (((byte)*param_3 & 3) < 2) {
      lVar10 = FUN_1435aec10(param_3);
    }
    else {
      lVar10 = *(longlong *)(uVar20 + 0x2b0);
    }
    lVar18 = local_c8;
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(uVar20 + 0x1d8);
    }
    *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
    lVar3 = *(longlong *)(param_3 + 8);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    plVar14 = *(longlong **)(*(longlong *)(local_res8 + 0x98) + 0x48);
    puVar11 = (undefined8 *)(**(code **)(*plVar14 + 0x50))(plVar14,0x60);
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar11,local_res8);
      *puVar11 = &PTR_ForEachChild_GC_145b199d0;
      puVar11[8] = lVar3;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      puVar11[9] = param_1;
      *(uint *)(param_1 + 1) = (int)param_1[1] + 1U & 0x8fffffff;
      *puVar11 = &PTR_FUN_145b19cf0;
      puVar11[10] = 0;
      puVar11[0xb] = lVar18;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      puVar12 = (ulonglong *)
                FUN_1435cc0e0(*(undefined8 *)(puVar11[5] + 0x98),&local_res8,0,lVar10 + 0x38,
                              lVar10 + 0x48);
      uVar20 = puVar11[10];
      uVar17 = *puVar12;
      puVar8 = puVar11;
      if (uVar17 != uVar20) {
        if (uVar20 != 0) {
          if ((uVar20 & 1) == 0) {
            if ((*(uint *)(uVar20 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar20 + 8) = *(uint *)(uVar20 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            puVar11[10] = uVar20 - 1;
          }
        }
        puVar11[10] = uVar17;
      }
    }
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    piVar1 = (int *)(lVar18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar18);
    }
    FUN_1434f0230(param_1 + 0xe,param_1 + 0xe,param_1[0xf] + 1);
    puVar11 = (undefined8 *)(param_1[0xe] + (param_1[0xf] + -1) * 8);
    if ((puVar11 != (undefined8 *)0x0) && (*puVar11 = puVar8, puVar8 != (undefined8 *)0x0)) {
      *(uint *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1U & 0x8fffffff;
    }
    (**(code **)(*param_1 + 200))(param_1,lVar10);
  }
  else {
    do {
      cVar5 = FUN_1434ca4e0(*(undefined8 *)(param_1[0xe] + uVar17 * 8),param_3);
      if (cVar5 != '\0') {
        if (puVar8 == (undefined8 *)0x0) {
          puVar12 = (ulonglong *)(param_1[0xe] + uVar17 * 8);
          if (puVar12 != &local_60) {
            uVar2 = *puVar12;
            if (uVar2 != 0) {
              *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
            }
            puVar8 = (undefined8 *)*puVar12;
          }
        }
        else {
          pcVar9 = (char *)(**(code **)(*param_1 + 0x48))(param_1,&local_res8,param_3);
          if (*pcVar9 == '\0') {
            *param_2 = 0;
            goto LAB_1434d4880;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulonglong)param_1[0xf]);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1434d485b;
  }
  *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
  *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
  piVar1 = (int *)(puVar8[0xb] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  puVar8[0xb] = local_c8;
  piVar1 = (int *)(local_c8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_c8);
  }
  *param_2 = 1;
  if (puVar8 != (undefined8 *)0x0) {
LAB_1434d4880:
    if ((((ulonglong)puVar8 & 1) == 0) && ((*(uint *)(puVar8 + 1) & 0x3fffff) != 0)) {
      *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) - 1;
      FUN_1434ef880(puVar8);
    }
  }
LAB_1434d4db7:
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  return param_2;
}



// FUNCTION 1434d4e00 FUN_1434d4e00 body=236 status=ok
// SIG undefined FUN_1434d4e00(void)

undefined8 FUN_1434d4e00(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char local_res18 [16];
  undefined4 local_48 [2];
  uint local_40 [2];
  undefined8 local_38;
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_48);
  if (local_res18[0] != '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_48[0],param_4);
    return param_2;
  }
  puVar2 = (undefined8 *)FUN_1434ca280(param_1,local_res18,param_3);
  uVar1 = *puVar2;
  local_40[0] = 0;
  local_38 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_40,uVar1);
  FUN_143590140(param_4,local_40);
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_40);
    }
    else {
      FUN_143592150();
    }
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,param_2,param_3,uVar1);
  return param_2;
}



// FUNCTION 1434d4f00 FUN_1434d4f00 body=214 status=ok
// SIG undefined FUN_1434d4f00(void)

undefined1 * FUN_1434d4f00(longlong param_1,undefined1 *param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  char local_res18 [8];
  uint local_48 [2];
  undefined **local_40;
  longlong local_38;
  undefined8 local_30;
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  
  FUN_1435bdeb0(local_res18,param_3 + 4,local_48);
  if (local_res18[0] == '\0') {
    if ((*param_3 >> 3 & 1) == 0) {
      local_28 = &PTR_FUN_145b1a850;
      local_20 = param_1;
      local_18 = param_4;
      iVar1 = FUN_1434d05b0(param_1,param_3,&local_28);
      *param_2 = iVar1 != 0;
    }
    else {
      local_40 = &PTR_FUN_145b1a860;
      local_38 = param_1;
      local_30 = param_4;
      FUN_1434d0510(param_1,param_3,&local_40);
      *param_2 = 1;
    }
  }
  else {
    if ((ulonglong)local_48[0] < *(ulonglong *)(param_1 + 0x90)) {
      FUN_1434e8360(param_4,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x88) + (ulonglong)local_48[0] * 8));
    }
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1434d4fe0 FUN_1434d4fe0 body=317 status=ok
// SIG undefined FUN_1434d4fe0(void)

undefined1 * FUN_1434d4fe0(longlong param_1,undefined1 *param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((*param_3 >> 3 & 1) == 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar4 * 8);
        cVar3 = FUN_1434ca4e0(lVar1,param_3);
        if (cVar3 == '\0') {
          uVar4 = uVar4 + 1;
        }
        else {
          uVar2 = *(ulonglong *)(lVar1 + 0x48);
          if (uVar2 != 0) {
            if ((uVar2 & 1) == 0) {
              if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *(ulonglong *)(lVar1 + 0x48) = uVar2 - 1;
            }
            *(undefined8 *)(lVar1 + 0x48) = 0;
          }
          FUN_1434ef920(param_1 + 0x88,uVar4);
        }
      } while (uVar4 < *(ulonglong *)(param_1 + 0x90));
    }
  }
  else if (*(longlong *)(param_1 + 0x78) != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8);
      cVar3 = FUN_1434ca4e0(lVar1,param_3);
      if (cVar3 == '\0') {
        uVar4 = uVar4 + 1;
      }
      else {
        uVar2 = *(ulonglong *)(lVar1 + 0x48);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar1 + 0x48) = uVar2 - 1;
          }
          *(undefined8 *)(lVar1 + 0x48) = 0;
        }
        FUN_1434ef920(param_1 + 0x70,uVar4);
      }
    } while (uVar4 < *(ulonglong *)(param_1 + 0x78));
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d5130 FUN_1434d5130 body=424 status=ok
// SIG undefined FUN_1434d5130(void)

ulonglong * FUN_1434d5130(longlong param_1,ulonglong *param_2,uint *param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined **local_58;
  longlong local_50;
  ulonglong local_48;
  undefined **local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong uVar6;
  
  uVar4 = 0;
  if ((*param_3 >> 3 & 1) == 0) {
    local_40 = &PTR_FUN_145b1a840;
    local_30 = 0;
    local_38 = param_1;
    iVar3 = FUN_1434d05b0(param_1,param_3,&local_40);
    if (iVar3 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      param_2[3] = 0;
    }
    else {
      *param_2 = local_30 | 2;
      param_2[1] = 0xffffffffffffffff;
      FUN_143590110(param_2 + 2,param_1);
    }
    local_40 = &PTR_FUN_145b1a840;
    if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
      FUN_1434ef880();
    }
    return param_2;
  }
  local_58 = &PTR_FUN_145b1a830;
  local_48 = 0;
  local_50 = param_1;
  if ((((byte)param_3[4] & 0x1f) == 10) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x78), uVar6 = uVar4, uVar1 != 0)) {
    do {
      cVar2 = FUN_1434ca4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8),param_3);
      if (cVar2 != '\0') {
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        cVar2 = (*(code *)local_58[1])(&local_58,uVar4);
        if (cVar2 == '\0') break;
      }
      uVar5 = (uint)uVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    if (uVar5 != 0) {
      *param_2 = local_48 | 2;
      param_2[1] = 0xffffffffffffffff;
      FUN_143590110(param_2 + 2,param_1);
      goto LAB_1434d5202;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
LAB_1434d5202:
  local_58 = &PTR_FUN_145b1a830;
  if (((local_48 != 0) && ((local_48 & 1) == 0)) && ((*(uint *)(local_48 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_48 + 8) = *(uint *)(local_48 + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 1434d52e0 FUN_1434d52e0 body=100 status=ok
// SIG undefined FUN_1434d52e0(void)

undefined8 *
FUN_1434d52e0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *param_3;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_4;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = &PTR_ForEachChild_GC_145b1a0a0;
  return param_1;
}



// FUNCTION 1434d5370 FUN_1434d5370 body=164 status=ok
// SIG undefined FUN_1434d5370(void)

void FUN_1434d5370(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
  if (((-1 < *(int *)(lVar2 + 0x54)) && (*(char *)(lVar2 + 0x53) != '\0')) && (0 < param_3)) {
    FUN_1434ca710(param_2,param_3);
  }
  lVar2 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(lVar2 + 0x53) == '\0') {
    FUN_1434ca780(param_2,param_1 + 0x40);
  }
  else {
    lVar2 = Scaleform::GFx::ASConstString::TruncateWhitespaceNode(param_1 + 0x40);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    local_res8 = lVar2;
    FUN_1434ca780(param_2,&local_res8);
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1434d5420 FUN_1434d5420 body=177 status=ok
// SIG undefined FUN_1434d5420(void)

undefined8 * FUN_1434d5420(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x50);
  if (puVar4 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar4,lVar2);
    *puVar4 = &PTR_ForEachChild_GC_145b199d0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    puVar4[8] = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4[9] = param_3;
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar4;
    *puVar4 = &PTR_ForEachChild_GC_145b1a0a0;
  }
  return param_2;
}



// FUNCTION 1434d54e0 FUN_1434d54e0 body=115 status=ok
// SIG undefined FUN_1434d54e0(void)

undefined8 *
FUN_1434d54e0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *param_3;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_5;
  if (param_5 != 0) {
    *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = &PTR_ForEachChild_GC_145b1a270;
  lVar2 = *param_4;
  param_1[10] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 1434d5570 FUN_1434d5570 body=122 status=ok
// SIG undefined FUN_1434d5570(void)

undefined8 * FUN_1434d5570(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x98) + 0x48);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x58);
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar4 = FUN_1434d54e0(lVar3,lVar1,param_1 + 0x40,param_1 + 0x50,param_3);
    *param_2 = uVar4;
  }
  return param_2;
}



// FUNCTION 1434d55f0 FUN_1434d55f0 body=176 status=ok
// SIG undefined FUN_1434d55f0(void)

undefined8 * FUN_1434d55f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar3 = *(longlong *)(lVar2 + 0x1d8);
  uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x250) + 0xd8);
  puVar5 = (undefined8 *)FUN_1435b5bc0(uVar4);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar5,uVar4);
    *puVar5 = &PTR_ForEachChild_GC_145b18770;
    lVar2 = *(longlong *)(param_1 + 0x40);
    puVar5[8] = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar5[9] = lVar3;
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar5;
  }
  return param_2;
}



// FUNCTION 1434d56b0 FUN_1434d56b0 body=167 status=ok
// SIG undefined FUN_1434d56b0(void)

void FUN_1434d56b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
  if (((-1 < *(int *)(lVar1 + 0x54)) && (*(char *)(lVar1 + 0x53) != '\0')) && (0 < param_3)) {
    FUN_1434ca710(param_2,param_3);
  }
  Scaleform::StringBuffer::AppendString(param_2,&DAT_145b14d24,2);
  Scaleform::StringBuffer::AppendString
            (param_2,**(undefined8 **)(param_1 + 0x40),
             *(undefined4 *)(*(undefined8 **)(param_1 + 0x40) + 4));
  FUN_1432c5df0(param_2,0x20);
  Scaleform::StringBuffer::AppendString
            (param_2,**(undefined8 **)(param_1 + 0x50),
             *(undefined4 *)(*(undefined8 **)(param_1 + 0x50) + 4));
  Scaleform::StringBuffer::AppendString(param_2,&DAT_145b14d70,2);
  return;
}



// FUNCTION 1434d5760 EqualsInternal body=49 status=ok
// SIG undefined EqualsInternal(void)

ulonglong Scaleform::GFx::AS3::Instances::fl::XMLProcInstr::EqualsInternal
                    (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1434caa70();
  if ((int)uVar1 == 0) {
    uVar1 = (ulonglong)
            ((int)CONCAT71((int7)(uVar1 >> 8),
                           *(longlong *)(param_1 + 0x50) != *(longlong *)(param_2 + 0x50)) + 1);
  }
  return uVar1;
}



// FUNCTION 1434d57a0 FUN_1434d57a0 body=100 status=ok
// SIG undefined FUN_1434d57a0(void)

undefined8 *
FUN_1434d57a0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *param_3;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_4;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = &PTR_ForEachChild_GC_145b1a440;
  return param_1;
}



// FUNCTION 1434d5820 FUN_1434d5820 body=177 status=ok
// SIG undefined FUN_1434d5820(void)

undefined8 * FUN_1434d5820(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x50);
  if (puVar4 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1435b9d40(puVar4,lVar2);
    *puVar4 = &PTR_ForEachChild_GC_145b199d0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    puVar4[8] = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4[9] = param_3;
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar4;
    *puVar4 = &PTR_ForEachChild_GC_145b1a440;
  }
  return param_2;
}



// FUNCTION 1434d58e0 FUN_1434d58e0 body=30 status=ok
// SIG undefined FUN_1434d58e0(void)

void FUN_1434d58e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
  return;
}



// FUNCTION 1434d5910 FUN_1434d5910 body=135 status=ok
// SIG undefined FUN_1434d5910(void)

void FUN_1434d5910(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
  if (((-1 < *(int *)(lVar1 + 0x54)) && (*(char *)(lVar1 + 0x53) != '\0')) && (0 < param_3)) {
    FUN_1434ca710(param_2,param_3);
  }
  Scaleform::StringBuffer::AppendString(param_2,&DAT_145b1a880,4);
  Scaleform::StringBuffer::AppendString
            (param_2,**(undefined8 **)(param_1 + 0x40),
             *(undefined4 *)(*(undefined8 **)(param_1 + 0x40) + 4));
  Scaleform::StringBuffer::AppendString(param_2,&DAT_145b1a888,3);
  return;
}



// FUNCTION 1434d59a0 FUN_1434d59a0 body=24 status=ok
// SIG undefined FUN_1434d59a0(void)

int FUN_1434d59a0(void)

{
  int iVar1;
  
  iVar1 = FUN_1434caa70();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



// FUNCTION 1434d59c0 FUN_1434d59c0 body=312 status=ok
// SIG undefined FUN_1434d59c0(void)

undefined1 * FUN_1434d59c0(undefined1 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0x3a;
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = FUN_143646e20(0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  *(longlong *)(param_1 + 0x40) = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  FUN_1436470b0(*(undefined8 *)(param_1 + 0x10),param_1);
  FUN_143647090(*(undefined8 *)(param_1 + 0x10),FUN_1434d5eb0,FUN_1434d6950);
  FUN_143647050(*(undefined8 *)(param_1 + 0x10),FUN_1434d6a90);
  FUN_1436470d0(*(undefined8 *)(param_1 + 0x10),&LAB_1434d6cb0);
  FUN_143647080(*(undefined8 *)(param_1 + 0x10),FUN_1434d6d50,&LAB_1434d6dc0);
  FUN_143647070(*(undefined8 *)(param_1 + 0x10),&DAT_1434d6ff0);
  lVar3 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 8));
  if (*(char *)(lVar3 + 0x50) == '\0') {
    FArchiveFileWriterDummy::Seek(*(undefined8 *)(param_1 + 0x10),FUN_1434d6ae0);
  }
  if (*(char *)(lVar3 + 0x51) == '\0') {
    FUN_1436470a0(*(undefined8 *)(param_1 + 0x10),FUN_1434d6de0);
  }
  return param_1;
}



// FUNCTION 1434d5b00 FUN_1434d5b00 body=118 status=ok
// SIG undefined FUN_1434d5b00(void)

void FUN_1434d5b00(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  FUN_143646e30(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x48));
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1434e5ef0(param_1 + 0x20);
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x18) = uVar2 - 1;
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
      return;
    }
  }
  return;
}



// FUNCTION 1434d5b80 FUN_1434d5b80 body=582 status=ok
// SIG undefined FUN_1434d5b80(void)

undefined1 *
FUN_1434d5b80(longlong param_1,undefined1 *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_48 [8];
  longlong local_40;
  
  lVar3 = *param_4;
  iVar6 = FUN_143646b50(*(undefined8 *)(param_1 + 0x10),*param_3 + lVar3,
                        (int)param_3[1] - (int)lVar3,1);
  bVar12 = iVar6 == 1;
  bVar13 = true;
  if (bVar12) {
LAB_1434d5d85:
    iVar6 = FUN_143646b20(*(undefined8 *)(param_1 + 0x10));
    *param_4 = *param_4 + (longlong)iVar6;
    goto LAB_1434d5da0;
  }
  uVar7 = FUN_143646b40(*(undefined8 *)(param_1 + 0x10));
  uVar8 = 0x442;
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar10 = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar10 = (ulonglong)
             *(uint *)(*(longlong *)(param_1 + 0x48) + -4 + *(longlong *)(param_1 + 0x50) * 4);
  }
  iVar6 = (int)uVar10;
  switch(uVar7) {
  case 0:
    if ((((*param_4 == lVar3) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
        (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))(), iVar6 == 4)) &&
       (uVar10 = param_3[1] - lVar3, param_3[1] != lVar3)) {
      uVar11 = 0;
      do {
        uVar1 = uVar11 + 1;
        if (((*(char *)(*param_3 + uVar11) == '?') && (uVar1 < uVar10)) &&
           (*(char *)(*param_3 + 1 + uVar11) == '>')) {
          *param_2 = 1;
          *param_4 = *param_4 + uVar11 + 2;
          return param_2;
        }
        uVar11 = uVar1;
      } while (uVar1 < uVar10);
    }
    break;
  case 1:
    uVar8 = 1000;
    break;
  case 3:
    bVar13 = param_5 == '\0';
    if ((*(longlong *)(param_1 + 0x18) == 0) || (iVar6 != 1)) {
      bVar5 = false;
    }
    else {
      uVar8 = 0x43d;
      bVar5 = bVar13;
    }
    if (bVar5) break;
    goto LAB_1434d5d6a;
  case 4:
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_1434d5d85;
    break;
  case 5:
    uVar8 = 0x449;
    break;
  case 7:
    uVar8 = 0x43d;
    if (iVar6 != 1) {
      uVar8 = 0x442;
    }
    break;
  case 8:
    uVar8 = 0x450;
    break;
  case 9:
    if (param_5 != '\0') {
      bVar12 = true;
      iVar6 = FUN_143646b20(*(undefined8 *)(param_1 + 0x10));
      *param_4 = *param_4 + (longlong)iVar6;
      goto LAB_1434d5da0;
    }
    if ((*(longlong *)(param_1 + 0x18) == 0) || (iVar6 != 1)) {
      uVar8 = 0x440;
    }
    else {
      uVar8 = 0x43d;
    }
    break;
  case 0x14:
    uVar8 = 0x443;
    break;
  case 0x23:
    goto LAB_1434d5da0;
  }
  uVar9 = FUN_1435c8e40(local_48,uVar8,uVar4);
  FUN_1435cbe70(uVar4,uVar9);
  piVar2 = (int *)(local_40 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
LAB_1434d5d6a:
  if (bVar13) {
    iVar6 = FUN_143646b20(*(undefined8 *)(param_1 + 0x10));
    *param_4 = *param_4 + (longlong)iVar6;
  }
LAB_1434d5da0:
  FUN_1434d7000(param_1,0);
  *param_2 = bVar12;
  return param_2;
}



// FUNCTION 1434d5e20 FUN_1434d5e20 body=134 status=ok
// SIG undefined FUN_1434d5e20(void)

void FUN_1434d5e20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x20);
      FUN_1434f0230(param_2,param_2,param_2[1] + 1);
      plVar1 = (longlong *)(*param_2 + (param_2[1] + -1) * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = *(longlong *)(lVar2 + uVar3 * 8);
        *plVar1 = lVar2;
        if (lVar2 != 0) {
          *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 1434d5eb0 FUN_1434d5eb0 body=2702 status=ok
// SIG undefined FUN_1434d5eb0(void)

void FUN_1434d5eb0(char *param_1,char *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong **pplVar3;
  RefCountImpl *this;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  ulonglong uVar21;
  longlong *local_res20;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  char *local_b0;
  longlong local_a8;
  longlong **local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  bVar20 = false;
  local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
  FUN_1434d7000(param_1,1);
  uVar18 = *(ulonglong *)(param_1 + 0x50) + 1;
  if (uVar18 < *(ulonglong *)(param_1 + 0x50)) {
    uVar21 = uVar18;
    if (uVar18 < *(ulonglong *)(param_1 + 0x58) >> 1) {
LAB_1434d5f20:
      FUN_1434efc20(param_1 + 0x48,*(undefined8 *)(param_1 + 0x60),uVar21);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x58) < uVar18) {
    uVar21 = (uVar18 >> 2) + uVar18;
    goto LAB_1434d5f20;
  }
  uVar21 = 0;
  lVar16 = 0;
  *(ulonglong *)(param_1 + 0x50) = uVar18;
  uVar19 = 0;
  local_70 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4 + uVar18 * 4) = 1;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = *(longlong *)(param_1 + 8);
  local_c0 = *(longlong *)(local_78 + 0x98);
  lVar15 = *(longlong *)(local_c0 + 0x10);
  local_58 = *(undefined8 *)(local_c0 + 0x48);
  lVar9 = *param_3;
  local_a8 = lVar15;
  while (lVar9 != 0) {
    pcVar11 = (char *)param_3[uVar19];
    uVar18 = 0xffffffffffffffff;
    do {
      uVar18 = uVar18 + 1;
    } while (pcVar11[uVar18] != '\0');
    if ((uVar18 != 0) && (*pcVar11 == *param_1)) goto LAB_1434d6216;
    if ((4 < uVar18) &&
       ((((*pcVar11 == 'x' && (pcVar11[1] == 'm')) && (pcVar11[2] == 'l')) &&
        ((pcVar11[3] == 'n' && (pcVar11[4] == 's')))))) {
      local_b8 = (longlong *)(*(longlong *)(lVar15 + 0x218) + 0x48);
      piVar1 = (int *)(*(longlong *)(lVar15 + 0x218) + 0x60);
      *piVar1 = *piVar1 + 1;
      if ((5 < uVar18) && (pcVar11[5] == *param_1)) {
        plVar8 = (longlong *)FUN_143360a60(*(undefined8 *)(lVar15 + 0x218),pcVar11 + 6);
        *(int *)(plVar8 + 3) = (int)plVar8[3] + 2;
        plVar14 = local_b8 + 3;
        *(int *)plVar14 = (int)*plVar14 + -1;
        if ((int)*plVar14 == 0) {
          FUN_14335f920();
        }
        plVar14 = plVar8 + 3;
        *(int *)plVar14 = (int)*plVar14 + -1;
        local_b8 = plVar8;
        if ((int)*plVar14 == 0) {
          FUN_14335f920(plVar8);
        }
      }
      lVar9 = FUN_143360a60(*(undefined8 *)(lVar15 + 0x218),param_3[(int)uVar19 + 1]);
      *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
      lVar15 = *(longlong *)(*(longlong *)(local_c0 + 0x210) + 0xd8);
      Scaleform::GFx::AS3::Value::Value(&local_a0,&local_b8);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,0x148);
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar15,0x68,&local_res20);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        lVar16 = *(longlong *)(lVar15 + 0x98);
        this = *(RefCountImpl **)(lVar15 + 0x100);
        uVar12 = *(undefined8 *)(lVar16 + 0x30);
        puVar10[5] = puVar10[5] & 0xffffffffffffffe0;
        puVar10[4] = uVar12;
        *puVar10 = &PTR_LAB_145b18040;
        *(undefined4 *)(puVar10 + 1) = 1;
        puVar10[6] = lVar16;
        puVar10[7] = lVar9;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        puVar10[8] = this;
        *(uint *)(puVar10 + 9) = (uint)local_a0;
        puVar10[10] = local_98;
        *(undefined4 *)(puVar10 + 0xb) = local_90;
        *(undefined4 *)((longlong)puVar10 + 0x5c) = uStack_8c;
        *(undefined4 *)(puVar10 + 0xc) = uStack_88;
        *(undefined4 *)((longlong)puVar10 + 100) = uStack_84;
        if (9 < ((byte)local_a0 & 0x1f)) {
          if (((uint)local_a0 >> 9 & 1) == 0) {
            FUN_143592070(&local_a0);
          }
          else {
            FUN_143592140();
          }
        }
      }
      if (9 < ((byte)(uint)local_a0 & 0x1f)) {
        if (((uint)local_a0 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_a0);
        }
        else {
          FUN_143592150();
        }
      }
      FUN_1434f0160(&local_70,local_58,uVar21 + 1);
      uVar21 = local_68;
      lVar16 = local_70;
      local_80 = local_68;
      puVar2 = (undefined8 *)(local_70 + (local_68 - 1) * 8);
      if (puVar2 == (undefined8 *)0x0) {
LAB_1434d61a7:
        if (((puVar10 != (undefined8 *)0x0) && (((ulonglong)puVar10 & 1) == 0)) &&
           ((*(uint *)(puVar10 + 1) & 0x3fffff) != 0)) {
          *(uint *)(puVar10 + 1) = *(uint *)(puVar10 + 1) - 1;
          FUN_1434ef880(puVar10);
        }
      }
      else {
        *puVar2 = puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          *(uint *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1U & 0x8fffffff;
          goto LAB_1434d61a7;
        }
      }
      piVar1 = (int *)(lVar9 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar9);
      }
      plVar14 = local_b8 + 3;
      *(int *)plVar14 = (int)*plVar14 + -1;
      lVar15 = local_a8;
      if ((int)*plVar14 == 0) {
        FUN_14335f920();
        lVar15 = local_a8;
      }
    }
    uVar19 = (ulonglong)((int)uVar19 + 2);
    lVar9 = param_3[uVar19];
  }
  pcVar11 = strchr(param_2,(int)*param_1);
  if (pcVar11 == param_2) {
LAB_1434d6216:
    uVar12 = FUN_1435c8e40(&local_a0,0x43c,local_c0);
    FUN_1435cbe70(local_c0,uVar12);
    piVar1 = (int *)(local_98 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_1436470e0(*(undefined8 *)(param_1 + 0x10),0);
    goto LAB_1434d68d5;
  }
  local_b0 = (char *)(*(longlong *)(lVar15 + 0x218) + 0x48);
  piVar1 = (int *)(*(longlong *)(lVar15 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar9 = *(longlong *)(lVar15 + 0x218);
  *(int *)(lVar9 + 0x60) = *(int *)(lVar9 + 0x60) + 1;
  uVar12 = *(undefined8 *)(lVar15 + 0x218);
  if (pcVar11 != (char *)0x0) {
    pcVar13 = (char *)FUN_143360a90(uVar12,param_2,(longlong)pcVar11 - (longlong)param_2);
    *(int *)(pcVar13 + 0x18) = *(int *)(pcVar13 + 0x18) + 2;
    piVar1 = (int *)(local_b0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(pcVar13 + 0x18);
    *piVar1 = *piVar1 + -1;
    local_b0 = pcVar13;
    if (*piVar1 == 0) {
      FUN_14335f920(pcVar13);
    }
    param_2 = pcVar11 + 1;
    uVar12 = *(undefined8 *)(local_a8 + 0x218);
  }
  plVar14 = (longlong *)FUN_143360a60(uVar12,param_2);
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 2;
  piVar1 = (int *)(lVar9 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_b8 = plVar14;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9 + 0x48);
  }
  plVar8 = plVar14 + 3;
  *(int *)plVar8 = (int)*plVar8 + -1;
  local_res20 = plVar14;
  if ((int)*plVar8 == 0) {
    FUN_14335f920(plVar14);
  }
  uVar18 = 0;
  pcVar11 = param_1;
  if (uVar21 != 0) {
    do {
      lVar15 = *(longlong *)(lVar16 + uVar18 * 8);
      if (((byte)*(undefined4 *)(lVar15 + 0x48) & 0x1f) == 10) {
        pcVar11 = *(char **)(lVar15 + 0x58);
        bVar20 = true;
        *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 1;
        if (pcVar11 != local_b0) goto LAB_1434d6324;
        bVar6 = true;
      }
      else {
LAB_1434d6324:
        bVar6 = false;
      }
      if (bVar20) {
        bVar20 = false;
        piVar1 = (int *)(pcVar11 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(pcVar11);
        }
      }
      if (bVar6) goto LAB_1434d63f8;
      uVar18 = uVar18 + 1;
      lVar16 = local_70;
    } while (uVar18 < uVar21);
  }
  plVar8 = *(longlong **)(param_1 + 0x18);
  if ((plVar8 == (longlong *)0x0) ||
     (lVar15 = (**(code **)(*plVar8 + 400))(plVar8,&local_b0,0), lVar15 == 0)) {
    if (*(int *)(local_b0 + 0x20) == 0) {
      lVar9 = *(longlong *)(local_c0 + 0x2b0);
      if (lVar9 == 0) {
        lVar15 = *(longlong *)(local_c0 + 0x1d8);
      }
      else {
        uVar18 = 0;
        if (uVar21 != 0) {
          do {
            lVar15 = *(longlong *)(local_70 + uVar18 * 8);
            if (*(longlong *)(lVar15 + 0x38) == *(longlong *)(lVar9 + 0x38)) goto LAB_1434d63f8;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar21);
        }
        plVar8 = *(longlong **)(param_1 + 0x18);
        lVar15 = lVar9;
        if ((plVar8 != (longlong *)0x0) &&
           (lVar9 = (**(code **)(*plVar8 + 0x198))(plVar8,lVar9 + 0x38,0), lVar9 != 0)) {
          lVar15 = lVar9;
        }
      }
      goto LAB_1434d63f8;
    }
    uVar12 = FUN_1435c8e40(&local_a0,0x43b,local_c0);
    FUN_1435cbe70(local_c0,uVar12);
    piVar1 = (int *)(local_98 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_1436470e0(*(undefined8 *)(param_1 + 0x10),0);
  }
  else {
LAB_1434d63f8:
    lVar9 = local_78;
    pplVar3 = (longlong **)(param_1 + 0x18);
    plVar8 = *pplVar3;
    plVar4 = *(longlong **)(*(longlong *)(local_78 + 0x98) + 0x48);
    local_a0 = pplVar3;
    lVar16 = (**(code **)(*plVar4 + 0x50))(plVar4,0xa0,0);
    if (lVar16 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)FUN_1434cfd60(lVar16,lVar9,lVar15,&local_res20,plVar8);
    }
    local_res20 = plVar8;
    local_c8 = plVar8;
    if ((*pplVar3 == (longlong *)0x0) || (iVar7 = (**(code **)(**pplVar3 + 0xf0))(), iVar7 != 1)) {
      FUN_1434f0160(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x28) + 1
                   );
      puVar10 = (undefined8 *)
                (*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) + -1) * 8);
      if ((puVar10 != (undefined8 *)0x0) && (*puVar10 = local_c8, local_c8 != (longlong *)0x0)) {
        *(uint *)(local_c8 + 1) = (int)local_c8[1] + 1U & 0x8fffffff;
      }
    }
    else {
      (**(code **)(**pplVar3 + 0xd8))(*pplVar3,&local_c8);
    }
    lVar15 = local_70;
    uVar18 = 0;
    if (uVar21 != 0) {
      do {
        if (((byte)*(undefined4 *)(*(longlong *)(lVar15 + uVar18 * 8) + 0x48) & 0x1f) == 10) {
          FUN_1434f0230(plVar8 + 0xb,plVar8 + 0xb,plVar8[0xc] + 1);
          plVar4 = (longlong *)(plVar8[0xb] + (plVar8[0xc] + -1) * 8);
          if (plVar4 != (longlong *)0x0) {
            lVar9 = *(longlong *)(lVar15 + uVar18 * 8);
            *plVar4 = lVar9;
            if (lVar9 != 0) {
              *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar21);
    }
    plVar8 = local_res20;
    uVar18 = 0;
    lVar15 = *(longlong *)(local_a8 + 0x218);
    piVar1 = (int *)(lVar15 + 0x60);
    *piVar1 = *piVar1 + 1;
    lVar15 = lVar15 + 0x48;
    lVar9 = *param_3;
    while (lVar9 != 0) {
      pcVar11 = (char *)param_3[uVar18];
      uVar21 = 0xffffffffffffffff;
      do {
        uVar21 = uVar21 + 1;
      } while (pcVar11[uVar21] != '\0');
      if ((((uVar21 < 5) || (*pcVar11 != 'x')) || (pcVar11[1] != 'm')) ||
         (((pcVar11[2] != 'l' || (pcVar11[3] != 'n')) || (pcVar11[4] != 's')))) {
        pcVar13 = strchr(pcVar11,(int)*param_1);
        lVar9 = local_a8;
        lVar16 = FUN_143360a60(*(undefined8 *)(local_a8 + 0x218),param_3[(int)uVar18 + 1]);
        *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
        if (pcVar13 == (char *)0x0) {
          lVar9 = FUN_143360a60();
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          piVar1 = (int *)(lVar15 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar15);
          }
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          lVar15 = *(longlong *)(local_c0 + 0x1d8);
        }
        else {
          local_res20 = (longlong *)
                        FUN_143360a90(*(undefined8 *)(lVar9 + 0x218),pcVar11,
                                      (longlong)pcVar13 - (longlong)pcVar11);
          *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
          lVar9 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),pcVar13 + 1);
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          piVar1 = (int *)(lVar15 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar15);
          }
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          lVar15 = (**(code **)(*local_c8 + 400))(local_c8,&local_res20,0);
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(local_c0 + 0x1d8);
          }
          plVar14 = local_res20 + 3;
          *(int *)plVar14 = (int)*plVar14 + -1;
          if ((int)*plVar14 == 0) {
            FUN_14335f920();
          }
        }
        lVar5 = plVar8[5];
        plVar14 = *(longlong **)(*(longlong *)(lVar5 + 0x98) + 0x48);
        puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x50))(plVar14,0x60);
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          FUN_1435b9d40(puVar10,lVar5);
          *puVar10 = &PTR_ForEachChild_GC_145b199d0;
          puVar10[8] = lVar9;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
          puVar10[9] = plVar8;
          *(uint *)(plVar8 + 1) = (int)plVar8[1] + 1U & 0x8fffffff;
          *puVar10 = &PTR_FUN_145b19cf0;
          puVar10[10] = 0;
          puVar10[0xb] = lVar16;
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
          puVar17 = (ulonglong *)
                    FUN_1435cc0e0(*(undefined8 *)(puVar10[5] + 0x98),&local_78,0,lVar15 + 0x38,
                                  lVar15 + 0x48);
          uVar21 = puVar10[10];
          uVar19 = *puVar17;
          if (uVar19 != uVar21) {
            if (uVar21 != 0) {
              if ((uVar21 & 1) != 0) {
                puVar10[10] = uVar21 - 1;
                puVar10[10] = uVar19;
                goto LAB_1434d6762;
              }
              if ((*(uint *)(uVar21 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar21 + 8) = *(uint *)(uVar21 + 8) - 1;
                FUN_1434ef880();
              }
            }
            puVar10[10] = uVar19;
          }
        }
LAB_1434d6762:
        FUN_1434f0230(plVar8 + 0xe,plVar8 + 0xe);
        puVar2 = (undefined8 *)(plVar8[0xe] + (plVar8[0xf] + -1) * 8);
        if (puVar2 == (undefined8 *)0x0) {
LAB_1434d67a1:
          if (((puVar10 != (undefined8 *)0x0) && (((ulonglong)puVar10 & 1) == 0)) &&
             ((*(uint *)(puVar10 + 1) & 0x3fffff) != 0)) {
            *(uint *)(puVar10 + 1) = *(uint *)(puVar10 + 1) - 1;
            FUN_1434ef880(puVar10);
          }
        }
        else {
          *puVar2 = puVar10;
          if (puVar10 != (undefined8 *)0x0) {
            *(uint *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1U & 0x8fffffff;
            goto LAB_1434d67a1;
          }
        }
        piVar1 = (int *)(lVar16 + 0x18);
        *piVar1 = *piVar1 + -1;
        lVar15 = lVar9;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar16);
        }
      }
      uVar18 = (ulonglong)((int)uVar18 + 2);
      pplVar3 = local_a0;
      plVar14 = local_b8;
      uVar21 = local_80;
      lVar9 = param_3[uVar18];
    }
    if (&local_c8 != pplVar3) {
      if (local_c8 != (longlong *)0x0) {
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        *(uint *)(local_c8 + 1) = *(uint *)(local_c8 + 1) & 0x8fffffff;
      }
      plVar8 = *pplVar3;
      if (plVar8 != (longlong *)0x0) {
        if (((ulonglong)plVar8 & 1) == 0) {
          if ((*(uint *)(plVar8 + 1) & 0x3fffff) != 0) {
            *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *pplVar3 = (longlong *)((longlong)plVar8 - 1);
        }
      }
      *pplVar3 = local_c8;
    }
    piVar1 = (int *)(lVar15 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar15);
    }
    if (local_c8 != (longlong *)0x0) {
      if (((ulonglong)local_c8 & 1) == 0) {
        if ((*(uint *)(local_c8 + 1) & 0x3fffff) != 0) {
          *(uint *)(local_c8 + 1) = *(uint *)(local_c8 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_c8 = (longlong *)((longlong)local_c8 + -1);
      }
    }
  }
  plVar8 = plVar14 + 3;
  *(int *)plVar8 = (int)*plVar8 + -1;
  if ((int)*plVar8 == 0) {
    FUN_14335f920(plVar14);
  }
  piVar1 = (int *)(local_b0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1434d68d5:
  lVar15 = local_70;
  puVar17 = (ulonglong *)(local_70 + -8 + uVar21 * 8);
  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
    uVar18 = *puVar17;
    if (uVar18 != 0) {
      if ((uVar18 & 1) == 0) {
        if ((*(uint *)(uVar18 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar17 = uVar18 - 1;
      }
    }
    puVar17 = puVar17 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar15);
  return;
}



// FUNCTION 1434d6950 FUN_1434d6950 body=306 status=ok
// SIG undefined FUN_1434d6950(void)

void FUN_1434d6950(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  FUN_1434d7000(param_1,1);
  FUN_1434f0030(param_1 + 0x48,*(longlong *)(param_1 + 0x50) + -1);
  uVar8 = *(ulonglong *)(param_1 + 0x18);
  puVar1 = (ulonglong *)(param_1 + 0x18);
  if (uVar8 != 0) {
    while (uVar4 = *(ulonglong *)(uVar8 + 0x48), uVar4 != 0) {
      uVar6 = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
      *(uint *)(uVar4 + 8) = uVar6;
      if (&local_res8 != puVar1) {
        *(uint *)(uVar4 + 8) = uVar6 + 1 & 0x8fffffff;
        uVar5 = *puVar1;
        if (uVar5 != 0) {
          if ((uVar5 & 1) == 0) {
            if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar5 - 1;
          }
        }
        *puVar1 = uVar4;
      }
      pcVar7 = (char *)**(undefined8 **)(uVar8 + 0x40);
      lVar9 = param_2 - (longlong)pcVar7;
      do {
        cVar2 = *pcVar7;
        cVar3 = pcVar7[lVar9];
        if (cVar2 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        if ((uVar4 & 1) != 0) {
          return;
        }
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) == 0) {
          return;
        }
        *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
        FUN_1434ef880(uVar4);
        return;
      }
      if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
        FUN_1434ef880(uVar4);
      }
      uVar8 = *puVar1;
      if (uVar8 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1434d6a90 FUN_1434d6a90 body=64 status=ok
// SIG undefined FUN_1434d6a90(void)

void FUN_1434d6a90(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1434d7000(param_1,2);
  FUN_143360130(param_1 + 0x40,param_2,(longlong)param_3);
  return;
}



// FUNCTION 1434d6ae0 FUN_1434d6ae0 body=455 status=ok
// SIG undefined FUN_1434d6ae0(void)

void FUN_1434d6ae0(longlong param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *local_res8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x10);
  FUN_1434d7000(param_1,3);
  ppuVar1 = (undefined8 **)(param_1 + 0x18);
  puVar5 = *ppuVar1;
  lVar8 = FUN_143360a60(*(undefined8 *)(lVar8 + 0x218),param_2);
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
  plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
  puVar9 = (undefined8 *)(**(code **)(*plVar6 + 0x50))(plVar6,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar9,lVar4);
    *puVar9 = &PTR_ForEachChild_GC_145b199d0;
    puVar9[8] = lVar8;
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    puVar9[9] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      *(uint *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1U & 0x8fffffff;
    }
    *puVar9 = &PTR_ForEachChild_GC_145b1a440;
  }
  piVar2 = (int *)(lVar8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920(lVar8);
  }
  local_res8 = puVar9;
  if ((*ppuVar1 == (longlong *)0x0) || (iVar7 = (**(code **)(**ppuVar1 + 0xf0))(), iVar7 != 1)) {
    if (&local_res8 != ppuVar1) {
      if (local_res8 != (undefined8 *)0x0) {
        *(int *)(local_res8 + 1) = *(int *)(local_res8 + 1) + 1;
        *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) & 0x8fffffff;
      }
      puVar5 = *ppuVar1;
      if (puVar5 != (undefined8 *)0x0) {
        if (((ulonglong)puVar5 & 1) == 0) {
          if ((*(uint *)(puVar5 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *ppuVar1 = (undefined8 *)((longlong)puVar5 - 1);
        }
      }
      *ppuVar1 = local_res8;
    }
    FUN_1434f0160(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x28) + 1);
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) + -1) * 8)
    ;
    if (puVar3 != (ulonglong *)0x0) {
      *puVar3 = (ulonglong)local_res8;
      if (local_res8 == (undefined8 *)0x0) {
        return;
      }
      *(int *)(local_res8 + 1) = *(int *)(local_res8 + 1) + 1;
      *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) & 0x8fffffff;
    }
  }
  else {
    (**(code **)(**ppuVar1 + 0xd8))(*ppuVar1,&local_res8);
  }
  if (((local_res8 != (undefined8 *)0x0) && (((ulonglong)local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 1) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434d6cc0 FUN_1434d6cc0 body=98 status=ok
// SIG undefined FUN_1434d6cc0(void)

void FUN_1434d6cc0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(longlong *)(param_1 + 0x50) + 1;
  if (uVar1 < *(ulonglong *)(param_1 + 0x50)) {
    uVar2 = uVar1;
    if (*(ulonglong *)(param_1 + 0x58) >> 1 <= uVar1) goto LAB_1434d6d08;
  }
  else {
    if (uVar1 <= *(ulonglong *)(param_1 + 0x58)) goto LAB_1434d6d08;
    uVar2 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efc20((longlong *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),uVar2);
LAB_1434d6d08:
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4 + uVar1 * 4) = 5;
  return;
}



// FUNCTION 1434d6d50 FUN_1434d6d50 body=98 status=ok
// SIG undefined FUN_1434d6d50(void)

void FUN_1434d6d50(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(longlong *)(param_1 + 0x50) + 1;
  if (uVar1 < *(ulonglong *)(param_1 + 0x50)) {
    uVar2 = uVar1;
    if (*(ulonglong *)(param_1 + 0x58) >> 1 <= uVar1) goto LAB_1434d6d98;
  }
  else {
    if (uVar1 <= *(ulonglong *)(param_1 + 0x58)) goto LAB_1434d6d98;
    uVar2 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efc20((longlong *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),uVar2);
LAB_1434d6d98:
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4 + uVar1 * 4) = 6;
  return;
}



// FUNCTION 1434d6de0 FUN_1434d6de0 body=507 status=ok
// SIG undefined FUN_1434d6de0(void)

void FUN_1434d6de0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *local_res8;
  
  FUN_1434d7000(param_1,7);
  lVar4 = *(longlong *)(param_1 + 8);
  ppuVar1 = (undefined8 **)(param_1 + 0x18);
  puVar5 = *ppuVar1;
  lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x10);
  lVar8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),param_3);
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
  lVar9 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),param_2);
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
  plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
  puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x50))(plVar6,0x58);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar10,lVar4);
    *puVar10 = &PTR_ForEachChild_GC_145b199d0;
    puVar10[8] = lVar9;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    puVar10[9] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      *(uint *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1U & 0x8fffffff;
    }
    *puVar10 = &PTR_ForEachChild_GC_145b1a270;
    puVar10[10] = lVar8;
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
  }
  piVar2 = (int *)(lVar9 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920(lVar9);
  }
  piVar2 = (int *)(lVar8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920(lVar8);
  }
  local_res8 = puVar10;
  if ((*ppuVar1 == (longlong *)0x0) || (iVar7 = (**(code **)(**ppuVar1 + 0xf0))(), iVar7 != 1)) {
    if (&local_res8 != ppuVar1) {
      if (local_res8 != (undefined8 *)0x0) {
        *(int *)(local_res8 + 1) = *(int *)(local_res8 + 1) + 1;
        *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) & 0x8fffffff;
      }
      puVar5 = *ppuVar1;
      if (puVar5 != (undefined8 *)0x0) {
        if (((ulonglong)puVar5 & 1) == 0) {
          if ((*(uint *)(puVar5 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *ppuVar1 = (undefined8 *)((longlong)puVar5 - 1);
        }
      }
      *ppuVar1 = local_res8;
    }
    FUN_1434f0160(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x28) + 1);
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) + -1) * 8)
    ;
    if ((puVar3 != (ulonglong *)0x0) &&
       (*puVar3 = (ulonglong)local_res8, local_res8 != (undefined8 *)0x0)) {
      *(int *)(local_res8 + 1) = *(int *)(local_res8 + 1) + 1;
      *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) & 0x8fffffff;
    }
    FUN_1436470e0(*(undefined8 *)(param_1 + 0x10),CONCAT71((int7)((ulonglong)puVar3 >> 8),1));
  }
  else {
    (**(code **)(**ppuVar1 + 0xd8))(*ppuVar1,&local_res8);
  }
  if (((local_res8 != (undefined8 *)0x0) && (((ulonglong)local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 1) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 1) = *(uint *)(local_res8 + 1) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434d7000 FUN_1434d7000 body=433 status=ok
// SIG undefined FUN_1434d7000(void)

void FUN_1434d7000(longlong param_1,int param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong local_res8;
  undefined1 local_res18 [8];
  
  if (*(int *)(param_1 + 4) != param_2) {
    if (*(int *)(param_1 + 4) == 2) {
      lVar5 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 8));
      if (*(char *)(lVar5 + 0x52) != '\0') {
        lVar5 = Scaleform::GFx::ASConstString::TruncateWhitespaceNode(param_1 + 0x40);
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(longlong *)(param_1 + 0x40) = lVar5;
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar5);
        }
      }
      if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x20) != 0) {
        puVar2 = (ulonglong *)(param_1 + 0x18);
        puVar6 = (ulonglong *)
                 FUN_1434ce210(*(undefined8 *)(param_1 + 8),local_res18,*(undefined8 *)(param_1 + 8)
                               ,param_1 + 0x40,*puVar2);
        local_res8 = *puVar6;
        if (((longlong *)*puVar2 == (longlong *)0x0) ||
           (iVar4 = (**(code **)(*(longlong *)*puVar2 + 0xf0))(), iVar4 != 1)) {
          FUN_1434f0160(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38),
                        *(longlong *)(param_1 + 0x28) + 1);
          puVar6 = (ulonglong *)
                   (*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) + -1) * 8);
          if ((puVar6 != (ulonglong *)0x0) && (*puVar6 = local_res8, local_res8 != 0)) {
            *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
            *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
          }
          if (&local_res8 != puVar2) {
            if (local_res8 != 0) {
              *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
              *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
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
            *puVar2 = local_res8;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar2 + 0xd8))((longlong *)*puVar2,&local_res8);
        }
        FUN_143360110(param_1 + 0x40);
        if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
           ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}



// FUNCTION 1434d71c0 UKWIllustDemoOrderDataAsset body=59 status=ok
// SIG undefined UKWIllustDemoOrderDataAsset(void)

undefined8 * UKWIllustDemoOrderDataAsset::UKWIllustDemoOrderDataAsset(undefined8 *param_1)

{
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b1a610;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1434d7210 FUN_1434d7210 body=160 status=ok
// SIG undefined FUN_1434d7210(void)

void FUN_1434d7210(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_ForEachChild_GC_145b1a610;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  FUN_1434e5ef0(param_1 + 0xb);
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar2 - 1;
    }
  }
  uVar2 = param_1[8];
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      param_1[8] = uVar2 - 1;
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



// FUNCTION 1434d72c0 FUN_1434d72c0 body=476 status=ok
// SIG undefined FUN_1434d72c0(void)

undefined1 * FUN_1434d72c0(longlong param_1,undefined1 *param_2,char *param_3,uint *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 local_res20 [8];
  uint local_70 [2];
  undefined8 local_68;
  uint local_50 [2];
  undefined8 local_48;
  
  if (((*param_4 & 0x1f) == 0) && (*(longlong *)(param_1 + 0x60) == 0)) {
    *param_3 = '\x01';
    *param_2 = 1;
    return param_2;
  }
  if (((*param_4 & 0x1f) == 0xc) &&
     (cVar3 = FUN_143592790(*(undefined8 *)(param_4 + 4)), cVar3 != '\0')) {
    lVar1 = *(longlong *)(param_4 + 4);
    if (*(longlong *)(lVar1 + 0x60) == *(longlong *)(param_1 + 0x60)) {
      uVar5 = 0;
      *param_3 = '\x01';
      uVar2 = *(ulonglong *)(param_1 + 0x60);
      if (uVar2 != 0) {
        do {
          local_50[0] = 0;
          local_48 = 0;
          FUN_143590450(local_50,*(undefined8 *)(*(longlong *)(lVar1 + 0x58) + uVar5 * 8));
          local_70[0] = 0;
          local_68 = 0;
          FUN_143590450(local_70,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar5 * 8));
          pcVar4 = (char *)FUN_1435929f0(local_res20,param_3,local_70,local_50);
          cVar3 = *pcVar4;
          if (9 < ((byte)local_70[0] & 0x1f)) {
            if ((local_70[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_70);
            }
            else {
              FUN_143592150();
            }
          }
          if (9 < ((byte)local_50[0] & 0x1f)) {
            if ((local_50[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_50);
            }
            else {
              FUN_143592150();
            }
          }
          if (cVar3 == '\0') {
            *param_2 = 0;
            return param_2;
          }
        } while ((*param_3 != '\0') && (uVar5 = uVar5 + 1, uVar5 < uVar2));
      }
      *param_2 = 1;
      return param_2;
    }
  }
  else if (*(longlong *)(param_1 + 0x60) == 1) {
    local_50[0] = 0;
    local_48 = 0;
    FUN_143590450(local_50,**(undefined8 **)(param_1 + 0x58));
    FUN_1435929f0(param_2,param_3,local_50,param_4);
    if (((byte)local_50[0] & 0x1f) < 10) {
      return param_2;
    }
    if ((local_50[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return param_2;
    }
    FUN_1435920c0(local_50);
    return param_2;
  }
  *param_3 = '\0';
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d74b0 FUN_1434d74b0 body=152 status=ok
// SIG undefined FUN_1434d74b0(void)

void FUN_1434d74b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_2 + 0x60);
  uVar5 = 0;
  if (uVar3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      lVar4 = *(longlong *)(param_2 + 0x58);
      FUN_1434f0230(plVar1,plVar1,*(longlong *)(param_1 + 0x60) + 1);
      plVar2 = (longlong *)(*plVar1 + (*(longlong *)(param_1 + 0x60) + -1) * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar4 = *(longlong *)(lVar4 + uVar5 * 8);
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}



// FUNCTION 1434d7550 FUN_1434d7550 body=106 status=ok
// SIG undefined FUN_1434d7550(void)

undefined1 * FUN_1434d7550(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) != 1) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d75c0 FUN_1434d75c0 body=227 status=ok
// SIG undefined FUN_1434d75c0(void)

longlong * FUN_1434d75c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  FUN_1434d7760();
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar6 * 8);
      puVar5 = (ulonglong *)(**(code **)(*plVar2 + 0x130))(plVar2,local_res8,param_3);
      lVar3 = *param_2;
      uVar4 = *puVar5;
      FUN_1434f0230(lVar3 + 0x58,lVar3 + 0x58,*(longlong *)(lVar3 + 0x60) + 1);
      puVar5 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (*(longlong *)(lVar3 + 0x60) + -1) * 8);
      if (puVar5 == (ulonglong *)0x0) {
LAB_1434d765c:
        if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      else {
        *puVar5 = uVar4;
        if (uVar4 != 0) {
          *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
          goto LAB_1434d765c;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return param_2;
}



// FUNCTION 1434d76b0 FUN_1434d76b0 body=159 status=ok
// SIG undefined FUN_1434d76b0(void)

longlong * FUN_1434d76b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_1434d7760();
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(param_1 + 0x58);
      FUN_1434f0230(lVar3 + 0x58,lVar3 + 0x58,*(longlong *)(lVar3 + 0x60) + 1);
      plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x58) + (*(longlong *)(lVar3 + 0x60) + -1) * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = *(longlong *)(lVar4 + uVar5 * 8);
        *plVar1 = lVar3;
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return param_2;
}



// FUNCTION 1434d7760 FUN_1434d7760 body=136 status=ok
// SIG undefined FUN_1434d7760(void)

undefined8 FUN_1434d7760(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    FUN_1434ef540(param_2,uVar2);
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    local_res8 = lVar4;
    FUN_1434dcb80(uVar2,param_2,uVar2,*(undefined8 *)(param_1 + 0x40),&local_res8,lVar3);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434d77f0 FUN_1434d77f0 body=610 status=ok
// SIG undefined FUN_1434d77f0(void)

undefined8 * FUN_1434d77f0(longlong param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar3 = param_3[4];
  puVar9 = (undefined8 *)0x0;
  *param_2 = 0;
  if (((byte)uVar3 & 0x1f) == 10) {
    if (((*param_3 & 3) < 2) && (*(longlong *)(param_3 + 2) != 0)) {
      lVar6 = FUN_1435aec10(param_3);
      if (((*(byte *)(lVar6 + 0x48) & 0x1f) == 0) &&
         (lVar7 = FUN_1434d8150(param_1,lVar6 + 0x38), lVar7 != 0)) {
        lVar6 = lVar7;
      }
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
      lVar6 = *(longlong *)(lVar7 + 0x2b0);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar7 + 0x1d8);
      }
      else if (((*(byte *)(lVar6 + 0x48) & 0x1f) == 0) &&
              (lVar7 = FUN_1434d8150(param_1,lVar6 + 0x38), lVar7 != 0)) {
        lVar6 = lVar7;
      }
    }
    lVar7 = *(longlong *)(param_3 + 8);
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar8 = (undefined8 *)FUN_1435b5bc0(uVar4);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar8,uVar4);
      *puVar8 = &PTR_ForEachChild_GC_145b1a610;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar9 = puVar8;
    }
    FUN_1434f0700(puVar9 + 8,param_1);
    if (puVar9[9] != 0) {
      piVar1 = (int *)(puVar9[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar9[9] = lVar7;
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
    FUN_1434f0700(puVar9 + 10,lVar6);
    piVar1 = (int *)(lVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    *param_2 = puVar9;
    if (iVar2 == 0) {
      FUN_14335f920(lVar7);
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (((lVar7 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
       (lVar6 = *(longlong *)(param_1 + 0x48), lVar6 == 0)) {
      puVar8 = (undefined8 *)FUN_1435b5bc0(uVar4);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1435b9d40(puVar8,uVar4);
        *puVar8 = &PTR_ForEachChild_GC_145b1a610;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar9 = puVar8;
      }
    }
    else {
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      puVar8 = (undefined8 *)FUN_1435b5bc0(uVar4);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1435b9d40(puVar8,uVar4);
        *puVar8 = &PTR_ForEachChild_GC_145b1a610;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar9 = puVar8;
      }
      FUN_1434f0700(puVar9 + 8,uVar5);
      if (puVar9[9] != 0) {
        piVar1 = (int *)(puVar9[9] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar9[9] = lVar6;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      FUN_1434f0700(puVar9 + 10,lVar7);
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar6);
      }
    }
    *param_2 = puVar9;
  }
  return param_2;
}



// FUNCTION 1434d7a60 FUN_1434d7a60 body=48 status=ok
// SIG undefined FUN_1434d7a60(void)

undefined8
FUN_1434d7a60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1434dcb80(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x28),param_3,
                param_4,param_5);
  return param_2;
}



// FUNCTION 1434d7aa0 FUN_1434d7aa0 body=608 status=ok
// SIG undefined FUN_1434d7aa0(void)

int FUN_1434d7aa0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  
  iVar12 = 0;
  if (((byte)param_2[4] & 0x1f) != 10) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 8);
  local_78 = 0;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  local_58 = *(ulonglong *)(param_1 + 0x60);
  if (local_58 != 0) {
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x58) + local_78 * 8);
      local_60 = plVar14;
      iVar6 = (**(code **)(*plVar14 + 0xf0))(plVar14);
      if (iVar6 == 1) {
        local_68 = plVar14[0x12];
        uVar13 = 0;
        if (local_68 != 0) {
          do {
            plVar14 = *(longlong **)(plVar14[0x11] + uVar13 * 8);
            plVar7 = (longlong *)(**(code **)(*plVar14 + 0x78))(plVar14,&local_70);
            if ((*plVar7 == lVar2) ||
               (cVar5 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_2), cVar5 != '\0')) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            piVar1 = (int *)(local_70 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (bVar4) {
              if (((byte)*param_2 & 3) < 2) {
                cVar5 = FUN_1434ef3d0();
                if (cVar5 == '\0') {
                  lVar8 = FUN_1435aec10(param_2);
                  lVar9 = (**(code **)(*plVar14 + 0x110))(plVar14);
                  if ((*(longlong *)(lVar8 + 0x38) != *(longlong *)(lVar9 + 0x38)) ||
                     (((*(byte *)(lVar9 + 0x28) ^ *(byte *)(lVar8 + 0x28)) & 0xf) != 0))
                  goto LAB_1434d7c6b;
                }
                (**(code **)(*param_3 + 8))(param_3,local_78,uVar13);
                iVar12 = iVar12 + 1;
              }
              else {
                lVar8 = FUN_1435aec20(param_2);
                uVar11 = 0;
                uVar3 = *(ulonglong *)(lVar8 + 0x30);
                if (uVar3 != 0) {
                  do {
                    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x28) + uVar11 * 8);
                    lVar10 = (**(code **)(*plVar14 + 0x110))(plVar14);
                    if ((*(longlong *)(lVar9 + 0x38) == *(longlong *)(lVar10 + 0x38)) &&
                       (((*(byte *)(lVar10 + 0x28) ^ *(byte *)(lVar9 + 0x28)) & 0xf) == 0)) {
                      (**(code **)(*param_3 + 8))(param_3,local_78,uVar13);
                      iVar12 = iVar12 + 1;
                      break;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar3);
                }
              }
            }
LAB_1434d7c6b:
            uVar13 = uVar13 + 1;
            plVar14 = local_60;
          } while (uVar13 < local_68);
        }
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_58);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return iVar12;
}



// FUNCTION 1434d7d10 FUN_1434d7d10 body=59 status=ok
// SIG undefined FUN_1434d7d10(void)

void FUN_1434d7d10(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  return;
}



// FUNCTION 1434d7d60 FUN_1434d7d60 body=607 status=ok
// SIG undefined FUN_1434d7d60(void)

undefined1 * FUN_1434d7d60(longlong param_1,undefined1 *param_2,ulonglong *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res20;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  
  uVar11 = 0;
  *param_3 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (((plVar4 != (longlong *)0x0) && (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0)) &&
       ((pcVar5 = (char *)**(undefined8 **)(param_1 + 0x48), *pcVar5 != '*' || (pcVar5[1] != '\0')))
       ) {
      lVar10 = plVar4[5];
      local_res20 = (longlong *)0x0;
      if (*(int *)(lVar10 + 0x90) == 0x12) {
        bVar6 = ~(*(byte *)(lVar10 + 0x88) >> 5) & 1;
        local_res20 = plVar4;
      }
      else {
        if ((*(int *)(lVar10 + 0x90) != 0x13) || ((~(*(byte *)(lVar10 + 0x88) >> 5) & 1) == 0))
        goto LAB_1434d7dd2;
        pbVar9 = (byte *)FUN_1434d7d60(plVar4,&local_res8,&local_res20);
        bVar6 = *pbVar9;
      }
      if (bVar6 == 0) goto LAB_1434d7dd2;
      if (local_res20 != (longlong *)0x0) {
        local_30 = (**(code **)(**(longlong **)(lVar3 + 0x50) + 0x60))();
        plVar7 = local_res20;
        lVar3 = *(longlong *)(param_1 + 0x48);
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        local_38 = *(undefined8 *)(param_1 + 0x50);
        plVar4 = *(longlong **)(*(longlong *)(local_30 + 0x98) + 0x48);
        local_40 = lVar3;
        lVar10 = (**(code **)(*plVar4 + 0x50))(plVar4,0xa0,0);
        if (lVar10 != 0) {
          uVar11 = FUN_1434cfd60(lVar10,local_30,local_38,&local_40,plVar7);
        }
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        local_res8 = uVar11;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar3);
        }
        (**(code **)(*local_res20 + 0xd8))(local_res20,&local_res8);
        FUN_1434f0230(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
        puVar2 = (ulonglong *)
                 (*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
        if ((puVar2 != (ulonglong *)0x0) && (*puVar2 = local_res8, local_res8 != 0)) {
          *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
        }
        *param_3 = local_res8;
        if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
           ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x60) != 1) {
      uVar8 = FUN_1435c8e40(&local_30,0x441,lVar3);
      FUN_1435cbe70(lVar3,uVar8);
      piVar1 = (int *)(local_28 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
LAB_1434d7dd2:
      *param_2 = 0;
      return param_2;
    }
    *param_3 = **(ulonglong **)(param_1 + 0x58);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d7fd0 FUN_1434d7fd0 body=184 status=ok
// SIG undefined FUN_1434d7fd0(void)

bool FUN_1434d7fd0(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  char local_res10 [16];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)local_res20[0] < *(ulonglong *)(param_1 + 0x60);
  }
  uVar5 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar5 * 8);
      iVar4 = (**(code **)(*plVar2 + 0xf0))(plVar2);
      if ((iVar4 == 1) &&
         (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3), cVar3 != '\0')) {
        return true;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return false;
}



// FUNCTION 1434d8090 FUN_1434d8090 body=178 status=ok
// SIG undefined FUN_1434d8090(void)

undefined8 FUN_1434d8090(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 local_res18 [8];
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  
  if ((*param_3 >> 3 & 1) == 0) {
    local_38 = &PTR_FUN_145b1a928;
    local_30 = param_1;
    local_28 = param_4;
    iVar3 = FUN_1434d7aa0(param_1,param_3,&local_38);
    bVar5 = iVar3 == 0;
  }
  else {
    uVar4 = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x60);
    if (uVar1 != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar4 * 8);
        (**(code **)(*plVar2 + 0x1c8))(plVar2,local_res18,param_3,param_4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    bVar5 = *(longlong *)(param_4 + 0x60) == 0;
  }
  *(bool *)param_2 = !bVar5;
  return param_2;
}



// FUNCTION 1434d8150 FUN_1434d8150 body=126 status=ok
// SIG undefined FUN_1434d8150(void)

longlong FUN_1434d8150(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    cVar2 = FUN_143592750(plVar1);
    if (cVar2 != '\0') break;
    cVar2 = FUN_143592790();
    if (cVar2 != '\0') {
      lVar3 = plVar1[10];
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x38) == *param_2)) {
        return lVar3;
      }
      plVar1 = (longlong *)plVar1[8];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d81c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,param_2,0);
  return lVar3;
}



// FUNCTION 1434d81e0 GetDescendants body=103 status=ok
// SIG undefined GetDescendants(void)

void Scaleform::GFx::AS3::Instances::fl::XMLList::GetDescendants
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar3 * 8);
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



// FUNCTION 1434d8250 FUN_1434d8250 body=4145 status=ok
// SIG undefined FUN_1434d8250(void)

undefined1 * FUN_1434d8250(undefined8 *param_1,undefined1 *param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  bool bVar25;
  undefined8 *local_res8;
  uint local_res18;
  undefined4 uStackX_1c;
  uint *local_res20;
  uint local_e8 [2];
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  uint local_c8 [2];
  undefined8 local_c0;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [8];
  ulonglong local_80;
  uint local_78 [4];
  longlong local_68;
  undefined1 *local_58;
  longlong local_50;
  
  plVar24 = (longlong *)0x0;
  uVar21 = 0;
  local_res18 = 0;
  plVar22 = *(longlong **)(param_1[5] + 0x98);
  local_res8 = param_1;
  local_res20 = param_4;
  local_d8 = plVar22;
  FUN_1435bdeb0(&local_res18,param_3 + 0x10,local_e8);
  puVar13 = local_res8;
  if ((char)local_res18 == '\0') {
    if (1 < (ulonglong)param_1[0xc]) {
      uVar15 = FUN_1435c8e40(&local_58,0x441,plVar22);
      FUN_1435cbe70(plVar22,uVar15);
      piVar1 = (int *)(local_50 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1434d9260;
    }
    if (param_1[0xc] == 0) {
      pcVar9 = (char *)FUN_1434d7d60(param_1,&local_res8,&local_res18);
      uVar21 = local_res18;
      if (*pcVar9 == '\0') goto LAB_1434d9260;
      lVar2 = CONCAT44(uStackX_1c,local_res18);
      if (lVar2 == 0) goto LAB_1434d9230;
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      FUN_1434f0230(param_1 + 0xb,param_1 + 0xb,param_1[0xc] + 1);
      plVar22 = (longlong *)(param_1[0xb] + (param_1[0xc] + -1) * 8);
      if (plVar22 != (longlong *)0x0) {
        *plVar22 = lVar2;
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      }
      if (((uVar21 & 1) == 0) && ((*(uint *)(lVar2 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) - 1;
        FUN_1434ef880(lVar2);
      }
    }
    pcVar9 = (char *)(**(code **)(**(longlong **)param_1[0xb] + 0x20))
                               (*(longlong **)param_1[0xb],&local_res8,param_3,param_4);
    if (*pcVar9 == '\0') {
LAB_1434d9230:
      *param_2 = 0;
      return param_2;
    }
    goto LAB_1434d922a;
  }
  local_d0 = (longlong *)0x0;
  plVar22 = (longlong *)local_res8[8];
  plVar11 = plVar24;
  plVar23 = plVar24;
  if ((plVar22 != (longlong *)0x0) &&
     (((~(*(byte *)(plVar22[5] + 0x88) >> 5) & 1) == 0 ||
      (((iVar8 = *(int *)(plVar22[5] + 0x90), plVar23 = plVar22, iVar8 != 0x12 &&
        ((iVar8 != 0x13 ||
         (pcVar9 = (char *)FUN_1434d7d60(plVar22,&local_res18,&local_d0), plVar11 = plVar22,
         plVar23 = local_d0, *pcVar9 == '\0')))) || (plVar23 == (longlong *)0x0)))))) {
LAB_1434d9260:
    *param_2 = 0;
    return param_2;
  }
  if ((ulonglong)puVar13[0xc] <= (ulonglong)local_e8[0]) {
    if (plVar11 != (longlong *)0x0) {
      if (plVar11[0xc] != 1) goto LAB_1434d9260;
      plVar23 = *(longlong **)plVar11[0xb];
    }
    if ((plVar23 != (longlong *)0x0) &&
       (iVar8 = (**(code **)(*plVar23 + 0xf0))(plVar23), iVar8 != 1)) goto LAB_1434d9260;
    local_d0 = (longlong *)(**(code **)(*(longlong *)local_d8[10] + 0x60))();
    plVar22 = plVar24;
    if ((puVar13[10] == 0) || (lVar2 = puVar13[9], plVar22 = (longlong *)0x0, lVar2 == 0)) {
LAB_1434d83c6:
      local_res18 = local_res18 & 0xffffff00;
    }
    else {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      local_e0 = lVar2;
      Scaleform::GFx::AS3::Value::Value(local_c8,&local_e0);
      puVar10 = (uint *)FUN_1435ae6b0(local_88,puVar13[10],local_c8);
      plVar22 = (longlong *)0x7;
      local_res18 = CONCAT31(local_res18._1_3_,1);
      if ((*puVar10 >> 3 & 1) == 0) goto LAB_1434d83c6;
    }
    if (((ulonglong)plVar22 & 4) != 0) {
      plVar22 = (longlong *)(ulonglong)((uint)plVar22 & 0xfffffffb);
      FUN_1434e6250(local_88);
    }
    if ((((ulonglong)plVar22 & 2) != 0) &&
       (plVar22 = (longlong *)(ulonglong)((uint)plVar22 & 0xfffffffd),
       9 < ((byte)local_c8[0] & 0x1f))) {
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
    if (((ulonglong)plVar22 & 1) != 0) {
      piVar1 = (int *)(local_e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    bVar25 = false;
    plVar22 = plVar24;
    if ((char)local_res18 == '\0') {
      puVar13 = (undefined8 *)puVar13[9];
      puVar18 = local_res8;
      if (puVar13 == (undefined8 *)0x0) {
LAB_1434d8664:
        bVar5 = true;
      }
      else {
        *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
        bVar25 = true;
        puVar18 = puVar13;
        if ((*(char *)*puVar13 == '*') && (((char *)*puVar13)[1] == '\0')) goto LAB_1434d8664;
        bVar5 = false;
      }
      if (bVar25) {
        piVar1 = (int *)(puVar18 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (bVar5) {
        local_58 = &DAT_145af3922;
        local_50 = 0;
        puVar13 = (undefined8 *)FUN_1434ce2c0(local_d0,&local_d0,local_d0,&local_58,plVar23);
        if ((longlong *)*puVar13 != (longlong *)0x0) {
          plVar22 = (longlong *)*puVar13;
        }
      }
      else {
        lVar2 = local_res8[9];
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
        uVar15 = local_res8[10];
        local_e0 = lVar2;
        lVar14 = (**(code **)(**(longlong **)(local_d0[0x13] + 0x48) + 0x50))
                           (*(longlong **)(local_d0[0x13] + 0x48),0xa0,0);
        if ((lVar14 != 0) &&
           (plVar11 = (longlong *)FUN_1434cfd60(lVar14,local_d0,uVar15,&local_e0,plVar23),
           plVar11 != (longlong *)0x0)) {
          plVar22 = plVar11;
        }
        piVar1 = (int *)(lVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar2);
        }
      }
    }
    else {
      local_e0 = puVar13[9];
      *(int *)(local_e0 + 0x18) = *(int *)(local_e0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_c8,&local_e0);
      FUN_1435ae6b0(local_88,puVar13[10],local_c8);
      if (9 < ((byte)local_c8[0] & 0x1f)) {
        if ((local_c8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_c8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (((byte)local_78[0] & 0x1f) == 10) {
        *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
        plVar11 = (longlong *)plVar23[0xf];
        plVar20 = plVar24;
        if (plVar11 != (longlong *)0x0) {
          do {
            cVar6 = FUN_1434ca4e0(*(undefined8 *)(plVar23[0xe] + (longlong)plVar20 * 8),local_88);
            if (cVar6 != '\0') {
              piVar1 = (int *)(local_68 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(local_68);
              }
              *param_2 = 0;
              FUN_1434e6250(local_88);
              return param_2;
            }
            plVar20 = (longlong *)((longlong)plVar20 + 1);
          } while (plVar20 < plVar11);
        }
        piVar1 = (int *)(local_68 + 0x18);
        *piVar1 = *piVar1 + -1;
        puVar13 = local_res8;
        if (*piVar1 == 0) {
          FUN_14335f920(local_68);
          puVar13 = local_res8;
        }
      }
      lVar2 = *(longlong *)(local_d8[2] + 0x218);
      *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
      lVar14 = puVar13[9];
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      local_e0 = puVar13[10];
      plVar11 = (longlong *)
                (**(code **)(**(longlong **)(local_d0[0x13] + 0x48) + 0x50))
                          (*(longlong **)(local_d0[0x13] + 0x48),0x60);
      if (plVar11 != (longlong *)0x0) {
        FUN_1435b9d40(plVar11,local_d0);
        *plVar11 = (longlong)&PTR_ForEachChild_GC_145b199d0;
        plVar11[8] = lVar14;
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
        plVar11[9] = (longlong)plVar23;
        if (plVar23 != (longlong *)0x0) {
          *(uint *)(plVar23 + 1) = (int)plVar23[1] + 1U & 0x8fffffff;
        }
        *plVar11 = (longlong)&PTR_FUN_145b19cf0;
        plVar11[10] = 0;
        plVar11[0xb] = lVar2 + 0x48;
        *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
        puVar12 = (ulonglong *)
                  FUN_1435cc0e0(*(undefined8 *)(plVar11[5] + 0x98),&local_e0,0,local_e0 + 0x38,
                                local_e0 + 0x48);
        uVar3 = plVar11[10];
        uVar19 = *puVar12;
        plVar22 = plVar11;
        if (uVar19 != uVar3) {
          if (uVar3 != 0) {
            if ((uVar3 & 1) == 0) {
              if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              plVar11[10] = uVar3 - 1;
            }
          }
          plVar11[10] = uVar19;
        }
      }
      piVar1 = (int *)(lVar14 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar14);
      }
      piVar1 = (int *)(lVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar2 + 0x48);
      }
      FUN_1434e6250(local_88);
      param_4 = local_res20;
    }
    puVar13 = local_res8;
    local_e8[0] = *(uint *)(local_res8 + 0xc);
    if ((char)local_res18 == '\0') {
      if (plVar23 != (longlong *)0x0) {
        lVar2 = plVar23[0x12];
        if (local_e8[0] == 0) {
          uVar21 = (int)lVar2 - 1;
        }
        else if (lVar2 != 1) {
          plVar11 = plVar24;
          do {
            uVar21 = (uint)plVar11;
            if (*(longlong *)(plVar23[0x11] + (longlong)plVar11 * 8) ==
                *(longlong *)(local_res8[0xb] + (ulonglong)(local_e8[0] - 1) * 8)) break;
            uVar21 = uVar21 + 1;
            plVar11 = (longlong *)(ulonglong)uVar21;
          } while (plVar11 < (longlong *)(lVar2 - 1U));
        }
        local_58 = (undefined1 *)((ulonglong)local_58 & 0xffffffff00000000);
        local_50 = 0;
        FUN_143590450(&local_58,plVar22);
        pcVar9 = (char *)(**(code **)(*plVar23 + 0x150))(plVar23,&local_res18,uVar21 + 1,&local_58);
        cVar6 = *pcVar9;
        if (9 < ((byte)local_58 & 0x1f)) {
          if (((uint)local_58 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_58);
          }
          else {
            FUN_143592150();
          }
        }
        if (cVar6 == '\0') {
          *param_2 = 0;
          if (plVar22 == (longlong *)0x0) {
            return param_2;
          }
          if (((ulonglong)plVar22 & 1) != 0) {
            return param_2;
          }
          if ((*(uint *)(plVar22 + 1) & 0x3fffff) == 0) {
            return param_2;
          }
          *(uint *)(plVar22 + 1) = *(uint *)(plVar22 + 1) - 1;
          FUN_1434ef880(plVar22);
          return param_2;
        }
      }
      cVar6 = FUN_1434ef480(param_4);
      if (cVar6 == '\0') {
        cVar6 = FUN_1434ef450(param_4);
        if (cVar6 != '\0') {
          FUN_1435900f0(local_c8,*(undefined8 *)(*(longlong *)(param_4 + 4) + 0x48));
          uVar15 = FUN_143590540();
          FUN_1434cd5c0(plVar22,uVar15,local_c8);
          if (9 < ((byte)local_c8[0] & 0x1f)) {
            if ((local_c8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_c8);
            }
            else {
              FUN_143592150();
            }
          }
        }
      }
      else {
        uVar15 = (**(code **)(**(longlong **)(param_4 + 4) + 0x78))
                           (*(longlong **)(param_4 + 4),&local_res18);
        Scaleform::GFx::AS3::Value::Value(local_c8,uVar15);
        uVar15 = FUN_143590540();
        FUN_1434cd5c0(plVar22,uVar15,local_c8);
        if (9 < ((byte)local_c8[0] & 0x1f)) {
          if ((local_c8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_c8);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(CONCAT44(uStackX_1c,local_res18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
    }
    FUN_1434f0230(puVar13 + 0xb,puVar13 + 0xb,puVar13[0xc] + 1);
    puVar18 = (undefined8 *)(puVar13[0xb] + (puVar13[0xc] + -1) * 8);
    if (puVar18 != (undefined8 *)0x0) {
      *puVar18 = plVar22;
      if (plVar22 == (longlong *)0x0) goto LAB_1434d8928;
      *(uint *)(plVar22 + 1) = (int)plVar22[1] + 1U & 0x8fffffff;
    }
    if (((plVar22 != (longlong *)0x0) && (((ulonglong)plVar22 & 1) == 0)) &&
       ((*(uint *)(plVar22 + 1) & 0x3fffff) != 0)) {
      *(uint *)(plVar22 + 1) = *(uint *)(plVar22 + 1) - 1;
      FUN_1434ef880(plVar22);
    }
  }
LAB_1434d8928:
  local_a0 = *(undefined8 *)(param_4 + 2);
  local_a8[0] = *param_4;
  local_98 = param_4[4];
  uStack_94 = param_4[5];
  uStack_90 = param_4[6];
  uStack_8c = param_4[7];
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  if ((((byte)*param_4 & 0x1f) == 0xc) &&
     (cVar6 = FUN_143592750(*(undefined8 *)(param_4 + 4)), cVar6 != '\0')) {
    iVar8 = (**(code **)(**(longlong **)(param_4 + 4) + 0xf0))();
    if (iVar8 != 2) {
      bVar25 = iVar8 == 5;
      goto LAB_1434d899e;
    }
LAB_1434d89a0:
    plVar22 = local_d8;
    plVar23 = local_d8 + 2;
    local_d8 = (longlong *)(*(longlong *)(*plVar23 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(*plVar23 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar9 = (char *)FUN_1435911f0(param_4,&local_res18,&local_d8);
    if (*pcVar9 == '\0') {
      *param_2 = 0;
      plVar22 = local_d8 + 3;
      *(int *)plVar22 = (int)*plVar22 + -1;
      if ((int)*plVar22 == 0) {
        FUN_14335f920();
      }
      goto LAB_1434d8c25;
    }
    FUN_143590250(local_a8,&local_d8);
    plVar23 = local_d8 + 3;
    *(int *)plVar23 = (int)*plVar23 + -1;
    if ((int)*plVar23 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (((byte)*param_4 & 0x1f) != 0xc) goto LAB_1434d89a0;
    cVar6 = FUN_143592790(*(undefined8 *)(param_4 + 4));
    bVar25 = cVar6 == '\0';
LAB_1434d899e:
    plVar22 = local_d8;
    if (bVar25) goto LAB_1434d89a0;
  }
  plVar23 = *(longlong **)(puVar13[0xb] + (ulonglong)local_e8[0] * 8);
  iVar8 = (**(code **)(*plVar23 + 0xf0))(plVar23);
  if (iVar8 == 5) {
    uVar15 = (**(code **)(*plVar23 + 0x78))(plVar23,&local_res18);
    Scaleform::GFx::AS3::Value::Value(local_c8,uVar15);
    uVar15 = (**(code **)(*plVar23 + 0x110))(plVar23);
    FUN_1435ae6b0(local_88,uVar15,local_c8);
    if (9 < ((byte)local_c8[0] & 0x1f)) {
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(CONCAT44(uStackX_1c,local_res18) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    (**(code **)(*(longlong *)plVar23[9] + 0x20))
              ((longlong *)plVar23[9],&local_res18,local_88,local_a8);
    puVar12 = (ulonglong *)FUN_1434d7760(local_res8,&local_res18);
    uVar3 = *puVar12;
    (**(code **)(*(longlong *)plVar23[9] + 0x1c8))
              ((longlong *)plVar23[9],&local_res8,local_88,uVar3);
    FUN_1434e6830(puVar13[0xb] + (ulonglong)local_e8[0] * 8,*(undefined8 *)(uVar3 + 0x58));
    if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
      FUN_1434ef880(uVar3);
    }
    if (9 < ((byte)local_78[0] & 0x1f)) {
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_80 != 0) && ((local_80 & 1) == 0)) && ((*(uint *)(local_80 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_80 + 8) = *(uint *)(local_80 + 8) - 1;
      FUN_1434ef880();
    }
  }
  else if ((((byte)local_a8[0] & 0x1f) == 0xc) &&
          (cVar6 = FUN_143592790(CONCAT44(uStack_94,local_98)), cVar6 != '\0')) {
    puVar12 = (ulonglong *)FUN_1434d76b0(CONCAT44(uStack_94,local_98),&local_58);
    uVar3 = *puVar12;
    local_d8 = (longlong *)plVar23[9];
    plVar22 = *(longlong **)(uVar3 + 0x60);
    local_d0 = plVar22;
    if ((local_d8 != (longlong *)0x0) &&
       (pcVar9 = (char *)(**(code **)(*plVar23 + 0x148))(plVar23,&local_res18,&local_e0),
       *pcVar9 != '\0')) {
      local_c8[0] = 0;
      local_c0 = 0;
      FUN_143590450(local_c8,uVar3);
      plVar23 = local_d8;
      pcVar9 = (char *)FUN_1434d3b50(local_d8,&local_res18,local_e0,local_c8);
      cVar6 = *pcVar9;
      if (9 < ((byte)local_c8[0] & 0x1f)) {
        if ((local_c8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_c8);
        }
        else {
          FUN_143592150();
        }
      }
      if (cVar6 == '\0') {
        *param_2 = 0;
LAB_1434d8c08:
        if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880(uVar3);
        }
        goto LAB_1434d8c25;
      }
      plVar11 = plVar24;
      if (plVar22 != (longlong *)0x0) {
        do {
          FUN_1434f0700(*(longlong *)(uVar3 + 0x58) + (longlong)plVar11 * 8,
                        *(undefined8 *)(plVar23[0x11] + (local_e0 + (longlong)plVar11) * 8));
          plVar11 = (longlong *)((longlong)plVar11 + 1);
        } while (plVar11 < plVar22);
      }
    }
    lVar2 = local_res8[0xc];
    if ((longlong *)0x1 < plVar22) {
      FUN_1434efee0(puVar13 + 0xb,lVar2 + -1 + (longlong)plVar22);
    }
    if (plVar22 == (longlong *)0x0) {
      FUN_1434ef920(puVar13 + 0xb,local_e8[0]);
    }
    else {
      if (((longlong *)0x1 < plVar22) && (uVar19 = lVar2 - 1, local_e8[0] < uVar19)) {
        do {
          FUN_1434e6830(puVar13[0xb] + uVar19 * 8 + ((longlong)plVar22 + -1) * 8,
                        puVar13[0xb] + uVar19 * 8);
          uVar4 = *(ulonglong *)(puVar13[0xb] + uVar19 * 8);
          plVar23 = (longlong *)(puVar13[0xb] + uVar19 * 8);
          if (uVar4 != 0) {
            if ((uVar4 & 1) == 0) {
              if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *plVar23 = uVar4 - 1;
            }
            *plVar23 = 0;
          }
          uVar19 = uVar19 - 1;
        } while (local_e8[0] < uVar19);
      }
      if (plVar22 != (longlong *)0x0) {
        do {
          plVar22 = *(longlong **)(puVar13[0xb] + ((ulonglong)local_e8[0] + (longlong)plVar24) * 8);
          plVar23 = *(longlong **)(*(longlong *)(uVar3 + 0x58) + (longlong)plVar24 * 8);
          if ((plVar22 == (longlong *)0x0) ||
             (iVar8 = (**(code **)(*plVar23 + 0xf0))(plVar23), iVar8 == 1)) {
            FUN_1434f0700(puVar13[0xb] + ((ulonglong)local_e8[0] + (longlong)plVar24) * 8,plVar23);
          }
          else {
            local_e0 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(local_res8[5] + 0x98) + 0x10) +
                                      0x218),&DAT_145af6c98,1);
            *(int *)(local_e0 + 0x18) = *(int *)(local_e0 + 0x18) + 1;
            uVar15 = Scaleform::GFx::AS3::Value::Value(local_c8,&local_e0);
            uVar16 = (**(code **)(*plVar22 + 0x128))(plVar22);
            FUN_1435ae6b0(local_88,uVar16,uVar15);
            if (9 < ((byte)local_c8[0] & 0x1f)) {
              if ((local_c8[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_c8);
              }
              else {
                FUN_143592150();
              }
            }
            piVar1 = (int *)(local_e0 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            (**(code **)(*plVar22 + 0x130))(plVar22,&local_d8,plVar22[9]);
            FUN_1434e68a0(puVar13[0xb] + ((ulonglong)local_e8[0] + (longlong)plVar24) * 8,local_d8);
            plVar22 = local_d8;
            lVar2 = *local_d8;
            FUN_143590110(local_c8,plVar23);
            pcVar9 = (char *)(**(code **)(lVar2 + 0x20))(plVar22,&local_res18,local_88);
            cVar6 = *pcVar9;
            if (9 < ((byte)local_c8[0] & 0x1f)) {
              if ((local_c8[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_c8);
              }
              else {
                FUN_143592150();
              }
            }
            bVar7 = (byte)local_78[0] & 0x1f;
            if (cVar6 == '\0') {
              *param_2 = 0;
              if (9 < bVar7) {
                if ((local_78[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_78);
                }
                else {
                  FUN_143592150();
                }
              }
              if (local_80 != 0) {
                if ((local_80 & 1) == 0) {
                  if ((*(uint *)(local_80 + 8) & 0x3fffff) != 0) {
                    *(uint *)(local_80 + 8) = *(uint *)(local_80 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  local_80 = local_80 - 1;
                }
              }
              goto LAB_1434d8c08;
            }
            if (9 < bVar7) {
              if ((local_78[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_78);
              }
              else {
                FUN_143592150();
              }
            }
            if (((local_80 != 0) && ((local_80 & 1) == 0)) &&
               ((*(uint *)(local_80 + 8) & 0x3fffff) != 0)) {
              *(uint *)(local_80 + 8) = *(uint *)(local_80 + 8) - 1;
              FUN_1434ef880();
            }
          }
          plVar24 = (longlong *)((longlong)plVar24 + 1);
        } while (plVar24 < local_d0);
      }
    }
    if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
      FUN_1434ef880(uVar3);
    }
  }
  else if (((((byte)local_a8[0] & 0x1f) == 0xc) &&
           (cVar6 = FUN_143592750(CONCAT44(uStack_94,local_98)), cVar6 != '\0')) || (iVar8 - 2U < 3)
          ) {
    lVar2 = plVar23[9];
    if ((lVar2 != 0) &&
       (pcVar9 = (char *)(**(code **)(*plVar23 + 0x148))(plVar23,&local_res8,&local_res18),
       *pcVar9 != '\0')) {
      pcVar9 = (char *)FUN_1434d3b50(lVar2,&local_res8,CONCAT44(uStackX_1c,local_res18),local_a8);
      if (*pcVar9 == '\0') {
        *param_2 = 0;
LAB_1434d8c25:
        if (((byte)local_a8[0] & 0x1f) < 10) {
          return param_2;
        }
        if ((local_a8[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return param_2;
        }
        FUN_1435920c0(local_a8);
        return param_2;
      }
      if (*(ulonglong *)(lVar2 + 0x90) <= CONCAT44(uStackX_1c,local_res18)) {
        *param_2 = 0;
        goto LAB_1434d8c25;
      }
      FUN_1435903c0(local_a8,*(undefined8 *)
                              (*(longlong *)(lVar2 + 0x88) + CONCAT44(uStackX_1c,local_res18) * 8));
    }
    if (((byte)local_a8[0] & 0x1f) == 10) {
      lVar17 = (**(code **)(*(longlong *)plVar22[10] + 0x60))();
      lVar14 = CONCAT44(uStack_94,local_98);
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      plVar22 = *(longlong **)(*(longlong *)(lVar17 + 0x98) + 0x48);
      plVar22 = (longlong *)(**(code **)(*plVar22 + 0x50))(plVar22,0x50);
      if (plVar22 != (longlong *)0x0) {
        FUN_1435b9d40(plVar22,lVar17);
        *plVar22 = (longlong)&PTR_ForEachChild_GC_145b199d0;
        plVar22[8] = lVar14;
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
        plVar22[9] = lVar2;
        if (lVar2 != 0) {
          *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
        }
        *plVar22 = (longlong)&PTR_ForEachChild_GC_145b1a0a0;
        plVar24 = plVar22;
      }
      FUN_1434e68a0(puVar13[0xb] + (ulonglong)local_e8[0] * 8,plVar24);
      piVar1 = (int *)(lVar14 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar14);
      }
    }
    else {
      FUN_1434f0700(puVar13[0xb] + (ulonglong)local_e8[0] * 8,CONCAT44(uStack_94,local_98));
    }
  }
  else {
    FUN_1435ae440(local_88,plVar22);
    plVar22 = *(longlong **)(puVar13[0xb] + (ulonglong)local_e8[0] * 8);
    pcVar9 = (char *)(**(code **)(*plVar22 + 0x20))(plVar22,&local_res8,local_88,local_a8);
    if (*pcVar9 == '\0') {
      *param_2 = 0;
      FUN_1434e6250(local_88);
      goto LAB_1434d8c25;
    }
    FUN_1434e6250(local_88);
  }
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = 1;
      return param_2;
    }
    FUN_1435920c0(local_a8);
    *param_2 = 1;
    return param_2;
  }
LAB_1434d922a:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d9290 FUN_1434d9290 body=232 status=ok
// SIG undefined FUN_1434d9290(void)

undefined1 * FUN_1434d9290(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  char local_res18;
  undefined7 uStackX_19;
  uint local_38 [2];
  uint local_30 [2];
  undefined8 local_28;
  
  FUN_1435bdeb0(&local_res18,param_3 + 0x10,local_38);
  if (local_res18 == '\0') {
    FUN_1434d77f0(param_1,&local_res18,param_3);
    local_30[0] = 0;
    local_28 = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(local_30,CONCAT71(uStackX_19,local_res18));
    FUN_143590140(param_4,local_30);
    if (9 < ((byte)local_30[0] & 0x1f)) {
      if ((local_30[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_30);
      }
      else {
        FUN_143592150();
      }
    }
    FUN_1434d8090(param_1,param_2,param_3,CONCAT71(uStackX_19,local_res18));
  }
  else if ((ulonglong)local_38[0] < *(ulonglong *)(param_1 + 0x60)) {
    FUN_1435903c0(param_4,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x58) + (ulonglong)local_38[0] * 8));
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1434d9380 FUN_1434d9380 body=58 status=ok
// SIG undefined FUN_1434d9380(void)

undefined1 * FUN_1434d9380(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4)

{
  if (*(ulonglong *)(param_1 + 0x60) <= (ulonglong)param_3) {
    *param_2 = 0;
    return param_2;
  }
  FUN_1435903c0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)param_3 * 8));
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d93c0 FUN_1434d93c0 body=497 status=ok
// SIG undefined FUN_1434d93c0(void)

undefined1 * FUN_1434d93c0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  char local_res18;
  undefined7 uStackX_19;
  uint local_res20 [2];
  undefined8 local_88;
  uint local_80 [8];
  undefined1 local_60 [8];
  ulonglong local_58;
  uint local_50 [10];
  
  FUN_1435bdeb0(&local_res18,param_3 + 0x10,local_res20);
  if (local_res18 == '\0') {
    uVar4 = *(ulonglong *)(param_1 + 0x60);
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar9 * 8);
        iVar5 = (**(code **)(*plVar2 + 0xf0))(plVar2);
        if ((iVar5 == 1) &&
           (pcVar8 = (char *)(**(code **)(*plVar2 + 0x48))(plVar2,&local_res18,param_3),
           *pcVar8 == '\0')) {
          *param_2 = 0;
          return param_2;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
  }
  else if ((ulonglong)local_res20[0] < *(ulonglong *)(param_1 + 0x60)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + (ulonglong)local_res20[0] * 8);
    plVar3 = (longlong *)plVar2[9];
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar2 + 0xf0))(plVar2);
      if (iVar5 == 5) {
        uVar6 = (**(code **)(*plVar2 + 0x78))(plVar2,&local_res18);
        uVar6 = Scaleform::GFx::AS3::Value::Value(local_80,uVar6);
        uVar7 = (**(code **)(*plVar2 + 0x128))(plVar2);
        FUN_1435ae6b0(local_60,uVar7,uVar6);
        if (9 < ((byte)local_80[0] & 0x1f)) {
          if ((local_80[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_80);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(CONCAT71(uStackX_19,local_res18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        (**(code **)(*plVar3 + 0x48))(plVar3,&local_res18,local_60);
        if (9 < ((byte)local_50[0] & 0x1f)) {
          if ((local_50[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_50);
          }
          else {
            FUN_143592150();
          }
        }
        if (((local_58 != 0) && ((local_58 & 1) == 0)) &&
           ((*(uint *)(local_58 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_58 + 8) = *(uint *)(local_58 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        pcVar8 = (char *)(**(code **)(*plVar2 + 0x148))(plVar2,&local_res18,&local_88);
        if (*pcVar8 != '\0') {
          (**(code **)(*plVar3 + 0x170))(plVar3,local_88);
        }
      }
    }
    FUN_1434ef920(param_1 + 0x58,local_res20[0]);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434d95c0 FUN_1434d95c0 body=228 status=ok
// SIG undefined FUN_1434d95c0(void)

void FUN_1434d95c0(longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 local_68 [24];
  undefined **local_50;
  undefined8 local_40;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  if (param_3 <= *(uint *)(param_1 + 0x60)) {
    FUN_143354b50(local_68,param_3 - 1);
    FUN_143355390(local_68);
    uVar3 = Scaleform::LongFormatter::GetSize(local_68);
    local_res8 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),local_40,uVar3);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143590250(param_2,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_50 = &PTR_FUN_145af1858;
    FUN_143353a80(local_68);
    return;
  }
  FUN_143590250(param_2,lVar2 + 0x10);
  return;
}



// FUNCTION 1434d96d0 FUN_1434d96d0 body=90 status=ok
// SIG undefined FUN_1434d96d0(void)

void FUN_1434d96d0(longlong param_1,uint *param_2,uint param_3)

{
  if (param_3 <= *(uint *)(param_1 + 0x60)) {
    FUN_1435903c0(param_2,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x58) + (ulonglong)(param_3 - 1) * 8));
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1434d9730 ForEachChild_GC body=151 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::XMLList::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*param_3)(param_2,param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar2 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x58) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1434d97d0 FUN_1434d97d0 body=1167 status=ok
// SIG undefined FUN_1434d97d0(void)

void FUN_1434d97d0(longlong param_1,int param_2,uint *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong *local_res8;
  undefined1 local_res10 [8];
  ulonglong local_res20;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [112];
  
  if (param_2 == 0) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar16 = *param_3 & 0x1f;
  if (uVar16 == 0) {
    return;
  }
  if (uVar16 == 0xc) {
    bVar17 = *(longlong *)(param_3 + 4) == 0;
  }
  else {
    if (uVar16 != 10) goto LAB_1434d9834;
    bVar17 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
  }
  if (bVar17) {
    return;
  }
LAB_1434d9834:
  if (param_2 == 1) {
    if ((uVar16 == 0xc) && (cVar5 = FUN_143592750(*(undefined8 *)(param_3 + 4)), cVar5 != '\0')) {
      uVar15 = *(ulonglong *)(param_3 + 4);
      if (uVar15 != 0) {
        *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0230(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
      puVar2 = (ulonglong *)
               (*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
      if (puVar2 != (ulonglong *)0x0) {
        *puVar2 = uVar15;
        if (uVar15 == 0) {
          return;
        }
        *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
      }
      if (((uVar15 != 0) && ((uVar15 & 1) == 0)) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
        FUN_1434ef880(uVar15);
      }
    }
    else {
      lVar6 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
      lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x218);
      local_res8 = (longlong *)(lVar9 + 0x48);
      piVar1 = (int *)(lVar9 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar7 = (char *)FUN_1435911f0(param_3,local_res10,&local_res8);
      if (*pcVar7 != '\0') {
        local_e8 = *local_res8;
        uStack_e0 = (ulonglong)*(uint *)(local_res8 + 4);
        uVar8 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
        lVar9 = FUN_1435b4fe0(uVar8);
        uVar15 = 0;
        cVar5 = *(char *)(lVar9 + 0x52);
joined_r0x0001434d9975:
        do {
          if (uStack_e0 == 0) break;
          uVar10 = 0;
          pcVar7 = (char *)Scaleform::GFx::ASUtils::SkipWhiteSpace(local_e8,uStack_e0);
          uVar14 = uStack_e0;
          if (*pcVar7 != ';') {
            if (*pcVar7 == '<') {
              local_res20 = 0;
              FUN_1434d59c0(local_a8,lVar6);
              pcVar7 = (char *)FUN_1434d5b80(local_a8,local_res10,&local_e8,&local_res20,1);
              uVar10 = local_res20;
              uVar14 = local_res20;
              if (*pcVar7 == '\0') {
                if ((uVar15 == local_res20) || (local_res20 == 0)) {
LAB_1434d9c1a:
                  FUN_1434d5b00(local_a8);
                  break;
                }
                if (*(char *)(local_e8 + local_res20) == ';') {
                  local_e8 = local_e8 + (ulonglong)(uStack_e0 != 0);
                  uStack_e0 = uStack_e0 - (uStack_e0 != 0);
                }
                else {
                  if (*(char *)(local_e8 + local_res20) != '<') goto LAB_1434d9c1a;
                  lVar9 = FUN_1432c6260(&local_e8,0x3e,local_res20);
                  uVar14 = lVar9 + 1;
                }
                FUN_1435cc020(lVar4);
                uVar15 = uVar10;
              }
              FUN_1434d5e20(local_a8,param_1 + 0x58);
              if (uStack_e0 < uVar14) {
                uVar14 = uStack_e0;
              }
              local_e8 = local_e8 + uVar14;
              uStack_e0 = uStack_e0 - uVar14;
              FUN_1434d5b00(local_a8);
              goto joined_r0x0001434d9975;
            }
            if (uStack_e0 != 0) {
              do {
                if (*(char *)(local_e8 + uVar10) == '<') {
                  if (uVar10 != 0xffffffffffffffff) {
                    uStack_c0._0_4_ = (undefined4)uVar10;
                    uStack_c0._4_4_ = (undefined4)(uVar10 >> 0x20);
                    uVar14 = uVar10;
                    if (uStack_e0 < uVar10) {
                      uVar14 = uStack_e0;
                    }
                    uStack_e0 = uStack_e0 - uVar14;
                    uVar18 = (undefined4)uStack_c0;
                    uVar19 = uStack_c0._4_4_;
                    local_c8 = local_e8;
                    uStack_c0 = uVar10;
                    goto LAB_1434d99ff;
                  }
                  break;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uStack_e0);
            }
            uVar18 = (undefined4)uStack_e0;
            uVar19 = uStack_e0._4_4_;
            uStack_e0 = 0;
LAB_1434d99ff:
            lVar9 = local_e8 + uVar14;
            local_d8 = local_e8;
            uStack_d0 = CONCAT44(uVar19,uVar18);
            local_e8 = lVar9;
            if (cVar5 != '\0') {
              plVar11 = (longlong *)FUN_1432c63b0(&local_d8,local_b8);
              local_d8 = *plVar11;
              uStack_d0 = plVar11[1];
            }
            lVar9 = *(longlong *)(lVar6 + 0x98);
            lVar12 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar9 + 0x10) + 0x218),local_d8,
                                   uStack_d0);
            *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
            plVar11 = *(longlong **)(lVar9 + 0x48);
            puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,0x50);
            if (puVar13 == (undefined8 *)0x0) {
              puVar13 = (undefined8 *)0x0;
            }
            else {
              FUN_1435b9d40(puVar13,lVar6);
              *puVar13 = &PTR_ForEachChild_GC_145b199d0;
              puVar13[8] = lVar12;
              *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
              puVar13[9] = 0;
              *puVar13 = &PTR_ForEachChild_GC_145b1a0a0;
            }
            piVar1 = (int *)(lVar12 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(lVar12);
            }
            FUN_1434f0230(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
            puVar3 = (undefined8 *)
                     (*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = puVar13;
              if (puVar13 == (undefined8 *)0x0) goto joined_r0x0001434d9975;
              *(uint *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1U & 0x8fffffff;
            }
            if (((puVar13 != (undefined8 *)0x0) && (((ulonglong)puVar13 & 1) == 0)) &&
               ((*(uint *)(puVar13 + 1) & 0x3fffff) != 0)) {
              *(uint *)(puVar13 + 1) = *(uint *)(puVar13 + 1) - 1;
              FUN_1434ef880(puVar13);
            }
            goto joined_r0x0001434d9975;
          }
          local_e8 = local_e8 + (ulonglong)(uStack_e0 != 0);
          uStack_e0 = uStack_e0 - (uStack_e0 != 0);
        } while( true );
      }
      plVar11 = local_res8 + 3;
      *(int *)plVar11 = (int)*plVar11 + -1;
      if ((int)*plVar11 == 0) {
        FUN_14335f920();
      }
    }
  }
  return;
}



// FUNCTION 1434d9c70 FUN_1434d9c70 body=366 status=ok
// SIG undefined FUN_1434d9c70(void)

void FUN_1434d9c70(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar7,uVar2);
      *puVar7 = &PTR_ForEachChild_GC_145b1a610;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar7,uVar2);
      *puVar7 = &PTR_ForEachChild_GC_145b1a610;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
    }
    FUN_1434f0700(puVar7 + 8,uVar5);
    if (puVar7[9] != 0) {
      piVar1 = (int *)(puVar7[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar7[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar7 + 10,lVar3);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  puVar6 = (undefined8 *)*param_2;
  if (puVar7 != puVar6) {
    if (puVar6 != (undefined8 *)0x0) {
      if (((ulonglong)puVar6 & 1) != 0) {
        *param_2 = (longlong)puVar6 - 1;
        *param_2 = (ulonglong)puVar7;
        return;
      }
      if ((*(uint *)(puVar6 + 1) & 0x3fffff) != 0) {
        *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  return;
}



// FUNCTION 1434d9e10 FUN_1434d9e10 body=305 status=ok
// SIG undefined FUN_1434d9e10(void)

void FUN_1434d9e10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  char local_res18 [8];
  undefined1 *local_48;
  undefined8 local_40;
  
  FUN_1434db3e0(param_1,local_res18);
  if (local_res18[0] == '\0') {
    FUN_1434dba30(param_1,param_2);
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  FUN_1432c5960(&local_48,*(undefined8 *)(lVar5 + 0x48));
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar7 * 8);
      iVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3);
      if (1 < iVar4 - 3U) {
        (**(code **)(*plVar3 + 0xe0))(plVar3,&local_48,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  puVar6 = &DAT_145af3922;
  if (local_48 != (undefined1 *)0x0) {
    puVar6 = local_48;
  }
  lVar5 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),puVar6,local_40);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar5;
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar5);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_48);
  return;
}



// FUNCTION 1434d9f70 FUN_1434d9f70 body=360 status=ok
// SIG undefined FUN_1434d9f70(void)

void FUN_1434d9f70(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined1 local_48 [8];
  ulonglong local_40;
  uint local_38 [8];
  
  if (((param_5 != 0) && (((byte)*param_3 & 0x1f) == 0xc)) &&
     (cVar2 = FUN_143592790(*(undefined8 *)(param_3 + 4)), cVar2 != '\0')) {
    plVar1 = *(longlong **)(param_3 + 4);
    FUN_1435ae4e0(local_48,param_2,param_6);
    cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,local_48,0);
    if (cVar2 != '\0') {
      FUN_1434f05f0(param_4,cVar2);
      if (9 < ((byte)local_38[0] & 0x1f)) {
        if ((local_38[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_38);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_40 == 0) {
        return;
      }
      if ((local_40 & 1) != 0) {
        return;
      }
      if ((*(uint *)(local_40 + 8) & 0x3fffff) == 0) {
        return;
      }
      *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
      FUN_1434ef880();
      return;
    }
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_40 != 0) && ((local_40 & 1) == 0)) && ((*(uint *)(local_40 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434aea70(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434da0e0 FUN_1434da0e0 body=397 status=ok
// SIG undefined FUN_1434da0e0(void)

void FUN_1434da0e0(longlong param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  char local_res18 [16];
  uint local_58 [2];
  uint7 uStack_4f;
  undefined8 uStack_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  uint local_30 [10];
  
  if ((param_3 == 0) || (uVar1 = *param_4 & 0x1f, uVar1 == 0)) goto LAB_1434da229;
  if (uVar1 == 0xc) {
    bVar2 = *(longlong *)(param_4 + 4) == 0;
LAB_1434da125:
    if (bVar2) goto LAB_1434da229;
  }
  else if (uVar1 == 10) {
    bVar2 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    goto LAB_1434da125;
  }
  FUN_1435ae4e0(local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_4);
  FUN_1435bdeb0(local_res18,local_30,local_58);
  if ((local_res18[0] != '\0') && ((ulonglong)local_58[0] < *(ulonglong *)(param_1 + 0x60))) {
    FUN_1434f05f0(param_2,1);
    if (9 < ((byte)local_30[0] & 0x1f)) {
      if ((local_30[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_30);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_38 == 0) {
      return;
    }
    if ((local_38 & 1) != 0) {
      return;
    }
    if ((*(uint *)(local_38 + 8) & 0x3fffff) == 0) {
      return;
    }
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
    return;
  }
  if (9 < ((byte)local_30[0] & 0x1f)) {
    if ((local_30[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_30);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_38 != 0) && ((local_38 & 1) == 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1434da229:
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe1;
  *param_2 = *param_2 | 1;
  *(ulonglong *)(param_2 + 4) = (ulonglong)uStack_4f << 8;
  *(undefined8 *)(param_2 + 6) = uStack_48;
  return;
}



// FUNCTION 1434da280 FUN_1434da280 body=364 status=ok
// SIG undefined FUN_1434da280(void)

void FUN_1434da280(longlong param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  ulonglong local_30;
  uint local_28 [8];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar5 = *param_3 & 0x1f;
  if (uVar5 == 0) {
LAB_1434da3ac:
    uVar8 = FUN_1435c8e40(local_48,0x5e4,lVar2);
    FUN_1435cbe70(lVar2,uVar8);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if (uVar5 == 0xc) {
      bVar10 = *(longlong *)(param_3 + 4) == 0;
LAB_1434da2cd:
      if (bVar10) goto LAB_1434da3ac;
    }
    else if (uVar5 == 10) {
      bVar10 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1434da2cd;
    }
    FUN_1435ae4e0(local_38,lVar2);
    local_38[0] = local_38[0] | 8;
    if (*(char *)(lVar2 + 0xb8) == '\0') {
      puVar6 = (undefined8 *)FUN_1434d77f0(param_1,local_res8,local_38);
      FUN_1434e68a0(param_2,*puVar6);
      uVar3 = *(ulonglong *)(param_1 + 0x60);
      uVar9 = 0;
      if (uVar3 != 0) {
        do {
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar9 * 8);
          pcVar7 = (char *)(**(code **)(*plVar4 + 0x1c8))(plVar4,local_res8,local_38,*param_2);
          if (*pcVar7 == '\0') break;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
    }
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 1434da400 FUN_1434da400 body=409 status=ok
// SIG undefined FUN_1434da400(void)

void FUN_1434da400(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    puVar9 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar9,uVar2);
      *puVar9 = &PTR_ForEachChild_GC_145b1a610;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puVar9 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar9,uVar2);
      *puVar9 = &PTR_ForEachChild_GC_145b1a610;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
    }
    FUN_1434f0700(puVar9 + 8,uVar5);
    if (puVar9[9] != 0) {
      piVar1 = (int *)(puVar9[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar9[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar9 + 10,lVar3);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  uVar10 = 0;
  puVar6 = (undefined8 *)*param_2;
  if (puVar9 != puVar6) {
    if (puVar6 != (undefined8 *)0x0) {
      if (((ulonglong)puVar6 & 1) == 0) {
        if ((*(uint *)(puVar6 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar6 - 1;
      }
    }
    *param_2 = (ulonglong)puVar9;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x60);
  if (uVar7 != 0) {
    do {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar10 * 8);
      (**(code **)(*plVar8 + 0x178))(plVar8,puVar9);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  return;
}



// FUNCTION 1434da5a0 FUN_1434da5a0 body=664 status=ok
// SIG undefined FUN_1434da5a0(void)

void FUN_1434da5a0(longlong param_1,ulonglong *param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  uint local_48 [8];
  
  uVar8 = *param_3 & 0x1f;
  if (uVar8 == 0) {
LAB_1434da7f5:
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar10 = FUN_1435c8e40(local_68,0x5e4,uVar2);
    FUN_1435cbe70(uVar2,uVar10);
    piVar1 = (int *)(local_60 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (uVar8 == 0xc) {
      bVar12 = *(longlong *)(param_3 + 4) == 0;
LAB_1434da5e0:
      if (bVar12) goto LAB_1434da7f5;
    }
    else if (uVar8 == 10) {
      bVar12 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1434da5e0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
       (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
      puVar9 = (undefined8 *)FUN_1435b5bc0(uVar2);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        FUN_1435b9d40(puVar9,uVar2);
        *puVar9 = &PTR_ForEachChild_GC_145b1a610;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
      }
    }
    else {
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      puVar9 = (undefined8 *)FUN_1435b5bc0(uVar2);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        FUN_1435b9d40(puVar9,uVar2);
        *puVar9 = &PTR_ForEachChild_GC_145b1a610;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
      }
      FUN_1434f0700(puVar9 + 8,uVar10);
      if (puVar9[9] != 0) {
        piVar1 = (int *)(puVar9[9] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar9[9] = lVar4;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      FUN_1434f0700(puVar9 + 10,lVar3);
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
    }
    uVar11 = 0;
    puVar5 = (undefined8 *)*param_2;
    if (puVar9 != puVar5) {
      if (puVar5 != (undefined8 *)0x0) {
        if (((ulonglong)puVar5 & 1) == 0) {
          if ((*(uint *)(puVar5 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar5 - 1;
        }
      }
      *param_2 = (ulonglong)puVar9;
    }
    FUN_1435ae6b0(local_58,*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),param_3);
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    if (uVar6 != 0) {
      do {
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar11 * 8);
        (**(code **)(*plVar7 + 0x140))(plVar7,puVar9,local_58);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
    }
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_50 != 0) && ((local_50 & 1) == 0)) && ((*(uint *)(local_50 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
      FUN_1434ef880();
      return;
    }
  }
  return;
}



// FUNCTION 1434da840 FUN_1434da840 body=612 status=ok
// SIG undefined FUN_1434da840(void)

void FUN_1434da840(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined **local_78;
  longlong local_70;
  ulonglong local_68;
  uint local_60 [2];
  ulonglong local_58;
  uint local_50 [10];
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    puVar10 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar10,uVar2);
      *puVar10 = &PTR_ForEachChild_GC_145b1a610;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puVar10 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar10,uVar2);
      *puVar10 = &PTR_ForEachChild_GC_145b1a610;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
    }
    FUN_1434f0700(puVar10 + 8,uVar5);
    if (puVar10[9] != 0) {
      piVar1 = (int *)(puVar10[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar10[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar10 + 10,lVar3);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  uVar11 = 0;
  puVar6 = (undefined8 *)*param_2;
  if (puVar10 != puVar6) {
    if (puVar6 != (undefined8 *)0x0) {
      if (((ulonglong)puVar6 & 1) == 0) {
        if ((*(uint *)(puVar6 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar6 - 1;
      }
    }
    *param_2 = (ulonglong)puVar10;
  }
  FUN_1435ae440(local_60,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  uVar7 = *param_2;
  if ((local_60[0] >> 3 & 1) == 0) {
    local_78 = &PTR_FUN_145b1a928;
    local_70 = param_1;
    local_68 = uVar7;
    FUN_1434d7aa0(param_1,local_60,&local_78);
  }
  else {
    uVar8 = *(ulonglong *)(param_1 + 0x60);
    if (uVar8 != 0) {
      do {
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar11 * 8);
        (**(code **)(*plVar9 + 0x1c8))(plVar9,local_res8,local_60,uVar7);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
  }
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_58 != 0) && ((local_58 & 1) == 0)) && ((*(uint *)(local_58 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_58 + 8) = *(uint *)(local_58 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434daab0 FUN_1434daab0 body=406 status=ok
// SIG undefined FUN_1434daab0(void)

void FUN_1434daab0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = *(undefined8 *)(lVar2 + 0x1d8);
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x218);
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar10 = (undefined8 *)FUN_1435b5bc0(uVar4);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar10,uVar4);
    *puVar10 = &PTR_ForEachChild_GC_145b1a610;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
  }
  uVar11 = 0;
  FUN_1434f0700(puVar10 + 8,param_1);
  if (puVar10[9] != 0) {
    piVar1 = (int *)(puVar10[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  puVar10[9] = lVar2 + 0x80;
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  FUN_1434f0700(puVar10 + 10,uVar3);
  puVar5 = (undefined8 *)*param_2;
  if (puVar10 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      if (((ulonglong)puVar5 & 1) == 0) {
        if ((*(uint *)(puVar5 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar5 - 1;
      }
    }
    *param_2 = (ulonglong)puVar10;
  }
  piVar1 = (int *)(lVar2 + 0x98);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2 + 0x80);
  }
  uVar6 = *(ulonglong *)(param_1 + 0x60);
  if (uVar6 != 0) {
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar11 * 8);
      iVar9 = (**(code **)(*plVar7 + 0xf0))(plVar7);
      if (iVar9 == 1) {
        local_res8 = 0;
        FUN_1434cbb70(plVar7,&local_res8);
        uVar8 = local_res8;
        if (*(longlong *)(local_res8 + 0x60) != 0) {
          FUN_1434e82e0(*param_2 + 0x58,*(undefined8 *)(local_res8 + 0x58));
        }
        if (((uVar8 & 1) == 0) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
          FUN_1434ef880(uVar8);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
  return;
}



// FUNCTION 1434dac50 FUN_1434dac50 body=146 status=ok
// SIG undefined FUN_1434dac50(void)

void FUN_1434dac50(longlong param_1,char *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  
  *param_2 = '\0';
  if ((((byte)*param_3 & 0x1f) == 0xc) &&
     (cVar4 = FUN_143592750(*(undefined8 *)(param_3 + 4)), cVar4 != '\0')) {
    uVar1 = *(ulonglong *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_3 + 4);
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        if (*param_2 != '\0') {
          return;
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar6 * 8);
        iVar5 = (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
        if (iVar5 == 1) {
          *param_2 = '\x01';
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
  return;
}



// FUNCTION 1434dacf0 FUN_1434dacf0 body=102 status=ok
// SIG undefined FUN_1434dacf0(void)

void FUN_1434dacf0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 local_res10 [24];
  
  puVar3 = (ulonglong *)FUN_1434d75c0(param_1,local_res10,0);
  uVar1 = *param_2;
  uVar2 = *puVar3;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *param_2 = uVar1 - 1;
        *param_2 = uVar2;
        return;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = uVar2;
  }
  return;
}



// FUNCTION 1434dad60 FUN_1434dad60 body=805 status=ok
// SIG undefined FUN_1434dad60(void)

void FUN_1434dad60(longlong *param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong local_res8;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [8];
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  
  if (param_3 == 0) {
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                               &DAT_145af6c98,1,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    puVar9 = (uint *)Scaleform::GFx::AS3::Value::Value(local_88,&local_res8);
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
  }
  else {
    local_a0 = *(undefined8 *)(param_4 + 2);
    local_a8[0] = *param_4;
    local_98 = param_4[4];
    uStack_94 = param_4[5];
    uStack_90 = param_4[6];
    uStack_8c = param_4[7];
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    puVar9 = local_a8;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
  }
  FUN_1435ae6b0(local_68,*(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8),puVar9);
  if ((bVar6) && (9 < ((byte)local_a8[0] & 0x1f))) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar7) && (9 < ((byte)local_88[0] & 0x1f))) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar8) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  lVar2 = param_1[10];
  lVar3 = param_1[5];
  if (((lVar2 == 0) || (param_1[8] == 0)) || (lVar4 = param_1[9], lVar4 == 0)) {
    puVar10 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)FUN_1435b5bc0(lVar3);
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar11,lVar3);
      *puVar11 = &PTR_ForEachChild_GC_145b1a610;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar10 = puVar11;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    lVar5 = param_1[8];
    puVar10 = (undefined8 *)FUN_1435b5bc0(lVar3);
    if (puVar10 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar10,lVar3);
      *puVar10 = &PTR_ForEachChild_GC_145b1a610;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
    }
    FUN_1434f0700(puVar10 + 8,lVar5);
    if (puVar10[9] != 0) {
      piVar1 = (int *)(puVar10[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar10[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar10 + 10,lVar2);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  local_a0 = 0;
  local_a8[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_a8,puVar10);
  FUN_143590140(param_2,local_a8);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,puVar10,local_68);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_60 != 0) && ((local_60 & 1) == 0)) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434db090 FUN_1434db090 body=785 status=ok
// SIG undefined FUN_1434db090(void)

void FUN_1434db090(longlong param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong local_res8;
  undefined8 local_res10;
  int local_res18;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [8];
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  
  puVar12 = (undefined8 *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar11 = puVar12;
  local_res10 = param_2;
  local_res18 = param_3;
  if (((lVar2 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    puVar9 = (undefined8 *)FUN_1435b5bc0(uVar3);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar9,uVar3);
      *puVar9 = &PTR_ForEachChild_GC_145b1a610;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar11 = puVar9;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    local_res8 = *(ulonglong *)(param_1 + 0x40);
    puVar9 = (undefined8 *)FUN_1435b5bc0(uVar3);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_1435b9d40(puVar9,uVar3);
      *puVar9 = &PTR_ForEachChild_GC_145b1a610;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar11 = puVar9;
    }
    FUN_1434f0700(puVar11 + 8,local_res8);
    if (puVar11[9] != 0) {
      piVar1 = (int *)(puVar11[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar11[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar11 + 10,lVar2);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  local_a8[0] = 0;
  local_a0 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_a8,puVar11);
  FUN_143590140(local_res10,local_a8);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if (local_res18 == 0) {
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                0x218),&DAT_145af6c98,1);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    puVar10 = (uint *)Scaleform::GFx::AS3::Value::Value(local_88,&local_res8);
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
  }
  else {
    local_a0 = *(undefined8 *)(param_4 + 2);
    local_a8[0] = *param_4;
    local_98 = param_4[4];
    uStack_94 = param_4[5];
    uStack_90 = param_4[6];
    uStack_8c = param_4[7];
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    puVar10 = local_a8;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
  }
  FUN_1435ae6b0(local_68,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),puVar10);
  if ((bVar6) && (9 < ((byte)local_a8[0] & 0x1f))) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar7) && (9 < ((byte)local_88[0] & 0x1f))) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar8) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 != (undefined8 *)0x0) {
    do {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)puVar12 * 8);
      (**(code **)(*plVar5 + 0x140))(plVar5,puVar11,local_68);
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
    } while (puVar12 < puVar9);
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_60 != 0) && ((local_60 & 1) == 0)) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434db3b0 AS3hasComplexContent body=28 status=ok
// SIG undefined AS3hasComplexContent(void)

void Scaleform::GFx::AS3::Instances::fl::XMLList::AS3hasComplexContent
               (undefined8 param_1,char *param_2)

{
  FUN_1434db3e0();
  *param_2 = *param_2 == '\0';
  return;
}



// FUNCTION 1434db3e0 FUN_1434db3e0 body=173 status=ok
// SIG undefined FUN_1434db3e0(void)

void FUN_1434db3e0(longlong param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if (uVar1 == 0) {
    *param_2 = 1;
    return;
  }
  if (uVar1 != 1) {
    uVar4 = 0;
    *param_2 = 1;
    if (uVar1 != 0) {
      do {
        iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x58) + uVar4 * 8) + 0xf0))();
        if (iVar3 == 1) {
          *param_2 = 0;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    return;
  }
  uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x58) + 0x100))();
  *param_2 = uVar2;
  return;
}



// FUNCTION 1434db4a0 FUN_1434db4a0 body=103 status=ok
// SIG undefined FUN_1434db4a0(void)

void FUN_1434db4a0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc890(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434db510 FUN_1434db510 body=89 status=ok
// SIG undefined FUN_1434db510(void)

void FUN_1434db510(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_1434f0700(param_2,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x58) + uVar2 * 8) + 0x188))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1434db570 FUN_1434db570 body=140 status=ok
// SIG undefined FUN_1434db570(void)

void FUN_1434db570(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if (uVar1 == 0) {
    uVar3 = *param_2;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x58);
    uVar5 = 1;
    lVar2 = *(longlong *)(*plVar4 + 0x48);
    if (1 < uVar1) {
      do {
        plVar4 = plVar4 + 1;
        if (lVar2 != *(longlong *)(*plVar4 + 0x48)) goto LAB_1434db5ca;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    if (lVar2 != 0) {
      FUN_1435903c0(param_2,lVar2);
      return;
    }
LAB_1434db5ca:
    uVar3 = *param_2;
  }
  if (9 < ((byte)uVar3 & 0x1f)) {
    if ((uVar3 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1434db610 FUN_1434db610 body=616 status=ok
// SIG undefined FUN_1434db610(void)

void FUN_1434db610(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  uint local_58 [2];
  undefined8 local_50;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  local_res20 = param_4;
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    puVar8 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar8,uVar2);
      *puVar8 = &PTR_ForEachChild_GC_145b1a610;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puVar8 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar8,uVar2);
      *puVar8 = &PTR_ForEachChild_GC_145b1a610;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
    }
    FUN_1434f0700(puVar8 + 8,uVar5);
    if (puVar8[9] != 0) {
      piVar1 = (int *)(puVar8[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar8[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar8 + 10,lVar3);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    param_4 = local_res20;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
      param_4 = local_res20;
    }
  }
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,puVar8);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (param_3 == 0) {
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    if (uVar6 != 0) {
      do {
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar10 * 8);
        (**(code **)(*plVar7 + 0x138))(plVar7,puVar8,4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
      return;
    }
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_res8 = lVar3 + 0x48;
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar9 = (char *)FUN_1435911f0(param_4,local_res18,&local_res8);
    if ((*pcVar9 != '\0') && (uVar6 = *(ulonglong *)(param_1 + 0x60), uVar6 != 0)) {
      do {
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar10 * 8);
        (**(code **)(*plVar7 + 0x138))(plVar7,puVar8,4,&local_res8);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434db880 FUN_1434db880 body=416 status=ok
// SIG undefined FUN_1434db880(void)

void FUN_1434db880(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 == 0)) {
    puVar9 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar9,uVar2);
      *puVar9 = &PTR_ForEachChild_GC_145b1a610;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
    }
  }
  else {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puVar9 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_1435b9d40(puVar9,uVar2);
      *puVar9 = &PTR_ForEachChild_GC_145b1a610;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
    }
    FUN_1434f0700(puVar9 + 8,uVar5);
    if (puVar9[9] != 0) {
      piVar1 = (int *)(puVar9[9] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar9[9] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    FUN_1434f0700(puVar9 + 10,lVar3);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  uVar10 = 0;
  puVar6 = (undefined8 *)*param_2;
  if (puVar9 != puVar6) {
    if (puVar6 != (undefined8 *)0x0) {
      if (((ulonglong)puVar6 & 1) == 0) {
        if ((*(uint *)(puVar6 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar6 - 1;
      }
    }
    *param_2 = (ulonglong)puVar9;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x60);
  if (uVar7 != 0) {
    do {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar10 * 8);
      (**(code **)(*plVar8 + 0x138))(plVar8,puVar9,2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  return;
}



// FUNCTION 1434dba30 FUN_1434dba30 body=1105 status=ok
// SIG undefined FUN_1434dba30(void)

void FUN_1434dba30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  
  uVar18 = 0;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar16 = *(ulonglong *)(param_1 + 0x60);
  local_80 = *(undefined8 *)(lVar10 + 0x48);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (uVar16 != 0) {
    plVar13 = *(longlong **)(param_1 + 0x40);
    lVar2 = *(longlong *)(lVar10 + 0x1d8);
    plVar6 = plVar13;
    while (plVar13 != (longlong *)0x0) {
      cVar7 = FUN_143592750(plVar13);
      if (cVar7 != '\0') goto joined_r0x0001434dbc22;
      cVar7 = FUN_143592790(plVar13);
      if (cVar7 != '\0') {
        uVar3 = plVar13[0xc];
        uVar19 = uVar18;
        if (uVar3 != 0) {
          do {
            plVar8 = (longlong *)(**(code **)(**(longlong **)(plVar13[0xb] + uVar19 * 8) + 0xc0))();
            if ((plVar8 != (longlong *)0x0) &&
               (uVar17 = plVar8[1], uVar15 = uVar18, uVar11 = local_90, uVar17 != 0)) {
              do {
                uVar4 = *(ulonglong *)(*plVar8 + uVar15 * 8);
                if ((*(longlong *)(uVar4 + 0x38) != *(longlong *)(lVar2 + 0x38)) ||
                   (((*(byte *)(uVar4 + 0x28) ^ *(byte *)(lVar2 + 0x28)) & 0xf) != 0)) {
                  uVar9 = uVar18;
                  if (uVar11 != 0) {
                    do {
                      lVar5 = *(longlong *)(local_98 + uVar9 * 8);
                      if ((*(longlong *)(lVar5 + 0x38) == *(longlong *)(uVar4 + 0x38)) &&
                         (((*(byte *)(lVar5 + 0x28) ^ *(byte *)(uVar4 + 0x28)) & 0xf) == 0))
                      goto LAB_1434dbbec;
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < uVar11);
                  }
                  *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
                  FUN_1434f0160(&local_98,local_80,local_90 + 1);
                  puVar14 = (ulonglong *)(local_98 + (local_90 - 1) * 8);
                  if (puVar14 != (ulonglong *)0x0) {
                    *puVar14 = uVar4;
                    *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
                  }
                  uVar11 = local_90;
                  if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
                    FUN_1434ef880(uVar4);
                    uVar11 = local_90;
                  }
                }
LAB_1434dbbec:
                uVar15 = uVar15 + 1;
                plVar13 = plVar6;
              } while (uVar15 < uVar17);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar3);
        }
        plVar13 = (longlong *)plVar13[8];
        plVar6 = plVar13;
      }
    }
  }
LAB_1434dbd5c:
  FUN_1432c5960(&local_78,*(undefined8 *)(lVar10 + 0x48));
  if (uVar16 != 0) {
    do {
      if (uVar18 != 0) {
        FUN_1432c5df0(&local_78,10);
      }
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x58) + uVar18 * 8);
      (**(code **)(*plVar13 + 0xe8))(plVar13,&local_78,0,0,&local_98);
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar16);
  }
  puVar12 = &DAT_145af3922;
  if (local_78 != (undefined1 *)0x0) {
    puVar12 = local_78;
  }
  lVar10 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x218),puVar12,local_70);
  *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar10;
  piVar1 = (int *)(lVar10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar10);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_78);
  puVar14 = (ulonglong *)(local_98 + (local_90 - 1) * 8);
  for (uVar16 = local_90; uVar16 != 0; uVar16 = uVar16 - 1) {
    uVar18 = *puVar14;
    if (uVar18 != 0) {
      if ((uVar18 & 1) == 0) {
        if ((*(uint *)(uVar18 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar14 = uVar18 - 1;
      }
    }
    puVar14 = puVar14 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98);
  return;
joined_r0x0001434dbc22:
  while (plVar13 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((plVar8 != (longlong *)0x0) &&
       (uVar3 = plVar8[1], uVar19 = uVar18, uVar17 = local_90, uVar3 != 0)) {
      do {
        uVar15 = *(ulonglong *)(*plVar8 + uVar19 * 8);
        if ((*(longlong *)(uVar15 + 0x38) != *(longlong *)(lVar2 + 0x38)) ||
           (((*(byte *)(uVar15 + 0x28) ^ *(byte *)(lVar2 + 0x28)) & 0xf) != 0)) {
          uVar11 = uVar18;
          if (uVar17 != 0) {
            do {
              lVar5 = *(longlong *)(local_98 + uVar11 * 8);
              if ((*(longlong *)(lVar5 + 0x38) == *(longlong *)(uVar15 + 0x38)) &&
                 (((*(byte *)(lVar5 + 0x28) ^ *(byte *)(uVar15 + 0x28)) & 0xf) == 0))
              goto LAB_1434dbd1b;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar17);
          }
          *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
          FUN_1434f0160(&local_98,local_80,local_90 + 1);
          puVar14 = (ulonglong *)(local_98 + (local_90 - 1) * 8);
          if (puVar14 != (ulonglong *)0x0) {
            *puVar14 = uVar15;
            *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
          }
          uVar17 = local_90;
          if (((uVar15 & 1) == 0) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
            FUN_1434ef880(uVar15);
            uVar17 = local_90;
          }
        }
LAB_1434dbd1b:
        uVar19 = uVar19 + 1;
        plVar13 = plVar6;
      } while (uVar19 < uVar3);
    }
    plVar6 = (longlong *)plVar13[9];
    plVar13 = plVar6;
  }
  goto LAB_1434dbd5c;
}



// FUNCTION 1434dbe90 FUN_1434dbe90 body=103 status=ok
// SIG undefined FUN_1434dbe90(void)

void FUN_1434dbe90(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cb460(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dbf00 FUN_1434dbf00 body=108 status=ok
// SIG undefined FUN_1434dbf00(void)

void FUN_1434dbf00(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x58) + 0xd0))
              ((longlong *)**(undefined8 **)(param_1 + 0x58),local_res8);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dbf80 FUN_1434dbf80 body=127 status=ok
// SIG undefined FUN_1434dbf80(void)

void FUN_1434dbf80(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_res8 [16];
  undefined4 local_res18 [4];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x58);
    *param_2 = 0xffffffff;
    pcVar5 = (char *)(**(code **)(*plVar3 + 0x148))(plVar3,local_res8,local_res18);
    if (*pcVar5 != '\0') {
      *param_2 = local_res18[0];
    }
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dc010 FUN_1434dc010 body=103 status=ok
// SIG undefined FUN_1434dc010(void)

void FUN_1434dc010(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc2a0(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc080 FUN_1434dc080 body=103 status=ok
// SIG undefined FUN_1434dc080(void)

void FUN_1434dc080(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc730(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc0f0 FUN_1434dc0f0 body=103 status=ok
// SIG undefined FUN_1434dc0f0(void)

void FUN_1434dc0f0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc7b0(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc160 FUN_1434dc160 body=103 status=ok
// SIG undefined FUN_1434dc160(void)

void FUN_1434dc160(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434ccf50(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc1d0 FUN_1434dc1d0 body=103 status=ok
// SIG undefined FUN_1434dc1d0(void)

void FUN_1434dc1d0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc930(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc240 FUN_1434dc240 body=129 status=ok
// SIG undefined FUN_1434dc240(void)

void FUN_1434dc240(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x58) + 0x40);
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
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dc2d0 FUN_1434dc2d0 body=103 status=ok
// SIG undefined FUN_1434dc2d0(void)

void FUN_1434dc2d0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cca10(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc340 FUN_1434dc340 body=103 status=ok
// SIG undefined FUN_1434dc340(void)

void FUN_1434dc340(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd1c0(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc3b0 FUN_1434dc3b0 body=119 status=ok
// SIG undefined FUN_1434dc3b0(void)

void FUN_1434dc3b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x58) + 0x1a8))
                      ((longlong *)**(undefined8 **)(param_1 + 0x58),param_3);
    FUN_1434f0700(param_2,uVar3);
    return;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar2 = FUN_1435c8e40(local_18,0x43e,uVar3);
  FUN_1435cbe70(uVar3,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc430 FUN_1434dc430 body=103 status=ok
// SIG undefined FUN_1434dc430(void)

void FUN_1434dc430(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd280(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc4a0 FUN_1434dc4a0 body=131 status=ok
// SIG undefined FUN_1434dc4a0(void)

void FUN_1434dc4a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x58);
    (**(code **)(*plVar3 + 0x1c0))(plVar3,param_3);
    FUN_1434f0700(param_2,plVar3);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434dc530 FUN_1434dc530 body=103 status=ok
// SIG undefined FUN_1434dc530(void)

void FUN_1434dc530(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd4f0(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc5a0 FUN_1434dc5a0 body=103 status=ok
// SIG undefined FUN_1434dc5a0(void)

void FUN_1434dc5a0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd5c0(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc610 FUN_1434dc610 body=103 status=ok
// SIG undefined FUN_1434dc610(void)

void FUN_1434dc610(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd790(**(undefined8 **)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434dc680 FUN_1434dc680 body=119 status=ok
// SIG undefined FUN_1434dc680(void)

undefined8 * FUN_1434dc680(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc890(**(undefined8 **)(param_1 + 0x58));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dc700 FUN_1434dc700 body=119 status=ok
// SIG undefined FUN_1434dc700(void)

undefined8 * FUN_1434dc700(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cb460(**(undefined8 **)(param_1 + 0x58));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dc780 FUN_1434dc780 body=128 status=ok
// SIG undefined FUN_1434dc780(void)

undefined8 * FUN_1434dc780(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x58) + 0xd0))
              ((longlong *)**(undefined8 **)(param_1 + 0x58),local_res8);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dc810 FUN_1434dc810 body=119 status=ok
// SIG undefined FUN_1434dc810(void)

undefined8 * FUN_1434dc810(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cc2a0(**(undefined8 **)(param_1 + 0x58));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dc890 FUN_1434dc890 body=119 status=ok
// SIG undefined FUN_1434dc890(void)

undefined8 * FUN_1434dc890(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cca10(**(undefined8 **)(param_1 + 0x58));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dc910 FUN_1434dc910 body=119 status=ok
// SIG undefined FUN_1434dc910(void)

undefined8 * FUN_1434dc910(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd1c0(**(undefined8 **)(param_1 + 0x58));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dc990 FUN_1434dc990 body=30 status=ok
// SIG undefined FUN_1434dc990(void)

undefined8 * FUN_1434dc990(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434dc3b0();
  return param_2;
}



// FUNCTION 1434dc9c0 FUN_1434dc9c0 body=119 status=ok
// SIG undefined FUN_1434dc9c0(void)

undefined8 * FUN_1434dc9c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x60) == 1) {
    FUN_1434cd280(**(undefined8 **)(param_1 + 0x58));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x43e,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1434dca40 FUN_1434dca40 body=30 status=ok
// SIG undefined FUN_1434dca40(void)

undefined8 * FUN_1434dca40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434dc4a0();
  return param_2;
}



// FUNCTION 1434dca70 FUN_1434dca70 body=51 status=ok
// SIG undefined FUN_1434dca70(void)

undefined8 * FUN_1434dca70(undefined8 *param_1)

{
  FUN_1435b93d0();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b1a6d0;
  *(undefined4 *)(param_1 + 0x12) = 0x13;
  return param_1;
}



// FUNCTION 1434dcab0 FUN_1434dcab0 body=192 status=ok
// SIG undefined FUN_1434dcab0(void)

void FUN_1434dcab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b1a610;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
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



// FUNCTION 1434dcb80 FUN_1434dcb80 body=196 status=ok
// SIG undefined FUN_1434dcb80(void)

longlong *
FUN_1434dcb80(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar5,param_3);
    *puVar5 = &PTR_ForEachChild_GC_145b1a610;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
  }
  *param_2 = (longlong)puVar5;
  FUN_1434f0700(puVar5 + 8,param_4);
  lVar2 = *param_2;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  lVar4 = *param_5;
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  *(longlong *)(lVar2 + 0x48) = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  }
  FUN_1434f0700(*param_2 + 0x50,param_6);
  return param_2;
}



// FUNCTION 1434dcc50 FUN_1434dcc50 body=238 status=ok
// SIG undefined FUN_1434dcc50(void)

void FUN_1434dcc50(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res18;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    uVar4 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x70))();
    uVar4 = FUN_1435b4fe0(uVar4);
    lVar2 = *(longlong *)(param_3 + 4);
    lVar5 = FUN_1435b3ae0(uVar4);
    if (lVar2 == lVar5) {
      FUN_143590250(param_4,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  if (((byte)*param_3 & 0x1f) == 0xc) {
    cVar3 = FUN_143592790(*(undefined8 *)(param_3 + 4));
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_3 + 4);
      local_res18 = **(longlong **)(param_2 + 0x10);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      FUN_1434d9e10(uVar4,&local_res18);
      FUN_143590250(param_4,&local_res18);
      local_10 = local_res18;
      goto LAB_1434dcd23;
    }
  }
  uVar4 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar4);
LAB_1434dcd23:
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434dcd50 FUN_1434dcd50 body=43 status=ok
// SIG undefined FUN_1434dcd50(void)

undefined8 * FUN_1434dcd50(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 0x13;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434dcd90 FUN_1434dcd90 body=255 status=ok
// SIG undefined FUN_1434dcd90(void)

undefined8 * FUN_1434dcd90(undefined8 *param_1,longlong param_2)

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
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b166a0);
    *(undefined4 *)(puVar3 + 0x12) = 0x13;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b166a0);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b1a6d0;
    *(undefined4 *)(puVar3 + 0x12) = 0x13;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b1a748;
  }
  return param_1;
}



// FUNCTION 1434dcea0 FUN_1434dcea0 body=33 status=ok
// SIG undefined FUN_1434dcea0(void)

undefined8 * FUN_1434dcea0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b1a748;
  return param_1;
}



// FUNCTION 1434dced0 FUN_1434dced0 body=151 status=ok
// SIG undefined FUN_1434dced0(void)

void FUN_1434dced0(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  if (((*param_3 == 1) &&
      (lVar1 = FUN_1435caba0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_4),
      *(int *)(lVar1 + 0x90) == 0x13)) && ((~(*(byte *)(lVar1 + 0x88) >> 5) & 1) != 0)) {
    FUN_143590140(param_2,param_4);
    return;
  }
  FUN_1435b39e0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434dcf70 FUN_1434dcf70 body=38 status=ok
// SIG undefined FUN_1434dcf70(void)

void FUN_1434dcf70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434dcf92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434dcfa0 FUN_1434dcfa0 body=119 status=ok
// SIG undefined FUN_1434dcfa0(void)

void FUN_1434dcfa0(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  FUN_1435b3e60(param_1,param_2);
  ppuVar1 = &PTR_FUN_145b16810;
  lVar2 = 2;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434dd020 FUN_1434dd020 body=218 status=ok
// SIG undefined FUN_1434dd020(void)

undefined8 * FUN_1434dd020(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b1a940;
  param_1[8] = 0;
  FUN_1432c2f70(param_1 + 9);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar1 = *(longlong *)(param_1[5] + 0x98);
  if (*(longlong *)(lVar1 + 0x108) != 0) {
    uVar4 = *(longlong *)(lVar1 + 0x108) - 1;
    uVar3 = FUN_143307740(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0x120) + (uVar4 >> 6) * 8) + 0x18
                             + (ulonglong)((uint)uVar4 & 0x3f) * 0xa0) + 0xa0) + 0x18,&local_res8);
    FUN_1432c4d80(param_1 + 9,uVar3);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  return param_1;
}


