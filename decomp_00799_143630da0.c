// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143630da0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaClock::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_143630900(param_1 + 3);
  *param_1 = &PTR_FUN_145b4e6b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143630df0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaClock::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1434e5f70(param_1 + 3);
  *param_1 = &PTR_FUN_145b4e6b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143630e40 FUN_143630e40 body=43 status=ok
// SIG undefined FUN_143630e40(void)

undefined8 * FUN_143630e40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b4e6b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143630e70 FUN_143630e70 body=112 status=ok
// SIG undefined FUN_143630e70(void)

longlong FUN_143630e70(longlong param_1,ulonglong param_2)

{
  FUN_143630900(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_145b4e6b8;
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143630ee0 FUN_143630ee0 body=120 status=ok
// SIG undefined FUN_143630ee0(void)

longlong FUN_143630ee0(longlong param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x58));
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_145b4e6b8;
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143630f60 FUN_143630f60 body=89 status=ok
// SIG undefined FUN_143630f60(void)

undefined8 FUN_143630f60(undefined8 param_1,ulonglong param_2)

{
  FUN_143630970();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 143630fc0 FUN_143630fc0 body=112 status=ok
// SIG undefined FUN_143630fc0(void)

longlong FUN_143630fc0(longlong param_1,ulonglong param_2)

{
  FUN_1434e5f70(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_145b4e6b8;
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143631030 FUN_143631030 body=242 status=ok
// SIG undefined FUN_143631030(void)

void FUN_143631030(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar7 = 0, *(int *)(param_2 + 0x20) != 0)) {
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      uVar6 = *(longlong *)(param_1 + 0x20) + 1;
      if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
        uVar8 = uVar6;
        if (uVar6 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_1436310da:
          FUN_1434efc20(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar8);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
        uVar8 = (uVar6 >> 2) + uVar6;
        goto LAB_1436310da;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar6;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + uVar6 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(lVar4 + uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 143631130 FUN_143631130 body=240 status=ok
// SIG undefined FUN_143631130(void)

void FUN_143631130(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar7 = 0, param_2[1] != 0)) {
    do {
      lVar4 = *param_2;
      uVar6 = *(longlong *)(param_1 + 0x20) + 1;
      if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
        uVar8 = uVar6;
        if (uVar6 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_1436311d9:
          FUN_1434efc20(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar8);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
        uVar8 = (uVar6 >> 2) + uVar6;
        goto LAB_1436311d9;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar6;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + uVar6 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(lVar4 + uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  return;
}



// FUNCTION 143631220 FUN_143631220 body=240 status=ok
// SIG undefined FUN_143631220(void)

void FUN_143631220(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar7 = 0, *(int *)(param_2 + 0x20) != 0)) {
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      uVar6 = *(longlong *)(param_1 + 0x20) + 1;
      if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
        uVar8 = uVar6;
        if (uVar6 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_1436312c6:
          FUN_1432f2240(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar8);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
        uVar8 = (uVar6 >> 2) + uVar6;
        goto LAB_1436312c6;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar6;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + uVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(lVar4 + uVar7 * 8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 143631310 FUN_143631310 body=238 status=ok
// SIG undefined FUN_143631310(void)

void FUN_143631310(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar7 = 0, param_2[1] != 0)) {
    do {
      lVar4 = *param_2;
      uVar6 = *(longlong *)(param_1 + 0x20) + 1;
      if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
        uVar8 = uVar6;
        if (uVar6 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_1436313b5:
          FUN_1432f2240(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar8);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
        uVar8 = (uVar6 >> 2) + uVar6;
        goto LAB_1436313b5;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar6;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + uVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(lVar4 + uVar7 * 8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  return;
}



// FUNCTION 143631400 FUN_143631400 body=194 status=ok
// SIG undefined FUN_143631400(void)

void FUN_143631400(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_18,0x466,uVar4);
    FUN_1435cbdf0(uVar4,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar7 = 0, *(int *)(param_2 + 0x20) != 0)) {
    do {
      plVar2 = (longlong *)(*(longlong *)(param_2 + 0x18) + uVar7 * 8);
      FUN_143578f70(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x20) + 1
                   );
      plVar3 = (longlong *)
               (*(longlong *)(param_1 + 0x18) + (*(longlong *)(param_1 + 0x20) + -1) * 8);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = *plVar2;
        if (lVar5 != 0) {
          piVar1 = (int *)(lVar5 + 0x18);
          *piVar1 = *piVar1 + 1;
        }
        *plVar3 = *plVar2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1436314d0 FUN_1436314d0 body=256 status=ok
// SIG undefined FUN_1436314d0(void)

void FUN_1436314d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar9 = 0, uVar10 = uVar9, *(int *)(param_2 + 0x20) != 0)
     ) {
    do {
      puVar8 = (uint *)(*(longlong *)(param_2 + 0x18) + uVar9);
      FUN_1434f0300(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x20) + 1
                   );
      puVar7 = (uint *)(*(longlong *)(param_1 + 0x18) + -0x20 + *(longlong *)(param_1 + 0x20) * 0x20
                       );
      if (puVar7 != (uint *)0x0) {
        *puVar7 = *puVar8;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
        uVar3 = puVar8[5];
        uVar4 = puVar8[6];
        uVar5 = puVar8[7];
        puVar7[4] = puVar8[4];
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar5;
        if (9 < ((byte)*puVar8 & 0x1f)) {
          if ((*puVar8 >> 9 & 1) == 0) {
            FUN_143592070(puVar8);
          }
          else {
            FUN_143592140();
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 0x20;
    } while (uVar10 < *(uint *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1436315d0 FUN_1436315d0 body=253 status=ok
// SIG undefined FUN_1436315d0(void)

void FUN_1436315d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar9 = 0, uVar10 = uVar9, param_2[1] != 0)) {
    do {
      puVar8 = (uint *)(*param_2 + uVar9);
      FUN_1434f0300(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x20) + 1
                   );
      puVar7 = (uint *)(*(longlong *)(param_1 + 0x18) + -0x20 + *(longlong *)(param_1 + 0x20) * 0x20
                       );
      if (puVar7 != (uint *)0x0) {
        *puVar7 = *puVar8;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
        uVar3 = puVar8[5];
        uVar4 = puVar8[6];
        uVar5 = puVar8[7];
        puVar7[4] = puVar8[4];
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar5;
        if (9 < ((byte)*puVar8 & 0x1f)) {
          if ((*puVar8 >> 9 & 1) == 0) {
            FUN_143592070(puVar8);
          }
          else {
            FUN_143592140();
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 0x20;
    } while (uVar10 < (ulonglong)param_2[1]);
  }
  return;
}



// FUNCTION 1436316d0 FUN_1436316d0 body=175 status=ok
// SIG undefined FUN_1436316d0(void)

bool FUN_1436316d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = *param_3;
  local_38 = *param_2;
  local_28[0] = 4;
  local_20 = 0;
  local_48[0] = 4;
  local_40 = 0;
  iVar1 = FUN_14361f5f0(*param_1,param_1[1],local_48,local_28);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return iVar1 == 0;
    }
    FUN_1435920c0(local_28);
  }
  return iVar1 == 0;
}



// FUNCTION 143631780 FUN_143631780 body=187 status=ok
// SIG undefined FUN_143631780(void)

bool FUN_143631780(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_48 [8];
  uint local_28 [8];
  
  uVar4 = *param_2;
  uVar1 = *param_1;
  uVar3 = FUN_1435900f0(local_28,*param_3);
  uVar4 = FUN_1435900f0(local_48,uVar4);
  iVar2 = FUN_14361f5f0(uVar1,param_1[1],uVar4,uVar3);
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
  return iVar2 == 0;
}



// FUNCTION 143631840 FUN_143631840 body=135 status=ok
// SIG undefined FUN_143631840(void)

void FUN_143631840(longlong param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar1 = *(uint *)(lVar2 + lVar3) & 0x1f;
      if (10 < uVar1) {
        if (uVar1 < 0xd) {
          lVar2 = lVar2 + 0x10;
        }
        else {
          if (0xe < uVar1) goto LAB_1436318a2;
          lVar2 = lVar2 + 0x18;
        }
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          (*param_3)(param_2);
        }
      }
LAB_1436318a2:
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1436318d0 FUN_1436318d0 body=112 status=ok
// SIG undefined FUN_1436318d0(void)

void FUN_1436318d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7af48)(DAT_146b7af50 + lVar2,local_18);
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



// FUNCTION 143631940 FUN_143631940 body=175 status=ok
// SIG undefined FUN_143631940(void)

void FUN_143631940(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7aff8)((longlong)DAT_146b7b000 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436319f0 FUN_1436319f0 body=112 status=ok
// SIG undefined FUN_1436319f0(void)

void FUN_1436319f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b008)(DAT_146b7b010 + lVar2,local_18);
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



// FUNCTION 143631a60 FUN_143631a60 body=112 status=ok
// SIG undefined FUN_143631a60(void)

void FUN_143631a60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7afe8)(DAT_146b7aff0 + lVar2,local_18);
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



// FUNCTION 143631ad0 FUN_143631ad0 body=112 status=ok
// SIG undefined FUN_143631ad0(void)

void FUN_143631ad0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7add8)(DAT_146b7ade0 + lVar2,local_18);
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



// FUNCTION 143631b40 FUN_143631b40 body=175 status=ok
// SIG undefined FUN_143631b40(void)

void FUN_143631b40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7ae88)((longlong)DAT_146b7ae90 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143631bf0 FUN_143631bf0 body=148 status=ok
// SIG undefined FUN_143631bf0(void)

void FUN_143631bf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7ae98)(DAT_146b7aea0 + lVar1,local_28);
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



// FUNCTION 143631c90 FUN_143631c90 body=148 status=ok
// SIG undefined FUN_143631c90(void)

void FUN_143631c90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7ae78)(DAT_146b7ae80 + lVar1,local_28);
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



// FUNCTION 143631d30 FUN_143631d30 body=112 status=ok
// SIG undefined FUN_143631d30(void)

void FUN_143631d30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7aaf8)(DAT_146b7ab00 + lVar2,local_18);
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



// FUNCTION 143631da0 FUN_143631da0 body=175 status=ok
// SIG undefined FUN_143631da0(void)

void FUN_143631da0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7aba8)((longlong)DAT_146b7abb0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143631e50 FUN_143631e50 body=145 status=ok
// SIG undefined FUN_143631e50(void)

void FUN_143631e50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7abb8)((longlong)DAT_146b7abc0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143631ef0 FUN_143631ef0 body=145 status=ok
// SIG undefined FUN_143631ef0(void)

void FUN_143631ef0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7ab98)((longlong)DAT_146b7aba0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143631f90 FUN_143631f90 body=112 status=ok
// SIG undefined FUN_143631f90(void)

void FUN_143631f90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a988)(DAT_146b7a990 + lVar2,local_18);
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



// FUNCTION 143632000 FUN_143632000 body=175 status=ok
// SIG undefined FUN_143632000(void)

void FUN_143632000(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7aa38)((longlong)DAT_146b7aa40 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436320f0 FUN_1436320f0 body=112 status=ok
// SIG undefined FUN_1436320f0(void)

void FUN_1436320f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7ac68)(DAT_146b7ac70 + lVar2,local_18);
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



// FUNCTION 143632160 FUN_143632160 body=175 status=ok
// SIG undefined FUN_143632160(void)

void FUN_143632160(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7ad18)((longlong)DAT_146b7ad20 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143632210 FUN_143632210 body=145 status=ok
// SIG undefined FUN_143632210(void)

void FUN_143632210(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7ad28)((longlong)DAT_146b7ad30 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436322b0 FUN_1436322b0 body=145 status=ok
// SIG undefined FUN_1436322b0(void)

void FUN_1436322b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7ad08)((longlong)DAT_146b7ad10 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143632350 FUN_143632350 body=200 status=ok
// SIG undefined FUN_143632350(void)

void FUN_143632350(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7af58)(DAT_146b7af60 + lVar2,&local_18,local_10);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 143632420 FUN_143632420 body=193 status=ok
// SIG undefined FUN_143632420(void)

void FUN_143632420(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b028)((longlong)DAT_146b7b030 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 1436324f0 FUN_1436324f0 body=200 status=ok
// SIG undefined FUN_1436324f0(void)

void FUN_1436324f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ade8)(DAT_146b7adf0 + lVar2,&local_18,local_10);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 1436325c0 FUN_1436325c0 body=193 status=ok
// SIG undefined FUN_1436325c0(void)

void FUN_1436325c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aeb8)((longlong)DAT_146b7aec0 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143632690 FUN_143632690 body=200 status=ok
// SIG undefined FUN_143632690(void)

void FUN_143632690(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ab08)(DAT_146b7ab10 + lVar2,&local_18,local_10);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 143632760 FUN_143632760 body=193 status=ok
// SIG undefined FUN_143632760(void)

void FUN_143632760(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7abd8)((longlong)DAT_146b7abe0 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143632830 FUN_143632830 body=200 status=ok
// SIG undefined FUN_143632830(void)

void FUN_143632830(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a998)(DAT_146b7a9a0 + lVar2,&local_18,local_10);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 143632900 FUN_143632900 body=193 status=ok
// SIG undefined FUN_143632900(void)

void FUN_143632900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aa68)((longlong)DAT_146b7aa70 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 1436329d0 FUN_1436329d0 body=200 status=ok
// SIG undefined FUN_1436329d0(void)

void FUN_1436329d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ac78)(DAT_146b7ac80 + lVar2,&local_18,local_10);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 143632aa0 FUN_143632aa0 body=193 status=ok
// SIG undefined FUN_143632aa0(void)

void FUN_143632aa0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ad48)((longlong)DAT_146b7ad50 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143632b70 FUN_143632b70 body=176 status=ok
// SIG undefined FUN_143632b70(void)

void FUN_143632b70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7af68)((longlong)DAT_146b7af70 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143632c50 FUN_143632c50 body=208 status=ok
// SIG undefined FUN_143632c50(void)

void FUN_143632c50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7af88)((longlong)DAT_146b7af90 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143632d80 FUN_143632d80 body=249 status=ok
// SIG undefined FUN_143632d80(void)

void FUN_143632d80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  longlong local_20;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_28[0] = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 4);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  local_18 = param_6[0xc];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b048)(DAT_146b7b050 + lVar2,local_28,&local_20);
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143632e80 FUN_143632e80 body=249 status=ok
// SIG undefined FUN_143632e80(void)

void FUN_143632e80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  longlong local_20;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_28[0] = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 4);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  local_18 = param_6[0xc];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b058)(DAT_146b7b060 + lVar2,local_28,&local_20);
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143632f80 FUN_143632f80 body=176 status=ok
// SIG undefined FUN_143632f80(void)

void FUN_143632f80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7afa8)((longlong)DAT_146b7afb0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633070 FUN_143633070 body=208 status=ok
// SIG undefined FUN_143633070(void)

void FUN_143633070(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7afd8)((longlong)DAT_146b7afe0 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143633140 FUN_143633140 body=176 status=ok
// SIG undefined FUN_143633140(void)

void FUN_143633140(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7adf8)((longlong)DAT_146b7ae00 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633220 FUN_143633220 body=208 status=ok
// SIG undefined FUN_143633220(void)

void FUN_143633220(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ae18)((longlong)DAT_146b7ae20 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143633350 FUN_143633350 body=175 status=ok
// SIG undefined FUN_143633350(void)

void FUN_143633350(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aed8)((longlong)DAT_146b7aee0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633400 FUN_143633400 body=175 status=ok
// SIG undefined FUN_143633400(void)

void FUN_143633400(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aee8)((longlong)DAT_146b7aef0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1436334b0 FUN_1436334b0 body=176 status=ok
// SIG undefined FUN_1436334b0(void)

void FUN_1436334b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ae38)((longlong)DAT_146b7ae40 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1436335a0 FUN_1436335a0 body=208 status=ok
// SIG undefined FUN_1436335a0(void)

void FUN_1436335a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ae68)((longlong)DAT_146b7ae70 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143633670 FUN_143633670 body=176 status=ok
// SIG undefined FUN_143633670(void)

void FUN_143633670(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ab18)((longlong)DAT_146b7ab20 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633750 FUN_143633750 body=208 status=ok
// SIG undefined FUN_143633750(void)

void FUN_143633750(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ab38)((longlong)DAT_146b7ab40 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143633880 FUN_143633880 body=176 status=ok
// SIG undefined FUN_143633880(void)

void FUN_143633880(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7abf8)((longlong)DAT_146b7ac00 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633930 FUN_143633930 body=176 status=ok
// SIG undefined FUN_143633930(void)

void FUN_143633930(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ac08)((longlong)DAT_146b7ac10 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1436339e0 FUN_1436339e0 body=176 status=ok
// SIG undefined FUN_1436339e0(void)

void FUN_1436339e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ab58)((longlong)DAT_146b7ab60 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633ad0 FUN_143633ad0 body=208 status=ok
// SIG undefined FUN_143633ad0(void)

void FUN_143633ad0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ab88)((longlong)DAT_146b7ab90 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143633ba0 FUN_143633ba0 body=176 status=ok
// SIG undefined FUN_143633ba0(void)

void FUN_143633ba0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a9a8)((longlong)DAT_146b7a9b0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633c80 FUN_143633c80 body=208 status=ok
// SIG undefined FUN_143633c80(void)

void FUN_143633c80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a9c8)((longlong)DAT_146b7a9d0 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143633db0 FUN_143633db0 body=172 status=ok
// SIG undefined FUN_143633db0(void)

void FUN_143633db0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  longlong local_20;
  undefined4 local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = *(undefined4 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aa88)((longlong)DAT_146b7aa90 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633e60 FUN_143633e60 body=172 status=ok
// SIG undefined FUN_143633e60(void)

void FUN_143633e60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  longlong local_20;
  undefined4 local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = *(undefined4 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aa98)((longlong)DAT_146b7aaa0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143633f10 FUN_143633f10 body=176 status=ok
// SIG undefined FUN_143633f10(void)

void FUN_143633f10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a9e8)((longlong)DAT_146b7a9f0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143634000 FUN_143634000 body=208 status=ok
// SIG undefined FUN_143634000(void)

void FUN_143634000(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aa18)((longlong)DAT_146b7aa20 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 1436340d0 FUN_1436340d0 body=176 status=ok
// SIG undefined FUN_1436340d0(void)

void FUN_1436340d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ac88)((longlong)DAT_146b7ac90 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1436341b0 FUN_1436341b0 body=208 status=ok
// SIG undefined FUN_1436341b0(void)

void FUN_1436341b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7aca8)((longlong)DAT_146b7acb0 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 1436342e0 FUN_1436342e0 body=176 status=ok
// SIG undefined FUN_1436342e0(void)

void FUN_1436342e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ad68)((longlong)DAT_146b7ad70 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143634390 FUN_143634390 body=176 status=ok
// SIG undefined FUN_143634390(void)

void FUN_143634390(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7ad78)((longlong)DAT_146b7ad80 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143634440 FUN_143634440 body=176 status=ok
// SIG undefined FUN_143634440(void)

void FUN_143634440(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = param_6;
  local_18 = param_6 + 0x20;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7acc8)((longlong)DAT_146b7acd0 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143634530 FUN_143634530 body=208 status=ok
// SIG undefined FUN_143634530(void)

void FUN_143634530(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = 0;
  local_18 = param_6 + 0x20;
  local_20 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7acf8)((longlong)DAT_146b7ad00 + *(longlong *)(param_3 + 0x10),&local_28,param_6,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143634600 FUN_143634600 body=87 status=ok
// SIG undefined FUN_143634600(void)

void FUN_143634600(longlong param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
  if (9 < ((byte)*param_3 & 0x1f)) {
    if ((*param_3 >> 9 & 1) == 0) {
      FUN_1435920c0(param_3);
    }
    else {
      FUN_143592150();
    }
  }
  *param_3 = *param_3 & 0xffffffe2;
  *param_3 = *param_3 | 2;
  *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_14,uVar1);
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return;
}



// FUNCTION 143634660 FUN_143634660 body=87 status=ok
// SIG undefined FUN_143634660(void)

void FUN_143634660(longlong param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
  if (9 < ((byte)*param_3 & 0x1f)) {
    if ((*param_3 >> 9 & 1) == 0) {
      FUN_1435920c0(param_3);
    }
    else {
      FUN_143592150();
    }
  }
  *param_3 = *param_3 & 0xffffffe3;
  *param_3 = *param_3 | 3;
  *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_14,uVar1);
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return;
}



// FUNCTION 1436346c0 FUN_1436346c0 body=92 status=ok
// SIG undefined FUN_1436346c0(void)

void FUN_1436346c0(longlong param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 8);
  if (9 < ((byte)*param_3 & 0x1f)) {
    if ((*param_3 >> 9 & 1) == 0) {
      FUN_1435920c0(param_3);
    }
    else {
      FUN_143592150();
    }
  }
  *param_3 = *param_3 & 0xffffffe4;
  *param_3 = *param_3 | 4;
  *(undefined8 *)(param_3 + 4) = uVar1;
  *(undefined8 *)(param_3 + 6) = uStack_20;
  return;
}



// FUNCTION 143634760 FUN_143634760 body=42 status=ok
// SIG undefined FUN_143634760(void)

void FUN_143634760(longlong param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
  *param_3 = *param_3 & 0xffffffe2 | 2;
  *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_14,uVar1);
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return;
}



// FUNCTION 143634790 FUN_143634790 body=42 status=ok
// SIG undefined FUN_143634790(void)

void FUN_143634790(longlong param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
  *param_3 = *param_3 & 0xffffffe3 | 3;
  *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_14,uVar1);
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return;
}



// FUNCTION 1436347c0 FUN_1436347c0 body=46 status=ok
// SIG undefined FUN_1436347c0(void)

void FUN_1436347c0(longlong param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_10;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 8);
  *param_3 = *param_3 & 0xffffffe4 | 4;
  *(undefined8 *)(param_3 + 4) = uVar1;
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return;
}



// FUNCTION 143634830 FUN_143634830 body=137 status=ok
// SIG undefined FUN_143634830(void)

void FUN_143634830(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)param_4;
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    lVar3 = uVar2 << 5;
    do {
      cVar1 = FUN_1435927d0(*(longlong *)(param_1 + 0x18) + lVar3,param_3);
      if (cVar1 != '\0') {
        *param_2 = (int)uVar2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  *param_2 = 0xffffffff;
  return;
}



// FUNCTION 1436348c0 FUN_1436348c0 body=210 status=ok
// SIG undefined FUN_1436348c0(void)

void FUN_1436348c0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  void *_Src;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    puVar8 = (undefined4 *)(param_4 + 0x10);
    uVar6 = (ulonglong)param_3;
    do {
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      uVar4 = *puVar8;
      uVar2 = uVar5 + 1;
      if (uVar2 < uVar5) {
        uVar7 = uVar2;
        if (uVar2 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_143634926:
          FUN_1434efc20(plVar1,*(undefined8 *)(param_1 + 0x30),uVar7);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar2) {
        uVar7 = (uVar2 >> 2) + uVar2;
        goto LAB_143634926;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar2;
      if (param_2 < uVar5) {
        _Src = (void *)(*plVar1 + param_2 * 4);
        memmove((void *)((longlong)_Src + 4),_Src,(uVar2 - param_2) * 4 - 4);
      }
      puVar3 = (undefined4 *)(*plVar1 + param_2 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uVar4;
      }
      puVar8 = puVar8 + 8;
      param_2 = param_2 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1436349a0 FUN_1436349a0 body=233 status=ok
// SIG undefined FUN_1436349a0(void)

void FUN_1436349a0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_4 + 0x10);
    plVar1 = (longlong *)(param_1 + 0x18);
    uVar8 = (ulonglong)param_3;
    do {
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      uVar4 = *puVar6;
      uVar2 = uVar5 + 1;
      if (uVar2 < uVar5) {
        uVar7 = uVar2;
        if (uVar2 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_143634a17:
          FUN_1432f2240(plVar1,*(undefined8 *)(param_1 + 0x30),uVar7);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar2) {
        uVar7 = (uVar2 >> 2) + uVar2;
        goto LAB_143634a17;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar2;
      if (param_2 < uVar5) {
        _Src = (void *)(*plVar1 + param_2 * 8);
        memmove((void *)((longlong)_Src + 8),_Src,(uVar2 - param_2) * 8 - 8);
      }
      puVar3 = (undefined8 *)(*plVar1 + param_2 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = uVar4;
      }
      puVar6 = puVar6 + 4;
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 143634a90 FUN_143634a90 body=271 status=ok
// SIG undefined FUN_143634a90(void)

void FUN_143634a90(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  int *piVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    plVar10 = (longlong *)(param_4 + 0x10);
    uVar9 = (ulonglong)param_3;
    do {
      lVar5 = *plVar10;
      if (lVar5 != 0) {
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      }
      uVar6 = *(ulonglong *)(param_1 + 0x20);
      uVar2 = uVar6 + 1;
      FUN_143578f70(plVar1,*(undefined8 *)(param_1 + 0x30),uVar2);
      if (uVar6 < uVar2) {
        puVar7 = (undefined8 *)(*plVar1 + uVar6 * 8);
        for (lVar8 = uVar2 - uVar6; lVar8 != 0; lVar8 = lVar8 + -1) {
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
        }
      }
      if (param_2 < *(longlong *)(param_1 + 0x20) - 1U) {
        _Src = (void *)(*plVar1 + param_2 * 8);
        memmove((void *)((longlong)_Src + 8),_Src,(*(longlong *)(param_1 + 0x20) - param_2) * 8 - 8)
        ;
      }
      plVar4 = (longlong *)(*plVar1 + param_2 * 8);
      if (plVar4 != (longlong *)0x0) {
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
        }
        *plVar4 = lVar5;
      }
      if (lVar5 != 0) {
        piVar3 = (int *)(lVar5 + 0x18);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FUN_14335f920(lVar5);
        }
      }
      plVar10 = plVar10 + 4;
      param_2 = param_2 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 143634ba0 FUN_143634ba0 body=214 status=ok
// SIG undefined FUN_143634ba0(void)

void FUN_143634ba0(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  ulonglong uVar1;
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      local_20 = *(undefined8 *)(param_4 + 2);
      local_28[0] = *param_4;
      local_18 = param_4[4];
      uStack_14 = param_4[5];
      uStack_10 = param_4[6];
      uStack_c = param_4[7];
      if (9 < ((byte)local_28[0] & 0x1f)) {
        if ((local_28[0] >> 9 & 1) == 0) {
          FUN_143592070(param_4);
        }
        else {
          FUN_143592140();
        }
      }
      FUN_1434ef2e0(param_1 + 0x18,uVar1 + param_2,local_28);
      if (9 < ((byte)local_28[0] & 0x1f)) {
        if ((local_28[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_28);
        }
        else {
          FUN_143592150();
        }
      }
      uVar1 = uVar1 + 1;
      param_4 = param_4 + 8;
    } while (uVar1 < param_3);
  }
  return;
}



// FUNCTION 143634c80 FUN_143634c80 body=268 status=ok
// SIG undefined FUN_143634c80(void)

void FUN_143634c80(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1433ab800(param_1,param_1[1] + param_3);
  if (param_2 < param_1[1] - param_3) {
    memmove((void *)(*param_1 + (param_2 + param_3) * 8),(void *)(*param_1 + param_2 * 8),
            ((param_1[1] - param_2) - param_3) * 8);
  }
  uVar4 = 0;
  if (3 < param_3) {
    lVar1 = param_2 * 8;
    lVar3 = (param_3 - 4 >> 2) + 1;
    uVar4 = lVar3 * 4;
    do {
      if ((undefined8 *)(*param_1 + lVar1) != (undefined8 *)0x0) {
        *(undefined8 *)(*param_1 + lVar1) = *param_4;
      }
      puVar2 = (undefined8 *)(*param_1 + 8 + lVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_4;
      }
      puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_4;
      }
      puVar2 = (undefined8 *)(*param_1 + 0x18 + lVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_4;
      }
      lVar1 = lVar1 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (uVar4 < param_3) {
    lVar1 = (uVar4 + param_2) * 8;
    lVar3 = param_3 - uVar4;
    do {
      if ((undefined8 *)(*param_1 + lVar1) != (undefined8 *)0x0) {
        *(undefined8 *)(*param_1 + lVar1) = *param_4;
      }
      lVar1 = lVar1 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143634d90 FUN_143634d90 body=221 status=ok
// SIG undefined FUN_143634d90(void)

void FUN_143634d90(longlong *param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar3 = param_1[1];
  uVar2 = uVar3 + param_3;
  FUN_143578f70(param_1,param_1[3],uVar2);
  if (uVar3 < uVar2) {
    puVar5 = (undefined8 *)(*param_1 + uVar3 * 8);
    for (lVar6 = uVar2 - uVar3; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
    }
  }
  if (param_2 < (ulonglong)(param_1[1] - param_3)) {
    memmove((void *)(*param_1 + (param_2 + param_3) * 8),(void *)(*param_1 + param_2 * 8),
            ((param_1[1] - param_2) - param_3) * 8);
  }
  if (param_3 != 0) {
    lVar6 = param_2 * 8;
    do {
      lVar4 = *param_1;
      if ((longlong *)(lVar4 + lVar6) != (longlong *)0x0) {
        if (*param_4 != 0) {
          piVar1 = (int *)(*param_4 + 0x18);
          *piVar1 = *piVar1 + 1;
        }
        *(longlong *)(lVar4 + lVar6) = *param_4;
      }
      lVar6 = lVar6 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143634e70 FUN_143634e70 body=259 status=ok
// SIG undefined FUN_143634e70(void)

void FUN_143634e70(longlong *param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  uVar2 = param_1[1];
  uVar1 = uVar2 + param_3;
  FUN_1434f0300(param_1,param_1[3],uVar1);
  if (uVar2 < uVar1) {
    puVar6 = (undefined4 *)(uVar2 * 0x20 + *param_1);
    for (lVar8 = uVar1 - uVar2; lVar8 != 0; lVar8 = lVar8 + -1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
      }
      puVar6 = puVar6 + 8;
    }
  }
  if (param_2 < (ulonglong)(param_1[1] - param_3)) {
    memmove((void *)((param_2 + param_3) * 0x20 + *param_1),(void *)(param_2 * 0x20 + *param_1),
            ((param_1[1] - param_2) - param_3) * 0x20);
  }
  if (param_3 != 0) {
    lVar8 = param_2 << 5;
    do {
      puVar7 = (uint *)(*param_1 + lVar8);
      if (puVar7 != (uint *)0x0) {
        *puVar7 = *param_4;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_4 + 2);
        uVar3 = param_4[5];
        uVar4 = param_4[6];
        uVar5 = param_4[7];
        puVar7[4] = param_4[4];
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar5;
        if (9 < ((byte)*param_4 & 0x1f)) {
          if ((*param_4 >> 9 & 1) == 0) {
            FUN_143592070(param_4);
          }
          else {
            FUN_143592140();
          }
        }
      }
      lVar8 = lVar8 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143634f80 FUN_143634f80 body=132 status=ok
// SIG undefined FUN_143634f80(void)

void FUN_143634f80(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x20) - 1;
  if (param_4 < lVar2) {
    lVar2 = (longlong)param_4;
  }
  if (-1 < lVar2) {
    lVar3 = lVar2 << 5;
    do {
      cVar1 = FUN_1435927d0(*(longlong *)(param_1 + 0x18) + lVar3,param_3);
      if (cVar1 != '\0') {
        *param_2 = (int)lVar2;
        return;
      }
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *param_2 = 0xffffffff;
  return;
}



// FUNCTION 143635010 FUN_143635010 body=150 status=ok
// SIG undefined FUN_143635010(void)

undefined8 * FUN_143635010(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_2);
    *param_1 = puVar3;
    *puVar3 = &PTR_FUN_145b4edd8;
    lVar1 = *(longlong *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    puVar3[8] = &PTR__scalar_deleting_destructor__145b4e708;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[10] = lVar1;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436350b0 FUN_1436350b0 body=150 status=ok
// SIG undefined FUN_1436350b0(void)

undefined8 * FUN_1436350b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_2);
    *param_1 = puVar3;
    *puVar3 = &PTR_FUN_145b4ebc8;
    lVar1 = *(longlong *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    puVar3[8] = &PTR_FUN_145b4eba0;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[10] = lVar1;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143635150 FUN_143635150 body=150 status=ok
// SIG undefined FUN_143635150(void)

undefined8 * FUN_143635150(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_2);
    *param_1 = puVar3;
    *puVar3 = &PTR_FUN_145b4e758;
    lVar1 = *(longlong *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    puVar3[8] = &PTR_FUN_145b4e730;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[10] = lVar1;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436351f0 FUN_1436351f0 body=150 status=ok
// SIG undefined FUN_1436351f0(void)

undefined8 * FUN_1436351f0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_2);
    *param_1 = puVar3;
    *puVar3 = &PTR_FUN_145b4efe8;
    lVar1 = *(longlong *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    puVar3[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[10] = lVar1;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143635290 FUN_143635290 body=150 status=ok
// SIG undefined FUN_143635290(void)

undefined8 * FUN_143635290(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_2);
    *param_1 = puVar3;
    *puVar3 = &PTR_FUN_145b4e990;
    lVar1 = *(longlong *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    puVar3[8] = &PTR_FUN_145b4e968;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[10] = lVar1;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143635330 FUN_143635330 body=190 status=ok
// SIG undefined FUN_143635330(void)

uint * FUN_143635330(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  puVar7 = (uint *)(*param_1 + -0x20 + param_1[1] * 0x20);
  *param_2 = *puVar7;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar7 + 2);
  uVar3 = puVar7[5];
  uVar4 = puVar7[6];
  uVar5 = puVar7[7];
  param_2[4] = puVar7[4];
  param_2[5] = uVar3;
  param_2[6] = uVar4;
  param_2[7] = uVar5;
  if (9 < ((byte)*puVar7 & 0x1f)) {
    if ((*puVar7 >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  uVar2 = param_1[1];
  uVar1 = uVar2 - 1;
  FUN_1434f0300(param_1,param_1[3],uVar1);
  if (uVar2 < uVar1) {
    puVar6 = (undefined4 *)(uVar2 * 0x20 + *param_1);
    for (lVar8 = uVar1 - uVar2; lVar8 != 0; lVar8 = lVar8 + -1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
      }
      puVar6 = puVar6 + 8;
    }
  }
  return param_2;
}



// FUNCTION 1436353f0 FUN_1436353f0 body=433 status=ok
// SIG undefined FUN_1436353f0(void)

void FUN_1436353f0(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_58 [8];
  longlong local_50;
  uint local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_58,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar6);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar7 = 0, param_2 != 0)) {
    do {
      local_48[0] = 0;
      local_40 = 0;
      cVar5 = (**(code **)(*param_4 + 0x58))(param_4,uVar7 * 0x20 + param_3,local_48);
      uVar4 = local_38;
      if (cVar5 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar6 = FUN_1435c8e40(local_58,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar6);
        piVar1 = (int *)(local_50 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (((byte)local_48[0] & 0x1f) < 10) {
          return;
        }
        if ((local_48[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_48);
        return;
      }
      uVar8 = *(longlong *)(param_1 + 0x20) + 1;
      if (uVar8 < *(ulonglong *)(param_1 + 0x20)) {
        uVar10 = uVar8;
        if (uVar8 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_1436354d0:
          FUN_1434efc20(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar10);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar8) {
        uVar10 = (uVar8 >> 2) + uVar8;
        goto LAB_1436354d0;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar8;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + uVar8 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uVar4;
      }
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
    } while (uVar9 < param_2);
  }
  return;
}



// FUNCTION 1436355b0 FUN_1436355b0 body=455 status=ok
// SIG undefined FUN_1436355b0(void)

void FUN_1436355b0(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 local_68 [8];
  longlong local_60;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_68,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_60 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar8 = 0, param_2 != 0)) {
    do {
      local_58[0] = 0;
      local_50 = 0;
      cVar4 = (**(code **)(*param_4 + 0x58))(param_4,uVar8 * 0x20 + param_3,local_58);
      uVar3 = local_48;
      if (cVar4 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = FUN_1435c8e40(local_68,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar5);
        piVar1 = (int *)(local_60 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (((byte)local_58[0] & 0x1f) < 10) {
          return;
        }
        if ((local_58[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_58);
        return;
      }
      uVar6 = *(longlong *)(param_1 + 0x20) + 1;
      if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
        uVar9 = uVar6;
        if (uVar6 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_1436356a1:
          FUN_1432f2240(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar9);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
        uVar9 = (uVar6 >> 2) + uVar6;
        goto LAB_1436356a1;
      }
      *(ulonglong *)(param_1 + 0x20) = uVar6;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + uVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = uVar3;
      }
      if (9 < ((byte)local_58[0] & 0x1f)) {
        if ((local_58[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_58);
        }
        else {
          FUN_143592150();
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < param_2);
  }
  return;
}



// FUNCTION 143635780 FUN_143635780 body=426 status=ok
// SIG undefined FUN_143635780(void)

void FUN_143635780(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_58 [8];
  longlong local_50;
  uint local_48 [2];
  undefined8 local_40;
  longlong local_38;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_58,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar6);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar8 = 0, param_2 != 0)) {
    do {
      local_48[0] = 0;
      local_40 = 0;
      cVar5 = (**(code **)(*param_4 + 0x58))(param_4,uVar8 * 0x20 + param_3,local_48);
      lVar4 = local_38;
      if (cVar5 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar6 = FUN_1435c8e40(local_58,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar6);
        piVar1 = (int *)(local_50 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (((byte)local_48[0] & 0x1f) < 10) {
          return;
        }
        if ((local_48[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_48);
        return;
      }
      if (local_38 != 0) {
        *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1;
      }
      FUN_143578f70(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x20) + 1
                   );
      plVar2 = (longlong *)
               (*(longlong *)(param_1 + 0x18) + (*(longlong *)(param_1 + 0x20) + -1) * 8);
      if (plVar2 != (longlong *)0x0) {
        if (lVar4 != 0) {
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        }
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar4);
        }
      }
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < param_2);
  }
  return;
}



// FUNCTION 143635930 FUN_143635930 body=110 status=ok
// SIG undefined FUN_143635930(void)

void FUN_143635930(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_1434ef7a0(param_1 + 0x18,param_2);
  }
  return;
}



// FUNCTION 1436359a0 FUN_1436359a0 body=323 status=ok
// SIG undefined FUN_1436359a0(void)

void FUN_1436359a0(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  undefined8 local_30;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_48,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar4);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (uVar6 = 0, param_2 != 0)) {
    do {
      local_38[0] = 0;
      local_30 = 0;
      cVar3 = (**(code **)(*param_4 + 0x58))(param_4,uVar6 * 0x20 + param_3,local_38);
      if (cVar3 == '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = FUN_1435c8e40(local_48,0x40a,uVar2);
        FUN_1435cbe70(uVar2,uVar4);
        piVar1 = (int *)(local_40 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (((byte)local_38[0] & 0x1f) < 10) {
          return;
        }
        if ((local_38[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_38);
        return;
      }
      FUN_143635cb0(param_1,local_38);
      if (9 < ((byte)local_38[0] & 0x1f)) {
        if ((local_38[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_38);
        }
        else {
          FUN_143592150();
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_2);
  }
  return;
}



// FUNCTION 143635af0 FUN_143635af0 body=179 status=ok
// SIG undefined FUN_143635af0(void)

void FUN_143635af0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    return;
  }
  uVar5 = *(longlong *)(param_1 + 0x60) + 1;
  if (uVar5 < *(ulonglong *)(param_1 + 0x60)) {
    uVar6 = uVar5;
    if (*(ulonglong *)(param_1 + 0x68) >> 1 <= uVar5) goto LAB_143635b7c;
  }
  else {
    if (uVar5 <= *(ulonglong *)(param_1 + 0x68)) goto LAB_143635b7c;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_1434efc20(param_1 + 0x58,*(undefined8 *)(param_1 + 0x70),uVar6);
LAB_143635b7c:
  *(ulonglong *)(param_1 + 0x60) = uVar5;
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + -4 + uVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_2;
  }
  return;
}



// FUNCTION 143635bb0 FUN_143635bb0 body=118 status=ok
// SIG undefined FUN_143635bb0(void)

void FUN_143635bb0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(longlong *)(param_1 + 0x20) + 1;
  if (uVar3 < *(ulonglong *)(param_1 + 0x20)) {
    uVar4 = uVar3;
    if (*(ulonglong *)(param_1 + 0x28) >> 1 <= uVar3) goto LAB_143635c00;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0x28)) goto LAB_143635c00;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1434efc20((longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),uVar4);
LAB_143635c00:
  *(ulonglong *)(param_1 + 0x20) = uVar3;
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + uVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar2;
  }
  return;
}



// FUNCTION 143635c30 FUN_143635c30 body=122 status=ok
// SIG undefined FUN_143635c30(void)

void FUN_143635c30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(longlong *)(param_1 + 0x20) + 1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  if (uVar3 < *(ulonglong *)(param_1 + 0x20)) {
    uVar4 = uVar3;
    if (*(ulonglong *)(param_1 + 0x28) >> 1 <= uVar3) goto LAB_143635c82;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0x28)) goto LAB_143635c82;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432f2240((longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),uVar4);
LAB_143635c82:
  *(ulonglong *)(param_1 + 0x20) = uVar3;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + uVar3 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uVar2;
  }
  return;
}



// FUNCTION 143635cb0 FUN_143635cb0 body=221 status=ok
// SIG undefined FUN_143635cb0(void)

void FUN_143635cb0(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_20 = *(undefined8 *)(param_2 + 2);
  local_28[0] = *param_2;
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_143592070(param_2);
    }
    else {
      FUN_143592140();
    }
  }
  FUN_1434f0300(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x20) + 1);
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + -0x20 + *(longlong *)(param_1 + 0x20) * 0x20);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = local_28[0];
    *(undefined8 *)(puVar1 + 2) = local_20;
    puVar1[4] = local_18;
    puVar1[5] = uStack_14;
    puVar1[6] = uStack_10;
    puVar1[7] = uStack_c;
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_143592070(local_28);
      }
      else {
        FUN_143592140();
      }
    }
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



// FUNCTION 143635db0 FUN_143635db0 body=105 status=ok
// SIG undefined FUN_143635db0(void)

void FUN_143635db0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  }
  FUN_143578f70((longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                *(longlong *)(param_1 + 0x20) + 1);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + (*(longlong *)(param_1 + 0x20) + -1) * 8);
  if (plVar2 != (longlong *)0x0) {
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    }
    *plVar2 = lVar3;
  }
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  return;
}



// FUNCTION 143635e30 FUN_143635e30 body=115 status=ok
// SIG undefined FUN_143635e30(void)

void FUN_143635e30(longlong *param_1,longlong param_2)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  
  if (param_1[1] == 1) {
    FUN_143578f70(param_1,param_1[3],0);
    return;
  }
  lVar2 = *(longlong *)(*param_1 + param_2 * 8);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 143635eb0 FUN_143635eb0 body=123 status=ok
// SIG undefined FUN_143635eb0(void)

undefined1 * FUN_143635eb0(longlong param_1,undefined1 *param_2,uint param_3)

{
  void *_Dst;
  
  if (*(uint *)(param_1 + 0x20) <= param_3) {
    *param_2 = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x20) == 1) {
    Scaleform::
    ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
    ::Clear((longlong *)(param_1 + 0x18));
    *param_2 = 1;
    return param_2;
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 4);
  memmove(_Dst,(void *)((longlong)_Dst + 4),
          (*(longlong *)(param_1 + 0x20) - (ulonglong)param_3) * 4 - 4);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143635f30 FUN_143635f30 body=123 status=ok
// SIG undefined FUN_143635f30(void)

undefined1 * FUN_143635f30(longlong param_1,undefined1 *param_2,uint param_3)

{
  void *_Dst;
  
  if (*(uint *)(param_1 + 0x20) <= param_3) {
    *param_2 = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x20) == 1) {
    Scaleform::
    ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
    ::Clear((longlong *)(param_1 + 0x18));
    *param_2 = 1;
    return param_2;
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),
          (*(longlong *)(param_1 + 0x20) - (ulonglong)param_3) * 8 - 8);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143635fb0 FUN_143635fb0 body=184 status=ok
// SIG undefined FUN_143635fb0(void)

void FUN_143635fb0(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1[1] == param_3) {
    FUN_143578f70(param_1,param_1[3],0);
    return;
  }
  lVar2 = (param_2 + param_3) * 8;
  plVar3 = (longlong *)(*param_1 + -8 + lVar2);
  for (lVar4 = param_3; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (*plVar3 != 0) {
      piVar1 = (int *)(*plVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    plVar3 = plVar3 + -1;
  }
  memmove((void *)(*param_1 + param_2 * 8),(void *)(*param_1 + lVar2),
          ((param_1[1] - param_2) - param_3) * 8);
  param_1[1] = param_1[1] - param_3;
  return;
}



// FUNCTION 143636070 FUN_143636070 body=178 status=ok
// SIG undefined FUN_143636070(void)

undefined1 * FUN_143636070(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar4 = *(ulonglong *)(param_1 + 0x20);
    FUN_1434f0030(param_1 + 0x18,param_3);
    for (; uVar4 < param_3; uVar4 = uVar4 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = 0;
    }
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143636130 FUN_143636130 body=329 status=ok
// SIG undefined FUN_143636130(void)

undefined1 * FUN_143636130(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_28,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *param_2 = 0;
    return param_2;
  }
  uVar9 = *(ulonglong *)(param_1 + 0x20);
  FUN_143578f70(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),param_3);
  if (uVar9 < param_3) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 8);
    for (lVar6 = param_3 - uVar9; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
    }
    for (; uVar9 < param_3; uVar9 = uVar9 + 1) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x218);
      lVar8 = lVar6 + 0x80;
      if (lVar8 != 0) {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
      }
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 8);
      if (lVar8 != 0) {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
      }
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *plVar2 = lVar8;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar6 + 0x98);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar8);
        }
      }
    }
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143636280 FUN_143636280 body=308 status=ok
// SIG undefined FUN_143636280(void)

undefined1 * FUN_143636280(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint local_28 [2];
  longlong local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_28,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar4);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0x20);
    FUN_1434eff40(param_1 + 0x18,param_3);
    if (uVar3 < param_3) {
      lVar6 = uVar3 << 5;
      lVar7 = param_3 - uVar3;
      do {
        puVar5 = (uint *)FUN_1435905b0();
        local_28[0] = *puVar5;
        local_20 = *(longlong *)(puVar5 + 2);
        local_18 = puVar5[4];
        uStack_14 = puVar5[5];
        uStack_10 = puVar5[6];
        uStack_c = puVar5[7];
        if (9 < ((byte)*puVar5 & 0x1f)) {
          if ((*puVar5 >> 9 & 1) == 0) {
            FUN_143592070(puVar5);
          }
          else {
            FUN_143592140();
          }
        }
        FUN_143590140(*(longlong *)(param_1 + 0x18) + lVar6,local_28);
        if (9 < ((byte)local_28[0] & 0x1f)) {
          if ((local_28[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_28);
          }
          else {
            FUN_143592150();
          }
        }
        lVar6 = lVar6 + 0x20;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1436363c0 FUN_1436363c0 body=181 status=ok
// SIG undefined FUN_1436363c0(void)

void FUN_1436363c0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar3 = (longlong *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x10);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      piVar1 = (int *)(*plVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar3 = plVar3 + -2;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434efcd0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434efcd0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143636480 FUN_143636480 body=443 status=ok
// SIG undefined FUN_143636480(void)

undefined1 *
FUN_143636480(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4,longlong *param_5
             )

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_58 [8];
  longlong local_50;
  uint local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  
  if (((*(char *)(param_1 + 8) != '\0') && (*(uint *)(param_1 + 0x20) <= param_3)) ||
     (*(uint *)(param_1 + 0x20) < param_3)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_58,0x465,uVar2);
    FUN_1435cbdf0(uVar2,uVar5);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  if (param_3 == *(uint *)(param_1 + 0x20)) {
    if (*(char *)(param_1 + 8) != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_1435c8e40(local_58,0x466,uVar2);
      FUN_1435cbdf0(uVar2,uVar5);
      piVar1 = (int *)(local_50 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (*(char *)(param_1 + 8) != '\0') {
      *param_2 = 0;
      return param_2;
    }
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    FUN_1434f0030(param_1 + 0x18,(ulonglong)(param_3 + 1));
    for (; uVar6 < param_3 + 1; uVar6 = uVar6 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) = 0;
    }
  }
  local_48[0] = 0;
  local_40 = 0;
  cVar4 = (**(code **)(*param_5 + 0x58))(param_5,param_4,local_48);
  if (cVar4 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_58,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    *param_2 = 1;
    *(undefined4 *)(lVar3 + (ulonglong)param_3 * 4) = local_38;
  }
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



// FUNCTION 143636640 FUN_143636640 body=327 status=ok
// SIG undefined FUN_143636640(void)

undefined1 *
FUN_143636640(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4,longlong *param_5
             )

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong local_30;
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  if (((*(char *)(param_1 + 8) == '\0') || (param_3 < *(uint *)(param_1 + 0x20))) &&
     (param_3 <= *(uint *)(param_1 + 0x20))) {
    if (param_3 == *(uint *)(param_1 + 0x20)) {
      pcVar7 = (char *)FUN_143636130(param_1,local_res8,param_3 + 1);
      if (*pcVar7 == '\0') goto LAB_14363669c;
    }
    local_28[0] = 0;
    local_20 = 0;
    cVar5 = (**(code **)(*param_5 + 0x58))(param_5,param_4,local_28);
    if (cVar5 == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = FUN_1435c8e40(local_38,0x40a,uVar3);
      FUN_1435cbe70(uVar3,uVar6);
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 8);
      if (local_18 != 0) {
        *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
      }
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *plVar2 = local_18;
      *param_2 = 1;
    }
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_38,0x465,uVar3);
    FUN_1435cbdf0(uVar3,uVar6);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
LAB_14363669c:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143636790 FUN_143636790 body=299 status=ok
// SIG undefined FUN_143636790(void)

undefined1 *
FUN_143636790(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4,longlong *param_5
             )

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong local_30;
  uint local_28 [2];
  undefined8 local_20;
  
  if (((*(char *)(param_1 + 8) == '\0') || (param_3 < *(uint *)(param_1 + 0x20))) &&
     (param_3 <= *(uint *)(param_1 + 0x20))) {
    if (param_3 == *(uint *)(param_1 + 0x20)) {
      pcVar5 = (char *)FUN_143636280(param_1,local_res8,param_3 + 1);
      if (*pcVar5 == '\0') goto LAB_1436367ed;
    }
    local_28[0] = 0;
    local_20 = 0;
    cVar3 = (**(code **)(*param_5 + 0x58))(param_5,param_4,local_28);
    if (cVar3 == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_1435c8e40(local_38,0x40a,uVar2);
      FUN_1435cbe70(uVar2,uVar4);
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
    }
    else {
      FUN_1436368c0(param_1,param_3,local_28);
      *param_2 = 1;
    }
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_38,0x465,uVar2);
    FUN_1435cbdf0(uVar2,uVar4);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
LAB_1436367ed:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1436368c0 FUN_1436368c0 body=156 status=ok
// SIG undefined FUN_1436368c0(void)

void FUN_1436368c0(longlong param_1,ulonglong param_2,uint *param_3)

{
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_20 = *(undefined8 *)(param_3 + 2);
  local_28[0] = *param_3;
  local_18 = param_3[4];
  uStack_14 = param_3[5];
  uStack_10 = param_3[6];
  uStack_c = param_3[7];
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_143592070(param_3);
    }
    else {
      FUN_143592140();
    }
  }
  FUN_143590140((param_2 & 0xffffffff) * 0x20 + *(longlong *)(param_1 + 0x18),local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143636960 FUN_143636960 body=356 status=ok
// SIG undefined FUN_143636960(void)

void FUN_143636960(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar10 = 0;
  uVar9 = (ulonglong)param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_28,0x466,uVar5);
    FUN_1435cbdf0(uVar5,uVar4);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar6 = uVar10;
    if (param_2 != 0) {
      do {
        uVar5 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar6 * 0x20 + param_3);
        cVar3 = FUN_1435b5020(param_4,uVar5);
        if (cVar3 == '\0') {
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          uVar4 = FUN_1435c8e40(local_28,0x40a,uVar5);
          FUN_1435cbe70(uVar5,uVar4);
          piVar1 = (int *)(local_20 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 < param_2);
    }
    FUN_1434f0030(param_1 + 0x18,*(longlong *)(param_1 + 0x20) + uVar9);
    lVar11 = *(longlong *)(param_1 + 0x20) - uVar9;
    if (lVar11 != 0) {
      memmove((void *)((longlong)*(void **)(param_1 + 0x18) + uVar9 * 4),*(void **)(param_1 + 0x18),
              lVar11 * 4);
    }
    uVar6 = uVar10;
    if (param_2 != 0) {
      do {
        puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
      if (param_2 != 0) {
        puVar7 = (undefined4 *)(param_3 + 0x10);
        do {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 8;
          *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0x18)) = uVar2;
          uVar9 = uVar9 - 1;
          uVar10 = uVar10 + 4;
        } while (uVar9 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143636ad0 FUN_143636ad0 body=425 status=ok
// SIG undefined FUN_143636ad0(void)

void FUN_143636ad0(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong uVar7;
  
  uVar10 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_28,0x466,uVar4);
    FUN_1435cbdf0(uVar4,uVar3);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar7 = uVar10;
    if (param_2 != 0) {
      do {
        uVar4 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar7 * 0x20 + param_3);
        cVar2 = FUN_1435b5020(param_4,uVar4);
        if (cVar2 == '\0') {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = FUN_1435c8e40(local_28,0x40a,uVar4);
          FUN_1435cbe70(uVar4,uVar3);
          piVar1 = (int *)(local_20 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < param_2);
    }
    local_res8 = 0;
    FUN_143634c80(param_1 + 0x18,0,param_2,&local_res8);
    uVar7 = uVar10;
    if (3 < param_2) {
      uVar6 = (param_2 - 4 >> 2) + 1;
      uVar9 = (ulonglong)uVar6;
      uVar7 = (ulonglong)(uVar6 * 4);
      puVar8 = (undefined8 *)(param_3 + 0x30);
      do {
        *(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x18)) = puVar8[-4];
        *(undefined8 *)(uVar10 + 8 + *(longlong *)(param_1 + 0x18)) = *puVar8;
        *(undefined8 *)(uVar10 + 0x10 + *(longlong *)(param_1 + 0x18)) = puVar8[4];
        *(undefined8 *)(uVar10 + 0x18 + *(longlong *)(param_1 + 0x18)) = puVar8[8];
        uVar9 = uVar9 - 1;
        uVar10 = uVar10 + 0x20;
        puVar8 = puVar8 + 0x10;
      } while (uVar9 != 0);
    }
    if ((uint)uVar7 < param_2) {
      puVar8 = (undefined8 *)(param_3 + 0x10 + uVar7 * 0x20);
      uVar10 = (ulonglong)(param_2 - (uint)uVar7);
      lVar5 = uVar7 * 8;
      do {
        uVar4 = *puVar8;
        puVar8 = puVar8 + 4;
        *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x18)) = uVar4;
        uVar10 = uVar10 - 1;
        lVar5 = lVar5 + 8;
      } while (uVar10 != 0);
    }
  }
  return;
}



// FUNCTION 143636c80 FUN_143636c80 body=334 status=ok
// SIG undefined FUN_143636c80(void)

void FUN_143636c80(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  undefined1 local_38 [8];
  longlong local_30;
  
  uVar12 = 0;
  uVar10 = (ulonglong)param_2;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1435c8e40(local_38,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar6);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar9 = uVar12;
    if (param_2 != 0) {
      do {
        uVar2 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar9 * 0x20 + param_3);
        cVar7 = FUN_1435b5020(param_4,uVar2);
        if (cVar7 == '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          uVar6 = FUN_1435c8e40(local_38,0x40a,uVar2);
          FUN_1435cbe70(uVar2,uVar6);
          piVar1 = (int *)(local_30 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < param_2);
    }
    local_res8 = 0;
    FUN_143634d90((longlong *)(param_1 + 0x18),0,uVar10,&local_res8);
    if (param_2 != 0) {
      plVar11 = (longlong *)(param_3 + 0x10);
      do {
        lVar3 = *plVar11;
        lVar4 = *(longlong *)(param_1 + 0x18);
        if (lVar3 != 0) {
          *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        }
        lVar5 = *(longlong *)(lVar4 + uVar12);
        if (lVar5 != 0) {
          piVar1 = (int *)(lVar5 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        *(longlong *)(lVar4 + uVar12) = lVar3;
        plVar11 = plVar11 + 4;
        uVar12 = uVar12 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return;
}



// FUNCTION 143636dd0 FUN_143636dd0 body=320 status=ok
// SIG undefined FUN_143636dd0(void)

void FUN_143636dd0(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_38 [2];
  longlong local_30;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_38,0x466,uVar4);
    FUN_1435cbdf0(uVar4,uVar3);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar7 = uVar5;
    if (param_2 != 0) {
      do {
        uVar4 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar7 * 0x20 + param_3);
        cVar2 = FUN_1435b5020(param_4,uVar4);
        if (cVar2 == '\0') {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = FUN_1435c8e40(local_38,0x40a,uVar4);
          FUN_1435cbe70(uVar4,uVar3);
          piVar1 = (int *)(local_30 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < param_2);
    }
    local_38[0] = 0;
    local_30 = 0;
    FUN_143634e70(param_1 + 0x18,0,param_2,local_38);
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    if (param_2 != 0) {
      do {
        FUN_1436368c0(param_1,uVar5,param_3);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        param_3 = param_3 + 0x20;
      } while (uVar6 < param_2);
    }
  }
  return;
}



// FUNCTION 143636f10 FUN_143636f10 body=112 status=ok
// SIG undefined FUN_143636f10(void)

void FUN_143636f10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b0b8)(DAT_146b7b0c0 + lVar2,local_18);
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



// FUNCTION 143636f80 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143636fb0 FUN_143636fb0 body=239 status=ok
// SIG undefined FUN_143636fb0(void)

undefined8 * FUN_143636fb0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4fbf0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b4fbf0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
    puVar5[10] = "browserInvoke";
  }
  return param_1;
}



// FUNCTION 1436370b0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "browserInvoke";
  return param_1;
}



// FUNCTION 1436370f0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143637120 FUN_143637120 body=261 status=ok
// SIG undefined FUN_143637120(void)

undefined8 * FUN_143637120(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4f350);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b4f350);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b50810;
    puVar5[0xb] = "proxy";
    puVar5[0xc] = "drmAuthenticate";
  }
  return param_1;
}



// FUNCTION 143637230 FUN_143637230 body=66 status=ok
// SIG undefined FUN_143637230(void)

undefined8 * FUN_143637230(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b50810;
  param_1[0xb] = "proxy";
  param_1[0xc] = "drmAuthenticate";
  return param_1;
}



// FUNCTION 143637280 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436372b0 FUN_1436372b0 body=239 status=ok
// SIG undefined FUN_1436372b0(void)

undefined8 * FUN_1436372b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4faa0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_14351ee50(lVar3,param_2,&PTR_DAT_145b4faa0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
    puVar5[10] = "drmError";
  }
  return param_1;
}



// FUNCTION 1436373b0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "drmError";
  return param_1;
}



// FUNCTION 1436373f0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143637420 FUN_143637420 body=239 status=ok
// SIG undefined FUN_143637420(void)

undefined8 * FUN_143637420(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4fc50);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b4fc50);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
    puVar5[10] = "drmStatus";
  }
  return param_1;
}



// FUNCTION 143637520 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "drmStatus";
  return param_1;
}



// FUNCTION 143637560 FUN_143637560 body=41 status=ok
// SIG undefined FUN_143637560(void)

undefined8 * FUN_143637560(undefined8 *param_1)

{
  FUN_143517270();
  *param_1 = &PTR_ForEachChild_GC_145b50850;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 143637590 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b50928;
  return param_1;
}



// FUNCTION 1436375c0 FUN_1436375c0 body=172 status=ok
// SIG undefined FUN_1436375c0(void)

void FUN_1436375c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143517270(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b50850;
    puVar1[0xc] = 0;
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



// FUNCTION 143637680 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436376b0 FUN_1436376b0 body=249 status=ok
// SIG undefined FUN_1436376b0(void)

undefined8 * FUN_1436376b0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b50040);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b50040);
    *puVar3 = &PTR_FUN_145b50928;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = "directoryListing";
    puVar3[0xb] = "selectMultiple";
  }
  return param_1;
}



