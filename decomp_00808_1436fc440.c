// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436fc440 FUN_1436fc440 body=90 status=ok
// SIG undefined FUN_1436fc440(void)

undefined8 * FUN_1436fc440(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1436fc4a0 FUN_1436fc4a0 body=132 status=ok
// SIG undefined FUN_1436fc4a0(void)

longlong FUN_1436fc4a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1436fbfd0(param_1 + 0x70);
  FUN_1436fc1a0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x90);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 1436fc530 FUN_1436fc530 body=43 status=ok
// SIG undefined FUN_1436fc530(void)

undefined8 * FUN_1436fc530(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1436fc560 FUN_1436fc560 body=43 status=ok
// SIG undefined FUN_1436fc560(void)

undefined8 * FUN_1436fc560(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1436fc590 FUN_1436fc590 body=144 status=ok
// SIG undefined FUN_1436fc590(void)

longlong FUN_1436fc590(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143736600(param_1 + 0x90);
  FUN_1436fbfd0(param_1 + 0x70);
  FUN_1436fc1a0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0xd8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
    }
  }
  return param_1;
}



// FUNCTION 1436fc620 FUN_1436fc620 body=139 status=ok
// SIG undefined FUN_1436fc620(void)

longlong FUN_1436fc620(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436fc210();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 1436fc6b0 FUN_1436fc6b0 body=359 status=ok
// SIG undefined FUN_1436fc6b0(void)

undefined4 FUN_1436fc6b0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  uVar1 = *(undefined4 *)(param_1 + 0x188);
  if (*(int *)(param_1 + 400) == 0) {
    iVar13 = 1;
    lVar12 = 1;
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar14 = (longlong)(int)((longlong)*(int *)(param_1 + 0x70) * 8 >> 3);
    if (1 < lVar14) {
      do {
        lVar4 = *(longlong *)(lVar3 + lVar12 * 8);
        if ((((lVar4 != 0) && (piVar7 = (int *)FUN_143714420(lVar4,1), piVar7 != (int *)0x0)) &&
            (*piVar7 == 0x2004)) && (lVar8 = FUN_1437151f0(lVar4), lVar8 != 0)) {
          uVar9 = FUN_1437151f0(lVar4);
          iVar5 = hkString::strCmp(uVar9,&DAT_145af49f8);
          if (iVar5 == 0) {
            *(int *)(param_1 + 400) = iVar13;
            break;
          }
        }
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar14);
    }
    if (*(int *)(param_1 + 400) == 0) {
      return 0xffffffff;
    }
  }
  uVar9 = FUN_14370c890(param_2,param_1 + 0xf0);
  uVar6 = FUN_14370c910(param_2);
  uVar2 = *(undefined4 *)(param_1 + 400);
  uVar10 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x188) == (*(uint *)(param_1 + 0x18c) & 0x3fffffff)) {
    FUN_14370c460(uVar10,(longlong *)(param_1 + 0x180),0x10);
  }
  puVar11 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x188) * 0x10 + *(longlong *)(param_1 + 0x180));
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = uVar9;
    puVar11[1] = CONCAT44(uVar6,uVar2);
  }
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  return uVar1;
}



// FUNCTION 1436fc820 FUN_1436fc820 body=186 status=ok
// SIG undefined FUN_1436fc820(void)

undefined4 *
FUN_1436fc820(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  iVar1 = FUN_143751cd0(param_3);
  do {
    if ((iVar1 == 6) || (iVar1 == 7)) goto LAB_1436fc882;
    if (iVar1 == 1) {
LAB_1436fc8c1:
      *param_2 = 0;
      return param_2;
    }
    if (iVar1 == 2) {
      uVar2 = FUN_143751f50(param_3,local_18);
      iVar1 = FUN_143750fa0(uVar2,param_4);
      if (iVar1 != 0) goto LAB_1436fc8c1;
LAB_1436fc89b:
      FUN_143751cd0(param_3);
LAB_1436fc882:
      *param_2 = 0x80040200;
      return param_2;
    }
    if (iVar1 == 3) {
      uVar2 = FUN_143751f50(param_3,local_18);
      iVar1 = FUN_143750fa0(uVar2,param_4);
      if (iVar1 == 0) goto LAB_1436fc89b;
    }
    iVar1 = FUN_143751cd0(param_3);
  } while( true );
}



// FUNCTION 1436fc8e0 FUN_1436fc8e0 body=132 status=ok
// SIG undefined FUN_1436fc8e0(void)

undefined8 * FUN_1436fc8e0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
  uVar2 = FUN_1437152f0(param_3);
  uVar3 = (**(code **)(lVar1 + 8))(*(longlong *)(param_1 + 8) + 0xf0,uVar2);
  *param_2 = uVar3;
  param_2[1] = param_3;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0(param_3);
  }
  param_2[2] = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436fc970 FUN_1436fc970 body=79 status=ok
// SIG undefined FUN_1436fc970(void)

void FUN_1436fc970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
  uVar2 = FUN_1437152f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001436fc9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(*(longlong *)(param_1 + 8) + 0xf0,param_2,uVar2);
  return;
}



// FUNCTION 1436fc9c0 FUN_1436fc9c0 body=40 status=ok
// SIG undefined FUN_1436fc9c0(void)

ulonglong FUN_1436fc9c0(undefined8 param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_143714420(param_1,1);
  if (puVar1 != (ulonglong *)0x0) {
    return *puVar1 >> 8;
  }
  return 0;
}



// FUNCTION 1436fc9f0 FUN_1436fc9f0 body=97 status=ok
// SIG undefined FUN_1436fc9f0(void)

undefined4 * FUN_1436fc9f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143751cd0(param_3);
  while ((iVar1 != 6 && (iVar1 != 7))) {
    if (iVar1 - 1U < 2) {
      *param_2 = 0;
      return param_2;
    }
    iVar1 = FUN_143751cd0(param_3);
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436fca60 FUN_1436fca60 body=375 status=ok
// SIG undefined FUN_1436fca60(void)

undefined4 *
FUN_1436fca60(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (*param_3 == 0) {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = 0;
    *param_2 = 0;
    return param_2;
  }
  lVar5 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x194) + *param_3);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
  if (*(char *)(lVar1 + 0x10 + lVar5 * 0x18) == '\x01') {
    uVar8 = *(uint *)(lVar1 + 0x14 + lVar5 * 0x18);
  }
  else {
    uVar8 = 0xffffffff;
  }
  lVar2 = *(longlong *)(lVar1 + 8 + lVar5 * 0x18);
  uVar7 = 0;
  uVar3 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
  uVar6 = uVar7;
  if (lVar2 != 0) {
    uVar6 = FUN_1437151a0(lVar2);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar4 = FUN_1437152f0(lVar2);
    uVar7 = FUN_1437151a0(lVar2);
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar3;
  param_5[1] = lVar2;
  *(uint *)(param_5 + 2) = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar7;
  *param_2 = 0;
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436fcbe0 FUN_1436fcbe0 body=191 status=ok
// SIG undefined FUN_1436fcbe0(void)

undefined4 *
FUN_1436fcbe0(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar1 = *param_3;
  if (iVar1 != 0) {
    lVar5 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x194) + iVar1);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
    uVar3 = *(undefined8 *)(lVar2 + lVar5 * 0x18);
    lVar4 = *(longlong *)(lVar2 + 8 + lVar5 * 0x18);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1437151a0(lVar4,iVar1,lVar2 + lVar5 * 0x18);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    *param_5 = uVar3;
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    return param_2;
  }
  *param_2 = 0;
  *param_5 = 0;
  return param_2;
}



// FUNCTION 1436fcca0 FUN_1436fcca0 body=85 status=ok
// SIG undefined FUN_1436fcca0(void)

