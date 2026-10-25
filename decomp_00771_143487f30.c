// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143487f30 FUN_143487f30 body=169 status=ok
// SIG undefined FUN_143487f30(void)

void FUN_143487f30(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10) + 0x58);
  (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 0xf0))
            (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
  if (param_4 != '\0') {
    lVar2 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar2);
    if (lVar2 == 0) {
      return;
    }
    param_2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 + 8;
  }
  if (param_2 != 0) {
    FUN_143414640(param_2,*(undefined8 *)(param_1 + 8),param_3,param_4);
  }
  return;
}



// FUNCTION 143487fe0 FUN_143487fe0 body=152 status=ok
// SIG undefined FUN_143487fe0(void)

undefined8 FUN_143487fe0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10) + 0x58);
  (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 0xf0))
            (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
  if (param_3 != '\0') {
    lVar2 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar2);
    if (lVar2 == 0) {
      return 0;
    }
    param_2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + 8;
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
  }
  return 0;
}



// FUNCTION 143488080 FUN_143488080 body=33 status=ok
// SIG undefined FUN_143488080(void)

void FUN_143488080(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_14343bec0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),param_2,param_1,param_3,param_4);
  return;
}



// FUNCTION 1434880d0 FUN_1434880d0 body=27 status=ok
// SIG undefined FUN_1434880d0(void)

void FUN_1434880d0(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 143488100 FUN_143488100 body=27 status=ok
// SIG undefined FUN_143488100(void)

void FUN_143488100(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 143488130 FUN_143488130 body=65 status=ok
// SIG undefined FUN_143488130(void)

undefined4 FUN_143488130(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (*param_1 < 0x800001) {
    bVar1 = Scaleform::Alg::BitCount32();
    uVar2 = (uint)bVar1;
  }
  else {
    uVar2 = *param_1 - 0xffffe7;
  }
  if (uVar2 - 1 < 0x22) {
    return *(undefined4 *)(&DAT_145b13550 + (ulonglong)uVar2 * 4);
  }
  return 0x2e;
}



// FUNCTION 143488180 FUN_143488180 body=307 status=ok
// SIG undefined FUN_143488180(void)

void FUN_143488180(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 local_48 [64];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 9) {
      lVar7 = 0;
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = lVar7;
      }
      iVar4 = 10;
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar8 = (double)FUN_143411a90(lVar7);
        iVar4 = (int)dVar8;
      }
      uVar5 = FUN_143364c20(*(undefined8 *)(lVar6 + 0x68),local_48,0x40,iVar4);
      Scaleform::String::operator=(lVar6 + 0x70,uVar5);
      lVar6 = FUN_143360a60(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18
                               ) + 0x618),(*(ulonglong *)(lVar6 + 0x70) & 0xfffffffffffffffc) + 0xc)
      ;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      pbVar3 = *(byte **)(param_1 + 8);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 5;
      *(longlong *)(pbVar3 + 8) = lVar6;
      iVar4 = *(int *)(lVar6 + 0x18);
      *(int *)(lVar6 + 0x18) = iVar4;
      if (iVar4 == 0) {
        FUN_14335f920(lVar6);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Number");
  return;
}



// FUNCTION 1434882c0 FUN_1434882c0 body=164 status=ok
// SIG undefined FUN_1434882c0(void)

void FUN_1434882c0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte local_38 [48];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 9) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_38);
      uVar3 = FUN_143411a90(uVar3,*(undefined8 *)(param_1 + 0x30));
      pbVar1 = *(byte **)(param_1 + 8);
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(undefined8 *)(pbVar1 + 8) = uVar3;
      *pbVar1 = 3;
      if (4 < local_38[0]) {
        FUN_143411150(local_38);
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Number");
  return;
}



// FUNCTION 143488370 FUN_143488370 body=171 status=ok
// SIG undefined FUN_143488370(void)

void FUN_143488370(ulonglong *param_1)

{
  if (((*param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) && ((*param_1 & 0xfffffffffffff) != 0)
     ) {
    *param_1 = 0;
  }
  if (((param_1[2] & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     ((param_1[2] & 0xfffffffffffff) != 0)) {
    param_1[2] = 0;
  }
  if (((param_1[1] & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     ((param_1[1] & 0xfffffffffffff) != 0)) {
    param_1[1] = 0;
  }
  if (((param_1[3] & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     ((param_1[3] & 0xfffffffffffff) != 0)) {
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 143488430 FUN_143488430 body=27 status=ok
// SIG undefined FUN_143488430(void)

void FUN_143488430(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 143488460 FUN_143488460 body=111 status=ok
// SIG undefined FUN_143488460(void)

void FUN_143488460(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      ((*(ulonglong *)(param_1 + 0x30) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x30) != 0)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1434a26f0(param_1 + 0x20,param_1 + 0x18);
  return;
}



// FUNCTION 1434884e0 FUN_1434884e0 body=417 status=ok
// SIG undefined FUN_1434884e0(void)

void FUN_1434884e0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  longlong local_res18;
  byte local_38 [32];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + *(longlong *)(param_1 + 0x28) * 8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
  lVar5 = FUN_14341a5c0(*(longlong *)(param_1 + 0x10),*(undefined8 *)(lVar5 + 0x60),
                        *(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x18) + 0x140,0,0xffffffff);
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_res8[0] = 0;
    local_res18 = FUN_143360a90(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8) + 0x28) +
                                   0x18) + 0x618),(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                                *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    lVar4 = *(longlong *)(lVar3 + 0x20);
    uVar6 = FUN_143410c00(local_38,lVar5);
    (**(code **)(lVar4 + 0x18))
              (lVar3 + 0x20,*(undefined8 *)(param_1 + 0x10),&local_res18,uVar6,local_res8);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar6 = FUN_143410c00(local_38,lVar5);
    FUN_14345e390(lVar3,uVar6);
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar7 = *(longlong *)(param_1 + 0x28) + 1;
  if (uVar7 < *(ulonglong *)(param_1 + 0x28)) {
    uVar8 = uVar7;
    if (*(ulonglong *)(param_1 + 0x30) >> 1 <= uVar7) goto LAB_143488637;
  }
  else {
    if (uVar7 <= *(ulonglong *)(param_1 + 0x30)) goto LAB_143488637;
    uVar8 = (uVar7 >> 2) + uVar7;
  }
  FUN_1432bc070(param_1 + 0x20,param_1 + 0x20,uVar8);
LAB_143488637:
  *(ulonglong *)(param_1 + 0x28) = uVar7;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + -8 + uVar7 * 8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = lVar5;
  }
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return;
}



// FUNCTION 143488690 FUN_143488690 body=417 status=ok
// SIG undefined FUN_143488690(void)

void FUN_143488690(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  longlong local_res18;
  byte local_38 [32];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + *(longlong *)(param_1 + 0x28) * 8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
  lVar5 = FUN_14341a5c0(*(longlong *)(param_1 + 0x10),*(undefined8 *)(lVar5 + 0x60),
                        *(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x18) + 0x148,0,0xffffffff);
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_res8[0] = 0;
    local_res18 = FUN_143360a90(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8) + 0x28) +
                                   0x18) + 0x618),(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                                *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    lVar4 = *(longlong *)(lVar3 + 0x20);
    uVar6 = FUN_143410c00(local_38,lVar5);
    (**(code **)(lVar4 + 0x18))
              (lVar3 + 0x20,*(undefined8 *)(param_1 + 0x10),&local_res18,uVar6,local_res8);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar6 = FUN_143410c00(local_38,lVar5);
    FUN_14345e390(lVar3,uVar6);
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar7 = *(longlong *)(param_1 + 0x28) + 1;
  if (uVar7 < *(ulonglong *)(param_1 + 0x28)) {
    uVar8 = uVar7;
    if (*(ulonglong *)(param_1 + 0x30) >> 1 <= uVar7) goto LAB_1434887e7;
  }
  else {
    if (uVar7 <= *(ulonglong *)(param_1 + 0x30)) goto LAB_1434887e7;
    uVar8 = (uVar7 >> 2) + uVar7;
  }
  FUN_1432bc070(param_1 + 0x20,param_1 + 0x20,uVar8);
LAB_1434887e7:
  *(ulonglong *)(param_1 + 0x28) = uVar7;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + -8 + uVar7 * 8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = lVar5;
  }
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return;
}



// FUNCTION 143488840 FUN_143488840 body=530 status=ok
// SIG undefined FUN_143488840(void)

void FUN_143488840(longlong param_1,ulonglong *param_2,ulonglong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  undefined1 local_res20 [8];
  byte local_58 [8];
  double local_50;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + *(longlong *)(param_1 + 0x28) * 8);
  local_58[0] = 0;
  if (param_4 == 0) {
    FUN_143411150(local_58);
    local_58[0] = 0;
  }
  else if (param_4 == 1) {
    FUN_143411150(local_58);
    local_58[0] = 1;
  }
  else if (param_4 == 2) {
    iVar4 = strncmp((char *)((*param_3 & 0xfffffffffffffffc) + 0xc),"true",4);
    FUN_143411150(local_58);
    local_58[0] = 2;
    local_50 = (double)CONCAT71(local_50._1_7_,iVar4 == 0);
  }
  else if (param_4 == 5) {
    local_50 = atof((char *)((*param_3 & 0xfffffffffffffffc) + 0xc));
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    local_58[0] = 3;
  }
  else if (param_4 == 6) {
    local_50 = (double)FUN_143360a90(*(undefined8 *)
                                      (*(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8) +
                                          0x28) + 0x18) + 0x618),
                                     (longlong)(*param_3 & 0xfffffffffffffffc) + 0xc,
                                     *(ulonglong *)(*param_3 & 0xfffffffffffffffc) &
                                     0x7fffffffffffffff);
    *(int *)((longlong)local_50 + 0x18) = *(int *)((longlong)local_50 + 0x18) + 1;
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    local_58[0] = 5;
    iVar4 = *(int *)((longlong)local_50 + 0x18);
    *(int *)((longlong)local_50 + 0x18) = iVar4;
    if (iVar4 == 0) {
      FUN_14335f920(local_50);
    }
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_res20[0] = 0;
    local_res8 = FUN_143360a90(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8) + 0x28) +
                                  0x18) + 0x618),(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                               *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    plVar1 = (longlong *)(lVar3 + 0x20);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(undefined8 *)(param_1 + 0x10),&local_res8,local_58,local_res20);
    piVar2 = (int *)(local_res8 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_14345e390(lVar3,local_58);
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  return;
}



// FUNCTION 143488a60 FUN_143488a60 body=73 status=ok
// SIG undefined FUN_143488a60(void)

void FUN_143488a60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1434a3610(param_1 + 0x20,*(longlong *)(param_1 + 0x28) + -1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + *(longlong *)(param_1 + 0x28) * 8);
  iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))(lVar1 + 0x20);
  *(bool *)(param_1 + 0x38) = iVar2 == 7;
  return;
}



// FUNCTION 143488ad0 FUN_143488ad0 body=27 status=ok
// SIG undefined FUN_143488ad0(void)

void FUN_143488ad0(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 143488b00 FUN_143488b00 body=64 status=ok
// SIG undefined FUN_143488b00(void)

void FUN_143488b00(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b13998;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143488b50 FUN_143488b50 body=360 status=ok
// SIG undefined FUN_143488b50(void)

void FUN_143488b50(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  this = (RefCountImpl *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  cVar1 = FUN_1432badc0(param_2);
  if (cVar1 == '\0') {
    this = (RefCountImpl *)
           (**(code **)(*param_3 + 8))(param_3,(*param_2 & 0xfffffffffffffffc) + 0xc,0x21,0x1b6);
  }
  else {
    cVar1 = FUN_1432bae80(&local_28,param_2,1,0,0,0,0);
    if ((cVar1 == '\0') || (local_20 == 0)) goto LAB_143488c7b;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0);
    if (lVar3 != 0) {
      this = (RefCountImpl *)FUN_1432e1570(lVar3,param_2,local_28,local_20 & 0xffffffff);
    }
  }
  if ((this != (RefCountImpl *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)this + 0x10))(this), cVar1 != '\0')) {
    iVar2 = (**(code **)(*(longlong *)this + 0x30))(this);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)(iVar2 + 2),0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      (**(code **)(*(longlong *)this + 0x50))(this,uVar4,*(undefined4 *)(param_1 + 0x20));
      *(undefined1 *)((longlong)(*(int *)(param_1 + 0x20) + 1) + *(longlong *)(param_1 + 0x18)) = 0;
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18)) = 0;
    }
  }
LAB_143488c7b:
  if (local_28 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 143488cc0 FUN_143488cc0 body=309 status=ok
// SIG undefined FUN_143488cc0(void)

void FUN_143488cc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  short *psVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  short *psVar5;
  
  psVar1 = *(short **)(param_1 + 0x18);
  if (psVar1 != (short *)0x0) {
    iVar4 = *(int *)(param_1 + 0x20);
    if (*psVar1 == -0x101) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      iVar4 = iVar4 / 2 + -1;
      psVar5 = psVar1 + 1;
    }
    else if (*psVar1 == -2) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      psVar5 = psVar1 + 1;
      lVar3 = 0;
      iVar4 = iVar4 / 2 + -1;
      if (0 < iVar4) {
        do {
          psVar1[lVar3 + 1] = psVar1[lVar3 + 1] << 8 | (ushort)psVar1[lVar3 + 1] >> 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar4);
      }
    }
    else {
      psVar5 = psVar1;
      if ((((2 < iVar4) && ((char)*psVar1 == -0x11)) && (*(char *)((longlong)psVar1 + 1) == -0x45))
         && ((char)psVar1[1] == -0x41)) {
        psVar5 = (short *)((longlong)psVar1 + 3);
        iVar4 = iVar4 + -3;
      }
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar2 = thunk_FUN_143dee950(param_3 + 0x68,psVar5,(longlong)iVar4);
    }
    else {
      uVar2 = FUN_143dee3d0();
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_143433670(param_3,param_2,uVar2);
    return;
  }
  FUN_143433670(param_3,param_2,0);
  return;
}



// FUNCTION 143488e00 FUN_143488e00 body=129 status=ok
// SIG undefined FUN_143488e00(void)

void FUN_143488e00(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar5 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  uVar4 = FUN_143411a90(lVar5,lVar2);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(ulonglong *)(pbVar3 + 8) = uVar4 & 0x7fffffffffffffff;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143488e90 FUN_143488e90 body=127 status=ok
// SIG undefined FUN_143488e90(void)

void FUN_143488e90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143488f10 FUN_143488f10 body=127 status=ok
// SIG undefined FUN_143488f10(void)

void FUN_143488f10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143488f90 FUN_143488f90 body=127 status=ok
// SIG undefined FUN_143488f90(void)

void FUN_143488f90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489010 FUN_143489010 body=127 status=ok
// SIG undefined FUN_143489010(void)

void FUN_143489010(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489090 FUN_143489090 body=127 status=ok
// SIG undefined FUN_143489090(void)

void FUN_143489090(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489110 FUN_143489110 body=127 status=ok
// SIG undefined FUN_143489110(void)

void FUN_143489110(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489190 FUN_143489190 body=127 status=ok
// SIG undefined FUN_143489190(void)

void FUN_143489190(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489210 FUN_143489210 body=127 status=ok
// SIG undefined FUN_143489210(void)

void FUN_143489210(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489290 FUN_143489290 body=127 status=ok
// SIG undefined FUN_143489290(void)

void FUN_143489290(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489310 FUN_143489310 body=127 status=ok
// SIG undefined FUN_143489310(void)

void FUN_143489310(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489390 FUN_143489390 body=127 status=ok
// SIG undefined FUN_143489390(void)

void FUN_143489390(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143489410 FUN_143489410 body=216 status=ok
// SIG undefined FUN_143489410(void)

void FUN_143489410(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  double _X;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar4 = 0;
  uVar5 = *(uint *)(param_1 + 0x3c);
  lVar3 = lVar4;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar3 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  dVar6 = (double)FUN_143411a90(lVar3,lVar1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar5 = *(int *)(param_1 + 0x3c) - 1;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  _X = (double)FUN_143411a90(lVar4);
  dVar6 = _guard_xfg_dispatch_icall_nop(dVar6,_X);
  pbVar2 = *(byte **)(param_1 + 8);
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *(double *)(pbVar2 + 8) = dVar6;
  *pbVar2 = 3;
  return;
}



// FUNCTION 1434894f0 FUN_1434894f0 body=206 status=ok
// SIG undefined FUN_1434894f0(void)

void FUN_1434894f0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar4 = 0;
  uVar5 = *(uint *)(param_1 + 0x3c);
  lVar3 = lVar4;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar3 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  dVar6 = (double)FUN_143411a90(lVar3,lVar1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar5 = *(int *)(param_1 + 0x3c) - 1;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  dVar7 = (double)FUN_143411a90(lVar4);
  pbVar2 = *(byte **)(param_1 + 8);
  if (dVar6 <= dVar7) {
    dVar6 = dVar7;
  }
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *(double *)(pbVar2 + 8) = dVar6;
  *pbVar2 = 3;
  return;
}



// FUNCTION 1434895c0 FUN_1434895c0 body=206 status=ok
// SIG undefined FUN_1434895c0(void)

void FUN_1434895c0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar4 = 0;
  uVar5 = *(uint *)(param_1 + 0x3c);
  lVar3 = lVar4;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar3 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  dVar6 = (double)FUN_143411a90(lVar3,lVar1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar5 = *(int *)(param_1 + 0x3c) - 1;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  dVar7 = (double)FUN_143411a90(lVar4);
  pbVar2 = *(byte **)(param_1 + 8);
  if (dVar7 <= dVar6) {
    dVar6 = dVar7;
  }
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *(double *)(pbVar2 + 8) = dVar6;
  *pbVar2 = 3;
  return;
}



// FUNCTION 143489690 FUN_143489690 body=216 status=ok
// SIG undefined FUN_143489690(void)

void FUN_143489690(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  double _Y;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar4 = 0;
  uVar5 = *(uint *)(param_1 + 0x3c);
  lVar3 = lVar4;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar3 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  dVar6 = (double)FUN_143411a90(lVar3,lVar1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar5 = *(int *)(param_1 + 0x3c) - 1;
  if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  _Y = (double)FUN_143411a90(lVar4);
  dVar6 = _guard_xfg_dispatch_icall_nop(dVar6,_Y);
  pbVar2 = *(byte **)(param_1 + 8);
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *(double *)(pbVar2 + 8) = dVar6;
  *pbVar2 = 3;
  return;
}



// FUNCTION 1434897a0 FUN_1434897a0 body=334 status=ok
// SIG undefined FUN_1434897a0(void)

void FUN_1434897a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x148);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143461270;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x148);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x148,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 1434898f0 FUN_1434898f0 body=334 status=ok
// SIG undefined FUN_1434898f0(void)

void FUN_1434898f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x150);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14345cbd0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x150);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x150,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 143489a40 FUN_143489a40 body=334 status=ok
// SIG undefined FUN_143489a40(void)

void FUN_143489a40(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x158);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143461e40;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x158);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x158,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 143489b90 FUN_143489b90 body=334 status=ok
// SIG undefined FUN_143489b90(void)

void FUN_143489b90(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x160);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143462870;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x160);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x160,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 143489ce0 FUN_143489ce0 body=334 status=ok
// SIG undefined FUN_143489ce0(void)

void FUN_143489ce0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x180);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143441150;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x180);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x180,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 143489e30 FUN_143489e30 body=334 status=ok
// SIG undefined FUN_143489e30(void)

void FUN_143489e30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x188);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14344ab50;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x188);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x188,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 143489f80 FUN_143489f80 body=334 status=ok
// SIG undefined FUN_143489f80(void)

void FUN_143489f80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1b8);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143450bb0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1b8);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1b8,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a0d0 FUN_14348a0d0 body=334 status=ok
// SIG undefined FUN_14348a0d0(void)

void FUN_14348a0d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1c0);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_1434783a0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1c0);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1c0,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a220 FUN_14348a220 body=334 status=ok
// SIG undefined FUN_14348a220(void)

void FUN_14348a220(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1c8);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14345a6a0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1c8);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1c8,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a370 FUN_14348a370 body=334 status=ok
// SIG undefined FUN_14348a370(void)

void FUN_14348a370(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1d0);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143465260;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1d0);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1d0,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a4c0 FUN_14348a4c0 body=334 status=ok
// SIG undefined FUN_14348a4c0(void)

void FUN_14348a4c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1d8);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143469a90;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1d8);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1d8,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a610 FUN_14348a610 body=334 status=ok
// SIG undefined FUN_14348a610(void)

void FUN_14348a610(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1e0);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_1434710d0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1e0);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1e0,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a760 FUN_14348a760 body=334 status=ok
// SIG undefined FUN_14348a760(void)

void FUN_14348a760(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1f0);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_1434acf40;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1f0);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1f0,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348a8b0 FUN_14348a8b0 body=334 status=ok
// SIG undefined FUN_14348a8b0(void)

void FUN_14348a8b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1f8);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_1434aa000;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1f8);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1f8,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348aa00 FUN_14348aa00 body=334 status=ok
// SIG undefined FUN_14348aa00(void)

void FUN_14348aa00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x200);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143463330;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x200);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x200,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348ab50 FUN_14348ab50 body=334 status=ok
// SIG undefined FUN_14348ab50(void)

void FUN_14348ab50(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x210);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14346cc90;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x210);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x210,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348aca0 FUN_14348aca0 body=334 status=ok
// SIG undefined FUN_14348aca0(void)

void FUN_14348aca0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x218);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14346d850;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x218);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x218,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348adf0 FUN_14348adf0 body=334 status=ok
// SIG undefined FUN_14348adf0(void)

void FUN_14348adf0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x220);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143431b60;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x220);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x220,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348af40 FUN_14348af40 body=334 status=ok
// SIG undefined FUN_14348af40(void)

void FUN_14348af40(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x228);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143456d40;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x228);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x228,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b090 FUN_14348b090 body=334 status=ok
// SIG undefined FUN_14348b090(void)