// FUNCTION 1436377b0 FUN_1436377b0 body=55 status=ok
// SIG undefined FUN_1436377b0(void)

undefined8 * FUN_1436377b0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "directoryListing";
  param_1[0xb] = "selectMultiple";
  return param_1;
}



// FUNCTION 1436377f0 FUN_1436377f0 body=49 status=ok
// SIG undefined FUN_1436377f0(void)

undefined8 * FUN_1436377f0(undefined8 *param_1)

{
  FUN_143517270();
  *param_1 = &PTR_ForEachChild_GC_145b509c8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 143637830 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b50aa0;
  return param_1;
}



// FUNCTION 143637860 FUN_143637860 body=182 status=ok
// SIG undefined FUN_143637860(void)

void FUN_143637860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143517270(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b509c8;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
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



// FUNCTION 143637920 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143637950 FUN_143637950 body=242 status=ok
// SIG undefined FUN_143637950(void)

undefined8 * FUN_143637950(undefined8 *param_1,longlong param_2)

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
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b4fbc0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b4fbc0);
    *puVar3 = &PTR_FUN_145b50aa0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b50b18;
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar3[0xb] = 0;
  }
  return param_1;
}



// FUNCTION 143637a50 FUN_143637a50 body=42 status=ok
// SIG undefined FUN_143637a50(void)