undefined4 * FUN_1436fcca0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 local_res10 [8];
  
  do {
    piVar1 = (int *)FUN_1436fc820(param_1,local_res10,param_3,"export");
  } while (-1 < *piVar1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436fcd00 FUN_1436fcd00 body=85 status=ok
// SIG undefined FUN_1436fcd00(void)

undefined4 * FUN_1436fcd00(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 local_res10 [8];
  
  do {
    piVar1 = (int *)FUN_1436fc820(param_1,local_res10,param_3,"import");
  } while (-1 < *piVar1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436fcd60 FUN_1436fcd60 body=1485 status=ok
// SIG undefined FUN_1436fcd60(void)

undefined4 * FUN_1436fcd60(longlong param_1,undefined4 *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  uint local_e8;
  undefined1 local_e4 [4];
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined1 local_c0 [8];
  uint local_b8 [2];
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0 [2];
  ulonglong local_90;
  undefined1 local_88 [8];
  int local_80 [2];
  undefined8 local_78;
  char *local_70;
  undefined1 local_68 [64];
  
  local_e0 = 0;
  lStack_d8 = 0;
  piVar7 = (int *)FUN_143752040(param_3,local_e4,&DAT_145af4d5c,&local_e0);
  if (*piVar7 < 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  cVar5 = FUN_143750eb0(&local_e0,&DAT_145afa020);
  if (cVar5 != '\0') {
    local_e0 = local_e0 + 1;
    lStack_d8 = lStack_d8 + -1;
  }
  pcVar16 = "object";
  cVar5 = FUN_143750eb0(&local_e0,"object");
  if (cVar5 != '\0') {
    iVar6 = FUN_14370c910("object");
    local_e0 = local_e0 + iVar6;
    iVar6 = FUN_143752110(&local_e0,local_b8);
    if (-1 < iVar6) {
      local_a8 = (ulonglong)local_b8[0];
      local_d0 = 0;
      lStack_c8 = 0;
      piVar7 = (int *)FUN_143752040(param_3,local_e4,"typeid",&local_d0);
      if (-1 < *piVar7) {
        cVar5 = FUN_143750eb0(&local_d0,&DAT_145afa020);
        if (cVar5 != '\0') {
          local_d0 = local_d0 + 1;
          lStack_c8 = lStack_c8 + -1;
        }
        cVar5 = FUN_143750eb0(&local_d0,&DAT_145af4d3c);
        if (cVar5 != '\0') {
          iVar6 = FUN_14370c910(&DAT_145af4d3c);
          local_d0 = local_d0 + iVar6;
          iVar6 = FUN_143752110(&local_d0,local_80);
          if (-1 < iVar6) {
            local_e8 = 0;
            if (param_4 == '\0') {
LAB_1436fcf73:
              if (param_4 != '\0') {
                pcVar16 = "note";
              }
              local_70 = pcVar16;
              piVar7 = (int *)FUN_1436fc820(param_1,local_e4,param_3,pcVar16);
              if (-1 < *piVar7) {
                lVar15 = (longlong)(int)local_a8;
                local_b0 = (longlong)local_80[0] * 8;
                do {
                  uVar3 = local_a8;
                  local_78 = *(undefined8 *)(local_b0 + *(longlong *)(param_1 + 0x68));
                  FUN_1437490a0(local_a0,local_78);
                  uVar4 = local_a0[0];
                  uVar12 = local_e8;
                  lVar17 = (longlong)(int)local_e8;
                  iVar6 = *(int *)(param_1 + 0x80);
                  uVar11 = (uint)uVar3;
                  if (local_e8 == 0) {
                    iVar1 = uVar11 + 1;
                    if ((int)(uVar11 + 1) < iVar6) {
                      iVar1 = iVar6;
                    }
                    uVar9 = FUN_143703a50();
                    uVar12 = *(uint *)(param_1 + 0x84) & 0x3fffffff;
                    if ((int)uVar12 < iVar1) {
                      iVar6 = uVar12 * 2;
                      iVar2 = iVar1;
                      if (iVar1 < iVar6) {
                        iVar2 = iVar6;
                      }
                      FUN_14370c310(uVar9,param_1 + 0x78,iVar2,0x18);
                    }
                    iVar6 = iVar1 - *(int *)(param_1 + 0x80);
                    lVar17 = (longlong)iVar6;
                    if (0 < iVar6) {
                      puVar10 = (undefined1 *)
                                (*(longlong *)(param_1 + 0x78) +
                                 (longlong)*(int *)(param_1 + 0x80) * 0x18 + 0x10);
                      do {
                        if ((undefined8 *)(puVar10 + -0x10) != (undefined8 *)0x0) {
                          *(undefined8 *)(puVar10 + -0x10) = 0;
                          *(undefined8 *)(puVar10 + -8) = 0;
                          *puVar10 = 0;
                          *(undefined4 *)(puVar10 + 4) = 0;
                        }
                        puVar10 = puVar10 + 0x18;
                        lVar17 = lVar17 + -1;
                      } while (lVar17 != 0);
                    }
                    *(int *)(param_1 + 0x80) = iVar1;
                    lVar17 = *(longlong *)(param_1 + 0x78);
                    *(undefined8 *)(lVar17 + 8 + lVar15 * 0x18) =
                         *(undefined8 *)(local_b0 + *(longlong *)(param_1 + 0x68));
                    *(undefined8 *)(lVar17 + lVar15 * 0x18) = uVar4;
                    *(undefined1 *)(lVar17 + 0x10 + lVar15 * 0x18) = 0;
                    *(undefined4 *)(lVar17 + 0x14 + lVar15 * 0x18) = 0;
                  }
                  else {
                    uVar14 = local_e8;
                    if ((int)local_e8 < (int)uVar11) {
                      uVar14 = uVar11;
                    }
                    iVar1 = uVar14 + 1;
                    if ((int)(uVar14 + 1) < iVar6) {
                      iVar1 = iVar6;
                    }
                    uVar9 = FUN_143703a50();
                    uVar11 = *(uint *)(param_1 + 0x84) & 0x3fffffff;
                    if ((int)uVar11 < iVar1) {
                      iVar6 = uVar11 * 2;
                      iVar2 = iVar1;
                      if (iVar1 < iVar6) {
                        iVar2 = iVar6;
                      }
                      FUN_14370c310(uVar9,param_1 + 0x78,iVar2,0x18);
                    }
                    iVar6 = iVar1 - *(int *)(param_1 + 0x80);
                    lVar13 = (longlong)iVar6;
                    if (0 < iVar6) {
                      puVar10 = (undefined1 *)
                                (*(longlong *)(param_1 + 0x78) +
                                 (longlong)*(int *)(param_1 + 0x80) * 0x18 + 0x10);
                      do {
                        if ((undefined8 *)(puVar10 + -0x10) != (undefined8 *)0x0) {
                          *(undefined8 *)(puVar10 + -0x10) = 0;
                          *(undefined8 *)(puVar10 + -8) = 0;
                          *puVar10 = 0;
                          *(undefined4 *)(puVar10 + 4) = 0;
                        }
                        puVar10 = puVar10 + 0x18;
                        lVar13 = lVar13 + -1;
                      } while (lVar13 != 0);
                    }
                    *(int *)(param_1 + 0x80) = iVar1;
                    if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar17 * 0x18) == 0) {
                      *(int *)(*(longlong *)(param_1 + 0x78) + 0x14 + lVar17 * 0x18) = (int)local_a8
                      ;
                    }
                    uVar9 = *(undefined8 *)(local_b0 + *(longlong *)(param_1 + 0x68));
                    lVar17 = *(longlong *)(param_1 + 0x78);
                    *(undefined8 *)(lVar17 + lVar15 * 0x18) = uVar4;
                    *(undefined8 *)(lVar17 + 8 + lVar15 * 0x18) = uVar9;
                    *(undefined1 *)(lVar17 + 0x10 + lVar15 * 0x18) = 2;
                    *(uint *)(lVar17 + 0x14 + lVar15 * 0x18) = uVar12;
                  }
                  uVar4 = local_a0[0];
                  iVar6 = FUN_1437152f0(local_78);
                  FUN_14370c720(uVar4,0,(longlong)iVar6);
                  piVar7 = (int *)FUN_1436fe7a0(param_1,local_88,param_3,local_a0);
                  if (*piVar7 < 0) {
                    *param_2 = 0x80040200;
                    if ((local_90 & 1) == 0) {
                      return param_2;
                    }
                    FUN_143733a60(local_90 & 0xfffffffffffffffe);
                    return param_2;
                  }
                  if ((local_90 & 1) != 0) {
                    FUN_143733a60(local_90 & 0xfffffffffffffffe);
                  }
                  piVar7 = (int *)FUN_1436fc820(param_1,local_e4,param_3,local_70);
                } while (-1 < *piVar7);
              }
              *param_2 = 0;
              return param_2;
            }
            pcVar8 = (char *)FUN_1437520e0(param_3,local_c0,"annotates");
            if (*pcVar8 == '\0') {
              local_d0 = 0;
              lStack_c8 = 0;
              piVar7 = (int *)FUN_143752040(param_3,local_e4,&DAT_145af4d5c,&local_d0);
              if (-1 < *piVar7) {
                cVar5 = FUN_143750eb0(&local_d0,&DAT_145afa020);
                if (cVar5 != '\0') {
                  local_d0 = local_d0 + 1;
                  lStack_c8 = lStack_c8 + -1;
                }
                cVar5 = FUN_143750eb0(&local_d0,&DAT_145b759dc);
                if (cVar5 != '\0') {
                  iVar6 = FUN_14370c910(&DAT_145b759dc);
                  local_d0 = local_d0 + iVar6;
                  iVar6 = FUN_143752110(&local_d0,local_b8);
                  if ((-1 < iVar6) && (local_e8 = local_b8[0], 1 < DAT_146b7bd58)) {
                    FUN_14373a730(local_68,&DAT_146b7bd50,2);
                    lVar15 = FUN_14373bbd0(local_68,
                                           "Found deprecated note \'note{}\'. Must be assigned an explicit unique id and an \'annotates\' attribute, e.g. \'<note id=\"object99\" annotates=\"object{}\">\'"
                                           ,&DAT_145b75a88,&local_e8,&local_e8,0);
                    *(char **)(lVar15 + 0x20) = "Serialize\\Format\\Xml\\hkXmlReadFormat.cpp";
                    *(undefined8 *)(lVar15 + 0x28) = 0x338;
                    FUN_14373a950(local_68);
                  }
                }
              }
            }
            else {
              local_e0 = 0;
              lStack_d8 = 0;
              piVar7 = (int *)FUN_143752040(param_3,local_e4,"annotates",&local_e0);
              if (-1 < *piVar7) {
                cVar5 = FUN_143750eb0(&local_e0,&DAT_145afa020);
                if (cVar5 != '\0') {
                  local_e0 = local_e0 + 1;
                  lStack_d8 = lStack_d8 + -1;
                }
                cVar5 = FUN_143750eb0(&local_e0,"object");
                if (cVar5 != '\0') {
                  iVar6 = FUN_14370c910("object");
                  local_e0 = local_e0 + iVar6;
                  iVar6 = FUN_143752110(&local_e0,local_b8);
                  if (-1 < iVar6) {
                    local_e8 = local_b8[0];
                    goto LAB_1436fcf73;
                  }
                }
              }
            }
            *param_2 = 0x80040200;
            return param_2;
          }
        }
      }
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436fd330 FUN_1436fd330 body=3491 status=ok
// SIG undefined FUN_1436fd330(void)

undefined4 * FUN_1436fd330(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint local_res20 [2];
  longlong local_568;
  longlong lStack_560;
  longlong local_558;
  longlong lStack_550;
  undefined1 local_548 [4];
  int local_544;
  undefined2 local_540 [2];
  undefined1 local_53c [4];
  int local_538;
  int local_534;
  undefined1 local_530 [4];
  undefined1 local_52c [4];
  undefined1 *local_528;
  undefined4 local_520;
  uint local_51c;
  undefined1 local_518 [128];
  int local_498 [2];
  undefined1 local_490 [4];
  undefined1 local_48c [4];
  undefined1 local_488 [4];
  undefined1 local_484 [4];
  undefined1 local_480 [4];
  undefined1 local_47c [4];
  undefined1 local_478 [4];
  undefined1 local_474 [4];
  undefined1 local_470 [4];
  undefined1 local_46c [4];
  undefined1 local_468 [4];
  undefined1 local_464 [4];
  undefined1 local_460 [8];
  undefined4 local_458 [2];
  undefined8 local_450;
  undefined4 local_448 [2];
  undefined1 local_440 [8];
  undefined8 local_438;
  undefined1 local_430 [4];
  undefined1 local_42c [4];
  undefined8 local_428;
  undefined1 *local_420;
  uint local_418;
  uint local_414;
  undefined1 local_410 [128];
  undefined1 *local_390;
  uint local_388;
  uint local_384;
  undefined1 local_380 [128];
  undefined1 *local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [96];
  ulonglong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined *local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_1f0;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined8 local_1b0;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  local_res20[0] = 0;
  local_558 = 0;
  lStack_550 = 0;
  piVar4 = (int *)FUN_143752040(param_3,local_548,&DAT_145af4d5c,&local_558);
  if (-1 < *piVar4) {
    cVar2 = FUN_143750eb0(&local_558,&DAT_145afa020);
    if (cVar2 != '\0') {
      local_558 = local_558 + 1;
      lStack_550 = lStack_550 + -1;
    }
    cVar2 = FUN_143750eb0(&local_558,&DAT_145af4d3c);
    if (cVar2 != '\0') {
      iVar3 = FUN_14370c910(&DAT_145af4d3c);
      local_558 = local_558 + iVar3;
      iVar3 = FUN_143752110(&local_558,local_498);
      if (-1 < iVar3) {
        FUN_143737060(local_2e8);
        FUN_143738110(local_2e8,param_1);
        local_420 = local_410;
        local_428 = 0;
        local_390 = local_380;
        local_418 = 0;
        local_300 = local_2f0;
        local_414 = 0x80000020;
        local_388 = 0;
        local_384 = 0x80000020;
        local_2f8 = 0;
        local_2f4 = 0x80000002;
        piVar4 = (int *)FUN_1436fc820(param_1,local_548,param_3,&DAT_145af4d3c);
        iVar3 = *piVar4;
        do {
          puVar15 = (undefined *)0x0;
          if (iVar3 < 0) {
            piVar4 = (int *)FUN_143737960(local_2e8,local_52c,param_1 + 0x18,&local_438);
            if (*piVar4 < 0) {
              if (DAT_146b7bd58 != '\0') {
                FUN_14373a730(local_68,&DAT_146b7bd50,1);
                lVar7 = FUN_14373bbd0(local_68,"Failed to allocate type from builder",&DAT_145b909f0
                                      ,0);
                *(char **)(lVar7 + 0x20) = "Serialize\\Format\\Xml\\hkXmlReadFormat.cpp";
                *(undefined8 *)(lVar7 + 0x28) = 0x20d;
                FUN_14373a950(local_68);
              }
LAB_1436fe039:
              *param_2 = 0x80040200;
            }
            else {
              FUN_1436ffce0(param_1 + 0x60,local_498[0],local_438);
              local_568 = *(longlong *)(param_1 + 0x68);
              lStack_560 = local_568 + (longlong)*(int *)(param_1 + 0x70) * 8;
              FUN_1437395f0(param_1 + 0xd0,local_438,&local_428,&local_568);
              *param_2 = 0;
            }
LAB_1436fe093:
            FUN_1436f0f00(&local_428);
            FUN_143737160(local_2e8);
            return param_2;
          }
          uVar5 = FUN_143751f50(param_3,local_88);
          iVar3 = FUN_143750fa0(uVar5,"parent");
          if (iVar3 == 0) {
            local_568 = 0;
            lStack_560 = 0;
            piVar4 = (int *)FUN_143752040(param_3,local_464,&DAT_145af4d5c,&local_568);
            if (-1 < *piVar4) {
              cVar2 = FUN_143750eb0(&local_568,&DAT_145afa020);
              if (cVar2 != '\0') {
                local_568 = local_568 + 1;
                lStack_560 = lStack_560 + -1;
              }
              cVar2 = FUN_143750eb0(&local_568,&DAT_145af4d3c);
              if (cVar2 != '\0') {
                iVar3 = FUN_14370c910(&DAT_145af4d3c);
                local_568 = local_568 + iVar3;
                iVar3 = FUN_143752110(&local_568,local_458);
                if (-1 < iVar3) {
                  local_428 = CONCAT44(local_428._4_4_,local_458[0]);
                  goto LAB_1436fdf57;
                }
              }
            }
            goto LAB_1436fe039;
          }
          uVar5 = FUN_143751f50(param_3,local_108);
          iVar3 = FUN_143750fa0(uVar5,"format");
          if (iVar3 == 0) {
            piVar4 = (int *)FUN_143751fa0(param_3,local_460,"value",local_res20);
            if (*piVar4 < 0) goto LAB_1436fe039;
            local_1d0 = param_1 + 8;
            local_280 = (longlong)(int)local_res20[0];
            uVar11 = local_288 | 0xc00001;
            local_1c8 = 0;
            puVar13 = (undefined *)0x0;
            puVar9 = puVar15;
            puVar14 = puVar15;
            switch(local_res20[0] & 0xf) {
            case 0:
              puVar9 = &DAT_146b7bdc8;
              puVar14 = puVar13;
              break;
            case 1:
              puVar9 = &DAT_146b7bdd8;
              puVar14 = puVar13;
              break;
            case 2:
              puVar9 = &DAT_146b82a50;
              puVar14 = (undefined *)0x1;
              puVar15 = puVar14;
              break;
            case 3:
              puVar9 = (undefined *)(param_1 + 0x168);
              goto LAB_1436fd742;
            case 4:
            case 5:
              local_288 = uVar11;
              uVar5 = (**(code **)(*DAT_146b834f8 + 0x50))();
              puVar9 = (undefined *)FUN_1437151a0(uVar5);
              uVar8 = FUN_1437152f0(uVar5);
              uVar10 = FUN_143714d40(uVar5);
              uVar11 = local_288;
              puVar14 = (undefined *)(ulonglong)uVar8;
              puVar15 = (undefined *)(ulonglong)uVar10;
              break;
            case 6:
              puVar9 = (undefined *)(param_1 + 0xa0);
LAB_1436fd742:
              puVar14 = (undefined *)0x4;
              puVar15 = puVar14;
              break;
            case 7:
              local_288 = local_288 | 0x4c00001;
              local_1b0 = 0;
              puVar9 = &DAT_146b82b68;
              if (*(int *)(param_1 + 0x140) + -1 < *(int *)(param_1 + 0x148) * 2) {
                FUN_1436ffb50((longlong *)(param_1 + 0x138),local_440,*(int *)(param_1 + 0x140) * 2)
                ;
              }
              iVar12 = 1;
              lVar7 = *(longlong *)(param_1 + 0x138);
              uVar10 = *(int *)(param_1 + 0x140) - 1;
              uVar8 = local_498[0] * -0x61c8864f;
              uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      local_498[0] * -0x4f000000) & uVar10;
              lVar6 = (longlong)(int)uVar8;
              iVar3 = *(int *)(lVar7 + lVar6 * 4);
              while (iVar3 != -1) {
                if (*(int *)(lVar7 + lVar6 * 4) == local_498[0]) {
                  iVar12 = 0;
                  break;
                }
                uVar8 = uVar8 + 1 & uVar10;
                lVar6 = (longlong)(int)uVar8;
                iVar3 = *(int *)(lVar7 + lVar6 * 4);
              }
              *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar12;
              *(int *)(lVar7 + (longlong)(int)uVar8 * 4) = local_498[0];
              uVar11 = local_288;
              puVar14 = puVar13;
              break;
            case 8:
              if ((int)(local_res20[0] & 0xffffff00) < 1) {
                puVar9 = (undefined *)(param_1 + 0x150);
                goto LAB_1436fd742;
              }
              puVar9 = &DAT_146b829b0;
              puVar14 = puVar13;
            }
            local_288 = uVar11 | 0x800004;
            local_1c8 = (ulonglong)(((uint)puVar15 & 0xfff) << 0x10) | (ulonglong)puVar14 & 0xffff;
            local_270 = puVar9;
          }
          else {
            uVar5 = FUN_143751f50(param_3,local_f8);
            iVar3 = FUN_143750fa0(uVar5,&DAT_145af95b0);
            if (iVar3 == 0) {
              local_528 = local_518;
              local_51c = 0x80000080;
              local_520 = 1;
              local_518[0] = 0;
              local_568 = 0;
              lStack_560 = 0;
              piVar4 = (int *)FUN_143752040(param_3,local_430,"value",&local_568);
              if ((*piVar4 < 0) || (iVar3 = FUN_143751cf0(&local_568,&local_528), iVar3 < 0)) {
LAB_1436fdf76:
                *param_2 = 0x80040200;
                local_520 = 0;
                if (-1 < (int)local_51c) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_528,1,local_51c & 0x3fffffff);
                }
                local_528 = (undefined1 *)0x0;
                local_51c = 0x80000000;
                goto LAB_1436fe093;
              }
              cVar2 = FUN_143746f20(&local_528,&DAT_145afa020);
              if (cVar2 != '\0') {
                FUN_143745ed0(&local_528,1);
                FUN_143745e50(&local_528,1);
              }
              local_268 = hkReflectUtil::internCopy(local_528,0xffffffff);
              local_288 = local_288 | 8;
              local_520 = 0;
              if (-1 < (int)local_51c) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_528,1,local_51c & 0x3fffffff);
              }
            }
            else {
              uVar5 = FUN_143751f50(param_3,local_a8);
              iVar3 = FUN_143750fa0(uVar5,"flags");
              if (iVar3 == 0) {
                piVar4 = (int *)FUN_143751fa0(param_3,local_42c,"value",&local_544);
                if (*piVar4 < 0) goto LAB_1436fe039;
                local_1c0 = (longlong)local_544;
                local_288 = local_288 | 0x1000000;
              }
              else {
                uVar5 = FUN_143751f50(param_3,local_e8);
                iVar3 = FUN_143750fa0(uVar5,"subtype");
                if (iVar3 == 0) {
                  local_568 = 0;
                  lStack_560 = 0;
                  piVar4 = (int *)FUN_143752040(param_3,local_490,&DAT_145af4d5c,&local_568);
                  if (*piVar4 < 0) goto LAB_1436fe039;
                  cVar2 = FUN_143750eb0(&local_568,&DAT_145afa020);
                  if (cVar2 != '\0') {
                    local_568 = local_568 + 1;
                    lStack_560 = lStack_560 + -1;
                  }
                  cVar2 = FUN_143750eb0(&local_568,&DAT_145af4d3c);
                  if (cVar2 == '\0') goto LAB_1436fe039;
                  iVar3 = FUN_14370c910(&DAT_145af4d3c);
                  local_568 = local_568 + iVar3;
                  iVar3 = FUN_143752110(&local_568,&local_450);
                  if (iVar3 < 0) goto LAB_1436fe039;
                  local_288 = local_288 | 2;
                  local_278 = 0;
                  if (((local_res20[0] & 0xf) - 6 & 0xfffffffd) != 0) goto LAB_1436fe039;
                  iVar3 = (int)local_450;
                  local_428 = CONCAT44(iVar3,(undefined4)local_428);
                  if (*(int *)(param_1 + 0x140) + -1 < *(int *)(param_1 + 0x148) * 2) {
                    FUN_1436ffb50((longlong *)(param_1 + 0x138),local_48c,
                                  *(int *)(param_1 + 0x140) * 2);
                  }
                  lVar7 = *(longlong *)(param_1 + 0x138);
                  uVar10 = *(int *)(param_1 + 0x140) - 1;
                  uVar8 = iVar3 * -0x61c8864f;
                  uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          iVar3 * -0x4f000000) & uVar10;
                  lVar6 = (longlong)(int)uVar8;
                  iVar12 = 1;
                  if (*(int *)(lVar7 + lVar6 * 4) == -1) {
LAB_1436fda62:
                    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar12;
                    *(int *)(lVar7 + (longlong)(int)uVar8 * 4) = iVar3;
                  }
                  else {
                    do {
                      iVar12 = 0;
                      if (*(int *)(lVar7 + lVar6 * 4) == iVar3) goto LAB_1436fda62;
                      uVar8 = uVar8 + 1 & uVar10;
                      lVar6 = (longlong)(int)uVar8;
                    } while (*(int *)(lVar7 + lVar6 * 4) != -1);
                    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
                    *(int *)(lVar7 + (longlong)(int)uVar8 * 4) = iVar3;
                  }
                }
                else {
                  uVar5 = FUN_143751f50(param_3,local_d8);
                  iVar3 = FUN_143750fa0(uVar5,"fields");
                  if (iVar3 == 0) {
                    piVar4 = (int *)FUN_143751fa0(param_3,local_484,"count",local_488);
                    if (*piVar4 < 0) goto LAB_1436fe039;
                    piVar4 = (int *)FUN_1436fc820(param_1,local_53c,param_3,"fields");
                    iVar3 = *piVar4;
                    while (-1 < iVar3) {
                      local_528 = local_518;
                      local_51c = 0x80000080;
                      local_520 = 1;
                      local_518[0] = 0;
                      local_568 = 0;
                      lStack_560 = 0;
                      piVar4 = (int *)FUN_143752040(param_3,local_480,&DAT_145af95b0,&local_568);
                      if ((*piVar4 < 0) || (iVar3 = FUN_143751cf0(&local_568,&local_528), iVar3 < 0)
                         ) goto LAB_1436fdf76;
                      cVar2 = FUN_143746f20(&local_528,&DAT_145afa020);
                      if (cVar2 != '\0') {
                        FUN_143745ed0(&local_528,1);
                        FUN_143745e50(&local_528,1);
                      }
                      local_568 = 0;
                      lStack_560 = 0;
                      piVar4 = (int *)FUN_143752040(param_3,local_47c,"typeid",&local_568);
                      if (*piVar4 < 0) goto LAB_1436fdf76;
                      cVar2 = FUN_143750eb0(&local_568,&DAT_145afa020);
                      if (cVar2 != '\0') {
                        local_568 = local_568 + 1;
                        lStack_560 = lStack_560 + -1;
                      }
                      cVar2 = FUN_143750eb0(&local_568,&DAT_145af4d3c);
                      if (cVar2 == '\0') goto LAB_1436fdf76;
                      iVar3 = FUN_14370c910(&DAT_145af4d3c);
                      local_568 = local_568 + iVar3;
                      iVar3 = FUN_143752110(&local_568,local_448);
                      if ((iVar3 < 0) ||
                         (piVar4 = (int *)FUN_143751fa0(param_3,local_478,"flags",local_540),
                         uVar1 = local_540[0], *piVar4 < 0)) goto LAB_1436fdf76;
                      uVar5 = hkReflectUtil::internCopy(local_528,0xffffffff);
                      FUN_143737600(local_2e8,uVar5,0,uVar1,0);
                      uVar5 = FUN_143703a50();
                      if (local_418 == (local_414 & 0x3fffffff)) {
                        FUN_14370c460(uVar5,&local_420,4);
                      }
                      *(undefined4 *)(local_420 + (longlong)(int)local_418 * 4) = local_448[0];
                      local_418 = local_418 + 1;
                      local_520 = 0;
                      if (-1 < (int)local_51c) {
                        FUN_143702e10(&PTR_vftable_1467f0638,local_528,1,local_51c & 0x3fffffff);
                      }
                      piVar4 = (int *)FUN_1436fc820(param_1,local_53c,param_3,"fields");
                      iVar3 = *piVar4;
                    }
                  }
                  else {
                    uVar5 = FUN_143751f50(param_3,local_c8);
                    iVar3 = FUN_143750fa0(uVar5,"version");
                    if (iVar3 == 0) {
                      piVar4 = (int *)FUN_143751fa0(param_3,local_474,"value",&local_538);
                      if (-1 < *piVar4) {
                        local_260 = (longlong)local_538;
                        local_288 = local_288 | 0x10;
                        goto LAB_1436fdf57;
                      }
                      goto LAB_1436fe039;
                    }
                    uVar5 = FUN_143751f50(param_3,local_b8);
                    iVar3 = FUN_143750fa0(uVar5,"parameters");
                    if ((iVar3 != 0) ||
                       (piVar4 = (int *)FUN_143751fa0(param_3,local_46c,"count",local_470),
                       *piVar4 < 0)) goto LAB_1436fe039;
                    local_288 = local_288 | 0x40000;
                    local_1f0 = 0;
                    piVar4 = (int *)FUN_1436fc820(param_1,local_530,param_3,"parameters");
                    iVar3 = *piVar4;
                    while (-1 < iVar3) {
                      uVar5 = FUN_143751f50(param_3,local_78);
                      iVar3 = FUN_143750fa0(uVar5,"typeparam");
                      if (iVar3 == 0) {
                        local_568 = 0;
                        lStack_560 = 0;
                        piVar4 = (int *)FUN_143752040(param_3,local_468,&DAT_145af4d5c,&local_568);
                        if (*piVar4 < 0) goto LAB_1436fe039;
                        cVar2 = FUN_143750eb0(&local_568,&DAT_145afa020);
                        if (cVar2 != '\0') {
                          local_568 = local_568 + 1;
                          lStack_560 = lStack_560 + -1;
                        }
                        cVar2 = FUN_143750eb0(&local_568,&DAT_145af4d3c);
                        if (cVar2 == '\0') goto LAB_1436fe039;
                        iVar3 = FUN_14370c910(&DAT_145af4d3c);
                        local_568 = local_568 + iVar3;
                        iVar3 = FUN_143752110(&local_568,&local_558);
                        if (iVar3 < 0) goto LAB_1436fe039;
                        FUN_143737760(local_2e8,0,&DAT_145b13938);
                        uVar5 = FUN_143703a50();
                        if (local_388 == (local_384 & 0x3fffffff)) {
                          FUN_14370c460(uVar5,&local_390,4);
                        }
                        *(undefined4 *)(local_390 + (longlong)(int)local_388 * 4) =
                             (undefined4)local_558;
                        local_388 = local_388 + 1;
                      }
                      else {
                        uVar5 = FUN_143751f50(param_3,local_98);
                        iVar3 = FUN_143750fa0(uVar5,"valueparam");
                        if ((iVar3 != 0) ||
                           (piVar4 = (int *)FUN_143751fa0(param_3,local_52c,"value",&local_534),
                           *piVar4 < 0)) goto LAB_1436fe039;
                        FUN_143737860(local_2e8,(longlong)local_534,&DAT_145b41088);
                      }
                      piVar4 = (int *)FUN_1436fc820(param_1,local_530,param_3,"parameters");
                      iVar3 = *piVar4;
                    }
                  }
                }
              }
            }
          }
LAB_1436fdf57:
          piVar4 = (int *)FUN_1436fc820(param_1,local_548,param_3,&DAT_145af4d3c);
          iVar3 = *piVar4;
        } while( true );
      }
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436fe100 FUN_1436fe100 body=384 status=ok
// SIG undefined FUN_1436fe100(void)

void FUN_1436fe100(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar10 = 1;
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x80) + -1;
  if (1 < *(int *)(param_1 + 0x188)) {
    lVar13 = 0x10;
    do {
      lVar9 = *(longlong *)(param_1 + 0x180);
      lVar12 = (longlong)*(int *)(param_1 + 0x80);
      iVar1 = *(int *)(lVar9 + 8 + lVar13);
      uVar2 = *(undefined4 *)(lVar9 + 0xc + lVar13);
      iVar11 = *(int *)(param_1 + 0x80) + 1;
      uVar3 = *(undefined8 *)(lVar9 + lVar13);
      if (iVar11 < *(int *)(param_1 + 0x80)) {
        iVar11 = *(int *)(param_1 + 0x80);
      }
      uVar6 = FUN_143703a50();
      uVar8 = *(uint *)(param_1 + 0x84) & 0x3fffffff;
      if ((int)uVar8 < iVar11) {
        iVar5 = uVar8 * 2;
        iVar4 = iVar11;
        if (iVar11 < iVar5) {
          iVar4 = iVar5;
        }
        FUN_14370c310(uVar6,param_1 + 0x78,iVar4,0x18);
      }
      iVar5 = iVar11 - *(int *)(param_1 + 0x80);
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        puVar7 = (undefined1 *)
                 (*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x80) * 0x18 + 0x10);
        do {
          if ((undefined8 *)(puVar7 + -0x10) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar7 + -0x10) = 0;
            *(undefined8 *)(puVar7 + -8) = 0;
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 4) = 0;
          }
          puVar7 = puVar7 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      *(int *)(param_1 + 0x80) = iVar11;
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 0x10;
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8);
      lVar9 = *(longlong *)(param_1 + 0x78);
      *(undefined8 *)(lVar9 + lVar12 * 0x18) = uVar3;
      *(undefined8 *)(lVar9 + 8 + lVar12 * 0x18) = uVar6;
      *(undefined1 *)(lVar9 + 0x10 + lVar12 * 0x18) = 1;
      *(undefined4 *)(lVar9 + 0x14 + lVar12 * 0x18) = uVar2;
    } while (iVar10 < *(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x188) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  return;
}



// FUNCTION 1436fe280 FUN_1436fe280 body=824 status=ok
// SIG undefined FUN_1436fe280(void)

longlong * FUN_1436fe280(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res20 [2];
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [8];
  undefined1 local_188 [16];
  undefined1 local_178 [208];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  FUN_1437367c0(param_1 + 0xf0);
  FUN_1437394e0(param_1 + 0x60);
  *(undefined4 *)(param_1 + 400) = 0;
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x188) == (*(uint *)(param_1 + 0x18c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x180,0x10);
  }
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  FUN_1437516f0(local_178,param_3);
  FUN_1436fc9f0(param_1,local_res8,local_178);
  if (local_res8[0] < 0) {
LAB_1436fe537:
    if (1 < DAT_146b7bd58) {
      FUN_14373a730(local_68,&DAT_146b7bd50,2);
      lVar4 = FUN_14373bbd0(local_68,"File does not begin with a \'tagfile\' element",&DAT_145b909f0
                            ,0);
      *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Xml\\hkXmlReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x28) = 0xe2;
      FUN_14373a950(local_68);
    }
  }
  else {
    uVar2 = FUN_143751f50(local_178,local_188);
    iVar1 = FUN_143750fa0(uVar2,"hktagfile");
    if (iVar1 != 0) goto LAB_1436fe537;
    piVar3 = (int *)FUN_143751fa0(local_178,local_res8,"version",local_res20);
    if ((-1 < *piVar3) && (local_res20[0] == 3)) {
      piVar3 = (int *)FUN_1436fc820(param_1,local_198,local_178,"hktagfile");
      iVar1 = *piVar3;
      while (-1 < iVar1) {
        uVar2 = FUN_143751f50(local_178,local_188);
        iVar1 = FUN_143750fa0(uVar2,&DAT_145af4d3c);
        if (iVar1 == 0) {
          FUN_1436fd330(param_1,local_res8,local_178);
          bVar5 = local_res8[0] < 0;
        }
        else {
          uVar2 = FUN_143751f50(local_178,local_a8);
          iVar1 = FUN_143750fa0(uVar2,"object");
          if (iVar1 == 0) {
            FUN_1436fe5e0(param_1,local_194);
            FUN_1436fcd60(param_1,&local_1a8,local_178,0);
            bVar5 = local_1a8 < 0;
          }
          else {
            uVar2 = FUN_143751f50(local_178,local_98);
            iVar1 = FUN_143750fa0(uVar2,"import");
            if (iVar1 == 0) {
              FUN_1436fcd00(param_1,&local_1a4,local_178);
              bVar5 = local_1a4 < 0;
            }
            else {
              uVar2 = FUN_143751f50(local_178,local_88);
              iVar1 = FUN_143750fa0(uVar2,"export");
              if (iVar1 == 0) {
                FUN_1436fcca0(param_1,&local_1a0,local_178);
                bVar5 = local_1a0 < 0;
              }
              else {
                uVar2 = FUN_143751f50(local_178,local_78);
                iVar1 = FUN_143750fa0(uVar2,&DAT_145b759dc);
                if (iVar1 != 0) goto LAB_1436fe58c;
                FUN_1436fe5e0(param_1,local_190);
                FUN_1436fcd60(param_1,&local_19c,local_178,1);
                bVar5 = local_19c < 0;
              }
            }
          }
        }
        if (bVar5) goto LAB_1436fe58c;
        piVar3 = (int *)FUN_1436fc820(param_1,local_198,local_178);
        iVar1 = *piVar3;
      }
      FUN_1436fe100(param_1);
      *param_2 = param_1 + 0x60;
      goto LAB_1436fe58f;
    }
  }