void FUN_14348b090(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x230);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_1434332b0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x230);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x230,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b1e0 FUN_14348b1e0 body=334 status=ok
// SIG undefined FUN_14348b1e0(void)

void FUN_14348b1e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x238);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143474730;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x238);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x238,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b330 FUN_14348b330 body=334 status=ok
// SIG undefined FUN_14348b330(void)

void FUN_14348b330(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x240);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143435350;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x240);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x240,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b480 FUN_14348b480 body=334 status=ok
// SIG undefined FUN_14348b480(void)

void FUN_14348b480(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x260);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143478b20;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x260);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x260,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b5d0 FUN_14348b5d0 body=334 status=ok
// SIG undefined FUN_14348b5d0(void)

void FUN_14348b5d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x268);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14347a200;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x268);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x268,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b720 FUN_14348b720 body=334 status=ok
// SIG undefined FUN_14348b720(void)

void FUN_14348b720(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x270);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14347b770;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x270);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x270,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b870 FUN_14348b870 body=334 status=ok
// SIG undefined FUN_14348b870(void)

void FUN_14348b870(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x278);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14347c630;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x278);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x278,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348b9c0 FUN_14348b9c0 body=334 status=ok
// SIG undefined FUN_14348b9c0(void)

void FUN_14348b9c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x280);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14347e060;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x280);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x280,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348bb10 FUN_14348bb10 body=334 status=ok
// SIG undefined FUN_14348bb10(void)

void FUN_14348bb10(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x288);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14347f1a0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x288);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x288,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348bc60 FUN_14348bc60 body=334 status=ok
// SIG undefined FUN_14348bc60(void)

void FUN_14348bc60(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x290);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_1434771d0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x290);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x290,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348bdb0 FUN_14348bdb0 body=334 status=ok
// SIG undefined FUN_14348bdb0(void)

void FUN_14348bdb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x298);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143475cd0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x298);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x298,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348bf00 FUN_14348bf00 body=334 status=ok
// SIG undefined FUN_14348bf00(void)

void FUN_14348bf00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 400);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14344c200;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 400);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 400,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348c050 FUN_14348c050 body=334 status=ok
// SIG undefined FUN_14348c050(void)

void FUN_14348c050(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x198);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143456170;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x198);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x198,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348c1a0 FUN_14348c1a0 body=334 status=ok
// SIG undefined FUN_14348c1a0(void)

void FUN_14348c1a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1a0);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_14344f2f0;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1a0);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1a0,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348c2f0 FUN_14348c2f0 body=334 status=ok
// SIG undefined FUN_14348c2f0(void)

void FUN_14348c2f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1a8);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143459450;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1a8);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1a8,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348c440 FUN_14348c440 body=334 status=ok
// SIG undefined FUN_14348c440(void)

void FUN_14348c440(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_58;
  longlong local_50;
  longlong *local_48;
  code **local_40;
  
  lVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1b0);
  lVar3 = lVar5;
  if ((lVar2 != 0) &&
     (lVar1 = FUN_143493f50(param_1 + 0x20,plVar4,
                            (ulonglong)*(uint *)(*plVar4 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < lVar1)) {
    lVar3 = lVar2 + 0x18 + lVar1 * 0x20;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = lVar5;
  }
  if (lVar2 == 0) {
    local_50 = 0;
    local_58 = FUN_143454f90;
    local_40 = &local_58;
    local_48 = plVar4;
    FUN_143492840(param_1 + 0x20,param_1 + 0x20,&local_48,*(undefined4 *)(*plVar4 + 0x1c));
    if ((local_50 != 0) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_res8[0] = 0;
    local_48 = (longlong *)CONCAT71(local_48._1_7_,0xb);
    local_40 = *(code ***)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1b0);
    *(int *)((longlong)local_40 + 0x18) = *(int *)((longlong)local_40 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
              ((longlong *)(param_3 + 0x20),param_2,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x1b0,&local_48,local_res8);
    if (4 < (byte)local_48) {
      FUN_143411150(&local_48);
    }
  }
  return;
}



// FUNCTION 14348c590 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::ArrayObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  ArrayObject::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xa0,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xb8,param_2);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348c650 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::GASIme,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x70,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x88,param_2);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xa0) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348c710 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::BevelFilterObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x78,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x90,param_2);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xa8) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348c7d0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::XmlNodeObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x80,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x98,param_2);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xb0) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348c890 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::TransformObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x98,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xb0,param_2);
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 200) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348c950 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::ArrayObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xa0,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xb8,param_2);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348ca10 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::TextFormatObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xe8,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x100,param_2);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x118) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x118) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348cad0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::TransformObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  TransformObject::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x98,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xb0,param_2);
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 200) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348cb90 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=297 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::ArrayObject::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_14348cfd0();
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      pcVar3 = *(char **)(*(longlong *)(param_1 + 0x70) + uVar5 * 8);
      if (pcVar3 != (char *)0x0) {
        cVar1 = *pcVar3;
        if (cVar1 == '\b') {
          FunctionRefBase::
          ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
                    (pcVar3 + 8,param_2);
        }
        else if ((cVar1 == '\x06') && (lVar4 = *(longlong *)(pcVar3 + 8), lVar4 != 0)) {
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
          if ((*(uint *)(lVar4 + 0x18) >> 0x1b & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar4;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar4;
            *(longlong *)(param_2 + 0x60) = lVar4;
            *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 0x8000000;
          }
        }
        else if (cVar1 == '\t') {
          lVar4 = *(longlong *)(pcVar3 + 8);
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
          if ((*(uint *)(lVar4 + 0x18) >> 0x1b & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar4;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar4;
            *(longlong *)(param_2 + 0x60) = lVar4;
            *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 0x8000000;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}



// FUNCTION 14348ccc0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=171 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::FunctionRefBase::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  lVar1 = param_1[1];
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  return;
}



// FUNCTION 14348cd70 FUN_14348cd70 body=458 status=ok
// SIG undefined FUN_14348cd70(void)

void FUN_14348cd70(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)(param_1 + 0x20);
  lVar5 = *plVar8;
  if (lVar5 == 0) {
    plVar8 = (longlong *)0x0;
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    plVar4 = (longlong *)(lVar5 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 6;
    } while (uVar7 <= *(ulonglong *)(lVar5 + 8));
  }
  do {
    if (((plVar8 == (longlong *)0x0) || (lVar5 = *plVar8, lVar5 == 0)) ||
       (*(longlong *)(lVar5 + 8) < (longlong)uVar7)) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      if ((lVar5 != 0) &&
         (uVar3 = *(int *)(lVar5 + 0x18) - 1, *(uint *)(lVar5 + 0x18) = uVar3,
         (uVar3 >> 0x1b & 1) == 0)) {
        *(undefined8 *)(lVar5 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar5;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar5;
        *(longlong *)(param_2 + 0x60) = lVar5;
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) | 0x8000000;
      }
      FUN_14348d610(param_1 + 0x48,param_2);
      FUN_14348d610(param_1 + 0x68,param_2);
      return;
    }
    lVar5 = lVar5 + uVar7 * 0x30;
    cVar1 = *(char *)(lVar5 + 0x20);
    if (cVar1 == '\b') {
      Scaleform::GFx::AS2::FunctionRefBase::
      ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
                (lVar5 + 0x28,param_2);
    }
    else {
      if ((cVar1 != '\x06') || (lVar6 = *(longlong *)(lVar5 + 0x28), lVar6 == 0)) {
        if (cVar1 != '\t') goto LAB_14348ce74;
        lVar6 = *(longlong *)(lVar5 + 0x28);
      }
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
      if ((*(uint *)(lVar6 + 0x18) >> 0x1b & 1) == 0) {
        *(undefined8 *)(lVar6 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar6;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar6;
        *(longlong *)(param_2 + 0x60) = lVar6;
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 0x8000000;
      }
    }
LAB_14348ce74:
    uVar2 = *(ulonglong *)(*plVar8 + 8);
    if (((longlong)uVar7 <= (longlong)uVar2) && (uVar7 = uVar7 + 1, uVar7 <= uVar2)) {
      plVar4 = (longlong *)(uVar7 * 0x30 + 0x10 + *plVar8);
      do {
        if (*plVar4 != -2) break;
        uVar7 = uVar7 + 1;
        plVar4 = plVar4 + 6;
      } while (uVar7 <= uVar2);
    }
  } while( true );
}



// FUNCTION 14348cf40 FUN_14348cf40 body=133 status=ok
// SIG undefined FUN_14348cf40(void)

void FUN_14348cf40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  Scaleform::GFx::AS2::FunctionRefBase::
  ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(param_1 + 0x90);
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  FUN_14348cfd0(param_1,param_2);
  return;
}



// FUNCTION 14348cfd0 FUN_14348cfd0 body=793 status=ok
// SIG undefined FUN_14348cfd0(void)

void FUN_14348cfd0(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)(param_1 + 0x38);
  lVar4 = *plVar9;
  uVar8 = 0;
  if (lVar4 == 0) {
    plVar9 = (longlong *)0x0;
    uVar7 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar4 + 0x10);
    uVar7 = uVar8;
    do {
      if (*plVar5 != -2) break;
      uVar7 = uVar7 + 1;
      plVar5 = plVar5 + 6;
    } while (uVar7 <= *(ulonglong *)(lVar4 + 8));
  }
  do {
    if (((plVar9 == (longlong *)0x0) || (lVar4 = *plVar9, lVar4 == 0)) ||
       (*(longlong *)(lVar4 + 8) < (longlong)uVar7)) break;
    lVar4 = lVar4 + uVar7 * 0x30;
    cVar1 = *(char *)(lVar4 + 0x20);
    if (cVar1 == '\b') {
      Scaleform::GFx::AS2::FunctionRefBase::
      ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
                (lVar4 + 0x28,param_2);
    }
    else {
      if ((cVar1 != '\x06') || (lVar6 = *(longlong *)(lVar4 + 0x28), lVar6 == 0)) {
        if (cVar1 != '\t') goto LAB_14348d0df;
        lVar6 = *(longlong *)(lVar4 + 0x28);
      }
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
      if ((*(uint *)(lVar6 + 0x18) >> 0x1b & 1) == 0) {
        *(undefined8 *)(lVar6 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar6;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar6;
        *(longlong *)(param_2 + 0x60) = lVar6;
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 0x8000000;
      }
    }
LAB_14348d0df:
    uVar2 = *(ulonglong *)(*plVar9 + 8);
    if (((longlong)uVar7 <= (longlong)uVar2) && (uVar7 = uVar7 + 1, uVar7 <= uVar2)) {
      plVar5 = (longlong *)(*plVar9 + 0x10 + uVar7 * 0x30);
      do {
        if (*plVar5 != -2) break;
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 6;
      } while (uVar7 <= uVar2);
    }
  } while( true );
  Scaleform::GFx::AS2::FunctionRefBase::
  ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x40,param_2);
  plVar9 = *(longlong **)(param_1 + 0x58);
  if (plVar9 == (longlong *)0x0) {
LAB_14348d27b:
    lVar4 = *(longlong *)(param_1 + 0x30);
    if ((lVar4 != 0) &&
       (uVar3 = *(int *)(lVar4 + 0x18) - 1, *(uint *)(lVar4 + 0x18) = uVar3,
       (uVar3 >> 0x1b & 1) == 0)) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
      *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar4;
      *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar4;
      *(longlong *)(param_2 + 0x60) = lVar4;
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 0x8000000;
    }
    return;
  }
  lVar4 = *plVar9;
  if (lVar4 == 0) {
    plVar9 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar4 + 0x10);
    do {
      if (*plVar5 != -2) break;
      uVar8 = uVar8 + 1;
      plVar5 = plVar5 + 9;
    } while (uVar8 <= *(ulonglong *)(lVar4 + 8));
  }
  do {
    if (((plVar9 == (longlong *)0x0) || (lVar4 = *plVar9, lVar4 == 0)) ||
       (*(longlong *)(lVar4 + 8) < (longlong)uVar8)) goto LAB_14348d27b;
    lVar4 = lVar4 + uVar8 * 0x48;
    Scaleform::GFx::AS2::FunctionRefBase::
    ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
              (lVar4 + 0x20,param_2);
    cVar1 = *(char *)(lVar4 + 0x38);
    if (cVar1 == '\b') {
      Scaleform::GFx::AS2::FunctionRefBase::
      ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
                (lVar4 + 0x40,param_2);
    }
    else {
      if ((cVar1 != '\x06') || (lVar6 = *(longlong *)(lVar4 + 0x40), lVar6 == 0)) {
        if (cVar1 != '\t') goto LAB_14348d238;
        lVar6 = *(longlong *)(lVar4 + 0x40);
      }
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
      if ((*(uint *)(lVar6 + 0x18) >> 0x1b & 1) == 0) {
        *(undefined8 *)(lVar6 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar6;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar6;
        *(longlong *)(param_2 + 0x60) = lVar6;
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 0x8000000;
      }
    }
LAB_14348d238:
    uVar7 = *(ulonglong *)(*plVar9 + 8);
    if (((longlong)uVar8 <= (longlong)uVar7) && (uVar8 = uVar8 + 1, uVar8 <= uVar7)) {
      plVar5 = (longlong *)(*plVar9 + uVar8 * 0x48 + 0x10);
      do {
        if (*plVar5 != -2) break;
        uVar8 = uVar8 + 1;
        plVar5 = plVar5 + 9;
      } while (uVar8 <= uVar7);
    }
  } while( true );
}



// FUNCTION 14348d2f0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=297 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::SharedObjectCtorFunction::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  FUN_14348cfd0();
  lVar1 = *(longlong *)(param_1 + 0x70);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    plVar5 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar4)) {
        return;
      }
      lVar1 = *(longlong *)(uVar4 * 0x20 + 0x28 + lVar1);
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
      if ((*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0) {
        *(undefined8 *)(lVar1 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
        *(longlong *)(param_2 + 0x60) = lVar1;
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
      }
      uVar2 = *(ulonglong *)(*plVar5 + 8);
    } while (((longlong)uVar2 < (longlong)uVar4) || (uVar4 = uVar4 + 1, uVar2 < uVar4));
    plVar3 = (longlong *)(uVar4 * 0x20 + 0x10 + *plVar5);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= uVar2);
  } while( true );
}



// FUNCTION 14348d420 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=208 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::SuperObject::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14348cfd0();
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x80,param_2);
  return;
}



// FUNCTION 14348d4f0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=281 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::TransformObject::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14348cfd0();
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  if ((lVar1 != 0) &&
     (*(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1,
     (*(uint *)(lVar1 + 0x18) >> 0x1b & 1) == 0)) {
    *(undefined8 *)(lVar1 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x8000000;
  }
  return;
}



// FUNCTION 14348d610 FUN_14348d610 body=121 status=ok
// SIG undefined FUN_14348d610(void)

void FUN_14348d610(char *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\b') {
    Scaleform::GFx::AS2::FunctionRefBase::
    ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(param_1 + 8);
    return;
  }
  if ((cVar1 == '\x06') && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_14349d900(param_2);
    return;
  }
  if (cVar1 == '\t') {
    lVar2 = *(longlong *)(param_1 + 8);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
    if ((*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x10) =
           *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
      *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
      *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
      *(longlong *)(param_2 + 0x60) = lVar2;
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
    }
  }
  return;
}



// FUNCTION 14348d690 FUN_14348d690 body=200 status=ok
// SIG undefined FUN_14348d690(void)

void FUN_14348d690(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348dd30();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348d760 FUN_14348d760 body=184 status=ok
// SIG undefined FUN_14348d760(void)

void FUN_14348d760(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0xa0) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348d820 FUN_14348d820 body=200 status=ok
// SIG undefined FUN_14348d820(void)

void FUN_14348d820(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0xa8) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348d8f0 FUN_14348d8f0 body=200 status=ok
// SIG undefined FUN_14348d8f0(void)

void FUN_14348d8f0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0xb0) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348d9c0 FUN_14348d9c0 body=200 status=ok
// SIG undefined FUN_14348d9c0(void)

void FUN_14348d9c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 200) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348da90 FUN_14348da90 body=200 status=ok
// SIG undefined FUN_14348da90(void)

void FUN_14348da90(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348db60 FUN_14348db60 body=200 status=ok
// SIG undefined FUN_14348db60(void)

void FUN_14348db60(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x118) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0x118) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348dc30 FUN_14348dc30 body=248 status=ok
// SIG undefined FUN_14348dc30(void)

void FUN_14348dc30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 200) + uVar2 * 8) != 0) {
          FUN_14349d950(param_2);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348dd30 FUN_14348dd30 body=160 status=ok
// SIG undefined FUN_14348dd30(void)

void FUN_14348dd30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_14348e050();
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      pcVar3 = *(char **)(*(longlong *)(param_1 + 0x70) + uVar5 * 8);
      if (pcVar3 != (char *)0x0) {
        cVar1 = *pcVar3;
        if (cVar1 == '\b') {
          if (*(longlong *)(pcVar3 + 8) != 0) {
            FUN_14349d950(param_2);
          }
          lVar4 = *(longlong *)(pcVar3 + 0x10);
          if (lVar4 == 0) goto LAB_14348ddad;
        }
        else if ((cVar1 != '\x06') || (lVar4 = *(longlong *)(pcVar3 + 8), lVar4 == 0)) {
          if (cVar1 != '\t') goto LAB_14348ddad;
          lVar4 = *(longlong *)(pcVar3 + 8);
        }
        FUN_14349d950(param_2,lVar4);
      }
LAB_14348ddad:
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}



// FUNCTION 14348ddd0 FUN_14348ddd0 body=60 status=ok
// SIG undefined FUN_14348ddd0(void)

void FUN_14348ddd0(longlong *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_14349d950(param_2);
  }
  if (param_1[1] != 0) {
    FUN_14349d950(param_2);
  }
  return;
}



// FUNCTION 14348de10 FUN_14348de10 body=476 status=ok
// SIG undefined FUN_14348de10(void)

void FUN_14348de10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)(param_1 + 0x20);
  lVar5 = *plVar7;
  if (lVar5 == 0) {
    plVar7 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar4 = (longlong *)(lVar5 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 6;
    } while (uVar6 <= *(ulonglong *)(lVar5 + 8));
  }
  do {
    if (((plVar7 == (longlong *)0x0) || (lVar5 = *plVar7, lVar5 == 0)) ||
       (*(longlong *)(lVar5 + 8) < (longlong)uVar6)) break;
    lVar1 = uVar6 * 0x30 + lVar5;
    cVar2 = *(char *)(uVar6 * 0x30 + 0x20 + lVar5);
    if (cVar2 == '\b') {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FUN_14349d950(param_2);
      }
      lVar5 = *(longlong *)(lVar1 + 0x30);
      if (lVar5 != 0) goto LAB_14348dee5;
    }
    else {
      if ((cVar2 != '\x06') || (lVar5 = *(longlong *)(lVar1 + 0x28), lVar5 == 0)) {
        if (cVar2 != '\t') goto LAB_14348deed;
        lVar5 = *(longlong *)(lVar1 + 0x28);
      }
LAB_14348dee5:
      FUN_14349d950(param_2,lVar5);
    }
LAB_14348deed:
    uVar3 = *(ulonglong *)(*plVar7 + 8);
    if (((longlong)uVar6 <= (longlong)uVar3) && (uVar6 = uVar6 + 1, uVar6 <= uVar3)) {
      plVar4 = (longlong *)(*plVar7 + 0x10 + uVar6 * 0x30);
      do {
        if (*plVar4 != -2) break;
        uVar6 = uVar6 + 1;
        plVar4 = plVar4 + 6;
      } while (uVar6 <= uVar3);
    }
  } while( true );
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14349d950(param_2);
  }
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 == '\b') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14349d950(param_2);
    }
    lVar5 = *(longlong *)(param_1 + 0x58);
    if (lVar5 == 0) goto LAB_14348df90;
  }
  else if ((cVar2 != '\x06') || (lVar5 = *(longlong *)(param_1 + 0x50), lVar5 == 0)) {
    if (cVar2 != '\t') goto LAB_14348df90;
    lVar5 = *(longlong *)(param_1 + 0x50);
  }
  FUN_14349d950(param_2,lVar5);
LAB_14348df90:
  cVar2 = *(char *)(param_1 + 0x68);
  if (cVar2 == '\b') {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14349d950(param_2);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_14349d950(param_2);
      return;
    }
  }
  else {
    if ((cVar2 != '\x06') || (lVar5 = *(longlong *)(param_1 + 0x70), lVar5 == 0)) {
      if (cVar2 != '\t') {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    FUN_14349d950(param_2,lVar5);
  }
  return;
}



// FUNCTION 14348dff0 FUN_14348dff0 body=94 status=ok
// SIG undefined FUN_14348dff0(void)

void FUN_14348dff0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d950(param_2);
  }
  FUN_14348e050(param_1,param_2);
  return;
}



// FUNCTION 14348e050 FUN_14348e050 body=677 status=ok
// SIG undefined FUN_14348e050(void)

void FUN_14348e050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)(param_1 + 0x38);
  uVar7 = 0;
  lVar5 = *plVar8;
  if (lVar5 == 0) {
    plVar8 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    plVar4 = (longlong *)(lVar5 + 0x10);
    uVar6 = uVar7;
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 6;
    } while (uVar6 <= *(ulonglong *)(lVar5 + 8));
  }
  do {
    if (((plVar8 == (longlong *)0x0) || (lVar5 = *plVar8, lVar5 == 0)) ||
       (*(longlong *)(lVar5 + 8) < (longlong)uVar6)) break;
    lVar1 = uVar6 * 0x30 + lVar5;
    cVar2 = *(char *)(uVar6 * 0x30 + 0x20 + lVar5);
    if (cVar2 == '\b') {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FUN_14349d950(param_2);
      }
      lVar5 = *(longlong *)(lVar1 + 0x30);
      if (lVar5 != 0) goto LAB_14348e12c;
    }
    else {
      if ((cVar2 != '\x06') || (lVar5 = *(longlong *)(lVar1 + 0x28), lVar5 == 0)) {
        if (cVar2 != '\t') goto LAB_14348e134;
        lVar5 = *(longlong *)(lVar1 + 0x28);
      }
LAB_14348e12c:
      FUN_14349d950(param_2,lVar5);
    }
