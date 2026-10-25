// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143609690 FUN_143609690 body=504 status=ok
// SIG undefined FUN_143609690(void)

longlong FUN_143609690(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
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
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_1436096ea;
    lVar10 = plVar4[1] * 2 + 2;
  }
  FUN_14361bfd0(param_1,param_2,lVar10);
LAB_1436096ea:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar10 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar9 = *param_3;
    *(ulonglong *)(lVar10 + 0x20) = uVar9;
    if (uVar9 != 0) {
      *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar9 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      lVar5 = *(longlong *)(lVar10 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434e6830(lVar10 + 0x20,param_3);
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
      puVar1 = (ulonglong *)(lVar10 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      uVar7 = *puVar1;
      *(ulonglong *)(lVar3 + 0x20) = uVar7;
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      *puVar8 = uVar9;
      if (param_3 != puVar1) {
        uVar9 = *param_3;
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
        }
        uVar9 = *puVar1;
        if (uVar9 != 0) {
          if ((uVar9 & 1) == 0) {
            if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar9 - 1;
          }
        }
        *puVar1 = *param_3;
      }
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 143609890 FUN_143609890 body=381 status=ok
// SIG undefined FUN_143609890(void)

ulonglong * FUN_143609890(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_1436098e5;
    lVar9 = plVar2[1] * 2 + 2;
  }
  FUN_14361c170(param_1,param_2,lVar9);
LAB_1436098e5:
  plVar2 = (longlong *)*param_1;
  uVar4 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar9 = *param_1;
  param_4 = uVar4 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar9);
  uVar3 = *puVar8;
  uVar7 = param_4;
  if (uVar3 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    uVar4 = *param_3;
    puVar8[1] = uVar4;
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    return puVar8 + 1;
  }
  do {
    uVar7 = uVar7 + 1 & uVar4;
    puVar6 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar9);
  } while (*puVar6 != 0xfffffffffffffffe);
  uVar4 = *(uint *)(puVar8[1] + 0x1c) & uVar4;
  if (uVar4 == param_4) {
    *puVar6 = uVar3;
    uVar4 = puVar8[1];
    puVar6[1] = uVar4;
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    uVar4 = *param_3;
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(puVar8[1] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar8[1] = uVar4;
    *puVar8 = uVar7;
  }
  else {
    puVar5 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar9);
    uVar4 = *puVar5;
    while (uVar4 != param_4) {
      puVar5 = (ulonglong *)((*puVar5 + 1) * 0x10 + lVar9);
      uVar4 = *puVar5;
    }
    *puVar6 = uVar3;
    uVar4 = puVar8[1];
    puVar6[1] = uVar4;
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    *puVar5 = uVar7;
    uVar4 = *param_3;
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(puVar8[1] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar8[1] = uVar4;
    *puVar8 = 0xffffffffffffffff;
  }
  return puVar8 + 1;
}



// FUNCTION 143609a10 FUN_143609a10 body=139 status=ok
// SIG undefined FUN_143609a10(void)

ulonglong FUN_143609a10(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar5 = 8;
    uVar3 = 0x1505;
    do {
      lVar1 = lVar5 + -1;
      lVar5 = lVar5 + -1;
      uVar3 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar3 * 0x1003f;
    } while (lVar5 != 0);
    uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
    lVar5 = uVar3 * 3 + 2;
    puVar6 = (ulonglong *)(lVar2 + lVar5 * 8);
    if ((*(longlong *)(lVar2 + lVar5 * 8) != -2) && (uVar4 = uVar3, puVar6[1] == uVar3)) {
      while( true ) {
        if ((puVar6[1] == uVar3) && (puVar6[2] == *param_2)) {
          return uVar4;
        }
        uVar4 = *puVar6;
        if (uVar4 == 0xffffffffffffffff) break;
        puVar6 = (ulonglong *)(lVar2 + uVar4 * 0x18 + 0x10);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143609aa0 FUN_143609aa0 body=138 status=ok
// SIG undefined FUN_143609aa0(void)

undefined8 FUN_143609aa0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (*param_1 == 0) {
    return 0xffffffffffffffff;
  }
  lVar2 = 0;
  switch(*param_2 >> 3 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    lVar2 = 0x10;
    uVar4 = 0x1505;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    lVar2 = 0x18;
    uVar4 = 0x1505;
    break;
  case 10:
    lVar2 = 0x10;
  default:
    uVar4 = 0x1505;
    if (lVar2 == 0) goto LAB_143609b18;
  }
  do {
    lVar1 = lVar2 + -1;
    lVar2 = lVar2 + -1;
    uVar4 = uVar4 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)param_2);
  } while (lVar2 != 0);
LAB_143609b18:
  uVar3 = FUN_143609be0(param_1,param_2,*(ulonglong *)(*param_1 + 8) & uVar4);
  return uVar3;
}



// FUNCTION 143609b60 FUN_143609b60 body=125 status=ok
// SIG undefined FUN_143609b60(void)

ulonglong FUN_143609b60(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  puVar2 = (ulonglong *)((param_3 + 1) * 0x10 + lVar1);
  if ((*puVar2 != 0xfffffffffffffffe) &&
     (uVar3 = param_3,
     ((ulonglong)*(uint *)(puVar2[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar2[1] + 0x1c) & *(ulonglong *)(lVar1 + 8)) == param_3) &&
         (puVar2[1] == *param_2)) {
        return uVar3;
      }
      uVar3 = *puVar2;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar2 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar1);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143609be0 FUN_143609be0 body=150 status=ok
// SIG undefined FUN_143609be0(void)

longlong FUN_143609be0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = param_3 * 3 + 2;
  plVar3 = (longlong *)(lVar1 + lVar4 * 8);
  if ((*(longlong *)(lVar1 + lVar4 * 8) != -2) && (lVar4 = param_3, plVar3[1] == param_3)) {
    while( true ) {
      if (plVar3[1] == param_3) {
        if (param_2 == plVar3[2]) {
          return lVar4;
        }
        cVar2 = FUN_1435cf560(plVar3[2],param_2);
        if (cVar2 != '\0') {
          return lVar4;
        }
      }
      lVar4 = *plVar3;
      if (lVar4 == -1) break;
      plVar3 = (longlong *)(lVar1 + lVar4 * 0x18 + 0x10);
    }
  }
  return -1;
}



// FUNCTION 143609c80 FUN_143609c80 body=125 status=ok
// SIG undefined FUN_143609c80(void)

longlong * FUN_143609c80(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = param_1[1];
  FUN_143613a60(param_1,param_1,uVar3);
  if (uVar1 < uVar3) {
    puVar2 = (undefined4 *)(uVar1 * 0x20 + *param_1);
    for (lVar4 = uVar3 - uVar1; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      puVar2 = puVar2 + 8;
    }
  }
  return param_1;
}



// FUNCTION 143609d00 FUN_143609d00 body=65 status=ok
// SIG undefined FUN_143609d00(void)

undefined8 * FUN_143609d00(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 143609d50 FUN_143609d50 body=63 status=ok
// SIG undefined FUN_143609d50(void)

undefined8 * FUN_143609d50(undefined8 *param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143609d90 FUN_143609d90 body=147 status=ok
// SIG undefined FUN_143609d90(void)

undefined8 * FUN_143609d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 3;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b4a908;
  *(undefined4 *)(param_1 + 1) = 1;
  puVar1 = param_1;
  do {
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (lVar2 != 0);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0xf] = 0;
  param_1[0xb] = &PTR_StartProfileThreadUsage_145b4a8e8;
  param_1[0x11] = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x10] = param_1 + 0xb;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  return param_1;
}



// FUNCTION 143609e30 FUN_143609e30 body=181 status=ok
// SIG undefined FUN_143609e30(void)

char * FUN_143609e30(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  *param_1 = '\x01';
  lVar1 = *param_2;
  pcVar2 = (char *)FUN_143590b70(lVar1,local_res8,local_res10);
  puVar4 = &DAT_146b7a8c0;
  if (*pcVar2 == '\0') {
    *param_1 = '\0';
    puVar3 = &DAT_146b7a8c0;
  }
  else {
    FUN_1434f0780(lVar1,local_res10[0]);
    puVar3 = (undefined4 *)(lVar1 + 0x10);
    *param_1 = '\x01';
  }
  *(undefined4 *)(param_1 + 4) = *puVar3;
  lVar1 = *param_2;
  if (*param_1 != '\0') {
    pcVar2 = (char *)FUN_143590b70(lVar1 + -0x20,local_res8,local_res10);
    if (*pcVar2 != '\0') {
      FUN_1434f0780(lVar1 + -0x20,local_res10[0]);
      *param_1 = '\x01';
      puVar4 = (undefined4 *)(lVar1 + -0x10);
      goto LAB_143609ec8;
    }
  }
  *param_1 = '\0';
LAB_143609ec8:
  *(undefined4 **)(param_1 + 8) = puVar4;
  FUN_143611f90(param_2);
  return param_1;
}



// FUNCTION 143609ef0 FUN_143609ef0 body=189 status=ok
// SIG undefined FUN_143609ef0(void)

char * FUN_143609ef0(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  *param_1 = '\x01';
  lVar1 = *param_2;
  pcVar2 = (char *)FUN_143590eb0(lVar1,local_res8,local_res10);
  if (*pcVar2 == '\0') {
    *param_1 = '\0';
    puVar3 = &DAT_146b7a8c4;
  }
  else {
    FUN_143614720(lVar1,local_res10[0]);
    puVar3 = (undefined4 *)(lVar1 + 0x10);
    *param_1 = '\x01';
  }
  *(undefined4 *)(param_1 + 4) = *puVar3;
  lVar1 = *param_2;
  if (*param_1 != '\0') {
    pcVar2 = (char *)FUN_143590b70(lVar1 + -0x20,local_res8,local_res10);
    if (*pcVar2 != '\0') {
      FUN_1434f0780(lVar1 + -0x20,local_res10[0]);
      puVar3 = (undefined4 *)(lVar1 + -0x10);
      *param_1 = '\x01';
      goto LAB_143609f8e;
    }
  }
  *param_1 = '\0';
  puVar3 = &DAT_146b7a8c0;
LAB_143609f8e:
  *(undefined4 **)(param_1 + 8) = puVar3;
  FUN_143611f90(param_2);
  return param_1;
}



// FUNCTION 143609fb0 FUN_143609fb0 body=181 status=ok
// SIG undefined FUN_143609fb0(void)

char * FUN_143609fb0(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  *param_1 = '\x01';
  lVar1 = *param_2;
  pcVar2 = (char *)FUN_143590eb0(lVar1,local_res8,local_res10);
  puVar4 = &DAT_146b7a8c4;
  if (*pcVar2 == '\0') {
    *param_1 = '\0';
    puVar3 = &DAT_146b7a8c4;
  }
  else {
    FUN_143614720(lVar1,local_res10[0]);
    puVar3 = (undefined4 *)(lVar1 + 0x10);
    *param_1 = '\x01';
  }
  *(undefined4 *)(param_1 + 4) = *puVar3;
  lVar1 = *param_2;
  if (*param_1 != '\0') {
    pcVar2 = (char *)FUN_143590eb0(lVar1 + -0x20,local_res8,local_res10);
    if (*pcVar2 != '\0') {
      FUN_143614720(lVar1 + -0x20,local_res10[0]);
      *param_1 = '\x01';
      puVar4 = (undefined4 *)(lVar1 + -0x10);
      goto LAB_14360a048;
    }
  }
  *param_1 = '\0';
LAB_14360a048:
  *(undefined4 **)(param_1 + 8) = puVar4;
  FUN_143611f90(param_2);
  return param_1;
}



// FUNCTION 14360a070 FUN_14360a070 body=191 status=ok
// SIG undefined FUN_14360a070(void)

char * FUN_14360a070(char *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  *param_1 = '\x01';
  lVar1 = *param_2;
  FUN_14360f380(lVar1,local_res8,&local_res10);
  puVar3 = &DAT_146b7a8c8;
  if ((char)local_res8[0] == '\0') {
    *param_1 = '\0';
    puVar2 = &DAT_146b7a8c8;
  }
  else {
    FUN_1434f06a0(lVar1,local_res10);
    puVar2 = (undefined8 *)(lVar1 + 0x10);
    *param_1 = '\x01';
  }
  *(undefined8 *)(param_1 + 8) = *puVar2;
  lVar1 = *param_2;
  if (*param_1 != '\0') {
    FUN_14360f380(lVar1 + -0x20,local_res8,&local_res10);
    if ((char)local_res8[0] != '\0') {
      FUN_1434f06a0(lVar1 + -0x20,local_res10);
      *param_1 = '\x01';
      puVar3 = (undefined8 *)(lVar1 + -0x10);
      goto LAB_14360a112;
    }
  }
  *param_1 = '\0';
LAB_14360a112:
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  FUN_143611f90(param_2);
  return param_1;
}



// FUNCTION 14360a130 FUN_14360a130 body=158 status=ok
// SIG undefined FUN_14360a130(void)

ulonglong * FUN_14360a130(ulonglong *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)param_1 + (ulonglong)(param_3 + 0x40 >> 6) * 8 + 0x37 & 0xfffffffffffffff8;
  *param_1 = uVar3;
  *(uint *)(param_1 + 1) = param_3;
  uVar3 = (ulonglong)param_3 * 8 + 0xf + uVar3 & 0xfffffffffffffff0;
  param_1[2] = uVar3;
  uVar3 = (ulonglong)param_3 * 0x10 + 0x1f + uVar3 & 0xffffffffffffffe0;
  param_1[3] = uVar3;
  *(uint *)(param_1 + 4) = param_2 - 1;
  param_1[5] = uVar3 + (ulonglong)(uint)param_1[1] * 0x20;
  if (param_2 != 0) {
    lVar2 = 0;
    uVar3 = (ulonglong)param_2;
    do {
      puVar1 = (undefined8 *)(param_1[5] + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0xffffffffffffffff;
        puVar1[1] = 0xffffffffffffffff;
      }
      lVar2 = lVar2 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14360a1d0 AbcFileWithMovieDef body=98 status=ok
// SIG undefined AbcFileWithMovieDef(void)

undefined8 *
Scaleform::GFx::AS3::ASVM::AbcFileWithMovieDef::AbcFileWithMovieDef
          (undefined8 *param_1,longlong param_2,RefCountImpl *param_3)

{
  FUN_1434e5dc0();
  *param_1 = &PTR_FUN_145b4c488;
  if (param_2 != 0) {
    Resource::AddRef(param_2);
  }
  param_1[0x2f] = param_2;
  if (param_3 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_3);
  }
  param_1[0x30] = param_3;
  return param_1;
}



// FUNCTION 14360a240 FUN_14360a240 body=67 status=ok
// SIG undefined FUN_14360a240(void)

undefined8 * FUN_14360a240(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b06ce0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[6] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  return param_1;
}



// FUNCTION 14360a290 FUN_14360a290 body=191 status=ok
// SIG undefined FUN_14360a290(void)

undefined8 *
FUN_14360a290(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,longlong param_11)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 4) = param_9;
  param_1[7] = param_6;
  param_1[8] = param_8;
  *(uint *)(param_1 + 2) = param_2 & 0x1f;
  puVar1 = param_1 + 10;
  param_1[9] = param_10;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[0xc] = param_1;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xd] = param_11;
  if (param_11 != 0) {
    plVar3 = (longlong *)(param_11 + 0x10);
    *puVar1 = *(undefined8 *)(param_11 + 0x10);
    param_1[0xb] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = param_1[6];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = *(undefined8 *)(lVar2 + 0xc0);
  param_1[0xf] = lVar2 + 0x50;
  *(undefined8 **)(*(longlong *)(lVar2 + 0xc0) + 0x78) = param_1;
  *(undefined8 **)(lVar2 + 0xc0) = param_1;
  *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
  return param_1;
}



// FUNCTION 14360a350 FUN_14360a350 body=227 status=ok
// SIG undefined FUN_14360a350(void)

undefined8 * FUN_14360a350(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0xffffffffffffffff;
  param_1[3] = 0;
  puVar1 = param_1 + 8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 1;
  *puVar1 = puVar1;
  param_1[9] = puVar1;
  puVar1 = param_1 + 10;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  puVar1 = param_1 + 0x24;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *puVar1 = puVar1;
  param_1[0x25] = puVar1;
  return param_1;
}



// FUNCTION 14360a440 FUN_14360a440 body=213 status=ok
// SIG undefined FUN_14360a440(void)