LAB_1436fe58c:
  *param_2 = 0;
LAB_1436fe58f:
  FUN_1436fc2e0(local_178);
  return param_2;
}



// FUNCTION 1436fe5c0 FUN_1436fe5c0 body=27 status=ok
// SIG undefined FUN_1436fe5c0(void)

undefined8 FUN_1436fe5c0(longlong param_1,undefined8 param_2)

{
  FUN_1436fe280(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436fe5e0 FUN_1436fe5e0 body=436 status=ok
// SIG undefined FUN_1436fe5e0(void)

undefined4 * FUN_1436fe5e0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  uint local_30;
  uint local_2c;
  
  iVar7 = *(int *)(param_1 + 0x70);
  plVar1 = (longlong *)(param_1 + 0x138);
  lVar6 = *(longlong *)(param_1 + 0x68);
  uVar8 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  iVar2 = *(int *)(param_1 + 0x140) + -1;
  uVar5 = uVar8;
  if (-1 < iVar2) {
    lVar4 = 0;
    piVar3 = (int *)*plVar1;
    do {
      if (*piVar3 != -1) break;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar4 <= iVar2);
  }
  if ((int)uVar5 <= *(int *)(param_1 + 0x140) + -1) {
    do {
      iVar2 = *(int *)(*plVar1 + (longlong)(int)uVar5 * 4);
      if (iVar2 < (int)((longlong)iVar7 * 8 >> 3)) {
        if (*(longlong *)(lVar6 + (longlong)iVar2 * 8) != 0) {
          FUN_143736450();
          uVar8 = local_30;
        }
        if (uVar8 == (local_2c & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,&local_38,4);
          uVar8 = local_30;
        }
        *(int *)(local_38 + (longlong)(int)uVar8 * 4) = iVar2;
        local_30 = local_30 + 1;
        uVar8 = local_30;
      }
      uVar5 = uVar5 + 1;
      iVar2 = *(int *)(param_1 + 0x140) + -1;
      if ((int)uVar5 <= iVar2) {
        lVar4 = (longlong)(int)uVar5;
        piVar3 = (int *)(*plVar1 + lVar4 * 4);
        do {
          if (*piVar3 != -1) break;
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (lVar4 <= iVar2);
      }
    } while ((int)uVar5 <= *(int *)(param_1 + 0x140) + -1);
  }
  iVar7 = 0;
  if (0 < (int)uVar8) {
    lVar6 = 0;
    do {
      FUN_1436ff9c0(plVar1,local_res8,*(undefined4 *)(lVar6 + local_38));
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar7 < (int)local_30);
  }
  *param_2 = 0;
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_38,4,local_2c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1436fe7a0 FUN_1436fe7a0 body=4633 status=ok
// SIG undefined FUN_1436fe7a0(void)

undefined4 *
FUN_1436fe7a0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  char *pcVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  char *pcStack_1e8;
  ulonglong local_1e0;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  uint uStack_1cc;
  longlong *local_1c8;
  char *pcStack_1c0;
  char *local_1b8;
  int local_1b0;
  uint local_1ac;
  char local_1a8 [128];
  longlong *local_128;
  longlong lStack_120;
  longlong *local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 *local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  char *local_c8;
  undefined4 local_c0;
  uint local_bc;
  char local_b8 [160];
  
  uVar7 = FUN_143751f50(param_3,&local_218);
  iVar5 = FUN_143750fa0(uVar7,"record");
  if (iVar5 == 0) {
    local_1e0 = 0;
    local_1f0 = (longlong *)0x0;
    pcStack_1e8 = (char *)0x0;
    if (param_4[1] != 0) {
      puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
      bVar4 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        bVar4 = (byte)*puVar8;
      }
      if ((bVar4 & 0xf) == 7) {
        local_1f0 = (longlong *)*param_4;
        pcStack_1e8 = (char *)param_4[1];
        if ((*(byte *)(param_4 + 2) & 1) != 0) {
          FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
        }
        if ((local_1e0 & 1) != 0) {
          FUN_143733a60(local_1e0 & 0xfffffffffffffffe);
        }
        local_1e0 = param_4[2];
      }
    }
    piVar9 = (int *)FUN_1436fc820(param_1,&local_1d0,param_3,"record");
    iVar5 = *piVar9;
    while (uVar13 = local_1e0, -1 < iVar5) {
      uVar7 = FUN_143751f50(param_3,&local_1c8);
      iVar5 = FUN_143750fa0(uVar7,"field");
      if (iVar5 != 0) {
        *param_2 = 0x80040200;
        uVar13 = local_1e0;
        goto LAB_1436fea5c;
      }
      local_1b8 = local_1a8;
      local_1ac = 0x80000080;
      local_1b0 = 1;
      local_1a8[0] = '\0';
      local_218 = (longlong *)0x0;
      uStack_210 = 0;
      piVar9 = (int *)FUN_143752040(param_3,&local_1f8,&DAT_145af95b0,&local_218);
      if ((*piVar9 < 0) || (iVar5 = FUN_143751cf0(&local_218,&local_1b8), iVar5 < 0)) {
        *param_2 = 0x80040200;
LAB_1436fea23:
        local_1b0 = 0;
        if (-1 < (int)local_1ac) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff);
        }
        local_1b8 = (char *)0x0;
        local_1ac = 0x80000000;
        uVar13 = local_1e0;
        goto LAB_1436fea5c;
      }
      cVar3 = FUN_143746f20(&local_1b8,&DAT_145afa020);
      if (cVar3 != '\0') {
        FUN_143745ed0(&local_1b8,1);
        FUN_143745e50(&local_1b8,1);
      }
      FUN_143714b80(pcStack_1e8,&local_200,local_1b8,1);
      if ((longlong *)0x1 < local_200) {
        FUN_143741f50(&local_1f0,&local_128);
        piVar9 = (int *)FUN_1436fc820(param_1,&local_1d4,param_3,"field");
        if ((-1 < *piVar9) &&
           (piVar9 = (int *)FUN_1436fe7a0(param_1,&local_1d8,param_3,&local_128), *piVar9 < 0)) {
          *param_2 = 0x80040200;
          if (((ulonglong)local_118 & 1) != 0) {
            FUN_143733a60((ulonglong)local_118 & 0xfffffffffffffffe);
          }
          goto LAB_1436fea23;
        }
        if (((ulonglong)local_118 & 1) != 0) {
          FUN_143733a60((ulonglong)local_118 & 0xfffffffffffffffe);
        }
      }
      local_1b0 = 0;
      if (-1 < (int)local_1ac) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff);
      }
      piVar9 = (int *)FUN_1436fc820(param_1,&local_1d0,param_3,"record");
      iVar5 = *piVar9;
    }
LAB_1436ff70f:
    if ((uVar13 & 1) == 0) goto LAB_1436ff99d;
    plVar15 = (longlong *)(uVar13 & 0xfffffffffffffffe);
LAB_1436ff998:
    FUN_143733a60(plVar15);
LAB_1436ff99d:
    *param_2 = 0;
    return param_2;
  }
  uVar7 = FUN_143751f50(param_3,&local_218);
  iVar5 = FUN_143750fa0(uVar7,"integer");
  if (iVar5 == 0) {
    local_1f0 = (longlong *)0x0;
    local_128 = (longlong *)0x0;
    lStack_120 = 0;
    if (param_4[1] == 0) {
LAB_1436feafd:
      local_200 = local_128;
      lVar16 = lStack_120;
      plVar17 = local_1f0;
    }
    else {
      puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
      bVar4 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        bVar4 = (byte)*puVar8;
      }
      if ((bVar4 & 0xf) != 4) goto LAB_1436feafd;
      local_200 = (longlong *)*param_4;
      lVar16 = param_4[1];
      if ((*(byte *)(param_4 + 2) & 1) != 0) {
        FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
      }
      plVar17 = (longlong *)param_4[2];
    }
    local_1b8 = local_1a8;
    local_1ac = 0x80000080;
    local_1b0 = 1;
    local_1a8[0] = '\0';
    local_218 = (longlong *)0x0;
    uStack_210 = 0;
    piVar9 = (int *)FUN_143752040(param_3,&local_1f8,"value",&local_218);
    if ((-1 < *piVar9) && (iVar5 = FUN_143751cf0(&local_218,&local_1b8), -1 < iVar5)) {
      cVar3 = FUN_143746f20(&local_1b8,&DAT_145afa020);
      if (cVar3 != '\0') {
        FUN_143745ed0(&local_1b8,1);
        FUN_143745e50(&local_1b8,1);
      }
      local_208 = *local_1b8 == '-';
      pcVar14 = local_1b8;
      if ((bool)local_208) {
        pcVar14 = local_1b8 + 1;
      }
      local_218 = (longlong *)FUN_14370c5e0(pcVar14,0);
      lVar2 = uStack_210;
      local_1f0 = (longlong *)((ulonglong)plVar17 & 0xfffffffffffffffe);
      uStack_210 = CONCAT71(uStack_210._1_7_,local_208);
      uVar7 = uStack_210;
      uStack_210._4_4_ = SUB84(lVar2,4);
      uStack_210 = CONCAT44(uStack_210._4_4_,(int)uVar7);
      (**(code **)(*local_1f0 + 0x30))(local_1f0,&local_1f8,local_200,lVar16,&local_218);
      local_1b0 = 0;
      if (-1 < (int)local_1ac) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff);
      }
      local_1b8 = (char *)0x0;
      local_1ac = 0x80000000;
      plVar15 = local_1f0;
joined_r0x0001436ff1db:
      local_1f0 = plVar15;
      if (((ulonglong)plVar17 & 1) == 0) goto LAB_1436ff99d;
      goto LAB_1436ff998;
    }
    *param_2 = 0x80040200;
  }
  else {
    uVar7 = FUN_143751f50(param_3,&local_218);
    iVar5 = FUN_143750fa0(uVar7,&DAT_145b75a48);
    if (iVar5 != 0) {
      uVar7 = FUN_143751f50(param_3,&local_218);
      iVar5 = FUN_143750fa0(uVar7,&DAT_145af4c58);
      if (iVar5 != 0) {
        uVar7 = FUN_143751f50(param_3,&local_218);
        iVar5 = FUN_143750fa0(uVar7,"string");
        if (iVar5 != 0) {
          uVar7 = FUN_143751f50(param_3,&local_218);
          iVar5 = FUN_143750fa0(uVar7,"array");
          if (iVar5 == 0) {
            local_218 = (longlong *)0x0;
            uStack_210 = 0;
            piVar9 = (int *)FUN_143752040(param_3,&local_1f8,"elementtypeid",&local_218);
            if (*piVar9 < 0) {
LAB_1436ff380:
              *param_2 = 0x80040200;
              return param_2;
            }
            cVar3 = FUN_143750eb0(&local_218,&DAT_145afa020);
            if (cVar3 != '\0') {
              local_218 = (longlong *)((longlong)local_218 + 1);
              uStack_210 = uStack_210 + -1;
            }
            cVar3 = FUN_143750eb0(&local_218,&DAT_145af4d3c);
            if (cVar3 == '\0') goto LAB_1436ff380;
            iVar5 = FUN_14370c910(&DAT_145af4d3c);
            local_218 = (longlong *)((longlong)local_218 + (longlong)iVar5);
            iVar5 = FUN_143752110(&local_218,&local_200);
            if ((iVar5 < 0) ||
               (piVar9 = (int *)FUN_143751fa0(param_3,&local_1f8,"count",&local_1d8), *piVar9 < 0))
            goto LAB_1436ff380;
            local_d0 = 0;
            local_e0 = (undefined4 *)0x0;
            uStack_d8 = 0;
            bVar4 = 0;
            if (param_4[1] != 0) {
              puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
              if (puVar8 != (undefined8 *)0x0) {
                bVar4 = (byte)*puVar8;
              }
              if ((bVar4 & 0xf) == 8) {
                local_e0 = (undefined4 *)*param_4;
                uStack_d8 = param_4[1];
                if ((*(byte *)(param_4 + 2) & 1) != 0) {
                  FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
                }
                if ((local_d0 & 1) != 0) {
                  FUN_143733a60(local_d0 & 0xfffffffffffffffe);
                }
                local_d0 = param_4[2];
              }
            }
            local_100 = (longlong *)0x0;
            lStack_f8 = 0;
            local_f0 = 0;
            local_e8 = (longlong *)0x0;
            iVar5 = FUN_1436fc9c0(uStack_d8);
            if (iVar5 == 0) {
              if (local_1d8 != 0) {
                lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)local_200 * 8)
                ;
                *local_e0 = *(undefined4 *)(param_1 + 0x188);
                iVar5 = FUN_1437152f0(lVar16);
                local_218 = (longlong *)
                            (**(code **)(*(longlong *)(param_1 + 0xf0) + 8))
                                      ((longlong *)(param_1 + 0xf0),iVar5 * local_1d8);
                uStack_210 = CONCAT44(local_1d8,(int)local_200);
                local_200 = local_218;
                uVar7 = FUN_143703a50();
                if (*(uint *)(param_1 + 0x188) == (*(uint *)(param_1 + 0x18c) & 0x3fffffff)) {
                  FUN_14370c460(uVar7,(longlong *)(param_1 + 0x180),0x10);
                }
                puVar10 = (undefined4 *)
                          ((longlong)*(int *)(param_1 + 0x188) * 0x10 +
                          *(longlong *)(param_1 + 0x180));
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = (undefined4)local_218;
                  puVar10[1] = local_218._4_4_;
                  puVar10[2] = (undefined4)uStack_210;
                  puVar10[3] = uStack_210._4_4_;
                }
                *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
                local_1d4 = 0;
                local_1f0 = (longlong *)0x0;
                plVar17 = local_1f0;
                if (lVar16 != 0) {
                  local_1d4 = FUN_1437152f0(lVar16);
                  local_1f0 = (longlong *)FUN_1437151a0(lVar16);
                  plVar17 = local_1f0;
                  if (((ulonglong)local_1f0 & 1) != 0) {
                    FUN_1437329e0((ulonglong)local_1f0 & 0xfffffffffffffffe);
                    plVar17 = local_1f0;
                  }
                }
                goto LAB_1436ff5de;
              }
              *local_e0 = 0;
              plVar17 = (longlong *)0x0;
            }
            else {
              uVar7 = FUN_143742a00(&local_e0,&local_128);
              FUN_1436fc3e0(&local_100,uVar7);
              if ((local_110 & 1) != 0) {
                FUN_143733a60(local_110 & 0xfffffffffffffffe);
              }
              local_1d4 = local_f0._4_4_;
              local_200 = local_100;
              lVar16 = lStack_f8;
              local_1d8 = (int)local_f0;
              plVar17 = local_e8;
LAB_1436ff5de:
              local_e8 = plVar17;
              plVar17 = local_e8;
              local_1f0 = local_e8;
              if ((local_1d8 != 0) &&
                 (piVar9 = (int *)FUN_1436fc820(param_1,&local_1f8,param_3,"array"),
                 plVar17 = local_1f0, -1 < *piVar9)) {
                local_218 = (longlong *)((ulonglong)local_1f0 & 0xfffffffffffffffe);
                local_1c8 = (longlong *)((ulonglong)((byte)local_e8 & 1) | (ulonglong)local_218);
                local_1d0 = 0;
                do {
                  local_128 = (longlong *)((longlong)local_1d0 + (longlong)local_200);
                  lStack_120 = lVar16;
                  local_118 = local_1c8;
                  if (((ulonglong)local_1c8 & 1) != 0) {
                    FUN_1437329e0((ulonglong)local_1c8 & 0xfffffffffffffffe);
                  }
                  piVar9 = (int *)FUN_1436fe7a0(param_1,&local_108,param_3,&local_128);
                  if (*piVar9 < 0) {
                    *param_2 = 0x80040200;
                    if (((ulonglong)local_118 & 1) != 0) {
                      FUN_143733a60((ulonglong)local_118 & 0xfffffffffffffffe);
                    }
                    uVar13 = local_d0;
                    if (((ulonglong)local_e8 & 1) != 0) {
                      FUN_143733a60(local_218);
                      uVar13 = local_d0;
                    }
LAB_1436fea5c:
                    if ((uVar13 & 1) == 0) {
                      return param_2;
                    }
                    FUN_143733a60(uVar13 & 0xfffffffffffffffe);
                    return param_2;
                  }
                  local_1d0 = local_1d0 + local_1d4;
                  if (((ulonglong)local_118 & 1) != 0) {
                    FUN_143733a60((ulonglong)local_118 & 0xfffffffffffffffe);
                  }
                  piVar9 = (int *)FUN_1436fc820(param_1,&local_1f8,param_3,"array");
                  plVar17 = local_1f0;
                } while (-1 < *piVar9);
              }
            }
            uVar13 = local_d0;
            if (((ulonglong)local_e8 & 1) != 0) {
              FUN_143733a60((ulonglong)plVar17 & 0xfffffffffffffffe);
              uVar13 = local_d0;
            }
            goto LAB_1436ff70f;
          }
          uVar7 = FUN_143751f50(param_3,&local_218);
          iVar5 = FUN_143750fa0(uVar7,"pointer");
          if (iVar5 != 0) goto LAB_1436ff99d;
          local_118 = (longlong *)0x0;
          local_128 = (longlong *)0x0;
          lStack_120 = 0;
          plVar15 = (longlong *)0x0;
          if (param_4[1] != 0) {
            puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
            bVar4 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              bVar4 = (byte)*puVar8;
            }
            if ((bVar4 & 0xf) == 6) {
              FUN_1436fc440(&local_128,param_4);
              plVar15 = local_118;
            }
          }
          local_1b8 = local_1a8;
          local_1ac = 0x80000080;
          local_1b0 = 1;
          local_1a8[0] = '\0';
          local_1c8 = (longlong *)0x0;
          pcStack_1c0 = (char *)0x0;
          piVar9 = (int *)FUN_143752040(param_3,&local_108,&DAT_145af4d5c,&local_1c8);
          if (*piVar9 < 0) {
LAB_1436ff7c6:
            *param_2 = 0x80040200;
            FUN_1436fc280(&local_1b8);
            if (((ulonglong)plVar15 & 1) == 0) {
              return param_2;
            }
            FUN_143733a60((ulonglong)plVar15 & 0xfffffffffffffffe);
            return param_2;
          }
          iVar5 = FUN_143751cf0(&local_1c8,&local_1b8);
          if (iVar5 < 0) goto LAB_1436ff7c6;
          cVar3 = FUN_143746f20(&local_1b8,&DAT_145afa020);
          if (cVar3 != '\0') {
            FUN_143745ed0(&local_1b8,1);
            FUN_143745e50(&local_1b8,1);
          }
          cVar3 = FUN_143746f20(&local_1b8,"object");
          if (cVar3 == '\0') {
            cVar3 = FUN_143746f20(&local_1b8,&DAT_145b759dc);
            if (cVar3 == '\0') goto LAB_1436ff7c6;
            local_1c8 = (longlong *)&DAT_145b759dc;
            pcStack_1c0 = "";
          }
          else {
            local_1c8 = (longlong *)0x145b0a24c;
            pcStack_1c0 = "";
          }
          pcStack_1e8 = local_1b8 + (longlong)local_1b0 + -1;
          local_1f0 = (longlong *)(local_1b8 + ((int)pcStack_1c0 - (int)local_1c8));
          iVar5 = FUN_143752110(&local_1f0,&local_218);
          if (iVar5 < 0) goto LAB_1436ff7c6;
          local_1c8 = local_218;
          local_1d0 = (int)local_218 + 1;
          if (local_1d0 < *(int *)(param_1 + 0x80)) {
            local_1d0 = *(int *)(param_1 + 0x80);
          }
          local_200 = (longlong *)(param_1 + 0x78);
          uVar7 = FUN_143703a50();
          uVar12 = *(uint *)((longlong)local_200 + 0xc) & 0x3fffffff;
          if ((int)uVar12 < local_1d0) {
            iVar1 = uVar12 * 2;
            iVar5 = local_1d0;
            if (local_1d0 < iVar1) {
              iVar5 = iVar1;
            }
            FUN_14370c310(uVar7,local_200,iVar5,0x18);
          }
          iVar5 = local_1d0 - (int)local_200[1];
          lVar16 = (longlong)iVar5;
          if (0 < iVar5) {
            puVar11 = (undefined1 *)(*local_200 + ((longlong)(int)local_200[1] * 3 + 2) * 8);
            do {
              if ((undefined8 *)(puVar11 + -0x10) != (undefined8 *)0x0) {
                *(undefined8 *)(puVar11 + -0x10) = 0;
                *(undefined8 *)(puVar11 + -8) = 0;
                *puVar11 = 0;
                *(undefined4 *)(puVar11 + 4) = 0;
              }
              puVar11 = puVar11 + 0x18;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          *(int *)(local_200 + 1) = local_1d0;
          *(int *)*param_4 = (int)local_1c8;
          FUN_1436fc280(&local_1b8);
          if (((ulonglong)plVar15 & 1) == 0) goto LAB_1436ff99d;
          plVar15 = (longlong *)((ulonglong)plVar15 & 0xfffffffffffffffe);
          goto LAB_1436ff998;
        }
        local_1f0 = (longlong *)0x0;
        local_200 = (longlong *)0x0;
        plVar17 = local_200;
        if (param_4[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
          bVar4 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar4 = (byte)*puVar8;
          }
          plVar17 = local_200;
          if ((bVar4 & 0xf) == 3) {
            local_1f0 = (longlong *)*param_4;
            if ((*(byte *)(param_4 + 2) & 1) != 0) {
              FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
            }
            plVar17 = (longlong *)param_4[2];
          }
        }
        local_218 = (longlong *)0x0;
        uStack_210 = 0;
        piVar9 = (int *)FUN_143752040(param_3,&local_1f8,"value",&local_218);
        if (*piVar9 < 0) {
          *(undefined4 *)local_1f0 = 0;
        }
        else {
          FUN_143745210(&local_1b8,&local_218);
          FUN_143751cf0(&local_218,&local_1b8);
          cVar3 = FUN_143746f20(&local_1b8,&DAT_145afa020);
          if (cVar3 != '\0') {
            FUN_143745ed0(&local_1b8,1);
            FUN_143745e50(&local_1b8,1);
          }
          iVar5 = FUN_1436fc6b0(param_1,local_1b8);
          if (iVar5 < 0) {
            *param_2 = 0x80040200;
            FUN_1436fc280(&local_1b8);
            goto LAB_1436feb90;
          }
          *(int *)local_1f0 = iVar5;
          FUN_1436fc280(&local_1b8);
        }
LAB_1436ff31f:
        if (((ulonglong)plVar17 & 1) == 0) goto LAB_1436ff99d;
        plVar15 = (longlong *)((ulonglong)plVar17 & 0xfffffffffffffffe);
        goto LAB_1436ff998;
      }
      local_1f0 = (longlong *)0x0;
      local_128 = (longlong *)0x0;
      lStack_120 = 0;
      if (param_4[1] == 0) {
LAB_1436ff0d8:
        local_200 = local_128;
        lVar16 = lStack_120;
        plVar17 = local_1f0;
      }
      else {
        puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
        bVar4 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          bVar4 = (byte)*puVar8;
        }
        if ((bVar4 & 0xf) != 2) goto LAB_1436ff0d8;
        local_200 = (longlong *)*param_4;
        lVar16 = param_4[1];
        if ((*(byte *)(param_4 + 2) & 1) != 0) {
          FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
        }
        plVar17 = (longlong *)param_4[2];
      }
      local_1b8 = local_1a8;
      local_1ac = 0x80000080;
      local_1b0 = 1;
      local_1a8[0] = '\0';
      local_218 = (longlong *)0x0;
      uStack_210 = 0;
      piVar9 = (int *)FUN_143752040(param_3,&local_1f8,"value",&local_218);
      if (*piVar9 < 0) {
        *param_2 = 0x80040200;
        FUN_1436fc280(&local_1b8);
        goto LAB_1436feb90;
      }
      iVar5 = FUN_143751cf0(&local_218,&local_1b8);
      if (iVar5 < 0) {
        *param_2 = 0x80040200;
        FUN_1436fc280();
        goto LAB_1436feb90;
      }
      cVar3 = FUN_143746f20(&local_1b8,&DAT_145afa020);
      if (cVar3 != '\0') {
        FUN_143745ed0(&local_1b8,1);
        FUN_143745e50(&local_1b8,1);
      }
      iVar5 = FUN_14370c7b0(local_1b8,&DAT_145af3900);
      local_1f0 = (longlong *)((ulonglong)plVar17 & 0xfffffffffffffffe);
      (**(code **)(*local_1f0 + 0x30))(local_1f0,&local_1f8,local_200,lVar16,iVar5 == 0);
      FUN_1436fc280(&local_1b8);
      plVar15 = local_1f0;
      goto joined_r0x0001436ff1db;
    }
    local_1f8 = (longlong *)0x0;
    local_128 = (longlong *)0x0;
    lStack_120 = 0;
    if (param_4[1] == 0) {
LAB_1436fed16:
      local_1f0 = local_128;
      lVar16 = lStack_120;
      plVar17 = local_1f8;
    }
    else {
      puVar8 = (undefined8 *)FUN_143714490(param_4[1],1);
      bVar4 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        bVar4 = (byte)*puVar8;
      }
      if ((bVar4 & 0xf) != 5) goto LAB_1436fed16;
      local_1f0 = (longlong *)*param_4;
      lVar16 = param_4[1];
      if ((*(byte *)(param_4 + 2) & 1) != 0) {
        FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
      }
      plVar17 = (longlong *)param_4[2];
    }
    local_1b8 = local_1a8;
    local_c8 = local_b8;
    local_1ac = 0x80000080;
    local_1b0 = 1;
    local_1a8[0] = '\0';
    local_bc = 0x80000080;
    local_c0 = 1;
    local_b8[0] = '\0';
    local_218 = (longlong *)0x0;
    uStack_210 = 0;
    piVar9 = (int *)FUN_143752040(param_3,&local_1f8,&DAT_145b75a50,&local_218);
    if ((*piVar9 < 0) || (iVar5 = FUN_143751cf0(&local_218,&local_c8), iVar5 < 0)) {
LAB_1436fed96:
      *param_2 = 0x80040200;
    }
    else {
      cVar3 = FUN_143746f20(&local_c8,&DAT_145afa020);
      if (cVar3 != '\0') {
        FUN_143745ed0(&local_c8,1);
        FUN_143745e50(&local_c8,1);
      }
      local_218 = (longlong *)0x0;
      uStack_210 = 0;
      piVar9 = (int *)FUN_143752040(param_3,&local_1f8,&DAT_145b75a54,&local_218);
      if ((*piVar9 < 0) || (iVar5 = FUN_143751cf0(&local_218,&local_1b8), iVar5 < 0))
      goto LAB_1436fed96;
      cVar3 = FUN_143746f20(&local_1b8,&DAT_145afa020);
      if (cVar3 != '\0') {
        FUN_143745ed0(&local_1b8,1);
        FUN_143745e50(&local_1b8,1);
      }
      if (*local_c8 == '#') {
        local_200 = (longlong *)0x0;
        local_108 = (longlong *)0x0;
        FUN_143662c40(local_1b8,&DAT_145b75a58,&local_200);
        FUN_143662c40(local_c8 + 1,&DAT_145b75a5c,&local_108);
        plVar15 = local_108;
        local_1f8 = local_108;
        FUN_14370c700(&local_1d0,&local_1f8,8);
        plVar18 = plVar15;
        if (((((uStack_1cc & 0x7ff00000) == 0x7ff00000) || ((double)local_200 <= 0.0)) ||
            (plVar18 = local_200, (double)plVar15 == (double)local_200)) ||
           ((piVar9 = (int *)FUN_143714420(lVar16,1), plVar18 = plVar15, piVar9 == (int *)0x0 ||
            (*piVar9 != 0x174605)))) {
          (**(code **)(*(longlong *)((ulonglong)plVar17 & 0xfffffffffffffffe) + 0x30))
                    ((longlong *)((ulonglong)plVar17 & 0xfffffffffffffffe),&local_1f8,local_1f0,
                     lVar16,plVar18);
        }
        else {
          uVar6 = FUN_143751160(local_108);
          *(undefined4 *)local_1f0 = uVar6;
        }
        local_c0 = 0;
        if (-1 < (int)local_bc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1);
        }
        local_bc = 0x80000000;
        local_c8 = (char *)0x0;
        local_1b0 = 0;
        if (-1 < (int)local_1ac) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff);
        }
        local_1b8 = (char *)0x0;
        local_1ac = 0x80000000;
        goto LAB_1436ff31f;
      }
      *param_2 = 0x80040200;
    }
    local_c0 = 0;
    if (-1 < (int)local_bc) {
      local_c0 = 0;
      FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
    }
    local_c8 = (char *)0x0;
    local_bc = 0x80000000;
  }
  local_1b0 = 0;
  if (-1 < (int)local_1ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff);
  }
  local_1b8 = (char *)0x0;
  local_1ac = 0x80000000;