undefined8 * FUN_143637a50(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b50b18;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 143637a80 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143637ab0 FUN_143637ab0 body=239 status=ok
// SIG undefined FUN_143637ab0(void)

undefined8 * FUN_143637ab0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4f458);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b4f458);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
    puVar5[10] = "invoke";
  }
  return param_1;
}



// FUNCTION 143637bb0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "invoke";
  return param_1;
}



// FUNCTION 143637bf0 FUN_143637bf0 body=85 status=ok
// SIG undefined FUN_143637bf0(void)

undefined8 * FUN_143637bf0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_14351fed0();
  *param_1 = &PTR_ForEachChild_GC_145b50bf8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0x13] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143637c50 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b50cd0;
  return param_1;
}



// FUNCTION 143637c80 FUN_143637c80 body=219 status=ok
// SIG undefined FUN_143637c80(void)

void FUN_143637c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_14351fed0(puVar3);
    *puVar3 = &PTR_ForEachChild_GC_145b50bf8;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[0x13] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 143637d70 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143637da0 FUN_143637da0 body=215 status=ok
// SIG undefined FUN_143637da0(void)

undefined8 * FUN_143637da0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b50340);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b50340);
    *puVar2 = &PTR_FUN_145b50cd0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x88,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_events::NativeDragEvent::NativeDragEvent(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143637e80 NativeDragEvent body=113 status=ok
// SIG undefined NativeDragEvent(void)

undefined8 *
Scaleform::GFx::AS3::Classes::fl_events::NativeDragEvent::NativeDragEvent(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b3b190;
  param_1[10] = "nativeDragComplete";
  param_1[0xb] = "nativeDragDrop";
  param_1[0xc] = "nativeDragEnter";
  param_1[0xd] = "nativeDragExit";
  param_1[0xe] = "nativeDragOver";
  param_1[0xf] = "nativeDragStart";
  param_1[0x10] = "nativeDragUpdate";
  return param_1;
}



// FUNCTION 143637f00 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143637f30 FUN_143637f30 body=272 status=ok
// SIG undefined FUN_143637f30(void)

undefined8 * FUN_143637f30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4fcc8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b4fcc8);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = &DAT_145b50dc4;
    puVar5[0xb] = "moving";
    puVar5[0xc] = "resize";
    puVar5[0xd] = "resizing";
  }
  return param_1;
}