undefined8 *
FUN_14360a440(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 5;
  param_1[4] = param_7;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xf;
  *puVar1 = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = param_1;
  param_1[8] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[6] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[9] = 0xffffffffffffffff;
  puVar1 = param_1 + 9;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = param_1;
  param_1[0xc] = param_4;
  if (param_4 != 0) {
    plVar2 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[10] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[0xe] = param_5;
  puVar1 = param_1 + 0xf;
  param_1[0xd] = param_1;
  *puVar1 = puVar1;
  param_1[0x10] = puVar1;
  param_1[0x12] = param_6;
  puVar1 = param_1 + 0x13;
  param_1[0x11] = param_1;
  *puVar1 = puVar1;
  param_1[0x14] = puVar1;
  return param_1;
}



// FUNCTION 14360a520 FUN_14360a520 body=135 status=ok
// SIG undefined FUN_14360a520(void)

undefined8 *
FUN_14360a520(undefined8 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  param_1[4] = param_5;
  param_1[5] = param_6;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 7;
  param_1[6] = param_7;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0x13;
  *puVar1 = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = param_1;
  param_1[10] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[8] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  puVar1 = param_1 + 0xd;
  param_1[0xb] = param_1;
  param_1[0xc] = param_4;
  *puVar1 = puVar1;
  param_1[0xe] = puVar1;
  return param_1;
}



// FUNCTION 14360a5b0 FUN_14360a5b0 body=180 status=ok
// SIG undefined FUN_14360a5b0(void)

undefined8 *
FUN_14360a5b0(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 5;
  param_1[4] = param_6;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0x11;
  *puVar1 = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = param_1;
  param_1[8] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[6] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[9] = 0xffffffffffffffff;
  puVar1 = param_1 + 9;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = param_1;
  param_1[0xc] = param_4;
  if (param_4 != 0) {
    plVar2 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[10] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[0xe] = param_5;
  puVar1 = param_1 + 0xf;
  param_1[0xd] = param_1;
  *puVar1 = puVar1;
  param_1[0x10] = puVar1;
  return param_1;
}



// FUNCTION 14360a670 FUN_14360a670 body=133 status=ok
// SIG undefined FUN_14360a670(void)

undefined8 *
FUN_14360a670(undefined8 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  param_1[4] = param_5;
  param_1[5] = param_6;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 7;
  *(undefined4 *)(param_1 + 6) = param_7;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0x10;
  *puVar1 = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = param_1;
  param_1[10] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[8] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  puVar1 = param_1 + 0xd;
  param_1[0xb] = param_1;
  param_1[0xc] = param_4;
  *puVar1 = puVar1;
  param_1[0xe] = puVar1;
  return param_1;
}



// FUNCTION 14360a700 FUN_14360a700 body=173 status=ok
// SIG undefined FUN_14360a700(void)

undefined8 *
FUN_14360a700(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 7;
  param_1[4] = param_7;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 5;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[9] = param_1;
  *puVar1 = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[10] = param_5;
  if (param_5 != 0) {
    plVar2 = (longlong *)(param_5 + 0x10);
    *puVar1 = *(undefined8 *)(param_5 + 0x10);
    param_1[8] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  puVar1 = param_1 + 0xb;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xd] = param_1;
  param_1[0xe] = param_6;
  if (param_6 != 0) {
    plVar2 = (longlong *)(param_6 + 0x10);
    *puVar1 = *(undefined8 *)(param_6 + 0x10);
    param_1[0xc] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  return param_1;
}



// FUNCTION 14360a7b0 FUN_14360a7b0 body=344 status=ok
// SIG undefined FUN_14360a7b0(void)

undefined8 *
FUN_14360a7b0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_9;
  *(undefined4 *)(param_1 + 4) = param_10;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 7;
  param_1[5] = param_11;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 8;
  *(undefined4 *)(param_1 + 6) = param_3;
  *puVar1 = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = param_1;
  param_1[10] = param_4;
  if (param_4 != 0) {
    plVar2 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[8] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  puVar1 = param_1 + 0xb;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xd] = param_1;
  param_1[0xe] = param_5;
  if (param_5 != 0) {
    plVar2 = (longlong *)(param_5 + 0x10);
    *puVar1 = *(undefined8 *)(param_5 + 0x10);
    param_1[0xc] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  puVar1 = param_1 + 0xf;
  *puVar1 = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = param_1;
  param_1[0x12] = param_6;
  if (param_6 != 0) {
    plVar2 = (longlong *)(param_6 + 0x10);
    *puVar1 = *(undefined8 *)(param_6 + 0x10);
    param_1[0x10] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[0x14] = param_7;
  puVar1 = param_1 + 0x15;
  param_1[0x13] = param_1;
  *puVar1 = puVar1;
  param_1[0x16] = puVar1;
  param_1[0x18] = param_8;
  puVar1 = param_1 + 0x19;
  param_1[0x17] = param_1;
  *puVar1 = puVar1;
  param_1[0x1a] = puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0xffffffffffffffff;
  param_1[0x1c] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 14360a910 FUN_14360a910 body=182 status=ok
// SIG undefined FUN_14360a910(void)

undefined8 *
FUN_14360a910(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[5] = param_2;
  puVar1 = param_1 + 10;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xb;
  param_1[6] = param_3;
  param_1[7] = param_5;
  param_1[0xc] = param_1;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xd] = param_7;
  if (param_7 != 0) {
    plVar3 = (longlong *)(param_7 + 0x10);
    *puVar1 = *(undefined8 *)(param_7 + 0x10);
    param_1[0xb] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = param_1[6];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = *(undefined8 *)(lVar2 + 0xc0);
  param_1[0xf] = lVar2 + 0x50;
  *(undefined8 **)(*(longlong *)(lVar2 + 0xc0) + 0x78) = param_1;
  *(undefined8 **)(lVar2 + 0xc0) = param_1;
  *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
  param_1[0x10] = param_6;
  return param_1;
}



// FUNCTION 14360a9d0 FUN_14360a9d0 body=163 status=ok
// SIG undefined FUN_14360a9d0(void)

undefined8 *
FUN_14360a9d0(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 5;
  param_1[4] = param_6;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xd;
  *puVar1 = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = param_1;
  param_1[8] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[6] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[9] = 0xffffffffffffffff;
  puVar1 = param_1 + 9;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = param_1;
  param_1[0xc] = param_4;
  if (param_4 != 0) {
    plVar2 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[10] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  return param_1;
}



// FUNCTION 14360aa80 FUN_14360aa80 body=199 status=ok
// SIG undefined FUN_14360aa80(void)

undefined8 * FUN_14360aa80(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0xffffffffffffffff;
  puVar1 = param_1 + 3;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0x14;
  *puVar1 = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = param_1;
  param_1[6] = param_2;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 + 0x10);
    *puVar1 = *(undefined8 *)(param_2 + 0x10);
    param_1[4] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[7] = 0xffffffffffffffff;
  puVar1 = param_1 + 7;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = param_1;
  param_1[10] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[8] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[0xc] = *(undefined8 *)(param_3 + 8);
  puVar1 = param_1 + 0xd;
  param_1[0xb] = param_1;
  *puVar1 = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = *(undefined8 *)(param_2 + 8);
  puVar1 = param_1 + 0x11;
  param_1[0xf] = param_1;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  return param_1;
}



// FUNCTION 14360ab50 FUN_14360ab50 body=117 status=ok
// SIG undefined FUN_14360ab50(void)

uint * FUN_14360ab50(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar2 = *param_2 & 0x1f;
  if (9 < uVar2) {
    if ((*param_2 >> 9 & 1) != 0) {
      **(int **)(param_2 + 2) = **(int **)(param_2 + 2) + 1;
      return param_1;
    }
    if (uVar2 == 10) {
      *(int *)(*(longlong *)(param_2 + 4) + 0x18) = *(int *)(*(longlong *)(param_2 + 4) + 0x18) + 1;
    }
    else if (10 < uVar2) {
      if (uVar2 < 0xd) {
        lVar3 = *(longlong *)(param_2 + 4);
      }
      else {
        if (0xe < uVar2) {
          return param_1;
        }
        lVar3 = *(longlong *)(param_2 + 6);
      }
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 14360abd0 FUN_14360abd0 body=94 status=ok
// SIG undefined FUN_14360abd0(void)

void FUN_14360abd0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar2 = plVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014360ac2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 14360ac30 FUN_14360ac30 body=118 status=ok
// SIG undefined FUN_14360ac30(void)

void FUN_14360ac30(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + -0x40 + lVar3 * 0x40);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    FUN_1435ab510(plVar2 + 2);
    if (*plVar2 != 0) {
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    plVar2 = plVar2 + -8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014360aca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 14360acb0 FUN_14360acb0 body=112 status=ok
// SIG undefined FUN_14360acb0(void)

void FUN_14360acb0(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  puVar3 = (ulonglong *)(*param_1 + (lVar4 + -1) * 8);
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        piVar1 = (int *)(uVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        *puVar3 = uVar2 - 1;
      }
    }
    puVar3 = puVar3 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014360ad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 14360ad20 FUN_14360ad20 body=106 status=ok
// SIG undefined FUN_14360ad20(void)

void FUN_14360ad20(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  puVar2 = (undefined8 *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar1 = (int *)*puVar2;
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    puVar2 = puVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014360ad86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 14360ad90 ~AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_> body=105 status=ok
// SIG undefined ~AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>(void)

void Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
     ~AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>
               (longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
      if (*plVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14360ae00 ~AutoPtr<Scaleform::GFx::AS3::VTable> body=114 status=ok
// SIG undefined ~AutoPtr<Scaleform::GFx::AS3::VTable>(void)

void Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable>::~AutoPtr<Scaleform::GFx::AS3::VTable>
               (longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
      FUN_14360f5f0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(lVar1 + 8));
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14360ae80 FUN_14360ae80 body=112 status=ok
// SIG undefined FUN_14360ae80(void)

void FUN_14360ae80(longlong *param_1)

{
  int *piVar1;
  
  if (9 < ((byte)*(uint *)(param_1 + 1) & 0x1f)) {
    if ((*(uint *)(param_1 + 1) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 1);
    }
    else {
      piVar1 = (int *)param_1[2];
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffde0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
  }
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14360aef0 FUN_14360aef0 body=201 status=ok
// SIG undefined FUN_14360aef0(void)

void FUN_14360aef0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar4 + 0x10 + lVar1) != -2) {
        lVar2 = *(longlong *)(lVar4 + 0x20 + lVar1);
        if (lVar2 != 0) {
          if (*(char *)(lVar4 + 0x28 + lVar1) != '\0') {
            *(undefined1 *)(lVar4 + 0x28 + lVar1) = 0;
            FUN_14360ad20(lVar2);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
          }
          *(undefined8 *)(lVar4 + 0x20 + lVar1) = 0;
        }
        *(undefined1 *)(lVar4 + 0x28 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360afc0 FUN_14360afc0 body=163 status=ok
// SIG undefined FUN_14360afc0(void)

void FUN_14360afc0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1 + lVar4;
      if (*(longlong *)(lVar2 + 0x10) != -2) {
        uVar1 = *(ulonglong *)(lVar2 + 0x28);
        if (uVar1 != 0) {
          if ((uVar1 & 1) == 0) {
            if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x28) = uVar1 - 1;
          }
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b070 FUN_14360b070 body=135 status=ok
// SIG undefined FUN_14360b070(void)

void FUN_14360b070(longlong *param_1)

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
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x28 + lVar4) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b100 FUN_14360b100 body=163 status=ok
// SIG undefined FUN_14360b100(void)

void FUN_14360b100(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1 + lVar4;
      if (*(longlong *)(lVar2 + 0x10) != -2) {
        uVar1 = *(ulonglong *)(lVar2 + 0x30);
        if (uVar1 != 0) {
          if ((uVar1 & 1) == 0) {
            if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x30) = uVar1 - 1;
          }
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b1b0 FUN_14360b1b0 body=140 status=ok
// SIG undefined FUN_14360b1b0(void)

void FUN_14360b1b0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar5) != -2) {
        lVar3 = *(longlong *)(lVar2 + 0x18 + lVar5);
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b240 FUN_14360b240 body=131 status=ok
// SIG undefined FUN_14360b240(void)

void FUN_14360b240(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar2 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar2) != -2) {
        FUN_14360ae80(lVar1 + 0x18 + lVar2);
        *(undefined8 *)(lVar1 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b2d0 FUN_14360b2d0 body=140 status=ok
// SIG undefined FUN_14360b2d0(void)

void FUN_14360b2d0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar5) != -2) {
        lVar3 = *(longlong *)(lVar2 + 0x18 + lVar5);
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b360 FUN_14360b360 body=163 status=ok
// SIG undefined FUN_14360b360(void)

void FUN_14360b360(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1 + lVar4;
      if (*(longlong *)(lVar2 + 0x10) != -2) {
        uVar1 = *(ulonglong *)(lVar2 + 0x20);
        if (uVar1 != 0) {
          if ((uVar1 & 1) == 0) {
            if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x20) = uVar1 - 1;
          }
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b410 FUN_14360b410 body=135 status=ok
// SIG undefined FUN_14360b410(void)

void FUN_14360b410(longlong *param_1)

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
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x18 + lVar4) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14360b4a0 FUN_14360b4a0 body=174 status=ok
// SIG undefined FUN_14360b4a0(void)

void FUN_14360b4a0(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1[0x94] = (RefCountImplCore)((byte)param_1[0x94] | 0x20);
  *(undefined ***)param_1 = &PTR_FUN_145b4a908;
  FUN_14360eda0(param_1,2,0);
  if (*(RefCountImpl **)(param_1 + 0x98) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x98));
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined ***)(param_1 + 0x58) = &PTR__purecall_145b173f0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14360b550 FUN_14360b550 body=1533 status=ok
// SIG undefined FUN_14360b550(void)

void FUN_14360b550(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x3f0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3f0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 1000);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 1000) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3e0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3e0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3d8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3d8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3d0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3d0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3c8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3c8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3c0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3c0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3b8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3b8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3b0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3b0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3a8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3a8) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x3a0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x3a0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x398);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x398) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x390);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x390) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x388);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x388) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x380);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x380) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x378);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x378) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x370);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x370) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x368);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x368) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x360);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x360) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x358);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x358) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x350);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x350) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x348);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x348) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x340);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x340) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x338);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x338) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x330);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x330) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x328);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x328) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 800);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 800) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x318);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x318) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x310);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x310) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x308);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x308) = uVar1 - 1;
      FUN_1435bf930(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435bf930(param_1);
  return;
}



// FUNCTION 14360bb50 FUN_14360bb50 body=170 status=ok
// SIG undefined FUN_14360bb50(void)

void FUN_14360bb50(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x38) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x38) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x38);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x40);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffde0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x18) = uVar2 - 1;
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 14360bc00 FUN_14360bc00 body=219 status=ok
// SIG undefined FUN_14360bc00(void)