LAB_1436feb90:
  if (((ulonglong)plVar17 & 1) != 0) {
    FUN_143733a60((ulonglong)plVar17 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436ff9c0 FUN_1436ff9c0 body=149 status=ok
// SIG undefined FUN_1436ff9c0(void)

undefined4 * FUN_1436ff9c0(longlong *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = uVar1 - 1;
  uVar5 = uVar1;
  if (0 < (int)uVar7) {
    lVar3 = *param_1;
    uVar5 = param_3 * -0x61c8864f;
    uVar6 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | param_3 * -0x4f000000
            ) & uVar7;
    lVar4 = (longlong)(int)uVar6;
    iVar2 = *(int *)(lVar3 + lVar4 * 4);
    while ((uVar5 = uVar1, iVar2 != -1 && (uVar5 = uVar6, *(int *)(lVar3 + lVar4 * 4) != param_3)))
    {
      uVar6 = uVar6 + 1 & uVar7;
      lVar4 = (longlong)(int)uVar6;
      iVar2 = *(int *)(lVar3 + lVar4 * 4);
    }
  }
  if ((int)uVar5 <= (int)uVar7) {
    FUN_1436ffa60(param_1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436ffa60 FUN_1436ffa60 body=227 status=ok
// SIG undefined FUN_1436ffa60(void)

void FUN_1436ffa60(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (int)param_1[1] - 1;
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  *(undefined4 *)(*param_1 + (longlong)(int)param_2 * 4) = 0xffffffff;
  lVar3 = *param_1;
  uVar6 = param_2 + uVar7 & uVar7;
  iVar2 = *(int *)(lVar3 + (longlong)(int)uVar6 * 4);
  while (iVar2 != -1) {
    uVar6 = uVar6 + uVar7 & uVar7;
    iVar2 = *(int *)(lVar3 + (longlong)(int)uVar6 * 4);
  }
  uVar5 = uVar6 + 1 & uVar7;
  uVar6 = param_2 + 1 & uVar7;
  lVar1 = (longlong)(int)uVar6 * 4;
  iVar2 = *(int *)(lVar3 + (longlong)(int)uVar6 * 4);
  while (iVar2 != -1) {
    iVar2 = *(int *)(*param_1 + lVar1);
    uVar4 = iVar2 * -0x61c8864f;
    uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar2 * -0x4f000000)
            & uVar7;
    if ((((uVar6 < uVar5) || (uVar4 <= param_2)) &&
        ((param_2 <= uVar6 || ((uVar4 <= param_2 && (uVar6 < uVar4)))))) &&
       ((uVar4 <= param_2 || (uVar5 <= uVar4)))) {
      *(int *)(*param_1 + (longlong)(int)param_2 * 4) = iVar2;
      *(undefined4 *)(lVar1 + *param_1) = 0xffffffff;
      param_2 = uVar6;
    }
    uVar6 = uVar6 + 1 & uVar7;
    lVar1 = (longlong)(int)uVar6 * 4;
    iVar2 = *(int *)(lVar1 + *param_1);
  }
  return;
}



// FUNCTION 1436ffb50 FUN_1436ffb50 body=388 status=ok
// SIG undefined FUN_1436ffb50(void)

undefined4 * FUN_1436ffb50(longlong *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  lVar2 = *param_1;
  lVar9 = param_1[1];
  lVar8 = (longlong)(int)lVar9;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  iVar10 = 8;
  if (8 < param_3) {
    iVar10 = param_3;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar5 = FUN_143703a50();
  if (((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar10) &&
     (iVar3 = FUN_14370c310(uVar5,param_1,iVar10,4), iVar3 < 0)) {
    *param_2 = 0x80040200;
  }
  else {
    lVar6 = 0;
    *(int *)(param_1 + 1) = iVar10;
    if (0 < iVar10) {
      do {
        *(undefined4 *)(*param_1 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar10);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    local_res20 = lVar8;
    if (0 < (int)lVar9) {
      lVar9 = 0;
      do {
        iVar10 = *(int *)(lVar2 + lVar9 * 4);
        if (iVar10 != -1) {
          if ((int)param_1[1] + -1 < (int)param_1[2] * 2) {
            FUN_1436ffb50(param_1,local_res18,(int)param_1[1] * 2);
            lVar8 = local_res20;
          }
          iVar12 = 1;
          lVar6 = *param_1;
          uVar11 = (int)param_1[1] - 1;
          uVar4 = iVar10 * -0x61c8864f;
          uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  iVar10 * -0x4f000000) & uVar11;
          lVar7 = (longlong)(int)uVar4;
          iVar3 = *(int *)(lVar6 + lVar7 * 4);
          while (iVar3 != -1) {
            if (*(int *)(lVar6 + lVar7 * 4) == iVar10) {
              iVar12 = 0;
              break;
            }
            uVar4 = uVar4 + 1 & uVar11;
            lVar7 = (longlong)(int)uVar4;
            iVar3 = *(int *)(lVar6 + lVar7 * 4);
          }
          *(int *)(param_1 + 2) = (int)param_1[2] + iVar12;
          *(int *)(lVar6 + (longlong)(int)uVar4 * 4) = iVar10;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar8);
    }
    *param_2 = 0;
  }
  uVar5 = FUN_143703a50();
  if (-1 < (int)uVar1) {
    FUN_143702e10(uVar5,lVar2,4,uVar1 & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1436ffce0 FUN_1436ffce0 body=172 status=ok
// SIG undefined FUN_1436ffce0(void)

void FUN_1436ffce0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  iVar1 = param_2 + 1;
  if (param_2 + 1 < *(int *)(param_1 + 0x10)) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar6 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar6) {
      iVar2 = iVar6;
    }
    FUN_14370c310(uVar3,param_1 + 8,iVar2,8);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x10);
  if (0 < iVar6) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  FUN_14373a570(param_1 + 0x70,param_2,param_3);
  return;
}



// FUNCTION 1436ffd90 FUN_1436ffd90 body=106 status=ok
// SIG undefined FUN_1436ffd90(void)

undefined8
FUN_1436ffd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5
             )

{
  longlong local_48 [2];
  longlong local_38;
  longlong local_20;
  
  FUN_143733ca0(local_48,param_3,(longlong)param_4);
  FUN_1436fe280(param_1,param_2,local_48);
  if (param_5 != (longlong *)0x0) {
    *param_5 = (local_48[0] - local_38) + local_20;
  }
  FUN_143733ce0(local_48);
  return param_2;
}



// FUNCTION 1436ffe00 FindGeometryOpposingNormal body=37 status=ok
// SIG undefined FindGeometryOpposingNormal(void)

undefined8
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::FindGeometryOpposingNormal
          (longlong param_1,undefined8 param_2)

{
  FUN_1436ffd90(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436ffe30 FUN_1436ffe30 body=95 status=ok
// SIG undefined FUN_1436ffe30(void)

undefined8 * FUN_1436ffe30(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  DAT_146b7be10._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar2 != 0) {
    uVar3 = FUN_1436fbf50(lVar2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436ffe90 FUN_1436ffe90 body=253 status=ok
// SIG undefined FUN_1436ffe90(void)

void FUN_1436ffe90(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  bVar1 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 1) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  puVar2 = (undefined8 *)FUN_143714490(uStack_20,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (uint)*puVar2;
  }
  (*(code *)(&DAT_146b7bf20)[uVar3 & 0xf])(param_1,&local_28,param_3,param_4);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1436fff90 FUN_1436fff90 body=219 status=ok
// SIG undefined FUN_1436fff90(void)

void FUN_1436fff90(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 8) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_1437010d0(param_1,&local_28,param_3,param_4);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143700070 FUN_143700070 body=248 status=ok
// SIG undefined FUN_143700070(void)

void FUN_143700070(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  char local_res10 [8];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar5 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uVar3 = uStack_28;
  uVar4 = local_30;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    uVar3 = uStack_28;
    uVar4 = local_30;
    if ((bVar1 & 0xf) == 2) {
      uVar4 = *param_2;
      uVar3 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_2[2];
    }
  }
  local_res10[0] = '\0';
  plVar6 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar6 + 0x38))(plVar6,local_38,uVar4,uVar3,local_res10);
  pcVar7 = "false";
  if (local_res10[0] != '\0') {
    pcVar7 = "true";
  }
  FUN_1437022c0(param_1,param_3,"<bool value=\"%s\"/>",pcVar7);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(plVar6);
  }
  return;
}



// FUNCTION 143700170 FUN_143700170 body=219 status=ok
// SIG undefined FUN_143700170(void)

void FUN_143700170(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 5) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143701340(param_1,&local_28,param_3,param_4);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143700250 FUN_143700250 body=219 status=ok
// SIG undefined FUN_143700250(void)

void FUN_143700250(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 4) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143701430(param_1,&local_28,param_3,param_4);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143700330 FUN_143700330 body=221 status=ok
// SIG undefined FUN_143700330(void)

void FUN_143700330(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar2;
    }
    if ((bVar3 & 0xf) == 6) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_28);
  FUN_1437022c0(param_1,param_3,"<pointer id=\"object%d\"/>",uVar1);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143700410 FUN_143700410 body=219 status=ok
// SIG undefined FUN_143700410(void)

void FUN_143700410(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 7) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143701500(param_1,&local_28,param_3,param_4);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437004f0 FUN_1437004f0 body=219 status=ok
// SIG undefined FUN_1437004f0(void)

void FUN_1437004f0(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 3) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_1437016e0(param_1,&local_28,param_3,param_4);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437005d0 FUN_1437005d0 body=37 status=ok
// SIG undefined FUN_1437005d0(void)

void FUN_1437005d0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_143714490(*(undefined8 *)(param_2 + 8),1);
  FUN_1437329e0(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 143700600 FUN_143700600 body=217 status=ok
// SIG undefined FUN_143700600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143700600(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b7becc) {
    _Init_thread_header(&DAT_146b7becc);
    if (DAT_146b7becc == -1) {
      _DAT_146b7bf10 = FUN_143700e00;
      _DAT_146b7bf08 = FUN_143701040;
      _DAT_146b7bf00 = FUN_143701020;
      _DAT_146b7bef8 = FUN_143700eb0;
      _DAT_146b7bef0 = FUN_143700fa0;
      _DAT_146b7bee8 = FUN_143701060;
      _DAT_146b7bee0 = FUN_143700e50;
      _DAT_146b7bed8 = FUN_143701000;
      _DAT_146b7bed0 = FUN_1437010b0;
      _Init_thread_footer(&DAT_146b7becc);
    }
  }
  return param_1;
}



// FUNCTION 1437006e0 FUN_1437006e0 body=217 status=ok
// SIG undefined FUN_1437006e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437006e0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b7bec8) {
    _Init_thread_header(&DAT_146b7bec8);
    if (DAT_146b7bec8 == -1) {
      _DAT_146b7bf60 = FUN_1436fff90;
      _DAT_146b7bf58 = FUN_143700410;
      _DAT_146b7bf50 = FUN_143700330;
      _DAT_146b7bf48 = FUN_143700170;
      _DAT_146b7bf40 = FUN_143700250;
      _DAT_146b7bf38 = FUN_1437004f0;
      _DAT_146b7bf30 = FUN_143700070;
      _DAT_146b7bf28 = FUN_1436ffe90;
      DAT_146b7bf20 = FUN_1437005d0;
      _Init_thread_footer(&DAT_146b7bec8);
    }
  }
  return param_1;
}



// FUNCTION 1437007c0 FUN_1437007c0 body=238 status=ok
// SIG undefined FUN_1437007c0(void)

undefined8 * FUN_1437007c0(undefined8 *param_1,longlong param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkSerialize::XmlWriteFormat::vftable;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_143734b10(param_1 + 7);
  if (param_1[4] == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
      *puVar2 = hkSerialize::XmlWriteFormat::TypeWriter::vftable;
      FUN_143731a30(puVar2 + 3);
      puVar2[10] = param_1;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    if (param_1[4] != 0) {
      FUN_14370c150();
    }
    param_1[4] = puVar3;
  }
  return param_1;
}



// FUNCTION 1437008b0 FUN_1437008b0 body=116 status=ok
// SIG undefined FUN_1437008b0(void)

void FUN_1437008b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkSerialize::XmlWriteFormat::vftable;
  thunk_FUN_143734820(param_1 + 7);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],4,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  FUN_1437352a0(param_1);
  return;
}



// FUNCTION 143700930 FUN_143700930 body=139 status=ok
// SIG undefined FUN_143700930(void)

longlong FUN_143700930(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437008b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 1437009c0 FUN_1437009c0 body=22 status=ok
// SIG undefined FUN_1437009c0(void)

uint FUN_1437009c0(ushort *param_1)

{
  if (param_1 != (ushort *)0x0) {
    return (uint)*(undefined8 *)param_1 & 0xffff0000 | (uint)*param_1;
  }
  return 0;
}



// FUNCTION 1437009e0 FUN_1437009e0 body=111 status=ok
// SIG undefined FUN_1437009e0(void)

void FUN_1437009e0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_2;
    *(undefined4 *)(puVar3 + 1) = 0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  FUN_143702100(puVar3,local_res8,
                "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<hktagfile version=\"3\">");
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 143700a50 clear body=54 status=ok
// SIG undefined clear(void)

void hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear
               (longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar1 = *(int *)((longlong)param_1 + 0xc) + 1, lVar3 = (longlong)iVar1, 0 < iVar1)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *param_1) != -1) {
        *(undefined8 *)(lVar2 + *param_1) = 0xffffffffffffffff;
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 143700a90 FUN_143700a90 body=81 status=ok
// SIG undefined FUN_143700a90(void)

void FUN_143700a90(longlong *param_1,longlong *param_2)

{
  hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x10))(param_2,*param_1,(*(int *)((longlong)param_1 + 0xc) + 1) * 0x10);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143700af0 FUN_143700af0 body=143 status=ok
// SIG undefined FUN_143700af0(void)