// FUNCTION 143638050 FUN_143638050 body=77 status=ok
// SIG undefined FUN_143638050(void)

undefined8 * FUN_143638050(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = &DAT_145b50dc4;
  param_1[0xb] = "moving";
  param_1[0xc] = "resize";
  param_1[0xd] = "resizing";
  return param_1;
}



// FUNCTION 1436380b0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436380e0 FUN_1436380e0 body=250 status=ok
// SIG undefined FUN_1436380e0(void)

undefined8 * FUN_1436380e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b501f0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b501f0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "displayStateChange";
    puVar5[0xb] = "displayStateChanging";
  }
  return param_1;
}



// FUNCTION 1436381e0 FUN_1436381e0 body=55 status=ok
// SIG undefined FUN_1436381e0(void)

undefined8 * FUN_1436381e0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "displayStateChange";
  param_1[0xb] = "displayStateChanging";
  return param_1;
}



// FUNCTION 143638220 UFMODSnapshotReverb body=43 status=ok
// SIG undefined UFMODSnapshotReverb(void)

undefined8 * UFMODSnapshotReverb::UFMODSnapshotReverb(undefined8 *param_1)

{
  FUN_143517270();
  *param_1 = &PTR_ForEachChild_GC_145b50e18;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 143638270 Clone body=54 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_events::ProgressEvent::Clone(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_143517380();
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  return param_2;
}



// FUNCTION 1436382b0 FUN_1436382b0 body=126 status=ok
// SIG undefined FUN_1436382b0(void)

void FUN_1436382b0(longlong param_1,uint param_2,longlong param_3)

{
  undefined1 local_res10 [8];
  uint local_res20 [2];
  
  if (param_2 != 4) {
    if ((param_2 != 5) && (param_2 < 4)) goto LAB_143638311;
    FUN_143590eb0(param_3 + 0x80,local_res10,local_res20);
    *(ulonglong *)(param_1 + 0x68) = (ulonglong)local_res20[0];
  }
  FUN_143590eb0(param_3 + 0x60,local_res10,local_res20);
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)local_res20[0];
LAB_143638311:
  FUN_143517f40(param_1,param_2,param_3);
  return;
}