LAB_14348e134:
    uVar3 = *(ulonglong *)(*plVar8 + 8);
    if (((longlong)uVar6 <= (longlong)uVar3) && (uVar6 = uVar6 + 1, uVar6 <= uVar3)) {
      plVar4 = (longlong *)(*plVar8 + 0x10 + uVar6 * 0x30);
      do {
        if (*plVar4 != -2) break;
        uVar6 = uVar6 + 1;
        plVar4 = plVar4 + 6;
      } while (uVar6 <= uVar3);
    }
  } while( true );
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14349d950(param_2);
  }
  plVar8 = *(longlong **)(param_1 + 0x58);
  if (plVar8 == (longlong *)0x0) {
LAB_14348e2c0:
    if (*(longlong *)(param_1 + 0x30) == 0) {
      return;
    }
    FUN_14349d950(param_2);
    return;
  }
  lVar5 = *plVar8;
  if (lVar5 == 0) {
    plVar8 = (longlong *)0x0;
    uVar7 = 0;
  }
  else {
    plVar4 = (longlong *)(lVar5 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 9;
    } while (uVar7 <= *(ulonglong *)(lVar5 + 8));
  }
  do {
    if (((plVar8 == (longlong *)0x0) || (lVar5 = *plVar8, lVar5 == 0)) ||
       (*(longlong *)(lVar5 + 8) < (longlong)uVar7)) goto LAB_14348e2c0;
    lVar1 = lVar5 + uVar7 * 0x48;
    if (*(longlong *)(lVar5 + 0x20 + uVar7 * 0x48) != 0) {
      FUN_14349d950(param_2);
    }
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FUN_14349d950(param_2);
    }
    cVar2 = *(char *)(lVar1 + 0x38);
    if (cVar2 == '\b') {
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FUN_14349d950(param_2);
      }
      lVar5 = *(longlong *)(lVar1 + 0x48);
      if (lVar5 != 0) goto LAB_14348e275;
    }
    else {
      if ((cVar2 != '\x06') || (lVar5 = *(longlong *)(lVar1 + 0x40), lVar5 == 0)) {
        if (cVar2 != '\t') goto LAB_14348e27d;
        lVar5 = *(longlong *)(lVar1 + 0x40);
      }
LAB_14348e275:
      FUN_14349d950(param_2,lVar5);
    }
LAB_14348e27d:
    uVar6 = *(ulonglong *)(*plVar8 + 8);
    if (((longlong)uVar7 <= (longlong)uVar6) && (uVar7 = uVar7 + 1, uVar7 <= uVar6)) {
      plVar4 = (longlong *)(*plVar8 + uVar7 * 0x48 + 0x10);
      do {
        if (*plVar4 != -2) break;
        uVar7 = uVar7 + 1;
        plVar4 = plVar4 + 9;
      } while (uVar7 <= uVar6);
    }
  } while( true );
}



// FUNCTION 14348e300 FUN_14348e300 body=465 status=ok
// SIG undefined FUN_14348e300(void)

void FUN_14348e300(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  FUN_14348e050();
  lVar2 = *(longlong *)(param_1 + 0x70);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (lVar2 == 0) {
    plVar5 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar6 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((plVar5 == (longlong *)0x0) || (lVar2 = *plVar5, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar6)) {
        return;
      }
      lVar2 = *(longlong *)(uVar6 * 0x20 + 0x28 + lVar2);
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
      uVar1 = *(uint *)(lVar2 + 0x18);
      if ((uVar1 & 0x3ffffff) == 0) {
        if (((int)uVar1 < 0) && ((uVar1 >> 0x1b & 1) == 0)) {
          uVar1 = *(uint *)(lVar2 + 0x10);
          if ((ulonglong)(uVar1 + 1) == *(ulonglong *)(param_2 + 0x18)) {
            FUN_1434a3810(param_2 + 0x10);
          }
          else {
            *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x30) + (ulonglong)(uVar1 >> 10) * 8) +
             (ulonglong)(uVar1 & 0x3ff) * 8) = *(longlong *)(param_2 + 0x38) * 2 | 1;
            *(ulonglong *)(param_2 + 0x38) = (ulonglong)*(uint *)(lVar2 + 0x10);
          }
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) & 0x7fffffff;
          if ((*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0) {
            *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
          }
        }
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x4000000;
        if ((*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
      }
      else {
        FUN_1434a2b80(lVar2);
      }
      uVar3 = *(ulonglong *)(*plVar5 + 8);
    } while (((longlong)uVar3 < (longlong)uVar6) || (uVar6 = uVar6 + 1, uVar3 < uVar6));
    plVar4 = (longlong *)(*plVar5 + 0x10 + uVar6 * 0x20);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar6 <= uVar3);
  } while( true );
}



// FUNCTION 14348e4e0 FUN_14348e4e0 body=106 status=ok
// SIG undefined FUN_14348e4e0(void)

void FUN_14348e4e0(longlong param_1,undefined8 param_2)

{
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d950(param_2);
  }
  return;
}



// FUNCTION 14348e550 FUN_14348e550 body=89 status=ok
// SIG undefined FUN_14348e550(void)

void FUN_14348e550(longlong param_1,undefined8 param_2)

{
  FUN_14348e050();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d950(param_2);
  }
  return;
}



// FUNCTION 14348e5b0 FUN_14348e5b0 body=95 status=ok
// SIG undefined FUN_14348e5b0(void)

void FUN_14348e5b0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14349d950(param_2);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14349d950(param_2);
  }
  return;
}



// FUNCTION 14348e610 FUN_14348e610 body=289 status=ok
// SIG undefined FUN_14348e610(void)

void FUN_14348e610(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348efa0();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348e740 FUN_14348e740 body=273 status=ok
// SIG undefined FUN_14348e740(void)

void FUN_14348e740(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xa0) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348e860 FUN_14348e860 body=275 status=ok
// SIG undefined FUN_14348e860(void)

void FUN_14348e860(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xa8) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348e980 FUN_14348e980 body=289 status=ok
// SIG undefined FUN_14348e980(void)

void FUN_14348e980(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xb0) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348eab0 FUN_14348eab0 body=289 status=ok
// SIG undefined FUN_14348eab0(void)

void FUN_14348eab0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 200) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348ebe0 FUN_14348ebe0 body=289 status=ok
// SIG undefined FUN_14348ebe0(void)

void FUN_14348ebe0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348ed10 FUN_14348ed10 body=289 status=ok
// SIG undefined FUN_14348ed10(void)

void FUN_14348ed10(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x118) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x118) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348ee40 FUN_14348ee40 body=337 status=ok
// SIG undefined FUN_14348ee40(void)

void FUN_14348ee40(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 200) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 14348efa0 FUN_14348efa0 body=160 status=ok
// SIG undefined FUN_14348efa0(void)

void FUN_14348efa0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_14348f370();
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      pcVar3 = *(char **)(*(longlong *)(param_1 + 0x70) + uVar5 * 8);
      if (pcVar3 != (char *)0x0) {
        cVar1 = *pcVar3;
        if (cVar1 == '\b') {
          if (*(longlong *)(pcVar3 + 8) != 0) {
            FUN_14349d9e0(param_2);
          }
          lVar4 = *(longlong *)(pcVar3 + 0x10);
          if (lVar4 == 0) goto LAB_14348f01d;
        }
        else if ((cVar1 != '\x06') || (lVar4 = *(longlong *)(pcVar3 + 8), lVar4 == 0)) {
          if (cVar1 != '\t') goto LAB_14348f01d;
          lVar4 = *(longlong *)(pcVar3 + 8);
        }
        FUN_14349d9e0(param_2,lVar4);
      }
LAB_14348f01d:
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}



// FUNCTION 14348f040 FUN_14348f040 body=60 status=ok
// SIG undefined FUN_14348f040(void)

void FUN_14348f040(longlong *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_14349d9e0(param_2);
  }
  if (param_1[1] != 0) {
    FUN_14349d9e0(param_2);
  }
  return;
}



// FUNCTION 14348f080 FUN_14348f080 body=649 status=ok
// SIG undefined FUN_14348f080(void)

void FUN_14348f080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)(param_1 + 0x20);
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    plVar8 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar5 = (longlong *)(lVar7 + 0x10);
    do {
      if (*plVar5 != -2) break;
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 6;
    } while (uVar6 <= *(ulonglong *)(lVar7 + 8));
  }
  do {
    if (((plVar8 == (longlong *)0x0) || (lVar7 = *plVar8, lVar7 == 0)) ||
       (*(longlong *)(lVar7 + 8) < (longlong)uVar6)) break;
    lVar1 = uVar6 * 0x30 + lVar7;
    cVar2 = *(char *)(uVar6 * 0x30 + 0x20 + lVar7);
    if (cVar2 == '\b') {
      lVar7 = *(longlong *)(lVar1 + 0x28);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        if (((*(uint *)(lVar7 + 0x18) & 0x70000000) != 0) &&
           (uVar4 = *(uint *)(lVar7 + 0x18) & 0x8fffffff, *(uint *)(lVar7 + 0x18) = uVar4,
           (uVar4 >> 0x1b & 1) != 0)) {
          *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 8) = *(undefined8 *)(lVar7 + 8);
          *(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x10) = *(undefined8 *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar7;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar7;
        }
      }
      lVar7 = *(longlong *)(lVar1 + 0x30);
      if (lVar7 != 0) goto LAB_14348f1a6;
    }
    else {
      if ((cVar2 != '\x06') || (lVar7 = *(longlong *)(lVar1 + 0x28), lVar7 == 0)) {
        if (cVar2 != '\t') goto LAB_14348f20d;
        lVar7 = *(longlong *)(lVar1 + 0x28);
      }
LAB_14348f1a6:
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      if (((*(uint *)(lVar7 + 0x18) & 0x70000000) != 0) &&
         (uVar4 = *(uint *)(lVar7 + 0x18) & 0x8fffffff, *(uint *)(lVar7 + 0x18) = uVar4,
         (uVar4 >> 0x1b & 1) != 0)) {
        *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 8) = *(undefined8 *)(lVar7 + 8);
        *(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x10) = *(undefined8 *)(lVar7 + 0x10);
        *(undefined8 *)(lVar7 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar7;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar7;
      }
    }
LAB_14348f20d:
    uVar3 = *(ulonglong *)(*plVar8 + 8);
    if (((longlong)uVar6 <= (longlong)uVar3) && (uVar6 = uVar6 + 1, uVar6 <= uVar3)) {
      plVar5 = (longlong *)(uVar6 * 0x30 + 0x10 + *plVar8);
      do {
        if (*plVar5 != -2) break;
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 6;
      } while (uVar6 <= uVar3);
    }
  } while( true );
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14349d9e0(param_2);
  }
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 == '\b') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14349d9e0(param_2);
    }
    lVar7 = *(longlong *)(param_1 + 0x58);
    if (lVar7 == 0) goto LAB_14348f2ad;
  }
  else if ((cVar2 != '\x06') || (lVar7 = *(longlong *)(param_1 + 0x50), lVar7 == 0)) {
    if (cVar2 != '\t') goto LAB_14348f2ad;
    lVar7 = *(longlong *)(param_1 + 0x50);
  }
  FUN_14349d9e0(param_2,lVar7);
LAB_14348f2ad:
  cVar2 = *(char *)(param_1 + 0x68);
  if (cVar2 == '\b') {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14349d9e0(param_2);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_14349d9e0(param_2);
      return;
    }
  }
  else {
    if ((cVar2 != '\x06') || (lVar7 = *(longlong *)(param_1 + 0x70), lVar7 == 0)) {
      if (cVar2 != '\t') {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 0x70);
    }
    FUN_14349d9e0(param_2,lVar7);
  }
  return;
}



// FUNCTION 14348f310 FUN_14348f310 body=94 status=ok
// SIG undefined FUN_14348f310(void)

void FUN_14348f310(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d9e0(param_2);
  }
  FUN_14348f370(param_1,param_2);
  return;
}



// FUNCTION 14348f370 FUN_14348f370 body=1238 status=ok
// SIG undefined FUN_14348f370(void)

void FUN_14348f370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)(param_1 + 0x38);
  uVar8 = 0;
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    plVar9 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar7 + 0x10);
    uVar6 = uVar8;
    do {
      if (*plVar5 != -2) break;
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 6;
    } while (uVar6 <= *(ulonglong *)(lVar7 + 8));
  }
  do {
    if (((plVar9 == (longlong *)0x0) || (lVar7 = *plVar9, lVar7 == 0)) ||
       (*(longlong *)(lVar7 + 8) < (longlong)uVar6)) break;
    lVar1 = uVar6 * 0x30 + lVar7;
    cVar2 = *(char *)(uVar6 * 0x30 + 0x20 + lVar7);
    if (cVar2 == '\b') {
      lVar7 = *(longlong *)(lVar1 + 0x28);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        if (((*(uint *)(lVar7 + 0x18) & 0x70000000) != 0) &&
           (uVar4 = *(uint *)(lVar7 + 0x18) & 0x8fffffff, *(uint *)(lVar7 + 0x18) = uVar4,
           (uVar4 >> 0x1b & 1) != 0)) {
          *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 8) = *(undefined8 *)(lVar7 + 8);
          *(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x10) = *(undefined8 *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar7;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar7;
        }
      }
      lVar7 = *(longlong *)(lVar1 + 0x30);
      if (lVar7 != 0) goto LAB_14348f49a;
    }
    else {
      if ((cVar2 != '\x06') || (lVar7 = *(longlong *)(lVar1 + 0x28), lVar7 == 0)) {
        if (cVar2 != '\t') goto LAB_14348f501;
        lVar7 = *(longlong *)(lVar1 + 0x28);
      }
LAB_14348f49a:
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      if (((*(uint *)(lVar7 + 0x18) & 0x70000000) != 0) &&
         (uVar4 = *(uint *)(lVar7 + 0x18) & 0x8fffffff, *(uint *)(lVar7 + 0x18) = uVar4,
         (uVar4 >> 0x1b & 1) != 0)) {
        *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 8) = *(undefined8 *)(lVar7 + 8);
        *(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x10) = *(undefined8 *)(lVar7 + 0x10);
        *(undefined8 *)(lVar7 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar7;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar7;
      }
    }
LAB_14348f501:
    uVar3 = *(ulonglong *)(*plVar9 + 8);
    if (((longlong)uVar6 <= (longlong)uVar3) && (uVar6 = uVar6 + 1, uVar6 <= uVar3)) {
      plVar5 = (longlong *)(*plVar9 + 0x10 + uVar6 * 0x30);
      do {
        if (*plVar5 != -2) break;
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 6;
      } while (uVar6 <= uVar3);
    }
  } while( true );
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14349d9e0(param_2);
  }
  plVar9 = *(longlong **)(param_1 + 0x58);
  if (plVar9 == (longlong *)0x0) {
LAB_14348f820:
    if (*(longlong *)(param_1 + 0x30) == 0) {
      return;
    }
    FUN_14349d9e0(param_2);
    return;
  }
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    plVar9 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar7 + 0x10);
    do {
      if (*plVar5 != -2) break;
      uVar8 = uVar8 + 1;
      plVar5 = plVar5 + 9;
    } while (uVar8 <= *(ulonglong *)(lVar7 + 8));
  }
  do {
    if (((plVar9 == (longlong *)0x0) || (lVar7 = *plVar9, lVar7 == 0)) ||
       (*(longlong *)(lVar7 + 8) < (longlong)uVar8)) goto LAB_14348f820;
    lVar1 = *(longlong *)(lVar7 + 0x20 + uVar8 * 0x48);
    lVar7 = lVar7 + uVar8 * 0x48;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      if (((*(uint *)(lVar1 + 0x18) & 0x70000000) != 0) &&
         (uVar4 = *(uint *)(lVar1 + 0x18) & 0x8fffffff, *(uint *)(lVar1 + 0x18) = uVar4,
         (uVar4 >> 0x1b & 1) != 0)) {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
        *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 *)(lVar1 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
      }
    }
    lVar1 = *(longlong *)(lVar7 + 0x28);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      if (((*(uint *)(lVar1 + 0x18) & 0x70000000) != 0) &&
         (uVar4 = *(uint *)(lVar1 + 0x18) & 0x8fffffff, *(uint *)(lVar1 + 0x18) = uVar4,
         (uVar4 >> 0x1b & 1) != 0)) {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
        *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 *)(lVar1 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
      }
    }
    cVar2 = *(char *)(lVar7 + 0x38);
    if (cVar2 == '\b') {
      lVar1 = *(longlong *)(lVar7 + 0x40);
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
        if (((*(uint *)(lVar1 + 0x18) & 0x70000000) != 0) &&
           (uVar4 = *(uint *)(lVar1 + 0x18) & 0x8fffffff, *(uint *)(lVar1 + 0x18) = uVar4,
           (uVar4 >> 0x1b & 1) != 0)) {
          *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
          *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
          *(undefined8 *)(lVar1 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
        }
      }
      lVar7 = *(longlong *)(lVar7 + 0x48);
      if (lVar7 != 0) {
LAB_14348f76c:
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        if (((*(uint *)(lVar7 + 0x18) & 0x70000000) != 0) &&
           (uVar4 = *(uint *)(lVar7 + 0x18) & 0x8fffffff, *(uint *)(lVar7 + 0x18) = uVar4,
           (uVar4 >> 0x1b & 1) != 0)) {
          *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 8) = *(undefined8 *)(lVar7 + 8);
          *(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x10) = *(undefined8 *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar7;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar7;
        }
      }
    }
    else if ((cVar2 == '\x06') && (*(longlong *)(lVar7 + 0x40) != 0)) {
      FUN_14349d9e0(param_2);
    }
    else if (cVar2 == '\t') {
      lVar7 = *(longlong *)(lVar7 + 0x40);
      goto LAB_14348f76c;
    }
    uVar6 = *(ulonglong *)(*plVar9 + 8);
    if (((longlong)uVar8 <= (longlong)uVar6) && (uVar8 = uVar8 + 1, uVar8 <= uVar6)) {
      plVar5 = (longlong *)(*plVar9 + uVar8 * 0x48 + 0x10);
      do {
        if (*plVar5 != -2) break;
        uVar8 = uVar8 + 1;
        plVar5 = plVar5 + 9;
      } while (uVar8 <= uVar6);
    }
  } while( true );
}



// FUNCTION 14348f850 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor> body=326 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor>(void)

void Scaleform::GFx::AS2::SharedObjectCtorFunction::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor>
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  FUN_14348f370();
  lVar1 = *(longlong *)(param_1 + 0x70);
  plVar6 = (longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    plVar6 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar5 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar6 == (longlong *)0x0) || (lVar1 = *plVar6, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar5)) {
        return;
      }
      lVar1 = *(longlong *)(uVar5 * 0x20 + 0x28 + lVar1);
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      if (((*(uint *)(lVar1 + 0x18) & 0x70000000) != 0) &&
         (uVar3 = *(uint *)(lVar1 + 0x18) & 0x8fffffff, *(uint *)(lVar1 + 0x18) = uVar3,
         (uVar3 >> 0x1b & 1) != 0)) {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
        *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 *)(lVar1 + 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar1;
        *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar1;
      }
      uVar2 = *(ulonglong *)(*plVar6 + 8);
    } while (((longlong)uVar2 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar2 < uVar5));
    plVar4 = (longlong *)(uVar5 * 0x20 + 0x10 + *plVar6);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar5 <= uVar2);
  } while( true );
}



// FUNCTION 14348f9a0 FUN_14348f9a0 body=106 status=ok
// SIG undefined FUN_14348f9a0(void)

void FUN_14348f9a0(longlong param_1,undefined8 param_2)

{
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d9e0(param_2);
  }
  return;
}



// FUNCTION 14348fa10 FUN_14348fa10 body=89 status=ok
// SIG undefined FUN_14348fa10(void)

void FUN_14348fa10(longlong param_1,undefined8 param_2)

{
  FUN_14348f370();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14349d9e0(param_2);
  }
  return;
}



// FUNCTION 14348fa70 FUN_14348fa70 body=95 status=ok
// SIG undefined FUN_14348fa70(void)

void FUN_14348fa70(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14349d9e0(param_2);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14349d9e0(param_2);
  }
  return;
}



// FUNCTION 14348fad0 FUN_14348fad0 body=232 status=ok
// SIG undefined FUN_14348fad0(void)

void FUN_14348fad0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x70) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x70,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x6fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143353d90(lVar2,param_1,param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 14348fbc0 FUN_14348fbc0 body=258 status=ok
// SIG undefined FUN_14348fbc0(void)

undefined8 FUN_14348fbc0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  
  uVar6 = *(undefined8 *)*param_2;
  uVar1 = *(undefined8 *)((*(longlong **)(param_1 + 0xe0))[4] + 0x10);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x218))();
  FUN_1432e44d0(uVar1,&local_res8,uVar3,uVar6);
  if (local_res8 == 0) {
    FUN_143417260(param_1,
                  "BitmapData::LoadBitmap: LoadMovieImageCallback failed to load image \"%s\"",
                  *(undefined8 *)*param_2);
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x218))();
    if (lVar4 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar4);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
      lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,0x78);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_143456590(lVar5,param_1);
      }
      FUN_1434565f0(uVar6,param_1,local_res8,lVar4);
      FUN_1432de450(lVar4);
      goto LAB_14348fc2b;
    }
  }
  uVar6 = 0;
LAB_14348fc2b:
  if (local_res8 != 0) {
    FUN_1432de450();
  }
  return uVar6;
}



// FUNCTION 14348fcd0 FUN_14348fcd0 body=265 status=ok
// SIG undefined FUN_14348fcd0(void)

undefined8 FUN_14348fcd0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  
  uVar1 = *param_2;
  uVar6 = *(undefined8 *)((*(longlong **)(param_1 + 0xe0))[4] + 0x10);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x218))();
  FUN_1432e44d0(uVar6,&local_res8,uVar3,(uVar1 & 0xfffffffffffffffc) + 0xc);
  if (local_res8 == 0) {
    FUN_143417260(param_1,
                  "BitmapData::LoadBitmap: LoadMovieImageCallback failed to load image \"%s\"",
                  (*param_2 & 0xfffffffffffffffc) + 0xc);
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x218))();
    if (lVar4 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar4);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
      lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,0x78);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_143456590(lVar5,param_1);
      }
      FUN_1434565f0(uVar6,param_1,local_res8,lVar4);
      FUN_1432de450(lVar4);
      goto LAB_14348fd42;
    }
  }
  uVar6 = 0;