void FUN_143700af0(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar3 = (undefined8 *)FUN_1437149e0(*(undefined8 *)(param_2 + 8),local_28,&DAT_1467e2fd0);
  uVar1 = *puVar3;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  puVar3 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = (uint)*puVar3;
  }
  (*(code *)(&DAT_146b7bf20)[uVar2 & 0xf])(param_1,param_2,param_3,uVar1);
  return;
}



// FUNCTION 143700b80 FUN_143700b80 body=111 status=ok
// SIG undefined FUN_143700b80(void)

void FUN_143700b80(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined1 local_res8 [8];
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
  *piVar1 = *piVar1 + -1;
  FUN_1437017f0(*(undefined8 *)(param_1 + 0x18),local_res8,"</hktagfile>");
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar2,0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143700bf0 FUN_143700bf0 body=24 status=ok
// SIG undefined FUN_143700bf0(void)

undefined * FUN_143700bf0(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined *)FUN_143714fc0(param_1,param_2,0,0);
    return puVar1;
  }
  return &DAT_145af9634;
}



// FUNCTION 143700c10 FUN_143700c10 body=321 status=ok
// SIG undefined FUN_143700c10(void)

undefined8 FUN_143700c10(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined8 *local_28;
  undefined8 *local_20;
  
  while( true ) {
    puVar3 = (undefined8 *)FUN_143714490(param_1,1);
    bVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = 0;
    if ((bVar1 & 0xf) == 7) {
      lVar6 = param_1;
    }
    if (lVar6 != 0) {
      if (lVar6 == param_2) {
        return 0;
      }
      hkReflect::DeclIterAll::DeclIterAll(&local_28,lVar6,0);
      do {
        puVar3 = local_28 + 1;
        if ((local_20 <= local_28 + 1) &&
           (cVar2 = FUN_1437144f0(&local_28), puVar3 = local_28, cVar2 == '\0')) {
          return 0;
        }
        local_28 = puVar3;
        pbVar5 = (byte *)FUN_143714f30(local_28,local_res8);
      } while (((*pbVar5 & 0x30) == 0) || (cVar2 = FUN_143700c10(*local_28,lVar6), cVar2 == '\0'));
      return 1;
    }
    puVar3 = (undefined8 *)FUN_143714490(param_1,1);
    bVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = 0;
    if ((bVar1 & 0xf) == 8) {
      lVar6 = param_1;
    }
    if (lVar6 == 0) {
      return 0;
    }
    plVar4 = (longlong *)FUN_143714420(lVar6,2);
    if (plVar4 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar4 == 0) break;
    plVar4 = (longlong *)FUN_143714420(lVar6,2);
    if (plVar4 == (longlong *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *plVar4;
    }
  }
  return 1;
}



// FUNCTION 143700d60 FUN_143700d60 body=151 status=ok
// SIG undefined FUN_143700d60(void)

void FUN_143700d60(undefined8 param_1)

{
  FUN_1437469a0(param_1,&DAT_145b13204,&DAT_145af7b98,1);
  FUN_1437469a0(param_1,&DAT_145b1488c,&DAT_145af7b78,1);
  FUN_1437469a0(param_1,&DAT_145b069a8,&DAT_145af7b80,1);
  FUN_1437469a0(param_1,&DAT_145afa020,&DAT_145af7b88,1);
  FUN_1437469a0(param_1,&DAT_145afba48,&DAT_145af7b90,1);
  return;
}



// FUNCTION 143700e00 FUN_143700e00 body=67 status=ok
// SIG undefined FUN_143700e00(void)

void FUN_143700e00(undefined8 param_1,undefined8 param_2,ulonglong param_3,char *param_4)

{
  ulonglong uVar1;
  
  hkStringBuf::printf(param_4,"array");
  uVar1 = param_3 >> 8 & 0xffffff;
  if ((int)uVar1 != 0) {
    hkStringBuf::printf(param_4,&DAT_145b75d8c,uVar1);
  }
  return;
}



// FUNCTION 143700e50 FUN_143700e50 body=88 status=ok
// SIG undefined FUN_143700e50(void)

void FUN_143700e50(undefined8 param_1,undefined8 param_2,uint param_3,char *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = &DAT_145b75cd0;
  if ((param_3 >> 8 & 1) != 0) {
    puVar1 = &DAT_145b75ccc;
  }
  pcVar2 = "unsigned";
  if ((param_3 >> 9 & 1) != 0) {
    pcVar2 = "signed";
  }
  hkStringBuf::printf(param_4,"bool%d (%s, %s)",(ulonglong)(param_3 >> 10),pcVar2,puVar1);
  return;
}



// FUNCTION 143700eb0 FUN_143700eb0 body=235 status=ok
// SIG undefined FUN_143700eb0(void)

void FUN_143700eb0(undefined8 param_1,undefined8 param_2,ulonglong param_3,char *param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar5 = (uint)param_3;
  if (uVar5 == 0x174605) {
    FUN_1437455a0(param_4,"float");
    return;
  }
  if (uVar5 == 0x345e05) {
    FUN_1437455a0(param_4,"double");
    return;
  }
  pcVar6 = "";
  uVar1 = (uint)(param_3 >> 0x10) & 0xff;
  puVar3 = &DAT_145b75cd0;
  pcVar2 = "";
  uVar4 = (uint)(param_3 >> 0xb) & 0x1f;
  if ((param_3 >> 8 & 1) != 0) {
    puVar3 = &DAT_145b75ccc;
  }
  if ((param_3 >> 10 & 1) != 0) {
    pcVar2 = ", implicit one";
  }
  if ((uVar5 >> 9 & 1) != 0) {
    pcVar6 = "sign bit";
  }
  hkStringBuf::printf(param_4,"fp %d bits (%s, %d exp, %d significand %s, %s)",
                      (ulonglong)(uVar1 + 7 + ((uint)(param_3 >> 10) & 1) + uVar4 >> 3),pcVar6,uVar4
                      ,uVar1,pcVar2,puVar3);
  return;
}



// FUNCTION 143700fa0 FUN_143700fa0 body=91 status=ok
// SIG undefined FUN_143700fa0(void)

void FUN_143700fa0(undefined8 param_1,undefined8 param_2,uint param_3,char *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &DAT_145b75cd0;
  if ((param_3 >> 8 & 1) != 0) {
    puVar1 = &DAT_145b75ccc;
  }
  puVar2 = &DAT_145b75d00;
  if ((param_3 >> 9 & 1) != 0) {
    puVar2 = &DAT_145af3922;
  }
  hkStringBuf::printf(param_4,"%sint%d (%s)",puVar2,(ulonglong)(param_3 >> 10),puVar1);
  return;
}



// FUNCTION 143701000 FUN_143701000 body=24 status=ok
// SIG undefined FUN_143701000(void)

void FUN_143701000(void)

{
  undefined8 in_R9;
  
  FUN_1437455a0(in_R9,"incomplete");
  return;
}



// FUNCTION 143701020 FUN_143701020 body=24 status=ok
// SIG undefined FUN_143701020(void)

void FUN_143701020(void)

{
  undefined8 in_R9;
  
  FUN_1437455a0(in_R9,"pointer");
  return;
}



// FUNCTION 143701040 FUN_143701040 body=24 status=ok
// SIG undefined FUN_143701040(void)

void FUN_143701040(void)

{
  undefined8 in_R9;
  
  FUN_1437455a0(in_R9,"record");
  return;
}



// FUNCTION 143701060 FUN_143701060 body=66 status=ok
// SIG undefined FUN_143701060(void)

void FUN_143701060(undefined8 param_1,undefined8 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  
  if (((byte)param_3 & 0xe0) == 0x20) {
    param_3 = param_3 >> 0x10;
  }
  else {
    param_3 = 0;
  }
  pcVar1 = "ptr";
  if (param_3 != 0) {
    pcVar1 = "buffer";
  }
  hkStringBuf::printf(param_4,"string (%s)",pcVar1);
  return;
}



// FUNCTION 1437010b0 FUN_1437010b0 body=24 status=ok
// SIG undefined FUN_1437010b0(void)

void FUN_1437010b0(void)

{
  undefined8 in_R9;
  
  FUN_1437455a0(in_R9,&DAT_145af48ec);
  return;
}



// FUNCTION 1437010d0 FUN_1437010d0 body=610 status=ok
// SIG undefined FUN_1437010d0(void)

void FUN_1437010d0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  }
  puVar4 = (undefined8 *)FUN_1437429a0(param_2,local_res8);
  lVar5 = (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],local_e8,*puVar4);
  uVar1 = *(undefined4 *)(lVar5 + 8);
  local_b8 = local_a8;
  local_ac = 0x80000080;
  local_b0 = 1;
  local_a8[0] = 0;
  puVar4 = (undefined8 *)FUN_1437429a0(param_2,local_res8);
  uVar6 = FUN_143700bf0(*puVar4,&local_b8);
  uVar2 = FUN_143742950(param_2);
  FUN_1437017f0(*param_1,local_res18,
                "<array count=\"%d\" elementtypeid=\"type%d\"> <!-- ArrayOf %s -->",uVar2,uVar1,
                uVar6);
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  plVar7 = (longlong *)FUN_1437429a0(param_2,local_res8);
  if (*plVar7 != 0) {
    puVar4 = (undefined8 *)FUN_1437429a0(param_2,local_res8);
    puVar4 = (undefined8 *)FUN_1437149e0(*puVar4,local_e8,&DAT_1467e2fd0);
    uVar6 = *puVar4;
    if ((local_d8 & 1) != 0) {
      FUN_143733a60(local_d8 & 0xfffffffffffffffe);
    }
    iVar8 = 0;
    iVar3 = FUN_143742950(param_2);
    if (0 < iVar3) {
      do {
        lVar5 = FUN_143741d50(param_2,local_d0,iVar8);
        puVar4 = (undefined8 *)FUN_143714490(*(undefined8 *)(lVar5 + 8),1);
        if (puVar4 == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)*puVar4;
        }
        (*(code *)(&DAT_146b7bf20)[uVar9 & 0xf])(param_1,lVar5,0,uVar6);
        if ((local_c0 & 1) != 0) {
          FUN_143733a60(local_c0 & 0xfffffffffffffffe);
        }
        iVar8 = iVar8 + 1;
        iVar3 = FUN_143742950(param_2);
      } while (iVar8 < iVar3);
    }
  }
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
  FUN_1437017f0(*param_1,local_res18,"</array>");
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
    FUN_1437017f0(*param_1,local_res18,&DAT_145af3922);
  }
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  return;
}



// FUNCTION 143701340 FUN_143701340 body=240 status=ok
// SIG undefined FUN_143701340(void)

void FUN_143701340(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             &local_res20);
  uVar1 = local_res20;
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             &local_res20);
  FUN_1437022c0(param_1,param_3,"<real dec=\"%lg\" hex=\"#%llx\"/>",local_res20,uVar1);
  if (param_4 != 0) {
    lVar2 = FUN_143744ec0(param_4,param_2);
    if (lVar2 != 0) {
      FUN_143702100(*param_1,local_res10,"<!-- %s -->",lVar2);
    }
  }
  return;
}



// FUNCTION 143701430 FUN_143701430 body=202 status=ok
// SIG undefined FUN_143701430(void)

void FUN_143701430(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,longlong param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  longlong local_18;
  char local_10;
  
  local_18 = 0;
  local_10 = '\0';
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_18
            );
  cVar1 = FUN_143715590(param_2[1]);
  lVar3 = local_18;
  if (cVar1 == '\0') {
    pcVar2 = "<integer value=\"%llu\"/>";
  }
  else {
    if (local_10 != '\0') {
      lVar3 = -local_18;
    }
    pcVar2 = "<integer value=\"%lld\"/>";
  }
  FUN_1437022c0(param_1,param_3,pcVar2,lVar3);
  if (param_4 != 0) {
    lVar3 = FUN_143744ec0(param_4,param_2);
    if (lVar3 != 0) {
      FUN_143702100(*param_1,local_res10,"<!-- %s -->",lVar3);
    }
  }
  return;
}



// FUNCTION 143701500 FUN_143701500 body=476 status=ok
// SIG undefined FUN_143701500(void)

void FUN_143701500(longlong *param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  }
  uVar3 = FUN_1437151f0(*(undefined8 *)(param_2 + 8));
  FUN_1437017f0(*param_1,local_res18,"<record> <!-- %s -->",uVar3);
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  hkReflect::DeclIterAll::DeclIterAll(&local_f8,*(undefined8 *)(param_2 + 8),0);
  while ((puVar1 = local_f8 + 1, local_f8 + 1 < local_f0 ||
         (cVar2 = FUN_1437144f0(&local_f8), puVar1 = local_f8, cVar2 != '\0'))) {
    local_f8 = puVar1;
    pbVar4 = (byte *)FUN_143714f30(local_f8,local_res18);
    if ((*pbVar4 & 0x30) != 0) {
      FUN_143714060(&local_108,*local_f8);
      pbVar4 = (byte *)FUN_143714f30(&local_108,local_res8);
      if (((~*pbVar4 & 1) != 0) && (lVar5 = FUN_1437151c0(&local_108), lVar5 != 0)) {
        uVar3 = FUN_1437151c0(&local_108);
        FUN_143745310(&local_b8,uVar3);
        FUN_143700d60(&local_b8);
        FUN_1437017f0(*param_1,local_res10,"<field name=\"%s\">",local_b8);
        uVar3 = FUN_143741f50(param_2,local_d8,local_108);
        FUN_143700af0(param_1,uVar3,1);
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        FUN_143702100(*param_1,local_100,"</field>",local_b8);
        local_b0 = 0;
        if (-1 < (int)local_ac) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
        }
      }
    }
  }
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
  FUN_1437017f0(*param_1,local_res18,"</record>");
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
    FUN_1437017f0(*param_1,local_res18,&DAT_145af3922);
  }
  return;
}



// FUNCTION 1437016e0 FUN_1437016e0 body=266 status=ok
// SIG undefined FUN_1437016e0(void)

void FUN_1437016e0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_res10 [16];
  longlong local_res20;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             &local_res20);
  if (local_res20 == 0) {
    FUN_1437022c0(param_1,param_3,"<string/>");
  }
  else {
    FUN_143745310(&local_a8);
    FUN_143700d60(&local_a8);
    FUN_1437022c0(param_1,param_3,"<string value=\"%s\"/>",local_a8);
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
    }
  }
  if (param_4 != 0) {
    lVar1 = FUN_143744ec0(param_4,param_2);
    if (lVar1 != 0) {
      FUN_143702100(*param_1,local_res10,"<!-- %s -->",lVar1);
    }
  }
  return;
}



// FUNCTION 1437017f0 FUN_1437017f0 body=259 status=ok
// SIG undefined FUN_1437017f0(void)

undefined4 *
FUN_1437017f0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_res20;
  undefined4 local_138 [4];
  undefined1 local_128 [256];
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *puVar1;
  local_res20 = param_4;
  if (puVar1[1] < uVar2 + 1) {
    lVar5 = hkIo::WriteBuffer::implWriteRaw(puVar1,&DAT_145af0af0,1);
    if (lVar5 != 1) goto LAB_143701895;
  }
  else {
    FGenericPlatformString::Memcpy();
    *puVar1 = uVar2 + 1;
  }
  iVar4 = 0x100;
  if (*(int *)(param_1 + 1) * 2 < 0x100) {
    iVar4 = *(int *)(param_1 + 1) * 2;
  }
  FUN_14370c720(local_128,0x20,iVar4);
  if (iVar4 != 0) {
    puVar1 = (ulonglong *)*param_1;
    lVar5 = (longlong)iVar4;
    uVar2 = *puVar1;
    if (puVar1[1] < uVar2 + lVar5) {
      lVar3 = hkIo::WriteBuffer::implWriteRaw(puVar1,local_128,lVar5);
    }
    else {
      FGenericPlatformString::Memcpy();
      *puVar1 = uVar2 + lVar5;
      lVar3 = lVar5;
    }
    if (lVar3 != lVar5) {
LAB_143701895:
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  FUN_143702130(param_1,local_138,param_3,&local_res20);
  *param_2 = local_138[0];
  return param_2;
}



// FUNCTION 143701900 FUN_143701900 body=123 status=ok
// SIG undefined FUN_143701900(void)

undefined8 FUN_143701900(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)*param_4)(param_4,param_3);
  (**(code **)(*param_4 + 0x10))(param_4,uVar1);
  FUN_143702310(param_1,param_2,param_3,uVar1,0,param_4);
  return param_2;
}



// FUNCTION 143701980 FUN_143701980 body=1912 status=ok
// SIG undefined FUN_143701980(void)