// FUNCTION 143638420 FUN_143638420 body=75 status=ok
// SIG undefined FUN_143638420(void)

void FUN_143638420(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143638480 FUN_143638480 body=669 status=ok
// SIG undefined FUN_143638480(void)

void FUN_143638480(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_118 [2];
  undefined8 local_110;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_118[0] = 0;
  local_110 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),
                             "OutputProgressEvent",0x13);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 7;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bytesLoaded",0xb)
  ;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bytesTotal",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_118,7,local_f8);
  FUN_1435911f0(local_118,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_118[0] & 0x1f)) {
    if ((local_118[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_118);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143638730 FUN_143638730 body=85 status=ok
// SIG undefined FUN_143638730(void)

undefined8 * FUN_143638730(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143638790 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b50ef0;
  return param_1;
}



// FUNCTION 1436387c0 FUN_1436387c0 body=176 status=ok
// SIG undefined FUN_1436387c0(void)

void FUN_1436387c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143517270(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b50e18;
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



// FUNCTION 143638880 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436388b0 FUN_1436388b0 body=238 status=ok
// SIG undefined FUN_1436388b0(void)

undefined8 * FUN_1436388b0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b4f3b0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b4f3b0);
    *puVar3 = &PTR_FUN_145b50ef0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "outputProgress";
  }
  return param_1;
}



// FUNCTION 1436389b0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "outputProgress";
  return param_1;
}