LAB_14348fd42:
  if (local_res8 != 0) {
    FUN_1432de450();
  }
  return uVar6;
}



// FUNCTION 14348fde0 FUN_14348fde0 body=85 status=ok
// SIG undefined FUN_14348fde0(void)

void FUN_14348fde0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(uint *)(param_1 + 0xb8) >> 0x15 & 1) == 0) ||
     ((*(uint *)(param_1 + 0xb8) >> 0x16 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = FUN_143de79c0(param_1,uVar2);
  if (iVar1 == -1) {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x400000;
  }
  else if (iVar1 == 1) {
    FUN_14336e960(param_1);
    return;
  }
  return;
}



// FUNCTION 14348fe40 FUN_14348fe40 body=67 status=ok
// SIG undefined FUN_14348fe40(void)

void FUN_14348fe40(longlong param_1,char *param_2)

{
  ulonglong *puVar1;
  undefined1 *puVar2;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  puVar2 = (undefined1 *)*puVar1;
  if (puVar2 != (undefined1 *)0x0) {
    *(int *)(puVar2 + 8) = (int)*param_2;
    *puVar2 = 4;
  }
  return;
}



// FUNCTION 14348fe90 FUN_14348fe90 body=66 status=ok
// SIG undefined FUN_14348fe90(void)

void FUN_14348fe90(longlong param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  puVar3 = (undefined1 *)*puVar1;
  if (puVar3 != (undefined1 *)0x0) {
    uVar2 = *param_2;
    *puVar3 = 4;
    *(undefined4 *)(puVar3 + 8) = uVar2;
  }
  return;
}



// FUNCTION 14348fee0 FUN_14348fee0 body=73 status=ok
// SIG undefined FUN_14348fee0(void)

void FUN_14348fee0(longlong param_1,float *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  undefined1 *puVar3;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  puVar3 = (undefined1 *)*puVar1;
  if (puVar3 != (undefined1 *)0x0) {
    fVar2 = *param_2;
    *puVar3 = 3;
    *(double *)(puVar3 + 8) = (double)fVar2;
  }
  return;
}



// FUNCTION 14348ff30 FUN_14348ff30 body=70 status=ok
// SIG undefined FUN_14348ff30(void)

void FUN_14348ff30(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  undefined1 *puVar2;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  puVar2 = (undefined1 *)*puVar1;
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 8) = *param_2;
    *puVar2 = 3;
  }
  return;
}



// FUNCTION 14348ff80 FUN_14348ff80 body=66 status=ok
// SIG undefined FUN_14348ff80(void)

void FUN_14348ff80(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  if (*puVar1 != 0) {
    FUN_143410c00(*puVar1,*param_2);
  }
  return;
}



// FUNCTION 14348ffd0 FUN_14348ffd0 body=71 status=ok
// SIG undefined FUN_14348ffd0(void)

void FUN_14348ffd0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  puVar3 = (undefined1 *)*puVar1;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 5;
    lVar4 = *param_2;
    *(longlong *)(puVar3 + 8) = lVar4;
    piVar2 = (int *)(lVar4 + 0x18);
    *piVar2 = *piVar2 + 1;
  }
  return;
}



// FUNCTION 143490020 FUN_143490020 body=66 status=ok
// SIG undefined FUN_143490020(void)

void FUN_143490020(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  if (*puVar1 != 0) {
    FUN_143410ec0(*puVar1,param_2);
  }
  return;
}



// FUNCTION 143490070 FUN_143490070 body=67 status=ok
// SIG undefined FUN_143490070(void)

void FUN_143490070(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined1 *puVar2;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  puVar1 = (ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
    FUN_1434a29d0(puVar1);
  }
  puVar2 = (undefined1 *)*puVar1;
  if (puVar2 != (undefined1 *)0x0) {
    puVar2[8] = *param_2;
    *puVar2 = 2;
  }
  return;
}



// FUNCTION 1434900c0 FUN_1434900c0 body=836 status=ok
// SIG undefined FUN_1434900c0(void)

undefined8 FUN_1434900c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    FUN_14349ebc0(param_4 + 0x10);
    return 1;
  }
  plVar9 = local_2a8;
  do {
    while (lVar7 = param_2, 9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar7 = param_2 + 1;
      lVar8 = param_3 + -1;
      uVar4 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar3 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar3 * 8);
      *(undefined8 *)(lVar1 + lVar3 * 8) = uVar4;
      iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(*param_1 + lVar8 * 8),
                            *(undefined8 *)(*param_1 + lVar7 * 8));
      if (iVar2 < 0) {
        lVar1 = *param_1;
        uVar4 = *(undefined8 *)(lVar1 + lVar8 * 8);
        *(undefined8 *)(lVar1 + lVar8 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar4;
      }
      iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar7 * 8));
      if (iVar2 < 0) {
        lVar1 = *param_1;
        uVar4 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar4;
      }
      iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(*param_1 + lVar8 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if (-1 < iVar2) goto LAB_143490200;
      puVar6 = (undefined8 *)(*param_1 + param_2 * 8);
      puVar5 = (undefined8 *)(*param_1 + lVar8 * 8);
      while( true ) {
        uVar4 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar4;
LAB_143490200:
        do {
          lVar7 = lVar7 + 1;
          if (param_3 <= lVar7) goto LAB_143490334;
          iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(*param_1 + lVar7 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while (iVar2 < 0);
        do {
          lVar8 = lVar8 + -1;
          if (lVar8 < 0) goto LAB_143490334;
          iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar8 * 8));
        } while (iVar2 < 0);
        lVar1 = *param_1;
        puVar6 = (undefined8 *)(lVar1 + lVar8 * 8);
        if (lVar8 < lVar7) break;
        puVar5 = (undefined8 *)(lVar1 + lVar7 * 8);
      }
      uVar4 = *(undefined8 *)(lVar1 + param_2 * 8);
      *(undefined8 *)(lVar1 + param_2 * 8) = *puVar6;
      *puVar6 = uVar4;
      if (param_3 - lVar7 < lVar8 - param_2) {
        *plVar9 = param_2;
        plVar9[1] = lVar8;
        plVar9 = plVar9 + 2;
        param_2 = lVar7;
      }
      else {
        plVar9[1] = param_3;
        *plVar9 = lVar7;
        plVar9 = plVar9 + 2;
        param_3 = lVar8;
      }
    }
joined_r0x0001434902ac:
    lVar8 = lVar7 + 1;
    if (lVar8 < param_3) {
      lVar1 = lVar7 * 8;
      iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar3 = lVar7;
      while (lVar7 = lVar8, iVar2 < 0) {
        puVar6 = (undefined8 *)(*param_1 + lVar1);
        uVar4 = puVar6[1];
        puVar6[1] = *puVar6;
        *puVar6 = uVar4;
        if (lVar3 == param_2) break;
        lVar3 = lVar3 + -1;
        lVar1 = lVar3 * 8;
        iVar2 = FUN_14345cf80(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x0001434902ac;
    }
    if (plVar9 <= local_2a8) {
      if (((*(byte *)(param_4 + 0x20) & 2) == 0) &&
         (lVar7 = *(longlong *)(param_4 + 0x10), lVar7 != 0)) {
        if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
          FUN_1434a2b80();
        }
      }
      *(undefined8 *)(param_4 + 0x10) = 0;
      if (((*(byte *)(param_4 + 0x20) & 1) == 0) &&
         (lVar7 = *(longlong *)(param_4 + 0x18), lVar7 != 0)) {
        if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
          FUN_1434a2b80();
        }
      }
      uVar4 = 1;
LAB_1434903d2:
      *(undefined8 *)(param_4 + 0x18) = 0;
      return uVar4;
    }
    param_2 = plVar9[-2];
    param_3 = plVar9[-1];
    plVar9 = plVar9 + -2;
  } while( true );