void FUN_14360bc00(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  FUN_14360f5f0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x50));
  FUN_14360f5f0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x30) = uVar1 - 1;
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x10) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x10) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x10);
    }
    else {
      piVar2 = *(int **)(param_1 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffde0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0aad0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14360bce0 FUN_14360bce0 body=97 status=ok
// SIG undefined FUN_14360bce0(void)

void FUN_14360bce0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = (uint *)(param_1 + 0x10);
  if (((byte)*(uint *)(param_1 + 0x10) & 0x1f) < 10) {
    return;
  }
  if ((*(uint *)(param_1 + 0x10) >> 9 & 1) != 0) {
    piVar2 = *(int **)(param_1 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *puVar1 = *puVar1 & 0xfffffde0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  FUN_1435920c0(puVar1);
  return;
}



// FUNCTION 14360bd50 FUN_14360bd50 body=291 status=ok
// SIG undefined FUN_14360bd50(void)

void FUN_14360bd50(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  
  lVar4 = param_1 + 0x10;
  if (8 < *(uint *)(param_1 + 8)) {
    lVar4 = *(longlong *)(param_1 + 0x110);
  }
  uVar6 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    puVar5 = (ulonglong *)(lVar4 + 0x10);
    do {
      uVar2 = (uint)puVar5[-2] & 0x1f;
      if (9 < uVar2) {
        if (((uint)puVar5[-2] >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            piVar1 = (int *)(*puVar5 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            uVar3 = *puVar5;
            if ((uVar3 & 1) == 0) {
LAB_14360be0e:
              if ((uVar3 != 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *puVar5 = uVar3 - 1;
            }
          }
          else if (uVar2 - 0xd < 2) {
            uVar3 = puVar5[1];
            if ((uVar3 & 1) == 0) goto LAB_14360be0e;
            puVar5[1] = uVar3 - 1;
          }
        }
        else {
          piVar1 = (int *)puVar5[-1];
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(uint *)(puVar5 + -2) = (uint)puVar5[-2] & 0xfffffde0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
      }
      *(uint *)(puVar5 + -2) = (uint)puVar5[-2] & 0xffffffe0;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00014360be6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x110));
  return;
}



// FUNCTION 14360be80 FUN_14360be80 body=194 status=ok
// SIG undefined FUN_14360be80(void)

void FUN_14360be80(longlong param_1)

{
  int *piVar1;
  
  if (9 < ((byte)*(uint *)(param_1 + 0x28) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x28) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x28);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x30);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffde0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 8) & 0x1f)) {
    if ((*(uint *)(param_1 + 8) >> 9 & 1) != 0) {
      piVar1 = *(int **)(param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffde0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    FUN_1435920c0(param_1 + 8);
  }
  return;
}



// FUNCTION 14360bf50 FUN_14360bf50 body=123 status=ok
// SIG undefined FUN_14360bf50(void)

void FUN_14360bf50(undefined8 *param_1)

{
  int *piVar1;
  
  if (9 < ((byte)*(uint *)(param_1 + 4) & 0x1f)) {
    if ((*(uint *)(param_1 + 4) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 4);
    }
    else {
      piVar1 = (int *)param_1[5];
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffde0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  *param_1 = &PTR_FUN_145b0ab20;
  piVar1 = (int *)(param_1[1] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14360bfd0 FUN_14360bfd0 body=135 status=ok
// SIG undefined FUN_14360bfd0(void)

void FUN_14360bfd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14360b360(param_1 + 0x108);
  FUN_14360b2d0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 14360c060 FUN_14360c060 body=38 status=ok
// SIG undefined FUN_14360c060(void)

void FUN_14360c060(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x4a;
  (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,param_1,local_res18);
  return;
}



// FUNCTION 14360c090 operator= body=107 status=ok
// SIG undefined operator=(void)

longlong *
Scaleform::
AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer_*___ptr64,2,Scaleform::ArrayDefaultPolicy>_>
::operator=(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != param_2) {
    if ((puVar1 != (undefined8 *)0x0) && ((char)param_1[1] != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
    *param_1 = (longlong)param_2;
  }
  *(bool *)(param_1 + 1) = param_2 != (undefined8 *)0x0;
  return param_1;
}



// FUNCTION 14360c100 operator= body=118 status=ok
// SIG undefined operator=(void)

longlong *
Scaleform::
AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>_>
::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = param_2[1];
    lVar1 = *param_2;
    *(undefined1 *)(param_2 + 1) = 0;
    lVar2 = *param_1;
    if (lVar2 != lVar1) {
      if ((lVar2 != 0) && ((char)param_1[1] != '\0')) {
        *(undefined1 *)(param_1 + 1) = 0;
        FUN_14360ad20(lVar2);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
      }
      *param_1 = lVar1;
    }
    *(char *)(param_1 + 1) = (char)lVar3;
  }
  return param_1;
}



// FUNCTION 14360c180 operator= body=112 status=ok
// SIG undefined operator=(void)

longlong *
Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != param_2) {
    if ((plVar1 != (longlong *)0x0) && ((char)param_1[1] != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      if (*plVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
    }
    *param_1 = (longlong)param_2;
  }
  *(bool *)(param_1 + 1) = param_2 != (longlong *)0x0;
  return param_1;
}



// FUNCTION 14360c1f0 FUN_14360c1f0 body=123 status=ok
// SIG undefined FUN_14360c1f0(void)

undefined4 * FUN_14360c1f0(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar1 = (ulonglong *)(param_2 + 2);
  puVar2 = (ulonglong *)(param_1 + 2);
  *param_1 = *param_2;
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
  return param_1;
}



// FUNCTION 14360c270 FUN_14360c270 body=127 status=ok
// SIG undefined FUN_14360c270(void)

void FUN_14360c270(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar1 = (ulonglong *)(param_1 + 2);
  *param_1 = *(undefined4 *)*param_2;
  puVar2 = (ulonglong *)param_2[1];
  if (puVar2 != puVar1) {
    uVar3 = *puVar2;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      if ((uVar3 & 1) != 0) {
        *puVar1 = uVar3 - 1;
        *puVar1 = *puVar2;
        return;
      }
      if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar1 = *puVar2;
  }
  return;
}



// FUNCTION 14360c2f0 FUN_14360c2f0 body=125 status=ok
// SIG undefined FUN_14360c2f0(void)

undefined4 * FUN_14360c2f0(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (ulonglong *)(param_2 + 4);
  puVar2 = (ulonglong *)(param_1 + 4);
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
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
  return param_1;
}



// FUNCTION 14360c370 FUN_14360c370 body=127 status=ok
// SIG undefined FUN_14360c370(void)

void FUN_14360c370(undefined4 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar2 = (undefined4 *)*param_2;
  puVar1 = (ulonglong *)(param_1 + 4);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *param_1 = *puVar2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  puVar3 = (ulonglong *)param_2[1];
  if (puVar3 != puVar1) {
    uVar4 = *puVar3;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      if ((uVar4 & 1) != 0) {
        *puVar1 = uVar4 - 1;
        *puVar1 = *puVar3;
        return;
      }
      if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar1 = *puVar3;
  }
  return;
}



// FUNCTION 14360c3f0 FUN_14360c3f0 body=112 status=ok
// SIG undefined FUN_14360c3f0(void)

ulonglong * FUN_14360c3f0(ulonglong *param_1,ulonglong *param_2)

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
  param_1[1] = param_2[1];
  return param_1;
}



// FUNCTION 14360c460 FUN_14360c460 body=125 status=ok
// SIG undefined FUN_14360c460(void)

void FUN_14360c460(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)*param_2;
  if (puVar1 != param_1) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_1;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_1 = uVar2 - 1;
      }
    }
    *param_1 = *puVar1;
  }
  param_1[1] = *(ulonglong *)param_2[1];
  return;
}



// FUNCTION 14360c4e0 FUN_14360c4e0 body=64 status=ok
// SIG undefined FUN_14360c4e0(void)

longlong * FUN_14360c4e0(longlong *param_1,longlong *param_2)

{
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 8))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 14360c520 FUN_14360c520 body=271 status=ok
// SIG undefined FUN_14360c520(void)

longlong FUN_14360c520(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  puVar2 = (ulonglong *)(param_2 + 0x18);
  puVar3 = (ulonglong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  if (puVar2 != puVar3) {
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar3;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar3 = uVar4 - 1;
      }
    }
    *puVar3 = *puVar2;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if (*(RefCountImpl **)(param_2 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x60));
  }
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 14360c630 FUN_14360c630 body=57 status=ok
// SIG undefined FUN_14360c630(void)

undefined8 * FUN_14360c630(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_1 = *param_2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_143590140(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14360c670 operator_bool body=47 status=ok
// SIG undefined operator_bool(void)

ulonglong Scaleform::GFx::AS3::PropRef::operator_bool(ulonglong *param_1)

{
  ulonglong in_RAX;
  
  if (((param_1[2] & 0x1f) != 0) &&
     (((*param_1 & 1) == 0 || ((*param_1 & 0xfffffffffffffffe) != 0)))) {
    in_RAX = 0;
    if ((((byte)*param_1 >> 1 & 1) == 0) || ((*param_1 & 0xfffffffffffffffd) != 0)) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14360c6a0 FUN_14360c6a0 body=96 status=ok
// SIG undefined FUN_14360c6a0(void)

undefined1 * FUN_14360c6a0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_143611230(param_3);
  if (cVar1 == '\0') {
    *param_2 = 1;
  }
  else {
    cVar1 = FUN_1434b29c0(*(undefined8 *)(param_3 + 8));
    *param_2 = 1;
    if (cVar1 != '\0') {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14360c700 FUN_14360c700 body=232 status=ok
// SIG undefined FUN_14360c700(void)

undefined1 * FUN_14360c700(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_res20;
  longlong local_18;
  ulonglong local_10;
  
  cVar3 = FUN_143611230(param_3);
  if ((cVar3 == '\0') || (cVar3 = FUN_1434b29c0(*(undefined8 *)(param_3 + 8)), cVar3 == '\0')) {
    *param_2 = 1;
    return param_2;
  }
  plVar2 = *(longlong **)(param_3 + 0x28);
  local_10 = (ulonglong)*(uint *)(plVar2 + 4);
  local_18 = *plVar2;
  lVar4 = FUN_1432c6260(&local_18,0x2f,0xffffffffffffffff);
  if (lVar4 < 0) {
    lVar4 = FUN_1432c6260(&local_18,0x2e,0xffffffffffffffff);
  }
  uVar5 = lVar4 + 1U;
  if (local_10 < lVar4 + 1U) {
    uVar5 = local_10;
  }
  local_res20 = FUN_143360a90(plVar2[1],local_18 + uVar5,local_10 - uVar5);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  FUN_1435de070(*(undefined8 *)(param_1 + 8),param_2,&local_res20);
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return param_2;
  }
  FUN_14335f920();
  return param_2;
}



// FUNCTION 14360c7f0 FUN_14360c7f0 body=340 status=ok
// SIG undefined FUN_14360c7f0(void)

undefined1 * FUN_14360c7f0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_res20 [8];
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  cVar2 = FUN_143611230(param_3);
  if ((cVar2 == '\0') || (cVar2 = FUN_1434b29c0(*(undefined8 *)(param_3 + 8)), cVar2 == '\0')) {
    *param_2 = 1;
  }
  else {
    local_28[0] = 0;
    local_20 = (int *)0x0;
    pcVar4 = (char *)FUN_1435abe90(param_3,local_res20,local_28,*(undefined8 *)(param_1 + 0x10));
    if (*pcVar4 == '\0') {
      *param_2 = 0;
    }
    else {
      FUN_1435dfb90(*(undefined8 *)(param_1 + 8),param_2,local_28);
    }
    uVar3 = local_28[0] & 0x1f;
    if (9 < uVar3) {
      if ((local_28[0] >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar1 = (int *)(local_18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
            return param_2;
          }
        }
        else if ((((uVar3 == 0xb) || (uVar3 == 0xc)) || (local_18 = local_10, uVar3 - 0xd < 2)) &&
                ((((local_18 & 1) == 0 && (local_18 != 0)) &&
                 ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
          FUN_1434ef880();
          return param_2;
        }
      }
      else {
        *local_20 = *local_20 + -1;
        if (*local_20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14360c950 FUN_14360c950 body=100 status=ok
// SIG undefined FUN_14360c950(void)

undefined8 FUN_14360c950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined1 local_res20 [8];
  
  if (((((byte)*param_4 & 0x1f) == 0xc) && (*(longlong *)(param_4 + 4) != 0)) &&
     (*(int *)(*(longlong *)(*(longlong *)(param_4 + 4) + 0x28) + 0x90) == 10)) {
    local_res20[0] = 0;
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x18);
    (**(code **)*puVar1)(puVar1,param_2,local_res20,1);
    return param_2;
  }
  FUN_1435dfb90(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
  return param_2;
}



// FUNCTION 14360c9c0 FUN_14360c9c0 body=269 status=ok
// SIG undefined FUN_14360c9c0(void)

undefined1 *
FUN_14360c9c0(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined4 local_res20 [2];
  undefined1 local_88 [8];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  local_res20[0] = 0;
  if (((((byte)*param_4 & 0x1f) == 0xc) && (*(longlong *)(param_4 + 4) != 0)) &&
     (*(int *)(*(longlong *)(*(longlong *)(param_4 + 4) + 0x28) + 0x90) == 10)) {
    *param_2 = 1;
    return param_2;
  }
  FUN_143354b50(local_68,param_3);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  local_80 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x218),local_78,local_70);
  *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + 1;
  pcVar3 = (char *)FUN_1435de070(*(undefined8 *)(param_1 + 0x18),local_res20,&local_80);
  if ((*pcVar3 == '\0') ||
     (pcVar3 = (char *)FUN_1435dfb90(*(undefined8 *)(param_1 + 0x18),local_88,param_4),
     *pcVar3 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_2 = uVar2;
  piVar1 = (int *)(local_80 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 14360cbc0 FUN_14360cbc0 body=89 status=ok
// SIG undefined FUN_14360cbc0(void)

undefined8 FUN_14360cbc0(undefined8 param_1,ulonglong param_2)

{
  FUN_14360b4a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14360cc20 FUN_14360cc20 body=89 status=ok
// SIG undefined FUN_14360cc20(void)

undefined8 FUN_14360cc20(undefined8 param_1,ulonglong param_2)

{
  FUN_14360b4a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14360cc80 FUN_14360cc80 body=89 status=ok
// SIG undefined FUN_14360cc80(void)

undefined8 FUN_14360cc80(undefined8 param_1,ulonglong param_2)

{
  FUN_14360b550();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x400);
  }
  return param_1;
}



// FUNCTION 14360cce0 FUN_14360cce0 body=136 status=ok
// SIG undefined FUN_14360cce0(void)

undefined8 * FUN_14360cce0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b4c488;
  if ((RefCountImpl *)param_1[0x30] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x30]);
  }
  if (param_1[0x2f] != 0) {
    FUN_1432de450();
  }
  FUN_14358fa80(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 14360cd70 FUN_14360cd70 body=89 status=ok
// SIG undefined FUN_14360cd70(void)

undefined8 FUN_14360cd70(undefined8 param_1,ulonglong param_2)

{
  FUN_1435e2680();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14360cdd0 FUN_14360cdd0 body=83 status=ok
// SIG undefined FUN_14360cdd0(void)

undefined8 * FUN_14360cdd0(undefined8 *param_1,byte param_2)

{
  param_1[9] = &PTR_FUN_145b0aa60;
  param_1[7] = &PTR_FUN_145b0aa60;
  *param_1 = &PTR_FUN_145b4b758;
  FUN_1435e0070(param_1);
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14360ce30 FUN_14360ce30 body=55 status=ok
// SIG undefined FUN_14360ce30(void)

undefined8 FUN_14360ce30(undefined8 param_1,byte param_2)

{
  FUN_1435e0070();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14360ce70 FUN_14360ce70 body=76 status=ok
// SIG undefined FUN_14360ce70(void)

undefined8 * FUN_14360ce70(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_145b4b758;
  param_1[7] = &PTR_FUN_145b0aa60;
  FUN_1435e0070();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14360cec0 FUN_14360cec0 body=89 status=ok
// SIG undefined FUN_14360cec0(void)

undefined8 FUN_14360cec0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435f6080();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 14360cf20 FUN_14360cf20 body=55 status=ok
// SIG undefined FUN_14360cf20(void)

undefined8 FUN_14360cf20(undefined8 param_1,byte param_2)

{
  FUN_1435e56c0();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14360cf60 FUN_14360cf60 body=65 status=ok
// SIG undefined FUN_14360cf60(void)

undefined8 * FUN_14360cf60(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_145b4d410;
  FUN_1435e0070();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14360cfb0 FUN_14360cfb0 body=114 status=ok
// SIG undefined FUN_14360cfb0(void)

RefCountImplCore * FUN_14360cfb0(RefCountImplCore *param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
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



// FUNCTION 14360d030 FUN_14360d030 body=43 status=ok
// SIG undefined FUN_14360d030(void)

undefined8 * FUN_14360d030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b4ac30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14360d060 FUN_14360d060 body=130 status=ok
// SIG undefined FUN_14360d060(void)

undefined8 * FUN_14360d060(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b4d040;
  param_1[3] = &PTR_LAB_145b4d3f8;
  if ((RefCountNTSImpl *)param_1[0x1b] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x1b]);
  }
  Scaleform::GFx::InteractiveObject::~InteractiveObject(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14360d0f0 FUN_14360d0f0 body=89 status=ok
// SIG undefined FUN_14360d0f0(void)

undefined8 FUN_14360d0f0(undefined8 param_1,ulonglong param_2)

{
  FUN_14360bc00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14360d150 FUN_14360d150 body=89 status=ok
// SIG undefined FUN_14360d150(void)

undefined8 FUN_14360d150(undefined8 param_1,ulonglong param_2)

{
  FUN_1435e7c50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14360d1b0 FUN_14360d1b0 body=116 status=ok
// SIG undefined FUN_14360d1b0(void)

undefined8 * FUN_14360d1b0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b4c470;
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14360d230 FUN_14360d230 body=159 status=ok
// SIG undefined FUN_14360d230(void)

undefined8 * FUN_14360d230(undefined8 *param_1,ulonglong param_2)

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
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14360d2d0 FUN_14360d2d0 body=89 status=ok
// SIG undefined FUN_14360d2d0(void)

undefined8 FUN_14360d2d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435e9fb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x948);
  }
  return param_1;
}



// FUNCTION 14360d330 FUN_14360d330 body=101 status=ok
// SIG undefined FUN_14360d330(void)

longlong FUN_14360d330(longlong param_1,ulonglong param_2)

{
  FUN_1434e5ef0(param_1 + 0x28);
  FUN_1435ab0c0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14360d3a0 FUN_14360d3a0 body=89 status=ok
// SIG undefined FUN_14360d3a0(void)

undefined8 FUN_14360d3a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435afe40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14360d400 FUN_14360d400 body=89 status=ok
// SIG undefined FUN_14360d400(void)

undefined8 FUN_14360d400(undefined8 param_1,ulonglong param_2)

{
  FUN_1435e1fe0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14360d460 FUN_14360d460 body=109 status=ok
// SIG undefined FUN_14360d460(void)

RefCountImplCore * FUN_14360d460(RefCountImplCore *param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
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



// FUNCTION 14360d4d0 FUN_14360d4d0 body=89 status=ok
// SIG undefined FUN_14360d4d0(void)

undefined8 FUN_14360d4d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435fdb20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 14360d530 FUN_14360d530 body=165 status=ok
// SIG undefined FUN_14360d530(void)

undefined8 * FUN_14360d530(undefined8 *param_1,ulonglong param_2)

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
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 14360d5e0 FUN_14360d5e0 body=89 status=ok
// SIG undefined FUN_14360d5e0(void)

undefined8 FUN_14360d5e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14360bf50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14360d640 FUN_14360d640 body=52 status=ok
// SIG undefined FUN_14360d640(void)

undefined8 FUN_14360d640(undefined8 param_1,ulonglong param_2)

{
  FUN_1435d14a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 14360d680 FUN_14360d680 body=89 status=ok
// SIG undefined FUN_14360d680(void)

undefined8 FUN_14360d680(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b4dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14360d6e0 FUN_14360d6e0 body=152 status=ok
// SIG undefined FUN_14360d6e0(void)

undefined8 * FUN_14360d6e0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b4aa50;
  uVar1 = param_1[0x1b];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x1b] = uVar1 - 1;
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



// FUNCTION 14360d780 FUN_14360d780 body=118 status=ok
// SIG undefined FUN_14360d780(void)

undefined8 * FUN_14360d780(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_ForEachChild_GC_145b4ad98;
  FUN_1435b7330(param_1[5] & 0xfffffffffffffffe,param_1);
  FUN_1435b38e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14360d800 FUN_14360d800 body=106 status=ok
// SIG undefined FUN_14360d800(void)

longlong FUN_14360d800(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  FUN_1434afb30(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14360d870 FUN_14360d870 body=89 status=ok
// SIG undefined FUN_14360d870(void)

undefined8 FUN_14360d870(undefined8 param_1,ulonglong param_2)

{
  FUN_1435bf930();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 14360d8d0 FUN_14360d8d0 body=89 status=ok
// SIG undefined FUN_14360d8d0(void)

undefined8 FUN_14360d8d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435baf20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 14360d930 FUN_14360d930 body=153 status=ok
// SIG undefined FUN_14360d930(void)

undefined8 * FUN_14360d930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ForEachChild_GC_145b4ad68;
  FUN_1434e5ef0(param_1 + 0xb);
  FUN_1434e5ef0(param_1 + 8);
  FUN_1434e8840(param_1 + 6);
  FUN_1434e8840(param_1 + 6);
  FUN_1435ab0c0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14360d9d0 FUN_14360d9d0 body=89 status=ok
// SIG undefined FUN_14360d9d0(void)

undefined8 FUN_14360d9d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435ba3b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14360da30 FUN_14360da30 body=119 status=ok
// SIG undefined FUN_14360da30(void)

uint * FUN_14360da30(uint *param_1,ulonglong param_2)

{
  int *piVar1;
  
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
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
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14360dab0 FUN_14360dab0 body=99 status=ok
// SIG undefined FUN_14360dab0(void)

undefined8 * FUN_14360dab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b4acf0;
  FUN_1435ab0c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14360db20 FUN_14360db20 body=89 status=ok
// SIG undefined FUN_14360db20(void)

undefined8 FUN_14360db20(undefined8 param_1,ulonglong param_2)

{
  FUN_1435ffe70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14360db80 FUN_14360db80 body=185 status=ok
// SIG undefined FUN_14360db80(void)

void FUN_14360db80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1434f0160(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x18) + 1);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (*(longlong *)(param_1 + 0x18) + -1) * 8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *param_2;
    *plVar1 = lVar3;
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
    }
  }
  lVar4 = 0x1505;
  local_res8 = *(longlong *)(param_1 + 0x18) + -1;
  local_10 = &local_res8;
  lVar3 = 8;
  do {
    lVar2 = lVar3 + -1;
    lVar3 = lVar3 + -1;
    lVar4 = lVar4 * 0x1003f + (ulonglong)*(byte *)(lVar2 + (longlong)param_2);
  } while (lVar3 != 0);
  local_18 = param_2;
  FUN_143608910(param_1,*(undefined8 *)(param_1 + 8),&local_18,lVar4);
  return;
}



// FUNCTION 14360dc40 FUN_14360dc40 body=169 status=ok
// SIG undefined FUN_14360dc40(void)

void FUN_14360dc40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1436138f0(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x18) + 1);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + (*(longlong *)(param_1 + 0x18) + -1) * 8);
  if (plVar2 != (longlong *)0x0) {
    lVar4 = *param_2;
    *plVar2 = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  lVar5 = 0x1505;
  local_res8 = *(longlong *)(param_1 + 0x18) + -1;
  local_10 = &local_res8;
  lVar4 = 8;
  do {
    lVar3 = lVar4 + -1;
    lVar4 = lVar4 + -1;
    lVar5 = lVar5 * 0x1003f + (ulonglong)*(byte *)(lVar3 + (longlong)param_2);
  } while (lVar4 != 0);
  local_18 = param_2;
  FUN_143608e60(param_1,*(undefined8 *)(param_1 + 8),&local_18,lVar5);
  return;
}



// FUNCTION 14360dcf0 FUN_14360dcf0 body=261 status=ok
// SIG undefined FUN_14360dcf0(void)

void FUN_14360dcf0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_res8;
  
  FUN_14360de00(param_1,&local_res8,param_2,param_3,param_4);
  uVar1 = *(uint *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  param_4 = uVar1 & param_4;
  plVar6 = (longlong *)(param_4 * 0x10 + lVar2);
  uVar3 = param_4;
  if (*plVar6 != -1) {
    do {
      uVar3 = uVar3 + 1 & (ulonglong)uVar1;
    } while (*(longlong *)(lVar2 + uVar3 * 0x10) != -1);
    plVar7 = (longlong *)(uVar3 * 0x10 + lVar2);
    uVar4 = (ulonglong)
            (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + *plVar6 * 0x10) + 0x1c) &
             uVar1 & 0xffffff);
    if (param_4 == uVar4) {
      *plVar7 = local_res8;
      plVar7[1] = plVar6[1];
      plVar6[1] = uVar3;
      return;
    }
    lVar5 = uVar4 * 0x10 + lVar2;
    uVar4 = *(ulonglong *)(lVar5 + 8);
    while (uVar4 != param_4) {
      lVar5 = *(longlong *)(lVar5 + 8) * 0x10 + lVar2;
      uVar4 = *(ulonglong *)(lVar5 + 8);
    }
    if (plVar7 != (longlong *)0x0) {
      lVar2 = plVar6[1];
      *plVar7 = *plVar6;
      plVar7[1] = lVar2;
    }
    *(ulonglong *)(lVar5 + 8) = uVar3;
  }
  *plVar6 = local_res8;
  plVar6[1] = -1;
  return;
}



// FUNCTION 14360de00 FUN_14360de00 body=209 status=ok
// SIG undefined FUN_14360de00(void)

ulonglong *
FUN_14360de00(longlong param_1,ulonglong *param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong local_res8;
  longlong local_28;
  longlong local_20;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  lVar1 = param_1 + 0x40;
  local_20 = ((*(longlong *)(param_1 + 0x10) - param_1) + -0x40 >> 3) << 6;
  local_res8 = uVar3;
  local_28 = lVar1;
  FUN_1435818e0(&local_28,&local_res8,uVar3 + 1);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_res8;
  *param_2 = uVar3;
  puVar4 = (undefined4 *)(uVar3 * 0x10 + *(longlong *)(param_1 + 0x20));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *param_3;
    lVar5 = *(longlong *)(param_3 + 2);
    *(longlong *)(puVar4 + 2) = lVar5;
    piVar2 = (int *)(lVar5 + 0x18);
    *piVar2 = *piVar2 + 1;
  }
  lVar5 = uVar3 * 0x20 + *(longlong *)(param_1 + 0x28);
  if (lVar5 != 0) {
    FUN_14360ab50(lVar5,param_4);
  }
  uVar3 = *param_2 >> 6;
  *(ulonglong *)(lVar1 + uVar3 * 8) =
       *(ulonglong *)(lVar1 + uVar3 * 8) | 1L << ((uint)*param_2 & 0x3f);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return param_2;
}



// FUNCTION 14360dee0 FUN_14360dee0 body=81 status=ok
// SIG undefined FUN_14360dee0(void)

void FUN_14360dee0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (9 < uVar1) {
    if ((*param_1 >> 9 & 1) != 0) {
      **(int **)(param_1 + 2) = **(int **)(param_1 + 2) + 1;
      return;
    }
    if (uVar1 == 10) {
      *(int *)(*(longlong *)(param_1 + 4) + 0x18) = *(int *)(*(longlong *)(param_1 + 4) + 0x18) + 1;
    }
    else if (10 < uVar1) {
      if (uVar1 < 0xd) {
        lVar2 = *(longlong *)(param_1 + 4);
      }
      else {
        if (0xe < uVar1) {
          return;
        }
        lVar2 = *(longlong *)(param_1 + 6);
      }
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
        return;
      }
    }
  }
  return;
}



// FUNCTION 14360df40 FUN_14360df40 body=114 status=ok
// SIG undefined FUN_14360df40(void)

void FUN_14360df40(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bStackX_f;
  undefined8 local_res10 [3];
  
  plVar2 = *(longlong **)(param_1 + 8);
  local_res10[0] = param_2;
  lVar3 = FUN_143609a10(plVar2,local_res10);
  if ((lVar3 < 0) || (*plVar2 + (lVar3 * 3 + 4) * 8 == 0)) {
    lVar3 = 8;
    lVar4 = 0x1505;
    do {
      pbVar1 = &bStackX_f + lVar3;
      lVar3 = lVar3 + -1;
      lVar4 = (ulonglong)*pbVar1 + lVar4 * 0x1003f;
    } while (lVar3 != 0);
    FUN_143605970(plVar2,plVar2[1],local_res10,lVar4);
  }
  return;
}



// FUNCTION 14360dfc0 FUN_14360dfc0 body=166 status=ok
// SIG undefined FUN_14360dfc0(void)

void FUN_14360dfc0(longlong *param_1,undefined1 *param_2,longlong param_3)

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
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_14360e021;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_14360e021;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_143612650(param_1,param_1,uVar4);
LAB_14360e021:
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



// FUNCTION 14360e070 FUN_14360e070 body=100 status=ok
// SIG undefined FUN_14360e070(void)

float * FUN_14360e070(float *param_1,float param_2,float param_3)

{
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_2 * param_1[2];
  param_1[3] = param_2 * param_1[3];
  param_1[4] = param_3 * param_1[4];
  param_1[5] = param_3 * param_1[5];
  param_1[6] = param_3 * param_1[6];
  param_1[7] = param_3 * param_1[7];
  return param_1;
}



// FUNCTION 14360e0e0 FUN_14360e0e0 body=40 status=ok
// SIG undefined FUN_14360e0e0(void)

uint FUN_14360e0e0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x90) - 0x18;
  if ((uVar1 < 0xc) &&
     (uVar1 = 0, (~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    return 1;
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 14360e110 FUN_14360e110 body=298 status=ok
// SIG undefined FUN_14360e110(void)

void FUN_14360e110(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  FUN_14360b1b0();
  if (((longlong *)*param_3 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_3, lVar1 == 0)) {
    return;
  }
  uVar5 = 0;
  uVar3 = uVar5;
  if ((ulonglong *)*param_1 != (ulonglong *)0x0) {
    uVar3 = *(ulonglong *)*param_1;
  }
  if (uVar3 < (ulonglong)(lVar1 * 5) >> 2) {
    FUN_14361b0a0(param_1,param_2);
  }
  lVar1 = *param_3;
  if (lVar1 == 0) {
    param_3 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      uVar3 = uVar5;
      if (param_3 == (longlong *)0x0) {
        return;
      }
      lVar1 = *param_3;
      if (lVar1 == 0) {
        return;
      }
      if (*(longlong *)(lVar1 + 8) < (longlong)uVar3) {
        return;
      }
      plVar4 = (longlong *)(lVar1 + (uVar3 + 1) * 0x18);
      FUN_143606e60(param_1,param_2,plVar4,*(undefined4 *)(*plVar4 + 0x1c));
      uVar2 = *(ulonglong *)(*param_3 + 8);
      uVar5 = uVar3;
    } while (((longlong)uVar2 < (longlong)uVar3) || (uVar5 = uVar3 + 1, uVar2 < uVar5));
    plVar4 = (longlong *)(*param_3 + (uVar5 + (uVar3 + 2) * 2) * 8);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 <= uVar2);
  } while( true );
}



// FUNCTION 14360e240 FUN_14360e240 body=82 status=ok
// SIG undefined FUN_14360e240(void)

void FUN_14360e240(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 8);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 8) = lVar2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_143590140(param_1 + 0x20,param_2 + 0x20);
  return;
}



// FUNCTION 14360e2a0 FUN_14360e2a0 body=208 status=ok
// SIG undefined FUN_14360e2a0(void)

ulonglong FUN_14360e2a0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar1 = (ulonglong)(param_2 + 0x40 >> 6) * 8;
  lVar2 = (ulonglong)param_2 * 8;
  lVar5 = (ulonglong)param_2 * 0x20;
  uVar6 = ((ulonglong)param_3 * 0x10 - lVar3) +
          (((lVar3 + 0x47U & 0xfffffffffffffff8) + lVar1 + 0xf + lVar2 & 0xfffffffffffffff0) + 0x1f
           + (ulonglong)param_2 * 0x10 & 0xffffffffffffffe0) + lVar5;
  uVar4 = lVar5 + ((ulonglong)param_2 * 0x10 + 0x1f +
                   (lVar2 + 0xf + lVar1 + (lVar3 * 2 + 0x47U & 0xfffffffffffffff8) &
                   0xfffffffffffffff0) & 0xffffffffffffffe0) + lVar3 * -2 +
          (ulonglong)param_3 * 0x10;
  if (uVar4 < uVar6) {
    uVar4 = uVar6;
  }
  return uVar4;
}



// FUNCTION 14360e370 FUN_14360e370 body=67 status=ok
// SIG undefined FUN_14360e370(void)

void FUN_14360e370(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361a390(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361a390(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e3c0 FUN_14360e3c0 body=67 status=ok
// SIG undefined FUN_14360e3c0(void)

void FUN_14360e3c0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361a680(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361a680(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e410 FUN_14360e410 body=67 status=ok
// SIG undefined FUN_14360e410(void)

void FUN_14360e410(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361a810(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361a810(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e460 FUN_14360e460 body=67 status=ok
// SIG undefined FUN_14360e460(void)

void FUN_14360e460(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361a980(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361a980(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e4b0 FUN_14360e4b0 body=67 status=ok
// SIG undefined FUN_14360e4b0(void)

void FUN_14360e4b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361aad0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361aad0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e500 FUN_14360e500 body=67 status=ok
// SIG undefined FUN_14360e500(void)

void FUN_14360e500(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361ac00(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361ac00(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e550 FUN_14360e550 body=67 status=ok
// SIG undefined FUN_14360e550(void)

void FUN_14360e550(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361ad50(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361ad50(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e5a0 FUN_14360e5a0 body=67 status=ok
// SIG undefined FUN_14360e5a0(void)

void FUN_14360e5a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361aef0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361aef0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e5f0 FUN_14360e5f0 body=67 status=ok
// SIG undefined FUN_14360e5f0(void)

void FUN_14360e5f0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361b200(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361b200(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e640 FUN_14360e640 body=67 status=ok
// SIG undefined FUN_14360e640(void)

void FUN_14360e640(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361b390(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361b390(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e690 FUN_14360e690 body=67 status=ok
// SIG undefined FUN_14360e690(void)

void FUN_14360e690(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361b4e0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361b4e0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e6e0 FUN_14360e6e0 body=67 status=ok
// SIG undefined FUN_14360e6e0(void)

void FUN_14360e6e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361b6a0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361b6a0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e730 FUN_14360e730 body=67 status=ok
// SIG undefined FUN_14360e730(void)

void FUN_14360e730(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361b810(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361b810(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e780 FUN_14360e780 body=67 status=ok
// SIG undefined FUN_14360e780(void)

void FUN_14360e780(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361b9f0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361b9f0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e7d0 FUN_14360e7d0 body=67 status=ok
// SIG undefined FUN_14360e7d0(void)

void FUN_14360e7d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361bb40(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361bb40(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e820 FUN_14360e820 body=67 status=ok
// SIG undefined FUN_14360e820(void)

void FUN_14360e820(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361bca0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361bca0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e870 FUN_14360e870 body=67 status=ok
// SIG undefined FUN_14360e870(void)

void FUN_14360e870(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14361be30(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14361be30(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14360e8c0 FUN_14360e8c0 body=166 status=ok
// SIG undefined FUN_14360e8c0(void)

void FUN_14360e8c0(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar3 = *param_2 & 0x1f;
  if (uVar3 != 0) {
    if (uVar3 == 0xc) {
      bVar4 = *(longlong *)(param_2 + 4) == 0;
    }
    else {
      if (uVar3 != 10) {
        return;
      }
      bVar4 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
    }
    if (!bVar4) {
      return;
    }
  }
  if (uVar3 == 0xc) {
    bVar4 = *(longlong *)(param_2 + 4) == 0;
  }
  else if (uVar3 == 10) {
    bVar4 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
  }
  else {
    bVar4 = false;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3f2 - (uint)bVar4,param_1);
  FUN_1435ccf60(param_1,uVar2,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14360e970 FUN_14360e970 body=119 status=ok
// SIG undefined FUN_14360e970(void)

void FUN_14360e970(undefined8 *param_1)

{
  undefined *puVar1;
  code *local_18;
  undefined4 uStack_10;
  
  puVar1 = (undefined *)*param_1;
  if (puVar1 != &DAT_1467d9aa0) {
    local_18 = FUN_14360eaa0;
    uStack_10 = 0;
    FUN_143581310(puVar1,&local_18);
    *(undefined4 *)(puVar1 + 8) = 0;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = &DAT_1467d9aa0;
  }
  return;
}



// FUNCTION 14360e9f0 CleanDelayedReleaseProxies body=175 status=ok
// SIG undefined CleanDelayedReleaseProxies(void)

void Scaleform::GFx::AS3::RefCountCollector<328>::CleanDelayedReleaseProxies(longlong param_1)

{
  RefCountImpl *this;
  RefCountImpl *this_00;
  
  if (*(RefCountImpl **)(param_1 + 0x98) != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x98));
  }
  this_00 = *(RefCountImpl **)(param_1 + 0x98);
  if (this_00 != (RefCountImpl *)0x0) {
    RefCountImpl::Release(this_00);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (this_00 != (RefCountImpl *)0x0) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
    while( true ) {
      if (*(RefCountImpl **)(this_00 + 0x20) != (RefCountImpl *)0x0) {
        RefCountImpl::AddRef(*(RefCountImpl **)(this_00 + 0x20));
      }
      this = *(RefCountImpl **)(this_00 + 0x20);
      if (this != (RefCountImpl *)0x0) {
        RefCountImpl::Release(this);
      }
      *(undefined8 *)(this_00 + 0x20) = 0;
      if (this != (RefCountImpl *)0x0) {
        RefCountImpl::AddRef(this);
      }
      if (this_00 != (RefCountImpl *)0x0) {
        RefCountImpl::Release(this_00);
      }
      if (this == (RefCountImpl *)0x0) break;
      RefCountImpl::Release(this);
      this_00 = this;
    }
  }
  return;
}



// FUNCTION 14360eaa0 FUN_14360eaa0 body=202 status=ok
// SIG undefined FUN_14360eaa0(void)

void FUN_14360eaa0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  
  piVar1 = (int *)(*(longlong *)(param_2 * 0x10 + *(longlong *)(param_1 + 0x20) + 8) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  puVar2 = (uint *)(param_2 * 0x20 + *(longlong *)(param_1 + 0x28));
  if (9 < ((byte)*puVar2 & 0x1f)) {
    if ((*puVar2 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar2);
    }
    else {
      piVar1 = *(int **)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar2 = *puVar2 & 0xfffffde0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
    }
  }
  *(ulonglong *)(*param_3 + (param_2 >> 6) * 8) =
       *(ulonglong *)(*param_3 + (param_2 >> 6) * 8) & ~(1L << ((uint)param_2 & 0x3f));
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = (uint)param_2;
  }
  return;
}



// FUNCTION 14360eb70 FUN_14360eb70 body=81 status=ok
// SIG undefined FUN_14360eb70(void)

void FUN_14360eb70(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[3] = uVar2 - 1;
    }
  }
  piVar1 = (int *)(param_1[2] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}



// FUNCTION 14360ebd0 FUN_14360ebd0 body=203 status=ok
// SIG undefined FUN_14360ebd0(void)

void FUN_14360ebd0(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x18) = uVar1 - 1;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (9 < ((byte)*(uint *)(param_1 + 0x38) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x38) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x38);
    }
    else {
      piVar2 = *(int **)(param_1 + 0x40);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffde0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffe0;
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 14360eca0 FUN_14360eca0 body=256 status=ok
// SIG undefined FUN_14360eca0(void)

void FUN_14360eca0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x10) + -1) * 8);
    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 8) != 0) {
      uVar2 = *(ulonglong *)(param_1 + 8) >> 6;
    }
    do {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (*(ulonglong *)(param_1 + 0x10) < uVar2) {
        uVar1 = 0x40;
      }
      else {
        uVar1 = 0;
        if (*(ulonglong *)(param_1 + 0x10) == uVar2) {
          uVar1 = (ulonglong)(*(uint *)(param_1 + 8) & 0x3f);
        }
      }
      lVar3 = *plVar4 + -0xa0 + uVar1 * 0xa0;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        FUN_1435bcd30(lVar3);
        lVar3 = lVar3 + -0xa0;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar4);
      plVar4 = plVar4 + -1;
    } while (*(longlong *)(param_1 + 0x10) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14360eda0 FUN_14360eda0 body=1504 status=ok
// SIG undefined FUN_14360eda0(void)

undefined8 FUN_14360eda0(longlong *param_1,int param_2,char param_3,undefined8 *param_4)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8;
  int local_58;
  longlong *local_40;
  
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xef;
  bVar2 = *(byte *)((longlong)param_1 + 0x94);
  if ((bVar2 & 6) != 0) {
    if (param_4 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)param_4 + 0x14) = 0;
      *(undefined8 *)((longlong)param_4 + 0xc) = 0;
      *(undefined4 *)(param_4 + 1) = 0;
    }
    return 0;
  }
  uVar12 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    local_40 = (longlong *)*param_4;
  }
  local_res8 = 0;
  *(byte *)((longlong)param_1 + 0x94) = bVar2 | 4;
  local_58 = 0;
  plVar1 = param_1 + 0xb;
  if ((bVar2 & 0x20) != 0) {
    param_2 = 2;
  }
  *(int *)(param_1 + 0x12) = param_2;
  cVar7 = '\0';
  if ((bVar2 & 0x20) == 0) {
    cVar7 = param_3;
  }
LAB_14360ee60:
  do {
    do {
      iVar13 = 0;
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 1;
      param_1[0x10] = (longlong)plVar1;
      param_1[0xe] = (longlong)plVar1;
      param_1[0xd] = (longlong)plVar1;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1000000;
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 8;
      uVar11 = (ulonglong)(param_2 + 1U);
      plVar6 = param_1;
      do {
        plVar10 = plVar6 + 2;
        plVar4 = (longlong *)*plVar10;
        while (plVar4 != (longlong *)0x0) {
          lVar5 = plVar4[2];
          *plVar10 = lVar5;
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x18) = 0;
          }
          *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0x7fffffff;
          *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
          if ((*(uint *)(plVar4 + 1) & 0x70000000) == 0x30000000) {
            if (*(uint *)(param_1 + 0x12) < (*(uint *)(plVar4 + 4) & 3)) {
              *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0x8fffffff;
              plVar9 = param_1 + ((ulonglong)(*(uint *)(plVar4 + 4) & 3) + 1) * 2;
              plVar4[2] = *plVar9;
              plVar4[3] = 0;
              if (*plVar9 != 0) {
                *(longlong **)(*plVar9 + 0x18) = plVar4;
              }
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              *plVar9 = (longlong)plVar4;
              *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0xfffffff | 0xb0000000;
            }
            else {
              FUN_143515f50(param_1,plVar4);
              while (plVar4 != plVar1) {
                if (*(uint *)(param_1 + 0x12) < (*(uint *)(plVar4 + 4) & 3)) {
                  plVar9 = (longlong *)plVar4[2];
                  if ((*(byte *)((longlong)plVar4 + 0xb) & 1) != 0) {
                    if ((longlong *)param_1[0x10] == plVar4) {
                      param_1[0x10] = plVar4[3];
                    }
                    *(longlong *)(plVar4[3] + 0x10) = plVar4[2];
                    *(longlong *)(plVar4[2] + 0x18) = plVar4[3];
                    *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0xfeffffff;
                  }
                  uVar3 = *(uint *)(plVar4 + 1);
                  if ((int)uVar3 < 0) {
                    *(uint *)(plVar4 + 1) = uVar3 & 0xbfffffff | 0x30000000;
                    plVar4 = plVar9;
                  }
                  else {
                    *(uint *)(plVar4 + 1) = uVar3 & 0x8fffffff;
                    plVar8 = param_1 + ((ulonglong)(*(uint *)(plVar4 + 4) & 3) + 1) * 2;
                    plVar4[2] = *plVar8;
                    plVar4[3] = 0;
                    if (*plVar8 != 0) {
                      *(longlong **)(*plVar8 + 0x18) = plVar4;
                    }
                    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                    *plVar8 = (longlong)plVar4;
                    *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0xfffffff | 0xb0000000;
                    plVar4 = plVar9;
                  }
                }
                else {
                  if ((*(uint *)(plVar4 + 1) & 0x70000000) != 0x10000000) {
                    *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0x9fffffff | 0x10000000;
                    (**(code **)*plVar4)(plVar4,param_1,&LAB_143581a10);
                  }
                  plVar4 = (longlong *)plVar4[2];
                }
              }
            }
          }
          iVar13 = iVar13 + 1;
          plVar4 = (longlong *)*plVar10;
        }
        uVar11 = uVar11 - 1;
        plVar6 = plVar10;
      } while (uVar11 != 0);
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xf7;
      if (iVar13 == 0) goto LAB_14360f2d3;
      local_res8 = local_res8 + iVar13;
      for (plVar6 = (longlong *)param_1[0xd]; plVar6 != plVar1; plVar6 = (longlong *)plVar6[2]) {
        uVar3 = *(uint *)(plVar6 + 1);
        local_58 = local_58 + 1;
        if ((uVar3 & 0x3fffff) == 0) {
          *(uint *)(plVar6 + 1) = uVar3 & 0xafffffff | 0x20000000;
        }
        else {
          *(uint *)(plVar6 + 1) = uVar3 & 0x8fffffff;
          param_1[0x10] = (longlong)plVar6;
          (**(code **)*plVar6)(plVar6,param_1,&LAB_143613b00);
        }
      }
      param_1[0x10] = (longlong)plVar1;
      plVar6 = (longlong *)param_1[0xd];
      while (plVar4 = plVar6, plVar4 != plVar1) {
        plVar6 = (longlong *)plVar4[2];
        if ((*(uint *)(plVar4 + 1) & 0x70000000) == 0x20000000) {
          if ((*(uint *)(plVar4 + 1) >> 0x1b & 1) == 0) {
            *(longlong **)(plVar4[3] + 0x10) = plVar6;
            *(longlong *)(plVar4[2] + 0x18) = plVar4[3];
            *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0xfeffffff;
            FUN_143610a70(param_1,plVar4);
            (**(code **)*plVar4)(plVar4,param_1,&LAB_143516090);
            (**(code **)(*plVar4 + 0x18))(plVar4);
            uVar12 = uVar12 + 1;
          }
        }
        else {
          if ((cVar7 != '\0') && (uVar3 = *(uint *)(plVar4 + 4), (uVar3 & 3) < 2)) {
            plVar4[4] = plVar4[4] & 0xfffffffffffffffc;
            plVar4[4] = plVar4[4] | (ulonglong)((uVar3 & 3) + 1 & 3);
          }
          *(longlong **)(plVar4[3] + 0x10) = plVar6;
          *(longlong *)(plVar4[2] + 0x18) = plVar4[3];
          *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0xfeffffff;
          uVar3 = *(uint *)(plVar4 + 1);
          if ((uVar3 >> 0x17 & 1) == 0) {
            if ((((uVar3 & 0x70000000) == 0x30000000) && (-1 < (int)uVar3)) &&
               (*(uint *)(plVar4 + 1) = uVar3 & 0x8fffffff,
               (*(byte *)((longlong)param_1 + 0x94) & 8) == 0)) {
              plVar10 = param_1 + ((ulonglong)(*(uint *)(plVar4 + 4) & 3) + 1) * 2;
              plVar4[2] = *plVar10;
              plVar4[3] = 0;
              if (*plVar10 != 0) {
                *(longlong **)(*plVar10 + 0x18) = plVar4;
              }
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              *plVar10 = (longlong)plVar4;
              *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) & 0xfffffff | 0xb0000000;
            }
          }
          else {
            *(uint *)(plVar4 + 1) = uVar3 & 0xff7fffff;
            FUN_1434ef880(plVar4);
          }
        }
      }
      plVar6 = (longlong *)param_1[0xd];
      while (plVar6 != plVar1) {
        plVar4 = (longlong *)plVar6[2];
        FUN_143610a70(param_1,plVar6);
        (**(code **)*plVar6)(plVar6,param_1,&LAB_143516090);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        uVar12 = uVar12 + 1;
        plVar6 = plVar4;
      }
      param_1[0x10] = (longlong)plVar1;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfeffffff;
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfe;
      cVar7 = '\0';
    } while (param_1[2] != 0);
    if (param_2 == 2) {
      if (param_1[6] != 0) goto LAB_14360ee60;
    }
    else if (param_2 == 0) goto LAB_14360f2d3;
    if (param_1[4] == 0) {
LAB_14360f2d3:
      if (param_4 != (undefined8 *)0x0) {
        *(uint *)(param_4 + 1) = local_res8;
        *(uint *)((longlong)param_4 + 0x14) = uVar12;
        if (local_res8 < uVar12) {
          uVar12 = local_res8;
        }
        *(uint *)((longlong)param_4 + 0xc) = uVar12;
        *(int *)(param_4 + 2) = local_58;
        *(uint *)(param_4 + 3) = param_2 + 1U;
        if (local_40 != (longlong *)0x0) {
          (**(code **)(*local_40 + 0x18))(local_40,local_res8);
          (**(code **)(*local_40 + 0x20))(local_40,*(undefined4 *)((longlong)param_4 + 0xc));
        }
      }
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xdb;
      Scaleform::GFx::AS3::RefCountCollector<328>::CleanDelayedReleaseProxies(param_1,local_40);
      return 1;
    }
  } while( true );
}



// FUNCTION 14360f380 FUN_14360f380 body=212 status=ok
// SIG undefined FUN_14360f380(void)

undefined1 * FUN_14360f380(uint *param_1,undefined1 *param_2,double *param_3)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0) {
    dVar2 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        *param_3 = (double)(int)param_1[4];
        *param_2 = 1;
        return param_2;
      }
      if (uVar1 != 3) {
        if (uVar1 != 4) {
          FUN_1435921c0();
          return param_2;
        }
        *param_3 = *(double *)(param_1 + 4);
        *param_2 = 1;
        return param_2;
      }
      *param_3 = (double)param_1[4];
      *param_2 = 1;
      return param_2;
    }
    if ((char)param_1[4] == '\0') {
      dVar2 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      dVar2 = 1.0;
    }
  }
  *param_3 = dVar2;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14360f460 FUN_14360f460 body=237 status=ok
// SIG undefined FUN_14360f460(void)

int FUN_14360f460(double param_1)

{
  char cVar1;
  double dVar2;
  
  if (((ulonglong)param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    cVar1 = FUN_143364c00();
    if (cVar1 == '\0') {
      cVar1 = FUN_143364be0(param_1);
      if (cVar1 == '\0') {
        dVar2 = param_1;
        if (param_1 < 0.0) {
          dVar2 = -param_1;
        }
        dVar2 = _guard_xfg_dispatch_icall_nop(dVar2);
        if (4294967295.0 < dVar2) {
          dVar2 = _guard_xfg_dispatch_icall_nop(dVar2,4294967296.0);
        }
        if (2147483648.0 <= dVar2) {
          if (param_1 < 0.0) {
            return -0x80000000 - (int)(dVar2 - 2147483648.0);
          }
          return (int)(dVar2 - 2147483648.0) + -0x80000000;
        }
        if (param_1 < 0.0) {
          dVar2 = -dVar2;
        }
        return (int)dVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14360f550 FUN_14360f550 body=158 status=ok
// SIG undefined FUN_14360f550(void)

void FUN_14360f550(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + -0x20 + param_2 * 0x50);
    do {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3[1]);
      if (*plVar3 != 0) {
        lVar2 = *(longlong *)(*plVar3 + 8) + 1;
        lVar1 = 0;
        do {
          if (*(longlong *)(*plVar3 + 0x10 + lVar1) != -2) {
            *(undefined8 *)(*plVar3 + 0x10 + lVar1) = 0xfffffffffffffffe;
          }
          lVar1 = lVar1 + 0x20;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar3);
        *plVar3 = 0;
      }
      plVar3 = plVar3 + -10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14360f5f0 FUN_14360f5f0 body=247 status=ok
// SIG undefined FUN_14360f5f0(void)

void FUN_14360f5f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (uint *)(param_2 * 0x20 + -0x20 + param_1);
    do {
      uVar2 = *puVar4 & 0x1f;
      if (9 < uVar2) {
        if ((*puVar4 >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            piVar1 = (int *)(*(longlong *)(puVar4 + 4) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            uVar3 = *(ulonglong *)(puVar4 + 4);
            if ((uVar3 & 1) == 0) {
LAB_14360f69f:
              if ((uVar3 != 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *(ulonglong *)(puVar4 + 4) = uVar3 - 1;
            }
          }
          else if (uVar2 - 0xd < 2) {
            uVar3 = *(ulonglong *)(puVar4 + 6);
            if ((uVar3 & 1) == 0) goto LAB_14360f69f;
            *(ulonglong *)(puVar4 + 6) = uVar3 - 1;
          }
        }
        else {
          piVar1 = *(int **)(puVar4 + 2);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar4 = *puVar4 & 0xfffffde0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
        }
      }
      puVar4 = puVar4 + -8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14360f6f0 FUN_14360f6f0 body=105 status=ok
// SIG undefined FUN_14360f6f0(void)

void FUN_14360f6f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143598280(lVar1 + 0x260,3,param_2,param_3);
  FUN_143612170(lVar1 + 0x70,plVar2 + 4);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14360f760 FUN_14360f760 body=241 status=ok
// SIG undefined FUN_14360f760(void)

ulonglong FUN_14360f760(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte local_res8 [32];
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 != 0) {
    lVar4 = 8;
    uVar2 = 0x1505;
    do {
      lVar1 = lVar4 + -1;
      lVar4 = lVar4 + -1;
      uVar2 = (ulonglong)local_res8[lVar1] + uVar2 * 0x1003f;
    } while (lVar4 != 0);
    uVar2 = *(ulonglong *)(lVar6 + 8) & uVar2;
    puVar3 = (ulonglong *)(lVar6 + 0x10 + uVar2 * 0x20);
    if ((*puVar3 != 0xfffffffffffffffe) && (uVar5 = uVar2, puVar3[1] == uVar2)) {
      while ((puVar3[1] != uVar2 || (puVar3[2] != param_2))) {
        uVar5 = *puVar3;
        if (uVar5 == 0xffffffffffffffff) goto LAB_14360f81d;
        puVar3 = (ulonglong *)(lVar6 + 0x10 + uVar5 * 0x20);
      }
      if ((-1 < (longlong)uVar5) && (lVar6 = (uVar5 + 1) * 0x20 + lVar6, lVar6 != 0)) {
        uVar2 = *(ulonglong *)(lVar6 + 8);
        goto LAB_14360f820;
      }
    }
  }
LAB_14360f81d:
  uVar2 = 0xffffffff;
LAB_14360f820:
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14360f860 FUN_14360f860 body=241 status=ok
// SIG undefined FUN_14360f860(void)

ulonglong FUN_14360f860(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte local_res8 [32];
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  lVar6 = *(longlong *)(param_1 + 0x90);
  if (lVar6 != 0) {
    lVar4 = 8;
    uVar2 = 0x1505;
    do {
      lVar1 = lVar4 + -1;
      lVar4 = lVar4 + -1;
      uVar2 = (ulonglong)local_res8[lVar1] + uVar2 * 0x1003f;
    } while (lVar4 != 0);
    uVar2 = *(ulonglong *)(lVar6 + 8) & uVar2;
    puVar3 = (ulonglong *)(lVar6 + 0x10 + uVar2 * 0x20);
    if ((*puVar3 != 0xfffffffffffffffe) && (uVar5 = uVar2, puVar3[1] == uVar2)) {
      while ((puVar3[1] != uVar2 || (puVar3[2] != param_2))) {
        uVar5 = *puVar3;
        if (uVar5 == 0xffffffffffffffff) goto LAB_14360f91d;
        puVar3 = (ulonglong *)(lVar6 + 0x10 + uVar5 * 0x20);
      }
      if ((-1 < (longlong)uVar5) && (lVar6 = (uVar5 + 1) * 0x20 + lVar6, lVar6 != 0)) {
        uVar2 = *(ulonglong *)(lVar6 + 8);
        goto LAB_14360f920;
      }
    }
  }
LAB_14360f91d:
  uVar2 = 0xffffffff;
LAB_14360f920:
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14360f960 FUN_14360f960 body=303 status=ok
// SIG undefined FUN_14360f960(void)

longlong FUN_14360f960(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  if ((longlong)*param_3 == 0) {
    puVar5 = (undefined4 *)(*(longlong *)(param_2 + 0xa0) + 0x160);
  }
  else {
    puVar5 = (undefined4 *)
             (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x118) + (longlong)*param_3 * 0x18);
  }
  lVar4 = *(longlong *)(param_1 + 0x98);
  uVar2 = *puVar5;
  local_res8 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                             *(undefined8 *)(puVar5 + 2),*(undefined8 *)(puVar5 + 4));
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435cc220(lVar4,&local_res10,uVar2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar3 = FUN_1435ba8a0(param_2,&local_res20,(longlong)param_3[2]);
  FUN_1435b4530(param_1 + 0x28,&local_res18,uVar3,local_res10);
  if ((longlong)local_res18 < 0) {
    lVar4 = 0;
  }
  else if (local_res18 < *(ulonglong *)(param_1 + 0x28)) {
    lVar4 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),local_res18);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x38) + 0x10 +
            ((local_res18 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40;
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (((local_res10 != 0) && ((local_res10 & 1) == 0)) &&
     ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
    FUN_1434ef880(local_res10);
  }
  return lVar4;
}



// FUNCTION 14360fa90 FUN_14360fa90 body=191 status=ok
// SIG undefined FUN_14360fa90(void)

longlong FUN_14360fa90(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  uVar3 = *param_2;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x40);
  lVar8 = 0;
  lVar5 = lVar8;
  if (lVar7 != 0) {
    uVar4 = *(ulonglong *)(lVar7 + 8);
    uVar10 = *(uint *)(uVar3 + 0x1c) & uVar4;
    lVar2 = uVar10 * 3 + 2;
    puVar9 = (ulonglong *)(lVar7 + lVar2 * 8);
    if ((*(longlong *)(lVar7 + lVar2 * 8) != -2) &&
       (uVar6 = uVar10, (*(uint *)(puVar9[1] + 0x1c) & uVar4) == uVar10)) {
      while (((*(uint *)(puVar9[1] + 0x1c) & uVar4) != uVar10 || (puVar9[1] != uVar3))) {
        uVar6 = *puVar9;
        if (uVar6 == 0xffffffffffffffff) goto LAB_14360fb22;
        puVar9 = (ulonglong *)(lVar7 + uVar6 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar6) {
        lVar5 = lVar7 + (uVar6 + 1) * 0x18;
      }
    }
  }
LAB_14360fb22:
  lVar7 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar7 = lVar8;
  }
  if (uVar3 != 0) {
    piVar1 = (int *)(uVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(uVar3);
    }
  }
  return lVar7;
}



// FUNCTION 14360fb50 FUN_14360fb50 body=224 status=ok
// SIG undefined FUN_14360fb50(void)

void FUN_14360fb50(longlong *param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    param_1 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 5;
    } while (uVar5 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar5)) {
        return;
      }
      lVar1 = uVar5 * 5 + 6;
      if (*(longlong *)(lVar2 + lVar1 * 8) != 0) {
        (*param_3)(param_2,lVar2 + lVar1 * 8);
      }
      uVar3 = *(ulonglong *)(*param_1 + 8);
    } while (((longlong)uVar3 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar3 < uVar5));
    plVar4 = (longlong *)(*param_1 + (uVar5 * 5 + 2) * 8);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 5;
    } while (uVar5 <= uVar3);
  } while( true );
}



// FUNCTION 14360fc30 FUN_14360fc30 body=141 status=ok
// SIG undefined FUN_14360fc30(void)

void FUN_14360fc30(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(lVar1 + 0x28 + lVar3) != 0) {
        (*param_3)(param_2);
      }
      if (*(longlong *)(lVar1 + 0x18 + lVar3) != 0) {
        (*param_3)(param_2);
      }
      if (*(longlong *)(lVar1 + 0x20 + lVar3) != 0) {
        (*param_3)(param_2);
      }
      lVar3 = lVar3 + 0x40;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14360fcc0 FUN_14360fcc0 body=304 status=ok
// SIG undefined FUN_14360fcc0(void)

void FUN_14360fcc0(longlong param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x50) + uVar6 * 4);
      uVar5 = (ulonglong)(uVar3 >> 3);
      uVar3 = uVar3 & 7;
      if (uVar3 == 1) {
        puVar4 = (uint *)(uVar5 * 0x20 + *(longlong *)(param_3 + 0xb0));
        uVar3 = *puVar4 & 0x1f;
        if (10 < uVar3) {
          if (uVar3 < 0xd) {
            puVar4 = puVar4 + 4;
          }
          else {
            if (0xe < uVar3) goto LAB_14360fdc7;
            puVar4 = puVar4 + 6;
          }
LAB_14360fdbc:
          if (*(longlong *)puVar4 != 0) {
            (*param_4)(param_2);
          }
        }
      }
      else if (uVar3 == 2) {
        uVar3 = *(uint *)(uVar5 + param_3) & 0x1f;
        if (10 < uVar3) {
          if (uVar3 < 0xd) {
            puVar4 = (uint *)(param_3 + 0x10 + uVar5);
          }
          else {
            if (0xe < uVar3) goto LAB_14360fdc7;
            puVar4 = (uint *)(param_3 + 0x18 + uVar5);
          }
          goto LAB_14360fdbc;
        }
      }
      else if (uVar3 == 3) {
        uVar2 = *(ulonglong *)(uVar5 + param_3);
        if (uVar2 != 0) {
          local_res8 = uVar2 & 0xfffffffffffffffd;
          (*param_4)(param_2,&local_res8);
          *(ulonglong *)(uVar5 + param_3) = (uint)uVar2 & 2 | local_res8;
        }
      }
      else if (uVar3 == 4) {
        puVar4 = (uint *)(uVar5 + param_3);
        goto LAB_14360fdbc;
      }
LAB_14360fdc7:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return;
}



// FUNCTION 14360fe00 FUN_14360fe00 body=95 status=ok
// SIG undefined FUN_14360fe00(void)

void FUN_14360fe00(longlong param_1)

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



// FUNCTION 14360fe60 FUN_14360fe60 body=213 status=ok
// SIG undefined FUN_14360fe60(void)

undefined8 FUN_14360fe60(longlong *param_1,ulonglong param_2,int param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte bStack_19;
  ulonglong local_18;
  ulonglong local_10;
  
  lVar2 = *param_1;
  puVar8 = (undefined8 *)0x0;
  local_18 = param_2;
  local_10 = (longlong)param_3;
  puVar6 = puVar8;
  if (lVar2 != 0) {
    uVar3 = 0x1505;
    lVar9 = 0x10;
    do {
      pbVar1 = &bStack_19 + lVar9;
      lVar9 = lVar9 + -1;
      uVar3 = (ulonglong)*pbVar1 + uVar3 * 0x1003f;
    } while (lVar9 != 0);
    uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
    lVar9 = uVar3 * 5 + 2;
    puVar5 = (ulonglong *)(lVar2 + lVar9 * 8);
    if ((*(longlong *)(lVar2 + lVar9 * 8) != -2) && (uVar7 = uVar3, puVar5[1] == uVar3)) {
      while ((puVar5[1] != uVar3 || ((puVar5[2] != param_2 || (puVar5[3] != (longlong)param_3))))) {
        uVar7 = *puVar5;
        if (uVar7 == 0xffffffffffffffff) goto LAB_14360ff13;
        puVar5 = (ulonglong *)(lVar2 + uVar7 * 0x28 + 0x10);
      }
      if (-1 < (longlong)uVar7) {
        puVar6 = (undefined8 *)(lVar2 + uVar7 * 0x28 + 0x20);
      }
    }
  }
LAB_14360ff13:
  puVar4 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar4 = puVar8;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar4;
}



// FUNCTION 14360ff40 FUN_14360ff40 body=194 status=ok
// SIG undefined FUN_14360ff40(void)

ulonglong FUN_14360ff40(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_res18 [2];
  
  FUN_1435ba8a0(param_2,local_res18,(longlong)param_3[2]);
  if (((byte)param_3[3] & 3) == 2) {
    lVar5 = FUN_1435ba7c0(param_2,(longlong)*param_3);
    uVar6 = 0;
    uVar2 = *(ulonglong *)(lVar5 + 0x30);
    uVar4 = uVar6;
    do {
      if (uVar2 <= uVar6) break;
      uVar4 = FUN_143610010(param_1,local_res18,
                            *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar4 == 0);
  }
  else {
    uVar3 = FUN_1435ba5d0(param_2,param_3);
    uVar4 = FUN_143610010(param_1,local_res18,uVar3);
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar4;
}



// FUNCTION 143610010 FUN_143610010 body=312 status=ok
// SIG undefined FUN_143610010(void)

longlong FUN_143610010(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar3 = *param_2;
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  lVar8 = *param_1;
  lVar7 = 0;
  lVar5 = lVar7;
  if (lVar8 != 0) {
    uVar10 = (*(longlong *)(param_3 + 0x28) << 0x3c) >> 0x3c;
    uVar9 = ((ulonglong)
             ((*(uint *)(*(longlong *)(param_3 + 0x38) + 0x1c) & 0xffffff) << 2 ^
             *(uint *)(uVar3 + 0x1c) & 0xffffff) ^ uVar10 & 0xffffffff) & *(ulonglong *)(lVar8 + 8);
    lVar2 = uVar9 * 5 + 2;
    puVar4 = (ulonglong *)(lVar8 + lVar2 * 8);
    if ((*(longlong *)(lVar8 + lVar2 * 8) != -2) && (uVar6 = uVar9, puVar4[1] == uVar9)) {
      while ((puVar4[1] != uVar9 ||
             (((puVar4[2] != uVar3 ||
               (*(longlong *)(puVar4[3] + 0x38) != *(longlong *)(param_3 + 0x38))) ||
              ((*(longlong *)(puVar4[3] + 0x28) << 0x3c) >> 0x3c != uVar10))))) {
        uVar6 = *puVar4;
        if (uVar6 == 0xffffffffffffffff) goto LAB_1436100f7;
        puVar4 = (ulonglong *)(lVar8 + uVar6 * 0x28 + 0x10);
      }
      if (-1 < (longlong)uVar6) {
        lVar5 = lVar8 + uVar6 * 0x28 + 0x20;
      }
    }
  }
LAB_1436100f7:
  lVar8 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar8 = lVar7;
  }
  if (((param_3 != 0) && ((param_3 & 1) == 0)) && ((*(uint *)(param_3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) - 1;
    FUN_1434ef880(param_3);
  }
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  return lVar8;
}



// FUNCTION 143610150 FUN_143610150 body=204 status=ok
// SIG undefined FUN_143610150(void)

longlong FUN_143610150(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_res10;
  
  if (((byte)*param_2 & 3) != 2) {
    lVar2 = *(longlong *)(param_2 + 8);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    local_res10 = lVar2;
    lVar4 = FUN_143610010(param_1,&local_res10,*(undefined8 *)(param_2 + 2));
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
    return lVar4;
  }
  uVar6 = 0;
  lVar2 = *(longlong *)(param_2 + 2);
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  do {
    if (uVar3 <= uVar6) {
      return 0;
    }
    lVar4 = *(longlong *)(param_2 + 8);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    local_res10 = lVar4;
    lVar5 = FUN_143610010(param_1,&local_res10,
                          *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + uVar6 * 8));
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
    uVar6 = uVar6 + 1;
  } while (lVar5 == 0);
  return lVar5;
}



// FUNCTION 143610220 GetASClassName body=33 status=ok
// SIG undefined GetASClassName(void)

undefined8 Scaleform::GFx::AS3::AvmBitmap::GetASClassName(undefined8 param_1,undefined8 param_2)

{
  String::operator=(param_2,"flash.display.Bitmap");
  return param_2;
}



// FUNCTION 143610250 GetASClassName body=33 status=ok
// SIG undefined GetASClassName(void)

undefined8 Scaleform::GFx::AS3::AvmLoader::GetASClassName(undefined8 param_1,undefined8 param_2)

{
  String::operator=(param_2,"flash.display.Loader");
  return param_2;
}



// FUNCTION 143610280 GetASClassName body=33 status=ok
// SIG undefined GetASClassName(void)

undefined8 Scaleform::GFx::AS3::AvmStaticText::GetASClassName(undefined8 param_1,undefined8 param_2)

{
  String::operator=(param_2,"flash.text.StaticText");
  return param_2;
}



// FUNCTION 1436102b0 FUN_1436102b0 body=111 status=ok
// SIG undefined FUN_1436102b0(void)

uint * FUN_1436102b0(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uStack_10;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = (uint)uVar1 & 2;
  lVar3 = uVar1 - uVar2;
  if ((uVar1 & 2) == 0) {
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    *(longlong *)(param_2 + 4) = lVar3;
    *(undefined8 *)(param_2 + 6) = uStack_10;
  }
  else if (uVar2 == 2) {
    FUN_1434ae820(param_2,lVar3);
    return param_2;
  }
  return param_2;
}



// FUNCTION 143610320 FUN_143610320 body=51 status=ok
// SIG undefined FUN_143610320(void)

longlong FUN_143610320(longlong *param_1)

{
  if (param_1[0x15] == 0) {
    (**(code **)(*param_1 + 0x50))();
    return param_1[0x15];
  }
  return param_1[0x15];
}



// FUNCTION 143610360 FUN_143610360 body=52 status=ok
// SIG undefined FUN_143610360(void)

longlong FUN_143610360(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 143610450 FUN_143610450 body=53 status=ok
// SIG undefined FUN_143610450(void)

undefined8 FUN_143610450(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return *(undefined8 *)(*(longlong *)(plVar1[0x15] + 0x28) + 0xe0);
}



// FUNCTION 1436104b0 FUN_1436104b0 body=291 status=ok
// SIG undefined FUN_1436104b0(void)

void FUN_1436104b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar4 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar4)) {
        return;
      }
      FUN_1436134e0(param_2,param_2,param_2[1] + 1);
      plVar3 = (longlong *)(*param_2 + (param_2[1] + -1) * 8);
      if (plVar3 != (longlong *)0x0) {
        lVar1 = *(longlong *)(lVar1 + (uVar4 + 1) * 0x28);
        *plVar3 = lVar1;
        if (lVar1 != 0) {
          *(uint *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1U & 0x8fffffff;
        }
      }
      uVar2 = *(ulonglong *)(*param_1 + 8);
    } while (((longlong)uVar2 < (longlong)uVar4) || (uVar4 = uVar4 + 1, uVar2 < uVar4));
    plVar3 = (longlong *)(*param_1 + (uVar4 * 5 + 2) * 8);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar4 <= uVar2);
  } while( true );
}



// FUNCTION 1436105f0 GetPrevSlotIndex body=31 status=ok
// SIG undefined GetPrevSlotIndex(void)

undefined8 Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  while (param_2 < uVar1) {
    param_1 = (ulonglong *)param_1[1];
    uVar1 = *param_1;
  }
  return *(undefined8 *)((param_2 - *param_1) * 0x40 + 8 + param_1[2]);
}



// FUNCTION 143610610 FUN_143610610 body=27 status=ok
// SIG undefined FUN_143610610(void)

undefined8 FUN_143610610(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x1f0))();
  return param_2;
}



// FUNCTION 143610630 FUN_143610630 body=65 status=ok
// SIG undefined FUN_143610630(void)

Rect<float> * FUN_143610630(longlong param_1,Rect<float> *param_2,Matrix2x4<float> *param_3)

{
  Rect<float> *pRVar1;
  undefined1 local_18 [16];
  
  pRVar1 = (Rect<float> *)
           (**(code **)(**(longlong **)(param_1 + 200) + 0x40))
                     (*(longlong **)(param_1 + 200),local_18,0);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,param_2,pRVar1);
  return param_2;
}



// FUNCTION 143610690 FUN_143610690 body=103 status=ok
// SIG undefined FUN_143610690(void)

longlong FUN_143610690(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  uVar3 = uVar2;
  uVar5 = uVar2;
  uVar7 = uVar2;
  if (1 < param_2 + 1) {
    uVar1 = param_2 + 1 >> 1;
    uVar6 = (ulonglong)uVar1;
    uVar1 = uVar1 * 2;
    uVar3 = (ulonglong)uVar1;
    puVar4 = (uint *)(param_1 + 0x28);
    do {
      uVar5 = uVar5 + puVar4[-4];
      uVar7 = uVar7 + *puVar4;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 8;
    } while (uVar6 != 0);
    if (param_2 < uVar1) goto LAB_1436106e5;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x18 + uVar3 * 0x10);
LAB_1436106e5:
  return uVar7 + uVar5 + uVar2;
}



// FUNCTION 143610710 FUN_143610710 body=60 status=ok
// SIG undefined FUN_143610710(void)

longlong FUN_143610710(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((-1 < (longlong)param_2) && (*(ulonglong *)(param_1 + 0x28) <= param_2)) {
    return *(longlong *)(param_1 + 0x38) + 0x10 +
           ((param_2 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40;
  }
  lVar1 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30));
  return lVar1;
}



// FUNCTION 143610750 GetSlotNameNode body=54 status=ok
// SIG undefined GetSlotNameNode(void)

undefined8 Scaleform::GFx::AS3::Slots::GetSlotNameNode(ulonglong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((-1 < (longlong)param_2) && (*param_1 <= param_2)) {
    return *(undefined8 *)(((param_2 & 0xffffffff) - *param_1) * 0x40 + param_1[2]);
  }
  uVar1 = GetSlotNameNode(param_1[1]);
  return uVar1;
}



// FUNCTION 1436107c0 FUN_1436107c0 body=98 status=ok
// SIG undefined FUN_1436107c0(void)

void FUN_1436107c0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((((param_2 == *(longlong *)(*(longlong *)(lVar1 + 0x230) + 0xd8)) ||
       (param_2 == *(longlong *)(*(longlong *)(lVar1 + 0x238) + 0xd8))) ||
      (param_2 == *(longlong *)(*(longlong *)(lVar1 + 0x228) + 0xd8))) ||
     (param_2 == *(longlong *)(*(longlong *)(lVar1 + 0x220) + 0xd8))) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  FUN_1435d0db0(param_1,param_2,-cVar2 & 2,param_3);
  return;
}



// FUNCTION 143610830 FUN_143610830 body=153 status=ok
// SIG undefined FUN_143610830(void)

void FUN_143610830(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(*param_1 + 0x200) + 0xd8),0,0);
    return;
  }
  lVar1 = *param_1;
  if ((((param_2 != *(longlong *)(*(longlong *)(lVar1 + 0x230) + 0xd8)) &&
       (param_2 != *(longlong *)(*(longlong *)(lVar1 + 0x238) + 0xd8))) &&
      (param_2 != *(longlong *)(*(longlong *)(lVar1 + 0x228) + 0xd8))) &&
     (param_2 != *(longlong *)(*(longlong *)(lVar1 + 0x220) + 0xd8))) {
    FUN_1435d0db0(param_1,param_2,0,param_3);
    return;
  }
  FUN_1435d0db0(param_1,param_2,2,param_3);
  return;
}



// FUNCTION 1436108d0 FUN_1436108d0 body=52 status=ok
// SIG undefined FUN_1436108d0(void)

void FUN_1436108d0(ulonglong *param_1,undefined8 param_2)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    FUN_1434f0650(param_2);
    return;
  }
  uVar1 = (uint)*param_1 & 2;
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      FUN_1434ae7b0(param_2);
      return;
    }
    return;
  }
  FUN_1435903c0(param_2,*param_1 & 0xfffffffffffffffc);
  return;
}



// FUNCTION 143610910 FUN_143610910 body=106 status=ok
// SIG undefined FUN_143610910(void)

void FUN_143610910(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uStack_10;
  
  if (*param_1 == 0) {
    FUN_1434f0650(param_2);
    return;
  }
  uVar2 = *param_1 & 0xfffffffffffffffc;
  uVar1 = (uint)*param_1 & 2;
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      FUN_1434ae820(param_2);
      return;
    }
    return;
  }
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
  }
  *param_2 = *param_2 & 0xffffffec;
  *param_2 = *param_2 | 0xc;
  *(ulonglong *)(param_2 + 4) = uVar2;
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143610980 FUN_143610980 body=118 status=ok
// SIG undefined FUN_143610980(void)

void FUN_143610980(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  if (param_2 != 0) {
    for (lVar1 = *(longlong *)(param_2 + 0x18); lVar1 != param_2 + 0x10;
        lVar1 = *(longlong *)(lVar1 + 8)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      lVar3 = *param_1;
      cVar4 = FUN_143616e60(lVar3,uVar2);
      if (cVar4 != '\0') {
        FUN_143616c70(lVar3 + 0x18,uVar2);
      }
    }
  }
  return;
}



// FUNCTION 143610a00 HandleUse body=110 status=ok
// SIG undefined HandleUse(void)

void Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse
               (undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)param_2[3];
  if (puVar1 != (undefined8 *)0x0) {
    *(longlong *)(*param_2 + 8) = param_2[1];
    *(longlong *)param_2[1] = *param_2;
    lVar2 = param_2[2];
    *param_2 = -1;
    param_2[1] = -1;
    param_2[3] = 0;
    if (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0xf) || (*(int *)(lVar2 + 0x18) != 0xb))
       && ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar2 + 0x18) != 7))))
    {
      FUN_143594910(local_res10,*puVar1);
    }
  }
  return;
}



// FUNCTION 143610a70 FUN_143610a70 body=262 status=ok
// SIG undefined FUN_143610a70(void)

void FUN_143610a70(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong local_res10 [3];
  
  if ((*(uint *)(param_2 + 8) >> 0x1a & 1) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfbffffff;
    lVar7 = *(longlong *)(param_1 + 0x88);
    local_res10[0] = param_2;
    if (lVar7 != 0) {
      uVar3 = 0x1505;
      lVar5 = 8;
      do {
        pbVar1 = &stack0x0000000f + lVar5;
        lVar5 = lVar5 + -1;
        uVar3 = (ulonglong)*pbVar1 + uVar3 * 0x1003f;
      } while (lVar5 != 0);
      uVar3 = *(ulonglong *)(lVar7 + 8) & uVar3;
      puVar4 = (ulonglong *)(lVar7 + 0x10 + uVar3 * 0x20);
      if ((*puVar4 != 0xfffffffffffffffe) && (uVar6 = uVar3, puVar4[1] == uVar3)) {
        while ((puVar4[1] != uVar3 || (puVar4[2] != param_2))) {
          uVar6 = *puVar4;
          if (uVar6 == 0xffffffffffffffff) {
            return;
          }
          puVar4 = (ulonglong *)(lVar7 + 0x10 + uVar6 * 0x20);
        }
        if (((-1 < (longlong)uVar6) && (lVar7 = (uVar6 + 1) * 0x20 + lVar7, lVar7 != 0)) &&
           (piVar2 = *(int **)(lVar7 + 8), piVar2 != (int *)0x0)) {
          piVar2[2] = 0;
          piVar2[3] = 0;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_res10[0] = param_2;
          FUN_143604270((longlong *)(param_1 + 0x88),local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 143610b80 FUN_143610b80 body=63 status=ok
// SIG undefined FUN_143610b80(void)

bool FUN_143610b80(longlong param_1)

{
  switch(*(uint *)(param_1 + 0x10) & 0x1f) {
  default:
    return false;
  case 8:
    return *(longlong *)(param_1 + 0x50) != 0;
  case 9:
    return *(longlong *)(param_1 + 0x48) != 0;
  case 0xe:
  case 0xf:
  case 0x12:
    return *(longlong *)(param_1 + 0x40) != 0;
  }
}



// FUNCTION 143610c40 FUN_143610c40 body=47 status=ok
// SIG undefined FUN_143610c40(void)

longlong FUN_143610c40(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 >> 2 == param_1[1]) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
  }
  else if (uVar2 >> 2 != *param_1) {
    uVar1 = *param_1 * 4;
    *(uint *)(param_2 + 0x10) = uVar1 | uVar2 & 3;
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return (ulonglong)(uint3)(uVar2 >> 10) << 8;
}



// FUNCTION 143610c70 FUN_143610c70 body=346 status=ok
// SIG undefined FUN_143610c70(void)

ulonglong FUN_143610c70(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong local_res18 [2];
  
  uVar4 = FUN_143610f30();
  if ((char)uVar4 != '\0') {
    FUN_14360df40(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x30));
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar4 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      plVar8 = (longlong *)(param_2 + 0x48);
      uVar9 = (ulonglong)uVar2;
      do {
        plVar3 = *(longlong **)(param_1 + 8);
        lVar10 = *plVar3;
        local_res18[0] = *(ulonglong *)(*plVar8 + 0x30);
        if (lVar10 != 0) {
          uVar4 = 0x1505;
          lVar7 = 8;
          do {
            pbVar1 = &stack0x00000017 + lVar7;
            lVar7 = lVar7 + -1;
            uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
          } while (lVar7 != 0);
          uVar4 = *(ulonglong *)(lVar10 + 8) & uVar4;
          lVar7 = uVar4 * 3 + 2;
          puVar5 = (ulonglong *)(lVar10 + lVar7 * 8);
          if ((*(longlong *)(lVar10 + lVar7 * 8) != -2) && (uVar6 = uVar4, puVar5[1] == uVar4)) {
            while ((puVar5[1] != uVar4 || (puVar5[2] != *(ulonglong *)(*plVar8 + 0x30)))) {
              uVar6 = *puVar5;
              if (uVar6 == 0xffffffffffffffff) goto LAB_143610d69;
              puVar5 = (ulonglong *)(lVar10 + uVar6 * 0x18 + 0x10);
            }
            if ((-1 < (longlong)uVar6) && (uVar4 = uVar6 * 3, lVar10 + 0x20 + uVar6 * 0x18 != 0))
            goto LAB_143610daa;
          }
        }
LAB_143610d69:
        lVar10 = 0x1505;
        lVar7 = 8;
        do {
          pbVar1 = &stack0x00000017 + lVar7;
          lVar7 = lVar7 + -1;
          lVar10 = lVar10 * 0x1003f + (ulonglong)*pbVar1;
        } while (lVar7 != 0);
        uVar4 = FUN_143605970(plVar3,plVar3[1],local_res18,lVar10);
LAB_143610daa:
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143610dd0 FUN_143610dd0 body=351 status=ok
// SIG undefined FUN_143610dd0(void)

ulonglong FUN_143610dd0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong local_res18;
  
  uVar4 = FUN_143610f30();
  if ((char)uVar4 != '\0') {
    FUN_14360df40(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30));
    uVar2 = *(uint *)(param_2 + 0x20);
    uVar4 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      lVar8 = 0;
      uVar9 = (ulonglong)uVar2;
      do {
        plVar3 = *(longlong **)(param_1 + 8);
        lVar10 = *plVar3;
        local_res18 = *(ulonglong *)(*(longlong *)(lVar8 + *(longlong *)(param_2 + 0x38)) + 0x30);
        if (lVar10 != 0) {
          uVar4 = 0x1505;
          lVar7 = 8;
          do {
            pbVar1 = &stack0x00000017 + lVar7;
            lVar7 = lVar7 + -1;
            uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
          } while (lVar7 != 0);
          uVar4 = *(ulonglong *)(lVar10 + 8) & uVar4;
          lVar7 = uVar4 * 3 + 2;
          puVar5 = (ulonglong *)(lVar10 + lVar7 * 8);
          if ((*(longlong *)(lVar10 + lVar7 * 8) != -2) && (uVar6 = uVar4, puVar5[1] == uVar4)) {
            while ((puVar5[1] != uVar4 || (puVar5[2] != local_res18))) {
              uVar6 = *puVar5;
              if (uVar6 == 0xffffffffffffffff) goto LAB_143610ec9;
              puVar5 = (ulonglong *)(lVar10 + uVar6 * 0x18 + 0x10);
            }
            if ((-1 < (longlong)uVar6) && (uVar4 = uVar6 * 3, lVar10 + 0x20 + uVar6 * 0x18 != 0))
            goto LAB_143610f0a;
          }
        }
LAB_143610ec9:
        lVar10 = 0x1505;
        lVar7 = 8;
        do {
          pbVar1 = &stack0x00000017 + lVar7;
          lVar7 = lVar7 + -1;
          lVar10 = lVar10 * 0x1003f + (ulonglong)*pbVar1;
        } while (lVar7 != 0);
        uVar4 = FUN_143605970(plVar3,plVar3[1],&local_res18,lVar10);
LAB_143610f0a:
        lVar8 = lVar8 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143610f30 FUN_143610f30 body=112 status=ok
// SIG undefined FUN_143610f30(void)

ulonglong FUN_143610f30(uint *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong local_res8;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 5;
  uVar2 = (ulonglong)uVar1;
  bVar3 = (byte)*(uint *)(param_2 + 0x10) & 0x1f;
  if (uVar1 == *param_1) {
    if (bVar3 == 1) {
      uVar2 = FUN_14360df40();
    }
    return uVar2 & 0xffffffffffffff00;
  }
  if (bVar3 == 1) {
    local_res8 = param_2;
    FUN_143313780(*(undefined8 *)(param_1 + 2),&local_res8);
  }
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
  return 1;
}



// FUNCTION 143610fa0 FUN_143610fa0 body=195 status=ok
// SIG undefined FUN_143610fa0(void)

void FUN_143610fa0(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar4 = param_1[1];
  uVar1 = uVar4 + 1;
  FUN_143613380(param_1,param_1[3],uVar1);
  if (uVar4 < uVar1) {
    puVar5 = (undefined8 *)(*param_1 + uVar4 * 8);
    for (lVar6 = uVar1 - uVar4; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 8);
    memmove((void *)((longlong)_Src + 8),_Src,(param_1[1] - param_2) * 8 - 8);
  }
  plVar3 = (longlong *)(*param_1 + param_2 * 8);
  if (plVar3 != (longlong *)0x0) {
    if (*param_3 != 0) {
      piVar2 = (int *)(*param_3 + 8);
      *piVar2 = *piVar2 + 1;
    }
    *plVar3 = *param_3;
  }
  return;
}



// FUNCTION 143611070 FUN_143611070 body=108 status=ok
// SIG undefined FUN_143611070(void)

longlong * FUN_143611070(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 200;
  lVar4 = (longlong)param_2;
  plVar3 = (longlong *)FUN_1435f4bd0(lVar1);
  plVar2 = *(longlong **)(param_1 + 0xd0 + lVar4 * 0x18);
  if (plVar2 == (longlong *)0x0) {
    *plVar3 = *(longlong *)(lVar1 + lVar4 * 0x18);
    *(longlong **)(lVar1 + lVar4 * 0x18) = plVar3;
  }
  else {
    *plVar3 = *plVar2;
    **(undefined8 **)(param_1 + 0xd0 + lVar4 * 0x18) = plVar3;
  }
  *(longlong **)(param_1 + 0xd0 + lVar4 * 0x18) = plVar3;
  if (*plVar3 == 0) {
    *(longlong **)(param_1 + 0xd8 + lVar4 * 0x18) = plVar3;
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  return plVar3;
}



// FUNCTION 1436110f0 IsFocusEnabled body=35 status=ok
// SIG undefined IsFocusEnabled(void)

bool Scaleform::GFx::AS3::AvmTextField::IsFocusEnabled(longlong param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 2) {
    cVar1 = TextField::IsReadOnly(*(undefined8 *)(param_1 + -0x20));
    return cVar1 == '\0';
  }
  return true;
}



// FUNCTION 143611120 FUN_143611120 body=58 status=ok
// SIG undefined FUN_143611120(void)

ulonglong FUN_143611120(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar1 = (char *)0x0;
    while (pcVar2 = pcVar1 + 1, pcVar1[*(longlong *)(param_1 + 0x10)] == pcVar1[0x145af6ba4]) {
      pcVar1 = pcVar2;
      if (pcVar2 == &DAT_00000004) {
        return 1;
      }
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}



// FUNCTION 143611160 FUN_143611160 body=58 status=ok
// SIG undefined FUN_143611160(void)

longlong FUN_143611160(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = (uint7)(uVar1 >> 8);
  if (((uVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) && ((uVar1 & 0xfffffffffffff) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 1436111a0 FUN_1436111a0 body=77 status=ok
// SIG undefined FUN_1436111a0(void)

ulonglong FUN_1436111a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x230);
  if ((((lVar1 != *(longlong *)(uVar3 + 0xd8)) &&
       (uVar3 = *(ulonglong *)(lVar2 + 0x238), lVar1 != *(longlong *)(uVar3 + 0xd8))) &&
      (uVar3 = *(ulonglong *)(lVar2 + 0x228), lVar1 != *(longlong *)(uVar3 + 0xd8))) &&
     (uVar3 = *(ulonglong *)(lVar2 + 0x220), lVar1 != *(longlong *)(uVar3 + 0xd8))) {
    return uVar3 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1436111f0 FUN_1436111f0 body=58 status=ok
// SIG undefined FUN_1436111f0(void)

ulonglong FUN_1436111f0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar1 = (char *)0x0;
    while (pcVar2 = pcVar1 + 1, pcVar1[*(longlong *)(param_1 + 0x10)] == pcVar1[0x145b0909c]) {
      pcVar1 = pcVar2;
      if (pcVar2 == (char *)0x7) {
        return 1;
      }
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}



// FUNCTION 143611230 FUN_143611230 body=101 status=ok
// SIG undefined FUN_143611230(void)

uint FUN_143611230(uint *param_1)

{
  uint uVar1;
  byte local_res8 [4];
  undefined4 local_resc;
  longlong local_res10 [3];
  
  uVar1 = (int)(*param_1 << 0x15) >> 0x1b;
  if ((((int)uVar1 < 10) || (uVar1 == 0xe)) && ((*param_1 & 3) == 0)) {
    local_res10[0] = *(longlong *)(param_1 + 8);
    if (local_res10[0] != 0) {
      local_res8[0] = 0;
      local_resc = 0xffffffff;
      FUN_14361ce00(local_res10,local_res8);
      uVar1 = 0;
      if ((local_res8[0] & 0xf) == 6) goto LAB_14361128e;
    }
    return 1;
  }
LAB_14361128e:
  return uVar1 & 0xffffff00;
}



// FUNCTION 1436112a0 FUN_1436112a0 body=58 status=ok
// SIG undefined FUN_1436112a0(void)

ulonglong FUN_1436112a0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar1 = (char *)0x0;
    while (pcVar2 = pcVar1 + 1, pcVar1[*(longlong *)(param_1 + 0x10)] == pcVar1[0x145b0a078]) {
      pcVar1 = pcVar2;
      if (pcVar2 == (char *)0x7) {
        return 1;
      }
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}



// FUNCTION 1436112e0 IsTabable body=76 status=ok
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



// FUNCTION 143611350 FUN_143611350 body=58 status=ok
// SIG undefined FUN_143611350(void)

ulonglong FUN_143611350(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar1 = (char *)0x0;
    while (pcVar2 = pcVar1 + 1, pcVar1[*(longlong *)(param_1 + 0x10)] == pcVar1[0x145b16f04]) {
      pcVar1 = pcVar2;
      if (pcVar2 == (char *)0x5) {
        return 1;
      }
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}



// FUNCTION 143611390 LGetLength body=17 status=ok
// SIG undefined LGetLength(void)

longlong Scaleform::GFx::ZLibFile::LGetLength(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  return (longlong)iVar1;
}



// FUNCTION 1436113b0 LTell body=17 status=ok
// SIG undefined LTell(void)

longlong Scaleform::GFx::ZLibFile::LTell(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  return (longlong)iVar1;
}



// FUNCTION 1436113d0 FUN_1436113d0 body=131 status=ok
// SIG undefined FUN_1436113d0(void)

undefined8 * FUN_1436113d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_143562f60(lVar2,param_2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143611460 FUN_143611460 body=131 status=ok
// SIG undefined FUN_143611460(void)

undefined8 * FUN_143611460(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_1434b64a0(lVar2,param_2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436114f0 FUN_1436114f0 body=131 status=ok
// SIG undefined FUN_1436114f0(void)

undefined8 * FUN_1436114f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_143579270(lVar2,param_2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143611580 FUN_143611580 body=154 status=ok
// SIG undefined FUN_143611580(void)

undefined8 * FUN_143611580(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_14357bb50(lVar2,param_2,param_3);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143611620 FUN_143611620 body=148 status=ok
// SIG undefined FUN_143611620(void)

undefined8 *
FUN_143611620(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0x148;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x68,local_res10);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    uVar2 = FUN_1434b2350(lVar1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x100),
                          param_3,param_4,param_5);
    *param_2 = uVar2;
  }
  return param_2;
}



// FUNCTION 1436116c0 FUN_1436116c0 body=131 status=ok
// SIG undefined FUN_1436116c0(void)

undefined8 * FUN_1436116c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    uVar3 = UInterpTrackInst::UInterpTrackInst(lVar2,param_2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143611750 FUN_143611750 body=153 status=ok
// SIG undefined FUN_143611750(void)

undefined8 *
FUN_143611750(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar3 = FUN_143623f20(lVar2,param_2,param_3,param_4);
    *param_1 = uVar3;
  }
  return param_1;
}



// FUNCTION 1436117f0 FUN_1436117f0 body=153 status=ok
// SIG undefined FUN_1436117f0(void)

undefined8 *
FUN_1436117f0(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar3 = FUN_143624eb0(lVar2,param_2,param_3,param_4);
    *param_1 = uVar3;
  }
  return param_1;
}



// FUNCTION 143611890 FUN_143611890 body=139 status=ok
// SIG undefined FUN_143611890(void)

void FUN_143611890(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  FUN_1434f0160((longlong *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x78),
                *(longlong *)(param_1 + 0x68) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + (*(longlong *)(param_1 + 0x68) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
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



// FUNCTION 143611990 OnEventLoad body=53 status=ok
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



// FUNCTION 143611a20 FUN_143611a20 body=75 status=ok
// SIG undefined FUN_143611a20(void)

void FUN_143611a20(longlong param_1)

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



// FUNCTION 143611ac0 OnKeyEvent body=58 status=ok
// SIG undefined OnKeyEvent(void)

ulonglong Scaleform::GFx::AS3::AvmTextField::OnKeyEvent(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  if ((*(longlong *)(param_1 - 0x28) != 0) || (*(longlong *)(param_1 - 0x30) != 0)) {
    uVar1 = *(ulonglong *)(param_1 - 0x28);
    if (uVar1 == 0) {
      uVar1 = *(ulonglong *)(param_1 - 0x30);
    }
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 - 1;
    }
    param_1 = FUN_1435198d0(uVar1,param_2,*(undefined8 *)(param_1 - 0x20));
  }
  return param_1 & 0xffffffffffffff00;
}



// FUNCTION 143611b40 FUN_143611b40 body=130 status=ok
// SIG undefined FUN_143611b40(void)

void FUN_143611b40(uint *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
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
    }
  }
  puVar2 = *(uint **)(param_2 + 0x18);
  *(uint **)(param_2 + 0x18) = puVar2 + -8;
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar2 + 2);
  uVar3 = *(undefined8 *)(puVar2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar3;
  return;
}



// FUNCTION 143611bd0 FUN_143611bd0 body=125 status=ok
// SIG undefined FUN_143611bd0(void)

void FUN_143611bd0(uint *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
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
    }
  }
  puVar2 = (uint *)*param_2;
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar2 + 2);
  uVar3 = *(undefined8 *)(puVar2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar3;
  *param_2 = *param_2 + -0x20;
  return;
}



// FUNCTION 143611c50 FUN_143611c50 body=188 status=ok
// SIG undefined FUN_143611c50(void)

void FUN_143611c50(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = (uint *)*param_1;
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar1);
    }
    else {
      piVar2 = *(int **)(puVar1 + 2);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
  }
  *param_1 = *param_1 + -0x20;
  puVar1 = (uint *)*param_1;
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar1);
    }
    else {
      piVar2 = *(int **)(puVar1 + 2);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
  }
  *param_1 = *param_1 + -0x20;
  return;
}



// FUNCTION 143611d10 FUN_143611d10 body=244 status=ok
// SIG undefined FUN_143611d10(void)

void FUN_143611d10(longlong param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  do {
    if (param_2 == 0) {
      return;
    }
    puVar1 = *(uint **)(param_1 + 0x18);
    param_2 = param_2 + -1;
    uVar3 = *puVar1 & 0x1f;
    if (9 < uVar3) {
      if ((*puVar1 >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar2 = (int *)(*(longlong *)(puVar1 + 4) + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar4 = *(ulonglong *)(puVar1 + 4);
          if ((uVar4 & 1) == 0) {
LAB_143611db8:
            if ((uVar4 != 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(puVar1 + 4) = uVar4 - 1;
          }
        }
        else if (uVar3 - 0xd < 2) {
          uVar4 = *(ulonglong *)(puVar1 + 6);
          if ((uVar4 & 1) == 0) goto LAB_143611db8;
          *(ulonglong *)(puVar1 + 6) = uVar4 - 1;
        }
      }
      else {
        piVar2 = *(int **)(puVar1 + 2);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *puVar1 = *puVar1 & 0xfffffde0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
      }
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0x20;
  } while( true );
}



// FUNCTION 143611e10 FUN_143611e10 body=118 status=ok
// SIG undefined FUN_143611e10(void)

void FUN_143611e10(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = *(uint **)(param_1 + 0x18);
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) != 0) {
      piVar2 = *(int **)(puVar1 + 2);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0x20;
      return;
    }
    FUN_1435920c0(puVar1);
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0x20;
  return;
}



// FUNCTION 143611e90 FUN_143611e90 body=242 status=ok
// SIG undefined FUN_143611e90(void)

void FUN_143611e90(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  do {
    if (param_2 == 0) {
      return;
    }
    puVar1 = (uint *)*param_1;
    param_2 = param_2 + -1;
    uVar3 = *puVar1 & 0x1f;
    if (9 < uVar3) {
      if ((*puVar1 >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar2 = (int *)(*(longlong *)(puVar1 + 4) + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar4 = *(ulonglong *)(puVar1 + 4);
          if ((uVar4 & 1) == 0) {
LAB_143611f37:
            if ((uVar4 != 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(puVar1 + 4) = uVar4 - 1;
          }
        }
        else if (uVar3 - 0xd < 2) {
          uVar4 = *(ulonglong *)(puVar1 + 6);
          if ((uVar4 & 1) == 0) goto LAB_143611f37;
          *(ulonglong *)(puVar1 + 6) = uVar4 - 1;
        }
      }
      else {
        piVar2 = *(int **)(puVar1 + 2);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *puVar1 = *puVar1 & 0xfffffde0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
      }
    }
    *param_1 = *param_1 + -0x20;
  } while( true );
}



// FUNCTION 143611f90 FUN_143611f90 body=115 status=ok
// SIG undefined FUN_143611f90(void)

void FUN_143611f90(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = (uint *)*param_1;
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) != 0) {
      piVar2 = *(int **)(puVar1 + 2);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *param_1 = *param_1 + -0x20;
      return;
    }
    FUN_1435920c0(puVar1);
  }
  *param_1 = *param_1 + -0x20;
  return;
}



// FUNCTION 143612010 FUN_143612010 body=129 status=ok
// SIG undefined FUN_143612010(void)

void FUN_143612010(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
    if (*(ulonglong *)(param_1 + 0x20) < 0x3f) {
      *(ulonglong *)(param_1 + 0x28) =
           *(ulonglong *)(param_1 + 0x28) & ~(1L << (*(ulonglong *)(param_1 + 0x20) & 0x3f));
    }
    else {
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      if (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 0x18)) {
        return;
      }
      *(undefined8 *)(param_1 + 0x28) =
           *(undefined8 *)(*(longlong *)(param_1 + 8) + *(ulonglong *)(param_1 + 0x18) * 8);
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      do {
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
        if (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 0x18)) {
          return;
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + *(ulonglong *)(param_1 + 0x18) * 8);
        *(longlong *)(param_1 + 0x28) = lVar1;
      } while (lVar1 == 0);
    }
    uVar2 = FUN_143561b20(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return;
}



// FUNCTION 1436120a0 FUN_1436120a0 body=107 status=ok
// SIG undefined FUN_1436120a0(void)

void FUN_1436120a0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[1] + 1;
  if (uVar1 < (ulonglong)param_1[1]) {
    uVar2 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1436120ec;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1436120ec;
    uVar2 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432f2240(param_1,param_1[3],uVar2);
LAB_1436120ec:
  param_1[1] = uVar1;
  *(undefined8 *)(*param_1 + -8 + uVar1 * 8) = *param_2;
  return;
}



// FUNCTION 143612110 FUN_143612110 body=85 status=ok
// SIG undefined FUN_143612110(void)

longlong FUN_143612110(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_1434f04c0(param_1,param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + -0x20 + param_1[1] * 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 4) = local_18;
    *(undefined8 *)(puVar1 + 6) = uStack_10;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  return *param_1 + -0x20 + param_1[1] * 0x20;
}



// FUNCTION 143612170 FUN_143612170 body=160 status=ok
// SIG undefined FUN_143612170(void)

void FUN_143612170(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    *(uint *)(param_1 + 0x10) = uVar1 + 1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 8) = param_2;
    return;
  }
  uVar2 = *(longlong *)(param_1 + 0x48) + 1;
  if (uVar2 < *(ulonglong *)(param_1 + 0x48)) {
    uVar3 = uVar2;
    if (*(ulonglong *)(param_1 + 0x50) >> 1 <= uVar2) goto LAB_1436121e8;
  }
  else {
    if (uVar2 <= *(ulonglong *)(param_1 + 0x50)) goto LAB_1436121e8;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_1432f2240(param_1 + 0x40,*(undefined8 *)(param_1 + 0x58),uVar3);
LAB_1436121e8:
  *(ulonglong *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8 + uVar2 * 8) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



// FUNCTION 143612210 FUN_143612210 body=160 status=ok
// SIG undefined FUN_143612210(void)

void FUN_143612210(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 0x14) = uVar1 + 1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar1 * 8) = param_2;
    return;
  }
  uVar2 = *(longlong *)(param_1 + 0x68) + 1;
  if (uVar2 < *(ulonglong *)(param_1 + 0x68)) {
    uVar3 = uVar2;
    if (*(ulonglong *)(param_1 + 0x70) >> 1 <= uVar2) goto LAB_143612288;
  }
  else {
    if (uVar2 <= *(ulonglong *)(param_1 + 0x70)) goto LAB_143612288;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_1432f2240(param_1 + 0x60,*(undefined8 *)(param_1 + 0x78),uVar3);
LAB_143612288:
  *(ulonglong *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + -8 + uVar2 * 8) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



// FUNCTION 1436122b0 FUN_1436122b0 body=121 status=ok
// SIG undefined FUN_1436122b0(void)

void FUN_1436122b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  uVar3 = *(longlong *)(param_1 + 0xf0) + 1;
  if (uVar3 < *(ulonglong *)(param_1 + 0xf0)) {
    uVar4 = uVar3;
    if (*(ulonglong *)(param_1 + 0xf8) >> 1 <= uVar3) goto LAB_143612302;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0xf8)) goto LAB_143612302;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar4);
LAB_143612302:
  *(ulonglong *)(param_1 + 0xf0) = uVar3;
  puVar2 = (undefined8 *)(*plVar1 + -8 + uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  return;
}



// FUNCTION 143612330 FUN_143612330 body=319 status=ok
// SIG undefined FUN_143612330(void)

ulonglong FUN_143612330(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong local_18;
  longlong local_10;
  
  if (*(int *)(param_1 + 8) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(uint *)(param_1 + 0x30) & param_3;
  plVar4 = (longlong *)(uVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
  if (*plVar4 == -1) {
    return uVar2 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)0x0;
  while( true ) {
    plVar3 = plVar4;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + *plVar3 * 0x10);
    uVar6 = *(uint *)(lVar1 + 0x1c) & 0xffffff;
    if ((plVar5 == (longlong *)0x0) && (uVar2 != (*(uint *)(param_1 + 0x30) & uVar6))) break;
    if ((uVar6 == param_3) && (lVar1 == *(longlong *)(param_2 + 8))) {
      local_18 = param_1 + 0x40;
      local_10 = ((*(longlong *)(param_1 + 0x10) - param_1) + -0x40 >> 3) << 6;
      FUN_14360eaa0(param_1,*plVar3,&local_18);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      lVar1 = plVar3[1];
      if (plVar5 == (longlong *)0x0) {
        if (lVar1 != -1) {
          plVar4 = (longlong *)(lVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
          lVar1 = plVar4[1];
          *plVar3 = *plVar4;
          plVar3[1] = lVar1;
          plVar3 = plVar4;
        }
      }
      else {
        plVar5[1] = lVar1;
      }
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = -1;
        plVar3[1] = -1;
      }
      return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
    }
    uVar2 = plVar3[1];
    if (uVar2 == 0xffffffffffffffff) break;
    plVar4 = (longlong *)(uVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
    plVar5 = plVar3;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143612470 FUN_143612470 body=141 status=ok
// SIG undefined FUN_143612470(void)

void FUN_143612470(longlong *param_1,longlong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  
  if (param_1[1] == 1) {
    FUN_143613820(param_1,param_1,0);
    return;
  }
  uVar1 = *(ulonglong *)(*param_1 + param_2 * 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(*param_1 + param_2 * 8) = uVar1 - 1;
    }
  }
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 143612500 FUN_143612500 body=121 status=ok
// SIG undefined FUN_143612500(void)

void FUN_143612500(longlong *param_1,longlong param_2)

{
  void *_Dst;
  int *piVar1;
  
  if (param_1[1] == 1) {
    FUN_14338a930(param_1,param_1,0);
    return;
  }
  piVar1 = *(int **)(*param_1 + param_2 * 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 143612580 FUN_143612580 body=195 status=ok
// SIG undefined FUN_143612580(void)

void FUN_143612580(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar3 = 0;
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      plVar5 = param_1;
      if (*plVar4 != -2) break;
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 5;
    } while (uVar3 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar3)) {
        return;
      }
      if (*(longlong *)(lVar1 + 0x30 + uVar3 * 0x28) == *param_2) {
        FUN_1436044b0(param_1,lVar1 + uVar3 * 0x28 + 0x20);
        return;
      }
      uVar2 = *(ulonglong *)(lVar1 + 8);
    } while (((longlong)uVar2 < (longlong)uVar3) || (uVar3 = uVar3 + 1, uVar2 < uVar3));
    plVar4 = (longlong *)(lVar1 + (uVar3 * 5 + 2) * 8);
    do {
      if (*plVar4 != -2) break;
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 5;
    } while (uVar3 <= uVar2);
  } while( true );
}



// FUNCTION 143612650 FUN_143612650 body=169 status=ok
// SIG undefined FUN_143612650(void)

void FUN_143612650(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
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
      uVar2 = param_3 + 3 & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x147;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612700 FUN_143612700 body=173 status=ok
// SIG undefined FUN_143612700(void)

void FUN_143612700(longlong *param_1,longlong *param_2,longlong param_3)

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
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 4);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x15c;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1436127b0 FUN_1436127b0 body=165 status=ok
// SIG undefined FUN_1436127b0(void)

void FUN_1436127b0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x149;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612860 FUN_143612860 body=164 status=ok
// SIG undefined FUN_143612860(void)

void FUN_143612860(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x14d;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 6,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612910 FUN_143612910 body=165 status=ok
// SIG undefined FUN_143612910(void)

void FUN_143612910(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x14d;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1436129c0 FUN_1436129c0 body=165 status=ok
// SIG undefined FUN_1436129c0(void)

void FUN_1436129c0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x155;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x18,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612a70 FUN_143612a70 body=165 status=ok
// SIG undefined FUN_143612a70(void)

void FUN_143612a70(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x15a;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x50,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612b20 FUN_143612b20 body=165 status=ok
// SIG undefined FUN_143612b20(void)

void FUN_143612b20(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x158;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612bd0 FUN_143612bd0 body=165 status=ok
// SIG undefined FUN_143612bd0(void)

void FUN_143612bd0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x157;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612c80 FUN_143612c80 body=165 status=ok
// SIG undefined FUN_143612c80(void)

void FUN_143612c80(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x155;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612d30 FUN_143612d30 body=165 status=ok
// SIG undefined FUN_143612d30(void)

void FUN_143612d30(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x30,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612de0 FUN_143612de0 body=173 status=ok
// SIG undefined FUN_143612de0(void)

void FUN_143612de0(longlong *param_1,longlong *param_2,longlong param_3)

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
      local_res8[0] = 0x15c;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612e90 FUN_143612e90 body=165 status=ok
// SIG undefined FUN_143612e90(void)

void FUN_143612e90(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x15b;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143612f40 FUN_143612f40 body=114 status=ok
// SIG undefined FUN_143612f40(void)

void FUN_143612f40(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_143612650(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_143612650(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143612fc0 FUN_143612fc0 body=114 status=ok
// SIG undefined FUN_143612fc0(void)

void FUN_143612fc0(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_143612910(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_143612910(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143613040 FUN_143613040 body=141 status=ok
// SIG undefined FUN_143613040(void)

void FUN_143613040(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[1];
  FUN_1436132e0(param_1,param_1,param_2);
  if (uVar1 < param_2) {
    puVar4 = (undefined4 *)(uVar1 * 0x50 + *param_1);
    lVar3 = param_2 - uVar1;
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(puVar4 + 0x12);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar2[-8] = 0;
          puVar2[-7] = 0;
          *(undefined4 *)(puVar2 + -6) = 0;
          puVar2[-5] = 0;
          *(undefined4 *)(puVar2 + -4) = 0;
          *(undefined2 *)((longlong)puVar2 + -0x1b) = 0x100;
          puVar2[-3] = 0;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        puVar4 = puVar4 + 0x14;
        puVar2 = puVar2 + 10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1436130d0 FUN_1436130d0 body=112 status=ok
// SIG undefined FUN_1436130d0(void)

void FUN_1436130d0(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1434efd80(param_1,*(undefined8 *)(param_1 + 0x18),param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1434efd80(param_1,*(undefined8 *)(param_1 + 0x18),(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}