// FUNCTION 1436389f0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143638a20 FUN_143638a20 body=215 status=ok
// SIG undefined FUN_143638a20(void)

undefined8 * FUN_143638a20(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b4f968);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b4f968);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143638b00 FUN_143638b00 body=148 status=ok
// SIG undefined FUN_143638b00(void)

void FUN_143638b00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b068)(DAT_146b7b070 + lVar1,local_28);
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



// FUNCTION 143638bd0 FUN_143638bd0 body=148 status=ok
// SIG undefined FUN_143638bd0(void)

void FUN_143638bd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b088)(DAT_146b7b090 + lVar1,local_28);
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



// FUNCTION 143638ca0 FUN_143638ca0 body=175 status=ok
// SIG undefined FUN_143638ca0(void)

void FUN_143638ca0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b0a8)((longlong)DAT_146b7b0b0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143638d50 FUN_143638d50 body=119 status=ok
// SIG undefined FUN_143638d50(void)

void FUN_143638d50(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x80);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x80) = uVar1 - 1;
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x60) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x60) >> 9 & 1) != 0) {
      FUN_143592150();
      FUN_1435172f0(param_1);
      return;
    }
    FUN_1435920c0(param_1 + 0x60);
  }
  FUN_1435172f0(param_1);
  return;
}



// FUNCTION 143638dd0 FUN_143638dd0 body=195 status=ok
// SIG undefined FUN_143638dd0(void)

void FUN_143638dd0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x90);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x90) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x88);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x88) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x68) = uVar2 - 1;
      FUN_1435172f0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435172f0(param_1);
  return;
}



// FUNCTION 143638ea0 FUN_143638ea0 body=136 status=ok
// SIG undefined FUN_143638ea0(void)

longlong FUN_143638ea0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = uVar1 - 1;
    }
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143638f30 FUN_143638f30 body=132 status=ok
// SIG undefined FUN_143638f30(void)

longlong FUN_143638f30(longlong param_1,ulonglong param_2)

{
  if (9 < ((byte)*(uint *)(param_1 + 0x50) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x50) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x50);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_1435b38e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143638fc0 FUN_143638fc0 body=89 status=ok
// SIG undefined FUN_143638fc0(void)

undefined8 FUN_143638fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_143638d50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 143639020 FUN_143639020 body=89 status=ok
// SIG undefined FUN_143639020(void)

undefined8 FUN_143639020(undefined8 param_1,ulonglong param_2)

{
  FUN_143638dd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143639080 FUN_143639080 body=175 status=ok
// SIG undefined FUN_143639080(void)

void FUN_143639080(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b0c8)((longlong)DAT_146b7b0d0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436391a0 FUN_1436391a0 body=89 status=ok
// SIG undefined FUN_1436391a0(void)

undefined8 * FUN_1436391a0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b51160;
  lVar2 = **(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x10);
  param_1[0x10] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  lVar2 = **(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x10);
  param_1[0x11] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143639200 FUN_143639200 body=195 status=ok
// SIG undefined FUN_143639200(void)

void FUN_143639200(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar2 = param_1[8];
  *param_1 = &PTR_FUN_145b51160;
  local_28[0] = 0;
  local_20 = 0;
  lVar3 = *(longlong *)(lVar2 + 0x300);
  if (lVar3 != 0) {
    FUN_1435f2540(lVar3,param_1);
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x300) + 0x10);
  if (lVar2 != 0) {
    FUN_1432ecab0(lVar2,*(undefined8 *)param_1[0x10],*(undefined8 *)param_1[0x11]);
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(param_1[0x11] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(param_1[0x10] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435196e0(param_1);
  return;
}



// FUNCTION 1436392d0 FUN_1436392d0 body=189 status=ok
// SIG undefined FUN_1436392d0(void)

void FUN_1436392d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    lVar2 = FUN_1432ecb70(*(longlong *)(lVar1 + 0x10),**(undefined8 **)(param_1 + 0x80),
                          **(undefined8 **)(param_1 + 0x88));
    puVar3 = (undefined4 *)operator_new(0x20);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
    }
    if (lVar2 != 0) {
      FUN_1435ee5b0(lVar1,lVar2,puVar3);
    }
    if ((puVar3 != (undefined4 *)0x0) && (((byte)*puVar3 & 0x1f) == 0xc)) {
      FUN_1434f0700(param_2,*(undefined8 *)(puVar3 + 4));
    }
  }
  return;
}



// FUNCTION 1436393a0 FUN_1436393a0 body=176 status=ok
// SIG undefined FUN_1436393a0(void)

void FUN_1436393a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)operator_new(0x30);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = 0xffffffffffffffff;
      puVar3[1] = 0xffffffffffffffff;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
    }
    FUN_1435ee8b0(lVar1,param_3,puVar3);
    FUN_1432ecbe0(lVar2,**(undefined8 **)(param_1 + 0x80),**(undefined8 **)(param_1 + 0x88),puVar3);
  }
  return;
}