void FUN_143701980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  short *psVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  undefined1 *in_stack_fffffffffffffe28;
  ulonglong in_stack_fffffffffffffe30;
  longlong local_1b8;
  longlong local_1b0;
  uint *local_1a8;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [8];
  undefined1 *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined1 local_148 [128];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  
  lVar1 = param_1 + 0x18;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x40)) {
    local_1b0 = lVar1;
    puVar8 = (uint *)FUN_143732190(lVar1);
    while (puVar8 != (uint *)0x0) {
      local_1a8 = puVar8;
      iVar4 = FUN_143732050(lVar1,puVar8);
      if (*(int *)(param_1 + 0x58) < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
      uVar13 = *puVar8;
      uVar19 = uVar13 & 0x584001b;
      local_res20[0] = uVar19;
      FUN_1437017f0(param_2,local_1a0,"<type id=\"type%d\">",iVar4);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      if ((uVar13 & 8) != 0) {
        if (((*puVar8 & 8) == 0) ||
           (puVar9 = (undefined8 *)FUN_1437143d0(puVar8,8), puVar9 == (undefined8 *)0x0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar9;
        }
        FUN_143745310(&local_158,uVar11);
        FUN_143700d60(&local_158);
        FUN_1437017f0(param_2,local_19c,"<name value=\"%s\"/>",local_158);
        local_150 = 0;
        if (-1 < (int)local_14c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_158,1,local_14c & 0x3fffffff);
        }
      }
      uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
      lVar21 = *(longlong *)(puVar8 + 2);
      if (lVar21 != 0) {
        uVar5 = FUN_143731fd0(lVar1,lVar21);
        in_stack_fffffffffffffe28 = (undefined1 *)CONCAT44(uVar14,uVar5);
        FUN_1437025e0(param_1,param_2,"parent",lVar21,in_stack_fffffffffffffe28);
      }
      if ((uVar13 & 1) != 0) {
        if (((*puVar8 & 1) == 0) ||
           (puVar9 = (undefined8 *)FUN_1437143d0(puVar8,1), puVar9 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (undefined4)*puVar9;
        }
        local_158 = local_148;
        local_14c = 0x80000080;
        local_150 = 1;
        local_148[0] = 0;
        FUN_143700600(local_res18);
        puVar9 = (undefined8 *)FUN_143714490(puVar8,1);
        uVar6 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar6 = (uint)*puVar9;
        }
        (**(code **)(&DAT_146b7bed0 + (ulonglong)(uVar6 & 0xf) * 8))
                  (local_res18,puVar8,uVar14,&local_158);
        in_stack_fffffffffffffe28 = local_158;
        FUN_1437017f0(param_2,local_198,"<format value=\"%u\"/> <!-- %s -->",uVar14,local_158);
        if (((byte)uVar14 & 0x1f) == 3) {
          FUN_143731fd0(lVar1,&DAT_1467f0500);
        }
        local_150 = 0;
        if (-1 < (int)local_14c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_158,1,local_14c & 0x3fffffff);
        }
      }
      if ((uVar13 & 2) != 0) {
        puVar9 = (undefined8 *)FUN_143714490(puVar8,1);
        uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        bVar2 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          bVar2 = (byte)*puVar9;
        }
        puVar15 = (uint *)0x0;
        if ((bVar2 & 0xf) == 8) {
          puVar15 = puVar8;
        }
        if (puVar15 == (uint *)0x0) {
          puVar9 = (undefined8 *)FUN_143714490(puVar8,1);
          uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
          bVar2 = 0;
          if (puVar9 != (undefined8 *)0x0) {
            bVar2 = (byte)*puVar9;
          }
          puVar15 = (uint *)0x0;
          if ((bVar2 & 0xf) == 6) {
            puVar15 = puVar8;
          }
          if (puVar15 == (uint *)0x0) goto LAB_143701c9e;
          puVar9 = (undefined8 *)FUN_143714420(puVar15,2);
          if (puVar9 == (undefined8 *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *puVar9;
          }
          uVar5 = FUN_143732050(lVar1,uVar11);
        }
        else {
          FUN_143714420(puVar15);
          puVar9 = (undefined8 *)FUN_143714420(puVar15,2);
          if (puVar9 == (undefined8 *)0x0) {
            uVar5 = FUN_143731fd0(lVar1,0);
          }
          else {
            uVar5 = FUN_143731fd0(lVar1,*puVar9);
          }
        }
        puVar9 = (undefined8 *)FUN_143714420(puVar15,2);
        if (puVar9 == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar9;
        }
        in_stack_fffffffffffffe28 = (undefined1 *)(CONCAT44(uVar14,uVar5) & 0xffffffff0000ffff);
        FUN_1437025e0(param_1,param_2,"subtype",uVar11,in_stack_fffffffffffffe28);
      }
LAB_143701c9e:
      if ((uVar13 & 0x10) != 0) {
        if (((*puVar8 & 0x10) == 0) ||
           (puVar9 = (undefined8 *)FUN_1437143d0(puVar8,0x10), puVar9 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (undefined4)*puVar9;
        }
        FUN_1437017f0(param_2,local_194,"<version value=\"%u\"/>",uVar14);
      }
      if ((uVar19 >> 0x12 & 1) != 0) {
        puVar9 = (undefined8 *)FUN_143715320(puVar8);
        uVar13 = *(uint *)(puVar9 + 1) & 0xffff;
        FUN_1437017f0(param_2,local_190,"<parameters count=\"%d\">",uVar13);
        lVar1 = local_1b0;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        lVar21 = 0;
        if ((ulonglong)uVar13 != 0) {
          do {
            uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
            puVar16 = puVar9 + 2;
            if (*(char *)puVar9[3] == 't') {
              uVar5 = FUN_143731fd0(lVar1,*puVar16);
              local_14c = 0x80000080;
              local_158 = local_148;
              local_150 = 1;
              local_148[0] = 0;
              in_stack_fffffffffffffe30 = FUN_143700bf0(*puVar16,&local_158);
              in_stack_fffffffffffffe28 = (undefined1 *)CONCAT44(uVar14,uVar5);
              FUN_1437017f0(param_2,local_18c,"<%s id=\"type%u\" /> <!-- %s -->","typeparam",
                            in_stack_fffffffffffffe28,in_stack_fffffffffffffe30);
              local_150 = 0;
              if (-1 < (int)local_14c) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_158,1,local_14c & 0x3fffffff);
              }
            }
            else {
              FUN_1437017f0(param_2,local_188,"<valueparam value=\"%u\"/>",*(undefined4 *)puVar16);
            }
            lVar21 = lVar21 + 1;
            uVar19 = local_res20[0];
            puVar9 = puVar16;
          } while (lVar21 < (longlong)(ulonglong)uVar13);
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        FUN_1437017f0(param_2,local_184,"</parameters>");
      }
      if ((uVar19 >> 0x18 & 1) != 0) {
        if (((*puVar8 >> 0x18 & 1) == 0) ||
           (puVar9 = (undefined8 *)FUN_1437143d0(puVar8,0x1000000), puVar9 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (undefined4)*puVar9;
        }
        FUN_1437017f0(param_2,local_180,"<flags value=\"%u\"/>",uVar14);
      }
      if ((uVar19 >> 0x1a & 1) != 0) {
        if (((*puVar8 >> 0x1a & 1) == 0) ||
           (puVar9 = (undefined8 *)FUN_1437143d0(puVar8,0x4000000), puVar9 == (undefined8 *)0x0)) {
          psVar20 = (short *)0x0;
        }
        else {
          psVar20 = (short *)*puVar9;
        }
        uVar17 = 0;
        uVar13 = 0;
        uVar19 = (int)psVar20[1] + (int)*psVar20;
        uVar23 = (ulonglong)uVar19;
        if (0 < (int)uVar19) {
          uVar22 = (ulonglong)uVar19;
          uVar18 = uVar17;
          do {
            FUN_143714060(local_160,*(undefined8 *)(uVar17 + 8 + (longlong)psVar20));
            pbVar10 = (byte *)FUN_143714f30(local_160,local_17c);
            uVar17 = uVar17 + 8;
            uVar13 = (int)uVar18 + (~(uint)*pbVar10 & 1);
            uVar18 = (ulonglong)uVar13;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        lVar21 = 0;
        FUN_1437017f0(param_2,local_178,"<fields count=\"%d\">",uVar13);
        lVar1 = local_1b0;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        if (0 < (int)uVar19) {
          do {
            FUN_143714060(&local_1b8,*(undefined8 *)(lVar21 + 8 + (longlong)psVar20));
            pbVar10 = (byte *)FUN_143714f30(&local_1b8,local_174);
            uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
            uVar5 = (undefined4)(in_stack_fffffffffffffe30 >> 0x20);
            if ((~*pbVar10 & 1) != 0) {
              uVar7 = FUN_143731fd0(lVar1,*(undefined8 *)(local_1b8 + 8));
              uVar11 = FUN_1437151c0(&local_1b8);
              FUN_143745310(&local_c8,uVar11);
              FUN_143700d60(&local_c8);
              local_158 = local_148;
              local_14c = 0x80000080;
              local_150 = 1;
              local_148[0] = 0;
              uVar11 = FUN_143700bf0(local_1b8,&local_158);
              puVar12 = (undefined4 *)FUN_143714f30(&local_1b8,local_170);
              in_stack_fffffffffffffe30 = CONCAT44(uVar5,*puVar12) & 0xffffffffffffffef | 0x20;
              in_stack_fffffffffffffe28 = (undefined1 *)CONCAT44(uVar14,uVar7);
              FUN_1437017f0(param_2,local_16c,
                            "<field name=\"%s\" typeid=\"type%d\" flags=\"%d\" /> <!-- %s -->",
                            local_c8,in_stack_fffffffffffffe28,in_stack_fffffffffffffe30,uVar11);
              local_150 = 0;
              if (-1 < (int)local_14c) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_158,1,local_14c & 0x3fffffff);
              }
              local_158 = (undefined1 *)0x0;
              local_14c = 0x80000000;
              local_c0 = 0;
              if (-1 < (int)local_bc) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
              }
            }
            lVar21 = lVar21 + 8;
            uVar23 = uVar23 - 1;
            puVar8 = local_1a8;
          } while (uVar23 != 0);
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        FUN_1437017f0(param_2,local_168,"</fields>");
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      FUN_1437017f0(param_2,local_164,"</type>");
      cVar3 = FUN_143700c10(puVar8,0);
      if (cVar3 != '\0') {
        uVar11 = FUN_14374a2a0(puVar8);
        local_res20[0] = FUN_1437009c0(uVar11);
        FUN_1436f9fc0(*(longlong *)(param_1 + 0x50) + 0x28,local_res20);
      }
      lVar1 = local_1b0;
      puVar8 = (uint *)FUN_143732190(local_1b0);
    }
  }
  return;
}



// FUNCTION 143702100 FUN_143702100 body=37 status=ok
// SIG undefined FUN_143702100(void)

undefined8 FUN_143702100(undefined8 param_1,undefined8 param_2)

{
  FUN_143702130();
  return param_2;
}



// FUNCTION 143702130 FUN_143702130 body=385 status=ok
// SIG undefined FUN_143702130(void)

undefined4 *
FUN_143702130(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *local_438;
  int local_430;
  uint local_42c;
  undefined1 local_428 [1024];
  
  local_42c = 0x80000400;
  iVar5 = 0x400;
  local_430 = 0x400;
  local_438 = local_428;
  puVar6 = (ulonglong *)__local_stdio_printf_options();
  puVar9 = local_428;
  iVar10 = 10;
  do {
    iVar5 = __stdio_common_vsprintf(*puVar6 | 2,puVar9,(longlong)iVar5,param_3,0,param_4);
    if (iVar5 < 0) {
      iVar5 = -1;
    }
    if ((-1 < iVar5) && (iVar5 < local_430)) {
      puVar6 = (ulonglong *)*param_1;
      lVar8 = (longlong)iVar5;
      uVar1 = *puVar6;
      if (puVar6[1] < uVar1 + lVar8) {
        lVar7 = hkIo::WriteBuffer::implWriteRaw(puVar6,local_438,lVar8);
      }
      else {
        FGenericPlatformString::Memcpy();
        *puVar6 = uVar1 + lVar8;
        lVar7 = lVar8;
      }
      if (lVar7 == lVar8) {
        *param_2 = 0;
        goto LAB_143702266;
      }
      break;
    }
    iVar5 = local_430 * 2;
    if ((int)(local_42c & 0x3fffffff) < iVar5) {
      iVar4 = (local_42c & 0x3fffffff) * 2;
      iVar3 = iVar5;
      if (iVar5 < iVar4) {
        iVar3 = iVar4;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,&local_438,iVar3,1);
    }
    bVar2 = 0 < iVar10;
    puVar9 = local_438;
    iVar10 = iVar10 + -1;
    local_430 = iVar5;
  } while (bVar2);
  *param_2 = 0x80040200;
LAB_143702266:
  local_430 = 0;
  if (-1 < (int)local_42c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_438,1,local_42c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1437022c0 FUN_1437022c0 body=76 status=ok
// SIG undefined FUN_1437022c0(void)

void FUN_1437022c0(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 local_28 [24];
  
  local_res20 = param_4;
  if (param_2 == '\0') {
    FUN_1437017f0(*param_1,local_28,&DAT_145af3922);
  }
  FUN_143702130(*param_1,local_28,param_3,&local_res20);
  return;
}



// FUNCTION 143702310 FUN_143702310 body=510 status=ok
// SIG undefined FUN_143702310(void)

undefined4 *
FUN_143702310(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,int param_5,
             undefined8 param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined4 *local_178;
  undefined *local_170;
  undefined4 **local_168;
  undefined8 **local_160;
  undefined1 *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined1 local_148 [128];
  undefined1 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined1 local_b8 [128];
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                    (*(longlong **)(param_1 + 0x20),&local_168,uVar4);
  local_res8[0] = *(undefined4 *)(lVar3 + 8);
  FUN_1437027f0(param_1,param_3);
  local_bc = 0x80000080;
  local_c0 = 1;
  local_b8[0] = 0;
  local_c8 = local_b8;
  if (param_5 != 0) {
    local_178 = &param_5;
    local_170 = &DAT_1467f0140;
    local_168 = &local_178;
    local_160 = &local_168;
    ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation
              (&local_c8,"annotates=\"object{}\"",&local_168);
  }
  puVar2 = local_c8;
  local_14c = 0x80000080;
  local_150 = 1;
  local_158 = local_148;
  local_148[0] = 0;
  pcVar6 = "note";
  if (param_5 == 0) {
    pcVar6 = "object";
  }
  uVar4 = FUN_143714fc0(uVar4,&local_158,0,0);
  puVar5 = (undefined4 *)
           FUN_1437017f0(*(undefined8 *)(param_1 + 0x18),local_res10,
                         "<%s id=\"object%d\" typeid=\"type%d\" %s> <!-- %s -->",pcVar6,param_4,
                         local_res8[0],puVar2,uVar4);
  lVar3 = *(longlong *)(param_1 + 0x18);
  *param_2 = *puVar5;
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  FUN_143702690(param_1,param_3,param_6,1);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
  *piVar1 = *piVar1 + -1;
  FUN_1437017f0(*(undefined8 *)(param_1 + 0x18),local_res8,"</%s>",pcVar6);
  local_150 = 0;
  if (-1 < (int)local_14c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_158,1,local_14c & 0x3fffffff);
  }
  local_158 = (undefined1 *)0x0;
  local_14c = 0x80000000;
  local_c0 = 0;
  if (-1 < (int)local_bc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143702510 FUN_143702510 body=110 status=ok
// SIG undefined FUN_143702510(void)

undefined8
FUN_143702510(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)*param_5)(param_5,param_4);
  FUN_143702310(param_1,param_2,param_4,uVar1,param_3,param_5);
  return param_2;
}



// FUNCTION 143702580 FUN_143702580 body=92 status=ok
// SIG undefined FUN_143702580(void)

undefined8 * FUN_143702580(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143731fd0(param_1 + 0x18,param_3);
  FUN_143701980(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18));
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1437025e0 FUN_1437025e0 body=167 status=ok
// SIG undefined FUN_1437025e0(void)

void FUN_1437025e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_8c = 0x80000080;
  local_98 = local_88;
  local_90 = 1;
  local_88[0] = 0;
  uVar1 = FUN_143700bf0(param_4,&local_98);
  FUN_1437017f0(param_2,local_a8,"<%s id=\"type%u\" /> <!-- %s -->",param_3,param_5,uVar1);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143702690 FUN_143702690 body=339 status=ok
// SIG undefined FUN_143702690(void)

void FUN_143702690(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar6 = (ulonglong)param_4;
  FUN_1437006e0(&local_50);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  local_58 = param_2[2];
  local_40 = *(undefined8 *)(param_1 + 0x20);
  local_68 = *param_2;
  local_60 = param_2[1];
  local_48 = param_3;
  if ((local_58 & 1) != 0) {
    FUN_1437329e0(local_58 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_1437152f0(param_2[1]);
  if (0 < (int)param_4) {
    lVar5 = 0;
    do {
      local_68 = *param_2 + lVar5;
      puVar4 = (undefined8 *)FUN_1437149e0(local_60,local_38,&DAT_1467e2fd0);
      uVar1 = *puVar4;
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      puVar4 = (undefined8 *)FUN_143714490(local_60,1);
      uVar3 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = (uint)*puVar4;
      }
      (*(code *)(&DAT_146b7bf20)[uVar3 & 0xf])(&local_50,&local_68,0,uVar1);
      lVar5 = lVar5 + iVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437027f0 FUN_1437027f0 body=752 status=ok
// SIG undefined FUN_1437027f0(void)

void FUN_1437027f0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong *plVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 local_res10 [2];
  undefined8 *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  longlong local_30;
  longlong lStack_28;
  ulonglong local_20;
  
  uVar1 = param_2[1];
  puVar5 = (undefined8 *)FUN_143714490(uVar1,1);
  uVar14 = 0;
  bVar12 = 0;
  bVar11 = bVar12;
  if (puVar5 != (undefined8 *)0x0) {
    bVar11 = (byte)*puVar5;
  }
  uVar6 = uVar14;
  if ((bVar11 & 0xf) == 7) {
    uVar6 = uVar1;
  }
  if (uVar6 == 0) {
    uVar1 = param_2[1];
    puVar5 = (undefined8 *)FUN_143714490(uVar1,1);
    bVar11 = bVar12;
    if (puVar5 != (undefined8 *)0x0) {
      bVar11 = (byte)*puVar5;
    }
    uVar6 = uVar14;
    if ((bVar11 & 0xf) == 8) {
      uVar6 = uVar1;
    }
    if (uVar6 == 0) {
      return;
    }
  }
  uVar7 = FUN_14374a2a0(param_2[1]);
  local_res10[0] = FUN_1437009c0(uVar7);
  lVar8 = FUN_1436f87f0(param_1 + 0x28,local_res10);
  if ((lVar8 != 0) && (-1 < *(int *)(lVar8 + 4))) {
    local_20 = 0;
    local_30 = 0;
    lStack_28 = 0;
    if (param_2[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(param_2[1],1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar5;
      }
      if ((bVar12 & 0xf) == 7) {
        local_30 = *param_2;
        lStack_28 = param_2[1];
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
        }
        if ((local_20 & 1) != 0) {
          FUN_143733a60(local_20 & 0xfffffffffffffffe);
        }
        local_20 = param_2[2];
      }
      if (local_30 != 0) {
        hkReflect::DeclIterAll::DeclIterAll(&local_68,lStack_28,0);
LAB_143702930:
        puVar5 = local_68 + 1;
        if ((local_68 + 1 < local_60) ||
           (cVar3 = FUN_1437144f0(&local_68), puVar5 = local_68, cVar3 != '\0')) goto LAB_143702955;
        bVar2 = false;
        goto LAB_143702969;
      }
    }
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    if (param_2[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(param_2[1],1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar11 = 0;
      }
      else {
        bVar11 = (byte)*puVar5;
      }
      if ((bVar11 & 0xf) == 8) {
        local_48 = *param_2;
        lStack_40 = param_2[1];
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
        }
        if ((local_38 & 1) != 0) {
          FUN_143733a60(local_38 & 0xfffffffffffffffe);
        }
        local_38 = param_2[2];
      }
      if (local_48 != 0) {
        plVar10 = (longlong *)FUN_143714420(lStack_40,2);
        if ((plVar10 == (longlong *)0x0) || (*plVar10 == 0)) {
          plVar10 = *(longlong **)(param_1 + 0x20);
          puVar5 = (undefined8 *)FUN_1437429a0(&local_48,local_res10);
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_68,*puVar5);
        }
        iVar4 = FUN_143742950(&local_48);
        if (0 < iVar4) {
          do {
            uVar7 = FUN_143741d50(&local_48,&local_68,uVar14);
            FUN_1437027f0(param_1,uVar7);
            if ((local_58 & 1) != 0) {
              FUN_143733a60(local_58 & 0xfffffffffffffffe);
            }
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            iVar4 = FUN_143742950(&local_48);
          } while ((int)uVar13 < iVar4);
        }
      }
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
LAB_143702abe:
    if ((local_20 & 1) != 0) {
      FUN_143733a60(local_20 & 0xfffffffffffffffe);
    }
  }
  return;
LAB_143702955:
  local_68 = puVar5;
  pbVar9 = (byte *)FUN_143714f30(local_68,local_res10);
  if ((*pbVar9 & 0x30) != 0) {
    bVar2 = true;
LAB_143702969:
    if (bVar2) {
      uVar7 = FUN_143741f50(&local_30,&local_48,*local_68);
      FUN_1437027f0(param_1,uVar7);
      if ((local_38 & 1) != 0) {
        FUN_143733a60(local_38 & 0xfffffffffffffffe);
      }
      goto LAB_143702930;
    }
    goto LAB_143702abe;
  }
  goto LAB_143702930;
}



// FUNCTION 143702ae0 FUN_143702ae0 body=97 status=ok
// SIG undefined FUN_143702ae0(void)

undefined8 * FUN_143702ae0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  DAT_146b7bec0._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x48);
  if (lVar2 != 0) {
    uVar3 = FUN_1437007c0(lVar2,0);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143702b50 FUN_143702b50 body=11 status=ok
// SIG undefined FUN_143702b50(void)

void FUN_143702b50(undefined8 *param_1)

{
  *param_1 = hkMemoryAllocator::vftable;
  return;
}



// FUNCTION 143702b60 FUN_143702b60 body=135 status=ok
// SIG undefined FUN_143702b60(void)

void FUN_143702b60(longlong *param_1,int param_2,int param_3)

{
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if ((param_2 < 0) || (0x7fffffff < (ulonglong)((longlong)param_2 * (longlong)param_3))) {
    FUN_143732400(0,"Memory\\Allocator\\hkMemoryAllocator.cpp",0x6d,
                  "Memory allocation request overflow {}*{}",&DAT_145b75a88,local_res10,local_res18,
                  0);
  }
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 * (longlong)param_3 & 0xffffffff);
  return;
}



// FUNCTION 143702bf0 FUN_143702bf0 body=98 status=ok
// SIG undefined FUN_143702bf0(void)

void FUN_143702bf0(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 8))(param_1,param_4);
      *(undefined8 *)(param_2 + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_3);
  }
  return;
}



// FUNCTION 143702c60 FUN_143702c60 body=154 status=ok
// SIG undefined FUN_143702c60(void)

void FUN_143702c60(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if ((param_3 < 0) || (0x7fffffff < (ulonglong)((longlong)param_3 * (longlong)param_4))) {
    FUN_143732400(0,"Memory\\Allocator\\hkMemoryAllocator.cpp",0x77,
                  "Memory allocation request overflow {}*{}",&DAT_145b75a88,local_res18,local_res20,
                  0);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,(longlong)param_3 * (longlong)param_4 & 0xffffffff)
  ;
  return;
}



// FUNCTION 143702d00 FUN_143702d00 body=88 status=ok
// SIG undefined FUN_143702d00(void)

void FUN_143702d00(longlong *param_1,longlong *param_2,uint param_3,undefined4 param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (*param_2 != 0) {
        (**(code **)(*param_1 + 0x10))(param_1,*param_2,param_4);
      }
      param_2 = param_2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143702d60 FUN_143702d60 body=153 status=ok
// SIG undefined FUN_143702d60(void)

undefined8 FUN_143702d60(longlong *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = (int)((longlong)*param_3 * (longlong)param_2);
  local_res10[0] = param_2;
  if ((param_2 < 0) || (0x7fffffff < (ulonglong)((longlong)*param_3 * (longlong)param_2))) {
    FUN_143732400(0,"Memory\\Allocator\\hkMemoryAllocator.cpp",0x44,
                  "Memory allocation request overflow {}*{}",&DAT_145b75a88,local_res10,param_3,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res8);
  *param_3 = local_res8[0] / local_res10[0];
  return uVar1;
}



// FUNCTION 143702e00 FUN_143702e00 body=9 status=ok
// SIG undefined FUN_143702e00(void)

void FUN_143702e00(longlong *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143702e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,*param_2);
  return;
}



// FUNCTION 143702e10 FUN_143702e10 body=154 status=ok
// SIG undefined FUN_143702e10(void)

void FUN_143702e10(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if ((param_3 < 0) || (0x7fffffff < (ulonglong)((longlong)param_3 * (longlong)param_4))) {
    FUN_143732400(0,"Memory\\Allocator\\hkMemoryAllocator.cpp",0x50,
                  "Memory allocation request overflow {}*{}",&DAT_145b75a88,local_res18,local_res20,
                  0);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(longlong)param_3 * (longlong)param_4 & 0xffffffff)
  ;
  return;
}



// FUNCTION 143702eb0 FUN_143702eb0 body=124 status=ok
// SIG undefined FUN_143702eb0(void)

longlong FUN_143702eb0(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4);
  if (lVar1 != 0) {
    iVar2 = *param_4;
    if (param_3 < *param_4) {
      iVar2 = param_3;
    }
    FGenericPlatformString::Memcpy(lVar1,param_2,(longlong)iVar2);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  return lVar1;
}



// FUNCTION 143702f30 FUN_143702f30 body=91 status=ok
// SIG undefined FUN_143702f30(void)

undefined8 FUN_143702f30(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *local_res10 [3];
  
  local_res10[0] = &DAT_145af3922;
  if (param_2 != (undefined1 *)0x0) {
    local_res10[0] = param_2;
  }
  FUN_143732400(0xdeadf00d,"Memory\\Allocator\\hkMemoryAllocator.cpp",0x7e,"Out of memory {}",
                &DAT_145b74470,local_res10,0);
  return 0;
}



// FUNCTION 143702f90 FUN_143702f90 body=55 status=ok
// SIG undefined FUN_143702f90(void)

undefined8 FUN_143702f90(undefined8 param_1,byte param_2)

{
  FUN_143702b50();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143702fd0 FUN_143702fd0 body=49 status=ok
// SIG undefined FUN_143702fd0(void)

void FUN_143702fd0(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x000143702ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2);
  return;
}



// FUNCTION 143703010 FUN_143703010 body=66 status=ok
// SIG undefined FUN_143703010(void)

void FUN_143703010(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370304e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2,param_3);
  return;
}



// FUNCTION 143703060 FUN_143703060 body=51 status=ok
// SIG undefined FUN_143703060(void)

void FUN_143703060(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370308f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x18))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2);
  return;
}