LAB_143490334:
  if (((*(byte *)(param_4 + 0x20) & 2) == 0) && (lVar7 = *(longlong *)(param_4 + 0x10), lVar7 != 0))
  {
    if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (((*(byte *)(param_4 + 0x20) & 1) == 0) && (lVar7 = *(longlong *)(param_4 + 0x18), lVar7 != 0))
  {
    if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  uVar4 = 0;
  goto LAB_1434903d2;
}



// FUNCTION 143490410 FUN_143490410 body=1116 status=ok
// SIG undefined FUN_143490410(void)

undefined8 FUN_143490410(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    FUN_14349e960(*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
    if (*(longlong *)(param_4 + 0x20) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    return 1;
  }
  plVar8 = local_2a8;
  do {
    while (lVar7 = param_2, 9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar7 = param_2 + 1;
      lVar9 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar4 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
      *(undefined8 *)(lVar1 + lVar4 * 8) = uVar2;
      iVar3 = FUN_14345d490(param_4,*(undefined8 *)(*param_1 + lVar9 * 8),
                            *(undefined8 *)(*param_1 + lVar7 * 8));
      if (iVar3 < 0) {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar2;
      }
      iVar3 = FUN_14345d490(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar7 * 8));
      if (iVar3 < 0) {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar2;
      }
      iVar3 = FUN_14345d490(param_4,*(undefined8 *)(*param_1 + lVar9 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if (-1 < iVar3) goto LAB_143490560;
      puVar6 = (undefined8 *)(*param_1 + param_2 * 8);
      puVar5 = (undefined8 *)(*param_1 + lVar9 * 8);
      while( true ) {
        uVar2 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar2;
LAB_143490560:
        do {
          lVar7 = lVar7 + 1;
          if (param_3 <= lVar7) {
            lVar7 = *(longlong *)(param_4 + 0x28);
            if (lVar7 != 0) {
              plVar8 = (longlong *)(*(longlong *)(param_4 + 0x20) + -0x20 + lVar7 * 0x38);
              do {
                if ((((*(byte *)(plVar8 + 1) & 2) == 0) && (lVar9 = plVar8[-1], lVar9 != 0)) &&
                   ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
                  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
                  FUN_1434a2b80();
                }
                plVar8[-1] = 0;
                if ((((*(byte *)(plVar8 + 1) & 1) == 0) && (lVar9 = *plVar8, lVar9 != 0)) &&
                   ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
                  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
                  FUN_1434a2b80();
                }
                *plVar8 = 0;
                plVar8 = plVar8 + -7;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (*(longlong *)(param_4 + 0x20) == 0) {
              return 0;
            }
            (**(code **)(*DAT_146b62f28 + 0x60))();
            return 0;
          }
          iVar3 = FUN_14345d490(param_4,*(undefined8 *)(*param_1 + lVar7 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while (iVar3 < 0);
        do {
          lVar9 = lVar9 + -1;
          if (lVar9 < 0) {
            lVar7 = *(longlong *)(param_4 + 0x28);
            if (lVar7 != 0) {
              plVar8 = (longlong *)(*(longlong *)(param_4 + 0x20) + -0x20 + lVar7 * 0x38);
              do {
                if ((((*(byte *)(plVar8 + 1) & 2) == 0) && (lVar9 = plVar8[-1], lVar9 != 0)) &&
                   ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
                  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
                  FUN_1434a2b80();
                }
                plVar8[-1] = 0;
                if ((((*(byte *)(plVar8 + 1) & 1) == 0) && (lVar9 = *plVar8, lVar9 != 0)) &&
                   ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
                  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
                  FUN_1434a2b80();
                }
                *plVar8 = 0;
                plVar8 = plVar8 + -7;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (*(longlong *)(param_4 + 0x20) == 0) {
              return 0;
            }
            (**(code **)(*DAT_146b62f28 + 0x60))();
            return 0;
          }
          iVar3 = FUN_14345d490(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar9 * 8));
        } while (iVar3 < 0);
        lVar1 = *param_1;
        puVar6 = (undefined8 *)(lVar1 + lVar9 * 8);
        if (lVar9 < lVar7) break;
        puVar5 = (undefined8 *)(lVar1 + lVar7 * 8);
      }
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      *(undefined8 *)(lVar1 + param_2 * 8) = *puVar6;
      *puVar6 = uVar2;
      if (param_3 - lVar7 < lVar9 - param_2) {
        *plVar8 = param_2;
        plVar8[1] = lVar9;
        plVar8 = plVar8 + 2;
        param_2 = lVar7;
      }
      else {
        plVar8[1] = param_3;
        *plVar8 = lVar7;
        plVar8 = plVar8 + 2;
        param_3 = lVar9;
      }
    }
joined_r0x00014349060c:
    lVar9 = lVar7 + 1;
    if (lVar9 < param_3) {
      lVar1 = lVar7 * 8;
      iVar3 = FUN_14345d490(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar4 = lVar7;
      while (lVar7 = lVar9, iVar3 < 0) {
        puVar6 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar6[1];
        puVar6[1] = *puVar6;
        *puVar6 = uVar2;
        if (lVar4 == param_2) break;
        lVar4 = lVar4 + -1;
        lVar1 = lVar4 * 8;
        iVar3 = FUN_14345d490(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x00014349060c;
    }
    if (plVar8 <= local_2a8) {
      lVar7 = *(longlong *)(param_4 + 0x28);
      if (lVar7 != 0) {
        plVar8 = (longlong *)(*(longlong *)(param_4 + 0x20) + -0x20 + lVar7 * 0x38);
        do {
          if ((((*(byte *)(plVar8 + 1) & 2) == 0) && (lVar9 = plVar8[-1], lVar9 != 0)) &&
             ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
            FUN_1434a2b80();
          }
          plVar8[-1] = 0;
          if ((((*(byte *)(plVar8 + 1) & 1) == 0) && (lVar9 = *plVar8, lVar9 != 0)) &&
             ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
            FUN_1434a2b80();
          }
          *plVar8 = 0;
          plVar8 = plVar8 + -7;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(longlong *)(param_4 + 0x20) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      return 1;
    }
    param_2 = plVar8[-2];
    param_3 = plVar8[-1];
    plVar8 = plVar8 + -2;
  } while( true );
}



// FUNCTION 143490870 FUN_143490870 body=348 status=ok
// SIG undefined FUN_143490870(void)

ulonglong FUN_143490870(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar6 = *(uint *)(*(longlong *)*param_2 + 0x1c) & uVar2;
  uVar5 = uVar6 * 9;
  puVar8 = (ulonglong *)(lVar1 + 0x10 + uVar6 * 0x48);
  if ((*(longlong *)(lVar1 + 0x10 + uVar6 * 0x48) != -2) &&
     (uVar5 = puVar8[1], (*(uint *)(uVar5 + 0x1c) & uVar2) == uVar6)) {
    uVar4 = uVar6;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar7 = uVar4;
      uVar5 = puVar8[1];
      if ((*(uint *)(uVar5 + 0x1c) & uVar2) == uVar6) {
        plVar3 = (longlong *)*param_2;
        if (*(longlong *)(uVar5 + 0x10) == 0) {
          FUN_14335f970(uVar5);
        }
        uVar5 = puVar8[1];
        if (*(longlong *)(*plVar3 + 0x10) == *(longlong *)(uVar5 + 0x10)) {
          uVar2 = *puVar8;
          if (uVar6 == uVar7) {
            if (uVar2 != 0xffffffffffffffff) {
              lVar1 = *param_1 + uVar2 * 0x48;
              FUN_14349e0d0(puVar8);
              *puVar8 = *(ulonglong *)(lVar1 + 0x10);
              FUN_1434942b0(puVar8 + 1,lVar1 + 0x18);
              puVar8 = (ulonglong *)(lVar1 + 0x10);
            }
          }
          else {
            *(ulonglong *)(*param_1 + 0x10 + uVar9 * 0x48) = uVar2;
          }
          FUN_14349e0d0(puVar8);
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
      }
      uVar4 = *puVar8;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar8 = (ulonglong *)(*param_1 + uVar4 * 0x48 + 0x10);
      uVar9 = uVar7;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1434909d0 FUN_1434909d0 body=340 status=ok
// SIG undefined FUN_1434909d0(void)

ulonglong FUN_1434909d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar6 = *(uint *)(*(longlong *)*param_2 + 0x1c) & uVar2;
  uVar5 = uVar6 * 5;
  puVar8 = (ulonglong *)(lVar1 + 0x10 + uVar6 * 0x28);
  if ((*(longlong *)(lVar1 + 0x10 + uVar6 * 0x28) != -2) &&
     (uVar5 = puVar8[1], (*(uint *)(uVar5 + 0x1c) & uVar2) == uVar6)) {
    uVar4 = uVar6;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar7 = uVar4;
      uVar5 = puVar8[1];
      if ((*(uint *)(uVar5 + 0x1c) & uVar2) == uVar6) {
        plVar3 = (longlong *)*param_2;
        if (*(longlong *)(uVar5 + 0x10) == 0) {
          FUN_14335f970(uVar5);
        }
        uVar5 = puVar8[1];
        if (*(longlong *)(*plVar3 + 0x10) == *(longlong *)(uVar5 + 0x10)) {
          uVar2 = *puVar8;
          if (uVar6 == uVar7) {
            if (uVar2 != 0xffffffffffffffff) {
              lVar1 = *param_1 + uVar2 * 0x28;
              FUN_14349e0a0(puVar8);
              FUN_143494540(puVar8,lVar1 + 0x10);
              puVar8 = (ulonglong *)(lVar1 + 0x10);
            }
          }
          else {
            *(ulonglong *)(*param_1 + 0x10 + uVar9 * 0x28) = uVar2;
          }
          FUN_14349e0a0(puVar8);
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
      }
      uVar4 = *puVar8;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar8 = (ulonglong *)(*param_1 + uVar4 * 0x28 + 0x10);
      uVar9 = uVar7;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 143490b30 FUN_143490b30 body=292 status=ok
// SIG undefined FUN_143490b30(void)

ulonglong FUN_143490b30(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = *(ulonglong *)(lVar2 + 8);
  uVar6 = *(uint *)(*param_2 + 0x1c) & uVar3;
  uVar5 = uVar6 * 3;
  puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar6 * 0x18);
  if ((*(longlong *)(lVar2 + 0x10 + uVar6 * 0x18) != -2) &&
     (uVar5 = puVar8[1], (*(uint *)(uVar5 + 0x1c) & uVar3) == uVar6)) {
    uVar4 = uVar6;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar7 = uVar4;
      uVar4 = puVar8[1];
      uVar5 = *(uint *)(uVar4 + 0x1c) & uVar3;
      if ((uVar5 == uVar6) && (uVar4 == *param_2)) {
        uVar3 = *puVar8;
        if (uVar6 == uVar7) {
          if (uVar3 != 0xffffffffffffffff) {
            piVar1 = (int *)(uVar4 + 0x18);
            *piVar1 = *piVar1 + -1;
            lVar2 = lVar2 + uVar3 * 0x18;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            *puVar8 = 0xfffffffffffffffe;
            *puVar8 = *(ulonglong *)(lVar2 + 0x10);
            uVar3 = *(ulonglong *)(lVar2 + 0x18);
            puVar8[1] = uVar3;
            piVar1 = (int *)(uVar3 + 0x18);
            *piVar1 = *piVar1 + 1;
            puVar8[2] = *(ulonglong *)(lVar2 + 0x20);
            puVar8 = (ulonglong *)(lVar2 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar2 + 0x10 + uVar9 * 0x18) = uVar3;
        }
        piVar1 = (int *)(puVar8[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *puVar8 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar4 = *puVar8;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar8 = (ulonglong *)(lVar2 + uVar4 * 0x18 + 0x10);
      uVar9 = uVar7;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 143490c60 FUN_143490c60 body=261 status=ok
// SIG undefined FUN_143490c60(void)

ulonglong FUN_143490c60(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar5 = *(uint *)(*param_2 + 0x1c) & uVar2;
  uVar4 = uVar5 * 9;
  puVar7 = (ulonglong *)(lVar1 + 0x10 + uVar5 * 0x48);
  if ((*(longlong *)(lVar1 + 0x10 + uVar5 * 0x48) != -2) &&
     (uVar4 = puVar7[1], (*(uint *)(uVar4 + 0x1c) & uVar2) == uVar5)) {
    uVar3 = uVar5;
    uVar8 = 0xffffffffffffffff;
    while( true ) {
      uVar6 = uVar3;
      uVar4 = *(uint *)(puVar7[1] + 0x1c) & uVar2;
      if ((uVar4 == uVar5) && (puVar7[1] == *param_2)) {
        uVar2 = *puVar7;
        if (uVar5 == uVar6) {
          if (uVar2 != 0xffffffffffffffff) {
            lVar1 = lVar1 + uVar2 * 0x48;
            FUN_14349e0d0(puVar7);
            *puVar7 = *(ulonglong *)(lVar1 + 0x10);
            FUN_1434942b0(puVar7 + 1,lVar1 + 0x18);
            puVar7 = (ulonglong *)(lVar1 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar1 + 0x10 + uVar8 * 0x48) = uVar2;
        }
        FUN_14349e0d0(puVar7);
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar3 = *puVar7;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar7 = (ulonglong *)(lVar1 + uVar3 * 0x48 + 0x10);
      uVar8 = uVar6;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143490d70 FUN_143490d70 body=253 status=ok
// SIG undefined FUN_143490d70(void)

ulonglong FUN_143490d70(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar5 = *(uint *)(*param_2 + 0x1c) & uVar2;
  uVar4 = uVar5 * 5;
  puVar7 = (ulonglong *)(lVar1 + 0x10 + uVar5 * 0x28);
  if ((*(longlong *)(lVar1 + 0x10 + uVar5 * 0x28) != -2) &&
     (uVar4 = puVar7[1], (*(uint *)(uVar4 + 0x1c) & uVar2) == uVar5)) {
    uVar3 = uVar5;
    uVar8 = 0xffffffffffffffff;
    while( true ) {
      uVar6 = uVar3;
      uVar4 = *(uint *)(puVar7[1] + 0x1c) & uVar2;
      if ((uVar4 == uVar5) && (puVar7[1] == *param_2)) {
        uVar2 = *puVar7;
        if (uVar5 == uVar6) {
          if (uVar2 != 0xffffffffffffffff) {
            lVar1 = lVar1 + uVar2 * 0x28;
            FUN_14349e0a0(puVar7);
            FUN_143494540(puVar7,lVar1 + 0x10);
            puVar7 = (ulonglong *)(lVar1 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar1 + 0x10 + uVar8 * 0x28) = uVar2;
        }
        FUN_14349e0a0(puVar7);
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar3 = *puVar7;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar7 = (ulonglong *)(lVar1 + uVar3 * 0x28 + 0x10);
      uVar8 = uVar6;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143490e70 FUN_143490e70 body=274 status=ok
// SIG undefined FUN_143490e70(void)

ulonglong FUN_143490e70(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(ulonglong *)(lVar6 + 8);
  uVar4 = *(uint *)(*param_2 + 0x1c) & uVar1;
  uVar3 = uVar4 * 0x30;
  puVar7 = (ulonglong *)(lVar6 + 0x10 + uVar3);
  if ((*puVar7 != 0xfffffffffffffffe) &&
     (uVar3 = puVar7[1], (*(uint *)(uVar3 + 0x1c) & uVar1) == uVar4)) {
    uVar2 = uVar4;
    uVar8 = 0xffffffffffffffff;
    while( true ) {
      uVar5 = uVar2;
      uVar3 = *(uint *)(puVar7[1] + 0x1c) & uVar1;
      if ((uVar3 == uVar4) && (puVar7[1] == *param_2)) {
        uVar1 = *puVar7;
        if (uVar4 == uVar5) {
          if (uVar1 != 0xffffffffffffffff) {
            lVar6 = uVar1 * 0x30 + lVar6;
            FUN_14349e120(puVar7);
            FUN_1434945b0(puVar7,lVar6 + 0x10);
            puVar7 = (ulonglong *)(lVar6 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar6 + 0x10 + uVar8 * 0x30) = uVar1;
        }
        FUN_14349e120(puVar7);
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar2 = *puVar7;
      if (uVar2 == 0xffffffffffffffff) break;
      puVar7 = (ulonglong *)(lVar6 + 0x10 + uVar2 * 0x30);
      uVar8 = uVar5;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143490f90 FUN_143490f90 body=175 status=ok
// SIG undefined FUN_143490f90(void)

longlong FUN_143490f90(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  lVar3 = *(longlong *)*param_3;
  uVar2 = *(uint *)(lVar3 + 0x1c);
  if ((lVar5 != 0) &&
     (lVar4 = FUN_143493e60(param_1,param_3,*(ulonglong *)(lVar5 + 8) & (ulonglong)uVar2),
     -1 < lVar4)) {
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    lVar5 = lVar4 * 0x30 + lVar5;
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar5 + 0x18) = lVar3;
    lVar3 = param_3[1];
    FUN_143411240(lVar5 + 0x20,lVar3);
    *(undefined1 *)(lVar5 + 0x21) = *(undefined1 *)(lVar3 + 1);
    return lVar5 + 0x18;
  }
  lVar5 = FUN_143492f00(param_1,param_2,param_3,(ulonglong)uVar2);
  return lVar5;
}



// FUNCTION 143491040 FUN_143491040 body=200 status=ok
// SIG undefined FUN_143491040(void)

longlong FUN_143491040(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = (uint *)*param_3;
  uVar1 = *puVar2;
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar1 = uVar1 ^ puVar2[2];
  }
  lVar4 = *param_1;
  if ((lVar4 != 0) &&
     (lVar3 = FUN_143493ee0(param_1,param_3,*(ulonglong *)(lVar4 + 8) & (ulonglong)uVar1),
     -1 < lVar3)) {
    lVar4 = lVar3 * 0x40 + lVar4;
    *(uint *)(lVar4 + 0x20) = *puVar2;
    *(uint *)(lVar4 + 0x24) = puVar2[1];
    *(uint *)(lVar4 + 0x28) = puVar2[2];
    *(char *)(lVar4 + 0x2c) = (char)puVar2[3];
    *(char *)(lVar4 + 0x30) = (char)puVar2[4];
    *(undefined1 *)(lVar4 + 0x31) = *(undefined1 *)((longlong)puVar2 + 0x11);
    *(undefined1 *)(lVar4 + 0x32) = *(undefined1 *)((longlong)puVar2 + 0x12);
    *(undefined1 *)(lVar4 + 0x33) = *(undefined1 *)((longlong)puVar2 + 0x13);
    FUN_143499930(lVar4 + 0x38,param_3[1]);
    return lVar4 + 0x20;
  }
  lVar4 = FUN_143493480(param_1,param_2,param_3,(ulonglong)uVar1);
  return lVar4;
}



// FUNCTION 143491110 FUN_143491110 body=194 status=ok
// SIG undefined FUN_143491110(void)

longlong FUN_143491110(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1432c4390((longlong)(*(ulonglong *)*param_3 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*(ulonglong *)*param_3 & 0xfffffffffffffffc) &
                        0x7fffffffffffffff,0x1505);
  lVar3 = *param_1;
  if ((lVar3 != 0) &&
     (lVar2 = FUN_1433ab450(param_1,param_3,*(ulonglong *)(lVar3 + 8) & uVar1), -1 < lVar2)) {
    lVar3 = (lVar2 + 1) * 0x20 + lVar3;
    FUN_1432c4d80(lVar3,*param_3);
    FUN_1432c4d80(lVar3 + 8,param_3[1]);
    return lVar3;
  }
  lVar3 = FUN_1432bcea0(param_1,param_2,param_3,uVar1);
  return lVar3;
}



// FUNCTION 1434911e0 FUN_1434911e0 body=272 status=ok
// SIG undefined FUN_1434911e0(void)

undefined8 *
FUN_1434911e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_14349db70();
  plVar4 = (longlong *)*param_1;
  uVar8 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar8 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar2 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = *param_3;
    *(undefined8 *)(lVar2 + 0x20) = param_3[1];
    return (undefined8 *)(lVar2 + 0x18);
  }
  do {
    uVar9 = uVar9 + 1 & uVar8;
    lVar3 = lVar5 + uVar9 * 0x18;
  } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
  uVar8 = *(ulonglong *)(lVar2 + 0x18) & uVar8;
  if (uVar8 == param_4) {
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    uVar10 = *(undefined4 *)param_3;
    uVar11 = *(undefined4 *)((longlong)param_3 + 4);
    uVar12 = *(undefined4 *)(param_3 + 1);
    uVar13 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(ulonglong *)(lVar2 + 0x10) = uVar9;
  }
  else {
    lVar1 = uVar8 * 3 + 2;
    uVar8 = *(ulonglong *)(lVar5 + lVar1 * 8);
    while (puVar7 = (ulonglong *)(lVar5 + lVar1 * 8), uVar8 != param_4) {
      lVar1 = *puVar7 * 3 + 2;
      uVar8 = *(ulonglong *)(lVar5 + lVar1 * 8);
    }
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    *puVar7 = uVar9;
    uVar10 = *(undefined4 *)param_3;
    uVar11 = *(undefined4 *)((longlong)param_3 + 4);
    uVar12 = *(undefined4 *)(param_3 + 1);
    uVar13 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  }
  *(undefined4 *)(lVar2 + 0x18) = uVar10;
  *(undefined4 *)(lVar2 + 0x1c) = uVar11;
  *(undefined4 *)(lVar2 + 0x20) = uVar12;
  *(undefined4 *)(lVar2 + 0x24) = uVar13;
  return (undefined8 *)(lVar2 + 0x18);
}



// FUNCTION 1434912f0 FUN_1434912f0 body=418 status=ok
// SIG undefined FUN_1434912f0(void)

longlong FUN_1434912f0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_14349134a;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_1434a64e0(param_1,param_2,lVar9);
LAB_14349134a:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar5 = *param_3;
    *(longlong *)(lVar9 + 0x18) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(char *)(lVar9 + 0x20) = (char)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar9 + 0x20);
      lVar5 = *param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(char *)(lVar9 + 0x20) = (char)param_3[1];
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      lVar5 = *param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(char *)(lVar9 + 0x20) = (char)param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 1434914a0 FUN_1434914a0 body=395 status=ok
// SIG undefined FUN_1434914a0(void)

longlong FUN_1434914a0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_14349dbc0();
  plVar2 = (longlong *)*param_1;
  uVar5 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar5 & param_4;
  lVar9 = param_4 * 0x20 + lVar3;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  uVar8 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar3 = *param_3;
    *(longlong *)(lVar9 + 0x18) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(longlong *)(lVar9 + 0x20) = param_3[1];
    lVar3 = param_3[2];
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    *(longlong *)(lVar9 + 0x28) = param_3[2];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar5;
      lVar7 = uVar8 * 0x20 + lVar3;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar5;
    if (uVar5 == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      lVar3 = *(longlong *)(lVar9 + 0x28);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      FUN_1434999d0(lVar9 + 0x18,param_3);
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      puVar6 = (ulonglong *)(uVar5 * 0x20 + 0x10 + lVar3);
      uVar5 = *puVar6;
      while (uVar5 != param_4) {
        puVar6 = (ulonglong *)(lVar3 + 0x10 + *puVar6 * 0x20);
        uVar5 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      lVar3 = *(longlong *)(lVar9 + 0x28);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      *puVar6 = uVar8;
      FUN_1434999d0(lVar9 + 0x18,param_3);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143491630 FUN_143491630 body=364 status=ok
// SIG undefined FUN_143491630(void)

longlong FUN_143491630(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_14349dc10();
  plVar2 = (longlong *)*param_1;
  uVar8 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar8 & param_4;
  lVar9 = param_4 * 0x38 + lVar3;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  uVar5 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar3 = *param_3;
    *(longlong *)(lVar9 + 0x18) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo(lVar9 + 0x20,param_3 + 1);
  }
  else {
    do {
      uVar5 = uVar5 + 1 & uVar8;
      lVar7 = uVar5 * 0x38 + lVar3;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar8;
    if (uVar8 == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo(lVar7 + 0x20,lVar9 + 0x20);
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar3;
      FUN_143499ee0(lVar9 + 0x20,param_3 + 1);
      *(ulonglong *)(lVar9 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar3 + 0x10 + uVar8 * 0x38);
      uVar8 = *puVar6;
      while (uVar8 != param_4) {
        puVar6 = (ulonglong *)(lVar3 + 0x10 + *puVar6 * 0x38);
        uVar8 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo(lVar7 + 0x20,lVar9 + 0x20);
      *puVar6 = uVar5;
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar3;
      FUN_143499ee0(lVar9 + 0x20,param_3 + 1);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 1434917a0 FUN_1434917a0 body=342 status=ok
// SIG undefined FUN_1434917a0(void)

longlong FUN_1434917a0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_14349dc60();
  plVar5 = (longlong *)*param_1;
  uVar9 = plVar5[1];
  *plVar5 = *plVar5 + 1;
  lVar6 = *param_1;
  param_4 = uVar9 & param_4;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x48);
  lVar2 = lVar6 + param_4 * 0x48;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    FUN_1434942b0(lVar2 + 0x18,param_3);
  }
  else {
    do {
      uVar10 = uVar10 + 1 & uVar9;
      lVar3 = lVar6 + uVar10 * 0x48;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x48) != -2);
    uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar7;
      FUN_1434942b0(lVar3 + 0x18,lVar2 + 0x18);
      FUN_143499af0(lVar2 + 0x18,param_3);
      *(ulonglong *)(lVar2 + 0x10) = uVar10;
    }
    else {
      lVar4 = uVar9 * 9 + 2;
      uVar9 = *(ulonglong *)(lVar6 + lVar4 * 8);
      while (puVar8 = (ulonglong *)(lVar6 + lVar4 * 8), uVar9 != param_4) {
        lVar4 = *puVar8 * 9 + 2;
        uVar9 = *(ulonglong *)(lVar6 + lVar4 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar7;
      FUN_1434942b0(lVar3 + 0x18,lVar2 + 0x18);
      *puVar8 = uVar10;
      lVar6 = *param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar2 + 0x18) = lVar6;
      FUN_143410a60(lVar2 + 0x20,param_3 + 1);
      FUN_143411240(lVar2 + 0x38,param_3 + 4);
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar2 + 0x18;
}



// FUNCTION 143491900 FUN_143491900 body=398 status=ok
// SIG undefined FUN_143491900(void)

ulonglong * FUN_143491900(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143491955;
    lVar8 = plVar4[1] * 2 + 2;
  }
  FUN_1434a6b80(param_1,param_2,lVar8);
LAB_143491955:
  plVar4 = (longlong *)*param_1;
  uVar9 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar9 & param_4;
  lVar8 = param_4 * 5 + 2;
  puVar2 = (ulonglong *)(lVar5 + lVar8 * 8);
  uVar7 = param_4;
  if (*(longlong *)(lVar5 + lVar8 * 8) == -2) {
    FUN_143494460(puVar2,param_3,0xffffffffffffffff);
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar9;
      lVar8 = lVar5 + uVar7 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar7 * 0x28) != -2);
    uVar9 = *(uint *)(puVar2[1] + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      FUN_143494540(lVar8 + 0x10,puVar2);
      uVar9 = *param_3;
      piVar1 = (int *)(uVar9 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(puVar2[1] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      puVar2[1] = uVar9;
      FUN_143410a60(puVar2 + 2,param_3 + 1);
      *puVar2 = uVar7;
    }
    else {
      lVar3 = uVar9 * 5 + 2;
      uVar9 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar6 = (ulonglong *)(lVar5 + lVar3 * 8), uVar9 != param_4) {
        lVar3 = *puVar6 * 5 + 2;
        uVar9 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      FUN_143494540(lVar8 + 0x10,puVar2);
      *puVar6 = uVar7;
      uVar9 = *param_3;
      piVar1 = (int *)(uVar9 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(puVar2[1] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      puVar2[1] = uVar9;
      FUN_143410a60(puVar2 + 2,param_3 + 1);
      *puVar2 = 0xffffffffffffffff;
    }
  }
  return puVar2 + 1;
}



// FUNCTION 143491a90 FUN_143491a90 body=423 status=ok
// SIG undefined FUN_143491a90(void)

longlong FUN_143491a90(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  
  FUN_14349dcb0();
  plVar2 = (longlong *)*param_1;
  uVar4 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar4 & param_4;
  lVar6 = param_4 * 0x30 + lVar3;
  uVar5 = param_4;
  if (*(longlong *)(lVar6 + 0x10) == -2) {
    *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
    lVar3 = *param_3;
    *(longlong *)(lVar6 + 0x18) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    FUN_143410ec0(lVar6 + 0x20,param_3 + 1);
    *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)((longlong)param_3 + 9);
  }
  else {
    do {
      uVar5 = uVar5 + 1 & uVar4;
      lVar7 = uVar5 * 0x30 + lVar3;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x18) + 0x1c) & uVar4;
    if (uVar4 == param_4) {
      FUN_1434945b0(lVar7 + 0x10,lVar6 + 0x10);
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar6 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar6 + 0x18) = lVar3;
      FUN_143411240(lVar6 + 0x20,param_3 + 1);
      *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)((longlong)param_3 + 9);
      *(ulonglong *)(lVar6 + 0x10) = uVar5;
    }
    else {
      puVar8 = (ulonglong *)(lVar3 + 0x10 + uVar4 * 0x30);
      uVar4 = *puVar8;
      while (uVar4 != param_4) {
        puVar8 = (ulonglong *)(lVar3 + 0x10 + *puVar8 * 0x30);
        uVar4 = *puVar8;
      }
      *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar6 + 0x10);
      lVar3 = *(longlong *)(lVar6 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143410ec0(lVar7 + 0x20,lVar6 + 0x20);
      *(undefined1 *)(lVar7 + 0x21) = *(undefined1 *)(lVar6 + 0x21);
      *puVar8 = uVar5;
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar6 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar6 + 0x18) = lVar3;
      FUN_143411240(lVar6 + 0x20,param_3 + 1);
      *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)((longlong)param_3 + 9);
      *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar6 + 0x18;
}



// FUNCTION 143491c40 FUN_143491c40 body=417 status=ok
// SIG undefined FUN_143491c40(void)

longlong FUN_143491c40(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_14349dd00();
  plVar7 = (longlong *)*param_1;
  uVar3 = plVar7[1];
  *plVar7 = *plVar7 + 1;
  lVar2 = *param_1;
  param_4 = uVar3 & param_4;
  lVar6 = param_4 * 0x20 + lVar2;
  uVar5 = param_4;
  if (*(longlong *)(lVar6 + 0x10) == -2) {
    *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
    lVar2 = *param_3;
    *(longlong *)(lVar6 + 0x18) = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    plVar7 = param_3 + 2;
    if (param_3 == (longlong *)0xfffffffffffffff8) {
      plVar7 = (longlong *)0x0;
    }
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    *(longlong *)(lVar6 + 0x28) = *plVar7;
    *(undefined ***)(lVar6 + 0x20) = &PTR_FUN_145b10000;
  }
  else {
    do {
      uVar5 = uVar5 + 1 & uVar3;
      lVar8 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x18) + 0x1c) & uVar3;
    if (uVar3 == param_4) {
      FUN_143494600(lVar8 + 0x10,lVar6 + 0x10);
      FUN_143499c10(lVar6 + 0x18,param_3);
      *(ulonglong *)(lVar6 + 0x10) = uVar5;
    }
    else {
      puVar4 = (ulonglong *)(uVar3 * 0x20 + 0x10 + lVar2);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar2 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar6 + 0x10);
      lVar2 = *(longlong *)(lVar6 + 0x18);
      *(longlong *)(lVar8 + 0x18) = lVar2;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + 1;
      plVar7 = (longlong *)(lVar6 + 0x28);
      if (lVar6 == -0x20) {
        plVar7 = (longlong *)0x0;
      }
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
      }
      *(longlong *)(lVar8 + 0x28) = *plVar7;
      *(undefined ***)(lVar8 + 0x20) = &PTR_FUN_145b10000;
      *puVar4 = uVar5;
      FUN_143499c10(lVar6 + 0x18,param_3);
      *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar6 + 0x18;
}



// FUNCTION 143491df0 FUN_143491df0 body=403 status=ok
// SIG undefined FUN_143491df0(void)

longlong FUN_143491df0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_14349dd50();
  plVar2 = (longlong *)*param_1;
  uVar5 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar5 & param_4;
  lVar9 = param_4 * 0x30 + lVar3;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  uVar6 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar3 = *param_3;
    *(longlong *)(lVar9 + 0x18) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    FUN_143410ec0(lVar9 + 0x20,param_3 + 1);
  }
  else {
    do {
      uVar6 = uVar6 + 1 & uVar5;
      lVar8 = uVar6 * 0x30 + lVar3;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar5;
    if (uVar5 == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar8 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143410ec0(lVar8 + 0x20,lVar9 + 0x20);
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar3;
      FUN_143411240(lVar9 + 0x20,param_3 + 1);
      *(ulonglong *)(lVar9 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar3 + 0x10 + uVar5 * 0x30);
      uVar5 = *puVar7;
      while (uVar5 != param_4) {
        puVar7 = (ulonglong *)(lVar3 + 0x10 + *puVar7 * 0x30);
        uVar5 = *puVar7;
      }
      *(longlong *)(lVar8 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar8 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143410ec0(lVar8 + 0x20,lVar9 + 0x20);
      *puVar7 = uVar6;
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar3;
      FUN_143411240(lVar9 + 0x20,param_3 + 1);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143491f90 FUN_143491f90 body=557 status=ok
// SIG undefined FUN_143491f90(void)

longlong FUN_143491f90(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143491fe3;
    lVar8 = plVar1[1] * 2 + 2;
  }
  FUN_1434a71c0(param_1,param_2,lVar8);
LAB_143491fe3:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar8 = *param_1;
  lVar10 = param_4 * 0x40 + lVar8;
  uVar6 = param_4;
  if (*(longlong *)(lVar10 + 0x10) == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined4 *)(lVar10 + 0x20) = *param_3;
    *(undefined4 *)(lVar10 + 0x24) = uVar3;
    *(undefined4 *)(lVar10 + 0x28) = uVar4;
    *(undefined4 *)(lVar10 + 0x2c) = uVar5;
    *(undefined4 *)(lVar10 + 0x30) = param_3[4];
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x48) = 0;
    FUN_14349d450((undefined8 *)(lVar10 + 0x38),*(undefined8 *)(param_3 + 6),
                  *(undefined8 *)(param_3 + 8));
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar9 = uVar6 * 0x40 + lVar8;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      FUN_1434943c0(lVar9 + 0x10,lVar10 + 0x10);
      *(undefined4 *)(lVar10 + 0x20) = *param_3;
      *(undefined4 *)(lVar10 + 0x24) = param_3[1];
      *(undefined4 *)(lVar10 + 0x28) = param_3[2];
      *(undefined1 *)(lVar10 + 0x2c) = *(undefined1 *)(param_3 + 3);
      *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)(param_3 + 4);
      *(undefined1 *)(lVar10 + 0x31) = *(undefined1 *)((longlong)param_3 + 0x11);
      *(undefined1 *)(lVar10 + 0x32) = *(undefined1 *)((longlong)param_3 + 0x12);
      *(undefined1 *)(lVar10 + 0x33) = *(undefined1 *)((longlong)param_3 + 0x13);
      FUN_143499930(lVar10 + 0x38,param_3 + 6);
      *(ulonglong *)(lVar10 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar8 + 0x10 + *(ulonglong *)(lVar10 + 0x18) * 0x40);
      uVar2 = *puVar7;
      while (uVar2 != param_4) {
        puVar7 = (ulonglong *)(lVar8 + 0x10 + *puVar7 * 0x40);
        uVar2 = *puVar7;
      }
      *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar10 + 0x10);
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      uVar3 = *(undefined4 *)(lVar10 + 0x24);
      uVar4 = *(undefined4 *)(lVar10 + 0x28);
      uVar5 = *(undefined4 *)(lVar10 + 0x2c);
      *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
      *(undefined4 *)(lVar9 + 0x24) = uVar3;
      *(undefined4 *)(lVar9 + 0x28) = uVar4;
      *(undefined4 *)(lVar9 + 0x2c) = uVar5;
      *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
      FUN_14349d450((undefined8 *)(lVar9 + 0x38),*(undefined8 *)(lVar10 + 0x38),
                    *(undefined8 *)(lVar10 + 0x40));
      *puVar7 = uVar6;
      *(undefined4 *)(lVar10 + 0x20) = *param_3;
      *(undefined4 *)(lVar10 + 0x24) = param_3[1];
      *(undefined4 *)(lVar10 + 0x28) = param_3[2];
      *(undefined1 *)(lVar10 + 0x2c) = *(undefined1 *)(param_3 + 3);
      *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)(param_3 + 4);
      *(undefined1 *)(lVar10 + 0x31) = *(undefined1 *)((longlong)param_3 + 0x11);
      *(undefined1 *)(lVar10 + 0x32) = *(undefined1 *)((longlong)param_3 + 0x12);
      *(undefined1 *)(lVar10 + 0x33) = *(undefined1 *)((longlong)param_3 + 0x13);
      FUN_143499930(lVar10 + 0x38,param_3 + 6);
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 1434921c0 FUN_1434921c0 body=474 status=ok
// SIG undefined FUN_1434921c0(void)

longlong FUN_1434921c0(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  FUN_14349dda0();
  plVar4 = (longlong *)*param_1;
  uVar5 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar6 = *param_1;
  param_4 = uVar5 & param_4;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x18);
  lVar1 = lVar6 + param_4 * 0x18;
  uVar11 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(lVar1 + 0x18) = *param_3;
    lVar6 = *(longlong *)(param_3 + 2);
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_3 + 2);
  }
  else {
    do {
      uVar11 = uVar11 + 1 & uVar5;
      lVar2 = lVar6 + uVar11 * 0x18;
    } while (*(longlong *)(lVar6 + 0x10 + uVar11 * 0x18) != -2);
    lVar10 = 4;
    uVar9 = 0x1505;
    do {
      pbVar3 = (byte *)(lVar1 + 0x17 + lVar10);
      lVar10 = lVar10 + -1;
      uVar9 = uVar9 * 0x1003f + (ulonglong)*pbVar3;
    } while (lVar10 != 0);
    if ((uVar9 & uVar5) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar7;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      lVar6 = *(longlong *)(lVar1 + 0x20);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
      FUN_143499d30(lVar1 + 0x18,param_3);
      *(ulonglong *)(lVar1 + 0x10) = uVar11;
    }
    else {
      lVar10 = (uVar9 & uVar5) * 3 + 2;
      uVar5 = *(ulonglong *)(lVar6 + lVar10 * 8);
      while (puVar8 = (ulonglong *)(lVar6 + lVar10 * 8), uVar5 != param_4) {
        lVar10 = *puVar8 * 3 + 2;
        uVar5 = *(ulonglong *)(lVar6 + lVar10 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar7;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      lVar6 = *(longlong *)(lVar1 + 0x20);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
      *puVar8 = uVar11;
      *(undefined4 *)(lVar1 + 0x18) = *param_3;
      lVar6 = *(longlong *)(param_3 + 2);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
      }
      lVar6 = *(longlong *)(lVar1 + 0x20);
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80();
      }
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar1 + 0x18;
}



// FUNCTION 1434923a0 FUN_1434923a0 body=346 status=ok
// SIG undefined FUN_1434923a0(void)

longlong FUN_1434923a0(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  FUN_14349ddf0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar7 = param_4 * 0x20 + lVar2;
  uVar4 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c5160(lVar7 + 0x20,param_3);
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_3 + 8);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar5 = uVar4 * 0x20 + lVar2;
    } while (*(longlong *)(lVar5 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_143494410(lVar5 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_3 + 8);
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
      FUN_1432c5160(lVar5 + 0x20,lVar7 + 0x20);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
      *puVar6 = uVar4;
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 143492500 FUN_143492500 body=381 status=ok
// SIG undefined FUN_143492500(void)

undefined8 *
FUN_143492500(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143492554;
    lVar8 = plVar3[1] * 2 + 2;
  }
  FUN_1434a63b0(param_1,param_2,lVar8);
LAB_143492554:
  plVar3 = (longlong *)*param_1;
  uVar7 = plVar3[1];
  *plVar3 = *plVar3 + 1;
  lVar4 = *param_1;
  param_4 = uVar7 & param_4;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar8 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)param_3[1];
    return (undefined8 *)(lVar8 + 0x18);
  }
  do {
    uVar9 = uVar9 + 1 & uVar7;
    lVar2 = lVar4 + uVar9 * 0x18;
  } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
  uVar7 = *(ulonglong *)(lVar8 + 0x18) & uVar7;
  if (uVar7 == param_4) {
    *(longlong *)(lVar2 + 0x10) = lVar5;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)param_3[1];
    *(ulonglong *)(lVar8 + 0x10) = uVar9;
  }
  else {
    lVar1 = uVar7 * 3 + 2;
    uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
    while (puVar6 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
      lVar1 = *puVar6 * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
    }
    *(longlong *)(lVar2 + 0x10) = lVar5;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
    *puVar6 = uVar9;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)param_3[1];
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
  }
  return (undefined8 *)(lVar8 + 0x18);
}



// FUNCTION 143492680 FUN_143492680 body=439 status=ok
// SIG undefined FUN_143492680(void)

longlong FUN_143492680(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_1434926da;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_1434a64e0(param_1,param_2,lVar9);
LAB_1434926da:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar5 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar9 + 0x20);
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)param_3[1];
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143492840 FUN_143492840 body=459 status=ok
// SIG undefined FUN_143492840(void)

longlong FUN_143492840(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_14349289a;
    lVar9 = plVar2[1] * 2 + 2;
  }
  FUN_1434a6630(param_1,param_2,lVar9);
LAB_14349289a:
  plVar2 = (longlong *)*param_1;
  uVar10 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar9 = *param_1;
  param_4 = uVar10 & param_4;
  lVar8 = param_4 * 0x20 + lVar9;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar7 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    lVar9 = *(longlong *)*param_3;
    *(longlong *)(lVar8 + 0x18) = lVar9;
    piVar1 = (int *)(lVar9 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4 = (undefined8 *)param_3[1];
    *(undefined8 *)(lVar8 + 0x20) = *puVar4;
    lVar9 = puVar4[1];
    if (lVar9 != 0) {
      *(uint *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(lVar8 + 0x28) = puVar4[1];
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar10;
      lVar6 = uVar7 * 0x20 + lVar9;
    } while (*(longlong *)(lVar6 + 0x10) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar8 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar6 + 0x10) = lVar3;
      lVar9 = *(longlong *)(lVar8 + 0x18);
      *(longlong *)(lVar6 + 0x18) = lVar9;
      piVar1 = (int *)(lVar9 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      lVar9 = *(longlong *)(lVar8 + 0x28);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      FUN_143499a60(lVar8 + 0x18,param_3);
      *(ulonglong *)(lVar8 + 0x10) = uVar7;
    }
    else {
      puVar5 = (ulonglong *)(lVar9 + 0x10 + uVar10 * 0x20);
      uVar10 = *puVar5;
      while (uVar10 != param_4) {
        puVar5 = (ulonglong *)(lVar9 + 0x10 + *puVar5 * 0x20);
        uVar10 = *puVar5;
      }
      *(longlong *)(lVar6 + 0x10) = lVar3;
      lVar9 = *(longlong *)(lVar8 + 0x18);
      *(longlong *)(lVar6 + 0x18) = lVar9;
      piVar1 = (int *)(lVar9 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      lVar9 = *(longlong *)(lVar8 + 0x28);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar5 = uVar7;
      FUN_143499a60(lVar8 + 0x18,param_3);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar8 + 0x18;
}



// FUNCTION 143492a10 FUN_143492a10 body=431 status=ok
// SIG undefined FUN_143492a10(void)

longlong FUN_143492a10(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_143492a6a;
    lVar6 = plVar2[1] * 2 + 2;
  }
  FUN_1434a67a0(param_1,param_2,lVar6);
LAB_143492a6a:
  plVar2 = (longlong *)*param_1;
  uVar8 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar6 = *param_1;
  param_4 = uVar8 & param_4;
  lVar9 = param_4 * 0x38 + lVar6;
  lVar3 = *(longlong *)(lVar9 + 0x10);
  uVar4 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar6 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo(lVar9 + 0x20,param_3[1]);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & uVar8;
      lVar7 = uVar4 * 0x38 + lVar6;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar8;
    if (uVar8 == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo(lVar7 + 0x20,lVar9 + 0x20);
      lVar6 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar6;
      FUN_143499ee0(lVar9 + 0x20,param_3[1]);
      *(ulonglong *)(lVar9 + 0x10) = uVar4;
    }
    else {
      puVar5 = (ulonglong *)(lVar6 + 0x10 + uVar8 * 0x38);
      uVar8 = *puVar5;
      while (uVar8 != param_4) {
        puVar5 = (ulonglong *)(lVar6 + 0x10 + *puVar5 * 0x38);
        uVar8 = *puVar5;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo(lVar7 + 0x20,lVar9 + 0x20);
      *puVar5 = uVar4;
      lVar6 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar6;
      FUN_143499ee0(lVar9 + 0x20,param_3[1]);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143492bc0 FUN_143492bc0 body=412 status=ok
// SIG undefined FUN_143492bc0(void)

longlong FUN_143492bc0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143492c1a;
    lVar10 = plVar4[1] * 2 + 2;
  }
  FUN_1434a69b0(param_1,param_2,lVar10);
LAB_143492c1a:
  plVar4 = (longlong *)*param_1;
  uVar8 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar8 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x48);
  lVar10 = lVar5 + param_4 * 0x48;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    Scaleform::
    HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Object::Watchpoint,Scaleform::GFx::ASStringHashFunctor>
    ::
    HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Object::Watchpoint,Scaleform::GFx::ASStringHashFunctor>
              (lVar10 + 0x18,param_3);
  }
  else {
    do {
      uVar9 = uVar9 + 1 & uVar8;
      lVar2 = lVar5 + uVar9 * 0x48;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x48) != -2);
    uVar8 = *(uint *)(*(longlong *)(lVar10 + 0x18) + 0x1c) & uVar8;
    if (uVar8 == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar6;
      FUN_1434942b0(lVar2 + 0x18,lVar10 + 0x18);
      FUN_143499b50(lVar10 + 0x18,param_3);
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar3 = uVar8 * 9 + 2;
      uVar8 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar3 * 8), uVar8 != param_4) {
        lVar3 = *puVar7 * 9 + 2;
        uVar8 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar6;
      FUN_1434942b0(lVar2 + 0x18,lVar10 + 0x18);
      *puVar7 = uVar9;
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar10 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar10 + 0x18) = lVar5;
      lVar5 = param_3[1];
      FUN_143410a60(lVar10 + 0x20,lVar5);
      FUN_143411240(lVar10 + 0x38,lVar5 + 0x18);
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar10 + 0x18;
}



// FUNCTION 143492d60 FUN_143492d60 body=401 status=ok
// SIG undefined FUN_143492d60(void)

ulonglong *
FUN_143492d60(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143492db5;
    lVar8 = plVar4[1] * 2 + 2;
  }
  FUN_1434a6b80(param_1,param_2,lVar8);
LAB_143492db5:
  plVar4 = (longlong *)*param_1;
  uVar9 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar9 & param_4;
  lVar8 = param_4 * 5 + 2;
  puVar2 = (ulonglong *)(lVar5 + lVar8 * 8);
  uVar7 = param_4;
  if (*(longlong *)(lVar5 + lVar8 * 8) == -2) {
    FUN_1434944d0(puVar2,param_3,0xffffffffffffffff);
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar9;
      lVar8 = lVar5 + uVar7 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar7 * 0x28) != -2);
    uVar9 = *(uint *)(puVar2[1] + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      FUN_143494540(lVar8 + 0x10,puVar2);
      uVar9 = *(ulonglong *)*param_3;
      piVar1 = (int *)(uVar9 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(puVar2[1] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      puVar2[1] = uVar9;
      FUN_143410a60(puVar2 + 2,param_3[1]);
      *puVar2 = uVar7;
    }
    else {
      lVar3 = uVar9 * 5 + 2;
      uVar9 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar6 = (ulonglong *)(lVar5 + lVar3 * 8), uVar9 != param_4) {
        lVar3 = *puVar6 * 5 + 2;
        uVar9 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      FUN_143494540(lVar8 + 0x10,puVar2);
      *puVar6 = uVar7;
      uVar9 = *(ulonglong *)*param_3;
      piVar1 = (int *)(uVar9 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(puVar2[1] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      puVar2[1] = uVar9;
      FUN_143410a60(puVar2 + 2,param_3[1]);
      *puVar2 = 0xffffffffffffffff;
    }
  }
  return puVar2 + 1;
}



// FUNCTION 143492f00 FUN_143492f00 body=459 status=ok
// SIG undefined FUN_143492f00(void)

longlong FUN_143492f00(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_143492f52;
    lVar7 = plVar2[1] * 2 + 2;
  }
  FUN_1434a6d50(param_1,param_2,lVar7);
LAB_143492f52:
  plVar2 = (longlong *)*param_1;
  uVar3 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar7 = *param_1;
  param_4 = uVar3 & param_4;
  lVar5 = param_4 * 0x30 + lVar7;
  uVar4 = param_4;
  if (*(longlong *)(lVar5 + 0x10) == -2) {
    *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    lVar7 = *(longlong *)*param_3;
    *(longlong *)(lVar5 + 0x18) = lVar7;
    piVar1 = (int *)(lVar7 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar7 = param_3[1];
    FUN_143410ec0(lVar5 + 0x20,lVar7);
    *(undefined1 *)(lVar5 + 0x21) = *(undefined1 *)(lVar7 + 1);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & uVar3;
      lVar6 = uVar4 * 0x30 + lVar7;
    } while (*(longlong *)(lVar6 + 0x10) != -2);
    uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x18) + 0x1c) & uVar3;
    if (uVar3 == param_4) {
      FUN_1434945b0(lVar6 + 0x10,lVar5 + 0x10);
      FUN_143499bb0(lVar5 + 0x18,param_3);
      *(ulonglong *)(lVar5 + 0x10) = uVar4;
    }
    else {
      puVar8 = (ulonglong *)(lVar7 + 0x10 + uVar3 * 0x30);
      uVar3 = *puVar8;
      while (uVar3 != param_4) {
        puVar8 = (ulonglong *)(lVar7 + 0x10 + *puVar8 * 0x30);
        uVar3 = *puVar8;
      }
      *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar5 + 0x10);
      lVar7 = *(longlong *)(lVar5 + 0x18);
      *(longlong *)(lVar6 + 0x18) = lVar7;
      piVar1 = (int *)(lVar7 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143410ec0(lVar6 + 0x20,lVar5 + 0x20);
      *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)(lVar5 + 0x21);
      *puVar8 = uVar4;
      lVar7 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar7 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar5 + 0x18) = lVar7;
      lVar7 = param_3[1];
      FUN_143411240(lVar5 + 0x20,lVar7);
      *(undefined1 *)(lVar5 + 0x21) = *(undefined1 *)(lVar7 + 1);
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar5 + 0x18;
}



// FUNCTION 1434930d0 FUN_1434930d0 body=465 status=ok
// SIG undefined FUN_1434930d0(void)

longlong FUN_1434930d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_14349312f;
    lVar6 = plVar3[1] * 2 + 2;
  }
  FUN_1434a6ec0(param_1,param_2,lVar6);
LAB_14349312f:
  plVar3 = (longlong *)*param_1;
  uVar8 = plVar3[1];
  *plVar3 = *plVar3 + 1;
  lVar6 = *param_1;
  param_4 = uVar8 & param_4;
  lVar5 = param_4 * 0x20 + lVar6;
  uVar4 = param_4;
  if (*(longlong *)(lVar5 + 0x10) == -2) {
    *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    lVar6 = *(longlong *)*param_3;
    *(longlong *)(lVar5 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    plVar3 = (longlong *)(param_3[1] + 8);
    if (param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    lVar6 = *plVar3;
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
    }
    *(longlong *)(lVar5 + 0x28) = *plVar3;
    *(undefined ***)(lVar5 + 0x20) = &PTR_FUN_145b10000;
  }
  else {
    do {
      uVar4 = uVar4 + 1 & uVar8;
      lVar7 = uVar4 * 0x20 + lVar6;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar8 = *(uint *)(*(longlong *)(lVar5 + 0x18) + 0x1c) & uVar8;
    if (uVar8 == param_4) {
      FUN_143494600(lVar7 + 0x10,lVar5 + 0x10);
      FUN_143499ca0(lVar5 + 0x18,param_3);
      *(ulonglong *)(lVar5 + 0x10) = uVar4;
    }
    else {
      puVar2 = (ulonglong *)(lVar6 + 0x10 + uVar8 * 0x20);
      uVar8 = *puVar2;
      while (uVar8 != param_4) {
        puVar2 = (ulonglong *)(lVar6 + 0x10 + *puVar2 * 0x20);
        uVar8 = *puVar2;
      }
      *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar5 + 0x10);
      lVar6 = *(longlong *)(lVar5 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      plVar3 = (longlong *)(lVar5 + 0x28);
      if (lVar5 == -0x20) {
        plVar3 = (longlong *)0x0;
      }
      lVar6 = *plVar3;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
      }
      *(longlong *)(lVar7 + 0x28) = *plVar3;
      *(undefined ***)(lVar7 + 0x20) = &PTR_FUN_145b10000;
      *puVar2 = uVar4;
      FUN_143499ca0(lVar5 + 0x18,param_3);
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar5 + 0x18;
}



// FUNCTION 1434932b0 FUN_1434932b0 body=454 status=ok
// SIG undefined FUN_1434932b0(void)

longlong FUN_1434932b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_14349330a;
    lVar6 = plVar2[1] * 2 + 2;
  }
  FUN_1434a7050(param_1,param_2,lVar6);
LAB_14349330a:
  plVar2 = (longlong *)*param_1;
  uVar8 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar6 = *param_1;
  param_4 = uVar8 & param_4;
  lVar9 = param_4 * 0x30 + lVar6;
  lVar3 = *(longlong *)(lVar9 + 0x10);
  uVar4 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar6 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    FUN_143410ec0(lVar9 + 0x20,param_3[1]);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & uVar8;
      lVar7 = uVar4 * 0x30 + lVar6;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar8;
    if (uVar8 == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143410ec0(lVar7 + 0x20,lVar9 + 0x20);
      lVar6 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar6;
      FUN_143411240(lVar9 + 0x20,param_3[1]);
      *(ulonglong *)(lVar9 + 0x10) = uVar4;
    }
    else {
      puVar5 = (ulonglong *)(lVar6 + 0x10 + uVar8 * 0x30);
      uVar8 = *puVar5;
      while (uVar8 != param_4) {
        puVar5 = (ulonglong *)(lVar6 + 0x10 + *puVar5 * 0x30);
        uVar8 = *puVar5;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143410ec0(lVar7 + 0x20,lVar9 + 0x20);
      *puVar5 = uVar4;
      lVar6 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar6;
      FUN_143411240(lVar9 + 0x20,param_3[1]);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143493480 FUN_143493480 body=551 status=ok
// SIG undefined FUN_143493480(void)

longlong FUN_143493480(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1434934d3;
    lVar10 = plVar1[1] * 2 + 2;
  }
  FUN_1434a71c0(param_1,param_2,lVar10);
LAB_1434934d3:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar10 = *param_1;
  lVar12 = param_4 * 0x40 + lVar10;
  uVar8 = param_4;
  if (*(longlong *)(lVar12 + 0x10) == -2) {
    *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    puVar2 = (undefined4 *)*param_3;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *(undefined4 *)(lVar12 + 0x20) = *puVar2;
    *(undefined4 *)(lVar12 + 0x24) = uVar5;
    *(undefined4 *)(lVar12 + 0x28) = uVar6;
    *(undefined4 *)(lVar12 + 0x2c) = uVar7;
    *(undefined4 *)(lVar12 + 0x30) = puVar2[4];
    puVar3 = (undefined8 *)param_3[1];
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(undefined8 *)(lVar12 + 0x48) = 0;
    FUN_14349d450((undefined8 *)(lVar12 + 0x38),*puVar3,puVar3[1]);
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar1[1];
      lVar11 = uVar8 * 0x40 + lVar10;
    } while (*(longlong *)(lVar11 + 0x10) != -2);
    if (*(ulonglong *)(lVar12 + 0x18) == param_4) {
      FUN_1434943c0(lVar11 + 0x10,lVar12 + 0x10);
      puVar2 = (undefined4 *)*param_3;
      *(undefined4 *)(lVar12 + 0x20) = *puVar2;
      *(undefined4 *)(lVar12 + 0x24) = puVar2[1];
      *(undefined4 *)(lVar12 + 0x28) = puVar2[2];
      *(undefined1 *)(lVar12 + 0x2c) = *(undefined1 *)(puVar2 + 3);
      *(undefined1 *)(lVar12 + 0x30) = *(undefined1 *)(puVar2 + 4);
      *(undefined1 *)(lVar12 + 0x31) = *(undefined1 *)((longlong)puVar2 + 0x11);
      *(undefined1 *)(lVar12 + 0x32) = *(undefined1 *)((longlong)puVar2 + 0x12);
      *(undefined1 *)(lVar12 + 0x33) = *(undefined1 *)((longlong)puVar2 + 0x13);
      FUN_143499930(lVar12 + 0x38,param_3[1]);
      *(ulonglong *)(lVar12 + 0x10) = uVar8;
    }
    else {
      puVar9 = (ulonglong *)(lVar10 + 0x10 + *(ulonglong *)(lVar12 + 0x18) * 0x40);
      uVar4 = *puVar9;
      while (uVar4 != param_4) {
        puVar9 = (ulonglong *)(lVar10 + 0x10 + *puVar9 * 0x40);
        uVar4 = *puVar9;
      }
      *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar12 + 0x10);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      uVar5 = *(undefined4 *)(lVar12 + 0x24);
      uVar6 = *(undefined4 *)(lVar12 + 0x28);
      uVar7 = *(undefined4 *)(lVar12 + 0x2c);
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar12 + 0x20);
      *(undefined4 *)(lVar11 + 0x24) = uVar5;
      *(undefined4 *)(lVar11 + 0x28) = uVar6;
      *(undefined4 *)(lVar11 + 0x2c) = uVar7;
      *(undefined4 *)(lVar11 + 0x30) = *(undefined4 *)(lVar12 + 0x30);
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined8 *)(lVar11 + 0x48) = 0;
      FUN_14349d450((undefined8 *)(lVar11 + 0x38),*(undefined8 *)(lVar12 + 0x38),
                    *(undefined8 *)(lVar12 + 0x40));
      *puVar9 = uVar8;
      puVar2 = (undefined4 *)*param_3;
      *(undefined4 *)(lVar12 + 0x20) = *puVar2;
      *(undefined4 *)(lVar12 + 0x24) = puVar2[1];
      *(undefined4 *)(lVar12 + 0x28) = puVar2[2];
      *(undefined1 *)(lVar12 + 0x2c) = *(undefined1 *)(puVar2 + 3);
      *(undefined1 *)(lVar12 + 0x30) = *(undefined1 *)(puVar2 + 4);
      *(undefined1 *)(lVar12 + 0x31) = *(undefined1 *)((longlong)puVar2 + 0x11);
      *(undefined1 *)(lVar12 + 0x32) = *(undefined1 *)((longlong)puVar2 + 0x12);
      *(undefined1 *)(lVar12 + 0x33) = *(undefined1 *)((longlong)puVar2 + 0x13);
      FUN_143499930(lVar12 + 0x38,param_3[1]);
      *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar12 + 0x18) = param_4;
  return lVar12 + 0x20;
}



// FUNCTION 1434936b0 FUN_1434936b0 body=509 status=ok
// SIG undefined FUN_1434936b0(void)

longlong FUN_1434936b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar11 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_14349370f;
    lVar11 = plVar3[1] * 2 + 2;
  }
  FUN_1434a7380(param_1,param_2,lVar11);
LAB_14349370f:
  plVar3 = (longlong *)*param_1;
  uVar4 = plVar3[1];
  *plVar3 = *plVar3 + 1;
  lVar5 = *param_1;
  param_4 = uVar4 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar11 = lVar5 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)*param_3;
    plVar3 = (longlong *)param_3[1];
    lVar5 = *plVar3;
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
    }
    *(longlong *)(lVar11 + 0x20) = *plVar3;
  }
  else {
    do {
      uVar10 = uVar10 + 1 & uVar4;
      lVar1 = lVar5 + uVar10 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar10 * 0x18) != -2);
    lVar9 = 4;
    uVar8 = 0x1505;
    do {
      pbVar2 = (byte *)(lVar11 + 0x17 + lVar9);
      lVar9 = lVar9 + -1;
      uVar8 = uVar8 * 0x1003f + (ulonglong)*pbVar2;
    } while (lVar9 != 0);
    if ((uVar8 & uVar4) == param_4) {
      *(longlong *)(lVar1 + 0x10) = lVar6;
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar11 + 0x18);
      lVar5 = *(longlong *)(lVar11 + 0x20);
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
      Scaleform::
      HashNode<enum_Scaleform::GFx::AS2::ASBuiltinType,Scaleform::Ptr<Scaleform::GFx::AS2::Object>,Scaleform::FixedSizeHash<enum_Scaleform::GFx::AS2::ASBuiltinType>_>
      ::operator=(lVar11 + 0x18,param_3);
      *(ulonglong *)(lVar11 + 0x10) = uVar10;
    }
    else {
      lVar9 = (uVar8 & uVar4) * 3 + 2;
      uVar4 = *(ulonglong *)(lVar5 + lVar9 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar9 * 8), uVar4 != param_4) {
        lVar9 = *puVar7 * 3 + 2;
        uVar4 = *(ulonglong *)(lVar5 + lVar9 * 8);
      }
      *(longlong *)(lVar1 + 0x10) = lVar6;
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar11 + 0x18);
      lVar5 = *(longlong *)(lVar11 + 0x20);
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
      *puVar7 = uVar10;
      *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)*param_3;
      plVar3 = (longlong *)param_3[1];
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
      }
      lVar5 = *(longlong *)(lVar11 + 0x20);
      if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
        FUN_1434a2b80();
      }
      *(longlong *)(lVar11 + 0x20) = *plVar3;
      *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar11 + 0x18;
}



// FUNCTION 1434938b0 FUN_1434938b0 body=414 status=ok
// SIG undefined FUN_1434938b0(void)

longlong FUN_1434938b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

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
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143493903;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_1434a7510(param_1,param_2,lVar5);
LAB_143493903:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar7 = param_4 * 0x20 + lVar5;
  uVar3 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c5160(lVar7 + 0x20,*param_3);
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar3 = uVar3 + 1 & plVar1[1];
      lVar4 = uVar3 * 0x20 + lVar5;
    } while (*(longlong *)(lVar4 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_143494410(lVar4 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)param_3[1];
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
      FUN_1432c5160(lVar4 + 0x20,lVar7 + 0x20);
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
      *puVar6 = uVar3;
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 143493a50 FUN_143493a50 body=133 status=ok
// SIG undefined FUN_143493a50(void)

ulonglong FUN_143493a50(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = *param_2;
  uVar3 = uVar1;
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar3 = param_2[2] ^ uVar1;
  }
  uVar6 = *(ulonglong *)(lVar2 + 8) & (ulonglong)uVar3;
  puVar5 = (ulonglong *)(lVar2 + 0x10 + uVar6 * 0x40);
  if ((*puVar5 != 0xfffffffffffffffe) && (uVar4 = uVar6, puVar5[1] == uVar6)) {
    while( true ) {
      if ((puVar5[1] == uVar6) && ((uint)puVar5[2] == uVar1)) {
        if (((uint)puVar5[2] >> 0x11 & 1) == 0) {
          return uVar4;
        }
        if ((uint)puVar5[3] == param_2[2]) {
          return uVar4;
        }
      }
      uVar4 = *puVar5;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar5 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x40);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493ae0 FUN_143493ae0 body=219 status=ok
// SIG undefined FUN_143493ae0(void)

ulonglong FUN_143493ae0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 3 + 2;
  puVar6 = (ulonglong *)(lVar2 + lVar1 * 8);
  uVar3 = *(ulonglong *)(lVar2 + 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar7 = param_3, (*(uint *)(puVar6[1] + 0x1c) & uVar3) == param_3)) {
    while( true ) {
      uVar4 = puVar6[1];
      if ((*(uint *)(uVar4 + 0x1c) & uVar3) == param_3) {
        plVar5 = (longlong *)*param_2;
        if (*(longlong *)(uVar4 + 0x10) == 0) {
          FUN_14335f970(uVar4);
        }
        if (*(longlong *)(*plVar5 + 0x10) == *(longlong *)(puVar6[1] + 0x10)) {
          return uVar7;
        }
      }
      uVar7 = *puVar6;
      if (uVar7 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(*param_1 + uVar7 * 0x18 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493bc0 FUN_143493bc0 body=222 status=ok
// SIG undefined FUN_143493bc0(void)

ulonglong FUN_143493bc0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 9 + 2;
  uVar3 = *(ulonglong *)(lVar2 + 8);
  puVar6 = (ulonglong *)(lVar2 + lVar1 * 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar7 = param_3, (*(uint *)(puVar6[1] + 0x1c) & uVar3) == param_3)) {
    while( true ) {
      uVar4 = puVar6[1];
      if ((*(uint *)(uVar4 + 0x1c) & uVar3) == param_3) {
        plVar5 = (longlong *)*param_2;
        if (*(longlong *)(uVar4 + 0x10) == 0) {
          FUN_14335f970(uVar4);
        }
        if (*(longlong *)(*plVar5 + 0x10) == *(longlong *)(puVar6[1] + 0x10)) {
          return uVar7;
        }
      }
      uVar7 = *puVar6;
      if (uVar7 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(*param_1 + uVar7 * 0x48 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493ca0 FUN_143493ca0 body=222 status=ok
// SIG undefined FUN_143493ca0(void)

ulonglong FUN_143493ca0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 5 + 2;
  uVar3 = *(ulonglong *)(lVar2 + 8);
  puVar6 = (ulonglong *)(lVar2 + lVar1 * 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar7 = param_3, (*(uint *)(puVar6[1] + 0x1c) & uVar3) == param_3)) {
    while( true ) {
      uVar4 = puVar6[1];
      if ((*(uint *)(uVar4 + 0x1c) & uVar3) == param_3) {
        plVar5 = (longlong *)*param_2;
        if (*(longlong *)(uVar4 + 0x10) == 0) {
          FUN_14335f970(uVar4);
        }
        if (*(longlong *)(*plVar5 + 0x10) == *(longlong *)(puVar6[1] + 0x10)) {
          return uVar7;
        }
      }
      uVar7 = *puVar6;
      if (uVar7 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(*param_1 + uVar7 * 0x28 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493d80 FUN_143493d80 body=222 status=ok
// SIG undefined FUN_143493d80(void)

ulonglong FUN_143493d80(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(*param_1 + 8);
  puVar4 = (ulonglong *)(*param_1 + 0x10 + param_3 * 0x30);
  if ((*puVar4 != 0xfffffffffffffffe) &&
     (uVar5 = param_3, (*(uint *)(puVar4[1] + 0x1c) & uVar1) == param_3)) {
    while( true ) {
      uVar2 = puVar4[1];
      if ((*(uint *)(uVar2 + 0x1c) & uVar1) == param_3) {
        plVar3 = (longlong *)*param_2;
        if (*(longlong *)(uVar2 + 0x10) == 0) {
          FUN_14335f970(uVar2);
        }
        if (*(longlong *)(*plVar3 + 0x10) == *(longlong *)(puVar4[1] + 0x10)) {
          return uVar5;
        }
      }
      uVar5 = *puVar4;
      if (uVar5 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)(*param_1 + 0x10 + uVar5 * 0x30);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493e60 FUN_143493e60 body=128 status=ok
// SIG undefined FUN_143493e60(void)

ulonglong FUN_143493e60(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  lVar1 = *param_1;
  puVar3 = (ulonglong *)(lVar1 + 0x10 + param_3 * 0x30);
  if ((*puVar3 != 0xfffffffffffffffe) &&
     (uVar2 = param_3,
     ((ulonglong)*(uint *)(puVar3[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar3[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3) &&
         (puVar3[1] == *(ulonglong *)*param_2)) {
        return uVar2;
      }
      uVar2 = *puVar3;
      if (uVar2 == 0xffffffffffffffff) break;
      puVar3 = (ulonglong *)(lVar1 + 0x10 + uVar2 * 0x30);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493ee0 FUN_143493ee0 body=99 status=ok
// SIG undefined FUN_143493ee0(void)

longlong FUN_143493ee0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_3 * 0x40 + 0x10 + *param_1);
  if ((*plVar1 != -2) && (lVar2 = param_3, plVar1[1] == param_3)) {
    while( true ) {
      if (plVar1[1] == param_3) {
        if ((*(uint *)(plVar1 + 2) == *(uint *)*param_2) &&
           (((*(uint *)(plVar1 + 2) >> 0x11 & 1) == 0 ||
            (*(uint *)(plVar1 + 3) == ((uint *)*param_2)[2])))) {
          return lVar2;
        }
      }
      lVar2 = *plVar1;
      if (lVar2 == -1) break;
      plVar1 = (longlong *)(lVar2 * 0x40 + 0x10 + *param_1);
    }
  }
  return -1;
}



// FUNCTION 143493f50 FUN_143493f50 body=128 status=ok
// SIG undefined FUN_143493f50(void)

ulonglong FUN_143493f50(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  lVar1 = *param_1;
  puVar3 = (ulonglong *)(lVar1 + 0x10 + param_3 * 0x20);
  if ((*puVar3 != 0xfffffffffffffffe) &&
     (uVar2 = param_3,
     ((ulonglong)*(uint *)(puVar3[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar3[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3) &&
         (puVar3[1] == *param_2)) {
        return uVar2;
      }
      uVar2 = *puVar3;
      if (uVar2 == 0xffffffffffffffff) break;
      puVar3 = (ulonglong *)(lVar1 + 0x10 + uVar2 * 0x20);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143493fd0 FUN_143493fd0 body=125 status=ok
// SIG undefined FUN_143493fd0(void)

ulonglong FUN_143493fd0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 9 + 2;
  puVar4 = (ulonglong *)(lVar2 + lVar1 * 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar3 = param_3,
     ((ulonglong)*(uint *)(puVar4[1] + 0x1c) & *(ulonglong *)(lVar2 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar4[1] + 0x1c) & *(ulonglong *)(lVar2 + 8)) == param_3) &&
         (puVar4[1] == *param_2)) {
        return uVar3;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)(lVar2 + uVar3 * 0x48 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143494050 FUN_143494050 body=125 status=ok
// SIG undefined FUN_143494050(void)

ulonglong FUN_143494050(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 5 + 2;
  puVar4 = (ulonglong *)(lVar2 + lVar1 * 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar3 = param_3,
     ((ulonglong)*(uint *)(puVar4[1] + 0x1c) & *(ulonglong *)(lVar2 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar4[1] + 0x1c) & *(ulonglong *)(lVar2 + 8)) == param_3) &&
         (puVar4[1] == *param_2)) {
        return uVar3;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)(lVar2 + uVar3 * 0x28 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1434940d0 FUN_1434940d0 body=125 status=ok
// SIG undefined FUN_1434940d0(void)

ulonglong FUN_1434940d0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  lVar1 = *param_1;
  puVar3 = (ulonglong *)(lVar1 + 0x10 + param_3 * 0x30);
  if ((*puVar3 != 0xfffffffffffffffe) &&
     (uVar2 = param_3,
     ((ulonglong)*(uint *)(puVar3[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar3[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3) &&
         (puVar3[1] == *param_2)) {
        return uVar2;
      }
      uVar2 = *puVar3;
      if (uVar2 == 0xffffffffffffffff) break;
      puVar3 = (ulonglong *)(lVar1 + 0x10 + uVar2 * 0x30);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143494150 FUN_143494150 body=214 status=ok
// SIG undefined FUN_143494150(void)

ulonglong FUN_143494150(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar1 = *param_1;
  lVar5 = param_3 * 3 + 2;
  puVar6 = (ulonglong *)(lVar1 + lVar5 * 8);
  if (*(longlong *)(lVar1 + lVar5 * 8) != -2) {
    uVar3 = 0x1505;
    lVar5 = 4;
    do {
      lVar2 = lVar5 + 7;
      lVar5 = lVar5 + -1;
      uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)((longlong)puVar6 + lVar2);
    } while (lVar5 != 0);
    uVar4 = param_3;
    if ((uVar3 & *(ulonglong *)(lVar1 + 8)) == param_3) {
      while( true ) {
        lVar5 = 4;
        uVar3 = 0x1505;
        do {
          lVar2 = lVar5 + 7;
          lVar5 = lVar5 + -1;
          uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)((longlong)puVar6 + lVar2);
        } while (lVar5 != 0);
        if (((uVar3 & *(ulonglong *)(lVar1 + 8)) == param_3) && ((int)puVar6[1] == *param_2)) {
          return uVar4;
        }
        uVar4 = *puVar6;
        if (uVar4 == 0xffffffffffffffff) break;
        puVar6 = (ulonglong *)(lVar1 + uVar4 * 0x18 + 0x10);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143494230 FUN_143494230 body=113 status=ok
// SIG undefined FUN_143494230(void)

longlong * FUN_143494230(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = param_1[1];
  FUN_1434a39d0(param_1,param_1,uVar3);
  if (uVar1 < uVar3) {
    puVar2 = (undefined8 *)(*param_1 + uVar1 * 8);
    for (lVar4 = uVar3 - uVar1; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
  }
  return param_1;
}



// FUNCTION 1434942b0 FUN_1434942b0 body=127 status=ok
// SIG undefined FUN_1434942b0(void)

longlong * FUN_1434942b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[2] = 0;
  if (param_2[2] != 0) {
    FUN_1434109d0(param_1 + 1,param_2[2],*(byte *)(param_2 + 3) & 1);
  }
  FUN_143410ec0(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 143494330 HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Object::Watchpoint,Scaleform::GFx::ASStringHashFunctor> body=131 status=ok
// SIG undefined HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Object::Watchpoint,Scaleform::GFx::ASStringHashFunctor>(void)

longlong *
Scaleform::
HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Object::Watchpoint,Scaleform::GFx::ASStringHashFunctor>
::
HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Object::Watchpoint,Scaleform::GFx::ASStringHashFunctor>
          (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)*param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  plVar3 = (longlong *)param_2[1];
  *(undefined1 *)(param_1 + 3) = 0;
  lVar2 = *plVar3;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[2] = 0;
  if (plVar3[1] != 0) {
    FUN_1434109d0(param_1 + 1,plVar3[1],*(byte *)(plVar3 + 2) & 1);
  }
  FUN_143410ec0(param_1 + 4,plVar3 + 3);
  return param_1;
}



// FUNCTION 1434943c0 FUN_1434943c0 body=76 status=ok
// SIG undefined FUN_1434943c0(void)

undefined8 * FUN_1434943c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_14349d450(param_1 + 5,param_2[5],param_2[6]);
  return param_1;
}



// FUNCTION 143494410 FUN_143494410 body=75 status=ok
// SIG undefined FUN_143494410(void)

undefined8 * FUN_143494410(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c5160(param_1 + 2,param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 143494460 FUN_143494460 body=98 status=ok
// SIG undefined FUN_143494460(void)

undefined8 * FUN_143494460(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = param_3;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = 0;
  if (param_2[2] != 0) {
    FUN_1434109d0(param_1 + 2,param_2[2],*(byte *)(param_2 + 3) & 1);
  }
  return param_1;
}



// FUNCTION 1434944d0 FUN_1434944d0 body=102 status=ok
// SIG undefined FUN_1434944d0(void)

undefined8 * FUN_1434944d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = param_3;
  lVar2 = *(longlong *)*param_2;
  param_1[1] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  plVar3 = (longlong *)param_2[1];
  *(undefined1 *)(param_1 + 4) = 0;
  lVar2 = *plVar3;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = 0;
  if (plVar3[1] != 0) {
    FUN_1434109d0(param_1 + 2,plVar3[1],*(byte *)(plVar3 + 2) & 1);
  }
  return param_1;
}



// FUNCTION 143494540 FUN_143494540 body=104 status=ok
// SIG undefined FUN_143494540(void)

undefined8 * FUN_143494540(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = 0;
  if (param_2[3] != 0) {
    FUN_1434109d0(param_1 + 2,param_2[3],*(byte *)(param_2 + 4) & 1);
  }
  return param_1;
}



// FUNCTION 1434945b0 FUN_1434945b0 body=77 status=ok
// SIG undefined FUN_1434945b0(void)

undefined8 * FUN_1434945b0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  FUN_143410ec0(param_1 + 2,param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  return param_1;
}



// FUNCTION 143494600 FUN_143494600 body=77 status=ok
// SIG undefined FUN_143494600(void)

undefined8 * FUN_143494600(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  plVar3 = param_2 + 3;
  if (param_2 == (undefined8 *)0xfffffffffffffff0) {
    plVar3 = (longlong *)0x0;
  }
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = *plVar3;
  param_1[2] = &PTR_FUN_145b10000;
  return param_1;
}



// FUNCTION 143494650 FUN_143494650 body=275 status=ok
// SIG undefined FUN_143494650(void)

undefined8 * FUN_143494650(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x108,0);
  if ((ulonglong)param_1[6] < 0xf) {
    if (param_1[4] == 0) {
      local_res8[0] = 2;
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1 + 4,0x80,local_res8);
    }
    else {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x58))();
    }
    param_1[4] = uVar3;
    param_1[6] = 0x10;
  }
  uVar4 = param_1[5] + 1;
  if (uVar4 < (ulonglong)param_1[5]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[6] >> 1 <= uVar4) goto LAB_143494717;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[6]) goto LAB_143494717;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(param_1 + 4,param_1 + 4,uVar5);
LAB_143494717:
  param_1[5] = uVar4;
  puVar1 = (undefined8 *)(param_1[4] + -8 + uVar4 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = puVar2;
  }
  param_1[1] = puVar2;
  param_1[2] = puVar2 + 0x20;
  *param_1 = puVar2;
  param_1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  return param_1;
}



// FUNCTION 143494770 FUN_143494770 body=281 status=ok
// SIG undefined FUN_143494770(void)

undefined8 * FUN_143494770(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar2 = (undefined1 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x408,0);
  if ((ulonglong)param_1[6] < 0xf) {
    if (param_1[4] == 0) {
      local_res8[0] = 2;
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1 + 4,0x80,local_res8);
    }
    else {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x58))();
    }
    param_1[4] = uVar3;
    param_1[6] = 0x10;
  }
  uVar4 = param_1[5] + 1;
  if (uVar4 < (ulonglong)param_1[5]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[6] >> 1 <= uVar4) goto LAB_14349483a;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[6]) goto LAB_14349483a;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(param_1 + 4,param_1 + 4,uVar5);
LAB_14349483a:
  param_1[5] = uVar4;
  puVar1 = (undefined8 *)(param_1[4] + -8 + uVar4 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = puVar2;
  }
  param_1[1] = puVar2;
  param_1[2] = puVar2 + 0x400;
  *param_1 = puVar2;
  param_1[3] = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return param_1;
}



// FUNCTION 143494890 FUN_143494890 body=129 status=ok
// SIG undefined FUN_143494890(void)

undefined8 *
FUN_143494890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14345d720();
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_LAB_145b0ea30;
  param_1[4] = &PTR_LAB_145b0ea78;
  param_1[0x13] = &PTR_LAB_145b0eb20;
  FUN_1434230f0(param_1 + 0x13,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494920 FUN_143494920 body=187 status=ok
// SIG undefined FUN_143494920(void)

undefined8 *
FUN_143494920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0f0d8;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0f180;
  param_1[4] = &PTR_LAB_145b0f1c8;
  param_1[0xd] = &PTR_LAB_145b0f270;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434949e0 FUN_1434949e0 body=126 status=ok
// SIG undefined FUN_1434949e0(void)

undefined8 *
FUN_1434949e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143496250();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b10ce8;
  param_1[4] = &PTR_LAB_145b10d30;
  param_1[0xe] = &PTR_LAB_145b10dd8;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494a60 FUN_143494a60 body=193 status=ok
// SIG undefined FUN_143494a60(void)

undefined8 *
FUN_143494a60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0dff0;
  param_1[4] = &PTR_LAB_145b0e038;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b0e0e0;
  param_1[4] = &PTR_LAB_145b0e128;
  param_1[0xf] = &PTR_LAB_145b0e1d0;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494b30 FUN_143494b30 body=189 status=ok
// SIG undefined FUN_143494b30(void)

undefined8 *
FUN_143494b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b104d0;
  param_1[4] = &PTR_LAB_145b10518;
  param_1[0xe] = &PTR_LAB_145b105c0;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494bf0 FUN_143494bf0 body=126 status=ok
// SIG undefined FUN_143494bf0(void)

undefined8 *
FUN_143494bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434962d0();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b10ac0;
  param_1[4] = &PTR_LAB_145b10b08;
  param_1[0xe] = &PTR_LAB_145b10bb0;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494c70 FUN_143494c70 body=192 status=ok
// SIG undefined FUN_143494c70(void)

undefined8 *
FUN_143494c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_145b0ee20;
  param_1[4] = &PTR_LAB_145b0ee68;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b0ef10;
  param_1[4] = &PTR_LAB_145b0ef58;
  param_1[0xe] = &PTR_LAB_145b0f000;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494d30 FUN_143494d30 body=189 status=ok
// SIG undefined FUN_143494d30(void)

undefined8 *
FUN_143494d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0cb20;
  param_1[4] = &PTR_LAB_145b0cb68;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b0cc10;
  param_1[4] = &PTR_LAB_145b0cc58;
  param_1[0xe] = &PTR_LAB_145b0cd00;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494df0 FUN_143494df0 body=126 status=ok
// SIG undefined FUN_143494df0(void)

undefined8 *
FUN_143494df0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143496610();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b10f10;
  param_1[4] = &PTR_LAB_145b10f58;
  param_1[0xe] = &PTR_LAB_145b11000;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494e70 FUN_143494e70 body=189 status=ok
// SIG undefined FUN_143494e70(void)

undefined8 *
FUN_143494e70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0d450;
  param_1[4] = &PTR_LAB_145b0d498;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b0d540;
  param_1[4] = &PTR_LAB_145b0d588;
  param_1[0xe] = &PTR_LAB_145b0d630;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143494f30 FUN_143494f30 body=199 status=ok
// SIG undefined FUN_143494f30(void)

undefined8 *
FUN_143494f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0d8e8;
  param_1[4] = &PTR_LAB_145b0d930;
  FUN_1432bfaf0(param_1 + 0xe);
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_LAB_145b0d9d8;
  param_1[4] = &PTR_LAB_145b0da20;
  param_1[0x12] = &PTR_LAB_145b0dac8;
  FUN_1434230f0(param_1 + 0x12,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495000 FUN_143495000 body=190 status=ok
// SIG undefined FUN_143495000(void)

undefined8 *
FUN_143495000(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0f300;
  param_1[4] = &PTR_LAB_145b0f348;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_LAB_145b0f3f0;
  param_1[4] = &PTR_LAB_145b0f438;
  param_1[0x13] = &PTR_LAB_145b0f4e0;
  FUN_1434230f0(param_1 + 0x13,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434950c0 FUN_1434950c0 body=126 status=ok
// SIG undefined FUN_1434950c0(void)

undefined8 *
FUN_1434950c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143496720();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b10670;
  param_1[4] = &PTR_LAB_145b106b8;
  param_1[0xe] = &PTR_LAB_145b10760;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495140 FUN_143495140 body=187 status=ok
// SIG undefined FUN_143495140(void)

undefined8 *
FUN_143495140(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0e400;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0e4a8;
  param_1[4] = &PTR_LAB_145b0e4f0;
  param_1[0xd] = &PTR_LAB_145b0e598;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495200 FUN_143495200 body=126 status=ok
// SIG undefined FUN_143495200(void)

undefined8 *
FUN_143495200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143496b90();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b10898;
  param_1[4] = &PTR_LAB_145b108e0;
  param_1[0xe] = &PTR_LAB_145b10988;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495280 FUN_143495280 body=187 status=ok
// SIG undefined FUN_143495280(void)

undefined8 *
FUN_143495280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0f570;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0f618;
  param_1[4] = &PTR_LAB_145b0f660;
  param_1[0xd] = &PTR_LAB_145b0f708;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495340 FUN_143495340 body=205 status=ok
// SIG undefined FUN_143495340(void)

undefined8 *
FUN_143495340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0c098;
  param_1[4] = &PTR_LAB_145b0c0e0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xd] = 0xbff0000000000000;
  param_1[0xe] = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b0c188;
  param_1[4] = &PTR_LAB_145b0c1d0;
  param_1[0xf] = &PTR_LAB_145b0c278;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495410 FUN_143495410 body=187 status=ok
// SIG undefined FUN_143495410(void)

undefined8 *
FUN_143495410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434954d0 FUN_1434954d0 body=187 status=ok
// SIG undefined FUN_1434954d0(void)

undefined8 *
FUN_1434954d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0d6c0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0d768;
  param_1[4] = &PTR_LAB_145b0d7b0;
  param_1[0xd] = &PTR_LAB_145b0d858;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495590 FUN_143495590 body=189 status=ok
// SIG undefined FUN_143495590(void)

undefined8 *
FUN_143495590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0bdd8;
  param_1[4] = &PTR_LAB_145b0be48;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b0bef0;
  param_1[4] = &PTR_LAB_145b0bf60;
  param_1[0xe] = &PTR_LAB_145b0c008;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495650 FUN_143495650 body=198 status=ok
// SIG undefined FUN_143495650(void)

undefined8 *
FUN_143495650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0bb68;
  param_1[4] = &PTR_LAB_145b0bbb0;
  param_1[0xd] = 0;
  FUN_14342ff50(param_1 + 4,param_2,param_3);
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b0bc58;
  param_1[4] = &PTR_LAB_145b0bca0;
  param_1[0xf] = &PTR_LAB_145b0bd48;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495720 FUN_143495720 body=126 status=ok
// SIG undefined FUN_143495720(void)

undefined8 *
FUN_143495720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143496f00();
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b0eca0;
  param_1[4] = &PTR_LAB_145b0ece8;
  param_1[0xf] = &PTR_LAB_145b0ed90;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434957a0 FUN_1434957a0 body=126 status=ok
// SIG undefined FUN_1434957a0(void)

undefined8 * FUN_1434957a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143495820 FUN_143495820 body=126 status=ok
// SIG undefined FUN_143495820(void)

undefined8 *
FUN_143495820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414820();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434958a0 FUN_1434958a0 body=187 status=ok
// SIG undefined FUN_1434958a0(void)

undefined8 *
FUN_1434958a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0e1d8;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0e280;
  param_1[4] = &PTR_LAB_145b0e2c8;
  param_1[0xd] = &PTR_LAB_145b0e370;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495960 FUN_143495960 body=187 status=ok
// SIG undefined FUN_143495960(void)

undefined8 *
FUN_143495960(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0db58;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0dc00;
  param_1[4] = &PTR_LAB_145b0dc48;
  param_1[0xd] = &PTR_LAB_145b0dcf0;
  FUN_1434230f0(param_1 + 0xd,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495a20 FUN_143495a20 body=126 status=ok
// SIG undefined FUN_143495a20(void)

undefined8 *
FUN_143495a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434970a0();
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b0ff08;
  param_1[4] = &PTR_LAB_145b0ff50;
  param_1[0xf] = &PTR_LAB_145b0fff8;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495aa0 FUN_143495aa0 body=212 status=ok
// SIG undefined FUN_143495aa0(void)

undefined8 *
FUN_143495aa0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0e6d0;
  param_1[4] = &PTR_LAB_145b0e718;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x138);
  param_1[0xd] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_145b0e7c0;
  param_1[4] = &PTR_LAB_145b0e808;
  param_1[0xe] = &PTR_LAB_145b0e8b0;
  FUN_1434230f0(param_1 + 0xe,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495b80 FUN_143495b80 body=129 status=ok
// SIG undefined FUN_143495b80(void)

undefined8 *
FUN_143495b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143497120();
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_LAB_145b0c430;
  param_1[4] = &PTR_LAB_145b0c478;
  param_1[0x13] = &PTR_LAB_145b0c520;
  FUN_1434230f0(param_1 + 0x13,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495c10 FUN_143495c10 body=193 status=ok
// SIG undefined FUN_143495c10(void)

undefined8 *
FUN_143495c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b0d2d0;
  param_1[4] = &PTR_LAB_145b0d318;
  param_1[0xf] = &PTR_LAB_145b0d3c0;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495ce0 FUN_143495ce0 body=129 status=ok
// SIG undefined FUN_143495ce0(void)

undefined8 *
FUN_143495ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434972a0();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_LAB_145b0fc98;
  param_1[4] = &PTR_LAB_145b0fce0;
  param_1[0x1c] = &PTR_LAB_145b0fd88;
  FUN_1434230f0(param_1 + 0x1c,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495d70 FUN_143495d70 body=199 status=ok
// SIG undefined FUN_143495d70(void)

undefined8 *
FUN_143495d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b10150;
  param_1[4] = &PTR_LAB_145b10198;
  FUN_1433a4740(param_1 + 0xd);
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_LAB_145b10240;
  param_1[4] = &PTR_LAB_145b10288;
  param_1[0x12] = &PTR_LAB_145b10330;
  FUN_1434230f0(param_1 + 0x12,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495e40 FUN_143495e40 body=129 status=ok
// SIG undefined FUN_143495e40(void)

undefined8 *
FUN_143495e40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143497340();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_LAB_145b0de70;
  param_1[4] = &PTR_LAB_145b0deb8;
  param_1[0x12] = &PTR_LAB_145b0df60;
  FUN_1434230f0(param_1 + 0x12,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 143495ed0 FUN_143495ed0 body=214 status=ok
// SIG undefined FUN_143495ed0(void)

undefined8 * FUN_143495ed0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0xff00;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 2;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if ((RefCountNTSImpl *)param_1[2] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[2]);
  }
  param_1[2] = param_2;
  if ((RefCountNTSImpl *)param_1[3] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[3]);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 5) = param_3[2];
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_3 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)((longlong)param_3 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)((longlong)param_3 + 0x13);
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 143495fb0 FUN_143495fb0 body=106 status=ok
// SIG undefined FUN_143495fb0(void)

undefined8 * FUN_143495fb0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0xff00;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((RefCountNTSImpl *)param_1[3] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[3]);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 143496020 FUN_143496020 body=122 status=ok
// SIG undefined FUN_143496020(void)

undefined8 * FUN_143496020(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 4) = 0;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = 0;
  if (param_2[3] != 0) {
    FUN_1434109d0(param_1 + 2,param_2[3],*(byte *)(param_2 + 4) & 1);
  }
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 1434960a0 FUN_1434960a0 body=154 status=ok
// SIG undefined FUN_1434960a0(void)

undefined8 * FUN_1434960a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = param_2[5];
  uVar2 = param_2[4];
  if (lVar1 != 0) {
    FUN_1434a3b40(param_1 + 4,param_1 + 4,lVar1);
    FUN_14349e780(param_1[4],lVar1,uVar2);
  }
  return param_1;
}



// FUNCTION 143496140 FUN_143496140 body=270 status=ok
// SIG undefined FUN_143496140(void)

undefined8 * FUN_143496140(undefined8 *param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35) = 0xff0000;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffffb;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 3;
  *param_1 = &PTR_FUN_145af8320;
  *(float *)(param_1 + 4) = param_2 * 20.0;
  *(float *)((longlong)param_1 + 0x24) = param_3 * 20.0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f490fdb;
  *(undefined4 *)(param_1 + 9) = 0x42a00000;
  fVar1 = _guard_xfg_dispatch_icall_nop(0.7853982);
  fVar2 = _guard_xfg_dispatch_icall_nop(0.7853982);
  *(float *)(param_1 + 5) = fVar1 * 80.0;
  *(float *)((longlong)param_1 + 0x2c) = fVar2 * 80.0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 0xa0;
  *(undefined4 *)((longlong)param_1 + 0x35) = 0xffff0000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0xff;
  return param_1;
}



// FUNCTION 143496250 FUN_143496250 body=125 status=ok
// SIG undefined FUN_143496250(void)

undefined8 * FUN_143496250(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10c40;
  return param_1;
}



// FUNCTION 1434962d0 FUN_1434962d0 body=125 status=ok
// SIG undefined FUN_1434962d0(void)

undefined8 * FUN_1434962d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10a18;
  return param_1;
}



// FUNCTION 143496350 FUN_143496350 body=110 status=ok
// SIG undefined FUN_143496350(void)

undefined8 * FUN_143496350(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0cb20;
  param_1[4] = &PTR_LAB_145b0cb68;
  param_1[0xd] = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),9);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 1434963c0 FUN_1434963c0 body=305 status=ok
// SIG undefined FUN_1434963c0(void)

undefined8 * FUN_1434963c0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  byte local_28 [32];
  
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    plVar2 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x38) + 0x20);
  }
  FUN_143416140(param_1,plVar2);
  *param_1 = &PTR_LAB_145b0cb20;
  param_1[4] = &PTR_LAB_145b0cb68;
  plVar2 = plVar3;
  if (param_3 != 0) {
    plVar2 = (longlong *)FUN_1432be180(param_3);
  }
  param_1[0xd] = plVar2;
  if (param_3 != 0) {
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)(param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4) + 8))
                       (param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4);
  }
  lVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3);
  lVar1 = plVar3[3];
  if (param_1[6] == 0) {
    local_res8[0] = 3;
    local_28[0] = 10;
    (**(code **)(param_1[4] + 0x50))
              (param_1 + 4,(longlong *)(lVar4 + 0xe8),
               *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x3a8,
               local_28,local_res8);
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  lVar4 = param_1[6];
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[6] = lVar1;
  return param_1;
}



// FUNCTION 143496500 FUN_143496500 body=84 status=ok
// SIG undefined FUN_143496500(void)

undefined8 * FUN_143496500(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145b0cec0;
  puVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = 6;
  param_1[3] = 0;
  do {
    *(undefined4 *)puVar1 = 0;
    *(undefined2 *)((longlong)puVar1 + 4) = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_145b0ced8;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 143496560 FUN_143496560 body=170 status=ok
// SIG undefined FUN_143496560(void)

undefined8 * FUN_143496560(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 143496610 FUN_143496610 body=125 status=ok
// SIG undefined FUN_143496610(void)

undefined8 * FUN_143496610(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10e68;
  return param_1;
}



// FUNCTION 143496690 FUN_143496690 body=138 status=ok
// SIG undefined FUN_143496690(void)

undefined8 * FUN_143496690(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0d450;
  param_1[4] = &PTR_LAB_145b0d498;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1432be180(param_3);
  }
  param_1[0xd] = uVar1;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0xb);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143496720 FUN_143496720 body=125 status=ok
// SIG undefined FUN_143496720(void)

undefined8 * FUN_143496720(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b105c8;
  return param_1;
}



// FUNCTION 1434967a0 FUN_1434967a0 body=207 status=ok
// SIG undefined FUN_1434967a0(void)

undefined8 * FUN_1434967a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145b0b0d8;
  FUN_143494770(param_1 + 1);
  lVar2 = 4;
  puVar1 = param_1 + 9;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_143494650(param_1 + 0x1f);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 10;
  *(byte *)((longlong)param_1 + 0x17e) = *(byte *)((longlong)param_1 + 0x17e) & 0xfc;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 143496870 FUN_143496870 body=391 status=ok
// SIG undefined FUN_143496870(void)

undefined8 *
FUN_143496870(undefined8 *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong local_38;
  longlong lStack_30;
  byte local_28;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b0ab98;
  uVar5 = FUN_1434123a0(param_3,param_4);
  param_1[2] = uVar5;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_6;
  param_1[6] = param_4;
  cVar1 = *param_3;
  if ((cVar1 == '\b') || (cVar1 == '\v')) {
    if (cVar1 == '\b') {
      local_38 = *(longlong *)(param_3 + 8);
      local_28 = 0;
      if (local_38 != 0) {
        *(uint *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1U & 0x8fffffff;
      }
      lVar2 = *(longlong *)(param_3 + 0x10);
      lStack_30 = 0;
      if (lVar2 != 0) {
        local_28 = (param_3[0x18] & 1U) != 0;
        lStack_30 = lVar2;
        if (!(bool)local_28) {
          *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
        }
      }
    }
    else if (cVar1 == '\v') {
      FUN_143413f20(param_3,&local_38,param_4);
    }
    else {
      local_38 = 0;
      lStack_30 = 0;
      local_28 = 0;
    }
    bVar4 = local_28;
    lVar3 = lStack_30;
    lVar2 = local_38;
    FUN_143410a60(param_1 + 3,&local_38);
    if ((((bVar4 & 2) == 0) && (lVar2 != 0)) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
    if ((((bVar4 & 1) == 0) && (lVar3 != 0)) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 143496a00 FUN_143496a00 body=219 status=ok
// SIG undefined FUN_143496a00(void)

undefined8 *
FUN_143496a00(undefined8 *param_1,undefined4 param_2,ulonglong *param_3,undefined4 param_4,
             char param_5,undefined1 param_6)

{
  int *piVar1;
  uint uVar2;
  
  FUN_143496d00(param_1,param_3,param_4,param_5,param_6);
  *param_1 = &PTR_FUN_145b0c5e0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  piVar1 = (int *)param_1[6];
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  if (param_5 == '\0') {
    uVar2 = (uint)((*param_3 & 0xfffffffffffffffc) == 0xfffffffffffffff4);
  }
  else {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 2) = uVar2 | 2;
  return param_1;
}



// FUNCTION 143496ae0 FUN_143496ae0 body=169 status=ok
// SIG undefined FUN_143496ae0(void)

undefined8 * FUN_143496ae0(undefined8 *param_1,float param_2,float param_3,undefined4 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffffa;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
  *param_1 = &PTR_FUN_145af8300;
  *(float *)(param_1 + 4) = param_2 * 20.0;
  *(float *)((longlong)param_1 + 0x24) = param_3 * 20.0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  param_1[5] = 0;
  *(undefined2 *)((longlong)param_1 + 0x36) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0x40000000;
  return param_1;
}



// FUNCTION 143496b90 FUN_143496b90 body=125 status=ok
// SIG undefined FUN_143496b90(void)

undefined8 * FUN_143496b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b107f0;
  return param_1;
}



// FUNCTION 143496c10 FUN_143496c10 body=86 status=ok
// SIG undefined FUN_143496c10(void)

longlong FUN_143496c10(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  lVar3 = param_2 - param_1;
  lVar2 = 5;
  do {
    puVar1[-2] = *(undefined4 *)(lVar3 + -8 + (longlong)puVar1);
    puVar1[-1] = *(undefined4 *)(lVar3 + -4 + (longlong)puVar1);
    *puVar1 = *(undefined4 *)(lVar3 + (longlong)puVar1);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar3 + 4 + (longlong)puVar1);
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 143496c70 InvokeAliasInfo body=133 status=ok
// SIG undefined InvokeAliasInfo(void)

longlong *
Scaleform::GFx::AS2::MovieRoot::InvokeAliasInfo::InvokeAliasInfo
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  *param_1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 4) = 0;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = 0;
  if (param_2[3] != 0) {
    FUN_1434109d0(param_1 + 2,param_2[3],*(byte *)(param_2 + 4) & 1);
  }
  return param_1;
}



// FUNCTION 143496d00 FUN_143496d00 body=164 status=ok
// SIG undefined FUN_143496d00(void)

undefined8 *
FUN_143496d00(undefined8 *param_1,ulonglong *param_2,undefined4 param_3,char param_4,
             undefined1 param_5)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_145b0aac0;
  FUN_1432c2f70(param_1 + 3);
  if (param_4 == '\0') {
    uVar1 = (uint)((*param_2 & 0xfffffffffffffffc) == 0xfffffffffffffff4);
  }
  else {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  param_1[1] = 0;
  FUN_1432c4d80(param_1 + 3,param_2);
  *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 143496db0 FUN_143496db0 body=131 status=ok
// SIG undefined FUN_143496db0(void)

undefined8 * FUN_143496db0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0bb68;
  param_1[4] = &PTR_LAB_145b0bbb0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  uVar1 = FUN_14341b890(*(undefined8 *)(param_2 + 0xe8),param_2,6);
  FUN_14342ff50(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143496e40 FUN_143496e40 body=178 status=ok
// SIG undefined FUN_143496e40(void)

undefined8 * FUN_143496e40(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    uVar3 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x38) + 0x20);
  }
  FUN_143416140(param_1,uVar3);
  *param_1 = &PTR_LAB_145b0bb68;
  param_1[4] = &PTR_LAB_145b0bbb0;
  if (param_3 != 0) {
    uVar1 = FUN_1432be180(param_3);
  }
  param_1[0xd] = uVar1;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  lVar2 = (**(code **)(*(longlong *)(param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4) + 0xf0))
                    (param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4);
  FUN_14342ff50(param_1 + 4,lVar2 + 0xe8,
                *(undefined8 *)(param_3 + 0x18 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4));
  return param_1;
}



// FUNCTION 143496f00 FUN_143496f00 body=113 status=ok
// SIG undefined FUN_143496f00(void)

undefined8 * FUN_143496f00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ebb0;
  param_1[4] = &PTR_LAB_145b0ebf8;
  FUN_1432c5250(param_1 + 0xe);
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}