// FUNCTION 143639460 FUN_143639460 body=609 status=ok
// SIG undefined FUN_143639460(void)

void FUN_143639460(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *local_res8;
  undefined1 local_res18 [16];
  undefined8 local_218 [60];
  
  uVar8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  local_res8 = (undefined8 *)
               **(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  if (param_3 == 0) {
LAB_143639514:
    puVar5 = local_218;
  }
  else {
    pcVar4 = (char *)FUN_1435911f0(param_4,local_res18,&local_res8);
    if (*pcVar4 == '\0') goto LAB_143639666;
    uVar8 = param_3 - 1;
    if (uVar8 < 0xb) goto LAB_143639514;
    puVar5 = (undefined8 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)uVar8 * 0x30,0);
  }
  if (uVar8 != 0) {
    uVar9 = (ulonglong)uVar8;
    puVar6 = puVar5;
    do {
      param_4 = param_4 + 0x20;
      if (puVar6 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = 0xffffffffffffffff;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 3) = 0;
        puVar6[1] = 0xffffffffffffffff;
        puVar7 = puVar6;
      }
      FUN_1435ee8b0(lVar2,param_4,puVar7);
      puVar6 = puVar6 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)operator_new(0x30);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0xffffffffffffffff;
    puVar6[1] = 0xffffffffffffffff;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
  }
  FUN_1432ec9b0(uVar3,**(undefined8 **)(param_1 + 0x80),**(undefined8 **)(param_1 + 0x88),
                *local_res8,uVar8,puVar5,puVar6);
  FUN_1435ee5b0(lVar2,puVar6,param_2);
  if (uVar8 != 0) {
    puVar7 = puVar5 + 2;
    uVar9 = (ulonglong)uVar8;
    do {
      if ((*(uint *)(puVar7 + 1) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,puVar7 + -2,puVar7[2]);
        *puVar7 = 0;
      }
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7 = puVar7 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (10 < uVar8) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
  }
  if (puVar6 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar6 + 3) >> 6 & 1) != 0) {
      (**(code **)(*(longlong *)puVar6[2] + 0x10))((longlong *)puVar6[2],puVar6,puVar6[4]);
      puVar6[2] = 0;
    }
    *(undefined4 *)(puVar6 + 3) = 0;
    FMemory::operator_delete(puVar6,0x30);
  }
LAB_143639666:
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436396d0 FUN_1436396d0 body=89 status=ok
// SIG undefined FUN_1436396d0(void)

void FUN_1436396d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(lVar1 + 0x300);
  if (lVar2 != 0) {
    FUN_1435f2540(lVar2,param_1);
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  if (lVar1 != 0) {
    FUN_1432ecab0(lVar1,**(undefined8 **)(param_1 + 0x80),**(undefined8 **)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 143639730 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b51230;
  return param_1;
}



// FUNCTION 143639760 FUN_143639760 body=229 status=ok
// SIG undefined FUN_143639760(void)

void FUN_143639760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_143519560(puVar3,param_3);
    *puVar3 = &PTR_FUN_145b51160;
    lVar2 = **(longlong **)(*(longlong *)(puVar3[5] + 0x98) + 0x10);
    puVar3[0x10] = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar2 = **(longlong **)(*(longlong *)(puVar3[5] + 0x98) + 0x10);
    puVar3[0x11] = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 143639850 FUN_143639850 body=33 status=ok
// SIG undefined FUN_143639850(void)

undefined8 * FUN_143639850(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143639880 FUN_143639880 body=227 status=ok
// SIG undefined FUN_143639880(void)

undefined8 * FUN_143639880(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b50fb0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b50fb0);
    *puVar3 = &PTR_FUN_145b51230;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143639970 FUN_143639970 body=33 status=ok
// SIG undefined FUN_143639970(void)

undefined8 * FUN_143639970(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1436399a0 FUN_1436399a0 body=364 status=ok
// SIG undefined FUN_1436399a0(void)

void FUN_1436399a0(longlong param_1,ulonglong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar5 = FUN_1435f2450(*(undefined8 *)(lVar2 + 0x300),param_3,param_4);
  if (lVar5 == -1) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
    puVar6 = (undefined8 *)FUN_1435b5bc0(uVar3);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_143519560(puVar6,uVar3);
      *puVar6 = &PTR_FUN_145b51160;
      lVar5 = **(longlong **)(*(longlong *)(puVar6[5] + 0x98) + 0x10);
      puVar6[0x10] = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = **(longlong **)(*(longlong *)(puVar6[5] + 0x98) + 0x10);
      puVar6[0x11] = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    lVar5 = *param_3;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(puVar6[0x10] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar6[0x10] = lVar5;
    puVar4 = (undefined8 *)*param_4;
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
    piVar1 = (int *)(puVar6[0x11] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar6[0x11] = puVar4;
    FUN_1432ecb10(*(undefined8 *)(*(longlong *)(lVar2 + 0x300) + 0x10),*(undefined8 *)puVar6[0x10],
                  *puVar4);
    FUN_1435f2320(*(undefined8 *)(lVar2 + 0x300),puVar6);
    puVar4 = (undefined8 *)*param_2;
    if (puVar6 != puVar4) {
      if (puVar4 != (undefined8 *)0x0) {
        if (((ulonglong)puVar4 & 1) == 0) {
          if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar4 - 1;
        }
      }
      *param_2 = (ulonglong)puVar6;
    }
  }
  return;
}



// FUNCTION 143639b20 FUN_143639b20 body=193 status=ok
// SIG undefined FUN_143639b20(void)

void FUN_143639b20(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong local_res8;
  
  uVar3 = Scaleform::GFx::MovieImpl::GetExtensionDirectory
                    (*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                      0x10),*(undefined8 *)*param_3);
  FUN_1432c2fb0(&local_res8,uVar3);
  lVar4 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),(local_res8 & 0xfffffffffffffffc) + 0xc);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143639bf0 FUN_143639bf0 body=346 status=ok
// SIG undefined FUN_143639bf0(void)

void FUN_143639bf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_28;
  longlong local_20;
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_28 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 4);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0xc);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b108)(DAT_146b7b110 + lVar2,&local_28,&local_20,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143639d50 FUN_143639d50 body=200 status=ok
// SIG undefined FUN_143639d50(void)

void FUN_143639d50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b118)(DAT_146b7b120 + lVar2,&local_18,local_10);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 143639e20 FUN_143639e20 body=89 status=ok
// SIG undefined FUN_143639e20(void)

undefined8 FUN_143639e20(undefined8 param_1,ulonglong param_2)

{
  FUN_143639200();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143639e80 FUN_143639e80 body=33 status=ok
// SIG undefined FUN_143639e80(void)

undefined8 * FUN_143639e80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143639eb0 FUN_143639eb0 body=215 status=ok
// SIG undefined FUN_143639eb0(void)

undefined8 * FUN_143639eb0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b51398);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b51398);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143639f90 FUN_143639f90 body=33 status=ok
// SIG undefined FUN_143639f90(void)

undefined8 * FUN_143639f90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143639fc0 FUN_143639fc0 body=261 status=ok
// SIG undefined FUN_143639fc0(void)

undefined8 * FUN_143639fc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b51488);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b51488);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "never";
    puVar5[0xb] = "validIdentity";
    puVar5[0xc] = "validOrUnknownIdentity";
  }
  return param_1;
}



// FUNCTION 14363a0d0 FUN_14363a0d0 body=66 status=ok
// SIG undefined FUN_14363a0d0(void)

undefined8 * FUN_14363a0d0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "never";
  param_1[0xb] = "validIdentity";
  param_1[0xc] = "validOrUnknownIdentity";
  return param_1;
}



// FUNCTION 14363a120 FUN_14363a120 body=33 status=ok
// SIG undefined FUN_14363a120(void)

undefined8 * FUN_14363a120(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363a150 FUN_14363a150 body=276 status=ok
// SIG undefined FUN_14363a150(void)

undefined8 * FUN_14363a150(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b51810);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b51810);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xd0,0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b51bc0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[0xb] = 0;
    *(undefined4 *)(puVar5 + 0xe) = 0;
    puVar5[0xf] = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    puVar5[0x13] = 0;
    *(undefined4 *)(puVar5 + 0x16) = 0;
    puVar5[0x17] = 0;
  }
  return param_1;
}



// FUNCTION 14363a270 FUN_14363a270 body=75 status=ok
// SIG undefined FUN_14363a270(void)

undefined8 * FUN_14363a270(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b51bc0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14363a2d0 FUN_14363a2d0 body=33 status=ok
// SIG undefined FUN_14363a2d0(void)

undefined8 * FUN_14363a2d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363a300 FUN_14363a300 body=261 status=ok
// SIG undefined FUN_14363a300(void)

undefined8 * FUN_14363a300(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b518d0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b518d0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "invalid";
    puVar5[0xb] = &DAT_145af3922;
    puVar5[0xc] = "valid";
  }
  return param_1;
}



// FUNCTION 14363a410 FUN_14363a410 body=66 status=ok
// SIG undefined FUN_14363a410(void)

undefined8 * FUN_14363a410(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "invalid";
  param_1[0xb] = &DAT_145af3922;
  param_1[0xc] = "valid";
  return param_1;
}



// FUNCTION 14363a460 FUN_14363a460 body=33 status=ok
// SIG undefined FUN_14363a460(void)

undefined8 * FUN_14363a460(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363a490 FUN_14363a490 body=261 status=ok
// SIG undefined FUN_14363a490(void)

undefined8 * FUN_14363a490(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b512f0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b512f0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "codeSigning";
    puVar5[0xb] = "playlistSigning";
    puVar5[0xc] = "signing";
  }
  return param_1;
}



// FUNCTION 14363a5a0 FUN_14363a5a0 body=66 status=ok
// SIG undefined FUN_14363a5a0(void)

undefined8 * FUN_14363a5a0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "codeSigning";
  param_1[0xb] = "playlistSigning";
  param_1[0xc] = "signing";
  return param_1;
}



// FUNCTION 14363a5f0 FUN_14363a5f0 body=33 status=ok
// SIG undefined FUN_14363a5f0(void)

undefined8 * FUN_14363a5f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363a620 FUN_14363a620 body=215 status=ok
// SIG undefined FUN_14363a620(void)

undefined8 * FUN_14363a620(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b513f8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b513f8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363a700 FUN_14363a700 body=181 status=ok
// SIG undefined FUN_14363a700(void)

void FUN_14363a700(longlong param_1)

{
  if (9 < ((byte)*(uint *)(param_1 + 0xb0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0xb0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x90) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x90) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x70) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x70) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x70);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x50) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x50) >> 9 & 1) != 0) {
      FUN_143592150();
      FUN_1435b38e0(param_1);
      return;
    }
    FUN_1435920c0(param_1 + 0x50);
  }
  FUN_1435b38e0(param_1);
  return;
}



// FUNCTION 14363a7c0 FUN_14363a7c0 body=89 status=ok
// SIG undefined FUN_14363a7c0(void)

undefined8 FUN_14363a7c0(undefined8 param_1,ulonglong param_2)