// FUNCTION 1437030a0 FUN_1437030a0 body=66 status=ok
// SIG undefined FUN_1437030a0(void)

void FUN_1437030a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437030de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x20))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2,param_3);
  return;
}



// FUNCTION 1437030f0 FUN_1437030f0 body=82 status=ok
// SIG undefined FUN_1437030f0(void)

void FUN_1437030f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370313e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x28))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2,param_3,param_4);
  return;
}



// FUNCTION 143703150 FUN_143703150 body=51 status=ok
// SIG undefined FUN_143703150(void)

void FUN_143703150(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370317f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2);
  return;
}



// FUNCTION 143703190 FUN_143703190 body=66 status=ok
// SIG undefined FUN_143703190(void)

void FUN_143703190(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437031ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x48))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2,param_3);
  return;
}



// FUNCTION 1437031e0 FUN_1437031e0 body=49 status=ok
// SIG undefined FUN_1437031e0(void)

void FUN_1437031e0(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370320d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 8))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2);
  return;
}



// FUNCTION 143703220 FUN_143703220 body=66 status=ok
// SIG undefined FUN_143703220(void)

void FUN_143703220(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370325e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 143703270 FUN_143703270 body=51 status=ok
// SIG undefined FUN_143703270(void)

void FUN_143703270(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370329f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x18))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2);
  return;
}



// FUNCTION 1437032b0 FUN_1437032b0 body=66 status=ok
// SIG undefined FUN_1437032b0(void)

void FUN_1437032b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437032ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x20))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 143703300 FUN_143703300 body=82 status=ok
// SIG undefined FUN_143703300(void)

void FUN_143703300(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370334e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x28))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3,param_4);
  return;
}



// FUNCTION 143703360 FUN_143703360 body=51 status=ok
// SIG undefined FUN_143703360(void)

void FUN_143703360(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370338f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2);
  return;
}



// FUNCTION 1437033a0 FUN_1437033a0 body=66 status=ok
// SIG undefined FUN_1437033a0(void)

void FUN_1437033a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437033de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x48))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 1437033f0 FUN_1437033f0 body=49 status=ok
// SIG undefined FUN_1437033f0(void)

void FUN_1437033f0(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370341d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 8))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2);
  return;
}



// FUNCTION 143703430 FUN_143703430 body=66 status=ok
// SIG undefined FUN_143703430(void)

void FUN_143703430(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370346e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3);
  return;
}



// FUNCTION 143703480 FUN_143703480 body=51 status=ok
// SIG undefined FUN_143703480(void)

void FUN_143703480(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437034af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x18))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2);
  return;
}



// FUNCTION 1437034c0 FUN_1437034c0 body=66 status=ok
// SIG undefined FUN_1437034c0(void)

void FUN_1437034c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437034fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x20))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3);
  return;
}



// FUNCTION 143703510 FUN_143703510 body=82 status=ok
// SIG undefined FUN_143703510(void)

void FUN_143703510(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370355e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x28))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3,param_4);
  return;
}



// FUNCTION 143703570 FUN_143703570 body=51 status=ok
// SIG undefined FUN_143703570(void)

void FUN_143703570(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370359f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2);
  return;
}



// FUNCTION 1437035b0 FUN_1437035b0 body=66 status=ok
// SIG undefined FUN_1437035b0(void)

void FUN_1437035b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437035ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x48))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3);
  return;
}



// FUNCTION 143703600 FUN_143703600 body=49 status=ok
// SIG undefined FUN_143703600(void)

void FUN_143703600(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370362d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 8))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2);
  return;
}



// FUNCTION 143703640 FUN_143703640 body=66 status=ok
// SIG undefined FUN_143703640(void)

void FUN_143703640(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370367e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2,param_3);
  return;
}



// FUNCTION 143703690 FUN_143703690 body=51 status=ok
// SIG undefined FUN_143703690(void)

void FUN_143703690(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437036bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 0x18))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2);
  return;
}



// FUNCTION 1437036d0 FUN_1437036d0 body=66 status=ok
// SIG undefined FUN_1437036d0(void)

void FUN_1437036d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370370e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 0x20))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2,param_3);
  return;
}



// FUNCTION 143703720 FUN_143703720 body=82 status=ok
// SIG undefined FUN_143703720(void)

void FUN_143703720(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014370376e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 0x28))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2,param_3,param_4);
  return;
}



// FUNCTION 143703780 FUN_143703780 body=51 status=ok
// SIG undefined FUN_143703780(void)

void FUN_143703780(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437037af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2);
  return;
}



// FUNCTION 1437037c0 FUN_1437037c0 body=66 status=ok
// SIG undefined FUN_1437037c0(void)

void FUN_1437037c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437037fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x68) + 0x48))
            (*(longlong **)((longlong)pvVar1 + 0x68),param_2,param_3);
  return;
}



// FUNCTION 143703810 FUN_143703810 body=41 status=ok
// SIG undefined FUN_143703810(void)

longlong FUN_143703810(longlong param_1)

{
  CAkRTPCSubscriberNode::CAkRTPCSubscriberNode();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 143703840 FUN_143703840 body=55 status=ok
// SIG undefined FUN_143703840(void)

void FUN_143703840(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x58))();
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x58))();
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x000143703873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))();
  return;
}



// FUNCTION 143703880 FUN_143703880 body=91 status=ok
// SIG undefined FUN_143703880(void)

void FUN_143703880(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,param_2 + param_3 + 0x10);
  uVar2 = (longlong)(int)(param_3 - 1U) + 0x10 + lVar1 & (longlong)(int)~(param_3 - 1U);
  *(longlong **)(uVar2 - 0x10) = param_1;
  *(int *)(uVar2 - 4) = (int)uVar2 - (int)lVar1;
  *(int *)(uVar2 - 8) = param_2 + param_3;
  return;
}



// FUNCTION 1437038e0 FUN_1437038e0 body=36 status=ok
// SIG undefined FUN_1437038e0(void)

void FUN_1437038e0(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001437038ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))
              (param_1,param_2 - *(int *)(param_2 + -4),*(int *)(param_2 + -8) + 0x10);
    return;
  }
  return;
}



// FUNCTION 143703910 FUN_143703910 body=121 status=ok
// SIG undefined FUN_143703910(void)

longlong FUN_143703910(undefined8 param_1,undefined8 param_2,int param_3,int param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_143703880(param_1,param_4,param_5);
  if (lVar1 != 0) {
    if (param_3 < param_4) {
      param_4 = param_3;
    }
    FGenericPlatformString::Memcpy(lVar1,param_2,(longlong)param_4);
  }
  FUN_1437038e0(param_1,param_2);
  return lVar1;
}



// FUNCTION 143703990 FUN_143703990 body=45 status=ok
// SIG undefined FUN_143703990(void)

undefined8 * FUN_143703990(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,param_2 + 0x10);
  *puVar1 = param_1;
  *(int *)(puVar1 + 1) = param_2;
  return puVar1 + 2;
}



// FUNCTION 1437039c0 FUN_1437039c0 body=32 status=ok
// SIG undefined FUN_1437039c0(void)

void FUN_1437039c0(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001437039db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))
              (param_1,(undefined8 *)(param_2 + -0x10),*(int *)(param_2 + -8) + 0x10);
    return;
  }
  return;
}



// FUNCTION 1437039e0 FUN_1437039e0 body=11 status=ok
// SIG undefined FUN_1437039e0(void)

longlong FUN_1437039e0(undefined8 param_1,longlong param_2)

{
  return param_2 - *(int *)(param_2 + -4);
}



// FUNCTION 1437039f0 FUN_1437039f0 body=78 status=ok
// SIG undefined FUN_1437039f0(void)

int FUN_1437039f0(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1437039e0();
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1,uVar2,param_3);
  return iVar1 + ((int)uVar2 - param_2);
}



// FUNCTION 143703a40 FUN_143703a40 body=5 status=ok
// SIG undefined FUN_143703a40(void)

longlong FUN_143703a40(undefined8 param_1,longlong param_2)

{
  return param_2 + -0x10;
}



// FUNCTION 143703a50 FUN_143703a50 body=8 status=ok
// SIG undefined FUN_143703a50(void)

undefined ** FUN_143703a50(void)

{
  return &PTR_vftable_1467dd1a8;
}



// FUNCTION 143703a60 FUN_143703a60 body=55 status=ok
// SIG undefined FUN_143703a60(void)

void FUN_143703a60(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x68))();
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x68))();
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x000143703a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))();
  return;
}



// FUNCTION 143703aa0 FUN_143703aa0 body=55 status=ok
// SIG undefined FUN_143703aa0(void)

void FUN_143703aa0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x60))();
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))();
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x000143703ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  return;
}



// FUNCTION 143703ae0 SetTls body=16 status=ok
// SIG undefined SetTls(void)

void FRunnableThread::SetTls(LPVOID param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143703ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_146b7bf70,param_1);
  return;
}



// FUNCTION 143703b30 GetSharedAccess body=32 status=ok
// SIG undefined GetSharedAccess(void)