{
  FUN_14363a700();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14363a820 FUN_14363a820 body=33 status=ok
// SIG undefined FUN_14363a820(void)

undefined8 * FUN_14363a820(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b17510;
  return param_1;
}



// FUNCTION 14363a850 FUN_14363a850 body=358 status=ok
// SIG undefined FUN_14363a850(void)

void FUN_14363a850(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  RefCountImpl *this;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong local_res8;
  uint local_38 [8];
  
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  puVar6 = (ulonglong *)FUN_1435ca860(lVar9,&local_res8);
  uVar3 = *param_2;
  uVar4 = *puVar6;
  if (uVar4 != uVar3) {
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
    *param_2 = uVar4;
  }
  lVar9 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x300) + 0x10) + 0x50) + 0x28);
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))(lVar9 + 0x10,0x19);
  uVar5 = (**(code **)(*(longlong *)this + 0x10))(this);
  Scaleform::RefCountImpl::Release(this);
  puVar8 = &DAT_1467dbae0;
  uVar2 = DAT_1467dbae0;
  while (uVar2 != 0) {
    if ((*puVar8 & uVar5) != 0) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(*(longlong *)(puVar8 + 2) + lVar9) != '\0');
      local_res8 = FUN_143360950(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                  0x218),*(longlong *)(puVar8 + 2),lVar9,0);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      uVar3 = *param_2;
      uVar7 = Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
      FUN_1434b49b0(uVar3 + 0x40,uVar7);
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
    }
    puVar8 = puVar8 + 4;
    uVar2 = *puVar8;
  }
  return;
}



// FUNCTION 14363a9c0 FUN_14363a9c0 body=77 status=ok
// SIG undefined FUN_14363a9c0(void)

void FUN_14363a9c0(longlong param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10) +
             0x50) + 0x28);
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar1 + 0x10) + 0x18))(lVar1 + 0x10,0x19);
  (**(code **)(*(longlong *)this + 0x40))(this);
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 14363aa20 FUN_14363aa20 body=179 status=ok
// SIG undefined FUN_14363aa20(void)

void FUN_14363aa20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  RefCountImpl *this;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10) +
             0x50) + 0x28);
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))(lVar3 + 0x10,0x19);
  piVar6 = &DAT_1467dbae0;
  iVar5 = DAT_1467dbae0;
  do {
    if (iVar5 == 0) {
      iVar5 = 0;
LAB_14363aab3:
      (**(code **)(*(longlong *)this + 0x48))(this,iVar5);
      Scaleform::RefCountImpl::Release(this);
      return;
    }
    pcVar4 = *(char **)*param_3;
    do {
      cVar1 = *pcVar4;
      cVar2 = pcVar4[*(longlong *)(piVar6 + 2) - (longlong)*(char **)*param_3];
      if (cVar1 != cVar2) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      iVar5 = *piVar6;
      goto LAB_14363aab3;
    }
    piVar6 = piVar6 + 4;
    iVar5 = *piVar6;
  } while( true );
}



// FUNCTION 14363aae0 FUN_14363aae0 body=380 status=ok
// SIG undefined FUN_14363aae0(void)

void FUN_14363aae0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  RefCountImpl *this;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  longlong local_res8;
  ulonglong local_res18;
  
  piVar9 = &DAT_1467dbae0;
  if (DAT_1467dbae0 == 0) {
    return;
  }
  do {
    pcVar5 = *(char **)*param_3;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[*(longlong *)(piVar9 + 2) - (longlong)*(char **)*param_3];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if ((1 < *piVar9 - 1U) && (*piVar9 != 0x20)) {
        return;
      }
      lVar3 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                   0x10) + 0x50) + 0x28);
      this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))(lVar3 + 0x10,0x19);
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)this + 0x20))(this);
      puVar8 = &DAT_145af7bc0;
      if ((undefined2 *)*puVar6 != (undefined2 *)0x0) {
        puVar8 = (undefined2 *)*puVar6;
      }
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
      puVar7 = (ulonglong *)FUN_1432c3480(&local_res18,puVar8);
      local_res8 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                 (longlong)(*puVar7 & 0xfffffffffffffffc) + 0xc,
                                 *(ulonglong *)(*puVar7 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
      }
      Scaleform::RefCountImpl::Release(this);
      FUN_143590250(param_2,&local_res8);
      piVar9 = (int *)(local_res8 + 0x18);
      *piVar9 = *piVar9 + -1;
      if (*piVar9 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    piVar9 = piVar9 + 4;
    if (*piVar9 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 14363ac70 FUN_14363ac70 body=186 status=ok
// SIG undefined FUN_14363ac70(void)

void FUN_14363ac70(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  RefCountImpl *this;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  
  lVar3 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10) +
             0x50) + 0x28);
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))(lVar3 + 0x10,0x19);
  piVar7 = &DAT_1467dbae0;
  iVar6 = DAT_1467dbae0;
  do {
    if (iVar6 == 0) {
      iVar6 = 0;
LAB_14363ad03:
      uVar4 = (**(code **)(*(longlong *)this + 0x18))(this,iVar6);
      *param_2 = uVar4;
      Scaleform::RefCountImpl::Release(this);
      return;
    }
    pcVar5 = *(char **)*param_3;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[*(longlong *)(piVar7 + 2) - (longlong)*(char **)*param_3];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      iVar6 = *piVar7;
      goto LAB_14363ad03;
    }
    piVar7 = piVar7 + 4;
    iVar6 = *piVar7;
  } while( true );
}



// FUNCTION 14363ad30 FUN_14363ad30 body=336 status=ok
// SIG undefined FUN_14363ad30(void)

void FUN_14363ad30(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  char *pcVar6;
  RefCountImpl *this;
  undefined8 uVar7;
  int *piVar8;
  ulonglong local_res8;
  
  *param_2 = 0;
  piVar8 = &DAT_1467dbae0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (DAT_1467dbae0 == 0) {
    return;
  }
  do {
    pcVar6 = *(char **)*param_3;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[*(longlong *)(piVar8 + 2) - (longlong)*(char **)*param_3];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if ((1 < *piVar8 - 1U) && (*piVar8 != 0x20)) {
        return;
      }
      if (((byte)*param_4 & 0x1f) == 10) {
        puVar4 = *(undefined8 **)(param_4 + 4);
        *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
        uVar7 = *puVar4;
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x300) + 0x10) + 0x50) + 0x28);
        this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))(lVar3 + 0x10,0x19);
        uVar7 = FUN_1432c2fb0(&local_res8,uVar7);
        FUN_143393070(this,uVar7);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar5 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
        }
        piVar8 = (int *)(puVar4 + 3);
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          FUN_14335f920(puVar4);
        }
      }
      *param_2 = 1;
      return;
    }
    piVar8 = piVar8 + 4;
    if (*piVar8 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 14363aec0 FUN_14363aec0 body=30 status=ok
// SIG undefined FUN_14363aec0(void)

undefined8 * FUN_14363aec0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14363a850();
  return param_2;
}



// FUNCTION 14363aef0 FUN_14363aef0 body=33 status=ok
// SIG undefined FUN_14363aef0(void)

undefined8 * FUN_14363aef0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b53388;
  return param_1;
}



// FUNCTION 14363af20 FUN_14363af20 body=173 status=ok
// SIG undefined FUN_14363af20(void)

void FUN_14363af20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b17510;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 14363afe0 FUN_14363afe0 body=33 status=ok
// SIG undefined FUN_14363afe0(void)

undefined8 * FUN_14363afe0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b010 FUN_14363b010 body=227 status=ok
// SIG undefined FUN_14363b010(void)

undefined8 * FUN_14363b010(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b52770);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b52770);
    *puVar3 = &PTR_FUN_145b53388;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14363b100 FUN_14363b100 body=33 status=ok
// SIG undefined FUN_14363b100(void)

undefined8 * FUN_14363b100(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14363b130 FUN_14363b130 body=175 status=ok
// SIG undefined FUN_14363b130(void)

void FUN_14363b130(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char local_res8 [8];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  puVar1 = (ulonglong *)(lVar2 + 0x3f0);
  if ((*puVar1 == 0) &&
     (FUN_1435ccdc0(lVar2,local_res8,puVar1,"flash.desktop.Clipboard",0,0), local_res8[0] == '\0'))
  {
    return;
  }
  if (puVar1 != param_2) {
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) != 0) {
        *param_2 = uVar3 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14363b1f0 FUN_14363b1f0 body=33 status=ok
// SIG undefined FUN_14363b1f0(void)

undefined8 * FUN_14363b1f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b220 FUN_14363b220 body=295 status=ok
// SIG undefined FUN_14363b220(void)

undefined8 * FUN_14363b220(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52680);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b52680);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x80,0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b39568;
    puVar5[10] = "air:bitmap";
    puVar5[0xb] = "air:file list";
    puVar5[0xc] = "air:file promise list";
    puVar5[0xd] = "air:html";
    puVar5[0xe] = "air:text";
    puVar5[0xf] = "air:url";
  }
  return param_1;
}



// FUNCTION 14363b350 FUN_14363b350 body=99 status=ok
// SIG undefined FUN_14363b350(void)

undefined8 * FUN_14363b350(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b39568;
  param_1[10] = "air:bitmap";
  param_1[0xb] = "air:file list";
  param_1[0xc] = "air:file promise list";
  param_1[0xd] = "air:html";
  param_1[0xe] = "air:text";
  param_1[0xf] = "air:url";
  return param_1;
}



// FUNCTION 14363b3c0 FUN_14363b3c0 body=33 status=ok
// SIG undefined FUN_14363b3c0(void)

undefined8 * FUN_14363b3c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b3f0 FUN_14363b3f0 body=272 status=ok
// SIG undefined FUN_14363b3f0(void)

undefined8 * FUN_14363b3f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52b28);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b52b28);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "cloneOnly";
    puVar5[0xb] = "clonePreferred";
    puVar5[0xc] = "originalOnly";
    puVar5[0xd] = "originalPreferred";
  }
  return param_1;
}



// FUNCTION 14363b510 FUN_14363b510 body=77 status=ok
// SIG undefined FUN_14363b510(void)

undefined8 * FUN_14363b510(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "cloneOnly";
  param_1[0xb] = "clonePreferred";
  param_1[0xc] = "originalOnly";
  param_1[0xd] = "originalPreferred";
  return param_1;
}



// FUNCTION 14363b570 FUN_14363b570 body=33 status=ok
// SIG undefined FUN_14363b570(void)

undefined8 * FUN_14363b570(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b5a0 FUN_14363b5a0 body=215 status=ok
// SIG undefined FUN_14363b5a0(void)

undefined8 * FUN_14363b5a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52c80);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b52c80);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363b680 FUN_14363b680 body=33 status=ok
// SIG undefined FUN_14363b680(void)

undefined8 * FUN_14363b680(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b6b0 FUN_14363b6b0 body=215 status=ok
// SIG undefined FUN_14363b6b0(void)

undefined8 * FUN_14363b6b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52f10);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b52f10);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363b790 FUN_14363b790 body=33 status=ok
// SIG undefined FUN_14363b790(void)

undefined8 * FUN_14363b790(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b7c0 FUN_14363b7c0 body=215 status=ok
// SIG undefined FUN_14363b7c0(void)

undefined8 * FUN_14363b7c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b51e30);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b51e30);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363b8a0 FUN_14363b8a0 body=33 status=ok
// SIG undefined FUN_14363b8a0(void)

undefined8 * FUN_14363b8a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b8d0 FUN_14363b8d0 body=215 status=ok
// SIG undefined FUN_14363b8d0(void)

undefined8 * FUN_14363b8d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b51ff0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b51ff0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363b9b0 FUN_14363b9b0 body=33 status=ok
// SIG undefined FUN_14363b9b0(void)

undefined8 * FUN_14363b9b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363b9e0 FUN_14363b9e0 body=272 status=ok
// SIG undefined FUN_14363b9e0(void)

undefined8 * FUN_14363b9e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b525c0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b525c0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = &DAT_145b17104;
    puVar5[0xb] = &DAT_145b2e1c8;
    puVar5[0xc] = &DAT_145b50dc4;
    puVar5[0xd] = &DAT_145b122f4;
  }
  return param_1;
}



// FUNCTION 14363bb00 FUN_14363bb00 body=77 status=ok
// SIG undefined FUN_14363bb00(void)

undefined8 * FUN_14363bb00(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = &DAT_145b17104;
  param_1[0xb] = &DAT_145b2e1c8;
  param_1[0xc] = &DAT_145b50dc4;
  param_1[0xd] = &DAT_145b122f4;
  return param_1;
}