undefined8
Metasound::Frontend::IDocumentAccessor::GetSharedAccess(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 143703b50 FUN_143703b50 body=139 status=ok
// SIG undefined FUN_143703b50(void)

longlong FUN_143703b50(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a770();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 143703be0 thunk_FUN_14370b790 body=5 status=ok
// SIG undefined thunk_FUN_14370b790(void)

ulonglong thunk_FUN_14370b790(longlong *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  bool bVar2;
  
  if (-1 < (int)param_1[1]) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    in_RAX = (ulonglong)uVar1;
    if ((int)param_1[1] <= (int)uVar1) {
      if (uVar1 == 0) {
        bVar2 = *param_1 == 0;
      }
      else {
        bVar2 = *param_1 != 0;
      }
      in_RAX = 0;
      if (bVar2) {
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143703c30 FUN_143703c30 body=326 status=ok
// SIG undefined FUN_143703c30(void)

void FUN_143703c30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint local_res20 [2];
  
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0xc);
    param_2 = param_2 - param_1;
    lVar11 = (longlong)param_4;
    do {
      puVar1 = puVar10 + -3;
      if (puVar1 != (uint *)0x0) {
        uVar2 = *(uint *)((longlong)puVar10 + param_2 + 4);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar12 = (int)(uVar2 + 0x1f) >> 5;
        local_res20[0] = uVar12;
        uVar5 = FUN_143703a50();
        uVar4 = local_res20[0];
        uVar6 = 0;
        if (local_res20[0] != 0) {
          uVar6 = FUN_143702d60(uVar5,4,local_res20);
        }
        *(undefined8 *)puVar1 = uVar6;
        puVar10[-1] = uVar4;
        uVar4 = 0x80000000;
        if (local_res20[0] != 0) {
          uVar4 = local_res20[0];
        }
        *puVar10 = uVar4;
        puVar10[1] = uVar2;
        uVar6 = FUN_143703a50();
        if ((int)(*puVar10 & 0x3fffffff) < (int)uVar12) {
          uVar4 = (*puVar10 & 0x3fffffff) * 2;
          uVar2 = uVar12;
          if ((int)uVar12 < (int)uVar4) {
            uVar2 = uVar4;
          }
          FUN_14370c310(uVar6,puVar1,uVar2,4);
        }
        puVar10[-1] = uVar12;
        uVar2 = *(uint *)((longlong)puVar10 + param_2 + -4);
        puVar9 = *(undefined4 **)((longlong)puVar10 + param_2 + -0xc);
        puVar7 = *(undefined4 **)puVar1;
        if ((int)uVar12 < (int)uVar2) {
          uVar2 = uVar12;
        }
        uVar8 = (ulonglong)uVar2;
        if (0 < (int)uVar2) {
          do {
            uVar3 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar7 = uVar3;
            puVar7 = puVar7 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      puVar10 = puVar10 + 6;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 143703dc0 FUN_143703dc0 body=146 status=ok
// SIG undefined FUN_143703dc0(void)

undefined8 * FUN_143703dc0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkResourceHandle::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x18;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143703e60 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddPathRequestQueue>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143703eb0 FUN_143703eb0 body=18 status=ok
// SIG undefined FUN_143703eb0(void)

undefined8 * FUN_143703eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467dd570;
  return param_2;
}



// FUNCTION 143703ee0 func body=88 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkLocalFrame>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143703f40 FUN_143703f40 body=18 status=ok
// SIG undefined FUN_143703f40(void)

undefined8 * FUN_143703f40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467dd710;
  return param_2;
}



// FUNCTION 143703f60 FUN_143703f60 body=78 status=ok
// SIG undefined FUN_143703f60(void)

void FUN_143703f60(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143745190(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143703fb0 FUN_143703fb0 body=90 status=ok
// SIG undefined FUN_143703fb0(void)

/* WARNING: Removing unreachable block (ram,0x000143703fe9) */

void FUN_143703fb0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143704010 func body=80 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkRefPtr<hkaiNavMeshInstance_const_>_>::func
               (longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_14370c030();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143704060 FUN_143704060 body=9 status=ok
// SIG undefined FUN_143704060(void)

void FUN_143704060(longlong param_1)

{
  FUN_14370b790(param_1 + 0x18);
  return;
}



// FUNCTION 143704070 FUN_143704070 body=9 status=ok
// SIG undefined FUN_143704070(void)

void FUN_143704070(longlong param_1)

{
  FUN_1437151f0(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143704180 FUN_143704180 body=127 status=ok
// SIG undefined FUN_143704180(void)

void FUN_143704180(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(param_1 + 0xc + lVar2 * 0x90);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(puVar1 + -3),1,*puVar1 & 0x3fffffff);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -0x24;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 143704200 func body=63 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkRefPtr<hkaiNavMeshInstance_const_>_>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_14370c150();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 143704240 FUN_143704240 body=151 status=ok
// SIG undefined FUN_143704240(void)

longlong FUN_143704240(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143762420(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 1437042e0 FUN_1437042e0 body=18 status=ok
// SIG undefined FUN_1437042e0(void)

undefined8 * FUN_1437042e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ddcf0;
  return param_2;
}



// FUNCTION 143704300 FUN_143704300 body=8 status=ok
// SIG undefined FUN_143704300(void)

char * FUN_143704300(void)

{
  return "WithInterfaces.func2";
}



// FUNCTION 143704310 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hctClothSetupClothData20151Options>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xa8 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x15;
      plVar2 = plVar2 + -0x15;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143704370 FUN_143704370 body=51 status=ok
// SIG undefined FUN_143704370(void)

undefined1 FUN_143704370(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b7e0(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b7f0(param_1 + 0x20);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437043b0 func body=73 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkaiPathfindingUtil::FindPathOutput>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_143745460(param_1,param_2 + param_1);
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143704400 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkBaseObject>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143704450 FUN_143704450 body=18 status=ok
// SIG undefined FUN_143704450(void)

undefined8 * FUN_143704450(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ddf60;
  return param_2;
}



// FUNCTION 143704470 FUN_143704470 body=92 status=ok
// SIG undefined FUN_143704470(void)

void FUN_143704470(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  
  if (0 < param_4) {
    lVar1 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if (*(longlong *)(param_2 + (longlong)param_1) != 0) {
        FUN_14370c030();
      }
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = *(longlong *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437044d0 FUN_1437044d0 body=47 status=ok
// SIG undefined FUN_1437044d0(void)

undefined1 FUN_1437044d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_14370b790();
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_14370b790(param_1 + 0x10);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143704500 FUN_143704500 body=18 status=ok
// SIG undefined FUN_143704500(void)

undefined8 * FUN_143704500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467de170;
  return param_2;
}



// FUNCTION 143704520 FUN_143704520 body=18 status=ok
// SIG undefined FUN_143704520(void)

undefined8 * FUN_143704520(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467de110;
  return param_2;
}



// FUNCTION 143704540 FUN_143704540 body=5 status=ok
// SIG undefined FUN_143704540(void)

undefined1 FUN_143704540(void)

{
  return 1;
}



// FUNCTION 143704550 FUN_143704550 body=172 status=ok
// SIG undefined FUN_143704550(void)

longlong FUN_143704550(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *(undefined ***)(param_1 + 0x30) = castTest::InterfaceBase::vftable;
  *(undefined ***)(param_1 + 0x20) = castTest::InterfaceBase::vftable;
  *(undefined ***)(param_1 + 0x28) = castTest::InterfaceOtherBase::vftable;
  *(undefined ***)(param_1 + 0x18) = castTest::InterfaceBase::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 143704610 FUN_143704610 body=87 status=ok
// SIG undefined FUN_143704610(void)

undefined4 * FUN_143704610(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    cVar1 = (**(code **)(param_1 + 0x18))(param_3);
    uVar2 = 0x80040200;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1437046b0 FUN_1437046b0 body=74 status=ok
// SIG undefined FUN_1437046b0(void)

undefined4 *
FUN_1437046b0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(param_1 + 0x10))(param_3);
  lVar2 = (longlong)iVar1;
  if (iVar1 < 0) {
    lVar2 = (longlong)(-1 - iVar1) + 1;
  }
  *param_2 = 0;
  *(bool *)(param_5 + 1) = iVar1 < 0;
  *param_5 = lVar2;
  return param_2;
}



// FUNCTION 143704700 FUN_143704700 body=139 status=ok
// SIG undefined FUN_143704700(void)

longlong FUN_143704700(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437555f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 143704790 FUN_143704790 body=120 status=ok
// SIG undefined FUN_143704790(void)

longlong FUN_143704790(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x20);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 143704840 thunk_FUN_14375e550 body=5 status=ok
// SIG undefined thunk_FUN_14375e550(void)

bool thunk_FUN_14375e550(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_14375e4e0(param_1,0x3a83126f);
  return iVar1 != 0;
}



// FUNCTION 143704850 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeDebugUtils::GeometryBuildSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143734b10(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437048e0 FUN_1437048e0 body=89 status=ok
// SIG undefined FUN_1437048e0(void)

longlong * FUN_1437048e0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_143714490(param_2,1);
    if (puVar1 == (undefined8 *)0x0) {
      lVar2 = FUN_1437157a0(0);
    }
    else {
      lVar2 = FUN_1437157a0((uint)*puVar1 & 0xf);
    }
  }
  param_1[1] = lVar2;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143704940 FUN_143704940 body=75 status=ok
// SIG undefined FUN_143704940(void)

void FUN_143704940(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143734770(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437049a0 FUN_1437049a0 body=113 status=ok
// SIG undefined FUN_1437049a0(void)

void FUN_1437049a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_1436ea940(lVar1);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x18);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 143704a20 func body=88 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hctClothSetupObjectData20151>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143704a80 func body=60 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMeshClearanceCacheSeeding::CacheData>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x10 + param_1;
    do {
      thunk_FUN_143734820(param_1);
      param_1 = param_1 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143704ac0 FUN_143704ac0 body=146 status=ok
// SIG undefined FUN_143704ac0(void)

undefined8 * FUN_143704ac0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkResourceContainer::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x18;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143704b90 FUN_143704b90 body=66 status=ok
// SIG undefined FUN_143704b90(void)

void FUN_143704b90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar1 = (longlong *)(lVar2 * 0x10 + param_1);
    do {
      if (*plVar1 != 0) {
        FUN_14370c150();
      }
      plVar1 = plVar1 + -2;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 143704be0 FUN_143704be0 body=74 status=ok
// SIG undefined FUN_143704be0(void)

void FUN_143704be0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709ec0(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143704c30 func body=70 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkaiNavMeshClearanceCacheSeeding::CacheData>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437347a0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143704c80 func body=60 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkStringPtr>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 8;
    do {
      FUN_143762420(param_1);
      param_1 = param_1 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143704d20 FUN_143704d20 body=55 status=ok
// SIG undefined FUN_143704d20(void)

void FUN_143704d20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        ATTLGameSession::GetLdnLastError(param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143704d60 FUN_143704d60 body=18 status=ok
// SIG undefined FUN_143704d60(void)

undefined8 * FUN_143704d60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ded70;
  return param_2;
}



// FUNCTION 143704e30 FUN_143704e30 body=148 status=ok
// SIG undefined FUN_143704e30(void)

longlong FUN_143704e30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x20;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143704ed0 func body=75 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkStringPtr>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437165f0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143704f70 FUN_143704f70 body=75 status=ok
// SIG undefined FUN_143704f70(void)

void FUN_143704f70(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143714060(param_1,*(undefined8 *)(param_2 + param_1));
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705000 FUN_143705000 body=148 status=ok
// SIG undefined FUN_143705000(void)

void FUN_143705000(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 + 8;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = hkReferencedObject::vftable;
        FUN_143718270(param_1 + 1,param_2);
        *(undefined4 *)(param_1 + 2) = 0x1ffff;
        *param_1 = UnitTest::InterfaceImpl0::vftable;
      }
      param_2 = param_2 + 0x18;
      param_1 = param_1 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437050a0 func body=60 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkStringPtr>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 8;
    do {
      FUN_143716650(param_1);
      param_1 = param_1 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437050f0 func body=88 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkMonitorStreamColorTable>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143705150 FUN_143705150 body=171 status=ok
// SIG undefined FUN_143705150(void)

void FUN_143705150(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,(param_2 - param_1) + lVar2);
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *puVar1 = UnitTest::InterfaceSynthetic::vftable;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)((param_2 - param_1) + 0x10 + lVar2);
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143705200 FUN_143705200 body=18 status=ok
// SIG undefined FUN_143705200(void)

undefined8 * FUN_143705200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467df660;
  return param_2;
}



// FUNCTION 143705250 FUN_143705250 body=268 status=ok
// SIG undefined FUN_143705250(void)

void FUN_143705250(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    piVar8 = (int *)(param_1 + 8);
    lVar11 = (longlong)param_4;
    do {
      plVar1 = (longlong *)(piVar8 + -2);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = (longlong *)((param_2 - param_1) + -8 + (longlong)piVar8);
        *plVar1 = 0;
        *piVar8 = 0;
        piVar8[1] = -0x80000000;
        if (plVar1 != plVar2) {
          *piVar8 = 0;
          iVar3 = *(int *)((longlong)piVar8 + (param_2 - param_1));
          lVar12 = (longlong)iVar3;
          lVar10 = *plVar2;
          uVar5 = FUN_143703a50();
          uVar7 = piVar8[1] & 0x3fffffff;
          iVar9 = *piVar8 + iVar3;
          if (((int)uVar7 < iVar9) && ((int)uVar7 < iVar9)) {
            iVar4 = iVar9;
            if (iVar9 < (int)(uVar7 * 2)) {
              iVar4 = uVar7 * 2;
            }
            FUN_14370c310(uVar5,plVar1,iVar4,4);
          }
          puVar6 = (undefined4 *)(*plVar1 + (longlong)*piVar8 * 4);
          if (0 < iVar3) {
            lVar10 = lVar10 - (longlong)puVar6;
            do {
              *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
              puVar6 = puVar6 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          *piVar8 = iVar9;
        }
      }
      piVar8 = piVar8 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 143705360 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiSplitGenerationUtils::Settings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143718d80(param_1);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437053a0 func body=70 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkStringPtr>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_143716660(param_1,param_2 + param_1);
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705440 FUN_143705440 body=74 status=ok
// SIG undefined FUN_143705440(void)

void FUN_143705440(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FArchive::operator<<(param_1,local_res18);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705490 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMeshGeneration::StridedMeshFaceOverlay<int>_>::
     func(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437054e0 RemoveSoundBufferForResourceID body=9 status=ok
// SIG undefined RemoveSoundBufferForResourceID(void)

void FAudioDeviceManager::RemoveSoundBufferForResourceID(longlong param_1)

{
  BuildSettings::IsPromotedBuild(param_1 + 0x10);
  return;
}



// FUNCTION 143705520 FUN_143705520 body=155 status=ok
// SIG undefined FUN_143705520(void)

void FUN_143705520(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -9) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0x1ffff;
        *(undefined ***)(puVar1 + -9) = hkMonitorStreamTypeMap::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        FUN_143734b10(puVar1 + 5);
      }
      puVar1 = puVar1 + 0x12;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437055c0 FUN_1437055c0 body=18 status=ok
// SIG undefined FUN_1437055c0(void)

undefined8 * FUN_1437055c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467dfc20;
  return param_2;
}



// FUNCTION 1437055e0 FUN_1437055e0 body=250 status=ok
// SIG undefined FUN_1437055e0(void)

void FUN_1437055e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    piVar8 = (int *)(param_1 + 8);
    lVar11 = (longlong)param_4;
    do {
      plVar2 = (longlong *)((param_2 - param_1) + -8 + (longlong)piVar8);
      plVar1 = (longlong *)(piVar8 + -2);
      if (plVar1 != plVar2) {
        *piVar8 = 0;
        iVar3 = *(int *)((longlong)piVar8 + (param_2 - param_1));
        lVar12 = (longlong)iVar3;
        lVar10 = *plVar2;
        uVar5 = FUN_143703a50();
        uVar7 = piVar8[1] & 0x3fffffff;
        iVar9 = *piVar8 + iVar3;
        if (((int)uVar7 < iVar9) && ((int)uVar7 < iVar9)) {
          iVar4 = iVar9;
          if (iVar9 < (int)(uVar7 * 2)) {
            iVar4 = uVar7 * 2;
          }
          FUN_14370c310(uVar5,plVar1,iVar4,4);
        }
        puVar6 = (undefined4 *)(*plVar1 + (longlong)*piVar8 * 4);
        if (0 < iVar3) {
          lVar10 = lVar10 - (longlong)puVar6;
          do {
            *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
            puVar6 = puVar6 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        *piVar8 = iVar9;
      }
      piVar8 = piVar8 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 1437056e0 func body=88 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkRefCountedProperties>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143705740 FUN_143705740 body=74 status=ok
// SIG undefined FUN_143705740(void)

void FUN_143705740(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709df0(param_1,local_res18);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437057d0 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddClearanceCache>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709e50(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705820 FUN_143705820 body=322 status=ok
// SIG undefined FUN_143705820(void)

void FUN_143705820(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar11 = (int *)(param_1 + 0x20);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      piVar1 = piVar11 + -8;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar11 + -6,param_2 + -0x18 + (longlong)piVar11);
        piVar11[-4] = 0x1ffff;
        *(undefined ***)piVar1 = hkMonitorStreamTypeMap::vftable;
        piVar11[-2] = 0;
        piVar11[-1] = 0;
        *piVar11 = 0;
        piVar11[1] = -0x80000000;
        iVar3 = *(int *)(param_2 + (longlong)piVar11);
        lVar13 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar7 = FUN_143703a50();
        iVar9 = local_res20[0];
        puVar8 = (undefined4 *)0x0;
        if (local_res20[0] != 0) {
          puVar8 = (undefined4 *)FUN_143702d60(uVar7,0x10,local_res20);
        }
        *(undefined4 **)(piVar11 + -2) = puVar8;
        *piVar11 = iVar9;
        iVar9 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar9 = local_res20[0];
        }
        piVar11[1] = iVar9;
        if (0 < iVar3) {
          lVar10 = *(longlong *)(param_2 + -8 + (longlong)piVar11) - (longlong)puVar8;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              puVar2 = (undefined4 *)(lVar10 + (longlong)puVar8);
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              *puVar8 = *puVar2;
              puVar8[1] = uVar4;
              puVar8[2] = uVar5;
              puVar8[3] = uVar6;
            }
            puVar8 = puVar8 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        FUN_143709cf0(piVar11 + 2,param_2 + 8 + (longlong)piVar11);
      }
      piVar11 = piVar11 + 0x12;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 143705970 FUN_143705970 body=12 status=ok
// SIG undefined FUN_143705970(void)

ulonglong FUN_143705970(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffe;
}



// FUNCTION 143705980 FUN_143705980 body=139 status=ok
// SIG undefined FUN_143705980(void)

longlong FUN_143705980(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a350();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 143705a40 FUN_143705a40 body=55 status=ok
// SIG undefined FUN_143705a40(void)

void FUN_143705a40(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14375eb90(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705a80 invoke body=30 status=ok
// SIG undefined invoke(void)

void hkReflect::Detail::
     MethodInvoker<void_*,hkReflect::Detail::SingleInheritanceClass,void_*,void,void,void,void,void,void,void,void>
     ::invoke(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = (*(code *)*param_4)(param_1,*param_2);
    *param_3 = uVar1;
  }
  return;
}



// FUNCTION 143705aa0 func body=88 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkMemoryResourceContainer>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x48);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -9;
      plVar2 = plVar2 + -9;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143705b30 func body=70 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkStringPtr>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14375eba0(param_1,param_2 + param_1);
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705b80 FUN_143705b80 body=18 status=ok
// SIG undefined FUN_143705b80(void)

undefined8 * FUN_143705b80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ec890;
  return param_2;
}



// FUNCTION 143705be0 FUN_143705be0 body=88 status=ok
// SIG undefined FUN_143705be0(void)

void FUN_143705be0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0xc);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -3) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
      }
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143705c40 func body=100 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkRootLevelContainer>::func
               (undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
        FUN_14370aae0(param_1,param_2);
      }
      param_2 = param_2 + 0x10;
      param_1 = param_1 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705cb0 FUN_143705cb0 body=294 status=ok
// SIG undefined FUN_143705cb0(void)

void FUN_143705cb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar11 = (uint *)(param_1 + 0x24);
    lVar13 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar11 + -7,(longlong)puVar11 + param_2 + -0x1c);
      uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar11);
      lVar3 = *(longlong *)(param_2 + -0xc + (longlong)puVar11);
      uVar7 = FUN_143703a50();
      if ((int)(*puVar11 & 0x3fffffff) < (int)uVar2) {
        FUN_14370c310(uVar7,puVar11 + -3,uVar2,0x10);
      }
      uVar10 = uVar2;
      if ((int)puVar11[-1] < (int)uVar2) {
        uVar10 = puVar11[-1];
      }
      FUN_1436ee950(*(undefined8 *)(puVar11 + -3),lVar3,uVar10);
      puVar8 = (undefined4 *)(*(longlong *)(puVar11 + -3) + (longlong)(int)uVar10 * 0x10);
      lVar9 = (longlong)(int)(uVar2 - uVar10);
      if (0 < (int)(uVar2 - uVar10)) {
        lVar12 = (longlong)(int)uVar10 * 0x10 - (longlong)puVar8;
        do {
          if (puVar8 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)(lVar12 + lVar3 + (longlong)puVar8);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar8 = *puVar1;
            puVar8[1] = uVar4;
            puVar8[2] = uVar5;
            puVar8[3] = uVar6;
          }
          puVar8 = puVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      puVar11[-1] = uVar2;
      FUN_14370a980(puVar11 + 1,param_2 + 4 + (longlong)puVar11);
      puVar11 = puVar11 + 0x12;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 143705df0 thunk_FUN_14375e550 body=5 status=ok
// SIG undefined thunk_FUN_14375e550(void)

bool thunk_FUN_14375e550(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_14375e4e0(param_1,0x3a83126f);
  return iVar1 != 0;
}



// FUNCTION 143705e00 FUN_143705e00 body=234 status=ok
// SIG undefined FUN_143705e00(void)

void FUN_143705e00(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar5 = (longlong *)(lVar4 * 0x10 + param_1);
    do {
      uVar1 = FUN_143703a50();
      iVar2 = (int)plVar5[1] + -1;
      lVar6 = (longlong)iVar2;
      if (-1 < iVar2) {
        lVar3 = *plVar5 + (lVar6 * 3 + 1) * 8;
        do {
          if (*(longlong *)(lVar3 + 8) != 0) {
            FUN_14370c150();
          }
          FUN_143716650(lVar3);
          FUN_143716650(lVar3 + -8);
          lVar3 = lVar3 + -0x18;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      *(undefined4 *)(plVar5 + 1) = 0;
      if (-1 < (int)*(uint *)((longlong)plVar5 + 0xc)) {
        FUN_143702e10(uVar1,*plVar5,0x18,*(uint *)((longlong)plVar5 + 0xc) & 0x3fffffff);
      }
      *plVar5 = 0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0x80000000;
      plVar5 = plVar5 + -2;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 143705f10 FUN_143705f10 body=128 status=ok
// SIG undefined FUN_143705f10(void)

void FUN_143705f10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *param_1 = (fVar3 * fVar6 - fVar7 * fVar2) + fVar8 * fVar1 + fVar5 * fVar4;
  param_1[1] = (fVar1 * fVar7 - fVar5 * fVar3) + fVar8 * fVar2 + fVar6 * fVar4;
  param_1[2] = (fVar2 * fVar5 - fVar6 * fVar1) + fVar8 * fVar3 + fVar7 * fVar4;
  param_1[3] = fVar4 * fVar8 - (fVar6 * fVar2 + fVar5 * fVar1 + fVar7 * fVar3);
  return;
}



// FUNCTION 143705f90 FUN_143705f90 body=74 status=ok
// SIG undefined FUN_143705f90(void)

void FUN_143705f90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14370a040(param_1,local_res18);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143705ff0 FUN_143705ff0 body=175 status=ok
// SIG undefined FUN_143705ff0(void)

void FUN_143705ff0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int local_res18 [4];
  
  if (0 < param_3) {
    piVar5 = (int *)(param_1 + 0xc);
    lVar6 = (longlong)param_3;
    do {
      piVar1 = piVar5 + -3;
      if (piVar1 != (int *)0x0) {
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar5[-1] = 0;
        *piVar5 = -0x80000000;
        local_res18[0] = 0;
        uVar3 = FUN_143703a50();
        iVar2 = local_res18[0];
        uVar4 = 0;
        if (local_res18[0] != 0) {
          uVar4 = FUN_143702d60(uVar3,4,local_res18);
        }
        *(undefined8 *)piVar1 = uVar4;
        piVar5[-1] = iVar2;
        iVar2 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar2 = local_res18[0];
        }
        *piVar5 = iVar2;
        piVar5[1] = 0;
      }
      piVar5 = piVar5 + 6;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1437060a0 FUN_1437060a0 body=18 status=ok
// SIG undefined FUN_1437060a0(void)

undefined8 * FUN_1437060a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e1ae0;
  return param_2;
}



// FUNCTION 143706160 FUN_143706160 body=83 status=ok
// SIG undefined FUN_143706160(void)

undefined1 FUN_143706160(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437081d0(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x68);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x80);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x98);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437061d0 FUN_1437061d0 body=215 status=ok
// SIG undefined FUN_1437061d0(void)

void FUN_1437061d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar1 = puVar5 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        uVar3 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar5);
        uVar4 = FUN_143703a50();
        if ((int)(*puVar5 & 0x3fffffff) < (int)uVar2) {
          FUN_14370c310(uVar4,puVar1,uVar2,4);
        }
        FUN_142f87c00(*(undefined8 *)puVar1,uVar3,uVar2);
        puVar5[-1] = uVar2;
        puVar5[1] = *(uint *)((longlong)puVar5 + param_2 + 4);
      }
      puVar5 = puVar5 + 6;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1437062b0 FUN_1437062b0 body=139 status=ok
// SIG undefined FUN_1437062b0(void)

longlong FUN_1437062b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a140();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x68;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
    }
  }
  return param_1;
}



// FUNCTION 143706340 FUN_143706340 body=139 status=ok
// SIG undefined FUN_143706340(void)

longlong FUN_143706340(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x18;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
    }
  }
  return param_1;
}



// FUNCTION 1437063d0 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiSmoothPath::Details::InternalPolyline>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x58 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xb;
      plVar2 = plVar2 + -0xb;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143706420 FUN_143706420 body=375 status=ok
// SIG undefined FUN_143706420(void)

void FUN_143706420(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x4c);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0x13) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0x11) = 0;
        puVar1[-0xf] = 0x1ffff;
        *(undefined ***)(puVar1 + -0x13) = hkMonitorStreamContainer::vftable;
        *(undefined8 *)(puVar1 + -0xd) = 0;
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0x1ffff;
        *(undefined ***)(puVar1 + -9) = hkMonitorStreamStringMap::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        FUN_143734b10(puVar1 + 5);
        *(undefined8 *)(puVar1 + 0xb) = 0;
        puVar1[0xd] = 0x1ffff;
        *(undefined ***)(puVar1 + 9) = hkMonitorStreamTypeMap::vftable;
        *(undefined8 *)(puVar1 + 0xf) = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x13) = 0;
        puVar1[0x15] = 0;
        puVar1[0x16] = 0x80000000;
        FUN_143734b10(puVar1 + 0x17);
        *(undefined8 *)(puVar1 + 0x1b) = 0;
        puVar1[0x1d] = 0;
        puVar1[0x1e] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x1f) = 0;
        puVar1[0x21] = 0;
        puVar1[0x22] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x23) = 0;
        puVar1[0x25] = 0;
        puVar1[0x26] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x27) = 0;
        puVar1[0x29] = 0;
        puVar1[0x2a] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x2b) = 0;
        puVar1[0x2d] = 0;
        puVar1[0x2e] = 0x80000000;
      }
      puVar1 = puVar1 + 0x42;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437065a0 FUN_1437065a0 body=125 status=ok
// SIG undefined FUN_1437065a0(void)

void FUN_1437065a0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -4) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -2) = 0;
        *puVar1 = 0x1ffff;
        *(undefined ***)(puVar1 + -4) = hkLocalFrameGroup::vftable;
        FUN_143716620(puVar1 + 2,0);
      }
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143706620 FUN_143706620 body=47 status=ok
// SIG undefined FUN_143706620(void)

undefined1 FUN_143706620(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x20);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143706650 FUN_143706650 body=18 status=ok
// SIG undefined FUN_143706650(void)

undefined8 * FUN_143706650(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e2300;
  return param_2;
}



// FUNCTION 143706670 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMeshInstanceCutter>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x108 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x21;
      plVar2 = plVar2 + -0x21;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437066e0 FUN_1437066e0 body=125 status=ok
// SIG undefined FUN_1437066e0(void)

void FUN_1437066e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar2 = (uint *)(param_1 + 0xc + lVar3 * 0x18);
    do {
      uVar1 = FUN_143703a50();
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),4,*puVar2 & 0x3fffffff);
      }
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -6;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 143706760 FUN_143706760 body=139 status=ok
// SIG undefined FUN_143706760(void)

longlong FUN_143706760(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a680();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 1437067f0 invoke body=27 status=ok
// SIG undefined invoke(void)

void hkReflect::Detail::
     MethodInvoker<void_*,hkReflect::Detail::SingleInheritanceClass,void,void,void,void,void,void,void,void,void>
     ::invoke(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = (*(code *)*param_4)();
    *param_3 = uVar1;
  }
  return;
}



// FUNCTION 143706880 FUN_143706880 body=18 status=ok
// SIG undefined FUN_143706880(void)

undefined8 * FUN_143706880(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e2cb0;
  return param_2;
}



// FUNCTION 143706910 FUN_143706910 body=46 status=ok
// SIG undefined FUN_143706910(void)

undefined8 * FUN_143706910(undefined8 *param_1,byte param_2)

{
  *param_1 = castTest::Root::vftable;
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143706940 FUN_143706940 body=148 status=ok
// SIG undefined FUN_143706940(void)

void FUN_143706940(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 + 8;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = hkReferencedObject::vftable;
        FUN_143718270(param_1 + 1,param_2);
        *(undefined4 *)(param_1 + 2) = 0x1ffff;
        *param_1 = UnitTest::InterfaceImpl1::vftable;
      }
      param_2 = param_2 + 0x18;
      param_1 = param_1 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437069e0 FUN_1437069e0 body=139 status=ok
// SIG undefined FUN_1437069e0(void)

longlong FUN_1437069e0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a480();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x108;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x108);
    }
  }
  return param_1;
}



// FUNCTION 143706ab0 FUN_143706ab0 body=18 status=ok
// SIG undefined FUN_143706ab0(void)

undefined8 * FUN_143706ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e35a0;
  return param_2;
}



// FUNCTION 143706ad0 FUN_143706ad0 body=74 status=ok
// SIG undefined FUN_143706ad0(void)

void FUN_143706ad0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1,local_res18);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143706b20 FUN_143706b20 body=55 status=ok
// SIG undefined FUN_143706b20(void)

void FUN_143706b20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14370a110(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143706b80 FUN_143706b80 body=18 status=ok
// SIG undefined FUN_143706b80(void)

undefined8 * FUN_143706b80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e3750;
  return param_2;
}



// FUNCTION 143706be0 FUN_143706be0 body=125 status=ok
// SIG undefined FUN_143706be0(void)

void FUN_143706be0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (0 < param_3) {
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    lVar2 = (longlong)param_3;
    do {
      puVar1 = (undefined8 *)(puVar3 + -7);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar3[-5] = 0;
        puVar3[-4] = 0x80000000;
        *(undefined8 *)(puVar3 + -3) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        *(undefined1 *)(puVar3 + 1) = 0;
        FUN_14370b990(puVar1,0);
        FUN_14370b990(puVar3 + -3);
      }
      puVar3 = puVar3 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143706c90 FUN_143706c90 body=178 status=ok
// SIG undefined FUN_143706c90(void)

void FUN_143706c90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -9) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0x1ffff;
        *(undefined ***)(puVar1 + -9) = UnitTest::ClassWithHashMap<int>::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        FUN_143734b10(puVar1 + 5);
        *(undefined8 *)(puVar1 + 9) = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0x80000000;
        FUN_143734b10(puVar1 + 0xd);
      }
      puVar1 = puVar1 + 0x1a;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143706d90 FUN_143706d90 body=185 status=ok
// SIG undefined FUN_143706d90(void)

void FUN_143706d90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    do {
      if (puVar1 + -5 != (undefined8 *)0x0) {
        puVar1[-4] = 0;
        puVar1[-5] = castTest::WithInterfaces::vftable;
        puVar1[1] = castTest::WithInterfaces::vftable;
        *(undefined4 *)(puVar1 + -3) = 0x1ffff;
        puVar1[-2] = castTest::WithInterfaces::vftable;
        puVar1[-1] = castTest::WithInterfaces::vftable;
        *puVar1 = castTest::WithInterfaces::vftable;
      }
      puVar1 = puVar1 + 7;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143706e60 FUN_143706e60 body=75 status=ok
// SIG undefined FUN_143706e60(void)

void FUN_143706e60(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143762c70(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143706eb0 FUN_143706eb0 body=74 status=ok
// SIG undefined FUN_143706eb0(void)

void FUN_143706eb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709e20(param_1,local_res18);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143706f00 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiCuttingGeometryInfo>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x68 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xd;
      plVar2 = plVar2 + -0xd;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143706f50 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkGeometry>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143706fb0 FUN_143706fb0 body=18 status=ok
// SIG undefined FUN_143706fb0(void)

undefined8 * FUN_143706fb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e4130;
  return param_2;
}



// FUNCTION 143707020 FUN_143707020 body=115 status=ok
// SIG undefined FUN_143707020(void)

void FUN_143707020(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0xb) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0xb) = 0;
        puVar1[-9] = 0;
        puVar1[-8] = 0x80000000;
        FUN_143734b10(puVar1 + -7);
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      puVar1 = puVar1 + 0x12;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437070a0 FUN_1437070a0 body=74 status=ok
// SIG undefined FUN_1437070a0(void)

void FUN_1437070a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14370a110(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437070f0 FUN_1437070f0 body=74 status=ok
// SIG undefined FUN_1437070f0(void)

void FUN_1437070f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14370a070(param_1,local_res18);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


